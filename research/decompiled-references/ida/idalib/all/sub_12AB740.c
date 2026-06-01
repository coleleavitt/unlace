void __fastcall sub_12AB740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void **a6)
{
  void **v6; // rbx
  _QWORD *v7; // r12
  void **v8; // r13
  __int64 *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i si128; // xmm1
  _QWORD *v13; // rax
  __int64 (__fastcall *v14)(void **, _QWORD, _QWORD); // r15
  __int64 v15; // r15
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  char *v19; // rdx
  char *v20; // r14
  char *v21; // r15
  unsigned __int64 v22; // rax
  char *v23; // rdx
  char *v24; // r14
  char *v25; // r15
  unsigned __int64 v26; // rax
  char *v27; // rdx
  char *v28; // r14
  char *v29; // r15
  unsigned __int64 v30; // rax
  char *v31; // rdx
  char *v32; // r14
  char *v33; // r15
  char *v34; // r14
  unsigned __int64 v35; // rax
  char *v36; // rcx
  char *v37; // r15
  char *v38; // rcx
  char *v39; // rbx
  const char *v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  char *v43; // rsi
  void ***v44; // r15
  void **v45; // r14
  __m128 v46; // xmm0
  void **v47; // rbx
  unsigned __int64 v48; // rax
  char *v49; // rdx
  char *v50; // r14
  char *v51; // r15
  unsigned __int64 v52; // rax
  char *v53; // rdx
  char *v54; // r14
  char *v55; // r15
  unsigned __int64 v56; // rax
  char *v57; // rdx
  char *v58; // r14
  char *v59; // r15
  void (__fastcall *v60)(void **, _QWORD *, const char *, size_t); // r14
  const char *v61; // rax
  size_t v62; // rcx
  const char *v63; // r15
  __int64 v64; // rbx
  const __m128i *v65; // r14
  __int64 v66; // r15
  __int64 v67; // r12
  __int64 v68; // rdx
  __int64 v69; // rsi
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rsi
  _QWORD *v73; // rbx
  void (__fastcall *v74)(_QWORD *); // rax
  __int64 v75; // r12
  __int64 v76; // rbp
  void *v77; // rdi
  _QWORD *v78; // rdi
  _QWORD *v79; // rdi
  void **v80; // r12
  void **v81; // rbp
  void *v82; // rdi
  _QWORD *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned __int64 v95; // rdx
  __int64 v96; // rax
  unsigned __int64 v97; // rdx
  __int64 v98; // r14
  __int64 v99; // rax
  char *v100; // rcx
  void **v101; // rdx
  void **v102; // r13
  char *v103; // rbx
  void **v104; // rcx
  __int64 v105; // rbp
  __int64 v106; // rax
  __int64 v107; // rdi
  char v108; // al
  __int64 *v109; // rax
  __int64 v110; // rdx
  const char **v111; // rax
  char v112; // dl
  const char *v113; // rax
  void **v114; // rax
  char v115; // cl
  const char **v116; // rsi
  char v117; // dl
  _QWORD *v118; // rax
  __int64 (__fastcall *v119)(void **, _QWORD, _QWORD); // r14
  __int64 v120; // rax
  unsigned __int8 *v121; // r14
  __int64 v122; // rdx
  __int64 v123; // rax
  unsigned __int8 *v124; // r14
  _BYTE *v125; // rsi
  signed __int64 v126; // r15
  _QWORD *v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  void **v132; // r14
  _BYTE *v133; // rdi
  __int64 v134; // rax
  void **v135; // r14
  __int64 v136; // rax
  void **v137; // rdx
  void **v138; // r15
  __int64 *v139; // r13
  void **v140; // rbp
  void **v141; // rbx
  void **v142; // rdi
  void **v143; // rdi
  void **v144; // r15
  void **v145; // rax
  void ***v146; // r15
  void **v147; // rax
  __int64 *v148; // r13
  void **v149; // rbp
  void ***v150; // rbx
  void **v151; // r14
  void **v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  unsigned __int64 v155; // rdx
  __int64 v156; // rax
  __int64 v157; // rax
  unsigned __int64 v158; // rdx
  __int64 v159; // rax
  unsigned __int64 v160; // rdx
  __int64 v161; // rax
  __int64 v162; // rax
  const char *v163; // r14
  __int64 v164; // rax
  unsigned __int64 v165; // rdx
  _QWORD *v166; // rax
  __int64 (__fastcall *v167)(void **, _QWORD, _QWORD); // r14
  _QWORD *v168; // rax
  __int64 (__fastcall *v169)(void **, _QWORD, _QWORD); // r15
  __int64 v170; // r15
  __int64 v171; // rcx
  unsigned __int64 v172; // rdx
  char v173; // dl
  void **v174; // rax
  _QWORD *v175; // rax
  __int64 (__fastcall *v176)(void **, _QWORD, _QWORD); // r14
  __int64 v177; // rdx
  int v178; // eax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rdx
  __int64 v182; // rax
  __int64 v183; // rbx
  __int64 v184; // rbp
  void *v185; // rdi
  size_t v186; // rdx
  __int64 v187; // rdx
  unsigned __int64 v188; // rbx
  __int64 v189; // rdi
  __int64 v190; // rdx
  int v191; // eax
  __int64 v192; // rax
  __int64 v193; // r15
  __int64 v194; // rdx
  __int64 v195; // r15
  __int64 *v196; // r13
  void **v197; // rbp
  __int64 v198; // rbx
  void *v199; // rdi
  __int64 *src; // [rsp+0h] [rbp-318h]
  void **srca; // [rsp+0h] [rbp-318h]
  void **srcb; // [rsp+0h] [rbp-318h]
  void **srcc; // [rsp+0h] [rbp-318h]
  void **srcd; // [rsp+0h] [rbp-318h]
  _BYTE *srce; // [rsp+0h] [rbp-318h]
  char v210; // [rsp+38h] [rbp-2E0h]
  __int64 *v211; // [rsp+38h] [rbp-2E0h]
  void **v212; // [rsp+40h] [rbp-2D8h] BYREF
  void **v213; // [rsp+48h] [rbp-2D0h]
  __int64 v214; // [rsp+50h] [rbp-2C8h]
  size_t v215; // [rsp+58h] [rbp-2C0h]
  __int64 v216; // [rsp+60h] [rbp-2B8h]
  size_t v217; // [rsp+68h] [rbp-2B0h]
  const char *v218; // [rsp+80h] [rbp-298h]
  const char *v219; // [rsp+A0h] [rbp-278h] BYREF
  __int64 v220; // [rsp+A8h] [rbp-270h]
  const char *v221; // [rsp+B0h] [rbp-268h]
  __int64 v222; // [rsp+B8h] [rbp-260h]
  __int16 v223; // [rsp+C0h] [rbp-258h]
  const char *v224; // [rsp+D0h] [rbp-248h] BYREF
  size_t v225; // [rsp+D8h] [rbp-240h]
  const char **v226; // [rsp+E0h] [rbp-238h]
  __int64 v227; // [rsp+E8h] [rbp-230h]
  __int16 v228; // [rsp+F0h] [rbp-228h]
  void *v229; // [rsp+100h] [rbp-218h] BYREF
  size_t n; // [rsp+108h] [rbp-210h]
  _QWORD v231[2]; // [rsp+110h] [rbp-208h] BYREF
  __int16 v232; // [rsp+120h] [rbp-1F8h]
  void *v233; // [rsp+130h] [rbp-1E8h] BYREF
  __int64 v234; // [rsp+138h] [rbp-1E0h]
  _BYTE v235[128]; // [rsp+140h] [rbp-1D8h] BYREF
  _BYTE ptr[24]; // [rsp+1C0h] [rbp-158h] BYREF
  __int64 v237; // [rsp+1D8h] [rbp-140h] BYREF
  void *v238; // [rsp+1E0h] [rbp-138h]
  __int16 v239; // [rsp+200h] [rbp-118h]

  v6 = a6;
  v7 = *(_QWORD **)(a1 + 24);
  v8 = &v233;
  v214 = a1;
  v9 = (__int64 *)ptr;
  src = (__int64 *)v7[1];
  v233 = v235;
  v234 = 0x1000000000LL;
  sub_21B7CF0(a6, 36);
  sub_21B7CF0(v6, 345);
  sub_21B7CF0(v6, 3480);
  v10 = v7[628];
  v11 = v7[627];
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  *(_QWORD *)ptr = &v237;
  v231[1] = v10;
  v13 = *v6;
  v229 = (void *)"--sysroot=";
  v14 = (__int64 (__fastcall *)(void **, _QWORD, _QWORD))v13[2];
  v232 = 1283;
  v231[0] = v11;
  *(__m128i *)&ptr[8] = si128;
  sub_22538C0(&v229, ptr);
  v15 = v14(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  if ( *(__int64 **)ptr != &v237 )
    free(*(void **)ptr);
  v16 = (unsigned int)v234;
  v17 = (unsigned int)v234 + 1LL;
  if ( v17 > HIDWORD(v234) )
  {
    sub_2237220(&v233, v235, v17, 8);
    v16 = (unsigned int)v234;
  }
  *((_QWORD *)v233 + v16) = v15;
  *(_DWORD *)ptr = 3132;
  LODWORD(v234) = v234 + 1;
  v18 = sub_21B6DA0(v6, ptr, 1);
  v19 = (char *)v6[1];
  v20 = &v19[8 * (unsigned int)v18];
  v21 = &v19[8 * HIDWORD(v18)];
  if ( v20 != v21 )
  {
    while ( !*(_QWORD *)v20 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v20, 3132) )
    {
      v20 += 8;
      if ( v21 == v20 )
        goto LABEL_9;
    }
    if ( v21 != v20 )
    {
      do
      {
        v84 = *(_QWORD *)v20;
        if ( *(_QWORD *)(*(_QWORD *)v20 + 16LL) )
          v84 = *(_QWORD *)(*(_QWORD *)v20 + 16LL);
        v20 += 8;
        *(_BYTE *)(v84 + 44) |= 1u;
        if ( v20 == v21 )
          break;
        while ( !*(_QWORD *)v20 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v20, 3132) )
        {
          v20 += 8;
          if ( v21 == v20 )
            goto LABEL_100;
        }
      }
      while ( v21 != v20 );
LABEL_100:
      v85 = (unsigned int)v234;
      v86 = (unsigned int)v234 + 1LL;
      if ( v86 > HIDWORD(v234) )
      {
        sub_2237220(&v233, v235, v86, 8);
        v85 = (unsigned int)v234;
      }
      *((_QWORD *)v233 + v85) = "-pie";
      LODWORD(v234) = v234 + 1;
    }
  }
