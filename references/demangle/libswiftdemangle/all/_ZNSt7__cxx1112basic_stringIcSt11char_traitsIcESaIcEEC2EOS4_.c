// Alternative name is '_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EOS4_'
__m128i *__fastcall std::string::basic_string(__m128i *a1, __m128i *a2)
{
  __m128i *result; // rax
  __int64 v3; // rdx

  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  result = a2 + 1;
  if ( &a2[1] == (__m128i *)a2->m128i_i64[0] )
  {
    a1[1] = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    a1->m128i_i64[0] = a2->m128i_i64[0];
    a1[1].m128i_i64[0] = a2[1].m128i_i64[0];
  }
  v3 = a2->m128i_i64[1];
  a2->m128i_i64[0] = (__int64)result;
  a2->m128i_i64[1] = 0;
  a1->m128i_i64[1] = v3;
  a2[1].m128i_i8[0] = 0;
  return result;
}
