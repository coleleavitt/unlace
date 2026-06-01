__int64 __fastcall ClpModel::setDblParam(__int64 a1, int a2, double a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  double v5; // xmm1_8
  __int64 result; // rax
  double v7; // [rsp+0h] [rbp-C8h]
  struct rusage tv; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+A8h] [rbp-20h]
  __int64 v10; // [rsp+B0h] [rbp-18h]

  v10 = v4;
  v9 = v3;
  switch ( a2 )
  {
    case 0:
    case 1:
    case 4:
      goto LABEL_4;
    case 2:
    case 3:
    case 7:
      result = 0;
      if ( a3 <= 0.0 )
        return result;
      if ( a3 <= 1.0e10 )
        goto LABEL_4;
      result = 0;
      break;
    case 5:
      if ( a3 < 0.0 )
        goto LABEL_10;
      getrusage(RUSAGE_SELF, &tv);
      a3 = a3 + (double)SLODWORD(tv.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(tv.ru_utime.tv_sec);
      goto LABEL_4;
    case 6:
      if ( a3 >= 0.0 )
      {
        gettimeofday(&tv.ru_utime, nullptr);
        v5 = (double)SLODWORD(tv.ru_utime.tv_usec) / 1000000.0 + (double)SLODWORD(tv.ru_utime.tv_sec);
        if ( !(_BYTE)`guard variable for'CoinWallclockTime(double)::firstCall )
        {
          v7 = (double)SLODWORD(tv.ru_utime.tv_usec) / 1000000.0 + (double)SLODWORD(tv.ru_utime.tv_sec);
          v5 = v7;
          if ( __cxa_guard_acquire(&`guard variable for'CoinWallclockTime(double)::firstCall) )
          {
            CoinWallclockTime(double)::firstCall = *(_QWORD *)&v7;
            __cxa_guard_release(&`guard variable for'CoinWallclockTime(double)::firstCall);
            v5 = v7;
          }
        }
        a3 = a3 + v5 - *(double *)&CoinWallclockTime(double)::firstCall;
      }
      else
      {
LABEL_10:
        a3 = -1.0;
      }
LABEL_4:
      result = 1;
      *(double *)(a1 + 8LL * a2 + 8) = a3;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

