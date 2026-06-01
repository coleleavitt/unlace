unsigned __int64 __fastcall sub_4A16E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int type_ordinal,
        __int64 a5,
        __int32 a6,
        int a7,
        char a8)
{
  __int64 v9; // rax
  const char *v10; // r14
  unsigned int *v11; // r10
  unsigned int *v12; // r13
  unsigned int *v13; // r15
  unsigned int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // r14d
  _QWORD *v21; // rax
  int *v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned int *v25; // rdx
  size_t v26; // rax
  void *v27; // r15
  size_t v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r9
  int v32; // r8d
  __int64 v33; // rcx
  __int32 v34; // eax
  void *v35; // rdi
  __int64 v36; // rbx
  unsigned int v38; // r14d
  _QWORD *v39; // rax
  int *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rdx
  void *v43; // r13
  unsigned __int64 v44; // r12
  __m128i v45; // xmm0
  void *v46; // rdi
  __m128i *v47; // rax
  __int64 v48; // [rsp+8h] [rbp-148h]
  __int64 v49; // [rsp+10h] [rbp-140h]
  bool v50; // [rsp+23h] [rbp-12Dh]
  __m128i v53; // [rsp+30h] [rbp-120h] BYREF
  __int64 v54; // [rsp+40h] [rbp-110h]
  __m128i *v55; // [rsp+48h] [rbp-108h]
  void **v56; // [rsp+58h] [rbp-F8h] BYREF
  void *v57; // [rsp+60h] [rbp-F0h] BYREF
  __int128 v58; // [rsp+68h] [rbp-E8h]
  unsigned int *v59[3]; // [rsp+80h] [rbp-D0h] BYREF
  int v60; // [rsp+98h] [rbp-B8h]
  __int64 v61; // [rsp+A0h] [rbp-B0h] BYREF
  int v62; // [rsp+A8h] [rbp-A8h] BYREF
  _QWORD *v63; // [rsp+B0h] [rbp-A0h]
  int *v64; // [rsp+B8h] [rbp-98h]
  int *v65; // [rsp+C0h] [rbp-90h]
  __int64 v66; // [rsp+C8h] [rbp-88h]
  void *v67[4]; // [rsp+D0h] [rbp-80h] BYREF
  void *ptr; // [rsp+F0h] [rbp-60h]
  __int128 v69; // [rsp+F8h] [rbp-58h]
  int v70; // [rsp+108h] [rbp-48h]
  unsigned __int64 v71; // [rsp+118h] [rbp-38h]

  v55 = (__m128i *)a1;
  v54 = a3;
  v53.m128i_i32[0] = a6;
  v71 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a5 + 32) <= 1u )
  {
    v9 = *(_QWORD *)(a5 + 200);
    v57 = nullptr;
    v58 = 0;
    if ( !v9 )
    {
      memset(v67, 0, 24);
      goto LABEL_36;
    }
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(a5 + 200);
  v10 = *(const char **)(a5 + 24);
  v57 = nullptr;
  v58 = 0;
  if ( v9 )
  {
LABEL_3:
    v11 = *(unsigned int **)(a5 + 192);
    v62 = 0;
    v63 = nullptr;
    v12 = &v11[v9];
    v64 = &v62;
    v65 = &v62;
    v66 = 0;
    if ( v11 != v12 )
    {
      v13 = v11;
      v50 = a7 == v53.m128i_i32[0] || a7 == 2;
      v49 = 48LL * a7;
      v48 = v49 + 152;
      while ( 1 )
      {
        v14 = *v13;
        LODWORD(v67[0]) = v14;
        if ( v14 )
          break;
LABEL_25:
        if ( v12 == ++v13 )
          goto LABEL_26;
      }
      if ( v50 )
      {
        if ( !under_debugger )
          interr(1950);
        BUG();
      }
      while ( 1 )
      {
        v15 = *(_QWORD *)(a2 + 8);
        v16 = *(_QWORD *)(v15 + v49 + 160);
        if ( !v16 )
          break;
        v17 = v15 + v48;
        do
        {
          while ( 1 )
          {
            v18 = *(_QWORD *)(v16 + 16);
            v19 = *(_QWORD *)(v16 + 24);
            if ( *(_DWORD *)(v16 + 32) < v14 )
              break;
            v17 = v16;
            v16 = *(_QWORD *)(v16 + 16);
            if ( !v18 )
              goto LABEL_12;
          }
          v16 = *(_QWORD *)(v16 + 24);
        }
        while ( v19 );
LABEL_12:
        if ( v17 == v15 + v48 )
          break;
        if ( v14 < *(_DWORD *)(v17 + 32) )
          break;
        v20 = *(_DWORD *)(*(_QWORD *)(v15 + 120) + 12LL * *(_QWORD *)(v17 + 40) + 4LL * v53.m128i_i32[0]);
        if ( !v20 )
          break;
        v21 = v63;
        v22 = &v62;
        if ( !v63 )
          goto LABEL_22;
        do
        {
          while ( 1 )
          {
            v23 = v21[2];
            v24 = v21[3];
            if ( *((_DWORD *)v21 + 8) < v14 )
              break;
            v22 = (int *)v21;
            v21 = (_QWORD *)v21[2];
            if ( !v23 )
              goto LABEL_20;
          }
          v21 = (_QWORD *)v21[3];
        }
        while ( v24 );
LABEL_20:
        if ( v22 == &v62 || v14 < v22[8] )
        {
LABEL_22:
          v56 = v67;
          v22 = (int *)sub_493310(&v61, (__int64)v22, (unsigned int **)&v56);
        }
        ++v13;
        v22[9] = v20;
        if ( v12 == v13 )
          goto LABEL_26;
LABEL_24:
        v14 = *v13;
        LODWORD(v67[0]) = v14;
        if ( !v14 )
          goto LABEL_25;
      }
      v38 = alloc_type_ordinals(v54, 1);
      sub_4A0820(*(_QWORD *)(a2 + 8) + 120LL, a7, v53.m128i_i32[0], (unsigned int)v67[0], v38, 1);
      v39 = v63;
      if ( v63 )
      {
        v40 = &v62;
        do
        {
          while ( 1 )
          {
            v41 = v39[2];
            v42 = v39[3];
            if ( *((_DWORD *)v39 + 8) < LODWORD(v67[0]) )
              break;
            v40 = (int *)v39;
            v39 = (_QWORD *)v39[2];
            if ( !v41 )
              goto LABEL_62;
          }
          v39 = (_QWORD *)v39[3];
        }
        while ( v42 );
LABEL_62:
        if ( v40 != &v62 && LODWORD(v67[0]) >= v40[8] )
        {
LABEL_65:
          ++v13;
          v40[9] = v38;
          if ( v12 == v13 )
            goto LABEL_26;
          goto LABEL_24;
        }
      }
      else
      {
        v40 = &v62;
      }
      v59[0] = (unsigned int *)v67;
      v40 = (int *)sub_493310(&v61, (__int64)v40, v59);
      goto LABEL_65;
    }
LABEL_26:
    v56 = nullptr;
    sub_495F70(a5, (__int64)&v56, 0);
    dstr_tinfo(&v56);
    v59[0] = (unsigned int *)off_2B2C460;
    v59[1] = (_DWORD *)&byte_4;
    v59[2] = (unsigned int *)&v61;
    v60 = 0;
    memset(v67, 0, sizeof(v67));
    ptr = nullptr;
    v70 = 0;
    v69 = 0;
    if ( !(unsigned int)visit_subtypes((int)v59, (int)v67, (int)&v56, 0, 0) && (v70 & 1) != 0 )
    {
      v25 = (unsigned int *)v67[0];
      v67[0] = v56;
      v56 = (void **)v25;
    }
    if ( ptr )
    {
      *(_QWORD *)&v69 = 0;
      qfree(ptr);
    }
    if ( v67[1] )
    {
      v67[2] = nullptr;
      qfree(v67[1]);
    }
    clear_tinfo_t(v67);
    dstr_tinfo(&v56);
    *(_QWORD *)&v58 = 0;
    serialize_tinfo(&v57, 0, 0, &v56, 272);
    v10 = (const char *)v57;
    clear_tinfo_t(&v56);
    sub_494090(v63);
  }
  memset(v67, 0, 24);
  if ( v10 )
  {
    v26 = strlen(v10);
    v27 = (void *)(v26 + 1);
    v28 = v26;
    v67[0] = (void *)qvector_reserve(v67, 0, v26 + 1, 1);
    v67[1] = v27;
    memmove(v67[0], v10, v28);
    *((_BYTE *)v67[0] + v28) = 0;
  }
LABEL_36:
  sub_651060(v54, v54, v67, 1, 0.0);
  if ( !type_ordinal && (*(_QWORD *)(a5 + 8) <= 1u || (type_ordinal = get_type_ordinal(v54, *(_QWORD *)a5)) == 0) )
    type_ordinal = alloc_type_ordinals(v54, 1);
  v29 = 0;
  if ( *(_QWORD *)(a5 + 104) > 1u )
    v29 = *(_QWORD *)(a5 + 96);
  v30 = 0;
  if ( *(_QWORD *)(a5 + 80) > 1u )
    v30 = *(_QWORD *)(a5 + 72);
  LODWORD(v31) = 0;
  if ( *(_QWORD *)(a5 + 56) > 1u )
    v31 = *(_QWORD *)(a5 + 48);
  v32 = 0;
  if ( v67[1] > (char *)&dword_0 + 1 )
    v32 = (int)v67[0];
  LODWORD(v33) = 0;
  if ( *(_QWORD *)(a5 + 8) > 1u )
    v33 = *(_QWORD *)a5;
  sub_65C930(v54, type_ordinal, 1028, v33, v32, v31, v30, v29, a5 + 120);
  sub_4991B0((__int64)v55, v53.m128i_u32[0], v54, type_ordinal, a8);
  v34 = v55[25].m128i_i32[2];
  if ( (*(_BYTE *)(a5 + 408) & 1) != 0 )
  {
    v43 = nullptr;
    v55[25].m128i_i32[2] = v34 | 1;
    v44 = *(_QWORD *)(a5 + 224);
    if ( v44 )
    {
      v43 = (void *)qalloc_or_throw(16 * v44);
      memcpy(v43, *(const void **)(a5 + 216), 16 * v44);
    }
    v45 = _mm_unpacklo_epi64((__m128i)v44, (__m128i)v44);
    v46 = (void *)v55[13].m128i_i64[1];
    if ( v46 )
    {
      v55[14].m128i_i64[0] = 0;
      v53 = v45;
      qfree(v46);
      v45 = _mm_load_si128(&v53);
    }
    v47 = v55;
    v55[13].m128i_i64[1] = (__int64)v43;
    v47[14] = v45;
  }
  else
  {
    v35 = (void *)v55[13].m128i_i64[1];
    v55[25].m128i_i32[2] = v34 & 0xFFFFFFFE;
    if ( v35 )
    {
      v36 = (__int64)v55;
      v55[14].m128i_i64[0] = 0;
      qfree(v35);
      *(_QWORD *)(v36 + 216) = 0;
      *(_QWORD *)(v36 + 232) = 0;
    }
  }
  if ( v67[0] )
  {
    v67[1] = nullptr;
    qfree(v67[0]);
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  return v71 - __readfsqword(0x28u);
}
