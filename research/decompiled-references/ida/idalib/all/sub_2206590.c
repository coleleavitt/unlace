__int64 __fastcall sub_2206590(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rsi
  __m128i *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int v10; // eax
  int v11; // ebp
  __int64 v12; // rdx
  __m128i *v13; // rcx
  unsigned __int64 v14; // r9
  const __m128i *v15; // rdx
  unsigned __int64 v16; // rsi
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __m128i *v19; // rsi
  unsigned __int64 v20; // rax

  v5 = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v5;
  if ( (unsigned int)v5 <= 0x40 )
  {
    *(_QWORD *)a1 = 0;
    if ( !a3 )
    {
      v8 = *(_QWORD *)a2;
      goto LABEL_6;
    }
    v6 = nullptr;
    if ( a3 <= 0x40 )
    {
      v7 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)a3);
LABEL_5:
      *(_QWORD *)a1 = (unsigned __int64)v6 | v7;
      v8 = *(_QWORD *)a2;
LABEL_6:
      *(_QWORD *)a1 &= v8;
      return a1;
    }
    goto LABEL_8;
  }
  sub_2205470(a1, 0, 0);
  v5 = *(unsigned int *)(a1 + 8);
  if ( !a3 )
    goto LABEL_13;
  v6 = *(__m128i **)a1;
  if ( a3 > 0x40 )
  {
LABEL_8:
    v10 = a3 >> 6;
    v11 = a3 & 0x3F;
    if ( v11 )
    {
      v6->m128i_i64[v10] |= 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v11);
      v6 = *(__m128i **)a1;
    }
    v6->m128i_i64[0] = -1;
    if ( v10 != 1 )
    {
      v12 = 8;
      do
      {
        *(_QWORD *)(*(_QWORD *)a1 + v12) = -1;
        v12 += 8;
      }
      while ( v12 != 8LL * (v10 - 2) + 16 );
    }
LABEL_13:
    v8 = *(_QWORD *)a2;
    if ( (unsigned int)v5 <= 0x40 )
      goto LABEL_6;
    goto LABEL_14;
  }
  v7 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)a3);
  if ( (unsigned int)v5 <= 0x40 )
    goto LABEL_5;
  v6->m128i_i64[0] |= v7;
  v8 = *(_QWORD *)a2;
LABEL_14:
  v13 = *(__m128i **)a1;
  v14 = (unsigned __int64)(v5 + 63) >> 6;
  if ( v8 < *(_QWORD *)a1 + 16LL && *(_QWORD *)a1 < v8 + 16 || v14 - 1 <= 2 )
  {
    v19 = (__m128i *)((char *)v13 + 8 * v14);
    v20 = v8 - (_QWORD)v13;
    do
    {
      v13->m128i_i64[0] &= *(unsigned __int64 *)((char *)v13->m128i_u64 + v20);
      v13 = (__m128i *)((char *)v13 + 8);
    }
    while ( v19 != v13 );
    return a1;
  }
  v15 = *(const __m128i **)a1;
  v16 = (unsigned __int64)(v5 + 63) >> 7;
  do
  {
    v17 = _mm_loadu_si128((const __m128i *)((char *)v15 + v8 - (_QWORD)v13));
    v18 = _mm_loadu_si128(v15++);
    v15[-1] = _mm_and_si128(v17, v18);
  }
  while ( v15 != &v13[v16] );
  if ( v14 == 2 * v16 )
    return a1;
  v13[v16].m128i_i64[0] &= *(_QWORD *)(v8 + 16 * v16);
  return a1;
}
