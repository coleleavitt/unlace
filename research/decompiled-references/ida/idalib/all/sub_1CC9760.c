__int64 __fastcall sub_1CC9760(
        __m128 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __m128i *a5,
        __m128i *a6,
        double a7,
        __m128 a8,
        int a9,
        int a10)
{
  __int64 v10; // r14
  __int64 *v12; // r12
  __m128 v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // r15
  __m128i v18; // xmm4
  __int64 result; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r12
  unsigned int v25; // r12d
  char v26; // al
  unsigned __int64 v27; // rax
  __m128i v28; // xmm1
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rsi
  _DWORD *v37; // rsi
  __m128i v38; // xmm3
  __int64 v39; // rax
  unsigned int v40; // edx
  __int64 v41; // rsi
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  int v45; // r15d
  int v46; // eax
  __int64 *v47; // rsi
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r9
  unsigned __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 *v67; // rax
  unsigned int v68; // eax
  __m128i v69; // xmm2
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  char v73; // dl
  char *v74; // rax
  __m128i si128; // xmm5
  __int64 v76; // rdx
  unsigned __int64 v77; // rbx
  __int64 (__fastcall *v78)(__int64); // rdx
  __m128i v79; // xmm6
  __int64 *v80; // r15
  int v81; // eax
  __int64 v82; // rdx
  unsigned __int64 v83; // rsi
  __int64 v84; // r9
  __int32 v85; // eax
  __m128i v86; // xmm7
  unsigned int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // r12
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  unsigned __int64 v95; // rsi
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  unsigned __int64 v99; // rax
  __int64 *v100; // rdx
  _QWORD *v101; // rax
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // rdx
  unsigned int v105; // eax
  __int64 v106; // r9
  __m128i v107; // xmm4
  void **v108; // rdi
  __int64 v109; // rdi
  unsigned __int8 v110; // al
  __int64 v111; // rdx
  __int64 *v112; // rsi
  __int64 v113; // rdx
  __m128i *v114; // r9
  __m128i *v115; // r8
  _WORD *v116; // rcx
  __m128i v117; // xmm5
  unsigned int v118; // eax
  __int64 v119; // rax
  __int64 *v120; // rsi
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdi
  int v124; // eax
  __int64 v125; // rcx
  _WORD *v126; // rsi
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // r8
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 *v134; // rsi
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 *v139; // rax
  _QWORD *v140; // rax
  __int64 v141; // rax
  __int64 *v142; // r11
  __int64 v143; // rdi
  __int64 v144; // rsi
  unsigned int v145; // eax
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 *v149; // r11
  __int64 v150; // rdx
  __int64 *v151; // r15
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  char v156; // al
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 *v161; // r11
  unsigned int v162; // eax
  __int64 v163; // r12
  __int64 v164; // rax
  __int64 v165; // r12
  __int64 *v166; // r11
  int v167; // eax
  __int64 v168; // r9
  __int64 v169; // r11
  unsigned int v170; // r12d
  __m128i v171; // xmm4
  __int64 *v172; // r15
  __m128i v173; // xmm7
  __int64 v174; // rax
  __int64 v175; // r9
  __m128i v176; // xmm4
  __int64 v177; // rax
  __int64 v178; // rdx
  unsigned __int64 v179; // r15
  char v180; // al
  unsigned int v181; // eax
  _WORD *v182; // rsi
  __int64 v183; // r15
  __int64 v184; // rax
  __int64 v185; // rax
  __m128i v186; // xmm7
  __int64 *v187; // rsi
  __int64 v188; // rdi
  __int64 v189; // r12
  __int64 *v190; // r14
  __int64 v191; // rdx
  __int64 v192; // rdx
  __int64 v193; // rax
  __int64 v194; // rax
  _WORD *v195; // rsi
  __int64 v196; // r12
  __int64 v197; // rax
  __m128i v198; // xmm7
  int v199; // eax
  __int64 v200; // rcx
  __int64 v201; // r8
  int v202; // edx
  __m128i v203; // xmm5
  __int64 v204; // rax
  __int64 v205; // r9
  __m128i v206; // xmm6
  __int64 v207; // r12
  __m128i v208; // xmm5
  __int64 v209; // r9
  __m128i v210; // xmm6
  __m128i v211; // xmm7
  unsigned int v212; // r12d
  int v213; // eax
  bool v214; // r12
  unsigned int v215; // eax
  unsigned __int64 v216; // rdx
  __int64 *v217; // r12
  void **v218; // rsi
  unsigned int v219; // eax
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r9
  unsigned int v224; // eax
  __int64 v225; // rax
  __m128i v226; // xmm5
  __int64 v227; // rax
  unsigned __int64 v228; // rbp
  __int64 v229; // rax
  __m128i v230; // xmm6
  unsigned int v231; // eax
  __int64 v232; // rax
  __m128i v233; // xmm5
  __int64 v234; // rax
  __m128i v235; // xmm6
  __int64 v236; // [rsp+8h] [rbp-21A0h]
  __int64 v237; // [rsp+10h] [rbp-2198h] BYREF
  unsigned __int64 v238; // [rsp+18h] [rbp-2190h]
  __int64 v239; // [rsp+20h] [rbp-2188h]
  __m128i *v240; // [rsp+28h] [rbp-2180h]
  void **v241; // [rsp+30h] [rbp-2178h]
  void **v242; // [rsp+38h] [rbp-2170h]
  __m128i v243; // [rsp+40h] [rbp-2168h] BYREF
  __int64 v244; // [rsp+50h] [rbp-2158h]
  _WORD *v245; // [rsp+60h] [rbp-2148h] BYREF
  __int64 v246[2]; // [rsp+68h] [rbp-2140h] BYREF
  __int64 *v247; // [rsp+78h] [rbp-2130h] BYREF
  __int64 *v248; // [rsp+80h] [rbp-2128h]
  unsigned __int64 v249; // [rsp+88h] [rbp-2120h] BYREF
  __int64 v250; // [rsp+90h] [rbp-2118h] BYREF
  __int64 v251; // [rsp+98h] [rbp-2110h] BYREF
  unsigned __int64 v252; // [rsp+A0h] [rbp-2108h] BYREF
  __int64 v253; // [rsp+A8h] [rbp-2100h]
  __m128 v254; // [rsp+B0h] [rbp-20F8h] BYREF
  _WORD **v255; // [rsp+C0h] [rbp-20E8h]
  __m128 *v256; // [rsp+C8h] [rbp-20E0h]
  void *v257; // [rsp+D0h] [rbp-20D8h] BYREF
  unsigned int v258; // [rsp+D8h] [rbp-20D0h]
  char v259; // [rsp+DCh] [rbp-20CCh]
  __int64 v260; // [rsp+E0h] [rbp-20C8h] BYREF
  __m128i v261[4]; // [rsp+F0h] [rbp-20B8h] BYREF
  void *v262; // [rsp+130h] [rbp-2078h] BYREF
  __int64 v263; // [rsp+138h] [rbp-2070h]
  __int64 v264; // [rsp+140h] [rbp-2068h] BYREF
  int v265; // [rsp+148h] [rbp-2060h]
  __int64 v266; // [rsp+150h] [rbp-2058h]
  __int16 v267; // [rsp+158h] [rbp-2050h]
  void *v268[2]; // [rsp+1C0h] [rbp-1FE8h] BYREF
  __int64 v269; // [rsp+1D0h] [rbp-1FD8h]
  int v270; // [rsp+1D8h] [rbp-1FD0h]
  int v271; // [rsp+1DCh] [rbp-1FCCh]
  _QWORD *v272; // [rsp+1E0h] [rbp-1FC8h]
  __int64 v273; // [rsp+1E8h] [rbp-1FC0h]
  _QWORD v274[17]; // [rsp+1F0h] [rbp-1FB8h] BYREF
  __int64 v275; // [rsp+278h] [rbp-1F30h]
  __int64 v276; // [rsp+280h] [rbp-1F28h]
  __int64 v277; // [rsp+290h] [rbp-1F18h]
  __int64 v278; // [rsp+298h] [rbp-1F10h]
  int v279; // [rsp+2A8h] [rbp-1F00h]
  char v280; // [rsp+2ACh] [rbp-1EFCh]
  _QWORD *v281; // [rsp+2B0h] [rbp-1EF8h]
  __int64 v282; // [rsp+2B8h] [rbp-1EF0h]
  _QWORD v283[12]; // [rsp+2C0h] [rbp-1EE8h] BYREF
  _WORD v284[52]; // [rsp+320h] [rbp-1E88h] BYREF
  __int64 *v285; // [rsp+388h] [rbp-1E20h]
  __int64 v286; // [rsp+390h] [rbp-1E18h]
  __int64 v287; // [rsp+398h] [rbp-1E10h] BYREF

  v10 = a2;
  v12 = a4;
  v246[0] = a3;
  v245 = a4;
  LODWORD(v238) = a9;
  LODWORD(v239) = sub_EEB7E0((unsigned __int64)a4, a2, a7);
  if ( (*(_WORD *)v12 & 0x1FF) == 0x16 )
  {
    v247 = v12;
    v12 = (__int64 *)v12[3];
  }
  else
  {
    v247 = nullptr;
  }
  v248 = v12;
  v237 = (__int64)&v247;
  v255 = &v245;
  v256 = a1;
  v15 = _mm_loadh_ps((const double *)&v237);
  v254 = v15;
  v17 = sub_F57E80(*(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL));
  if ( (*(_BYTE *)(a1[14].m128_u64[1] + 1) & 0x40) == 0
    || !v17
    || (*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0
    || (*(_BYTE *)(v17 + 17) & 4) != 0 )
  {
    v20 = v246[0] & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_13;
  }
  if ( (*(_DWORD *)v248 & 0x10000) != 0 && *(_BYTE *)(v17 + 16) == 16 && ((*(_BYTE *)(v17 + 18) >> 3) & 3) == 1 )
  {
    a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
    a5->m128i_i64[1] = (__int64)v245;
    sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
    v18 = _mm_loadu_si128(&v243);
    a6[1].m128i_i64[0] = v244;
    result = (__int64)v245;
    *a6 = v18;
    return result;
  }
  v40 = *(_DWORD *)(a2 + 24);
  v41 = v246[0];
  v42 = sub_A81910((_QWORD *)a1[15].m128_u64[1], v246[0], v40);
  if ( *(_BYTE *)(v17 + 16) != 17 )
  {
    v45 = *(_DWORD *)(v10 + 68);
    v240 = (__m128i *)v42;
    v237 = (__int64)v248;
    v46 = sub_C00A40((unsigned __int64)v248, v41, v43, (__int64)v248, v44);
    v15 = 0;
    v270 = (v45 & 0xFFFFF) + 1;
    v275 &= 0xFFFFFFFE00000000LL;
    v277 &= 0xFFFFFFFE00000000LL;
    v281 = v283;
    LODWORD(v269) = v46;
    v283[10] = v284;
    v272 = v274;
    v284[48] = 0;
    v285 = &v287;
    *(_OWORD *)v268 = 0;
    WORD2(v269) = 0;
    v271 = 0;
    v273 = 0x400000000LL;
    v274[16] = 0;
    v276 = 0;
    v278 = 0;
    v279 = 0;
    v280 = 0;
    v282 = 0x800000000LL;
    v283[8] = 0;
    v283[9] = 0;
    v283[11] = 0x400000000LL;
    v286 = 0x400000000LL;
    v246[0] = 0;
    v47 = (__int64 *)v240->m128i_i64[0];
    v48 = sub_1D79BF0(
            (_DWORD)a1,
            v240->m128i_i64[0],
            (int)v240 + 8,
            v237,
            (unsigned int)v246,
            (unsigned int)v268,
            1,
            1,
            0);
    if ( v48 == 18 )
    {
      if ( (v246[0] & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_42;
    }
    else
    {
      if ( !v48 )
      {
LABEL_42:
        sub_19A2E00((__int64)v268);
        goto LABEL_43;
      }
      v87 = sub_C00A40((unsigned __int64)v245, (__int64)v47, v49, v50, v51);
      sub_168B9F0((__int64)&v262, &a1->m128_i64[1], v87, 0x10DAu, 0);
      v251 = *(_QWORD *)(v10 + 40);
      v88 = sub_15894B0((__int64)&v262, &v251);
      v252 = *(_QWORD *)(v10 + 48);
      v89 = sub_162B6D0(v88, (__int64 *)&v252);
      v257 = *((void **)v245 + 1);
      v90 = sub_162B6D0(v89, (__int64 *)&v257);
      v261[0].m128i_i64[0] = sub_EEC8C0((unsigned __int64)v245, (__int64)&v257, 0.0);
      sub_1587DB0(v90, v261[0].m128i_i64);
      sub_15F7200(&v262);
      sub_1CC6E20((__int64)a1, v10);
    }
    v237 = 1;
    sub_19A2E00((__int64)v268);
    return v237;
  }
  v80 = v248;
  v237 = (__int64)v42;
  LOWORD(v273) = 0;
  v268[1] = nullptr;
  v270 = 0;
  LODWORD(v268[0]) = 2;
  v269 = v246[0];
  v272 = (_QWORD *)v10;
  v81 = sub_EEB7E0((unsigned __int64)v248, v41, *(double *)v15.m128_u64);
  v262 = (void *)sub_17A22A0(v81, 0, v80, *(double *)v15.m128_u64);
  v263 = v82;
  v47 = (__int64 *)v237;
  v261[0].m128i_i64[0] = (__int64)v248;
  v246[0] = sub_1A26590(a1, (__int64 *)v237, (__int64)v268, (unsigned __int8 *)&v262, v261, 1u, v15);
  if ( (v246[0] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
LABEL_43:
  v55 = sub_C00A40((unsigned __int64)v245, (__int64)v47, v52, v53, v54);
  a2 = v246[0];
  v246[0] = sub_1CBBE10((__int64)a1, v246[0], v55, v56, v57, v58, v15);
  v20 = v246[0] & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v246[0] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    sub_1CC6E20((__int64)a1, v10);
    return 1;
  }
LABEL_13:
  v21 = *(_QWORD *)v20;
  if ( (*(_BYTE *)(*(_QWORD *)v20 + 17LL) & 4) == 0 )
  {
    v22 = v248;
    if ( (*(_DWORD *)v248 & 0x10000) == 0 )
    {
      if ( a10 != 1 || (_BYTE)v238 == 1 )
      {
        if ( v247 && !(_BYTE)v238 )
          goto LABEL_56;
      }
      else
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
        {
          if ( !sub_1CAFE20(v246[0], v248[1]) )
            goto LABEL_19;
        }
        else
        {
          v237 = v248[1];
          v23 = sub_C1BEF0((__int64)v246, a2, v237, v16);
          if ( (*(_QWORD *)&byte_8[v237 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v237 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v237) & 7) != (*(_QWORD *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v23) & 7) )
          {
LABEL_19:
            sub_168B9F0((__int64)v268, &a1->m128_i64[1], v239, 0xE1Cu, 0);
            v261[0].m128i_i64[0] = *((_QWORD *)v245 + 1);
            v24 = sub_162B6D0((__int64)v268, v261[0].m128i_i64);
            v262 = (void *)sub_6D5440(v246);
            sub_162B6D0(v24, (__int64 *)&v262);
            sub_15F7200(v268);
            sub_1CC6E20((__int64)a1, v10);
            return 1;
          }
        }
        if ( v247 )
        {
LABEL_56:
          a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
          a5->m128i_i64[1] = (__int64)v245;
          sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
          v69 = _mm_loadu_si128(&v243);
          a6[1].m128i_i64[0] = v244;
          result = (__int64)v245;
          *a6 = v69;
          return result;
        }
        v22 = v248;
        v20 = v246[0] & 0xFFFFFFFFFFFFFFF0LL;
      }
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
      {
        v29 = sub_BFBAE0((unsigned __int64)v22);
        if ( (*(_WORD *)v29 & 0x1FF) == 0x47 && sub_1CAFE20(v246[0], *(_QWORD *)(v29 + 8)) )
        {
          v72 = *(_QWORD *)(v70 + 16);
          v73 = *(_BYTE *)(v72 + 28) & 0x7F;
          if ( v73 == 30 )
          {
            v237 = *(_QWORD *)(v70 + 16);
            sub_F1D290((int *)v268, v72, v71, 0);
            v74 = (char *)v237;
            si128 = _mm_load_si128((const __m128i *)v268);
            a5[1].m128i_i64[0] = v269;
            v76 = v246[0];
            *a5 = si128;
            v77 = ((unsigned __int8)*(_QWORD *)&byte_8[v76 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v76) & 7
                | *(_QWORD *)&byte_8[v76 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
            v78 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v74 + 32LL);
            if ( v78 == sub_BBC1A0 )
            {
              if ( v74[29] < 0 )
                v74 = (char *)sub_B72720((__int64)v74);
            }
            else
            {
              v74 = (char *)v78((__int64)v74);
            }
            sub_F1D290((int *)v268, (__int64)v74, v77, 0);
            v79 = _mm_load_si128((const __m128i *)v268);
            a6[1].m128i_i64[0] = v269;
            result = (__int64)v245;
            *a6 = v79;
            return result;
          }
          if ( v73 == 47 )
          {
            a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
            a5->m128i_i64[1] = (__int64)v245;
            sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
            v117 = _mm_loadu_si128(&v243);
            a6[1].m128i_i64[0] = v244;
            result = (__int64)v245;
            *a6 = v117;
            return result;
          }
        }
      }
      sub_18C74E0((__int64)a1, 4, 0, 4);
      v33 = v248;
      if ( (*(_WORD *)v248 & 0x1FF) == 0x35
        || (v34 = *(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48) )
      {
        v261[0].m128i_i64[0] = sub_17A22A0(v239, 0, v248, *(double *)v15.m128_u64);
        v261[0].m128i_i64[1] = v59;
        v257 = v248;
        v267 = 0;
        v264 = v246[0];
        v263 = 0;
        v265 = 0;
        LODWORD(v262) = 2;
        v266 = v10;
        v241 = &v257;
        v240 = v261;
        v237 = (__int64)&v262;
        sub_1A19220((__int64)v268, (__int64)a1, (__int64)&v262, v261, (__int64)&v257, 1, v15, a8, 0, 1u);
        v60 = sub_1A1D600((unsigned int)v268, (_DWORD)a1, v237, (_DWORD)v240, (_DWORD)v241, 1, 0);
        if ( v60 == 1
          || (v64 = v60 & 0xFFFFFFFFFFFFFFFELL) == 0
          || (v65 = v64, v66 = sub_19146D0((__int64)a1, v64, v61, v62, v236, v63, v15, a8), v66 == 1)
          || (v67 = (__int64 *)(v66 & 0xFFFFFFFFFFFFFFFELL)) == nullptr )
        {
          v237 = 1;
          sub_1A0BB10((__int64)v268);
          v39 = v237;
LABEL_53:
          v237 = v39;
          sub_190D5E0((__int64)a1, v15);
          return v237;
        }
        v237 = (__int64)v67;
        v68 = sub_EEB7E0((unsigned __int64)v245, v65, *(double *)v15.m128_u64);
        v33 = (__int64 *)(sub_19B4A30((__int64)a1, v237, v68, 0, 1, 1, v15, a8) & 0xFFFFFFFFFFFFFFFELL);
        sub_1CAF480((__int64 **)&v254, (__int64)v33);
        sub_1A0BB10((__int64)v268);
        if ( (*(_BYTE *)(a1[14].m128_u64[1] + 1) & 0x40) != 0 || (_BYTE)v238 )
        {
          v261[0].m128i_i32[0] = 0;
          v36 = (__int64)v248;
          v261[0].m128i_i8[4] &= ~1u;
          goto LABEL_35;
        }
        v34 = *(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        if ( (*(_BYTE *)(a1[14].m128_u64[1] + 1) & 0x40) != 0 )
        {
          v261[0].m128i_i8[4] &= ~1u;
          v261[0].m128i_i32[0] = 0;
          v35 = (unsigned int)((_BYTE)v238 != 0) + 2;
LABEL_34:
          v36 = sub_1C0AE60(a1, v248, v246[0], v35, v10, v15, a8);
          if ( v36 == 1 )
          {
            sub_1CC6E20((__int64)a1, v10);
            v39 = 1;
LABEL_37:
            if ( v261[0].m128i_i32[0] > 1u )
            {
              v237 = v39;
              sub_A4F8E0(v261[0].m128i_i32);
              v39 = v237;
            }
            goto LABEL_53;
          }
LABEL_35:
          v37 = (_DWORD *)(v36 & 0xFFFFFFFFFFFFFFFELL);
          if ( (*v37 & 0x20000) != 0 )
          {
            sub_1CAF480((__int64 **)&v254, (__int64)v37);
            a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
            a5->m128i_i64[1] = (__int64)v245;
            sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
            v38 = _mm_loadu_si128(&v243);
            a6[1].m128i_i64[0] = v244;
            v39 = (__int64)v245;
            *a6 = v38;
            goto LABEL_37;
          }
          LODWORD(v262) = 0;
          v237 = (__int64)v261;
          BYTE4(v262) &= ~1u;
          v39 = (__int64)sub_1BE1B90(
                           (__int64)a1,
                           (unsigned __int64)v37,
                           v246[0],
                           v261[0].m128i_i32,
                           2,
                           0,
                           *(double *)v15.m128_u64,
                           (int *)&v262);
          if ( v39 == 1 )
            goto LABEL_75;
          v83 = v39 & 0xFFFFFFFFFFFFFFFELL;
          sub_1CAF480((__int64 **)&v254, v39 & 0xFFFFFFFFFFFFFFFELL);
          v85 = v261[0].m128i_i32[0];
          if ( v261[0].m128i_i32[0] != 7 )
          {
LABEL_71:
            if ( v85 != 13 )
            {
              if ( v247 )
              {
                a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
                a5->m128i_i64[1] = (__int64)v245;
                sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
                v86 = _mm_loadu_si128(&v243);
                a6[1].m128i_i64[0] = v244;
                *a6 = v86;
              }
              else
              {
                v172 = (__int64 *)v237;
                sub_F1EED0((__int64)v268, (_QWORD *)a1[15].m128_u64[1], v246[0], v237, 0, v84);
                v173 = _mm_load_si128((const __m128i *)v268);
                a5[1].m128i_i64[0] = v269;
                v174 = v246[0];
                *a5 = v173;
                sub_F1EED0(
                  (__int64)v268,
                  (_QWORD *)a1[15].m128_u64[1],
                  *(_QWORD *)&byte_8[v174 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v174 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v174) & 7,
                  (__int64)v172,
                  0,
                  v175);
                v176 = _mm_load_si128((const __m128i *)v268);
                a6[1].m128i_i64[0] = v269;
                *a6 = v176;
              }
LABEL_74:
              v39 = (__int64)v245;
              goto LABEL_75;
            }
            sub_168B9F0((__int64)v268, &a1->m128_i64[1], v239, 0x10D7u, 0);
            v237 = 1;
            sub_15F7200(v268);
            v39 = v237;
LABEL_75:
            if ( (unsigned int)v262 > 1 )
            {
              v237 = v39;
              sub_A4F8E0((int *)&v262);
              v39 = v237;
            }
            goto LABEL_37;
          }
          v177 = sub_A51060(v237);
          v252 = v177;
          v253 = v178;
          if ( !v177 || (v177 & 3) != 0 )
          {
            if ( !sub_A4F700(&v252) )
            {
              v179 = 0;
LABEL_175:
              if ( sub_A51090(v237) )
              {
                sub_A510A0(v237);
                if ( v192 == 1
                  && v179
                  && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v179 + 48)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
                                     - 2) <= 4u
                  && !*(_QWORD *)sub_A510A0(v237)
                  && !sub_A51070(v237)
                  && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 16LL) == 42 )
                {
                  if ( v247 )
                  {
                    a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
                    a5->m128i_i64[1] = (__int64)v245;
                    sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
                    v193 = v244;
                    *a6 = _mm_loadu_si128(&v243);
                    a6[1].m128i_i64[0] = v193;
                  }
                  else
                  {
                    sub_F1D290((int *)v268, v179, v246[0], 0);
                    v226 = _mm_load_si128((const __m128i *)v268);
                    a5[1].m128i_i64[0] = v269;
                    v227 = v246[0];
                    *a5 = v226;
                    v228 = *(_QWORD *)&byte_8[v227 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                         | ((unsigned __int8)*(_QWORD *)&byte_8[v227 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v227)
                         & 7;
                    v229 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v179 + 32LL))(v179);
                    sub_F1D290((int *)v268, v229, v228, 0);
                    v230 = _mm_load_si128((const __m128i *)v268);
                    a6[1].m128i_i64[0] = v269;
                    *a6 = v230;
                  }
                  goto LABEL_74;
                }
              }
              if ( *(char *)(a1[14].m128_u64[1] + 1) >= 0 )
              {
                v190 = (__int64 *)v237;
                if ( !sub_A51090(v237) || (sub_A510A0((__int64)v190), v191) || sub_A51070(v237) )
                {
                  sub_168B9F0((__int64)v268, &a1->m128_i64[1], v239, 0x10D8u, 0);
                  sub_A53AF0((__int64)&v257, (_DWORD *)v237, a1[15].m128_i64[1], v246[0]);
                  sub_1682AF0((__int64)v268, (__int64)&v257);
                  if ( v257 != &v260 )
                    operator delete(v257);
                  sub_15F7200(v268);
                  v39 = 1;
                  goto LABEL_75;
                }
              }
              v85 = v261[0].m128i_i32[0];
              goto LABEL_71;
            }
          }
          else
          {
            v179 = v177 & 0xFFFFFFFFFFFFFFFCLL;
            if ( !sub_A4F700(&v252) )
              goto LABEL_175;
            if ( v179 )
            {
              v180 = *(_BYTE *)(v179 + 28) & 0x7F;
              if ( v180 != 29 && v180 != 82 )
                goto LABEL_175;
            }
          }
          v181 = sub_EEB7E0((unsigned __int64)v245, v83, *(double *)v15.m128_u64);
          sub_168B9F0((__int64)v268, &a1->m128_i64[1], v181, 0x13EEu, 0);
          v257 = (void *)sub_EEC8C0((unsigned __int64)v245, (__int64)&a1->m128_i64[1], *(double *)v15.m128_u64);
          sub_1587DB0((__int64)v268, (__int64 *)&v257);
          sub_15F7200(v268);
          v39 = 1;
          goto LABEL_75;
        }
        if ( (_BYTE)v238 )
        {
          v261[0].m128i_i8[4] &= ~1u;
          v35 = 3;
          v261[0].m128i_i32[0] = 0;
          goto LABEL_34;
        }
      }
      if ( sub_C1C400(v34, (__int64)v33, v30, v31, v32) )
      {
        if ( (*(_BYTE *)(a1[14].m128_u64[1] + 1) & 0x10) != 0 )
        {
          LODWORD(v263) = 1;
          v262 = nullptr;
          BYTE4(v263) = 0;
          v39 = sub_1C0AEA0(a1, v248, v246[0], (__int64)&v262, 2u, v15, a8);
          if ( v39 != 1 )
          {
            v95 = v39 & 0xFFFFFFFFFFFFFFFELL;
            sub_1CAF480((__int64 **)&v254, v39 & 0xFFFFFFFFFFFFFFFELL);
            if ( (*(_DWORD *)v248 & 0x20000) != 0 )
            {
              a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
              a5->m128i_i64[1] = (__int64)v245;
              sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
              v198 = _mm_loadu_si128(&v243);
              a6[1].m128i_i64[0] = v244;
              v39 = (__int64)v245;
              *a6 = v198;
            }
            else
            {
              v99 = v246[0];
              v100 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(*v100 + 16) == 47 )
              {
                v101 = sub_F60F10(*v100, v95, (__int64)v100, v96, v97, v98);
                v99 = sub_6F3660((__int64)v101);
              }
              v102 = a1[15].m128_i64[1];
              v103 = *(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL);
              v104 = *(_QWORD *)(*(_QWORD *)(v103 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v104 + 16) == 10 )
                v105 = sub_AAC1F0(v102, v99, v104, v96, v97);
              else
                v105 = sub_A97D20(v102, v103);
              sub_C16870((__int64)v268, (__int64)&v262, v105);
              sub_C18DB0((__int64)&v262, (__int64)v268);
              if ( LODWORD(v268[1]) > 0x40 && v268[0] )
                operator delete[](v268[0]);
              if ( v247 )
              {
                a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
                a5->m128i_i64[1] = (__int64)v245;
                sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
                v107 = _mm_loadu_si128(&v243);
                a6[1].m128i_i64[0] = v244;
                *a6 = v107;
              }
              else
              {
                sub_F1F190((__int64)v268, (_QWORD *)a1[15].m128_u64[1], (void ***)&v262, v246[0], 0, v106);
                v203 = _mm_load_si128((const __m128i *)v268);
                a5[1].m128i_i64[0] = v269;
                v204 = v246[0];
                *a5 = v203;
                sub_F1F190(
                  (__int64)v268,
                  (_QWORD *)a1[15].m128_u64[1],
                  (void ***)&v262,
                  *(_QWORD *)&byte_8[v204 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v204 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v204) & 7,
                  0,
                  v205);
                v206 = _mm_load_si128((const __m128i *)v268);
                a6[1].m128i_i64[0] = v269;
                *a6 = v206;
              }
              v39 = (__int64)v245;
            }
          }
          if ( (unsigned int)v263 <= 0x40 )
            goto LABEL_53;
          v108 = (void **)v262;
          if ( !v262 )
            goto LABEL_53;
LABEL_97:
          v237 = v39;
          operator delete[](v108);
          v39 = v237;
          goto LABEL_53;
        }
        v126 = v245;
        v39 = sub_19146F0((__int64)a1, v245, v91, v92, v93, v94, v15, a8);
        if ( v39 == 1 )
          goto LABEL_53;
        v248 = (__int64 *)(v39 & 0xFFFFFFFFFFFFFFFELL);
        v130 = *(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFFELL) + 8);
        LODWORD(v253) = 1;
        v249 = v130;
        v252 = 0;
        BYTE4(v253) = 0;
        if ( sub_C1C400(*(_QWORD *)(v130 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v126, v127, v128, v129) )
        {
          if ( (*(_DWORD *)v248 & 0x20000) == 0 )
          {
            LOBYTE(v268[1]) = 0;
            v268[0] = &off_2C6AD78;
            v269 = v249;
            v248 = (__int64 *)(sub_1914D50(
                                 (__int64 *)a1,
                                 (unsigned __int64)v248,
                                 (__int64)&v252,
                                 (_BOOL4 *)v268,
                                 0,
                                 v15,
                                 a8)
                             & 0xFFFFFFFFFFFFFFFELL);
            if ( !v248 )
              goto LABEL_202;
          }
          v249 = sub_6D5440(&v249);
          v131 = *(_QWORD *)&byte_8[v246[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v131 | (LOBYTE(v246[0]) | (unsigned __int8)*(_QWORD *)&byte_8[v246[0] & 0xFFFFFFFFFFFFFFF0LL]) & 7) == (*(_QWORD *)&byte_8[v249 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v249 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v249) & 7) )
            goto LABEL_133;
          v132 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v132 + 16) == 13 && ((*(_WORD *)(v132 + 18) >> 3) & 0x1FF) == 0x1B4 )
          {
            v133 = sub_160A600(
                     (__int64)a1,
                     (unsigned __int64)v248,
                     v246[0],
                     0x1Cu,
                     0,
                     0,
                     *(double *)v15.m128_u64,
                     *(double *)a8.m128_u64,
                     0);
            goto LABEL_132;
          }
          if ( sub_1BD84A0((__int64)a1, (unsigned __int64)v245, v249, v246[0], v131, *(double *)v15.m128_u64)
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 47 )
          {
            v133 = sub_160A600(
                     (__int64)a1,
                     (unsigned __int64)v248,
                     v246[0],
                     0x1Bu,
                     0,
                     0,
                     *(double *)v15.m128_u64,
                     *(double *)a8.m128_u64,
                     0);
LABEL_132:
            v248 = (__int64 *)(v133 & 0xFFFFFFFFFFFFFFFELL);
LABEL_133:
            v134 = v248;
            sub_1CAF480((__int64 **)&v254, (__int64)v248);
            if ( (*(_DWORD *)v248 & 0x20000) != 0 )
            {
              a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
              a5->m128i_i64[1] = (__int64)v245;
              sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
              v211 = _mm_loadu_si128(&v243);
              a6[1].m128i_i64[0] = v244;
              v39 = (__int64)v245;
              *a6 = v211;
            }
            else
            {
              v238 = v246[0];
              v139 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(*v139 + 16) == 47 )
              {
                v140 = sub_F60F10(*v139, (__int64)v134, v135, v136, v137, v138);
                v238 = sub_6F3660((__int64)v140);
              }
              v141 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v141 + 16) == 13 && ((*(_WORD *)(v141 + 18) >> 3) & 0x1FF) == 0x1B4 )
              {
                LODWORD(v268[1]) = 64;
                v268[0] = nullptr;
                BYTE4(v268[1]) = 0;
                v214 = (unsigned int)sub_98E2D0((__int64 *)&v252, (__int64 *)v268) != 0;
                if ( LODWORD(v268[1]) > 0x40 && v268[0] )
                  operator delete[](v268[0]);
                v215 = v253;
                if ( (unsigned int)v253 > 0x40 )
                {
                  *(_QWORD *)v252 = v214;
                  memset((void *)(v252 + 8), 0, 8 * ((unsigned int)(((unsigned __int64)v215 + 63) >> 6) + 0x1FFFFFFF));
                }
                else
                {
                  v216 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v253;
                  if ( !(_DWORD)v253 )
                    LOBYTE(v216) = 0;
                  v252 = (unsigned __int8)v216 & v214;
                }
                v217 = (__int64 *)(v238 & 0xFFFFFFFFFFFFFFF0LL);
                v218 = *(void ***)(v238 & 0xFFFFFFFFFFFFFFF0LL);
                v219 = sub_A97D20(a1[15].m128_i64[1], (__int64)v218);
                if ( v219 != (_DWORD)v253 )
                {
                  sub_C16870((__int64)v268, (__int64)&v252, v219);
                  v218 = v268;
                  sub_C18DB0((__int64)&v252, (__int64)v268);
                  if ( LODWORD(v268[1]) > 0x40 )
                  {
                    if ( v268[0] )
                      operator delete[](v268[0]);
                  }
                }
                BYTE4(v253) = !sub_F65240(*v217, (__int64)v218, v220, v221, v222, v223);
              }
              else
              {
                v258 = v253;
                if ( (unsigned int)v253 > 0x40 )
                {
                  v237 = (__int64)&v257;
                  sub_2205510(&v257);
                  v142 = (__int64 *)v237;
                }
                else
                {
                  v142 = (__int64 *)&v257;
                  v257 = (void *)v252;
                }
                v143 = a1[15].m128_i64[1];
                v237 = (__int64)v142;
                v259 = BYTE4(v253);
                v144 = *(_QWORD *)(v238 & 0xFFFFFFFFFFFFFFF0LL);
                v240 = (__m128i *)(v238 & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v144 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 10 )
                {
                  v144 = v238;
                  v145 = sub_AAC1F0(v143, v238, v135, v136, v137);
                }
                else
                {
                  v145 = sub_A97D20(v143, v144);
                }
                v149 = (__int64 *)v237;
                LODWORD(v239) = v145;
                v150 = v145;
                if ( v145 != (_DWORD)v253 )
                {
                  sub_C16870((__int64)v268, (__int64)&v252, v145);
                  v144 = (__int64)v268;
                  sub_C18DB0((__int64)&v252, (__int64)v268);
                  v149 = (__int64 *)v237;
                  if ( LODWORD(v268[1]) > 0x40 )
                  {
                    if ( v268[0] )
                    {
                      operator delete[](v268[0]);
                      v149 = (__int64 *)v237;
                    }
                  }
                }
                v151 = (__int64 *)v240;
                v237 = (__int64)v149;
                BYTE4(v253) = !sub_F65240(v240->m128i_i64[0], v144, v150, v146, v147, v148);
                v156 = sub_F65460(*v151, v144, v152, v153, v154, v155);
                v161 = (__int64 *)v237;
                if ( v156 && !v259 )
                {
                  v157 = (__int64)v257;
                  v158 = v258 - 1;
                  v144 = 1LL << ((unsigned __int8)v258 - 1);
                  if ( v258 > 0x40 )
                    v157 = *((_QWORD *)v257 + ((unsigned int)v158 >> 6));
                  if ( (v157 & v144) != 0 )
                  {
                    v241 = (void **)v237;
                    v162 = sub_EEB7E0((unsigned __int64)v245, v144, *(double *)v15.m128_u64);
                    sub_168B9F0((__int64)v268, &a1->m128_i64[1], v162, 0x1D02u, 0);
                    v237 = (__int64)v261;
                    v242 = v241;
                    sub_C1DEB0(v261, (int)v241, 10, v259 ^ 1, 0, 1u, 0);
                    v163 = sub_1682AF0((__int64)v268, (__int64)v261);
                    v241 = &v262;
                    sub_C1DEB0(&v262, (int)&v252, 10, BYTE4(v253) ^ 1, 0, 1u, 0);
                    v164 = sub_1682AF0(v163, (__int64)v241);
                    v250 = *(_QWORD *)(v10 + 48);
                    v165 = sub_162B6D0(v164, &v250);
                    v251 = sub_EEC8C0((unsigned __int64)v245, (__int64)&v250, *(double *)v15.m128_u64);
                    sub_1587DB0(v165, &v251);
                    v166 = (__int64 *)v242;
                    if ( v262 != v241 + 2 )
                    {
                      v241 = v242;
                      operator delete(v262);
                      v166 = (__int64 *)v241;
                    }
                    if ( v261[0].m128i_i64[0] != v237 + 16 )
                    {
                      v237 = (__int64)v166;
                      operator delete((void *)v261[0].m128i_i64[0]);
                      v166 = (__int64 *)v237;
                    }
                    v237 = (__int64)v166;
                    sub_15F7200(v268);
                    v144 = v10;
                    sub_1CC6E20((__int64)a1, v10);
                    v161 = (__int64 *)v237;
                  }
                }
                v237 = (__int64)v161;
                if ( sub_F65460(v240->m128i_i64[0], v144, v157, v158, v159, v160) )
                {
                  v167 = sub_C16760(v237);
                  v169 = v237;
                  v170 = v258 - v167;
                }
                else
                {
                  v212 = v258 + 1;
                  if ( v259 )
                    v213 = sub_C16760(v237);
                  else
                    v213 = sub_C16790(v237);
                  v169 = v237;
                  v170 = v212 - v213;
                }
                if ( v170 > (unsigned int)v239 )
                {
                  v239 = v169;
                  v224 = sub_EEB7E0((unsigned __int64)v245, v144, *(double *)v15.m128_u64);
                  sub_168B9F0((__int64)v268, &a1->m128_i64[1], v224, 0x1D03u, 0);
                  v237 = (__int64)v261;
                  sub_C1DEB0(v261, v239, 10, v259 ^ 1, 0, 1u, 0);
                  v239 = sub_1682AF0((__int64)v268, (__int64)v261);
                  sub_C1DEB0(&v262, (int)&v252, 10, BYTE4(v253) ^ 1, 0, 1u, 0);
                  v225 = sub_1682AF0(v239, (__int64)&v262);
                  v250 = *(_QWORD *)(v10 + 48);
                  v239 = sub_162B6D0(v225, &v250);
                  v251 = sub_EEC8C0((unsigned __int64)v245, (__int64)&v250, *(double *)v15.m128_u64);
                  sub_1587DB0(v239, &v251);
                  if ( v262 != &v264 )
                    operator delete(v262);
                  if ( v261[0].m128i_i64[0] != v237 + 16 )
                    operator delete((void *)v261[0].m128i_i64[0]);
                  sub_15F7200(v268);
                  sub_1CC6E20((__int64)a1, v10);
                }
                if ( v258 > 0x40 && v257 )
                  operator delete[](v257);
              }
              if ( v247 )
              {
                a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
                a5->m128i_i64[1] = (__int64)v245;
                sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
                v171 = _mm_loadu_si128(&v243);
                a6[1].m128i_i64[0] = v244;
                *a6 = v171;
              }
              else
              {
                v207 = v246[0];
                if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 16LL) != 47 )
                  v207 = v238;
                sub_F1F190((__int64)v268, (_QWORD *)a1[15].m128_u64[1], (void ***)&v252, v207, 0, v168);
                v208 = _mm_load_si128((const __m128i *)v268);
                a5[1].m128i_i64[0] = v269;
                *a5 = v208;
                sub_F1F190(
                  (__int64)v268,
                  (_QWORD *)a1[15].m128_u64[1],
                  (void ***)&v252,
                  *(_QWORD *)&byte_8[v207 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v207 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v207) & 7,
                  0,
                  v209);
                v210 = _mm_load_si128((const __m128i *)v268);
                a6[1].m128i_i64[0] = v269;
                *a6 = v210;
              }
              v39 = (__int64)v245;
            }
LABEL_165:
            if ( (unsigned int)v253 <= 0x40 )
              goto LABEL_53;
            v108 = (void **)v252;
            if ( !v252 )
              goto LABEL_53;
            goto LABEL_97;
          }
          sub_168B9F0((__int64)v268, &a1->m128_i64[1], v239, 0x13EDu, 0);
          v261[0].m128i_i64[0] = v248[1];
          v187 = v246;
          v188 = sub_162B6D0((__int64)v268, v261[0].m128i_i64);
        }
        else
        {
          sub_168B9F0((__int64)v268, &a1->m128_i64[1], v239, 0x13F0u, 0);
          v187 = (__int64 *)&v249;
          v188 = (__int64)v268;
        }
        v189 = sub_1605D30(v188, v187);
        v262 = (void *)sub_EEC8C0((unsigned __int64)v248, (__int64)v187, *(double *)v15.m128_u64);
        sub_1587DB0(v189, (__int64 *)&v262);
        sub_15F7200(v268);
        sub_1CC6E20((__int64)a1, v10);