LABEL_9:
  *(_DWORD *)ptr = 3299;
  v22 = sub_21B6DA0(v6, ptr, 1);
  v23 = (char *)v6[1];
  v24 = &v23[8 * (unsigned int)v22];
  v25 = &v23[8 * HIDWORD(v22)];
  if ( v24 != v25 )
  {
    while ( !*(_QWORD *)v24 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v24, 3299) )
    {
      v24 += 8;
      if ( v25 == v24 )
        goto LABEL_13;
    }
    if ( v25 != v24 )
    {
      do
      {
        v87 = *(_QWORD *)v24;
        if ( *(_QWORD *)(*(_QWORD *)v24 + 16LL) )
          v87 = *(_QWORD *)(*(_QWORD *)v24 + 16LL);
        v24 += 8;
        *(_BYTE *)(v87 + 44) |= 1u;
        if ( v24 == v25 )
          break;
        while ( !*(_QWORD *)v24 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v24, 3299) )
        {
          v24 += 8;
          if ( v25 == v24 )
            goto LABEL_112;
        }
      }
      while ( v25 != v24 );
LABEL_112:
      v88 = (unsigned int)v234;
      v89 = (unsigned int)v234 + 1LL;
      if ( v89 > HIDWORD(v234) )
      {
        sub_2237220(&v233, v235, v89, 8);
        v88 = (unsigned int)v234;
      }
      *((_QWORD *)v233 + v88) = "-static";
      LODWORD(v234) = v234 + 1;
    }
  }
