_QWORD *__fastcall sub_1A6A530(
        _QWORD *a1,
        __int64 a2,
        const __m128i *a3,
        int a4,
        unsigned __int64 a5,
        const __m128i *a6,
        __int64 a7,
        unsigned __int64 a8,
        int a9,
        __int64 a10,
        char a11)
{
  _QWORD *v12; // rbp
  int v13; // r9d
  char v14; // r14
  _BYTE *v15; // rax
  __int64 v16; // rbx
  int v18; // r10d
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // r8d
  __int64 *v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r11
  int v30; // r10d
  int v31; // r9d
  __int64 v32; // rdx
  _QWORD *v33; // rsi
  __int64 v34; // r11
  int v35; // r10d
  int v36; // r9d
  unsigned __int32 v37; // ecx
  _DWORD *v38; // rdx
  _DWORD *v39; // rax
  _BYTE *v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // ecx
  unsigned int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r14
  int v47; // r10d
  int v48; // r9d
  unsigned __int64 v49; // rax
  __m128 v50; // xmm0
  __int64 *v51; // rax
  __int64 v52; // rdx
  __m128i *v53; // rax
  __m128i v54; // xmm3
  __m128i v55; // xmm2
  __int64 v56; // rax
  __m128 v57; // xmm0
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // rdx
  int v61; // r9d
  int v62; // r10d
  __int64 v63; // rax
  __int64 v64; // rsi
  __m128 *p_ptr; // rsi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  char *v69; // rsi
  __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  int v74; // r10d
  __int64 v75; // rdi
  _QWORD *v76; // r15
  __int64 v77; // rbp
  int v78; // ebx
  __int64 v79; // rcx
  int v80; // edx
  char v81; // al
  __int64 v82; // rax
  int v83; // esi
  __int64 v84; // rcx
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rdx
  char **v87; // r15
  char **v88; // rbx
  unsigned __int64 v89; // r15
  char **v90; // rax
  __int64 v91; // rdi
  __int64 v92; // r15
  char *v93; // rax
  size_t v94; // rdx
  size_t v95; // rax
  __int64 v96; // rdi
  __int64 *v97; // r12
  char **v98; // rdi
  unsigned __int64 v99; // rdi
  __int64 v100; // r14
  __int64 *v101; // rbx
  __int64 v102; // r15
  __int64 v103; // rax
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 *v106; // rsi
  int v107; // eax
  __int64 v108; // rcx
  __int64 v109; // r8
  bool v110; // zf
  __int64 v111; // rax
  __int64 v112; // rdx
  _QWORD *v113; // rdx
  __int64 v114; // r11
  __int64 v115; // rax
  __int64 *v116; // rax
  _BYTE *v117; // r15
  const char *v118; // rdi
  size_t v119; // rax
  unsigned __int8 *v120; // rax
  size_t v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  const char **v126; // r15
  const char *v127; // rsi
  size_t v128; // rdx
  unsigned __int64 v129; // rax
  __int64 v130; // rax
  const char **v131; // r12
  char *v132; // r15
  const char *v133; // rdi
  size_t v134; // rax
  size_t v135; // rax
  size_t v136; // rax
  size_t v137; // rax
  size_t v138; // rax
  size_t v139; // rax
  size_t v140; // rax
  size_t v141; // rax
  size_t v142; // rax
  size_t v143; // rax
  size_t v144; // rax
  _BYTE *v145; // rax
  size_t v146; // rax
  size_t v147; // rax
  const char **v148; // r12
  char *v149; // r15
  const char *v150; // rdi
  size_t v151; // rax
  size_t v152; // rax
  size_t v153; // rax
  size_t v154; // rax
  size_t v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  size_t v158; // rax
  size_t v159; // rax
  __int64 v160; // rax
  unsigned __int64 v161; // rdx
  __int64 v162; // rax
  size_t v163; // rax
  size_t v164; // rax
  size_t v165; // rax
  size_t v166; // rax
  size_t v167; // rax
  unsigned __int64 v168; // r15
  __int64 v169; // rdi
  __int64 v170; // rax
  size_t v171; // rax
  size_t v172; // rax
  int v173; // esi
  size_t v174; // rax
  size_t v175; // rax
  size_t v176; // rax
  size_t v177; // rax
  size_t v178; // rax
  size_t v179; // rax
  size_t v180; // rax
  size_t v181; // rax
  size_t v182; // rax
  size_t v183; // rax
  size_t v184; // rax
  size_t v185; // rax
  size_t v186; // rax
  size_t v187; // rax
  size_t v188; // rax
  size_t v189; // rax
  size_t v190; // rax
  __int64 v191; // [rsp-10h] [rbp-118h]
  char v192; // [rsp+0h] [rbp-108h]
  unsigned __int64 v193; // [rsp+0h] [rbp-108h]
  int v195; // [rsp+8h] [rbp-100h]
  int v196; // [rsp+8h] [rbp-100h]
  __int64 v197; // [rsp+10h] [rbp-F8h]
  int v198; // [rsp+10h] [rbp-F8h]
  int v199; // [rsp+10h] [rbp-F8h]
  __int64 v200; // [rsp+10h] [rbp-F8h]
  int v201; // [rsp+10h] [rbp-F8h]
  int v202; // [rsp+10h] [rbp-F8h]
  __int64 v203; // [rsp+10h] [rbp-F8h]
  __int64 v204; // [rsp+10h] [rbp-F8h]
  char *v205; // [rsp+10h] [rbp-F8h]
  __int64 v206; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v207; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v208; // [rsp+20h] [rbp-E8h]
  _QWORD *v209; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v210; // [rsp+30h] [rbp-D8h]
  __int64 v211; // [rsp+38h] [rbp-D0h]
  __int64 v212; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v213; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v214; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v215; // [rsp+60h] [rbp-A8h] BYREF
  __m128 ptr; // [rsp+70h] [rbp-98h] BYREF
  char *v217; // [rsp+80h] [rbp-88h] BYREF
  _OWORD v218[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v219; // [rsp+A8h] [rbp-60h]
  __int128 v220; // [rsp+B0h] [rbp-58h]
  __int64 v221; // [rsp+C0h] [rbp-48h]

  v12 = a1;
  v13 = a9;
  v14 = a11;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 264) + 194LL) )
    goto LABEL_3;
  v15 = *(_BYTE **)(a2 + 232);
  v16 = a2;
  if ( (v15[106] & 2) == 0 )
    goto LABEL_3;
  v18 = a4;
  v192 = *(_BYTE *)(a2 + 10024);
  if ( v192 )
    goto LABEL_3;
  if ( (*v15 & 0x20) != 0 )
  {
    v201 = a9;
    v81 = sub_B8E180(*(_QWORD *)(a2 + 544));
    v18 = a4;
    v13 = v201;
    if ( v81 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 544) + 8LL) & 0x7Fu) - 35 <= 3 )
        goto LABEL_3;
    }
  }
  if ( (a3->m128i_i64[0] & 7) != 0 )
    goto LABEL_3;
  v21 = a3->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v21 || a6 && a6->m128i_i32[0] && a6->m128i_i32[1] && !a6->m128i_i64[1] )
    goto LABEL_3;
  if ( *(_DWORD *)(a2 + 11320) )
    goto LABEL_3;
  v22 = a5;
  if ( a5 )
  {
    while ( (*(_BYTE *)(v22 + 9) & 8) == 0 )
    {
      v22 = *(_QWORD *)v22;
      if ( !v22 )
        goto LABEL_17;
    }
    v207 = a3->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
    v202 = v18;
    v195 = v13;
    v82 = sub_1601850(a2);
    v21 = v207;
    v13 = v195;
    v18 = v202;
    if ( v82 == v207 )
      goto LABEL_3;
  }
