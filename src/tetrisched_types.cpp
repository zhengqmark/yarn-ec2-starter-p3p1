/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "tetrisched_types.h"

#include <algorithm>

namespace alsched {

int _kjob_tValues[] = {
  job_t::JOB_MPI,
  job_t::JOB_HDFS,
  job_t::JOB_GPU,
  job_t::JOB_WEB,
  job_t::JOB_AVAIL,
  job_t::JOB_NONE,
  job_t::JOB_UNKNOWN,
  job_t::JOB_MAX
};
const char* _kjob_tNames[] = {
  "JOB_MPI",
  "JOB_HDFS",
  "JOB_GPU",
  "JOB_WEB",
  "JOB_AVAIL",
  "JOB_NONE",
  "JOB_UNKNOWN",
  "JOB_MAX"
};
const std::map<int, const char*> _job_t_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(8, _kjob_tValues, _kjob_tNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

} // namespace
