unsigned __int64 __fastcall sub_D88BF0(__int64 a1)
{
  int *v1; // rsi
  __m128 v3; // [rsp+0h] [rbp-18h] BYREF

  v1 = (int *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16));
  sub_D88B90(&v3, v1, v1, a1, 1);
  return v3.m128_u64[0];
}