LABEL_17:
  v23 = *(_QWORD *)(a2 + 10032);
  v197 = a2 + 10032;
  v24 = *(unsigned int *)(a2 + 10048);
  if ( (_DWORD)v24 )
  {
    v25 = (v24 - 1) & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
    v26 = (__int64 *)(v23 + 80LL * v25);
    v27 = *v26;
    if ( v21 == *v26 )
    {
LABEL_19:
      LODWORD(v209) = v13;
      LODWORD(v208) = v18;
      v207 = v21;
      sub_1A3B570(&ptr, v26, (_QWORD *)(80 * v24 + v23), v197, 1);
      v28 = ptr.m128_u64[0];
      v29 = v207;
      v30 = v208;
      v31 = (int)v209;
      goto LABEL_20;
    }
    v83 = 1;
    if ( v27 != -4096 )
    {
      do
      {
        v25 = (v24 - 1) & (v83 + v25);
        v196 = v83 + 1;
        v26 = (__int64 *)(v23 + 80LL * v25);
        v84 = *v26;
        if ( v21 == *v26 )
          goto LABEL_19;
        v83 = v196;
      }
      while ( v84 != -4096 );
    }
  }
  LODWORD(v209) = v13;
  LODWORD(v208) = v18;
  v207 = v21;
  sub_1A3B570(&ptr, (_QWORD *)(v23 + 80 * v24), (_QWORD *)(v23 + 80 * v24), v197, 1);
  v28 = ptr.m128_u64[0];
  v31 = (int)v209;
  v30 = v208;
  v29 = v207;
