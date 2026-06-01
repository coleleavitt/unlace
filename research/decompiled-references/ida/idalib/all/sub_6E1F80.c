__int64 __fastcall sub_6E1F80(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  double v12; // xmm4_8
  double v13; // xmm5_8

  if ( *(char *)(a3 + 28) < 0 )
    return 1;
  if ( (unsigned __int8)sub_B8E180(a3 + 64) )
    return 1;
  return sub_6E0A20(a1, a2, a3, a4, a5, a6, a7, v12, v13, a10, a11);
}
