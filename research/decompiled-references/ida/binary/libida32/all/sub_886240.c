__int64 __fastcall sub_886240(char **a1, __int64 *a2, __int64 *a3, char a4, char a5, __int64 *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r15
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // rbx
  __int64 v33; // rax
  unsigned __int64 v34; // r13
  void *v35; // rdi
  __int64 v36; // rax
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __int64 v39; // rdx
  void *v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // r14
  __int64 v43; // r13
  __int64 v44; // r15
  __int64 *v45; // rax
  char *v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // r14
  __m128i v49; // kr00_16
  int v50; // r13d
  char *v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // r14
  char *v54; // rax
  void *v55; // rdi
  __int64 v56; // rax
  __m128i v57; // xmm0
  int *p_tm_wday; // rdi
  __int64 v59; // rcx
  __m128i v60; // xmm2
  __m128i v61; // xmm3
  time_t v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  void *v67; // rdi
  char **v68; // rdx
  char *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  const char *v76; // rdi
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  int v80; // ecx
  __int16 v81; // dx
  __m128i v82; // xmm0
  int v83; // edx
  int v84; // edx
  int v85; // edx
  int v86; // edx
  __int64 v87; // rdx
  void *v88; // rdx
  void *v89; // rsi
  void *v90; // rdx
  __m128i v91; // xmm0
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rdx
  time_t v96; // rdx
  void *v97; // rdi
  __int64 v98; // rdx
  char *v99; // rdx
  __int64 v100; // r13
  __int64 v101; // r15
  char *v102; // rax
  void *v103; // rdi
  char *v104; // rdi
  __m128i v105; // xmm0
  __int64 v106; // r15
  __int64 v107; // r13
  __int64 v108; // r12
  char *v109; // rax
  void *v110; // rdi
  char *v111; // rdx
  __int64 v112; // r14
  __int64 m; // rbx
  char *v114; // rax
  void *v115; // rdi
  void *v116; // rdi
  void *v117; // rdi
  char *v119; // rsi
  __m128i v120; // xmm0
  const void *v121; // rbx
  __int64 v122; // rax
  void *v123; // rdi
  const void *v124; // r15
  unsigned __int64 v125; // r13
  __int64 v126; // r15
  char *v127; // rsi
  __m128i v128; // xmm0
  __int64 v129; // rsi
  __m128i si128; // xmm0
  __int64 v131; // rsi
  __m128i v132; // xmm0
  __int64 v133; // rsi
  __m128i v134; // xmm0
  char *v135; // rsi
  __m128i v136; // xmm0
  char *v137; // rsi
  __m128i v138; // xmm0
  char *v139; // rsi
  __m128i v140; // xmm0
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 i; // rax
  __int64 v149; // rcx
  __int64 v150; // rax
  const char *v151; // rdi
  char *v152; // rsi
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rax
  char *v158; // rsi
  char *v159; // r13
  void **v160; // rdi
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rax
  char *v166; // r13
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  int v171; // r9d
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  int v175; // r9d
  char v176; // r13
  int *v177; // rsi
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rax
  const char *v183; // r13
  const char *v184; // rdi
  __int64 v185; // rcx
  __int64 k; // rax
  __int64 v187; // rdx
  __int64 v188; // rax
  const char *v189; // r13
  _BYTE *v190; // r8
  __int64 v191; // r9
  char v192; // al
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  int v196; // r9d
  __int64 v197; // rax
  char *v198; // rdi
  __int16 v199; // ax
  __int64 v200; // rax
  __int64 v201; // rax
  char *v202; // rax
  void *v203; // r13
  __int64 v204; // rdx
  size_t v205; // r15
  __int64 j; // rax
  __int64 v207; // rdx
  __int64 v208; // rax
  char *v209; // rdi
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 v214; // rax
  const char *v215; // rdi
  int v216; // eax
  __int64 v217; // [rsp-10h] [rbp-2E0h]
  __int64 v218; // [rsp-10h] [rbp-2E0h]
  __int64 v219; // [rsp-10h] [rbp-2E0h]
  __int64 v221; // [rsp+70h] [rbp-260h]
  __int64 v222; // [rsp+70h] [rbp-260h]
  __int64 *v223; // [rsp+70h] [rbp-260h]
  char *v224; // [rsp+70h] [rbp-260h]
  const void **v225; // [rsp+70h] [rbp-260h]
  __int64 *na; // [rsp+78h] [rbp-258h]
  size_t nc; // [rsp+78h] [rbp-258h]
  char nd; // [rsp+78h] [rbp-258h]
  size_t nb; // [rsp+78h] [rbp-258h]
  __int64 v231; // [rsp+80h] [rbp-250h]
  unsigned __int64 v232; // [rsp+80h] [rbp-250h]
  unsigned int v233; // [rsp+80h] [rbp-250h]
  __int64 *s1a; // [rsp+88h] [rbp-248h]
  char *s1b; // [rsp+88h] [rbp-248h]
  char *s1c; // [rsp+88h] [rbp-248h]
  char *s1d; // [rsp+88h] [rbp-248h]
  char *s1e; // [rsp+88h] [rbp-248h]
  int s1f; // [rsp+88h] [rbp-248h]
  char *s1g; // [rsp+88h] [rbp-248h]
  char *s1h; // [rsp+88h] [rbp-248h]
  unsigned int v243; // [rsp+90h] [rbp-240h] BYREF
  unsigned int v244; // [rsp+94h] [rbp-23Ch] BYREF
  __int64 v245; // [rsp+98h] [rbp-238h] BYREF
  __int64 v246; // [rsp+A0h] [rbp-230h] BYREF
  __int64 v247; // [rsp+A8h] [rbp-228h] BYREF
  __int64 v248; // [rsp+B0h] [rbp-220h] BYREF
  __int64 v249; // [rsp+B8h] [rbp-218h] BYREF
  __int64 v250; // [rsp+C0h] [rbp-210h] BYREF
  __int64 v251; // [rsp+C8h] [rbp-208h] BYREF
  __int64 v252; // [rsp+D0h] [rbp-200h] BYREF
  int v253[2]; // [rsp+D8h] [rbp-1F8h] BYREF
  __int64 v254; // [rsp+E0h] [rbp-1F0h] BYREF
  __int64 v255; // [rsp+E8h] [rbp-1E8h] BYREF
  __int64 v256; // [rsp+F0h] [rbp-1E0h] BYREF
  __int64 v257; // [rsp+F8h] [rbp-1D8h] BYREF
  __int64 v258; // [rsp+100h] [rbp-1D0h] BYREF
  __int64 v259; // [rsp+108h] [rbp-1C8h] BYREF
  __int64 v260; // [rsp+110h] [rbp-1C0h] BYREF
  __int64 v261; // [rsp+118h] [rbp-1B8h] BYREF
  void *v262; // [rsp+120h] [rbp-1B0h] BYREF
  __m128i v263; // [rsp+128h] [rbp-1A8h]
  void *v264; // [rsp+140h] [rbp-190h] BYREF
  __int64 v265; // [rsp+148h] [rbp-188h]
  struct tm ptr; // [rsp+160h] [rbp-170h] BYREF
  int v267; // [rsp+19Ah] [rbp-136h]
  __int16 v268; // [rsp+19Eh] [rbp-132h]
  int v269; // [rsp+1A0h] [rbp-130h] BYREF
  _WORD v270[2]; // [rsp+1A4h] [rbp-12Ch] BYREF
  _BYTE v271[4]; // [rsp+1A8h] [rbp-128h] BYREF
  _BYTE v272[4]; // [rsp+1ACh] [rbp-124h] BYREF
  _BYTE v273[4]; // [rsp+1B0h] [rbp-120h] BYREF
  _BYTE v274[12]; // [rsp+1B4h] [rbp-11Ch] BYREF
  int v275; // [rsp+1C0h] [rbp-110h] BYREF
  __int16 v276; // [rsp+1C4h] [rbp-10Ch] BYREF
  int v277; // [rsp+1C8h] [rbp-108h] BYREF
  int v278; // [rsp+1CCh] [rbp-104h] BYREF
  __int16 v279; // [rsp+1D0h] [rbp-100h] BYREF
  char v280[4]; // [rsp+1D4h] [rbp-FCh] BYREF
  int v281[4]; // [rsp+1D8h] [rbp-F8h] BYREF
  int v282; // [rsp+1F0h] [rbp-E0h] BYREF
  __int16 v283; // [rsp+1F4h] [rbp-DCh]
  __int64 v284; // [rsp+1F8h] [rbp-D8h]
  __int64 v285; // [rsp+200h] [rbp-D0h]
  __int64 v286; // [rsp+208h] [rbp-C8h]
  void *v287; // [rsp+210h] [rbp-C0h] BYREF
  __m128i v288; // [rsp+218h] [rbp-B8h]
  void *v289; // [rsp+228h] [rbp-A8h] BYREF
  __m128i v290; // [rsp+230h] [rbp-A0h]
  void *v291; // [rsp+240h] [rbp-90h] BYREF
  __int128 v292; // [rsp+248h] [rbp-88h]
  int v293[4]; // [rsp+258h] [rbp-78h] BYREF
  time_t v294; // [rsp+268h] [rbp-68h]
  void *v295; // [rsp+270h] [rbp-60h] BYREF
  __int128 v296; // [rsp+278h] [rbp-58h]
  int v297; // [rsp+292h] [rbp-3Eh]
  __int16 v298; // [rsp+296h] [rbp-3Ah]
  unsigned __int64 v299; // [rsp+298h] [rbp-38h]

  v6 = a3[1];
  v299 = __readfsqword(0x28u);
  if ( a5 )
  {
    if ( !v6 )
      goto LABEL_164;
    v17 = *a3;
LABEL_21:
    v19 = 0;
    v20 = v17;
    while ( !*(_QWORD *)(v20 + 8) || strcmp(*(const char **)v20, "payload") )
    {
      ++v19;
      v20 += 40;
      if ( v19 == v6 )
        goto LABEL_164;
    }
    v21 = v20;
    if ( *(_DWORD *)(v20 + 24) == 3 )
      goto LABEL_26;
LABEL_164:
    v129 = *a6;
    if ( (unsigned __int64)a6[2] <= 0x17 )
    {
      v144 = qvector_reserve(a6, v129, 24, 1);
      *a6 = v144;
      v129 = v144;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23849A0);
    a6[1] = 24;
    *(__m128i *)v129 = si128;
    *(_QWORD *)(v129 + 15) = 0x7972746E65202264LL;
    *(_BYTE *)(*a6 + 23) = 0;
    return 2;
  }
  if ( !v6 )
    goto LABEL_167;
  v8 = 0;
  v231 = *a3;
  v9 = *a3;
  v221 = *a3;
  while ( !*(_QWORD *)(v9 + 8) || strcmp(*(const char **)v9, "header") )
  {
    ++v8;
    v9 += 40;
    if ( v8 == v6 )
      goto LABEL_167;
  }
  v10 = v231;
  v11 = v221;
  if ( *(_DWORD *)(v9 + 24) != 3 )
  {
LABEL_167:
    v131 = *a6;
    if ( (unsigned __int64)a6[2] <= 0x16 )
    {
      v146 = qvector_reserve(a6, v131, 23, 1);
      *a6 = v146;
      v131 = v146;
    }
    v132 = _mm_load_si128((const __m128i *)&xmmword_2384970);
    a6[1] = 23;
    *(__m128i *)v131 = v132;
    *(_QWORD *)(v131 + 14) = 0x7972746E65202272LL;
    *(_BYTE *)(*a6 + 22) = 0;
    return 2;
  }
  v12 = *(__int64 **)(v9 + 32);
  v13 = v12[1];
  if ( !v13 )
    goto LABEL_170;
  v232 = v6;
  v14 = *v12;
  v15 = 0;
  v222 = v10;
  v16 = v11;
  while ( !*(_QWORD *)(v14 + 8) || strcmp(*(const char **)v14, "version") )
  {
    ++v15;
    v14 += 40;
    if ( v13 == v15 )
      goto LABEL_170;
  }
  v6 = v232;
  v17 = v16;
  if ( *(_DWORD *)(v14 + 24) != 1 )
  {
LABEL_170:
    v133 = *a6;
    if ( (unsigned __int64)a6[2] <= 0x17 )
    {
      v145 = qvector_reserve(a6, v133, 24, 1);
      *a6 = v145;
      v133 = v145;
    }
    v134 = _mm_load_si128((const __m128i *)&xmmword_2384980);
    a6[1] = 24;
    *(__m128i *)v133 = v134;
    *(_QWORD *)(v133 + 15) = 0x7972746E6520226ELL;
    *(_BYTE *)(*a6 + 23) = 0;
    return 2;
  }
  v18 = *(_QWORD *)(v14 + 32);
  if ( v18 == 1 )
    goto LABEL_21;
  if ( a4 >= 0 || v18 )
  {
    sub_3573A0((char **)a6);
    return 2;
  }
  v125 = 0;
  v126 = v222;
  while ( !*(_QWORD *)(v126 + 8) || strcmp(*(const char **)v126, "data") )
  {
    ++v125;
    v126 += 40;
    if ( v125 >= v232 )
      goto LABEL_159;
  }
  v21 = v126;
  if ( *(_DWORD *)(v126 + 24) != 3 )
  {
LABEL_159:
    v127 = (char *)*a6;
    if ( (unsigned __int64)a6[2] <= 0x14 )
    {
      v147 = qvector_reserve(a6, v127, 21, 1);
      *a6 = v147;
      v127 = (char *)v147;
    }
    v128 = _mm_load_si128((const __m128i *)&xmmword_2384990);
    a6[1] = 21;
    *((_DWORD *)v127 + 4) = 2037544046;
    *(__m128i *)v127 = v128;
    *(_BYTE *)(*a6 + 20) = 0;
    return 2;
  }
LABEL_26:
  v22 = *(__int64 **)(v21 + 32);
  memset(&ptr, 0, 48);
  v23 = v22[1];
  v223 = v22;
  if ( !v23 )
    goto LABEL_173;
  v24 = *v22;
  v25 = 0;
  v26 = *v22;
  while ( !*(_QWORD *)(v26 + 8) || strcmp(*(const char **)v26, "name") )
  {
    ++v25;
    v26 += 40;
    if ( v23 == v25 )
      goto LABEL_173;
  }
  v27 = v23;
  if ( *(_DWORD *)(v26 + 24) != 2 )
  {
LABEL_173:
    v135 = (char *)*a6;
    if ( (unsigned __int64)a6[2] <= 0x14 )
    {
      v141 = qvector_reserve(a6, v135, 21, 1);
      *a6 = v141;
      v135 = (char *)v141;
    }
    v136 = _mm_load_si128((const __m128i *)&xmmword_23849B0);
    a6[1] = 21;
    *((_DWORD *)v135 + 4) = 2037544046;
    *(__m128i *)v135 = v136;
    *(_BYTE *)(*a6 + 20) = 0;
    goto LABEL_176;
  }
  v28 = *(_QWORD *)(v26 + 32);
  if ( (struct tm *)v28 != &ptr )
  {
    v29 = *(_QWORD *)(v28 + 8);
    if ( v29 > 1 )
    {
      v121 = *(const void **)v28;
      *(_QWORD *)&ptr.tm_sec = qvector_reserve(&ptr, 0, *(_QWORD *)(v28 + 8), 1);
      *(_QWORD *)&ptr.tm_hour = v29;
      memmove(*(void **)&ptr.tm_sec, v121, v29 - 1);
      *(_BYTE *)(*(_QWORD *)&ptr.tm_sec + v29 - 1) = 0;
      v27 = v223[1];
      if ( !v27 )
      {
LABEL_183:
        v139 = (char *)*a6;
        if ( (unsigned __int64)a6[2] <= 0x15 )
        {
          v142 = qvector_reserve(a6, v139, 22, 1);
          *a6 = v142;
          v139 = (char *)v142;
        }
        v140 = _mm_load_si128((const __m128i *)&xmmword_23849C0);
        a6[1] = 22;
        *(__m128i *)v139 = v140;
        *(_QWORD *)(v139 + 13) = 0x7972746E6520226CLL;
        *(_BYTE *)(*a6 + 21) = 0;
LABEL_176:
        if ( *(_QWORD *)&ptr.tm_wday )
        {
          *(_QWORD *)&ptr.tm_isdst = 0;
          qfree(*(void **)&ptr.tm_wday);
        }
        if ( *(_QWORD *)&ptr.tm_sec )
        {
          *(_QWORD *)&ptr.tm_hour = 0;
          qfree(*(void **)&ptr.tm_sec);
        }
        return 2;
      }
      v24 = *v223;
    }
  }
  v30 = v24;
  v31 = 0;
  v32 = v27;
  while ( !*(_QWORD *)(v30 + 8) || strcmp(*(const char **)v30, "email") )
  {
    ++v31;
    v30 += 40;
    if ( v31 == v32 )
      goto LABEL_183;
  }
  v233 = *(_DWORD *)(v30 + 24);
  if ( v233 != 2 )
    goto LABEL_183;
  v33 = *(_QWORD *)(v30 + 32);
  if ( (int *)v33 != &ptr.tm_wday )
  {
    v34 = *(_QWORD *)(v33 + 8);
    if ( v34 > 1 )
    {
      v123 = *(void **)&ptr.tm_wday;
      v124 = *(const void **)v33;
      if ( ptr.tm_gmtoff < v34 )
      {
        *(_QWORD *)&ptr.tm_wday = qvector_reserve(&ptr.tm_wday, *(_QWORD *)&ptr.tm_wday, *(_QWORD *)(v33 + 8), 1);
        v123 = *(void **)&ptr.tm_wday;
      }
      *(_QWORD *)&ptr.tm_isdst = v34;
      memmove(v123, v124, v34 - 1);
      *(_BYTE *)(*(_QWORD *)&ptr.tm_wday + v34 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&ptr.tm_isdst = 0;
    }
  }
  v35 = *(void **)&ptr.tm_wday;
  if ( a2 )
  {
    v36 = *a2;
    v37 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    v38 = _mm_loadu_si128((const __m128i *)&ptr.tm_hour);
    *a2 = *(_QWORD *)&ptr.tm_sec;
    v39 = a2[5];
    *(_QWORD *)&ptr.tm_sec = v36;
    v40 = (void *)a2[3];
    *(__m128i *)&ptr.tm_hour = v37;
    v41 = _mm_load_si128((const __m128i *)&ptr.tm_isdst);
    *(_QWORD *)&ptr.tm_wday = v40;
    ptr.tm_gmtoff = v39;
    a2[3] = (__int64)v35;
    v35 = v40;
    *(__m128i *)(a2 + 1) = v38;
    *((__m128i *)a2 + 2) = v41;
  }
  if ( v35 )
  {
    *(_QWORD *)&ptr.tm_isdst = 0;
    qfree(v35);
  }
  if ( *(_QWORD *)&ptr.tm_sec )
  {
    *(_QWORD *)&ptr.tm_hour = 0;
    qfree(*(void **)&ptr.tm_sec);
  }
  v42 = v223[1];
  if ( !v42 )
    goto LABEL_180;
  v43 = 0;
  v44 = *v223;
  while ( !*(_QWORD *)(v44 + 8) || strcmp(*(const char **)v44, "licenses") )
  {
    ++v43;
    v44 += 40;
    if ( v42 == v43 )
      goto LABEL_180;
  }
  if ( *(_DWORD *)(v44 + 24) != 4 )
  {
LABEL_180:
    v137 = (char *)*a6;
    if ( (unsigned __int64)a6[2] <= 0x18 )
    {
      v143 = qvector_reserve(a6, v137, 25, 1);
      *a6 = v143;
      v137 = (char *)v143;
    }
    v138 = _mm_load_si128((const __m128i *)&xmmword_23849D0);
    a6[1] = 25;
    *((_QWORD *)v137 + 2) = 0x7972746E65202273LL;
    *(__m128i *)v137 = v138;
    *(_BYTE *)(*a6 + 24) = 0;
    return 2;
  }
  v45 = *(__int64 **)(v44 + 32);
  v46 = nullptr;
  v263 = 0;
  v262 = nullptr;
  v47 = *v45;
  v48 = *v45 + 16 * v45[1];
  v49 = 0u;
  if ( v48 == *v45 )
  {
LABEL_126:
    v233 = 0;
    v104 = *a1;
    v105 = _mm_loadu_si128((const __m128i *)(a1 + 1));
    *a1 = v46;
    *(__m128i *)(a1 + 1) = v49;
    v262 = v104;
    v263 = v105;
    goto LABEL_127;
  }
  while ( *(_DWORD *)v47 == 3 )
  {
    v275 = 0;
    v276 = 0;
    v282 = 0;
    v283 = 0;
    v284 = 0;
    v285 = 0;
    v286 = 0;
    v287 = nullptr;
    v289 = nullptr;
    v291 = nullptr;
    v294 = 0;
    v295 = nullptr;
    v288 = 0;
    v290 = 0;
    v292 = 0;
    *(_OWORD *)v293 = 0;
    v296 = 0;
    v50 = *(_DWORD *)v47;
    if ( *(_DWORD *)v47 != 3 )
    {
      if ( !under_debugger )
        interr(1279);
      BUG();
    }
    s1a = *(__int64 **)(v47 + 8);
    if ( (unsigned int)sub_885700(&v245, s1a, "id", 2, 0, (char **)a6)
      || (unsigned int)sub_885700(&v246, s1a, "license_type", 2, 0, (char **)a6)
      || (unsigned int)sub_885700(&v247, s1a, "product_id", 2, 0, (char **)a6)
      || (unsigned int)sub_885700(&v248, s1a, "edition_id", 2, 1, (char **)a6)
      || (unsigned int)sub_885700(&v249, s1a, "product_version", 2, 1, (char **)a6)
      || (unsigned int)sub_885700(&v250, s1a, "description", 2, 1, (char **)a6)
      || (unsigned int)sub_885700(&v251, s1a, "seats", 1, 0, (char **)a6)
      || (unsigned int)sub_885700(&v252, s1a, "start_date", 2, 0, (char **)a6)
      || (unsigned int)sub_885700(v253, s1a, "end_date", 0, 0, (char **)a6)
      || (unsigned int)sub_885700(&v254, s1a, "issued_on", 2, 0, (char **)a6)
      || (unsigned int)sub_885700(&v255, s1a, "owner", 2, 0, (char **)a6)
      || (unsigned int)sub_885700(&v256, s1a, "add_ons", 4, 1, (char **)a6)
      || (unsigned int)sub_885700(&v257, s1a, "features", 4, 1, (char **)a6) )
    {
      goto LABEL_58;
    }
    if ( *(_DWORD *)v245 != 2 )
      ((void (__noreturn *)(void))sub_8843A0)();
    v56 = *(_QWORD *)(v245 + 8);
    s1b = (char *)haystack;
    if ( *(_QWORD *)(v56 + 8) )
      s1b = *(char **)v56;
    if ( (unsigned int)qsscanf(
                         (int)s1b,
                         (int)"%02X-%02X%02X-%02X%02X-%02X",
                         (int)&v275,
                         (int)&v276,
                         (int)&v277,
                         (int)&v278,
                         (char)&v279) != 6 )
      goto LABEL_298;
    for ( i = 0; i != 6; ++i )
    {
      v149 = (unsigned int)*(&v275 + i);
      *((_BYTE *)&v282 + i) = v149;
    }
    if ( *(_DWORD *)v246 != 2 )
      sub_8843A0(s1b, "%02X-%02X%02X-%02X%02X-%02X", &v282, v149, v217, v280);
    v150 = *(_QWORD *)(v246 + 8);
    if ( *(_QWORD *)(v150 + 8) )
    {
      v151 = *(const char **)v150;
      s1e = *(char **)v150;
      if ( !*(_QWORD *)v150 )
        goto LABEL_233;
      v152 = "named";
      if ( !strcmp(v151, "named") )
      {
        v50 = 1;
        goto LABEL_195;
      }
      v151 = s1e;
      v152 = "computer";
      if ( !strcmp(s1e, "computer") )
      {
        v50 = 2;
        goto LABEL_195;
      }
    }
    else
    {
      if ( !haystack )
        goto LABEL_233;
      s1e = (char *)haystack;
    }
    v151 = s1e;
    v152 = "floating";
    if ( strcmp(s1e, "floating") )
    {
LABEL_233:
      LODWORD(v284) = 0;
      sub_3573A0((char **)a6);
      goto LABEL_58;
    }
LABEL_195:
    LODWORD(v284) = v50;
    if ( *(_DWORD *)v247 != 2 )
      sub_8843A0(v151, v152, v153, v154, v155, v156);
    v157 = *(_QWORD *)(v247 + 8);
    v158 = (char *)haystack;
    v159 = (char *)haystack;
    if ( *(_QWORD *)(v157 + 8) )
    {
      v158 = "IDA";
      v159 = *(char **)v157;
      if ( !strcmp(*(const char **)v157, "IDA") )
        v159 = "IDAPRO";
    }
    v160 = (void **)v159;
    s1f = sub_884830(v159);
    HIDWORD(v284) = s1f;
    if ( s1f )
    {
      if ( v248 )
      {
        if ( *(_DWORD *)v248 != 2 )
          sub_8843A0(v159, v158, v161, v162, v163, v164);
        v165 = *(_QWORD *)(v248 + 8);
        v166 = (char *)haystack;
        if ( *(_QWORD *)(v165 + 8) )
          v166 = *(char **)v165;
        v160 = (void **)v166;
        LODWORD(v285) = sub_8848F0(v166);
        if ( !(_DWORD)v285 )
          goto LABEL_298;
      }
      if ( s1f == 2 && (unsigned int)(v285 - 3) > 4 )
        goto LABEL_298;
      if ( v249 )
      {
        if ( *(_DWORD *)v249 != 2 )
          sub_8843A0(v160, v158, v161, v162, v163, v164);
        v160 = *(void ***)(v249 + 8);
        HIDWORD(v285) = sub_884F10((__int64)v160, (__int64)v158, v161, v162, v163, v164);
        if ( v285 < 0 )
        {
          if ( *(_DWORD *)v249 != 2 )
            sub_8843A0(v160, v158, v161, v162, v163, v164);
          goto LABEL_298;
        }
      }
      if ( v250 )
      {
        if ( *(_DWORD *)v250 != 2 )
          sub_8843A0(v160, v158, v161, v162, v163, v164);
        v158 = *(char **)(v250 + 8);
        v160 = &v295;
        sub_8844F0((__int64)&v295, (__int64)v158);
      }
      if ( *(_DWORD *)v251 != 1 )
        sub_884380();
      v286 = *(_QWORD *)(v251 + 8);
      if ( *(_DWORD *)v252 != 2 )
        sub_8843A0(v160, v158, v161, v162, v163, v164);
      v167 = *(_QWORD *)(v252 + 8);
      s1g = (char *)haystack;
      if ( *(_QWORD *)(v167 + 8) )
        s1g = *(char **)v167;
      sub_45DE90((__int64)&ptr, s1g);
      v176 = sub_884420(v293, (__int64)&ptr, v168, v169, v170, v171);
      if ( *(_QWORD *)&ptr.tm_sec )
      {
        *(_QWORD *)&ptr.tm_hour = 0;
        qfree(*(void **)&ptr.tm_sec);
      }
      if ( !v176 )
        goto LABEL_298;
      v177 = *(int **)v253;
      if ( !(unsigned __int8)sub_884590(&v293[2], *(int **)v253, v172, v173, v174, v175) )
        goto LABEL_298;
      if ( *(_DWORD *)v254 != 2 )
        sub_8843A0(&v293[2], v177, v178, v179, v180, v181);
      v182 = *(_QWORD *)(v254 + 8);
      v183 = haystack;
      if ( *(_QWORD *)(v182 + 8) )
        v183 = *(const char **)v182;
      sub_45DE90((__int64)&v264, v183);
      v184 = haystack;
      if ( v265 )
        LODWORD(v184) = (_DWORD)v264;
      if ( (unsigned int)qsscanf(
                           (int)v184,
                           (int)"%d-%d-%d %d:%d:%d",
                           (int)&v243,
                           (int)&v244,
                           (int)&v258,
                           (int)&v259,
                           (char)&v260) != 6 )
      {
        if ( v264 )
        {
          v265 = 0;
          qfree(v264);
        }
        goto LABEL_298;
      }
      v57 = _mm_cvtsi32_si128(v244);
      p_tm_wday = &ptr.tm_wday;
      v59 = 8;
      v60 = _mm_cvtsi32_si128(v243);
      v61 = _mm_cvtsi32_si128(v258);
      while ( v59 )
      {
        *p_tm_wday++ = 0;
        --v59;
      }
      *(_QWORD *)&ptr.tm_mon = _mm_add_epi32(
                                 _mm_unpacklo_epi32(v57, v60),
                                 _mm_loadl_epi64((const __m128i *)&qword_2388CB8)).m128i_u64[0];
      *(__m128i *)&ptr.tm_sec = _mm_unpacklo_epi64(
                                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v261), _mm_cvtsi32_si128(v260)),
                                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v259), v61));
      v62 = qtimegm(&ptr);
      v67 = v264;
      v294 = v62;
      if ( v264 )
      {
        v265 = 0;
        qfree(v264);
      }
      if ( *(_DWORD *)v255 != 2 )
        sub_8843A0(v67, "%d-%d-%d %d:%d:%d", v63, v64, v65, v66);
      sub_8844F0((__int64)&v287, *(_QWORD *)(v255 + 8));
      if ( v256 )
      {
        if ( *(_DWORD *)v256 != 4 )
          sub_8843E0();
        v68 = *(char ***)(v256 + 8);
        v69 = *v68;
        v70 = 16LL * (_QWORD)v68[1];
        v224 = &v69[v70];
        if ( v69 != &v69[v70] )
        {
          s1c = v69;
          while ( *(_DWORD *)s1c == 3 )
          {
            v270[0] = 0;
            v276 = 0;
            v279 = 0;
            v267 = 0;
            v268 = 0;
            v269 = 0;
            v275 = 0;
            v277 = 0;
            v278 = 0;
            *(_OWORD *)v281 = 0;
            if ( *(_DWORD *)s1c != 3 )
              sub_8843C0();
            na = *((__int64 **)s1c + 1);
            if ( (unsigned int)sub_885700(&v258, na, "id", 2, 0, (char **)a6)
              || (unsigned int)sub_885700(&v259, na, "code", 2, 0, (char **)a6)
              || (unsigned int)sub_885700(&v260, na, "owner", 2, 0, (char **)a6)
              || (unsigned int)sub_885700(&v261, na, "start_date", 2, 0, (char **)a6)
              || (unsigned int)sub_885700(&v264, na, "end_date", 0, 0, (char **)a6) )
            {
              goto LABEL_110;
            }
            if ( *(_DWORD *)v258 != 2 )
              sub_8843A0(&v264, na, v71, v72, v73, v74);
            v75 = *(_QWORD *)(v258 + 8);
            v76 = haystack;
            if ( *(_QWORD *)(v75 + 8) )
              v76 = *(const char **)v75;
            if ( (unsigned int)qsscanf(
                                 (int)v76,
                                 (int)"%02X-%02X%02X-%02X%02X-%02X",
                                 (int)&v269,
                                 (int)v270,
                                 (int)v271,
                                 (int)v272,
                                 (char)v273) != 6 )
            {
LABEL_109:
              sub_3573A0((char **)a6);
              goto LABEL_110;
            }
            for ( j = 0; j != 6; ++j )
            {
              v207 = *(unsigned int *)&v270[2 * j - 2];
              *((_BYTE *)&v275 + j) = v207;
            }
            if ( *(_DWORD *)v259 != 2 )
              sub_8843A0(v76, s1c, v207, v77, v78, v218);
            v208 = *(_QWORD *)(v259 + 8);
            v209 = (char *)haystack;
            if ( *(_QWORD *)(v208 + 8) )
              v209 = *(char **)v208;
            v277 = sub_884A40(v209);
            if ( v277 )
            {
              if ( *(_DWORD *)v260 != 2 )
                sub_8843A0(v209, s1c, v210, v211, v212, v213);
              v214 = *(_QWORD *)(v260 + 8);
              v215 = haystack;
              if ( *(_QWORD *)(v214 + 8) )
                v215 = *(const char **)v214;
              v216 = qsscanf(
                       (int)v215,
                       (int)"%02X-%02X%02X-%02X%02X-%02X",
                       (int)&v269,
                       (int)v270,
                       (int)v271,
                       (int)v272,
                       (char)v273);
              v190 = v274;
              if ( v216 != 6 )
                goto LABEL_109;
              v185 = (__int64)s1c;
              for ( k = 0; k != 6; ++k )
              {
                v187 = *(unsigned int *)&v270[2 * k - 2];
                *((_BYTE *)&v278 + k) = v187;
              }
              if ( *(_DWORD *)v261 != 2 )
                sub_8843A0(v219, &v278, v187, s1c, v274, v191);
              v188 = *(_QWORD *)(v261 + 8);
              v189 = haystack;
              if ( *(_QWORD *)(v188 + 8) )
                v189 = *(const char **)v188;
              memset(&ptr, 0, 24);
              if ( v189 )
              {
                nc = strlen(v189);
                *(_QWORD *)&ptr.tm_sec = qvector_reserve(&ptr, 0, nc + 1, 1);
                *(_QWORD *)&ptr.tm_hour = nc + 1;
                memmove(*(void **)&ptr.tm_sec, v189, nc);
                *(_BYTE *)(*(_QWORD *)&ptr.tm_sec + nc) = 0;
              }
              v192 = sub_884420(v281, (__int64)&ptr, v187, v185, (__int64)v190, v191);
              if ( *(_QWORD *)&ptr.tm_sec )
              {
                nd = v192;
                *(_QWORD *)&ptr.tm_hour = 0;
                qfree(*(void **)&ptr.tm_sec);
                v192 = nd;
              }
              if ( !v192 || !(unsigned __int8)sub_884590(&v281[2], (int *)v264, v193, v194, v195, v196) )
                goto LABEL_109;
              v197 = v290.m128i_i64[0];
              if ( v290.m128i_i64[1] < (unsigned __int64)(v290.m128i_i64[0] + 1) )
              {
                v289 = (void *)qvector_reserve(&v289, v289, v290.m128i_i64[0] + 1, 40);
                v197 = v290.m128i_i64[0];
              }
              v270[0] = 0;
              v198 = (char *)v289 + 40 * v197;
              v269 = 0;
              v267 = 0;
              v268 = 0;
              *(_DWORD *)v198 = 0;
              v199 = v268;
              *(_OWORD *)(v198 + 24) = 0;
              *((_WORD *)v198 + 2) = v199;
              *((_DWORD *)v198 + 2) = 0;
              *((_DWORD *)v198 + 3) = v269;
              *((_WORD *)v198 + 8) = v270[0];
              ++v290.m128i_i64[0];
              sub_884D90((int *)v198, &v275);
            }
            s1c += 16;
            if ( v224 == s1c )
              goto LABEL_258;
          }
LABEL_298:
          sub_3573A0((char **)a6);
LABEL_58:
          if ( v295 )
          {
            *(_QWORD *)&v296 = 0;
            qfree(v295);
          }
          v51 = (char *)v291;
          if ( v291 )
          {
            if ( (_QWORD)v292 )
            {
              v52 = 0;
              v53 = v292;
              do
              {
                v54 = &v51[24 * v52];
                v55 = *(void **)v54;
                if ( *(_QWORD *)v54 )
                {
                  *((_QWORD *)v54 + 1) = 0;
                  qfree(v55);
                  v51 = (char *)v291;
                }
                ++v52;
              }
              while ( v53 != v52 );
            }
            *(_QWORD *)&v292 = 0;
            qfree(v51);
          }
          if ( v289 )
          {
            v290.m128i_i64[0] = 0;
            qfree(v289);
          }
          if ( v287 )
          {
            v288.m128i_i64[0] = 0;
            qfree(v287);
          }
          goto LABEL_149;
        }
      }
