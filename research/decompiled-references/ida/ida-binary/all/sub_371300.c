__m128i *__fastcall sub_371300(__m128i *a1, _QWORD *a2)
{
  _QWORD *v2; // r15
  size_t v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  __m128i si128; // xmm3
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 k; // rbp
  __int64 v15; // rax
  __int64 v16; // rdi
  __m128i v17; // xmm4
  __int64 v18; // rdx
  __int64 j; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  size_t v23; // r8
  __int128 v24; // xmm0
  __int64 v25; // rbp
  __int64 v26; // r14
  int v27; // eax
  __int64 v28; // r13
  void *v29; // rax
  size_t v30; // rdx
  __int64 v31; // r13
  __int128 v32; // xmm0
  _QWORD *v33; // rbp
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r14
  void *v37; // rax
  size_t v38; // rdx
  __m128i v39; // xmm5
  size_t v40[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v41; // [rsp+10h] [rbp-58h]
  size_t n; // [rsp+18h] [rbp-50h]
  __m128i v43[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v4 = a2[1];
  v41 = nullptr;
  *(__m128i *)v40 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    n = v4;
    v21 = 0;
    v22 = qalloc_or_throw(40 * v4);
    v23 = n;
    v24 = 0;
    v41 = (_QWORD *)v22;
    v25 = v22;
    do
    {
      v26 = *v2 + 40 * v21;
      *(_QWORD *)v25 = *(_QWORD *)v26;
      v27 = *(_DWORD *)(v26 + 8);
      *(_QWORD *)(v25 + 16) = 0;
      *(_DWORD *)(v25 + 8) = v27;
      *(_OWORD *)(v25 + 24) = v24;
      v28 = *(_QWORD *)(v26 + 24);
      if ( v28 )
      {
        v43[0].m128i_i64[0] = v23;
        n = 8 * v28;
        v29 = (void *)qalloc_or_throw(8 * v28);
        *(_QWORD *)(v25 + 32) = v28;
        v30 = n;
        *(_QWORD *)(v25 + 16) = v29;
        a2 = *(_QWORD **)(v26 + 16);
        memcpy(v29, a2, v30);
        *(_QWORD *)(v25 + 24) = v28;
        v23 = v43[0].m128i_i64[0];
        v24 = 0;
      }
      ++v21;
      v25 += 40;
    }
    while ( v23 != v21 );
  }
  v5 = a1->m128i_i64[0];
  if ( a1->m128i_i64[0] )
  {
    v6 = a1->m128i_i64[1];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = v5 + 40 * i;
        v9 = *(_QWORD *)(v8 + 16);
        if ( v9 )
        {
          *(_QWORD *)(v8 + 24) = 0;
          qfree(v9, (const char *)a2);
          v5 = a1->m128i_i64[0];
        }
      }
    }
    a1->m128i_i64[1] = 0;
    qfree(v5, (const char *)a2);
  }
  si128 = _mm_load_si128((const __m128i *)v40);
  a1->m128i_i64[0] = (__int64)v41;
  *(__m128i *)((char *)a1 + 8) = si128;
  a1[1].m128i_i64[1] = v2[3];
  a1[2].m128i_i64[0] = v2[4];
  v11 = v2[6];
  v43[0] = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  if ( v11 )
  {
    v31 = 0;
    v32 = 0;
    v41 = (_QWORD *)qalloc_or_throw(40 * v11);
    v33 = v41;
    do
    {
      while ( 1 )
      {
        v34 = (_QWORD *)(v2[5] + 40 * v31);
        *v33 = *v34;
        v35 = v34[1];
        v33[2] = 0;
        v33[1] = v35;
        *(_OWORD *)(v33 + 3) = v32;
        v36 = v34[3];
        if ( v36 )
          break;
        ++v31;
        v33 += 5;
        if ( v11 == v31 )
          goto LABEL_29;
      }
      n = (size_t)v34;
      ++v31;
      v33 += 5;
      v40[0] = 8 * v36;
      v37 = (void *)qalloc_or_throw(8 * v36);
      v38 = n;
      *(v33 - 1) = v36;
      *(v33 - 3) = v37;
      a2 = *(_QWORD **)(v38 + 16);
      memcpy(v37, a2, v40[0]);
      *(v33 - 2) = v36;
      v32 = 0;
    }
    while ( v11 != v31 );
LABEL_29:
    v12 = a1[2].m128i_i64[1];
    if ( !v12 )
    {
      v39 = _mm_load_si128(v43);
      a1[2].m128i_i64[1] = (__int64)v41;
      a1[3] = v39;
LABEL_17:
      v18 = 40;
      *v41 = a1;
      for ( j = 1; j != v11; v18 += 40 )
      {
        ++j;
        *(_QWORD *)(a1[2].m128i_i64[1] + v18) = a1;
      }
      return a1;
    }
  }
  else
  {
    v41 = nullptr;
    v12 = a1[2].m128i_i64[1];
    if ( !v12 )
    {
      a1[3] = 0;
      return a1;
    }
  }
  v13 = a1[3].m128i_i64[0];
  if ( v13 )
  {
    for ( k = 0; k != v13; ++k )
    {
      v15 = v12 + 40 * k;
      v16 = *(_QWORD *)(v15 + 16);
      if ( v16 )
      {
        *(_QWORD *)(v15 + 24) = 0;
        qfree(v16, (const char *)a2);
        v12 = a1[2].m128i_i64[1];
      }
    }
  }
  a1[3].m128i_i64[0] = 0;
  qfree(v12, (const char *)a2);
  v17 = _mm_load_si128(v43);
  a1[2].m128i_i64[1] = (__int64)v41;
  a1[3] = v17;
  if ( v11 )
    goto LABEL_17;
  return a1;
}
