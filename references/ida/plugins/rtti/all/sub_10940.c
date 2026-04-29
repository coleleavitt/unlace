unsigned __int64 __fastcall sub_10940(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v3; // rbx
  void *v6; // rax
  const void *v7; // rsi
  const char *v8; // rax
  const char *v9; // r14
  size_t v10; // rax
  __int64 v11; // r12
  size_t v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  char *v16; // rbx
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  unsigned __int64 v19; // rax
  __m128i v20; // xmm0
  unsigned __int64 v21; // rax
  int v22; // ebp
  size_t v23; // rax
  unsigned __int64 v24; // r12
  size_t v25; // r13
  __int64 extra_cmt; // rax
  char *v27; // r14
  const char *v28; // rsi
  unsigned __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // rbx
  _QWORD *v32; // rax
  char *v34; // rdx
  const char *v35; // rsi
  unsigned __int64 v36; // rdx
  __int64 v37; // rbp
  __int64 v38; // rbx
  _QWORD *v39; // rax
  int first_free_extra_cmtidx; // [rsp+0h] [rbp-B8h]
  __m128i v41; // [rsp+10h] [rbp-A8h] BYREF
  void *v42; // [rsp+20h] [rbp-98h]
  __m128i v43; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v44; // [rsp+40h] [rbp-78h]
  __int128 v45; // [rsp+48h] [rbp-70h]
  char *s1; // [rsp+60h] [rbp-58h] BYREF
  __m128i v47; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-40h]

  v41.m128i_i64[1] = a3;
  v48 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a3 + 8);
  if ( v3 <= 1 )
    return v48 - __readfsqword(0x28u);
  v44 = 0;
  v45 = 0;
  v6 = (void *)qalloc_or_throw();
  v7 = *(const void **)a3;
  v42 = v6;
  memcpy(v6, v7, v3);
  while ( 1 )
  {
    v8 = (const char *)qstrtok();
    v9 = v8;
    if ( !v8 )
      break;
    s1 = 0;
    v47 = 0;
    v10 = strlen(v8);
    v11 = v10 + 1;
    v12 = v10;
    s1 = (char *)qvector_reserve();
    v47.m128i_i64[0] = v11;
    memmove(s1, v9, v12);
    s1[v12] = 0;
    v13 = v45;
    v14 = v44;
    v15 = v45 + 1;
    if ( (unsigned __int64)&s1 < v44 || (unsigned __int64)&s1 >= v44 + 24LL * *((_QWORD *)&v45 + 1) )
    {
      if ( *((_QWORD *)&v45 + 1) < v15 )
      {
        v44 = qvector_reserve();
        v14 = v44;
        v13 = v45;
      }
      v20 = _mm_loadu_si128(&v47);
      v21 = v14 + 24 * v13;
      *(_QWORD *)v21 = s1;
      *(__m128i *)(v21 + 8) = v20;
      *(_QWORD *)&v45 = v45 + 1;
    }
    else
    {
      v16 = s1;
      v17 = _mm_loadl_epi64(&v47);
      s1 = 0;
      v18 = _mm_loadl_epi64((const __m128i *)&v47.m128i_u64[1]);
      v47 = 0;
      if ( *((_QWORD *)&v45 + 1) < v15 )
      {
        v43.m128i_i64[0] = v18.m128i_i64[0];
        v41.m128i_i64[0] = v17.m128i_i64[0];
        v44 = qvector_reserve();
        v14 = v44;
        v18 = _mm_loadl_epi64(&v43);
        v13 = v45;
        v17 = _mm_loadl_epi64(&v41);
      }
      v19 = v14 + 24 * v13;
      *(_QWORD *)v19 = v16;
      *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v17, v18);
      *(_QWORD *)&v45 = v45 + 1;
      if ( s1 )
      {
        v47.m128i_i64[0] = 0;
        qfree();
      }
    }
  }
  first_free_extra_cmtidx = get_first_free_extra_cmtidx();
  if ( first_free_extra_cmtidx - 1000 < (unsigned __int64)v45 )
    goto LABEL_24;
  v22 = first_free_extra_cmtidx - v45;
  v23 = strlen(*(const char **)(*(_QWORD *)(a1 + 40) + 48LL));
  v24 = v44;
  v25 = v23;
  if ( first_free_extra_cmtidx <= v22 )
    goto LABEL_23;
  v41.m128i_i64[0] = v23 + 1;
  while ( 1 )
  {
    s1 = 0;
    v47 = 0;
    extra_cmt = get_extra_cmt();
    v27 = s1;
    if ( extra_cmt < 0 )
      break;
    v28 = *(const char **)(*(_QWORD *)(a1 + 40) + 48LL);
    if ( !v28 )
    {
      v34 = (char *)&unk_15249;
      if ( !(v25 | v47.m128i_i64[0]) )
        goto LABEL_36;
      goto LABEL_35;
    }
    if ( v25 )
    {
      if ( !v47.m128i_i64[0] || v47.m128i_i64[0] - 1 < v25 || strncmp(s1, v28, v25) )
        break;
LABEL_35:
      v34 = &v27[v25];
      goto LABEL_36;
    }
    v34 = (char *)&unk_15249;
    if ( v47.m128i_i64[0] )
      goto LABEL_35;
LABEL_36:
    if ( *v34 != 32 )
      break;
    v35 = &haystack;
    if ( *(_QWORD *)(v24 + 8) )
      v35 = *(const char **)v24;
    if ( strcmp(&v27[v41.m128i_i64[0]], v35) )
      break;
    v24 += 24LL;
    ++v22;
    if ( v27 )
    {
      v47.m128i_i64[0] = 0;
      qfree();
    }
    if ( first_free_extra_cmtidx <= v22 )
      goto LABEL_23;
  }
  if ( v27 )
  {
    v47.m128i_i64[0] = 0;
    qfree();
  }
LABEL_23:
  if ( first_free_extra_cmtidx == v22 )
  {
    if ( v42 )
      qfree();
    v36 = v44;
    if ( v44 )
    {
      v37 = v45;
      if ( (_QWORD)v45 )
      {
        v38 = 0;
        do
        {
          v39 = (_QWORD *)(v36 + 24 * v38);
          if ( *v39 )
          {
            v39[1] = 0;
            qfree();
            v36 = v44;
          }
          ++v38;
        }
        while ( v37 != v38 );
      }
LABEL_32:
      *(_QWORD *)&v45 = 0;
      qfree();
    }
  }
  else
  {
LABEL_24:
    sub_FE50();
    if ( v42 )
      qfree();
    v29 = v44;
    if ( v44 )
    {
      v30 = v45;
      if ( (_QWORD)v45 )
      {
        v31 = 0;
        do
        {
          v32 = (_QWORD *)(v29 + 24 * v31);
          if ( *v32 )
          {
            v32[1] = 0;
            qfree();
            v29 = v44;
          }
          ++v31;
        }
        while ( v30 != v31 );
      }
      goto LABEL_32;
    }
  }
  return v48 - __readfsqword(0x28u);
}
