__int64 __fastcall sub_1DCE820(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 *v8; // r15
  __int64 v11; // r13
  unsigned __int64 v12; // rbp
  __int64 v14; // rdi
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 result; // rax
  bool v21; // r8
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  _DWORD *v32; // rdx
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbp
  unsigned __int64 v40; // r13
  _DWORD *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdi
  __int8 *v44; // r13
  unsigned int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r9
  unsigned __int64 v48; // r13
  __int64 v49; // rax
  __m128 v50; // kr00_16
  __m128 v51; // kr10_16
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // r8
  __int64 v55; // r8
  unsigned int v56; // r9d
  unsigned int v57; // edx
  char v58; // al
  int v59; // eax
  __int64 v60; // rdx
  unsigned int v61; // ecx
  __int8 *v62; // rdi
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rsi
  __int64 v66; // rax
  __int32 v67; // eax
  __int64 v68; // rdi
  __int8 *v69; // r13
  unsigned int v70; // eax
  __int64 v71; // r13
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rax
  unsigned __int64 v75; // r13
  __int64 v76; // rsi
  __int64 v77; // rax
  unsigned __int64 v78; // r8
  __int64 v79; // rdx
  __m128 v80; // kr20_16
  __m128 v81; // xmm0
  __m128 v82; // kr30_16
  __int64 v83; // rdi
  __int8 *v84; // r13
  unsigned int v85; // eax
  __int64 v86; // rax
  __m128 v87; // kr40_16
  __int32 v88; // ecx
  __int64 v89; // rdx
  __m128 v90; // xmm5
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  int v94; // r15d
  __int64 v95; // r13
  __int64 v96; // rsi
  __int64 v97; // rax
  unsigned __int64 v98; // rdx
  __m128 v99; // kr50_16
  __m128 v100; // kr60_16
  __m128 v101; // kr70_16
  __int64 v102; // rdi
  __int64 *v103; // r13
  unsigned int v104; // eax
  __int64 v105; // r13
  __int64 v106; // rdi
  __int64 v107; // r8
  _DWORD *v108; // rdx
  __m128 v109; // kr80_16
  __int64 *v110; // rbp
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  unsigned __int64 v114; // r8
  __int64 *v115; // r13
  __int64 v116; // rax
  __int64 v117; // r9
  __int64 v118; // rdx
  __int32 v119; // eax
  __int64 v120; // rsi
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // r9
  __int64 v125; // rsi
  __m128 v126; // kr90_16
  _DWORD *v127; // rdx
  unsigned __int16 v128; // cx
  __int64 v129; // rdx
  unsigned __int16 v130; // cx
  _DWORD *v131; // rdx
  __int32 v132; // eax
  __int64 v133; // rdi
  unsigned int v134; // eax
  __int64 v135; // rax
  unsigned __int64 v136; // rdx
  unsigned __int64 v137; // rcx
  __int64 v138; // r9
  __int64 v139; // r8
  __int64 v140; // rbx
  __int64 v141; // r13
  unsigned __int16 *v142; // rax
  unsigned __int64 v143; // rdx
  __m128 v144; // krA0_16
  __int64 v145; // rdi
  __int64 v146; // rsi
  unsigned int v147; // r13d
  __int64 v148; // rcx
  unsigned int v149; // ebp
  unsigned int v150; // eax
  __int64 v151; // rbp
  unsigned __int64 v152; // rdx
  __int64 v153; // rax
  __int64 v154; // rbp
  __m128 v155; // krB0_16
  __m128 v156; // krC0_16
  __int64 v157; // r13
  unsigned __int64 v158; // rdx
  unsigned __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  unsigned __int16 *v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r9
  unsigned __int64 v166; // rsi
  __int64 v167; // rdx
  unsigned __int64 v168; // rcx
  __int64 v169; // rax
  __int64 v170; // r8
  __int64 v171; // rdi
  unsigned __int64 v172; // rcx
  unsigned __int64 v173; // r8
  _DWORD *v174; // rdx
  __m128 v175; // xmm0
  __m128 v176; // krD0_16
  __m128 v177; // krE0_16
  unsigned __int64 v178; // rax
  unsigned __int64 v179; // rdx
  unsigned __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  unsigned __int16 *v183; // rax
  unsigned __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // rax
  unsigned __int64 v189; // rax
  __int64 v190; // r8
  unsigned __int32 v191; // r15d
  unsigned __int8 v192; // al
  _DWORD *v193; // rdx
  __m128 v194; // krF0_16
  __int32 v195; // ecx
  __int64 v196; // rdx
  unsigned __int64 v197; // rdx
  unsigned __int64 v198; // rax
  __m128 v199; // kr100_16
  unsigned __int64 v200; // rdx
  unsigned __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  unsigned __int16 *v204; // rax
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // r9
  unsigned __int64 v208; // rax
  unsigned __int64 v209; // rax
  __int64 v210; // r8
  _DWORD *v211; // rdx
  unsigned int v212; // eax
  __int64 v213; // r13
  unsigned __int64 v214; // rbx
  __int64 v215; // rax
  unsigned int v216; // eax
  __int64 v217; // rdx
  __int64 v218; // rsi
  __int64 v219; // r13
  unsigned __int64 v220; // rax
  __int64 v221; // r15
  __int64 v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rsi
  __int64 v225; // rax
  __int64 v226; // rcx
  __int64 v227; // r9
  __int64 v228; // rdi
  const __m128i *v229; // r13
  unsigned int v230; // eax
  __int64 v231; // rax
  __int64 v232; // r8
  __int64 v233; // rdx
  __int32 v234; // eax
  __m128 v235; // kr110_16
  const __m128i *v236; // rbx
  unsigned int v237; // eax
  __int64 v238; // r13
  __int64 v239; // rax
  __m128 v240; // kr120_16
  __m128 v241; // kr130_16
  __m128 v242; // kr140_16
  __m128 v243; // kr150_16
  _DWORD *v244; // rdx
  _QWORD *v245; // rax
  unsigned __int64 v246; // rdx
  unsigned __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // r9
  unsigned __int64 v250; // r13
  unsigned __int16 *v251; // rax
  unsigned __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  unsigned __int64 v256; // rdx
  __int64 v257; // r15
  unsigned __int16 *v258; // rax
  unsigned __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // r8
  __int64 v262; // r9
  __int64 v263; // rax
  __int64 v264; // rdi
  unsigned __int64 v265; // r15
  __int64 v266; // r8
  __m128 v267; // xmm0
  unsigned __int64 v268; // r8
  __int64 v269; // rdx
  __int64 v270; // rax
  unsigned __int64 v271; // rbp
  _DWORD *v272; // rdx
  unsigned __int64 v273; // rax
  __int64 v274; // rax
  __m128 v275; // [rsp+0h] [rbp-B8h] BYREF
  __m128 v276; // [rsp+10h] [rbp-A8h]
  __m128i v277; // [rsp+20h] [rbp-98h] BYREF
  __int64 v278; // [rsp+30h] [rbp-88h]
  unsigned __int64 v279; // [rsp+38h] [rbp-80h]
  __int64 v280; // [rsp+48h] [rbp-70h] BYREF
  void *v281[2]; // [rsp+50h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-58h]
  __int128 v283; // [rsp+70h] [rbp-48h]

  v8 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = (a3 >> 3) & 1;
  v12 = a3;
  v14 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v11 | a3 & 7 )
  {
LABEL_3:
    v275.m128_u64[0] = (unsigned __int64)a4;
    v276 = _mm_loadh_ps((const double *)v275.m128_u64);
    LODWORD(v18) = sub_F6C520(v14 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *v8;
    v275.m128_u64[0] = (unsigned int)v18
                     * ((a4 != nullptr) + ((unsigned __int64)a4 - (a4 != nullptr)) / (unsigned int)v18);
    LOWORD(v18) = 0;
    v275 = _mm_loadh_ps((const double *)v275.m128_u64);
    if ( v11 )
    {
      v18 = v8[3];
      if ( (v17 & 7) != 0 )
        goto LABEL_5;
    }
    else if ( (v17 & 7) != 0 )
    {
      goto LABEL_5;
    }
    v21 = (v18 & 0x1C0) != 0;
    if ( (v17 & 8) == 0 )
    {
      v22 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v22 + 16) == 50 )
      {
        if ( v17 )
        {
          v19 = sub_1DDB640(a1, a2, v275.m128_u64[0], v275.m128_u64[1], v21, v16, v275.m128_u64[0], v275.m128_u64[1]);
LABEL_6:
          if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            return 0;
          goto LABEL_14;
        }
      }
      else if ( *(_BYTE *)(v22 + 16) == 45 && v17 )
      {
        v19 = sub_1DDB970(a1, a2, v275.m128_u64[0], v275.m128_u64[1], v21, v16, v275.m128_u64[0], v275.m128_u64[1]);
        if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
LABEL_14:
        result = sub_1DBC110(a1, v19, v276.m128_i64[0], v276.m128_i64[1], a5);
        if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          return result;
        return 0;
      }
    }
