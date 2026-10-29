__int64 __fastcall sub_138770(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  double v8; // xmm4_8
  double v9; // xmm5_8
  const char *v10; // r8

  if ( !(unsigned __int8)sub_1380F0() )
    return 1;
  if ( !(_WORD)xmmword_244090 )
    return sub_136B80(0, a1, a2, a3, a4, v8, v9, a7, a8);
  v10 = s1;
  if ( (_QWORD)xmmword_250918 )
    v10 = (const char *)qword_250910;
  return sub_136180(qword_251660, 1, 0xFFFFFFFFLL, (__int64)"Occurrences of binary: %s", v10);
}

