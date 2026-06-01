int __fastcall ClpModel::setMaximumSeconds(ClpModel *this, double a2)
{
  int result; // eax
  struct rusage usage; // [rsp+8h] [rbp-98h] BYREF

  if ( a2 >= 0.0 )
  {
    result = getrusage(RUSAGE_SELF, &usage);
    *((double *)this + 6) = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001
                          + (double)SLODWORD(usage.ru_utime.tv_sec)
                          + a2;
  }
  else
  {
    *((_QWORD *)this + 6) = 0xBFF0000000000000LL;
    return 0;
  }
  return result;
}

