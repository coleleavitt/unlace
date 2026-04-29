unsigned __int64 __fastcall sub_2E40(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned __int32 v9; // eax
  char *v10; // rdi
  char v11; // al
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // r14d
  int v15; // r15d
  int v16; // r12d
  int v17; // r13d
  __int64 v18; // rbx
  bool v19; // zf
  int v20; // eax
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rbx
  unsigned int *v24; // r14
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int *v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  unsigned int v36; // r12d
  __int64 v37; // rax
  unsigned int *v38; // r15
  int v39; // eax
  __int64 v40; // r13
  __int64 free_chunk; // rbp
  __int64 v42; // rbx
  bool v43; // cf
  __int64 v44; // rbx
  _BOOL8 v45; // r13
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  _BYTE *v48; // rax
  int v49; // eax
  const char *v50; // r8
  unsigned int v51; // r13d
  __int64 v52; // rbx
  unsigned int v53; // eax
  unsigned __int16 v54; // r8
  int v55; // edx
  unsigned __int16 v56; // dx
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // r9
  __m128 v60; // xmm4
  __m128 v61; // xmm5
  int v62; // eax
  unsigned int v63; // r9d
  __int64 v64; // rdi
  __int64 v65; // rax
  unsigned int v66; // eax
  __int64 v67; // r9
  unsigned int v68; // eax
  __int64 v69; // rax
  unsigned int *v70; // rax
  unsigned int *v71; // r10
  unsigned __int64 v72; // rbp
  __int64 v73; // r13
  unsigned int *v74; // r13
  unsigned int v75; // eax
  __int64 v76; // r9
  __int64 v77; // r15
  int v78; // edx
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned __int64 v81; // rbx
  __int64 v82; // r9
  __m128 v83; // xmm4
  __m128 v84; // xmm5
  _BYTE *v85; // rax
  __int64 v86; // rcx
  _BYTE *v87; // rbx
  _BYTE *v88; // rax
  unsigned int *v89; // r12
  int v90; // r14d
  const char *v91; // r13
  const char *v92; // rbx
  unsigned int v93; // ebp
  __int64 v94; // rdi
  const char *v95; // rdi
  const char *v96; // rax
  int v97; // eax
  __int64 v98; // rbx
  __int64 v99; // r14
  const char *v100; // r14
  const char *v101; // rax
  int v102; // eax
  char v103; // al
  unsigned int v104; // r13d
  unsigned __int64 v105; // r12
  __int64 v106; // r9
  const char *v107; // r9
  const char *v108; // r14
  const char *v109; // rax
  int v110; // eax
  __int64 v111; // r13
  unsigned int *v112; // rbp
  unsigned int v113; // r14d
  __int64 v114; // rax
  __int64 v115; // rdx
  unsigned int *v116; // rax
  int v117; // eax
  __int64 *v118; // rax
  __int64 v119; // r12
  unsigned int v120; // ebx
  unsigned int v121; // r15d
  __int64 v122; // rax
  __int64 v123; // r13
  unsigned int v124; // eax
  __int64 v125; // rbx
  __int64 v126; // rax
  char v127; // dl
  unsigned __int32 v128; // eax
  unsigned int v129; // r14d
  __int64 v130; // rbx
  __int64 v131; // rbx
  __int64 v132; // rbx
  __int64 v133; // rax
  __int64 segm_base; // rax
  int v135; // ecx
  __int64 *v136; // rax
  __int64 v137; // rax
  __int64 *v138; // rax
  unsigned int v139; // eax
  unsigned int v140; // edx
  unsigned int v141; // eax
  __int64 *segm_by_sel; // rax
  __m128i v144; // xmm0
  unsigned __int32 v145; // eax
  __int64 v146; // rax
  char *v147; // rbp
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  char v152; // al
  __int64 v153; // rsi
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  char v158; // al
  __int64 v159; // rsi
  int v160; // eax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rsi
  __int64 v166; // rdx
  __int64 v167; // [rsp+0h] [rbp-128h]
  int v168; // [rsp+10h] [rbp-118h]
  unsigned __int64 v169; // [rsp+10h] [rbp-118h]
  __int64 v170; // [rsp+10h] [rbp-118h]
  unsigned int v171; // [rsp+10h] [rbp-118h]
  unsigned int *v172; // [rsp+10h] [rbp-118h]
  unsigned __int16 v173; // [rsp+18h] [rbp-110h]
  __int64 v174; // [rsp+18h] [rbp-110h]
  __int64 v175; // [rsp+18h] [rbp-110h]
  __int64 v176; // [rsp+18h] [rbp-110h]
  __int64 v177; // [rsp+18h] [rbp-110h]
  unsigned int *v178; // [rsp+18h] [rbp-110h]
  __int64 v179; // [rsp+20h] [rbp-108h]
  unsigned __int64 v180; // [rsp+20h] [rbp-108h]
  unsigned int v181; // [rsp+28h] [rbp-100h]
  char *v182; // [rsp+28h] [rbp-100h]
  __int64 v183; // [rsp+30h] [rbp-F8h]
  int v184; // [rsp+30h] [rbp-F8h]
  __int64 v185; // [rsp+38h] [rbp-F0h]
  __int64 v186; // [rsp+40h] [rbp-E8h]
  int v187; // [rsp+48h] [rbp-E0h]
  unsigned int v188; // [rsp+48h] [rbp-E0h]
  __int64 v189; // [rsp+48h] [rbp-E0h]
  __int64 v190; // [rsp+48h] [rbp-E0h]
  __int64 v191; // [rsp+50h] [rbp-D8h]
  unsigned int v192; // [rsp+50h] [rbp-D8h]
  unsigned int v193; // [rsp+50h] [rbp-D8h]
  unsigned int *v194; // [rsp+58h] [rbp-D0h]
  __int64 v195; // [rsp+60h] [rbp-C8h]
  __int64 v196; // [rsp+60h] [rbp-C8h]
  int v197; // [rsp+60h] [rbp-C8h]
  int v198; // [rsp+60h] [rbp-C8h]
  unsigned int *v199; // [rsp+68h] [rbp-C0h]
  unsigned int *v200; // [rsp+68h] [rbp-C0h]
  unsigned int *v201; // [rsp+68h] [rbp-C0h]
  unsigned int v202; // [rsp+74h] [rbp-B4h]
  unsigned int *v203; // [rsp+78h] [rbp-B0h]
  unsigned __int64 v204; // [rsp+80h] [rbp-A8h]
  __int64 v205; // [rsp+88h] [rbp-A0h]
  unsigned int v206; // [rsp+A4h] [rbp-84h] BYREF
  unsigned __int64 v207; // [rsp+A8h] [rbp-80h] BYREF
  int v208; // [rsp+B0h] [rbp-78h] BYREF
  unsigned int v209; // [rsp+B4h] [rbp-74h]
  unsigned int v210; // [rsp+B8h] [rbp-70h]
  __int64 v211; // [rsp+C0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-60h]
  __int64 v213; // [rsp+D8h] [rbp-50h]
  __int64 dword; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v215; // [rsp+E8h] [rbp-40h]

  v167 = a1;
  v215 = __readfsqword(0x28u);
  setinf_flag(3, 4, 0);
  setinf_flag(3, 2, 1);
  set_processor_type("arm", 1);
  lread(a1, &v208, 12);
  if ( v208 == -976827453 )
  {
    setinf_flag(3, 32, 1);
    v9 = _byteswap_ulong(v209);
    v209 = v9;
    v210 = _byteswap_ulong(v210);
  }
  else
  {
    v9 = v209;
  }
  LODWORD(v211) = v9;
  if ( !(unsigned __int8)sub_2D90(a1, &v211, 0x10u, -1, -1) )
    sub_2AD0((__int64)"%s is incorrect, maximum possible value is %u%s", "Number of chunks", v211, "");
  v10 = (char *)v209;
  v186 = qcalloc(v209, 16);
  if ( !v186 )
    goto LABEL_245;
  lread(v167, v186, 16LL * v209);
  v11 = getinf_flag(3, 32);
  v12 = v209;
  if ( v11 )
  {
    if ( !v209 )
      goto LABEL_238;
    v78 = 0;
    do
    {
      v79 = v78++;
      v80 = v186 + 16 * v79;
      *(_DWORD *)(v80 + 8) = _byteswap_ulong(*(_DWORD *)(v80 + 8));
      *(_DWORD *)(v80 + 12) = _byteswap_ulong(*(_DWORD *)(v80 + 12));
    }
    while ( v78 != v12 );
  }
  else if ( !v209 )
  {
    goto LABEL_238;
  }
  v187 = -1;
  v13 = -1;
  v14 = 0;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  do
  {
    v18 = v186 + 16LL * v14;
    if ( *(_DWORD *)(v18 + 8) )
    {
      v168 = v13;
      if ( !strncmp((const char *)(v186 + 16LL * v14), "OBJ_HEAD", 8u) )
        v17 = v14;
      if ( !strncmp((const char *)v18, "OBJ_AREA", 8u) )
        v16 = v14;
      if ( !strncmp((const char *)v18, "OBJ_IDFN", 8u) )
        v15 = v14;
      v19 = strncmp((const char *)v18, "OBJ_SYMT", 8u) == 0;
      v20 = v187;
      if ( v19 )
        v20 = v14;
      v187 = v20;
      v21 = strncmp((const char *)v18, "OBJ_STRT", 8u);
      v13 = v168;
      if ( !v21 )
        v13 = v14;
    }
    ++v14;
  }
  while ( v14 != v12 );
  if ( v17 == -1 || v16 == -1 || v187 == -1 || v13 == -1 || v15 == -1 )
  {
LABEL_238:
    qfree(v186);
    sub_2AD0((__int64)"One of required chunks is missing");
  }
  v22 = v186 + 16LL * v13;
  v10 = (char *)*(unsigned int *)(v22 + 12);
  v183 = v22;
  v185 = qcalloc(v10, 1);
  if ( !v185 )
    goto LABEL_245;
  qlseek(v167, *(unsigned int *)(v22 + 8), 0);
  lread(v167, v185, *(unsigned int *)(v22 + 12));
  v23 = v186 + 16LL * v17;
  v10 = (char *)*(unsigned int *)(v23 + 12);
  v179 = v23;
  v24 = (unsigned int *)qcalloc(v10, 1);
  if ( !v24 )
    goto LABEL_245;
  qlseek(v167, *(unsigned int *)(v23 + 8), 0);
  v25 = (__int64)v24;
  lread(v167, v24, *(unsigned int *)(v23 + 12));
  if ( *(_DWORD *)(v23 + 12) <= 0x17u )
    goto LABEL_221;
  if ( (unsigned __int8)getinf_flag(3, 32) )
  {
    a3 = (__m128)_mm_unpacklo_epi32(
                   _mm_cvtsi32_si128(_byteswap_ulong(v24[2])),
                   _mm_cvtsi32_si128(_byteswap_ulong(v24[3])));
    a9 = (__m128)_mm_cvtsi32_si128(_byteswap_ulong(v24[1]));
    v144 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(*v24)), (__m128i)a9);
    v24[4] = _byteswap_ulong(v24[4]);
    a2 = (__m128)_mm_unpacklo_epi64(v144, (__m128i)a3);
    v145 = _byteswap_ulong(v24[5]);
    *(__m128 *)v24 = a2;
    v24[5] = v145;
  }
  v194 = v24 + 6;
  if ( (unsigned __int8)getinf_flag(3, 32) && v24[2] )
  {
    v25 = v186 + 16LL * v17;
    v27 = 0;
    do
    {
      v28 = *(unsigned int *)(v23 + 12);
      v29 = &v194[5 * (int)v27];
      if ( v29 < v24 )
        goto LABEL_221;
      v26 = (unsigned __int64)(v29 + 5);
      if ( v29 + 5 < v24 )
        goto LABEL_221;
      v26 -= (unsigned __int64)v24;
      if ( (__int64)v26 > v28 )
        goto LABEL_221;
      v27 = (unsigned int)(v27 + 1);
      a5 = (__m128)_mm_cvtsi32_si128(_byteswap_ulong(v29[3]));
      a3 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(v29[2])), (__m128i)a5);
      a2 = (__m128)_mm_unpacklo_epi64(
                     _mm_unpacklo_epi32(
                       _mm_cvtsi32_si128(_byteswap_ulong(*v29)),
                       _mm_cvtsi32_si128(_byteswap_ulong(v29[1]))),
                     (__m128i)a3);
      v26 = _byteswap_ulong(v29[4]);
      v29[4] = v26;
      *(__m128 *)v29 = a2;
    }
    while ( (unsigned int)v27 < v24[2] );
  }
  v30 = v186 + 16LL * v16;
  v169 = *(unsigned int *)(v30 + 8);
  v25 = (-(__int64)((unsigned __int8)getinf_flag(3, 4) == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8;
  setinf(9, v25);
  v35 = 16 * getinf(12, v25, v31, v32, v33, v34);
  if ( !v24[2] )
  {
    v63 = 0;
    goto LABEL_87;
  }
  v36 = 0;
  v195 = v30;
  v37 = 16LL * v15 + v186;
  v38 = v24 + 6;
  v191 = v37;
  do
  {
    if ( v38 < v24 )
      goto LABEL_221;
    v38 += 5;
    if ( v38 < v24 )
      goto LABEL_221;
    v26 = (char *)v38 - (char *)v24;
    if ( (char *)v38 - (char *)v24 > *(unsigned int *)(v179 + 12) )
      goto LABEL_221;
    v39 = *(v38 - 4);
    v25 = *(v38 - 3);
    if ( (v39 & 0x8000) != 0 )
    {
      v27 = v169;
      v51 = v36 + 1;
      v181 = v36 + 1;
      v25 += v169;
      v169 = v25 + 8LL * *(v38 - 2);
      goto LABEL_85;
    }
    if ( (v39 & 0x100) != 0 )
    {
      v40 = *(v38 - 1);
      free_chunk = find_free_chunk(v40, v25, 1);
      if ( v40 != free_chunk )
        sub_2790((__int64)"Cannot allocate area at %a", *(double *)a2.m128_u64);
    }
    else
    {
      free_chunk = find_free_chunk(v35, v25, 4095);
    }
    if ( (*((_BYTE *)v38 - 15) & 0x10) == 0 )
    {
      v42 = *(v38 - 3);
      v43 = __CFADD__(free_chunk, v42);
      v44 = free_chunk + v42;
      v45 = v43;
      v46 = qlsize(v167);
      v25 = v169;
      if ( v46 < v169 )
        goto LABEL_221;
      v26 = *(v38 - 3);
      if ( v46 - v169 < v26 || v45 )
        goto LABEL_221;
      file2base(v167, v169, free_chunk, v44, 1);
      v169 += *(v38 - 3);
    }
    v47 = *(v38 - 5);
    v26 = *(unsigned int *)(v183 + 12);
    v43 = __CFADD__(v185, v47);
    v27 = v185 + v47;
    if ( v43 )
      goto LABEL_221;
    v26 += v185;
    if ( v27 >= v26 )
      goto LABEL_221;
    v48 = (_BYTE *)v27;
    while ( *v48 )
    {
      if ( (_BYTE *)v26 == ++v48 )
        goto LABEL_221;
    }
    v49 = *(v38 - 4);
    v50 = "CODE";
    if ( (v49 & 0x200) == 0 )
    {
      v50 = "DATA";
      if ( (v49 & 0x1800) != 0 )
        v50 = "BSS";
    }
    v51 = v36 + 1;
    v181 = v36 + 1;
    sub_2B80((int)(v36 + 1), free_chunk, free_chunk + *(v38 - 3), v27, (__int64)v50);
    v52 = getseg(free_chunk);
    v53 = *(v38 - 4);
    v54 = (*((_WORD *)v38 - 8) << 10) & 0x7C00;
    if ( (v53 & 0x100000) != 0 )
    {
      v55 = HIBYTE(v53) & 0xF;
      BYTE1(v55) |= 2u;
      v54 |= v55;
    }
    if ( (v53 & 0x4000) != 0 )
      v54 |= 0x10u;
    if ( (v53 & 0x20000) != 0 )
      v54 |= 0x20u;
    if ( (v53 & 0x200000) != 0 )
      v54 |= 0x40u;
    HIBYTE(v56) = HIBYTE(v54);
    if ( (v53 & 0x400000) != 0 )
    {
      LOBYTE(v56) = v54 | 0x80;
      v54 = v56;
    }
    if ( (v53 & 0x400) != 0 )
    {
      v54 |= 0x100u;
    }
    else if ( (v53 & 0xC00) == 0 )
    {
      goto LABEL_70;
    }
    *(_BYTE *)(v52 + 41) = 6;
    v53 = *(v38 - 4);
LABEL_70:
    if ( (v53 & 0x2000) != 0 )
    {
      *(_BYTE *)(v52 + 42) = 4;
      v53 = *(v38 - 4);
    }
    if ( (v53 & 0x100) != 0 )
      *(_BYTE *)(v52 + 40) = 0;
    v173 = v54;
    update_segm(v52);
    v57 = *(_QWORD *)v52;
    v207 = -1;
    netnode_check(&v207, "$ arm segflags", 0, 1);
    v25 = v57;
    v211 = v173;
    netnode_supset(v207, v57, &v211, 8, 321);
    if ( !v36 )
    {
      create_filename_cmt();
      v10 = (char *)*(unsigned int *)(v191 + 12);
      v81 = qcalloc(v10, 1);
      if ( !v81 )
        goto LABEL_245;
      qlseek(v167, *(unsigned int *)(v191 + 8), 0);
      v25 = v81;
      lread(v167, v81, *(unsigned int *)(v191 + 12));
      v26 = v81 + *(unsigned int *)(v191 + 12);
      if ( v81 >= v26 )
        goto LABEL_221;
      v85 = (_BYTE *)v81;
      while ( *v85 )
      {
        if ( (_BYTE *)v26 == ++v85 )
          goto LABEL_221;
      }
      v25 = v81;
      sub_26C0((__int64)"Translator  : %s", v81, v26, v27, v28, v82, a2, a3, a4, a5, v83, v84, a8, a9, v167);
      qfree(v81);
    }
    v62 = *(v38 - 4);
    if ( (v62 & 0x200) != 0 )
    {
      if ( (v62 & 0x10000) == 0 )
      {
        sub_26C0((__int64)"The 26-bit area", v25, v26, v58, v28, v59, a2, a3, a4, a5, v60, v61, a8, a9, v167);
        v62 = *(v38 - 4);
      }
      if ( (v62 & 0x40000) != 0 )
      {
        sub_26C0(
          (__int64)"Extended FP instructions are used",
          v25,
          v26,
          v58,
          v28,
          v59,
          a2,
          a3,
          a4,
          a5,
          v60,
          v61,
          a8,
          a9,
          v167);
        v62 = *(v38 - 4);
      }
      if ( (v62 & 0x80000) != 0 )
      {
        sub_26C0((__int64)"No Software Stack Check", v25, v26, v58, v28, v59, a2, a3, a4, a5, v60, v61, a8, a9, v167);
        v62 = *(v38 - 4);
      }
      if ( (v62 & 0x100000) != 0 )
        sub_26C0((__int64)"Thumb code area", v25, v26, v58, v28, v59, a2, a3, a4, a5, v60, v61, a8, a9, v167);
    }
    else if ( (v62 & 0x200000) != 0 )
    {
      sub_26C0((__int64)"Shared Library Stub Data", v25, v26, v58, v28, v59, a2, a3, a4, a5, v60, v61, a8, a9, v167);
    }
    v27 = v169;
    v169 += 8LL * *(v38 - 2);
    v35 = free_chunk + *(v38 - 3);
LABEL_85:
    v36 = v51;
  }
  while ( v51 < v24[2] );
  v30 = v195;
  v63 = v181;
LABEL_87:
  v64 = v24[3];
  v206 = v63;
  v182 = (char *)qcalloc(v64, 4);
  v10 = v182;
  if ( !v182
    || (memset(v182, 0, 4LL * v24[3]),
        v65 = 16LL * v187,
        v10 = (char *)*(unsigned int *)(v186 + v65 + 12),
        v170 = v186 + v65,
        (v180 = qcalloc(v10, 1)) == 0) )
  {
LABEL_245:
    sub_29D0(v10);
  }
  qlseek(v167, *(unsigned int *)(v170 + 8), 0);
  lread(v167, v180, *(unsigned int *)(v170 + 12));
  v66 = getinf_flag(3, 32);
  v67 = v170;
  v26 = v66;
  v68 = v24[3];
  if ( (_BYTE)v26 )
  {
    if ( !v68 )
      goto LABEL_168;
    v27 = 0;
    v25 = v180;
    while ( 1 )
    {
      v69 = 16LL * (int)v27;
      v43 = __CFADD__(v180, v69);
      v70 = (unsigned int *)(v180 + v69);
      if ( v43 )
        break;
      v26 = (unsigned __int64)(v70 + 4);
      if ( (unsigned __int64)(v70 + 4) < v180 )
        break;
      v26 -= v180;
      if ( (__int64)v26 > *(unsigned int *)(v170 + 12) )
        break;
      v27 = (unsigned int)(v27 + 1);
      v28 = _byteswap_ulong(v70[3]);
      v26 = _byteswap_ulong(v70[2]);
      a2 = (__m128)_mm_unpacklo_epi64(
                     _mm_unpacklo_epi32(
                       _mm_cvtsi32_si128(_byteswap_ulong(*v70)),
                       _mm_cvtsi32_si128(_byteswap_ulong(v70[1]))),
                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(v26), _mm_cvtsi32_si128(v28)));
      *(__m128 *)v70 = a2;
      v68 = v24[3];
      if ( (unsigned int)v27 >= v68 )
        goto LABEL_96;
    }
LABEL_221:
    sub_2AD0((__int64)"Corrupted file", v25, v26, v27, v28);
  }
LABEL_96:
  if ( !v68 )
    goto LABEL_168;
  v205 = v30;
  v71 = v24;
  v188 = 0;
  v72 = v180;
  v28 = 0;
  v192 = 0;
  v171 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v25 = (int)v28;
      v26 = *(unsigned int *)(v67 + 12);
      v73 = 16LL * (int)v28;
      v43 = __CFADD__(v72, v73);
      v74 = (unsigned int *)(v72 + v73);
      if ( v43 || (unsigned __int64)(v74 + 4) < v72 || (__int64)((__int64)v74 - v72 + 16) > (__int64)v26 )
        goto LABEL_221;
      v75 = v74[1];
      if ( (v75 & 1) != 0 )
      {
        if ( (v75 & 4) != 0 )
        {
          ++v192;
        }
        else
        {
          v86 = v74[3];
          v43 = __CFADD__(v185, v86);
          v27 = v185 + v86;
          if ( v43 )
            goto LABEL_221;
          v87 = (_BYTE *)(v185 + *(unsigned int *)(v183 + 12));
          if ( v27 >= (unsigned __int64)v87 )
            goto LABEL_221;
          v88 = (_BYTE *)v27;
          while ( *v88 )
          {
            if ( v87 == ++v88 )
              goto LABEL_221;
          }
          v89 = v194;
          v90 = 0;
          if ( (int)v71[2] <= 0 )
            goto LABEL_143;
          v175 = v67;
          v196 = (int)v28;
          v202 = v28;
          v203 = v71;
          v199 = v74;
          v91 = (const char *)(v185 + *(unsigned int *)(v183 + 12));
          v92 = (const char *)v27;
          v204 = v72;
          v93 = v71[2];
          while ( 1 )
          {
            v94 = *v89;
            v43 = __CFADD__(v185, v94);
            v95 = (const char *)(v185 + v94);
            if ( v43 || v95 >= v91 )
              goto LABEL_221;
            v96 = v95;
            while ( *v96 )
            {
              if ( v91 == ++v96 )
                goto LABEL_221;
            }
            v25 = (__int64)v92;
            ++v90;
            if ( !strcmp(v95, v92) )
              break;
            v89 += 5;
            if ( v93 == v90 )
            {
              v67 = v175;
              v25 = v196;
              v27 = (unsigned __int64)v92;
              v74 = v199;
              v28 = v202;
              v71 = v203;
              v72 = v204;
              goto LABEL_143;
            }
          }
          v74 = v199;
          v72 = v204;
          segm_by_sel = (__int64 *)get_segm_by_sel(v90);
          v71 = v203;
          v28 = v202;
          v27 = (unsigned __int64)v92;
          v25 = v196;
          v67 = v175;
          if ( segm_by_sel )
          {
            v98 = *segm_by_sel;
            v97 = *segm_by_sel;
          }
          else
          {
LABEL_143:
            v97 = -1;
            v98 = -1;
          }
          *(_DWORD *)&v182[4 * v25] = v97;
          v99 = *v74;
          v25 = v74[2];
          v26 = *(unsigned int *)(v183 + 12);
          v43 = __CFADD__(v185, v99);
          v100 = (const char *)(v185 + v99);
          if ( v43 )
            goto LABEL_221;
          v26 += v185;
          if ( (unsigned __int64)v100 >= v26 )
            goto LABEL_221;
          v101 = v100;
          while ( *v101 )
          {
            if ( (const char *)v26 == ++v101 )
              goto LABEL_221;
          }
          if ( (_DWORD)v25
            || (v200 = v71,
                v197 = v28,
                v176 = v67,
                v102 = strcmp((const char *)v27, v100),
                v67 = v176,
                LODWORD(v28) = v197,
                v71 = v200,
                v102) )
          {
            v201 = v71;
            v198 = v28;
            v177 = v67;
            v103 = segtype(v98);
            sub_25F0(v98 + v25, v100, v74[1], v103 == 2);
            v67 = v177;
            LODWORD(v28) = v198;
            v71 = v201;
          }
        }
        goto LABEL_100;
      }
      if ( (~(_BYTE)v75 & 0x42) == 0 )
      {
        ++v188;
LABEL_100:
        v28 = (unsigned int)(v28 + 1);
        if ( (unsigned int)v28 >= v71[3] )
          goto LABEL_107;
        continue;
      }
      break;
    }
    ++v171;
    v28 = (unsigned int)(v28 + 1);
    if ( (unsigned int)v28 < v71[3] )
      continue;
    break;
  }
