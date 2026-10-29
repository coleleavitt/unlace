unsigned __int64 __fastcall sub_20539B0(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rcx
  bool v8; // cc
  __m128i *v9; // rsi
  __m128i *v10; // rax
  __m128i v11; // xmm0
  unsigned int *v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned int *v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __m128i *v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm0
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx

  if ( *(unsigned int *)(a1 + 12) >= a2 )
  {
    result = *(unsigned int *)(a1 + 8);
    v7 = a2;
    v8 = result <= a2;
    v9 = *(__m128i **)a1;
    if ( v8 )
      v7 = *(unsigned int *)(a1 + 8);
    if ( !v7 )
    {
LABEL_13:
      if ( a2 > result )
      {
        v14 = (unsigned int *)v9 + result;
        v15 = a2 - result;
        if ( a2 != result )
        {
          result = v15 - 1;
          if ( v15 - 1 <= 2 )
          {
            v19 = v15;
            goto LABEL_19;
          }
          v16 = 0;
          v17 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a3), 0);
          do
          {
            v18 = v16++;
            *(__m128i *)&v14[4 * v18] = v17;
          }
          while ( v15 >> 2 != v16 );
          result = v15 & 0xFFFFFFFFFFFFFFFCLL;
          v19 = v15 - (v15 & 0xFFFFFFFFFFFFFFFCLL);
          v14 += v15 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v15 != (v15 & 0xFFFFFFFFFFFFFFFCLL) )
          {
LABEL_19:
            *v14 = a3;
            if ( v19 != 1 )
            {
              v14[1] = a3;
              if ( v19 != 2 )
                v14[2] = a3;
            }
            goto LABEL_22;
          }
        }
      }
      goto LABEL_22;
    }
    if ( v7 - 1 <= 2 )
    {
      v13 = v7;
      v12 = (unsigned int *)v9;
    }
    else
    {
      v10 = *(__m128i **)a1;
      v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a3), 0);
      do
        *v10++ = v11;
      while ( v10 != &v9[v7 >> 2] );
      v12 = (unsigned int *)v9 + (v7 & 0xFFFFFFFFFFFFFFFCLL);
      v13 = v7 - (v7 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v7 == (v7 & 0xFFFFFFFFFFFFFFFCLL) )
      {
LABEL_12:
        result = *(unsigned int *)(a1 + 8);
        goto LABEL_13;
      }
    }
    *v12 = a3;
    if ( v13 != 1 )
    {
      v12[1] = a3;
      if ( v13 != 2 )
        v12[2] = a3;
    }
    goto LABEL_12;
  }
  *(_DWORD *)(a1 + 8) = 0;
  sub_2237220(a1, a1 + 16, a2, 4);
  result = a2 - 1;
  v20 = *(__m128i **)a1;
  if ( a2 - 1 <= 2 )
  {
    v25 = a2;
  }
  else
  {
    v21 = 0;
    v22 = ((a2 - 4) >> 2) + 1;
    v23 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a3), 0);
    do
    {
      v24 = v21++;
      v20[v24] = v23;
    }
    while ( v22 > v21 );
    result = 4 * v22;
    v25 = a2 - 4 * v22;
    v20 += v22;
    if ( 4 * v22 == a2 )
      goto LABEL_22;
  }
  v20->m128i_i32[0] = a3;
  if ( v25 == 1 || (v20->m128i_i32[1] = a3, v25 == 2) )
  {
LABEL_22:
    *(_DWORD *)(a1 + 8) = a2;
    return result;
  }
  v20->m128i_i32[2] = a3;
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
