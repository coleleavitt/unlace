__m128i *__fastcall sub_698D80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 v7; // rbp
  __int64 v9; // r11
  __int64 i; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rsi
  __m128i *result; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx

  v7 = a3 & 1;
  v9 = (a3 - 1) / 2;
  if ( a2 >= v9 )
  {
    result = (__m128i *)(a1 + 16 * a2);
    if ( (a3 & 1) != 0 || a2 != (a3 - 2) / 2 )
      goto LABEL_15;
    v11 = a2;
    goto LABEL_19;
  }
  for ( i = a2; ; i = v11 )
  {
    v11 = 2 * (i + 1);
    v12 = 32 * (i + 1);
    v13 = (_QWORD *)(a1 + v12 - 16);
    result = (__m128i *)(a1 + v12);
    if ( *v13 >= result->m128i_i64[0] && (*v13 != result->m128i_i64[0] || result->m128i_i64[1] < v13[1]) )
    {
      --v11;
      result = (__m128i *)(a1 + 16 * v11);
    }
    *(__m128i *)(a1 + 16 * i) = _mm_loadu_si128(result);
    if ( v9 <= v11 )
      break;
  }
  if ( !v7 && (a3 - 2) / 2 == v11 )
  {
LABEL_19:
    v17 = v11 + 1;
    v11 = 2 * (v11 + 1) - 1;
    *result = _mm_loadu_si128((const __m128i *)(a1 + 32 * v17 - 16));
    result = (__m128i *)(a1 + 16 * v11);
  }
  v15 = (v11 - 1) / 2;
  if ( v11 > a2 )
  {
    while ( 1 )
    {
      v16 = 16 * v11;
      result = (__m128i *)(a1 + 16 * v15);
      if ( a4 < result->m128i_i64[0] || result->m128i_i64[0] == a4 && result->m128i_i64[1] >= a5 )
        break;
      *(__m128i *)(a1 + v16) = _mm_loadu_si128(result);
      v11 = v15;
      if ( a2 >= v15 )
        goto LABEL_15;
      v15 = (v15 - 1) / 2;
    }
    result = (__m128i *)(a1 + v16);
  }
LABEL_15:
  *result = _mm_unpacklo_epi64((__m128i)a4, (__m128i)a5);
  return result;
}
