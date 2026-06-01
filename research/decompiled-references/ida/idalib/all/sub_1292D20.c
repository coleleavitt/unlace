void __fastcall sub_1292D20(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // r12
  void **v7; // r13
  void **v8; // r12
  __int64 v9; // r12
  void **v10; // r13
  void **v11; // r12
  __int64 v12; // rax
  _BYTE *v13; // r14
  signed __int64 v14; // r13
  _QWORD *v15; // rax
  size_t v16; // r14
  size_t v17; // r15
  __int64 v18; // r13
  char *v19; // rcx
  __int64 v20; // rax
  _BYTE *v21; // r15
  signed __int64 v22; // r13
  _QWORD *v23; // rax
  size_t v24; // r15
  size_t v25; // rcx
  __int64 v26; // r13
  __m128i *v27; // r8
  __int64 v28; // rax
  _BYTE *v29; // rsi
  signed __int64 v30; // r15
  _QWORD *v31; // rax
  size_t v32; // rcx
  size_t v33; // r8
  __int64 v34; // r15
  char *v35; // rax
  __m128i *v36; // r9
  unsigned int v37; // eax
  __m128i *v38; // rcx
  const void *v39; // rsi
  size_t v40; // r15
  _QWORD *v41; // rax
  size_t v42; // r8
  unsigned __int64 v43; // r9
  __int64 v44; // r15
  __m128i *v45; // r10
  size_t v46; // rdi
  __m128i *v47; // rcx
  const void *v48; // rsi
  size_t v49; // r15
  _QWORD *v50; // rax
  size_t v51; // r8
  unsigned __int64 v52; // r9
  __int64 v53; // r15
  __m128i *v54; // r10
  __int64 v55; // rdi
  void *v56; // rdi
  _BYTE *v57; // rdi
  __int64 v58; // rdx
  const void *v59; // rsi
  _QWORD *v60; // rax
  size_t v61; // rcx
  unsigned __int64 v62; // r8
  __int64 v63; // rbp
  size_t v64; // r9
  __int64 v65; // rdi
  const void *v66; // rsi
  _QWORD *v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // r8
  __int64 v70; // rbp
  __int64 v71; // r9
  __int64 v72; // rdi
  const void *v73; // rsi
  __int64 v74; // rbp
  _QWORD *v75; // rax
  size_t v76; // rcx
  unsigned __int64 v77; // r8
  __int64 v78; // rbp
  size_t v79; // r9
  size_t v80; // rdi
  signed __int64 v81; // r13
  unsigned __int64 v82; // rdi
  char *v83; // rax
  _QWORD *v84; // r8
  char *v85; // rax
  signed __int64 v86; // r13
  unsigned __int64 v87; // rdi
  __m128i *v88; // rax
  _QWORD *v89; // r9
  __m128i *v90; // rax
  signed __int64 v91; // r15
  unsigned __int64 v92; // rdi
  __m128i *v93; // rax
  _QWORD *v94; // r10
  size_t v95; // rdx
  __m128i *v96; // rax
  char *v97; // rax
  __int64 v98; // rdx
  const void *v99; // rsi
  _QWORD *v100; // rax
  __int64 v101; // rcx
  unsigned __int64 v102; // r8
  __int64 v103; // rbp
  __int64 v104; // r9
  __int64 v105; // rdi
  const void *v106; // rsi
  _QWORD *v107; // rax
  size_t v108; // rcx
  unsigned __int64 v109; // r8
  __int64 v110; // rbp
  __int64 v111; // rax
  __m128i si128; // xmm0
  size_t v113; // r9
  __int64 v114; // rdi
  const void *v115; // rsi
  __int64 v116; // rbp
  _QWORD *v117; // rax
  size_t v118; // rcx
  unsigned __int64 v119; // r8
  __int64 v120; // rbp
  __int64 v121; // rax
  size_t v122; // r9
  size_t v123; // rdi
  const void *v124; // rsi
  __int64 v125; // r15
  _QWORD *v126; // rax
  __int64 v127; // rcx
  size_t v128; // r8
  __int64 v129; // r15
  size_t v130; // r9
  const void *v131; // rsi
  _QWORD *v132; // rax
  size_t v133; // rcx
  unsigned __int64 v134; // r8
  __int64 v135; // rbp
  __int64 v136; // rax
  __m128i v137; // xmm0
  size_t v138; // r9
  __int64 v139; // rdi
  const void *v140; // rsi
  _QWORD *v141; // rax
  __int64 v142; // rcx
  unsigned __int64 v143; // r8
  __int64 v144; // rbp
  __int64 v145; // rax
  __m128i v146; // xmm0
  __int64 v147; // r9
  __int64 v148; // rdi
  const void *v149; // rsi
  __int64 v150; // rbp
  _QWORD *v151; // rax
  __int64 v152; // rcx
  unsigned __int64 v153; // r8
  __int64 v154; // rbp
  __int64 v155; // r9
  size_t v156; // rdi
  const void *v157; // rsi
  __int64 v158; // rbp
  _QWORD *v159; // rax
  __int64 v160; // rcx
  size_t v161; // r8
  __int64 v162; // rbp
  __int64 v163; // rax
  size_t v164; // r9
  __int64 v165; // rdi
  __int64 v166; // rbp
  unsigned __int64 v167; // rdi
  _BYTE *v168; // rax
  _QWORD *v169; // r10
  size_t v170; // rdx
  void *v171; // rax
  __m128i v172; // xmm0
  __m128i *v173; // rax
  __int64 v174; // rbp
  unsigned __int64 v175; // rdi
  _BYTE *v176; // rax
  _QWORD *v177; // r10
  size_t v178; // rdx
  void *v179; // rax
  __m128i v180; // xmm0
  __m128i *v181; // rax
  __int64 v182; // r15
  unsigned __int64 v183; // rdi
  __m128i *v184; // rax
  __m128i *v185; // r11
  size_t v186; // rdx
  __m128i *v187; // rax
  __int64 v188; // rbp
  unsigned __int64 v189; // rdi
  _BYTE *v190; // rax
  _QWORD *v191; // r10
  size_t v192; // rdx
  void *v193; // rax
  __m128i v194; // xmm0
  __m128i *v195; // rax
  __int64 v196; // rbp
  unsigned __int64 v197; // rdi
  _BYTE *v198; // rax
  _QWORD *v199; // r10
  size_t v200; // rdx
  void *v201; // rax
  __int64 v202; // r15
  unsigned __int64 v203; // rdi
  __m128i *v204; // rax
  __m128i *v205; // r11
  size_t v206; // rdx
  __m128i *v207; // rax
  __int64 v208; // rbp
  unsigned __int64 v209; // rdi
  _BYTE *v210; // rax
  _QWORD *v211; // r10
  size_t v212; // rdx
  void *v213; // rax
  __int64 v214; // rbp
  unsigned __int64 v215; // rdi
  _BYTE *v216; // rax
  _QWORD *v217; // r10
  size_t v218; // rdx
  void *v219; // rax
  __int64 v220; // rbp
  unsigned __int64 v221; // rdi
  _BYTE *v222; // rax
  _QWORD *v223; // r10
  size_t v224; // rdx
  void *v225; // rax
  size_t v226; // rax
  __int64 v227; // rbp
  unsigned __int64 v228; // rdi
  _BYTE *v229; // rax
  _QWORD *v230; // r10
  size_t v231; // rdx
  void *v232; // rax
  __int64 v233; // rbp
  unsigned __int64 v234; // rdi
  _BYTE *v235; // rax
  _QWORD *v236; // r10
  size_t v237; // rdx
  void *v238; // rax
  __int64 v239; // rbp
  unsigned __int64 v240; // rdi
  _BYTE *v241; // rax
  _QWORD *v242; // r10
  size_t v243; // rdx
  void *v244; // rax
  size_t v245; // rax
  __int64 v246; // r15
  unsigned __int64 v247; // rdi
  _BYTE *v248; // rax
  _QWORD *v249; // r10
  size_t v250; // rdx
  void *v251; // rax
  __int64 v252; // [rsp+8h] [rbp-270h] BYREF
  size_t v253; // [rsp+10h] [rbp-268h]
  _BYTE *v254; // [rsp+18h] [rbp-260h]
  size_t v255; // [rsp+20h] [rbp-258h]
  __m128i *v256; // [rsp+28h] [rbp-250h]
  __m128i *v257; // [rsp+30h] [rbp-248h]
  __m128i *v258; // [rsp+38h] [rbp-240h]
  void *src; // [rsp+40h] [rbp-238h] BYREF
  size_t n; // [rsp+48h] [rbp-230h]
  _QWORD v261[2]; // [rsp+50h] [rbp-228h] BYREF
  void *v262; // [rsp+60h] [rbp-218h]
  size_t v263; // [rsp+68h] [rbp-210h]
  _QWORD v264[2]; // [rsp+70h] [rbp-208h] BYREF
  void *v265; // [rsp+80h] [rbp-1F8h] BYREF
  size_t v266; // [rsp+88h] [rbp-1F0h]
  _QWORD v267[2]; // [rsp+90h] [rbp-1E8h] BYREF
  __m128i v268; // [rsp+A0h] [rbp-1D8h] BYREF
  _QWORD v269[2]; // [rsp+B0h] [rbp-1C8h] BYREF
  __m128i v270; // [rsp+C0h] [rbp-1B8h] BYREF
  _QWORD v271[2]; // [rsp+D0h] [rbp-1A8h] BYREF
  __m128i v272; // [rsp+E0h] [rbp-198h] BYREF
  _QWORD v273[2]; // [rsp+F0h] [rbp-188h] BYREF
  __m128i v274; // [rsp+100h] [rbp-178h] BYREF
  _QWORD v275[2]; // [rsp+110h] [rbp-168h] BYREF
  void *v276; // [rsp+120h] [rbp-158h] BYREF
  size_t v277; // [rsp+128h] [rbp-150h]
  _QWORD v278[2]; // [rsp+130h] [rbp-148h] BYREF
  void *v279; // [rsp+140h] [rbp-138h] BYREF
  size_t v280; // [rsp+148h] [rbp-130h]
  _QWORD v281[2]; // [rsp+150h] [rbp-128h] BYREF
  __m128i v282; // [rsp+160h] [rbp-118h] BYREF
  _QWORD v283[2]; // [rsp+170h] [rbp-108h] BYREF
  __m128i v284; // [rsp+180h] [rbp-F8h] BYREF
  _QWORD v285[2]; // [rsp+190h] [rbp-E8h] BYREF
  __m128i v286; // [rsp+1A0h] [rbp-D8h] BYREF
  _QWORD v287[2]; // [rsp+1B0h] [rbp-C8h] BYREF
  __m128i v288; // [rsp+1C0h] [rbp-B8h] BYREF
  _QWORD v289[2]; // [rsp+1D0h] [rbp-A8h] BYREF
  __m128i v290; // [rsp+1E0h] [rbp-98h] BYREF
  _QWORD v291[2]; // [rsp+1F0h] [rbp-88h] BYREF
  __m128i v292; // [rsp+200h] [rbp-78h] BYREF
  _QWORD v293[2]; // [rsp+210h] [rbp-68h] BYREF
  __m128i v294; // [rsp+220h] [rbp-58h] BYREF
  _QWORD v295[9]; // [rsp+230h] [rbp-48h] BYREF

  sub_121FCF0(a1, a2, a3, a4);
  v6 = *(unsigned int *)(a1 + 632);
  v7 = *(void ***)(a1 + 624);
  *(_QWORD *)a1 = off_2C3E550;
  v254 = (_BYTE *)(a1 + 5000);
  *(_QWORD *)(a1 + 4984) = a1 + 5000;
  v8 = &v7[4 * v6];
  *(_QWORD *)(a1 + 4992) = 0;
  *(_BYTE *)(a1 + 5000) = 0;
  v252 = a1 + 624;
  while ( v7 != v8 )
  {
    while ( 1 )
    {
      v8 -= 4;
      if ( *v8 == v8 + 2 )
        break;
      operator delete(*v8);
      if ( v7 == v8 )
        goto LABEL_5;
    }
  }
LABEL_5:
  v9 = *(unsigned int *)(a1 + 1160);
  v10 = *(void ***)(a1 + 1152);
  *(_DWORD *)(a1 + 632) = 0;
  v253 = a1 + 1152;
  v11 = &v10[4 * v9];
  while ( v10 != v11 )
  {
    while ( 1 )
    {
      v11 -= 4;
      if ( *v11 == v11 + 2 )
        break;
      operator delete(*v11);
      if ( v10 == v11 )
        goto LABEL_8;
    }
  }
LABEL_8:
  v12 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 1160) = 0;
  v13 = *(_BYTE **)(v12 + 104);
  v14 = *(_QWORD *)(v12 + 112);
  src = v261;
  if ( &v13[v14] && !v13 )
    goto LABEL_487;
  if ( (unsigned __int64)v14 > 0xF )
  {
    if ( v14 < 0 )
      goto LABEL_502;
    v15 = (_QWORD *)operator new(v14 + 1);
    v261[0] = v14;
    src = v15;
LABEL_125:
    memcpy(v15, v13, v14);
    v15 = src;
    goto LABEL_13;
  }
  if ( v14 == 1 )
  {
    LOBYTE(v261[0]) = *v13;
    v15 = v261;
    goto LABEL_13;
  }
  v15 = v261;
  if ( v14 )
    goto LABEL_125;
