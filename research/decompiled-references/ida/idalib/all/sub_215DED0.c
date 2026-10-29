__m128i *__fastcall sub_215DED0(__m128i *a1, const __m128i *a2)
{
  __m128i v2; // xmm1

  v2 = _mm_loadu_si128(a2 + 2);
  *a1 = _mm_loadu_si128(a2 + 1);
  a1[1] = v2;
  return a1;
}
