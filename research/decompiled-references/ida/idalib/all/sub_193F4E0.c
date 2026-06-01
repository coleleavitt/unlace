unsigned __int64 __fastcall sub_193F4E0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v8; // r14
  __int64 *v9; // r15
  __int64 v10; // r13
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
  __m128 v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // r15
  unsigned __int64 v32; // rsi
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r15
  unsigned __int64 v38; // r13
  unsigned int v39; // eax
  __int64 v40; // rax
  unsigned __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rdi
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r14
  _DWORD *v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r14
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // r13
  int v62; // r8d
  __int32 v63; // r9d
  __int32 v64; // edx
  __int64 v65; // rax
  __int64 v66; // r12
  __int8 *v67; // r13
  unsigned int v68; // eax
  __int64 v69; // rax
  __int64 v70; // r13
  unsigned __int64 v71; // r15
  unsigned int v72; // ecx
  __int64 v73; // rdx
  __m128 v74; // xmm6
  void *v75; // rdi
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // rdx
  __int8 *v79; // r13
  unsigned int v80; // eax
  unsigned __int64 v81; // rax
  __int64 v82; // r8
  __int64 v83; // r9
  __m128i *v84; // r13
  unsigned int v85; // eax
  __int64 v86; // r13
  __int64 v87; // rsi
  __int64 v88; // rdx
  _QWORD *v89; // rax
  __int64 *v90; // rax
  unsigned __int64 v91; // rax
  __m128 v92; // xmm0
  __int64 v93; // rax
  __int8 *v94; // r13
  unsigned int v95; // eax
  __int64 v96; // rax
  __int64 v97; // r13
  __int64 v98; // rsi
  __int64 v99; // rax
  unsigned __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rbx
  unsigned int v104; // r14d
  __m128i v105; // rax
  __m128 v106; // xmm0
  __int64 v107; // r15
  unsigned int v108; // eax
  __int64 v109; // rax
  _DWORD *v110; // rdx
  __m128 v111; // xmm0
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  int v115; // r13d
  unsigned __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rax
  __int8 *v120; // r13
  unsigned int v121; // eax
  __int64 v122; // rax
  __int64 v123; // rax
  _DWORD *v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rdx
  int v130; // eax
  unsigned int v131; // ecx
  __int64 v132; // rdx
  unsigned __int64 v133; // rdx
  unsigned __int64 v134; // rax
  _QWORD *v135; // rax
  __int64 v136; // r13
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // r14
  unsigned int v141; // eax
  __int64 v142; // rbx
  unsigned __int64 v143; // rdx
  __int64 v144; // rax
  unsigned __int64 v145; // rax
  __int8 *v146; // r13
  unsigned int v147; // eax
  __int64 v148; // rax
  char v149; // r13
  unsigned int v150; // r14d
  unsigned int v151; // r13d
  unsigned int v152; // r15d
  __int64 v153; // rax
  __int64 v154; // r12
  _DWORD *v155; // rdx
  __int8 *v156; // r13
  unsigned int v157; // eax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r13
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rdi
  __int64 v164; // rax
  __int64 *v165; // r13
  unsigned int v166; // eax
  __int64 v167; // rax
  __int64 v168; // rax
  _DWORD *v169; // rdx
  __int64 v170; // rax
  __int64 v171; // rdx
  __int8 *v172; // r13
  unsigned int v173; // eax
  __int64 v174; // rax
  __int64 v175; // r8
  __m128 v176; // kr00_16
  unsigned __int64 v177; // rax
  __int64 v178; // rax
  unsigned __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rax
  unsigned __int64 v184; // r15
  unsigned __int8 v185; // al
  _DWORD *v186; // rdx
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  unsigned __int64 v192; // rsi
  __int64 v193; // rdx
  __int64 v194; // rcx
  unsigned __int64 v195; // r14
  __int64 v196; // rax
  __int64 v197; // rax
  _DWORD *v198; // rdx
  __int64 v199; // r13
  unsigned __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r9
  unsigned int v206; // eax
  __int64 v207; // rax
  __int64 v208; // rsi
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // r9
  __int64 *v213; // r13
  __int64 v214; // rax
  unsigned __int64 v215; // rax
  __int64 v216; // rdx
  __int32 v217; // eax
  __int64 v218; // rdx
  __int64 v219; // r15
  unsigned __int64 v220; // rsi
  __int64 v221; // rax
  unsigned __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  unsigned __int8 v226; // r9
  unsigned __int16 v227; // dx
  __int64 v228; // rdx
  unsigned __int64 v229; // r12
  _DWORD *v230; // rdx
  unsigned __int64 v231; // rsi
  __int64 v232; // rax
  unsigned __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // r9
  __int64 v237; // r15
  __int64 v238; // rax
  unsigned __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 v243; // rdi
  __int64 v244; // r8
  __int64 v245; // rax
  __int64 v246; // rsi
  int v247; // eax
  __int64 v248; // rdx
  unsigned int v249; // ecx
  __int64 v250; // rax
  int v251; // eax
  __int64 v252; // rsi
  __int64 v253; // rax
  __int32 v254; // eax
  _DWORD *v255; // rdx
  _DWORD *v256; // rdx
  __int64 v257; // rax
  __int64 v258; // rdx
  __int64 v259; // rax
  __m128i v260; // [rsp+0h] [rbp-C8h] BYREF
  __m128 v261; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v262; // [rsp+28h] [rbp-A0h] BYREF
  __m128 v263; // [rsp+30h] [rbp-98h] BYREF
  __m128 v264; // [rsp+40h] [rbp-88h] BYREF
  void **v265; // [rsp+50h] [rbp-78h]
  void *v266[2]; // [rsp+60h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v268; // [rsp+80h] [rbp-48h]

  v8 = a3;
  v9 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  *(_QWORD *)&v11 = (a3 >> 3) & 1;
  v10 = a3;
  *((_QWORD *)&v11 + 1) = a3 & 7;
  v15 = *v9;
  if ( v11 != 0 )
  {
LABEL_3:
    v260.m128i_i64[0] = (__int64)a4;
    v261 = _mm_loadh_ps((const double *)v260.m128i_i64);
    v16 = sub_F6C520(v15 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *v9;
    v18 = v16 * (((unsigned __int64)a4 - (a4 != nullptr)) / v16 + (a4 != nullptr));
    v260.m128i_i64[0] = v18;
    v19 = _mm_loadh_ps((const double *)v260.m128i_i64);
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
          result = sub_18D44E0(a1, v20, v261.m128_i64[0], v261.m128_i64[1], v19);
          if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            return result;
          return 0;
        }
      }
    }
    v260 = (__m128i)v19;
    v20 = sub_193F4E0(a1, a2, v19.m128_u64[0], v19.m128_u64[1]);
    v21 = v20 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_5;
  }
  switch ( *(_BYTE *)(v15 + 16) )
  {
    case 0:
      v260.m128i_i64[0] = (__int64)a4;
      *(__m128 *)v266 = _mm_loadh_ps((const double *)v260.m128i_i64);
      v170 = sub_17430D0((__int64)v266);
      return sub_193F4E0(a1, a2, v170, v171);
    case 1:
      v206 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v207 = sub_193F4E0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v206 * (((unsigned __int64)a4 - (a4 != nullptr)) / v206 + (a4 != nullptr)));
      v8 = v207 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v207 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v8;
      v145 = sub_A75D20(*(_QWORD **)(*a1 + 248), v207);
      goto LABEL_119;
    case 2:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_1969110(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 3:
      v260.m128i_i64[0] = (__int64)a4;
      *(__m128 *)v266 = _mm_loadh_ps((const double *)v260.m128i_i64);
      v117 = sub_BEB530((__int64)v266);
      v119 = sub_193F4E0(a1, a2, v117, v118);
      v8 = v119 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v119 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v8;
      v91 = sub_A72990(*(_QWORD *)(*a1 + 248), v119);
      goto LABEL_67;
    case 4:
      v260.m128i_i64[0] = (__int64)a4;
      v111 = _mm_loadh_ps((const double *)v260.m128i_i64);
      *(__m128 *)v266 = v111;
      v112 = sub_BEB530((__int64)v266);
      v114 = sub_193F4E0(a1, a2, v112, v113);
      v115 = v114;
      v116 = v114 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v114 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v219 = *a1;
        sub_18C79E0(*a1, 4, 4);
        *(_BYTE *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 40) = 1;
        v220 = *((_QWORD *)v266[1] + 1);
        if ( !v220 )
          v220 = *(_QWORD *)(v8 + 40);
        v221 = sub_1933BC0(a1, v220, *(double *)v111.m128_u64, a8);
        if ( v221 == 1
          || v221 && (v221 = sub_1914520(*a1, v221 & 0xFFFFFFFFFFFFFFFELL, v222, v223, v224, v225, v111, a8), v221 == 1)
          || (v226 = *(_BYTE *)(v8 + 18),
              v227 = *(_WORD *)(v8 + 18),
              v260.m128i_i64[0] = v221 & 0xFFFFFFFFFFFFFFFELL,
              v116 = sub_18BB830(
                       a1,
                       v115,
                       (v227 >> 6) & 7,
                       0,
                       v221 & 0xFFFFFFFFFFFFFFFELL,
                       (v226 >> 3) & 7,
                       *(_QWORD *)v266[1]),
              (v116 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v116 = 0;
        }
        else
        {
          sub_1EA6140(a2, v116, 16, 8);
          *(_DWORD *)v228 = *(_DWORD *)v266[1];
          *(_DWORD *)(v228 + 4) = *((_DWORD *)v266[1] + 1);
          *(_QWORD *)(v228 + 8) = v260.m128i_i64[0];
        }
        sub_190D5E0(v219, v111);
      }
      return v116;
    case 5:
      v260.m128i_i64[0] = (__int64)a4;
      *(__m128 *)v266 = _mm_loadh_ps((const double *)v260.m128i_i64);
      v125 = sub_BEB530((__int64)v266);
      v127 = sub_193F4E0(a1, a2, v125, v126);
      if ( (v127 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v128 = sub_18BB830(
               a1,
               v127,
               (*(_WORD *)(v8 + 18) >> 6) & 7,
               0,
               0,
               (*(_BYTE *)(v8 + 18) >> 3) & 7,
               *(_QWORD *)v266[1]);
      v8 = v128;
      if ( (v128 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      sub_1EA6140(a2, v128, 16, 8);
      *(_DWORD *)v129 = *(_DWORD *)v266[1];
      v130 = *((_DWORD *)v266[1] + 1);
      *(_QWORD *)(v129 + 8) = 0;
      *(_DWORD *)(v129 + 4) = v130;
      return v8;
    case 6:
      v260.m128i_i64[0] = (__int64)a4;
      v26 = _mm_loadh_ps((const double *)v260.m128i_i64);
      *(__m128 *)v266 = v26;
      v27 = sub_BEB530((__int64)v266);
      v29 = sub_193F4E0(a1, a2, v27, v28);
      v30 = v29;
      if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v31 = *a1;
      sub_18C79E0(*a1, 6, 4);
      v32 = *(_QWORD *)(v8 + 40);
      v33 = sub_1933BC0(a1, v32, *(double *)v26.m128_u64, a8);
      sub_190D5E0(v31, v26);
      if ( v33 == 1 )
        return 0;
      v37 = *a1;
      v38 = v33 & 0xFFFFFFFFFFFFFFFELL;
      v39 = v38 ? sub_C00A40(v38, v32, v34, v35, v36) : 0;
      v40 = sub_19B4A30(v37, v38, v39, 0, 0, 0);
      if ( v40 == 1 )
        return 0;
      v41 = v40 & 0xFFFFFFFFFFFFFFFELL;
      v42 = sub_18BB830(
              a1,
              v30,
              (*(_WORD *)(v8 + 18) >> 6) & 7,
              0,
              v40 & 0xFFFFFFFFFFFFFFFELL,
              (*(_BYTE *)(v8 + 18) >> 3) & 7,
              *(_QWORD *)v266[1]);
      v8 = v42;
      if ( (v42 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      sub_1EA6140(a2, v42, 16, 8);
      *(_DWORD *)v43 = *(_DWORD *)v266[1];
      v44 = *((_DWORD *)v266[1] + 1);
      *(_QWORD *)(v43 + 8) = v41;
      *(_DWORD *)(v43 + 4) = v44;
      return v8;
    case 7:
      v120 = &a4->m128i_i8[12];
      v121 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v122 = sub_193F4E0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v121 * ((unsigned __int64)&v120[-(v120 != nullptr)] / v121 + (v120 != nullptr)));
      if ( (v122 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v123 = sub_1E65A20(*a1, v122, a4->m128i_u32[0]);
      v8 = v123;
      if ( (v123 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      sub_1EA6140(a2, v123, 12, 4);
      *v124 = a4->m128i_i32[0];
      v124[1] = a4->m128i_i32[1];
      v124[2] = a4->m128i_i32[2];
      return v8;
    case 8:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_1969380(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 9:
    case 0x3B:
      goto LABEL_3;
    case 0xA:
      LODWORD(v11) = *(_DWORD *)(v8 + 32);
      v149 = *(_BYTE *)(v8 + 32);
      v150 = a4->m128i_i32[0];
      v151 = v149 & 1;
      v152 = ((unsigned int)v11 >> 1) & 0xFFFFFF;
      LODWORD(v266[1]) = sub_AAC1F0(
                           *(_QWORD *)(*a1 + 248),
                           *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL),
                           *((__int64 *)&v11 + 1),
                           (__int64)a4,
                           a5);
      if ( LODWORD(v266[1]) > 0x40 )
      {
        v260.m128i_i64[0] = (__int64)v266;
        sub_2205470(v266, v152, 1);
      }
      else
      {
        v266[0] = (void *)v152;
        v260.m128i_i64[0] = (__int64)v266;
        sub_CF8100((unsigned __int64 *)v266);
      }
      v153 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)v266, *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v150);
      v154 = sub_1E6EEC0(*a1, v151, v153, v150);
      if ( LODWORD(v266[1]) > 0x40 && v266[0] )
        operator delete[](v266[0]);
      v8 = v154 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v154 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_1EA6140(a2, v154, 4, 4);
        v8 = v154;
        *v155 = a4->m128i_i32[0];
      }
      return v8;
    case 0xB:
      v146 = &a4->m128i_i8[4];
      v147 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v148 = sub_193F4E0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v147 * ((unsigned __int64)&v146[-(v146 != nullptr)] / v147 + (v146 != nullptr)));
      if ( (v148 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v8 = sub_1E6FF00(*a1, v148, a4->m128i_u32[0], 0);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_28;
      }
      return 0;
    case 0xC:
      v141 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v142 = sub_193F4E0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v141 * (((unsigned __int64)a4 - (a4 != nullptr)) / v141 + (a4 != nullptr)));
      if ( (v142 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v143 = *(_QWORD *)(v8 + 56);
      if ( !v143 )
        goto LABEL_118;
      v144 = sub_1933BC0(a1, *(_QWORD *)(v8 + 56), *(double *)a7.m128_u64, a8);
      if ( v144 == 1 )
        return 0;
      v143 = v144 & 0xFFFFFFFFFFFFFFFELL;
LABEL_118:
      v145 = sub_1E5F880(
               *a1,
               v142,
               v143,
               (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 16)) >> 7,
               HIBYTE(*(_DWORD *)(v8 + 16)) & 1);
LABEL_119:
      v8 = v145;
      sub_1EA6140(a2, v145, 0, 1);
      return v8;
    case 0xD:
      return sub_18BCCC0(a2, v8, a4->m128i_i32);
    case 0xE:
    case 0x2D:
    case 0x32:
      goto LABEL_28;
    case 0xF:
      v136 = *a1;
      sub_18C79E0(*a1, 0, 0);
      v137 = sub_1933BC0(a1, *(_QWORD *)(v8 + 24), *(double *)a7.m128_u64, a8);
      if ( v137 == 1 )
        goto LABEL_111;
      v138 = sub_19A4070(*a1, v137 & 0xFFFFFFFFFFFFFFFELL);
      if ( v138 == 1 )
        goto LABEL_111;
      v139 = sub_1E5FBF0(*a1, v138 & 0xFFFFFFFFFFFFFFFELL, 1);
      v140 = v139;
      if ( (v139 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_111;
      sub_1EA6140(a2, v139, 8, 4);
      *v256 = a4->m128i_i32[0];
      v256[1] = a4->m128i_i32[1];
      goto LABEL_112;
    case 0x10:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_196C1F0(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 0x11:
      v131 = a4->m128i_i32[0];
      *(_OWORD *)v266 = 0;
      v132 = *(_QWORD *)(v8 + 40);
      *(_OWORD *)ptr = 0;
      v268 = 0;
      v264.m128_u64[0] = sub_18CBC60(a1, (__int64)v266, v132, v131, 0, 0, 0);
      if ( !sub_F22B30(&v264)
        && ((v133 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
         || (v133 = sub_1942710(a1, *(_QWORD *)(v8 + 24)), (v133 & 0xFFFFFFFFFFFFFFF0LL) != 0))
        && (v134 = sub_AB7C40(*(_QWORD **)(*a1 + 248), v264.m128_i64[0], v133, 0),
            v8 = v134,
            (v134 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        sub_1EA6140(a2, v134, 4, 4);
        *v255 = a4->m128i_i32[0];
      }
      else
      {
        v8 = 0;
      }
      goto LABEL_50;
    case 0x12:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_1970660(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 0x13:
      v136 = *a1;
      sub_18C79E0(*a1, 4, 4);
      v177 = sub_F57B50(v8);
      v178 = sub_1933BC0(a1, v177, *(double *)a7.m128_u64, a8);
      if ( v178 == 1 )
        goto LABEL_111;
      if ( v178 )
      {
        v183 = sub_1914520(*a1, v178 & 0xFFFFFFFFFFFFFFFELL, v179, v180, v181, v182, a7, a8);
        if ( v183 == 1 )
        {
LABEL_111:
          v140 = 0;
          goto LABEL_112;
        }
        v184 = v183 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v184 = 0;
      }
      v260.m128i_i32[0] = a4->m128i_i32[0];
      v185 = sub_F57B40(v8);
      v140 = sub_1E6EEC0(*a1, v185, v184, v260.m128i_u32[0]);
      if ( (v140 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_111;
      sub_1EA6140(a2, v140, 4, 4);
      *v186 = a4->m128i_i32[0];
LABEL_112:
      sub_190D5E0(v136, a7);
      return v140;
    case 0x14:
      v260.m128i_i64[0] = (__int64)a4;
      v176 = _mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_196C9E0(a1, a2, v176.m128_u64[0], v176.m128_u64[1], 0, a6, v176.m128_u64[0], v176.m128_u64[1]);
    case 0x15:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_19707A0(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 0x16:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_196D5A0(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 0x17:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_19708B0(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 0x18:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_19709C0(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 0x19:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_1970EE0(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 0x1A:
      v260.m128i_i64[0] = (__int64)a4;
      v266[1] = (void *)0x400000000LL;
      v264.m128_u64[1] = (unsigned __int64)&v263;
      v92 = _mm_loadh_ps((const double *)v260.m128i_i64);
      v266[0] = ptr;
      v260 = (__m128i)v92;
      v263 = v92;
      v264.m128_u64[0] = (unsigned __int64)a1;
      v265 = v266;
      v93 = sub_193E7D0(
              a1,
              a2,
              v92.m128_i64[0],
              (_DWORD *)v92.m128_u64[1],
              0,
              *(double *)v92.m128_u64,
              a8,
              a6,
              a1,
              (__int64 *)&v263,
              (__int64)v266);
      v75 = v266[0];
      v8 = v93;
      if ( v266[0] == ptr )
        return v8;
      goto LABEL_52;
    case 0x1B:
      v84 = a4 + 1;
      v85 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v86 = sub_193F4E0(
              a1,
              a2,
              *(_QWORD *)(v8 + 32),
              v85 * (((unsigned __int64)v84 - (v84 != nullptr)) / v85 + (v84 != nullptr)));
      if ( (v86 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v87 = *(_QWORD *)(v8 + 40);
      v88 = 0;
      if ( (v87 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_66;
      v89 = (_QWORD *)a4->m128i_i64[1];
      if ( !v89 )
        v89 = sub_A81910(*(_QWORD **)(*a1 + 248), v87, 0);
      v90 = (__int64 *)sub_19425F0(a1, v89);
      if ( !v90 )
        return 0;
      v88 = *v90;
LABEL_66:
      v91 = sub_A77770(*(_QWORD *)(*a1 + 248), v86, v88, (unsigned __int8 *)(v8 + 48));
LABEL_67:
      v8 = v91;
      sub_1EA6140(a2, v91, 16, 8);
      return v8;
    case 0x1C:
      return v8;
    case 0x1D:
      v45 = v8;
      v8 = 0;
      v46 = sub_F61460(v45, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v47 = sub_18CBB50((__int64)a1, (__int64)v46);
      if ( !v47 )
        return v8;
      v51 = *(_QWORD *)(v47 + 48);
      if ( v51 )
        v8 = v51 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v8 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v47, *a1, v48, v49, v50);
      goto LABEL_28;
    case 0x1E:
      v79 = &a4->m128i_i8[4];
      v80 = sub_F6C520(*(_QWORD *)(v8 + 24));
      v81 = sub_193F4E0(
              a1,
              a2,
              *(_QWORD *)(v8 + 24),
              v80 * ((unsigned __int64)&v79[-(v79 != nullptr)] / v80 + (v79 != nullptr)));
      if ( (v81 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v8 = sub_A820D0(*(_QWORD *)(*a1 + 248), v81, *(_QWORD *)(v8 + 32), *a1, v82, v83);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_28;
      }
      return 0;
    case 0x1F:
      v76 = sub_1942710(a1, *(_QWORD *)(v8 + 32));
      if ( (v76 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v77 = sub_A76DD0(*(_QWORD *)(*a1 + 248), v76, *(_DWORD *)(v8 + 40), *(_DWORD *)(v8 + 44));
      v8 = v77;
      if ( (v77 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      sub_1EA6140(a2, v77, 32, 8);
      *(_DWORD *)v78 = a4->m128i_i32[0];
      *(_QWORD *)(v78 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(__m128i *)(v78 + 16) = _mm_loadu_si128(a4 + 1);
      return v8;
    case 0x20:
      v70 = sub_1942710(a1, *(_QWORD *)(v8 + 32));
      v71 = v70 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v70 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v261.m128_u64[0] = *a1;
        sub_18C79E0(v261.m128_i64[0], 4, 4);
        v231 = a4[1].m128i_u64[0];
        if ( !v231 )
          v231 = *(_QWORD *)(v8 + 40);
        v260.m128i_i64[0] = a4[1].m128i_i64[1];
        if ( !v260.m128i_i64[0] )
          v260.m128i_i64[0] = *(_QWORD *)(v8 + 48);
        v232 = sub_1933BC0(a1, v231, *(double *)a7.m128_u64, a8);
        v237 = v232;
        if ( v232 == 1
          || v232 && (v237 = sub_1914520(*a1, v232 & 0xFFFFFFFFFFFFFFFELL, v233, v234, v235, v236, a7, a8), v237 == 1)
          || (v238 = sub_1933BC0(a1, v260.m128i_u64[0], *(double *)a7.m128_u64, a8), v238 == 1)
          || v238 && (v238 = sub_1914520(*a1, v238 & 0xFFFFFFFFFFFFFFFELL, v239, v240, v241, v242, a7, a8), v238 == 1)
          || (v243 = *a1,
              v244 = *(unsigned int *)(v8 + 56),
              v262 = v238 & 0xFFFFFFFFFFFFFFFELL,
              v260.m128i_i64[0] = v237 & 0xFFFFFFFFFFFFFFFELL,
              v245 = sub_1E71AF0(v243, v70, v237 & 0xFFFFFFFFFFFFFFFELL, v238 & 0xFFFFFFFFFFFFFFFELL, v244),
              v71 = v245,
              (v245 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v71 = 0;
        }
        else
        {
          v260 = (__m128i)_mm_loadh_ps((const double *)&v262);
          sub_1EA6140(a2, v245, 32, 8);
          a7 = (__m128)_mm_load_si128(&v260);
          *(_DWORD *)v258 = a4->m128i_i32[0];
          v259 = *(__int64 *)((char *)a4->m128i_i64 + 4);
          *(__m128 *)(v258 + 16) = a7;
          *(_QWORD *)(v258 + 4) = v259;
        }
        sub_190D5E0(v261.m128_i64[0], a7);
      }
      return v71;
    case 0x21:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_1971030(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 0x22:
      v67 = &a4->m128i_i8[4];
      v68 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v69 = sub_193F4E0(
              a1,
              a2,
              *(_QWORD *)(v8 + 32),
              v68 * ((unsigned __int64)&v67[-(v67 != nullptr)] / v68 + (v67 != nullptr)));
      if ( (v69 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v8 = sub_A74EC0(*(_QWORD *)(*a1 + 248), v69);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_28;
      }
      return 0;
    case 0x23:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_1971200(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 0x24:
      sub_1EA6360(a2, v8, a4);
      return v8;
    case 0x25:
      v60 = sub_18CBB50((__int64)a1, *(_QWORD *)(v8 + 40));
      if ( !v60 )
        return 0;
      v61 = (unsigned __int64)&a4->m128i_u64[1] + 4;
      LOBYTE(v62) = *(_BYTE *)(v8 + 32) & 0x3F;
      if ( (_BYTE)v62 )
      {
        v63 = a4->m128i_i32[2];
        v64 = a4->m128i_i32[1];
        v62 = (unsigned __int8)v62;
      }
      else
      {
        v63 = 0;
        v62 = 0;
        v64 = 0;
      }
      v65 = sub_1A891C0(*(_QWORD *)(*a1 + 736), v60, v64, (int)v8 + 48, v62, v63, (int)a4 + 12, v62, 1);
      v66 = v65;
      if ( (v65 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v246 = v65;
      v247 = *(_BYTE *)(v65 + 32) & 0x3F;
      if ( v247 )
        v247 = 4 * v247 + 8;
      sub_1EA6140(a2, v246, 4 * ((unsigned int)(v247 + 3) >> 2) + 4, 4);
      if ( (*(_BYTE *)(v8 + 32) & 0x3F) != 0 )
      {
        *(_DWORD *)(v248 + 4) = a4->m128i_i32[1];
        v249 = *(_BYTE *)(v8 + 32) & 0x3F;
        if ( (*(_BYTE *)(v8 + 32) & 0x3F) == 0 )
          goto LABEL_223;
        if ( (v248 + 12 >= (unsigned __int64)&a4[1].m128i_u64[1] + 4 || v61 >= v248 + 28) && v249 - 1 > 2 )
        {
          v250 = 12;
          do
          {
            *(__m128i *)(v248 + v250) = _mm_loadu_si128((__m128i *)((char *)a4 + v250));
            v250 += 16;
          }
          while ( v250 != 16LL * (v249 >> 2) + 12 );
          v251 = v249 & 0xFC;
          if ( (v249 & 0xFFFFFFFC) != v249 )
          {
            *(_DWORD *)(v248 + 4LL * ((unsigned __int8)v249 & 0xFC) + 12) = a4->m128i_i32[(v249 & 0xFC) + 3];
            v252 = (unsigned int)(v251 + 1);
            if ( (_DWORD)v252 != v249 )
            {
              v253 = (unsigned int)(v251 + 2);
              *(_DWORD *)(v248 + 4 * v252 + 12) = a4->m128i_i32[v252 + 3];
              if ( v249 != (_DWORD)v253 )
                *(_DWORD *)(v248 + 12 + 4 * v253) = *(_DWORD *)(v61 + 4 * v253);
            }
          }
        }
        else
        {
          v257 = 0;
          do
          {
            *(_DWORD *)(v248 + 4 * v257 + 12) = a4->m128i_i32[v257 + 3];
            ++v257;
          }
          while ( v249 != (_DWORD)v257 );
        }
        if ( (*(_BYTE *)(v8 + 32) & 0x3F) != 0 )
          v254 = a4->m128i_i32[2];
        else
LABEL_223:
          v254 = 0;
        *(_DWORD *)(v248 + 8) = v254;
      }
      return v66;
    case 0x26:
      v260.m128i_i64[0] = (__int64)a4;
      v264 = _mm_loadh_ps((const double *)v260.m128i_i64);
      v101 = sub_1743190((__int64)&v264);
      v103 = sub_193F4E0(a1, a2, v101, v102);
      if ( (v103 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v104 = *(_DWORD *)(v264.m128_u64[0] + 20);
      v261.m128_i32[0] = *(_DWORD *)v264.m128_u64[1];
      v105.m128i_i64[0] = sub_1743190((__int64)&v264);
      v260 = v105;
      v106 = (__m128)_mm_load_si128(&v260);
      *(__m128 *)v266 = v106;
      v107 = (unsigned int)sub_F6CE20((__int64 *)v266);
      v108 = sub_F6CCB0((__int64 *)v266, v106);
      v109 = sub_1E503F0(*a1, v103, (v107 << 32) | v108, v261.m128_u32[0], v104);
      v8 = v109;
      if ( (v109 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      sub_1EA6140(a2, v109, 4, 4);
      *v110 = *(_DWORD *)v264.m128_u64[1];
      return v8;
    case 0x27:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_1942750(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 0x28:
      v165 = &a4->m128i_i64[1];
      v166 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v167 = sub_193F4E0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v166 * (((unsigned __int64)v165 - (v165 != nullptr)) / v166 + (v165 != nullptr)));
      if ( (v167 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v168 = sub_1E5EFE0(*a1, v167);
      v8 = v168;
      if ( (v168 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      sub_1EA6140(a2, v168, 8, 4);
      *v169 = a4->m128i_i32[0];
      v169[1] = a4->m128i_i32[1];
      return v8;
    case 0x29:
      v156 = &a4->m128i_i8[4];
      v157 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v160 = sub_193F4E0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v157 * ((unsigned __int64)&v156[-(v156 != nullptr)] / v157 + (v156 != nullptr)));
      if ( (v160 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v161 = *v9;
      if ( *(_BYTE *)(*v9 + 16) != 41 )
        v161 = sub_F63050(*v9, a2, v158, v159);
      v162 = a4->m128i_u32[0];
      v163 = *a1;
      if ( *(_BYTE *)(v161 + 40) )
        v164 = sub_1E5EFF0(v163, v160, v162);
      else
        v164 = sub_1E5F000(v163, v160, v162);
      goto LABEL_135;
    case 0x2A:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_19718D0(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 0x2B:
    case 0x2C:
      v260.m128i_i64[0] = (__int64)a4;
      v260 = (__m128i)_mm_loadh_ps((const double *)v260.m128i_i64);
      return sub_19719F0(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1]);
    case 0x2E:
      v97 = sub_18CBB50((__int64)a1, *(_QWORD *)(v8 + 32));
      if ( (*(_BYTE *)(v8 + 18) & 8) != 0 )
        v98 = *(_QWORD *)(v8 + 48);
      else
        v98 = *(_QWORD *)(v8 + 8);
      v99 = sub_1942710(a1, v98);
      v100 = v99 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v99 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v229 = sub_A77C90(
                 *(_QWORD *)(*a1 + 248),
                 v99,
                 v97,
                 *(_WORD *)(v8 + 20) & 0x7FFF,
                 *(_WORD *)(v8 + 22) & 0x7FFF,
                 *(_BYTE *)(v8 + 21) >> 7);
        sub_1EA6140(a2, v229, 4, 4);
        *v230 = a4->m128i_i32[0];
        return v229;
      }
      return v100;
    case 0x2F:
    case 0x30:
      v53 = sub_F60F10(v8, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v54 = sub_18CBB50((__int64)a1, (__int64)v53);
      if ( v54 )
        goto LABEL_30;
      return 0;
    case 0x31:
      v260.m128i_i64[0] = (__int64)a4;
      v72 = a4->m128i_i32[0];
      *(_OWORD *)v266 = 0;
      v73 = *(_QWORD *)(v8 + 32);
      *(_OWORD *)ptr = 0;
      v8 = 0;
      v74 = _mm_loadh_ps((const double *)v260.m128i_i64);
      v268 = 0;
      v260 = (__m128i)v74;
      v264.m128_u64[0] = sub_18CBC60(a1, (__int64)v266, v73, v72, 0, 0, 0);
      if ( !sub_F22B30(&v264) )
        v8 = sub_196B490(a1, a2, v260.m128i_i64[0], v260.m128i_i64[1], v264.m128_u64[0]);
LABEL_50:
      if ( HIDWORD(ptr[1]) )
      {
        v75 = ptr[0];
LABEL_52:
        free(v75);
      }
      return v8;
    case 0x33:
      v136 = *a1;
      sub_18C74E0(*a1, 0, *(_QWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 520), 4);
      v187 = sub_1933BC0(a1, *(_QWORD *)(v8 + 24), *(double *)a7.m128_u64, a8);
      if ( v187 == 1 )
        goto LABEL_111;
      v192 = v187 & 0xFFFFFFFFFFFFFFFELL;
      v195 = sub_1934300(*a1, (_QWORD *)(v187 & 0xFFFFFFFFFFFFFFFELL), v188, v189, v190, v191, (__m128i)a7, a8);
      if ( v195 == 1 )
        goto LABEL_111;
      v196 = *v9;
      if ( *(_BYTE *)(*v9 + 16) != 51 )
        v196 = sub_F63050(*v9, v192, v193, v194);
      v197 = sub_1E631F0(*a1, v195 & 0xFFFFFFFFFFFFFFFELL, (*(_BYTE *)(v196 + 18) & 8) != 0);
      v140 = v197;
      if ( (v197 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_111;
      sub_1EA6140(a2, v197, 12, 4);
      *v198 = a4->m128i_i32[0];
      v198[1] = a4->m128i_i32[1];
      v198[2] = a4->m128i_i32[2];
      goto LABEL_112;
    case 0x34:
      v208 = a4[1].m128i_i64[0];
      v213 = (__int64 *)sub_19425F0(a1, v208);
      if ( !v213 )
        return 0;
      v214 = *v9;
      if ( *(_BYTE *)(*v9 + 16) != 52 )
        v214 = sub_F63050(*v9, v208, v209, v210);
      v215 = sub_A81D80(*(_QWORD *)(*a1 + 248), *v213, (*(_BYTE *)(v214 + 18) & 8) != 0, v210, v211, v212);
      v8 = v215;
      if ( (v215 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      sub_1EA6140(a2, v215, 24, 8);
      *(_DWORD *)v216 = a4->m128i_i32[0];
      *(_DWORD *)(v216 + 4) = a4->m128i_i32[1];
      v217 = a4->m128i_i32[2];
      *(_QWORD *)(v216 + 16) = v213;
      *(_DWORD *)(v216 + 8) = v217;
      return v8;
    case 0x35:
      v54 = sub_18CBB50((__int64)a1, *(_QWORD *)(v8 + 32));
      if ( !v54 )
        return 0;
LABEL_30:
      v58 = *(_QWORD *)(v54 + 48);
      if ( v58 )
      {
        v8 = v58 & 0xFFFFFFFFFFFFFFF0LL;
        v59 = v8;
      }
      else
      {
        v8 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v54, *a1, v55, v56, v57);
        v59 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      }
      if ( !v59 )
        return 0;
      goto LABEL_28;
    case 0x36:
      if ( (*(_BYTE *)(v15 + 17) & 4) != 0 )
      {
        v135 = (_QWORD *)sub_19425F0(a1, a4[1].m128i_i64[0]);
        if ( !v135 )
          return 0;
        v10 = sub_1E70DB0(*a1, *v135, *(unsigned int *)(v8 + 48), a4->m128i_u32[0]);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v10, 24, 8);
      *(_DWORD *)v218 = a4->m128i_i32[0];
      *(_QWORD *)(v218 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(_QWORD *)(v218 + 16) = a4[1].m128i_i64[0];
      return v10;
    case 0x37:
      v202 = sub_18CBB50((__int64)a1, *(_QWORD *)(v8 + 24));
      if ( v202 )
      {
        v8 = sub_18F7690(a1, a4->m128i_i32[0], v202, v203, v204, v205, (__m128i)a7, *(double *)a8.m128_u64);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_28;
      }
      return 0;
    case 0x38:
      v199 = sub_18CBB50((__int64)a1, *(_QWORD *)(v8 + 32));
      if ( v199 )
      {
        v200 = sub_F5DBF0(v8);
        v201 = sub_1942710(a1, v200);
        if ( (v201 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v8 = sub_A77600(*(_QWORD *)(*a1 + 248), v199, v201);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            goto LABEL_28;
        }
      }
      return 0;
    case 0x39:
      v94 = &a4->m128i_i8[4];
      v95 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v96 = sub_193F4E0(
              a1,
              a2,
              *(_QWORD *)(v8 + 32),
              v95 * ((unsigned __int64)&v94[-(v94 != nullptr)] / v95 + (v94 != nullptr)));
      if ( (v96 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v8 = sub_A70300(*(_QWORD *)(*a1 + 248), v96, *(_DWORD *)(v8 + 20), (*(_BYTE *)(v8 + 18) >> 3) & 0xF);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_28;
      }
      return 0;
    case 0x3A:
      v172 = &a4->m128i_i8[4];
      v173 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v174 = sub_193F4E0(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v173 * ((unsigned __int64)&v172[-(v172 != nullptr)] / v173 + (v172 != nullptr)));
      if ( (v174 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v164 = sub_18BD3A0(a1, v174, *(unsigned int *)(v8 + 20), 0, v175);
LABEL_135:
      v8 = v164;
      if ( (v164 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
LABEL_28:
      sub_1EA6140(a2, v8, 4, 4);
      *v52 = a4->m128i_i32[0];
      return v8;
  }
}
