__m128i *__fastcall sub_6895C0(__m128i *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  __m128i v5; // xmm0
  __int64 v6; // rdx

  v3 = *(_QWORD *)(a2 + 80);
  v5 = _mm_loadu_si128((const __m128i *)(v3 + 24LL * a3));
  v6 = *(_QWORD *)(v3 + 24LL * a3 + 16);
  *a1 = v5;
  a1[1].m128i_i64[0] = v6;
  return a1;
}

