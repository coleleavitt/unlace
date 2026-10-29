void __fastcall sub_6E0F80(_QWORD *a1, __int64 a2, __m128 a3, double a4, __m128 a5)
{
  _QWORD *v5; // r8
  bool v6; // zf
  __int64 v7; // rbx
  const char *v8; // r14
  char *v9; // rax
  char *v10; // r12
  const char *v11; // rbp
  _BYTE *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rbp
  char *v16; // rax
  char *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rsi
  _QWORD **v21; // r8
  _QWORD *v22; // rdi
  _QWORD *v23; // r12
  _QWORD *v24; // rsi
  _QWORD *v25; // rbp
  _QWORD *v26; // rax
  int v27; // ecx
  unsigned int v28; // ebp
  char *v29; // r13
  void *v30; // rax
  __m128i v31; // xmm2
  void *v32; // rax
  __m128i v33; // xmm3
  _QWORD *v34; // rax
  void *v35; // rax
  _QWORD **v36; // r8
  _BYTE *v37; // rsi
  const char *v38; // r14
  char *v39; // rbx
  __int64 v40; // r13
  size_t v41; // rbx
  size_t v42; // r15
  size_t v43; // rdx
  __int64 v44; // rbx
  _DWORD *v45; // r8
  __int64 v46; // r13
  unsigned __int64 v47; // r14
  _BYTE *v48; // rsi
  char *v49; // rsi
  _QWORD *v50; // r8
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 i; // rbx
  int v54; // edx
  void *v55; // r12
  void *v56; // rbx
  _QWORD *v57; // rdx
  int v58; // eax
  void *v59; // rdi
  void *v60; // rdi
  _QWORD *v61; // rcx
  __int64 *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __m128i v65; // xmm0
  __int64 v66; // rcx
  __m128i v67; // xmm0
  __int64 v68; // rcx
  __int64 v69; // rcx
  bool v70; // cf
  char *v71; // rax
  char v72; // al
  const char *v73; // r13
  size_t v74; // rax
  size_t v75; // r15
  const char *v76; // rsi
  size_t v77; // r14
  _QWORD *v78; // r8
  unsigned __int64 v79; // rax
  size_t v80; // r12
  unsigned __int64 v81; // rbp
  __int64 v82; // r14
  __int64 v83; // r15
  __int64 v84; // rdx
  void *v85; // rax
  __int64 v86; // r14
  size_t v87; // rax
  _BYTE *v88; // rsi
  _QWORD *v89; // r8
  size_t v90; // r15
  size_t v91; // r12
  __int64 v92; // rax
  void *v93; // rax
  void *v94; // rax
  __int64 v95; // rax
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 v98; // r12
  __int64 v99; // rbx
  const char *v100; // r13
  __int64 v101; // r12
  __int64 v102; // r14
  _BYTE *v103; // r10
  size_t v104; // r15
  unsigned __int64 v105; // r13
  __int64 v106; // rdx
  _QWORD *v107; // r8
  char *v108; // rdi
  _QWORD *v109; // r13
  _QWORD *v110; // r14
  char *v111; // r12
  void *v112; // rdi
  void *v113; // rdi
  __int64 v114; // rax
  unsigned __int64 v115; // r12
  __int64 v116; // r15
  __int64 v117; // rax
  __m128i v118; // xmm5
  __m128i v119; // xmm6
  __m128i v120; // xmm0
  void *v121; // rcx
  _QWORD *v122; // rcx
  void *v123; // rax
  __int64 tinfo_property; // rax
  _QWORD *v125; // r8
  __int64 v126; // r14
  __int64 v127; // r12
  __int64 v128; // r15
  __int64 v129; // r13
  void *v130; // rdi
  void *v131; // rdi
  void *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rdx
  const char *v137; // r12
  _QWORD *v138; // r14
  _QWORD *v139; // r15
  const char *v140; // rdi
  size_t v141; // rax
  size_t v142; // r13
  __int64 v143; // rax
  _QWORD *v144; // r8
  __int64 v145; // rbx
  __int64 v146; // r14
  char *v147; // r12
  __int64 v148; // rbx
  __int64 v149; // r13
  __int64 v150; // rdx
  __m128i v151; // xmm0
  __int64 v152; // rdx
  __m128i v153; // xmm0
  __int64 v154; // rdx
  void *v155; // rdi
  void *v156; // rdi
  _QWORD *v157; // r8
  size_t v158; // rax
  size_t v159; // rbx
  unsigned __int64 v160; // rbx
  __int64 v161; // rax
  __int64 v162; // rax
  void *v163; // rcx
  void *v164; // rdx
  __m128i v165; // xmm0
  void *v166; // rdx
  __m128i v167; // xmm0
  __int64 v168; // rdx
  __int64 v169; // rdx
  size_t v170; // r14
  void *v171; // rax
  __int64 v172; // rax
  __int64 v173; // r8
  __int64 v174; // r12
  __int64 v175; // r15
  void **v176; // r14
  void **v177; // rdi
  __int64 v178; // rbx
  __int64 v179; // rbp
  void *v180; // rdx
  __m128i v181; // xmm0
  void *v182; // rdx
  __m128i v183; // xmm0
  void *v184; // rdi
  void *v185; // rdi
  __int64 v186; // r13
  void *v187; // rax
  _QWORD *srch; // [rsp+0h] [rbp-108h]
  _QWORD **src; // [rsp+0h] [rbp-108h]
  _DWORD *srca; // [rsp+0h] [rbp-108h]
  _QWORD *srcb; // [rsp+0h] [rbp-108h]
  _QWORD **srcj; // [rsp+0h] [rbp-108h]
  _QWORD *srcc; // [rsp+0h] [rbp-108h]
  _QWORD *srck; // [rsp+0h] [rbp-108h]
  _QWORD *srcd; // [rsp+0h] [rbp-108h]
  _QWORD *srcl; // [rsp+0h] [rbp-108h]
  _QWORD *srcm; // [rsp+0h] [rbp-108h]
  _QWORD *srcn; // [rsp+0h] [rbp-108h]
  _QWORD *srci; // [rsp+0h] [rbp-108h]
  _BYTE *srce; // [rsp+0h] [rbp-108h]
  _QWORD *srco; // [rsp+0h] [rbp-108h]
  _QWORD *srcq; // [rsp+0h] [rbp-108h]
  _QWORD *srcf; // [rsp+0h] [rbp-108h]
  _QWORD *srcr; // [rsp+0h] [rbp-108h]
  void *srcg; // [rsp+0h] [rbp-108h]
  _BYTE *srcp; // [rsp+0h] [rbp-108h]
  const char *v207; // [rsp+8h] [rbp-100h]
  void *v208; // [rsp+8h] [rbp-100h]
  __m128i v209; // [rsp+10h] [rbp-F8h] BYREF
  void *v210; // [rsp+20h] [rbp-E8h]
  _QWORD *v211; // [rsp+28h] [rbp-E0h]
  __m128i v212; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v213; // [rsp+44h] [rbp-C4h]
  __int64 v214; // [rsp+48h] [rbp-C0h]
  __int64 v215; // [rsp+58h] [rbp-B0h] BYREF
  void *ptr; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v217; // [rsp+68h] [rbp-A0h]
  void *v218; // [rsp+80h] [rbp-88h] BYREF
  __m128i v219; // [rsp+88h] [rbp-80h] BYREF
  void *dest; // [rsp+98h] [rbp-70h] BYREF
  __m128i v221; // [rsp+A0h] [rbp-68h]
  __int64 v222; // [rsp+B0h] [rbp-58h] BYREF
  int v223; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v224; // [rsp+C8h] [rbp-40h]

  v5 = a1;
  v6 = a1[68] == 0;
  v224 = __readfsqword(0x28u);
  v7 = a2;
  if ( v6 )
    goto LABEL_17;
  a3.m128_u64[0] = 0;
  v6 = *(_QWORD *)(a2 + 8) == 0;
  v218 = nullptr;
  v219 = 0;
  if ( v6 )
    goto LABEL_17;
  v8 = *(const char **)a2;
  v9 = strstr(*(const char **)a2, "tilib-group");
  v5 = a1;
  v10 = v9;
  if ( !v9 )
    goto LABEL_17;
  v207 = v8;
  v11 = v8;
  v12 = nullptr;
  v210 = a1;
  v209.m128i_i64[0] = v7;
  while ( 1 )
  {
    if ( v10 != v11 )
    {
      v82 = v219.m128i_i64[0];
      v83 = v10 - v11;
      if ( v219.m128i_i64[0] )
      {
        v82 = v219.m128i_i64[0] - 1;
        v83 = v10 - v11 + v219.m128i_i64[0] - 1;
      }
      v84 = v83 + 1;
      if ( v219.m128i_i64[1] < (unsigned __int64)(v83 + 1) )
      {
        v85 = (void *)qvector_reserve(&v218, v12, v84, 1);
        v84 = v83 + 1;
        v218 = v85;
        v12 = v85;
      }
      v219.m128i_i64[0] = v84;
      v12[v83] = 0;
      memmove((char *)v218 + v82, v11, v10 - v11);
      v12 = v218;
    }
    v15 = v219.m128i_i64[0];
    if ( v219.m128i_i64[0] )
    {
      v13 = v219.m128i_i64[0] + 10;
      v14 = v219.m128i_i64[0] + 11;
      v15 = v219.m128i_i64[0] - 1;
      if ( v219.m128i_i64[1] >= (unsigned __int64)(v219.m128i_i64[0] + 11) )
        goto LABEL_6;
    }
    else
    {
      v14 = 12;
      v13 = 11;
      if ( v219.m128i_i64[1] >= 0xCuLL )
        goto LABEL_6;
    }
    v218 = (void *)qvector_reserve(&v218, v12, v14, 1);
    v12 = v218;
LABEL_6:
    v219.m128i_i64[0] = v14;
    v12[v13] = 0;
    qmemcpy((char *)v218 + v15, "tilib_group", 11);
    v11 = v10 + 11;
    v16 = strstr(v10 + 11, "tilib-group");
    v12 = v218;
    if ( !v16 )
      break;
    v10 = v16;
  }
  v5 = v210;
  v7 = v209.m128i_i64[0];
  if ( v207 == v11 )
  {
    v17 = (char *)v218;
  }
  else
  {
    if ( v10[11] )
    {
      v86 = v219.m128i_i64[0];
      srce = v218;
      v87 = strlen(v10 + 11);
      v88 = srce;
      v89 = v210;
      v90 = v87;
      v91 = v87;
      if ( v86 )
      {
        --v86;
        v91 = v87 + v86;
      }
      if ( v219.m128i_i64[1] < v91 + 1 )
      {
        v123 = (void *)qvector_reserve(&v218, srce, v91 + 1, 1);
        v89 = v210;
        v218 = v123;
        v88 = v123;
      }
      v219.m128i_i64[0] = v91 + 1;
      v88[v91] = 0;
      srco = v89;
      memmove((char *)v218 + v86, v11, v90);
      v12 = v218;
      v5 = srco;
    }
    v17 = *(char **)v7;
    v18 = *(_QWORD *)(v7 + 16);
    *(_QWORD *)v7 = v12;
    a3 = (__m128)_mm_loadu_si128(&v219);
    v218 = v17;
    v219.m128i_i64[1] = v18;
    *(__m128 *)(v7 + 8) = a3;
  }
  if ( v17 )
  {
    srch = v5;
    v219.m128i_i64[0] = 0;
    qfree(v17);
    v5 = srch;
  }
LABEL_17:
  v19 = *(_QWORD *)v5[1];
  if ( (v19 & 0x800) == 0 )
  {
    srci = v5;
    sub_6D5E90(*(_QWORD *)(*v5 + 1704LL), v7);
    v5 = srci;
    v19 = *(_QWORD *)srci[1];
  }
  if ( (v19 & 0x1000) != 0 && (unsigned __int64)(v19 & 0xF) - 3 > 1 )
  {
    if ( *(_QWORD *)(v7 + 8) > 1u )
    {
      srcc = v5;
      v71 = strpbrk(*(const char **)v7, ":<$");
      v5 = srcc;
      if ( v71 )
      {
        sub_6D7240((__int64)srcc, v7, *(double *)a3.m128_u64, a4, a5);
        v5 = srcc;
      }
    }
    srck = v5;
    v72 = sub_6D7AC0((__int64)v5, v7);
    v5 = srck;
    *((_BYTE *)srck + 584) = v72;
    if ( (*(_QWORD *)srck[1] & 0x4000000000000000LL) != 0 )
      goto LABEL_73;
    goto LABEL_22;
  }
  if ( (v19 & 0x4000000000000000LL) == 0 )
    goto LABEL_22;
LABEL_73:
  srcd = v5;
  v218 = nullptr;
  v219 = 0;
  v73 = haystack;
  sub_3573A0((char **)&v218);
  v5 = srcd;
  if ( v219.m128i_i64[0] )
  {
    v73 = (const char *)v218;
    if ( !v218 )
      goto LABEL_80;
LABEL_75:
    v74 = strlen(v73);
    v75 = *(_QWORD *)(v7 + 8);
    v76 = *(const char **)v7;
    v77 = v74;
    v78 = srcd;
    v79 = *(_QWORD *)(v7 + 16);
    if ( v75 )
    {
      --v75;
      v80 = v77 + v75;
      v81 = v77 + v75 + 1;
      if ( v79 >= v81 )
        goto LABEL_77;
    }
    else
    {
      v81 = v77 + 1;
      v80 = v77;
      if ( v79 >= v77 + 1 )
      {
        *(_QWORD *)(v7 + 8) = v81;
        v76[v77] = 0;
LABEL_79:
        srcm = v78;
        memmove(*(void **)v7, v73, v77);
        v5 = srcm;
        goto LABEL_80;
      }
    }
    v92 = qvector_reserve(v7, v76, v81, 1);
    v78 = srcd;
    *(_QWORD *)v7 = v92;
    v76 = (const char *)v92;
LABEL_77:
    *(_QWORD *)(v7 + 8) = v81;
    v76[v80] = 0;
    if ( v75 )
    {
      srcl = v78;
      memmove((void *)(*(_QWORD *)v7 + v77), *(const void **)v7, v75);
      v78 = srcl;
    }
    goto LABEL_79;
  }
  if ( haystack )
    goto LABEL_75;
LABEL_80:
  if ( v218 )
  {
    srcn = v5;
    v219.m128i_i64[0] = 0;
    qfree(v218);
    v5 = srcn;
  }
LABEL_22:
  v20 = (char *)haystack;
  if ( *(_QWORD *)(v7 + 8) )
    v20 = *(char **)v7;
  src = (_QWORD **)v5;
  sub_6DEB80(v5, v20);
  v21 = src;
  if ( (*src[1] & 0x1000LL) == 0 )
    return;
  v22 = src[75];
  if ( !v22 )
    return;
  v23 = src[74];
  v24 = &v23[8 * (_QWORD)v22];
  if ( v23 != v24 )
  {
    v25 = src[74];
    v26 = v25;
    v27 = 0;
    do
    {
      v27 += (unsigned int)(*((_DWORD *)v26 + 14) - 4) < 2;
      v26 += 8;
    }
    while ( v26 != v24 );
    if ( v27 == 1 )
    {
      v57 = nullptr;
      while ( 1 )
      {
        if ( (unsigned int)(*((_DWORD *)v25 + 14) - 4) <= 1 )
        {
          v58 = *((_DWORD *)v25 + 15);
          if ( v58 == 3007 || v58 == 3845 )
            break;
        }
        v57 = (_QWORD *)((char *)v57 + 1);
        v25 += 8;
        if ( v57 == v22 )
          goto LABEL_30;
      }
      v59 = (void *)v25[3];
      if ( v59 )
      {
        v25[4] = 0;
        qfree(v59);
        v21 = src;
      }
      v60 = (void *)*v25;
      if ( *v25 )
      {
        v25[1] = 0;
        srcj = v21;
        qfree(v60);
        v21 = srcj;
      }
      v61 = v21[75];
      v62 = v25 + 8;
      v63 = (((char *)&v21[74][8 * (_QWORD)v61] - (char *)v25) >> 6) - 2;
      if ( v63 >= 0 )
      {
        do
        {
          v64 = *v62;
          v65 = _mm_loadu_si128((const __m128i *)(v62 + 1));
          *(_OWORD *)(v62 + 1) = 0;
          v62 += 8;
          *(v62 - 8) = 0;
          *(v62 - 16) = v64;
          v66 = *(v62 - 5);
          *(__m128i *)(v62 - 15) = v65;
          v67 = _mm_loadu_si128((const __m128i *)v62 - 2);
          *(v62 - 13) = v66;
          v68 = *(v62 - 2);
          *(v62 - 5) = 0;
          *(v62 - 10) = v68;
          v69 = *(v62 - 1);
          *((__m128i *)v62 - 6) = v67;
          *(v62 - 3) = 0;
          *(v62 - 9) = v69;
          v70 = v63-- == 0;
        }
        while ( !v70 );
        v61 = v21[75];
      }
      v21[75] = (_QWORD *)((char *)v61 - 1);
      return;
    }
  }
LABEL_30:
  v28 = *((_DWORD *)v23 + 15);
  if ( v28 != 1659 && v28 != 5629 && v28 != 4269 && v28 != 4194 )
    return;
  v29 = strchr(*(const char **)v7, 59);
  if ( !v29 )
    return;
  v30 = (void *)*v23;
  *v23 = 0;
  v31 = _mm_loadu_si128((const __m128i *)(v23 + 1));
  *(_OWORD *)(v23 + 1) = 0;
  v208 = v30;
  v32 = (void *)v23[3];
  v23[3] = 0;
  v33 = _mm_loadu_si128((const __m128i *)v23 + 2);
  v210 = v32;
  v34 = (_QWORD *)v23[6];
  *((_OWORD *)v23 + 2) = 0;
  v211 = v34;
  v209 = v31;
  v23[6] = -1;
  LODWORD(v34) = *((_DWORD *)v23 + 14);
  v212 = v33;
  v213 = (unsigned int)v34;
  v23[7] = 4;
  sub_6D5310((__int64)src);
  v217 = 0;
  ptr = nullptr;
  v35 = (void *)qvector_reserve(&ptr, 0, 16, 1);
  v36 = src;
  *(_QWORD *)&v217 = 16;
  ptr = v35;
  qmemcpy(v35, "void ___IDA___(", 15);
  v37 = ptr;
  *((_BYTE *)ptr + 15) = 0;
  v38 = *(const char **)v7;
  v39 = v29;
  v40 = v217;
  v41 = v39 - v38;
  v42 = v41;
  if ( (_QWORD)v217 )
  {
    v40 = v217 - 1;
    v42 = v41 + v217 - 1;
  }
  v43 = v42 + 1;
  if ( *((_QWORD *)&v217 + 1) < v42 + 1 )
  {
    v214 = (__int64)src;
    v94 = (void *)qvector_reserve(&ptr, v37, v43, 1);
    v36 = src;
    v43 = v42 + 1;
    ptr = v94;
    v37 = v94;
  }
  *(_QWORD *)&v217 = v43;
  v37[v42] = 0;
  srca = v36;
  memmove((char *)ptr + v40, v38, v41);
  v44 = v217;
  v45 = srca;
  if ( (_QWORD)v217 )
  {
    v46 = v217 + 1;
    v47 = v217 + 2;
    v44 = v217 - 1;
  }
  else
  {
    v47 = 3;
    v46 = 2;
  }
  v48 = ptr;
  if ( *((_QWORD *)&v217 + 1) < v47 )
  {
    v93 = (void *)qvector_reserve(&ptr, ptr, v47, 1);
    v45 = srca;
    ptr = v93;
    v48 = v93;
  }
  *(_QWORD *)&v217 = v47;
  v48[v46] = 0;
  v49 = (char *)haystack;
  *(_WORD *)((char *)ptr + v44) = 15145;
  v45[30] |= 0x1000800u;
  if ( (_QWORD)v217 )
    v49 = (char *)ptr;
  srcb = v45;
  sub_6DEB80(v45, v49);
  v50 = srcb;
  v51 = srcb[75];
  if ( !v51 )
  {
    v95 = srcb[50];
    v96 = srcb[49];
    v215 = 0;
    v218 = nullptr;
    v97 = v95 << 6;
    v219 = 0;
    v221 = 0;
    dest = nullptr;
    v222 = 0;
    if ( v96 == v96 + v97 )
    {
      v101 = 0;
    }
    else
    {
      v98 = v96 + v97;
      v214 = 0;
      v99 = v96;
      while ( 1 )
      {
        if ( *(_QWORD *)(v99 + 8) )
        {
          v100 = *(const char **)v99;
          if ( !strcmp(*(const char **)v99, "___IDA___") )
            break;
        }
        v99 += 64;
        if ( v98 == v99 )
        {
          v51 = v214;
          v50 = srcb;
          v101 = 0;
          goto LABEL_112;
        }
      }
      v101 = v99;
      v50 = srcb;
      v102 = v99;
      v51 = v214;
      if ( v101 )
      {
        if ( (void **)v101 != &v218 )
        {
          v103 = *(_BYTE **)(v101 + 8);
          if ( v103 )
          {
            v104 = (size_t)(v103 - 1);
            if ( v103 != (_BYTE *)&dword_0 + 1 )
            {
              v169 = *(_QWORD *)(v101 + 8);
              v214 = (__int64)srcb;
              srcp = v103;
              v218 = (void *)qvector_reserve(&v218, 0, v169, 1);
              v219.m128i_i64[0] = (__int64)srcp;
              memmove(v218, v100, v104);
              v50 = (_QWORD *)v214;
              srcp[(_QWORD)v218 - 1] = 0;
            }
          }
        }
        if ( &dest != (void **)(v102 + 24) )
        {
          v105 = *(_QWORD *)(v102 + 32);
          if ( v105 > 1 )
          {
            srcg = *(void **)(v102 + 24);
            if ( v221.m128i_i64[1] < v105 )
            {
              v214 = (__int64)v50;
              v171 = (void *)qvector_reserve(&dest, dest, v105, 1);
              v50 = (_QWORD *)v214;
              dest = v171;
            }
            v214 = (__int64)v50;
            v221.m128i_i64[0] = v105;
            memmove(dest, srcg, v105 - 1);
            v50 = (_QWORD *)v214;
            *((char *)dest + v105 - 1) = 0;
          }
          else
          {
            v221.m128i_i64[0] = 0;
          }
        }
        v214 = (__int64)v50;
        copy_tinfo_t(&v222);
        v50 = (_QWORD *)v214;
        v106 = v222;
        v222 = v215;
        v215 = v106;
      }
    }
LABEL_112:
    v214 = (__int64)v50;
    clear_tinfo_t(&v222);
    v107 = (_QWORD *)v214;
    if ( dest )
    {
      v221.m128i_i64[0] = 0;
      qfree(dest);
      v107 = (_QWORD *)v214;
    }
    if ( v218 )
    {
      v214 = (__int64)v107;
      v219.m128i_i64[0] = 0;
      qfree(v218);
      v107 = (_QWORD *)v214;
    }
    if ( !v101
      || (v214 = (__int64)v107, tinfo_property = get_tinfo_property(v215, 311), v107 = (_QWORD *)v214, !tinfo_property)
      || *(_QWORD *)(tinfo_property + 8) != 1 )
    {
      v108 = (char *)v107[49];
      if ( v108 )
      {
        v109 = (_QWORD *)v107[50];
        if ( v109 )
        {
          v110 = v107;
          do
          {
            v111 = &v108[64 * v51];
            clear_tinfo_t(v111 + 48);
            v112 = *((void **)v111 + 3);
            if ( v112 )
            {
              *((_QWORD *)v111 + 4) = 0;
              qfree(v112);
            }
            v113 = *(void **)v111;
            if ( *(_QWORD *)v111 )
            {
              *((_QWORD *)v111 + 1) = 0;
              qfree(v113);
            }
            ++v51;
            v108 = (char *)v110[49];
          }
          while ( v109 != (_QWORD *)v51 );
          v107 = v110;
        }
        v107[50] = 0;
        srcq = v107;
        qfree(v108);
        v107 = srcq;
        srcq[49] = 0;
        srcq[51] = 0;
      }
      v114 = v107[75];
      v115 = v107[76];
      if ( v115 < v114 + 1 )
      {
        srcf = v107;
        v143 = qvector_reserve(v107 + 74, 0, v114 + 1, 64);
        v144 = srcf;
        v116 = v143;
        v145 = srcf[75];
        v146 = srcf[76];
        srcf[76] = v115;
        v147 = (char *)srcf[74];
        v148 = v145 - 1;
        if ( v148 >= 0 )
        {
          v149 = v143;
          do
          {
            v150 = *(_QWORD *)v147;
            v151 = _mm_loadu_si128((const __m128i *)(v147 + 8));
            *(_QWORD *)v147 = 0;
            *(_OWORD *)(v147 + 8) = 0;
            *(_QWORD *)v149 = v150;
            *(__m128i *)(v149 + 8) = v151;
            v152 = *((_QWORD *)v147 + 3);
            v153 = _mm_loadu_si128((const __m128i *)v147 + 2);
            *((_QWORD *)v147 + 3) = 0;
            *(_QWORD *)(v149 + 24) = v152;
            *(__m128i *)(v149 + 32) = v153;
            v154 = *((_QWORD *)v147 + 6);
            *((_QWORD *)v147 + 5) = 0;
            *(_QWORD *)(v149 + 48) = v154;
            *(_QWORD *)(v149 + 56) = *((_QWORD *)v147 + 7);
            v155 = *((void **)v147 + 3);
            if ( v155 )
            {
              *((_QWORD *)v147 + 4) = 0;
              qfree(v155);
            }
            v156 = *(void **)v147;
            if ( *(_QWORD *)v147 )
            {
              *((_QWORD *)v147 + 1) = 0;
              qfree(v156);
            }
            v147 += 64;
            v149 += 64;
            v70 = v148-- == 0;
          }
          while ( !v70 );
          v144 = srcf;
          v147 = (char *)srcf[74];
        }
        srcr = v144;
        qfree(v147);
        v107 = srcr;
        srcr[74] = v116;
        v114 = srcr[75];
        srcr[76] = v146;
      }
      else
      {
        v116 = v107[74];
      }
      v117 = v116 + (v114 << 6);
      v118 = _mm_load_si128(&v209);
      v119 = _mm_load_si128(&v212);
      *(_QWORD *)(v117 + 48) = -1;
      *(_QWORD *)v117 = 0;
      *(_QWORD *)(v117 + 56) = 4;
      *(_QWORD *)(v117 + 24) = 0;
      *(_OWORD *)(v117 + 8) = 0;
      *(_OWORD *)(v117 + 32) = 0;
      v120 = _mm_cvtsi32_si128(v213);
      ++v107[75];
      v56 = *(void **)v117;
      *(_QWORD *)v117 = v208;
      v121 = v210;
      v55 = *(void **)(v117 + 24);
      *(__m128i *)(v117 + 8) = v118;
      *(_QWORD *)(v117 + 24) = v121;
      v122 = v211;
      *(__m128i *)(v117 + 32) = v119;
      *(_QWORD *)(v117 + 48) = v122;
      *(_QWORD *)(v117 + 56) = _mm_unpacklo_epi32(v120, _mm_cvtsi32_si128(v28)).m128i_u64[0];
      goto LABEL_130;
    }
    v209.m128i_i64[0] = v214;
    copy_tinfo_t(&v215);
    v125 = (_QWORD *)v214;
    if ( *(_QWORD *)(v214 + 392) )
    {
      v126 = *(_QWORD *)(v209.m128i_i64[0] + 400);
      v127 = 0;
      v128 = v209.m128i_i64[0];
      if ( v126 )
      {
        do
        {
          v129 = *(_QWORD *)(v128 + 392) + (v127 << 6);
          clear_tinfo_t(v129 + 48);
          v130 = *(void **)(v129 + 24);
          if ( v130 )
          {
            *(_QWORD *)(v129 + 32) = 0;
            qfree(v130);
          }
          v131 = *(void **)v129;
          if ( *(_QWORD *)v129 )
          {
            *(_QWORD *)(v129 + 8) = 0;
            qfree(v131);
          }
          ++v127;
        }
        while ( v127 != v126 );
        v125 = (_QWORD *)v128;
      }
      v132 = (void *)v125[49];
      v209.m128i_i64[0] = (__int64)v125;
      v125[50] = 0;
      qfree(v132);
      v125 = (_QWORD *)v209.m128i_i64[0];
      *(_QWORD *)(v209.m128i_i64[0] + 392) = 0;
      v125[51] = 0;
    }
    v133 = v125[48];
    v134 = *(_QWORD *)(v133 + 568);
    if ( v134 )
    {
      v135 = *(_QWORD *)(v133 + 560);
      v136 = 0;
      while ( *(_QWORD *)(v135 + 32) && **(_BYTE **)(v135 + 24) )
      {
        ++v136;
        v135 += 56;
        if ( v136 == v134 )
          goto LABEL_169;
      }
      v137 = *(const char **)v135;
      v138 = (_QWORD *)(v125[50] << 6);
      if ( v138 )
        goto LABEL_147;
LABEL_183:
      v222 = 0;
      v209.m128i_i64[0] = (__int64)v125;
      v218 = nullptr;
      dest = nullptr;
      v219 = 0;
      v221 = 0;
      copy_tinfo_t(&v222);
      v157 = (_QWORD *)v209.m128i_i64[0];
      if ( !v137 )
        goto LABEL_172;
    }
    else
    {
LABEL_169:
      v137 = &byte_22CD811;
      v138 = (_QWORD *)(v125[50] << 6);
      if ( v138 )
      {
LABEL_147:
        v139 = v125;
        while ( 1 )
        {
          v140 = haystack;
          if ( *(_QWORD *)(v51 + 8) )
            v140 = *(const char **)v51;
          if ( !strcmp(v140, v137) )
            break;
          v51 += 64;
          if ( v138 == (_QWORD *)v51 )
          {
            v125 = v139;
            goto LABEL_183;
          }
        }
        v125 = v139;
        if ( !v51 )
          goto LABEL_183;
        copy_tinfo_t(v51 + 48);
        if ( v137 && (v141 = strlen(v137), (v142 = v141) != 0) )
        {
          v170 = v141 + 1;
          if ( *(_QWORD *)(v51 + 16) < v141 + 1 )
            *(_QWORD *)v51 = qvector_reserve(v51, *(_QWORD *)v51, v141 + 1, 1);
          *(_QWORD *)(v51 + 8) = v170;
          memmove(*(void **)v51, v137, v142);
          *(_BYTE *)(*(_QWORD *)v51 + v142) = 0;
        }
        else
        {
          *(_QWORD *)(v51 + 8) = 0;
        }
        *(_QWORD *)(v51 + 32) = 0;
        *(_DWORD *)(v51 + 56) = 0;
        goto LABEL_157;
      }
      v209.m128i_i64[0] = (__int64)v125;
      v218 = nullptr;
      dest = nullptr;
      v222 = 0;
      v219 = 0;
      v221 = 0;
      copy_tinfo_t(&v222);
      v157 = (_QWORD *)v209.m128i_i64[0];
    }
    v209.m128i_i64[0] = (__int64)v157;
    v158 = strlen(v137);
    v157 = (_QWORD *)v209.m128i_i64[0];
    v159 = v158;
    if ( v158 )
    {
      v186 = v158 + 1;
      if ( v219.m128i_i64[1] < v158 + 1 )
      {
        v187 = (void *)qvector_reserve(&v218, v218, v158 + 1, 1);
        v157 = (_QWORD *)v209.m128i_i64[0];
        v218 = v187;
      }
      v209.m128i_i64[0] = (__int64)v157;
      v219.m128i_i64[0] = v186;
      memmove(v218, v137, v159);
      v157 = (_QWORD *)v209.m128i_i64[0];
      *((_BYTE *)v218 + v159) = 0;
      goto LABEL_173;
    }
LABEL_172:
    v219.m128i_i64[0] = 0;
LABEL_173:
    v160 = v157[51];
    v221.m128i_i64[0] = 0;
    v223 = 0;
    v161 = v157[50];
    if ( v160 < v161 + 1 )
    {
      v209.m128i_i64[0] = (__int64)v157;
      v172 = qvector_reserve(v157 + 49, 0, v161 + 1, 64);
      v173 = v209.m128i_i64[0];
      v174 = v172;
      v175 = *(_QWORD *)(v209.m128i_i64[0] + 408);
      v176 = *(void ***)(v209.m128i_i64[0] + 392);
      *(_QWORD *)(v209.m128i_i64[0] + 408) = v160;
      v177 = v176;
      v178 = *(_QWORD *)(v173 + 400) - 1LL;
      if ( v178 >= 0 )
      {
        v209.m128i_i64[0] = v173;
        v179 = v172;
        do
        {
          v180 = *v176;
          v181 = _mm_loadu_si128((const __m128i *)(v176 + 1));
          *(_OWORD *)(v176 + 1) = 0;
          *(_QWORD *)v179 = v180;
          *(__m128i *)(v179 + 8) = v181;
          v182 = v176[3];
          v183 = _mm_loadu_si128((const __m128i *)v176 + 2);
          *v176 = nullptr;
          *((_OWORD *)v176 + 2) = 0;
          *(_QWORD *)(v179 + 24) = v182;
          v176[3] = nullptr;
          *(_QWORD *)(v179 + 48) = 0;
          *(__m128i *)(v179 + 32) = v183;
          v211 = v176 + 6;
          copy_tinfo_t(v179 + 48);
          *(_DWORD *)(v179 + 56) = *((_DWORD *)v176 + 14);
          clear_tinfo_t(v176 + 6);
          v184 = v176[3];
          if ( v184 )
          {
            v176[4] = nullptr;
            qfree(v184);
          }
          v185 = *v176;
          if ( *v176 )
          {
            v176[1] = nullptr;
            qfree(v185);
          }
          v176 += 8;
          v179 += 64;
          v70 = v178-- == 0;
        }
        while ( !v70 );
        v173 = v209.m128i_i64[0];
        v177 = *(void ***)(v209.m128i_i64[0] + 392);
      }
      v209.m128i_i64[0] = v173;
      qfree(v177);
      v157 = (_QWORD *)v209.m128i_i64[0];
      *(_QWORD *)(v209.m128i_i64[0] + 392) = v174;
      v161 = v157[50];
      v157[51] = v175;
    }
    v162 = v157[49] + (v161 << 6);
    *(_OWORD *)(v162 + 32) = 0;
    *(_OWORD *)(v162 + 8) = 0;
    *(_QWORD *)v162 = 0;
    *(_QWORD *)(v162 + 24) = 0;
    *(_QWORD *)(v162 + 48) = 0;
    v163 = v218;
    ++v157[50];
    v164 = *(void **)v162;
    *(_QWORD *)v162 = v163;
    v165 = _mm_loadu_si128((const __m128i *)(v162 + 8));
    *(__m128i *)(v162 + 8) = v219;
    v218 = v164;
    v219 = v165;
    v166 = *(void **)(v162 + 24);
    v167 = _mm_loadu_si128((const __m128i *)(v162 + 32));
    *(_QWORD *)(v162 + 24) = dest;
    *(__m128i *)(v162 + 32) = v221;
    v221 = v167;
    dest = v166;
    v168 = *(_QWORD *)(v162 + 48);
    *(_QWORD *)(v162 + 48) = v222;
    v222 = v168;
    LODWORD(v168) = *(_DWORD *)(v162 + 56);
    *(_DWORD *)(v162 + 56) = v223;
    v223 = v168;
    clear_tinfo_t(&v222);
    if ( dest )
    {
      v221.m128i_i64[0] = 0;
      qfree(dest);
    }
    if ( v218 )
    {
      v219.m128i_i64[0] = 0;
      qfree(v218);
    }
LABEL_157:
    v55 = v210;
    v56 = v208;
LABEL_130:
    clear_tinfo_t(&v215);
    goto LABEL_49;
  }
  v52 = srcb[74];
  for ( i = v52 + (v51 << 6); v52 != i; v52 += 64 )
  {
    v54 = *(_DWORD *)(v52 + 52);
    if ( v54 > 14 )
      *(_DWORD *)(v52 + 52) = v54 - 15;
  }
  v55 = v210;
  v56 = v208;
LABEL_49:
  if ( ptr )
  {
    *(_QWORD *)&v217 = 0;
    qfree(ptr);
  }
  if ( v55 )
    qfree(v55);
  if ( v56 )
    qfree(v56);
}

