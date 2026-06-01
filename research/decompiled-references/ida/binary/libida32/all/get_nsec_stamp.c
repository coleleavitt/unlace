__syscall_slong_t get_nsec_stamp()
{
  struct timespec v1; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  if ( clock_gettime(0, &v1) == -1 )
  {
    if ( !under_debugger )
      interr(10);
    BUG();
  }
  return v1.tv_nsec + 1000000000 * v1.tv_sec;
}

