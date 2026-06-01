__int8 *__fastcall sub_9773C0(unsigned __int64 a1, __int8 *a2, const __m128i *a3, __int64 a4, int a5)
{
  __int8 *result; // rax
  unsigned __int64 v6; // r9
  const __m128i *v7; // rsi
  unsigned __int64 v8; // r8
  _DWORD *v9; // rsi
  __int64 v10; // r10
  __int64 *v11; // rcx
  __int64 v12; // r8
  __int8 *v13; // rsi
  __m128i *v14; // rdi
  const __m128i *v15; // rdx
  __m128i v16; // xmm2
  __m128i *v17; // rdi
  const __m128i *v18; // rsi
  __m128i v19; // xmm0

  result = a2;
  v6 = a1 + a4;
  v7 = a3;
  if ( a4 <= 7 )
  {
    result = nullptr;
    if ( v6 > a1 )
    {
      do
      {
        result[a1] = result[(_QWORD)a3];
        ++result;
      }
      while ( (__int8 *)a4 != result );
    }
  }
  else
  {
    if ( a5 == 1 )
    {
      v8 = a1 - (_QWORD)a3;
      if ( a1 - (unsigned __int64)a3 <= 7 )
      {
        *(_BYTE *)a1 = a3->m128i_i8[0];
        *(_BYTE *)(a1 + 1) = a3->m128i_i8[1];
        *(_BYTE *)(a1 + 2) = a3->m128i_i8[2];
        *(_BYTE *)(a1 + 3) = a3->m128i_i8[3];
        v9 = (__int32 *)((char *)a3->m128i_i32 + dword_23D8D00[v8]);
        *(_DWORD *)(a1 + 4) = *v9;
        v7 = (const __m128i *)((char *)v9 - dword_23D8D20[v8]);
      }
      else
      {
        *(_QWORD *)a1 = a3->m128i_i64[0];
      }
      v7 = (const __m128i *)((char *)v7 + 8);
      a1 += 8LL;
      if ( v6 > (unsigned __int64)result )
      {
        if ( (unsigned __int64)result < a1 )
        {
LABEL_5:
          if ( v6 <= a1 )
            return result;
          do
          {
LABEL_6:
            *(_BYTE *)a1 = v7->m128i_i8[0];
            v7 = (const __m128i *)((char *)v7 + 1);
            ++a1;
          }
          while ( a1 < v6 );
          return result;
        }
        v10 = (__int64)&result[-a1];
        if ( (__int64)(a1 - (_QWORD)v7) <= 15 )
        {
          v11 = (__int64 *)v7;
          do
          {
            v12 = *v11;
            a1 += 8LL;
            ++v11;
            *(_QWORD *)(a1 - 8) = v12;
          }
          while ( (unsigned __int64)result > a1 );
          goto LABEL_25;
        }
LABEL_28:
        *(__m128i *)a1 = _mm_loadu_si128(v7);
        if ( v10 > 16 )
        {
          v14 = (__m128i *)(a1 + 16);
          v15 = v7 + 1;
          do
          {
            v16 = _mm_loadu_si128(v15);
            v14 += 2;
            v15 += 2;
            v14[-2] = v16;
            v14[-1] = _mm_loadu_si128(v15 - 1);
          }
          while ( result > (__int8 *)v14 );
        }
LABEL_25:
        v13 = &v7->m128i_i8[v10];
        *result = *v13;
        v7 = (const __m128i *)(v13 + 1);
        a1 = (unsigned __int64)(result + 1);
        if ( (unsigned __int64)(result + 1) >= v6 )
          return result;
        goto LABEL_6;
      }
      result = (__int8 *)(a1 - (_QWORD)v7);
      if ( (__int64)(a1 - (_QWORD)v7) <= 15 )
      {
        do
        {
          result = (__int8 *)v7->m128i_i64[0];
          a1 += 8LL;
          v7 = (const __m128i *)((char *)v7 + 8);
          *(_QWORD *)(a1 - 8) = result;
        }
        while ( v6 > a1 );
        return result;
      }
      a4 -= 8;
    }
    else if ( v6 > (unsigned __int64)result )
    {
      if ( (unsigned __int64)result < a1 )
        goto LABEL_5;
      v10 = (__int64)&result[-a1];
      goto LABEL_28;
    }
    *(__m128i *)a1 = _mm_loadu_si128(v7);
    if ( a4 > 16 )
    {
      v17 = (__m128i *)(a1 + 16);
      v18 = v7 + 1;
      do
      {
        v19 = _mm_loadu_si128(v18);
        v17 += 2;
        v18 += 2;
        v17[-2] = v19;
        v17[-1] = _mm_loadu_si128(v18 - 1);
      }
      while ( v6 > (unsigned __int64)v17 );
    }
  }
  return result;
}
