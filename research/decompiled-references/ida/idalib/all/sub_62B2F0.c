unsigned __int64 sub_62B2F0()
{
  char *v0; // r12
  size_t v1; // rax
  size_t v2; // r14
  size_t v3; // rbx
  const char *i; // rax
  void *v5; // rbx
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  char *v8; // rax
  void *v9; // r15
  size_t v10; // rax
  __int64 v11; // r13
  size_t v12; // r12
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm0
  char *v15; // rax
  __int64 v16; // rax
  char *v17; // rdi
  char *v18; // r12
  size_t v19; // rbx
  char *v20; // rdx
  void *v21; // rax
  __int64 v22; // r12
  __int64 v23; // rbx
  char *v24; // rdx
  char *v25; // rax
  void *v26; // rdi
  const char *v27; // rdx
  char *v29; // rsi
  __int64 v30; // rax
  void *v31; // rax
  const void *v32; // rsi
  __int64 v33; // rax
  char *v34; // rax
  void *v35; // rdi
  const char *v36; // rbx
  unsigned __int8 v37; // bl
  const char *v38; // r14
  const char *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // r12
  const char *v42; // rsi
  size_t v43; // rax
  __int64 v44; // r15
  size_t v45; // r12
  __int64 v46; // rax
  char *v47; // rsi
  unsigned __int64 v48; // rdi
  void *v49; // r12
  __m128i v50; // xmm0
  __m128i v51; // xmm1
  char *v52; // rax
  int v53; // eax
  int v54; // r13d
  int v55; // r12d
  __int64 v56; // r14
  __int64 v57; // r15
  const char *v58; // r9
  size_t v59; // rax
  const void *v60; // r9
  size_t v61; // r10
  __int64 v62; // r11
  _BYTE *v63; // rsi
  __int64 v64; // rdx
  unsigned __int64 v65; // rdx
  _BYTE *v66; // rsi
  __int64 v67; // rcx
  void *v68; // rdx
  const char *v69; // rsi
  const char *v70; // rsi
  __m128i v71; // xmm0
  char *v72; // rax
  __m128i src; // [rsp+0h] [rbp-F8h] BYREF
  void **v74; // [rsp+10h] [rbp-E8h]
  __m128i v75; // [rsp+18h] [rbp-E0h] BYREF
  size_t v76; // [rsp+28h] [rbp-D0h]
  __int64 v77; // [rsp+30h] [rbp-C8h] BYREF
  void *v78; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v79; // [rsp+48h] [rbp-B0h]
  void *v80; // [rsp+60h] [rbp-98h] BYREF
  __int128 v81; // [rsp+68h] [rbp-90h]
  void *v82; // [rsp+80h] [rbp-78h] BYREF
  __int128 v83; // [rsp+88h] [rbp-70h]
  void *ptr; // [rsp+A0h] [rbp-58h] BYREF
  __m128i v85; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v86; // [rsp+B8h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  v77 = -1;
  netnode_check(&v77, "$ qregistry", 0, 1);
  v74 = &v78;
  v78 = nullptr;
  v79 = 0;
  if ( netnode_qhashfirst(v77, &v78, 72) >= 0 )
  {
    while ( 1 )
    {
      v80 = nullptr;
      v0 = (char *)haystack;
      v81 = 0;
      if ( (_QWORD)v79 )
        v0 = (char *)v78;
      v82 = nullptr;
      v83 = 0;
      if ( v0 )
      {
        v1 = strlen(v0);
        v2 = v1 + 1;
        v3 = v1;
        v82 = (void *)qvector_reserve(&v82, 0, v1 + 1, 1);
        *(_QWORD *)&v83 = v2;
        memmove(v82, v0, v3);
        *((_BYTE *)v82 + v3) = 0;
        v0 = (char *)v82;
      }
      for ( i = (const char *)qstrtok(v0, (char *)"\\"); ; i = (const char *)qstrtok(nullptr, (char *)"\\") )
      {
        v9 = (void *)i;
        if ( !i )
          break;
        ptr = nullptr;
        v85 = 0;
        v10 = strlen(i);
        v11 = v10 + 1;
        v12 = v10;
        ptr = (void *)qvector_reserve(&ptr, 0, v10 + 1, 1);
        v85.m128i_i64[0] = v11;
        memmove(ptr, v9, v12);
        *((_BYTE *)ptr + v12) = 0;
        v30 = v81;
        v29 = (char *)v80;
        v13 = v81 + 1;
        if ( &ptr < v80 || &ptr >= (void **)((char *)v80 + 24 * *((_QWORD *)&v81 + 1)) )
        {
          if ( *((_QWORD *)&v81 + 1) < v13 )
          {
            v80 = (void *)qvector_reserve(&v80, v80, v81 + 1, 24);
            v29 = (char *)v80;
            v30 = v81;
          }
          v14 = _mm_loadu_si128(&v85);
          v15 = &v29[24 * v30];
          *(_QWORD *)v15 = ptr;
          *(__m128i *)(v15 + 8) = v14;
          *(_QWORD *)&v81 = v81 + 1;
        }
        else
        {
          v5 = ptr;
          v6 = _mm_loadl_epi64(&v85);
          ptr = nullptr;
          v7 = _mm_loadl_epi64((const __m128i *)&v85.m128i_u64[1]);
          v85 = 0;
          if ( *((_QWORD *)&v81 + 1) < v13 )
          {
            src.m128i_i64[1] = v7.m128i_i64[0];
            src.m128i_i64[0] = v6.m128i_i64[0];
            v80 = (void *)qvector_reserve(&v80, v80, v81 + 1, 24);
            v29 = (char *)v80;
            v7 = _mm_loadl_epi64((const __m128i *)&src.m128i_u64[1]);
            v30 = v81;
            v6 = _mm_loadl_epi64(&src);
          }
          v8 = &v29[24 * v30];
          *(_QWORD *)v8 = v5;
          *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v6, v7);
          *(_QWORD *)&v81 = v81 + 1;
          if ( ptr )
          {
            v85.m128i_i64[0] = 0;
            qfree(ptr);
          }
        }
      }
      if ( v82 )
      {
        *(_QWORD *)&v83 = 0;
        qfree(v82);
      }
      v16 = v81;
      v17 = (char *)v80;
      v18 = (char *)v80 + 24 * v81 - 24;
      v19 = *((_QWORD *)v18 + 1);
      if ( v19 )
        break;
      if ( (_QWORD)v81 )
      {
        *(_QWORD *)&v81 = v81 - 1;
        v20 = (char *)v80 + 24 * v16 - 24;
        v21 = *(void **)v20;
        if ( *(_QWORD *)v20 )
        {
          *((_QWORD *)v20 + 1) = 0;
          qfree(v21);
          v17 = (char *)v80;
        }
      }
LABEL_24:
      if ( v17 )
      {
        v22 = v81;
        if ( (_QWORD)v81 )
        {
          v23 = 0;
          v24 = v17;
          do
          {
            v25 = &v24[24 * v23];
            v26 = *(void **)v25;
            if ( *(_QWORD *)v25 )
            {
              *((_QWORD *)v25 + 1) = 0;
              qfree(v26);
              v24 = (char *)v80;
            }
            ++v23;
          }
          while ( v22 != v23 );
          v17 = v24;
        }
        *(_QWORD *)&v81 = 0;
        qfree(v17);
      }
      v27 = haystack;
      if ( (_QWORD)v79 )
        v27 = (const char *)v78;
      if ( netnode_qhashnext(v77, v74, v27, 72) < 0 )
        goto LABEL_35;
    }
    v31 = (void *)qalloc_or_throw(*((_QWORD *)v18 + 1));
    v32 = *(const void **)v18;
    src.m128i_i64[1] = (__int64)v31;
    memcpy(v31, v32, v19);
    v33 = v81;
    if ( (_QWORD)v81 )
    {
      *(_QWORD *)&v81 = v81 - 1;
      v34 = (char *)v80 + 24 * v33 - 24;
      v35 = *(void **)v34;
      if ( *(_QWORD *)v34 )
      {
        *((_QWORD *)v34 + 1) = 0;
        qfree(v35);
      }
    }
    v36 = (const char *)src.m128i_i64[1];
    if ( !strcmp((const char *)src.m128i_i64[1], "Forms") )
    {
      v37 = 1;
      v38 = "Views";
    }
    else
    {
      if ( strcmp(v36, "Geometry") )
      {
LABEL_47:
        if ( src.m128i_i64[1] )
          qfree((void *)src.m128i_i64[1]);
        v17 = (char *)v80;
        goto LABEL_24;
      }
      v37 = 0;
      v38 = "Geom";
    }
    v39 = haystack;
    if ( (_QWORD)v79 )
      v39 = (const char *)v78;
    v40 = netnode_hashval(v77, v39, 0, 0, 72);
    v41 = v40;
    if ( v40 >= 0 )
    {
      v82 = nullptr;
      v83 = 0;
      if ( v40 + v37 )
      {
        src.m128i_i64[0] = v40 + v37;
        v82 = (void *)qvector_reserve(&v82, 0, src.m128i_i64[0], 1);
        memset((char *)v82 + v83, 0, src.m128i_i64[0] - v83);
        v9 = v82;
        *(_QWORD *)&v83 = src.m128i_i64[0];
      }
      v42 = haystack;
      if ( (_QWORD)v79 )
        v42 = (const char *)v78;
      netnode_hashval(v77, v42, v9, v41, 72);
      if ( v37 )
        *((_BYTE *)v82 + v41) = 0;
      ptr = nullptr;
      v85 = 0;
      v43 = strlen(v38);
      v44 = v43 + 1;
      v45 = v43;
      ptr = (void *)qvector_reserve(&ptr, 0, v43 + 1, 1);
      v85.m128i_i64[0] = v44;
      memmove(ptr, v38, v45);
      *((_BYTE *)ptr + v45) = 0;
      v46 = v81;
      v47 = (char *)v80;
      v48 = v81 + 1;
      if ( &ptr < v80 || &ptr >= (void **)((char *)v80 + 24 * *((_QWORD *)&v81 + 1)) )
      {
        if ( *((_QWORD *)&v81 + 1) < v48 )
        {
          v80 = (void *)qvector_reserve(&v80, v80, v81 + 1, 24);
          v47 = (char *)v80;
          v46 = v81;
        }
        v71 = _mm_loadu_si128(&v85);
        v72 = &v47[24 * v46];
        *(_QWORD *)v72 = ptr;
        *(__m128i *)(v72 + 8) = v71;
        v53 = v81 + 1;
        *(_QWORD *)&v81 = v81 + 1;
      }
      else
      {
        v49 = ptr;
        v50 = _mm_loadl_epi64(&v85);
        ptr = nullptr;
        v51 = _mm_loadl_epi64((const __m128i *)&v85.m128i_u64[1]);
        v85 = 0;
        if ( *((_QWORD *)&v81 + 1) < v48 )
        {
          v75.m128i_i64[0] = v51.m128i_i64[0];
          src.m128i_i64[0] = v50.m128i_i64[0];
          v80 = (void *)qvector_reserve(&v80, v80, v81 + 1, 24);
          v47 = (char *)v80;
          v51 = _mm_loadl_epi64(&v75);
          v46 = v81;
          v50 = _mm_loadl_epi64(&src);
        }
        v52 = &v47[24 * v46];
        *(_QWORD *)v52 = v49;
        *(__m128i *)(v52 + 8) = _mm_unpacklo_epi64(v50, v51);
        v53 = v81 + 1;
        *(_QWORD *)&v81 = v81 + 1;
        if ( ptr )
        {
          v85.m128i_i64[0] = 0;
          qfree(ptr);
          v53 = v81;
        }
      }
      v54 = v53;
      v55 = 0;
      v56 = 0;
      ptr = nullptr;
      v57 = 0;
      v85 = 0;
      if ( v53 <= 0 )
      {
        v67 = v83;
        v68 = v82;
        v69 = haystack;
      }
      else
      {
        while ( 1 )
        {
          v58 = haystack;
          if ( *(_QWORD *)((char *)v80 + v56 + 8) )
            v58 = *(const char **)((char *)v80 + v56);
          if ( v58 )
          {
            src.m128i_i64[0] = (__int64)v58;
            v59 = strlen(v58);
            v60 = (const void *)src.m128i_i64[0];
            v61 = v59;
            v62 = v59;
            if ( v57 )
            {
              --v57;
              v62 = v59 + v57;
            }
            v63 = ptr;
            v64 = v62 + 1;
            if ( v85.m128i_i64[1] < (unsigned __int64)(v62 + 1) )
            {
              v76 = v59;
              v75.m128i_i64[1] = src.m128i_i64[0];
              v75.m128i_i64[0] = v62;
              src.m128i_i64[0] = v62 + 1;
              ptr = (void *)qvector_reserve(&ptr, ptr, v64, 1);
              v61 = v76;
              v63 = ptr;
              v60 = (const void *)v75.m128i_i64[1];
              v62 = v75.m128i_i64[0];
              v64 = src.m128i_i64[0];
            }
            v85.m128i_i64[0] = v64;
            v63[v62] = 0;
            memmove((char *)ptr + v57, v60, v61);
            v57 = v85.m128i_i64[0];
          }
          if ( v54 == ++v55 )
            break;
          v65 = 2;
          if ( v57 )
            v65 = v57-- + 1;
          v66 = ptr;
          if ( v85.m128i_i64[1] < v65 )
          {
            src.m128i_i64[0] = v65;
            ptr = (void *)qvector_reserve(&ptr, ptr, v65, 1);
            v65 = src.m128i_i64[0];
            v66 = ptr;
          }
          v85.m128i_i64[0] = v65;
          v56 += 24;
          v66[v57] = 92;
          *((_BYTE *)ptr + v57 + 1) = 0;
          v57 = v85.m128i_i64[0];
        }
        v67 = v83;
        v68 = v82;
        v69 = haystack;
        if ( v57 )
          v69 = (const char *)ptr;
      }
      if ( (unsigned __int8)netnode_hashset(v77, v69, v68, v67, 72) )
      {
        v70 = haystack;
        if ( (_QWORD)v79 )
          v70 = (const char *)v78;
        netnode_hashdel(v77, v70, 72);
      }
      if ( ptr )
      {
        v85.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v82 )
      {
        *(_QWORD *)&v83 = 0;
        qfree(v82);
      }
    }
    goto LABEL_47;
  }
LABEL_35:
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  return v86 - __readfsqword(0x28u);
}
