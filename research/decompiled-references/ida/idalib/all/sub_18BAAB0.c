__m128i **__fastcall sub_18BAAB0(__m128i **a1, const __m128i *a2)
{
  __m128i *v2; // rax
  __int64 v3; // rdx
  __m128i v4; // xmm0

  v2 = (__m128i *)operator new(0x20u);
  v3 = a2->m128i_i64[1];
  v4 = _mm_loadu_si128(a2 + 1);
  *a1 = v2;
  v2->m128i_i64[1] = v3;
  v2[1] = v4;
  v2->m128i_i64[0] = (__int64)off_2C58E38;
  return a1;
}