LABEL_107:
  v25 = v192;
  v30 = v205;
  v24 = v71;
  if ( !v192 )
  {
    if ( v171 )
    {
      v25 = v171;
      v77 = sub_2C90(&v206, v171, (__int64)"UNDEF", 1, v28, v67);
      if ( !v188 )
      {
        v174 = -1;
        v27 = -1;
        goto LABEL_157;
      }
      v174 = -1;
    }
    else
    {
      v76 = v188;
      if ( !v188 )
        goto LABEL_168;
      v174 = -1;
      v77 = -1;
    }
    goto LABEL_155;
  }
  v174 = sub_2C90(&v206, v192, (__int64)"abs", 10, v28, v67);
  if ( v171 )
  {
    v146 = sub_2C90(&v206, v171, (__int64)"UNDEF", 1, v28, v76);
    v28 = v188;
    v27 = -1;
    v77 = v146;
    if ( !v188 )
    {
LABEL_156:
      v25 = v192;
      if ( v188 + v192 + v171 )
        goto LABEL_157;
      goto LABEL_168;
    }
LABEL_155:
    v27 = sub_2C90(&v206, v188, (__int64)"common", 11, v28, v76);
    goto LABEL_156;
  }
  if ( v188 )
  {
    v77 = -1;
    goto LABEL_155;
  }
  v27 = -1;
  v77 = -1;