LABEL_20:
  v32 = *(unsigned int *)(v16 + 10048);
  LODWORD(v210) = v31;
  LODWORD(v209) = v30;
  v208 = v29;
  v33 = (_QWORD *)(*(_QWORD *)(v16 + 10032) + 80 * v32);
  v207 = v28;
  sub_1A3B570(&ptr, v33, v33, v197, 1);
  v34 = v208;
  v35 = (int)v209;
  v36 = v210;
  if ( v207 != ptr.m128_u64[0] )
  {
    v37 = a3->m128i_u32[2];
    if ( *(_QWORD *)(v207 + 72) )
    {
      v85 = *(_QWORD *)(v207 + 48);
      if ( v85 )
      {
        v86 = v207 + 40;
        do
        {
          if ( v37 <= *(_DWORD *)(v85 + 32) )
          {
            v86 = v85;
            v85 = *(_QWORD *)(v85 + 16);
          }
          else
          {
            v85 = *(_QWORD *)(v85 + 24);
          }
        }
        while ( v85 );
        if ( v207 + 40 != v86 && v37 >= *(_DWORD *)(v86 + 32) )
          goto LABEL_3;
      }
    }
    else
    {
      v38 = *(_DWORD **)(v207 + 8);
      v39 = &v38[*(unsigned int *)(v207 + 16)];
      if ( v38 != v39 )
      {
        while ( v37 != *v38 )
        {
          if ( v39 == ++v38 )
            goto LABEL_27;
        }
        if ( v39 != v38 )
          goto LABEL_3;
      }
    }
  }
