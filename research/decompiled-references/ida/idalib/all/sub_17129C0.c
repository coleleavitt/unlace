unsigned __int64 __fastcall sub_17129C0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __m128i v6; // xmm0
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __m128i *v9; // rdx
  __m128i *v10; // rax
  __m128i v11; // xmm1
  __m128i *v12; // rdx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __m128i v18; // xmm1
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  __m128i v21[2]; // [rsp+8h] [rbp-20h] BYREF

  result = *(unsigned int *)(a1 + 12);
  v21[0].m128i_i64[0] = a3;
  v6 = _mm_loadl_epi64(v21);
  if ( result < a2 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    result = sub_2237220(a1, a1 + 16, a2, 8);
    v12 = *(__m128i **)a1;
    v6 = _mm_loadl_epi64(v21);
    if ( a2 == 1 )
      goto LABEL_16;
    v17 = 0;
    v18 = _mm_unpacklo_epi64(v6, v6);
    v19 = ((a2 - 2) >> 1) + 1;
    do
    {
      v20 = v17++;
      v12[v20] = v18;
    }
    while ( v19 > v17 );
    result = 2 * v19;
    v12 += v19;
    if ( a2 != 2 * v19 )
LABEL_16:
      v12->m128i_i64[0] = v6.m128i_i64[0];
  }
  else
  {
    v7 = *(unsigned int *)(a1 + 8);
    v8 = a2;
    v9 = *(__m128i **)a1;
    if ( v7 <= a2 )
      v8 = v7;
    if ( v8 )
    {
      if ( v8 == 1 )
        goto LABEL_9;
      v10 = *(__m128i **)a1;
      v11 = _mm_unpacklo_epi64(v6, v6);
      do
        *v10++ = v11;
      while ( &v9[v8 >> 1] != v10 );
      result = v8 & 0xFFFFFFFFFFFFFFFELL;
      v9 = (__m128i *)((char *)v9 + 8 * (v8 & 0xFFFFFFFFFFFFFFFELL));
      if ( v8 != (v8 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
        v9->m128i_i64[0] = v6.m128i_i64[0];
    }
    if ( v7 < a2 )
    {
      result = *(_QWORD *)a1;
      v12 = (__m128i *)(*(_QWORD *)a1 + 8 * v7);
      v13 = a2 - v7;
      if ( a2 != v7 )
      {
        if ( v13 == 1 )
          goto LABEL_16;
        v14 = 0;
        v15 = _mm_unpacklo_epi64(v6, v6);
        do
        {
          v16 = v14++;
          v12[v16] = v15;
        }
        while ( v13 >> 1 != v14 );
        result = v13 & 0xFFFFFFFFFFFFFFFELL;
        v12 = (__m128i *)((char *)v12 + 8 * (v13 & 0xFFFFFFFFFFFFFFFELL));
        if ( v13 != (v13 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_16;
      }
    }
  }
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
