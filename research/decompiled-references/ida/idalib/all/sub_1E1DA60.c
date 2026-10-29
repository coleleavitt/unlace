unsigned __int64 __fastcall sub_1E1DA60(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int128 v11; // rax
  __int64 *v12; // r13
  _QWORD *v14; // rbp
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
  __int64 v27; // rdi
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  _DWORD *v34; // rdx
  _QWORD *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  _DWORD *v43; // rdx
  __int8 *v44; // r13
  unsigned int v45; // eax
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // r13
  __int64 v49; // r8
  unsigned __int16 *v50; // rcx
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // r8
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // rdi
  bool v67; // zf
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  unsigned __int64 v79; // rsi
  __int64 v80; // rdx
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdi
  unsigned __int64 v84; // rcx
  _DWORD *v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rdx
  unsigned int v88; // ecx
  __int64 v89; // rdx
  __m128 v90; // xmm6
  __int64 v91; // rsi
  __int64 v92; // rax
  unsigned __int64 v93; // r12
  _DWORD *v94; // rdx
  __int64 v95; // r13
  unsigned __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  __int8 *v99; // r13
  unsigned int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // r9
  unsigned __int64 v103; // r13
  __int64 v104; // rax
  __int64 v105; // r8
  __int64 v106; // rax
  __int64 v107; // r8
  unsigned int v108; // r9d
  unsigned int v109; // edx
  int v110; // eax
  __int64 v111; // rdx
  unsigned int v112; // ecx
  __int64 v113; // rax
  int v114; // eax
  __int64 v115; // rsi
  __int64 v116; // rax
  __int32 v117; // eax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r9
  __int64 *v121; // r14
  __int64 v122; // rax
  __int64 v123; // r8
  __int64 v124; // rdx
  __int32 v125; // eax
  __int64 *v126; // r13
  unsigned int v127; // eax
  __int64 v128; // r13
  __int64 v129; // rdi
  _DWORD *v130; // rdx
  const __m128i *v131; // r13
  unsigned int v132; // eax
  __int64 v133; // rax
  __int64 v134; // rdx
  __int32 v135; // eax
  const __m128i *v136; // rbx
  unsigned int v137; // eax
  __int64 v138; // r13
  unsigned __int64 v139; // rbx
  __int64 v140; // rax
  unsigned int v141; // eax
  __int64 v142; // r13
  __int64 v143; // rax
  unsigned int v144; // eax
  __m128 v145; // kr00_16
  unsigned __int16 *v146; // rax
  __int64 v147; // rdx
  unsigned __int64 v148; // rcx
  __int64 v149; // r8
  unsigned __int64 v150; // rax
  unsigned __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rax
  unsigned __int32 v156; // r13d
  unsigned __int8 v157; // al
  _DWORD *v158; // rdx
  unsigned int v159; // ecx
  __int64 v160; // rdx
  unsigned __int64 v161; // rdx
  unsigned __int64 v162; // rax
  __int64 v163; // r13
  __int64 v164; // rdx
  unsigned __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  unsigned __int64 v172; // rax
  unsigned __int64 v173; // rax
  _DWORD *v174; // rdx
  __int8 *v175; // r13
  unsigned int v176; // eax
  __int64 v177; // rax
  int v178; // eax
  __int64 v179; // rdx
  _DWORD *v180; // rdx
  __int32 v181; // eax
  unsigned int v182; // eax
  __int64 v183; // rdx
  unsigned __int64 v184; // rcx
  __int64 v185; // rbx
  __int64 v186; // r8
  __int64 v187; // r13
  __int64 v188; // rax
  unsigned __int64 v189; // rdx
  __int64 v190; // rax
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  _QWORD *v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rax
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 v200; // rsi
  __int64 v201; // r13
  __int64 v202; // rsi
  __int64 v203; // rax
  unsigned __int64 v204; // rdx
  __int64 v205; // rdx
  unsigned int v206; // r13d
  unsigned int v207; // r15d
  unsigned int v208; // r14d
  unsigned int v209; // r13d
  unsigned int v210; // eax
  unsigned __int64 v211; // rdx
  __int64 v212; // rax
  __int8 *v213; // r13
  unsigned int v214; // eax
  __int64 v215; // r13
  __int64 v216; // rdi
  unsigned __int64 v217; // r12
  _DWORD *v218; // rdx
  _DWORD *v219; // rdx
  unsigned __int64 v220; // rax
  __int64 v221; // rax
  __m128i v222; // [rsp+0h] [rbp-B8h] BYREF
  __m128 v223; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v224; // [rsp+28h] [rbp-90h]
  unsigned __int64 v225; // [rsp+30h] [rbp-88h]
  unsigned __int64 v226; // [rsp+38h] [rbp-80h]
  __int64 v227; // [rsp+48h] [rbp-70h] BYREF
  void *v228[2]; // [rsp+50h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-58h]
  __int128 v230; // [rsp+70h] [rbp-48h]

  v8 = a3;
  v9 = a3;
  *(_QWORD *)&v11 = (a3 >> 3) & 1;
  *((_QWORD *)&v11 + 1) = a3 & 7;
  v12 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = a2;
  v16 = *v12;
  if ( v11 == 0 )
  {
    switch ( *(_BYTE *)(v16 + 16) )
    {
      case 0:
        v144 = sub_F6C520(*(_QWORD *)(v9 + 32));
        return sub_1E1DA60(
                 a1,
                 a2,
                 *(_QWORD *)(v9 + 32),
                 v144 * (((unsigned __int64)a4 - (a4 != nullptr)) / v144 + (a4 != nullptr)));
      case 1:
        v141 = sub_F6C520(*(_QWORD *)(v9 + 32));
        v142 = sub_1E1DA60(
                 a1,
                 a2,
                 *(_QWORD *)(v9 + 32),
                 v141 * (((unsigned __int64)a4 - (a4 != nullptr)) / v141 + (a4 != nullptr)));
        v139 = v142 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v142 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return v139;
        v143 = *a1;
        if ( *(_DWORD *)(*a1 + 12632) )
          goto LABEL_146;
        v139 = v9;
        sub_F6C520(*(_QWORD *)(v9 + 32));
        if ( *(_QWORD *)(v9 + 32) != v142 )
        {
          v143 = *a1;
LABEL_146:
          v139 = sub_A75D20(*(_QWORD **)(v143 + 248), v142);
        }
        sub_1EA6140(a2, v139, 0, 1);
        return v139;
      case 2:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E230A0(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 3:
        v136 = a4 + 1;
        v137 = sub_F6C520(*(_QWORD *)(v9 + 32));
        v138 = sub_1E1DA60(
                 a1,
                 a2,
                 *(_QWORD *)(v9 + 32),
                 v137 * (((unsigned __int64)v136 - (v136 != nullptr)) / v137 + (v136 != nullptr)));
        v139 = v138 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v138 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return v139;
        v140 = *a1;
        if ( *(_DWORD *)(*a1 + 12632) )
          goto LABEL_139;
        v139 = v9;
        sub_F6C520(*(_QWORD *)(v9 + 32));
        if ( v138 != *(_QWORD *)(v9 + 32) )
        {
          v140 = *a1;
LABEL_139:
          v139 = sub_A72990(*(_QWORD *)(v140 + 248), v138);
        }
        sub_1EA6140(a2, v139, 16, 8);
        return v139;
      case 4:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2D020(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 5:
        v131 = a4 + 1;
        v132 = sub_F6C520(*(_QWORD *)(v9 + 32));
        v133 = sub_1E1DA60(
                 a1,
                 a2,
                 *(_QWORD *)(v9 + 32),
                 v132 * (((unsigned __int64)v131 - (v131 != nullptr)) / v132 + (v131 != nullptr)));
        if ( (v133 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
        if ( *(_DWORD *)(*a1 + 12632) || v133 != *(_QWORD *)(v9 + 32) )
        {
          v8 = sub_1DFE2B0(
                 a1,
                 v133,
                 (*(_WORD *)(v9 + 18) >> 6) & 7,
                 0,
                 0,
                 (*(_BYTE *)(v9 + 18) >> 3) & 7,
                 a4->m128i_i64[0]);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            return 0;
        }
        sub_1EA6140(a2, v8, 16, 8);
        *(_DWORD *)v134 = a4->m128i_i32[0];
        v135 = a4->m128i_i32[1];
        *(_QWORD *)(v134 + 8) = 0;
        *(_DWORD *)(v134 + 4) = v135;
        return v8;
      case 6:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2D1B0(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 7:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2D340(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 8:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2D420(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 9:
      case 0x3B:
        break;
      case 0xA:
        v205 = *(unsigned int *)(*a1 + 12632);
        if ( !(_DWORD)v205 )
          goto LABEL_27;
        v206 = *(_DWORD *)(v9 + 32);
        v207 = a4->m128i_i32[0];
        v208 = *(_BYTE *)(v9 + 32) & 1;
        v209 = (v206 >> 1) & 0xFFFFFF;
        v210 = sub_AAC1F0(*(_QWORD *)(*a1 + 248), *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v205, (__int64)a4, a5);
        LODWORD(v228[1]) = v210;
        if ( v210 > 0x40 )
        {
          v222.m128i_i64[0] = (__int64)v228;
          sub_2205470(v228, v209, 1);
        }
        else
        {
          v211 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v210;
          if ( !v210 )
            LODWORD(v211) = 0;
          v228[0] = (void *)((unsigned int)v211 & v209);
        }
        v212 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)v228, *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v207);
        v8 = sub_1E6EEC0(*a1, v208, v212, v207);
        if ( LODWORD(v228[1]) > 0x40 && v228[0] )
          operator delete[](v228[0]);
        goto LABEL_178;
      case 0xB:
        v213 = &a4->m128i_i8[4];
        v214 = sub_F6C520(*(_QWORD *)(v9 + 32));
        v215 = sub_1E1DA60(
                 a1,
                 a2,
                 *(_QWORD *)(v9 + 32),
                 v214 * ((unsigned __int64)&v213[-(v213 != nullptr)] / v214 + (v213 != nullptr)));
        if ( (v215 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
        v216 = *a1;
        if ( *(_DWORD *)(*a1 + 12632) )
          goto LABEL_229;
        sub_F6C520(*(_QWORD *)(v9 + 32));
        if ( *(_QWORD *)(v9 + 32) == v215 )
          goto LABEL_27;
        v216 = *a1;
LABEL_229:
        v8 = sub_1E6FF00(v216, v215, a4->m128i_u32[0], 0);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_27;
        return 0;
      case 0xC:
        v182 = sub_F6C520(*(_QWORD *)(v9 + 32));
        v185 = sub_1E1DA60(
                 a1,
                 a2,
                 *(_QWORD *)(v9 + 32),
                 v182 * (((unsigned __int64)a4 - (a4 != nullptr)) / v182 + (a4 != nullptr)));
        if ( (v185 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
        v187 = *(_QWORD *)(v9 + 56);
        if ( v187 )
        {
          v188 = sub_1E11560(a1, *(unsigned __int16 **)(v9 + 56), a7, a8, v183, v184, v186);
          if ( v188 == 1 )
            return 0;
          v189 = v188 & 0xFFFFFFFFFFFFFFFELL;
        }
        else
        {
          v189 = 0;
        }
        if ( *(_DWORD *)(*a1 + 12632) || v187 != v189 || v185 != *(_QWORD *)(v9 + 32) )
          v8 = sub_1E5F880(
                 *a1,
                 v185,
                 v189,
                 (unsigned __int8)BYTE2(*(_DWORD *)(v9 + 16)) >> 7,
                 HIBYTE(*(_DWORD *)(v9 + 16)) & 1);
        sub_1EA6140(a2, v8, 0, 1);
        return v8;
      case 0xD:
        v178 = (*(_WORD *)(v9 + 18) >> 3) & 0x1FF;
        if ( (unsigned int)(v178 - 443) <= 4
          || (unsigned int)(v178 - 451) <= 0x24
          || v178 == 438
          || (v179 = 8, v178 == 449) )
        {
          v179 = 12;
        }
        sub_1EA6140(a2, v9, v179, 4);
        v181 = a4->m128i_i32[0];
        *v180 = a4->m128i_i32[0];
        v180[1] = v181;
        if ( (((*(_WORD *)(v9 + 18) >> 3) + 74) & 0x1FFu) <= 0x31
          && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v9 + 18) >> 3) + 74)) & 1) != 0 )
        {
          v180[2] = a4->m128i_i32[2];
        }
        return v9;
      case 0xE:
      case 0x2D:
      case 0x32:
        goto LABEL_20;
      case 0xF:
        v163 = *a1;
        sub_18C74E0(*a1, 0, 0, 0);
        v167 = sub_1E11560(a1, *(unsigned __int16 **)(v9 + 24), a7, a8, v164, v165, v166);
        if ( v167 == 1
          || (v172 = sub_19A4070(*a1, (_QWORD *)(v167 & 0xFFFFFFFFFFFFFFFELL), v168, v169, v170, v171, a7, a8), v172 == 1)
          || ((v173 = v172 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632)) || v173 != *(_QWORD *)(v9 + 24))
          && (v8 = sub_1E5FBF0(*a1, v173, 1), (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
          v8 = 0;
        }
        else
        {
          sub_1EA6140(a2, v8, 8, 4);
          *v174 = a4->m128i_i32[0];
          v174[1] = a4->m128i_i32[1];
        }
        sub_190D5E0(v163, a7);
        return v8;
      case 0x10:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E29AB0(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x11:
        v159 = a4->m128i_i32[0];
        *(_OWORD *)v228 = 0;
        v160 = *(_QWORD *)(v9 + 40);
        *(_OWORD *)ptr = 0;
        v230 = 0;
        v227 = sub_1E0B040((__int64 **)a1, (__m128i *)v228, v160, v159, 0, 0, 0.0, *(double *)a8.m128_u64, 0);
        if ( !sub_F22B30(&v227)
          && ((v161 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
           || (v161 = sub_1E1F4E0(a1, *(_QWORD *)(v9 + 24)), (v161 & 0xFFFFFFFFFFFFFFF0LL) != 0))
          && (v162 = sub_AB7C40(*(_QWORD **)(*a1 + 248), v227, v161, 0), v9 = v162, (v162 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
        {
          sub_1EA6140(a2, v162, 4, 4);
          *v219 = a4->m128i_i32[0];
        }
        else
        {
          v9 = 0;
        }
        goto LABEL_68;
      case 0x12:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2D850(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x13:
        v222.m128i_i64[0] = *a1;
        sub_18C74E0(v222.m128i_i64[0], 4, 0, 4);
        v146 = (unsigned __int16 *)sub_F57B50(v9);
        v150 = sub_1E11560(a1, v146, a7, a8, v147, v148, v149);
        v155 = sub_19146D0(*a1, v150, v151, v152, v153, v154, a7, a8);
        if ( v155 == 1 )
          goto LABEL_231;
        v223.m128_u64[0] = v155 & 0xFFFFFFFFFFFFFFFELL;
        if ( *(_DWORD *)(*a1 + 12632) || v223.m128_u64[0] != sub_F57B50(v9) )
        {
          v156 = a4->m128i_i32[0];
          v157 = sub_F57B40(v9);
          v8 = sub_1E6EEC0(*a1, v157, v223.m128_u64[0], v156);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_231;
        }
        sub_1EA6140(a2, v8, 4, 4);
        *v158 = a4->m128i_i32[0];
        goto LABEL_59;
      case 0x14:
        v222.m128i_i64[0] = (__int64)a4;
        v145 = _mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E28640(a1, a2, v145.m128_u64[0], v145.m128_u64[1], 0, a6, v145.m128_u64[0], v145.m128_u64[1]);
      case 0x15:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2D990(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x16:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2A380(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x17:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2DAB0(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x18:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2DBD0(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x19:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2E1A0(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x1A:
        v222.m128i_i64[0] = (__int64)a4;
        *(__m128 *)v228 = _mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E1CD60(
                 a1,
                 (__int64)a2,
                 (__int64)v228[0],
                 (_DWORD *)v228[1],
                 0,
                 (__int64 *)v228,
                 *(double *)v228,
                 a8);
      case 0x1B:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2E310(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x1C:
        return v9;
      case 0x1D:
        v27 = v9;
        v9 = 0;
        v28 = sub_F61460(v27, (__int64)a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
        v29 = sub_1E0AF30((__int64)a1, (__int64)v28);
        if ( !v29 )
          return v9;
        v33 = *(_QWORD *)(v29 + 48);
        if ( v33 )
          v9 = v33 & 0xFFFFFFFFFFFFFFF0LL;
        else
          v9 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v29, *a1, v30, v31, v32);
LABEL_20:
        sub_1EA6140(a2, v9, 4, 4);
        *v34 = a4->m128i_i32[0];
        return v9;
      case 0x1E:
        v99 = &a4->m128i_i8[4];
        v100 = sub_F6C520(*(_QWORD *)(v9 + 24));
        v103 = sub_1E1DA60(
                 a1,
                 a2,
                 *(_QWORD *)(v9 + 24),
                 v100 * ((unsigned __int64)&v99[-(v99 != nullptr)] / v100 + (v99 != nullptr)));
        if ( (v103 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
        v104 = *a1;
        v105 = *(unsigned int *)(*a1 + 12632);
        if ( (_DWORD)v105 )
          goto LABEL_88;
        sub_F6C520(*(_QWORD *)(v9 + 24));
        if ( *(_QWORD *)(v9 + 24) == v103 )
          goto LABEL_27;
        v104 = *a1;
LABEL_88:
        v8 = sub_A820D0(*(_QWORD *)(v104 + 248), v103, *(_QWORD *)(v9 + 32), v101, v105, v102);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_27;
        return 0;
      case 0x1F:
        v86 = sub_1E1F4E0(a1, *(_QWORD *)(v9 + 32));
        if ( (v86 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
        if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(v9 + 32) != v86 )
        {
          v8 = sub_A76DD0(*(_QWORD *)(*a1 + 248), v86, *(_DWORD *)(v9 + 40), *(_DWORD *)(v9 + 44));
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            return 0;
        }
        sub_1EA6140(a2, v8, 32, 8);
        *(_DWORD *)v87 = a4->m128i_i32[0];
        *(_QWORD *)(v87 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
        *(__m128i *)(v87 + 16) = _mm_loadu_si128(a4 + 1);
        return v8;
      case 0x20:
        v48 = sub_1E1F4E0(a1, *(_QWORD *)(v9 + 32));
        result = v48 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v48 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v224 = *a1;
          sub_18C74E0(v224, 4, 0, 4);
          v50 = (unsigned __int16 *)a4[1].m128i_i64[0];
          if ( !v50 )
            v50 = *(unsigned __int16 **)(v9 + 40);
          v51 = a4[1].m128i_i64[1];
          if ( !v51 )
            v51 = *(_QWORD *)(v9 + 48);
          v223.m128_u64[0] = v51;
          v222.m128i_i64[0] = (__int64)v50;
          v52 = sub_1E11560(a1, v50, a7, a8, v51, (unsigned __int64)v50, v49);
          v57 = sub_19146D0(*a1, v52, v53, v54, v55, v56, a7, a8);
          v59 = v222.m128i_i64[0];
          if ( v57 != 1
            && (v222.m128i_i64[0] = v57,
                v226 = v59,
                v225 = v223.m128_u64[0],
                v60 = sub_1E11560(a1, (unsigned __int16 *)v223.m128_u64[0], a7, a8, v223.m128_i64[0], v59, v58),
                v65 = sub_19146D0(*a1, v60, v61, v62, v63, v64, a7, a8),
                v65 != 1)
            && ((v66 = *a1,
                 v223.m128_u64[0] = v65 & 0xFFFFFFFFFFFFFFFELL,
                 v67 = *(_DWORD *)(v66 + 12632) == 0,
                 v222.m128i_i64[0] &= ~1uLL,
                 v67)
             && v48 == *(_QWORD *)(v9 + 32)
             && v226 == v222.m128i_i64[0]
             && v225 == v223.m128_u64[0]
             || (v8 = sub_1E71AF0(v66, v48, v222.m128i_i64[0], v223.m128_u64[0], *(unsigned int *)(v9 + 56)),
                 (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
          {
            v222 = (__m128i)_mm_loadh_ps((const double *)v223.m128_u64);
            sub_1EA6140(a2, v8, 32, 8);
            a7 = (__m128)_mm_load_si128(&v222);
            *(_DWORD *)v68 = a4->m128i_i32[0];
            v69 = *(__int64 *)((char *)a4->m128i_i64 + 4);
            *(__m128 *)(v68 + 16) = a7;
            *(_QWORD *)(v68 + 4) = v69;
            v70 = v8;
          }
          else
          {
            v70 = 0;
          }
          v222.m128i_i64[0] = v70;
          sub_190D5E0(v224, a7);
          return v222.m128i_i64[0];
        }
        return result;
      case 0x21:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2E420(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x22:
        v44 = &a4->m128i_i8[4];
        v45 = sub_F6C520(*(_QWORD *)(v9 + 32));
        v46 = sub_1E1DA60(
                a1,
                a2,
                *(_QWORD *)(v9 + 32),
                v45 * ((unsigned __int64)&v44[-(v44 != nullptr)] / v45 + (v44 != nullptr)));
        if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
        v47 = *a1;
        if ( *(_DWORD *)(*a1 + 12632) )
          goto LABEL_36;
        sub_F6C520(*(_QWORD *)(v9 + 32));
        if ( *(_QWORD *)(v9 + 32) != v46 )
        {
          v47 = *a1;
LABEL_36:
          v8 = sub_A74EC0(*(_QWORD *)(v47 + 248), v46);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            return 0;
        }
        goto LABEL_27;
      case 0x23:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2E660(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x24:
        sub_1EA6360(a2, v9, a4);
        return v9;
      case 0x25:
        v106 = sub_1E0AF30((__int64)a1, *(_QWORD *)(v9 + 40));
        if ( !v106 )
          return 0;
        if ( *(_DWORD *)(*a1 + 12632) || v106 != *(_QWORD *)(v9 + 40) )
        {
          LOBYTE(v107) = *(_BYTE *)(v9 + 32) & 0x3F;
          if ( (_BYTE)v107 )
          {
            v108 = a4->m128i_u32[2];
            v109 = a4->m128i_u32[1];
            v107 = (unsigned __int8)v107;
          }
          else
          {
            v108 = 0;
            v107 = 0;
            v109 = 0;
          }
          v8 = sub_1A891C0(*(__int64 **)(*a1 + 736), v106, v109, (_BYTE *)(v9 + 48), v107, v108, (int)a4 + 12, v107, 1);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            return 0;
        }
        v110 = *(_BYTE *)(v8 + 32) & 0x3F;
        if ( (*(_BYTE *)(v8 + 32) & 0x3F) != 0 )
          v110 = 4 * v110 + 8;
        sub_1EA6140(a2, v8, 4 * ((unsigned int)(v110 + 3) >> 2) + 4, 4);
        if ( (*(_BYTE *)(v9 + 32) & 0x3F) != 0 )
        {
          *(_DWORD *)(v111 + 4) = a4->m128i_i32[1];
          v112 = *(_BYTE *)(v9 + 32) & 0x3F;
          if ( (*(_BYTE *)(v9 + 32) & 0x3F) == 0 )
            goto LABEL_245;
          if ( (v111 + 12 >= (unsigned __int64)&a4[1].m128i_u64[1] + 4
             || (unsigned __int64)&a4->m128i_u64[1] + 4 >= v111 + 28)
            && v112 - 1 > 2 )
          {
            v113 = 12;
            do
            {
              *(__m128i *)(v111 + v113) = _mm_loadu_si128((const __m128i *)((char *)a4 + v113));
              v113 += 16;
            }
            while ( v113 != 16LL * (v112 >> 2) + 12 );
            v114 = v112 & 0xFC;
            if ( v112 != (v112 & 0xFFFFFFFC) )
            {
              *(_DWORD *)(v111 + 4LL * ((unsigned __int8)v112 & 0xFC) + 12) = a4->m128i_i32[(v112 & 0xFC) + 3];
              v115 = (unsigned int)(v114 + 1);
              if ( v112 != (_DWORD)v115 )
              {
                v116 = (unsigned int)(v114 + 2);
                *(_DWORD *)(v111 + 4 * v115 + 12) = a4->m128i_i32[v115 + 3];
                if ( (_DWORD)v116 != v112 )
                  *(_DWORD *)(v111 + 4 * v116 + 12) = a4->m128i_i32[v116 + 3];
              }
            }
          }
          else
          {
            v221 = 0;
            do
            {
              *(_DWORD *)(v111 + 4 * v221 + 12) = a4->m128i_i32[v221 + 3];
              ++v221;
            }
            while ( v112 != (_DWORD)v221 );
          }
          if ( (*(_BYTE *)(v9 + 32) & 0x3F) != 0 )
            v117 = a4->m128i_i32[2];
          else
LABEL_245:
            v117 = 0;
          *(_DWORD *)(v111 + 8) = v117;
        }
        return v8;
      case 0x26:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2EE90(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x27:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E1F520(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x28:
        v126 = &a4->m128i_i64[1];
        v127 = sub_F6C520(*(_QWORD *)(v9 + 32));
        v128 = sub_1E1DA60(
                 a1,
                 a2,
                 *(_QWORD *)(v9 + 32),
                 v127 * (((unsigned __int64)v126 - (v126 != nullptr)) / v127 + (v126 != nullptr)));
        if ( (v128 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
        v129 = *a1;
        if ( *(_DWORD *)(*a1 + 12632) )
          goto LABEL_126;
        sub_F6C520(*(_QWORD *)(v9 + 32));
        if ( *(_QWORD *)(v9 + 32) != v128 )
        {
          v129 = *a1;
LABEL_126:
          v8 = sub_1E5EFE0(v129, v128);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            return 0;
        }
        sub_1EA6140(a2, v8, 8, 4);
        *v130 = a4->m128i_i32[0];
        v130[1] = a4->m128i_i32[1];
        return v8;
      case 0x29:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2F000(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x2A:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2F120(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x2B:
      case 0x2C:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2F250(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
      case 0x2E:
        v201 = sub_1E0AF30((__int64)a1, *(_QWORD *)(v9 + 32));
        if ( (*(_BYTE *)(v9 + 18) & 8) != 0 )
          v202 = *(_QWORD *)(v9 + 48);
        else
          v202 = *(_QWORD *)(v9 + 8);
        v203 = sub_1E1F4E0(a1, v202);
        v204 = v203 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v203 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v217 = sub_A77C90(
                   *(_QWORD *)(*a1 + 248),
                   v203,
                   v201,
                   *(_WORD *)(v9 + 20) & 0x7FFF,
                   *(_WORD *)(v9 + 22) & 0x7FFF,
                   *(_BYTE *)(v9 + 21) >> 7);
          sub_1EA6140(v14, v217, 4, 4);
          *v218 = a4->m128i_i32[0];
          return v217;
        }
        return v204;
      case 0x2F:
        goto LABEL_22;
      case 0x30:
        a2 = sub_F60F10(v9, (__int64)a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
        if ( sub_1E0AF30((__int64)a1, (__int64)a2) == a1[4] )
        {
          v91 = a1[5];
          v92 = *(_QWORD *)(v91 + 48);
          if ( v92 )
          {
            v93 = v92 & 0xFFFFFFFFFFFFFFF0LL;
            v8 = v92 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v93 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v91, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
            v8 = v93 & 0xFFFFFFFFFFFFFFF0LL;
          }
          if ( v8 )
          {
            sub_1EA6140(v14, v93, 4, 4);
            v8 = v93;
            *v94 = a4->m128i_i32[0];
          }
          return v8;
        }
LABEL_22:
        v35 = sub_F60F10(v9, (__int64)a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
        v39 = (_QWORD *)sub_1E0AF30((__int64)a1, (__int64)v35);
        if ( !v39 )
          return 0;
        v40 = *a1;
        if ( *(_DWORD *)(*a1 + 12632) )
          goto LABEL_24;
        if ( v39 != sub_F60F10(v9, (__int64)v35, v40, v36, v37, v38) )
        {
          v40 = *a1;
LABEL_24:
          v41 = v39[6];
          if ( v41 )
          {
LABEL_25:
            v42 = v41 & 0xFFFFFFFFFFFFFFF0LL;
            v8 = v42;
          }
          else
          {
            v8 = sub_A7AA70(*(_QWORD *)(v40 + 248), (__int64)v39, v40, v36, v37, v38);
            v42 = v8 & 0xFFFFFFFFFFFFFFF0LL;
          }
LABEL_26:
          if ( !v42 )
            return 0;
        }
LABEL_27:
        sub_1EA6140(v14, v8, 4, 4);
        *v43 = a4->m128i_i32[0];
        return v8;
      case 0x31:
        v222.m128i_i64[0] = (__int64)a4;
        v88 = a4->m128i_i32[0];
        *(_OWORD *)v228 = 0;
        v89 = *(_QWORD *)(v9 + 32);
        *(_OWORD *)ptr = 0;
        v9 = 0;
        v90 = _mm_loadh_ps((const double *)v222.m128i_i64);
        v230 = 0;
        v222 = (__m128i)v90;
        v227 = sub_1E0B040((__int64 **)a1, (__m128i *)v228, v89, v88, 0, 0, 0.0, *(double *)a8.m128_u64, 0);
        if ( !sub_F22B30(&v227) )
          v9 = sub_1E25610(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1], v227);
LABEL_68:
        if ( HIDWORD(ptr[1]) )
          free(ptr[0]);
        return v9;
      case 0x33:
        v222.m128i_i64[0] = *a1;
        sub_18C79B0(v222.m128i_i64[0], 0, 0, 4);
        v74 = sub_1E11560(a1, *(unsigned __int16 **)(v9 + 24), a7, a8, v71, v72, v73);
        if ( v74 == 1 )
          goto LABEL_231;
        v79 = v74 & 0xFFFFFFFFFFFFFFFELL;
        v81 = sub_1934300(*a1, (_QWORD *)(v74 & 0xFFFFFFFFFFFFFFFELL), v75, v76, v77, v78, (__m128i)a7, a8);
        if ( v81 == 1 )
          goto LABEL_231;
        v82 = *v12;
        if ( *(_BYTE *)(*v12 + 16) != 51 )
        {
          v83 = *v12;
          v223.m128_u64[0] = v81;
          v82 = sub_F63050(v83, v79, v80, v81);
          v81 = v223.m128_u64[0];
        }
        if ( ((v84 = v81 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632)) || *(_QWORD *)(v9 + 24) != v84)
          && (v8 = sub_1E631F0(*a1, v84, (*(_BYTE *)(v82 + 18) & 8) != 0), (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
        {
LABEL_231:
          v8 = 0;
        }
        else
        {
          sub_1EA6140(v14, v8, 12, 4);
          *v85 = a4->m128i_i32[0];
          v85[1] = a4->m128i_i32[1];
          v85[2] = a4->m128i_i32[2];
        }
LABEL_59:
        sub_190D5E0(v222.m128i_i64[0], a7);
        return v8;
      case 0x34:
        v222.m128i_i64[0] = a4[1].m128i_i64[0];
        v121 = (__int64 *)sub_1E1F330(a1, v222.m128i_i64[0]);
        if ( !v121 )
          return 0;
        v122 = *v12;
        if ( *(_BYTE *)(*v12 + 16) != 52 )
          v122 = sub_F63050(*v12, v222.m128i_i64[0], v118, v119);
        v123 = *(unsigned int *)(*a1 + 12632);
        if ( (_DWORD)v123 || (__int64 *)v222.m128i_i64[0] != v121 )
        {
          v8 = sub_A81D80(*(_QWORD *)(*a1 + 248), *v121, (*(_BYTE *)(v122 + 18) & 8) != 0, v119, v123, v120);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            return 0;
        }
        sub_1EA6140(a2, v8, 24, 8);
        *(_DWORD *)v124 = a4->m128i_i32[0];
        *(_DWORD *)(v124 + 4) = a4->m128i_i32[1];
        v125 = a4->m128i_i32[2];
        *(_QWORD *)(v124 + 16) = v121;
        *(_DWORD *)(v124 + 8) = v125;
        return v8;
      case 0x35:
        v196 = sub_1E0AF30((__int64)a1, *(_QWORD *)(v9 + 32));
        v200 = v196;
        if ( !v196 )
          return 0;
        if ( !*(_DWORD *)(*a1 + 12632) && v196 == *(_QWORD *)(v9 + 32) )
          goto LABEL_27;
        v41 = *(_QWORD *)(v196 + 48);
        if ( v41 )
          goto LABEL_25;
        v8 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v200, *a1, v197, v198, v199);
        v42 = v8 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_26;
      case 0x36:
        if ( (*(_BYTE *)(v16 + 17) & 4) != 0 )
        {
          v194 = (_QWORD *)sub_1E1F330(a1, a4[1].m128i_i64[0]);
          if ( !v194 )
            return 0;
          v8 = sub_1E70DB0(*a1, *v194, *(unsigned int *)(v9 + 48), a4->m128i_u32[0]);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            return 0;
        }
        sub_1EA6140(a2, v8, 24, 8);
        *(_DWORD *)v195 = a4->m128i_i32[0];
        *(_QWORD *)(v195 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
        *(_QWORD *)(v195 + 16) = a4[1].m128i_i64[0];
        return v8;
      case 0x37:
        v190 = sub_1E0AF30((__int64)a1, *(_QWORD *)(v9 + 24));
        if ( v190 )
        {
          if ( !*(_DWORD *)(*a1 + 12632) && v190 == *(_QWORD *)(v9 + 24) )
            goto LABEL_27;
          v8 = sub_1E0ED30(a1, a4->m128i_i32[0], v190, v191, v192, v193, (__m128i)a7, *(double *)a8.m128_u64);
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            goto LABEL_27;
        }
        return 0;
      case 0x38:
        v95 = sub_1E0AF30((__int64)a1, *(_QWORD *)(v9 + 32));
        if ( !v95 )
          return 0;
        v96 = sub_F5DBF0(v9);
        v97 = sub_1E1F4E0(a1, v96);
        if ( (v97 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
        v98 = *a1;
        if ( *(_DWORD *)(*a1 + 12632) || v95 != *(_QWORD *)(v9 + 32) )
          goto LABEL_79;
        v222.m128i_i64[0] = v97;
        v220 = sub_F5DBF0(v9);
        v97 = v222.m128i_i64[0];
        if ( v222.m128i_i64[0] == v220 )
          goto LABEL_27;
        v98 = *a1;
LABEL_79:
        v8 = sub_A77600(*(_QWORD *)(v98 + 248), v95, v97);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_27;
        return 0;
      case 0x39:
        v175 = &a4->m128i_i8[4];
        v176 = sub_F6C520(*(_QWORD *)(v9 + 32));
        v177 = sub_1E1DA60(
                 a1,
                 a2,
                 *(_QWORD *)(v9 + 32),
                 v176 * ((unsigned __int64)&v175[-(v175 != nullptr)] / v176 + (v175 != nullptr)));
        if ( (v177 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(v9 + 32) == v177 )
            goto LABEL_27;
          v8 = sub_A70300(*(_QWORD *)(*a1 + 248), v177, *(_DWORD *)(v9 + 20), (*(_BYTE *)(v9 + 18) >> 3) & 0xF);
LABEL_178:
          if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            goto LABEL_27;
        }
        return 0;
      case 0x3A:
        v222.m128i_i64[0] = (__int64)a4;
        v222 = (__m128i)_mm_loadh_ps((const double *)v222.m128i_i64);
        return sub_1E2F340(a1, a2, v222.m128i_i64[0], v222.m128i_i64[1]);
    }
  }
  v222.m128i_i64[0] = (__int64)a4;
  v223 = _mm_loadh_ps((const double *)v222.m128i_i64);
  v17 = sub_F6C520(v16 & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *v12;
  v19 = v17 * (((unsigned __int64)a4 - (a4 != nullptr)) / v17 + (a4 != nullptr));
  v222.m128i_i64[0] = v19;
  v20 = _mm_loadh_ps((const double *)v222.m128i_i64);
  if ( (v18 & 7) != 0 )
    goto LABEL_4;
  v21 = v18;
  if ( (v18 & 8) != 0 )
    goto LABEL_4;
  v22 = v18 & 0xFFFFFFFFFFFFFFF0LL;
  v24 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v24 + 16) == 50 )
  {
    if ( v18 )
    {
      sub_1EA6140(v14, v18, 4, 4);
      *v26 = *(_DWORD *)v19;
LABEL_5:
      if ( v22 )
        goto LABEL_13;
      return 0;
    }
LABEL_4:
    v222 = (__m128i)v20;
    v21 = sub_1E1DA60(a1, v14, v20.m128_u64[0], v20.m128_u64[1]);
    v22 = v21 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_5;
  }
  if ( *(_BYTE *)(v24 + 16) != 45 || !v18 )
    goto LABEL_4;
  sub_1EA6140(v14, v18, 4, 4);
  *v25 = *(_DWORD *)v19;
  if ( !v22 )
    return 0;
LABEL_13:
  result = sub_1E0F080(a1, v21, v223.m128_i64[0], v223.m128_i64[1], v20);
  if ( (result & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  return result;
}
