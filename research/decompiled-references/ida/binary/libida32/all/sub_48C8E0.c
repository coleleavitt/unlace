unsigned __int64 __fastcall sub_48C8E0(
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
  const char *v34; // rsi
  __int32 v35; // eax
  void *v36; // rdi
  __int64 v37; // rbx
  unsigned int v39; // r14d
  _QWORD *v40; // rax
  int *v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rdx
  void *v44; // r13
  unsigned __int64 v45; // r12
  __m128i v46; // xmm0
  void *v47; // rdi
  __m128i *v48; // rax
  __int64 v49; // [rsp+8h] [rbp-148h]
  __int64 v50; // [rsp+10h] [rbp-140h]
  bool v51; // [rsp+23h] [rbp-12Dh]
  __m128i v54; // [rsp+30h] [rbp-120h] BYREF
  __int64 v55; // [rsp+40h] [rbp-110h]
  __m128i *v56; // [rsp+48h] [rbp-108h]
  void **v57; // [rsp+58h] [rbp-F8h] BYREF
  void *v58; // [rsp+60h] [rbp-F0h] BYREF
  __int128 v59; // [rsp+68h] [rbp-E8h]
  unsigned int *v60[3]; // [rsp+80h] [rbp-D0h] BYREF
  int v61; // [rsp+98h] [rbp-B8h]
  __int64 v62; // [rsp+A0h] [rbp-B0h] BYREF
  int v63; // [rsp+A8h] [rbp-A8h] BYREF
  _QWORD *v64; // [rsp+B0h] [rbp-A0h]
  int *v65; // [rsp+B8h] [rbp-98h]
  int *v66; // [rsp+C0h] [rbp-90h]
  __int64 v67; // [rsp+C8h] [rbp-88h]
  void *v68[4]; // [rsp+D0h] [rbp-80h] BYREF
  void *ptr; // [rsp+F0h] [rbp-60h]
  __int128 v70; // [rsp+F8h] [rbp-58h]
  int v71; // [rsp+108h] [rbp-48h]
  unsigned __int64 v72; // [rsp+118h] [rbp-38h]

  v56 = (__m128i *)a1;
  v55 = a3;
  v54.m128i_i32[0] = a6;
  v72 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a5 + 32) <= 1u )
  {
    v9 = *(_QWORD *)(a5 + 200);
    v58 = nullptr;
    v59 = 0;
    if ( !v9 )
    {
      memset(v68, 0, 24);
      goto LABEL_36;
    }
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(a5 + 200);
  v10 = *(const char **)(a5 + 24);
  v58 = nullptr;
  v59 = 0;
  if ( v9 )
  {
LABEL_3:
    v11 = *(unsigned int **)(a5 + 192);
    v63 = 0;
    v64 = nullptr;
    v12 = &v11[v9];
    v65 = &v63;
    v66 = &v63;
    v67 = 0;
    if ( v11 != v12 )
    {
      v13 = v11;
      v51 = a7 == v54.m128i_i32[0] || a7 == 2;
      v50 = 48LL * a7;
      v49 = v50 + 152;
      while ( 1 )
      {
        v14 = *v13;
        LODWORD(v68[0]) = v14;
        if ( v14 )
          break;
LABEL_25:
        if ( v12 == ++v13 )
          goto LABEL_26;
      }
      if ( v51 )
      {
        if ( !under_debugger )
          interr(1950);
        BUG();
      }
      while ( 1 )
      {
        v15 = *(_QWORD *)(a2 + 8);
        v16 = *(_QWORD *)(v15 + v50 + 160);
        if ( !v16 )
          break;
        v17 = v15 + v49;
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
        if ( v17 == v15 + v49 )
          break;
        if ( v14 < *(_DWORD *)(v17 + 32) )
          break;
        v20 = *(_DWORD *)(*(_QWORD *)(v15 + 120) + 12LL * *(_QWORD *)(v17 + 40) + 4LL * v54.m128i_i32[0]);
        if ( !v20 )
          break;
        v21 = v64;
        v22 = &v63;
        if ( !v64 )
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
        if ( v22 == &v63 || v14 < v22[8] )
        {
LABEL_22:
          v57 = v68;
          v22 = (int *)sub_47E810(&v62, (__int64)v22, (unsigned int **)&v57);
        }
        ++v13;
        v22[9] = v20;
        if ( v12 == v13 )
          goto LABEL_26;
LABEL_24:
        v14 = *v13;
        LODWORD(v68[0]) = v14;
        if ( !v14 )
          goto LABEL_25;
      }
      v39 = alloc_type_ordinals(v55, 1);
      sub_48BA20(*(_QWORD *)(a2 + 8) + 120LL, a7, v54.m128i_i32[0], (unsigned int)v68[0], v39, 1);
      v40 = v64;
      if ( v64 )
      {
        v41 = &v63;
        do
        {
          while ( 1 )
          {
            v42 = v40[2];
            v43 = v40[3];
            if ( *((_DWORD *)v40 + 8) < LODWORD(v68[0]) )
              break;
            v41 = (int *)v40;
            v40 = (_QWORD *)v40[2];
            if ( !v42 )
              goto LABEL_62;
          }
          v40 = (_QWORD *)v40[3];
        }
        while ( v43 );
LABEL_62:
        if ( v41 != &v63 && LODWORD(v68[0]) >= v41[8] )
        {
LABEL_65:
          ++v13;
          v41[9] = v39;
          if ( v12 == v13 )
            goto LABEL_26;
          goto LABEL_24;
        }
      }
      else
      {
        v41 = &v63;
      }
      v60[0] = (unsigned int *)v68;
      v41 = (int *)sub_47E810(&v62, (__int64)v41, v60);
      goto LABEL_65;
    }
LABEL_26:
    v57 = nullptr;
    sub_481280(a5, (__int64)&v57, 0);
    dstr_tinfo(&v57);
    v60[0] = (unsigned int *)off_2B024A0;
    v60[1] = (_DWORD *)&byte_4;
    v60[2] = (unsigned int *)&v62;
    v61 = 0;
    memset(v68, 0, sizeof(v68));
    ptr = nullptr;
    v71 = 0;
    v70 = 0;
    if ( !(unsigned int)visit_subtypes((int)v60, (int)v68, (int)&v57, 0, 0) && (v71 & 1) != 0 )
    {
      v25 = (unsigned int *)v68[0];
      v68[0] = v57;
      v57 = (void **)v25;
    }
    if ( ptr )
    {
      *(_QWORD *)&v70 = 0;
      qfree(ptr);
    }
    if ( v68[1] )
    {
      v68[2] = nullptr;
      qfree(v68[1]);
    }
    clear_tinfo_t(v68);
    dstr_tinfo(&v57);
    *(_QWORD *)&v59 = 0;
    serialize_tinfo(&v58, 0, 0, &v57, 272);
    v10 = (const char *)v58;
    clear_tinfo_t(&v57);
    sub_47F550(v64);
  }
  memset(v68, 0, 24);
  if ( v10 )
  {
    v26 = strlen(v10);
    v27 = (void *)(v26 + 1);
    v28 = v26;
    v68[0] = (void *)qvector_reserve(v68, 0, v26 + 1, 1);
    v68[1] = v27;
    memmove(v68[0], v10, v28);
    *((_BYTE *)v68[0] + v28) = 0;
  }
LABEL_36:
  sub_633A60(v55, v55, v68, 1, 0.0);
  if ( !type_ordinal && (*(_QWORD *)(a5 + 8) <= 1u || (type_ordinal = get_type_ordinal(v55, *(_QWORD *)a5)) == 0) )
    type_ordinal = alloc_type_ordinals(v55, 1);
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
  if ( v68[1] > (char *)&dword_0 + 1 )
    v32 = (int)v68[0];
  LODWORD(v33) = 0;
  if ( *(_QWORD *)(a5 + 8) > 1u )
    v33 = *(_QWORD *)a5;
  sub_63F060(v55, type_ordinal, 1028, v33, v32, v31, v30, v29, a5 + 120);
  v34 = (const char *)v54.m128i_u32[0];
  sub_4845A0((__int64)v56, v54.m128i_u32[0], v55, type_ordinal, a8);
  v35 = v56[25].m128i_i32[0];
  if ( (*(_BYTE *)(a5 + 400) & 1) != 0 )
  {
    v44 = nullptr;
    v56[25].m128i_i32[0] = v35 | 1;
    v45 = *(_QWORD *)(a5 + 224);
    if ( v45 )
    {
      v44 = (void *)qalloc_or_throw(16 * v45, v34);
      memcpy(v44, *(const void **)(a5 + 216), 16 * v45);
    }
    v46 = _mm_unpacklo_epi64((__m128i)v45, (__m128i)v45);
    v47 = (void *)v56[13].m128i_i64[1];
    if ( v47 )
    {
      v56[14].m128i_i64[0] = 0;
      v54 = v46;
      qfree(v47);
      v46 = _mm_load_si128(&v54);
    }
    v48 = v56;
    v56[13].m128i_i64[1] = (__int64)v44;
    v48[14] = v46;
  }
  else
  {
    v36 = (void *)v56[13].m128i_i64[1];
    v56[25].m128i_i32[0] = v35 & 0xFFFFFFFE;
    if ( v36 )
    {
      v37 = (__int64)v56;
      v56[14].m128i_i64[0] = 0;
      qfree(v36);
      *(_QWORD *)(v37 + 216) = 0;
      *(_QWORD *)(v37 + 232) = 0;
    }
  }
  if ( v68[0] )
  {
    v68[1] = nullptr;
    qfree(v68[0]);
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  return v72 - __readfsqword(0x28u);
}

