__int64 sub_416810()
{
  size_t v0; // rbp
  __int8 v1; // r12
  __int64 v2; // rax
  const char *v3; // rsi
  unsigned __int64 v4; // rdi
  void *v5; // r12
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  char *v8; // rax
  const char *v9; // rdx
  __m128i v10; // xmm0
  char *v11; // rax
  __int64 v12; // rax
  const char *v13; // rsi
  unsigned __int64 v14; // rdi
  void *v15; // r12
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  char *v18; // rax
  __m128i v19; // xmm0
  char *v20; // rax
  __int64 v21; // rax
  const char *v22; // rsi
  unsigned __int64 v23; // rdi
  void *v24; // r12
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  char *v27; // rax
  __m128i v28; // xmm0
  char *v29; // rax
  size_t v30; // r12
  unsigned __int64 v31; // r15
  const char *v32; // r13
  const char *v33; // rdx
  __int64 v34; // r13
  __int64 i; // r14
  const char *v36; // rsi
  __int8 v37; // r13
  __int64 v38; // r14
  size_t v39; // r15
  const char *v40; // rdx
  __int64 v41; // rbp
  __int64 v42; // rbx
  const char *v43; // rax
  const char *v44; // rdx
  __int64 v46; // r12
  __int64 v47; // rbx
  __int64 v48; // rbp
  const char *v49; // rdx
  unsigned __int64 v50; // r15
  char *v51; // r14
  __int64 v52; // r13
  const char *v53; // rsi
  const char *v54; // rdi
  __int64 v55; // rax
  __m128i v56; // [rsp+10h] [rbp-140h] BYREF
  __m128i v57; // [rsp+20h] [rbp-130h] BYREF
  __int128 v58; // [rsp+30h] [rbp-120h]
  _BYTE *v59; // [rsp+48h] [rbp-108h] BYREF
  __int128 v60; // [rsp+50h] [rbp-100h]
  _BYTE *v61; // [rsp+68h] [rbp-E8h] BYREF
  __int128 v62; // [rsp+70h] [rbp-E0h]
  void *v63; // [rsp+88h] [rbp-C8h] BYREF
  __int128 v64; // [rsp+90h] [rbp-C0h]
  __int64 v65; // [rsp+A0h] [rbp-B0h]
  const char *v66; // [rsp+A8h] [rbp-A8h] BYREF
  __int128 v67; // [rsp+B0h] [rbp-A0h]
  __int8 v68; // [rsp+C0h] [rbp-90h]
  __int64 v69; // [rsp+C8h] [rbp-88h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-80h]
  __int8 v71; // [rsp+E0h] [rbp-70h]
  void *src; // [rsp+E8h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+F0h] [rbp-60h] BYREF
  __int8 v74; // [rsp+100h] [rbp-50h]
  unsigned __int64 v75; // [rsp+110h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  src = 0;
  *(_OWORD *)n = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v0 = n[0];
  v63 = 0;
  v64 = 0;
  if ( n[0] )
  {
    v63 = (void *)qalloc_or_throw();
    *((_QWORD *)&v64 + 1) = v0;
    memcpy(v63, src, v0);
    *(_QWORD *)&v64 = v0;
  }
  v65 = -1;
  netnode_check();
  netnode_check();
  if ( v59 == (_BYTE *)-1LL )
  {
    v61 = 0;
    netnode_supset();
    v66 = &byte_1;
    netnode_supset();
    v69 = 1;
    netnode_supset();
  }
  else
  {
    v65 = v69;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v58 = 0;
  v57.m128i_i64[1] = 0;
  v57.m128i_i64[1] = qvector_reserve();
  *(_QWORD *)&v58 = 2;
  *(_BYTE *)v57.m128i_i64[1] = 65;
  *(_BYTE *)(v57.m128i_i64[1] + 1) = 0;
  sub_40D2B0((__int64)&v66, (__int64)&v63, (__int64)&v57.m128i_i64[1]);
  v56.m128i_i8[14] = v68;
  if ( v68 )
  {
    v44 = s1;
    if ( (_QWORD)v67 )
      v44 = v66;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add A", v44);
    if ( v66 )
      qfree();
    goto LABEL_80;
  }
  v60 = 0;
  v59 = 0;
  v59 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v60 = 2;
  *v59 = 66;
  v59[1] = 0;
  sub_40D2B0((__int64)&v69, (__int64)&v63, (__int64)&v59);
  v1 = v71;
  if ( v71 )
  {
    v9 = s1;
    if ( v70 )
      v9 = (const char *)v69;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add B", v9);
    if ( v69 )
      qfree();
LABEL_27:
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree();
      if ( !v57.m128i_i64[1] )
        goto LABEL_82;
      goto LABEL_14;
    }
LABEL_80:
    if ( v57.m128i_i64[1] )
    {
      *(_QWORD *)&v58 = 0;
      qfree();
    }
    goto LABEL_82;
  }
  v61 = 0;
  v62 = 0;
  v61 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v62 = 2;
  *v61 = 67;
  v61[1] = 0;
  sub_40D2B0((__int64)&src, (__int64)&v63, (__int64)&v61);
  v1 = v74;
  if ( v74 )
  {
    v49 = s1;
    if ( n[0] )
      v49 = (const char *)src;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add C", v49);
    if ( src )
      qfree();
    if ( v61 )
    {
LABEL_11:
      *(_QWORD *)&v62 = 0;
      qfree();
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        qfree();
      }
      if ( !v57.m128i_i64[1] )
      {
LABEL_15:
        if ( !v1 )
          goto LABEL_16;
LABEL_82:
        v56.m128i_i8[14] = 0;
        goto LABEL_83;
      }
LABEL_14:
      *(_QWORD *)&v58 = 0;
      qfree();
      goto LABEL_15;
    }
    goto LABEL_27;
  }
  if ( v61 )
    goto LABEL_11;
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree();
    if ( v57.m128i_i64[1] )
      goto LABEL_14;
  }
  else if ( v57.m128i_i64[1] )
  {
    *(_QWORD *)&v58 = 0;
    qfree();
  }
