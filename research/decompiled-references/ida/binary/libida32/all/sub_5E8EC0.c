__int64 __fastcall sub_5E8EC0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v7; // rbp
  int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rbx
  char *v12; // rax
  void *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rbx
  char *v16; // rax
  void *v17; // rdi
  __int64 v18; // rbp
  char *v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbx
  char *v22; // rax
  void *v23; // rdi
  char *v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rbx
  char *v27; // rax
  void *v28; // rdi
  size_t v30; // rbp
  void *v31; // rbx
  __int64 v32; // rdx
  char *v33; // rsi
  char *v34; // rax
  __int64 v35; // rdx
  char *v36; // rsi
  char *v37; // rax
  void **p_src; // rsi
  size_t v39; // r12
  void *v40; // rbp
  char *v41; // r13
  void **v42; // r15
  __int64 v43; // r12
  void **v44; // rbx
  void **v45; // rbp
  const char *v46; // rdi
  int v47; // eax
  void **v48; // rcx
  void *v49; // rax
  _QWORD *v50; // rcx
  const char *v51; // rdi
  _QWORD *v52; // r15
  __int64 v53; // rax
  __int64 v54; // rbp
  size_t v55; // r12
  void **v56; // rax
  size_t v57; // rdx
  unsigned __int64 v58; // rbp
  __int64 v59; // r15
  char *v60; // rdx
  void *v61; // r13
  void *i; // r12
  char *v63; // rax
  void *v64; // rdi
  __m128i si128; // xmm3
  __int64 v66; // r13
  __int64 v67; // r12
  char *v68; // rdx
  size_t v69; // rdx
  void *v70; // rdi
  void *v71; // rax
  size_t v72; // rdx
  void ***v73; // rsi
  void *v74; // rdi
  void *v75; // rax
  char **v76; // rbx
  const char *v77; // r15
  size_t v78; // rax
  size_t v79; // r14
  size_t v80; // rbp
  int v81; // edx
  size_t v82; // r15
  void *v83; // rbp
  __int64 v84; // rdx
  char *v85; // rsi
  char *v86; // rax
  void *v87; // rdi
  void *v88; // rax
  const void *v89; // rsi
  const char *v90; // rsi
  const char *v91; // rdi
  unsigned __int64 v92; // [rsp+0h] [rbp-118h]
  void **v94; // [rsp+18h] [rbp-100h]
  size_t v95[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v96; // [rsp+30h] [rbp-E8h]
  void **v97; // [rsp+38h] [rbp-E0h]
  void *v98; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v99; // [rsp+48h] [rbp-D0h]
  void *v100; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v101; // [rsp+68h] [rbp-B0h]
  void *ptr; // [rsp+80h] [rbp-98h] BYREF
  size_t v103[3]; // [rsp+88h] [rbp-90h]
  void *src; // [rsp+A0h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+A8h] [rbp-70h]
  __int16 v106; // [rsp+B8h] [rbp-60h]
  int v107; // [rsp+BCh] [rbp-5Ch]
  char v108; // [rsp+C0h] [rbp-58h]
  __m128i v109; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v110; // [rsp+D8h] [rbp-40h]

  v7 = *(_QWORD *)(a3 + 8);
  v96 = a6;
  v110 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( v7 )
  {
    v88 = (void *)qalloc_or_throw(v7, a2);
    v89 = *(const void **)a3;
    n[1] = v7;
    src = v88;
    memcpy(v88, v89, v7);
    n[0] = v7;
  }
  v106 = *(_WORD *)(a3 + 24);
  v8 = *(_DWORD *)(a3 + 28);
  v109 = _mm_loadu_si128((const __m128i *)(a3 + 40));
  v107 = v8;
  LOBYTE(v8) = *(_BYTE *)(a3 + 32);
  v9 = (_QWORD *)v96;
  v108 = v8;
  sub_5E1240(*(void **)(v96 + 128));
  *(_QWORD *)(v96 + 128) = 0;
  v94 = (void **)(v9 + 15);
  v9[17] = v9 + 15;
  v9[18] = v9 + 15;
  v9[19] = 0;
  v98 = nullptr;
  v100 = nullptr;
  v99 = 0;
  v101 = 0;
  while ( !(unsigned __int8)sub_727030(a1, &src) )
  {
    v10 = v99;
    v11 = 0;
    if ( (_QWORD)v99 )
    {
      do
      {
        v12 = (char *)v98 + 24 * v11;
        v13 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          qfree(v13);
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v99 = 0;
    v14 = v101;
    v15 = 0;
    if ( (_QWORD)v101 )
    {
      do
      {
        v16 = (char *)v100 + 24 * v15;
        v17 = *(void **)v16;
        if ( *(_QWORD *)v16 )
        {
          *((_QWORD *)v16 + 1) = 0;
          qfree(v17);
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v101 = 0;
    if ( v106 == 3 )
    {
      v76 = &off_2B08520;
      do
      {
        v77 = *v76;
        ptr = nullptr;
        *(_OWORD *)v103 = 0;
        if ( v77 )
        {
          v78 = strlen(v77);
          v79 = v78 + 1;
          v80 = v78;
          ptr = (void *)qvector_reserve(&ptr, 0, v78 + 1, 1);
          v103[0] = v79;
          memmove(ptr, v77, v80);
          *((_BYTE *)ptr + v80) = 0;
        }
        sub_357520((__int64 *)&ptr);
        v82 = v103[0];
        v83 = nullptr;
        if ( v103[0] )
        {
          v83 = (void *)qalloc_or_throw(v103[0], "%d", v81);
          memcpy(v83, ptr, v82);
        }
        v84 = v99;
        v85 = (char *)v98;
        if ( *((_QWORD *)&v99 + 1) < (unsigned __int64)(v99 + 1) )
        {
          v98 = (void *)qvector_reserve(&v98, v98, v99 + 1, 24);
          v84 = v99;
          v85 = (char *)v98;
        }
        v86 = &v85[24 * v84];
        *(_QWORD *)v86 = v83;
        v87 = ptr;
        *(__m128i *)(v86 + 8) = _mm_unpacklo_epi64((__m128i)v82, (__m128i)v82);
        *(_QWORD *)&v99 = v99 + 1;
        if ( v87 )
        {
          v103[0] = 0;
          qfree(v87);
        }
        ++v76;
      }
      while ( &unk_2B08540 != (_UNKNOWN *)v76 );
    }
    else
    {
      if ( ((v106 - 2) & 0xFFFD) != 0 )
        goto LABEL_15;
      qstrlwr(src);
      v30 = n[0];
      v31 = nullptr;
      if ( n[0] )
      {
        v31 = (void *)qalloc_or_throw(n[0], (const char *)&src);
        memcpy(v31, src, v30);
      }
      v32 = v99;
      v33 = (char *)v98;
      if ( *((_QWORD *)&v99 + 1) < (unsigned __int64)(v99 + 1) )
      {
        v98 = (void *)qvector_reserve(&v98, v98, v99 + 1, 24);
        v32 = v99;
        v33 = (char *)v98;
      }
      v34 = &v33[24 * v32];
      *(_QWORD *)v34 = v31;
      *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
      *(_QWORD *)&v99 = v99 + 1;
    }
    if ( !(unsigned __int8)sub_727B60(a1, &src) || v106 != 58 )
      goto LABEL_15;
    while ( 1 )
    {
      p_src = &src;
      if ( !(unsigned __int8)sub_727B60(a1, &src) )
        goto LABEL_15;
      if ( v106 == 44 )
        break;
      p_src = &src;
      if ( (unsigned __int8)sub_727030(a1, &src) )
        break;
      if ( ((v106 - 2) & 0xFFFD) != 0 )
        goto LABEL_15;
      v39 = n[0];
      v40 = nullptr;
      if ( n[0] )
      {
        v40 = (void *)qalloc_or_throw(n[0], (const char *)&src);
        memcpy(v40, src, v39);
      }
      v35 = v101;
      v36 = (char *)v100;
      if ( *((_QWORD *)&v101 + 1) < (unsigned __int64)(v101 + 1) )
      {
        v100 = (void *)qvector_reserve(&v100, v100, v101 + 1, 24);
        v35 = v101;
        v36 = (char *)v100;
      }
      v37 = &v36[24 * v35];
      *(_QWORD *)v37 = v40;
      *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
      *(_QWORD *)&v101 = v101 + 1;
    }
    if ( !(_QWORD)v101 )
    {
LABEL_15:
      v18 = 3;
      goto LABEL_16;
    }
    v92 = 0;
    if ( !(_QWORD)v99 )
      goto LABEL_85;
    do
    {
      v41 = (char *)v98 + 24 * v92;
      v42 = *(void ***)(v96 + 128);
      if ( !v42 )
      {
        v44 = v94;
        goto LABEL_70;
      }
      v43 = *((_QWORD *)v41 + 1);
      v44 = v94;
      while ( 1 )
      {
        v49 = v42[5];
        if ( !v43 )
          break;
        p_src = *(void ***)v41;
        v45 = v42;
        v46 = haystack;
        if ( v49 )
          goto LABEL_55;
LABEL_56:
        v47 = strcmp(v46, (const char *)p_src);
        v48 = (void **)v42[2];
        v42 = (void **)v42[3];
        if ( v47 >= 0 )
        {
          v44 = v45;
          v42 = v48;
        }
        if ( !v42 )
          goto LABEL_65;
      }
      if ( v49 )
      {
LABEL_63:
        v45 = v42;
        p_src = (void **)haystack;
LABEL_55:
        v46 = (const char *)v42[4];
        goto LABEL_56;
      }
      while ( 1 )
      {
        v50 = v42[2];
        if ( !v50 )
          break;
        v44 = v42;
        v42 = (void **)v42[2];
        if ( v50[5] )
          goto LABEL_63;
      }
      v44 = v42;
LABEL_65:
      if ( v94 == v44 )
        goto LABEL_70;
      if ( !v44[5] )
      {
        p_src = (void **)haystack;
        if ( v43 )
        {
LABEL_68:
          v51 = *(const char **)v41;
          goto LABEL_69;
        }
        v58 = v101;
        v59 = 0;
        if ( !(_QWORD)v101 )
          goto LABEL_77;
LABEL_90:
        v59 = qalloc_or_throw(24 * v58, (const char *)p_src);
        v66 = v59;
        v67 = 0;
        do
        {
          v68 = (char *)v100;
          *(_QWORD *)v66 = 0;
          *(_OWORD *)(v66 + 8) = 0;
          p_src = (void **)&v68[24 * v67];
          v69 = (size_t)p_src[1];
          if ( v69 )
          {
            v70 = p_src[1];
            v97 = p_src;
            v95[0] = v69;
            v71 = (void *)qalloc_or_throw(v70, (const char *)p_src);
            v72 = v95[0];
            v73 = (void ***)v97;
            *(_QWORD *)v66 = v71;
            *(_QWORD *)(v66 + 16) = v72;
            p_src = *v73;
            memcpy(v71, p_src, v72);
            *(_QWORD *)(v66 + 8) = v95[0];
          }
          ++v67;
          v66 += 24;
        }
        while ( v58 != v67 );
        goto LABEL_77;
      }
      p_src = (void **)v44[4];
      v51 = haystack;
      if ( v43 )
        goto LABEL_68;
LABEL_69:
      if ( strcmp(v51, (const char *)p_src) < 0 )
      {
LABEL_70:
        v52 = (_QWORD *)(v96 + 112);
        v53 = operator new(0x50u);
        *(_QWORD *)(v53 + 32) = 0;
        v54 = v53;
        *(_OWORD *)(v53 + 40) = 0;
        v55 = *((_QWORD *)v41 + 1);
        if ( v55 )
        {
          v75 = (void *)qalloc_or_throw(*((_QWORD *)v41 + 1), (const char *)p_src);
          *(_QWORD *)(v54 + 32) = v75;
          *(_QWORD *)(v54 + 48) = v55;
          memcpy(v75, *(const void **)v41, v55);
          *(_QWORD *)(v54 + 40) = v55;
        }
        p_src = v44;
        *(_QWORD *)(v54 + 56) = 0;
        *(_OWORD *)(v54 + 64) = 0;
        v56 = (void **)sub_5E8CD0(v52, v44, v54 + 32);
        v44 = v56;
        if ( v57 )
        {
          if ( v56 || v94 == (void **)v57 )
          {
LABEL_75:
            p_src = (void **)v54;
            v44 = (void **)v54;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(v96 + 152);
            goto LABEL_76;
          }
          v90 = haystack;
          if ( *(_QWORD *)(v57 + 40) )
          {
            v90 = *(const char **)(v57 + 32);
            v91 = haystack;
            if ( !*(_QWORD *)(v54 + 40) )
              goto LABEL_112;
          }
          else
          {
            v91 = haystack;
            if ( !*(_QWORD *)(v54 + 40) )
            {
LABEL_112:
              v95[0] = v57;
              strcmp(v91, v90);
              goto LABEL_75;
            }
          }
          v91 = *(const char **)(v54 + 32);
          goto LABEL_112;
        }
        if ( v54 )
        {
          v74 = *(void **)(v54 + 32);
          if ( v74 )
          {
            *(_QWORD *)(v54 + 40) = 0;
            qfree(v74);
          }
          p_src = (void **)&qword_50;
          operator delete((void *)v54, 0x50u);
        }
      }
LABEL_76:
      v58 = v101;
      v59 = 0;
      if ( (_QWORD)v101 )
        goto LABEL_90;
LABEL_77:
      v60 = (char *)v44[7];
      *(__m128i *)v95 = _mm_unpacklo_epi64((__m128i)v58, (__m128i)v58);
      if ( v60 )
      {
        v61 = v44[8];
        if ( v61 )
        {
          for ( i = nullptr; i != v61; i = (char *)i + 1 )
          {
            v63 = &v60[24 * (_QWORD)i];
            v64 = *(void **)v63;
            if ( *(_QWORD *)v63 )
            {
              *((_QWORD *)v63 + 1) = 0;
              qfree(v64);
              v60 = (char *)v44[7];
            }
          }
        }
        v44[8] = nullptr;
        qfree(v60);
      }
      si128 = _mm_load_si128((const __m128i *)v95);
      ++v92;
      v44[7] = (void *)v59;
      *((__m128i *)v44 + 4) = si128;
    }
    while ( v92 < (unsigned __int64)v99 );
LABEL_85:
    if ( !(unsigned __int8)sub_727030(a1, &src) && !(unsigned __int8)sub_727B60(a1, &src) )
      goto LABEL_15;
  }
  v18 = 0;
LABEL_16:
  v19 = (char *)v100;
  if ( v100 )
  {
    v20 = v101;
    if ( (_QWORD)v101 )
    {
      v21 = 0;
      do
      {
        v22 = &v19[24 * v21];
        v23 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          qfree(v23);
          v19 = (char *)v100;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v101 = 0;
    qfree(v19);
  }
  v24 = (char *)v98;
  if ( v98 )
  {
    v25 = v99;
    if ( (_QWORD)v99 )
    {
      v26 = 0;
      do
      {
        v27 = &v24[24 * v26];
        v28 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *((_QWORD *)v27 + 1) = 0;
          qfree(v28);
          v24 = (char *)v98;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v99 = 0;
    qfree(v24);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v18;
}

