unsigned __int64 __fastcall sub_2097CE0(__int64 a1)
{
  __int64 *v1; // rsi
  __m128 v3; // [rsp+0h] [rbp-18h] BYREF

  v1 = (__int64 *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16));
  sub_2097C80(&v3, v1, v1, a1, 1);
  return v3.m128_u64[0];
}
