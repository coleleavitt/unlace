unsigned __int64 __fastcall sub_393770(__int64 a1, _QWORD *a2, int *a3, time_t *a4, __int64 a5)
{
  _QWORD *v5; // r14
  size_t v8; // r15
  size_t v9; // r15
  size_t v10; // r15
  size_t v11; // r8
  bool v12; // al
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // r15
  char *v19; // r14
  void *v20; // r15
  char *v21; // r14
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  time_t v25; // rax
  time_t v26; // rsi
  time_t v27; // rcx
  int v28; // edx
  __int64 v29; // rax
  unsigned __int8 v30; // al
  size_t v32; // r8
  _QWORD *v33; // r9
  void *v34; // rdi
  _QWORD *v35; // r14
  __int64 v36; // r15
  char *v37; // r15
  void *v38; // rdi
  void *v39; // rdi
  void *v40; // rdi
  size_t v41; // r15
  size_t v42; // r15
  size_t v43; // r15
  signed __int64 v44; // r15
  __int64 v45; // rax
  __m128i v46; // xmm0
  char *v47; // rdx
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  char *v50; // rax
  char *v51; // r14
  char *v52; // r15
  void *v53; // rdi
  __int64 v54; // rdx
  char *v55; // rsi
  char *v56; // rax
  _BYTE *v57; // rax
  const char *v58; // rsi
  char *v59; // rdx
  __int64 v60; // r15
  __int64 v61; // r14
  char *v62; // rax
  void *v63; // rdi
  void *v64; // rax
  void *v65; // rax
  __int64 v66; // r15
  char *v67; // r14
  void *v68; // rdi
  void *v69; // rdi
  void *v70; // rdi
  _QWORD *v71; // r14
  void *v72; // rdi
  size_t n; // [rsp+8h] [rbp-1B8h]
  void *v74; // [rsp+10h] [rbp-1B0h]
  char *v75; // [rsp+10h] [rbp-1B0h]
  char *v76; // [rsp+10h] [rbp-1B0h]
  char *v77; // [rsp+10h] [rbp-1B0h]
  char *v78; // [rsp+10h] [rbp-1B0h]
  void *src; // [rsp+20h] [rbp-1A0h] BYREF
  __int128 v81; // [rsp+28h] [rbp-198h]
  void *v82; // [rsp+40h] [rbp-180h] BYREF
  __int128 v83; // [rsp+48h] [rbp-178h]
  void *v84; // [rsp+60h] [rbp-160h] BYREF
  __int128 v85; // [rsp+68h] [rbp-158h]
  void *v86; // [rsp+80h] [rbp-140h] BYREF
  __int128 v87; // [rsp+88h] [rbp-138h]
  int v88; // [rsp+A2h] [rbp-11Eh]
  __int16 v89; // [rsp+A6h] [rbp-11Ah]
  int v90; // [rsp+A8h] [rbp-118h]
  __int16 v91; // [rsp+ACh] [rbp-114h]
  int v92; // [rsp+AEh] [rbp-112h]
  __int16 v93; // [rsp+B2h] [rbp-10Eh]
  int v94; // [rsp+B4h] [rbp-10Ch]
  __int16 v95; // [rsp+B8h] [rbp-108h]
  int v96; // [rsp+BAh] [rbp-106h]
  __int16 v97; // [rsp+BEh] [rbp-102h]
  void *v98; // [rsp+C0h] [rbp-100h] BYREF
  size_t v99[2]; // [rsp+C8h] [rbp-F8h]
  __int16 v100; // [rsp+D8h] [rbp-E8h]
  char v101; // [rsp+DAh] [rbp-E6h]
  char v102; // [rsp+E0h] [rbp-E0h]
  void *dest; // [rsp+E8h] [rbp-D8h] BYREF
  size_t v104[2]; // [rsp+F0h] [rbp-D0h]
  void *ptr; // [rsp+100h] [rbp-C0h] BYREF
  size_t v106[2]; // [rsp+108h] [rbp-B8h]
  int v107; // [rsp+118h] [rbp-A8h]
  __int16 v108; // [rsp+11Ch] [rbp-A4h]
  void *v109; // [rsp+120h] [rbp-A0h]
  __m128i v110; // [rsp+128h] [rbp-98h] BYREF
  __int16 v111; // [rsp+138h] [rbp-88h]
  char v112; // [rsp+13Ah] [rbp-86h]
  _BYTE v113[21]; // [rsp+13Bh] [rbp-85h] BYREF
  __m128i v114; // [rsp+150h] [rbp-70h] BYREF
  void *v115; // [rsp+160h] [rbp-60h]
  __m128i v116; // [rsp+168h] [rbp-58h] BYREF
  __int64 v117; // [rsp+178h] [rbp-48h]
  unsigned __int64 v118; // [rsp+188h] [rbp-38h]

  v118 = __readfsqword(0x28u);
  if ( !a3[2] )
    return v118 - __readfsqword(0x28u);
  v5 = a2;
  if ( a5 )
  {
    if ( (*(_BYTE *)(a5 + 20) & 1) != 0 )
      return v118 - __readfsqword(0x28u);
  }
  v101 = 1;
  v100 = 0;
  v8 = a2[1];
  v98 = nullptr;
  v102 = 0;
  dest = nullptr;
  ptr = nullptr;
  v107 = 0;
  v108 = 0;
  *(_OWORD *)v99 = 0;
  *(_OWORD *)v104 = 0;
  *(_OWORD *)v106 = 0;
  if ( v8 > 1 )
  {
    a2 = (_QWORD *)*a2;
    v98 = (void *)qvector_reserve(&v98, 0, v8, 1);
    v99[0] = v8;
    memmove(v98, a2, v8 - 1);
    *((char *)v98 + v8 - 1) = 0;
  }
  v9 = v5[6];
  v100 = *((_WORD *)v5 + 12);
  v101 = *((_BYTE *)v5 + 26);
  v102 = *((_BYTE *)v5 + 32);
  if ( !v9 || (v32 = v9 - 1, v9 == 1) )
  {
    v104[0] = 0;
  }
  else
  {
    v33 = (_QWORD *)v5[5];
    v34 = dest;
    if ( v104[1] < v9 )
    {
      n = v5[5];
      dest = (void *)qvector_reserve(&dest, dest, v9, 1);
      v33 = (_QWORD *)n;
      v34 = dest;
      v32 = v9 - 1;
    }
    a2 = v33;
    v104[0] = v9;
    memmove(v34, v33, v32);
    *((char *)dest + v9 - 1) = 0;
  }
  v10 = v5[9];
  if ( v10 && (v11 = v10 - 1, v10 != 1) )
  {
    v71 = (_QWORD *)v5[8];
    v72 = ptr;
    if ( v106[1] < v10 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      v11 = v10 - 1;
      v72 = ptr;
    }
    a2 = v71;
    v106[0] = v10;
    memmove(v72, v71, v11);
    *((char *)ptr + v10 - 1) = 0;
  }
  else
  {
    v106[0] = 0;
  }
  v107 = *a3;
  v108 = *((_WORD *)a3 + 2);
  if ( v102 )
    v12 = v99[0] > 1;
  else
    v12 = v104[0] > 1;
  if ( v12 )
  {
    v13 = v107;
    LODWORD(v109) = 0;
    WORD2(v109) = 0;
    v88 = 0;
    v89 = 0;
    v96 = 0;
    v97 = 0;
    if ( v107 || v108 )
    {
      LODWORD(v109) = 0;
      WORD2(v109) = 0;
      v92 = 0;
      v93 = 0;
      v96 = 0;
      v97 = 0;
      if ( v107 || v108 )
        goto LABEL_18;
      if ( a4 )
        goto LABEL_17;
LABEL_36:
      v25 = time(nullptr);
      v26 = *((_QWORD *)a3 + 13);
      goto LABEL_37;
    }
  }
  if ( !a4 )
    goto LABEL_36;
  LODWORD(v109) = 0;
  a2 = nullptr;
  WORD2(v109) = 0;
  v13 = v107;
  v90 = 0;
  v91 = 0;
  v96 = 0;
  v97 = 0;
  if ( !v107 && !v108 )
    goto LABEL_129;
  if ( !v12 || (LODWORD(v109) = 0, a2 = nullptr, WORD2(v109) = 0, v92 = 0, v93 = 0, v96 = 0, v97 = 0, !v107) && !v108 )
  {
LABEL_17:
    LODWORD(v109) = 0;
    WORD2(v109) = 0;
    v96 = 0;
    v97 = 0;
    v94 = 0;
    v95 = 0;
    if ( !v13 && !v108 )
    {
LABEL_129:
      v25 = time(nullptr);
      v26 = *((_QWORD *)a3 + 13);
      goto LABEL_31;
    }
  }
LABEL_18:
  src = nullptr;
  v81 = 0;
  sub_3926B0((char **)&src);
  v18 = (void *)v81;
  if ( (_QWORD)v81 )
  {
    v19 = (char *)src;
    a2 = &v98;
    if ( sub_390D20((__int64)src, (__int64)&v98) )
    {
      v74 = v18;
      if ( !v19 )
        goto LABEL_30;
      goto LABEL_21;
    }
  }
  if ( (debug & 0x200) != 0 )
  {
    v84 = nullptr;
    v85 = 0;
    sub_3573A0((char **)&v84);
    sub_88A970(&v86, &v98);
    sub_383DA0();
  }
  v35 = src;
  v36 = 96LL * (_QWORD)v18;
  v75 = (char *)src + v36;
  if ( src != (char *)src + v36 )
  {
    v37 = (char *)src;
    while ( 1 )
    {
      a2 = v37;
      if ( sub_390D20((__int64)&v98, (__int64)v37) )
        break;
      v37 += 96;
      if ( v75 == v37 )
        goto LABEL_75;
    }
    if ( v75 != v37 )
    {
      v38 = *((void **)v37 + 8);
      if ( v38 )
      {
        *((_QWORD *)v37 + 9) = 0;
        qfree(v38);
      }
      v39 = *((void **)v37 + 5);
      if ( v39 )
      {
        *((_QWORD *)v37 + 6) = 0;
        qfree(v39);
      }
      v40 = *(void **)v37;
      if ( *(_QWORD *)v37 )
      {
        *((_QWORD *)v37 + 1) = 0;
        qfree(v40);
      }
      a2 = v37 + 96;
      memmove(v37, v37 + 96, (_BYTE *)src + 96 * v81 - v37 - 96);
      *(_QWORD *)&v81 = v81 - 1;
      v35 = src;
    }
  }
LABEL_75:
  v41 = v99[0];
  v109 = nullptr;
  v110 = 0;
  if ( v99[0] )
  {
    v64 = (void *)qalloc_or_throw(v99[0], a2, v14, v15, v16, v17);
    a2 = v98;
    v109 = v64;
    v110.m128i_i64[1] = v41;
    memcpy(v64, v98, v41);
    v110.m128i_i64[0] = v41;
  }
  v42 = v104[0];
  *(_QWORD *)&v113[13] = 0;
  v114 = 0;
  v111 = v100;
  v112 = v101;
  v113[5] = v102;
  if ( v104[0] )
  {
    v65 = (void *)qalloc_or_throw(v104[0], a2, v14, v15, v16, v17);
    a2 = dest;
    *(_QWORD *)&v113[13] = v65;
    v114.m128i_i64[1] = v42;
    memcpy(v65, dest, v42);
    v114.m128i_i64[0] = v42;
  }
  v43 = v106[0];
  v115 = nullptr;
  v116 = 0;
  if ( v106[0] )
  {
    v115 = (void *)qalloc_or_throw(v106[0], a2, v14, v15, v16, v17);
    v116.m128i_i64[1] = v43;
    memcpy(v115, ptr, v43);
    v116.m128i_i64[0] = v43;
  }
  LODWORD(v117) = v107;
  v44 = (char *)v35 - (_BYTE *)src;
  WORD2(v117) = v108;
  v45 = v81;
  if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
  {
    src = (void *)qvector_reserve(&src, src, v81 + 1, 96);
    v35 = (char *)src + v44;
    v45 = v81;
  }
  memmove(v35 + 12, v35, 96 * v45 - v44);
  v46 = _mm_loadu_si128(&v110);
  *v35 = v109;
  *(__m128i *)(v35 + 1) = v46;
  v47 = (char *)v81;
  *((_WORD *)v35 + 12) = v111;
  *((_BYTE *)v35 + 26) = v112;
  *((_BYTE *)v35 + 32) = v113[5];
  v48 = _mm_load_si128(&v114);
  v35[5] = *(_QWORD *)&v113[13];
  *((__m128i *)v35 + 3) = v48;
  v49 = _mm_loadu_si128(&v116);
  v35[8] = v115;
  *(__m128i *)(v35 + 9) = v49;
  *((_DWORD *)v35 + 22) = v117;
  *((_WORD *)v35 + 46) = WORD2(v117);
  v50 = v47 + 1;
  *(_QWORD *)&v81 = v47 + 1;
  if ( (unsigned __int64)(v47 + 1) > 0xA )
  {
    v117 = 0;
    v66 = 10;
    memset(v113, 0, sizeof(v113));
    v109 = nullptr;
    v111 = 0;
    v112 = 1;
    v115 = nullptr;
    v110 = 0;
    v114 = 0;
    v116 = 0;
    while ( 1 )
    {
      v67 = (char *)src + 96 * v66;
      v68 = *((void **)v67 + 8);
      if ( v68 )
      {
        *((_QWORD *)v67 + 9) = 0;
        v76 = v47;
        qfree(v68);
        v47 = v76;
      }
      v69 = *((void **)v67 + 5);
      if ( v69 )
      {
        *((_QWORD *)v67 + 6) = 0;
        v77 = v47;
        qfree(v69);
        v47 = v77;
      }
      v70 = *(void **)v67;
      if ( *(_QWORD *)v67 )
      {
        *((_QWORD *)v67 + 1) = 0;
        v78 = v47;
        qfree(v70);
        v47 = v78;
      }
      if ( v47 == (char *)v66 )
        break;
      ++v66;
    }
    *(_QWORD *)&v81 = 10;
    if ( v115 )
    {
      v116.m128i_i64[0] = 0;
      qfree(v115);
    }
    if ( *(_QWORD *)&v113[13] )
    {
      v114.m128i_i64[0] = 0;
      qfree(*(void **)&v113[13]);
    }
    if ( v109 )
    {
      v110.m128i_i64[0] = 0;
      qfree(v109);
    }
    v50 = (char *)v81;
  }
  v51 = (char *)src + 96 * (_QWORD)v50;
  v52 = (char *)src;
  v82 = nullptr;
  v83 = 0;
  if ( src != v51 )
  {
    do
    {
      v86 = nullptr;
      v87 = 0;
      if ( (unsigned __int8)sub_391900((__int64)v52) )
      {
        v54 = v83;
        v55 = (char *)v82;
        if ( *((_QWORD *)&v83 + 1) < (unsigned __int64)(v83 + 1) )
        {
          v82 = (void *)qvector_reserve(&v82, v82, v83 + 1, 24);
          v54 = v83;
          v55 = (char *)v82;
        }
        v56 = &v55[24 * v54];
        *(_QWORD *)v56 = 0;
        *(_OWORD *)(v56 + 8) = 0;
        *(_QWORD *)&v83 = v83 + 1;
        v53 = *(void **)v56;
        *(_QWORD *)v56 = v86;
        *(_OWORD *)(v56 + 8) = v87;
        v86 = v53;
        *((_QWORD *)&v87 + 1) = 0;
      }
      else
      {
        v53 = v86;
      }
      if ( v53 )
      {
        *(_QWORD *)&v87 = 0;
        qfree(v53);
      }
      v52 += 96;
    }
    while ( v51 != v52 );
  }
  v85 = 0;
  v84 = nullptr;
  v86 = nullptr;
  v87 = 0;
  v57 = (_BYTE *)qvector_reserve(&v86, 0, 4, 1);
  v86 = v57;
  *(_QWORD *)&v87 = 4;
  *(_WORD *)v57 = 11833;
  v57[2] = 51;
  *((_BYTE *)v86 + 3) = 0;
  sub_3573A0((char **)&v84);
  if ( v86 )
  {
    *(_QWORD *)&v87 = 0;
    qfree(v86);
  }
  v58 = haystack;
  if ( (_QWORD)v85 )
    v58 = (const char *)v84;
  reg_write_strlist(&v82, v58);
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    qfree(v84);
  }
  v59 = (char *)v82;
  if ( v82 )
  {
    v60 = v83;
    if ( (_QWORD)v83 )
    {
      v61 = 0;
      do
      {
        v62 = &v59[24 * v61];
        v63 = *(void **)v62;
        if ( *(_QWORD *)v62 )
        {
          *((_QWORD *)v62 + 1) = 0;
          qfree(v63);
          v59 = (char *)v82;
        }
        ++v61;
      }
      while ( v60 != v61 );
    }
    *(_QWORD *)&v83 = 0;
    qfree(v59);
  }
  v19 = (char *)src;
  if ( src )
  {
    v74 = (void *)v81;
    if ( !(_QWORD)v81 )
    {
LABEL_29:
      *(_QWORD *)&v81 = 0;
      qfree(v19);
      goto LABEL_30;
    }
LABEL_21:
    v20 = nullptr;
    do
    {
      v21 = &v19[96 * (_QWORD)v20];
      v22 = *((void **)v21 + 8);
      if ( v22 )
      {
        *((_QWORD *)v21 + 9) = 0;
        qfree(v22);
      }
      v23 = *((void **)v21 + 5);
      if ( v23 )
      {
        *((_QWORD *)v21 + 6) = 0;
        qfree(v23);
      }
      v24 = *(void **)v21;
      if ( *(_QWORD *)v21 )
      {
        *((_QWORD *)v21 + 1) = 0;
        qfree(v24);
      }
      v20 = (char *)v20 + 1;
      v19 = (char *)src;
    }
    while ( v20 != v74 );
    goto LABEL_29;
  }