LABEL_202:
        v39 = 1;
        goto LABEL_165;
      }
      v109 = *(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL);
      v110 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v109 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v110 == 42 )
      {
        if ( *(_BYTE *)(v109 + 16) != 42 )
          v109 = sub_F63050(v109, v33, v91, v92);
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v109 + 32)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 <= 1 )
        {
LABEL_104:
          v112 = v248;
          if ( v248[1] == *(_QWORD *)(a1[15].m128_u64[1] + 19080) )
          {
            v182 = v245;
            v183 = sub_1BE7B70(a1, v245, v246[0], 1, v268, nullptr, *(double *)v15.m128_u64, a8);
            if ( !v183 )
              goto LABEL_112;
            LODWORD(v262) = sub_EEB7E0((unsigned __int64)v245, (__int64)v182, *(double *)v15.m128_u64);
            if ( (unsigned __int8)sub_18F5260(
                                    (__int64)a1,
                                    v183,
                                    (int *)&v262,
                                    1u,
                                    0,
                                    0,
                                    (__m128i)v15,
                                    *(double *)a8.m128_u64,
                                    0,
                                    0,
                                    0) )
              goto LABEL_112;
            v184 = sub_1BD6F50((__int64)a1, (void **)v245, (__int64)v268[0], v183, v15, a8);
            if ( v184 == 1 )
              goto LABEL_112;
            v112 = (__int64 *)(v184 & 0xFFFFFFFFFFFFFFFELL);
            v248 = (__int64 *)(v184 & 0xFFFFFFFFFFFFFFFELL);
          }
          sub_1CAF480((__int64 **)&v254, (__int64)v112);
          v113 = v246[0];
          v114 = a6;
          v115 = a5;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 33 )
            goto LABEL_106;
