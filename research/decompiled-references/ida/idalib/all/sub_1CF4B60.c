unsigned __int64 __fastcall sub_1CF4B60(
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
  __int64 v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r10
  _DWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rbx
  unsigned int v38; // r15d
  __m128i v39; // rax
  __m128 v40; // xmm0
  __int64 v41; // r14
  unsigned int v42; // eax
  _DWORD *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned int v46; // r9d
  unsigned int v47; // edx
  int v48; // eax
  __int64 v49; // rdx
  unsigned int v50; // ecx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rsi
  __int64 v54; // rax
  __int32 v55; // eax
  __int8 *v56; // r15
  unsigned int v57; // eax
  __int64 v58; // r15
  __int64 v59; // rax
  _DWORD *v60; // rdx
  __int64 v61; // r15
  __int64 v62; // r8
  unsigned __int16 *v63; // rcx
  __int64 v64; // rdx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // r8
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // rdi
  bool v81; // zf
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  unsigned __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  unsigned __int64 v93; // rsi
  __int64 v94; // rdx
  unsigned __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdi
  unsigned __int64 v98; // rcx
  _DWORD *v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rdx
  _QWORD *v102; // rsi
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  _QWORD *v107; // r15
  __int64 v108; // rax
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  int v111; // r14d
  __int64 v112; // r15
  __int64 v113; // rsi
  __int64 v114; // rax
  unsigned __int64 v115; // rdx
  __int64 v116; // r15
  unsigned __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rax
  __int8 *v120; // r15
  unsigned int v121; // eax
  __int64 v122; // rcx
  __int64 v123; // r9
  unsigned __int64 v124; // r15
  __int64 v125; // rax
  __int64 v126; // r8
  __m128 v127; // xmm0
  __int64 v128; // rbp
  _QWORD *v129; // rsi
  __int64 v130; // rdi
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 *v134; // r13
  __int64 v135; // rax
  __int64 v136; // r9
  __int64 v137; // rdx
  __int32 v138; // eax
  __int64 *v139; // r15
  unsigned int v140; // eax
  __int64 v141; // r15
  __int64 v142; // rdi
  _DWORD *v143; // rdx
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rax
  __int64 v147; // rdx
  int v148; // eax
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // r13
  __int64 v152; // rax
  unsigned int v153; // eax
  __int64 v154; // r14
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rdx
  __int8 *v158; // r15
  unsigned int v159; // eax
  __int64 v160; // rax
  __int64 v161; // r8
  __m128 v162; // kr00_16
  unsigned __int16 *v163; // rax
  __int64 v164; // rdx
  unsigned __int64 v165; // rcx
  __int64 v166; // r8
  unsigned __int64 v167; // rax
  unsigned __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rax
  unsigned int v173; // r15d
  unsigned __int8 v174; // al
  _DWORD *v175; // rdx
  unsigned int v176; // ecx
  __int64 v177; // rdx
  unsigned __int64 v178; // rdx
  unsigned __int64 v179; // rax
  unsigned __int64 v180; // r12
  __int64 v181; // rax
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  _QWORD *v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rax
  __int64 v188; // rcx
  __int64 v189; // r9
  __int64 v190; // rsi
  __int64 v191; // r8
  unsigned int v192; // ecx
  __int64 v193; // rdx
  __m128 v194; // xmm5
  unsigned int v195; // eax
  __int64 v196; // rdx
  unsigned __int64 v197; // rcx
  __int64 v198; // rbx
  __int64 v199; // r8
  __int64 v200; // r15
  __int64 v201; // rax
  unsigned __int64 v202; // rdx
  __int8 *v203; // r15
  unsigned int v204; // eax
  __int64 v205; // rax
  __int64 v206; // r15
  __int64 v207; // rdx
  unsigned __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // rax
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  unsigned __int64 v215; // rax
  unsigned __int64 v216; // rsi
  _DWORD *v217; // rdx
  char v218; // r14
  unsigned int v219; // r15d
  unsigned int v220; // r13d
  unsigned int v221; // r14d
  unsigned int v222; // eax
  __int64 v223; // r13
  unsigned __int64 v224; // rdx
  __int64 v225; // rax
  __int8 *v226; // r15
  unsigned int v227; // eax
  __int64 v228; // r15
  __int64 v229; // rdi
  unsigned __int64 v230; // r13
  _DWORD *v231; // rdx
  _DWORD *v232; // rdx
  unsigned __int64 v233; // rax
  __int64 v234; // rax
  __m128i v235; // [rsp+0h] [rbp-D8h] BYREF
  __m128 v236; // [rsp+10h] [rbp-C8h]
  __int64 v237; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v238; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v239; // [rsp+38h] [rbp-A0h]
  __m128 v240; // [rsp+40h] [rbp-98h] BYREF
  __m128 v241; // [rsp+50h] [rbp-88h] BYREF
  void **v242; // [rsp+60h] [rbp-78h]
  void *ptr[2]; // [rsp+70h] [rbp-68h] BYREF
  void *v244[2]; // [rsp+80h] [rbp-58h] BYREF
  __int128 v245; // [rsp+90h] [rbp-48h]

  v8 = a3;
  v9 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  *(_QWORD *)&v11 = (a3 >> 3) & 1;
  v10 = a3;
  *((_QWORD *)&v11 + 1) = a3 & 7;
  v15 = *v9;
  if ( v11 != 0 )
  {
LABEL_3:
    v235.m128i_i64[0] = (__int64)a4;
    v236 = _mm_loadh_ps((const double *)v235.m128i_i64);
    v16 = sub_F6C520(v15 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *v9;
    v18 = v16 * (((unsigned __int64)a4 - (a4 != nullptr)) / v16 + (a4 != nullptr));
    v235.m128i_i64[0] = v18;
    v19 = _mm_loadh_ps((const double *)v235.m128i_i64);
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
          result = sub_1CBC130(a1, v20, v236.m128_i64[0], v236.m128_i64[1], v19);
          if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            return result;
          return 0;
        }
      }
    }
    v235 = (__m128i)v19;
    v20 = sub_1CF4B60(a1, a2, v19.m128_u64[0], v19.m128_u64[1]);
    v21 = v20 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_5;
  }
  switch ( *(_BYTE *)(v15 + 16) )
  {
    case 0:
      v235.m128i_i64[0] = (__int64)a4;
      *(__m128 *)ptr = _mm_loadh_ps((const double *)v235.m128i_i64);
      v156 = sub_17430D0((__int64)ptr);
      return sub_1CF4B60(a1, a2, v156, v157);
    case 1:
      v153 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v154 = sub_1CF4B60(
               a1,
               a2,
               *(_QWORD *)(v10 + 32),
               v153 * (((unsigned __int64)a4 - (a4 != nullptr)) / v153 + (a4 != nullptr)));
      v37 = v154 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v154 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_26;
      v155 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_155;
      v37 = v10;
      sub_F6C520(*(_QWORD *)(v10 + 32));
      if ( *(_QWORD *)(v10 + 32) != v154 )
      {
        v155 = *a1;
LABEL_155:
        v37 = sub_A75D20(*(_QWORD **)(v155 + 248), v154);
      }
      sub_1EA6140(a2, v37, 0, 1);
      goto LABEL_26;
    case 2:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1CFDCB0(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 3:
      v235.m128i_i64[0] = (__int64)a4;
      *(__m128 *)ptr = _mm_loadh_ps((const double *)v235.m128i_i64);
      v149 = sub_BEB530((__int64)ptr);
      v151 = sub_1CF4B60(a1, a2, v149, v150);
      v37 = v151 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v151 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_26;
      v152 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_148;
      v37 = (__int64)ptr[0];
      if ( v151 != sub_BEB530((__int64)ptr) )
      {
        v152 = *a1;
LABEL_148:
        v37 = sub_A72990(*(_QWORD *)(v152 + 248), v151);
      }
      sub_1EA6140(a2, v37, 16, 8);
      goto LABEL_26;
    case 4:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D09F50(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 5:
      v235.m128i_i64[0] = (__int64)a4;
      *(__m128 *)ptr = _mm_loadh_ps((const double *)v235.m128i_i64);
      v144 = sub_BEB530((__int64)ptr);
      v146 = sub_1CF4B60(a1, a2, v144, v145);
      if ( (v146 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_240;
      if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(v10 + 32) == v146 )
      {
        v37 = (__int64)ptr[0];
        goto LABEL_142;
      }
      v37 = sub_1CAEE80(
              a1,
              v146,
              (*(_WORD *)(v10 + 18) >> 6) & 7,
              0,
              0,
              (*(_BYTE *)(v10 + 18) >> 3) & 7,
              *(_QWORD *)ptr[1]);
      if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
LABEL_142:
        sub_1EA6140(a2, v37, 16, 8);
        *(_DWORD *)v147 = *(_DWORD *)ptr[1];
        v148 = *((_DWORD *)ptr[1] + 1);
        *(_QWORD *)(v147 + 8) = 0;
        *(_DWORD *)(v147 + 4) = v148;
        goto LABEL_26;
      }
LABEL_240:
      v37 = 0;
LABEL_26:
      result = v37;
      break;
    case 6:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0A0E0(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 7:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0A270(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 8:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0A350(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 9:
    case 0x3B:
      goto LABEL_3;
    case 0xA:
      if ( !*(_DWORD *)(*a1 + 12632) )
        goto LABEL_55;
      v218 = *(_BYTE *)(v10 + 32);
      v219 = a4->m128i_i32[0];
      v220 = *(_DWORD *)(v10 + 32) >> 1;
      v221 = v218 & 1;
      v222 = sub_AAC1F0(*(_QWORD *)(*a1 + 248), *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v220, (__int64)a4, a5);
      v223 = v220 & 0xFFFFFF;
      LODWORD(ptr[1]) = v222;
      if ( v222 > 0x40 )
      {
        v235.m128i_i64[0] = (__int64)ptr;
        sub_2205470(ptr, v223, 1);
      }
      else
      {
        v224 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v222;
        if ( !v222 )
          v224 = 0;
        ptr[0] = (void *)(v224 & v223);
      }
      v225 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)ptr, *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 18720LL), v219);
      v8 = sub_1E6EEC0(*a1, v221, v225, v219);
      if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
        operator delete[](ptr[0]);
      goto LABEL_162;
    case 0xB:
      v226 = &a4->m128i_i8[4];
      v227 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v228 = sub_1CF4B60(
               a1,
               a2,
               *(_QWORD *)(v10 + 32),
               v227 * ((unsigned __int64)&v226[-(v226 != nullptr)] / v227 + (v226 != nullptr)));
      if ( (v228 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v229 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_237;
      sub_F6C520(*(_QWORD *)(v10 + 32));
      if ( *(_QWORD *)(v10 + 32) == v228 )
        goto LABEL_55;
      v229 = *a1;
LABEL_237:
      v8 = sub_1E6FF00(v229, v228, a4->m128i_u32[0], a1[5]);
      if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_55;
      return 0;
    case 0xC:
      v195 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v198 = sub_1CF4B60(
               a1,
               a2,
               *(_QWORD *)(v10 + 32),
               v195 * (((unsigned __int64)a4 - (a4 != nullptr)) / v195 + (a4 != nullptr)));
      if ( (v198 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v200 = *(_QWORD *)(v10 + 56);
      if ( v200 )
      {
        v201 = sub_1CE88F0(a1, *(unsigned __int16 **)(v10 + 56), a7, a8, v196, v197, v199);
        if ( v201 == 1 )
          return 0;
        v202 = v201 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v202 = 0;
      }
      if ( *(_DWORD *)(*a1 + 12632) || v200 != v202 || v198 != *(_QWORD *)(v10 + 32) )
        v8 = sub_1E5F880(
               *a1,
               v198,
               v202,
               (unsigned __int8)BYTE2(*(_DWORD *)(v10 + 16)) >> 7,
               HIBYTE(*(_DWORD *)(v10 + 16)) & 1);
      sub_1EA6140(a2, v8, 0, 1);
      return v8;
    case 0xD:
      return sub_1CB07B0(a2, v10, a4->m128i_i32);
    case 0xE:
    case 0x2D:
    case 0x32:
      goto LABEL_20;
    case 0xF:
      v206 = *a1;
      sub_18C74E0(*a1, 0, 0, 0);
      v210 = sub_1CE88F0(a1, *(unsigned __int16 **)(v10 + 24), a7, a8, v207, v208, v209);
      if ( v210 == 1
        || (v215 = sub_19A4070(*a1, (_QWORD *)(v210 & 0xFFFFFFFFFFFFFFFELL), v211, v212, v213, v214, a7, a8), v215 == 1)
        || ((v216 = v215 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632)) || *(_QWORD *)(v10 + 24) != v216)
        && (v8 = sub_1E5FBF0(*a1, v216, 1), (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
        v8 = 0;
      }
      else
      {
        sub_1EA6140(a2, v8, 8, 4);
        *v217 = a4->m128i_i32[0];
        v217[1] = a4->m128i_i32[1];
      }
      sub_190D5E0(v206, a7);
      return v8;
    case 0x10:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D042E0(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x11:
      v176 = a4->m128i_i32[0];
      *(_OWORD *)ptr = 0;
      v177 = *(_QWORD *)(v10 + 40);
      *(_OWORD *)v244 = 0;
      v245 = 0;
      v241.m128_u64[0] = sub_1CE66D0((__int64 **)a1, (__m128i *)ptr, v177, v176, 0, 0, 0.0, *(double *)a8.m128_u64, 0);
      if ( !sub_F22B30(&v241)
        && ((v178 = *(_QWORD *)(v10 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
         || (v178 = sub_1CF6840(a1, *(_QWORD *)(v10 + 24)), (v178 & 0xFFFFFFFFFFFFFFF0LL) != 0))
        && (v179 = sub_AB7C40(*(_QWORD **)(*a1 + 248), v241.m128_i64[0], v178, 0),
            v180 = v179,
            (v179 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        sub_1EA6140(a2, v179, 4, 4);
        *v232 = a4->m128i_i32[0];
      }
      else
      {
        v180 = 0;
      }
      if ( HIDWORD(v244[1]) )
        free(v244[0]);
      return v180;
    case 0x12:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0A6F0(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x13:
      v235.m128i_i64[0] = *a1;
      sub_18C74E0(v235.m128i_i64[0], 4, 0, 4);
      v163 = (unsigned __int16 *)sub_F57B50(v10);
      v167 = sub_1CE88F0(a1, v163, a7, a8, v164, v165, v166);
      v172 = sub_19146D0(*a1, v167, v168, v169, v170, v171, a7, a8);
      if ( v172 == 1 )
        goto LABEL_239;
      v236.m128_u64[0] = v172 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632) || v236.m128_u64[0] != sub_F57B50(v10) )
      {
        v173 = a4->m128i_i32[0];
        v174 = sub_F57B40(v10);
        v8 = sub_1E6EEC0(*a1, v174, v236.m128_u64[0], v173);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_239;
      }
      sub_1EA6140(a2, v8, 4, 4);
      *v175 = a4->m128i_i32[0];
      goto LABEL_78;
    case 0x14:
      v235.m128i_i64[0] = (__int64)a4;
      v162 = _mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D02ED0(a1, a2, v162.m128_u64[0], v162.m128_u64[1], 0, a6, v162.m128_u64[0], v162.m128_u64[1]);
    case 0x15:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0A830(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x16:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D04B00(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x17:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0A950(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x18:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0AA70(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x19:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0AFD0(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x1A:
      v235.m128i_i64[0] = (__int64)a4;
      ptr[1] = (void *)0x400000000LL;
      v241.m128_u64[1] = (unsigned __int64)&v240;
      v127 = _mm_loadh_ps((const double *)v235.m128i_i64);
      ptr[0] = v244;
      v235 = (__m128i)v127;
      v240 = v127;
      v241.m128_u64[0] = (unsigned __int64)a1;
      v242 = ptr;
      v128 = sub_1CF3B20(
               (__int64)a1,
               a2,
               v127.m128_i64[0],
               (_DWORD *)v127.m128_u64[1],
               0,
               *(double *)v127.m128_u64,
               a8,
               a6,
               a1,
               (__int64 *)&v240,
               (__int64)ptr);
      if ( ptr[0] != v244 )
        free(ptr[0]);
      return v128;
    case 0x1B:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0B140(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x1C:
      return v10;
    case 0x1D:
      v26 = v10;
      v10 = 0;
      v27 = sub_F61460(v26, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v28 = sub_1CB9120((__int64)a1, (__int64)v27);
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
      v120 = &a4->m128i_i8[4];
      v121 = sub_F6C520(*(_QWORD *)(v10 + 24));
      v124 = sub_1CF4B60(
               a1,
               a2,
               *(_QWORD *)(v10 + 24),
               v121 * ((unsigned __int64)&v120[-(v120 != nullptr)] / v121 + (v120 != nullptr)));
      if ( (v124 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v125 = *a1;
      v126 = *(unsigned int *)(*a1 + 12632);
      if ( (_DWORD)v126 )
        goto LABEL_111;
      sub_F6C520(*(_QWORD *)(v10 + 24));
      if ( v124 == *(_QWORD *)(v10 + 24) )
        goto LABEL_55;
      v125 = *a1;
LABEL_111:
      v8 = sub_A820D0(*(_QWORD *)(v125 + 248), v124, *(_QWORD *)(v10 + 32), v122, v126, v123);
      if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_55;
      return 0;
    case 0x1F:
      v100 = sub_1CF6840(a1, *(_QWORD *)(v10 + 32));
      if ( (v100 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      if ( *(_DWORD *)(*a1 + 12632) || v100 != *(_QWORD *)(v10 + 32) )
      {
        v8 = sub_A76DD0(*(_QWORD *)(*a1 + 248), v100, *(_DWORD *)(v10 + 40), *(_DWORD *)(v10 + 44));
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v8, 32, 8);
      *(_DWORD *)v101 = a4->m128i_i32[0];
      *(_QWORD *)(v101 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(__m128i *)(v101 + 16) = _mm_loadu_si128(a4 + 1);
      return v8;
    case 0x20:
      v61 = sub_1CF6840(a1, *(_QWORD *)(v10 + 32));
      result = v61 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v61 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v237 = *a1;
        sub_18C74E0(v237, 4, 0, 4);
        v63 = (unsigned __int16 *)a4[1].m128i_i64[0];
        if ( !v63 )
          v63 = *(unsigned __int16 **)(v10 + 40);
        v64 = a4[1].m128i_i64[1];
        if ( !v64 )
          v64 = *(_QWORD *)(v10 + 48);
        v236.m128_u64[0] = v64;
        v235.m128i_i64[0] = (__int64)v63;
        v65 = sub_1CE88F0(a1, v63, a7, a8, v64, (unsigned __int64)v63, v62);
        v70 = sub_19146D0(*a1, v65, v66, v67, v68, v69, a7, a8);
        v72 = v235.m128i_i64[0];
        if ( v70 != 1
          && (v235.m128i_i64[0] = v70,
              v239 = v72,
              v238 = v236.m128_u64[0],
              v73 = sub_1CE88F0(a1, (unsigned __int16 *)v236.m128_u64[0], a7, a8, v236.m128_i64[0], v72, v71),
              v78 = sub_19146D0(*a1, v73, v74, v75, v76, v77, a7, a8),
              v78 != 1)
          && ((v79 = v235.m128i_i64[0],
               v80 = *a1,
               v235.m128i_i64[0] = v78 & 0xFFFFFFFFFFFFFFFELL,
               v81 = *(_DWORD *)(v80 + 12632) == 0,
               v236.m128_u64[0] = v79 & 0xFFFFFFFFFFFFFFFELL,
               v81)
           && v61 == *(_QWORD *)(v10 + 32)
           && v239 == v236.m128_u64[0]
           && v238 == v235.m128i_i64[0]
           || (v8 = sub_1E71AF0(v80, v61, v236.m128_u64[0], v235.m128i_i64[0], *(unsigned int *)(v10 + 56)),
               (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
        {
          v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
          sub_1EA6140(a2, v8, 32, 8);
          a7 = (__m128)_mm_load_si128(&v235);
          *(_DWORD *)v82 = a4->m128i_i32[0];
          v83 = *(__int64 *)((char *)a4->m128i_i64 + 4);
          *(__m128 *)(v82 + 16) = a7;
          *(_QWORD *)(v82 + 4) = v83;
          v84 = v8;
        }
        else
        {
          v84 = 0;
        }
        v235.m128i_i64[0] = v84;
        sub_190D5E0(v237, a7);
        return v235.m128i_i64[0];
      }
      return result;
    case 0x21:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0B250(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x22:
      v56 = &a4->m128i_i8[4];
      v57 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v58 = sub_1CF4B60(
              a1,
              a2,
              *(_QWORD *)(v10 + 32),
              v57 * ((unsigned __int64)&v56[-(v56 != nullptr)] / v57 + (v56 != nullptr)));
      if ( (v58 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v59 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_54;
      sub_F6C520(*(_QWORD *)(v10 + 32));
      if ( *(_QWORD *)(v10 + 32) == v58 )
        goto LABEL_55;
      v59 = *a1;
LABEL_54:
      v8 = sub_A74EC0(*(_QWORD *)(v59 + 248), v58);
      if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_55;
      return 0;
    case 0x23:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0B490(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x24:
      sub_1EA6360(a2, v10, a4);
      return v10;
    case 0x25:
      v44 = sub_1CB9120((__int64)a1, *(_QWORD *)(v10 + 40));
      if ( !v44 )
        return 0;
      if ( *(_DWORD *)(*a1 + 12632) || v44 != *(_QWORD *)(v10 + 40) )
      {
        LOBYTE(v45) = *(_BYTE *)(v10 + 32) & 0x3F;
        if ( (_BYTE)v45 )
        {
          v46 = a4->m128i_u32[2];
          v47 = a4->m128i_u32[1];
          v45 = (unsigned __int8)v45;
        }
        else
        {
          v46 = 0;
          v45 = 0;
          v47 = 0;
        }
        v8 = sub_1A891C0(*(__int64 **)(*a1 + 736), v44, v47, (_BYTE *)(v10 + 48), v45, v46, (int)a4 + 12, v45, 1);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      v48 = *(_BYTE *)(v8 + 32) & 0x3F;
      if ( (*(_BYTE *)(v8 + 32) & 0x3F) != 0 )
        v48 = 4 * v48 + 8;
      sub_1EA6140(a2, v8, 4 * ((unsigned int)(v48 + 3) >> 2) + 4, 4);
      if ( (*(_BYTE *)(v10 + 32) & 0x3F) != 0 )
      {
        *(_DWORD *)(v49 + 4) = a4->m128i_i32[1];
        v50 = *(_BYTE *)(v10 + 32) & 0x3F;
        if ( (*(_BYTE *)(v10 + 32) & 0x3F) == 0 )
          goto LABEL_256;
        if ( ((unsigned __int64)&a4->m128i_u64[1] + 4 >= v49 + 28
           || v49 + 12 >= (unsigned __int64)&a4[1].m128i_u64[1] + 4)
          && v50 - 1 > 2 )
        {
          v51 = 12;
          do
          {
            *(__m128i *)(v49 + v51) = _mm_loadu_si128((__m128i *)((char *)a4 + v51));
            v51 += 16;
          }
          while ( 16LL * (v50 >> 2) + 12 != v51 );
          v52 = v50 & 0xFC;
          if ( (v50 & 0xFFFFFFFC) != v50 )
          {
            *(_DWORD *)(v49 + 4LL * ((unsigned __int8)v50 & 0xFC) + 12) = a4->m128i_i32[(v50 & 0xFC) + 3];
            v53 = (unsigned int)(v52 + 1);
            if ( v50 != (_DWORD)v53 )
            {
              v54 = (unsigned int)(v52 + 2);
              *(_DWORD *)(v49 + 12 + 4 * v53) = a4->m128i_i32[v53 + 3];
              if ( (_DWORD)v54 != v50 )
                *(_DWORD *)(v49 + 4 * v54 + 12) = a4->m128i_i32[v54 + 3];
            }
          }
        }
        else
        {
          v234 = 0;
          do
          {
            *(_DWORD *)(v49 + 4 * v234 + 12) = a4->m128i_i32[v234 + 3];
            ++v234;
          }
          while ( v50 != (_DWORD)v234 );
        }
        if ( (*(_BYTE *)(v10 + 32) & 0x3F) != 0 )
          v55 = a4->m128i_i32[2];
        else
LABEL_256:
          v55 = 0;
        *(_DWORD *)(v49 + 8) = v55;
      }
      return v8;
    case 0x26:
      v235.m128i_i64[0] = (__int64)a4;
      v241 = _mm_loadh_ps((const double *)v235.m128i_i64);
      v34 = sub_1743190((__int64)&v241);
      v36 = sub_1CF4B60(a1, a2, v34, v35);
      if ( (v36 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_240;
      v37 = v241.m128_u64[0];
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_24;
      if ( v36 != sub_1743190((__int64)&v241) )
      {
        v37 = v241.m128_u64[0];
LABEL_24:
        v38 = *(_DWORD *)(v37 + 20);
        v236.m128_i32[0] = *(_DWORD *)v241.m128_u64[1];
        v39.m128i_i64[0] = sub_1743190((__int64)&v241);
        v235 = v39;
        v40 = (__m128)_mm_load_si128(&v235);
        *(__m128 *)ptr = v40;
        v41 = (unsigned int)sub_F6CE20((__int64 *)ptr);
        v42 = sub_F6CCB0((__int64 *)ptr, v40);
        v37 = sub_1E503F0(*a1, v36, (v41 << 32) | v42, v236.m128_u32[0], v38);
        if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_240;
      }
      sub_1EA6140(a2, v37, 4, 4);
      *v43 = *(_DWORD *)v241.m128_u64[1];
      goto LABEL_26;
    case 0x27:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1CF6890(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x28:
      v139 = &a4->m128i_i64[1];
      v140 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v141 = sub_1CF4B60(
               a1,
               a2,
               *(_QWORD *)(v10 + 32),
               v140 * (((unsigned __int64)v139 - (v139 != nullptr)) / v140 + (v139 != nullptr)));
      if ( (v141 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v142 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_135;
      sub_F6C520(*(_QWORD *)(v10 + 32));
      if ( *(_QWORD *)(v10 + 32) != v141 )
      {
        v142 = *a1;
LABEL_135:
        v8 = sub_1E5EFE0(v142, v141);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v8, 8, 4);
      *v143 = a4->m128i_i32[0];
      v143[1] = a4->m128i_i32[1];
      return v8;
    case 0x29:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0BBC0(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x2A:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0BCE0(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x2B:
    case 0x2C:
      v235.m128i_i64[0] = (__int64)a4;
      v235 = (__m128i)_mm_loadh_ps((const double *)v235.m128i_i64);
      return sub_1D0BE20(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1]);
    case 0x2E:
      v110 = sub_1CB9120((__int64)a1, *(_QWORD *)(v10 + 32));
      v111 = *((_DWORD *)a1 + 8);
      v112 = a1[5];
      v235.m128i_i64[0] = v110;
      if ( a4->m128i_i32[0] )
      {
        *((_DWORD *)a1 + 8) = a4->m128i_i32[0];
        a1[5] = 0;
      }
      if ( (*(_BYTE *)(v10 + 18) & 8) != 0 )
        v113 = *(_QWORD *)(v10 + 48);
      else
        v113 = *(_QWORD *)(v10 + 8);
      v114 = sub_1CF6840(a1, v113);
      v115 = v114 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v114 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v230 = sub_A77C90(
                 *(_QWORD *)(*a1 + 248),
                 v114,
                 v235.m128i_i64[0],
                 *(_WORD *)(v10 + 20) & 0x7FFF,
                 *(_WORD *)(v10 + 22) & 0x7FFF,
                 *(_BYTE *)(v10 + 21) >> 7);
        sub_1EA6140(a2, v230, 4, 4);
        *v231 = a4->m128i_i32[0];
        v115 = v230;
      }
      *((_DWORD *)a1 + 8) = v111;
      a1[5] = v112;
      return v115;
    case 0x2F:
      v102 = sub_F60F10(v10, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v107 = (_QWORD *)sub_1CB9120((__int64)a1, (__int64)v102);
      if ( !v107 )
        return 0;
      if ( !*(_DWORD *)(*a1 + 12632) && v107 == sub_F60F10(v10, (__int64)v102, v103, v104, v105, v106) )
        goto LABEL_55;
      v108 = v107[6];
      if ( v108 )
        goto LABEL_88;
      v130 = *(_QWORD *)(*a1 + 248);
      goto LABEL_123;
    case 0x30:
      v129 = sub_F60F10(v10, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v107 = (_QWORD *)sub_1CB9120((__int64)a1, (__int64)v129);
      if ( !v107 )
        return 0;
      v103 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) )
        goto LABEL_121;
      if ( v107 == sub_F60F10(v10, (__int64)v129, v103, v104, v105, v106) )
        goto LABEL_55;
      v103 = *a1;
LABEL_121:
      v108 = v107[6];
      if ( v108 )
        goto LABEL_88;
      v130 = *(_QWORD *)(v103 + 248);
LABEL_123:
      v8 = sub_A7AA70(v130, (__int64)v107, v103, v104, v105, v106);
      v109 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_89;
    case 0x31:
      v235.m128i_i64[0] = (__int64)a4;
      v192 = a4->m128i_i32[0];
      *(_OWORD *)ptr = 0;
      v193 = *(_QWORD *)(v10 + 32);
      *(_OWORD *)v244 = 0;
      v194 = _mm_loadh_ps((const double *)v235.m128i_i64);
      v245 = 0;
      v235 = (__m128i)v194;
      v241.m128_u64[0] = sub_1CE66D0((__int64 **)a1, (__m128i *)ptr, v193, v192, 0, 0, 0.0, *(double *)a8.m128_u64, 0);
      v37 = 0;
      if ( !sub_F22B30(&v241) )
        v37 = sub_1CFFF60(a1, a2, v235.m128i_i64[0], v235.m128i_i64[1], v241.m128_u64[0]);
      if ( HIDWORD(v244[1]) )
        free(v244[0]);
      goto LABEL_26;
    case 0x33:
      v235.m128i_i64[0] = *a1;
      sub_18C79B0(v235.m128i_i64[0], 0, 0, 4);
      v88 = sub_1CE88F0(a1, *(unsigned __int16 **)(v10 + 24), a7, a8, v85, v86, v87);
      if ( v88 == 1 )
        goto LABEL_239;
      v93 = v88 & 0xFFFFFFFFFFFFFFFELL;
      v95 = sub_1934300(*a1, (_QWORD *)(v88 & 0xFFFFFFFFFFFFFFFELL), v89, v90, v91, v92, (__m128i)a7, a8);
      if ( v95 == 1 )
        goto LABEL_239;
      v96 = *v9;
      if ( *(_BYTE *)(*v9 + 16) != 51 )
      {
        v97 = *v9;
        v236.m128_u64[0] = v95;
        v96 = sub_F63050(v97, v93, v94, v95);
        v95 = v236.m128_u64[0];
      }
      if ( ((v98 = v95 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632)) || v98 != *(_QWORD *)(v10 + 24))
        && (v8 = sub_1E631F0(*a1, v98, (*(_BYTE *)(v96 + 18) & 8) != 0), (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
LABEL_239:
        v8 = 0;
      }
      else
      {
        sub_1EA6140(a2, v8, 12, 4);
        *v99 = a4->m128i_i32[0];
        v99[1] = a4->m128i_i32[1];
        v99[2] = a4->m128i_i32[2];
      }
LABEL_78:
      sub_190D5E0(v235.m128i_i64[0], a7);
      return v8;
    case 0x34:
      v235.m128i_i64[0] = a4[1].m128i_i64[0];
      v134 = (__int64 *)sub_1CF6590(a1, v235.m128i_i64[0]);
      if ( !v134 )
        return 0;
      v135 = *v9;
      if ( *(_BYTE *)(*v9 + 16) != 52 )
        v135 = sub_F63050(*v9, v235.m128i_i64[0], v131, v132);
      v136 = *(unsigned int *)(*a1 + 12632);
      if ( (_DWORD)v136 || (__int64 *)v235.m128i_i64[0] != v134 )
      {
        v8 = sub_A81D80(*(_QWORD *)(*a1 + 248), *v134, (*(_BYTE *)(v135 + 18) & 8) != 0, v132, v133, v136);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v8, 24, 8);
      *(_DWORD *)v137 = a4->m128i_i32[0];
      *(_DWORD *)(v137 + 4) = a4->m128i_i32[1];
      v138 = a4->m128i_i32[2];
      *(_QWORD *)(v137 + 16) = v134;
      *(_DWORD *)(v137 + 8) = v138;
      return v8;
    case 0x35:
      v187 = sub_1CB9120((__int64)a1, *(_QWORD *)(v10 + 32));
      v190 = v187;
      if ( !v187 )
        return 0;
      v191 = *(unsigned int *)(*a1 + 12632);
      if ( !(_DWORD)v191 && v187 == *(_QWORD *)(v10 + 32) )
        goto LABEL_55;
      v108 = *(_QWORD *)(v187 + 48);
      if ( v108 )
      {
LABEL_88:
        v109 = v108 & 0xFFFFFFFFFFFFFFF0LL;
        v8 = v109;
      }
      else
      {
        v8 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v190, *a1, v188, v191, v189);
        v109 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      }
LABEL_89:
      if ( !v109 )
        return 0;
      goto LABEL_55;
    case 0x36:
      if ( (*(_BYTE *)(v15 + 17) & 4) != 0 )
      {
        v185 = (_QWORD *)sub_1CF6590(a1, a4[1].m128i_i64[0]);
        if ( !v185 )
          return 0;
        v8 = sub_1E70DB0(*a1, *v185, *(unsigned int *)(v10 + 48), a4->m128i_u32[0]);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
      sub_1EA6140(a2, v8, 24, 8);
      *(_DWORD *)v186 = a4->m128i_i32[0];
      *(_QWORD *)(v186 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(_QWORD *)(v186 + 16) = a4[1].m128i_i64[0];
      return v8;
    case 0x37:
      v181 = sub_1CB9120((__int64)a1, *(_QWORD *)(v10 + 24));
      if ( v181 )
      {
        if ( !*(_DWORD *)(*a1 + 12632) && v181 == *(_QWORD *)(v10 + 24) )
          goto LABEL_55;
        v8 = sub_1CBC6A0(a1, a4->m128i_i32[0], v181, v182, v183, v184, (__m128i)a7, *(double *)a8.m128_u64);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_55;
      }
      return 0;
    case 0x38:
      v116 = sub_1CB9120((__int64)a1, *(_QWORD *)(v10 + 32));
      if ( !v116 )
        return 0;
      v117 = sub_F5DBF0(v10);
      v118 = sub_1CF6840(a1, v117);
      if ( (v118 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return 0;
      v119 = *a1;
      if ( *(_DWORD *)(*a1 + 12632) || v116 != *(_QWORD *)(v10 + 32) )
        goto LABEL_105;
      v235.m128i_i64[0] = v118;
      v233 = sub_F5DBF0(v10);
      v118 = v235.m128i_i64[0];
      if ( v235.m128i_i64[0] != v233 )
      {
        v119 = *a1;
LABEL_105:
        v8 = sub_A77600(*(_QWORD *)(v119 + 248), v116, v118);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 0;
      }
LABEL_55:
      sub_1EA6140(a2, v8, 4, 4);
      *v60 = a4->m128i_i32[0];
      return v8;
    case 0x39:
      v203 = &a4->m128i_i8[4];
      v204 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v205 = sub_1CF4B60(
               a1,
               a2,
               *(_QWORD *)(v10 + 32),
               v204 * ((unsigned __int64)&v203[-(v203 != nullptr)] / v204 + (v203 != nullptr)));
      if ( (v205 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(v10 + 32) == v205 )
          goto LABEL_55;
        v8 = sub_A70300(*(_QWORD *)(*a1 + 248), v205, *(_DWORD *)(v10 + 20), (*(_BYTE *)(v10 + 18) >> 3) & 0xF);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_55;
      }
      return 0;
    case 0x3A:
      v158 = &a4->m128i_i8[4];
      v159 = sub_F6C520(*(_QWORD *)(v10 + 32));
      v160 = sub_1CF4B60(
               a1,
               a2,
               *(_QWORD *)(v10 + 32),
               v159 * ((unsigned __int64)&v158[-(v158 != nullptr)] / v159 + (v158 != nullptr)));
      if ( (v160 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(v10 + 32) == v160 )
          goto LABEL_55;
        v8 = sub_1CB0960(a1, v160, *(unsigned int *)(v10 + 20), 0, v161);
LABEL_162:
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_55;
      }
      return 0;
  }
  return result;
}
