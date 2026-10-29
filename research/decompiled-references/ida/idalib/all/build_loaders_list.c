void *__fastcall build_loaders_list(char *a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // rbp
  __m128i v4; // xmm0
  char *v5; // rdi
  void *v6; // r14
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbp
  char *v10; // rbx
  void *v11; // rdi
  void *v12; // rdi
  size_t v14; // r12
  _QWORD *idp_descs; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rbp
  size_t v20; // rax
  char *v21; // r15
  size_t v22; // rbx
  char *v23; // rax
  const char *v24; // rsi
  const char *v25; // rdi
  char *v26; // r15
  int v27; // ebx
  unsigned __int64 v28; // r15
  char *v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // r14
  __int64 v32; // r13
  char *v33; // rbx
  void *v34; // rdi
  void *v35; // rdi
  __m128i si128; // xmm4
  _QWORD *v37; // rbx
  __int64 v38; // r12
  __int64 v39; // rbp
  __int64 v40; // r14
  __int64 v41; // r14
  void *v42; // rax
  size_t v43; // rdx
  void *v44; // rax
  size_t v45; // rdx
  __m128 v46; // [rsp+0h] [rbp-108h] BYREF
  char *v47; // [rsp+10h] [rbp-F8h]
  _QWORD *v48; // [rsp+18h] [rbp-F0h]
  size_t n[2]; // [rsp+20h] [rbp-E8h] BYREF
  __m128 v50; // [rsp+30h] [rbp-D8h] BYREF
  char *s2[4]; // [rsp+40h] [rbp-C8h] BYREF
  char *v52; // [rsp+60h] [rbp-A8h] BYREF
  void *v53[2]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v54; // [rsp+80h] [rbp-88h]
  void *ptr; // [rsp+90h] [rbp-78h]
  __m128i v56; // [rsp+98h] [rbp-70h]
  char s[24]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+C8h] [rbp-40h]

  v47 = a1;
  v58 = __readfsqword(0x28u);
  v52 = a1;
  ptr = nullptr;
  v54 = 0;
  v56 = 0;
  *(_OWORD *)v53 = 0;
  if ( a2 )
  {
    a1 = (char *)a2;
    v2 = strlen(a2);
    v3 = v2;
    if ( v2 )
    {
      v14 = v2 + 1;
      a1 = (char *)qvector_reserve(&v53[1], 0, v2 + 1, 1);
      v53[1] = a1;
      *(_QWORD *)&v54 = v14;
      memmove(a1, a2, v3);
      *((_BYTE *)v53[1] + v3) = 0;
    }
  }
  v46.m128_u64[0] = (unsigned __int64)&v52;
  v50 = _mm_loadh_ps((const double *)v46.m128_u64);
  if ( *(_BYTE *)(qword_2CCB598 + 157) )
  {
    idp_descs = (_QWORD *)get_idp_descs(a1);
    v16 = idp_descs[1];
    v17 = *idp_descs;
    v48 = idp_descs;
    v18 = v17;
    if ( 88 * v16 )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(v18 + 56);
        if ( 56LL * *(_QWORD *)(v18 + 64) )
          break;
LABEL_42:
        v18 += 88;
        if ( v18 == v17 + 88 * v16 )
          goto LABEL_5;
      }
      while ( 1 )
      {
        if ( !getinf_buf(1, s, 16) )
          s[0] = 0;
        memset(s2, 0, 24);
        v20 = strlen(s);
        v21 = (char *)(v20 + 1);
        v22 = v20;
        v23 = (char *)qvector_reserve(s2, 0, v20 + 1, 1);
        s2[1] = v21;
        s2[0] = v23;
        memmove(v23, s, v22);
        v24 = haystack;
        v25 = haystack;
        s2[0][v22] = 0;
        v26 = s2[0];
        if ( s2[1] )
          v24 = s2[0];
        if ( *(_QWORD *)(v19 + 32) )
          v25 = *(const char **)(v19 + 24);
        v27 = strcasecmp(v25, v24);
        if ( v26 )
        {
          s2[1] = nullptr;
          qfree(v26);
        }
        v28 = *(_QWORD *)(v18 + 64);
        if ( !v27 )
          break;
        v19 += 56;
        if ( v19 == *(_QWORD *)(v18 + 56) + 56 * v28 )
        {
          v17 = *v48;
          v16 = v48[1];
          goto LABEL_42;
        }
      }
      v48 = nullptr;
      if ( v28 )
      {
        v48 = (_QWORD *)qalloc_or_throw(56 * v28);
        v37 = v48;
        v38 = 0;
        v39 = 0;
        do
        {
          v40 = *(_QWORD *)(v18 + 56);
          *v37 = 0;
          *(_OWORD *)(v37 + 1) = 0;
          v41 = v38 + v40;
          if ( *(_QWORD *)(v41 + 8) )
          {
            n[0] = *(_QWORD *)(v41 + 8);
            v42 = (void *)qalloc_or_throw(n[0]);
            v43 = n[0];
            *v37 = v42;
            v37[2] = v43;
            memcpy(v42, *(const void **)v41, v43);
            v37[1] = n[0];
          }
          v37[3] = 0;
          *((_OWORD *)v37 + 2) = 0;
          if ( *(_QWORD *)(v41 + 32) )
          {
            n[0] = *(_QWORD *)(v41 + 32);
            v44 = (void *)qalloc_or_throw(n[0]);
            v45 = n[0];
            v37[3] = v44;
            v37[5] = v45;
            memcpy(v44, *(const void **)(v41 + 24), v45);
            v37[4] = n[0];
          }
          ++v39;
          v38 += 56;
          v37 += 7;
          *((_BYTE *)v37 - 8) = *(_BYTE *)(v41 + 48);
        }
        while ( v39 != v28 );
      }
      v29 = (char *)ptr;
      *(__m128i *)n = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
      if ( ptr )
      {
        v30 = v56.m128i_i64[0];
        if ( v56.m128i_i64[0] )
        {
          v31 = 0;
          v32 = 0;
          do
          {
            v33 = &v29[v31];
            v34 = *(void **)&v29[v31 + 24];
            if ( v34 )
            {
              *((_QWORD *)v33 + 4) = 0;
              qfree(v34);
            }
            v35 = *(void **)v33;
            if ( *(_QWORD *)v33 )
            {
              *((_QWORD *)v33 + 1) = 0;
              qfree(v35);
            }
            ++v32;
            v29 = (char *)ptr;
            v31 += 56;
          }
          while ( v30 != v32 );
        }
        v56.m128i_i64[0] = 0;
        qfree(v29);
      }
      si128 = _mm_load_si128((const __m128i *)n);
      ptr = v48;
      v56 = si128;
    }
  }
LABEL_5:
  v46 = _mm_loadh_ps((const double *)v46.m128_u64);
  sub_641020(0, 0, (__int64)"*.so", (__int64)&v50, 1);
  v4 = _mm_load_si128((const __m128i *)&v46);
  s2[2] = v47;
  *(__m128i *)s2 = v4;
  for_all_extlangs(s2, 1);
  v5 = (char *)ptr;
  v6 = v53[0];
  if ( ptr )
  {
    v7 = v56.m128i_i64[0];
    if ( v56.m128i_i64[0] )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = &v5[v8];
        v11 = *(void **)&v5[v8 + 24];
        if ( v11 )
        {
          *((_QWORD *)v10 + 4) = 0;
          qfree(v11);
        }
        v12 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v12);
        }
        ++v9;
        v5 = (char *)ptr;
        v8 += 56;
      }
      while ( v7 != v9 );
    }
    v56.m128i_i64[0] = 0;
    qfree(v5);
  }
  if ( v53[1] )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53[1]);
  }
  return v6;
}