LABEL_27:
  v40 = *(_BYTE **)(v16 + 232);
  if ( (v40[13] & 6) != 0
    && (v41 = *(_QWORD *)(v208 + 16), *(_DWORD *)v41 == 6)
    && *(_DWORD *)(v41 + 16) == 1952671094
    && *(_WORD *)(v41 + 20) == 29295
    || (v42 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 264) + 40LL) + 20LL), v43 = *(_DWORD *)(v16 + 10028), v42)
    && v42 <= v43 )
  {
LABEL_3:
    *a1 = 0;
    return v12;
  }
  *(_DWORD *)(v16 + 10028) = v43 + 1;
  if ( v14 && (v40[21] & 2) != 0 && (v40[22] & 4) != 0 )
  {
    LODWORD(v208) = v36;
    LODWORD(v207) = v35;
    v206 = v34;
    v170 = sub_15F0FB0(v16);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v170 + 48LL))(
      v170,
      *(_QWORD *)(v206 + 16) + 16LL,
      **(unsigned int **)(v206 + 16),
      a3->m128i_u32[2]);
    v36 = v208;
    v35 = v207;
  }
  LODWORD(v209) = v36;
  LODWORD(v208) = v35;
  (*(void (__fastcall **)(__int64 *, __int64))(*(_QWORD *)a7 + 32LL))(&v212, a7);
  v212 = 0;
  v44 = operator new(0x440u);
  v45 = a3->m128i_i64[0];
  v46 = v44;
  v47 = v208;
  *(_OWORD *)(v44 + 432) = 0;
  v48 = (int)v209;
  v207 = a5;
  *(_QWORD *)v44 = &off_2BC7248;
  v49 = v45 & 0xFFFFFFFFFFFFFFF8LL;
  *(_DWORD *)(v46 + 24) = 0;
  if ( (v45 & 7) != 0 )
    v49 = 0;
  v50 = _mm_loadh_ps((const double *)&v207);
  *(_QWORD *)(v46 + 32) = 0;
  *(_QWORD *)(v46 + 56) = 0;
  *(_QWORD *)(v46 + 8) = v49;
  *(_QWORD *)(v46 + 40) = v46 + 24;
  *(_QWORD *)(v46 + 48) = v46 + 24;
  *(_QWORD *)(v46 + 64) = v46 + 80;
  *(_QWORD *)(v46 + 72) = 0x400000000LL;
  *(__m128 *)(v46 + 448) = v50;
  if ( a6 )
  {
    v51 = (__int64 *)operator new(0x30u);
    v52 = a6->m128i_i64[0];
    v207 = (unsigned __int64)v51;
    *v51 = v52;
    sub_E90750((__int64)(v51 + 1), &a6->m128i_i64[1]);
    v53 = (__m128i *)v207;
    v47 = v208;
    v54 = _mm_loadu_si128(a6 + 2);
    v48 = (int)v209;
    *(_QWORD *)(v46 + 464) = v207;
    v53[2] = v54;
  }
  else
  {
    *(_QWORD *)(v46 + 464) = 0;
  }
  v55 = _mm_loadu_si128(a3);
  *(_DWORD *)(v46 + 640) = v47;
  *(_QWORD *)(v46 + 496) = v46 + 512;
  *(_QWORD *)(v46 + 504) = 0x800000000LL;
  v56 = a3[1].m128i_i64[0];
  v57 = _mm_loadh_ps((const double *)&a8);
  *(_QWORD *)(v46 + 488) = 0;
  *(_QWORD *)(v46 + 624) = v56;
  *(_QWORD *)(v46 + 648) = 0x101010000LL;
  *(_QWORD *)(v46 + 592) = 0;
  *(_QWORD *)(v46 + 600) = v16;
  *(_QWORD *)(v46 + 632) = 0;
  *(_DWORD *)(v46 + 644) = 0;
  *(__m128 *)(v46 + 472) = v57;
  *(_OWORD *)(v46 + 576) = 0;
  *(__m128i *)(v46 + 608) = v55;
  LODWORD(v207) = v48;
  v198 = v47;
  sub_1A395A0(v46 + 488);
  sub_1A3F0F0(v46 + 656, *(_QWORD *)(v16 + 248), *(_QWORD *)(v16 + 544), (__int64)a6, v58, v59);
  v60 = *(unsigned int *)(v46 + 76);
  *(_QWORD *)(v46 + 888) = v46 + 904;
  v61 = v207;
  *(_QWORD *)(v46 + 896) = 0x200000000LL;
  v62 = v198;
  *(_WORD *)(v46 + 651) = 0;
  ptr.m128_u64[1] = 0;
  v217 = (char *)v218 + 8;
  v218[0] = 0x100000000uLL;
  v63 = *(unsigned int *)(v46 + 72);
  *(_BYTE *)(v46 + 1080) = v61;
  v64 = v63 + 1;
  *(_BYTE *)(v46 + 1081) = 0;
  v218[1] = 0;
  v219 = 0;
  ptr.m128_u64[0] = 0;
  v220 = 0;
  v221 = 0;
  if ( v63 + 1 > v60 )
  {
    v168 = *(_QWORD *)(v46 + 64);
    v169 = v46 + 64;
    if ( v168 > (unsigned __int64)&ptr || (unsigned __int64)&ptr >= v168 + 88 * v63 )
    {
      LODWORD(v207) = v61;
      sub_1A3E160(v169, v64);
      v63 = *(unsigned int *)(v46 + 72);
      p_ptr = &ptr;
      v66 = *(_QWORD *)(v46 + 64);
      v62 = v198;
      v61 = v207;
    }
    else
    {
      sub_1A3E160(v169, v64);
      v63 = *(unsigned int *)(v46 + 72);
      v62 = v198;
      v61 = v207;
      v66 = *(_QWORD *)(v46 + 64);
      p_ptr = (__m128 *)((char *)&ptr + v66 - v168);
    }
  }
  else
  {
    p_ptr = &ptr;
    v66 = *(_QWORD *)(v46 + 64);
  }
  LODWORD(v207) = v61;
  v199 = v62;
  sub_1A3AB00(v66 + 88 * v63, (__int64)p_ptr);
  ++*(_DWORD *)(v46 + 72);
  sub_17A1D90(&ptr);
  if ( a8 )
  {
    v69 = (char *)a8;
    sub_1A65010(v16, a8, v199, v46, 1, 0, 0.0, 0.0, 1);
    v74 = v199;
    if ( a10 )
    {
      v75 = *(_QWORD *)(*(_QWORD *)(a10 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v75 + 16) - 35 > 1 )
      {
        LODWORD(v207) = v199;
        v160 = sub_F63050(v75, v69, v70, v71);
        v74 = v207;
        v71 = *(_BYTE *)(v160 + 19) >> 2;
        v161 = v71 + ((*(_WORD *)(v160 + 18) >> 3) & 0x7F);
        v200 = v160 + 8 * v161 + 48;
        v75 = *(_QWORD *)(*(_QWORD *)(a10 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v75 + 16) - 35 <= 1 )
        {
          v70 = (*(_WORD *)(v75 + 18) >> 3) & 0x7F;
        }
        else
        {
          v162 = sub_F63050(v75, v69, v161, v71);
          v74 = v207;
          v75 = v162;
          v70 = (*(_WORD *)(v162 + 18) >> 3) & 0x7F;
        }
      }
      else
      {
        v70 = (*(_WORD *)(v75 + 18) >> 3) & 0x7F;
        v200 = v75 + 8 * (v70 + (*(_BYTE *)(v75 + 19) >> 2)) + 48;
      }
      v76 = (_QWORD *)(v75 + 8 * v70 + 48);
      if ( v76 != (_QWORD *)v200 )
      {
        v207 = (unsigned __int64)v12;
        v77 = v16;
        v78 = v74;
        do
        {
          if ( *v76 )
          {
            v69 = (char *)(*v76 + 48LL);
            v79 = v46;
            v80 = v78;
          }
          else
          {
            v79 = v46;
            v80 = v78;
            v69 = nullptr;
          }
          ++v76;
          sub_1A65010(v77, (unsigned __int64)v69, v80, v79, 1, 0, 0.0, 0.0, 1);
        }
        while ( (_QWORD *)v200 != v76 );
        v16 = v77;
        v12 = (_QWORD *)v207;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v16 + 232) + 1LL) & 8) == 0 )
    {
LABEL_91:
      if ( a6 )
        goto LABEL_92;
LABEL_161:
      v207 = *(_QWORD *)(v46 + 472);
      goto LABEL_119;
    }
    if ( !a6 )
      goto LABEL_161;
    goto LABEL_75;
  }
  if ( !a6 || !a6->m128i_i64[1] )
  {
    v192 = (*(_BYTE *)(*(_QWORD *)(v16 + 232) + 1LL) & 8) != 0;
LABEL_77:
    v203 = *(_QWORD *)(*(_QWORD *)(v16 + 248) + 17504LL);
    sub_FBDEE0((__int64 **)&ptr, *(__int64 **)v203, *(_DWORD *)(v203 + 8) == 0);
    v87 = (char **)ptr.m128_u64[0];
    v69 = (char *)(*(_QWORD *)v203 + 8LL * *(unsigned int *)(v203 + 8));
    sub_FBDEE0((__int64 **)&ptr, (__int64 *)v69, 1);
    if ( (char **)ptr.m128_u64[0] != v87 )
    {
      v69 = *v87;
      v204 = v16;
      v88 = v87;
      v89 = ptr.m128_u64[0];
      do
      {
        sub_1A639D0(v46, v69 + 16, *(_QWORD *)v69, 0);
        v69 = v88[1];
        if ( v69 && v69 != (char *)-8LL )
        {
          ++v88;
        }
        else
        {
          v90 = v88 + 2;
          do
          {
            do
            {
              v69 = *v90;
              v88 = v90++;
            }
            while ( !v69 );
          }
          while ( v69 == (char *)-8LL );
        }
      }
      while ( (char **)v89 != v88 );
      v16 = v204;
    }
    v91 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 248) + 17504LL) + 120LL);
    if ( v91 )
    {
      v92 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v91 + 24LL))(v91);
      while ( 1 )
      {
        v93 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
        if ( !v94 )
          break;
        v69 = v93;
        sub_1A639D0(v46, v93, v94, 0);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 8LL))(v92);
    }
    goto LABEL_91;
  }
  v129 = sub_16A2930(v16, (__int64)a6, (unsigned __int8)v207, v67, v68, (unsigned int)v207);
  if ( !v129 )
  {
    v130 = *(_QWORD *)v46;
    *v12 = 0;
    (*(void (__fastcall **)(__int64))(v130 + 8))(v46);
    goto LABEL_116;
  }
  sub_1A65010(v16, v129, v199, v46, 1, 0, 0.0, 0.0, 1);
  v72 = v191;
  v73 = v16;
  if ( (*(_BYTE *)(*(_QWORD *)(v16 + 232) + 1LL) & 8) != 0 )
  {
LABEL_75:
    if ( !a6->m128i_i64[1] )
      goto LABEL_92;
    v192 = 1;
    goto LABEL_77;
  }
