__m128i *__fastcall sub_866AF0(size_t a1, const __m128i *a2)
{
  __m128i *result; // rax
  __m128i v3; // xmm0

  if ( a2 )
  {
    result = (__m128i *)((__int64 (__fastcall *)(size_t, __int64))a2->m128i_i64[0])(a1, a2[1].m128i_i64[0]);
    if ( result )
    {
      *result = _mm_loadu_si128(a2);
      result[1].m128i_i64[0] = a2[1].m128i_i64[0];
    }
  }
  else
  {
    result = (__m128i *)malloc(a1);
    if ( result )
    {
      v3 = _mm_loadl_epi64((const __m128i *)&off_2B3D090);
      result[1].m128i_i64[0] = 0;
      *result = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)j__free);
    }
  }
  return result;
}
