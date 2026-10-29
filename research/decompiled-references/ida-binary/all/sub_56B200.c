__m128i *__fastcall sub_56B200(__m128i *a1, const __m128i *a2)
{
  size_t v3; // rdi
  __int64 v4; // rcx
  void *v5; // rax
  __m128i v7; // xmm2
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF
  __m128i v9[2]; // [rsp+10h] [rbp-28h] BYREF

  v3 = a2[1].m128i_u32[2];
  v4 = a2->m128i_i64[0];
  v8 = _mm_loadu_si128(a2);
  v9[0] = _mm_loadu_si128(a2 + 1);
  if ( (unsigned int)v3 > 0x18 )
  {
    v5 = off_8C52B8(v3);
    v4 = (__int64)memcpy(v5, (const void *)a2->m128i_i64[0], a2[1].m128i_u32[2]);
  }
  v8.m128i_i64[0] = v4;
  v7 = _mm_load_si128(&v8);
  a1[1] = _mm_load_si128(v9);
  *a1 = v7;
  return a1;
}
