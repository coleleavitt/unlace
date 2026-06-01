__m128i *__fastcall sub_3C8200(const __m128i *a1)
{
  __m128i *result; // rax

  result = (__m128i *)qalloc();
  if ( !result )
    sub_3880B0((__int64)"microplace");
  *result = _mm_loadu_si128(a1);
  result[1].m128i_i64[0] = a1[1].m128i_i64[0];
  return result;
}
