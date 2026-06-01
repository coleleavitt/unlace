__int64 __fastcall sub_FBD5B0(__m128 *a1)
{
  __m128 v1; // xmm0
  void *v3; // [rsp+0h] [rbp-10h] BYREF

  a1[2].m128_u64[0] = 1499;
  a1->m128_u64[0] = (unsigned __int64)&a1[1];
  v3 = &unk_2402F80;
  a1[2].m128_u64[1] = (unsigned __int64)&byte_22F0C30;
  a1->m128_u64[1] = 0x100000001LL;
  v1 = _mm_loadh_ps((const double *)&v3);
  a1[3].m128_u64[1] = (unsigned __int64)&a1[4].m128_u64[1];
  a1[1] = v1;
  a1[3].m128_u64[0] = 0;
  a1[4].m128_u64[0] = 0x100000000LL;
  a1[7].m128_u64[0] = (unsigned __int64)&a1[8];
  a1[7].m128_u64[1] = 0x100000000LL;
  a1[10].m128_u64[1] = 0;
  return 0x100000000LL;
}