LABEL_30:
  v25 = time(nullptr);
  v26 = *((_QWORD *)a3 + 13);
  if ( !a4 )
  {
LABEL_37:
    v27 = *((_QWORD *)a3 + 14);
    goto LABEL_38;
  }
LABEL_31:
  v27 = *a4;
LABEL_38:
  if ( v26 <= v25 || (v28 = 0, v26 == -1) )
  {
    v28 = 1;
    if ( v27 )
    {
      if ( v27 - 2592000 <= v25 )
      {
        v28 = 2;
        if ( v27 - 1296000 <= v25 )
        {
          v28 = 3;
          if ( v27 <= v25 )
          {
            v28 = 4;
            if ( v27 + 1296000 <= v25 )
              v28 = (v27 + 2592000 <= v25) + 5;
          }
        }
      }
    }
  }
  v29 = a1;
  if ( *(_BYTE *)(a1 + 36) || (v29 = a1, *(_DWORD *)(a1 + 32) == 6) )
  {
    *(_DWORD *)(v29 + 32) = v28;
    *(_WORD *)(v29 + 36) = 0;
  }
  else
  {
    v30 = *(_BYTE *)(a1 + 37);
    *(_DWORD *)(a1 + 32) = v28;
    *(_WORD *)(a1 + 36) = 0;
    if ( ((v28 == 6) & (v30 ^ 1)) != 0 )
    {
      byte_2CA1690 = 1;
      hook_event_listener(3, a1 + 8, 0, 0);
    }
  }
  if ( ptr )
  {
    v106[0] = 0;
    qfree(ptr);
  }
  if ( dest )
  {
    v104[0] = 0;
    qfree(dest);
  }
  if ( v98 )
  {
    v99[0] = 0;
    qfree(v98);
  }
  return v118 - __readfsqword(0x28u);
}

