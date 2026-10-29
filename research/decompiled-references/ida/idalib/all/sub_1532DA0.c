__m128i **__fastcall sub_1532DA0(__m128i **a1, const __m128i *a2)
{
  __m128i *v2; // rax
  __int64 v3; // rdx
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rdx

  v2 = (__m128i *)operator new(0x38u);
  v3 = a2->m128i_i64[1];
  v4 = _mm_loadu_si128(a2 + 1);
  v5 = _mm_loadu_si128(a2 + 2);
  v2->m128i_i64[0] = (__int64)off_2BB3C40;
  v2->m128i_i64[1] = v3;
  v6 = a2[3].m128i_i64[0];
  v2[1] = v4;
  v2[2] = v5;
  v2[3].m128i_i64[0] = v6;
  *a1 = v2;
  return a1;
}
