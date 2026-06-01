__int64 __fastcall sub_34D230(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rdx
  char v15; // di
  char v17; // [rsp+0h] [rbp-8h]

  v14 = BYTE2(xmmword_8BCDC0) | 1u;
  v15 = BYTE2(xmmword_8BCDC0) & 0xFE;
  if ( (BYTE2(xmmword_8BCDC0) & 1) == 0 )
    v15 = BYTE2(xmmword_8BCDC0) | 1;
  BYTE2(xmmword_8BCDC0) = v15;
  sub_28A960((v15 & 1u) + 1061, a10, v14, a12, a13, a14, a1, a2, a3, a4, a5, a6, a7, a8, v17);
  sub_388150((BYTE2(xmmword_8BCDC0) & 1) == 0 ? -1 : 1);
  return 1;
}
