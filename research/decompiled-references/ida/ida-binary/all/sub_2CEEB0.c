__int64 __fastcall sub_2CEEB0(
        const __m128i *a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  unsigned int v15; // r13d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  double v19; // xmm4_8
  double v20; // xmm5_8

  v15 = a1[67].m128i_u8[8];
  if ( !(_BYTE)v15 || a1[66].m128i_i64[1] == -1 )
    return sub_200310(a1, (const char *)a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  if ( (unsigned __int8)sub_2CD5B0((__int64)a1, 1, a7, a8, a9, a10, a11, a12, a13, a14) )
    sub_200310(a1, (const char *)a2, a3, v16, v17, v18, a7, a8, a9, a10, v19, v20, a13, a14);
  return v15;
}