LABEL_13:
  n = v14;
  *((_BYTE *)v15 + v14) = 0;
  v16 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 3 )
    goto LABEL_501;
  v17 = n + 4;
  if ( src == v261 )
  {
    v18 = 15;
    if ( v17 <= 0xF )
      goto LABEL_16;
  }
  else
  {
    v18 = v261[0];
    if ( v17 <= v261[0] )
    {
LABEL_16:
      *(_DWORD *)((char *)src + n) = 791555631;
      v19 = (char *)src;
      goto LABEL_17;
    }
  }
  if ( (v17 & 0x8000000000000000LL) != 0LL )
    goto LABEL_502;
  v81 = 2 * v18;
  if ( v17 < v81 )
  {
    v82 = v81 + 1;
    if ( v81 < 0 )
    {
      v82 = 0x8000000000000000LL;
      v81 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v82 = n + 5;
    v81 = n + 4;
  }
  v83 = (char *)operator new(v82);
  v84 = src;
  v19 = v83;
  if ( n )
  {
    if ( n == 1 )
    {
      *v83 = *(_BYTE *)src;
    }
    else
    {
      v255 = (size_t)src;
      v85 = (char *)memcpy(v83, src, n);
      v84 = src;
      v19 = v85;
    }
  }
  *(_DWORD *)&v19[v16] = 791555631;
  if ( v84 != v261 )
  {
    v255 = (size_t)v19;
    operator delete(v84);
    v19 = (char *)v255;
  }
  src = v19;
  v261[0] = v81;
LABEL_17:
  n = v16 + 4;
  v19[v16 + 4] = 0;
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *(_BYTE **)(v20 + 104);
  v22 = *(_QWORD *)(v20 + 112);
  v262 = v264;
  if ( &v21[v22] && !v21 )
    goto LABEL_487;
  if ( (unsigned __int64)v22 > 0xF )
  {
    if ( v22 < 0 )
      goto LABEL_502;
    v23 = (_QWORD *)operator new(v22 + 1);
    v264[0] = v22;
    v262 = v23;
LABEL_138:
    memcpy(v23, v21, v22);
    v23 = v262;
    goto LABEL_22;
  }
  if ( v22 == 1 )
  {
    LOBYTE(v264[0]) = *v21;
    v23 = v264;
    goto LABEL_22;
  }
  v23 = v264;
  if ( v22 )
    goto LABEL_138;
LABEL_22:
  v263 = v22;
  *((_BYTE *)v23 + v22) = 0;
  v24 = v263;
  if ( 0x7FFFFFFFFFFFFFFFLL - v263 <= 3 )
    goto LABEL_501;
  v25 = v263 + 4;
  if ( v262 == v264 )
  {
    v26 = 15;
    if ( v25 <= 0xF )
      goto LABEL_25;
  }
  else
  {
    v26 = v264[0];
    if ( v25 <= v264[0] )
    {
LABEL_25:
      *(_DWORD *)((char *)v262 + v263) = 791555631;
      v27 = (__m128i *)v262;
      goto LABEL_26;
    }
  }
  if ( (v25 & 0x8000000000000000LL) != 0LL )
    goto LABEL_502;
  v86 = 2 * v26;
  if ( v25 < v86 )
  {
    v87 = v86 + 1;
    if ( v86 < 0 )
    {
      v87 = 0x8000000000000000LL;
      v86 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v87 = v263 + 5;
    v86 = v263 + 4;
  }
  v255 = v263 + 4;
  v88 = (__m128i *)operator new(v87);
  v89 = v262;
  v25 = v24 + 4;
  v27 = v88;
  if ( v24 )
  {
    if ( v24 == 1 )
    {
      v88->m128i_i8[0] = *(_BYTE *)v262;
    }
    else
    {
      v256 = (__m128i *)v255;
      v255 = (size_t)v262;
      v90 = (__m128i *)memcpy(v88, v262, v24);
      v25 = (size_t)v256;
      v89 = (_QWORD *)v255;
      v27 = v90;
    }
  }
  *(__int32 *)((char *)v27->m128i_i32 + v24) = 791555631;
  if ( v89 != v264 )
  {
    v256 = v27;
    v255 = v25;
    operator delete(v89);
    v27 = v256;
    v25 = v255;
  }
  v262 = v27;
  v264[0] = v86;
LABEL_26:
  v263 = v25;
  v27->m128i_i8[v24 + 4] = 0;
  v28 = *(_QWORD *)(a1 + 8);
  v265 = v267;
  v29 = *(_BYTE **)(v28 + 248);
  v30 = *(_QWORD *)(v28 + 256);
  if ( &v29[v30] && !v29 )
    goto LABEL_487;
  if ( (unsigned __int64)v30 > 0xF )
  {
    v255 = *(_QWORD *)(v28 + 248);
    if ( v30 < 0 )
      goto LABEL_502;
    v31 = (_QWORD *)operator new(v30 + 1);
    v267[0] = v30;
    v29 = (_BYTE *)v255;
    v265 = v31;
LABEL_151:
    memcpy(v31, v29, v30);
    v31 = v265;
    goto LABEL_31;
  }
  if ( v30 == 1 )
  {
    LOBYTE(v267[0]) = *v29;
    v31 = v267;
    goto LABEL_31;
  }
  v31 = v267;
  if ( v30 )
    goto LABEL_151;
LABEL_31:
  v266 = v30;
  *((_BYTE *)v31 + v30) = 0;
  v32 = v266;
  if ( 0x7FFFFFFFFFFFFFFFLL - v266 <= 4 )
    goto LABEL_501;
  v33 = v266 + 5;
  if ( v265 == v267 )
  {
    v34 = 15;
    if ( v33 <= 0xF )
      goto LABEL_34;
  }
  else
  {
    v34 = v267[0];
    if ( v33 <= v267[0] )
    {
LABEL_34:
      v35 = (char *)v265 + v266;
      *(_DWORD *)v35 = 1651076143;
      v35[4] = 47;
      v36 = (__m128i *)v265;
      goto LABEL_35;
    }
  }
  if ( (v33 & 0x8000000000000000LL) != 0LL )
    goto LABEL_502;
  v91 = 2 * v34;
  if ( v33 < v91 )
  {
    v92 = v91 + 1;
    if ( v91 < 0 )
    {
      v92 = 0x8000000000000000LL;
      v91 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v92 = v266 + 6;
    v91 = v266 + 5;
  }
  v256 = (__m128i *)(v266 + 5);
  v255 = v266;
  v93 = (__m128i *)operator new(v92);
  v32 = v255;
  v33 = (size_t)v256;
  v36 = v93;
  v94 = v265;
  if ( v255 )
  {
    if ( v255 == 1 )
    {
      v93->m128i_i8[0] = *(_BYTE *)v265;
    }
    else
    {
      v95 = v255;
      v257 = v256;
      v256 = (__m128i *)v255;
      v255 = (size_t)v265;
      v96 = (__m128i *)memcpy(v93, v265, v95);
      v33 = (size_t)v257;
      v32 = (size_t)v256;
      v94 = (_QWORD *)v255;
      v36 = v96;
    }
  }
  v97 = &v36->m128i_i8[v32];
  *(_DWORD *)v97 = 1651076143;
  v97[4] = 47;
  if ( v94 != v267 )
  {
    v257 = v36;
    v256 = (__m128i *)v33;
    v255 = v32;
    operator delete(v94);
    v36 = v257;
    v33 = (size_t)v256;
    v32 = v255;
  }
  v265 = v36;
  v267[0] = v91;
LABEL_35:
  v266 = v33;
  v36->m128i_i8[v32 + 5] = 0;
  v37 = a3[2].m128i_u32[0];
  if ( v37 == 17 )
  {
    v99 = src;
    v288.m128i_i64[0] = (__int64)v289;
    if ( (char *)src + n && !src )
      goto LABEL_487;
    if ( n > 0xF )
    {
      v255 = (size_t)src;
      if ( (n & 0x8000000000000000LL) != 0LL )
        goto LABEL_502;
      v100 = (_QWORD *)operator new(n + 1);
      v289[0] = n;
      v99 = (const void *)v255;
      v288.m128i_i64[0] = (__int64)v100;
    }
    else
    {
      if ( n == 1 )
      {
        LOBYTE(v289[0]) = *(_BYTE *)src;
        v100 = v289;
        goto LABEL_180;
      }
      v100 = v289;
      if ( !n )
      {
LABEL_180:
        v288.m128i_i64[1] = n;
        *((_BYTE *)v100 + n) = 0;
        v101 = v288.m128i_i64[1];
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v288.m128i_i64[1]) <= 0xE )
          goto LABEL_501;
        v102 = v288.m128i_i64[1] + 15;
        if ( (_QWORD *)v288.m128i_i64[0] == v289 )
        {
          v103 = 15;
          if ( v102 <= 0xF )
            goto LABEL_183;
        }
        else
        {
          v103 = v289[0];
          if ( v102 <= v289[0] )
          {
LABEL_183:
            qmemcpy((void *)(v288.m128i_i64[1] + v288.m128i_i64[0]), "mipsel-nacl/lib", 15);
            v104 = v288.m128i_i64[0];
            goto LABEL_184;
          }
        }
        if ( (v102 & 0x8000000000000000LL) != 0LL )
          goto LABEL_502;
        v196 = 2 * v103;
        if ( v102 < v196 )
        {
          v197 = v196 + 1;
          if ( v196 < 0 )
          {
            v197 = 0x8000000000000000LL;
            v196 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          v197 = v288.m128i_i64[1] + 16;
          v196 = v288.m128i_i64[1] + 15;
        }
        v256 = (__m128i *)(v288.m128i_i64[1] + 15);
        v255 = v288.m128i_u64[1];
        v198 = (_BYTE *)operator new(v197);
        v101 = v255;
        v102 = (unsigned __int64)v256;
        v104 = (__int64)v198;
        v199 = (_QWORD *)v288.m128i_i64[0];
        if ( v255 )
        {
          if ( v255 == 1 )
          {
            *v198 = *(_BYTE *)v288.m128i_i64[0];
          }
          else
          {
            v200 = v255;
            v257 = v256;
            v256 = (__m128i *)v255;
            v255 = v288.m128i_i64[0];
            v201 = memcpy(v198, (const void *)v288.m128i_i64[0], v200);
            v102 = (unsigned __int64)v257;
            v101 = (__int64)v256;
            v199 = (_QWORD *)v255;
            v104 = (__int64)v201;
          }
        }
        qmemcpy((void *)(v104 + v101), "mipsel-nacl/lib", 15);
        if ( v199 != v289 )
        {
          v257 = (__m128i *)v104;
          v256 = (__m128i *)v102;
          v255 = v101;
          operator delete(v199);
          v104 = (__int64)v257;
          v102 = (unsigned __int64)v256;
          v101 = v255;
        }
        v288.m128i_i64[0] = v104;
        v289[0] = v196;
LABEL_184:
        v288.m128i_i64[1] = v102;
        v105 = v252;
        *(_BYTE *)(v104 + v101 + 15) = 0;
        sub_CEFAC0(v105, &v288);
        if ( (_QWORD *)v288.m128i_i64[0] != v289 )
          operator delete((void *)v288.m128i_i64[0]);
        v106 = src;
        v290.m128i_i64[0] = (__int64)v291;
        if ( (char *)src + n && !src )
          goto LABEL_487;
        if ( n > 0xF )
        {
          v255 = (size_t)src;
          if ( (n & 0x8000000000000000LL) != 0LL )
            goto LABEL_502;
          v107 = (_QWORD *)operator new(n + 1);
          v291[0] = n;
          v106 = (const void *)v255;
          v290.m128i_i64[0] = (__int64)v107;
        }
        else
        {
          if ( n == 1 )
          {
            LOBYTE(v291[0]) = *(_BYTE *)src;
            v107 = v291;
            goto LABEL_191;
          }
          v107 = v291;
          if ( !n )
          {
LABEL_191:
            v290.m128i_i64[1] = n;
            *((_BYTE *)v107 + n) = 0;
            v108 = v290.m128i_u64[1];
            if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v290.m128i_i64[1]) <= 0x12 )
              goto LABEL_501;
            v109 = v290.m128i_i64[1] + 19;
            if ( (_QWORD *)v290.m128i_i64[0] == v291 )
            {
              v110 = 15;
              if ( v109 <= 0xF )
                goto LABEL_194;
            }
            else
            {
              v110 = v291[0];
              if ( v109 <= v291[0] )
              {
LABEL_194:
                v111 = v290.m128i_i64[1] + v290.m128i_i64[0];
                si128 = _mm_load_si128((const __m128i *)&xmmword_23A9E80);
                *(_WORD *)(v111 + 16) = 26988;
                *(_BYTE *)(v111 + 18) = 98;
                *(__m128i *)v111 = si128;
                v113 = v290.m128i_i64[0];
                goto LABEL_195;
              }
            }
            if ( (v109 & 0x8000000000000000LL) != 0LL )
              goto LABEL_502;
            v188 = 2 * v110;
            if ( v109 < v188 )
            {
              v189 = v188 + 1;
              if ( v188 < 0 )
              {
                v189 = 0x8000000000000000LL;
                v188 = 0x7FFFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              v189 = v290.m128i_i64[1] + 20;
              v188 = v290.m128i_i64[1] + 19;
            }
            v256 = (__m128i *)(v290.m128i_i64[1] + 19);
            v255 = v290.m128i_u64[1];
            v190 = (_BYTE *)operator new(v189);
            v108 = v255;
            v109 = (unsigned __int64)v256;
            v113 = (size_t)v190;
            v191 = (_QWORD *)v290.m128i_i64[0];
            if ( v255 )
            {
              if ( v255 == 1 )
              {
                *v190 = *(_BYTE *)v290.m128i_i64[0];
              }
              else
              {
                v192 = v255;
                v257 = v256;
                v256 = (__m128i *)v255;
                v255 = v290.m128i_i64[0];
                v193 = memcpy(v190, (const void *)v290.m128i_i64[0], v192);
                v109 = (unsigned __int64)v257;
                v108 = (size_t)v256;
                v191 = (_QWORD *)v255;
                v113 = (size_t)v193;
              }
            }
            v194 = _mm_load_si128((const __m128i *)&xmmword_23A9E80);
            v195 = (__m128i *)(v113 + v108);
            v195[1].m128i_i16[0] = 26988;
            *v195 = v194;
            v195[1].m128i_i8[2] = 98;
            if ( v191 != v291 )
            {
              v257 = (__m128i *)v109;
              v256 = (__m128i *)v108;
              v255 = v113;
              operator delete(v191);
              v109 = (unsigned __int64)v257;
              v108 = (size_t)v256;
              v113 = v255;
            }
            v290.m128i_i64[0] = v113;
            v291[0] = v188;
LABEL_195:
            v290.m128i_i64[1] = v109;
            v114 = v252;
            *(_BYTE *)(v113 + v108 + 19) = 0;
            sub_CEFAC0(v114, &v290);
            if ( (_QWORD *)v290.m128i_i64[0] != v291 )
              operator delete((void *)v290.m128i_i64[0]);
            v115 = v262;
            v116 = v263;
            v292.m128i_i64[0] = (__int64)v293;
            if ( (char *)v262 + v263 && !v262 )
              goto LABEL_487;
            if ( v263 > 0xF )
            {
              v255 = (size_t)v262;
              if ( (v263 & 0x8000000000000000LL) != 0LL )
                goto LABEL_502;
              v117 = (_QWORD *)operator new(v263 + 1);
              v293[0] = v116;
              v115 = (const void *)v255;
              v292.m128i_i64[0] = (__int64)v117;
            }
            else
            {
              if ( v263 == 1 )
              {
                LOBYTE(v293[0]) = *(_BYTE *)v262;
                v117 = v293;
                goto LABEL_202;
              }
              v117 = v293;
              if ( !v263 )
              {
LABEL_202:
                v292.m128i_i64[1] = v116;
                *((_BYTE *)v117 + v116) = 0;
                v118 = v292.m128i_u64[1];
                if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v292.m128i_i64[1]) <= 2 )
                  goto LABEL_501;
                v119 = v292.m128i_i64[1] + 3;
                if ( (_QWORD *)v292.m128i_i64[0] == v293 )
                {
                  v120 = 15;
                  if ( v119 <= 0xF )
                    goto LABEL_205;
                }
                else
                {
                  v120 = v293[0];
                  if ( v119 <= v293[0] )
                  {
LABEL_205:
                    v121 = v292.m128i_i64[1] + v292.m128i_i64[0];
                    *(_WORD *)v121 = 26978;
                    *(_BYTE *)(v121 + 2) = 110;
                    v122 = v292.m128i_i64[0];
                    goto LABEL_206;
                  }
                }
                if ( (v119 & 0x8000000000000000LL) != 0LL )
                  goto LABEL_502;
                v220 = 2 * v120;
                if ( v119 < v220 )
                {
                  v221 = v220 + 1;
                  if ( v220 < 0 )
                  {
                    v221 = 0x8000000000000000LL;
                    v220 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                }
                else
                {
                  v221 = v292.m128i_i64[1] + 4;
                  v220 = v292.m128i_i64[1] + 3;
                }
                v256 = (__m128i *)(v292.m128i_i64[1] + 3);
                v255 = v292.m128i_u64[1];
                v222 = (_BYTE *)operator new(v221);
                v118 = v255;
                v119 = (unsigned __int64)v256;
                v122 = (size_t)v222;
                v223 = (_QWORD *)v292.m128i_i64[0];
                if ( v255 )
                {
                  if ( v255 == 1 )
                  {
                    *v222 = *(_BYTE *)v292.m128i_i64[0];
                  }
                  else
                  {
                    v224 = v255;
                    v257 = v256;
                    v256 = (__m128i *)v255;
                    v255 = v292.m128i_i64[0];
                    v225 = memcpy(v222, (const void *)v292.m128i_i64[0], v224);
                    v119 = (unsigned __int64)v257;
                    v118 = (size_t)v256;
                    v223 = (_QWORD *)v255;
                    v122 = (size_t)v225;
                  }
                }
                v226 = v122 + v118;
                *(_WORD *)v226 = 26978;
                *(_BYTE *)(v226 + 2) = 110;
                if ( v223 != v293 )
                {
                  v257 = (__m128i *)v119;
                  v256 = (__m128i *)v118;
                  v255 = v122;
                  operator delete(v223);
                  v119 = (unsigned __int64)v257;
                  v118 = (size_t)v256;
                  v122 = v255;
                }
                v292.m128i_i64[0] = v122;
                v293[0] = v220;
LABEL_206:
                v292.m128i_i64[1] = v119;
                v123 = v253;
                *(_BYTE *)(v122 + v118 + 3) = 0;
                sub_CEFAC0(v123, &v292);
                if ( (_QWORD *)v292.m128i_i64[0] != v293 )
                  operator delete((void *)v292.m128i_i64[0]);
                v124 = v265;
                v125 = v266;
                v294.m128i_i64[0] = (__int64)v295;
                if ( (char *)v265 + v266 && !v265 )
                  goto LABEL_487;
                if ( v266 > 0xF )
                {
                  v253 = (size_t)v265;
                  if ( (v266 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_502;
                  v126 = (_QWORD *)operator new(v266 + 1);
                  v295[0] = v125;
                  v124 = (const void *)v253;
                  v294.m128i_i64[0] = (__int64)v126;
                }
                else
                {
                  if ( v266 == 1 )
                  {
                    LOBYTE(v295[0]) = *(_BYTE *)v265;
                    v126 = v295;
                    goto LABEL_213;
                  }
                  v126 = v295;
                  if ( !v266 )
                  {
LABEL_213:
                    v294.m128i_i64[1] = v125;
                    *((_BYTE *)v126 + v125) = 0;
                    v127 = v294.m128i_i64[1];
                    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v294.m128i_i64[1]) <= 0xA )
                      goto LABEL_501;
                    v128 = v294.m128i_i64[1] + 11;
                    if ( (_QWORD *)v294.m128i_i64[0] == v295 )
                    {
                      v129 = 15;
                      if ( v128 <= 0xF )
                        goto LABEL_216;
                    }
                    else
                    {
                      v129 = v295[0];
                      if ( v128 <= v295[0] )
                      {
LABEL_216:
                        qmemcpy((void *)(v294.m128i_i64[1] + v294.m128i_i64[0]), "mipsel-nacl", 11);
                        v130 = v294.m128i_i64[0];
LABEL_217:
                        v294.m128i_i64[1] = v128;
                        *(_BYTE *)(v130 + v127 + 11) = 0;
                        goto LABEL_117;
                      }
                    }
                    if ( (v128 & 0x8000000000000000LL) != 0LL )
                      goto LABEL_502;
                    v246 = 2 * v129;
                    if ( v128 < v246 )
                    {
                      v247 = v246 + 1;
                      if ( v246 < 0 )
                      {
                        v247 = 0x8000000000000000LL;
                        v246 = 0x7FFFFFFFFFFFFFFFLL;
                      }
                    }
                    else
                    {
                      v247 = v294.m128i_i64[1] + 12;
                      v246 = v294.m128i_i64[1] + 11;
                    }
                    v255 = v294.m128i_i64[1] + 11;
                    v253 = v294.m128i_u64[1];
                    v248 = (_BYTE *)operator new(v247);
                    v127 = v253;
                    v128 = v255;
                    v130 = (size_t)v248;
                    v249 = (_QWORD *)v294.m128i_i64[0];
                    if ( v253 )
                    {
                      if ( v253 == 1 )
                      {
                        *v248 = *(_BYTE *)v294.m128i_i64[0];
                      }
                      else
                      {
                        v250 = v253;
                        v256 = (__m128i *)v255;
                        v255 = v253;
                        v253 = v294.m128i_i64[0];
                        v251 = memcpy(v248, (const void *)v294.m128i_i64[0], v250);
                        v128 = (size_t)v256;
                        v127 = v255;
                        v249 = (_QWORD *)v253;
                        v130 = (size_t)v251;
                      }
                    }
                    qmemcpy((void *)(v130 + v127), "mipsel-nacl", 11);
                    if ( v249 != v295 )
                    {
                      v256 = (__m128i *)v128;
                      v255 = v127;
                      v253 = v130;
                      operator delete(v249);
                      v128 = (size_t)v256;
                      v127 = v255;
                      v130 = v253;
                    }
                    v294.m128i_i64[0] = v130;
                    v295[0] = v246;
                    goto LABEL_217;
                  }
                }
                memcpy(v126, v124, v125);
                v126 = (_QWORD *)v294.m128i_i64[0];
                goto LABEL_213;
              }
            }
            memcpy(v117, v115, v116);
            v117 = (_QWORD *)v292.m128i_i64[0];
            goto LABEL_202;
          }
        }
        memcpy(v107, v106, n);
        v107 = (_QWORD *)v290.m128i_i64[0];
        goto LABEL_191;
      }
    }
    memcpy(v100, v99, n);
    v100 = (_QWORD *)v288.m128i_i64[0];
    goto LABEL_180;
  }
  if ( v37 <= 0x11 )
  {
    if ( v37 != 1 )
      goto LABEL_65;
    v59 = src;
    v282.m128i_i64[0] = (__int64)v283;
    if ( (char *)src + n && !src )
      goto LABEL_487;
    if ( n > 0xF )
    {
      v255 = (size_t)src;
      if ( (n & 0x8000000000000000LL) != 0LL )
        goto LABEL_502;
      v60 = (_QWORD *)operator new(n + 1);
      v283[0] = n;
      v59 = (const void *)v255;
      v282.m128i_i64[0] = (__int64)v60;
    }
    else
    {
      if ( n == 1 )
      {
        LOBYTE(v283[0]) = *(_BYTE *)src;
        v60 = v283;
        goto LABEL_88;
      }
      v60 = v283;
      if ( !n )
      {
LABEL_88:
        v282.m128i_i64[1] = n;
        *((_BYTE *)v60 + n) = 0;
        v61 = v282.m128i_u64[1];
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v282.m128i_i64[1]) <= 0xB )
          goto LABEL_501;
        v62 = v282.m128i_i64[1] + 12;
        if ( (_QWORD *)v282.m128i_i64[0] == v283 )
        {
          v63 = 15;
          if ( v62 <= 0xF )
            goto LABEL_91;
        }
        else
        {
          v63 = v283[0];
          if ( v62 <= v283[0] )
          {
LABEL_91:
            qmemcpy((void *)(v282.m128i_i64[1] + v282.m128i_i64[0]), "arm-nacl/lib", 12);
            v64 = v282.m128i_i64[0];
            goto LABEL_92;
          }
        }
        if ( (v62 & 0x8000000000000000LL) != 0LL )
          goto LABEL_502;
        v214 = 2 * v63;
        if ( v62 < v214 )
        {
          v215 = v214 + 1;
          if ( v214 < 0 )
          {
            v215 = 0x8000000000000000LL;
            v214 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          v215 = v282.m128i_i64[1] + 13;
          v214 = v282.m128i_i64[1] + 12;
        }
        v256 = (__m128i *)(v282.m128i_i64[1] + 12);
        v255 = v282.m128i_u64[1];
        v216 = (_BYTE *)operator new(v215);
        v61 = v255;
        v62 = (unsigned __int64)v256;
        v64 = (size_t)v216;
        v217 = (_QWORD *)v282.m128i_i64[0];
        if ( v255 )
        {
          if ( v255 == 1 )
          {
            *v216 = *(_BYTE *)v282.m128i_i64[0];
          }
          else
          {
            v218 = v255;
            v257 = v256;
            v256 = (__m128i *)v255;
            v255 = v282.m128i_i64[0];
            v219 = memcpy(v216, (const void *)v282.m128i_i64[0], v218);
            v62 = (unsigned __int64)v257;
            v61 = (size_t)v256;
            v217 = (_QWORD *)v255;
            v64 = (size_t)v219;
          }
        }
        qmemcpy((void *)(v64 + v61), "arm-nacl/lib", 12);
        if ( v217 != v283 )
        {
          v257 = (__m128i *)v62;
          v256 = (__m128i *)v61;
          v255 = v64;
          operator delete(v217);
          v62 = (unsigned __int64)v257;
          v61 = (size_t)v256;
          v64 = v255;
        }
        v282.m128i_i64[0] = v64;
        v283[0] = v214;
LABEL_92:
        v282.m128i_i64[1] = v62;
        v65 = v252;
        *(_BYTE *)(v64 + v61 + 12) = 0;
        sub_CEFAC0(v65, &v282);
        if ( (_QWORD *)v282.m128i_i64[0] != v283 )
          operator delete((void *)v282.m128i_i64[0]);
        v66 = src;
        v284.m128i_i64[0] = (__int64)v285;
        if ( (char *)src + n && !src )
          goto LABEL_487;
        if ( n > 0xF )
        {
          v255 = (size_t)src;
          if ( (n & 0x8000000000000000LL) != 0LL )
            goto LABEL_502;
          v67 = (_QWORD *)operator new(n + 1);
          v285[0] = n;
          v66 = (const void *)v255;
          v284.m128i_i64[0] = (__int64)v67;
        }
        else
        {
          if ( n == 1 )
          {
            LOBYTE(v285[0]) = *(_BYTE *)src;
            v67 = v285;
            goto LABEL_99;
          }
          v67 = v285;
          if ( !n )
          {
LABEL_99:
            v284.m128i_i64[1] = n;
            *((_BYTE *)v67 + n) = 0;
            v68 = v284.m128i_i64[1];
            if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v284.m128i_i64[1]) <= 0xF )
              goto LABEL_501;
            v69 = v284.m128i_i64[1] + 16;
            if ( (_QWORD *)v284.m128i_i64[0] == v285 )
            {
              v70 = 15;
              if ( v69 <= 0xF )
                goto LABEL_102;
            }
            else
            {
              v70 = v285[0];
              if ( v69 <= v285[0] )
              {
LABEL_102:
                *(__m128i *)(v284.m128i_i64[0] + v284.m128i_i64[1]) = _mm_load_si128((const __m128i *)&xmmword_23A9E70);
                v71 = v284.m128i_i64[0];
                goto LABEL_103;
              }
            }
            if ( (v69 & 0x8000000000000000LL) != 0LL )
              goto LABEL_502;
            v208 = 2 * v70;
            if ( v69 < v208 )
            {
              v209 = v208 + 1;
              if ( v208 < 0 )
              {
                v209 = 0x8000000000000000LL;
                v208 = 0x7FFFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              v209 = v284.m128i_i64[1] + 17;
              v208 = v284.m128i_i64[1] + 16;
            }
            v256 = (__m128i *)(v284.m128i_i64[1] + 16);
            v255 = v284.m128i_u64[1];
            v210 = (_BYTE *)operator new(v209);
            v68 = v255;
            v69 = (unsigned __int64)v256;
            v71 = (__int64)v210;
            v211 = (_QWORD *)v284.m128i_i64[0];
            if ( v255 )
            {
              if ( v255 == 1 )
              {
                *v210 = *(_BYTE *)v284.m128i_i64[0];
              }
              else
              {
                v212 = v255;
                v257 = v256;
                v256 = (__m128i *)v255;
                v255 = v284.m128i_i64[0];
                v213 = memcpy(v210, (const void *)v284.m128i_i64[0], v212);
                v69 = (unsigned __int64)v257;
                v68 = (__int64)v256;
                v211 = (_QWORD *)v255;
                v71 = (__int64)v213;
              }
            }
            *(__m128i *)(v71 + v68) = _mm_load_si128((const __m128i *)&xmmword_23A9E70);
            if ( v211 != v285 )
            {
              v257 = (__m128i *)v71;
              v256 = (__m128i *)v69;
              v255 = v68;
              operator delete(v211);
              v71 = (__int64)v257;
              v69 = (unsigned __int64)v256;
              v68 = v255;
            }
            v284.m128i_i64[0] = v71;
            v285[0] = v208;
LABEL_103:
            v284.m128i_i64[1] = v69;
            v72 = v252;
            *(_BYTE *)(v71 + v68 + 16) = 0;
            sub_CEFAC0(v72, &v284);
            if ( (_QWORD *)v284.m128i_i64[0] != v285 )
              operator delete((void *)v284.m128i_i64[0]);
            v73 = v262;
            v74 = v263;
            v286.m128i_i64[0] = (__int64)v287;
            if ( (char *)v262 + v263 && !v262 )
              goto LABEL_487;
            if ( v263 > 0xF )
            {
              v255 = (size_t)v262;
              if ( (v263 & 0x8000000000000000LL) != 0LL )
                goto LABEL_502;
              v75 = (_QWORD *)operator new(v263 + 1);
              v287[0] = v74;
              v73 = (const void *)v255;
              v286.m128i_i64[0] = (__int64)v75;
            }
            else
            {
              if ( v263 == 1 )
              {
                LOBYTE(v287[0]) = *(_BYTE *)v262;
                v75 = v287;
                goto LABEL_110;
              }
              v75 = v287;
              if ( !v263 )
              {
LABEL_110:
                v286.m128i_i64[1] = v74;
                *((_BYTE *)v75 + v74) = 0;
                v76 = v286.m128i_u64[1];
                if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v286.m128i_i64[1]) <= 0xB )
                  goto LABEL_501;
                v77 = v286.m128i_i64[1] + 12;
                if ( (_QWORD *)v286.m128i_i64[0] == v287 )
                {
                  v78 = 15;
                  if ( v77 <= 0xF )
                    goto LABEL_113;
                }
                else
                {
                  v78 = v287[0];
                  if ( v77 <= v287[0] )
                  {
LABEL_113:
                    qmemcpy((void *)(v286.m128i_i64[1] + v286.m128i_i64[0]), "arm-nacl/bin", 12);
                    v79 = v286.m128i_i64[0];
LABEL_114:
                    v286.m128i_i64[1] = v77;
                    v80 = v253;
                    *(_BYTE *)(v79 + v76 + 12) = 0;
                    sub_CEFAC0(v80, &v286);
                    if ( (_QWORD *)v286.m128i_i64[0] != v287 )
                      operator delete((void *)v286.m128i_i64[0]);
                    sub_F7DA00((size_t *)&v294, (__int64)&v265, "arm-nacl");
LABEL_117:
                    sub_CEFAC0(v252, &v294);
                    v56 = (void *)v294.m128i_i64[0];
                    if ( (_QWORD *)v294.m128i_i64[0] == v295 )
                      goto LABEL_65;
LABEL_64:
                    operator delete(v56);
                    goto LABEL_65;
                  }
                }
                if ( (v77 & 0x8000000000000000LL) != 0LL )
                  goto LABEL_502;
                v233 = 2 * v78;
                if ( v77 < v233 )
                {
                  v234 = v233 + 1;
                  if ( v233 < 0 )
                  {
                    v234 = 0x8000000000000000LL;
                    v233 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                }
                else
                {
                  v234 = v286.m128i_i64[1] + 13;
                  v233 = v286.m128i_i64[1] + 12;
                }
                v256 = (__m128i *)(v286.m128i_i64[1] + 12);
                v255 = v286.m128i_u64[1];
                v235 = (_BYTE *)operator new(v234);
                v76 = v255;
                v77 = (unsigned __int64)v256;
                v79 = (size_t)v235;
                v236 = (_QWORD *)v286.m128i_i64[0];
                if ( v255 )
                {
                  if ( v255 == 1 )
                  {
                    *v235 = *(_BYTE *)v286.m128i_i64[0];
                  }
                  else
                  {
                    v237 = v255;
                    v257 = v256;
                    v256 = (__m128i *)v255;
                    v255 = v286.m128i_i64[0];
                    v238 = memcpy(v235, (const void *)v286.m128i_i64[0], v237);
                    v77 = (unsigned __int64)v257;
                    v76 = (size_t)v256;
                    v236 = (_QWORD *)v255;
                    v79 = (size_t)v238;
                  }
                }
                qmemcpy((void *)(v79 + v76), "arm-nacl/bin", 12);
                if ( v236 != v287 )
                {
                  v257 = (__m128i *)v77;
                  v256 = (__m128i *)v76;
                  v255 = v79;
                  operator delete(v236);
                  v77 = (unsigned __int64)v257;
                  v76 = (size_t)v256;
                  v79 = v255;
                }
                v286.m128i_i64[0] = v79;
                v287[0] = v233;
                goto LABEL_114;
              }
            }
            memcpy(v75, v73, v74);
            v75 = (_QWORD *)v286.m128i_i64[0];
            goto LABEL_110;
          }
        }
        memcpy(v67, v66, n);
        v67 = (_QWORD *)v284.m128i_i64[0];
        goto LABEL_99;
      }
    }
    memcpy(v60, v59, n);
    v60 = (_QWORD *)v282.m128i_i64[0];
    goto LABEL_88;
  }
  if ( v37 != 37 )
  {
    if ( v37 != 38 )
      goto LABEL_65;
    sub_F7DA00((size_t *)&v294, (__int64)&src, "x86_64-nacl/lib");
    sub_CEFAC0(v252, &v294);
    if ( (_QWORD *)v294.m128i_i64[0] != v295 )
      operator delete((void *)v294.m128i_i64[0]);
    sub_F7DA00((size_t *)&v294, (__int64)&src, "x86_64-nacl/usr/lib");
    sub_CEFAC0(v252, &v294);
    if ( (_QWORD *)v294.m128i_i64[0] != v295 )
      operator delete((void *)v294.m128i_i64[0]);
    v38 = (__m128i *)&v276;
    v39 = v262;
    v40 = v263;
    v276 = v278;
    if ( (char *)v262 + v263 && !v262 )
      goto LABEL_487;
    if ( v263 > 0xF )
    {
      v256 = (__m128i *)&v276;
      v255 = (size_t)v262;
      if ( (v263 & 0x8000000000000000LL) != 0LL )
        goto LABEL_502;
      v41 = (_QWORD *)operator new(v263 + 1);
      v39 = (const void *)v255;
      v38 = v256;
      v278[0] = v40;
      v276 = v41;
    }
    else
    {
      if ( v263 == 1 )
      {
        LOBYTE(v278[0]) = *(_BYTE *)v262;
        v41 = v278;
        goto LABEL_48;
      }
      v41 = v278;
      if ( !v263 )
      {
LABEL_48:
        v277 = v40;
        *((_BYTE *)v41 + v40) = 0;
        v42 = v277;
        if ( 0x7FFFFFFFFFFFFFFFLL - v277 <= 0xE )
          goto LABEL_501;
        v43 = v277 + 15;
        if ( v276 == &v38[1] )
        {
          v44 = 15;
          if ( v43 <= 0xF )
            goto LABEL_51;
        }
        else
        {
          v44 = v278[0];
          if ( v43 <= v278[0] )
          {
LABEL_51:
            qmemcpy((char *)v276 + v277, "x86_64-nacl/bin", 15);
            v45 = (__m128i *)v276;
            goto LABEL_52;
          }
        }
        if ( (v43 & 0x8000000000000000LL) != 0LL )
          goto LABEL_502;
        v182 = 2 * v44;
        if ( v43 < v182 )
        {
          v183 = v182 + 1;
          if ( v182 < 0 )
          {
            v183 = 0x8000000000000000LL;
            v182 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          v183 = v277 + 16;
          v182 = v277 + 15;
        }
        v257 = v38;
        v256 = (__m128i *)(v277 + 15);
        v255 = v277;
        v184 = (__m128i *)operator new(v183);
        v42 = v255;
        v43 = (unsigned __int64)v256;
        v45 = v184;
        v185 = (__m128i *)v276;
        v38 = v257;
        if ( v255 )
        {
          if ( v255 == 1 )
          {
            v184->m128i_i8[0] = *(_BYTE *)v276;
          }
          else
          {
            v186 = v255;
            v258 = v257;
            v257 = v256;
            v256 = (__m128i *)v255;
            v255 = (size_t)v276;
            v187 = (__m128i *)memcpy(v184, v276, v186);
            v38 = v258;
            v43 = (unsigned __int64)v257;
            v42 = (size_t)v256;
            v185 = (__m128i *)v255;
            v45 = v187;
          }
        }
        qmemcpy(&v45->m128i_i8[v42], "x86_64-nacl/bin", 15);
        if ( v185 != &v38[1] )
        {
          v258 = v38;
          v257 = v45;
          v256 = (__m128i *)v43;
          v255 = v42;
          operator delete(v185);
          v38 = v258;
          v45 = v257;
          v43 = (unsigned __int64)v256;
          v42 = v255;
        }
        v276 = v45;
        v278[0] = v182;
LABEL_52:
        v277 = v43;
        v46 = v253;
        v45->m128i_i8[v42 + 15] = 0;
        v255 = (size_t)v38;
        sub_CEFAC0(v46, v38);
        if ( v276 != (void *)(v255 + 16) )
          operator delete(v276);
        v47 = (__m128i *)&v279;
        v48 = v265;
        v49 = v266;
        v279 = v281;
        if ( !((char *)v265 + v266) || v265 )
        {
          if ( v266 > 0xF )
          {
            v255 = (size_t)&v279;
            v253 = (size_t)v265;
            if ( (v266 & 0x8000000000000000LL) != 0LL )
              goto LABEL_502;
            v50 = (_QWORD *)operator new(v266 + 1);
            v48 = (const void *)v253;
            v47 = (__m128i *)v255;
            v281[0] = v49;
            v279 = v50;
          }
          else
          {
            if ( v266 == 1 )
            {
              LOBYTE(v281[0]) = *(_BYTE *)v265;
              v50 = v281;
              goto LABEL_59;
            }
            v50 = v281;
            if ( !v266 )
            {
LABEL_59:
              v280 = v49;
              *((_BYTE *)v50 + v49) = 0;
              v51 = v280;
              if ( 0x7FFFFFFFFFFFFFFFLL - v280 > 0xA )
              {
                v52 = v280 + 11;
                if ( v279 == &v47[1] )
                {
                  v53 = 15;
                  if ( v52 <= 0xF )
                    goto LABEL_62;
                }
                else
                {
                  v53 = v281[0];
                  if ( v52 <= v281[0] )
                  {
LABEL_62:
                    qmemcpy((char *)v279 + v280, "x86_64-nacl", 11);
                    v54 = (__m128i *)v279;
                    goto LABEL_63;
                  }
                }
                if ( (v52 & 0x8000000000000000LL) == 0LL )
                {
                  v202 = 2 * v53;
                  if ( v52 < v202 )
                  {
                    v203 = v202 + 1;
                    if ( v202 < 0 )
                    {
                      v203 = 0x8000000000000000LL;
                      v202 = 0x7FFFFFFFFFFFFFFFLL;
                    }
                  }
                  else
                  {
                    v203 = v280 + 12;
                    v202 = v280 + 11;
                  }
                  v256 = v47;
                  v255 = v280 + 11;
                  v253 = v280;
                  v204 = (__m128i *)operator new(v203);
                  v51 = v253;
                  v52 = v255;
                  v54 = v204;
                  v205 = (__m128i *)v279;
                  v47 = v256;
                  if ( v253 )
                  {
                    if ( v253 == 1 )
                    {
                      v204->m128i_i8[0] = *(_BYTE *)v279;
                    }
                    else
                    {
                      v206 = v253;
                      v257 = v256;
                      v256 = (__m128i *)v255;
                      v255 = v253;
                      v253 = (size_t)v279;
                      v207 = (__m128i *)memcpy(v204, v279, v206);
                      v47 = v257;
                      v52 = (unsigned __int64)v256;
                      v51 = v255;
                      v205 = (__m128i *)v253;
                      v54 = v207;
                    }
                  }
                  qmemcpy(&v54->m128i_i8[v51], "x86_64-nacl", 11);
                  if ( v205 != &v47[1] )
                  {
                    v257 = v47;
                    v256 = v54;
                    v255 = v52;
                    v253 = v51;
                    operator delete(v205);
                    v47 = v257;
                    v54 = v256;
                    v52 = v255;
                    v51 = v253;
                  }
                  v279 = v54;
                  v281[0] = v202;
LABEL_63:
                  v280 = v52;
                  v55 = v252;
                  v54->m128i_i8[v51 + 11] = 0;
                  v253 = (size_t)v47;
                  sub_CEFAC0(v55, v47);
                  v56 = v279;
                  if ( v279 == (void *)(v253 + 16) )
                    goto LABEL_65;
                  goto LABEL_64;
                }
LABEL_502:
                std::__throw_length_error("basic_string::_M_create");
              }
LABEL_501:
              std::__throw_length_error("basic_string::append");
            }
          }
          v253 = (size_t)v47;
          memcpy(v50, v48, v49);
          v50 = v279;
          v47 = (__m128i *)v253;
          goto LABEL_59;
        }
LABEL_487:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      }
    }
    v255 = (size_t)v38;
    memcpy(v41, v39, v40);
    v41 = v276;
    v38 = (__m128i *)v255;
    goto LABEL_48;
  }
  v131 = src;
  v268.m128i_i64[0] = (__int64)v269;
  if ( (char *)src + n && !src )
    goto LABEL_487;
  if ( n > 0xF )
  {
    v255 = (size_t)src;
    if ( (n & 0x8000000000000000LL) != 0LL )
      goto LABEL_502;
    v132 = (_QWORD *)operator new(n + 1);
    v269[0] = n;
    v131 = (const void *)v255;
    v268.m128i_i64[0] = (__int64)v132;
LABEL_316:
    memcpy(v132, v131, n);
    v132 = (_QWORD *)v268.m128i_i64[0];
    goto LABEL_223;
  }
  if ( n == 1 )
  {
    LOBYTE(v269[0]) = *(_BYTE *)src;
    v132 = v269;
    goto LABEL_223;
  }
  v132 = v269;
  if ( n )
    goto LABEL_316;
LABEL_223:
  v268.m128i_i64[1] = n;
  *((_BYTE *)v132 + n) = 0;
  v133 = v268.m128i_u64[1];
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v268.m128i_i64[1]) <= 0x10 )
    goto LABEL_501;
  v134 = v268.m128i_i64[1] + 17;
  if ( (_QWORD *)v268.m128i_i64[0] == v269 )
  {
    v135 = 15;
    if ( v134 <= 0xF )
      goto LABEL_226;
  }
  else
  {
    v135 = v269[0];
    if ( v134 <= v269[0] )
    {
LABEL_226:
      v136 = v268.m128i_i64[1] + v268.m128i_i64[0];
      v137 = _mm_load_si128((const __m128i *)&xmmword_23A9E50);
      *(_BYTE *)(v136 + 16) = 50;
      *(__m128i *)v136 = v137;
      v138 = v268.m128i_i64[0];
      goto LABEL_227;
    }
  }
  if ( (v134 & 0x8000000000000000LL) != 0LL )
    goto LABEL_502;
  v174 = 2 * v135;
  if ( v134 < v174 )
  {
    v175 = v174 + 1;
    if ( v174 < 0 )
    {
      v175 = 0x8000000000000000LL;
      v174 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v175 = v268.m128i_i64[1] + 18;
    v174 = v268.m128i_i64[1] + 17;
  }
  v256 = (__m128i *)(v268.m128i_i64[1] + 17);
  v255 = v268.m128i_u64[1];
  v176 = (_BYTE *)operator new(v175);
  v133 = v255;
  v134 = (unsigned __int64)v256;
  v138 = (size_t)v176;
  v177 = (_QWORD *)v268.m128i_i64[0];
  if ( v255 )
  {
    if ( v255 == 1 )
    {
      *v176 = *(_BYTE *)v268.m128i_i64[0];
    }
    else
    {
      v178 = v255;
      v257 = v256;
      v256 = (__m128i *)v255;
      v255 = v268.m128i_i64[0];
      v179 = memcpy(v176, (const void *)v268.m128i_i64[0], v178);
      v134 = (unsigned __int64)v257;
      v133 = (size_t)v256;
      v177 = (_QWORD *)v255;
      v138 = (size_t)v179;
    }
  }
  v180 = _mm_load_si128((const __m128i *)&xmmword_23A9E50);
  v181 = (__m128i *)(v138 + v133);
  v181[1].m128i_i8[0] = 50;
  *v181 = v180;
  if ( v177 != v269 )
  {
    v257 = (__m128i *)v134;
    v256 = (__m128i *)v133;
    v255 = v138;
    operator delete(v177);
    v134 = (unsigned __int64)v257;
    v133 = (size_t)v256;
    v138 = v255;
  }
  v268.m128i_i64[0] = v138;
  v269[0] = v174;
LABEL_227:
  v268.m128i_i64[1] = v134;
  v139 = v252;
  *(_BYTE *)(v138 + v133 + 17) = 0;
  sub_CEFAC0(v139, &v268);
  if ( (_QWORD *)v268.m128i_i64[0] != v269 )
    operator delete((void *)v268.m128i_i64[0]);
  v140 = src;
  v270.m128i_i64[0] = (__int64)v271;
  if ( (char *)src + n && !src )
    goto LABEL_487;
  if ( n > 0xF )
  {
    v255 = (size_t)src;
    if ( (n & 0x8000000000000000LL) != 0LL )
      goto LABEL_502;
    v141 = (_QWORD *)operator new(n + 1);
    v271[0] = n;
    v140 = (const void *)v255;
    v270.m128i_i64[0] = (__int64)v141;
LABEL_303:
    memcpy(v141, v140, n);
    v141 = (_QWORD *)v270.m128i_i64[0];
    goto LABEL_234;
  }
  if ( n == 1 )
  {
    LOBYTE(v271[0]) = *(_BYTE *)src;
    v141 = v271;
    goto LABEL_234;
  }
  v141 = v271;
  if ( n )
    goto LABEL_303;
LABEL_234:
  v270.m128i_i64[1] = n;
  *((_BYTE *)v141 + n) = 0;
  v142 = v270.m128i_i64[1];
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v270.m128i_i64[1]) <= 0x10 )
    goto LABEL_501;
  v143 = v270.m128i_i64[1] + 17;
  if ( (_QWORD *)v270.m128i_i64[0] == v271 )
  {
    v144 = 15;
    if ( v143 <= 0xF )
      goto LABEL_237;
  }
  else
  {
    v144 = v271[0];
    if ( v143 <= v271[0] )
    {
LABEL_237:
      v145 = v270.m128i_i64[1] + v270.m128i_i64[0];
      v146 = _mm_load_si128((const __m128i *)&xmmword_23A9E60);
      *(_BYTE *)(v145 + 16) = 98;
      *(__m128i *)v145 = v146;
      v147 = v270.m128i_i64[0];
      goto LABEL_238;
    }
  }
  if ( (v143 & 0x8000000000000000LL) != 0LL )
    goto LABEL_502;
  v166 = 2 * v144;
  if ( v143 < v166 )
  {
    v167 = v166 + 1;
    if ( v166 < 0 )
    {
      v167 = 0x8000000000000000LL;
      v166 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v167 = v270.m128i_i64[1] + 18;
    v166 = v270.m128i_i64[1] + 17;
  }
  v256 = (__m128i *)(v270.m128i_i64[1] + 17);
  v255 = v270.m128i_u64[1];
  v168 = (_BYTE *)operator new(v167);
  v142 = v255;
  v143 = (unsigned __int64)v256;
  v147 = (__int64)v168;
  v169 = (_QWORD *)v270.m128i_i64[0];
  if ( v255 )
  {
    if ( v255 == 1 )
    {
      *v168 = *(_BYTE *)v270.m128i_i64[0];
    }
    else
    {
      v170 = v255;
      v257 = v256;
      v256 = (__m128i *)v255;
      v255 = v270.m128i_i64[0];
      v171 = memcpy(v168, (const void *)v270.m128i_i64[0], v170);
      v143 = (unsigned __int64)v257;
      v142 = (__int64)v256;
      v169 = (_QWORD *)v255;
      v147 = (__int64)v171;
    }
  }
  v172 = _mm_load_si128((const __m128i *)&xmmword_23A9E60);
  v173 = (__m128i *)(v147 + v142);
  v173[1].m128i_i8[0] = 98;
  *v173 = v172;
  if ( v169 != v271 )
  {
    v257 = (__m128i *)v143;
    v256 = (__m128i *)v147;
    v255 = v142;
    operator delete(v169);
    v143 = (unsigned __int64)v257;
    v147 = (__int64)v256;
    v142 = v255;
  }
  v270.m128i_i64[0] = v147;
  v271[0] = v166;
LABEL_238:
  v270.m128i_i64[1] = v143;
  v148 = v252;
  *(_BYTE *)(v147 + v142 + 17) = 0;
  sub_CEFAC0(v148, &v270);
  if ( (_QWORD *)v270.m128i_i64[0] != v271 )
    operator delete((void *)v270.m128i_i64[0]);
  v149 = v262;
  v150 = v263;
  v272.m128i_i64[0] = (__int64)v273;
  if ( (char *)v262 + v263 && !v262 )
    goto LABEL_487;
  if ( v263 > 0xF )
  {
    v255 = (size_t)v262;
    if ( (v263 & 0x8000000000000000LL) != 0LL )
      goto LABEL_502;
    v151 = (_QWORD *)operator new(v263 + 1);
    v273[0] = v150;
    v149 = (const void *)v255;
    v272.m128i_i64[0] = (__int64)v151;
LABEL_397:
    memcpy(v151, v149, v150);
    v151 = (_QWORD *)v272.m128i_i64[0];
    goto LABEL_245;
  }
  if ( v263 == 1 )
  {
    LOBYTE(v273[0]) = *(_BYTE *)v262;
    v151 = v273;
    goto LABEL_245;
  }
  v151 = v273;
  if ( v263 )
    goto LABEL_397;
LABEL_245:
  v272.m128i_i64[1] = v150;
  *((_BYTE *)v151 + v150) = 0;
  v152 = v272.m128i_i64[1];
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v272.m128i_i64[1]) <= 0xE )
    goto LABEL_501;
  v153 = v272.m128i_i64[1] + 15;
  if ( (_QWORD *)v272.m128i_i64[0] == v273 )
  {
    v154 = 15;
    if ( v153 <= 0xF )
      goto LABEL_248;
  }
  else
  {
    v154 = v273[0];
    if ( v153 <= v273[0] )
    {
LABEL_248:
      qmemcpy((void *)(v272.m128i_i64[1] + v272.m128i_i64[0]), "x86_64-nacl/bin", 15);
      v155 = v272.m128i_i64[0];
      goto LABEL_249;
    }
  }
  if ( (v153 & 0x8000000000000000LL) != 0LL )
    goto LABEL_502;
  v227 = 2 * v154;
  if ( v153 < v227 )
  {
    v228 = v227 + 1;
    if ( v227 < 0 )
    {
      v228 = 0x8000000000000000LL;
      v227 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v228 = v272.m128i_i64[1] + 16;
    v227 = v272.m128i_i64[1] + 15;
  }
  v256 = (__m128i *)(v272.m128i_i64[1] + 15);
  v255 = v272.m128i_u64[1];
  v229 = (_BYTE *)operator new(v228);
  v152 = v255;
  v153 = (unsigned __int64)v256;
  v155 = (__int64)v229;
  v230 = (_QWORD *)v272.m128i_i64[0];
  if ( v255 )
  {
    if ( v255 == 1 )
    {
      *v229 = *(_BYTE *)v272.m128i_i64[0];
    }
    else
    {
      v231 = v255;
      v257 = v256;
      v256 = (__m128i *)v255;
      v255 = v272.m128i_i64[0];
      v232 = memcpy(v229, (const void *)v272.m128i_i64[0], v231);
      v153 = (unsigned __int64)v257;
      v152 = (__int64)v256;
      v230 = (_QWORD *)v255;
      v155 = (__int64)v232;
    }
  }
  qmemcpy((void *)(v155 + v152), "x86_64-nacl/bin", 15);
  if ( v230 != v273 )
  {
    v257 = (__m128i *)v155;
    v256 = (__m128i *)v153;
    v255 = v152;
    operator delete(v230);
    v155 = (__int64)v257;
    v153 = (unsigned __int64)v256;
    v152 = v255;
  }
  v272.m128i_i64[0] = v155;
  v273[0] = v227;
LABEL_249:
  v272.m128i_i64[1] = v153;
  v156 = v253;
  *(_BYTE *)(v155 + v152 + 15) = 0;
  sub_CEFAC0(v156, &v272);
  if ( (_QWORD *)v272.m128i_i64[0] != v273 )
    operator delete((void *)v272.m128i_i64[0]);
  v157 = v265;
  v158 = v266;
  v274.m128i_i64[0] = (__int64)v275;
  if ( (char *)v265 + v266 && !v265 )
    goto LABEL_487;
  if ( v266 > 0xF )
  {
    v253 = (size_t)v265;
    if ( (v266 & 0x8000000000000000LL) != 0LL )
      goto LABEL_502;
    v159 = (_QWORD *)operator new(v266 + 1);
    v275[0] = v158;
    v157 = (const void *)v253;
    v274.m128i_i64[0] = (__int64)v159;
LABEL_436:
    memcpy(v159, v157, v158);
    v159 = (_QWORD *)v274.m128i_i64[0];
    goto LABEL_256;
  }
  if ( v266 == 1 )
  {
    LOBYTE(v275[0]) = *(_BYTE *)v265;
    v159 = v275;
    goto LABEL_256;
  }
  v159 = v275;
  if ( v266 )
    goto LABEL_436;
LABEL_256:
  v274.m128i_i64[1] = v158;
  *((_BYTE *)v159 + v158) = 0;
  v160 = v274.m128i_i64[1];
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v274.m128i_i64[1]) <= 8 )
    goto LABEL_501;
  v161 = v274.m128i_i64[1] + 9;
  if ( (_QWORD *)v274.m128i_i64[0] == v275 )
  {
    v162 = 15;
    if ( v161 <= 0xF )
      goto LABEL_259;
  }
  else
  {
    v162 = v275[0];
    if ( v161 <= v275[0] )
    {
LABEL_259:
      v163 = v274.m128i_i64[1] + v274.m128i_i64[0];
      *(_BYTE *)(v163 + 8) = 108;
      *(_QWORD *)v163 = 0x63616E2D36383669LL;
      v164 = v274.m128i_i64[0];
      goto LABEL_260;
    }
  }
  if ( (v161 & 0x8000000000000000LL) != 0LL )
    goto LABEL_502;
  v239 = 2 * v162;
  if ( v161 < v239 )
  {
    v240 = v239 + 1;
    if ( v239 < 0 )
    {
      v240 = 0x8000000000000000LL;
      v239 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v240 = v274.m128i_i64[1] + 10;
    v239 = v274.m128i_i64[1] + 9;
  }
  v255 = v274.m128i_i64[1] + 9;
  v253 = v274.m128i_u64[1];
  v241 = (_BYTE *)operator new(v240);
  v160 = v253;
  v161 = v255;
  v164 = (size_t)v241;
  v242 = (_QWORD *)v274.m128i_i64[0];
  if ( v253 )
  {
    if ( v253 == 1 )
    {
      *v241 = *(_BYTE *)v274.m128i_i64[0];
    }
    else
    {
      v243 = v253;
      v256 = (__m128i *)v255;
      v255 = v253;
      v253 = v274.m128i_i64[0];
      v244 = memcpy(v241, (const void *)v274.m128i_i64[0], v243);
      v161 = (size_t)v256;
      v160 = v255;
      v242 = (_QWORD *)v253;
      v164 = (size_t)v244;
    }
  }
  v245 = v164 + v160;
  *(_QWORD *)v245 = 0x63616E2D36383669LL;
  *(_BYTE *)(v245 + 8) = 108;
  if ( v242 != v275 )
  {
    v256 = (__m128i *)v161;
    v255 = v160;
    v253 = v164;
    operator delete(v242);
    v161 = (size_t)v256;
    v160 = v255;
    v164 = v253;
  }
  v274.m128i_i64[0] = v164;
  v275[0] = v239;
LABEL_260:
  v274.m128i_i64[1] = v161;
  v165 = v252;
  *(_BYTE *)(v164 + v160 + 9) = 0;
  sub_CEFAC0(v165, &v274);
  v56 = (void *)v274.m128i_i64[0];
  if ( (_QWORD *)v274.m128i_i64[0] != v275 )
    goto LABEL_64;
LABEL_65:
  sub_112D4E0(&v294, a1, "nacl-arm-macros.s");
  v57 = *(_BYTE **)(a1 + 4984);
  if ( (_QWORD *)v294.m128i_i64[0] == v295 )
  {
    v98 = v294.m128i_i64[1];
    if ( v294.m128i_i64[1] )
    {
      if ( v294.m128i_i64[1] == 1 )
        *v57 = v295[0];
      else
        memcpy(v57, (const void *)v294.m128i_i64[0], v294.m128i_u64[1]);
      v98 = v294.m128i_i64[1];
      v57 = *(_BYTE **)(a1 + 4984);
    }
    *(_QWORD *)(a1 + 4992) = v98;
    v57[v98] = 0;
    v57 = (_BYTE *)v294.m128i_i64[0];
  }
  else
  {
    if ( v254 == v57 )
    {
      v252 = v295[0];
      *(_QWORD *)(a1 + 4984) = v294.m128i_i64[0];
      *(__m128 *)(a1 + 4992) = _mm_loadh_ps((const double *)&v252);
    }
    else
    {
      v252 = v295[0];
      v58 = *(_QWORD *)(a1 + 5000);
      *(_QWORD *)(a1 + 4984) = v294.m128i_i64[0];
      *(__m128 *)(a1 + 4992) = _mm_loadh_ps((const double *)&v252);
      if ( v57 )
      {
        v294.m128i_i64[0] = (__int64)v57;
        v295[0] = v58;
        goto LABEL_69;
      }
    }
    v57 = v295;
    v294.m128i_i64[0] = (__int64)v295;
  }
LABEL_69:
  v294.m128i_i64[1] = 0;
  *v57 = 0;
  if ( (_QWORD *)v294.m128i_i64[0] != v295 )
    operator delete((void *)v294.m128i_i64[0]);
  if ( v265 != v267 )
    operator delete(v265);
  if ( v262 != v264 )
    operator delete(v262);
  if ( src != v261 )
    operator delete(src);
}
