__int64 __fastcall sub_70F270(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  _QWORD *v10; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 result; // rax
  __int64 v14; // rdx
  double v15; // xmm4_8
  double v16; // xmm5_8
  unsigned __int64 v17; // rsi
  _QWORD v18[4]; // [rsp+8h] [rbp-20h] BYREF

  v18[0] = a2;
  v10 = (_QWORD *)sub_F22F70(v18);
  if ( v10 )
    return sub_70F1F0(a1, *v10 & 0xFFFFFFFFFFFFFFF8LL, a3, a4, a5, a6, v11, v12, a9, a10);
  v14 = sub_F22F50(v18);
  result = 1;
  if ( v14 )
  {
    v17 = *(_QWORD *)(v14 + 8);
    if ( v17 > 7 )
      return sub_70F1F0(a1, v17 & 0xFFFFFFFFFFFFFFF8LL, a3, a4, a5, a6, v15, v16, a9, a10);
  }
  return result;
}
