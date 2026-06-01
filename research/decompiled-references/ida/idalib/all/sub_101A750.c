__m128i *__fastcall sub_101A750(__m128i *a1, const __m128i *a2)
{
  __m128i *result; // rax
  __m128i v3; // xmm0

  result = a1;
  if ( a2[2].m128i_i32[1] > (unsigned __int32)a2[2].m128i_i32[0] )
  {
    a1[1].m128i_i8[0] = 0;
  }
  else
  {
    v3 = _mm_loadu_si128(a2);
    a1[1].m128i_i8[0] = 1;
    *a1 = v3;
  }
  return result;
}
