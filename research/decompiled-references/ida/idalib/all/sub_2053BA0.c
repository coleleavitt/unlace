unsigned __int64 __fastcall sub_2053BA0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 result; // rax
  __m128i v6; // xmm0
  unsigned __int64 v7; // rcx
  __m128i *v8; // rdi
  __m128i *v9; // rax
  __m128i v10; // xmm1
  __m128i *v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __m128i v14; // xmm1
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __m128i v17; // xmm1
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __m128i v20[2]; // [rsp+8h] [rbp-20h] BYREF

  v4 = a2;
  result = *(unsigned int *)(a1 + 12);
  v20[0].m128i_i64[0] = a3;
  v6 = _mm_loadl_epi64(v20);
  if ( result < a2 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    result = sub_2237220(a1, a1 + 16, a2, 8);
    v11 = *(__m128i **)a1;
    v6 = _mm_loadl_epi64(v20);
    if ( a2 == 1 )
      goto LABEL_16;
    v16 = 0;
    v17 = _mm_unpacklo_epi64(v6, v6);
    v18 = ((a2 - 2) >> 1) + 1;
    do
    {
      v19 = v16++;
      v11[v19] = v17;
    }
    while ( v16 < v18 );
    result = 2 * v18;
    v11 += v18;
    if ( v4 != 2 * v18 )
      goto LABEL_16;
    goto LABEL_17;
  }
  v7 = *(unsigned int *)(a1 + 8);
  v8 = *(__m128i **)a1;
  if ( v7 <= a2 )
    a2 = v7;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      result = (unsigned __int64)v8;
LABEL_9:
      *(_QWORD *)result = v6.m128i_i64[0];
      goto LABEL_10;
    }
    v9 = v8;
    v10 = _mm_unpacklo_epi64(v6, v6);
    do
      *v9++ = v10;
    while ( &v8[a2 >> 1] != v9 );
    result = (unsigned __int64)v8 + 8 * (a2 & 0xFFFFFFFFFFFFFFFELL);
    if ( a2 != (a2 & 0xFFFFFFFFFFFFFFFELL) )
      goto LABEL_9;
  }
LABEL_10:
  if ( v7 < v4 )
  {
    v11 = (__m128i *)((char *)v8 + 8 * v7);
    v12 = v4 - v7;
    if ( v4 != v7 )
    {
      if ( v12 == 1 )
        goto LABEL_16;
      v13 = 0;
      v14 = _mm_unpacklo_epi64(v6, v6);
      do
      {
        v15 = v13++;
        v11[v15] = v14;
      }
      while ( v12 >> 1 != v13 );
      result = v12 & 0xFFFFFFFFFFFFFFFELL;
      v11 = (__m128i *)((char *)v11 + 8 * (v12 & 0xFFFFFFFFFFFFFFFELL));
      if ( v12 != (v12 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_16:
        v11->m128i_i64[0] = v6.m128i_i64[0];
    }
  }
LABEL_17:
  *(_DWORD *)(a1 + 8) = v4;
  return result;
}
