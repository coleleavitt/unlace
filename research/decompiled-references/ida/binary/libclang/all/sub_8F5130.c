__m128i *__fastcall sub_8F5130(__m128i *a1, __int64 a2)
{
  const __m128i *v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rax

  v2 = (const __m128i *)sub_A1A5A0(a2, 24);
  v3 = _mm_loadu_si128(v2);
  v4 = v2[1].m128i_i64[0];
  *a1 = v3;
  a1[1].m128i_i64[0] = v4;
  sub_A1A5E0(a2, 24);
  return a1;
}