LABEL_258:
      if ( v257 )
      {
        if ( *(_DWORD *)v257 != 4 )
          sub_8843E0();
        v200 = *(_QWORD *)(v257 + 8);
        s1h = *(char **)v200;
        nb = *(_QWORD *)v200 + 16LL * *(_QWORD *)(v200 + 8);
        while ( (char *)nb != s1h )
        {
          if ( *(_DWORD *)s1h != 2 )
            goto LABEL_298;
          v203 = nullptr;
          v204 = *((_QWORD *)s1h + 1);
          v205 = *(_QWORD *)(v204 + 8);
          if ( v205 )
          {
            v225 = *((const void ***)s1h + 1);
            v203 = (void *)qalloc_or_throw(*(_QWORD *)(v204 + 8), s1h);
            memcpy(v203, *v225, v205);
          }
          v201 = v292;
          if ( *((_QWORD *)&v292 + 1) < (unsigned __int64)(v292 + 1) )
          {
            v291 = (void *)qvector_reserve(&v291, v291, v292 + 1, 24);
            v201 = v292;
          }
          v202 = (char *)v291 + 24 * v201;
          s1h += 16;
          *(_QWORD *)v202 = v203;
          *(__m128i *)(v202 + 8) = _mm_unpacklo_epi64((__m128i)v205, (__m128i)v205);
          *(_QWORD *)&v292 = v292 + 1;
        }
      }
