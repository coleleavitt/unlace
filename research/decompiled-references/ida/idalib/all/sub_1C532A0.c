__int64 __fastcall sub_1C532A0(__int64 a1, __int64 a2, const __m128i *a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v5; // r12
  __int64 v6; // rbp
  __m128i v8; // xmm3
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  size_t v11; // r13
  size_t v12; // rdx
  int v13; // eax
  __m128i v14; // xmm2
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __m128i v20; // xmm1
  __int64 v21; // rdx

  v5 = a3;
  v6 = a1;
  if ( a2 != a1 && a4 != a3 )
  {
    do
    {
      v10 = v5->m128i_u64[1];
      v11 = *(_QWORD *)(v6 + 8);
      v12 = v11;
      if ( v10 <= v11 )
        v12 = v5->m128i_u64[1];
      if ( v12 && (v13 = memcmp((const void *)v5->m128i_i64[0], *(const void **)v6, v12)) != 0 )
      {
        if ( v13 < 0 )
          goto LABEL_4;
      }
      else if ( v10 != v11 && v10 < v11 )
      {
LABEL_4:
        v8 = _mm_loadu_si128(v5);
        v9 = v5[1].m128i_i64[0];
        a5 += 24;
        v5 = (const __m128i *)((char *)v5 + 24);
        *(__m128i *)(a5 - 24) = v8;
        *(_QWORD *)(a5 - 8) = v9;
        if ( a2 == v6 )
          break;
        continue;
      }
      v14 = _mm_loadu_si128((const __m128i *)v6);
      v15 = *(_QWORD *)(v6 + 16);
      v6 += 24;
      a5 += 24;
      *(__m128i *)(a5 - 24) = v14;
      *(_QWORD *)(a5 - 8) = v15;
      if ( a2 == v6 )
        break;
    }
    while ( a4 != v5 );
  }
  v16 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v6) >> 3);
  if ( a2 - v6 > 0 )
  {
    do
    {
      v17 = _mm_loadu_si128((const __m128i *)v6);
      v18 = *(_QWORD *)(v6 + 16);
      a5 += 24;
      v6 += 24;
      *(__m128i *)(a5 - 24) = v17;
      *(_QWORD *)(a5 - 8) = v18;
      --v16;
    }
    while ( v16 );
  }
  v19 = 0xAAAAAAAAAAAAAAABLL * (((char *)a4 - (char *)v5) >> 3);
  if ( (char *)a4 - (char *)v5 > 0 )
  {
    do
    {
      v20 = _mm_loadu_si128(v5);
      v21 = v5[1].m128i_i64[0];
      a5 += 24;
      v5 = (const __m128i *)((char *)v5 + 24);
      *(__m128i *)(a5 - 24) = v20;
      *(_QWORD *)(a5 - 8) = v21;
      --v19;
    }
    while ( v19 );
  }
  return a5;
}
