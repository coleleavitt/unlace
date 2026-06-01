unsigned __int64 __fastcall sub_1BB10D0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int128 v11; // rax
  __int64 *v12; // r13
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  __m128 v20; // xmm0
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  unsigned __int64 result; // rax
  __int64 v24; // rax
  _DWORD *v25; // rdx
  _DWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  _DWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rbx
  unsigned int v42; // r15d
  __m128i v43; // rax
  __m128 v44; // xmm0
  __int64 v45; // r13
  unsigned int v46; // eax
  _DWORD *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r8
  unsigned int v50; // r9d
  unsigned int v51; // edx
  int v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // ecx
  __int8 *v55; // rdi
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rsi
  __int64 v59; // rax
  __int32 v60; // eax
  __int8 *v61; // r13
  unsigned int v62; // eax
  __int64 v63; // r13
  __int64 v64; // rax
  _DWORD *v65; // rdx
  __int64 v66; // r13
  __int64 v67; // r8
  __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // r8
  __int64 v77; // rcx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  __int64 v84; // rdi
  bool v85; // zf
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // r13
  unsigned __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rax
  _DWORD *v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rdx
  _QWORD *v103; // rsi
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  _QWORD *v108; // r13
  __int64 v109; // rax
  unsigned __int64 v110; // rax
  __int64 v111; // r13
  __int64 v112; // rsi
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  __int8 *v115; // r13
  unsigned int v116; // eax
  __int64 v117; // rax
  __m128 v118; // xmm0
  __int64 v119; // rax
  void *v120; // rdi
  __int8 *v121; // r13
  unsigned int v122; // eax
  __int64 v123; // rcx
  __int64 v124; // r9
  unsigned __int64 v125; // r13
  __int64 v126; // rax
  __int64 v127; // r8
  __int64 *v128; // r13
  unsigned int v129; // eax
  __int64 v130; // r13
  __int64 v131; // rdi
  _DWORD *v132; // rdx
  __m128i *v133; // r13
  unsigned int v134; // eax
  __int64 v135; // rax
  __int64 v136; // rdx
  __int32 v137; // eax
  unsigned int v138; // eax
  __int64 v139; // r13
  unsigned __int64 v140; // rbx
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rdx
  __int8 *v144; // r13
  unsigned int v145; // eax
  __int64 v146; // rax
  __int64 v147; // r8
  __m128 v148; // kr00_16
  unsigned __int64 v149; // rax
  unsigned __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  unsigned __int64 v153; // rax
  unsigned __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rax
  unsigned __int32 v159; // r13d
  unsigned __int8 v160; // al
  _DWORD *v161; // rdx
  unsigned int v162; // ecx
  __int64 v163; // rdx
  unsigned __int64 v164; // rdx
  unsigned __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  _QWORD *v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rax
  __int64 v173; // rcx
  __int64 v174; // r9
  __int64 v175; // rsi
  __int64 v176; // r8
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 *v180; // r14
  __int64 v181; // rax
  __int64 v182; // r9
  __int64 v183; // rdx
  __int32 v184; // eax
  unsigned __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // rax
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  unsigned __int64 v193; // rsi
  __int64 v194; // rdx
  unsigned __int64 v195; // rcx
  __int64 v196; // rax
  __int64 v197; // rdi
  unsigned __int64 v198; // rcx
  _DWORD *v199; // rdx
  __int64 v200; // r13
  unsigned __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rax
  unsigned int v204; // ecx
  __int64 v205; // rdx
  __m128 v206; // xmm5
  _QWORD *v207; // rsi
  __int64 v208; // rdi
  __int8 *v209; // r13
  unsigned int v210; // eax
  __int64 v211; // r13
  __int64 v212; // rdi
  __int64 v213; // rdx
  unsigned int v214; // r13d
  unsigned int v215; // r15d
  unsigned int v216; // r14d
  unsigned int v217; // r13d
  unsigned int v218; // eax
  unsigned __int64 v219; // rdx
  __int64 v220; // rax
  unsigned int v221; // eax
  unsigned __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // rbx
  __int64 v225; // r8
  __int64 v226; // r13
  __int64 v227; // rax
  unsigned __int64 v228; // rdx
  unsigned __int64 v229; // r12
  _DWORD *v230; // rdx
  _DWORD *v231; // rdx
  unsigned __int64 v232; // rax
  __int64 v233; // rax
  __m128i v234; // [rsp+0h] [rbp-D8h] BYREF
  __m128 v235; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v236; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v237; // [rsp+30h] [rbp-A8h]
  __int64 v238; // [rsp+38h] [rbp-A0h]
  __m128 v239; // [rsp+40h] [rbp-98h] BYREF
  __m128 v240; // [rsp+50h] [rbp-88h] BYREF
  void **v241; // [rsp+60h] [rbp-78h]
  void *ptr[2]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v243; // [rsp+80h] [rbp-58h] BYREF
  __int128 v244; // [rsp+90h] [rbp-48h]

  v8 = a3;
  v9 = a3;
  *(_QWORD *)&v11 = (a3 >> 3) & 1;
  *((_QWORD *)&v11 + 1) = a3 & 7;
  v12 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *v12;
  if ( v11 != 0 )
  {
LABEL_3:
    v234.m128i_i64[0] = (__int64)a4;
    v235 = _mm_loadh_ps((const double *)v234.m128i_i64);
    v17 = sub_F6C520(v16 & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *v12;
    v19 = v17 * (((unsigned __int64)a4 - (a4 != nullptr)) / v17 + (a4 != nullptr));
    v234.m128i_i64[0] = v19;
    v20 = _mm_loadh_ps((const double *)v234.m128i_i64);
    if ( (v18 & 7) == 0 )
    {
      v21 = v18;
      if ( (v18 & 8) == 0 )
      {
        v22 = v18 & 0xFFFFFFFFFFFFFFF0LL;
        v24 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v24 + 16) == 50 )
        {
          if ( v18 )
          {
            sub_1EA6140(a2, v18, 4, 4);
            *v26 = *(_DWORD *)v19;
LABEL_5:
            if ( !v22 )
              return 0;
            goto LABEL_13;
          }
        }
        else if ( *(_BYTE *)(v24 + 16) == 45 && v18 )
        {
          sub_1EA6140(a2, v18, 4, 4);
          *v25 = *(_DWORD *)v19;
          if ( !v22 )
            return 0;
LABEL_13:
          result = sub_1B15180(a1, v21, v235.m128_i64[0], v235.m128_i64[1], v20);
          if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            return result;
          return 0;
        }
      }
    }
    v234 = (__m128i)v20;
    v21 = sub_1BB10D0(a1, a2, v20.m128_u64[0], v20.m128_u64[1]);
    v22 = v21 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_5;
  }
  switch ( *(_BYTE *)(v16 + 16) )
  {
    case 0:
      v234.m128i_i64[0] = (__int64)a4;
      *(__m128 *)ptr = _mm_loadh_ps((const double *)v234.m128i_i64);
      v142 = sub_17430D0((__int64)ptr);
      return sub_1BB10D0(a1, a2, v142, v143);
    case 1:
      v138 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v139 = sub_1BB10D0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v138 * (((unsigned __int64)a4 - (a4 != nullptr)) / v138 + (a4 != nullptr)));
      v140 = v139 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v139 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v140;
      v141 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_136;
      v140 = v9;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( *(_QWORD *)(v9 + 32) != v139 )
      {
        v141 = *a1;
LABEL_136:
        v140 = sub_A75D20(*(_QWORD **)(v141 + 248), v139);
      }
      sub_1EA6140(a2, v140, 0, 1);
      return v140;
    case 2:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BB6720(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 3:
      v234.m128i_i64[0] = (__int64)a4;
      *(__m128 *)ptr = _mm_loadh_ps((const double *)v234.m128i_i64);
      v27 = sub_BEB530((__int64)ptr);
      v29 = sub_1BB10D0(a1, a2, v27, v28);
      v9 = v29 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v9;
      v30 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_21;
      v9 = (unsigned __int64)ptr[0];
      if ( v29 != sub_BEB530((__int64)ptr) )
      {
        v30 = *a1;
LABEL_21:
        v9 = sub_A72990(*(_QWORD *)(v30 + 248), v29);
      }
      sub_1EA6140(a2, v9, 16, 8);
      return v9;
    case 4:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BB69D0(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 5:
      v133 = a4 + 1;
      v134 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v135 = sub_1BB10D0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v134 * (((unsigned __int64)v133 - (v133 != nullptr)) / v134 + (v133 != nullptr)));
      if ( (v135 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(v9 + 32) != v135 )
      {
        v8 = sub_1AE7D30(
               a1,
               v135,
               (*(_WORD *)(v9 + 18) >> 6) & 7,
               0,
               0,
               (*(_BYTE *)(v9 + 18) >> 3) & 7,
               a4->m128i_i64[0]);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
      sub_1EA6140(a2, v8, 16, 8);
      *(_DWORD *)v136 = a4->m128i_i32[0];
      v137 = a4->m128i_i32[1];
      *(_QWORD *)(v136 + 8) = 0;
      *(_DWORD *)(v136 + 4) = v137;
      goto LABEL_62;
    case 6:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BB6B60(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 7:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BB6CF0(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 8:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BB6DD0(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 9:
    case 0x3B:
      goto LABEL_3;
    case 0xA:
      v213 = *(unsigned int *)(*a1 + 12632);
      if ( !(_DWORD)v213 )
        goto LABEL_61;
      v214 = *(_DWORD *)(v9 + 32);
      v215 = a4->m128i_i32[0];
      v216 = *(_BYTE *)(v9 + 32) & 1;
      v217 = (v214 >> 1) & 0xFFFFFF;
      v218 = sub_AAC1F0(*(_QWORD *)(*a1 + 248), *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v213, (__int64)a4, a5);
      LODWORD(ptr[1]) = v218;
      if ( v218 > 0x40 )
      {
        v234.m128i_i64[0] = (__int64)ptr;
        sub_2205470(ptr, v217, 1);
      }
      else
      {
        v219 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v218;
        if ( !v218 )
          LODWORD(v219) = 0;
        ptr[0] = (void *)((unsigned int)v219 & v217);
      }
      v220 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)ptr, *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v215);
      v8 = sub_1E6EEC0(*a1, v216, v220, v215);
      if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
        operator delete[](ptr[0]);
      goto LABEL_144;
    case 0xB:
      v209 = &a4->m128i_i8[4];
      v210 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v211 = sub_1BB10D0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v210 * ((unsigned __int64)&v209[-(v209 != nullptr)] / v210 + (v209 != nullptr)));
      if ( (v211 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      v212 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_211;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( *(_QWORD *)(v9 + 32) == v211 )
        goto LABEL_61;
      v212 = *a1;
LABEL_211:
      v8 = sub_1E6FF00(v212, v211, a4->m128i_u32[0], 0);
      if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_61;
      goto LABEL_95;
    case 0xC:
      v221 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v224 = sub_1BB10D0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v221 * (((unsigned __int64)a4 - (a4 != nullptr)) / v221 + (a4 != nullptr)));
      if ( (v224 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      v226 = *(_QWORD *)(v9 + 56);
      if ( v226 )
      {
        v227 = sub_1B73BE0(a1, *(_QWORD *)(v9 + 56), v222, a7, a8, v223, v225);
        if ( v227 == 1 )
        {
LABEL_95:
          v8 = 0;
          goto LABEL_62;
        }
        v228 = v227 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v228 = 0;
      }
      if ( *(_DWORD *)(*a1 + 12632) || v226 != v228 || v224 != *(_QWORD *)(v9 + 32) )
        v8 = sub_1E5F880(
               *a1,
               v224,
               v228,
               (unsigned __int8)BYTE2(*(_DWORD *)(v9 + 16)) >> 7,
               HIBYTE(*(_DWORD *)(v9 + 16)) & 1);
      sub_1EA6140(a2, v8, 0, 1);
LABEL_62:
      result = v8;
      break;
    case 0xD:
      return sub_1AE9D70(a2, v9, a4->m128i_i32);
    case 0xE:
    case 0x2D:
    case 0x32:
      goto LABEL_27;
    case 0xF:
      v89 = *a1;
      sub_18C74E0(*a1, 0, 0, 0);
      v93 = sub_1B73BE0(a1, *(_QWORD *)(v9 + 24), v90, a7, a8, v91, v92);
      if ( v93 == 1
        || (v98 = sub_19A4070(*a1, (_QWORD *)(v93 & 0xFFFFFFFFFFFFFFFELL), v94, v95, v96, v97, a7, a8), v98 == 1)
        || ((v99 = v98 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632)) || *(_QWORD *)(v9 + 24) != v99)
        && (v8 = sub_1E5FBF0(*a1, v99, 1), (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
        v8 = 0;
      }
      else
      {
        sub_1EA6140(a2, v8, 8, 4);
        *v100 = a4->m128i_i32[0];
        v100[1] = a4->m128i_i32[1];
      }
      sub_190D5E0(v89, a7);
      return v8;
    case 0x10:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BB9830(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x11:
      v162 = a4->m128i_i32[0];
      *(_OWORD *)ptr = 0;
      v163 = *(_QWORD *)(v9 + 40);
      v243 = 0;
      v244 = 0;
      v240.m128_u64[0] = sub_1B03D20(a1, (__int64)ptr, v163, v162, 0, 0, 0);
      if ( !sub_F22B30(&v240)
        && ((v164 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
         || (v164 = sub_1BB2C30(a1, *(_QWORD *)(v9 + 24)), (v164 & 0xFFFFFFFFFFFFFFF0LL) != 0))
        && (v165 = sub_AB7C40(*(_QWORD **)(*a1 + 248), v240.m128_i64[0], v164, 0),
            v9 = v165,
            (v165 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        sub_1EA6140(a2, v165, 4, 4);
        *v231 = a4->m128i_i32[0];
      }
      else
      {
        v9 = 0;
      }
      goto LABEL_162;
    case 0x12:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBE430(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x13:
      v234.m128i_i64[0] = *a1;
      sub_18C74E0(v234.m128i_i64[0], 4, 0, 4);
      v149 = sub_F57B50(v9);
      v153 = sub_1B73BE0(a1, v149, v150, a7, a8, v151, v152);
      v158 = sub_19146D0(*a1, v153, v154, v155, v156, v157, a7, a8);
      if ( v158 == 1 )
        goto LABEL_233;
      v235.m128_u64[0] = v158 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632) || v235.m128_u64[0] != sub_F57B50(v9) )
      {
        v159 = a4->m128i_i32[0];
        v160 = sub_F57B40(v9);
        v8 = sub_1E6EEC0(*a1, v160, v235.m128_u64[0], v159);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_233;
      }
      sub_1EA6140(a2, v8, 4, 4);
      *v161 = a4->m128i_i32[0];
      goto LABEL_155;
    case 0x14:
      v234.m128i_i64[0] = (__int64)a4;
      v148 = _mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBA050(a1, a2, v148.m128_u64[0], v148.m128_u64[1], 0, a6, v148.m128_u64[0], v148.m128_u64[1]);
    case 0x15:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBE570(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x16:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBAE50(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x17:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBE690(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x18:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBE7B0(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x19:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBED10(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x1A:
      v234.m128i_i64[0] = (__int64)a4;
      ptr[1] = (void *)0x400000000LL;
      v240.m128_u64[1] = (unsigned __int64)&v239;
      v118 = _mm_loadh_ps((const double *)v234.m128i_i64);
      ptr[0] = &v243;
      v234 = (__m128i)v118;
      v239 = v118;
      v240.m128_u64[0] = (unsigned __int64)a1;
      v241 = ptr;
      v119 = sub_1BB0010(
               a1,
               a2,
               v118.m128_i64[0],
               (_DWORD *)v118.m128_u64[1],
               0,
               *(double *)v118.m128_u64,
               a8,
               a6,
               a1,
               (__int64 *)&v239,
               (__int64)ptr);
      v120 = ptr[0];
      v9 = v119;
      if ( ptr[0] != &v243 )
        goto LABEL_109;
      return v9;
    case 0x1B:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBEE80(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x1C:
      return v9;
    case 0x1D:
      v31 = v9;
      v9 = 0;
      v32 = sub_F61460(v31, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v33 = sub_1B03C10((__int64)a1, (__int64)v32);
      if ( !v33 )
        return v9;
      v37 = *(_QWORD *)(v33 + 48);
      if ( v37 )
        v9 = v37 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v9 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v33, *a1, v34, v35, v36);
LABEL_27:
      sub_1EA6140(a2, v9, 4, 4);
      *v38 = a4->m128i_i32[0];
      return v9;
    case 0x1E:
      v121 = &a4->m128i_i8[4];
      v122 = sub_F6C520(*(_QWORD *)(v9 + 24));
      v125 = sub_1BB10D0(
               a1,
               a2,
               *(_QWORD *)(v9 + 24),
               v122 * ((unsigned __int64)&v121[-(v121 != nullptr)] / v122 + (v121 != nullptr)));
      if ( (v125 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      v126 = *a1;
      v127 = *(unsigned int *)(*a1 + 12632);
      if ( (_DWORD)v127 )
        goto LABEL_114;
      sub_F6C520(*(_QWORD *)(v9 + 24));
      if ( v125 == *(_QWORD *)(v9 + 24) )
        goto LABEL_61;
      v126 = *a1;
LABEL_114:
      v8 = sub_A820D0(*(_QWORD *)(v126 + 248), v125, *(_QWORD *)(v9 + 32), v123, v127, v124);
      if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_61;
      goto LABEL_95;
    case 0x1F:
      v101 = sub_1BB2C30(a1, *(_QWORD *)(v9 + 32));
      if ( (v101 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      if ( *(_DWORD *)(*a1 + 12632) || v101 != *(_QWORD *)(v9 + 32) )
      {
        v8 = sub_A76DD0(*(_QWORD *)(*a1 + 248), v101, *(_DWORD *)(v9 + 40), *(_DWORD *)(v9 + 44));
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
      sub_1EA6140(a2, v8, 32, 8);
      *(_DWORD *)v102 = a4->m128i_i32[0];
      *(_QWORD *)(v102 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(__m128i *)(v102 + 16) = _mm_loadu_si128(a4 + 1);
      goto LABEL_62;
    case 0x20:
      v66 = sub_1BB2C30(a1, *(_QWORD *)(v9 + 32));
      result = v66 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v66 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v236 = *a1;
        sub_18C74E0(v236, 4, 0, 4);
        v68 = a4[1].m128i_i64[0];
        if ( !v68 )
          v68 = *(_QWORD *)(v9 + 40);
        v69 = a4[1].m128i_u64[1];
        if ( !v69 )
          v69 = *(_QWORD *)(v9 + 48);
        v235.m128_u64[0] = v69;
        v234.m128i_i64[0] = v68;
        v70 = sub_1B73BE0(a1, v68, v69, a7, a8, v68, v67);
        v75 = sub_19146D0(*a1, v70, v71, v72, v73, v74, a7, a8);
        v77 = v234.m128i_i64[0];
        if ( v75 != 1
          && (v234.m128i_i64[0] = v75,
              v238 = v77,
              v237 = v235.m128_u64[0],
              v78 = sub_1B73BE0(a1, v235.m128_u64[0], v235.m128_u64[0], a7, a8, v77, v76),
              v83 = sub_19146D0(*a1, v78, v79, v80, v81, v82, a7, a8),
              v83 != 1)
          && ((v84 = *a1,
               v235.m128_u64[0] = v83 & 0xFFFFFFFFFFFFFFFELL,
               v85 = *(_DWORD *)(v84 + 12632) == 0,
               v234.m128i_i64[0] &= ~1uLL,
               v85)
           && v66 == *(_QWORD *)(v9 + 32)
           && v238 == v234.m128i_i64[0]
           && v237 == v235.m128_u64[0]
           || (v8 = sub_1E71AF0(v84, v66, v234.m128i_i64[0], v235.m128_u64[0], *(unsigned int *)(v9 + 56)),
               (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
        {
          v234 = (__m128i)_mm_loadh_ps((const double *)v235.m128_u64);
          sub_1EA6140(a2, v8, 32, 8);
          a7 = (__m128)_mm_load_si128(&v234);
          *(_DWORD *)v86 = a4->m128i_i32[0];
          v87 = *(__int64 *)((char *)a4->m128i_i64 + 4);
          *(__m128 *)(v86 + 16) = a7;
          *(_QWORD *)(v86 + 4) = v87;
          v88 = v8;
        }
        else
        {
          v88 = 0;
        }
        v234.m128i_i64[0] = v88;
        sub_190D5E0(v236, a7);
        return v234.m128i_i64[0];
      }
      return result;
    case 0x21:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBEF90(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x22:
      v61 = &a4->m128i_i8[4];
      v62 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v63 = sub_1BB10D0(
              a1,
              a2,
              *(_QWORD *)(v9 + 32),
              v62 * ((unsigned __int64)&v61[-(v61 != nullptr)] / v62 + (v61 != nullptr)));
      if ( (v63 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      v64 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_60;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( *(_QWORD *)(v9 + 32) == v63 )
        goto LABEL_61;
      v64 = *a1;
LABEL_60:
      v8 = sub_A74EC0(*(_QWORD *)(v64 + 248), v63);
      if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_61;
      goto LABEL_95;
    case 0x23:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBF1D0(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x24:
      sub_1EA6360(a2, v9, a4);
      return v9;
    case 0x25:
      v48 = sub_1B03C10((__int64)a1, *(_QWORD *)(v9 + 40));
      if ( !v48 )
        goto LABEL_95;
      if ( *(_DWORD *)(*a1 + 12632) || v48 != *(_QWORD *)(v9 + 40) )
      {
        LOBYTE(v49) = *(_BYTE *)(v9 + 32) & 0x3F;
        if ( (_BYTE)v49 )
        {
          v50 = a4->m128i_u32[2];
          v51 = a4->m128i_u32[1];
          v49 = (unsigned __int8)v49;
        }
        else
        {
          v50 = 0;
          v49 = 0;
          v51 = 0;
        }
        v8 = sub_1A891C0(*(__int64 **)(*a1 + 736), v48, v51, (_BYTE *)(v9 + 48), v49, v50, (int)a4 + 12, v49, 1);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
      v52 = *(_BYTE *)(v8 + 32) & 0x3F;
      if ( (*(_BYTE *)(v8 + 32) & 0x3F) != 0 )
        v52 = 4 * v52 + 8;
      sub_1EA6140(a2, v8, 4 * ((unsigned int)(v52 + 3) >> 2) + 4, 4);
      if ( (*(_BYTE *)(v9 + 32) & 0x3F) != 0 )
      {
        *(_DWORD *)(v53 + 4) = a4->m128i_i32[1];
        v54 = *(_BYTE *)(v9 + 32) & 0x3F;
        if ( (*(_BYTE *)(v9 + 32) & 0x3F) == 0 )
          goto LABEL_250;
        v55 = &a4->m128i_i8[12];
        if ( ((unsigned __int64)&a4->m128i_u64[1] + 4 >= v53 + 28
           || v53 + 12 >= (unsigned __int64)&a4[1].m128i_u64[1] + 4)
          && v54 - 1 > 2 )
        {
          v56 = 12;
          do
          {
            *(__m128i *)(v53 + v56) = _mm_loadu_si128((__m128i *)((char *)a4 + v56));
            v56 += 16;
          }
          while ( 16LL * (v54 >> 2) + 12 != v56 );
          v57 = v54 & 0xFC;
          if ( (v54 & 0xFFFFFFFC) != v54 )
          {
            *(_DWORD *)(v53 + 4LL * ((unsigned __int8)v54 & 0xFC) + 12) = *(_DWORD *)&v55[4 * (v54 & 0xFC)];
            v58 = (unsigned int)(v57 + 1);
            if ( v54 != (_DWORD)v58 )
            {
              v59 = (unsigned int)(v57 + 2);
              *(_DWORD *)(v53 + 12 + 4 * v58) = *(_DWORD *)&v55[4 * v58];
              if ( (_DWORD)v59 != v54 )
                *(_DWORD *)(v53 + 4 * v59 + 12) = *(_DWORD *)&v55[4 * v59];
            }
          }
        }
        else
        {
          v233 = 0;
          do
          {
            *(_DWORD *)(v53 + 4 * v233 + 12) = a4->m128i_i32[v233 + 3];
            ++v233;
          }
          while ( v54 != (_DWORD)v233 );
        }
        if ( (*(_BYTE *)(v9 + 32) & 0x3F) != 0 )
          v60 = a4->m128i_i32[2];
        else
LABEL_250:
          v60 = 0;
        *(_DWORD *)(v53 + 8) = v60;
      }
      goto LABEL_62;
    case 0x26:
      v234.m128i_i64[0] = (__int64)a4;
      v240 = _mm_loadh_ps((const double *)v234.m128i_i64);
      v39 = sub_1743190((__int64)&v240);
      v41 = sub_1BB10D0(a1, a2, v39, v40);
      if ( (v41 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v9 = v240.m128_u64[0];
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_31;
      if ( v41 == sub_1743190((__int64)&v240) )
        goto LABEL_32;
      v9 = v240.m128_u64[0];
LABEL_31:
      v42 = *(_DWORD *)(v9 + 20);
      v235.m128_i32[0] = *(_DWORD *)v240.m128_u64[1];
      v43.m128i_i64[0] = sub_1743190((__int64)&v240);
      v234 = v43;
      v44 = (__m128)_mm_load_si128(&v234);
      *(__m128 *)ptr = v44;
      v45 = (unsigned int)sub_F6CE20((__int64 *)ptr);
      v46 = sub_F6CCB0((__int64 *)ptr, v44);
      v9 = sub_1E503F0(*a1, v41, (v45 << 32) | v46, v235.m128_u32[0], v42);
      if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
LABEL_32:
      sub_1EA6140(a2, v9, 4, 4);
      *v47 = *(_DWORD *)v240.m128_u64[1];
      return v9;
    case 0x27:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BB2C70(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x28:
      v128 = &a4->m128i_i64[1];
      v129 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v130 = sub_1BB10D0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v129 * (((unsigned __int64)v128 - (v128 != nullptr)) / v129 + (v128 != nullptr)));
      if ( (v130 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      v131 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_122;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( v130 != *(_QWORD *)(v9 + 32) )
      {
        v131 = *a1;
LABEL_122:
        v8 = sub_1E5EFE0(v131, v130);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
      sub_1EA6140(a2, v8, 8, 4);
      *v132 = a4->m128i_i32[0];
      v132[1] = a4->m128i_i32[1];
      goto LABEL_62;
    case 0x29:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBF900(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x2A:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBFA20(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x2B:
    case 0x2C:
      v234.m128i_i64[0] = (__int64)a4;
      v234 = (__m128i)_mm_loadh_ps((const double *)v234.m128i_i64);
      return sub_1BBFB50(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1]);
    case 0x2E:
      v111 = sub_1B03C10((__int64)a1, *(_QWORD *)(v9 + 32));
      if ( (*(_BYTE *)(v9 + 18) & 8) != 0 )
        v112 = *(_QWORD *)(v9 + 48);
      else
        v112 = *(_QWORD *)(v9 + 8);
      v113 = sub_1BB2C30(a1, v112);
      v114 = v113 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v113 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v229 = sub_A77C90(
                 *(_QWORD *)(*a1 + 248),
                 v113,
                 v111,
                 *(_WORD *)(v9 + 20) & 0x7FFF,
                 *(_WORD *)(v9 + 22) & 0x7FFF,
                 *(_BYTE *)(v9 + 21) >> 7);
        sub_1EA6140(a2, v229, 4, 4);
        *v230 = a4->m128i_i32[0];
        return v229;
      }
      return v114;
    case 0x2F:
      v103 = sub_F60F10(v9, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v108 = (_QWORD *)sub_1B03C10((__int64)a1, (__int64)v103);
      if ( !v108 )
        goto LABEL_95;
      if ( !*(_DWORD *)(*a1 + 12632) && v108 == sub_F60F10(v9, (__int64)v103, v104, v105, v106, v107) )
        goto LABEL_61;
      v109 = v108[6];
      if ( v109 )
        goto LABEL_93;
      v208 = *(_QWORD *)(*a1 + 248);
      goto LABEL_206;
    case 0x30:
      v207 = sub_F60F10(v9, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v108 = (_QWORD *)sub_1B03C10((__int64)a1, (__int64)v207);
      if ( !v108 )
        goto LABEL_95;
      v104 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_204;
      if ( v108 == sub_F60F10(v9, (__int64)v207, v104, v105, v106, v107) )
        goto LABEL_61;
      v104 = *a1;
LABEL_204:
      v109 = v108[6];
      if ( v109 )
        goto LABEL_93;
      v208 = *(_QWORD *)(v104 + 248);
LABEL_206:
      v8 = sub_A7AA70(v208, (__int64)v108, v104, v105, v106, v107);
      v110 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_94;
    case 0x31:
      v234.m128i_i64[0] = (__int64)a4;
      v204 = a4->m128i_i32[0];
      *(_OWORD *)ptr = 0;
      v205 = *(_QWORD *)(v9 + 32);
      v243 = 0;
      v9 = 0;
      v206 = _mm_loadh_ps((const double *)v234.m128i_i64);
      v244 = 0;
      v234 = (__m128i)v206;
      v240.m128_u64[0] = sub_1B03D20(a1, (__int64)ptr, v205, v204, 0, 0, 0);
      if ( !sub_F22B30(&v240) )
        v9 = sub_1BB8B60(a1, a2, v234.m128i_i64[0], v234.m128i_i64[1], v240.m128_u64[0]);
LABEL_162:
      if ( HIDWORD(v243) )
      {
        v120 = (void *)v243;
LABEL_109:
        free(v120);
      }
      return v9;
    case 0x33:
      v234.m128i_i64[0] = *a1;
      sub_18C79B0(v234.m128i_i64[0], 0, 0, 4);
      v188 = sub_1B73BE0(a1, *(_QWORD *)(v9 + 24), v185, a7, a8, v186, v187);
      if ( v188 == 1 )
        goto LABEL_233;
      v193 = v188 & 0xFFFFFFFFFFFFFFFELL;
      v195 = sub_1934300(*a1, (_QWORD *)(v188 & 0xFFFFFFFFFFFFFFFELL), v189, v190, v191, v192, (__m128i)a7, a8);
      if ( v195 == 1 )
        goto LABEL_233;
      v196 = *v12;
      if ( *(_BYTE *)(*v12 + 16) != 51 )
      {
        v197 = *v12;
        v235.m128_u64[0] = v195;
        v196 = sub_F63050(v197, v193, v194, v195);
        v195 = v235.m128_u64[0];
      }
      if ( ((v198 = v195 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632)) || v198 != *(_QWORD *)(v9 + 24))
        && (v8 = sub_1E631F0(*a1, v198, (*(_BYTE *)(v196 + 18) & 8) != 0), (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
LABEL_233:
        v8 = 0;
      }
      else
      {
        sub_1EA6140(a2, v8, 12, 4);
        *v199 = a4->m128i_i32[0];
        v199[1] = a4->m128i_i32[1];
        v199[2] = a4->m128i_i32[2];
      }
LABEL_155:
      sub_190D5E0(v234.m128i_i64[0], a7);
      return v8;
    case 0x34:
      v234.m128i_i64[0] = a4[1].m128i_i64[0];
      v180 = (__int64 *)sub_1BB2A80(a1, v234.m128i_i64[0]);
      if ( !v180 )
        goto LABEL_95;
      v181 = *v12;
      if ( *(_BYTE *)(*v12 + 16) != 52 )
        v181 = sub_F63050(*v12, v234.m128i_i64[0], v177, v178);
      v182 = *(unsigned int *)(*a1 + 12632);
      if ( (_DWORD)v182 || (__int64 *)v234.m128i_i64[0] != v180 )
      {
        v8 = sub_A81D80(*(_QWORD *)(*a1 + 248), *v180, (*(_BYTE *)(v181 + 18) & 8) != 0, v178, v179, v182);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
      sub_1EA6140(a2, v8, 24, 8);
      *(_DWORD *)v183 = a4->m128i_i32[0];
      *(_DWORD *)(v183 + 4) = a4->m128i_i32[1];
      v184 = a4->m128i_i32[2];
      *(_QWORD *)(v183 + 16) = v180;
      *(_DWORD *)(v183 + 8) = v184;
      goto LABEL_62;
    case 0x35:
      v172 = sub_1B03C10((__int64)a1, *(_QWORD *)(v9 + 32));
      v175 = v172;
      if ( !v172 )
        goto LABEL_95;
      v176 = *(unsigned int *)(*a1 + 12632);
      if ( !(_DWORD)v176 && v172 == *(_QWORD *)(v9 + 32) )
        goto LABEL_61;
      v109 = *(_QWORD *)(v172 + 48);
      if ( v109 )
      {
LABEL_93:
        v110 = v109 & 0xFFFFFFFFFFFFFFF0LL;
        v8 = v110;
      }
      else
      {
        v8 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v175, *a1, v173, v176, v174);
        v110 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      }
LABEL_94:
      if ( !v110 )
        goto LABEL_95;
      goto LABEL_61;
    case 0x36:
      if ( (*(_BYTE *)(v16 + 17) & 4) != 0 )
      {
        v170 = (_QWORD *)sub_1BB2A80(a1, a4[1].m128i_i64[0]);
        if ( !v170 )
          goto LABEL_95;
        v8 = sub_1E70DB0(*a1, *v170, *(unsigned int *)(v9 + 48), a4->m128i_u32[0]);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
      sub_1EA6140(a2, v8, 24, 8);
      *(_DWORD *)v171 = a4->m128i_i32[0];
      *(_QWORD *)(v171 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(_QWORD *)(v171 + 16) = a4[1].m128i_i64[0];
      goto LABEL_62;
    case 0x37:
      v166 = sub_1B03C10((__int64)a1, *(_QWORD *)(v9 + 24));
      if ( v166 )
      {
        if ( !*(_DWORD *)(*a1 + 12632) && v166 == *(_QWORD *)(v9 + 24) )
          goto LABEL_61;
        v8 = sub_1B196D0(a1, a4->m128i_i32[0], v166, v167, v168, v169, (__m128i)a7, *(double *)a8.m128_u64);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_61;
      }
      goto LABEL_95;
    case 0x38:
      v200 = sub_1B03C10((__int64)a1, *(_QWORD *)(v9 + 32));
      if ( !v200 )
        goto LABEL_95;
      v201 = sub_F5DBF0(v9);
      v202 = sub_1BB2C30(a1, v201);
      if ( (v202 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      v203 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) || v200 != *(_QWORD *)(v9 + 32) )
        goto LABEL_198;
      v234.m128i_i64[0] = v202;
      v232 = sub_F5DBF0(v9);
      v202 = v234.m128i_i64[0];
      if ( v234.m128i_i64[0] != v232 )
      {
        v203 = *a1;
LABEL_198:
        v8 = sub_A77600(*(_QWORD *)(v203 + 248), v200, v202);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
LABEL_61:
      sub_1EA6140(a2, v8, 4, 4);
      *v65 = a4->m128i_i32[0];
      goto LABEL_62;
    case 0x39:
      v115 = &a4->m128i_i8[4];
      v116 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v117 = sub_1BB10D0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v116 * ((unsigned __int64)&v115[-(v115 != nullptr)] / v116 + (v115 != nullptr)));
      if ( (v117 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(v9 + 32) == v117 )
          goto LABEL_61;
        v8 = sub_A70300(*(_QWORD *)(*a1 + 248), v117, *(_DWORD *)(v9 + 20), (*(_BYTE *)(v9 + 18) >> 3) & 0xF);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_61;
      }
      goto LABEL_95;
    case 0x3A:
      v144 = &a4->m128i_i8[4];
      v145 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v146 = sub_1BB10D0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v145 * ((unsigned __int64)&v144[-(v144 != nullptr)] / v145 + (v144 != nullptr)));
      if ( (v146 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(v9 + 32) == v146 )
          goto LABEL_61;
        v8 = sub_1AEAF90(a1, v146, *(unsigned int *)(v9 + 20), 0, v147);
LABEL_144:
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_61;
      }
      goto LABEL_95;
  }
  return result;
}
