unsigned __int64 __fastcall sub_19B7590(
        __int64 *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        int a9,
        __int64 a10,
        unsigned __int64 a11,
        void **a12,
        __int64 a13,
        __int64 a14,
        unsigned __int64 a15,
        __int64 a16)
{
  int v18; // r15d
  unsigned int v19; // r14d
  unsigned int v20; // eax
  __int64 v21; // rsi
  int v22; // eax
  int v23; // edi
  __int16 v24; // cx
  int v25; // r14d
  char v26; // dl
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // r8
  char v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r14
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rsi
  unsigned int v51; // eax
  __int64 *v52; // rsi
  unsigned __int64 v53; // rbx
  __int64 v54; // rdi
  unsigned int v55; // r14d
  __int64 v56; // rsi
  __int64 v57; // rax
  unsigned __int16 v58; // dx
  unsigned int v59; // edx
  unsigned __int8 v60; // cl
  unsigned int v61; // eax
  _BOOL4 v62; // eax
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rsi
  unsigned __int64 v68; // r13
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rdx
  unsigned int v71; // ebp
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // r13
  __int64 v76; // r8
  unsigned int v77; // ebp
  void *v78; // rax
  __int64 v79; // r9
  unsigned __int8 v80; // al
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdi
  __int64 v86; // rdx
  __int64 v87; // r9
  __int64 v88; // rax
  __int32 v89; // edx
  __int64 *v90; // rsi
  int v91; // edx
  __int8 *v92; // rax
  __int64 v93; // r9
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // r9
  _QWORD *v99; // rdi
  unsigned __int64 *v101; // r14
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // r14
  void *v104; // rsi
  int v105; // eax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdi
  __int64 v109; // rax
  __int64 v110; // r14
  int v111; // r15d
  unsigned int v112; // edx
  unsigned __int16 v113; // ax
  int v114; // ebp
  unsigned int v115; // edx
  __int64 *v116; // rsi
  unsigned int v117; // ecx
  __int64 v118; // rdi
  __int64 v119; // rax
  __int64 *v120; // rbx
  unsigned int v121; // eax
  __int64 v122; // rbx
  __int64 v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  unsigned int v127; // eax
  unsigned __int64 v128; // rax
  __int64 v129; // r14
  int v130; // eax
  char v131; // al
  unsigned __int64 v132; // rax
  __int64 v133; // rax
  unsigned __int64 v134; // rax
  __int32 v135; // eax
  unsigned int v136; // eax
  unsigned __int64 v137; // rax
  __int32 v138; // eax
  unsigned int v139; // eax
  __int64 v140; // rax
  __int64 v141; // rbp
  unsigned int v142; // eax
  int v143; // eax
  unsigned int v144; // eax
  __int64 v145; // rax
  __int64 v146; // rax
  _QWORD *v147; // rbp
  __int64 v148; // rax
  __int64 v149; // rsi
  _QWORD *v150; // rax
  __int64 v151; // rbp
  __int64 v152; // rbp
  unsigned int v153; // ebp
  unsigned int v154; // eax
  __m128i si128; // xmm0
  void *v156; // rsi
  __int64 v157; // rax
  __int64 v158; // r14
  __int64 v159; // r15
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rbx
  __int64 v163; // r8
  __int64 v164; // r9
  void *v165; // rax
  _QWORD *v166; // rax
  char v167; // [rsp+18h] [rbp-22B0h]
  __int64 v168; // [rsp+18h] [rbp-22B0h]
  unsigned __int64 v169; // [rsp+20h] [rbp-22A8h]
  __int64 v170; // [rsp+28h] [rbp-22A0h]
  int v171; // [rsp+28h] [rbp-22A0h]
  unsigned __int64 *v172; // [rsp+30h] [rbp-2298h]
  unsigned __int64 v173; // [rsp+30h] [rbp-2298h]
  unsigned __int64 v174; // [rsp+38h] [rbp-2290h]
  unsigned int v175; // [rsp+40h] [rbp-2288h]
  __int64 v176; // [rsp+40h] [rbp-2288h]
  unsigned int v177; // [rsp+40h] [rbp-2288h]
  unsigned __int64 v178; // [rsp+40h] [rbp-2288h]
  unsigned int v179; // [rsp+48h] [rbp-2280h]
  __int64 v181; // [rsp+50h] [rbp-2278h]
  unsigned __int64 v182; // [rsp+50h] [rbp-2278h]
  __int128 v183; // [rsp+58h] [rbp-2270h]
  unsigned int v184; // [rsp+68h] [rbp-2260h]
  void *v185; // [rsp+70h] [rbp-2258h]
  unsigned __int64 v186; // [rsp+78h] [rbp-2250h]
  __int64 v187; // [rsp+88h] [rbp-2240h]
  unsigned __int64 v188; // [rsp+90h] [rbp-2238h]
  __int64 v189; // [rsp+98h] [rbp-2230h]
  unsigned __int8 v190; // [rsp+AAh] [rbp-221Eh]
  char v191; // [rsp+ABh] [rbp-221Dh]
  unsigned int v192; // [rsp+ACh] [rbp-221Ch]
  unsigned __int64 v193; // [rsp+B0h] [rbp-2218h]
  unsigned __int64 v194; // [rsp+C0h] [rbp-2208h]
  __int64 v195; // [rsp+E0h] [rbp-21E8h] BYREF
  __int64 v196; // [rsp+E8h] [rbp-21E0h]
  unsigned int v197; // [rsp+FCh] [rbp-21CCh] BYREF
  unsigned int v198; // [rsp+100h] [rbp-21C8h] BYREF
  unsigned int v199; // [rsp+104h] [rbp-21C4h] BYREF
  __int64 v200; // [rsp+108h] [rbp-21C0h] BYREF
  __int64 v201; // [rsp+110h] [rbp-21B8h] BYREF
  void *v202; // [rsp+118h] [rbp-21B0h] BYREF
  _BYTE v203[4]; // [rsp+120h] [rbp-21A8h] BYREF
  int v204; // [rsp+124h] [rbp-21A4h]
  int v205; // [rsp+128h] [rbp-21A0h]
  int v206; // [rsp+12Ch] [rbp-219Ch]
  unsigned __int64 v207; // [rsp+130h] [rbp-2198h] BYREF
  _BOOL4 v208; // [rsp+138h] [rbp-2190h]
  int v209; // [rsp+13Ch] [rbp-218Ch]
  void *v210; // [rsp+140h] [rbp-2188h] BYREF
  unsigned int v211; // [rsp+148h] [rbp-2180h]
  void *v212[2]; // [rsp+150h] [rbp-2178h] BYREF
  __int64 v213; // [rsp+160h] [rbp-2168h]
  _DWORD v214[2]; // [rsp+170h] [rbp-2158h] BYREF
  __int64 v215; // [rsp+178h] [rbp-2150h]
  __int64 v216; // [rsp+180h] [rbp-2148h]
  _QWORD v217[4]; // [rsp+190h] [rbp-2138h] BYREF
  __int64 v218[4]; // [rsp+1B0h] [rbp-2118h] BYREF
  _QWORD *v219; // [rsp+1D0h] [rbp-20F8h] BYREF
  __int64 v220; // [rsp+1D8h] [rbp-20F0h]
  unsigned __int64 v221; // [rsp+1E0h] [rbp-20E8h]
  int v222; // [rsp+1E8h] [rbp-20E0h]
  unsigned int v223; // [rsp+1F0h] [rbp-20D8h]
  char v224; // [rsp+1F4h] [rbp-20D4h]
  void *v225; // [rsp+200h] [rbp-20C8h] BYREF
  _BYTE v226[12]; // [rsp+208h] [rbp-20C0h] BYREF
  char v227; // [rsp+214h] [rbp-20B4h]
  void *v228; // [rsp+218h] [rbp-20B0h]
  __int64 v229; // [rsp+220h] [rbp-20A8h]
  _BYTE v230[40]; // [rsp+228h] [rbp-20A0h] BYREF
  void *ptr; // [rsp+250h] [rbp-2078h] BYREF
  __m128i v232; // [rsp+258h] [rbp-2070h] BYREF
  void *v233[2]; // [rsp+268h] [rbp-2060h] BYREF
  _BYTE v234[104]; // [rsp+278h] [rbp-2050h] BYREF
  void *v235[2]; // [rsp+2E0h] [rbp-1FE8h] BYREF
  unsigned __int64 v236; // [rsp+2F0h] [rbp-1FD8h]
  __int64 v237; // [rsp+2F8h] [rbp-1FD0h]
  unsigned __int8 *v238[2]; // [rsp+300h] [rbp-1FC8h] BYREF
  _BYTE v239[80]; // [rsp+310h] [rbp-1FB8h] BYREF
  unsigned int v240; // [rsp+360h] [rbp-1F68h]
  char v241; // [rsp+364h] [rbp-1F64h]
  __int64 v242; // [rsp+390h] [rbp-1F38h]
  __int64 v243; // [rsp+398h] [rbp-1F30h]
  __int64 v244; // [rsp+3A0h] [rbp-1F28h]
  __int64 v245; // [rsp+3B0h] [rbp-1F18h]
  __int64 v246; // [rsp+3B8h] [rbp-1F10h]
  int v247; // [rsp+3C8h] [rbp-1F00h]
  char v248; // [rsp+3CCh] [rbp-1EFCh]
  _QWORD *v249; // [rsp+3D0h] [rbp-1EF8h]
  __int64 v250; // [rsp+3D8h] [rbp-1EF0h]
  _QWORD v251[12]; // [rsp+3E0h] [rbp-1EE8h] BYREF
  _WORD v252[52]; // [rsp+440h] [rbp-1E88h] BYREF
  __int64 *v253; // [rsp+4A8h] [rbp-1E20h]
  __int64 v254; // [rsp+4B0h] [rbp-1E18h]
  __int64 v255; // [rsp+4B8h] [rbp-1E10h] BYREF

  LODWORD(v183) = a3;
  LODWORD(v181) = a9;
  v18 = (_DWORD)a12 + 8;
  *(_QWORD *)((char *)&v183 + 4) = a10;
  v170 = a13;
  v175 = a2;
  v167 = a14;
  v195 = a5;
  v196 = a6;
  v169 = HIDWORD(a15);
  v235[0] = *a12;
  v235[1] = a12 + 1;
  v19 = sub_F6CE20((__int64 *)v235);
  v20 = sub_F6CCB0((__int64 *)v235, a7);
  v21 = v20;
  v202 = (void *)__PAIR64__(v19, v20);
  v22 = a15;
  v197 = a2;
  if ( (_DWORD)a15 && (_DWORD)v169 )
  {
    if ( !a16 )
    {
      v174 = 0;
      v172 = (unsigned __int64 *)&a16;
      goto LABEL_8;
    }
    v23 = 1;
    v24 = *(_WORD *)a16 & 0x1FF;
    if ( v24 == 19 )
    {
LABEL_6:
      v174 = *(unsigned int *)(a16 + 4);
      v172 = (unsigned __int64 *)(a16 + 24);
      goto LABEL_7;
    }
  }
  else
  {
    if ( !a16 )
    {
      v174 = 0;
      v172 = (unsigned __int64 *)&a16;
      goto LABEL_40;
    }
    v23 = 0;
    v24 = *(_WORD *)a16 & 0x1FF;
    if ( v24 == 53 )
    {
      v173 = a16;
      v25 = sub_EEC140(a16);
      v22 = sub_EEB7E0(v173, v21, *(double *)a7.m128_u64);
      v26 = 1;
      v174 = 1;
      v172 = (unsigned __int64 *)&a16;
      v21 = (unsigned int)v21;
      v179 = 2;
      goto LABEL_9;
    }
    if ( v24 == 19 )
      goto LABEL_6;
  }
  if ( v24 == 103 )
  {
    v174 = *(unsigned int *)(a16 + 16);
    v172 = (unsigned __int64 *)(a16 + 48);
    if ( v23 == 1 )
      goto LABEL_8;
LABEL_40:
    v25 = v21;
    v22 = v21;
    v26 = 3;
    v179 = 0;
    goto LABEL_9;
  }
  v174 = 1;
  v172 = (unsigned __int64 *)&a16;
LABEL_7:
  if ( v23 != 1 )
    goto LABEL_40;
LABEL_8:
  v179 = 1;
  v25 = v169;
  v26 = 0;
LABEL_9:
  v205 = v22;
  v203[0] = v26;
  v203[1] = 0;
  v204 = v21;
  v206 = v25;
  v27 = sub_F57E80(*(_QWORD *)(a11 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v27 || (*(_QWORD *)(v27 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v27 + 17) & 4) != 0 )
    goto LABEL_12;
  if ( *(_BYTE *)(v27 + 16) == 17 )
  {
    if ( v167 )
    {
      v120 = a1 + 1;
      if ( v170 )
      {
        v121 = sub_C00A40(v170, v21, v28, v29, v30);
        sub_168B9F0((__int64)v235, v120, v121, 0xE15u, 0);
        LODWORD(v225) = 2;
        v122 = sub_1587D10((__int64)v235, (int *)&v225);
        ptr = (void *)sub_EEC8C0(v170, (__int64)&v225, *(double *)a7.m128_u64);
      }
      else
      {
        sub_168B9F0((__int64)v235, v120, (unsigned int)v202, 0xE15u, 0);
        LODWORD(v225) = 2;
        v122 = sub_1587D10((__int64)v235, (int *)&v225);
        ptr = v202;
      }
      v123 = v122;
      v53 = 1;
      sub_1587DB0(v123, (__int64 *)&ptr);
      sub_15F7200(v235);
      return v53;
    }
    LODWORD(v235[0]) = 8;
    v235[1] = nullptr;
    v236 = a11;
    LODWORD(v237) = 0;
    LODWORD(v238[0]) = v197;
    BYTE4(v238[0]) = 0;
    a11 = sub_1A26590(a1, a12, v235, v203, v172, v174);
    v31 = a11 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (a11 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 1;
    goto LABEL_14;
  }
  LOBYTE(v217[0]) = v179 == 2;
  if ( v179 == 2 )
  {
    v101 = *(unsigned __int64 **)(*v172 + 16);
    v102 = (unsigned int)((__int64)(*(_QWORD *)(*v172 + 24) - (_QWORD)v101) >> 3);
  }
  else
  {
    v29 = v179;
    if ( !v179 )
      goto LABEL_156;
    v102 = v174;
    v101 = v172;
  }
  if ( !v102 )
  {
LABEL_156:
    v115 = v197;
    v116 = a1 + 1;
    v117 = 3264;
LABEL_157:
    sub_168B9F0((__int64)v235, v116, v115, v117, 0);
    v118 = (__int64)v235;
LABEL_158:
    v119 = sub_1605D30(v118, (__int64 *)&a11);
    v53 = 1;
    sub_15884C0(v119, (__int64 *)&v202);
    sub_15F7200(v235);
    return v53;
  }
  if ( v102 != 1 )
  {
    v127 = sub_EEB7E0(v101[1], v21, *(double *)a7.m128_u64);
    v116 = a1 + 1;
    v117 = 3262;
    v115 = v127;
    goto LABEL_157;
  }
  if ( v179 == 2 && (*(_BYTE *)(a1[29] + 1) & 0x40) == 0 )
  {
    v139 = sub_EEB7E0(a16, v21, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)v235, a1 + 1, v139, 0x157Cu, 0);
    v140 = sub_1605D30((__int64)v235, (__int64 *)&a11);
    v21 = (__int64)&v202;
    sub_15884C0(v140, (__int64 *)&v202);
    sub_15F7200(v235);
  }
  v103 = *v101;
  if ( (*(_WORD *)v103 & 0x1FF) == 0x35 )
  {
    v136 = sub_EEB7E0(v103, v21, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)v235, a1 + 1, v136, 0xCB3u, 0);
    v118 = sub_15890D0((__int64)v235, (unsigned __int8 *)v217);
    goto LABEL_158;
  }
  v218[0] = 0;
  a7 = 0;
  LODWORD(v236) = sub_C00A40(v103, v21, v28, v29, v30);
  v243 &= 0xFFFFFFFE00000000LL;
  v245 &= 0xFFFFFFFE00000000LL;
  WORD2(v236) = 0;
  v249 = v251;
  v238[0] = v239;
  v251[10] = v252;
  v238[1] = (unsigned __int8 *)0x400000000LL;
  v251[11] = 0x400000000LL;
  v252[48] = 0;
  v254 = 0x400000000LL;
  v250 = 0x800000000LL;
  v253 = &v255;
  v104 = *a12;
  *(_OWORD *)v235 = 0;
  v237 = 0;
  v242 = 0;
  v244 = 0;
  v246 = 0;
  v247 = 0;
  v248 = 0;
  v251[8] = 0;
  v251[9] = 0;
  v105 = sub_1D79BF0((_DWORD)a1, (_DWORD)v104, v18, v103, (unsigned int)v218, (unsigned int)v235, 0, 0, 0);
  if ( v105 && v105 != 18 )
  {
    sub_168B9F0((__int64)&ptr, a1 + 1, v197, 0xCBFu, 0);
    v106 = sub_1605D30((__int64)&ptr, (__int64 *)&a11);
    v219 = *(_QWORD **)(v103 + 8);
    v107 = sub_162B6D0(v106, (__int64 *)&v219);
    v108 = sub_15884C0(v107, (__int64 *)&v202);
    v53 = 1;
    v225 = (void *)sub_EEC8C0(v103, (__int64)&v202, 0.0);
    sub_1587DB0(v108, (__int64 *)&v225);
    sub_15F7200(&ptr);
LABEL_132:
    sub_19A2E00((__int64)v235);
    return v53;
  }
  if ( (v218[0] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v53 = 1;
    goto LABEL_132;
  }
  a11 = v218[0];
  sub_19A2E00((__int64)v235);
LABEL_12:
  if ( v167 )
  {
    if ( (unsigned __int8)sub_19ABE20(a1, a11, (unsigned int)v202, (__int64)v202) )
      return 1;
    goto LABEL_142;
  }
  v31 = a11 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_14:
  if ( (*(_BYTE *)(*(_QWORD *)v31 + 17LL) & 4) == 0 )
  {
    v109 = sub_A72040((_QWORD *)a1[31], a11);
    v110 = v109;
    if ( v109 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(v109 + 16) - 2 <= 1 )
      {
        v111 = HIDWORD(v202);
        v168 = sub_A63CE0((_QWORD *)a1[31]);
        sub_A5DAD0((__int64)v235, v110);
        v170 = sub_C0C5D0((_QWORD *)a1[31], (__int64)v235, v168, v111);
        if ( LODWORD(v235[1]) > 0x40 && v235[0] )
          operator delete[](v235[0]);
        a11 = *(_QWORD *)(v110 + 32);
        if ( (unsigned __int8)sub_19ABE20(a1, a11, (unsigned int)v202, (__int64)v202) )
          return 1;
        v167 = 1;
LABEL_142:
        v32 = a11;
        v35 = sub_1E66970(a1, a11, (unsigned int)v202);
        if ( !v35 )
          return 1;
        goto LABEL_16;
      }
    }
  }
  v32 = a11;
  v35 = sub_19ABE20(a1, a11, (unsigned int)v202, (__int64)v202);
  if ( v35 )
    return 1;
LABEL_16:
  if ( (*(_BYTE *)(a1[29] + 107) & 4) != 0 )
  {
    v36 = *(_QWORD *)&byte_8[a11 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v36 & 8) == 0 || (v36 &= 0xFFFFFFFFFFFFFFF0LL, (*(_WORD *)(v36 + 24) & 0x1C0) == 0) )
    {
      if ( sub_F6ACC0(*(_QWORD *)(a11 & 0xFFFFFFFFFFFFFFF0LL), v32, v36, v33, v34) )
      {
        v129 = a1[31];
        v130 = sub_F68130(*(_QWORD *)(a11 & 0xFFFFFFFFFFFFFFF0LL));
        a11 = sub_A70F20(v129, a11, v130 << 6);
      }
    }
  }
  v186 = sub_A70010(a1[31], a11);
  if ( !v35 || !v170 )
    goto LABEL_41;
  v41 = *(_QWORD *)(*(_QWORD *)(v170 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v41 + 16) == 13 && ((*(_WORD *)(v41 + 18) >> 3) & 0x1FFu) > 0x1F2 )
  {
    v128 = sub_1907C70((__int64)a1, (_QWORD *)v170, (__m128i)a7, a8, v37, v38, v39, v40);
    if ( v128 == 1 )
      return 1;
    v185 = (void *)(v128 & 0xFFFFFFFFFFFFFFFELL);
    v170 = v128 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v128 & 0xFFFFFFFFFFFFFFFELL) == 0 )
    {
      v191 = 0;
      v167 = 1;
      goto LABEL_42;
    }
    v167 = 1;
  }
  if ( (*(_DWORD *)v170 & 0x10000) != 0 )
  {
LABEL_41:
    v191 = 0;
    v185 = nullptr;
    goto LABEL_42;
  }
  if ( (*(_BYTE *)(a1[29] + 1) & 0x20) == 0 )
  {
    v235[0] = off_2C5EDA0;
    v42 = v197;
    BYTE2(v235[1]) = 0;
    v236 = v170;
    LOWORD(v235[1]) = 0;
    v47 = sub_1BF9B70(a1, v197, v170, v235);
    if ( v47 != 1 )
      goto LABEL_27;
    return 1;
  }
  v124 = sub_A63CE0((_QWORD *)a1[31]);
  v42 = v170;
  v47 = sub_1BFA490(a1, v170, v124, 3, 0);
  if ( v47 == 1 )
    return 1;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v170 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 48 )
  {
    sub_168B9F0((__int64)v235, a1 + 1, v197, 0x1A66u, 0);
    ptr = *(void **)(v170 + 8);
    v125 = sub_162B6D0((__int64)v235, (__int64 *)&ptr);
    v42 = (__int64)&v225;
    LODWORD(v225) = 0;
    v126 = sub_1587D10(v125, (int *)&v225);
    if ( *(_BYTE *)(v126 + 120) )
    {
      v42 = (__int64)"'size_t'";
      sub_AE9DF0((unsigned __int8 **)(v126 + 32), (__int64)"'size_t'", 1u);
    }
    else if ( *(_BYTE *)(v126 + 132) )
    {
      v42 = (__int64)"'size_t'";
      sub_19A9980(v126, (__int64)"'size_t'");
    }
    sub_15F7200(v235);
  }