LABEL_157:
  v104 = 0;
  if ( v24[3] )
  {
    v189 = v27;
    v172 = v24;
    do
    {
      v28 = 16LL * (int)v104;
      v105 = v180 + v28;
      v106 = *(unsigned int *)(v180 + v28);
      v26 = *(unsigned int *)(v183 + 12);
      v43 = __CFADD__(v185, v106);
      v107 = (const char *)(v185 + v106);
      v108 = v107;
      if ( v43 )
        goto LABEL_221;
      v26 += v185;
      if ( (unsigned __int64)v107 >= v26 )
        goto LABEL_221;
      v109 = v107;
      while ( *v109 )
      {
        if ( (const char *)v26 == ++v109 )
          goto LABEL_221;
      }
      v110 = *(_DWORD *)(v105 + 4);
      if ( (v110 & 1) != 0 )
      {
        if ( (v110 & 4) != 0 )
        {
          v158 = getinf(9, v25, v26, v27, v28, v107);
          v159 = *(unsigned int *)(v105 + 8);
          if ( v158 == 8 )
          {
            put_qword(v174, v159);
            create_data(v174, 805306368, 8, -1);
          }
          else
          {
            put_dword(v174, v159);
            create_data(v174, 0x20000000, 4, -1);
          }
          sub_25F0(v174, v108, *(_DWORD *)(v105 + 4), 0);
          v160 = *(_DWORD *)(v105 + 8);
          v25 = (__int64)v182;
          v161 = (unsigned int)(v174 - v160);
          *(_DWORD *)&v182[4 * v104] = v160;
          *(_DWORD *)(v105 + 8) = v161;
          v174 += (unsigned __int8)getinf(9, v182, v161, v162, v163, v164);
        }
      }
      else
      {
        v147 = &v182[4 * v104];
        if ( (~(_BYTE)v110 & 0x42) != 0 )
        {
          put_dword(v77, 3785420814LL);
          v25 = (__int64)v108;
          sub_25F0(v77, v108, *(_DWORD *)(v105 + 4), 0);
          *(_DWORD *)v147 = v77;
          v77 += (unsigned __int8)getinf(9, v108, v148, v149, v150, v151);
        }
        else
        {
          v152 = getinf(9, v182, v26, v27, v28, v107);
          v153 = *(unsigned int *)(v105 + 8);
          if ( v152 == 8 )
            put_qword(v189, v153);
          else
            put_dword(v189, v153);
          v25 = (__int64)v108;
          sub_25F0(v189, v108, *(_DWORD *)(v105 + 4), 0);
          *(_DWORD *)v147 = v189;
          v189 += (unsigned __int8)getinf(9, v108, v154, v155, v156, v157);
        }
        *(_DWORD *)(v105 + 8) = 0;
      }
      ++v104;
    }
    while ( v104 < v172[3] );
    v30 = v205;
    v24 = v172;
  }
