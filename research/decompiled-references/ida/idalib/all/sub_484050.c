__int64 __fastcall sub_484050(__int64 a1, __int64 a2, __int64 a3)
{
  const __m128i *v4; // r14
  unsigned __int64 *v5; // rdx
  const __m128i *v6; // rbp
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r8
  const __m128i *v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  const __m128i *v16; // rax
  __int64 v17; // r9
  __m128i *v18; // r8
  signed __int64 v19; // r15
  __int64 v20; // rdx
  unsigned __int64 v21; // r13
  __int64 v22; // rcx
  __m128i *v23; // rbx
  __int64 v24; // rsi
  unsigned __int64 v25; // r9
  char *v26; // r10
  __m128i v27; // xmm0
  size_t v28; // r15
  __int64 v29; // rax
  __m128i v30; // xmm1
  size_t v31; // r15
  void *v32; // rax
  void *v33; // rax
  __int64 v34; // rax
  char *v35; // [rsp+8h] [rbp-40h]

  v4 = *(const __m128i **)(a2 + 48);
  v5 = (unsigned __int64 *)(**(_QWORD **)(a1 + 40) + 16 * a3);
  v6 = v4;
  v7 = *v5;
  result = 80LL * *(_QWORD *)(a2 + 56);
  v9 = *v5 + 1;
  v10 = 0xCCCCCCCCCCCCCCCDLL * (result >> 4);
  v11 = v10;
  if ( result <= 0 )
  {
    v17 = *(_QWORD *)(a1 + 56);
    v18 = *(__m128i **)(a1 + 48);
    v19 = 0;
    v21 = 0;
    v20 = 80 * v17;
    v22 = 0xCCCCCCCCCCCCCCCDLL * ((80 * v17) >> 4);
    if ( 80 * v17 <= 0 )
      return result;
    goto LABEL_15;
  }
  do
  {
    while ( 1 )
    {
      v12 = v11 >> 1;
      v13 = &v6[5 * (v11 >> 1)];
      if ( v7 >= v13->m128i_i64[0] && (v7 != v13->m128i_i64[0] || v13->m128i_i64[1] < v9) )
        break;
      v11 >>= 1;
      if ( v12 <= 0 )
        goto LABEL_8;
    }
    v6 = v13 + 5;
    v11 = v11 - 1 - v12;
  }
  while ( v11 > 0 );
LABEL_8:
  v14 = v5[1];
  do
  {
    while ( 1 )
    {
      v15 = v10 >> 1;
      v16 = &v4[5 * (v10 >> 1)];
      if ( v14 >= v16->m128i_i64[0] && (v14 != v16->m128i_i64[0] || v16->m128i_i64[1] < v14 + 1) )
        break;
      v10 >>= 1;
      if ( v15 <= 0 )
        goto LABEL_14;
    }
    v4 = v16 + 5;
    v10 = v10 - 1 - v15;
  }
  while ( v10 > 0 );
LABEL_14:
  v17 = *(_QWORD *)(a1 + 56);
  v18 = *(__m128i **)(a1 + 48);
  result = 0xCCCCCCCCCCCCCCCDLL;
  v19 = (char *)v4 - (char *)v6;
  v20 = 80 * v17;
  v21 = 0xCCCCCCCCCCCCCCCDLL * (v4 - v6);
  v22 = 0xCCCCCCCCCCCCCCCDLL * ((80 * v17) >> 4);
  if ( 80 * v17 > 0 )
  {
LABEL_15:
    v23 = v18;
    do
    {
      while ( 1 )
      {
        v24 = v22 >> 1;
        result = (__int64)v23[5 * (v22 >> 1)].m128i_i64;
        if ( v7 >= *(_QWORD *)result && (v7 != *(_QWORD *)result || *(_QWORD *)(result + 8) < v9) )
          break;
        v22 >>= 1;
        if ( v24 <= 0 )
          goto LABEL_21;
      }
      v23 = (__m128i *)(result + 80);
      v22 = v22 - 1 - v24;
    }
    while ( v22 > 0 );
    goto LABEL_21;
  }
  v23 = *(__m128i **)(a1 + 48);
LABEL_21:
  if ( v21 )
  {
    v25 = v21 + v17;
    v26 = (char *)((char *)v23 - (char *)v18);
    if ( *(_QWORD *)(a1 + 64) < v25 )
    {
      v35 = (char *)((char *)v23 - (char *)v18);
      v34 = qvector_reserve(a1 + 48, v18, v25, 80);
      v26 = v35;
      *(_QWORD *)(a1 + 48) = v34;
      v23 = (__m128i *)&v35[v34];
      v20 = 80LL * *(_QWORD *)(a1 + 56);
    }
    result = (__int64)memmove(&v23->m128i_i8[v19], v23, v20 - (_QWORD)v26);
    if ( v6 != v4 )
    {
      v27 = 0;
      do
      {
        v30 = _mm_loadu_si128(v6);
        v23[1].m128i_i64[0] = 0;
        *(__m128i *)((char *)v23 + 24) = v27;
        *v23 = v30;
        v31 = v6[1].m128i_u64[1];
        if ( v31 )
        {
          v32 = (void *)qalloc_or_throw(v6[1].m128i_i64[1]);
          v23[2].m128i_i64[0] = v31;
          v23[1].m128i_i64[0] = (__int64)v32;
          memcpy(v32, (const void *)v6[1].m128i_i64[0], v31);
          v23[1].m128i_i64[1] = v31;
          v27 = 0;
        }
        v23[2].m128i_i64[1] = 0;
        v23[3] = v27;
        v28 = v6[3].m128i_u64[0];
        if ( v28 )
        {
          v33 = (void *)qalloc_or_throw(v6[3].m128i_i64[0]);
          v23[2].m128i_i64[1] = (__int64)v33;
          v23[3].m128i_i64[1] = v28;
          memcpy(v33, (const void *)v6[2].m128i_i64[1], v28);
          v23[3].m128i_i64[0] = v28;
          v27 = 0;
        }
        v29 = v6[4].m128i_i64[0];
        v6 += 5;
        v23 += 5;
        v23[-1].m128i_i64[0] = v29;
        result = v6[-1].m128i_u16[4];
        v23[-1].m128i_i16[4] = result;
      }
      while ( v6 != v4 );
    }
    *(_QWORD *)(a1 + 56) += v21;
  }
  return result;
}
