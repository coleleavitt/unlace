unsigned __int64 __fastcall sub_1E7BD90(
        __m128 *a1,
        __m128 *a2,
        const __m128i *a3,
        __int64 a4,
        __m128i a5,
        __m128 a6,
        __m128i a7,
        __m128 a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  __int64 v14; // r15
  double v15; // xmm4_8
  double v16; // xmm5_8
  double v18; // xmm4_8
  double v19; // xmm5_8

  v14 = (a2 - a1 + 1) / 2;
  if ( (a2 - a1 + 1) / 2 <= a4 )
  {
    sub_1E62450(a1, &a1[v14], a3, a5, a6, a7, a8, a9, a10, a11, a12);
    sub_1E62450(&a1[v14], a2, a3, a5, a6, a7, a8, v18, v19, a11, a12);
  }
  else
  {
    sub_1E7BD90(a1, &a1[v14], a3);
    *(double *)a5.m128i_i64 = sub_1E7BD90(&a1[v14], a2, a3);
  }
  return sub_1E7B790(
           (unsigned __int64)a1,
           (unsigned __int64)&a1[v14],
           (__m128i *)a2,
           (v14 * 16) >> 4,
           a2 - &a1[v14],
           a3,
           *(double *)a5.m128i_i64,
           *(double *)a6.m128_u64,
           *(double *)a7.m128i_i64,
           *(double *)a8.m128_u64,
           v15,
           v16,
           a11,
           a12,
           a4);
}
