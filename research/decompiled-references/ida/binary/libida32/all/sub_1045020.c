__m128 *__fastcall sub_1045020(__m128 *a1)
{
  void *v2; // [rsp+0h] [rbp-10h] BYREF

  a1[2].m128_u64[0] = 486;
  a1->m128_u64[0] = (unsigned __int64)&a1[1];
  v2 = &unk_24FE1E0;
  a1[2].m128_u64[1] = (unsigned __int64)&byte_22CD811;
  a1[3].m128_u64[0] = 0;
  a1[1] = _mm_loadh_ps((const double *)&v2);
  a1->m128_u64[1] = 0x100000001LL;
  return a1;
}