LABEL_191:
          if ( !(unsigned __int8)sub_1CC7D20(
                                   (__int64)a1,
                                   v10,
                                   v113,
                                   (unsigned __int64 *)&v245,
                                   v115,
                                   v114,
                                   (__m128i)v15,
                                   a8) )
            goto LABEL_108;
          goto LABEL_112;
        }
        v109 = *(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL);
        v110 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v109 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      }
      v111 = (unsigned int)v110 - 43;
      if ( (unsigned int)v111 <= 1 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(v109 + 16) - 43 > 1 )
          v109 = sub_F63050(v109, v33, v111, v92);
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_9B4870(
                                                                                      v109,
                                                                                      (__int64)v33,
                                                                                      v111,
                                                                                      v92,
                                                                                      v93)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 <= 1 )
          goto LABEL_104;
        v109 = *(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL);
        v110 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v109 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      }
      if ( v110 == 33 )
      {
        if ( *(_BYTE *)(v109 + 16) != 33 )
          v109 = sub_F63050(v109, v33, v111, v92);
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v109 + 32)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 <= 1 )
          goto LABEL_104;
      }
      v120 = v248;
      sub_1CAF480((__int64 **)&v254, (__int64)v248);
      v113 = v246[0];
      v123 = *(_QWORD *)(v246[0] & 0xFFFFFFFFFFFFFFF0LL);
      v124 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v123 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (_BYTE)v124 == 42 )
      {
        v114 = a6;
        v115 = a5;
LABEL_106:
        v116 = v245;
LABEL_107:
        if ( !(unsigned __int8)sub_1CC8440((__int64)a1, v10, v113, (unsigned __int64)v116, v115, v114, v15, a8) )
        {
LABEL_108:
          v39 = (__int64)v245;
          goto LABEL_53;
        }
LABEL_112:
        v39 = 1;
        goto LABEL_53;
      }
      v125 = (unsigned int)*(unsigned __int8 *)(v123 + 16) - 43;
      if ( (unsigned int)v125 <= 1 )
      {
LABEL_120:
        v116 = v245;
        if ( *((_QWORD *)v245 + 1) == *(_QWORD *)(a1[15].m128_u64[1] + 19080) )
        {
          v194 = sub_9B4870(v123, (__int64)v120, v113, (__int64)v245, v121);
          v195 = v245;
          v196 = sub_1BE7B70(a1, v245, v194, 1, v268, nullptr, *(double *)v15.m128_u64, a8);
          if ( !v196 )
            goto LABEL_112;
          LODWORD(v262) = sub_EEB7E0((unsigned __int64)v245, (__int64)v195, *(double *)v15.m128_u64);
          if ( (unsigned __int8)sub_18F5260(
                                  (__int64)a1,
                                  v196,
                                  (int *)&v262,
                                  1u,
                                  0,
                                  0,
                                  (__m128i)v15,
                                  *(double *)a8.m128_u64,
                                  0,
                                  0,
                                  0) )
            goto LABEL_112;
          v197 = sub_1BD6F50((__int64)a1, (void **)v245, (__int64)v268[0], v196, v15, a8);
          if ( v197 == 1 )
            goto LABEL_112;
          v116 = (_WORD *)(v197 & 0xFFFFFFFFFFFFFFFELL);
          v245 = (_WORD *)(v197 & 0xFFFFFFFFFFFFFFFELL);
        }
        v114 = a6;
        v115 = a5;
        v113 = v246[0];
        goto LABEL_107;
      }
      if ( (unsigned int)(v124 - 43) <= 1 )
      {
        v123 = sub_F63050(v123, v120, v246[0], v125);
        if ( v123 )
          goto LABEL_120;
        v113 = v246[0];
      }
      v185 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v185 + 16) == 13 && ((*(_WORD *)(v185 + 18) >> 3) & 0x1FF) == 0x1E8 )
      {
        if ( ((*(_DWORD *)v248 >> 14) & 0xC) != 0 )
        {
          a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
          a5->m128i_i64[1] = (__int64)v245;
          sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
          v186 = _mm_loadu_si128(&v243);
          a6[1].m128i_i64[0] = v244;
          v39 = (__int64)v245;
          *a6 = v186;
          goto LABEL_53;
        }
        v199 = sub_1CC7360((__int64 *)a1, v10, v113, (unsigned __int64)v248, 0, v122, (__m128i)v15, a8);
        v202 = v199;
        if ( v199 == 1 )
        {
          v231 = sub_C00A40((unsigned __int64)v245, v10, 1, v200, v201);
          sub_168B9F0((__int64)v268, &a1->m128_i64[1], v231, 0x1A7Cu, 0);
          sub_15F7200(v268);
          if ( v247 )
          {
            a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
            a5->m128i_i64[1] = (__int64)v245;
            sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
            v232 = v244;
            *a6 = _mm_loadu_si128(&v243);
            a6[1].m128i_i64[0] = v232;
          }
          else
          {
            sub_F1D250((__int64)v268, v246[0], 1, 0);
            v233 = _mm_load_si128((const __m128i *)v268);
            a5[1].m128i_i64[0] = v269;
            v234 = v246[0];
            *a5 = v233;
            sub_F1D250(
              (__int64)v268,
              *(_QWORD *)&byte_8[v234 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[v234 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v234) & 7,
              1,
              0);
            v235 = _mm_load_si128((const __m128i *)v268);
            a6[1].m128i_i64[0] = v269;
            *a6 = v235;
          }
          goto LABEL_108;
        }
        if ( !v199 )
        {
          v118 = sub_C00A40((unsigned __int64)v245, v10, 0, v200, v201);
          sub_168B9F0((__int64)v268, &a1->m128_i64[1], v118, 0x13EDu, 0);
          v262 = (void *)v248[1];
          v119 = sub_162B6D0((__int64)v268, (__int64 *)&v262);
          sub_1605D30(v119, v246);
          sub_15F7200(v268);
          sub_1CC6E20((__int64)a1, v10);
          goto LABEL_112;
        }
        v39 = 1;
        if ( v202 == 2 )
          goto LABEL_53;
      }
      v114 = a6;
      v115 = a5;
      v113 = v246[0];
      goto LABEL_191;
    }
  }
  v25 = 1;
  v26 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v26 != 43 )
    v25 = 2 * (v26 == 44);
  v27 = sub_F67970(v246, a1[15].m128_i64[1]);
  result = sub_160A600(
             (__int64)a1,
             (unsigned __int64)v248,
             v27,
             0,
             v25,
             0,
             *(double *)v15.m128_u64,
             *(double *)a8.m128_u64,
             0);
  if ( result != 1 )
  {
    sub_1CAF480((__int64 **)&v254, result & 0xFFFFFFFFFFFFFFFELL);
    a5->m128i_i64[0] = a5->m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
    a5->m128i_i64[1] = (__int64)v245;
    sub_AB6BB0(&v243, (_QWORD *)a1[15].m128_u64[1], a5);
    v28 = _mm_loadu_si128(&v243);
    a6[1].m128i_i64[0] = v244;
    result = (__int64)v245;
    *a6 = v28;
  }
  return result;
}
