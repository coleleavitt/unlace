__int64 __fastcall sub_2CEE80(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  if ( !a1[67].m128i_i8[8] || a1[66].m128i_i64[1] == -1 )
    return sub_200A10(a1, a5, a6, a7, a8, a9, a10, a11, a12, a2, a3, a4);
  else
    return (*(__int64 (__fastcall **)(const __m128i *))(a1->m128i_i64[0] + 512))(a1);
}
