__int64 __fastcall sub_261680(
        _QWORD *a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rcx
  char *v10; // rsi
  __int64 *v11; // rdx
  const char *v12; // rdi
  double v13; // xmm4_8
  double v14; // xmm5_8

  v9 = (const char *)a1[6];
  if ( v9 && !*v9 )
    v9 = nullptr;
  v10 = (char *)a1[4];
  v11 = (__int64 *)a1[5];
  if ( v10 && !*v10 )
    v10 = nullptr;
  v12 = (const char *)a1[3];
  if ( v12 && !*v12 )
    v12 = nullptr;
  sub_258BD0(v12, v10, v11, v9, nullptr, nullptr, a2, a3, a4, a5, a6, a7, a8, a9, 0xFFFFFFFF);
  return sub_25FBA0(-1, v10, *(double *)a2.m128_u64, a3, a4, a5, v13, v14, a8, a9);
}
