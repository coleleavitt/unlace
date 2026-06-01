void __fastcall sub_A0B030(const __m128i *a1)
{
  __int64 m128i_i64; // rbx
  __int64 v2; // rdi
  __m128i v3; // [rsp+0h] [rbp-198h] BYREF
  _BYTE v4[392]; // [rsp+10h] [rbp-188h] BYREF

  m128i_i64 = (__int64)a1[1].m128i_i64;
  v3 = _mm_loadu_si128(a1);
  sub_9E6760((__int64)v4, (__int64)a1[1].m128i_i64);
  while ( (unsigned __int8)sub_9E60E0((unsigned int *)&v3, (unsigned int *)(m128i_i64 - 400)) )
  {
    v2 = m128i_i64;
    *(__m128i *)(m128i_i64 - 16) = _mm_loadu_si128((const __m128i *)(m128i_i64 - 400));
    m128i_i64 -= 384;
    sub_A0AAC0(v2, m128i_i64);
  }
  *(__m128i *)(m128i_i64 - 16) = _mm_load_si128(&v3);
  sub_A0AAC0(m128i_i64, (__int64)v4);
  sub_9E66A0((__int64)v4);
}

