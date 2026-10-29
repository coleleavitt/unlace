__m128i *__fastcall sub_4F3E80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 v6; // r11
  __int64 i; // rcx
  __int64 v8; // r10
  __m128i *result; // rax
  __int64 v10; // rcx
  __m128i *v11; // rdx
  __int64 v12; // rdx

  v6 = (a3 - 1) / 2;
  if ( a2 >= v6 )
  {
    result = (__m128i *)(a1 + 16 * a2);
    if ( (a3 & 1) != 0 || a2 != (a3 - 2) / 2 )
      goto LABEL_13;
    v8 = a2;
    goto LABEL_15;
  }
  for ( i = a2; ; i = v8 )
  {
    v8 = 2 * (i + 1);
    result = (__m128i *)(a1 + 32 * (i + 1));
    if ( result->m128i_i64[0] < (unsigned __int64)result[-1].m128i_i64[0] )
    {
      --v8;
      result = (__m128i *)(a1 + 16 * v8);
    }
    *(__m128i *)(a1 + 16 * i) = _mm_loadu_si128(result);
    if ( v6 <= v8 )
      break;
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v8 )
  {
LABEL_15:
    v12 = v8 + 1;
    v8 = 2 * (v8 + 1) - 1;
    *result = _mm_loadu_si128((const __m128i *)(a1 + 32 * v12 - 16));
    result = (__m128i *)(a1 + 16 * v8);
  }
  v10 = (v8 - 1) / 2;
  if ( v8 > a2 )
  {
    while ( 1 )
    {
      v11 = (__m128i *)(a1 + 16 * v10);
      result = (__m128i *)(a1 + 16 * v8);
      if ( v11->m128i_i64[0] >= a4 )
        break;
      *result = _mm_loadu_si128(v11);
      v8 = v10;
      if ( a2 >= v10 )
      {
        *v11 = _mm_unpacklo_epi64((__m128i)a4, (__m128i)a5);
        return (__m128i *)(a1 + 16 * v10);
      }
      v10 = (v10 - 1) / 2;
    }
  }
LABEL_13:
  *result = _mm_unpacklo_epi64((__m128i)a4, (__m128i)a5);
  return result;
}
