void __fastcall sub_AAD720(__m128 *a1, __int64 a2, unsigned __int64 a3)
{
  __m128 v3; // xmm0

  a1[1].m128_u64[0] = a3;
  v3 = _mm_loadh_ps((const double *)(a2 + 104));
  a1[2].m128_i8[0] = 0;
  a1[1].m128_u64[1] = 0;
  *a1 = v3;
}

