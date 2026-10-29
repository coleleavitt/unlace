__int64 __fastcall sub_9D240(_QWORD *a1, __int64 a2)
{
  void *v3; // r12
  size_t v4; // rbx
  __m128i v5; // xmm0
  __int64 v6; // r12
  size_t v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 i; // rbx
  __int64 v11; // rax
  __m128i v12; // xmm4
  void *v13; // r12
  unsigned __int64 v14; // rbx
  size_t v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 j; // rbx
  __int64 v19; // rax
  __int64 result; // rax
  __m128i si128; // xmm5
  __int64 v22; // r15
  __int64 v23; // rax
  size_t v24; // rcx
  __int128 v25; // xmm0
  __int64 v26; // rbx
  size_t v27; // rdx
  __int64 v28; // r13
  void *v29; // rax
  size_t v30; // rdx
  __int64 v31; // r15
  __int64 v32; // rax
  size_t v33; // rcx
  __int128 v34; // xmm0
  __int64 v35; // rbx
  __int64 v36; // r13
  __int64 v37; // rax
  size_t v38; // r12
  void *v39; // rax
  __m128i v40; // [rsp+0h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+10h] [rbp-58h] BYREF
  size_t v42; // [rsp+28h] [rbp-40h]

  v3 = nullptr;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    v40 = v5;
    v3 = (void *)qalloc_or_throw();
    memcpy(v3, *(const void **)a2, v4);
    v5 = _mm_load_si128(&v40);
  }
  if ( *a1 )
  {
    a1[1] = 0;
    v40 = v5;
    qfree();
    v5 = _mm_load_si128(&v40);
  }
  *a1 = v3;
  v6 = 0;
  *(__m128i *)(a1 + 1) = v5;
  v7 = *(_QWORD *)(a2 + 32);
  v40 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  if ( v7 )
  {
    n[0] = v7;
    v22 = 0;
    v23 = qalloc_or_throw();
    v24 = n[0];
    v25 = 0;
    v6 = v23;
    v26 = v23;
    do
    {
      v28 = *(_QWORD *)(a2 + 24) + 32 * v22;
      *(_DWORD *)v26 = -2;
      *(_QWORD *)(v26 + 24) = 0;
      *(_OWORD *)(v26 + 8) = v25;
      if ( v26 != v28 )
      {
        if ( *(int *)v28 >= -1 )
        {
          *(_QWORD *)(v26 + 8) = 0;
          *(_OWORD *)(v26 + 16) = 0;
          v27 = *(_QWORD *)(v28 + 16);
          if ( v27 )
          {
            v42 = v24;
            n[0] = v27;
            v29 = (void *)qalloc_or_throw();
            v30 = n[0];
            *(_QWORD *)(v26 + 8) = v29;
            *(_QWORD *)(v26 + 24) = v30;
            memcpy(v29, *(const void **)(v28 + 8), v30);
            v24 = v42;
            v25 = 0;
            *(_QWORD *)(v26 + 16) = n[0];
          }
        }
        else
        {
          *(_QWORD *)(v26 + 8) = *(_QWORD *)(v28 + 8);
        }
        *(_DWORD *)v26 = *(_DWORD *)v28;
      }
      ++v22;
      v26 += 32;
    }
    while ( v24 != v22 );
  }
  v8 = a1[3];
  if ( v8 )
  {
    v9 = a1[4];
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = v8 + 32 * i;
        if ( *(int *)v11 >= -1 && *(_QWORD *)(v11 + 8) )
        {
          *(_QWORD *)(v11 + 16) = 0;
          qfree();
          v8 = a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree();
  }
  v12 = _mm_load_si128(&v40);
  a1[3] = v6;
  v13 = nullptr;
  *((__m128i *)a1 + 2) = v12;
  v14 = *(_QWORD *)(a2 + 56);
  if ( v14 )
  {
    v13 = (void *)qalloc_or_throw();
    memcpy(v13, *(const void **)(a2 + 48), 8 * v14);
  }
  if ( a1[6] )
  {
    a1[7] = 0;
    qfree();
  }
  a1[6] = v13;
  v40.m128i_i64[0] = 0;
  *(__m128i *)(a1 + 7) = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
  v15 = *(_QWORD *)(a2 + 80);
  *(__m128i *)n = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
  if ( v15 )
  {
    v42 = v15;
    v31 = 0;
    v32 = qalloc_or_throw();
    v33 = v42;
    v34 = 0;
    v40.m128i_i64[0] = v32;
    v35 = v32;
    do
    {
      v36 = *(_QWORD *)(a2 + 72) + 32 * v31;
      v37 = *(_QWORD *)v36;
      *(_QWORD *)(v35 + 8) = 0;
      *(_OWORD *)(v35 + 16) = v34;
      *(_QWORD *)v35 = v37;
      v38 = *(_QWORD *)(v36 + 16);
      if ( v38 )
      {
        v42 = v33;
        v39 = (void *)qalloc_or_throw();
        *(_QWORD *)(v35 + 24) = v38;
        *(_QWORD *)(v35 + 8) = v39;
        memcpy(v39, *(const void **)(v36 + 8), v38);
        *(_QWORD *)(v35 + 16) = v38;
        v33 = v42;
        v34 = 0;
      }
      ++v31;
      v35 += 32;
    }
    while ( v33 != v31 );
  }
  v16 = a1[9];
  if ( v16 )
  {
    v17 = a1[10];
    if ( v17 )
    {
      for ( j = 0; j != v17; ++j )
      {
        v19 = v16 + 32 * j;
        if ( *(_QWORD *)(v19 + 8) )
        {
          *(_QWORD *)(v19 + 16) = 0;
          qfree();
          v16 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree();
  }
  result = v40.m128i_i64[0];
  si128 = _mm_load_si128((const __m128i *)n);
  a1[9] = v40.m128i_i64[0];
  *((__m128i *)a1 + 5) = si128;
  return result;
}

