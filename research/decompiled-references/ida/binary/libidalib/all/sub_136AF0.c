__int64 __fastcall sub_136AF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  double v14; // xmm4_8
  double v15; // xmm5_8

  if ( !(unsigned __int8)sub_136000(a1, a2, a3, a4, a5, a6) )
    return 1;
  if ( !(_WORD)xmmword_2450B0 )
    return sub_135EB0(a7, a8, a9, a10, v14, v15, a13, a14);
  if ( WORD1(xmmword_2450B0) )
    return sub_1366B0(qword_252800, 9, 0xFFFFFFFFLL, (__int64)"Occurrences of notyped number");
  return sub_1366B0(qword_252800, 4, 0xFFFFFFFFLL, (__int64)"Occurrences of value 0x%a", *(double *)a7.m128_u64);
}

