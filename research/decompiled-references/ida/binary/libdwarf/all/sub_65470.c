const __m128i *__fastcall sub_65470(__m128i *a1, const __m128i *a2, __int64 a3)
{
  __m128i *v3; // rcx
  const __m128i *result; // rax
  char *m128i_i8; // rdx
  const __m128i *v6; // rcx
  signed __int64 v7; // r8
  __m128i *v8; // rdi
  __m128i v9; // xmm0

  v3 = (__m128i *)((char *)a1 + a3);
  result = (const __m128i *)((char *)a1 - (char *)a2);
  if ( a3 <= 7 || (__int64)result >= -7 )
  {
    if ( a1 < v3 )
    {
      result = nullptr;
      do
      {
        result->m128i_i8[(_QWORD)a1] = result->m128i_i8[(_QWORD)a2];
        result = (const __m128i *)((char *)result + 1);
      }
      while ( (const __m128i *)a3 != result );
    }
  }
  else
  {
    m128i_i8 = v3[-2].m128i_i8;
    if ( &v3[-2] >= a1 && (__int64)result < -16 )
    {
      v7 = m128i_i8 - (char *)a1;
      *a1 = _mm_loadu_si128(a2);
      if ( m128i_i8 - (char *)a1 > 16 )
      {
        v8 = a1 + 1;
        result = a2 + 1;
        do
        {
          v9 = _mm_loadu_si128(result);
          v8 += 2;
          result += 2;
          v8[-2] = v9;
          v8[-1] = _mm_loadu_si128(result - 1);
        }
        while ( m128i_i8 > (char *)v8 );
      }
      a2 = (const __m128i *)((char *)a2 + v7);
      a1 = v3 - 2;
    }
    if ( v3 > a1 )
    {
      v6 = (const __m128i *)((char *)v3 - (char *)a1);
      result = nullptr;
      do
      {
        result->m128i_i8[(_QWORD)a1] = result->m128i_i8[(_QWORD)a2];
        result = (const __m128i *)((char *)result + 1);
      }
      while ( v6 != result );
    }
  }
  return result;
}

