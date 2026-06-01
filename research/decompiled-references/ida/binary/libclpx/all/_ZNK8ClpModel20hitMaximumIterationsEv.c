bool __fastcall ClpModel::hitMaximumIterations(ClpModel *this)
{
  int v1; // ecx
  int v2; // edx
  bool result; // al
  double v4; // xmm0_8
  double v5; // [rsp+8h] [rbp-B0h]
  struct rusage tv; // [rsp+10h] [rbp-A8h] BYREF

  v1 = *((_DWORD *)this + 77);
  v2 = *((_DWORD *)this + 74);
  result = v1 >= v2;
  if ( *((double *)this + 6) >= 0.0 && v1 < v2 )
  {
    getrusage(RUSAGE_SELF, &tv);
    result = (double)SLODWORD(tv.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(tv.ru_utime.tv_sec) >= *((double *)this + 6);
  }
  if ( *((double *)this + 7) >= 0.0 && !result )
  {
    gettimeofday(&tv.ru_utime, nullptr);
    v4 = (double)SLODWORD(tv.ru_utime.tv_usec) / 1000000.0 + (double)SLODWORD(tv.ru_utime.tv_sec);
    if ( !(_BYTE)`guard variable for'CoinWallclockTime(double)::firstCall )
    {
      v5 = (double)SLODWORD(tv.ru_utime.tv_usec) / 1000000.0 + (double)SLODWORD(tv.ru_utime.tv_sec);
      v4 = v5;
      if ( __cxa_guard_acquire(&`guard variable for'CoinWallclockTime(double)::firstCall) )
      {
        CoinWallclockTime(double)::firstCall = *(_QWORD *)&v5;
        __cxa_guard_release(&`guard variable for'CoinWallclockTime(double)::firstCall);
        v4 = v5;
      }
    }
    return v4 - *(double *)&CoinWallclockTime(double)::firstCall >= *((double *)this + 7);
  }
  return result;
}

