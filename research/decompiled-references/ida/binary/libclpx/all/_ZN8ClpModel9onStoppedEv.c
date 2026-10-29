void __fastcall ClpModel::onStopped(ClpModel *this)
{
  double v1; // xmm1_8
  double v2; // xmm0_8
  double v3; // xmm1_8
  double v4; // [rsp+0h] [rbp-B0h]
  struct rusage usage; // [rsp+8h] [rbp-A8h] BYREF

  if ( *((_DWORD *)this + 80) == 3 )
  {
    *((_DWORD *)this + 81) = 0;
    getrusage(RUSAGE_SELF, &usage);
    v1 = *((double *)this + 6);
    if ( (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec) >= v1
      && v1 >= 0.0 )
    {
      goto LABEL_4;
    }
    gettimeofday(&usage.ru_utime, nullptr);
    v2 = (double)SLODWORD(usage.ru_utime.tv_usec) / 1000000.0 + (double)SLODWORD(usage.ru_utime.tv_sec);
    if ( !(_BYTE)`guard variable for'CoinWallclockTime(double)::firstCall )
    {
      v4 = (double)SLODWORD(usage.ru_utime.tv_usec) / 1000000.0 + (double)SLODWORD(usage.ru_utime.tv_sec);
      v2 = v4;
      if ( __cxa_guard_acquire(&`guard variable for'CoinWallclockTime(double)::firstCall) )
      {
        CoinWallclockTime(double)::firstCall = *(_QWORD *)&v4;
        __cxa_guard_release(&`guard variable for'CoinWallclockTime(double)::firstCall);
        v2 = v4;
      }
    }
    v3 = *((double *)this + 7);
    if ( v2 - *(double *)&CoinWallclockTime(double)::firstCall >= v3 && v3 >= 0.0 )
LABEL_4:
      *((_DWORD *)this + 81) = 9;
  }
}