LABEL_13:
  *(_DWORD *)ptr = 3203;
  v26 = sub_21B6DA0(v6, ptr, 1);
  v27 = (char *)v6[1];
  v28 = &v27[8 * (unsigned int)v26];
  v29 = &v27[8 * HIDWORD(v26)];
  if ( v28 != v29 )
  {
    while ( !*(_QWORD *)v28 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v28, 3203) )
    {
      v28 += 8;
      if ( v29 == v28 )
        goto LABEL_17;
    }
    if ( v29 != v28 )
    {
      do
      {
        v90 = *(_QWORD *)v28;
        if ( *(_QWORD *)(*(_QWORD *)v28 + 16LL) )
          v90 = *(_QWORD *)(*(_QWORD *)v28 + 16LL);
        v28 += 8;
        *(_BYTE *)(v90 + 44) |= 1u;
        if ( v28 == v29 )
          break;
        while ( !*(_QWORD *)v28 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v28, 3203) )
        {
          v28 += 8;
          if ( v29 == v28 )
            goto LABEL_124;
        }
      }
      while ( v29 != v28 );
LABEL_124:
      v91 = (unsigned int)v234;
      v92 = (unsigned int)v234 + 1LL;
      if ( v92 > HIDWORD(v234) )
      {
        sub_2237220(&v233, v235, v92, 8);
        v91 = (unsigned int)v234;
      }
      *((_QWORD *)v233 + v91) = "-export-dynamic";
      LODWORD(v234) = v234 + 1;
    }
  }
LABEL_17:
  *(_DWORD *)ptr = 3264;
  v30 = sub_21B6DA0(v6, ptr, 1);
  v31 = (char *)v6[1];
  v32 = &v31[8 * (unsigned int)v30];
  v33 = &v31[8 * HIDWORD(v30)];
  if ( v32 == v33 )
    goto LABEL_21;
  while ( !*(_QWORD *)v32 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v32, 3264) )
  {
    v32 += 8;
    if ( v33 == v32 )
      goto LABEL_21;
  }
  if ( v33 == v32 )
  {
LABEL_21:
    if ( *(_DWORD *)(a4 + 8) != 1 )
      goto LABEL_22;
    goto LABEL_139;
  }
  do
  {
    v93 = *(_QWORD *)v32;
    if ( *(_QWORD *)(*(_QWORD *)v32 + 16LL) )
      v93 = *(_QWORD *)(*(_QWORD *)v32 + 16LL);
    v32 += 8;
    *(_BYTE *)(v93 + 44) |= 1u;
    if ( v32 == v33 )
      break;
    while ( !*(_QWORD *)v32 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v32, 3264) )
    {
      v32 += 8;
      if ( v33 == v32 )
        goto LABEL_136;
    }
  }
  while ( v33 != v32 );
LABEL_136:
  v94 = (unsigned int)v234;
  v95 = (unsigned int)v234 + 1LL;
  if ( v95 > HIDWORD(v234) )
  {
    sub_2237220(&v233, v235, v95, 8);
    v94 = (unsigned int)v234;
  }
  *((_QWORD *)v233 + v94) = "--shared";
  LODWORD(v234) = v234 + 1;
  if ( *(_DWORD *)(a4 + 8) == 1 )
  {
LABEL_139:
    v96 = (unsigned int)v234;
    v97 = (unsigned int)v234 + 1LL;
    if ( v97 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, v97, 8);
      v96 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v96) = "-o";
    v98 = *(_QWORD *)a4;
    LODWORD(v234) = v234 + 1;
    v99 = (unsigned int)v234;
    if ( (unsigned __int64)(unsigned int)v234 + 1 > HIDWORD(v234) )
    {
      sub_2237220(&v233, v235, (unsigned int)v234 + 1LL, 8);
      v99 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v99) = v98;
    LODWORD(v234) = v234 + 1;
  }