LABEL_27:
  v170 = v47 & 0xFFFFFFFFFFFFFFFELL;
  v35 = sub_F61920(
          *(_QWORD *)(*(_QWORD *)((v47 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL),
          v42,
          v43,
          v44,
          v45,
          v46);
  if ( !v35 )
    return 1;
  sub_C3EB00((__int64)&v219, v170, a1[31], nullptr, v48, v49);
  if ( (_BYTE)v221 )
  {
    if ( !BYTE4(v220) )
    {
      v50 = (__int64)v219;
      if ( (unsigned int)v220 > 0x40 )
        v50 = v219[(unsigned int)(v220 - 1) >> 6];
      if ( (v50 & (1LL << ((unsigned __int8)v220 - 1))) != 0 )
      {
        v51 = sub_EEB7E0(v170, v50, *(double *)a7.m128_u64);
        v52 = a1 + 1;
        v53 = 1;
        sub_168B9F0((__int64)v235, v52, v51, 0x14B3u, 0);
        ptr = (void *)sub_EEC8C0(v170, (__int64)v52, *(double *)a7.m128_u64);
        sub_1587DB0((__int64)v235, (__int64 *)&ptr);
        sub_15F7200(v235);
LABEL_34:
        sub_98E4B0((__int64)&v219);
        return v53;
      }
    }
    v149 = a11;
    if ( (*(_BYTE *)(*(_QWORD *)(a11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
      v153 = sub_F56CB0((_QWORD *)a1[31], a11, (__int64)&v219);
      if ( (unsigned int)sub_F56FC0((_QWORD *)a1[31]) < v153 )
      {
        v154 = sub_EEB7E0(v170, v149, *(double *)a7.m128_u64);
        sub_168B9F0((__int64)v235, a1 + 1, v154, 0xC15u, 0);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
        ptr = v233;
        v232 = si128;
        sub_220BA90((unsigned int)&v219, (unsigned int)&ptr, 10, BYTE4(v220) ^ 1, 0, 1, 0);
        v156 = ptr;
        v225 = &v226[8];
        sub_19A0BE0(&v225, ptr, (__int64)ptr + v232.m128i_i64[0]);
        if ( ptr != v233 )
          free(ptr);
        if ( v239[72] )
        {
          v156 = v225;
          sub_AEC220(v238, v225, *(signed __int64 *)v226);
        }
        else if ( v241 )
        {
          v162 = sub_168B9E0(v235);
          v165 = (void *)v236;
          if ( v236 )
            v165 = (void *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v236 + 32LL))(v236);
          ptr = v165;
          v166 = sub_1587BC0(v162, (__int64 *)&ptr, v160, v161, v163, v164);
          v156 = v225;
          sub_AEC220((unsigned __int8 **)(*v166 + 32LL * v240 + 8), v225, *(signed __int64 *)v226);
        }
        v53 = 1;
        ptr = (void *)sub_EEC8C0(v170, (__int64)v156, *(double *)si128.m128i_i64);
        sub_1587DB0((__int64)v235, (__int64 *)&ptr);
        if ( v225 != &v226[8] )
          operator delete(v225);
        sub_15F7200(v235);
        goto LABEL_34;
      }
    }
    v150 = v219;
    if ( (unsigned int)v220 > 0x40 )
      v150 = (_QWORD *)*v219;
    v185 = v150;
    v191 = 1;
  }
  else if ( (_DWORD)a10 && HIDWORD(a10) )
  {
    v144 = sub_EEB7E0(v170, v170, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)v235, a1 + 1, v144, 0x15FCu, 0);
    v218[0] = sub_EEC8C0(v170, (__int64)(a1 + 1), *(double *)a7.m128_u64);
    v145 = sub_1587DB0((__int64)v235, v218);
    LODWORD(v225) = a10;
    v228 = v230;
    HIDWORD(v225) = a10;
    *(_QWORD *)&v226[4] = 0;
    v227 = 0;
    v229 = 0;
    v230[0] = 0;
    v230[16] = 0;
    v226[0] = 1;
    v146 = sub_1589170(v145, &v225);
    *(__int64 *)((char *)v232.m128i_i64 + 4) = 0;
    v232.m128i_i8[12] = 0;
    v233[0] = v234;
    v233[1] = nullptr;
    v234[0] = 0;
    v234[16] = 0;
    LODWORD(ptr) = HIDWORD(a10);
    HIDWORD(ptr) = HIDWORD(a10);
    v232.m128i_i8[0] = 1;
    sub_1589170(v146, &ptr);
    if ( v233[0] != v234 )
      operator delete(v233[0]);
    if ( v228 != v230 )
      operator delete(v228);
    sub_15F7200(v235);
    v191 = 0;
    v185 = nullptr;
    *(_QWORD *)((char *)&v183 + 4) = 0;
  }
  else
  {
    v191 = 0;
    v185 = nullptr;
  }
  sub_98E4B0((__int64)&v219);
  v167 = 1;
LABEL_42:
  v54 = a1[31];
  v55 = 0;
  v200 = 0;
  v201 = 0;
  v56 = *(_QWORD *)(a11 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v56 + 17) & 4) == 0 )
  {
    sub_A97D20(v54, v56);
    v54 = a1[31];
    v55 = v112;
  }
  v57 = *(_QWORD *)(v54 + 17448);
  v58 = *(_WORD *)(v57 + 64);
  if ( v58 )
  {
    v184 = v58;
  }
  else
  {
    v59 = *(unsigned __int8 *)(v57 + 25);
    v60 = *(_BYTE *)(v57 + 33);
    v61 = v60;
    if ( (unsigned __int8)v59 >= v60 )
      v61 = v59;
    v184 = v61;
  }
  v62 = sub_183E2F0((__int64)a1);
  v65 = a1[29];
  v208 = v62;
  v66 = a11;
  v209 = (*(_BYTE *)(v65 + 97) >> 5) & (v55 > v184);
  v207 = a11;
  if ( (a11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v207 = sub_6D5440(&v207);
  v190 = sub_190A790((__int64)a1, v195, v196, v66, v63, v64, (__m128i)a7, a8);
  if ( v190 )
    return 1;
  v67 = v175;
  v68 = v175 | a2 & 0xFFFFFFFF00000000LL;
  v69 = 2 * (unsigned int)((_BYTE)v183 == 0);
  v187 = v175;
  v188 = v68;
  v70 = v68;
  v71 = a4;
  if ( a4 && a9 )
    v70 = (unsigned int)v68 | (unsigned __int64)(v181 << 32);
  else
    v71 = v175;
  if ( (*(_BYTE *)(*(_QWORD *)(a11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
  {
    v67 = v196;
    v182 = v70;
    v177 = 2 * ((_BYTE)v183 == 0);
    v131 = sub_BFE470((_DWORD **)v195, v196);
    v69 = v177;
    if ( !v131 )
    {
      v67 = v197;
      if ( (unsigned __int8)sub_19B5640(
                              a1,
                              v197,
                              v71 | v182 & 0xFFFFFFFF00000000LL,
                              v177,
                              v177,
                              a11,
                              *(double *)a7.m128_u64,
                              v35,
                              (__int64)&v207,
                              (unsigned __int64 *)v195,
                              v196,
                              &v200,
                              &v201,
                              1) )
        return 1;
    }
  }
  if ( v35 )
  {
    v69 = a11;
    if ( (*(_BYTE *)(*(_QWORD *)(a11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
      v67 = v197;
      v190 = sub_19A3A70((__int64)a1, v197, v208, a11);
    }
  }
  else
  {
    v190 = 0;
  }
  v72 = v200;
  v225 = &v226[8];
  *(_QWORD *)v226 = 0x800000000LL;
  if ( v200 )
  {
    v73 = *(_QWORD *)(*(_QWORD *)(v200 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v176 = v73;
    if ( *(_BYTE *)(v73 + 16) != 26 )
    {
      v74 = sub_F63050(v73, v67, v200, v69);
      v72 = v200;
      v176 = v74;
    }
    v192 = 4 * (*(char *)(v176 + 19) >= 0);
    v75 = v208 + 1LL;
    v76 = (unsigned int)v208 + 1;
    if ( v209 == 1 )
    {
      v75 = v208 + 2LL;
      v76 = (unsigned int)v208 + 2;
    }
    if ( (unsigned __int8)sub_192CA10(
                            a1,
                            v71,
                            v72,
                            v176,
                            v76,
                            (__int64)&v225,
                            a7,
                            a8,
                            v195,
                            v196,
                            4 * (unsigned int)(*(char *)(v176 + 19) >= 0),
                            0,
                            0) )
      goto LABEL_149;
    if ( *(_DWORD *)v226 )
    {
      v196 = *(unsigned int *)v226;
      v195 = (__int64)v225;
    }
    v189 = sub_A63CE0((_QWORD *)a1[31]);
    v193 = v189;
    v77 = sub_A97D20(a1[31], *(_QWORD *)(v189 & 0xFFFFFFFFFFFFFFF0LL));
    v78 = (void *)sub_AAE980(a1[31], a11);
    v211 = v77;
    if ( v77 > 0x40 )
      sub_2205470(&v210, v78, 0);
    else
      v210 = v78;
    v213 = 0;
    a7 = 0;
    *(_OWORD *)v212 = 0;
    if ( v35 )
    {
      if ( v191 && (*(_BYTE *)(*(_QWORD *)(a11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
      {
        v232.m128i_i32[0] = v77;
        if ( v77 > 0x40 )
          sub_2205470(&ptr, v185, 0);
        else
          ptr = v185;
        sub_220B260(v235, &ptr, &v210, &v219);
        if ( (_BYTE)v213 )
        {
          if ( LODWORD(v212[1]) > 0x40 && v212[0] )
            operator delete[](v212[0]);
          v212[0] = v235[0];
          LODWORD(v212[1]) = v235[1];
        }
        else
        {
          LOBYTE(v213) = 1;
          LODWORD(v212[1]) = v235[1];
          v212[0] = v235[0];
        }
        if ( v232.m128i_i32[0] > 0x40u && ptr )
          operator delete[](ptr);
      }
    }
    else if ( (*(_BYTE *)(*(_QWORD *)(a11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
      LODWORD(v212[1]) = v211;
      if ( v211 > 0x40 )
        sub_2205510(v212);
      else
        v212[0] = v210;
      LOBYTE(v213) = 1;
    }
    v232.m128i_i32[0] = v77;
    if ( v77 > 0x40 )
      sub_2205470(&ptr, 0, 0);
    else
      ptr = nullptr;
    if ( (_BYTE)v213 )
    {
      LODWORD(v235[1]) = v212[1];
      if ( LODWORD(v212[1]) > 0x40 )
        sub_2205510(v235);
      else
        v235[0] = v212[0];
    }
    else
    {
      v135 = v232.m128i_i32[0];
      v232.m128i_i32[0] = 0;
      LODWORD(v235[1]) = v135;
      v235[0] = ptr;
    }
    sub_C0CA00((__int64)v218, (_QWORD *)a1[31], (__int64)v235, v189, v197, v79);
    if ( LODWORD(v235[1]) > 0x40 && v235[0] )
      operator delete[](v235[0]);
    if ( v232.m128i_i32[0] > 0x40u && ptr )
      operator delete[](ptr);
    LOWORD(v214[0]) = v214[0] & 0xFE00 | 0x1A;
    if ( unk_2CD7484 )
      sub_EE9B50(26);
    v214[1] = v197;
    v216 = 0;
    v215 = v189;
    v214[0] &= 0xFFF001FF;
    v80 = sub_B62360((__int64)v214);
    BYTE1(v214[0]) = (v80 << 6) | BYTE1(v214[0]) & 0x3F;
    BYTE2(v214[0]) = BYTE2(v214[0]) & 0xF8 | (v80 >> 2) & 7;
    v81 = sub_183D310((__int64)a1);
    v85 = a1[31];
    if ( v81 )
    {
      v86 = *(_QWORD *)(v81 + 48);
      if ( v86 )
      {
        v193 = v86 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v137 = sub_A7AA70(v85, v81, 0, v82, v83, v84);
        v85 = a1[31];
        v193 = v137;
      }
    }
    v194 = v55 / (unsigned __int64)sub_A97FD0(v85);
    LODWORD(v235[1]) = sub_A97D20(a1[31], *(_QWORD *)(v189 & 0xFFFFFFFFFFFFFFF0LL));
    if ( LODWORD(v235[1]) > 0x40 )
      sub_2205470(v235, v194, 0);
    else
      v235[0] = (void *)v194;
    sub_C0CA00((__int64)&v219, (_QWORD *)a1[31], (__int64)v235, v189, v197, v87);
    if ( LODWORD(v235[1]) > 0x40 && v235[0] )
      operator delete[](v235[0]);
    LOWORD(v217[0]) = v217[0] & 0xFE00 | 0x4F;
    if ( unk_2CD7484 )
      sub_EE9B50(79);
    v217[1] = v193;
    v217[2] = &v219;
    v217[0] = v217[0] & 0xF00001FF | 0xD80000LL;
    ptr = &v232.m128i_u64[1];
    v232.m128i_i64[0] = 0x800000000LL;
    if ( (unsigned __int64)(v75 + v196) > 8 )
    {
      sub_2237220(&ptr, &v232.m128i_u64[1], v75 + v196, 8);
      v88 = v232.m128i_u32[0];
      v90 = (__int64 *)v214;
      v89 = v232.m128i_i32[0];
      if ( (_BYTE)v213 )
        v90 = v218;
      if ( v232.m128i_u32[0] >= (unsigned __int64)v232.m128i_u32[1] )
      {
        sub_14B7B40((__int64)&ptr, (__int64)v90);
        goto LABEL_97;
      }
    }
    else
    {
      if ( (_BYTE)v213 )
      {
        v92 = &v232.m128i_i8[8];
        v91 = 1;
        v90 = v218;
        goto LABEL_96;
      }
      v88 = 0;
      v89 = 0;
      v90 = (__int64 *)v214;
    }
    v91 = v89 + 1;
    v92 = (char *)ptr + 8 * v88;
LABEL_96:
    *(_QWORD *)v92 = v90;
    v232.m128i_i32[0] = v91;
LABEL_97:
    if ( v209 == 1 )
    {
      v138 = v232.m128i_i32[0];
      if ( v232.m128i_i32[1] <= (unsigned __int32)v232.m128i_i32[0] )
      {
        sub_14B7B40((__int64)&ptr, (__int64)v217);
      }
      else
      {
        *((_QWORD *)ptr + v232.m128i_u32[0]) = v217;
        v232.m128i_i32[0] = v138 + 1;
      }
    }
    sub_19A4C60((__int64)&ptr, (__int64)&v195);
    sub_18CE000(a1, v200, a4, (__int64)ptr, v232.m128i_u32[0], v93, (__m128i)0LL, *(double *)a8.m128_u64);
    v68 = v187 | v188 & 0xFFFFFFFF00000000LL;
    v67 = v200;
    sub_16E9510((__int64)a1, v200, v176, 0, (__int64)ptr, v232.m128i_u32[0], (__m128i)0LL, 0, v197, v68, v192);
    if ( !v196 && v209 != 1 )
    {
      if ( (*(_BYTE *)(v200 + 29) & 2) != 0
        || (unsigned int)sub_B73090(v200)
        && (v141 = a1[34], (v142 = sub_B73090(v200)) != 0)
        && (v67 = v142, (v143 = sub_1021680(v141, v142)) != 0)
        && v143 != 3 )
      {
        if ( v55 > v184 )
        {
          sub_168B9F0((__int64)v235, a1 + 1, v197, 0x1C42u, 0);
          v151 = sub_1605D30((__int64)v235, (__int64 *)&a11);
          v198 = v55 / (unsigned __int64)sub_A97FD0(a1[31]);
          v152 = sub_16CF160(v151, &v198);
          v67 = (__int64)&v199;
          v199 = v184 / (unsigned __int64)sub_A97FD0(a1[31]);
          sub_16CF160(v152, &v199);
          sub_15F7200(v235);
        }
      }
    }
    if ( ptr != &v232.m128i_u64[1] )
      free(ptr);
    sub_997320((__int64)v212);
    if ( v211 > 0x40 && v210 )
      operator delete[](v210);
  }
  if ( v35 && a16 )
  {
    v113 = *(_WORD *)a16 & 0x1FF;
    if ( v113 == 19 )
    {
      if ( *(char *)(a1[29] + 1) >= 0 )
      {
        v67 = *(unsigned int *)(a16 + 4);
        if ( (_DWORD)v67 )
          goto LABEL_148;
      }
    }
    else if ( v113 != 54 )
    {
      if ( (unsigned int)v113 - 113 > 1 )
      {
        if ( v179 != 2 )
        {
LABEL_148:
          v114 = sub_EEC140(v172[v174 - 1]);
          LODWORD(ptr) = sub_EEB7E0(*v172, v67, *(double *)a7.m128_u64);
          HIDWORD(ptr) = v114;
          sub_168B9F0((__int64)v235, a1 + 1, v197, 0x10A6u, 0);
          sub_15884C0((__int64)v235, (__int64 *)&ptr);
          sub_15F7200(v235);
          goto LABEL_149;
        }
      }
      else if ( (*(_QWORD *)a16 & 0x200000LL) != 0 || !sub_B98FC0(*(_QWORD *)(a16 + 16), v67) )
      {
        goto LABEL_148;
      }
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0
    || (unsigned __int8)sub_BFE470((_DWORD **)v172, v174) )
  {
LABEL_110:
    if ( v200 )
    {
      if ( (unsigned __int8)sub_18F5260(
                              (__int64)a1,
                              v200,
                              (int *)&v197,
                              1u,
                              0,
                              0,
                              (__m128i)a7,
                              *(double *)a8.m128_u64,
                              0,
                              0,
                              0) )
        goto LABEL_149;
      sub_1910D40((__int64)a1, v197, v200, 1, v94, v95, a7, a8);
    }
    v96 = v201;
    if ( !v201 )
    {
LABEL_116:
      v99 = (_QWORD *)a1[31];
      a13 = v170;
      LOBYTE(a14) = v167;
      v53 = sub_C99F60(
              v99,
              v183,
              v200,
              v96,
              (__int64)&v207,
              v190,
              (_QWORD *)v195,
              v196,
              v183 >> 32,
              v170,
              a14,
              v179,
              a16,
              v186,
              (__int64)a12,
              v187 | v68 & 0xFFFFFFFF00000000LL,
              (v169 << 32) | (unsigned int)a15);
      goto LABEL_150;
    }
    if ( !(unsigned __int8)sub_18F5260(
                             (__int64)a1,
                             v201,
                             (int *)&v197,
                             1u,
                             0,
                             0,
                             (__m128i)a7,
                             *(double *)a8.m128_u64,
                             0,
                             0,
                             0) )
    {
      sub_1910D40((__int64)a1, v197, v201, 1, v97, v98, a7, a8);
      v96 = v201;
      goto LABEL_116;
    }
LABEL_149:
    v53 = 1;
    goto LABEL_150;
  }
  if ( v191 )
  {
    v147 = (_QWORD *)a1[31];
    v148 = sub_A63CE0(v147);
    LODWORD(v235[1]) = sub_A97D20((__int64)v147, *(_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF0LL));
    if ( LODWORD(v235[1]) > 0x40 )
      sub_2205470(v235, v185, 0);
    else
      v235[0] = v185;
    v132 = sub_A70F70((__int64)v147, a11, (__int64)v235, (_DWORD *)v170, 0, 0);
    if ( LODWORD(v235[1]) > 0x40 && v235[0] )
    {
      v178 = v132;
      operator delete[](v235[0]);
      v132 = v178;
    }
  }
  else
  {
    v132 = a11;
    if ( v35 )
      v132 = sub_A71E50(a1[31], a11, 0, 0);
  }
  v221 = v132;
  LODWORD(v219) = 8;
  v223 = v197;
  v220 = 0;
  v222 = 0;
  v224 = 0;
  sub_1A19220((unsigned int)v235, (_DWORD)a1, (unsigned int)&v219, (unsigned int)v203, (_DWORD)v172, v174, 0, 1);
  v133 = sub_1A1D600((unsigned int)v235, (_DWORD)a1, (unsigned int)&v219, (unsigned int)v203, (_DWORD)v172, v174, 0);
  if ( v133 != 1 )
  {
    v134 = v133 & 0xFFFFFFFFFFFFFFFELL;
    if ( v134 && (*(_WORD *)v134 & 0x1FF) == 0x74 )
      v134 = *(_QWORD *)(v134 + 24) & 0xFFFFFFFFFFFFFFFELL;
    a16 = v134;
    if ( !v170 && v35 )
    {
      v157 = sub_A72040((_QWORD *)a1[31], *(_QWORD *)(v134 + 8));
      v158 = v157;
      if ( v157 && (unsigned int)*(unsigned __int8 *)(v157 + 16) - 2 <= 1 )
      {
        v171 = HIDWORD(v202);
        v159 = sub_A63CE0((_QWORD *)a1[31]);
        sub_A5DAD0((__int64)&ptr, v158);
        v170 = sub_C0C5D0((_QWORD *)a1[31], (__int64)&ptr, v159, v171);
        if ( v232.m128i_i32[0] > 0x40u && ptr )
          operator delete[](ptr);
      }
      else
      {
        sub_168B9F0((__int64)&ptr, a1 + 1, HIDWORD(v202), 0x10A9u, 0);
        v218[0] = sub_EEC8C0(a16, (__int64)(a1 + 1), *(double *)a7.m128_u64);
        sub_1587DB0((__int64)&ptr, v218);
        sub_15F7200(&ptr);
        v170 = 0;
      }
    }
    sub_1A0BB10(v235);
    goto LABEL_110;
  }
  v53 = 1;
  sub_1A0BB10(v235);
LABEL_150:
  if ( v225 != &v226[8] )
    free(v225);
  return v53;
}
