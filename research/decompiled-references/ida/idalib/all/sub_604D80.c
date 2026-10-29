__int64 __fastcall sub_604D80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v7; // rbp
  __int64 v8; // rax
  __m128i *v9; // rbx
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
  size_t v38; // r12
  void *v39; // rbp
  char *v40; // r13
  __m128i *v41; // r15
  __int64 v42; // r12
  __m128i *v43; // rbx
  const char *v44; // rsi
  __m128i *v45; // rbp
  const char *v46; // rdi
  int v47; // eax
  __m128i *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  const char *v51; // rsi
  const char *v52; // rdi
  _QWORD *v53; // r15
  __int64 v54; // rax
  __int64 v55; // rbp
  size_t v56; // r12
  __m128i *v57; // rax
  size_t v58; // rdx
  __int64 v59; // rdi
  unsigned __int64 v60; // rbp
  __int64 v61; // r15
  char *v62; // rdx
  __int64 v63; // r13
  __int64 i; // r12
  char *v65; // rax
  void *v66; // rdi
  __m128i si128; // xmm3
  __int64 v68; // r13
  __int64 v69; // r12
  char *v70; // rdx
  char *v71; // rsi
  size_t v72; // rdx
  __int64 v73; // rdi
  void *v74; // rax
  size_t v75; // rdx
  const void **v76; // rsi
  void *v77; // rdi
  void *v78; // rax
  char **v79; // rbx
  const char *v80; // r15
  size_t v81; // rax
  size_t v82; // r14
  size_t v83; // rbp
  size_t v84; // r15
  void *v85; // rbp
  __int64 v86; // rdx
  char *v87; // rsi
  char *v88; // rax
  void *v89; // rdi
  void *v90; // rax
  const void *v91; // rsi
  const char *v92; // rsi
  const char *v93; // rdi
  unsigned int v94; // eax
  unsigned __int64 v95; // [rsp+0h] [rbp-128h]
  __m128i *v97; // [rsp+18h] [rbp-110h]
  size_t v98[2]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v99; // [rsp+30h] [rbp-F8h]
  const void **v100; // [rsp+38h] [rbp-F0h]
  void *v101; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v102; // [rsp+48h] [rbp-E0h]
  void *v103; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v104; // [rsp+68h] [rbp-C0h]
  void *ptr; // [rsp+80h] [rbp-A8h] BYREF
  size_t v106[3]; // [rsp+88h] [rbp-A0h]
  void *src; // [rsp+A0h] [rbp-88h] BYREF
  size_t n[2]; // [rsp+A8h] [rbp-80h]
  __int16 v109; // [rsp+B8h] [rbp-70h]
  __int64 v110; // [rsp+C0h] [rbp-68h]
  char v111; // [rsp+C8h] [rbp-60h]
  __m128i v112; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v113; // [rsp+E8h] [rbp-40h]

  v7 = *(_QWORD *)(a3 + 8);
  v99 = a6;
  v113 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( v7 )
  {
    v90 = (void *)qalloc_or_throw(v7);
    v91 = *(const void **)a3;
    n[1] = v7;
    src = v90;
    memcpy(v90, v91, v7);
    n[0] = v7;
  }
  v109 = *(_WORD *)(a3 + 24);
  v8 = *(_QWORD *)(a3 + 32);
  v112 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  v110 = v8;
  LOBYTE(v8) = *(_BYTE *)(a3 + 40);
  v9 = (__m128i *)v99;
  v111 = v8;
  sub_5FD110(*(void **)(v99 + 136));
  *(_QWORD *)(v99 + 136) = 0;
  v97 = v9 + 8;
  v9[9].m128i_i64[0] = (__int64)v9[8].m128i_i64;
  v9[9].m128i_i64[1] = (__int64)v9[8].m128i_i64;
  v9[10].m128i_i64[0] = 0;
  v101 = nullptr;
  v103 = nullptr;
  v102 = 0;
  v104 = 0;
  while ( !(unsigned __int8)sub_747570(a1, &src) )
  {
    v10 = v102;
    v11 = 0;
    if ( (_QWORD)v102 )
    {
      do
      {
        v12 = (char *)v101 + 24 * v11;
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
    *(_QWORD *)&v102 = 0;
    v14 = v104;
    v15 = 0;
    if ( (_QWORD)v104 )
    {
      do
      {
        v16 = (char *)v103 + 24 * v15;
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
    *(_QWORD *)&v104 = 0;
    if ( v109 == 3 )
    {
      v79 = &off_2B324E0;
      do
      {
        v80 = *v79;
        ptr = nullptr;
        *(_OWORD *)v106 = 0;
        if ( v80 )
        {
          v81 = strlen(v80);
          v82 = v81 + 1;
          v83 = v81;
          ptr = (void *)qvector_reserve(&ptr, 0, v81 + 1, 1);
          v106[0] = v82;
          memmove(ptr, v80, v83);
          *((_BYTE *)ptr + v83) = 0;
        }
        sub_35A910((__int64 *)&ptr);
        v84 = v106[0];
        v85 = nullptr;
        if ( v106[0] )
        {
          v85 = (void *)qalloc_or_throw(v106[0]);
          memcpy(v85, ptr, v84);
        }
        v86 = v102;
        v87 = (char *)v101;
        if ( *((_QWORD *)&v102 + 1) < (unsigned __int64)(v102 + 1) )
        {
          v101 = (void *)qvector_reserve(&v101, v101, v102 + 1, 24);
          v86 = v102;
          v87 = (char *)v101;
        }
        v88 = &v87[24 * v86];
        *(_QWORD *)v88 = v85;
        v89 = ptr;
        *(__m128i *)(v88 + 8) = _mm_unpacklo_epi64((__m128i)v84, (__m128i)v84);
        *(_QWORD *)&v102 = v102 + 1;
        if ( v89 )
        {
          v106[0] = 0;
          qfree(v89);
        }
        ++v79;
      }
      while ( &unk_2B32500 != (_UNKNOWN *)v79 );
    }
    else
    {
      if ( ((v109 - 2) & 0xFFFD) != 0 )
        goto LABEL_15;
      qstrlwr(src);
      v30 = n[0];
      v31 = nullptr;
      if ( n[0] )
      {
        v31 = (void *)qalloc_or_throw(n[0]);
        memcpy(v31, src, v30);
      }
      v32 = v102;
      v33 = (char *)v101;
      if ( *((_QWORD *)&v102 + 1) < (unsigned __int64)(v102 + 1) )
      {
        v101 = (void *)qvector_reserve(&v101, v101, v102 + 1, 24);
        v32 = v102;
        v33 = (char *)v101;
      }
      v34 = &v33[24 * v32];
      *(_QWORD *)v34 = v31;
      *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
      *(_QWORD *)&v102 = v102 + 1;
    }
    if ( !(unsigned __int8)sub_7480A0(a1, &src) || v109 != 58 )
      goto LABEL_15;
    while ( 1 )
    {
      if ( !(unsigned __int8)sub_7480A0(a1, &src) )
        goto LABEL_15;
      if ( v109 == 44 || (unsigned __int8)sub_747570(a1, &src) )
        break;
      if ( ((v109 - 2) & 0xFFFD) != 0 )
        goto LABEL_15;
      v38 = n[0];
      v39 = nullptr;
      if ( n[0] )
      {
        v39 = (void *)qalloc_or_throw(n[0]);
        memcpy(v39, src, v38);
      }
      v35 = v104;
      v36 = (char *)v103;
      if ( *((_QWORD *)&v104 + 1) < (unsigned __int64)(v104 + 1) )
      {
        v103 = (void *)qvector_reserve(&v103, v103, v104 + 1, 24);
        v35 = v104;
        v36 = (char *)v103;
      }
      v37 = &v36[24 * v35];
      *(_QWORD *)v37 = v39;
      *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
      *(_QWORD *)&v104 = v104 + 1;
    }
    if ( !(_QWORD)v104 )
    {
LABEL_15:
      v18 = 3;
      goto LABEL_16;
    }
    v95 = 0;
    if ( !(_QWORD)v102 )
      goto LABEL_86;
    do
    {
      v40 = (char *)v101 + 24 * v95;
      v41 = *(__m128i **)(v99 + 136);
      if ( !v41 )
      {
        v43 = v97;
        goto LABEL_70;
      }
      v42 = *((_QWORD *)v40 + 1);
      v43 = v97;
      while ( 1 )
      {
        v49 = v41[2].m128i_i64[1];
        if ( !v42 )
          break;
        v44 = *(const char **)v40;
        v45 = v41;
        v46 = haystack;
        if ( v49 )
          goto LABEL_55;
LABEL_56:
        v47 = strcmp(v46, v44);
        v48 = (__m128i *)v41[1].m128i_i64[0];
        v41 = (__m128i *)v41[1].m128i_i64[1];
        if ( v47 >= 0 )
        {
          v43 = v45;
          v41 = v48;
        }
        if ( !v41 )
          goto LABEL_65;
      }
      if ( v49 )
      {
LABEL_63:
        v45 = v41;
        v44 = haystack;
LABEL_55:
        v46 = (const char *)v41[2].m128i_i64[0];
        goto LABEL_56;
      }
      while ( 1 )
      {
        v50 = v41[1].m128i_i64[0];
        if ( !v50 )
          break;
        v43 = v41;
        v41 = (__m128i *)v41[1].m128i_i64[0];
        if ( *(_QWORD *)(v50 + 40) )
          goto LABEL_63;
      }
      v43 = v41;
LABEL_65:
      if ( v97 == v43 )
        goto LABEL_70;
      if ( !v43[2].m128i_i64[1] )
      {
        v51 = haystack;
        if ( v42 )
        {
LABEL_68:
          v52 = *(const char **)v40;
          goto LABEL_69;
        }
        v60 = v104;
        v61 = 0;
        if ( !(_QWORD)v104 )
          goto LABEL_78;
LABEL_91:
        v61 = qalloc_or_throw(24 * v60);
        v68 = v61;
        v69 = 0;
        do
        {
          v70 = (char *)v103;
          *(_QWORD *)v68 = 0;
          *(_OWORD *)(v68 + 8) = 0;
          v71 = &v70[24 * v69];
          v72 = *((_QWORD *)v71 + 1);
          if ( v72 )
          {
            v73 = *((_QWORD *)v71 + 1);
            v100 = (const void **)v71;
            v98[0] = v72;
            v74 = (void *)qalloc_or_throw(v73);
            v75 = v98[0];
            v76 = v100;
            *(_QWORD *)v68 = v74;
            *(_QWORD *)(v68 + 16) = v75;
            memcpy(v74, *v76, v75);
            *(_QWORD *)(v68 + 8) = v98[0];
          }
          ++v69;
          v68 += 24;
        }
        while ( v60 != v69 );
        goto LABEL_78;
      }
      v51 = (const char *)v43[2].m128i_i64[0];
      v52 = haystack;
      if ( v42 )
        goto LABEL_68;
LABEL_69:
      if ( strcmp(v52, v51) >= 0 )
        goto LABEL_77;
LABEL_70:
      v53 = (_QWORD *)(v99 + 120);
      v54 = operator new(0x50u);
      *(_QWORD *)(v54 + 32) = 0;
      v55 = v54;
      *(_OWORD *)(v54 + 40) = 0;
      v56 = *((_QWORD *)v40 + 1);
      if ( v56 )
      {
        v78 = (void *)qalloc_or_throw(*((_QWORD *)v40 + 1));
        *(_QWORD *)(v55 + 32) = v78;
        *(_QWORD *)(v55 + 48) = v56;
        memcpy(v78, *(const void **)v40, v56);
        *(_QWORD *)(v55 + 40) = v56;
      }
      *(_QWORD *)(v55 + 56) = 0;
      *(_OWORD *)(v55 + 64) = 0;
      v57 = (__m128i *)sub_604B90(v53, v43, v55 + 32);
      v43 = v57;
      if ( !v58 )
      {
        if ( v55 )
        {
          v77 = *(void **)(v55 + 32);
          if ( v77 )
          {
            *(_QWORD *)(v55 + 40) = 0;
            qfree(v77);
          }
          operator delete((void *)v55, 0x50u);
        }
        goto LABEL_77;
      }
      if ( v57 || v97 == (__m128i *)v58 )
      {
        v59 = 1;
        goto LABEL_76;
      }
      v92 = haystack;
      if ( *(_QWORD *)(v58 + 40) )
      {
        v92 = *(const char **)(v58 + 32);
        v93 = haystack;
        if ( !*(_QWORD *)(v55 + 40) )
          goto LABEL_113;
LABEL_114:
        v93 = *(const char **)(v55 + 32);
        goto LABEL_113;
      }
      v93 = haystack;
      if ( *(_QWORD *)(v55 + 40) )
        goto LABEL_114;
LABEL_113:
      v98[0] = v58;
      v94 = strcmp(v93, v92);
      v58 = v98[0];
      v59 = v94 >> 31;
LABEL_76:
      v43 = (__m128i *)v55;
      std::_Rb_tree_insert_and_rebalance(v59, v55, v58, v97);
      ++*(_QWORD *)(v99 + 160);
LABEL_77:
      v60 = v104;
      v61 = 0;
      if ( (_QWORD)v104 )
        goto LABEL_91;
LABEL_78:
      v62 = (char *)v43[3].m128i_i64[1];
      *(__m128i *)v98 = _mm_unpacklo_epi64((__m128i)v60, (__m128i)v60);
      if ( v62 )
      {
        v63 = v43[4].m128i_i64[0];
        if ( v63 )
        {
          for ( i = 0; i != v63; ++i )
          {
            v65 = &v62[24 * i];
            v66 = *(void **)v65;
            if ( *(_QWORD *)v65 )
            {
              *((_QWORD *)v65 + 1) = 0;
              qfree(v66);
              v62 = (char *)v43[3].m128i_i64[1];
            }
          }
        }
        v43[4].m128i_i64[0] = 0;
        qfree(v62);
      }
      si128 = _mm_load_si128((const __m128i *)v98);
      ++v95;
      v43[3].m128i_i64[1] = v61;
      v43[4] = si128;
    }
    while ( v95 < (unsigned __int64)v102 );
LABEL_86:
    if ( !(unsigned __int8)sub_747570(a1, &src) && !(unsigned __int8)sub_7480A0(a1, &src) )
      goto LABEL_15;
  }
  v18 = 0;
LABEL_16:
  v19 = (char *)v103;
  if ( v103 )
  {
    v20 = v104;
    if ( (_QWORD)v104 )
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
          v19 = (char *)v103;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v104 = 0;
    qfree(v19);
  }
  v24 = (char *)v101;
  if ( v101 )
  {
    v25 = v102;
    if ( (_QWORD)v102 )
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
          v24 = (char *)v101;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v102 = 0;
    qfree(v24);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v18;
}
