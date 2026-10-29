__m128i **__fastcall sub_169D1E0(__m128i **a1, const __m128i *a2)
{
  __m128i *v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = (__m128i *)operator new(0x28u);
  v3 = _mm_loadu_si128(a2 + 1);
  v4 = a2[2].m128i_i64[0];
  v5 = a2->m128i_i64[1];
  v2->m128i_i64[0] = (__int64)&off_2BC6478;
  v2[1] = v3;
  v2->m128i_i64[1] = v5;
  v2[2].m128i_i64[0] = v4;
  *a1 = v2;
  return a1;
}