LABEL_16:
  src = 0;
  netnode_supset();
  sub_40FC80((__int64)&v69);
  v56.m128i_i8[15] = v71;
  if ( !v71 )
  {
    sub_6C720((__int64)"corruption: expected inner failure before reindex\n", &v63);
    if ( v69 )
    {
      v46 = v70;
      v47 = v69;
      v48 = 0;
      if ( v70 )
      {
        do
        {
          if ( *(_QWORD *)(v47 + 8) )
          {
            *(_QWORD *)(v47 + 16) = 0;
            qfree();
          }
          ++v48;
          v47 += 32;
        }
        while ( v46 != v48 );
      }
      qfree();
    }
    goto LABEL_82;
  }
  v67 = 0;
  v66 = 0;
  src = 0;
  *(_OWORD *)n = 0;
  src = (void *)qvector_reserve();
  n[0] = 2;
  *(_BYTE *)src = 65;
  *((_BYTE *)src + 1) = 0;
  v2 = v67;
  v3 = v66;
  v4 = v67 + 1;
  if ( &src < (void **)v66 || &src >= (void **)&v66[24 * *((_QWORD *)&v67 + 1)] )
  {
    if ( *((_QWORD *)&v67 + 1) < v4 )
    {
      v66 = (const char *)qvector_reserve();
      v3 = v66;
      v2 = v67;
    }
    v10 = _mm_loadu_si128((const __m128i *)n);
    v11 = (char *)&v3[24 * v2];
    *(_QWORD *)v11 = src;
    *(__m128i *)(v11 + 8) = v10;
    *(_QWORD *)&v67 = v67 + 1;
  }
  else
  {
    v5 = src;
    v6 = _mm_loadl_epi64((const __m128i *)n);
    src = 0;
    v7 = _mm_loadl_epi64((const __m128i *)&n[1]);
    *(_OWORD *)n = 0;
    if ( *((_QWORD *)&v67 + 1) < v4 )
    {
      v57.m128i_i64[0] = v7.m128i_i64[0];
      v56.m128i_i64[0] = v6.m128i_i64[0];
      v66 = (const char *)qvector_reserve();
      v3 = v66;
      v7 = _mm_loadl_epi64(&v57);
      v2 = v67;
      v6 = _mm_loadl_epi64(&v56);
    }
    v8 = (char *)&v3[24 * v2];
    *(_QWORD *)v8 = v5;
    *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v6, v7);
    *(_QWORD *)&v67 = v67 + 1;
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
  }
  *(_OWORD *)n = 0;
  src = 0;
  src = (void *)qvector_reserve();
  n[0] = 2;
  *(_BYTE *)src = 66;
  *((_BYTE *)src + 1) = 0;
  v12 = v67;
  v13 = v66;
  v14 = v67 + 1;
  if ( &src < (void **)v66 || &src >= (void **)&v66[24 * *((_QWORD *)&v67 + 1)] )
  {
    if ( *((_QWORD *)&v67 + 1) < v14 )
    {
      v66 = (const char *)qvector_reserve();
      v13 = v66;
      v12 = v67;
    }
    v19 = _mm_loadu_si128((const __m128i *)n);
    v20 = (char *)&v13[24 * v12];
    *(_QWORD *)v20 = src;
    *(__m128i *)(v20 + 8) = v19;
    *(_QWORD *)&v67 = v67 + 1;
  }
  else
  {
    v15 = src;
    v16 = _mm_loadl_epi64((const __m128i *)n);
    src = 0;
    v17 = _mm_loadl_epi64((const __m128i *)&n[1]);
    *(_OWORD *)n = 0;
    if ( *((_QWORD *)&v67 + 1) < v14 )
    {
      v57.m128i_i64[0] = v17.m128i_i64[0];
      v56.m128i_i64[0] = v16.m128i_i64[0];
      v66 = (const char *)qvector_reserve();
      v13 = v66;
      v17 = _mm_loadl_epi64(&v57);
      v12 = v67;
      v16 = _mm_loadl_epi64(&v56);
    }
    v18 = (char *)&v13[24 * v12];
    *(_QWORD *)v18 = v15;
    *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v16, v17);
    *(_QWORD *)&v67 = v67 + 1;
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
  }
  *(_OWORD *)n = 0;
  src = 0;
  src = (void *)qvector_reserve();
  n[0] = 2;
  *(_BYTE *)src = 67;
  *((_BYTE *)src + 1) = 0;
  v21 = v67;
  v22 = v66;
  v23 = v67 + 1;
  if ( &src < (void **)v66 || &src >= (void **)&v66[24 * *((_QWORD *)&v67 + 1)] )
  {
    if ( *((_QWORD *)&v67 + 1) < v23 )
    {
      v66 = (const char *)qvector_reserve();
      v22 = v66;
      v21 = v67;
    }
    v28 = _mm_loadu_si128((const __m128i *)n);
    v29 = (char *)&v22[24 * v21];
    *(_QWORD *)v29 = src;
    *(__m128i *)(v29 + 8) = v28;
    *(_QWORD *)&v67 = v67 + 1;
  }
  else
  {
    v24 = src;
    v25 = _mm_loadl_epi64((const __m128i *)n);
    src = 0;
    v26 = _mm_loadl_epi64((const __m128i *)&n[1]);
    *(_OWORD *)n = 0;
    if ( *((_QWORD *)&v67 + 1) < v23 )
    {
      v57.m128i_i64[0] = v26.m128i_i64[0];
      v56.m128i_i64[0] = v25.m128i_i64[0];
      v66 = (const char *)qvector_reserve();
      v22 = v66;
      v26 = _mm_loadl_epi64(&v57);
      v21 = v67;
      v25 = _mm_loadl_epi64(&v56);
    }
    v27 = (char *)&v22[24 * v21];
    *(_QWORD *)v27 = v24;
    *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v25, v26);
    *(_QWORD *)&v67 = v67 + 1;
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
  }
  sub_40FEC0((__int64)&src);
  v30 = n[0];
  v56.m128i_i64[0] = (__int64)src;
  if ( n[0] == (_QWORD)v67 )
  {
    if ( !n[0] )
    {
      if ( v56.m128i_i64[0] )
        qfree();
      goto LABEL_97;
    }
    v50 = (unsigned __int64)v66;
    v51 = (char *)src + 8;
    v52 = 0;
    while ( 1 )
    {
      v55 = *((_QWORD *)v51 + 1);
      if ( *(_QWORD *)(v50 + 8) )
        break;
      v53 = s1;
      if ( v55 )
        goto LABEL_110;
LABEL_112:
      ++v52;
      v50 += 24LL;
      v51 += 32;
      if ( v30 == v52 )
      {
        v37 = v56.m128i_i8[15];
        if ( !v56.m128i_i64[0] )
          goto LABEL_97;
LABEL_62:
        v38 = v56.m128i_i64[0];
        v39 = 0;
        do
        {
          if ( *(_QWORD *)(v38 + 8) )
          {
            *(_QWORD *)(v38 + 16) = 0;
            qfree();
          }
          ++v39;
          v38 += 32;
        }
        while ( v39 < v30 );
        qfree();
        if ( !v37 )
          goto LABEL_67;
LABEL_97:
        sub_40C7C0((__int64)&src);
        if ( v74 )
        {
          if ( src )
            qfree();
          sub_6C720((__int64)"corruption: invariants should pass after recovery\n", &v63);
        }
        else
        {
          v56.m128i_i8[14] = v56.m128i_i8[15];
        }
        goto LABEL_67;
      }
    }
    v53 = *(const char **)v50;
    v54 = s1;
    if ( v55 )
LABEL_110:
      v54 = *(const char **)v51;
    if ( strcmp(v54, v53) )
      goto LABEL_52;
    goto LABEL_112;
  }