LABEL_22:
  v210 = sub_21B7850(v6, 888, 1194, 0);
  if ( !(unsigned __int8)sub_21B7850(v6, 1894, 1447, 1) )
  {
    v34 = (char *)&byte_22F0C30;
    if ( !v210 )
      goto LABEL_24;
    goto LABEL_254;
  }
  v163 = "--lto=thin";
  if ( *((_DWORD *)src + 10) != 2 )
    v163 = "--lto=full";
  v164 = (unsigned int)v234;
  v165 = (unsigned int)v234 + 1LL;
  if ( v165 > HIDWORD(v234) )
  {
    sub_2237220(&v233, v235, v165, 8);
    v164 = (unsigned int)v234;
  }
  *((_QWORD *)v233 + v164) = v163;
  v34 = (char *)&byte_22F0C30;
  LODWORD(v234) = v234 + 1;
  if ( v210 )
  {
LABEL_254:
    v219 = "-enable-jmc-instrument";
    v226 = (const char **)"-enable-jmc-instrument";
    v229 = (void *)" ";
    v224 = " ";
    v227 = v220;
    v166 = *v6;
    v225 = n;
    v228 = 771;
    *(_QWORD *)ptr = &v237;
    v167 = (__int64 (__fastcall *)(void **, _QWORD, _QWORD))v166[2];
    *(_QWORD *)&ptr[8] = 0;
    *(_QWORD *)&ptr[16] = 256;
    sub_22538C0(&v224, ptr);
    v34 = (char *)v167(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    if ( *(__int64 **)ptr != &v237 )
      free(*(void **)ptr);
  }
LABEL_24:
  *(_DWORD *)ptr = 530;
  v35 = sub_21B6DA0(v6, ptr, 1);
  v36 = (char *)v6[1];
  v37 = &v36[8 * (unsigned int)v35];
  v38 = &v36[8 * HIDWORD(v35)];
  if ( v37 != v38 )
  {
    v212 = v6;
    v39 = v38;
    while ( !*(_QWORD *)v37 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v37, 530) )
    {
      v37 += 8;
      if ( v39 == v37 )
      {
        v6 = v212;
        goto LABEL_30;
      }
    }
    v100 = v39;
    v6 = v212;
    if ( v100 != v37 )
    {
      v101 = (void **)ptr;
      v102 = v212;
      v103 = v100;
      v104 = &v233;
      do
      {
        v105 = *(_QWORD *)v37;
        v106 = *(_QWORD *)(*(_QWORD *)v37 + 16LL);
        if ( !v106 )
          v106 = *(_QWORD *)v37;
        v37 += 8;
        *(_BYTE *)(v106 + 44) |= 1u;
        if ( v37 == v103 )
          break;
        while ( 1 )
        {
          v107 = *(_QWORD *)v37;
          if ( *(_QWORD *)v37 )
          {
            v213 = v104;
            v212 = v101;
            v108 = sub_21B9810(v107, 530);
            v101 = v212;
            v104 = v213;
            if ( v108 )
              break;
          }
          v37 += 8;
          if ( v103 == v37 )
            goto LABEL_154;
        }
      }
      while ( v103 != v37 );
LABEL_154:
      v109 = (__int64 *)v101;
      v110 = v105;
      v6 = v102;
      v8 = v104;
      v9 = v109;
      v111 = *(const char ***)(v110 + 48);
      v112 = 3;
      v113 = *v111;
      if ( !*v113 )
      {
        v113 = v218;
        v112 = 1;
      }
      v221 = v113;
      v219 = "-crash-diagnostics-dir=";
      LOBYTE(v223) = 3;
      HIBYTE(v223) = v112;
      if ( *v34 )
      {
        v115 = 2;
        v229 = v34;
        v231[0] = " ";
        v114 = &v229;
        v232 = 771;
      }
      else
      {
        v114 = (void **)" ";
        v229 = (void *)" ";
        v232 = 259;
        v215 = n;
        v115 = 3;
      }
      if ( v112 == 1 )
      {
        v117 = 3;
        v216 = v220;
        v116 = (const char **)"-crash-diagnostics-dir=";
      }
      else
      {
        v116 = &v219;
        v117 = 2;
      }
      v224 = (const char *)v114;
      v226 = v116;
      v225 = v215;
      LOBYTE(v228) = v115;
      v227 = v216;
      v118 = *v6;
      HIBYTE(v228) = v117;
      *(_QWORD *)ptr = v9 + 3;
      v119 = (__int64 (__fastcall *)(void **, _QWORD, _QWORD))v118[2];
      *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      sub_22538C0(&v224, v9);
      v34 = (char *)v119(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
      if ( *(__int64 **)ptr != v9 + 3 )
        free(*(void **)ptr);
    }
  }
LABEL_30:
  v40 = sub_11BCAF0((__int64)v6, src);
  if ( v41 )
  {
    v221 = v40;
    v219 = "-threads=";
    v222 = v41;
    v223 = 1283;
    if ( *v34 )
    {
      v173 = 2;
      v229 = v34;
      v232 = 771;
      v231[0] = " ";
      v174 = &v229;
    }
    else
    {
      v173 = 3;
      v174 = (void **)" ";
      v229 = (void *)" ";
      v232 = 259;
      v217 = n;
    }
    v224 = (const char *)v174;
    v226 = &v219;
    v225 = v217;
    v175 = *v6;
    LOBYTE(v228) = v173;
    *(_QWORD *)ptr = v9 + 3;
    v176 = (__int64 (__fastcall *)(void **, _QWORD, _QWORD))v175[2];
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v227 = 0;
    HIBYTE(v228) = 2;
    sub_22538C0(&v224, v9);
    v34 = (char *)v176(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    if ( *(__int64 **)ptr != v9 + 3 )
      free(*(void **)ptr);
  }
  if ( *v34 )
  {
    v229 = "-lto-debug-options=";
    v168 = *v6;
    v231[0] = v34;
    v232 = 771;
    *(_QWORD *)ptr = v9 + 3;
    v169 = (__int64 (__fastcall *)(void **, _QWORD, _QWORD))v168[2];
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    sub_22538C0(&v229, v9);
    v170 = v169(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    if ( *(__int64 **)ptr != v9 + 3 )
      free(*(void **)ptr);
    v171 = (unsigned int)v234;
    v172 = (unsigned int)v234 + 1LL;
    if ( v172 > HIDWORD(v234) )
    {
      sub_2237220(v8, v8 + 2, v172, 8);
      v171 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v171) = v170;
    LODWORD(v234) = v234 + 1;
  }
  *(_QWORD *)ptr = 0xBDD00000BF0LL;
  v42 = sub_21B6DA0(v6, v9, 2);
  v43 = (char *)v6[1];
  *(_QWORD *)&ptr[16] = 0xBDD00000BF0LL;
  v44 = (void ***)&v43[8 * (unsigned int)v42];
  v45 = (void **)&v43[8 * HIDWORD(v42)];
  v212 = v45;
  v46 = _mm_loadh_ps((const double *)&v212);
  *(__m128 *)ptr = v46;
  if ( v44 == (void ***)v45 )
    goto LABEL_39;
  v212 = v6;
  while ( 1 )
  {
    v47 = *v44;
    if ( *v44 )
    {
      if ( (unsigned __int8)sub_21B9810(*v44, 3056) || (unsigned __int8)sub_21B9810(v47, 3037) )
        break;
    }
    *(_QWORD *)ptr = ++v44;
    if ( v45 == (void **)v44 )
    {
      v6 = v212;
      goto LABEL_39;
    }
  }
  v6 = v212;
  v212 = v45;
  *(_QWORD *)&ptr[16] = 0xBDD00000BF0LL;
  v46 = _mm_loadh_ps((const double *)&v212);
  *(__m128 *)ptr = v46;
  if ( v45 == (void **)v44 )
  {
LABEL_39:
    (*(void (__fastcall **)(_QWORD *, void **, void **, const char *, const char *))(*v7 + 824LL))(
      v7,
      v6,
      v8,
      "-l",
      &byte_22F0C30);
  }
  else
  {
    do
    {
      v145 = *v44;
      if ( (*v44)[2] )
        v145 = (void **)(*v44)[2];
      v146 = v44 + 1;
      *((_BYTE *)v145 + 44) |= 1u;
      *(_QWORD *)ptr = v146;
      if ( v146 == (void ***)v45 )
        break;
      v147 = v8;
      v148 = v9;
      v149 = v6;
      v150 = (void ***)v45;
      v151 = v147;
      while ( 1 )
      {
        if ( *v146 )
        {
          v212 = *v146;
          if ( (unsigned __int8)sub_21B9810(v212, 3056) || (unsigned __int8)sub_21B9810(v212, 3037) )
            break;
        }
        *(_QWORD *)ptr = ++v146;
        if ( v150 == v146 )
        {
          v6 = v149;
          v9 = v148;
          v8 = v151;
          goto LABEL_40;
        }
      }
      v44 = *(void ****)ptr;
      v152 = v151;
      v45 = (void **)v150;
      v6 = v149;
      v9 = v148;
      v8 = v152;
    }
    while ( *(void ***)ptr != v45 );
  }
LABEL_40:
  *(_QWORD *)ptr = 0xF0000089CLL;
  *(_QWORD *)&ptr[8] = 0xD1700000CF9LL;
  sub_21B6650(v6, v8, v9, 4);
  *(_DWORD *)ptr = 3519;
  v48 = sub_21B6DA0(v6, v9, 1);
  v49 = (char *)v6[1];
  v50 = &v49[8 * (unsigned int)v48];
  v51 = &v49[8 * HIDWORD(v48)];
  if ( v50 != v51 )
  {
    while ( !*(_QWORD *)v50 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v50, 3519) )
    {
      v50 += 8;
      if ( v51 == v50 )
        goto LABEL_44;
    }
    if ( v51 != v50 )
    {
      do
      {
        v153 = *(_QWORD *)v50;
        if ( *(_QWORD *)(*(_QWORD *)v50 + 16LL) )
          v153 = *(_QWORD *)(*(_QWORD *)v50 + 16LL);
        v50 += 8;
        *(_BYTE *)(v153 + 44) |= 1u;
        if ( v50 == v51 )
          break;
        while ( !*(_QWORD *)v50 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v50, 3519) )
        {
          v50 += 8;
          if ( v51 == v50 )
            goto LABEL_225;
        }
      }
      while ( v51 != v50 );
LABEL_225:
      v154 = (unsigned int)v234;
      v155 = (unsigned int)v234 + 1LL;
      if ( v155 > HIDWORD(v234) )
      {
        sub_2237220(v8, v8 + 2, v155, 8);
        v154 = (unsigned int)v234;
      }
      *((_QWORD *)v233 + v154) = "--no-demangle";
      LODWORD(v234) = v234 + 1;
    }
  }
LABEL_44:
  sub_11C3660((__int64)v7, a5, (__int64)v6, (__int64)v8, a3);
  *(_DWORD *)ptr = 3178;
  v52 = sub_21B6DA0(v6, v9, 1);
  v53 = (char *)v6[1];
  v54 = &v53[8 * (unsigned int)v52];
  v55 = &v53[8 * HIDWORD(v52)];
  if ( v54 == v55 )
    goto LABEL_48;
  while ( !*(_QWORD *)v54 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v54, 3178) )
  {
    v54 += 8;
    if ( v55 == v54 )
      goto LABEL_48;
  }
  if ( v54 == v55 )
  {
LABEL_48:
    if ( v210 )
    {
LABEL_240:
      v159 = (unsigned int)v234;
      v160 = (unsigned int)v234 + 1LL;
      if ( v160 > HIDWORD(v234) )
      {
        sub_2237220(v8, v8 + 2, v160, 8);
        v159 = (unsigned int)v234;
      }
      *((_QWORD *)v233 + v159) = "--whole-archive";
      LODWORD(v234) = v234 + 1;
      v161 = (unsigned int)v234;
      if ( (unsigned __int64)(unsigned int)v234 + 1 > HIDWORD(v234) )
      {
        sub_2237220(v8, v8 + 2, (unsigned int)v234 + 1LL, 8);
        v161 = (unsigned int)v234;
      }
      *((_QWORD *)v233 + v161) = "-lSceDbgJmc";
      LODWORD(v234) = v234 + 1;
      v162 = (unsigned int)v234;
      if ( (unsigned __int64)(unsigned int)v234 + 1 > HIDWORD(v234) )
      {
        sub_2237220(v8, v8 + 2, (unsigned int)v234 + 1LL, 8);
        v162 = (unsigned int)v234;
      }
      *((_QWORD *)v233 + v162) = "--no-whole-archive";
      LODWORD(v234) = v234 + 1;
    }
  }
  else
  {
    do
    {
      v156 = *(_QWORD *)v54;
      if ( *(_QWORD *)(*(_QWORD *)v54 + 16LL) )
        v156 = *(_QWORD *)(*(_QWORD *)v54 + 16LL);
      v54 += 8;
      *(_BYTE *)(v156 + 44) |= 1u;
      if ( v54 == v55 )
        break;
      while ( !*(_QWORD *)v54 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v54, 3178) )
      {
        v54 += 8;
        if ( v55 == v54 )
          goto LABEL_237;
      }
    }
    while ( v55 != v54 );