LABEL_5:
    v19 = sub_1DCE820(a1, a2, v275.m128_u64[0], v275.m128_u64[1]);
    goto LABEL_6;
  }
  v15 = a3;
  switch ( *(_BYTE *)(v14 + 16) )
  {
    case 0:
      v216 = sub_F6C520(*(_QWORD *)(a3 + 32));
      return sub_1DCE820(
               a1,
               a2,
               *(_QWORD *)(v12 + 32),
               v216 * (((unsigned __int64)a4 - (a4 != nullptr)) / v216 + (a4 != nullptr)));
    case 1:
      v212 = sub_F6C520(*(_QWORD *)(a3 + 32));
      v213 = sub_1DCE820(
               a1,
               a2,
               *(_QWORD *)(v12 + 32),
               v212 * (((unsigned __int64)a4 - (a4 != nullptr)) / v212 + (a4 != nullptr)));
      v214 = v213 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v213 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v214;
      v215 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_188;
      v214 = v12;
      sub_F6C520(*(_QWORD *)(v12 + 32));
      if ( *(_QWORD *)(v12 + 32) != v213 )
      {
        v215 = *a1;
LABEL_188:
        v214 = sub_A75D20(*(_QWORD **)(v215 + 248), v213);
      }
      sub_1EA6140(a2, v214, 0, 1);
      return v214;
    case 2:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v109 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD0250(a1, a2, v109.m128_u64[0], v109.m128_u64[1], a3, a8, v109.m128_u64[0], v109.m128_u64[1]);
    case 3:
      v236 = a4 + 1;
      v237 = sub_F6C520(*(_QWORD *)(a3 + 32));
      v238 = sub_1DCE820(
               a1,
               a2,
               *(_QWORD *)(v12 + 32),
               v237 * (((unsigned __int64)v236 - (v236 != nullptr)) / v237 + (v236 != nullptr)));
      v214 = v238 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v238 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v214;
      v239 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_213;
      v214 = v12;
      sub_F6C520(*(_QWORD *)(v12 + 32));
      if ( *(_QWORD *)(v12 + 32) != v238 )
      {
        v239 = *a1;
LABEL_213:
        v214 = sub_A72990(*(_QWORD *)(v239 + 248), v238);
      }
      sub_1EA6140(a2, v214, 16, 8);
      return v214;
    case 4:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v235 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD0500(a1, a2, v235.m128_u64[0], v235.m128_u64[1], a3, a8, v235.m128_u64[0], v235.m128_u64[1]);
    case 5:
      v228 = *(_QWORD *)(a3 + 32);
      v229 = a4 + 1;
      v275.m128_u64[0] = a3;
      v230 = sub_F6C520(v228);
      v231 = sub_1DCE820(
               a1,
               a2,
               *(_QWORD *)(v12 + 32),
               v230 * (((unsigned __int64)v229 - (v229 != nullptr)) / v230 + (v229 != nullptr)));
      v232 = v275.m128_u64[0];
      if ( (v231 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_40;
      if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(v12 + 32) != v231 )
      {
        v232 = sub_1DB7A20(
                 a1,
                 v231,
                 (*(_WORD *)(v12 + 18) >> 6) & 7,
                 0,
                 0,
                 (*(_BYTE *)(v12 + 18) >> 3) & 7,
                 a4->m128i_i64[0]);
        if ( (v232 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_40;
      }
      v275.m128_u64[0] = v232;
      sub_1EA6140(a2, v232, 16, 8);
      v33 = v275.m128_u64[0];
      *(_DWORD *)v233 = a4->m128i_i32[0];
      v234 = a4->m128i_i32[1];
      *(_QWORD *)(v233 + 8) = 0;
      *(_DWORD *)(v233 + 4) = v234;
      goto LABEL_26;
    case 6:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v50 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD0690(a1, a2, v50.m128_u64[0], v50.m128_u64[1], a3, a8, v50.m128_u64[0], v50.m128_u64[1]);
    case 7:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v156 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD0820(a1, a2, v156.m128_u64[0], v156.m128_u64[1], a3, a8, v156.m128_u64[0], v156.m128_u64[1]);
    case 8:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v155 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD0900(a1, a2, v155.m128_u64[0], v155.m128_u64[1], a3, a8, v155.m128_u64[0], v155.m128_u64[1]);
    case 9:
    case 0x3B:
      goto LABEL_3;
    case 0xA:
      if ( !*(_DWORD *)(*a1 + 12632) )
        goto LABEL_25;
      v145 = *(_QWORD *)(*a1 + 248);
      v146 = *(_QWORD *)(v145 + 18720);
      v147 = a4->m128i_i32[0];
      v148 = *(_BYTE *)(a3 + 32) & 1;
      v149 = *(_DWORD *)(a3 + 32) >> 1;
      v275.m128_i32[0] = *(_BYTE *)(a3 + 32) & 1;
      v150 = sub_AAC1F0(v145, v146, v149, v148, a3);
      v151 = v149 & 0xFFFFFF;
      LODWORD(v281[1]) = v150;
      if ( v150 > 0x40 )
      {
        sub_2205470(v281, v151, 1);
      }
      else
      {
        v152 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v150;
        if ( !v150 )
          v152 = 0;
        v281[0] = (void *)(v152 & v151);
      }
      v153 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)v281, *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v147);
      v154 = sub_1E6EEC0(*a1, v275.m128_u32[0], v153, v147);
      if ( LODWORD(v281[1]) > 0x40 && v281[0] )
        operator delete[](v281[0]);
      v15 = v154;
      if ( (v154 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_25;
      goto LABEL_40;
    case 0xB:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v144 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD0D30(a1, a2, v144.m128_u64[0], v144.m128_u64[1], a3, a8, v144.m128_u64[0], v144.m128_u64[1]);
    case 0xC:
      v133 = *(_QWORD *)(a3 + 32);
      v275.m128_u64[0] = a3;
      v134 = sub_F6C520(v133);
      v135 = sub_1DCE820(
               a1,
               a2,
               *(_QWORD *)(v12 + 32),
               v134 * (((unsigned __int64)a4 - (a4 != nullptr)) / v134 + (a4 != nullptr)));
      v139 = v275.m128_u64[0];
      v140 = v135;
      if ( (v135 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_40;
      v141 = *(_QWORD *)(v12 + 56);
      if ( v141 )
      {
        v142 = sub_1DC71F0(a1, *(_QWORD *)(v12 + 56), v136, v137, v275.m128_i64[0], v138, a5, a6);
        if ( v142 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        {
LABEL_40:
          v33 = 0;
          goto LABEL_26;
        }
        v139 = v275.m128_u64[0];
        v143 = (unsigned __int64)v142 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v143 = 0;
      }
      if ( *(_DWORD *)(*a1 + 12632) || v141 != v143 || *(_QWORD *)(v12 + 32) != v140 )
        v139 = sub_1E5F880(
                 *a1,
                 v140,
                 v143,
                 (unsigned __int8)BYTE2(*(_DWORD *)(v12 + 16)) >> 7,
                 HIBYTE(*(_DWORD *)(v12 + 16)) & 1);
      v275.m128_u64[0] = v139;
      sub_1EA6140(a2, v139, 0, 1);
      v33 = v275.m128_u64[0];
LABEL_26:
      result = v33;
      break;
    case 0xD:
      v128 = *(_WORD *)(a3 + 18);
      v129 = 8;
      v130 = ((v128 >> 3) + 74) & 0x1FF;
      if ( v130 <= 0x31u )
        v129 = ((0x3FFFFFFFFEBE1uLL >> v130) & 1) != 0 ? 12LL : 8LL;
      sub_1EA6140(a2, v12, v129, 4);
      v132 = a4->m128i_i32[0];
      *v131 = a4->m128i_i32[0];
      v131[1] = v132;
      if ( (((*(_WORD *)(v12 + 18) >> 3) + 74) & 0x1FFu) <= 0x31
        && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v12 + 18) >> 3) + 74)) & 1) != 0 )
      {
        v131[2] = a4->m128i_i32[2];
      }
      return v12;
    case 0xE:
      sub_1EA6140(a2, a3, 4, 4);
      *v127 = a4->m128i_i32[0];
      return v12;
    case 0xF:
      v157 = *a1;
      v275.m128_u64[0] = a3;
      sub_18C74E0(v157, 0, 0, 0);
      v204 = sub_1DC71F0(a1, *(_QWORD *)(v12 + 24), v200, v201, v202, v203, a5, a6);
      if ( v204 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_221;
      v208 = sub_19A4070(*a1, (_QWORD *)((unsigned __int64)v204 & 0xFFFFFFFFFFFFFFFELL), v205, v206, v12, v207, a5, a6);
      if ( v208 == 1 )
        goto LABEL_221;
      v209 = v208 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632) || (v210 = v275.m128_u64[0], v209 != *(_QWORD *)(v12 + 24)) )
      {
        v210 = sub_1E5FBF0(*a1, v209, 1);
        if ( (v210 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_221;
      }
      v275.m128_u64[0] = v210;
      sub_1EA6140(a2, v210, 8, 4);
      v173 = v275.m128_u64[0];
      *v211 = a4->m128i_i32[0];
      v211[1] = a4->m128i_i32[1];
      goto LABEL_162;
    case 0x10:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v199 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DEB7C0(a1, a2, v199.m128_u64[0], v199.m128_u64[1], a3, a8, v199.m128_u64[0], v199.m128_u64[1]);
    case 0x11:
      v195 = a4->m128i_i32[0];
      *(_OWORD *)v281 = 0;
      v196 = *(_QWORD *)(a3 + 40);
      *(_OWORD *)ptr = 0;
      v283 = 0;
      v280 = sub_1DD84F0((_DWORD)a1, (unsigned int)v281, v196, v195, 0, 0, 0);
      if ( !sub_F22B30(&v280)
        && ((v197 = *(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
         || (v197 = sub_1DD1AB0(a1, *(_QWORD *)(v12 + 24)), (v197 & 0xFFFFFFFFFFFFFFF0LL) != 0))
        && (v198 = sub_AB7C40(*(_QWORD **)(*a1 + 248), v280, v197, 0), v12 = v198, (v198 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        sub_1EA6140(a2, v198, 4, 4);
        *v244 = a4->m128i_i32[0];
      }
      else
      {
        v12 = 0;
      }
      goto LABEL_89;
    case 0x12:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v194 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD0E10(a1, a2, v194.m128_u64[0], v194.m128_u64[1], a3, a8, v194.m128_u64[0], v194.m128_u64[1]);
    case 0x13:
      v157 = *a1;
      v275.m128_u64[0] = a3;
      sub_18C74E0(v157, 4, 0, 4);
      v178 = sub_F57B50(v12);
      v183 = sub_1DC71F0(a1, v178, v179, v180, v181, v182, a5, a6);
      v188 = sub_19146D0(*a1, (unsigned __int64)v183, v184, v185, v186, v187, a5, a6);
      if ( v188 == 1 )
        goto LABEL_221;
      v275.m128_u64[0] = v188 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632)
        || (v276.m128_u64[0] = v12, v189 = sub_F57B50(v12), v190 = v12, v275.m128_u64[0] != v189) )
      {
        v191 = a4->m128i_i32[0];
        v192 = sub_F57B40(v12);
        v190 = sub_1E6EEC0(*a1, v192, v275.m128_u64[0], v191);
        if ( (v190 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_221;
      }
      v275.m128_u64[0] = v190;
      sub_1EA6140(a2, v190, 4, 4);
      v173 = v275.m128_u64[0];
      *v193 = a4->m128i_i32[0];
      goto LABEL_162;
    case 0x14:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v177 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD45E0(a1, a2, v177.m128_u64[0], v177.m128_u64[1], 0, a8, v177.m128_u64[0], v177.m128_u64[1]);
    case 0x15:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v176 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD0F50(a1, a2, v176.m128_u64[0], v176.m128_u64[1], a3, a8, v176.m128_u64[0], v176.m128_u64[1]);
    case 0x16:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v175 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DEB2B0(a1, a2, v175.m128_u64[0], v175.m128_u64[1], a3, a8, v175.m128_u64[0], v175.m128_u64[1]);
    case 0x17:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v126 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD1070(a1, a2, v126.m128_u64[0], v126.m128_u64[1], a3, a8, v126.m128_u64[0], v126.m128_u64[1]);
    case 0x18:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v242 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DED920(a1, a2, v242.m128_u64[0], v242.m128_u64[1], a3, a8, v242.m128_u64[0], v242.m128_u64[1]);
    case 0x19:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v240 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD1190(a1, a2, v240.m128_u64[0], v240.m128_u64[1], a3, a8, v240.m128_u64[0], v240.m128_u64[1]);
    case 0x1A:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v275 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DCD870((__int64)a1, a2, v275.m128_i64[0], (void **)v275.m128_u64[1], *(double *)a5.m128_u64, a6);
    case 0x1B:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v243 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD3560(a1, a2, v243.m128_u64[0], v243.m128_u64[1], a3, a8, v243.m128_u64[0], v243.m128_u64[1]);
    case 0x1C:
      return v12;
    case 0x1D:
      v12 = 0;
      v34 = sub_F61460(a3, a2, a3, (__int64)a4, a3, a8);
      v35 = sub_1DD8310(a1, a4->m128i_u32[0], v34);
      if ( !v35
        || ((v39 = *(_QWORD *)(v35 + 48)) == 0
          ? (v12 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v35, *a1, v36, v37, v38), v40 = v12 & 0xFFFFFFFFFFFFFFF0LL)
          : (v12 = v39 & 0xFFFFFFFFFFFFFFF0LL, v40 = v12),
            sub_1EA6140(a2, v12, 4, 4),
            *v41 = a4->m128i_i32[0],
            !v40) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*a1 + 11312) + ((unsigned __int64)*(unsigned int *)(*a1 + 11320) << 6) - 64) == 25 )
        {
          v42 = *(_QWORD *)(*(_QWORD *)(*v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v42 + 16) == 29 )
          {
            v12 = sub_1DD1AB0(a1, *(_QWORD *)(v42 + 32));
            sub_1EA6B50(a2, *(_QWORD *)(*a1 + 248), v12, a4->m128i_u32[0]);
          }
        }
      }
      return v12;
    case 0x1E:
      v43 = *(_QWORD *)(a3 + 24);
      v44 = &a4->m128i_i8[4];
      v275.m128_u64[0] = a3;
      v45 = sub_F6C520(v43);
      v48 = sub_1DCE820(
              a1,
              a2,
              *(_QWORD *)(v12 + 24),
              v45 * ((unsigned __int64)&v44[-(v44 != nullptr)] / v45 + (v44 != nullptr)));
      if ( (v48 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_40;
      v49 = *a1;
      v15 = *(unsigned int *)(*a1 + 12632);
      if ( (_DWORD)v15 )
        goto LABEL_39;
      sub_F6C520(*(_QWORD *)(v12 + 24));
      v15 = v275.m128_u64[0];
      if ( v48 != *(_QWORD *)(v12 + 24) )
      {
        v49 = *a1;
LABEL_39:
        v15 = sub_A820D0(*(_QWORD *)(v49 + 248), v48, *(_QWORD *)(v12 + 32), v46, v15, v47);
        if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_40;
      }
      goto LABEL_25;
    case 0x1F:
      v76 = *(_QWORD *)(a3 + 32);
      v275.m128_u64[0] = a3;
      v77 = sub_1DD1AB0(a1, v76);
      v78 = v275.m128_u64[0];
      if ( (v77 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_40;
      if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(v12 + 32) != v77 )
      {
        v78 = sub_A76DD0(*(_QWORD *)(*a1 + 248), v77, *(_DWORD *)(v12 + 40), *(_DWORD *)(v12 + 44));
        if ( (v78 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_40;
      }
      v275.m128_u64[0] = v78;
      sub_1EA6140(a2, v78, 32, 8);
      v33 = v275.m128_u64[0];
      *(_DWORD *)v79 = a4->m128i_i32[0];
      *(_QWORD *)(v79 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(__m128i *)(v79 + 16) = _mm_loadu_si128(a4 + 1);
      goto LABEL_26;
    case 0x20:
      v73 = *(_QWORD *)(a3 + 32);
      v275.m128_u64[0] = a3;
      v74 = sub_1DD1AB0(a1, v73);
      v75 = v74 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v74 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v277.m128i_i64[0] = v74;
        v276.m128_u64[0] = *a1;
        sub_18C74E0(v276.m128_i64[0], 4, 0, 4);
        v247 = a4[1].m128i_u64[0];
        v248 = v275.m128_u64[0];
        v249 = v277.m128i_i64[0];
        if ( !v247 )
          v247 = *(_QWORD *)(v12 + 40);
        v250 = a4[1].m128i_u64[1];
        if ( !v250 )
          v250 = *(_QWORD *)(v12 + 48);
        v278 = v277.m128i_i64[0];
        v277.m128i_i64[0] = v275.m128_u64[0];
        v275.m128_u64[0] = v247;
        v251 = sub_1DC71F0(a1, v247, v246, v247, v248, v249, a5, a6);
        v257 = sub_19146D0(*a1, (unsigned __int64)v251, v252, v253, v254, v255, a5, a6);
        if ( v257 != 1
          && (v279 = v275.m128_u64[0],
              v258 = sub_1DC71F0(a1, v250, v256, v275.m128_u64[0], v277.m128i_i64[0], v278, a5, a6),
              v263 = sub_19146D0(*a1, (unsigned __int64)v258, v259, v260, v261, v262, a5, a6),
              v263 != 1)
          && ((v264 = *a1,
               v265 = v257 & 0xFFFFFFFFFFFFFFFELL,
               v266 = v277.m128i_i64[0],
               v275.m128_u64[0] = v263 & 0xFFFFFFFFFFFFFFFELL,
               !*(_DWORD *)(v264 + 12632))
           && *(_QWORD *)(v12 + 32) == v278
           && v279 == v265
           && v250 == v275.m128_u64[0]
           || (v266 = sub_1E71AF0(v264, v278, v265, v275.m128_u64[0], *(unsigned int *)(v12 + 56)),
               (v266 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
        {
          v277.m128i_i64[0] = v265;
          v267 = _mm_loadh_ps((const double *)v275.m128_u64);
          v275.m128_u64[0] = v266;
          v277 = (__m128i)v267;
          sub_1EA6140(a2, v266, 32, 8);
          a5 = (__m128)_mm_load_si128(&v277);
          v268 = v275.m128_u64[0];
          *(_DWORD *)v269 = a4->m128i_i32[0];
          v270 = *(__int64 *)((char *)a4->m128i_i64 + 4);
          v75 = v268;
          *(__m128 *)(v269 + 16) = a5;
          *(_QWORD *)(v269 + 4) = v270;
        }
        else
        {
          v75 = 0;
        }
        sub_190D5E0(v276.m128_i64[0], a5);
      }
      return v75;
    case 0x21:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v81 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DEE710(a1, a2, v81.m128_u64[0], v81.m128_u64[1], a3, a8, v81.m128_u64[0], v81.m128_u64[1]);
    case 0x22:
      v68 = *(_QWORD *)(a3 + 32);
      v69 = &a4->m128i_i8[4];
      v275.m128_u64[0] = a3;
      v70 = sub_F6C520(v68);
      v71 = sub_1DCE820(
              a1,
              a2,
              *(_QWORD *)(v12 + 32),
              v70 * ((unsigned __int64)&v69[-(v69 != nullptr)] / v70 + (v69 != nullptr)));
      if ( (v71 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_40;
      v72 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_68;
      sub_F6C520(*(_QWORD *)(v12 + 32));
      v15 = v275.m128_u64[0];
      if ( *(_QWORD *)(v12 + 32) == v71 )
        goto LABEL_25;
      v72 = *a1;
LABEL_68:
      v15 = sub_A74EC0(*(_QWORD *)(v72 + 248), v71);
      if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_25;
      goto LABEL_40;
    case 0x23:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v80 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DEE960(a1, a2, v80.m128_u64[0], v80.m128_u64[1], a3, a8, v80.m128_u64[0], v80.m128_u64[1]);
    case 0x24:
      sub_1EA6360(a2, a3, a4);
      return v12;
    case 0x25:
      v52 = *(_QWORD *)(a3 + 40);
      v275.m128_u64[0] = v12;
      v53 = sub_1DD8310(a1, *(unsigned int *)(v52 + 24), v52);
      v54 = v12;
      if ( !v53 )
        goto LABEL_40;
      if ( *(_DWORD *)(*a1 + 12632) || v53 != *(_QWORD *)(v12 + 40) )
      {
        LOBYTE(v55) = *(_BYTE *)(v12 + 32) & 0x3F;
        if ( (_BYTE)v55 )
        {
          v56 = a4->m128i_u32[2];
          v57 = a4->m128i_u32[1];
          v55 = (unsigned __int8)v55;
        }
        else
        {
          v56 = 0;
          v55 = 0;
          v57 = 0;
        }
        v54 = sub_1A891C0(*(__int64 **)(*a1 + 736), v53, v57, (_BYTE *)(v12 + 48), v55, v56, (int)a4 + 12, v55, 1);
        if ( (v54 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_40;
      }
      v58 = *(_BYTE *)(v54 + 32);
      v275.m128_u64[0] = v54;
      v59 = v58 & 0x3F;
      if ( v59 )
        v59 = 4 * v59 + 8;
      sub_1EA6140(a2, v54, 4 * ((unsigned int)(v59 + 3) >> 2) + 4, 4);
      v33 = v275.m128_u64[0];
      if ( (*(_BYTE *)(v12 + 32) & 0x3F) != 0 )
      {
        *(_DWORD *)(v60 + 4) = a4->m128i_i32[1];
        v61 = *(_BYTE *)(v12 + 32) & 0x3F;
        if ( (*(_BYTE *)(v12 + 32) & 0x3F) == 0 )
          goto LABEL_242;
        v62 = &a4->m128i_i8[12];
        if ( (v60 + 12 >= (unsigned __int64)&a4[1].m128i_u64[1] + 4
           || (unsigned __int64)&a4->m128i_u64[1] + 4 >= v60 + 28)
          && v61 - 1 > 2 )
        {
          v63 = 12;
          do
          {
            *(__m128i *)(v60 + v63) = _mm_loadu_si128((const __m128i *)((char *)a4 + v63));
            v63 += 16;
          }
          while ( 16LL * (v61 >> 2) + 12 != v63 );
          v64 = v61 & 0xFC;
          if ( v61 != (v61 & 0xFFFFFFFC) )
          {
            *(_DWORD *)(v60 + 4LL * ((unsigned __int8)v61 & 0xFC) + 12) = *(_DWORD *)&v62[4 * (v61 & 0xFC)];
            v65 = (unsigned int)(v64 + 1);
            if ( v61 != (_DWORD)v65 )
            {
              v66 = (unsigned int)(v64 + 2);
              *(_DWORD *)(v60 + 4 * v65 + 12) = *(_DWORD *)&v62[4 * v65];
              if ( v61 != (_DWORD)v66 )
                *(_DWORD *)(v60 + 4 * v66 + 12) = a4->m128i_i32[v66 + 3];
            }
          }
        }
        else
        {
          v274 = 0;
          do
          {
            *(_DWORD *)(v60 + 4 * v274 + 12) = a4->m128i_i32[v274 + 3];
            ++v274;
          }
          while ( v61 != (_DWORD)v274 );
        }
        if ( (*(_BYTE *)(v12 + 32) & 0x3F) != 0 )
          v67 = a4->m128i_i32[2];
        else
LABEL_242:
          v67 = 0;
        *(_DWORD *)(v60 + 8) = v67;
      }
      goto LABEL_26;
    case 0x26:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v51 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD1300(a1, a2, v51.m128_u64[0], v51.m128_u64[1], a3, a8, v51.m128_u64[0], v51.m128_u64[1]);
    case 0x27:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v241 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DEF3D0(a1, a2, v241.m128_u64[0], v241.m128_u64[1], a3, a8, v241.m128_u64[0], v241.m128_u64[1]);
    case 0x28:
      v102 = *(_QWORD *)(a3 + 32);
      v103 = &a4->m128i_i64[1];
      v275.m128_u64[0] = a3;
      v104 = sub_F6C520(v102);
      v105 = sub_1DCE820(
               a1,
               a2,
               *(_QWORD *)(v12 + 32),
               v104 * (((unsigned __int64)v103 - (v103 != nullptr)) / v104 + (v103 != nullptr)));
      if ( (v105 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_40;
      v106 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_110;
      sub_F6C520(*(_QWORD *)(v12 + 32));
      v107 = v275.m128_u64[0];
      if ( v105 != *(_QWORD *)(v12 + 32) )
      {
        v106 = *a1;
LABEL_110:
        v107 = sub_1E5EFE0(v106, v105);
        if ( (v107 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_40;
      }
      v275.m128_u64[0] = v107;
      sub_1EA6140(a2, v107, 8, 4);
      v33 = v275.m128_u64[0];
      *v108 = a4->m128i_i32[0];
      v108[1] = a4->m128i_i32[1];
      goto LABEL_26;
    case 0x29:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v101 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD1470(a1, a2, v101.m128_u64[0], v101.m128_u64[1], a3, a8, v101.m128_u64[0], v101.m128_u64[1]);
    case 0x2A:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v100 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD1590(a1, a2, v100.m128_u64[0], v100.m128_u64[1], a3, a8, v100.m128_u64[0], v100.m128_u64[1]);
    case 0x2B:
    case 0x2C:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v275 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD16D0(a1, a2, v275.m128_u64[0], v275.m128_u64[1], a3);
    case 0x2D:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v99 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DDB970(a1, a2, v99.m128_u64[0], v99.m128_u64[1], 0, a8, v99.m128_u64[0], v99.m128_u64[1]);
    case 0x2E:
      v93 = sub_1DD8310(a1, a4->m128i_u32[0], *(_QWORD *)(a3 + 32));
      v94 = *((_DWORD *)a1 + 10);
      v95 = a1[6];
      v275.m128_u64[0] = v93;
      if ( a4->m128i_i32[0] )
      {
        *((_DWORD *)a1 + 10) = a4->m128i_i32[0];
        a1[6] = 0;
      }
      if ( (*(_BYTE *)(v12 + 18) & 8) != 0 )
        v96 = *(_QWORD *)(v12 + 48);
      else
        v96 = *(_QWORD *)(v12 + 8);
      v97 = sub_1DD1AB0(a1, v96);
      v98 = v97 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v97 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v271 = sub_A77C90(
                 *(_QWORD *)(*a1 + 248),
                 v97,
                 v275.m128_i64[0],
                 *(_WORD *)(v12 + 20) & 0x7FFF,
                 *(_WORD *)(v12 + 22) & 0x7FFF,
                 *(_BYTE *)(v12 + 21) >> 7);
        sub_1EA6140(a2, v271, 4, 4);
        *v272 = a4->m128i_i32[0];
        v98 = v271;
      }
      *((_DWORD *)a1 + 10) = v94;
      a1[6] = v95;
      return v98;
    case 0x2F:
    case 0x30:
      v275.m128_u64[0] = a3;
      v23 = sub_F60F10(a3, a2, a3, (__int64)a4, a3, a8);
      v24 = a4->m128i_u32[0];
      v25 = sub_1DD8310(a1, v24, v23);
      v15 = v275.m128_u64[0];
      v28 = v25;
      if ( !v25 )
        goto LABEL_40;
      v29 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_22;
      v245 = sub_F60F10(v12, v24, v29, v26, v275.m128_i64[0], v27);
      v15 = v275.m128_u64[0];
      if ( (_QWORD *)v28 == v245 )
        goto LABEL_25;
      v29 = *a1;
LABEL_22:
      v30 = *(_QWORD *)(v28 + 48);
      if ( v30 )
        goto LABEL_23;
      v15 = sub_A7AA70(*(_QWORD *)(v29 + 248), v28, v29, v26, v15, v27);
      v31 = v15 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_24;
    case 0x31:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v88 = a4->m128i_i32[0];
      *(_OWORD *)v281 = 0;
      v89 = *(_QWORD *)(a3 + 32);
      *(_OWORD *)ptr = 0;
      v90 = _mm_loadh_ps((const double *)v275.m128_u64);
      v283 = 0;
      v275 = v90;
      v280 = sub_1DD84F0((_DWORD)a1, (unsigned int)v281, v89, v88, 0, 0, 0);
      v12 = 0;
      if ( !sub_F22B30(&v280) )
        v12 = sub_1DE7220(a1, a2, v275.m128_u64[0], v275.m128_u64[1], v280);
LABEL_89:
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
      return v12;
    case 0x32:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v87 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DDB640(a1, a2, v87.m128_u64[0], v87.m128_u64[1], 0, a8, v87.m128_u64[0], v87.m128_u64[1]);
    case 0x33:
      v157 = *a1;
      v275.m128_u64[0] = a3;
      sub_18C79B0(v157, 0, 0, 4);
      v162 = sub_1DC71F0(a1, *(_QWORD *)(v12 + 24), v158, v159, v160, v161, a5, a6);
      if ( v162 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_221;
      v166 = (unsigned __int64)v162 & 0xFFFFFFFFFFFFFFFELL;
      v168 = sub_1934300(
               *a1,
               (_QWORD *)((unsigned __int64)v162 & 0xFFFFFFFFFFFFFFFELL),
               v163,
               v164,
               v12,
               v165,
               (__m128i)a5,
               a6);
      if ( v168 == 1 )
        goto LABEL_221;
      v169 = *v8;
      v170 = v275.m128_u64[0];
      if ( *(_BYTE *)(*v8 + 16) != 51 )
      {
        v171 = *v8;
        v276.m128_u64[0] = v168;
        v169 = sub_F63050(v171, v166, v167, v168);
        v168 = v276.m128_u64[0];
        v170 = v275.m128_u64[0];
      }
      if ( ((v172 = v168 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632)) || v172 != *(_QWORD *)(v12 + 24))
        && (v170 = sub_1E631F0(*a1, v172, (*(_BYTE *)(v169 + 18) & 8) != 0), (v170 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
LABEL_221:
        v173 = 0;
      }
      else
      {
        v275.m128_u64[0] = v170;
        sub_1EA6140(a2, v170, 12, 4);
        v173 = v275.m128_u64[0];
        *v174 = a4->m128i_i32[0];
        v174[1] = a4->m128i_i32[1];
        v174[2] = a4->m128i_i32[2];
      }
LABEL_162:
      v275.m128_u64[0] = v173;
      sub_190D5E0(v157, a5);
      return v275.m128_u64[0];
    case 0x34:
      v275.m128_u64[0] = a3;
      v110 = (__int64 *)a4[1].m128i_i64[0];
      v111 = sub_1DD1930(a1, v110, a3, a4, a3);
      v114 = v275.m128_u64[0];
      v115 = (__int64 *)v111;
      if ( !v111 )
        goto LABEL_40;
      v116 = *v8;
      if ( *(_BYTE *)(*v8 + 16) != 52 )
      {
        v116 = sub_F63050(*v8, v110, v112, v113);
        v114 = v275.m128_u64[0];
      }
      v117 = *(unsigned int *)(*a1 + 12632);
      if ( (_DWORD)v117 || v110 != v115 )
      {
        v114 = sub_A81D80(*(_QWORD *)(*a1 + 248), *v115, (*(_BYTE *)(v116 + 18) & 8) != 0, v113, v114, v117);
        if ( (v114 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_40;
      }
      v275.m128_u64[0] = v114;
      sub_1EA6140(a2, v114, 24, 8);
      v33 = v275.m128_u64[0];
      *(_DWORD *)v118 = a4->m128i_i32[0];
      *(_DWORD *)(v118 + 4) = a4->m128i_i32[1];
      v119 = a4->m128i_i32[2];
      *(_QWORD *)(v118 + 16) = v115;
      *(_DWORD *)(v118 + 8) = v119;
      goto LABEL_26;
    case 0x35:
      v120 = a4->m128i_u32[0];
      v121 = *(_QWORD *)(a3 + 32);
      v275.m128_u64[0] = v12;
      v122 = sub_1DD8310(a1, v120, v121);
      v15 = v12;
      v125 = v122;
      if ( !v122 )
        goto LABEL_40;
      if ( !*(_DWORD *)(*a1 + 12632) && v122 == *(_QWORD *)(v12 + 32) )
        goto LABEL_25;
      v30 = *(_QWORD *)(v122 + 48);
      if ( v30 )
      {
LABEL_23:
        v31 = v30 & 0xFFFFFFFFFFFFFFF0LL;
        v15 = v31;
      }
      else
      {
        v15 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v125, *a1, v123, v12, v124);
        v31 = v15 & 0xFFFFFFFFFFFFFFF0LL;
      }
LABEL_24:
      if ( v31 )
        goto LABEL_25;
      goto LABEL_40;
    case 0x36:
      if ( (*(_BYTE *)(v14 + 17) & 4) != 0 )
      {
        v91 = (_QWORD *)sub_1DD1930(a1, a4[1].m128i_i64[0], a3, a4, a3);
        if ( !v91 )
          goto LABEL_40;
        v15 = sub_1E70DB0(*a1, *v91, *(unsigned int *)(v12 + 48), a4->m128i_u32[0]);
        if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_40;
      }
      v275.m128_u64[0] = v15;
      sub_1EA6140(a2, v15, 24, 8);
      v33 = v275.m128_u64[0];
      *(_DWORD *)v92 = a4->m128i_i32[0];
      *(_QWORD *)(v92 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(_QWORD *)(v92 + 16) = a4[1].m128i_i64[0];
      goto LABEL_26;
    case 0x37:
      v223 = *(_QWORD *)(a3 + 24);
      v224 = a4->m128i_u32[0];
      v275.m128_u64[0] = v12;
      v225 = sub_1DD8310(a1, v224, v223);
      v15 = v12;
      if ( v225 )
      {
        if ( !*(_DWORD *)(*a1 + 12632) && v225 == *(_QWORD *)(v12 + 24) )
          goto LABEL_25;
        v15 = sub_1DBBDD0(a1, a4->m128i_i32[0], v225, v226, v12, v227, (__m128i)a5, *(double *)a6.m128_u64);
        if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_25;
      }
      goto LABEL_40;
    case 0x38:
      v217 = *(_QWORD *)(a3 + 32);
      v218 = a4->m128i_u32[0];
      v275.m128_u64[0] = v12;
      v219 = sub_1DD8310(a1, v218, v217);
      if ( !v219 )
        goto LABEL_40;
      v220 = sub_F5DBF0(v12);
      v221 = sub_1DD1AB0(a1, v220);
      if ( (v221 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_40;
      v222 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) || v219 != *(_QWORD *)(v12 + 32) )
        goto LABEL_196;
      v273 = sub_F5DBF0(v12);
      v15 = v275.m128_u64[0];
      if ( v221 != v273 )
      {
        v222 = *a1;
LABEL_196:
        v15 = sub_A77600(*(_QWORD *)(v222 + 248), v219, v221);
        if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_40;
      }
LABEL_25:
      v275.m128_u64[0] = v15;
      sub_1EA6140(a2, v15, 4, 4);
      *v32 = a4->m128i_i32[0];
      v33 = v275.m128_u64[0];
      goto LABEL_26;
    case 0x39:
      v83 = *(_QWORD *)(a3 + 32);
      v84 = &a4->m128i_i8[4];
      v275.m128_u64[0] = a3;
      v85 = sub_F6C520(v83);
      v86 = sub_1DCE820(
              a1,
              a2,
              *(_QWORD *)(v12 + 32),
              v85 * ((unsigned __int64)&v84[-(v84 != nullptr)] / v85 + (v84 != nullptr)));
      v15 = v275.m128_u64[0];
      if ( (v86 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(v12 + 32) == v86 )
          goto LABEL_25;
        v15 = sub_A70300(*(_QWORD *)(*a1 + 248), v86, *(_DWORD *)(v12 + 20), (*(_BYTE *)(v12 + 18) >> 3) & 0xF);
        if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_25;
      }
      goto LABEL_40;
    case 0x3A:
      v275.m128_u64[0] = (unsigned __int64)a4;
      v82 = _mm_loadh_ps((const double *)v275.m128_u64);
      return sub_1DD17C0(a1, a2, v82.m128_u64[0], v82.m128_u64[1], a3, a8, v82.m128_u64[0], v82.m128_u64[1]);
  }
  return result;
}
