__m128i **__fastcall sub_155C0E0(__m128i **a1, const __m128i *a2)
{
  __m128i *v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rdx

  v2 = (__m128i *)operator new(0x20u);
  v3 = _mm_loadu_si128(a2 + 1);
  v4 = a2->m128i_i64[1];
  v2->m128i_i64[0] = (__int64)off_2BB3CB0;
  v2[1] = v3;
  v2->m128i_i64[1] = v4;
  *a1 = v2;
  return a1;
}
