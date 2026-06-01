unsigned __int64 __fastcall sub_DCF770(const __m128i *a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  const __m128i *v5; // r15
  __int64 v6; // r8
  const __m128i *v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rsi

  result = 3LL * a2;
  v5 = (const __m128i *)((char *)a1 + 24 * a2);
  v6 = 24LL * a4;
  if ( a1 != v5 )
  {
    v7 = a1;
    do
    {
      result = v7->m128i_i64[0];
      if ( v7->m128i_i64[0] && qword_1C7F378 != result )
      {
        if ( result )
        {
          if ( (v7->m128i_i64[0] & 7) == 1 )
            result >>= 3;
          else
            LODWORD(result) = *(_DWORD *)(result - 8);
        }
        else
        {
          LODWORD(result) = -1640531495;
        }
        v8 = 24LL * ((a4 - 1) & (unsigned int)result);
        v9 = a3 + v8;
        if ( v6 == v8 )
        {
LABEL_15:
          if ( a3 == v9 )
          {
LABEL_21:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          result = a3;
          while ( *(_QWORD *)result )
          {
            result += 24LL;
            if ( v9 == result )
              goto LABEL_21;
          }
        }
        else
        {
          result = a3 + v8;
          while ( *(_QWORD *)result )
          {
            result += 24LL;
            if ( a3 + v6 == result )
              goto LABEL_15;
          }
        }
        *(__m128i *)result = _mm_loadu_si128(v7);
        *(_QWORD *)(result + 16) = v7[1].m128i_i64[0];
      }
      v7 = (const __m128i *)((char *)v7 + 24);
    }
    while ( v5 != v7 );
  }
  return result;
}