LABEL_110:
      v79 = sub_885440((__int64 *)&v262);
      v80 = *(_DWORD *)v79;
      v81 = *(_WORD *)(v79 + 4);
      v82 = _mm_loadu_si128((const __m128i *)(v79 + 40));
      *(_DWORD *)v79 = v282;
      v297 = v80;
      *(_WORD *)(v79 + 4) = v283;
      v298 = v81;
      v283 = v81;
      v83 = *(_DWORD *)(v79 + 8);
      v282 = v80;
      *(_DWORD *)(v79 + 8) = v284;
      LODWORD(v284) = v83;
      v84 = *(_DWORD *)(v79 + 12);
      *(_DWORD *)(v79 + 12) = HIDWORD(v284);
      HIDWORD(v284) = v84;
      v85 = *(_DWORD *)(v79 + 16);
      *(_DWORD *)(v79 + 16) = v285;
      LODWORD(v285) = v85;
      v86 = *(_DWORD *)(v79 + 20);
      *(_DWORD *)(v79 + 20) = HIDWORD(v285);
      HIDWORD(v285) = v86;
      v87 = *(_QWORD *)(v79 + 24);
      *(_QWORD *)(v79 + 24) = v286;
      v286 = v87;
      v88 = *(void **)(v79 + 32);
      v89 = *(void **)(v79 + 80);
      *(_QWORD *)(v79 + 32) = v287;
      v287 = v88;
      v90 = *(void **)(v79 + 56);
      *(__m128i *)(v79 + 40) = v288;
      v288 = v82;
      v91 = _mm_loadu_si128((const __m128i *)(v79 + 64));
      *(_QWORD *)(v79 + 56) = v289;
      v289 = v90;
      v92 = *(_QWORD *)(v79 + 96);
      *(__m128i *)(v79 + 64) = v290;
      v93 = *(_QWORD *)(v79 + 88);
      v290 = v91;
      *(_QWORD *)(v79 + 80) = v291;
      v291 = v89;
      *(_QWORD *)(v79 + 88) = v292;
      *(_QWORD *)&v292 = v93;
      *(_QWORD *)(v79 + 96) = *((_QWORD *)&v292 + 1);
      *((_QWORD *)&v292 + 1) = v92;
      v94 = *(_QWORD *)(v79 + 104);
      *(_QWORD *)(v79 + 104) = *(_QWORD *)v293;
      *(_QWORD *)v293 = v94;
      v95 = *(_QWORD *)(v79 + 112);
      *(_QWORD *)(v79 + 112) = *(_QWORD *)&v293[2];
      *(_QWORD *)&v293[2] = v95;
      v96 = *(_QWORD *)(v79 + 120);
      *(_QWORD *)(v79 + 120) = v294;
      v97 = *(void **)(v79 + 128);
      v294 = v96;
      *(_QWORD *)(v79 + 128) = v295;
      v98 = *(_QWORD *)(v79 + 144);
      v295 = v97;
      *(_OWORD *)(v79 + 136) = v296;
      *((_QWORD *)&v296 + 1) = v98;
    }
    else
    {
      v97 = v295;
    }
    if ( v97 )
    {
      *(_QWORD *)&v296 = 0;
      qfree(v97);
    }
    v99 = (char *)v291;
    if ( v291 )
    {
      v100 = v292;
      if ( (_QWORD)v292 )
      {
        v101 = 0;
        do
        {
          v102 = &v99[24 * v101];
          v103 = *(void **)v102;
          if ( *(_QWORD *)v102 )
          {
            *((_QWORD *)v102 + 1) = 0;
            qfree(v103);
            v99 = (char *)v291;
          }
          ++v101;
        }
        while ( v100 != v101 );
      }
      *(_QWORD *)&v292 = 0;
      qfree(v99);
    }
    if ( v289 )
    {
      v290.m128i_i64[0] = 0;
      qfree(v289);
    }
    if ( v287 )
    {
      v288.m128i_i64[0] = 0;
      qfree(v287);
    }
    v47 += 16;
    if ( v48 == v47 )
    {
      v46 = (char *)v262;
      v49 = v263;
      goto LABEL_126;
    }
  }
  v119 = (char *)*a6;
  if ( (unsigned __int64)a6[2] <= 0x1D )
  {
    v122 = qvector_reserve(a6, v119, 30, 1);
    *a6 = v122;
    v119 = (char *)v122;
  }
  v120 = _mm_load_si128((const __m128i *)&xmmword_23849E0);
  a6[1] = 30;
  *(__m128i *)v119 = v120;
  *(__m128i *)(v119 + 13) = _mm_load_si128((const __m128i *)&xmmword_23849F0);
  *(_BYTE *)(*a6 + 29) = 0;
