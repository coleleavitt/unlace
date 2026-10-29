__int64 __fastcall sub_3EE410(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // r13
  __int64 v12; // rbp
  __int64 i; // rcx
  __int64 result; // rax
  __m128i *v15; // rdx
  __m128i *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rcx
  const __m128i *v19; // rsi
  const __m128i *v20; // rcx

  v10 = a3 & 1;
  v12 = (a3 - 1) / 2;
  if ( a2 >= v12 )
  {
    result = 3 * a2;
    v15 = (__m128i *)(a1 + 24 * a2);
    if ( v10 )
      goto LABEL_14;
    result = (a3 - 2) / 2;
    if ( a2 != result )
      goto LABEL_14;
    result = a2;
  }
  else
  {
    for ( i = a2; ; i = result )
    {
      result = 2 * (i + 1);
      v15 = (__m128i *)(a1 + 48 * (i + 1));
      if ( *(_DWORD *)(a1 + 24 * (result - 1) + 4) > v15->m128i_i32[1] )
        v15 = (__m128i *)(a1 + 24 * --result);
      v16 = (__m128i *)(a1 + 24 * i);
      *v16 = _mm_loadu_si128(v15);
      v16[1].m128i_i64[0] = v15[1].m128i_i64[0];
      if ( v12 <= result )
        break;
    }
    if ( v10 || (a3 - 2) / 2 != result )
    {
      v17 = result - 1;
      goto LABEL_9;
    }
  }
  v17 = 2 * result;
  result = 2 * result + 1;
  v20 = (const __m128i *)(a1 + 24 * result);
  *v15 = _mm_loadu_si128(v20);
  v15[1].m128i_i64[0] = v20[1].m128i_i64[0];
  v15 = (__m128i *)v20;
LABEL_9:
  v18 = v17 / 2;
  if ( result > a2 )
  {
    while ( 1 )
    {
      result *= 3;
      v19 = (const __m128i *)(a1 + 24 * v18);
      v15 = (__m128i *)(a1 + 8 * result);
      if ( v19->m128i_i32[1] >= SHIDWORD(a7) )
        break;
      *v15 = _mm_loadu_si128(v19);
      v15[1].m128i_i64[0] = v19[1].m128i_i64[0];
      result = v18;
      if ( a2 >= v18 )
      {
        v15 = (__m128i *)(a1 + 24 * v18);
        break;
      }
      v18 = (v18 - 1) / 2;
    }
  }
LABEL_14:
  v15->m128i_i64[0] = a7;
  v15->m128i_i64[1] = a8;
  v15[1].m128i_i64[0] = a9;
  return result;
}
