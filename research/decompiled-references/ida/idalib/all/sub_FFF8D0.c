__m128i *sub_FFF8D0()
{
  __m128i *result; // rax
  __m128i v1; // xmm0
  __m128i v2; // [rsp+8h] [rbp-10h] BYREF

  result = (__m128i *)operator new(0x18u);
  v2.m128i_i64[0] = (__int64)result;
  v1 = _mm_loadl_epi64(&v2);
  result[1].m128i_i64[0] = 0;
  *result = _mm_unpacklo_epi64(v1, v1);
  return result;
}
