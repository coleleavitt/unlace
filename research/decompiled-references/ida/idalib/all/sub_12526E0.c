void __fastcall sub_12526E0(__m128i *a1, const __m128i *a2)
{
  void (__fastcall *v2)(__m128i *, const __m128i *, __int64); // rax

  *a1 = _mm_loadu_si128(a2);
  a1[1] = _mm_loadu_si128(a2 + 1);
  a1[2] = _mm_loadu_si128(a2 + 2);
  if ( a2->m128i_i32[0] == 11 )
  {
    a1[2].m128i_i64[0] = 0;
    v2 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a2[2].m128i_i64[0];
    if ( v2 )
    {
      v2(a1 + 1, a2 + 1, 2);
      a1[2].m128i_i64[1] = a2[2].m128i_i64[1];
      a1[2].m128i_i64[0] = a2[2].m128i_i64[0];
    }
  }
}
