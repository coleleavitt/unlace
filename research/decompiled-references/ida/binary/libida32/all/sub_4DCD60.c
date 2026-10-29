__int64 __fastcall sub_4DCD60(__m128i *a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rsi
  __m128i v5; // xmm0

  v1 = a1->m128i_u32[2];
  result = a1[-1].m128i_u32[2];
  v3 = a1->m128i_i64[0];
  v4 = a1->m128i_i64[1];
  if ( v1 < (unsigned int)result )
    goto LABEL_4;
  if ( (unsigned int)result >= v1 )
  {
    while ( v3 < a1[-1].m128i_i64[0] )
    {
      do
      {
LABEL_4:
        v5 = _mm_loadu_si128(--a1);
        a1[1] = v5;
        result = a1[-1].m128i_u32[2];
      }
      while ( v1 < (unsigned int)result );
      if ( (unsigned int)result < v1 )
        break;
    }
  }
  a1->m128i_i64[0] = v3;
  a1->m128i_i64[1] = v4;
  return result;
}

