unsigned __int64 __fastcall sub_1B8F630(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128 si128,
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
  __m128 v64; // xmm7
  void *v65; // rdi
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // rdx
  __int8 *v69; // r13
  unsigned int v70; // eax
  unsigned __int64 v71; // rax
  __int64 v72; // r8
  __int64 v73; // r9
  __m128i *v74; // r13
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
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r13
  __int64 v90; // rsi
  __int64 v91; // rax
  unsigned __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rbx
  unsigned int v96; // r14d
  __m128i v97; // rax
  __m128 v98; // xmm0
  __int64 v99; // r15
  unsigned int v100; // eax
  __int64 v101; // rax
  _DWORD *v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rax
  __int8 *v106; // r13
  unsigned int v107; // eax
  __int64 v108; // rax
  __int64 v109; // rax
  _DWORD *v110; // rdx
  __m128i *v111; // r13
  unsigned int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rdx
  __int32 v116; // eax
  unsigned int v117; // ecx
  __int64 v118; // rdx
  __int64 v119; // rcx
  unsigned __int64 v120; // rdx
  unsigned __int64 v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // r13
  __int64 v124; // rdx
  unsigned __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  unsigned __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // r14
  __int8 *v135; // r13
  unsigned int v136; // eax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r13
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rdi
  __int64 v143; // rax
  __int64 *v144; // r13
  unsigned int v145; // eax
  __int64 v146; // rax
  __int64 v147; // rax
  _DWORD *v148; // rdx
  __int64 v149; // rsi
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 *v154; // r13
  __int64 v155; // rax
  unsigned __int64 v156; // rax
  __int64 v157; // rdx
  __int32 v158; // eax
  __int64 v159; // rdx
  unsigned __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  unsigned __int64 v167; // rsi
  __int64 v168; // rdx
  __int64 v169; // rcx
  unsigned __int64 v170; // r14
  __int64 v171; // rax
  __int64 v172; // rax
  _DWORD *v173; // rdx
  __int64 v174; // r13
  unsigned __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  unsigned int v183; // eax
  __int64 v184; // rax
  unsigned __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rdx
  __int8 *v188; // r13
  unsigned int v189; // eax
  __int64 v190; // rax
  __int64 v191; // r8
  __m128 v192; // kr00_16
  unsigned __int16 *v193; // rax
  __int64 v194; // rdx
  unsigned __int64 v195; // rcx
  __int64 v196; // r8
  unsigned __int64 v197; // rax
  unsigned __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // r15
  unsigned __int8 v203; // al
  _DWORD *v204; // rdx
  __int8 *v205; // r13
  unsigned int v206; // eax
  __int64 v207; // rax
  __int64 v208; // r15
  __int64 v209; // rdx
  unsigned __int64 v210; // rcx
  __int64 v211; // r8
  unsigned __int64 v212; // rax
  unsigned __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 v217; // rax
  __int64 v218; // rcx
  __int64 v219; // rdi
  unsigned int v220; // eax
  unsigned __int64 v221; // rcx
  __int64 v222; // rbx
  __int64 v223; // r8
  unsigned __int64 v224; // rdx
  __int64 v225; // rax
  __int8 *v226; // r13
  unsigned int v227; // eax
  __int64 v228; // rax
  __int64 v229; // rdx
  unsigned __int64 v230; // r12
  _DWORD *v231; // rdx
  unsigned __int64 v232; // rcx
  __int64 v233; // r8
  unsigned __int16 *v234; // rsi
  __int64 v235; // rdx
  unsigned __int64 v236; // rax
  unsigned __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // r8
  __int64 v240; // r9
  unsigned __int64 v241; // rcx
  __int64 v242; // r8
  __int64 v243; // r15
  unsigned __int64 v244; // rax
  unsigned __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  __int64 v249; // rax
  __int64 v250; // rdi
  __int64 v251; // r8
  __int64 v252; // rax
  unsigned __int64 v253; // rsi
  int v254; // eax
  __int64 v255; // rdx
  unsigned int v256; // ecx
  __int64 v257; // rax
  int v258; // eax
  __int64 v259; // rsi
  __int64 v260; // rax
  __int32 v261; // eax
  _DWORD *v262; // rdx
  _DWORD *v263; // rdx
  __int64 v264; // rax
  __int64 v265; // rdx
  __int64 v266; // rdx
  __int64 v267; // rax
  __m128i v268; // [rsp+0h] [rbp-C8h] BYREF
  __m128 v269; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int64 v270; // [rsp+28h] [rbp-A0h] BYREF
  __m128 v271; // [rsp+30h] [rbp-98h] BYREF
  __m128 v272; // [rsp+40h] [rbp-88h] BYREF
  void **v273; // [rsp+50h] [rbp-78h]
  void *v274[2]; // [rsp+60h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v276; // [rsp+80h] [rbp-48h]

  v8 = a3;
  v9 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  *(_QWORD *)&v11 = (a3 >> 3) & 1;
  v10 = a3;
  *((_QWORD *)&v11 + 1) = a3 & 7;
  v15 = *v9;
  if ( v11 != 0 )
  {
LABEL_3:
    v268.m128i_i64[0] = (__int64)a4;
    v269 = _mm_loadh_ps((const double *)v268.m128i_i64);
    v16 = sub_F6C520(v15 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *v9;
    v18 = v16 * (((unsigned __int64)a4 - (a4 != nullptr)) / v16 + (a4 != nullptr));
    v268.m128i_i64[0] = v18;
    v19 = _mm_loadh_ps((const double *)v268.m128i_i64);
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
          result = sub_1B15180(a1, v20, v269.m128_i64[0], v269.m128_i64[1], v19);
          if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            return result;
          return 0;
        }
      }
    }
    v268 = (__m128i)v19;
    v20 = sub_1B8F630(a1, a2, v19.m128_u64[0], v19.m128_u64[1]);
    v21 = v20 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_5;
  }
  switch ( *(_BYTE *)(v15 + 16) )
  {
    case 0:
      v268.m128i_i64[0] = (__int64)a4;
      *(__m128 *)v274 = _mm_loadh_ps((const double *)v268.m128i_i64);
      v186 = sub_17430D0((__int64)v274);
      return sub_1B8F630(a1, a2, v186, v187);
    case 1:
      v183 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v184 = sub_1B8F630(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v183 * (((unsigned __int64)a4 - (a4 != nullptr)) / v183 + (a4 != nullptr)));
      v8 = v184 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v184 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v8;
      v185 = sub_A75D20(*(_QWORD **)(*a1 + 248), v184);
      goto LABEL_146;
    case 2:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B96CC0(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 3:
      v268.m128i_i64[0] = (__int64)a4;
      *(__m128 *)v274 = _mm_loadh_ps((const double *)v268.m128i_i64);
      v103 = sub_BEB530((__int64)v274);
      v105 = sub_1B8F630(a1, a2, v103, v104);
      v8 = v105 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v105 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v8;
      v81 = sub_A72990(*(_QWORD *)(*a1 + 248), v105);
      goto LABEL_69;
    case 4:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B96F10(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 5:
      v111 = a4 + 1;
      v112 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v113 = sub_1B8F630(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v112 * (((unsigned __int64)v111 - (v111 != nullptr)) / v112 + (v111 != nullptr)));
      if ( (v113 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v114 = sub_1AE7D30(
               a1,
               v113,
               (*(_WORD *)(v8 + 18) >> 6) & 7,
               0,
               0,
               (*(_BYTE *)(v8 + 18) >> 3) & 7,
               a4->m128i_i64[0]);
      v8 = v114;
      if ( (v114 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      sub_1EA6140(a2, v114, 16, 8);
      *(_DWORD *)v115 = a4->m128i_i32[0];
      v116 = a4->m128i_i32[1];
      *(_QWORD *)(v115 + 8) = 0;
      *(_DWORD *)(v115 + 4) = v116;
      return v8;
    case 6:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B97080(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 7:
      v106 = &a4->m128i_i8[12];
      v107 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v108 = sub_1B8F630(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v107 * ((unsigned __int64)&v106[-(v106 != nullptr)] / v107 + (v106 != nullptr)));
      if ( (v108 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v109 = sub_1E65A20(*a1, v108, a4->m128i_u32[0]);
      v8 = v109;
      if ( (v109 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      sub_1EA6140(a2, v109, 12, 4);
      *v110 = a4->m128i_i32[0];
      v110[1] = a4->m128i_i32[1];
      v110[2] = a4->m128i_i32[2];
      return v8;
    case 8:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B971F0(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
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
      LODWORD(v274[1]) = v30;
      if ( v30 > 0x40 )
      {
        v268.m128i_i64[0] = (__int64)v274;
        sub_2205470(v274, v29, 1);
      }
      else
      {
        v31 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v30;
        if ( !v30 )
          LODWORD(v31) = 0;
        v274[0] = (void *)((unsigned int)v31 & v29);
      }
      v32 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)v274, *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v27);
      v33 = sub_1E6EEC0(*a1, v28, v32, v27);
      if ( LODWORD(v274[1]) > 0x40 && v274[0] )
        operator delete[](v274[0]);
      v8 = v33 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v33 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_1EA6140(a2, v33, 4, 4);
        v8 = v33;
        *v34 = a4->m128i_i32[0];
      }
      return v8;
    case 0xB:
      v226 = &a4->m128i_i8[4];
      v227 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v228 = sub_1B8F630(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v227 * ((unsigned __int64)&v226[-(v226 != nullptr)] / v227 + (v226 != nullptr)));
      if ( (v228 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v8 = sub_1E6FF00(*a1, v228, a4->m128i_u32[0], 0);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_30;
      }
      goto LABEL_35;
    case 0xC:
      v220 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v222 = sub_1B8F630(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v220 * (((unsigned __int64)a4 - (a4 != nullptr)) / v220 + (a4 != nullptr)));
      if ( (v222 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v224 = *(_QWORD *)(v8 + 56);
      if ( !v224 )
        goto LABEL_169;
      v225 = sub_1B7CAD0(a1, *(unsigned __int16 **)(v8 + 56), si128, a8, v224, v221, v223);
      if ( v225 == 1 )
        goto LABEL_35;
      v224 = v225 & 0xFFFFFFFFFFFFFFFELL;
LABEL_169:
      v185 = sub_1E5F880(
               *a1,
               v222,
               v224,
               (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 16)) >> 7,
               HIBYTE(*(_DWORD *)(v8 + 16)) & 1);
LABEL_146:
      v8 = v185;
      sub_1EA6140(a2, v185, 0, 1);
      break;
    case 0xD:
      return sub_1AE9D70(a2, v8, a4->m128i_i32);
    case 0xE:
    case 0x2D:
    case 0x32:
      goto LABEL_30;
    case 0xF:
      v123 = *a1;
      sub_18C74E0(*a1, 0, 0, 0);
      v127 = sub_1B7CAD0(a1, *(unsigned __int16 **)(v8 + 24), si128, a8, v124, v125, v126);
      if ( v127 == 1 )
        goto LABEL_113;
      v132 = sub_19A4070(*a1, (_QWORD *)(v127 & 0xFFFFFFFFFFFFFFFELL), v128, v129, v130, v131, si128, a8);
      if ( v132 == 1 )
        goto LABEL_113;
      v133 = sub_1E5FBF0(*a1, v132 & 0xFFFFFFFFFFFFFFFELL, 1);
      v134 = v133;
      if ( (v133 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_113;
      sub_1EA6140(a2, v133, 8, 4);
      *v263 = a4->m128i_i32[0];
      v263[1] = a4->m128i_i32[1];
      goto LABEL_114;
    case 0x10:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B99C00(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 0x11:
      v117 = a4->m128i_i32[0];
      *(_OWORD *)v274 = 0;
      v118 = *(_QWORD *)(v8 + 40);
      *(_OWORD *)ptr = 0;
      v276 = 0;
      v272.m128_u64[0] = sub_1B04180(a1, (__int64)v274, v118, v117, 0, 0, 0);
      if ( !sub_F22B30(&v272)
        && ((v120 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
         || (v120 = sub_1B90FD0(a1, *(_QWORD *)(v8 + 24), v120, v119), (v120 & 0xFFFFFFFFFFFFFFF0LL) != 0))
        && (v121 = sub_AB7C40(*(_QWORD **)(*a1 + 248), v272.m128_i64[0], v120, 0),
            v8 = v121,
            (v121 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        sub_1EA6140(a2, v121, 4, 4);
        *v262 = a4->m128i_i32[0];
      }
      else
      {
        v8 = 0;
      }
      goto LABEL_52;
    case 0x12:
      v205 = &a4[1].m128i_i8[8];
      v206 = sub_F6C520(*(_QWORD *)(v8 + 40));
      v207 = sub_1B8F630(
               a1,
               a2,
               *(_QWORD *)(v8 + 40),
               v206 * ((unsigned __int64)&v205[-(v205 != nullptr)] / v206 + (v205 != nullptr)));
      v10 = v207 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v207 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v208 = *a1;
        v268.m128i_i64[0] = v207;
        sub_18C74E0(v208, 4, 0, 4);
        v212 = sub_1B7CAD0(a1, *(unsigned __int16 **)(v8 + 32), si128, a8, v209, v210, v211);
        v217 = sub_19146D0(*a1, v212, v213, v214, v215, v216, si128, a8);
        if ( v217 == 1
          || (v218 = *(unsigned int *)(v8 + 48),
              v219 = *a1,
              v274[0] = (void *)v268.m128i_i64[0],
              v10 = sub_1E654F0(v219, v274, v217 & 0xFFFFFFFFFFFFFFFELL, v218),
              (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v10 = 0;
        }
        else if ( *(_BYTE *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 18 )
        {
          sub_1EA6140(a2, v10, 24, 8);
          *(_QWORD *)(v265 + 8) = a4->m128i_i64[1];
          *(_QWORD *)v265 = a4->m128i_i64[0];
          *(_DWORD *)(v265 + 16) = a4[1].m128i_i32[0];
        }
        sub_190D5E0(v208, si128);
      }
      return v10;
    case 0x13:
      v123 = *a1;
      sub_18C74E0(*a1, 4, 0, 4);
      v193 = (unsigned __int16 *)sub_F57B50(v8);
      v197 = sub_1B7CAD0(a1, v193, si128, a8, v194, v195, v196);
      v202 = sub_19146D0(*a1, v197, v198, v199, v200, v201, si128, a8);
      if ( v202 == 1 )
        goto LABEL_113;
      v268.m128i_i32[0] = a4->m128i_i32[0];
      v203 = sub_F57B40(v8);
      v134 = sub_1E6EEC0(*a1, v203, v202 & 0xFFFFFFFFFFFFFFFELL, v268.m128i_u32[0]);
      if ( (v134 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_113;
      sub_1EA6140(a2, v134, 4, 4);
      *v204 = a4->m128i_i32[0];
      goto LABEL_114;
    case 0x14:
      v268.m128i_i64[0] = (__int64)a4;
      v192 = _mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B9A3F0(a1, a2, v192.m128_u64[0], v192.m128_u64[1], 0, a6, v192.m128_u64[0], v192.m128_u64[1]);
    case 0x15:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B9E0D0(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 0x16:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B9AF90(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 0x17:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B9E1D0(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 0x18:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B9E2D0(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 0x19:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B9E7F0(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 0x1A:
      v268.m128i_i64[0] = (__int64)a4;
      v274[1] = (void *)0x400000000LL;
      v272.m128_u64[1] = (unsigned __int64)&v271;
      v82 = _mm_loadh_ps((const double *)v268.m128i_i64);
      v274[0] = ptr;
      v268 = (__m128i)v82;
      v271 = v82;
      v272.m128_u64[0] = (unsigned __int64)a1;
      v273 = v274;
      v83 = sub_1B8E700(
              a1,
              a2,
              v82.m128_i64[0],
              (_DWORD *)v82.m128_u64[1],
              0,
              *(double *)v82.m128_u64,
              a8,
              a6,
              a1,
              (__int64 *)&v271,
              (__int64)v274);
      v65 = v274[0];
      v8 = v83;
      if ( v274[0] == ptr )
        return v8;
      goto LABEL_54;
    case 0x1B:
      v74 = a4 + 1;
      v75 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v76 = sub_1B8F630(
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
      v80 = (__int64 *)sub_1B90E50(a1, v79);
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
      v37 = sub_1B04070((__int64)a1, (__int64)v36);
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
      v71 = sub_1B8F630(
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
      v66 = sub_1B90FD0(a1, *(_QWORD *)(v8 + 32), *((_QWORD *)&v11 + 1), a4);
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
      v60 = sub_1B90FD0(a1, *(_QWORD *)(v8 + 32), *((_QWORD *)&v11 + 1), a4);
      v61 = v60 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v60 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v268.m128i_i64[0] = *a1;
        sub_18C74E0(v268.m128i_i64[0], 4, 0, 4);
        v234 = (unsigned __int16 *)a4[1].m128i_i64[0];
        if ( !v234 )
          v234 = *(unsigned __int16 **)(v8 + 40);
        v235 = a4[1].m128i_i64[1];
        if ( !v235 )
          v235 = *(_QWORD *)(v8 + 48);
        v269.m128_u64[0] = v235;
        v236 = sub_1B7CAD0(a1, v234, si128, a8, v235, v232, v233);
        v243 = sub_19146D0(*a1, v236, v237, v238, v239, v240, si128, a8);
        if ( v243 == 1
          || (v244 = sub_1B7CAD0(a1, (unsigned __int16 *)v269.m128_u64[0], si128, a8, v269.m128_i64[0], v241, v242),
              v249 = sub_19146D0(*a1, v244, v245, v246, v247, v248, si128, a8),
              v249 == 1)
          || (v250 = *a1,
              v251 = *(unsigned int *)(v8 + 56),
              v270 = v249 & 0xFFFFFFFFFFFFFFFELL,
              v269.m128_u64[0] = v243 & 0xFFFFFFFFFFFFFFFELL,
              v252 = sub_1E71AF0(v250, v60, v243 & 0xFFFFFFFFFFFFFFFELL, v249 & 0xFFFFFFFFFFFFFFFELL, v251),
              v61 = v252,
              (v252 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v61 = 0;
        }
        else
        {
          v269 = _mm_loadh_ps((const double *)&v270);
          sub_1EA6140(a2, v252, 32, 8);
          si128 = (__m128)_mm_load_si128((const __m128i *)&v269);
          *(_DWORD *)v266 = a4->m128i_i32[0];
          v267 = *(__int64 *)((char *)a4->m128i_i64 + 4);
          *(__m128 *)(v266 + 16) = si128;
          *(_QWORD *)(v266 + 4) = v267;
        }
        sub_190D5E0(v268.m128i_i64[0], si128);
      }
      return v61;
    case 0x21:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B9E940(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 0x22:
      v57 = &a4->m128i_i8[4];
      v58 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v59 = sub_1B8F630(
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
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B9EB10(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 0x24:
      sub_1EA6360(a2, v8, a4);
      return v8;
    case 0x25:
      v50 = sub_1B04070((__int64)a1, *(_QWORD *)(v8 + 40));
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
      v253 = v55;
      v254 = *(_BYTE *)(v55 + 32) & 0x3F;
      if ( v254 )
        v254 = 4 * v254 + 8;
      sub_1EA6140(a2, v253, 4 * ((unsigned int)(v254 + 3) >> 2) + 4, 4);
      if ( (*(_BYTE *)(v8 + 32) & 0x3F) != 0 )
      {
        *(_DWORD *)(v255 + 4) = a4->m128i_i32[1];
        v256 = *(_BYTE *)(v8 + 32) & 0x3F;
        if ( (*(_BYTE *)(v8 + 32) & 0x3F) == 0 )
          goto LABEL_206;
        if ( (v255 + 12 >= (unsigned __int64)&a4[1].m128i_u64[1] + 4 || v51 >= v255 + 28) && v256 - 1 > 2 )
        {
          v257 = 12;
          do
          {
            *(__m128i *)(v255 + v257) = _mm_loadu_si128((__m128i *)((char *)a4 + v257));
            v257 += 16;
          }
          while ( 16LL * (v256 >> 2) + 12 != v257 );
          v258 = v256 & 0xFC;
          if ( v256 != (v256 & 0xFFFFFFFC) )
          {
            *(_DWORD *)(v255 + 12 + 4LL * ((unsigned __int8)v256 & 0xFC)) = *(_DWORD *)(v51
                                                                                      + 4LL
                                                                                      * ((unsigned __int8)v256 & 0xFC));
            v259 = (unsigned int)(v258 + 1);
            if ( (_DWORD)v259 != v256 )
            {
              v260 = (unsigned int)(v258 + 2);
              *(_DWORD *)(v255 + 4 * v259 + 12) = a4->m128i_i32[v259 + 3];
              if ( (_DWORD)v260 != v256 )
                *(_DWORD *)(v255 + 4 * v260 + 12) = a4->m128i_i32[v260 + 3];
            }
          }
        }
        else
        {
          v264 = 0;
          do
          {
            *(_DWORD *)(v255 + 4 * v264 + 12) = a4->m128i_i32[v264 + 3];
            ++v264;
          }
          while ( v256 != (_DWORD)v264 );
        }
        if ( (*(_BYTE *)(v8 + 32) & 0x3F) != 0 )
          v261 = a4->m128i_i32[2];
        else
LABEL_206:
          v261 = 0;
        *(_DWORD *)(v255 + 8) = v261;
      }
      return v56;
    case 0x26:
      v268.m128i_i64[0] = (__int64)a4;
      v272 = _mm_loadh_ps((const double *)v268.m128i_i64);
      v93 = sub_1743190((__int64)&v272);
      v95 = sub_1B8F630(a1, a2, v93, v94);
      if ( (v95 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v96 = *(_DWORD *)(v272.m128_u64[0] + 20);
      v269.m128_i32[0] = *(_DWORD *)v272.m128_u64[1];
      v97.m128i_i64[0] = sub_1743190((__int64)&v272);
      v268 = v97;
      v98 = (__m128)_mm_load_si128(&v268);
      *(__m128 *)v274 = v98;
      v99 = (unsigned int)sub_F6CE20((__int64 *)v274);
      v100 = sub_F6CCB0((__int64 *)v274, v98);
      v101 = sub_1E503F0(*a1, v95, (v99 << 32) | v100, v269.m128_u32[0], v96);
      v8 = v101;
      if ( (v101 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      sub_1EA6140(a2, v101, 4, 4);
      *v102 = *(_DWORD *)v272.m128_u64[1];
      return v8;
    case 0x27:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B91010(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 0x28:
      v144 = &a4->m128i_i64[1];
      v145 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v146 = sub_1B8F630(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v145 * (((unsigned __int64)v144 - (v144 != nullptr)) / v145 + (v144 != nullptr)));
      if ( (v146 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v147 = sub_1E5EFE0(*a1, v146);
      v8 = v147;
      if ( (v147 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      sub_1EA6140(a2, v147, 8, 4);
      *v148 = a4->m128i_i32[0];
      v148[1] = a4->m128i_i32[1];
      return v8;
    case 0x29:
      v135 = &a4->m128i_i8[4];
      v136 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v139 = sub_1B8F630(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v136 * ((unsigned __int64)&v135[-(v135 != nullptr)] / v136 + (v135 != nullptr)));
      if ( (v139 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      v140 = *v9;
      if ( *(_BYTE *)(*v9 + 16) != 41 )
        v140 = sub_F63050(*v9, a2, v137, v138);
      v141 = a4->m128i_u32[0];
      v142 = *a1;
      if ( *(_BYTE *)(v140 + 40) )
        v143 = sub_1E5EFF0(v142, v139, v141);
      else
        v143 = sub_1E5F000(v142, v139, v141);
      goto LABEL_120;
    case 0x2A:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B9F1E0(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 0x2B:
    case 0x2C:
      v268.m128i_i64[0] = (__int64)a4;
      v268 = (__m128i)_mm_loadh_ps((const double *)v268.m128i_i64);
      return sub_1B9F300(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1]);
    case 0x2E:
      v89 = sub_1B04070((__int64)a1, *(_QWORD *)(v8 + 32));
      if ( (*(_BYTE *)(v8 + 18) & 8) != 0 )
        v90 = *(_QWORD *)(v8 + 48);
      else
        v90 = *(_QWORD *)(v8 + 8);
      v91 = sub_1B90FD0(a1, v90, v87, v88);
      v92 = v91 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v91 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v230 = sub_A77C90(
                 *(_QWORD *)(*a1 + 248),
                 v91,
                 v89,
                 *(_WORD *)(v8 + 20) & 0x7FFF,
                 *(_WORD *)(v8 + 22) & 0x7FFF,
                 *(_BYTE *)(v8 + 21) >> 7);
        sub_1EA6140(a2, v230, 4, 4);
        *v231 = a4->m128i_i32[0];
        return v230;
      }
      return v92;
    case 0x2F:
    case 0x30:
      v43 = sub_F60F10(v8, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v44 = sub_1B04070((__int64)a1, (__int64)v43);
      if ( v44 )
        goto LABEL_32;
      goto LABEL_35;
    case 0x31:
      v268.m128i_i64[0] = (__int64)a4;
      v62 = a4->m128i_i32[0];
      *(_OWORD *)v274 = 0;
      v63 = *(_QWORD *)(v8 + 32);
      *(_OWORD *)ptr = 0;
      v8 = 0;
      v64 = _mm_loadh_ps((const double *)v268.m128i_i64);
      v276 = 0;
      v268 = (__m128i)v64;
      v272.m128_u64[0] = sub_1B04180(a1, (__int64)v274, v63, v62, 0, 0, 0);
      if ( !sub_F22B30(&v272) )
        v8 = sub_1B98F30(a1, a2, v268.m128i_i64[0], v268.m128i_i64[1], v272.m128_u64[0]);
LABEL_52:
      if ( HIDWORD(ptr[1]) )
      {
        v65 = ptr[0];
LABEL_54:
        free(v65);
      }
      return v8;
    case 0x33:
      v123 = *a1;
      sub_18C79B0(*a1, 0, 0, 4);
      v162 = sub_1B7CAD0(a1, *(unsigned __int16 **)(v8 + 24), si128, a8, v159, v160, v161);
      if ( v162 == 1 )
        goto LABEL_113;
      v167 = v162 & 0xFFFFFFFFFFFFFFFELL;
      v170 = sub_1934300(*a1, (_QWORD *)(v162 & 0xFFFFFFFFFFFFFFFELL), v163, v164, v165, v166, (__m128i)si128, a8);
      if ( v170 == 1 )
        goto LABEL_113;
      v171 = *v9;
      if ( *(_BYTE *)(*v9 + 16) != 51 )
        v171 = sub_F63050(*v9, v167, v168, v169);
      v172 = sub_1E631F0(*a1, v170 & 0xFFFFFFFFFFFFFFFELL, (*(_BYTE *)(v171 + 18) & 8) != 0);
      v134 = v172;
      if ( (v172 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
LABEL_113:
        v134 = 0;
      }
      else
      {
        sub_1EA6140(a2, v172, 12, 4);
        *v173 = a4->m128i_i32[0];
        v173[1] = a4->m128i_i32[1];
        v173[2] = a4->m128i_i32[2];
      }
LABEL_114:
      sub_190D5E0(v123, si128);
      return v134;
    case 0x34:
      v149 = a4[1].m128i_i64[0];
      v154 = (__int64 *)sub_1B90E50(a1, v149);
      if ( !v154 )
        goto LABEL_35;
      v155 = *v9;
      if ( *(_BYTE *)(*v9 + 16) != 52 )
        v155 = sub_F63050(*v9, v149, v150, v151);
      v156 = sub_A81D80(*(_QWORD *)(*a1 + 248), *v154, (*(_BYTE *)(v155 + 18) & 8) != 0, v151, v152, v153);
      v8 = v156;
      if ( (v156 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_35;
      sub_1EA6140(a2, v156, 24, 8);
      *(_DWORD *)v157 = a4->m128i_i32[0];
      *(_DWORD *)(v157 + 4) = a4->m128i_i32[1];
      v158 = a4->m128i_i32[2];
      *(_QWORD *)(v157 + 16) = v154;
      *(_DWORD *)(v157 + 8) = v158;
      break;
    case 0x35:
      v44 = sub_1B04070((__int64)a1, *(_QWORD *)(v8 + 32));
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
        v122 = (_QWORD *)sub_1B90E50(a1, a4[1].m128i_i64[0]);
        if ( !v122 )
          return 0;
        v10 = sub_1E70DB0(*a1, *v122, *(unsigned int *)(v8 + 48), a4->m128i_u32[0]);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v10, 24, 8);
      *(_DWORD *)v229 = a4->m128i_i32[0];
      *(_QWORD *)(v229 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(_QWORD *)(v229 + 16) = a4[1].m128i_i64[0];
      return v10;
    case 0x37:
      v179 = sub_1B04070((__int64)a1, *(_QWORD *)(v8 + 24));
      if ( v179 )
      {
        v8 = sub_1B1FA40(a1, a4->m128i_i32[0], v179, v180, v181, v182, (__m128i)si128, *(double *)a8.m128_u64);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_30;
      }
      goto LABEL_35;
    case 0x38:
      v174 = sub_1B04070((__int64)a1, *(_QWORD *)(v8 + 32));
      if ( v174 )
      {
        v175 = sub_F5DBF0(v8);
        v178 = sub_1B90FD0(a1, v175, v176, v177);
        if ( (v178 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v8 = sub_A77600(*(_QWORD *)(*a1 + 248), v174, v178);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            goto LABEL_30;
        }
      }
      goto LABEL_35;
    case 0x39:
      v84 = &a4->m128i_i8[4];
      v85 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v86 = sub_1B8F630(
              a1,
              a2,
              *(_QWORD *)(v8 + 32),
              v85 * ((unsigned __int64)&v84[-(v84 != nullptr)] / v85 + (v84 != nullptr)));
      if ( (v86 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v8 = sub_A70300(*(_QWORD *)(*a1 + 248), v86, *(_DWORD *)(v8 + 20), (*(_BYTE *)(v8 + 18) >> 3) & 0xF);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_30;
      }
      goto LABEL_35;
    case 0x3A:
      v188 = &a4->m128i_i8[4];
      v189 = sub_F6C520(*(_QWORD *)(v8 + 32));
      v190 = sub_1B8F630(
               a1,
               a2,
               *(_QWORD *)(v8 + 32),
               v189 * ((unsigned __int64)&v188[-(v188 != nullptr)] / v189 + (v188 != nullptr)));
      if ( (v190 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v143 = sub_1AEAF90(a1, v190, *(unsigned int *)(v8 + 20), 0, v191);
LABEL_120:
        v8 = v143;
        if ( (v143 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_30;
      }
      goto LABEL_35;
  }
  return v8;
}
