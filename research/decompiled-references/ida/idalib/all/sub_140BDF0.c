void __fastcall sub_140BDF0(__m128i *a1, const __m128i *a2)
{
  *a1 = _mm_loadu_si128(a2);
  a1[1] = _mm_loadu_si128(a2 + 1);
  a1[2] = _mm_loadu_si128(a2 + 2);
  a1[3] = _mm_loadu_si128(a2 + 3);
}
