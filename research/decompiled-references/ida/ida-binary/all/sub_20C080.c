__int64 __fastcall sub_20C080(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v7; // r12
  _QWORD *v8; // rbp
  size_t v9; // rbx
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // r12
  size_t v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 i; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm4
  void *v20; // r12
  unsigned __int64 v21; // rbx
  __int64 v22; // rdi
  size_t v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 j; // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 result; // rax
  __m128i v30; // xmm5
  __int64 v31; // rdi
  void *v32; // rax
  __int64 v33; // r15
  __int64 v34; // rax
  size_t v35; // rcx
  __int64 v36; // rbx
  size_t v37; // rdx
  __int64 v38; // r13
  __int64 v39; // rdi
  void *v40; // rax
  size_t v41; // rdx
  __int64 v42; // r15
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int64 v45; // rbx
  __int64 *v46; // r13
  __int64 v47; // rax
  size_t v48; // r12
  __int64 v49; // rdi
  void *v50; // rax
  void *v51; // rax
  __m128i v52; // [rsp+0h] [rbp-68h] BYREF
  __m128i n; // [rsp+10h] [rbp-58h] BYREF
  size_t v54; // [rsp+28h] [rbp-40h]

  v7 = nullptr;
  v8 = a2;
  v9 = a2[1];
  v10 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  if ( v9 )
  {
    v31 = a2[1];
    v52 = v10;
    v32 = (void *)qalloc_or_throw(v31);
    a2 = (_QWORD *)*a2;
    v7 = v32;
    memcpy(v32, a2, v9);
    v10 = _mm_load_si128(&v52);
  }
  v11 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    v52 = v10;
    qfree(v11, (const char *)a2);
    v10 = _mm_load_si128(&v52);
  }
  *a1 = v7;
  v12 = 0;
  *(__m128i *)(a1 + 1) = v10;
  v13 = v8[4];
  v52 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
  if ( v13 )
  {
    n.m128i_i64[0] = v13;
    v33 = 0;
    v34 = qalloc_or_throw(32 * v13);
    v35 = n.m128i_i64[0];
    v10 = 0;
    v12 = v34;
    v36 = v34;
    do
    {
      v38 = v8[3] + 32 * v33;
      *(_DWORD *)v36 = -2;
      *(_QWORD *)(v36 + 24) = 0;
      *(__m128i *)(v36 + 8) = v10;
      if ( v36 != v38 )
      {
        if ( *(int *)v38 >= -1 )
        {
          *(_QWORD *)(v36 + 8) = 0;
          *(_OWORD *)(v36 + 16) = 0;
          v37 = *(_QWORD *)(v38 + 16);
          if ( v37 )
          {
            v39 = *(_QWORD *)(v38 + 16);
            v54 = v35;
            n.m128i_i64[0] = v37;
            v40 = (void *)qalloc_or_throw(v39);
            v41 = n.m128i_i64[0];
            *(_QWORD *)(v36 + 8) = v40;
            *(_QWORD *)(v36 + 24) = v41;
            a2 = *(_QWORD **)(v38 + 8);
            memcpy(v40, a2, v41);
            v35 = v54;
            v10 = 0;
            *(_QWORD *)(v36 + 16) = n.m128i_i64[0];
          }
        }
        else
        {
          *(_QWORD *)(v36 + 8) = *(_QWORD *)(v38 + 8);
        }
        *(_DWORD *)v36 = *(_DWORD *)v38;
      }
      ++v33;
      v36 += 32;
    }
    while ( v35 != v33 );
  }
  v14 = a1[3];
  if ( v14 )
  {
    v15 = a1[4];
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = v14 + 32 * i;
        if ( *(int *)v17 >= -1 )
        {
          v18 = *(_QWORD *)(v17 + 8);
          if ( v18 )
          {
            *(_QWORD *)(v17 + 16) = 0;
            qfree(v18, (const char *)a2);
            v14 = a1[3];
          }
        }
      }
    }
    a1[4] = 0;
    *(double *)v10.m128i_i64 = qfree(v14, (const char *)a2);
  }
  v19 = _mm_load_si128(&v52);
  a1[3] = v12;
  v20 = nullptr;
  *((__m128i *)a1 + 2) = v19;
  v21 = v8[7];
  if ( v21 )
  {
    v51 = (void *)qalloc_or_throw(8 * v21);
    a2 = (_QWORD *)v8[6];
    v20 = v51;
    memcpy(v51, a2, 8 * v21);
  }
  v22 = a1[6];
  if ( v22 )
  {
    a1[7] = 0;
    qfree(v22, (const char *)a2, *(double *)v10.m128i_i64);
  }
  a1[6] = v20;
  v52.m128i_i64[0] = 0;
  *(__m128i *)(a1 + 7) = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
  v23 = v8[10];
  n = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
  if ( v23 )
  {
    v54 = v23;
    v42 = 0;
    v43 = qalloc_or_throw(32 * v23);
    v23 = v54;
    v44 = 0;
    v52.m128i_i64[0] = v43;
    v45 = v43;
    do
    {
      v46 = (__int64 *)(v8[9] + 32 * v42);
      v47 = *v46;
      *(_QWORD *)(v45 + 8) = 0;
      *(_OWORD *)(v45 + 16) = v44;
      *(_QWORD *)v45 = v47;
      v48 = v46[2];
      if ( v48 )
      {
        v49 = v46[2];
        v54 = v23;
        v50 = (void *)qalloc_or_throw(v49);
        *(_QWORD *)(v45 + 24) = v48;
        *(_QWORD *)(v45 + 8) = v50;
        a2 = (_QWORD *)v46[1];
        memcpy(v50, a2, v48);
        *(_QWORD *)(v45 + 16) = v48;
        v23 = v54;
        v44 = 0;
      }
      ++v42;
      v45 += 32;
    }
    while ( v23 != v42 );
  }
  v24 = a1[9];
  if ( v24 )
  {
    v25 = a1[10];
    if ( v25 )
    {
      for ( j = 0; j != v25; ++j )
      {
        v27 = v24 + 32 * j;
        v28 = *(_QWORD *)(v27 + 8);
        if ( v28 )
        {
          *(_QWORD *)(v27 + 16) = 0;
          qfree(v28, (const char *)a2);
          v24 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v24, (const char *)a2, v24, v23, a5, a6, *(_OWORD *)&v52, n.m128i_i64[0], n.m128i_i64[1]);
  }
  result = v52.m128i_i64[0];
  v30 = _mm_load_si128(&n);
  a1[9] = v52.m128i_i64[0];
  *((__m128i *)a1 + 5) = v30;
  return result;
}
