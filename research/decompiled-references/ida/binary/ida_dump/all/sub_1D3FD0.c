__int64 __fastcall sub_1D3FD0(__m128i *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int64 *v7; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __m128i *v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  __m128i *v14; // rbx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  __m128i *v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 i; // rbx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __m128i v23; // xmm0

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 256 )
    return result;
  v4 = result >> 5;
  v5 = a3;
  v6 = ((char *)a2 - (char *)a1) >> 4;
  v7 = a2;
  if ( !a3 )
    goto LABEL_18;
  do
  {
    v9 = a1[1].m128i_u64[0];
    v10 = a1->m128i_i64[0];
    --v5;
    v11 = &a1[v4];
    v12 = *(v7 - 2);
    v13 = a1->m128i_u64[1];
    v14 = a1 + 1;
    v15 = v11->m128i_i64[0];
    if ( v9 < v11->m128i_i64[0] )
    {
      if ( v15 >= v12 )
      {
        if ( v9 < v12 )
        {
LABEL_27:
          v16 = a1->m128i_i64[0];
          *a1 = _mm_loadu_si128((const __m128i *)v7 - 1);
          *(v7 - 2) = v10;
          *(v7 - 1) = v13;
          v10 = a1[1].m128i_u64[0];
          goto LABEL_7;
        }
LABEL_26:
        v23 = _mm_loadu_si128(a1 + 1);
        a1[1].m128i_i64[0] = v10;
        a1[1].m128i_i64[1] = v13;
        *a1 = v23;
        v16 = *(v7 - 2);
        goto LABEL_7;
      }
    }
    else
    {
      if ( v9 < v12 )
        goto LABEL_26;
      if ( v15 < v12 )
        goto LABEL_27;
    }
    *a1 = _mm_loadu_si128(v11);
    v11->m128i_i64[0] = v10;
    v11->m128i_i64[1] = v13;
    v10 = a1[1].m128i_u64[0];
    v16 = *(v7 - 2);
LABEL_7:
    v17 = (__m128i *)v7;
    while ( 1 )
    {
      v19 = a1->m128i_i64[0];
      if ( v10 < a1->m128i_i64[0] )
        break;
      --v17;
      if ( v19 < v16 )
        goto LABEL_14;
LABEL_9:
      if ( v14 >= v17 )
        goto LABEL_16;
LABEL_10:
      v18 = v14->m128i_i64[1];
      ++v14;
      v14[-1] = _mm_loadu_si128(v17);
      v16 = v17[-1].m128i_u64[0];
      v17->m128i_i64[0] = v10;
      v17->m128i_i64[1] = v18;
      v10 = v14->m128i_i64[0];
    }
    do
    {
      v10 = v14[1].m128i_u64[0];
      ++v14;
    }
    while ( v10 < v19 );
    --v17;
    if ( v19 >= v16 )
      goto LABEL_9;
    do
LABEL_14:
      --v17;
    while ( v19 < v17->m128i_i64[0] );
    if ( v14 < v17 )
      goto LABEL_10;
LABEL_16:
    sub_1D3FD0(v14, v7, v5);
    result = (char *)v14 - (char *)a1;
    if ( (char *)v14 - (char *)a1 <= 256 )
      return result;
    v7 = (unsigned __int64 *)v14;
    v4 = result >> 5;
    v6 = v14 - a1;
  }
  while ( v5 );
LABEL_18:
  for ( i = v4 - 1; ; --i )
  {
    sub_1D3940((__int64)a1, i, v6, a1[i].m128i_u64[0], a1[i].m128i_i64[1]);
    if ( !i )
      break;
  }
  for ( result = (char *)v7 - (char *)a1;
        (char *)v7 - (char *)a1 > 16;
        result = sub_1D3940((__int64)a1, 0, ((char *)v7 - (char *)a1) >> 4, v21, v22) )
  {
    v7 -= 2;
    v21 = *v7;
    v22 = v7[1];
    *(__m128i *)v7 = _mm_loadu_si128(a1);
  }
  return result;
}
