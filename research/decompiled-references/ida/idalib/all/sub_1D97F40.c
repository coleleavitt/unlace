unsigned __int64 __fastcall sub_1D97F40(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 *v8; // r15
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  __int128 v12; // rax
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rsi
  unsigned __int64 v18; // r12
  __m128 v19; // xmm0
  __int64 v20; // r13
  unsigned __int64 v21; // r14
  unsigned __int64 result; // rax
  __int64 v23; // rax
  _DWORD *v24; // rdx
  _DWORD *v25; // rdx
  _DWORD *v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  _DWORD *v29; // rdx
  __int32 v30; // eax
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned int v33; // r9d
  unsigned int v34; // edx
  int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // ecx
  __int8 *v38; // rdi
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rsi
  __int64 v42; // rax
  __int32 v43; // eax
  __int8 *v44; // r15
  unsigned int v45; // eax
  __int64 v46; // r15
  __int64 v47; // rax
  _DWORD *v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // r15
  __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rsi
  __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdi
  unsigned __int64 v64; // rcx
  _DWORD *v65; // rdx
  _QWORD *v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  _QWORD *v71; // r15
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  __int64 v74; // r13
  __int64 v75; // rsi
  __int64 v76; // rax
  unsigned __int64 v77; // rdx
  __int64 v78; // r15
  unsigned __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  __m128 v82; // xmm0
  __int64 v83; // rax
  void *v84; // rdi
  __int64 v85; // rdi
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r12
  _DWORD *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rdx
  _QWORD *v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 *v101; // r12
  __int64 v102; // rax
  __int64 v103; // rdx
  __int32 v104; // eax
  unsigned int v105; // ecx
  __int64 v106; // rdx
  __m128 v107; // xmm2
  __int64 *v108; // r15
  unsigned int v109; // eax
  __int64 v110; // r15
  __int64 v111; // rdi
  _DWORD *v112; // rdx
  const __m128i *v113; // r15
  unsigned int v114; // eax
  __int64 v115; // rax
  __int64 v116; // rdx
  __int32 v117; // eax
  const __m128i *v118; // r14
  unsigned int v119; // eax
  __int64 v120; // r14
  __int64 v121; // rax
  unsigned int v122; // eax
  __int64 v123; // r14
  __int64 v124; // rax
  unsigned int v125; // eax
  __m128 v126; // kr00_16
  unsigned __int16 *v127; // rax
  __int64 v128; // rdx
  unsigned __int64 v129; // rcx
  __int64 v130; // r8
  unsigned __int64 v131; // rax
  unsigned __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rax
  unsigned __int32 v137; // r15d
  unsigned __int8 v138; // al
  _DWORD *v139; // rdx
  unsigned int v140; // ecx
  __int64 v141; // rdx
  unsigned __int64 v142; // rdx
  unsigned __int64 v143; // rax
  __int64 v144; // r15
  __int64 v145; // rdx
  unsigned __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  unsigned __int64 v153; // rax
  unsigned __int64 v154; // rax
  _DWORD *v155; // rdx
  __int8 *v156; // r15
  unsigned int v157; // eax
  __int64 v158; // rax
  unsigned int v159; // eax
  __int64 v160; // rdx
  unsigned __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r15
  __int64 v164; // r14
  __int64 v165; // rax
  unsigned __int64 v166; // rdx
  __int64 v167; // rdx
  __int64 v168; // rdi
  unsigned int v169; // r15d
  __int64 v170; // rsi
  __int64 v171; // rcx
  int v172; // r13d
  unsigned int v173; // r13d
  unsigned __int32 v174; // eax
  unsigned __int64 v175; // rdx
  __int64 v176; // rax
  _QWORD *v177; // rax
  __int64 v178; // rdx
  __int64 v179; // r15
  _QWORD *v180; // r13
  _QWORD *v181; // rdi
  char v182; // al
  _QWORD *v183; // rax
  __int64 v184; // rax
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r9
  unsigned __int64 v190; // r8
  int v191; // eax
  int v192; // r15d
  __int64 v193; // rax
  _QWORD *v194; // rax
  __int64 v195; // rbp
  __int64 v196; // rax
  unsigned __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  unsigned __int64 v202; // rbp
  _DWORD *v203; // rdx
  __int64 v204; // r8
  unsigned __int16 *v205; // rcx
  __int64 v206; // rdx
  unsigned __int64 v207; // rax
  unsigned __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 v212; // r8
  __int64 v213; // r15
  __int64 v214; // rdx
  unsigned __int16 *v215; // rsi
  unsigned __int64 v216; // rax
  unsigned __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 v221; // rax
  __int64 v222; // rdi
  unsigned __int64 v223; // r15
  __int64 v224; // rdx
  __int64 v225; // rax
  __int64 v226; // r8
  unsigned __int64 v227; // r8
  __int64 v228; // rax
  __int64 v229; // rcx
  int v230; // r15d
  __int64 v231; // rsi
  _QWORD *v232; // rax
  _DWORD *v233; // rdx
  __int64 v234; // rbp
  __int64 v235; // rax
  unsigned __int64 v236; // rax
  __int64 v237; // rax
  __m128i v238; // [rsp+0h] [rbp-E8h] BYREF
  __m128 n; // [rsp+10h] [rbp-D8h]
  __int64 v240; // [rsp+28h] [rbp-C0h]
  __int64 v241; // [rsp+30h] [rbp-B8h]
  __int64 v242; // [rsp+38h] [rbp-B0h]
  __m128 v243; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v244[4]; // [rsp+50h] [rbp-98h] BYREF
  __m128i ptr[2]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v246; // [rsp+90h] [rbp-58h]
  int v247; // [rsp+A8h] [rbp-40h]
  char v248; // [rsp+ACh] [rbp-3Ch]

  v8 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  *(_QWORD *)&v12 = (a3 >> 3) & 1;
  v10 = a3;
  v11 = a3;
  *((_QWORD *)&v12 + 1) = a3 & 7;
  v15 = *v8;
  if ( v12 != 0 )
  {
LABEL_3:
    v238.m128i_i64[0] = (__int64)a4;
    n = _mm_loadh_ps((const double *)v238.m128i_i64);
    v16 = sub_F6C520(v15 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *v8;
    v18 = v16 * (((unsigned __int64)a4 - (a4 != nullptr)) / v16 + (a4 != nullptr));
    v238.m128i_i64[0] = v18;
    v19 = _mm_loadh_ps((const double *)v238.m128i_i64);
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
          result = sub_1D89660(a1, v20, n.m128_i64[0], n.m128_i64[1], v19);
          if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            return result;
          return 0;
        }
      }
    }
    v238 = (__m128i)v19;
    v20 = sub_1D97F40(a1, a2, v19.m128_u64[0], v19.m128_u64[1]);
    v21 = v20 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_5;
  }
  switch ( *(_BYTE *)(v15 + 16) )
  {
    case 0:
      v125 = sub_F6C520(*(_QWORD *)(v11 + 32));
      return sub_1D97F40(
               a1,
               a2,
               *(_QWORD *)(v11 + 32),
               v125 * (((unsigned __int64)a4 - (a4 != nullptr)) / v125 + (a4 != nullptr)));
    case 1:
      v122 = sub_F6C520(*(_QWORD *)(v11 + 32));
      v123 = sub_1D97F40(
               a1,
               a2,
               *(_QWORD *)(v11 + 32),
               v122 * (((unsigned __int64)a4 - (a4 != nullptr)) / v122 + (a4 != nullptr)));
      v10 = v123 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v123 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v10;
      v124 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_146;
      v10 = v11;
      sub_F6C520(*(_QWORD *)(v11 + 32));
      if ( *(_QWORD *)(v11 + 32) != v123 )
      {
        v124 = *a1;
LABEL_146:
        v10 = sub_A75D20(*(_QWORD **)(v124 + 248), v123);
      }
      goto LABEL_147;
    case 2:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1D9EE60(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 3:
      v118 = a4 + 1;
      v119 = sub_F6C520(*(_QWORD *)(v11 + 32));
      v120 = sub_1D97F40(
               a1,
               a2,
               *(_QWORD *)(v11 + 32),
               v119 * (((unsigned __int64)v118 - (v118 != nullptr)) / v119 + (v118 != nullptr)));
      v10 = v120 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v120 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v10;
      v121 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_139;
      v10 = v11;
      sub_F6C520(*(_QWORD *)(v11 + 32));
      if ( v120 != *(_QWORD *)(v11 + 32) )
      {
        v121 = *a1;
LABEL_139:
        v10 = sub_A72990(*(_QWORD *)(v121 + 248), v120);
      }
      sub_1EA6140(a2, v10, 16, 8);
      return v10;
    case 4:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA76C0(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 5:
      v113 = a4 + 1;
      v114 = sub_F6C520(*(_QWORD *)(v11 + 32));
      v115 = sub_1D97F40(
               a1,
               a2,
               *(_QWORD *)(v11 + 32),
               v114 * (((unsigned __int64)v113 - (v113 != nullptr)) / v114 + (v113 != nullptr)));
      if ( (v115 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(v11 + 32) != v115 )
      {
        v10 = sub_1D81B40(
                a1,
                v115,
                (*(_WORD *)(v11 + 18) >> 6) & 7,
                0,
                0,
                (*(_BYTE *)(v11 + 18) >> 3) & 7,
                a4->m128i_i64[0]);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v10, 16, 8);
      *(_DWORD *)v116 = a4->m128i_i32[0];
      v117 = a4->m128i_i32[1];
      *(_QWORD *)(v116 + 8) = 0;
      *(_DWORD *)(v116 + 4) = v117;
      return v10;
    case 6:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA7850(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 7:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA79E0(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 8:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA7AC0(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 9:
    case 0x3B:
      goto LABEL_3;
    case 0xA:
      if ( !*(_DWORD *)(*a1 + 12632) )
        goto LABEL_55;
      v167 = *(unsigned __int8 *)(v11 + 32);
      v168 = *(_QWORD *)(*a1 + 248);
      v169 = a4->m128i_i32[0];
      v170 = *(_QWORD *)(v168 + 18720);
      v171 = *(_BYTE *)(v11 + 32) & 1;
      v172 = *(_DWORD *)(v11 + 32) >> 1;
      v238.m128i_i32[0] = *(_BYTE *)(v11 + 32) & 1;
      v173 = v172 & 0xFFFFFF;
      v174 = sub_AAC1F0(v168, v170, v167, v171, a5);
      ptr[0].m128i_i32[2] = v174;
      if ( v174 > 0x40 )
      {
        sub_2205470(ptr, v173, 1);
      }
      else
      {
        v175 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v174;
        if ( !v174 )
          LODWORD(v175) = 0;
        ptr[0].m128i_i64[0] = (unsigned int)v175 & v173;
      }
      v176 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)ptr, *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v169);
      v10 = sub_1E6EEC0(*a1, v238.m128i_u32[0], v176, v169);
      if ( ptr[0].m128i_i32[2] > 0x40u && ptr[0].m128i_i64[0] )
        operator delete[]((void *)ptr[0].m128i_i64[0]);
      goto LABEL_177;
    case 0xB:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA7EF0(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0xC:
      v159 = sub_F6C520(*(_QWORD *)(v11 + 32));
      v163 = sub_1D97F40(
               a1,
               a2,
               *(_QWORD *)(v11 + 32),
               v159 * (((unsigned __int64)a4 - (a4 != nullptr)) / v159 + (a4 != nullptr)));
      if ( (v163 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v164 = *(_QWORD *)(v11 + 56);
      if ( v164 )
      {
        v165 = sub_1D8B300(a1, *(unsigned __int16 **)(v11 + 56), a7, a8, v160, v161, v162);
        if ( v165 == 1 )
          return 0;
        v166 = v165 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v166 = 0;
      }
      if ( *(_DWORD *)(*a1 + 12632) || v164 != v166 || v163 != *(_QWORD *)(v11 + 32) )
        v10 = sub_1E5F880(
                *a1,
                v163,
                v166,
                (unsigned __int8)BYTE2(*(_DWORD *)(v11 + 16)) >> 7,
                HIBYTE(*(_DWORD *)(v11 + 16)) & 1);
LABEL_147:
      sub_1EA6140(a2, v10, 0, 1);
      return v10;
    case 0xD:
      v27 = (*(_WORD *)(v11 + 18) >> 3) & 0x1FF;
      if ( (unsigned int)(v27 - 443) <= 4 || (unsigned int)(v27 - 451) <= 0x24 || v27 == 438 || (v28 = 8, v27 == 449) )
        v28 = 12;
      sub_1EA6140(a2, v11, v28, 4);
      v30 = a4->m128i_i32[0];
      *v29 = a4->m128i_i32[0];
      v29[1] = v30;
      if ( (((*(_WORD *)(v11 + 18) >> 3) + 74) & 0x1FFu) <= 0x31
        && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v11 + 18) >> 3) + 74)) & 1) != 0 )
      {
        v29[2] = a4->m128i_i32[2];
      }
      goto LABEL_25;
    case 0xE:
    case 0x2D:
    case 0x32:
      sub_1EA6140(a2, v11, 4, 4);
      *v26 = a4->m128i_i32[0];
      return v11;
    case 0xF:
      v144 = *a1;
      sub_18C74E0(*a1, 0, 0, 0);
      v148 = sub_1D8B300(a1, *(unsigned __int16 **)(v11 + 24), a7, a8, v145, v146, v147);
      if ( v148 == 1
        || (v153 = sub_19A4070(*a1, (_QWORD *)(v148 & 0xFFFFFFFFFFFFFFFELL), v149, v150, v151, v152, a7, a8), v153 == 1)
        || ((v154 = v153 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632)) || v154 != *(_QWORD *)(v11 + 24))
        && (v10 = sub_1E5FBF0(*a1, v154, 1), (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
        v10 = 0;
      }
      else
      {
        sub_1EA6140(a2, v10, 8, 4);
        *v155 = a4->m128i_i32[0];
        v155[1] = a4->m128i_i32[1];
      }
      sub_190D5E0(v144, a7);
      return v10;
    case 0x10:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA5A50(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x11:
      v140 = a4->m128i_i32[0];
      memset(ptr, 0, sizeof(ptr));
      v141 = *(_QWORD *)(v11 + 40);
      v246 = 0;
      v244[0] = sub_1D86690((__int64 **)a1, ptr, v141, v140, 0, 0, 0.0, *(double *)a8.m128_u64, 0);
      if ( !sub_F22B30(v244)
        && ((v142 = *(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
         || (v142 = sub_1D99B80(a1, *(_QWORD *)(v11 + 24)), (v142 & 0xFFFFFFFFFFFFFFF0LL) != 0))
        && (v143 = sub_AB7C40(*(_QWORD **)(*a1 + 248), v244[0], v142, 0), v11 = v143, (v143 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        sub_1EA6140(a2, v143, 4, 4);
        *v233 = a4->m128i_i32[0];
      }
      else
      {
        v11 = 0;
      }
      goto LABEL_119;
    case 0x12:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA7FC0(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x13:
      v238.m128i_i64[0] = *a1;
      sub_18C74E0(v238.m128i_i64[0], 4, 0, 4);
      v127 = (unsigned __int16 *)sub_F57B50(v11);
      v131 = sub_1D8B300(a1, v127, a7, a8, v128, v129, v130);
      v136 = sub_19146D0(*a1, v131, v132, v133, v134, v135, a7, a8);
      if ( v136 == 1 )
        goto LABEL_226;
      n.m128_u64[0] = v136 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632) || n.m128_u64[0] != sub_F57B50(v11) )
      {
        v137 = a4->m128i_i32[0];
        v138 = sub_F57B40(v11);
        v10 = sub_1E6EEC0(*a1, v138, n.m128_u64[0], v137);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_226;
      }
      sub_1EA6140(a2, v10, 4, 4);
      *v139 = a4->m128i_i32[0];
      goto LABEL_68;
    case 0x14:
      v238.m128i_i64[0] = (__int64)a4;
      v126 = _mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA45E0(a1, a2, v126.m128_u64[0], v126.m128_u64[1], 0, a6, v126.m128_u64[0], v126.m128_u64[1]);
    case 0x15:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA8100(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x16:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA63D0(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x17:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA8220(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x18:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA8340(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x19:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA8910(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x1A:
      v238.m128i_i64[0] = (__int64)a4;
      ptr[0].m128i_i64[1] = 0x400000000LL;
      v244[1] = (__int64)&v243;
      v82 = _mm_loadh_ps((const double *)v238.m128i_i64);
      ptr[0].m128i_i64[0] = (__int64)ptr[1].m128i_i64;
      v238 = (__m128i)v82;
      v243 = v82;
      v244[0] = (__int64)a1;
      v244[2] = (__int64)ptr;
      v83 = sub_1D96BF0(
              a1,
              a2,
              v82.m128_i64[0],
              (_DWORD *)v82.m128_u64[1],
              0,
              *(double *)v82.m128_u64,
              a8,
              a6,
              a1,
              (__int64 *)&v243,
              (__int64)ptr);
      v84 = (void *)ptr[0].m128i_i64[0];
      v11 = v83;
      if ( (__m128i *)ptr[0].m128i_i64[0] != &ptr[1] )
        goto LABEL_93;
      goto LABEL_25;
    case 0x1B:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA8A80(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x1C:
      goto LABEL_25;
    case 0x1D:
      v85 = v11;
      v11 = 0;
      v86 = sub_F61460(v85, a2, *((__int64 *)&v12 + 1), (__int64)a4, a5, a6);
      v87 = sub_1D86580((__int64)a1, (__int64)v86);
      if ( !v87 )
        goto LABEL_25;
      v91 = *(_QWORD *)(v87 + 48);
      if ( v91 )
      {
        v11 = v91 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_98;
      }
      v197 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v87, *a1, v88, v89, v90);
      goto LABEL_220;
    case 0x1E:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA8B90(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x1F:
      v93 = sub_1D99B80(a1, *(_QWORD *)(v11 + 32));
      if ( (v93 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(v11 + 32) != v93 )
      {
        v10 = sub_A76DD0(*(_QWORD *)(*a1 + 248), v93, *(_DWORD *)(v11 + 40), *(_DWORD *)(v11 + 44));
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v10, 32, 8);
      *(_DWORD *)v94 = a4->m128i_i32[0];
      *(_QWORD *)(v94 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(__m128i *)(v94 + 16) = _mm_loadu_si128(a4 + 1);
      return v10;
    case 0x20:
      v49 = sub_1D99B80(a1, *(_QWORD *)(v11 + 32));
      v50 = v49 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v49 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v238.m128i_i64[0] = v49;
        n.m128_u64[0] = *a1;
        sub_18C74E0(n.m128_i64[0], 4, 0, 4);
        v205 = (unsigned __int16 *)a4[1].m128i_i64[0];
        if ( !v205 )
          v205 = *(unsigned __int16 **)(v11 + 40);
        v206 = a4[1].m128i_i64[1];
        if ( !v206 )
          v206 = *(_QWORD *)(v11 + 48);
        v241 = v206;
        v240 = v238.m128i_i64[0];
        v238.m128i_i64[0] = (__int64)v205;
        v207 = sub_1D8B300(a1, v205, a7, a8, v206, (unsigned __int64)v205, v204);
        v213 = sub_19146D0(*a1, v207, v208, v209, v210, v211, a7, a8);
        v214 = v241;
        if ( v213 != 1
          && (v215 = (unsigned __int16 *)v241,
              v242 = v238.m128i_i64[0],
              v241 = v240,
              v240 = v214,
              v216 = sub_1D8B300(a1, v215, a7, a8, v214, v238.m128i_u64[0], v212),
              v221 = sub_19146D0(*a1, v216, v217, v218, v219, v220, a7, a8),
              v221 != 1)
          && ((v222 = *a1,
               v223 = v213 & 0xFFFFFFFFFFFFFFFELL,
               v238.m128i_i64[0] = v221 & 0xFFFFFFFFFFFFFFFELL,
               !*(_DWORD *)(v222 + 12632))
           && v241 == *(_QWORD *)(v11 + 32)
           && v242 == v223
           && v240 == v238.m128i_i64[0]
           || (v10 = sub_1E71AF0(v222, v241, v223, v238.m128i_i64[0], *(unsigned int *)(v11 + 56)),
               (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
        {
          v240 = v223;
          v50 = v10;
          v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
          sub_1EA6140(a2, v10, 32, 8);
          a7 = (__m128)_mm_load_si128(&v238);
          *(_DWORD *)v224 = a4->m128i_i32[0];
          v225 = *(__int64 *)((char *)a4->m128i_i64 + 4);
          *(__m128 *)(v224 + 16) = a7;
          *(_QWORD *)(v224 + 4) = v225;
        }
        else
        {
          v50 = 0;
        }
        sub_190D5E0(n.m128_i64[0], a7);
      }
      return v50;
    case 0x21:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA8C70(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x22:
      v44 = &a4->m128i_i8[4];
      v45 = sub_F6C520(*(_QWORD *)(v11 + 32));
      v46 = sub_1D97F40(
              a1,
              a2,
              *(_QWORD *)(v11 + 32),
              v45 * ((unsigned __int64)&v44[-(v44 != nullptr)] / v45 + (v44 != nullptr)));
      if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v47 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_54;
      sub_F6C520(*(_QWORD *)(v11 + 32));
      if ( *(_QWORD *)(v11 + 32) == v46 )
        goto LABEL_55;
      v47 = *a1;
LABEL_54:
      v10 = sub_A74EC0(*(_QWORD *)(v47 + 248), v46);
      if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_55;
      return 0;
    case 0x23:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA8EB0(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x24:
      sub_1EA6360(a2, v11, a4);
      return v11;
    case 0x25:
      v31 = sub_1D86580((__int64)a1, *(_QWORD *)(v11 + 40));
      if ( !v31 )
        return 0;
      if ( *(_DWORD *)(*a1 + 12632) || v31 != *(_QWORD *)(v11 + 40) )
      {
        LOBYTE(v32) = *(_BYTE *)(v11 + 32) & 0x3F;
        if ( (_BYTE)v32 )
        {
          v33 = a4->m128i_u32[2];
          v34 = a4->m128i_u32[1];
          v32 = (unsigned __int8)v32;
        }
        else
        {
          v33 = 0;
          v32 = 0;
          v34 = 0;
        }
        v10 = sub_1A891C0(*(__int64 **)(*a1 + 736), v31, v34, (_BYTE *)(v11 + 48), v32, v33, (int)a4 + 12, v32, 1);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      v35 = *(_BYTE *)(v10 + 32) & 0x3F;
      if ( (*(_BYTE *)(v10 + 32) & 0x3F) != 0 )
        v35 = 4 * v35 + 8;
      sub_1EA6140(a2, v10, 4 * ((unsigned int)(v35 + 3) >> 2) + 4, 4);
      if ( (*(_BYTE *)(v11 + 32) & 0x3F) != 0 )
      {
        *(_DWORD *)(v36 + 4) = a4->m128i_i32[1];
        v37 = *(_BYTE *)(v11 + 32) & 0x3F;
        if ( (*(_BYTE *)(v11 + 32) & 0x3F) == 0 )
          goto LABEL_258;
        v38 = &a4->m128i_i8[12];
        if ( (v36 + 12 >= (unsigned __int64)&a4[1].m128i_u64[1] + 4
           || (unsigned __int64)&a4->m128i_u64[1] + 4 >= v36 + 28)
          && v37 - 1 > 2 )
        {
          v39 = 12;
          do
          {
            *(__m128i *)(v36 + v39) = _mm_loadu_si128((const __m128i *)((char *)a4 + v39));
            v39 += 16;
          }
          while ( 16LL * (v37 >> 2) + 12 != v39 );
          v40 = v37 & 0xFC;
          if ( v37 != (v37 & 0xFFFFFFFC) )
          {
            *(_DWORD *)(v36 + 4LL * ((unsigned __int8)v37 & 0xFC) + 12) = *(_DWORD *)&v38[4 * (v37 & 0xFC)];
            v41 = (unsigned int)(v40 + 1);
            if ( v37 != (_DWORD)v41 )
            {
              v42 = (unsigned int)(v40 + 2);
              *(_DWORD *)(v36 + 4 * v41 + 12) = *(_DWORD *)&v38[4 * v41];
              if ( (_DWORD)v42 != v37 )
                *(_DWORD *)(v36 + 4 * v42 + 12) = a4->m128i_i32[v42 + 3];
            }
          }
        }
        else
        {
          v237 = 0;
          do
          {
            *(_DWORD *)(v36 + 4 * v237 + 12) = a4->m128i_i32[v237 + 3];
            ++v237;
          }
          while ( v37 != (_DWORD)v237 );
        }
        if ( (*(_BYTE *)(v11 + 32) & 0x3F) != 0 )
          v43 = a4->m128i_i32[2];
        else
LABEL_258:
          v43 = 0;
        *(_DWORD *)(v36 + 8) = v43;
      }
      return v10;
    case 0x26:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA9720(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x27:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1D99BC0(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x28:
      v108 = &a4->m128i_i64[1];
      v109 = sub_F6C520(*(_QWORD *)(v11 + 32));
      v110 = sub_1D97F40(
               a1,
               a2,
               *(_QWORD *)(v11 + 32),
               v109 * (((unsigned __int64)v108 - (v108 != nullptr)) / v109 + (v108 != nullptr)));
      if ( (v110 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v111 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_126;
      sub_F6C520(*(_QWORD *)(v11 + 32));
      if ( *(_QWORD *)(v11 + 32) != v110 )
      {
        v111 = *a1;
LABEL_126:
        v10 = sub_1E5EFE0(v111, v110);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v10, 8, 4);
      *v112 = a4->m128i_i32[0];
      v112[1] = a4->m128i_i32[1];
      return v10;
    case 0x29:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA9890(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x2A:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA99B0(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x2B:
    case 0x2C:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA9AE0(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
    case 0x2E:
      v74 = sub_1D86580((__int64)a1, *(_QWORD *)(v11 + 32));
      if ( (*(_BYTE *)(v11 + 18) & 8) != 0 )
        v75 = *(_QWORD *)(v11 + 48);
      else
        v75 = *(_QWORD *)(v11 + 8);
      v76 = sub_1D99B80(a1, v75);
      v77 = v76 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v76 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v202 = sub_A77C90(
                 *(_QWORD *)(*a1 + 248),
                 v76,
                 v74,
                 *(_WORD *)(v11 + 20) & 0x7FFF,
                 *(_WORD *)(v11 + 22) & 0x7FFF,
                 *(_BYTE *)(v11 + 21) >> 7);
        sub_1EA6140(a2, v202, 4, 4);
        *v203 = a4->m128i_i32[0];
        return v202;
      }
      return v77;
    case 0x2F:
      v66 = sub_F60F10(v11, a2, *((__int64 *)&v12 + 1), (__int64)a4, a5, a6);
      v71 = (_QWORD *)sub_1D86580((__int64)a1, (__int64)v66);
      if ( !v71 )
        return 0;
      if ( !*(_DWORD *)(*a1 + 12632) && v71 == sub_F60F10(v11, (__int64)v66, v67, v68, v69, v70) )
        goto LABEL_55;
      v72 = v71[6];
      if ( v72 )
        goto LABEL_73;
      v96 = *(_QWORD *)(*a1 + 248);
      goto LABEL_109;
    case 0x30:
      v95 = sub_F60F10(v11, a2, *((__int64 *)&v12 + 1), (__int64)a4, a5, a6);
      v71 = (_QWORD *)sub_1D86580((__int64)a1, (__int64)v95);
      if ( !v71 )
        return 0;
      v67 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_107;
      if ( v71 == sub_F60F10(v11, (__int64)v95, v67, v68, v69, v70) )
        goto LABEL_55;
      v67 = *a1;
LABEL_107:
      v72 = v71[6];
      if ( v72 )
      {
LABEL_73:
        v73 = v72 & 0xFFFFFFFFFFFFFFF0LL;
        v10 = v73;
      }
      else
      {
        v96 = *(_QWORD *)(v67 + 248);
LABEL_109:
        v10 = sub_A7AA70(v96, (__int64)v71, v67, v68, v69, v70);
        v73 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      }
      if ( !v73 )
        return 0;
      goto LABEL_55;
    case 0x31:
      v238.m128i_i64[0] = (__int64)a4;
      v105 = a4->m128i_i32[0];
      memset(ptr, 0, sizeof(ptr));
      v106 = *(_QWORD *)(v11 + 32);
      v11 = 0;
      v107 = _mm_loadh_ps((const double *)v238.m128i_i64);
      v246 = 0;
      v238 = (__m128i)v107;
      v244[0] = sub_1D86690((__int64 **)a1, ptr, v106, v105, 0, 0, 0.0, *(double *)a8.m128_u64, 0);
      if ( !sub_F22B30(v244) )
        v11 = sub_1DA1550(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1], v244[0]);
LABEL_119:
      if ( ptr[1].m128i_i32[3] )
      {
        v84 = (void *)ptr[1].m128i_i64[0];
LABEL_93:
        free(v84);
      }
      goto LABEL_25;
    case 0x33:
      v238.m128i_i64[0] = *a1;
      sub_18C79B0(v238.m128i_i64[0], 0, 0, 4);
      v54 = sub_1D8B300(a1, *(unsigned __int16 **)(v11 + 24), a7, a8, v51, v52, v53);
      if ( v54 == 1 )
        goto LABEL_226;
      v59 = v54 & 0xFFFFFFFFFFFFFFFELL;
      v61 = sub_1934300(*a1, (_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFELL), v55, v56, v57, v58, (__m128i)a7, a8);
      if ( v61 == 1 )
        goto LABEL_226;
      v62 = *v8;
      if ( *(_BYTE *)(*v8 + 16) != 51 )
      {
        v63 = *v8;
        n.m128_u64[0] = v61;
        v62 = sub_F63050(v63, v59, v60, v61);
        v61 = n.m128_u64[0];
      }
      if ( ((v64 = v61 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632)) || v64 != *(_QWORD *)(v11 + 24))
        && (v10 = sub_1E631F0(*a1, v64, (*(_BYTE *)(v62 + 18) & 8) != 0), (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
LABEL_226:
        v10 = 0;
      }
      else
      {
        sub_1EA6140(a2, v10, 12, 4);
        *v65 = a4->m128i_i32[0];
        v65[1] = a4->m128i_i32[1];
        v65[2] = a4->m128i_i32[2];
      }
LABEL_68:
      sub_190D5E0(v238.m128i_i64[0], a7);
      return v10;
    case 0x34:
      v238.m128i_i64[0] = a4[1].m128i_i64[0];
      v101 = (__int64 *)sub_1D99A60(a1, v238.m128i_i64[0]);
      if ( !v101 )
        return 0;
      v102 = *v8;
      if ( *(_BYTE *)(*v8 + 16) != 52 )
        v102 = sub_F63050(*v8, v238.m128i_i64[0], v97, v98);
      if ( *(_DWORD *)(*a1 + 12632) || (__int64 *)v238.m128i_i64[0] != v101 )
      {
        v10 = sub_A81D80(*(_QWORD *)(*a1 + 248), *v101, (*(_BYTE *)(v102 + 18) & 8) != 0, v98, v99, v100);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v10, 24, 8);
      *(_DWORD *)v103 = a4->m128i_i32[0];
      *(_DWORD *)(v103 + 4) = a4->m128i_i32[1];
      v104 = a4->m128i_i32[2];
      *(_QWORD *)(v103 + 16) = v101;
      *(_DWORD *)(v103 + 8) = v104;
      return v10;
    case 0x35:
      v179 = *(_QWORD *)(v11 + 32);
      v180 = *(_QWORD **)(*a1 + 248);
      v181 = (_QWORD *)(*(_QWORD *)(v179 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v179 + 16) & 4) != 0 )
        v181 = (_QWORD *)*v181;
      v182 = sub_B8E180((unsigned __int64)v181);
      if ( !a1[6] )
      {
        if ( !v182 )
          goto LABEL_219;
        goto LABEL_206;
      }
      if ( !v182 )
        goto LABEL_219;
      if ( (*(_BYTE *)(v11 + 17) & 2) == 0 )
      {
LABEL_206:
        v247 = 0;
        v248 = 0;
        ptr[0].m128i_i64[0] = (__int64)&ptr[1].m128i_i64[1];
        *(__m128i *)((char *)ptr + 8) = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v183 = (_QWORD *)(*(_QWORD *)(v179 + 80) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v179 + 80) & 4) != 0 )
          v183 = (_QWORD *)*v183;
        v184 = sub_1D97F40(a1, ptr, *v183, v183 + 1);
        n.m128_u64[0] = ptr[0].m128i_i64[1] - ptr[1].m128i_i64[0];
        v238.m128i_i64[0] = (__int64)sub_A81BC0(
                                       v180,
                                       v184,
                                       ptr[0].m128i_i32[2] - ptr[1].m128i_i32[0],
                                       ptr[0].m128i_i64[1] - ptr[1].m128i_i64[0],
                                       v185,
                                       v186);
        memcpy(
          (void *)(v238.m128i_i64[0] + 8),
          (const void *)(ptr[0].m128i_i64[0] + ptr[1].m128i_i64[0]),
          n.m128_u64[0]);
        if ( (*(_BYTE *)(v179 + 28) & 0x7F) == 0x41 )
        {
          v226 = *(_QWORD *)(v179 + 40);
          if ( (v226 & 7) != 0 )
            v227 = 0;
          else
            v227 = v226 & 0xFFFFFFFFFFFFFFF8LL;
          v228 = v180[283];
          v229 = *(unsigned int *)(v179 + 24);
          v240 = v227;
          v230 = *(_DWORD *)(v179 + 56);
          v231 = *(_QWORD *)(v228 + 80);
          n.m128_i32[0] = v229;
          v232 = sub_704780((__int64 *)(v231 + 72), v231, v187, v229, v227, v189);
          if ( v232 )
            v232 += 5;
          v179 = sub_B7A760((__int64)v180, (__int64)v232, v230, n.m128_i32[0], v240, v238.m128i_i64[0]);
        }
        else
        {
          v190 = *(_QWORD *)(v179 + 40) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v179 + 40) & 7) != 0 )
            v190 = 0;
          v191 = *(_DWORD *)(v179 + 24);
          v192 = *(_DWORD *)(v179 + 56);
          n.m128_i32[0] = v191;
          v193 = v180[283];
          v240 = v190;
          v194 = sub_704780((__int64 *)(*(_QWORD *)(v193 + 80) + 72LL), *(_QWORD *)(v193 + 80), v187, v188, v190, v189);
          if ( v194 )
            v194 += 5;
          v179 = sub_B7A510((__int64)v180, (__int64)v194, v192, n.m128_i32[0], v240, v238.m128i_i64[0]);
        }
        v195 = a1[4];
        v196 = *(unsigned int *)(v195 + 8);
        if ( v196 + 1 > (unsigned __int64)*(unsigned int *)(v195 + 12) )
        {
          sub_2237220(v195, v195 + 16, v196 + 1, 8);
          v196 = *(unsigned int *)(v195 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v195 + 8 * v196) = v179;
        ++*(_DWORD *)(v195 + 8);
        if ( (unsigned __int64 *)ptr[0].m128i_i64[0] != &ptr[1].m128i_u64[1] && ptr[0].m128i_i64[0] )
          operator delete[]((void *)ptr[0].m128i_i64[0]);
        goto LABEL_219;
      }
      v179 = sub_1E461B0(a1 + 7, v179, (*(_BYTE *)(v179 + 28) & 0x7F) == 65);
      if ( !v179 )
      {
        v11 = 0;
        goto LABEL_25;
      }
      v234 = a1[4];
      v235 = *(unsigned int *)(v234 + 8);
      if ( v235 + 1 > (unsigned __int64)*(unsigned int *)(v234 + 12) )
      {
        sub_2237220(v234, v234 + 16, v235 + 1, 8);
        v235 = *(unsigned int *)(v234 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v234 + 8 * v235) = v179;
      ++*(_DWORD *)(v234 + 8);
LABEL_219:
      v197 = sub_A70A40((__int64)v180, v179, 0);
LABEL_220:
      v11 = v197;
LABEL_98:
      sub_1EA6140(a2, v11, 4, 4);
      *v92 = a4->m128i_i32[0];
LABEL_25:
      result = v11;
      break;
    case 0x36:
      if ( (*(_BYTE *)(v15 + 17) & 4) != 0 )
      {
        v177 = (_QWORD *)sub_1D99A60(a1, a4[1].m128i_i64[0]);
        if ( !v177 )
          return 0;
        v10 = sub_1E70DB0(*a1, *v177, *(unsigned int *)(v11 + 48), a4->m128i_u32[0]);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v10, 24, 8);
      *(_DWORD *)v178 = a4->m128i_i32[0];
      *(_QWORD *)(v178 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(_QWORD *)(v178 + 16) = a4[1].m128i_i64[0];
      return v10;
    case 0x37:
      v198 = sub_1D86580((__int64)a1, *(_QWORD *)(v11 + 24));
      if ( v198 )
      {
        if ( !*(_DWORD *)(*a1 + 12632) && v198 == *(_QWORD *)(v11 + 24) )
          goto LABEL_55;
        v10 = sub_1D87F20(a1, a4->m128i_i32[0], v198, v199, v200, v201, (__m128i)a7, *(double *)a8.m128_u64);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_55;
      }
      return 0;
    case 0x38:
      v78 = sub_1D86580((__int64)a1, *(_QWORD *)(v11 + 32));
      if ( !v78 )
        return 0;
      v79 = sub_F5DBF0(v11);
      v80 = sub_1D99B80(a1, v79);
      if ( (v80 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v81 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) || v78 != *(_QWORD *)(v11 + 32) )
        goto LABEL_85;
      v238.m128i_i64[0] = v80;
      v236 = sub_F5DBF0(v11);
      v80 = v238.m128i_i64[0];
      if ( v238.m128i_i64[0] != v236 )
      {
        v81 = *a1;
LABEL_85:
        v10 = sub_A77600(*(_QWORD *)(v81 + 248), v78, v80);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
LABEL_55:
      sub_1EA6140(a2, v10, 4, 4);
      *v48 = a4->m128i_i32[0];
      return v10;
    case 0x39:
      v156 = &a4->m128i_i8[4];
      v157 = sub_F6C520(*(_QWORD *)(v11 + 32));
      v158 = sub_1D97F40(
               a1,
               a2,
               *(_QWORD *)(v11 + 32),
               v157 * ((unsigned __int64)&v156[-(v156 != nullptr)] / v157 + (v156 != nullptr)));
      if ( (v158 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(v11 + 32) == v158 )
          goto LABEL_55;
        v10 = sub_A70300(*(_QWORD *)(*a1 + 248), v158, *(_DWORD *)(v11 + 20), (*(_BYTE *)(v11 + 18) >> 3) & 0xF);
LABEL_177:
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_55;
      }
      return 0;
    case 0x3A:
      v238.m128i_i64[0] = (__int64)a4;
      v238 = (__m128i)_mm_loadh_ps((const double *)v238.m128i_i64);
      return sub_1DA9BD0(a1, a2, v238.m128i_i64[0], v238.m128i_i64[1]);
  }
  return result;
}