LABEL_168:
  if ( v24[2] )
  {
    v178 = v24;
    v111 = *(unsigned int *)(v30 + 8);
    v112 = v24 + 9;
    v113 = 0;
    do
    {
      while ( 1 )
      {
        v117 = *(v112 - 2);
        ++v113;
        if ( (v117 & 0x8000) == 0 )
          break;
        v114 = *(v112 - 1);
        v115 = *v112;
        v112 += 5;
        v111 += v114 + 8 * v115;
        v116 = v178;
        if ( v113 >= v178[2] )
          goto LABEL_211;
      }
      if ( (v117 & 0x1000) == 0 )
        v111 += *(v112 - 1);
      qlseek(v167, v111, 0);
      v118 = (__int64 *)get_segm_by_sel((int)v113);
      if ( v118 )
        v119 = *v118;
      else
        v119 = -1;
      v120 = *v112;
      if ( !(unsigned __int8)sub_2D90(v167, v112, 8u, v111, -1)
        && (unsigned int)sub_29F0(
                           1u,
                           (__int64)"AUTOHIDE SESSION\n"
                                    "HIDECANCEL\n"
                                    "%s %llu is incorrect, maximum possible value is %llu%s",
                           "Number of relocs",
                           v120,
                           *v112,
                           ". Do you want to continue with the new value?") != 1 )
      {
        sub_2AD0(0);
      }
      v121 = 0;
      v122 = 0;
      if ( *v112 )
      {
        v190 = v111;
        v193 = v113;
        lread(v167, &v207, 8);
        while ( 1 )
        {
          v127 = getinf_flag(3, 32);
          v128 = HIDWORD(v207);
          if ( v127 )
          {
            v128 = _byteswap_ulong(HIDWORD(v207));
            v207 = __PAIR64__(v128, _byteswap_ulong(v207));
          }
          v211 = 0;
          v129 = v128 & 0xFFFFFF;
          v213 = 0;
          dword = 0;
          v130 = v128 & 0xFFFFFF;
          si128 = _mm_load_si128((const __m128i *)&xmmword_5340);
          if ( (v128 & 0x8000000) != 0 )
          {
            if ( v129 >= v178[3] )
            {
              v165 = qlseek(v167, 0, 1);
              sub_2AD0((__int64)"Bad relocation record at file offset %llx", v165 - 8);
            }
            v123 = *(unsigned int *)&v182[4 * v130];
            v131 = *(unsigned int *)(v180 + 16 * v130 + 8);
            HIDWORD(v211) = 2;
            v132 = v123 + v131;
          }
          else
          {
            v138 = (__int64 *)get_segm_by_sel((int)(v129 + 1));
            if ( !v138 || (v123 = *v138, *v138 == -1) )
            {
              v166 = qlseek(v167, 0, 1);
              sub_2AD0((__int64)"Bad reference to area %zu at file offset %llx", v130, v166 - 8);
            }
            v132 = *v138;
          }
          v133 = getseg(v132);
          if ( !v133 )
          {
            qlseek(v167, 0, 1);
            sub_2AD0((__int64)"Can't find area for relocation target %a at %llx", *(double *)a2.m128_u64, v132);
          }
          si128.m128i_i64[1] = *(_QWORD *)(v133 + 48);
          segm_base = get_segm_base(v133);
          v135 = HIDWORD(v207);
          v213 = v132 - segm_base;
          if ( (v207 & 0x400000000000000LL) != 0 )
          {
            v123 -= v119;
            if ( (v207 & 0x800000000000000LL) == 0 )
              v123 = -v119;
          }
          else if ( (v207 & 0x1000000000000000LL) != 0 )
          {
            v136 = (__int64 *)get_segm_by_sel((int)(v129 + 1));
            if ( v136 )
              v137 = *v136;
            else
              v137 = -1;
            v135 = HIDWORD(v207);
            v123 -= v137;
          }
          v124 = v135 & 0x3000000;
          v125 = v119 + (unsigned int)v207;
          if ( (v135 & 0x3000000) == 0x2000000 )
          {
            LOWORD(v211) = 4;
            dword = (unsigned int)get_dword(v119 + (unsigned int)v207);
            add_dword(v125, v123);
          }
          else if ( v124 > 0x2000000 )
          {
            if ( v124 == 50331648 )
            {
              v184 = v135;
              v139 = get_dword(v119 + (unsigned int)v207);
              if ( (HIBYTE(v139) & 0xF) - 10 > 1u )
              {
                sub_2840((__int64)&unk_52E8, v125, (unsigned int)v123, v184 & 0x60000000);
              }
              else
              {
                v140 = v139 | 0xFF000000;
                if ( (v139 & 0x800000) == 0 )
                  v140 = v139 & 0xFFFFFF;
                put_dword(v125, v139 & 0xFF000000 | ((int)(v123 + 4 * v140) >> 2) & 0xFFFFFF);
              }
            }
          }
          else if ( v124 )
          {
            LOWORD(v211) = 1;
            dword = (unsigned __int16)get_word(v119 + (unsigned int)v207);
            add_word(v125, v123);
          }
          else
          {
            LOWORD(v211) = 13;
            dword = (unsigned __int8)get_byte(v119 + (unsigned int)v207);
            add_byte(v125, (unsigned int)v123);
          }
          ++v121;
          set_fixup(v125, &v211);
          v126 = *v112;
          if ( v121 >= (unsigned int)v126 )
            break;
          lread(v167, &v207, 8);
        }
        v111 = v190;
        v113 = v193;
        v122 = 8 * v126;
      }
      v111 += v122;
      v116 = v178;
      v112 += 5;
    }
    while ( v113 < v178[2] );
LABEL_211:
    v24 = v116;
  }
  v141 = v24[4];
  if ( v141 )
  {
    setinf(14, v141);
    setinf(15, v24[5]);
    setinf(16, v24[5]);
  }
  qfree(v180);
  qfree(v182);
  qfree(v24);
  qfree(v185);
  qfree(v186);
  setinf(12, 0);
  return v215 - __readfsqword(0x28u);
}
