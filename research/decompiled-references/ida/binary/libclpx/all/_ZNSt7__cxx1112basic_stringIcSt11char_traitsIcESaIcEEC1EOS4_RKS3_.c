// Alternative name is '_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EOS4_RKS3_'
_BYTE *__fastcall std::string::basic_string(__m128i *a1, __int64 a2)
{
  _BYTE *result; // rax

  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  result = (_BYTE *)(a2 + 16);
  if ( a2 + 16 == *(_QWORD *)a2 )
  {
    a1[1] = _mm_loadu_si128((const __m128i *)(a2 + 16));
    a1->m128i_i64[1] = *(_QWORD *)(a2 + 8);
    result = *(_BYTE **)a2;
    *(_QWORD *)(a2 + 8) = 0;
    *result = 0;
  }
  else
  {
    a1->m128i_i64[0] = *(_QWORD *)a2;
    a1->m128i_i64[1] = *(_QWORD *)(a2 + 8);
    a1[1].m128i_i64[0] = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = result;
    *(_QWORD *)(a2 + 8) = 0;
    *(_BYTE *)(a2 + 16) = 0;
  }
  return result;
}

