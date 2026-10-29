__m128 *__fastcall sub_107B790(__m128 *a1)
{
  void *v2; // [rsp+0h] [rbp-10h] BYREF

  a1[2].m128_u64[0] = 4;
  a1->m128_u64[0] = (unsigned __int64)&a1[1];
  v2 = &unk_2554060;
  a1[2].m128_u64[1] = (unsigned __int64)&byte_22F0C30;
  a1[3].m128_u64[0] = 0;
  a1[1] = _mm_loadh_ps((const double *)&v2);
  a1->m128_u64[1] = 0x100000001LL;
  return a1;
}
