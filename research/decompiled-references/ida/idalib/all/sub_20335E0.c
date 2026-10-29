unsigned __int64 __fastcall sub_20335E0(__int64 a1)
{
  _QWORD *v1; // rsi
  __m128 v3; // [rsp+0h] [rbp-18h] BYREF

  v1 = (_QWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16));
  sub_2033570(&v3, v1, v1, a1, 1);
  return v3.m128_u64[0];
}