LABEL_52:
  sub_6C720((__int64)"Test %s FAILED (entries-only)\nExpected:\n", "reindex.recovery.entries-only");
  v31 = (unsigned __int64)v66;
  v32 = &v66[24 * v67];
  if ( v66 != v32 )
  {
    do
    {
      v33 = s1;
      if ( *(_QWORD *)(v31 + 8) )
        v33 = *(const char **)v31;
      sub_6C720((__int64)"%s (\"%s\")\n", "  exp", v33);
      v31 += 24LL;
    }
    while ( v32 != (const char *)v31 );
  }
  sub_6C720((__int64)"Got:\n");
  v34 = v56.m128i_i64[0] + 32 * v30;
  for ( i = v56.m128i_i64[0]; v34 != i; i += 32 )
  {
    v36 = s1;
    if ( *(_QWORD *)(i + 16) )
      v36 = *(const char **)(i + 8);
    sub_6C720((__int64)"  got (\"%s\")\n", v36);
  }
  sub_6C720((__int64)"dump follows:\n");
  sub_40BFE0();
  if ( v56.m128i_i64[0] )
  {
    v37 = 0;
    if ( v30 )
      goto LABEL_62;
    qfree();
  }
LABEL_67:
  v40 = v66;
  if ( v66 )
  {
    v41 = v67;
    if ( (_QWORD)v67 )
    {
      v42 = 0;
      do
      {
        v43 = &v40[24 * v42];
        if ( *(_QWORD *)v43 )
        {
          *((_QWORD *)v43 + 1) = 0;
          qfree();
          v40 = v66;
        }
        ++v42;
      }
      while ( v41 != v42 );
    }
    *(_QWORD *)&v67 = 0;
    qfree();
  }
  if ( v69 )
    qfree();
LABEL_83:
  netnode_kill();
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree();
  }
  return v56.m128i_u8[14];
}
