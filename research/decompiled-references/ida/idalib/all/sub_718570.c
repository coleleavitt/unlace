__int64 __fastcall sub_718570(
        __int64 *a1,
        __int64 a2,
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
  __int64 *v11; // rsi
  unsigned int v13; // eax
  double v14; // xmm4_8
  double v15; // xmm5_8

  v11 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = sub_F6C520(*v11 & 0xFFFFFFFFFFFFFFF0LL);
  return sub_717AC0(
           a1,
           *v11,
           v13 * ((a3 != 0) + (a3 - (unsigned __int64)(a3 != 0)) / v13),
           v13,
           *v11,
           a4,
           a5,
           a6,
           a7,
           v14,
           v15,
           a10,
           a11);
}
