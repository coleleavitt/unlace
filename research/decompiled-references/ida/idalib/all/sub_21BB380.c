unsigned __int64 __fastcall sub_21BB380(__int64 a1, int a2)
{
  __m128 v3; // [rsp+0h] [rbp-18h] BYREF

  if ( a2 )
    sub_21B97F0(&v3, *(_QWORD *)(a1 + 32) + 80LL * (unsigned int)(a2 - 1), a1);
  else
    sub_21B97F0(&v3, 0, 0);
  return v3.m128_u64[0];
}
