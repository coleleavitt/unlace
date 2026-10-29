unsigned __int64 __fastcall sub_1C892C0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v8; // r14
  __int64 *v9; // r15
  unsigned __int64 v10; // r13
  __int128 v11; // rax
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  __m128 v19; // xmm0
  __int64 v20; // r13
  unsigned __int64 v21; // r14
  unsigned __int64 result; // rax
  __int64 v23; // rax
  _DWORD *v24; // rdx
  _DWORD *v25; // rdx
  unsigned int v26; // r13d
  unsigned int v27; // r15d
  unsigned int v28; // r14d
  unsigned int v29; // r13d
  unsigned int v30; // eax
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r12
  _DWORD *v34; // rdx
  __int64 v35; // rdi
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  _DWORD *v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r14
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // r13
  __int64 v52; // r8
  unsigned int v53; // r9d
  unsigned int v54; // edx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r12
  __int8 *v57; // r13
  unsigned int v58; // eax
  __int64 v59; // rax
  __int64 v60; // r13
  unsigned __int64 v61; // r15
  unsigned int v62; // ecx
  __int64 v63; // rdx
  __m128 v64; // xmm2
  void *v65; // rdi
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // rdx
  __int8 *v69; // r13
  unsigned int v70; // eax
  unsigned __int64 v71; // rax
  __int64 v72; // r8
  __int64 v73; // r9
  const __m128i *v74; // r13
  unsigned int v75; // eax
  __int64 v76; // r13
  __int64 v77; // rsi
  __int64 v78; // rdx
  _QWORD *v79; // rax
  __int64 *v80; // rax
  unsigned __int64 v81; // rax
  __m128 v82; // xmm0
  __int64 v83; // rax
  __int8 *v84; // r13
  unsigned int v85; // eax
  __int64 v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r13
  __int64 v91; // rsi
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  const __m128i *v94; // rbx
  unsigned int v95; // eax
  __int64 v96; // rax
  __int8 *v97; // r13
  unsigned int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rax
  _DWORD *v101; // rdx
  const __m128i *v102; // r13
  unsigned int v103; // eax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rdx
  __int32 v107; // eax
  unsigned int v108; // ecx
  __int64 v109; // rdx
  __int64 v110; // rcx
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rax
  _QWORD *v113; // rax
  __int64 v114; // r13
  __int64 v115; // rdx
  unsigned __int64 v116; // rcx
  __int64 v117; // r8
  unsigned __int16 *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  unsigned __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // r14
  __int8 *v126; // r13
  unsigned int v127; // eax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r13
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rdi
  __int64 *v134; // r13
  unsigned int v135; // eax
  __int64 v136; // rax
  __int64 v137; // rax
  _DWORD *v138; // rdx
  __int64 v139; // rsi
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 *v144; // r13
  __int64 v145; // rax
  unsigned __int64 v146; // rax
  __int64 v147; // rdx
  __int32 v148; // eax
  __int64 v149; // rdx
  unsigned __int64 v150; // rcx
  __int64 v151; // r8
  unsigned __int16 *v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  unsigned __int64 v157; // rsi
  __int64 v158; // rdx
  __int64 v159; // rcx
  unsigned __int64 v160; // r14
  __int64 v161; // rax
  __int64 v162; // rax
  _DWORD *v163; // rdx
  __int64 v164; // r13
  unsigned __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  unsigned int v173; // eax
  __int64 v174; // rax
  unsigned __int64 v175; // rax
  unsigned int v176; // eax
  __m128 v177; // kr00_16
  unsigned __int64 v178; // rax
  __int64 v179; // rdx
  unsigned __int64 v180; // rcx
  __int64 v181; // r8
  unsigned __int16 *v182; // rax
  unsigned __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // r15
  unsigned __int8 v188; // al
  _DWORD *v189; // rdx
  __int8 *v190; // r13
  unsigned int v191; // eax
  __int64 v192; // rax
  __int64 v193; // r15
  __int64 v194; // rdx
  unsigned __int64 v195; // rcx
  __int64 v196; // r8
  unsigned __int16 *v197; // rax
  unsigned __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rax
  __int64 v203; // rcx
  __int64 v204; // rdi
  __int64 v205; // rdx
  _DWORD *v206; // rdx
  __int32 v207; // eax
  unsigned int v208; // eax
  unsigned __int64 v209; // rcx
  __int64 v210; // rbx
  __int64 v211; // r8
  unsigned __int64 v212; // rdx
  unsigned __int16 *v213; // rax
  __int8 *v214; // r13
  unsigned int v215; // eax
  __int64 v216; // rax
  __int64 v217; // rdx
  unsigned __int64 v218; // r12
  _DWORD *v219; // rdx
  unsigned __int64 v220; // rcx
  __int64 v221; // r8
  unsigned __int64 v222; // rsi
  __int64 v223; // rdx
  unsigned __int16 *v224; // rax
  unsigned __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  unsigned __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r15
  unsigned __int16 *v232; // rax
  unsigned __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // r9
  __int64 v237; // rax
  __int64 v238; // rdi
  __int64 v239; // r8
  __int64 v240; // rax
  unsigned __int64 v241; // rsi
  int v242; // eax
  __int64 v243; // rdx
  unsigned int v244; // ecx
  __int64 v245; // rax
  int v246; // eax
  __int64 v247; // rsi
  __int64 v248; // rax
  __int32 v249; // eax
  _DWORD *v250; // rdx
  _DWORD *v251; // rdx
  __int64 v252; // rax
  __int64 v253; // rdx
  __int64 v254; // rdx
  __int64 v255; // rax
  __m128i v256; // [rsp+0h] [rbp-C8h] BYREF
  __m128 v257; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v258; // [rsp+28h] [rbp-A0h]
  __m128 v259; // [rsp+30h] [rbp-98h] BYREF
  __int64 v260[4]; // [rsp+40h] [rbp-88h] BYREF
  void *v261[2]; // [rsp+60h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v263; // [rsp+80h] [rbp-48h]

  v8 = a3;
  v9 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  *(_QWORD *)&v11 = (a3 >> 3) & 1;
  v10 = a3;
  *((_QWORD *)&v11 + 1) = a3 & 7;
  v15 = *v9;
  if ( v11 != 0 )
  {
LABEL_3:
    v256.m128i_i64[0] = (__int64)a4;
    v257 = _mm_loadh_ps((const double *)v256.m128i_i64);
    v16 = sub_F6C520(v15 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *v9;
    v18 = v16 * (((unsigned __int64)a4 - (a4 != nullptr)) / v16 + (a4 != nullptr));
    v256.m128i_i64[0] = v18;
    v19 = _mm_loadh_ps((const double *)v256.m128i_i64);
    if ( (v17 & 7) == 0 )
    {
      v20 = v17;
      if ( (v17 & 8) == 0 )
      {
        v21 = v17 & 0xFFFFFFFFFFFFFFF0LL;
        v23 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v23 + 16) == 50 )
        {
          if ( v17 )
          {
            sub_1EA6140(a2, v17, 4, 4);
            *v25 = *(_DWORD *)v18;
LABEL_5:
            if ( !v21 )
              return 0;
            goto LABEL_13;
          }
        }
        else if ( *(_BYTE *)(v23 + 16) == 45 && v17 )
        {
          sub_1EA6140(a2, v17, 4, 4);
          *v24 = *(_DWORD *)v18;
          if ( !v21 )
            return 0;
LABEL_13:
          result = sub_1C7A170(a1, v20, v257.m128_i64[0], v257.m128_i64[1], v19);
          if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            return result;
          return 0;
        }
      }
    }
    v256 = (__m128i)v19;
    v20 = sub_1C892C0(a1, a2, v19.m128_u64[0], v19.m128_u64[1]);
    v21 = v20 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_5;
  }
  switch ( *(_BYTE *)(v15 + 16) )
  {
    case 0:
      v176 = sub_F6C520(*(_QWORD *)(v8 + 32));
      return sub_1C892C0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v176 * (((unsigned __int64)a4 - (a4 != nullptr)) / v176 + (a4 != nullptr)));
    case 1:
      v173 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v174 = sub_1C892C0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v173 * (((unsigned __int64)a4 - (a4 != nullptr)) / v173 + (a4 != nullptr)));
      v8 = v174 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v174 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v8;
      v175 = sub_A75D20(*(_QWORD **)(*a1 + 248), v174);
      goto LABEL_143;
    case 2:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C8E4E0(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 3:
      v94 = a4 + 1;
      v95 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v96 = sub_1C892C0(
              a1,
              a2,
              *(_QWORD *)(v8 + 32),
              v95 * (((unsigned __int64)v94 - (v94 != nullptr)) / v95 + (v94 != nullptr)));
      v8 = v96 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v96 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v8;
      v81 = sub_A72990(*(_QWORD *)(*a1 + 248), v96);
      goto LABEL_69;
    case 4:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C8E730(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 5:
      v102 = a4 + 1;
      v103 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v104 = sub_1C892C0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v103 * (((unsigned __int64)v102 - (v102 != nullptr)) / v103 + (v102 != nullptr)));
      if ( (v104 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v105 = sub_1C732F0(
               a1,
               v104,
               (*(_WORD *)(v8 + 18) >> 6) & 7,
               0,
               0,
               (*(_BYTE *)(v8 + 18) >> 3) & 7,
               a4->m128i_i64[0]);
      v8 = v105;
      if ( (v105 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      sub_1EA6140(a2, v105, 16, 8);
      *(_DWORD *)v106 = a4->m128i_i32[0];
      v107 = a4->m128i_i32[1];
      *(_QWORD *)(v106 + 8) = 0;
      *(_DWORD *)(v106 + 4) = v107;
      return v8;
    case 6:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C8E8A0(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 7:
      v97 = &a4->m128i_i8[12];
      v98 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v99 = sub_1C892C0(
              a1,
              a2,
              *(_QWORD *)(v8 + 32),
              v98 * ((unsigned __int64)&v97[-(v97 != nullptr)] / v98 + (v97 != nullptr)));
      if ( (v99 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v100 = sub_1E65A20(*a1, v99, a4->m128i_u32[0]);
      v8 = v100;
      if ( (v100 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      sub_1EA6140(a2, v100, 12, 4);
      *v101 = a4->m128i_i32[0];
      v101[1] = a4->m128i_i32[1];
      v101[2] = a4->m128i_i32[2];
      return v8;
    case 8:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C8EA10(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 9:
    case 0x3B:
      goto LABEL_3;
    case 0xA:
      v26 = *(_DWORD *)(v8 + 32);
      v27 = a4->m128i_i32[0];
      v28 = *(_BYTE *)(v8 + 32) & 1;
      v29 = (v26 >> 1) & 0xFFFFFF;
      v30 = sub_AAC1F0(
              *(_QWORD *)(*a1 + 248),
              *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL),
              *((__int64 *)&v11 + 1),
              (__int64)a4,
              a5);
      LODWORD(v261[1]) = v30;
      if ( v30 > 0x40 )
      {
        v256.m128i_i64[0] = (__int64)v261;
        sub_2205470(v261, v29, 1);
      }
      else
      {
        v31 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v30;
        if ( !v30 )
          LODWORD(v31) = 0;
        v261[0] = (void *)((unsigned int)v31 & v29);
      }
      v32 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)v261, *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v27);
      v33 = sub_1E6EEC0(*a1, v28, v32, v27);
      if ( LODWORD(v261[1]) > 0x40 && v261[0] )
        operator delete[](v261[0]);
      v8 = v33 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v33 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_1EA6140(a2, v33, 4, 4);
        v8 = v33;
        *v34 = a4->m128i_i32[0];
      }
      return v8;
    case 0xB:
      v214 = &a4->m128i_i8[4];
      v215 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v216 = sub_1C892C0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v215 * ((unsigned __int64)&v214[-(v214 != nullptr)] / v215 + (v214 != nullptr)));
      if ( (v216 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v8 = sub_1E6FF00(*a1, v216, a4->m128i_u32[0], 0);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_30;
      }
      goto LABEL_35;
    case 0xC:
      v208 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v210 = sub_1C892C0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v208 * (((unsigned __int64)a4 - (a4 != nullptr)) / v208 + (a4 != nullptr)));
      if ( (v210 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v212 = *(_QWORD *)(v8 + 56);
      if ( !v212 )
        goto LABEL_169;
      v213 = sub_1C7CFE0(a1, *(_QWORD *)(v8 + 56), a7, a8, v212, v209, v211);
      if ( v213 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_35;
      v212 = (unsigned __int64)v213 & 0xFFFFFFFFFFFFFFFELL;
LABEL_169:
      v175 = sub_1E5F880(
               *a1,
               v210,
               v212,
               (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 16)) >> 7,
               HIBYTE(*(_DWORD *)(v8 + 16)) & 1);
LABEL_143:
      v8 = v175;
      sub_1EA6140(a2, v175, 0, 1);
      break;
    case 0xD:
      v205 = 8;
      if ( (((*(_WORD *)(v8 + 18) >> 3) + 74) & 0x1FFu) <= 0x31 )
        v205 = ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v8 + 18) >> 3) + 74)) & 1) != 0 ? 12LL : 8LL;
      sub_1EA6140(a2, v8, v205, 4);
      v207 = a4->m128i_i32[0];
      *v206 = a4->m128i_i32[0];
      v206[1] = v207;
      if ( (((*(_WORD *)(v8 + 18) >> 3) + 74) & 0x1FFu) <= 0x31
        && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v8 + 18) >> 3) + 74)) & 1) != 0 )
      {
        v206[2] = a4->m128i_i32[2];
      }
      return v8;
    case 0xE:
    case 0x2D:
    case 0x32:
      goto LABEL_30;
    case 0xF:
      v114 = *a1;
      sub_18C74E0(*a1, 0, 0, 0);
      v118 = sub_1C7CFE0(a1, *(_QWORD *)(v8 + 24), a7, a8, v115, v116, v117);
      if ( v118 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_112;
      v123 = sub_19A4070(*a1, (_QWORD *)((unsigned __int64)v118 & 0xFFFFFFFFFFFFFFFELL), v119, v120, v121, v122, a7, a8);
      if ( v123 == 1 )
        goto LABEL_112;
      v124 = sub_1E5FBF0(*a1, v123 & 0xFFFFFFFFFFFFFFFELL, 1);
      v125 = v124;
      if ( (v124 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_112;
      sub_1EA6140(a2, v124, 8, 4);
      *v251 = a4->m128i_i32[0];
      v251[1] = a4->m128i_i32[1];
      goto LABEL_113;
    case 0x10:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C91BD0(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 0x11:
      v108 = a4->m128i_i32[0];
      *(_OWORD *)v261 = 0;
      v109 = *(_QWORD *)(v8 + 40);
      *(_OWORD *)ptr = 0;
      v263 = 0;
      v260[0] = sub_1C7A940(a1, (__int64)v261, v109, v108, 0, 0, 0);
      if ( !sub_F22B30(v260)
        && ((v111 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
         || (v111 = sub_1C8ABA0(a1, *(_QWORD *)(v8 + 24), v111, v110), (v111 & 0xFFFFFFFFFFFFFFF0LL) != 0))
        && (v112 = sub_AB7C40(*(_QWORD **)(*a1 + 248), v260[0], v111, 0), v8 = v112, (v112 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        sub_1EA6140(a2, v112, 4, 4);
        *v250 = a4->m128i_i32[0];
      }
      else
      {
        v8 = 0;
      }
      goto LABEL_52;
    case 0x12:
      v190 = &a4[1].m128i_i8[8];
      v191 = sub_F6C520(*(_QWORD *)(v8 + 40));
      v192 = sub_1C892C0(
               a1,
               a2,
               *(_QWORD *)(v8 + 40),
               v191 * ((unsigned __int64)&v190[-(v190 != nullptr)] / v191 + (v190 != nullptr)));
      v10 = v192 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v192 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v193 = *a1;
        v256.m128i_i64[0] = v192;
        sub_18C74E0(v193, 4, 0, 4);
        v197 = sub_1C7CFE0(a1, *(_QWORD *)(v8 + 32), a7, a8, v194, v195, v196);
        v202 = sub_19146D0(*a1, (unsigned __int64)v197, v198, v199, v200, v201, a7, a8);
        if ( v202 == 1
          || (v203 = *(unsigned int *)(v8 + 48),
              v204 = *a1,
              v261[0] = (void *)v256.m128i_i64[0],
              v10 = sub_1E654F0(v204, v261, v202 & 0xFFFFFFFFFFFFFFFELL, v203),
              (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v10 = 0;
        }
        else if ( *(_BYTE *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 18 )
        {
          sub_1EA6140(a2, v10, 24, 8);
          *(_QWORD *)(v253 + 8) = a4->m128i_i64[1];
          *(_QWORD *)v253 = a4->m128i_i64[0];
          *(_DWORD *)(v253 + 16) = a4[1].m128i_i32[0];
        }
        sub_190D5E0(v193, a7);
      }
      return v10;
    case 0x13:
      v114 = *a1;
      sub_18C74E0(*a1, 4, 0, 4);
      v178 = sub_F57B50(v8);
      v182 = sub_1C7CFE0(a1, v178, a7, a8, v179, v180, v181);
      v187 = sub_19146D0(*a1, (unsigned __int64)v182, v183, v184, v185, v186, a7, a8);
      if ( v187 == 1 )
        goto LABEL_112;
      v256.m128i_i32[0] = a4->m128i_i32[0];
      v188 = sub_F57B40(v8);
      v125 = sub_1E6EEC0(*a1, v188, v187 & 0xFFFFFFFFFFFFFFFELL, v256.m128i_u32[0]);
      if ( (v125 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_112;
      sub_1EA6140(a2, v125, 4, 4);
      *v189 = a4->m128i_i32[0];
      goto LABEL_113;
    case 0x14:
      v256.m128i_i64[0] = (__int64)a4;
      v177 = _mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C92460(a1, a2, v177.m128_u64[0], v177.m128_u64[1], 0, a6, v177.m128_u64[0], v177.m128_u64[1]);
    case 0x15:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C978F0(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 0x16:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C930B0(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 0x17:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C979F0(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 0x18:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C97AF0(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 0x19:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C98010(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 0x1A:
      v256.m128i_i64[0] = (__int64)a4;
      v261[1] = (void *)0x400000000LL;
      v260[1] = (__int64)&v259;
      v82 = _mm_loadh_ps((const double *)v256.m128i_i64);
      v261[0] = ptr;
      v256 = (__m128i)v82;
      v259 = v82;
      v260[0] = (__int64)a1;
      v260[2] = (__int64)v261;
      v83 = sub_1C880D0(
              a1,
              a2,
              v82.m128_i64[0],
              (_DWORD *)v82.m128_u64[1],
              0,
              *(double *)v82.m128_u64,
              a8,
              a6,
              a1,
              (__int64 *)&v259,
              (__int64)v261);
      v65 = v261[0];
      v8 = v83;
      if ( v261[0] == ptr )
        return v8;
      goto LABEL_54;
    case 0x1B:
      v74 = a4 + 1;
      v75 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v76 = sub_1C892C0(
              a1,
              a2,
              *(_QWORD *)(v8 + 32),
              v75 * (((unsigned __int64)v74 - (v74 != nullptr)) / v75 + (v74 != nullptr)));
      if ( (v76 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v77 = *(_QWORD *)(v8 + 40);
      v78 = 0;
      if ( (v77 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_68;
      v79 = (_QWORD *)a4->m128i_i64[1];
      if ( !v79 )
        v79 = sub_A81910(*(_QWORD **)(*a1 + 248), v77, 0);
      v80 = (__int64 *)sub_1C8AA80(a1, v79);
      if ( !v80 )
        goto LABEL_35;
      v78 = *v80;
LABEL_68:
      v81 = sub_A77770(*(_QWORD *)(*a1 + 248), v76, v78, (unsigned __int8 *)(v8 + 48));
LABEL_69:
      v8 = v81;
      sub_1EA6140(a2, v81, 16, 8);
      break;
    case 0x1C:
      return v8;
    case 0x1D:
      v35 = v8;
      v8 = 0;
      v36 = sub_F61460(v35, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v37 = sub_1C7A830((__int64)a1, (__int64)v36);
      if ( !v37 )
        return v8;
      v41 = *(_QWORD *)(v37 + 48);
      if ( v41 )
        v8 = v41 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v8 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v37, *a1, v38, v39, v40);
      goto LABEL_30;
    case 0x1E:
      v69 = &a4->m128i_i8[4];
      v70 = sub_F6C520(*(_QWORD *)(v8 + 24));
      v71 = sub_1C892C0(
              a1,
              a2,
              *(_QWORD *)(v8 + 24),
              v70 * ((unsigned __int64)&v69[-(v69 != nullptr)] / v70 + (v69 != nullptr)));
      if ( (v71 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v8 = sub_A820D0(*(_QWORD *)(*a1 + 248), v71, *(_QWORD *)(v8 + 32), *a1, v72, v73);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_30;
      }
      goto LABEL_35;
    case 0x1F:
      v66 = sub_1C8ABA0(a1, *(_QWORD *)(v8 + 32), *((_QWORD *)&v11 + 1), a4);
      if ( (v66 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v67 = sub_A76DD0(*(_QWORD *)(*a1 + 248), v66, *(_DWORD *)(v8 + 40), *(_DWORD *)(v8 + 44));
      v8 = v67;
      if ( (v67 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      sub_1EA6140(a2, v67, 32, 8);
      *(_DWORD *)v68 = a4->m128i_i32[0];
      *(_QWORD *)(v68 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(__m128i *)(v68 + 16) = _mm_loadu_si128(a4 + 1);
      return v8;
    case 0x20:
      v60 = sub_1C8ABA0(a1, *(_QWORD *)(v8 + 32), *((_QWORD *)&v11 + 1), a4);
      v61 = v60 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v60 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v257.m128_u64[0] = *a1;
        sub_18C74E0(v257.m128_i64[0], 4, 0, 4);
        v222 = a4[1].m128i_u64[0];
        if ( !v222 )
          v222 = *(_QWORD *)(v8 + 40);
        v223 = a4[1].m128i_i64[1];
        if ( !v223 )
          v223 = *(_QWORD *)(v8 + 48);
        v256.m128i_i64[0] = v223;
        v224 = sub_1C7CFE0(a1, v222, a7, a8, v223, v220, v221);
        v231 = sub_19146D0(*a1, (unsigned __int64)v224, v225, v226, v227, v228, a7, a8);
        if ( v231 == 1
          || (v232 = sub_1C7CFE0(a1, v256.m128i_u64[0], a7, a8, v256.m128i_i64[0], v229, v230),
              v237 = sub_19146D0(*a1, (unsigned __int64)v232, v233, v234, v235, v236, a7, a8),
              v237 == 1)
          || (v238 = *a1,
              v239 = *(unsigned int *)(v8 + 56),
              v256.m128i_i64[0] = v237 & 0xFFFFFFFFFFFFFFFELL,
              v258 = v231 & 0xFFFFFFFFFFFFFFFELL,
              v240 = sub_1E71AF0(v238, v60, v231 & 0xFFFFFFFFFFFFFFFELL, v237 & 0xFFFFFFFFFFFFFFFELL, v239),
              v61 = v240,
              (v240 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v61 = 0;
        }
        else
        {
          v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
          sub_1EA6140(a2, v240, 32, 8);
          a7 = (__m128)_mm_load_si128(&v256);
          *(_DWORD *)v254 = a4->m128i_i32[0];
          v255 = *(__int64 *)((char *)a4->m128i_i64 + 4);
          *(__m128 *)(v254 + 16) = a7;
          *(_QWORD *)(v254 + 4) = v255;
        }
        sub_190D5E0(v257.m128_i64[0], a7);
      }
      return v61;
    case 0x21:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C98160(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 0x22:
      v57 = &a4->m128i_i8[4];
      v58 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v59 = sub_1C892C0(
              a1,
              a2,
              *(_QWORD *)(v8 + 32),
              v58 * ((unsigned __int64)&v57[-(v57 != nullptr)] / v58 + (v57 != nullptr)));
      if ( (v59 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v8 = sub_A74EC0(*(_QWORD *)(*a1 + 248), v59);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_30;
      }
      goto LABEL_35;
    case 0x23:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C98330(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 0x24:
      sub_1EA6360(a2, v8, a4);
      return v8;
    case 0x25:
      v50 = sub_1C7A830((__int64)a1, *(_QWORD *)(v8 + 40));
      if ( !v50 )
        return 0;
      v51 = (unsigned __int64)&a4->m128i_u64[1] + 4;
      LOBYTE(v52) = *(_BYTE *)(v8 + 32) & 0x3F;
      if ( (_BYTE)v52 )
      {
        v53 = a4->m128i_u32[2];
        v54 = a4->m128i_u32[1];
        v52 = (unsigned __int8)v52;
      }
      else
      {
        v53 = 0;
        v52 = 0;
        v54 = 0;
      }
      v55 = sub_1A891C0(*(__int64 **)(*a1 + 736), v50, v54, (_BYTE *)(v8 + 48), v52, v53, (int)a4 + 12, v52, 1);
      v56 = v55;
      if ( (v55 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v241 = v55;
      v242 = *(_BYTE *)(v55 + 32) & 0x3F;
      if ( v242 )
        v242 = 4 * v242 + 8;
      sub_1EA6140(a2, v241, 4 * ((unsigned int)(v242 + 3) >> 2) + 4, 4);
      if ( (*(_BYTE *)(v8 + 32) & 0x3F) != 0 )
      {
        *(_DWORD *)(v243 + 4) = a4->m128i_i32[1];
        v244 = *(_BYTE *)(v8 + 32) & 0x3F;
        if ( (*(_BYTE *)(v8 + 32) & 0x3F) == 0 )
          goto LABEL_206;
        if ( (v243 + 12 >= (unsigned __int64)&a4[1].m128i_u64[1] + 4 || v51 >= v243 + 28) && v244 - 1 > 2 )
        {
          v245 = 12;
          do
          {
            *(__m128i *)(v243 + v245) = _mm_loadu_si128((const __m128i *)((char *)a4 + v245));
            v245 += 16;
          }
          while ( 16LL * (v244 >> 2) + 12 != v245 );
          v246 = v244 & 0xFC;
          if ( (v244 & 0xFFFFFFFC) != v244 )
          {
            *(_DWORD *)(v243 + 4LL * ((unsigned __int8)v244 & 0xFC) + 12) = a4->m128i_i32[(v244 & 0xFC) + 3];
            v247 = (unsigned int)(v246 + 1);
            if ( v244 != (_DWORD)v247 )
            {
              v248 = (unsigned int)(v246 + 2);
              *(_DWORD *)(v243 + 12 + 4 * v247) = *(_DWORD *)(v51 + 4 * v247);
              if ( (_DWORD)v248 != v244 )
                *(_DWORD *)(v243 + 4 * v248 + 12) = a4->m128i_i32[v248 + 3];
            }
          }
        }
        else
        {
          v252 = 0;
          do
          {
            *(_DWORD *)(v243 + 4 * v252 + 12) = a4->m128i_i32[v252 + 3];
            ++v252;
          }
          while ( v244 != (_DWORD)v252 );
        }
        if ( (*(_BYTE *)(v8 + 32) & 0x3F) != 0 )
          v249 = a4->m128i_i32[2];
        else
LABEL_206:
          v249 = 0;
        *(_DWORD *)(v243 + 8) = v249;
      }
      return v56;
    case 0x26:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C98AF0(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 0x27:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C8ABE0(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 0x28:
      v134 = &a4->m128i_i64[1];
      v135 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v136 = sub_1C892C0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v135 * (((unsigned __int64)v134 - (v134 != nullptr)) / v135 + (v134 != nullptr)));
      if ( (v136 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v137 = sub_1E5EFE0(*a1, v136);
      v8 = v137;
      if ( (v137 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      sub_1EA6140(a2, v137, 8, 4);
      *v138 = a4->m128i_i32[0];
      v138[1] = a4->m128i_i32[1];
      return v8;
    case 0x29:
      v126 = &a4->m128i_i8[4];
      v127 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v130 = sub_1C892C0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v127 * ((unsigned __int64)&v126[-(v126 != nullptr)] / v127 + (v126 != nullptr)));
      if ( (v130 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v131 = *v9;
      if ( *(_BYTE *)(*v9 + 16) != 41 )
        v131 = sub_F63050(*v9, a2, v128, v129);
      v132 = a4->m128i_u32[0];
      v133 = *a1;
      if ( *(_BYTE *)(v131 + 40) )
        v87 = sub_1E5EFF0(v133, v130, v132);
      else
        v87 = sub_1E5F000(v133, v130, v132);
      goto LABEL_74;
    case 0x2A:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C98C10(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 0x2B:
    case 0x2C:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C98D30(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
    case 0x2E:
      v90 = sub_1C7A830((__int64)a1, *(_QWORD *)(v8 + 32));
      if ( (*(_BYTE *)(v8 + 18) & 8) != 0 )
        v91 = *(_QWORD *)(v8 + 48);
      else
        v91 = *(_QWORD *)(v8 + 8);
      v92 = sub_1C8ABA0(a1, v91, v88, v89);
      v93 = v92 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v92 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v218 = sub_A77C90(
                 *(_QWORD *)(*a1 + 248),
                 v92,
                 v90,
                 *(_WORD *)(v8 + 20) & 0x7FFF,
                 *(_WORD *)(v8 + 22) & 0x7FFF,
                 *(_BYTE *)(v8 + 21) >> 7);
        sub_1EA6140(a2, v218, 4, 4);
        *v219 = a4->m128i_i32[0];
        return v218;
      }
      return v93;
    case 0x2F:
    case 0x30:
      v43 = sub_F60F10(v8, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v44 = sub_1C7A830((__int64)a1, (__int64)v43);
      if ( v44 )
        goto LABEL_32;
      goto LABEL_35;
    case 0x31:
      v256.m128i_i64[0] = (__int64)a4;
      v62 = a4->m128i_i32[0];
      *(_OWORD *)v261 = 0;
      v63 = *(_QWORD *)(v8 + 32);
      *(_OWORD *)ptr = 0;
      v8 = 0;
      v64 = _mm_loadh_ps((const double *)v256.m128i_i64);
      v263 = 0;
      v256 = (__m128i)v64;
      v260[0] = sub_1C7A940(a1, (__int64)v261, v63, v62, 0, 0, 0);
      if ( !sub_F22B30(v260) )
        v8 = sub_1C91030(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1], v260[0]);
LABEL_52:
      if ( HIDWORD(ptr[1]) )
      {
        v65 = ptr[0];
LABEL_54:
        free(v65);
      }
      return v8;
    case 0x33:
      v114 = *a1;
      sub_18C79B0(*a1, 0, 0, 4);
      v152 = sub_1C7CFE0(a1, *(_QWORD *)(v8 + 24), a7, a8, v149, v150, v151);
      if ( v152 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_112;
      v157 = (unsigned __int64)v152 & 0xFFFFFFFFFFFFFFFELL;
      v160 = sub_1934300(
               *a1,
               (_QWORD *)((unsigned __int64)v152 & 0xFFFFFFFFFFFFFFFELL),
               v153,
               v154,
               v155,
               v156,
               (__m128i)a7,
               a8);
      if ( v160 == 1 )
        goto LABEL_112;
      v161 = *v9;
      if ( *(_BYTE *)(*v9 + 16) != 51 )
        v161 = sub_F63050(*v9, v157, v158, v159);
      v162 = sub_1E631F0(*a1, v160 & 0xFFFFFFFFFFFFFFFELL, (*(_BYTE *)(v161 + 18) & 8) != 0);
      v125 = v162;
      if ( (v162 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
LABEL_112:
        v125 = 0;
      }
      else
      {
        sub_1EA6140(a2, v162, 12, 4);
        *v163 = a4->m128i_i32[0];
        v163[1] = a4->m128i_i32[1];
        v163[2] = a4->m128i_i32[2];
      }
LABEL_113:
      sub_190D5E0(v114, a7);
      return v125;
    case 0x34:
      v139 = a4[1].m128i_i64[0];
      v144 = (__int64 *)sub_1C8AA80(a1, v139);
      if ( !v144 )
        goto LABEL_35;
      v145 = *v9;
      if ( *(_BYTE *)(*v9 + 16) != 52 )
        v145 = sub_F63050(*v9, v139, v140, v141);
      v146 = sub_A81D80(*(_QWORD *)(*a1 + 248), *v144, (*(_BYTE *)(v145 + 18) & 8) != 0, v141, v142, v143);
      v8 = v146;
      if ( (v146 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      sub_1EA6140(a2, v146, 24, 8);
      *(_DWORD *)v147 = a4->m128i_i32[0];
      *(_DWORD *)(v147 + 4) = a4->m128i_i32[1];
      v148 = a4->m128i_i32[2];
      *(_QWORD *)(v147 + 16) = v144;
      *(_DWORD *)(v147 + 8) = v148;
      break;
    case 0x35:
      v44 = sub_1C7A830((__int64)a1, *(_QWORD *)(v8 + 32));
      if ( !v44 )
        goto LABEL_35;
LABEL_32:
      v48 = *(_QWORD *)(v44 + 48);
      if ( v48 )
      {
        v8 = v48 & 0xFFFFFFFFFFFFFFF0LL;
        v49 = v8;
      }
      else
      {
        v8 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v44, *a1, v45, v46, v47);
        v49 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      }
      if ( v49 )
      {
LABEL_30:
        sub_1EA6140(a2, v8, 4, 4);
        *v42 = a4->m128i_i32[0];
      }
      else
      {
LABEL_35:
        v8 = 0;
      }
      break;
    case 0x36:
      if ( (*(_BYTE *)(v15 + 17) & 4) != 0 )
      {
        v113 = (_QWORD *)sub_1C8AA80(a1, a4[1].m128i_i64[0]);
        if ( !v113 )
          return 0;
        v10 = sub_1E70DB0(*a1, *v113, *(unsigned int *)(v8 + 48), a4->m128i_u32[0]);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v10, 24, 8);
      *(_DWORD *)v217 = a4->m128i_i32[0];
      *(_QWORD *)(v217 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(_QWORD *)(v217 + 16) = a4[1].m128i_i64[0];
      return v10;
    case 0x37:
      v169 = sub_1C7A830((__int64)a1, *(_QWORD *)(v8 + 24));
      if ( v169 )
      {
        v8 = sub_1C75F10(a1, a4->m128i_i32[0], v169, v170, v171, v172, (__m128i)a7, *(double *)a8.m128_u64);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_30;
      }
      goto LABEL_35;
    case 0x38:
      v164 = sub_1C7A830((__int64)a1, *(_QWORD *)(v8 + 32));
      if ( v164 )
      {
        v165 = sub_F5DBF0(v8);
        v168 = sub_1C8ABA0(a1, v165, v166, v167);
        if ( (v168 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v8 = sub_A77600(*(_QWORD *)(*a1 + 248), v164, v168);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            goto LABEL_30;
        }
      }
      goto LABEL_35;
    case 0x39:
      v84 = &a4->m128i_i8[4];
      v85 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v86 = sub_1C892C0(
              a1,
              a2,
              *(_QWORD *)(v8 + 32),
              v85 * ((unsigned __int64)&v84[-(v84 != nullptr)] / v85 + (v84 != nullptr)));
      if ( (v86 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v87 = sub_A70300(*(_QWORD *)(*a1 + 248), v86, *(_DWORD *)(v8 + 20), (*(_BYTE *)(v8 + 18) >> 3) & 0xF);
LABEL_74:
        v8 = v87;
        if ( (v87 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_30;
      }
      goto LABEL_35;
    case 0x3A:
      v256.m128i_i64[0] = (__int64)a4;
      v256 = (__m128i)_mm_loadh_ps((const double *)v256.m128i_i64);
      return sub_1C98E00(a1, a2, v256.m128i_i64[0], v256.m128i_i64[1]);
  }
  return v8;
}