LABEL_92:
  v69 = (char *)a6->m128i_u32[0];
  v207 = *(_QWORD *)(v46 + 472);
  if ( (_DWORD)v69 && (v71 = a6->m128i_u32[1], (_DWORD)v71) || a6->m128i_i64[1] )
  {
    v95 = j__strlen("template");
    sub_1A639D0(v46, "template", v95, 1);
    if ( *(_BYTE *)(v207 + 9) )
    {
      v175 = j__strlen("operator");
      sub_1A639D0(v46, "operator", v175, 1);
    }
    goto LABEL_96;
  }
LABEL_119:
  if ( *(_BYTE *)(v207 + 13) )
  {
    v153 = j__strlen("super");
    v69 = "super";
    sub_1A639D0(v46, "super", v153, 1);
  }
  if ( *(_BYTE *)(v207 + 8) )
  {
    v117 = &off_2BC73C0;
    do
    {
      while ( *(_QWORD *)v117 )
      {
        v118 = *(const char **)v117;
        v205 = *(char **)v117;
        v117 += 8;
        v119 = j__strlen(v118);
        v69 = v205;
        sub_1A639D0(v46, v205, v119, 1);
        if ( v117 == algn_2BC7458 )
          goto LABEL_125;
      }
      v69 = nullptr;
      sub_1A639D0(v46, nullptr, 0, 1);
      v117 += 8;
    }
    while ( algn_2BC7458 != v117 );
LABEL_125:
    v120 = *(unsigned __int8 **)(v16 + 232);
    v70 = *v120;
    if ( (v70 & 1) != 0 )
    {
      if ( (v70 & 0x10) != 0
        || (v174 = j__strlen("_Imaginary"),
            v69 = "_Imaginary",
            sub_1A639D0(v46, "_Imaginary", v174, 1),
            v120 = *(unsigned __int8 **)(v16 + 232),
            (*v120 & 1) != 0) )
      {
        v121 = j__strlen("restrict");
        v69 = (char *)"restrict";
        sub_1A639D0(v46, "restrict", v121, 1);
        v120 = *(unsigned __int8 **)(v16 + 232);
      }
    }
    if ( (v120[3] & 4) != 0 || (v120[1] & 8) != 0 )
    {
      v135 = j__strlen("bool");
      v69 = "bool";
      sub_1A639D0(v46, "bool", v135, 1);
    }
    else
    {
      if ( (*v120 & 1) == 0 )
      {
LABEL_131:
        if ( (v120[4] & 8) != 0 )
        {
          v167 = j__strlen("typeof");
          v69 = "typeof";
          sub_1A639D0(v46, "typeof", v167, 1);
        }
        goto LABEL_133;
      }
      v183 = j__strlen("_Bool");
      v69 = "_Bool";
      sub_1A639D0(v46, "_Bool", v183, 1);
    }
    v120 = *(unsigned __int8 **)(v16 + 232);
    if ( (v120[1] & 8) != 0 )
    {
      v136 = j__strlen("class");
      sub_1A639D0(v46, "class", v136, 1);
      v137 = j__strlen("typename");
      sub_1A639D0(v46, "typename", v137, 1);
      v138 = j__strlen("wchar_t");
      v69 = "wchar_t";
      sub_1A639D0(v46, "wchar_t", v138, 1);
      v120 = *(unsigned __int8 **)(v16 + 232);
      if ( (v120[1] & 0x10) != 0 )
      {
        v139 = j__strlen("char16_t");
        sub_1A639D0(v46, "char16_t", v139, 1);
        v140 = j__strlen("char32_t");
        sub_1A639D0(v46, "char32_t", v140, 1);
        v141 = j__strlen("constexpr");
        sub_1A639D0(v46, "constexpr", v141, 1);
        v142 = j__strlen("decltype");
        sub_1A639D0(v46, "decltype", v142, 1);
        v143 = j__strlen("thread_local");
        v69 = "thread_local";
        sub_1A639D0(v46, "thread_local", v143, 1);
        v120 = *(unsigned __int8 **)(v16 + 232);
      }
    }
    goto LABEL_131;
  }
  if ( *(_BYTE *)(v207 + 11) )
  {
    v131 = (const char **)&off_2BC7360;
    do
    {
      while ( 1 )
      {
        v132 = (char *)*v131;
        if ( !*v131 )
          break;
        v133 = *v131++;
        v134 = j__strlen(v133);
        v69 = v132;
        sub_1A639D0(v46, v132, v134, 1);
        if ( v131 == (const char **)&unk_2BC73A8 )
          goto LABEL_133;
      }
      v69 = nullptr;
      sub_1A639D0(v46, nullptr, 0, 1);
      ++v131;
    }
    while ( &unk_2BC73A8 != (_UNKNOWN *)v131 );
  }
