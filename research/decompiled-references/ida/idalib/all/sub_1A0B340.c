__int64 __fastcall sub_1A0B340(__m128i *a1, const __m128i *a2)
{
  __int64 result; // rax
  const __m128i *v3; // rsi
  __m128i *v4; // rdi

  result = a2->m128i_i32[0] & 0x7FFFFFFF;
  a1->m128i_i32[0] = result | a1->m128i_i32[0] & 0x80000000;
  a1->m128i_i8[3] = a2->m128i_i8[3] & 0x80 | a1->m128i_i8[3] & 0x7F;
  a1->m128i_i64[1] = a2->m128i_i64[1];
  if ( (_DWORD)result == 2 )
  {
    a1[1] = _mm_loadu_si128(a2 + 1);
    a1[2] = _mm_loadu_si128(a2 + 2);
    a1[3] = _mm_loadu_si128(a2 + 3);
    a1[4] = _mm_loadu_si128(a2 + 4);
    a1[5] = _mm_loadu_si128(a2 + 5);
    a1[6] = _mm_loadu_si128(a2 + 6);
    a1[7] = _mm_loadu_si128(a2 + 7);
    a1[8] = _mm_loadu_si128(a2 + 8);
    result = a2[9].m128i_i64[0];
    a1[9].m128i_i64[0] = result;
  }
  else if ( (unsigned int)result <= 2 )
  {
    if ( !(_DWORD)result )
    {
      a1[1] = _mm_loadu_si128(a2 + 1);
      a1[2] = _mm_loadu_si128(a2 + 2);
      a1[3] = _mm_loadu_si128(a2 + 3);
      result = a2[4].m128i_i64[0];
      a1[4].m128i_i64[0] = result;
    }
  }
  else if ( (_DWORD)result == 3 )
  {
    v3 = a2 + 1;
    v4 = a1 + 1;
    v4->m128i_i64[0] = v3->m128i_i64[0];
    v4->m128i_i64[1] = v3->m128i_i64[1];
    v4[1].m128i_i64[0] = (__int64)v4[2].m128i_i64;
    v4[1].m128i_i64[1] = 0x400000000LL;
    result = v3[1].m128i_u32[2];
    if ( (_DWORD)result )
      return sub_1BD9260(&v4[1], &v3[1]);
  }
  else if ( (_DWORD)result == 5 )
  {
    a1[1] = _mm_loadu_si128(a2 + 1);
    a1[2] = _mm_loadu_si128(a2 + 2);
  }
  return result;
}
