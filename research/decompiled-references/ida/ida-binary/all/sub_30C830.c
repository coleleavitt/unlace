__int64 __fastcall sub_30C830(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rdx
  char *v11; // rcx
  double v12; // xmm4_8
  double v13; // xmm5_8

  byte_8CD800 = 1;
  del_qatexit(sub_3085F0);
  byte_8CD800 = 1;
  *(double *)a3.m128_u64 = sub_1C7A80();
  sub_308340(0, a2, v10, v11, a3, a4, a5, a6, v12, v13, a9, a10);
  return sub_478230(a1 + 16, (unsigned int)a2);
}