LABEL_133:
  if ( *(_BYTE *)(v207 + 10) && (*(_BYTE *)(*(_QWORD *)(v16 + 232) + 1LL) & 8) != 0 )
  {
    v163 = j__strlen("const_cast");
    sub_1A639D0(v46, "const_cast", v163, 1);
    v164 = j__strlen("dynamic_cast");
    sub_1A639D0(v46, "dynamic_cast", v164, 1);
    v165 = j__strlen("reinterpret_cast");
    sub_1A639D0(v46, "reinterpret_cast", v165, 1);
    v166 = j__strlen("static_cast");
    v69 = "static_cast";
    sub_1A639D0(v46, "static_cast", v166, 1);
  }
  if ( *(_BYTE *)(v207 + 9) )
  {
    v144 = j__strlen("sizeof");
    v69 = "sizeof";
    sub_1A639D0(v46, "sizeof", v144, 1);
    v145 = *(_BYTE **)(v16 + 232);
    if ( (v145[3] & 4) != 0 || (v145[1] & 8) != 0 )
    {
      v146 = j__strlen("false");
      sub_1A639D0(v46, "false", v146, 1);
      v147 = j__strlen("true");
      v69 = "true";
      sub_1A639D0(v46, "true", v147, 1);
      v145 = *(_BYTE **)(v16 + 232);
      if ( (v145[1] & 8) != 0 )
      {
        v148 = (const char **)&off_2BC7320;
        do
        {
          while ( 1 )
          {
            v149 = (char *)*v148;
            if ( !*v148 )
              break;
            v150 = *v148++;
            v151 = j__strlen(v150);
            v69 = v149;
            sub_1A639D0(v46, v149, v151, 1);
            if ( v148 == (const char **)&unk_2BC7348 )
              goto LABEL_172;
          }
          v69 = nullptr;
          sub_1A639D0(v46, nullptr, 0, 1);
          ++v148;
        }
        while ( &unk_2BC7348 != (_UNKNOWN *)v148 );
LABEL_172:
        v70 = *(_QWORD *)(v16 + 544);
        if ( (*(_BYTE *)(v70 + 8) & 0x7Fu) - 35 <= 3 && !sub_B979F0((_QWORD *)(v70 - 72)) )
        {
          v188 = j__strlen("this");
          v69 = "this";
          sub_1A639D0(v46, "this", v188, 1);
        }
        v145 = *(_BYTE **)(v16 + 232);
        if ( (v145[1] & 0x10) != 0 )
        {
          v186 = j__strlen("alignof");
          sub_1A639D0(v46, "alignof", v186, 1);
          v187 = j__strlen("nullptr");
          v69 = "nullptr";
          sub_1A639D0(v46, "nullptr", v187, 1);
          v145 = *(_BYTE **)(v16 + 232);
        }
      }
    }
    if ( (*v145 & 2) != 0 )
    {
      v152 = j__strlen("_Alignof");
      v69 = "_Alignof";
      sub_1A639D0(v46, "_Alignof", v152, 1);
    }
  }
  if ( !*(_BYTE *)(v207 + 12) )
    goto LABEL_96;
  if ( sub_15F16E0(v16) || sub_15F24E0(v16, (__int64)v69, v122, v123, v124, v125) )
  {
    v126 = (const char **)&off_2BC72E0;
    do
    {
      if ( *v126 )
      {
        v127 = *v126;
        v128 = j__strlen(*v126);
      }
      else
      {
        v127 = nullptr;
        v128 = 0;
      }
      ++v126;
      sub_1A639D0(v46, v127, v128, 1);
    }
    while ( v126 != (const char **)&off_2BC7320 );
    if ( (*(_BYTE *)(*(_QWORD *)(v16 + 232) + 1LL) & 8) != 0 )
    {
      v171 = j__strlen("catch");
      sub_1A639D0(v46, "catch", v171, 1);
      v172 = j__strlen("try");
      sub_1A639D0(v46, "try", v172, 1);
    }
    if ( a5 )
    {
      if ( *(_QWORD *)(a5 + 40) )
      {
        v154 = j__strlen("break");
        sub_1A639D0(v46, "break", v154, 1);
      }
      if ( *(_QWORD *)(a5 + 48) )
      {
        v155 = j__strlen("continue");
        sub_1A639D0(v46, "continue", v155, 1);
      }
    }
    v156 = *(unsigned int *)(v16 + 40);
    if ( (_DWORD)v156 )
    {
      v70 = *(_QWORD *)(v16 + 32);
      v157 = *(_QWORD *)(v70 + 8 * v156 - 8);
      if ( v157 )
      {
        if ( *(_DWORD *)(v157 + 64) )
        {
          v184 = j__strlen("case");
          sub_1A639D0(v46, "case", v184, 1);
          v185 = j__strlen("default");
          sub_1A639D0(v46, "default", v185, 1);
        }
      }
    }
    goto LABEL_190;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v16 + 232) + 1LL) & 8) != 0 )
  {
    v189 = j__strlen("namespace");
    sub_1A639D0(v46, "namespace", v189, 1);
    v190 = j__strlen("template");
    sub_1A639D0(v46, "template", v190, 1);
    if ( !a5 )
    {
LABEL_190:
      if ( (*(_BYTE *)(*(_QWORD *)(v16 + 232) + 1LL) & 8) != 0 )
      {
        v158 = j__strlen("using");
        sub_1A639D0(v46, "using", v158, 1);
        if ( (*(_BYTE *)(*(_QWORD *)(v16 + 232) + 1LL) & 0x10) != 0 )
        {
          v159 = j__strlen("static_assert");
          sub_1A639D0(v46, "static_assert", v159, 1);
        }
      }
      goto LABEL_96;
    }
LABEL_208:
    if ( (*(_BYTE *)(a5 + 8) & 0x20) != 0 )
    {
      v176 = j__strlen("explicit");
      sub_1A639D0(v46, "explicit", v176, 1);
      v177 = j__strlen("friend");
      sub_1A639D0(v46, "friend", v177, 1);
      v178 = j__strlen("mutable");
      sub_1A639D0(v46, "mutable", v178, 1);
      v179 = j__strlen("private");
      sub_1A639D0(v46, "private", v179, 1);
      v180 = j__strlen("protected");
      sub_1A639D0(v46, "protected", v180, 1);
      v181 = j__strlen("public");
      sub_1A639D0(v46, "public", v181, 1);
      v182 = j__strlen("virtual");
      sub_1A639D0(v46, "virtual", v182, 1);
    }
    goto LABEL_190;
  }
  if ( a5 )
    goto LABEL_208;
