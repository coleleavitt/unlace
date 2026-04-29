// Alternative name is '_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EOS4_RKS3_'
__m128i *__fastcall std::string::basic_string(__m128i *a1, __m128i *a2)
{
  __int64 v2; // rcx
  __m128i *result; // rax
  __int64 v4; // rdx
  __m128i v5; // xmm0

  v2 = a2->m128i_i64[1];
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  result = a2 + 1;
  if ( &a2[1] == (__m128i *)a2->m128i_i64[0] )
  {
    v5 = _mm_loadu_si128(a2 + 1);
    a1->m128i_i64[1] = v2;
    a2->m128i_i64[1] = 0;
    a1[1] = v5;
  }
  else
  {
    a1->m128i_i64[0] = a2->m128i_i64[0];
    v4 = a2[1].m128i_i64[0];
    a1->m128i_i64[1] = v2;
    a1[1].m128i_i64[0] = v4;
    a2->m128i_i64[0] = (__int64)result;
    a2->m128i_i64[1] = 0;
  }
  a2[1].m128i_i8[0] = 0;
  return result;
}
