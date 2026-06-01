unsigned __int64 __fastcall sub_2496F0(__int64 a1, const char *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  const char *v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 *v23; // rax
  __int64 v24; // rdi
  const char *v25; // rsi
  __int64 v26; // rdi
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v35; // r15
  __int64 i; // r9
  __int64 v37; // r8
  void *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // r15
  __int64 *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rdi
  void *v44; // rax
  __int64 v45; // [rsp+0h] [rbp-98h]
  size_t na; // [rsp+8h] [rbp-90h]
  size_t nb; // [rsp+8h] [rbp-90h]
  size_t n; // [rsp+8h] [rbp-90h]
  const void **v49; // [rsp+10h] [rbp-88h]
  __int64 v50; // [rsp+10h] [rbp-88h]
  __int64 v51; // [rsp+18h] [rbp-80h]
  __int64 v52; // [rsp+18h] [rbp-80h]
  const char *v53; // [rsp+20h] [rbp-78h] BYREF
  __int128 v54; // [rsp+28h] [rbp-70h]
  __int64 v55; // [rsp+40h] [rbp-58h] BYREF
  __m128i v56; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v57; // [rsp+58h] [rbp-40h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v57 = __readfsqword(0x28u);
  if ( v3 )
  {
    do
    {
      v5 = (__int64 *)(*(_QWORD *)a1 + 48 * v2);
      v6 = v5[3];
      if ( v6 )
      {
        v5[4] = 0;
        qfree(v6, a2);
      }
      v7 = *v5;
      if ( *v5 )
      {
        v5[1] = 0;
        qfree(v7, a2);
      }
      ++v2;
    }
    while ( v3 != v2 );
  }
  *(_QWORD *)(a1 + 8) = 0;
  v54 = 0;
  v53 = nullptr;
  getinf_str(&v53, 86);
  v55 = 0;
  v10 = &s1;
  v56 = 0;
  if ( (_QWORD)v54 )
    v10 = v53;
  sub_23AAB0(&v55, v10, v8, v9, 0.0);
  v11 = v56.m128i_i64[0];
  if ( v56.m128i_i64[0] )
  {
    v12 = v56.m128i_i64[0];
    v45 = v55;
    v13 = v56.m128i_i64[1];
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 )
    {
      v45 = qalloc_or_throw(48 * v12);
      v35 = v45;
      for ( i = 0; i != v12; ++i )
      {
        v37 = *(_QWORD *)(a1 + 48) + 48 * i;
        *(_QWORD *)v35 = 0;
        *(_OWORD *)(v35 + 8) = 0;
        if ( *(_QWORD *)(v37 + 8) )
        {
          v51 = i;
          v49 = (const void **)v37;
          na = *(_QWORD *)(v37 + 8);
          v38 = (void *)qalloc_or_throw(na);
          *(_QWORD *)v35 = v38;
          *(_QWORD *)(v35 + 16) = na;
          v10 = (const char *)*v49;
          memcpy(v38, *v49, na);
          i = v51;
          v37 = (__int64)v49;
          *(_QWORD *)(v35 + 8) = na;
        }
        *(_QWORD *)(v35 + 24) = 0;
        *(_OWORD *)(v35 + 32) = 0;
        if ( *(_QWORD *)(v37 + 32) )
        {
          v52 = i;
          v50 = v37;
          n = *(_QWORD *)(v37 + 32);
          v44 = (void *)qalloc_or_throw(n);
          *(_QWORD *)(v35 + 24) = v44;
          *(_QWORD *)(v35 + 40) = n;
          v10 = *(const char **)(v50 + 24);
          memcpy(v44, v10, n);
          i = v52;
          *(_QWORD *)(v35 + 32) = n;
        }
        v35 += 48;
      }
      v39 = v55;
      if ( v55 )
      {
        v40 = v56.m128i_i64[0];
        if ( v56.m128i_i64[0] )
        {
          do
          {
            v41 = (__int64 *)(v39 + 48 * v11);
            v42 = v41[3];
            if ( v42 )
            {
              v41[4] = 0;
              nb = (size_t)v41;
              qfree(v42, v10);
              v41 = (__int64 *)nb;
            }
            v43 = *v41;
            if ( *v41 )
            {
              v41[1] = 0;
              qfree(v43, v10);
            }
            ++v11;
            v39 = v55;
          }
          while ( v40 != v11 );
        }
        v56.m128i_i64[0] = 0;
        qfree(v39, v10);
      }
      v13 = v12;
    }
    else
    {
      v45 = v55;
      v13 = v56.m128i_i64[1];
    }
  }
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v15 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v12;
  *(_QWORD *)(a1 + 16) = v13;
  v55 = v15;
  *(_QWORD *)a1 = v45;
  v56 = v14;
  if ( v15 )
  {
    v16 = v14.m128i_i64[0];
    if ( v14.m128i_i64[0] )
    {
      v17 = 0;
      do
      {
        v18 = (__int64 *)(v15 + 48 * v17);
        v19 = v18[3];
        if ( v19 )
        {
          v18[4] = 0;
          *(double *)v14.m128i_i64 = qfree(v19, v10);
        }
        v20 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          *(double *)v14.m128i_i64 = qfree(v20, v10, *(double *)v14.m128i_i64);
        }
        ++v17;
        v15 = v55;
      }
      while ( v16 != v17 );
    }
    v56.m128i_i64[0] = 0;
    *(double *)v14.m128i_i64 = qfree(v15, v10);
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    *(double *)v14.m128i_i64 = qfree(v53, v10, *(double *)v14.m128i_i64);
  }
  v21 = *(_QWORD *)(a1 + 32);
  v22 = 0;
  if ( v21 )
  {
    do
    {
      v23 = (__int64 *)(*(_QWORD *)(a1 + 24) + 24 * v22);
      v24 = *v23;
      if ( *v23 )
      {
        v23[1] = 0;
        *(double *)v14.m128i_i64 = qfree(v24, v10, *(double *)v14.m128i_i64);
      }
      ++v22;
    }
    while ( v21 != v22 );
  }
  *(_QWORD *)(a1 + 32) = 0;
  v53 = nullptr;
  v54 = 0;
  getinf_str(&v53, 87);
  v55 = 0;
  v25 = &s1;
  v56 = 0;
  if ( (_QWORD)v54 )
    v25 = v53;
  sub_23B030((__int64)&v55, v25);
  v26 = *(_QWORD *)(a1 + 24);
  v27 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v28 = _mm_loadu_si128(&v56);
  *(_QWORD *)(a1 + 24) = v55;
  v29 = v26;
  v55 = v26;
  *(__m128i *)(a1 + 32) = v28;
  v56 = v27;
  if ( v26 )
  {
    v30 = v27.m128i_i64[0];
    if ( v27.m128i_i64[0] )
    {
      v31 = 0;
      do
      {
        v32 = (__int64 *)(v26 + 24 * v31);
        v33 = *v32;
        if ( *v32 )
        {
          v32[1] = 0;
          qfree(v33, v25, v29);
          v29 = v55;
        }
        ++v31;
        v26 = v29;
      }
      while ( v31 != v30 );
    }
    v56.m128i_i64[0] = 0;
    *(double *)v27.m128i_i64 = qfree(v26, v25, v29);
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53, v25, v29, *(double *)v27.m128i_i64);
  }
  return v57 - __readfsqword(0x28u);
}
