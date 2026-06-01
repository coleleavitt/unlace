__m128i *__fastcall sub_21A26C0(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  const __m128i *v4; // rdx

  v4 = (const __m128i *)(*(_QWORD *)(a2 + 560) + 144 * HIDWORD(a3));
  a1[1].m128i_i8[0] &= ~1u;
  *a1 = _mm_loadu_si128(v4);
  return a1;
}
