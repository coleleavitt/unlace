unsigned __int64 __fastcall sub_1ECE620(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __m128 v4; // [rsp+0h] [rbp-18h] BYREF

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v1 = a1 + 8;
    v2 = 80;
  }
  else
  {
    v1 = *(_QWORD *)(a1 + 8);
    v2 = 40LL * *(unsigned int *)(a1 + 16);
  }
  sub_1ECE5B0(&v4, (_QWORD *)(v2 + v1), (_QWORD *)(v2 + v1), a1, 1);
  return v4.m128_u64[0];
}
