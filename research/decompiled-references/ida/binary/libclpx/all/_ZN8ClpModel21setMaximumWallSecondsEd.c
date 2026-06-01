void __fastcall ClpModel::setMaximumWallSeconds(ClpModel *this, double a2)
{
  double v2; // xmm0_8
  double v4; // [rsp+8h] [rbp-30h]
  struct timeval tv; // [rsp+10h] [rbp-28h] BYREF

  if ( a2 >= 0.0 )
  {
    gettimeofday(&tv, nullptr);
    v2 = (double)SLODWORD(tv.tv_usec) / 1000000.0 + (double)SLODWORD(tv.tv_sec);
    if ( !(_BYTE)`guard variable for'CoinWallclockTime(double)::firstCall )
    {
      v4 = (double)SLODWORD(tv.tv_usec) / 1000000.0 + (double)SLODWORD(tv.tv_sec);
      v2 = v4;
      if ( __cxa_guard_acquire(&`guard variable for'CoinWallclockTime(double)::firstCall) )
      {
        CoinWallclockTime(double)::firstCall = *(_QWORD *)&v4;
        __cxa_guard_release(&`guard variable for'CoinWallclockTime(double)::firstCall);
        v2 = v4;
      }
    }
    *((double *)this + 7) = v2 - *(double *)&CoinWallclockTime(double)::firstCall + a2;
  }
  else
  {
    *((_QWORD *)this + 7) = 0xBFF0000000000000LL;
  }
}

