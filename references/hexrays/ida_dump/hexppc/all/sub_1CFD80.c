__int64 __fastcall sub_1CFD80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v9; // rbp
  __int64 v10; // r9
  __int64 i; // rdx
  __m128i *v12; // rcx
  const __m128i *v13; // rdx
  __int64 v14; // rax

  result = a3 - 1;
  v6 = a2;
  v9 = a3 & 1;
  v10 = (a3 - 1) / 2;
  if ( a2 >= v10 )
  {
    v12 = (__m128i *)(a1 + 16 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_10;
    result = (a3 - 2) / 2;
    if ( a2 != result )
      goto LABEL_10;
    goto LABEL_12;
  }
  for ( i = a2; ; i = a2 )
  {
    a2 = 2 * (i + 1);
    v12 = (__m128i *)(a1 + 32 * (i + 1));
    if ( v12->m128i_i64[0] < (unsigned __int64)v12[-1].m128i_i64[0] )
    {
      --a2;
      v12 = (__m128i *)(a1 + 16 * a2);
    }
    *(__m128i *)(a1 + 16 * i) = _mm_loadu_si128(v12);
    if ( v10 <= a2 )
      break;
  }
  if ( !v9 && (a3 - 2) / 2 == a2 )
  {
LABEL_12:
    v14 = a2 + 1;
    a2 = 2 * (a2 + 1) - 1;
    *v12 = _mm_loadu_si128((const __m128i *)(a1 + 32 * v14 - 16));
    v12 = (__m128i *)(a1 + 16 * a2);
  }
  result = (a2 - 1) / 2;
  if ( a2 > v6 )
  {
    while ( 1 )
    {
      v13 = (const __m128i *)(a1 + 16 * result);
      v12 = (__m128i *)(a1 + 16 * a2);
      if ( v13->m128i_i64[0] >= a4 )
        break;
      *v12 = _mm_loadu_si128(v13);
      a2 = result;
      if ( v6 >= result )
      {
        v12 = (__m128i *)(a1 + 16 * result);
        break;
      }
      result = (result - 1) / 2;
    }
  }
LABEL_10:
  v12->m128i_i64[0] = a4;
  v12->m128i_i64[1] = a5;
  return result;
}