LABEL_237:
    v157 = (unsigned int)v234;
    v158 = (unsigned int)v234 + 1LL;
    if ( v158 > HIDWORD(v234) )
    {
      sub_2237220(v8, v8 + 2, v158, 8);
      v157 = (unsigned int)v234;
    }
    *((_QWORD *)v233 + v157) = "-lpthread";
    LODWORD(v234) = v234 + 1;
    if ( v210 )
      goto LABEL_240;
  }
  *(_DWORD *)ptr = 1916;
  v56 = sub_21B6DA0(v6, v9, 1);
  v57 = (char *)v6[1];
  v58 = &v57[8 * (unsigned int)v56];
  v59 = &v57[8 * HIDWORD(v56)];
  if ( v58 != v59 )
  {
    while ( !*(_QWORD *)v58 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v58, 1916) )
    {
      v58 += 8;
      if ( v59 == v58 )
        goto LABEL_53;
    }
    if ( v59 != v58 )
    {
      do
      {
        v120 = *(_QWORD *)v58;
        if ( *(_QWORD *)(*(_QWORD *)v58 + 16LL) )
          v120 = *(_QWORD *)(*(_QWORD *)v58 + 16LL);
        v58 += 8;
        *(_BYTE *)(v120 + 44) |= 1u;
        if ( v58 == v59 )
          break;
        while ( !*(_QWORD *)v58 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v58, 1916) )
        {
          v58 += 8;
          if ( v59 == v58 )
            goto LABEL_171;
        }
      }
      while ( v58 != v59 );
