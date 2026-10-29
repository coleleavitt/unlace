__int64 __fastcall sub_4A71C0(
        __int64 *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  double v10; // xmm4_8
  double v11; // xmm5_8

  if ( (*(_BYTE *)(a1[299] + 13) & 4) == 0 )
    return 0;
  if ( !sub_4A6DB0(a1, nullptr, 1, a2, a3, a4, a5, a6, a7, a8, a9) )
    return 0;
  sub_4A6B30(a1, (_BYTE *)&qword_60 + 1, 0, (_BYTE *)&qword_60 + 1, 0, 1, a2, a3, a4, a5, v10, v11, a8, a9, 7u);
  return 1;
}