LABEL_149:
  v104 = (char *)v262;
LABEL_127:
  if ( v104 )
  {
    v106 = v263.m128i_i64[0];
    if ( v263.m128i_i64[0] )
    {
      v107 = 0;
      v108 = 0;
      do
      {
        v109 = &v104[v107];
        v110 = *(void **)&v104[v107 + 128];
        s1d = v109;
        if ( v110 )
        {
          *((_QWORD *)v109 + 17) = 0;
          qfree(v110);
        }
        v111 = *((char **)s1d + 10);
        if ( v111 )
        {
          v112 = *((_QWORD *)s1d + 11);
          if ( v112 )
          {
            for ( m = 0; m != v112; ++m )
            {
              v114 = &v111[24 * m];
              v115 = *(void **)v114;
              if ( *(_QWORD *)v114 )
              {
                *((_QWORD *)v114 + 1) = 0;
                qfree(v115);
                v111 = *((char **)s1d + 10);
              }
            }
          }
          *((_QWORD *)s1d + 11) = 0;
          qfree(v111);
        }
        v116 = *((void **)s1d + 7);
        if ( v116 )
        {
          *((_QWORD *)s1d + 8) = 0;
          qfree(v116);
        }
        v117 = *((void **)s1d + 4);
        if ( v117 )
        {
          *((_QWORD *)s1d + 5) = 0;
          qfree(v117);
        }
        ++v108;
        v104 = (char *)v262;
        v107 += 152;
      }
      while ( v106 != v108 );
    }
    v263.m128i_i64[0] = 0;
    qfree(v104);
  }
  return v233;
}