LABEL_171:
      sub_FC70B0((__int64)v9, *src, 0, 495);
      v121 = *(unsigned __int8 **)ptr;
      if ( !*(_QWORD *)ptr )
      {
        v190 = *(_QWORD *)&ptr[8];
        v191 = *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL);
        if ( v191 )
        {
          v192 = (unsigned int)(v191 - 1);
          *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v192;
          v121 = *(unsigned __int8 **)(v190 + 8 * v192 + 14848);
          v193 = *((unsigned int *)v121 + 134);
          *v121 = 0;
          v194 = *((_QWORD *)v121 + 66);
          *((_DWORD *)v121 + 106) = 0;
          v195 = v194 + (v193 << 6);
          if ( v194 != v195 )
          {
            srcd = v8;
            v196 = v9;
            v197 = v6;
            v198 = v194;
            do
            {
              while ( 1 )
              {
                v195 -= 64;
                v199 = *(void **)(v195 + 24);
                if ( v199 == (void *)(v195 + 40) )
                  break;
                operator delete(v199);
                if ( v198 == v195 )
                  goto LABEL_302;
              }
            }
            while ( v198 != v195 );
LABEL_302:
            v6 = v197;
            v9 = v196;
            v8 = srcd;
          }
          *((_DWORD *)v121 + 134) = 0;
        }
        else
        {
          v121 = (unsigned __int8 *)operator new(0x3A0u);
          *v121 = 0;
          *((_QWORD *)v121 + 12) = v121 + 112;
          *((_QWORD *)v121 + 16) = v121 + 144;
          *((_QWORD *)v121 + 20) = v121 + 176;
          *((_QWORD *)v121 + 24) = v121 + 208;
          *((_QWORD *)v121 + 28) = v121 + 240;
          *((_QWORD *)v121 + 32) = v121 + 272;
          *((_QWORD *)v121 + 36) = v121 + 304;
          *((_QWORD *)v121 + 40) = v121 + 336;
          *((_QWORD *)v121 + 44) = v121 + 368;
          *((_QWORD *)v121 + 48) = v121 + 400;
          *((_QWORD *)v121 + 52) = v121 + 432;
          *((_QWORD *)v121 + 13) = 0;
          v121[112] = 0;
          *((_QWORD *)v121 + 17) = 0;
          v121[144] = 0;
          *((_QWORD *)v121 + 21) = 0;
          v121[176] = 0;
          *((_QWORD *)v121 + 25) = 0;
          v121[208] = 0;
          *((_QWORD *)v121 + 29) = 0;
          v121[240] = 0;
          *((_QWORD *)v121 + 33) = 0;
          v121[272] = 0;
          *((_QWORD *)v121 + 37) = 0;
          v121[304] = 0;
          *((_QWORD *)v121 + 41) = 0;
          v121[336] = 0;
          *((_QWORD *)v121 + 45) = 0;
          v121[368] = 0;
          *((_QWORD *)v121 + 49) = 0;
          v121[400] = 0;
          *((_QWORD *)v121 + 53) = 0x800000000LL;
          *((_QWORD *)v121 + 66) = v121 + 544;
          *((_QWORD *)v121 + 67) = 0x600000000LL;
        }
        *(_QWORD *)ptr = v121;
      }
      v121[*v121 + 1] = 1;
      v122 = *(_QWORD *)ptr;
      v123 = (unsigned __int8)**(_BYTE **)ptr;
      **(_BYTE **)ptr = v123 + 1;
      *(_QWORD *)(v122 + 8 * v123 + 16) = "-fuse-ld";
      v124 = *(unsigned __int8 **)ptr;
      v125 = (_BYTE *)v7[2];
      v126 = v7[3];
      if ( !*(_QWORD *)ptr )
      {
        v177 = *(_QWORD *)&ptr[8];
        v178 = *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL);
        if ( v178 )
        {
          v179 = (unsigned int)(v178 - 1);
          *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v179;
          v124 = *(unsigned __int8 **)(v177 + 8 * v179 + 14848);
          v180 = *((unsigned int *)v124 + 134);
          *v124 = 0;
          v181 = *((_QWORD *)v124 + 66);
          *((_DWORD *)v124 + 106) = 0;
          v182 = v181 + (v180 << 6);
          if ( v181 != v182 )
          {
            srcc = v6;
            v183 = v182;
            v211 = v9;
            v184 = v181;
            v212 = v8;
            do
            {
              while ( 1 )
              {
                v183 -= 64;
                v185 = *(void **)(v183 + 24);
                if ( v185 == (void *)(v183 + 40) )
                  break;
                operator delete(v185);
                if ( v184 == v183 )
                  goto LABEL_277;
              }
            }
            while ( v184 != v183 );
LABEL_277:
            v6 = srcc;
            v9 = v211;
            v8 = v212;
          }
          *((_DWORD *)v124 + 134) = 0;
        }
        else
        {
          srce = (_BYTE *)v7[2];
          v124 = (unsigned __int8 *)operator new(0x3A0u);
          *v124 = 0;
          *((_QWORD *)v124 + 12) = v124 + 112;
          *((_QWORD *)v124 + 16) = v124 + 144;
          *((_QWORD *)v124 + 20) = v124 + 176;
          *((_QWORD *)v124 + 24) = v124 + 208;
          *((_QWORD *)v124 + 28) = v124 + 240;
          *((_QWORD *)v124 + 32) = v124 + 272;
          *((_QWORD *)v124 + 36) = v124 + 304;
          *((_QWORD *)v124 + 40) = v124 + 336;
          *((_QWORD *)v124 + 44) = v124 + 368;
          *((_QWORD *)v124 + 48) = v124 + 400;
          *((_QWORD *)v124 + 52) = v124 + 432;
          *((_QWORD *)v124 + 13) = 0;
          v124[112] = 0;
          *((_QWORD *)v124 + 17) = 0;
          v124[144] = 0;
          *((_QWORD *)v124 + 21) = 0;
          v124[176] = 0;
          *((_QWORD *)v124 + 25) = 0;
          v124[208] = 0;
          *((_QWORD *)v124 + 29) = 0;
          v124[240] = 0;
          *((_QWORD *)v124 + 33) = 0;
          v124[272] = 0;
          *((_QWORD *)v124 + 37) = 0;
          v124[304] = 0;
          *((_QWORD *)v124 + 41) = 0;
          v124[336] = 0;
          *((_QWORD *)v124 + 45) = 0;
          v124[368] = 0;
          *((_QWORD *)v124 + 49) = 0;
          v124[400] = 0;
          *((_QWORD *)v124 + 53) = 0x800000000LL;
          v125 = srce;
          *((_QWORD *)v124 + 66) = v124 + 544;
          *((_QWORD *)v124 + 67) = 0x600000000LL;
        }
        *(_QWORD *)ptr = v124;
      }
      v124[*v124 + 1] = 0;
      v229 = v231;
      if ( &v125[v126] && !v125 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v126 > 0xF )
      {
        if ( v126 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v127 = (_QWORD *)operator new(v126 + 1);
        v231[0] = v126;
        v229 = v127;
      }
      else
      {
        if ( v126 == 1 )
        {
          LOBYTE(v231[0]) = *v125;
          v127 = v231;
          goto LABEL_178;
        }
        v127 = v231;
        if ( !v126 )
        {
LABEL_178:
          n = v126;
          *((_BYTE *)v127 + v126) = 0;
          v128 = *(_QWORD *)ptr;
          v129 = (unsigned __int8)**(_BYTE **)ptr;
          **(_BYTE **)ptr = v129 + 1;
          v130 = (unsigned __int8)v129;
          v131 = 32 * (v129 + 3);
          v132 = (void **)(v128 + v131);
          v133 = *(_BYTE **)(v128 + v131);
          if ( v229 == v231 )
          {
            v186 = n;
            if ( n )
            {
              if ( n == 1 )
                *v133 = v231[0];
              else
                memcpy(v133, v229, n);
              v186 = n;
              v133 = *v132;
            }
            v132[1] = (void *)v186;
            v133[v186] = 0;
            v133 = v229;
          }
          else
          {
            if ( v133 == (_BYTE *)(v128 + v131 + 16) )
            {
              *v132 = v229;
              v132[1] = (void *)n;
              v132[2] = (void *)v231[0];
            }
            else
            {
              v134 = *(_QWORD *)(v128 + 32 * v130 + 112);
              *v132 = v229;
              v132[1] = (void *)n;
              v132[2] = (void *)v231[0];
              if ( v133 )
              {
                v229 = v133;
                v231[0] = v134;
                goto LABEL_182;
              }
            }
            v133 = v231;
            v229 = v231;
          }
LABEL_182:
          n = 0;
          *v133 = 0;
          if ( v229 != v231 )
            operator delete(v229);
          if ( (_BYTE)v239 )
          {
            sub_FC7790(*(__int64 *)&ptr[16], v9, SHIBYTE(v239));
            *(_QWORD *)&ptr[16] = 0;
            v239 = 0;
          }
          if ( v238 != v9 + 6 )
            operator delete(v238);
          v135 = *(void ***)ptr;
          if ( *(_QWORD *)ptr )
          {
            v136 = *(_QWORD *)&ptr[8];
            if ( *(_QWORD *)&ptr[8] )
            {
              if ( *(_QWORD *)ptr < *(_QWORD *)&ptr[8]
                || *(_QWORD *)ptr > (unsigned __int64)(*(_QWORD *)&ptr[8] + 14848LL) )
              {
                v137 = *(void ***)(*(_QWORD *)ptr + 528LL);
                v138 = &v137[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)ptr + 536LL)];
                if ( v137 != v138 )
                {
                  srca = v8;
                  v139 = v9;
                  v140 = v6;
                  v141 = *(void ***)(*(_QWORD *)ptr + 528LL);
                  do
                  {
                    while ( 1 )
                    {
                      v138 -= 8;
                      v142 = (void **)v138[3];
                      if ( v142 == v138 + 5 )
                        break;
                      operator delete(v142);
                      if ( v141 == v138 )
                        goto LABEL_195;
                    }
                  }
                  while ( v141 != v138 );
LABEL_195:
                  v6 = v140;
                  v138 = (void **)v135[66];
                  v9 = v139;
                  v8 = srca;
                }
                if ( v138 != v135 + 68 )
                  free(v138);
                v143 = (void **)v135[52];
                v144 = v135 + 52;
                if ( v143 != v135 + 54 )
                  free(v143);
                srcb = v135 + 12;
                do
                {
                  while ( 1 )
                  {
                    v144 -= 4;
                    if ( *v144 == v144 + 2 )
                      break;
                    operator delete(*v144);
                    if ( v144 == srcb )
                      goto LABEL_203;
                  }
                }
                while ( v144 != srcb );
LABEL_203:
                operator delete(v135, 0x3A0u);
              }
              else
              {
                v187 = *(unsigned int *)(*(_QWORD *)&ptr[8] + 14976LL);
                *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v187 + 1;
                *(_QWORD *)(v136 + 8 * v187 + 14848) = v135;
              }
            }
          }
          goto LABEL_53;
        }
      }
      memcpy(v127, v125, v126);
      v127 = v229;
      goto LABEL_178;
    }
  }
