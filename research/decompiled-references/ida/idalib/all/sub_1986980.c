unsigned __int64 __fastcall sub_1986980(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r14
  unsigned __int64 v9; // r15
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
  __int64 v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r10
  _DWORD *v33; // rdx
  _QWORD *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  _DWORD *v46; // rdx
  __int8 *v47; // r15
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rax
  unsigned __int8 v52; // dl
  int v53; // r8d
  __int32 v54; // r9d
  __int32 v55; // edx
  int v56; // eax
  __int64 v57; // rdx
  unsigned int v58; // esi
  __int64 v59; // rdi
  __int8 *v60; // r9
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int32 v65; // eax
  __int8 *v66; // r15
  unsigned int v67; // eax
  __int64 v68; // r15
  __int64 v69; // r15
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  _DWORD *v72; // rdx
  __int64 v73; // r15
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  unsigned int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rbx
  unsigned __int64 v80; // r15
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  __int8 *v83; // r15
  unsigned int v84; // eax
  __int64 v85; // r15
  __int8 *v86; // r15
  unsigned int v87; // eax
  __int64 v88; // rax
  __m128 v89; // xmm0
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // r15
  __int64 v93; // r12
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rdx
  int v99; // eax
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // r15
  unsigned __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  unsigned __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  unsigned __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r9
  __int64 v122; // r8
  unsigned __int64 v123; // rsi
  unsigned __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rdi
  unsigned __int64 v129; // rsi
  char v130; // dl
  __int64 v131; // rdi
  __int64 v132; // rax
  _DWORD *v133; // rdx
  __int64 *v134; // r15
  unsigned int v135; // eax
  __int64 v136; // r15
  _DWORD *v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // r13
  __int64 v141; // rax
  __int64 v142; // rdx
  __int8 *v143; // r15
  unsigned int v144; // eax
  unsigned __int64 v145; // r15
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  _QWORD *v149; // rax
  __int64 v150; // rdx
  __int64 v151; // r14
  __int64 v152; // rsi
  __int64 v153; // rax
  unsigned __int64 v154; // rdx
  __m128 v155; // xmm0
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // r15
  unsigned __int16 *v159; // rbx
  unsigned __int64 v160; // rax
  unsigned __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  unsigned __int64 v165; // r14
  __int64 v166; // rdx
  int v167; // eax
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // r13
  __int64 v171; // rdi
  unsigned int v172; // eax
  __int64 v173; // r13
  __m128 v174; // kr00_16
  unsigned __int16 *v175; // rax
  unsigned __int64 v176; // rax
  unsigned __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rax
  unsigned int v182; // r15d
  unsigned __int8 v183; // al
  _DWORD *v184; // rdx
  unsigned int v185; // ecx
  __int64 v186; // rdx
  unsigned __int64 v187; // rdx
  unsigned __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 *v193; // r13
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 *v196; // r8
  __int64 v197; // r9
  __int64 v198; // rax
  __int64 v199; // rdi
  char v200; // dl
  __int64 v201; // rax
  unsigned __int64 v202; // rax
  __int64 v203; // r8
  __int64 v204; // rdx
  __int32 v205; // eax
  __m128 v206; // xmm0
  __int64 v207; // rbp
  unsigned int v208; // ecx
  __int64 v209; // rdx
  __m128 v210; // xmm3
  __int64 v211; // rax
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 v216; // rsi
  unsigned int v217; // r15d
  __m128i v218; // rax
  __m128 v219; // xmm0
  __int64 v220; // r14
  unsigned int v221; // eax
  _DWORD *v222; // rdx
  unsigned __int64 v223; // r12
  _DWORD *v224; // rdx
  __int64 v225; // r14
  unsigned __int16 *v226; // rsi
  unsigned __int64 v227; // rbx
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r14
  unsigned __int64 v232; // rbx
  unsigned int v233; // eax
  __int64 v234; // rax
  unsigned __int64 v235; // rbx
  __int64 v236; // rdx
  int v237; // eax
  _DWORD *v238; // rdx
  unsigned __int64 v239; // rax
  __int64 v240; // rax
  __m128i v241; // [rsp+0h] [rbp-D8h] BYREF
  __m128 v242; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v243; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v244; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v245; // [rsp+38h] [rbp-A0h]
  __m128 v246; // [rsp+40h] [rbp-98h] BYREF
  __m128 v247; // [rsp+50h] [rbp-88h] BYREF
  void **v248; // [rsp+60h] [rbp-78h]
  void *v249[2]; // [rsp+70h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-58h] BYREF
  __int128 v251; // [rsp+90h] [rbp-48h]

  v8 = a3;
  v9 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)&v11 = (a3 >> 3) & 1;
  v10 = a3;
  *((_QWORD *)&v11 + 1) = a3 & 7;
  v15 = *(_QWORD *)v9;
  if ( v11 != 0 )
  {
LABEL_3:
    v241.m128i_i64[0] = (__int64)a4;
    v242 = _mm_loadh_ps((const double *)v241.m128i_i64);
    v16 = sub_F6C520(v15 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(_QWORD *)v9;
    v18 = v16 * (((unsigned __int64)a4 - (a4 != nullptr)) / v16 + (a4 != nullptr));
    v241.m128i_i64[0] = v18;
    v19 = _mm_loadh_ps((const double *)v241.m128i_i64);
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
          result = sub_18D44E0(a1, v20, v242.m128_i64[0], v242.m128_i64[1], v19);
          if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            return result;
          return 0;
        }
      }
    }
    v241 = (__m128i)v19;
    v20 = sub_1986980(a1, a2, v19.m128_u64[0], v19.m128_u64[1]);
    v21 = v20 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_5;
  }
  switch ( *(_BYTE *)(v15 + 16) )
  {
    case 0:
      v241.m128i_i64[0] = (__int64)a4;
      *(__m128 *)v249 = _mm_loadh_ps((const double *)v241.m128i_i64);
      v100 = sub_17430D0((__int64)v249);
      return sub_1986980(a1, a2, v100, v101);
    case 1:
      v241.m128i_i64[0] = (__int64)a4;
      v171 = *(_QWORD *)(v10 + 32);
      *(__m128 *)v249 = _mm_loadh_ps((const double *)v241.m128i_i64);
      v172 = sub_F6C520(v171);
      v173 = sub_1986980(
               a1,
               a2,
               *((_QWORD *)v249[0] + 4),
               v172 * (((unsigned __int64)a4 - (a4 != nullptr)) / v172 + (a4 != nullptr)));
      v97 = v173 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v173 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v97 = (__int64)v249[0];
        if ( v173 != sub_17430D0((__int64)v249) )
          v97 = sub_A75D20(*(_QWORD **)(*a1 + 248), v173);
        sub_1EA6140(a2, v97, 0, 1);
      }
      return v97;
    case 2:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_198BFB0(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 3:
      v241.m128i_i64[0] = (__int64)a4;
      *(__m128 *)v249 = _mm_loadh_ps((const double *)v241.m128i_i64);
      v168 = sub_BEB530((__int64)v249);
      v170 = sub_1986980(a1, a2, v168, v169);
      v97 = v170 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v170 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v97 = (__int64)v249[0];
        if ( v170 != sub_BEB530((__int64)v249) )
          v97 = sub_A72990(*(_QWORD *)(*a1 + 248), v170);
        sub_1EA6140(a2, v97, 16, 8);
      }
      return v97;
    case 4:
      v241.m128i_i64[0] = (__int64)a4;
      v155 = _mm_loadh_ps((const double *)v241.m128i_i64);
      *(__m128 *)v249 = v155;
      v156 = sub_BEB530((__int64)v249);
      v158 = sub_1986980(a1, a2, v156, v157);
      v97 = v158 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v158 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v97;
      v241.m128i_i64[0] = *a1;
      sub_18C79E0(v241.m128i_i64[0], 4, 4);
      *(_BYTE *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 40) = 1;
      v159 = *((unsigned __int16 **)v249[1] + 1);
      if ( !v159 )
        v159 = *(unsigned __int16 **)(v10 + 40);
      v160 = sub_190CCA0(a1, v159, *(double *)v155.m128_u64, a8);
      if ( v160 == 1 )
        goto LABEL_238;
      if ( v160 )
      {
        v160 = sub_1914520(*a1, v160 & 0xFFFFFFFFFFFFFFFELL, v161, v162, v163, v164, v155, a8);
        if ( v160 == 1 )
          goto LABEL_238;
      }
      v165 = v160 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_QWORD *)(v10 + 32) == v158 && v159 == (unsigned __int16 *)v165 )
      {
        v97 = (__int64)v249[0];
        goto LABEL_157;
      }
      v97 = sub_18BB830(
              a1,
              v158,
              (*(_WORD *)(v10 + 18) >> 6) & 7,
              0,
              v165,
              (*(_BYTE *)(v10 + 18) >> 3) & 7,
              *(_QWORD *)v249[1]);
      if ( (v97 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
LABEL_157:
        sub_1EA6140(a2, v97, 16, 8);
        *(_DWORD *)v166 = *(_DWORD *)v249[1];
        v167 = *((_DWORD *)v249[1] + 1);
        *(_QWORD *)(v166 + 8) = v165;
        *(_DWORD *)(v166 + 4) = v167;
        goto LABEL_158;
      }
LABEL_238:
      v97 = 0;
LABEL_158:
      sub_190D5E0(v241.m128i_i64[0], v155);
      return v97;
    case 5:
      v241.m128i_i64[0] = (__int64)a4;
      *(__m128 *)v249 = _mm_loadh_ps((const double *)v241.m128i_i64);
      v94 = sub_BEB530((__int64)v249);
      v96 = sub_1986980(a1, a2, v94, v95);
      if ( (v96 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v97 = (__int64)v249[0];
      if ( *(_QWORD *)(v10 + 32) != v96 )
      {
        v97 = sub_18BB830(
                a1,
                v96,
                (*(_WORD *)(v10 + 18) >> 6) & 7,
                0,
                0,
                (*(_BYTE *)(v10 + 18) >> 3) & 7,
                *(_QWORD *)v249[1]);
        if ( (v97 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v97, 16, 8);
      *(_DWORD *)v98 = *(_DWORD *)v249[1];
      v99 = *((_DWORD *)v249[1] + 1);
      *(_QWORD *)(v98 + 8) = 0;
      *(_DWORD *)(v98 + 4) = v99;
      return v97;
    case 6:
      v241.m128i_i64[0] = (__int64)a4;
      v89 = _mm_loadh_ps((const double *)v241.m128i_i64);
      *(__m128 *)v249 = v89;
      v90 = sub_BEB530((__int64)v249);
      v92 = sub_1986980(a1, a2, v90, v91);
      if ( (v92 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v225 = *a1;
      sub_18C79E0(*a1, 6, 4);
      v226 = *(unsigned __int16 **)(v10 + 40);
      v227 = sub_190CCA0(a1, v226, *(double *)v89.m128_u64, a8);
      sub_190D5E0(v225, v89);
      if ( v227 == 1 )
        return 0;
      v231 = *a1;
      v232 = v227 & 0xFFFFFFFFFFFFFFFELL;
      v233 = v232 ? sub_C00A40(v232, (__int64)v226, v228, v229, v230) : 0;
      v234 = sub_19B4A30(v231, v232, v233, 0, 0, 0);
      if ( v234 == 1 )
        return 0;
      v235 = v234 & 0xFFFFFFFFFFFFFFFELL;
      if ( v92 == *(_QWORD *)(v10 + 32) && v235 == *(_QWORD *)(v10 + 40) )
      {
        v93 = (__int64)v249[0];
      }
      else
      {
        v93 = sub_18BB830(
                a1,
                v92,
                (*(_WORD *)(v10 + 18) >> 6) & 7,
                0,
                v235,
                (*(_BYTE *)(v10 + 18) >> 3) & 7,
                *(_QWORD *)v249[1]);
        if ( (v93 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v93, 16, 8);
      *(_DWORD *)v236 = *(_DWORD *)v249[1];
      v237 = *((_DWORD *)v249[1] + 1);
      *(_QWORD *)(v236 + 8) = v235;
      *(_DWORD *)(v236 + 4) = v237;
      return v93;
    case 7:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_198C240(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 8:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_198C310(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 9:
    case 0x3B:
      goto LABEL_3;
    case 0xA:
    case 0xE:
    case 0x2D:
    case 0x32:
      goto LABEL_20;
    case 0xB:
      v83 = &a4->m128i_i8[4];
      v84 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v85 = sub_1986980(
              a1,
              a2,
              *(_QWORD *)(v10 + 32),
              v84 * ((unsigned __int64)&v83[-(v83 != nullptr)] / v84 + (v83 != nullptr)));
      if ( (v85 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_F6C520(*(_QWORD *)(v10 + 32));
        if ( v85 == *(_QWORD *)(v10 + 32) )
          goto LABEL_27;
        v8 = sub_1E6FF00(*a1, v85, a4->m128i_u32[0], 0);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_27;
      }
      goto LABEL_32;
    case 0xC:
      v77 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v78 = sub_1986980(
              a1,
              a2,
              *(_QWORD *)(v10 + 32),
              v77 * (((unsigned __int64)a4 - (a4 != nullptr)) / v77 + (a4 != nullptr)));
      v79 = v78;
      if ( (v78 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_32;
      v80 = *(_QWORD *)(v10 + 56);
      if ( v80 )
      {
        v81 = sub_190CCA0(a1, *(unsigned __int16 **)(v10 + 56), *(double *)a7.m128_u64, a8);
        if ( v81 == 1 )
        {
LABEL_32:
          v8 = 0;
          goto LABEL_28;
        }
        v82 = v81 & 0xFFFFFFFFFFFFFFFELL;
        if ( v80 != v82 || v79 != *(_QWORD *)(v10 + 32) )
        {
          v80 = v82;
LABEL_78:
          v8 = sub_1E5F880(
                 *a1,
                 v79,
                 v80,
                 (unsigned __int8)BYTE2(*(_DWORD *)(v10 + 16)) >> 7,
                 HIBYTE(*(_DWORD *)(v10 + 16)) & 1);
        }
      }
      else if ( *(_QWORD *)(v10 + 32) != v78 )
      {
        goto LABEL_78;
      }
      sub_1EA6140(a2, v8, 0, 1);
LABEL_28:
      result = v8;
      break;
    case 0xD:
      return sub_18BCCC0(a2, v10, a4->m128i_i32);
    case 0xF:
      v69 = *a1;
      sub_18C79E0(*a1, 0, 0);
      v70 = sub_190CCA0(a1, *(unsigned __int16 **)(v10 + 24), *(double *)a7.m128_u64, a8);
      if ( v70 == 1
        || (v71 = sub_19A4070(*a1, v70 & 0xFFFFFFFFFFFFFFFELL), v71 == 1)
        || (v71 & 0xFFFFFFFFFFFFFFFELL) != *(_QWORD *)(v10 + 24)
        && (v8 = sub_1E5FBF0(*a1, v71 & 0xFFFFFFFFFFFFFFFELL, 1), (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
        v8 = 0;
      }
      else
      {
        sub_1EA6140(a2, v8, 8, 4);
        *v72 = a4->m128i_i32[0];
        v72[1] = a4->m128i_i32[1];
      }
      sub_190D5E0(v69, a7);
      return v8;
    case 0x10:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_198F1A0(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x11:
      v185 = a4->m128i_i32[0];
      *(_OWORD *)v249 = 0;
      v186 = *(_QWORD *)(v10 + 40);
      *(_OWORD *)ptr = 0;
      v251 = 0;
      v247.m128_u64[0] = sub_18CBF50(a1, (__int64)v249, v186, v185, 0, 0, 0);
      if ( !sub_F22B30(&v247)
        && ((v187 = *(_QWORD *)(v10 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
         || (v187 = sub_19885D0(a1, *(_QWORD *)(v10 + 24)), (v187 & 0xFFFFFFFFFFFFFFF0LL) != 0))
        && (v188 = sub_AB7C40(*(_QWORD **)(*a1 + 248), v247.m128_i64[0], v187, 0),
            v93 = v188,
            (v188 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        sub_1EA6140(a2, v188, 4, 4);
        *v238 = a4->m128i_i32[0];
      }
      else
      {
        v93 = 0;
      }
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
      return v93;
    case 0x12:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_1993590(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x13:
      v241.m128i_i64[0] = *a1;
      sub_18C79E0(v241.m128i_i64[0], 4, 4);
      v175 = (unsigned __int16 *)sub_F57B50(v10);
      v176 = sub_190CCA0(a1, v175, *(double *)a7.m128_u64, a8);
      if ( v176 == 1 )
        goto LABEL_220;
      if ( v176 )
      {
        v181 = sub_1914520(*a1, v176 & 0xFFFFFFFFFFFFFFFELL, v177, v178, v179, v180, a7, a8);
        if ( v181 == 1 )
          goto LABEL_220;
        v242.m128_u64[0] = v181 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v242.m128_u64[0] = 0;
      }
      if ( sub_F57B50(v10) == v242.m128_u64[0]
        || (v182 = a4->m128i_i32[0],
            v183 = sub_F57B40(v10),
            v8 = sub_1E6EEC0(*a1, v183, v242.m128_u64[0], v182),
            (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        sub_1EA6140(a2, v8, 4, 4);
        *v184 = a4->m128i_i32[0];
        goto LABEL_177;
      }
LABEL_220:
      v8 = 0;
LABEL_177:
      sub_190D5E0(v241.m128i_i64[0], a7);
      return v8;
    case 0x14:
      v241.m128i_i64[0] = (__int64)a4;
      v174 = _mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_198F9A0(a1, a2, v174.m128_u64[0], v174.m128_u64[1], 0, a6, v174.m128_u64[0], v174.m128_u64[1]);
    case 0x15:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_19936F0(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x16:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_19907C0(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x17:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_1993810(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x18:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_1993930(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x19:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_1993E80(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x1A:
      v241.m128i_i64[0] = (__int64)a4;
      v249[1] = (void *)0x400000000LL;
      v247.m128_u64[1] = (unsigned __int64)&v246;
      v206 = _mm_loadh_ps((const double *)v241.m128i_i64);
      v249[0] = ptr;
      v241 = (__m128i)v206;
      v246 = v206;
      v247.m128_u64[0] = (unsigned __int64)a1;
      v248 = v249;
      v207 = sub_1985B20(
               a1,
               a2,
               v206.m128_i64[0],
               (_DWORD *)v206.m128_u64[1],
               0,
               *(double *)v206.m128_u64,
               a8,
               a6,
               a1,
               (__int64 *)&v246,
               (__int64)v249);
      if ( v249[0] != ptr )
        free(v249[0]);
      return v207;
    case 0x1B:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_1994000(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x1C:
      return v10;
    case 0x1D:
      v26 = v10;
      v10 = 0;
      v27 = sub_F61460(v26, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v28 = sub_18CBE40((__int64)a1, (__int64)v27);
      if ( !v28 )
        return v10;
      v32 = *(_QWORD *)(v28 + 48);
      if ( v32 )
        v10 = v32 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v10 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v28, *a1, v29, v30, v31);
LABEL_20:
      sub_1EA6140(a2, v10, 4, 4);
      *v33 = a4->m128i_i32[0];
      return v10;
    case 0x1E:
      v143 = &a4->m128i_i8[4];
      v144 = sub_F6C520(*(_QWORD *)(v10 + 24));
      v145 = sub_1986980(
               a1,
               a2,
               *(_QWORD *)(v10 + 24),
               v144 * ((unsigned __int64)&v143[-(v143 != nullptr)] / v144 + (v143 != nullptr)));
      if ( (v145 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_F6C520(*(_QWORD *)(v10 + 24));
        if ( v145 == *(_QWORD *)(v10 + 24) )
          goto LABEL_27;
        v8 = sub_A820D0(*(_QWORD *)(*a1 + 248), v145, *(_QWORD *)(v10 + 32), v146, v147, v148);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_27;
      }
      goto LABEL_32;
    case 0x1F:
      v141 = sub_19885D0(a1, *(_QWORD *)(v10 + 32));
      if ( (v141 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_32;
      if ( v141 != *(_QWORD *)(v10 + 32) )
      {
        v8 = sub_A76DD0(*(_QWORD *)(*a1 + 248), v141, *(_DWORD *)(v10 + 40), *(_DWORD *)(v10 + 44));
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_32;
      }
      sub_1EA6140(a2, v8, 32, 8);
      *(_DWORD *)v142 = a4->m128i_i32[0];
      *(_QWORD *)(v142 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(__m128i *)(v142 + 16) = _mm_loadu_si128(a4 + 1);
      goto LABEL_28;
    case 0x20:
      v102 = sub_19885D0(a1, *(_QWORD *)(v10 + 32));
      result = v102 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v102 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v245 = *a1;
        sub_18C79E0(v245, 4, 4);
        v241.m128i_i64[0] = a4[1].m128i_i64[0];
        if ( !v241.m128i_i64[0] )
          v241.m128i_i64[0] = *(_QWORD *)(v10 + 40);
        v242.m128_u64[0] = a4[1].m128i_u64[1];
        if ( !v242.m128_u64[0] )
          v242.m128_u64[0] = *(_QWORD *)(v10 + 48);
        v103 = sub_190CCA0(a1, (unsigned __int16 *)v241.m128i_i64[0], *(double *)a7.m128_u64, a8);
        v107 = v103;
        if ( v103 == 1
          || v103 && (v107 = sub_1914520(*a1, v103 & 0xFFFFFFFFFFFFFFFELL, v103, v104, v105, v106, a7, a8), v107 == 1)
          || (v243 = v107,
              v108 = sub_190CCA0(a1, (unsigned __int16 *)v242.m128_u64[0], *(double *)a7.m128_u64, a8),
              v108 == 1)
          || (v112 = v243, v108)
          && (v108 = sub_1914520(*a1, v108 & 0xFFFFFFFFFFFFFFFELL, v243, v109, v110, v111, a7, a8),
              v112 = v243,
              v108 == 1)
          || ((v113 = v108 & 0xFFFFFFFFFFFFFFFELL,
               v244 = v113,
               v243 = v112 & 0xFFFFFFFFFFFFFFFELL,
               v102 != *(_QWORD *)(v10 + 32))
           || v241.m128i_i64[0] != (v112 & 0xFFFFFFFFFFFFFFFELL)
           || v242.m128_u64[0] != v113)
          && (v8 = sub_1E71AF0(*a1, v102, v243, v244, *(unsigned int *)(v10 + 56)), (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v116 = 0;
        }
        else
        {
          v241 = (__m128i)_mm_loadh_ps((const double *)&v244);
          sub_1EA6140(a2, v8, 32, 8);
          a7 = (__m128)_mm_load_si128(&v241);
          *(_DWORD *)v114 = a4->m128i_i32[0];
          v115 = *(__int64 *)((char *)a4->m128i_i64 + 4);
          *(__m128 *)(v114 + 16) = a7;
          *(_QWORD *)(v114 + 4) = v115;
          v116 = v8;
        }
        v241.m128i_i64[0] = v116;
        sub_190D5E0(v245, a7);
        return v241.m128i_i64[0];
      }
      return result;
    case 0x21:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_1994100(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x22:
      v66 = &a4->m128i_i8[4];
      v67 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v68 = sub_1986980(
              a1,
              a2,
              *(_QWORD *)(v10 + 32),
              v67 * ((unsigned __int64)&v66[-(v66 != nullptr)] / v67 + (v66 != nullptr)));
      if ( (v68 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_F6C520(*(_QWORD *)(v10 + 32));
        if ( v68 == *(_QWORD *)(v10 + 32) )
          goto LABEL_27;
        v8 = sub_A74EC0(*(_QWORD *)(*a1 + 248), v68);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_27;
      }
      goto LABEL_32;
    case 0x23:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_1994340(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x24:
      sub_1EA6360(a2, v10, a4);
      return v10;
    case 0x25:
      v51 = sub_18CBE40((__int64)a1, *(_QWORD *)(v10 + 40));
      if ( !v51 )
        goto LABEL_32;
      v52 = *(_BYTE *)(v10 + 32) & 0x3F;
      if ( v51 != *(_QWORD *)(v10 + 40) )
      {
        if ( v52 )
        {
          v53 = v52;
          v54 = a4->m128i_i32[2];
          v55 = a4->m128i_i32[1];
        }
        else
        {
          v54 = 0;
          v53 = 0;
          v55 = 0;
        }
        v8 = sub_1A891C0(*(_QWORD *)(*a1 + 736), v51, v55, (int)v10 + 48, v53, v54, (int)a4 + 12, v53, 1);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_32;
      }
      v56 = *(_BYTE *)(v8 + 32) & 0x3F;
      if ( (*(_BYTE *)(v8 + 32) & 0x3F) != 0 )
        v56 = 4 * v56 + 8;
      sub_1EA6140(a2, v8, 4 * ((unsigned int)(v56 + 3) >> 2) + 4, 4);
      if ( (*(_BYTE *)(v10 + 32) & 0x3F) != 0 )
      {
        *(_DWORD *)(v57 + 4) = a4->m128i_i32[1];
        v58 = *(_BYTE *)(v10 + 32) & 0x3F;
        if ( (*(_BYTE *)(v10 + 32) & 0x3F) == 0 )
          goto LABEL_242;
        v59 = v57 + 12;
        v60 = &a4->m128i_i8[12];
        if ( ((unsigned __int64)&a4->m128i_u64[1] + 4 >= v57 + 28
           || v57 + 12 >= (unsigned __int64)&a4[1].m128i_u64[1] + 4)
          && v58 - 1 > 2 )
        {
          v61 = 12;
          do
          {
            *(__m128i *)(v57 + v61) = _mm_loadu_si128((__m128i *)((char *)a4 + v61));
            v61 += 16;
          }
          while ( v61 != 16LL * (v58 >> 2) + 12 );
          v62 = v58 & 0xFC;
          if ( (v58 & 0xFFFFFFFC) != v58 )
          {
            *(_DWORD *)(v59 + 4LL * ((unsigned __int8)v58 & 0xFC)) = *(_DWORD *)&v60[4 * (v58 & 0xFC)];
            v63 = (unsigned int)(v62 + 1);
            if ( v58 != (_DWORD)v63 )
            {
              v64 = (unsigned int)(v62 + 2);
              *(_DWORD *)(v59 + 4 * v63) = *(_DWORD *)&v60[4 * v63];
              if ( v58 != (_DWORD)v64 )
                *(_DWORD *)(v59 + 4 * v64) = *(_DWORD *)&v60[4 * v64];
            }
          }
        }
        else
        {
          v240 = 0;
          do
          {
            *(_DWORD *)(v57 + 4 * v240 + 12) = a4->m128i_i32[v240 + 3];
            ++v240;
          }
          while ( v58 != (_DWORD)v240 );
        }
        if ( (*(_BYTE *)(v10 + 32) & 0x3F) != 0 )
          v65 = a4->m128i_i32[2];
        else
LABEL_242:
          v65 = 0;
        *(_DWORD *)(v57 + 8) = v65;
      }
      goto LABEL_28;
    case 0x26:
      v241.m128i_i64[0] = (__int64)a4;
      v247 = _mm_loadh_ps((const double *)v241.m128i_i64);
      v138 = sub_1743190((__int64)&v247);
      v140 = sub_1986980(a1, a2, v138, v139);
      if ( (v140 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v97 = v247.m128_u64[0];
      if ( v140 != sub_1743190((__int64)&v247) )
      {
        v217 = *(_DWORD *)(v247.m128_u64[0] + 20);
        v242.m128_i32[0] = *(_DWORD *)v247.m128_u64[1];
        v218.m128i_i64[0] = sub_1743190((__int64)&v247);
        v241 = v218;
        v219 = (__m128)_mm_load_si128(&v241);
        *(__m128 *)v249 = v219;
        v220 = (unsigned int)sub_F6CE20((__int64 *)v249);
        v221 = sub_F6CCB0((__int64 *)v249, v219);
        v97 = sub_1E503F0(*a1, v140, (v220 << 32) | v221, v242.m128_u32[0], v217);
        if ( (v97 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v97, 4, 4);
      *v222 = *(_DWORD *)v247.m128_u64[1];
      return v97;
    case 0x27:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_1988610(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x28:
      v134 = &a4->m128i_i64[1];
      v135 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v136 = sub_1986980(
               a1,
               a2,
               *(_QWORD *)(v10 + 32),
               v135 * (((unsigned __int64)v134 - (v134 != nullptr)) / v135 + (v134 != nullptr)));
      if ( (v136 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_32;
      sub_F6C520(*(_QWORD *)(v10 + 32));
      if ( *(_QWORD *)(v10 + 32) != v136 )
      {
        v8 = sub_1E5EFE0(*a1, v136);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_32;
      }
      sub_1EA6140(a2, v8, 8, 4);
      *v137 = a4->m128i_i32[0];
      v137[1] = a4->m128i_i32[1];
      goto LABEL_28;
    case 0x29:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_1994A70(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x2A:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_1994B70(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x2B:
    case 0x2C:
      v241.m128i_i64[0] = (__int64)a4;
      v241 = (__m128i)_mm_loadh_ps((const double *)v241.m128i_i64);
      return sub_1994CA0(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1]);
    case 0x2E:
      v151 = sub_18CBE40((__int64)a1, *(_QWORD *)(v10 + 32));
      if ( (*(_BYTE *)(v10 + 18) & 8) != 0 )
        v152 = *(_QWORD *)(v10 + 48);
      else
        v152 = *(_QWORD *)(v10 + 8);
      v153 = sub_19885D0(a1, v152);
      v154 = v153 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v153 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v223 = sub_A77C90(
                 *(_QWORD *)(*a1 + 248),
                 v153,
                 v151,
                 *(_WORD *)(v10 + 20) & 0x7FFF,
                 *(_WORD *)(v10 + 22) & 0x7FFF,
                 *(_BYTE *)(v10 + 21) >> 7);
        sub_1EA6140(a2, v223, 4, 4);
        *v224 = a4->m128i_i32[0];
        return v223;
      }
      return v154;
    case 0x2F:
    case 0x30:
      v34 = sub_F60F10(v10, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v39 = (_QWORD *)sub_18CBE40((__int64)a1, (__int64)v34);
      if ( !v39 )
        goto LABEL_32;
      if ( v39 == sub_F60F10(v10, (__int64)v34, v35, v36, v37, v38) )
        goto LABEL_27;
      v44 = v39[6];
      if ( v44 )
        goto LABEL_25;
      v8 = sub_A7AA70(*(_QWORD *)(*a1 + 248), (__int64)v39, v40, v41, v42, v43);
      v45 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_26;
    case 0x31:
      v97 = 0;
      v241.m128i_i64[0] = (__int64)a4;
      v208 = a4->m128i_i32[0];
      *(_OWORD *)v249 = 0;
      v209 = *(_QWORD *)(v10 + 32);
      *(_OWORD *)ptr = 0;
      v210 = _mm_loadh_ps((const double *)v241.m128i_i64);
      v251 = 0;
      v241 = (__m128i)v210;
      v247.m128_u64[0] = sub_18CBF50(a1, (__int64)v249, v209, v208, 0, 0, 0);
      if ( !sub_F22B30(&v247) )
        v97 = sub_198E440(a1, a2, v241.m128i_i64[0], v241.m128i_i64[1], v247.m128_u64[0]);
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
      return v97;
    case 0x33:
      v117 = *(unsigned int *)(*a1 + 4624);
      v241.m128i_i64[0] = *a1;
      sub_18C74E0(v241.m128i_i64[0], 0, *(_QWORD *)(*(_QWORD *)(v241.m128i_i64[0] + 4616) + 640 * v117 - 520), 4);
      v118 = sub_190CCA0(a1, *(unsigned __int16 **)(v10 + 24), *(double *)a7.m128_u64, a8);
      v122 = v241.m128i_i64[0];
      if ( v118 == 1 )
        goto LABEL_218;
      v123 = v118 & 0xFFFFFFFFFFFFFFFELL;
      v124 = sub_1934300(
               *a1,
               (_QWORD *)(v118 & 0xFFFFFFFFFFFFFFFELL),
               v119,
               v120,
               v241.m128i_i64[0],
               v121,
               (__m128i)a7,
               a8);
      v122 = v241.m128i_i64[0];
      v126 = v124;
      if ( v124 == 1 )
        goto LABEL_218;
      v127 = *(_QWORD *)v9;
      if ( *(_BYTE *)(*(_QWORD *)v9 + 16LL) != 51 )
      {
        v128 = *(_QWORD *)v9;
        v242.m128_u64[0] = v241.m128i_i64[0];
        v241.m128i_i64[0] = v126;
        v127 = sub_F63050(v128, v123, v126, v125);
        v122 = v242.m128_u64[0];
        v126 = v241.m128i_i64[0];
      }
      v129 = v126 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v126 & 0xFFFFFFFFFFFFFFFELL) != *(_QWORD *)(v10 + 24)
        && (v130 = *(_BYTE *)(v127 + 18),
            v131 = *a1,
            v241.m128i_i64[0] = v122,
            v132 = sub_1E631F0(v131, v129, (v130 & 8) != 0),
            v122 = v241.m128i_i64[0],
            v8 = v132,
            (v132 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
LABEL_218:
        v8 = 0;
      }
      else
      {
        v241.m128i_i64[0] = v122;
        sub_1EA6140(a2, v8, 12, 4);
        v122 = v241.m128i_i64[0];
        *v133 = a4->m128i_i32[0];
        v133[1] = a4->m128i_i32[1];
        v133[2] = a4->m128i_i32[2];
      }
      sub_190D5E0(v122, a7);
      return v8;
    case 0x34:
      v193 = (__int64 *)a4[1].m128i_i64[0];
      v196 = (__int64 *)sub_1988430(a1, v193);
      if ( !v196 )
        goto LABEL_32;
      v198 = *(_QWORD *)v9;
      if ( *(_BYTE *)(*(_QWORD *)v9 + 16LL) != 52 )
      {
        v199 = *(_QWORD *)v9;
        v241.m128i_i64[0] = (__int64)v196;
        v198 = sub_F63050(v199, v193, v194, v195);
        v196 = (__int64 *)v241.m128i_i64[0];
      }
      if ( v193 != v196 )
      {
        v200 = *(_BYTE *)(v198 + 18);
        v201 = *a1;
        v241.m128i_i64[0] = (__int64)v196;
        v202 = sub_A81D80(*(_QWORD *)(v201 + 248), *v196, (v200 & 8) != 0, v195, (__int64)v196, v197);
        v196 = (__int64 *)v241.m128i_i64[0];
        v8 = v202;
        if ( (v202 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_32;
      }
      v241.m128i_i64[0] = (__int64)v196;
      sub_1EA6140(a2, v8, 24, 8);
      v203 = v241.m128i_i64[0];
      *(_DWORD *)v204 = a4->m128i_i32[0];
      *(_DWORD *)(v204 + 4) = a4->m128i_i32[1];
      v205 = a4->m128i_i32[2];
      *(_QWORD *)(v204 + 16) = v203;
      *(_DWORD *)(v204 + 8) = v205;
      goto LABEL_28;
    case 0x35:
      v211 = sub_18CBE40((__int64)a1, *(_QWORD *)(v10 + 32));
      v216 = v211;
      if ( !v211 )
        goto LABEL_32;
      if ( v211 == *(_QWORD *)(v10 + 32) )
        goto LABEL_27;
      v44 = *(_QWORD *)(v211 + 48);
      if ( v44 )
      {
LABEL_25:
        v45 = v44 & 0xFFFFFFFFFFFFFFF0LL;
        v8 = v45;
      }
      else
      {
        v8 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v216, v212, v213, v214, v215);
        v45 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      }
LABEL_26:
      if ( !v45 )
        goto LABEL_32;
LABEL_27:
      sub_1EA6140(a2, v8, 4, 4);
      *v46 = a4->m128i_i32[0];
      goto LABEL_28;
    case 0x36:
      if ( (*(_BYTE *)(v15 + 17) & 4) != 0 )
      {
        v149 = (_QWORD *)sub_1988430(a1, a4[1].m128i_i64[0]);
        if ( !v149 )
          goto LABEL_32;
        v8 = sub_1E70DB0(*a1, *v149, *(unsigned int *)(v10 + 48), a4->m128i_u32[0]);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_32;
      }
      sub_1EA6140(a2, v8, 24, 8);
      *(_DWORD *)v150 = a4->m128i_i32[0];
      *(_QWORD *)(v150 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(_QWORD *)(v150 + 16) = a4[1].m128i_i64[0];
      goto LABEL_28;
    case 0x37:
      v189 = sub_18CBE40((__int64)a1, *(_QWORD *)(v10 + 24));
      if ( v189 )
      {
        if ( v189 == *(_QWORD *)(v10 + 24) )
          goto LABEL_27;
        v8 = sub_18F73B0(a1, a4->m128i_i32[0], v189, v190, v191, v192, (__m128i)a7, *(double *)a8.m128_u64);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_27;
      }
      goto LABEL_32;
    case 0x38:
      v73 = sub_18CBE40((__int64)a1, *(_QWORD *)(v10 + 32));
      if ( v73 )
      {
        v74 = sub_F5DBF0(v10);
        v75 = sub_19885D0(a1, v74);
        v76 = v75;
        if ( (v75 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          if ( v73 == *(_QWORD *)(v10 + 32) )
          {
            v241.m128i_i64[0] = v75;
            v239 = sub_F5DBF0(v10);
            v76 = v241.m128i_i64[0];
            if ( v241.m128i_i64[0] == v239 )
              goto LABEL_27;
          }
          v8 = sub_A77600(*(_QWORD *)(*a1 + 248), v73, v76);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            goto LABEL_27;
        }
      }
      goto LABEL_32;
    case 0x39:
      v86 = &a4->m128i_i8[4];
      v87 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v88 = sub_1986980(
              a1,
              a2,
              *(_QWORD *)(v10 + 32),
              v87 * ((unsigned __int64)&v86[-(v86 != nullptr)] / v87 + (v86 != nullptr)));
      if ( (v88 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( *(_QWORD *)(v10 + 32) == v88 )
          goto LABEL_27;
        v8 = sub_A70300(*(_QWORD *)(*a1 + 248), v88, *(_DWORD *)(v10 + 20), (*(_BYTE *)(v10 + 18) >> 3) & 0xF);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_27;
      }
      goto LABEL_32;
    case 0x3A:
      v47 = &a4->m128i_i8[4];
      v48 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v49 = sub_1986980(
              a1,
              a2,
              *(_QWORD *)(v10 + 32),
              v48 * ((unsigned __int64)&v47[-(v47 != nullptr)] / v48 + (v47 != nullptr)));
      if ( (v49 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_32;
      if ( *(_QWORD *)(v10 + 32) != v49 )
      {
        v8 = sub_18BD3A0(a1, v49, *(unsigned int *)(v10 + 20), 0, v50);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_32;
      }
      goto LABEL_27;
  }
  return result;
}
