__int64 __fastcall sub_2221E60(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rsi
  __int64 v5; // r12
  signed __int64 v6; // rbp
  signed __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD v10[2]; // [rsp+0h] [rbp-38h] BYREF
  struct timespec requested_time; // [rsp+10h] [rbp-28h] BYREF

  v1 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
  v2 = a1[2];
  v3 = 0;
  if ( v1 < v2 )
  {
    v4 = a1[1];
    v5 = *a1 * a1[628];
    v10[0] = *a1;
    if ( v5 > v4 )
      v5 = v4;
    v6 = v2 - v1;
    v10[1] = v5;
    v7 = sub_2221D70((__int64)v10, (std::random_device *)(a1 + 3), v10);
    v8 = v6;
    if ( v7 <= v6 )
      v8 = v7;
    if ( a1[1] > v5 )
      a1[628] *= 2LL;
    if ( v8 > 0 )
    {
      requested_time.tv_sec = v8 / 1000000000;
      requested_time.tv_nsec = v8 % 1000000000;
      while ( nanosleep(&requested_time, &requested_time) == -1 && *__errno_location() == 4 )
        ;
    }
    return 1;
  }
  return v3;
}