LABEL_96:
  if ( v192 )
  {
    v96 = *(_QWORD *)(v16 + 552);
    v97 = (__int64 *)(v16 + 10072);
    if ( v96 && !*(_BYTE *)(v16 + 10112) )
    {
      *(_BYTE *)(v16 + 10112) = 1;
      ptr.m128_u64[0] = (unsigned __int64)&v217;
      ptr.m128_u64[1] = 0x400000000LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 272LL))(v96);
      v98 = (char **)ptr.m128_u64[0];
      v193 = ptr.m128_u64[0] + 8LL * ptr.m128_u32[2];
      if ( ptr.m128_u64[0] != v193 )
      {
        v208 = v46;
        v99 = v16 + 10112;
        v100 = v16;
        v209 = v12;
        v101 = (__int64 *)ptr.m128_u64[0];
        v102 = v211;
        v207 = v99;
        while ( 1 )
        {
          v213 = *v101;
          if ( !(unsigned __int8)sub_1841050(v97, &v213, &v214) )
            break;
          sub_18479A0(
            &v215,
            v214,
            (_QWORD *)(*(_QWORD *)(v100 + 10072) + 16LL * *(unsigned int *)(v100 + 10088)),
            (__int64)v97,
            1);
          v103 = *(unsigned int *)(v215.m128_u64[0] + 8);
LABEL_102:
          ++v101;
          *(_BYTE *)(*(_QWORD *)(v100 + 10096) + 16 * v103 + 8) = 1;
          if ( (__int64 *)v193 == v101 )
          {
            v46 = v208;
            v12 = v209;
            v98 = (char **)ptr.m128_u64[0];
            goto LABEL_112;
          }
        }
        v105 = *(unsigned int *)(v100 + 10088);
        v106 = v214;
        v107 = *(_DWORD *)(v100 + 10080) + 1;
        v108 = (unsigned int)(2 * v105);
        v109 = (unsigned int)(4 * v107);
        v215.m128_u64[0] = (unsigned __int64)v214;
        if ( (unsigned int)v109 >= 3 * (int)v105 )
        {
          v173 = 2 * v105;
        }
        else
        {
          v108 = (unsigned int)(v105 - *(_DWORD *)(v100 + 10084) - v107);
          if ( (unsigned int)v108 > (unsigned int)v105 >> 3 )
          {
LABEL_106:
            v110 = *v106 == -4096;
            *(_DWORD *)(v100 + 10080) = v107;
            if ( !v110 )
              --*(_DWORD *)(v100 + 10084);
            v111 = v213;
            LOBYTE(v102) = 0;
            *((_DWORD *)v106 + 2) = 0;
            v112 = *(unsigned int *)(v100 + 10088);
            *v106 = v111;
            v113 = (_QWORD *)(*(_QWORD *)(v100 + 10072) + 16 * v112);
            v214 = v106;
            sub_18479A0(&v215, v106, v113, (__int64)v97, 1);
            v72 = v215.m128_u64[0];
            v114 = v213;
            v115 = *(unsigned int *)(v100 + 10104);
            v71 = *(unsigned int *)(v100 + 10108);
            if ( v115 + 1 > v71 )
            {
              v211 = v213;
              v210 = v215.m128_u64[0];
              sub_2237220(v100 + 10096, v207, v115 + 1, 16);
              v114 = v211;
              v72 = v210;
              v115 = *(unsigned int *)(v100 + 10104);
            }
            v116 = (__int64 *)(*(_QWORD *)(v100 + 10096) + 16 * v115);
            *v116 = v114;
            v116[1] = v102;
            v103 = *(unsigned int *)(v100 + 10104);
            v70 = (unsigned int)(v103 + 1);
            *(_DWORD *)(v100 + 10104) = v70;
            *(_DWORD *)(v72 + 8) = v103;
            goto LABEL_102;
          }
          v173 = v105;
        }
        sub_187E210(v97, v173, v105, v108, v109, v104);
        sub_1841050(v97, &v213, &v215);
        v106 = (__int64 *)v215.m128_u64[0];
        v107 = *(_DWORD *)(v100 + 10080) + 1;
        goto LABEL_106;
      }
LABEL_112:
      if ( v98 != &v217 )
        free(v98);
    }
    sub_1A6A360(v46, (__int64)v97, v70, v71, v72, v73);
  }
  *v12 = v46;
LABEL_116:
  if ( v212 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v212 + 8LL))(v212);
  return v12;
}
