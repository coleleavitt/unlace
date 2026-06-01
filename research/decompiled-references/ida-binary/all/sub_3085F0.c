__int64 __fastcall sub_3085F0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdx
  char *v11; // rcx
  double v12; // xmm4_8
  double v13; // xmm5_8

  byte_8CD800 = 1;
  *(double *)a1.m128_u64 = sub_1C7A80();
  return sub_308340(0, a10, v10, v11, a1, a2, a3, a4, v12, v13, a7, a8);
}