LABEL_53:
  v60 = *(void (__fastcall **)(void **, _QWORD *, const char *, size_t))(*v7 + 816LL);
  v61 = (const char *)(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 808LL))(v7);
  v62 = 0;
  v63 = v61;
  if ( v61 )
    v62 = strlen(v61);
  v60(&v229, v7, v63, v62);
  sub_112D530(v9, (__int64)v7, (char *)v229);
  v64 = (*((__int64 (__fastcall **)(void **, _QWORD, _QWORD))*v6 + 2))(v6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  if ( *(__int64 **)ptr != v9 + 2 )
    operator delete(*(void **)ptr);
  v65 = *(const __m128i **)a5;
  v66 = *(unsigned int *)(a5 + 8);
  v67 = operator new(0x208u);
  sub_1106AE0(v67, a3, v214, 0, (__int64)"@", v64, (__int64)v8, v65, v66, a4, 1, 0);
  *(_QWORD *)ptr = v67;
  v68 = *(unsigned int *)(a2 + 160);
  v69 = v68 + 1;
  v70 = *(_DWORD *)(a2 + 160);
  if ( v68 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v188 = *(_QWORD *)(a2 + 152);
    v189 = a2 + 152;
    if ( v188 > (unsigned __int64)v9 || (unsigned __int64)v9 >= v188 + 8 * v68 )
    {
      sub_11673D0(v189, v69, v46, *(double *)si128.m128i_i64);
      v68 = *(unsigned int *)(a2 + 160);
      v71 = *(_QWORD *)(a2 + 152);
      v70 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v189, v69, v46, *(double *)si128.m128i_i64);
      v71 = *(_QWORD *)(a2 + 152);
      v68 = *(unsigned int *)(a2 + 160);
      v9 = (__int64 *)((char *)v9 + v71 - v188);
      v70 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v71 = *(_QWORD *)(a2 + 152);
  }
  v72 = *v9;
  *v9 = 0;
  *(_QWORD *)(v71 + 8 * v68) = v72;
  v73 = *(_QWORD **)ptr;
  *(_DWORD *)(a2 + 160) = v70 + 1;
  if ( v73 )
  {
    v74 = *(void (__fastcall **)(_QWORD *))(*v73 + 8LL);
    if ( v74 == sub_10D4290 )
    {
      v75 = v73[58];
      v76 = v73[57];
      *v73 = &off_2BA8F30;
      if ( v75 != v76 )
      {
        do
        {
          if ( *(_BYTE *)(v76 + 32) && *(_QWORD *)v76 != v76 + 16 )
            operator delete(*(void **)v76);
          v76 += 40;
        }
        while ( v75 != v76 );
        v76 = v73[57];
      }
      if ( v76 )
        operator delete((void *)v76);
      v77 = (void *)v73[54];
      if ( v77 )
        operator delete(v77);
      v78 = (_QWORD *)v73[50];
      if ( v78 != v73 + 52 )
        operator delete(v78);
      v79 = (_QWORD *)v73[32];
      if ( v79 != v73 + 34 )
        free(v79);
      v80 = (void **)v73[29];
      v81 = (void **)v73[28];
      if ( v80 != v81 )
      {
        do
        {
          while ( *v81 != v81 + 2 )
          {
            operator delete(*v81);
            v81 += 4;
            if ( v81 == v80 )
            {
              v81 = (void **)v73[28];
              goto LABEL_79;
            }
          }
          v81 += 4;
        }
        while ( v80 != v81 );
        v81 = (void **)v73[28];
      }
LABEL_79:
      if ( v81 )
        operator delete(v81);
      v82 = (void *)v73[25];
      if ( v82 )
        operator delete(v82);
      v83 = (_QWORD *)v73[7];
      if ( v83 != v73 + 9 )
        free(v83);
      operator delete(v73, 0x208u);
    }
    else
    {
      v74(v73);
    }
  }
  if ( v229 != v231 )
    operator delete(v229);
  if ( v233 != v8 + 2 )
    free(v233);
}
