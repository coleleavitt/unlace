__int64 __fastcall sub_2CEF40(
        const __m128i *a1,
        unsigned int a2,
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
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  double v15; // xmm4_8
  double v16; // xmm5_8

  v12 = a1[67].m128i_u8[8];
  if ( !(_BYTE)v12 || a1[66].m128i_i64[1] == -1 )
    return sub_200E10(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( (unsigned __int8)sub_2CD5B0((__int64)a1, 1, a5, a6, a7, a8, a9, a10, a11, a12) )
    sub_200E10(a1, a2, v13, v14, a5, a6, a7, a8, v15, v16, a11, a12);
  return v12;
}
