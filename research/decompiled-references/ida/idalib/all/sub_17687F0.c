unsigned __int64 __fastcall sub_17687F0(_QWORD *a1, __int64 a2, __int64 a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int128 v9; // rax
  __int64 *v10; // r13
  __int64 v14; // rdi
  unsigned int v15; // eax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rbx
  __m128 v18; // xmm0
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r13
  unsigned __int64 result; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r13
  _DWORD *v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  _DWORD *v29; // rdx
  __int32 v30; // eax
  __int64 v31; // r8
  _DWORD *v32; // rdx
  __int64 v33; // rdi
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdx
  __int8 *v42; // r13
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r9
  unsigned __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // r8
  _DWORD *v49; // rdx
  __m128 v50; // xmm0
  __int64 v51; // rax
  void *v52; // rdi
  __int64 v53; // r13
  unsigned __int16 *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rdi
  bool v63; // zf
  __m128i v64; // xmm0
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  _QWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rsi
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r9
  __int64 *v84; // r14
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // rdx
  __int32 v88; // eax
  _QWORD *v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  _QWORD *v94; // r13
  __int64 v95; // rdi
  __int64 v96; // r13
  __int64 v97; // rsi
  __int64 v98; // rax
  unsigned __int64 v99; // rdx
  __int8 *v100; // r13
  unsigned int v101; // eax
  __int64 v102; // rax
  unsigned int v103; // ecx
  __int64 v104; // rdx
  __m128 v105; // xmm7
  __int64 v106; // rax
  unsigned __int64 v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rdi
  unsigned __int64 v112; // rsi
  _DWORD *v113; // rdx
  __int64 *v114; // r13
  unsigned int v115; // eax
  __int64 v116; // r13
  __int64 v117; // rdi
  _DWORD *v118; // rdx
  __int64 v119; // rax
  int v120; // r8d
  __int32 v121; // r9d
  __int32 v122; // edx
  int v123; // eax
  __int64 v124; // rdx
  unsigned int v125; // ecx
  __int64 v126; // rax
  int v127; // eax
  __int64 v128; // rsi
  __int64 v129; // rax
  __int32 v130; // eax
  __int8 *v131; // r13
  unsigned int v132; // eax
  __int64 v133; // r13
  __int64 v134; // rax
  __int64 v135; // r13
  unsigned __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // r13
  __int64 v140; // rax
  __int64 v141; // rax
  unsigned __int64 v142; // rax
  _DWORD *v143; // rdx
  unsigned int v144; // eax
  __int64 v145; // rbx
  __int64 v146; // r13
  __int64 v147; // rax
  unsigned __int64 v148; // rdx
  const __m128i *v149; // r13
  unsigned int v150; // eax
  __int64 v151; // rax
  __int64 v152; // rdx
  __int32 v153; // eax
  const __m128i *v154; // rbx
  unsigned int v155; // eax
  __int64 v156; // r13
  unsigned __int64 v157; // rbx
  __int64 v158; // rax
  unsigned int v159; // eax
  __int64 v160; // r13
  __int64 v161; // rax
  unsigned int v162; // eax
  _QWORD *v163; // rsi
  __m128 v164; // kr00_16
  unsigned __int16 *v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  unsigned __int32 v168; // r13d
  unsigned __int8 v169; // al
  _DWORD *v170; // rdx
  unsigned int v171; // ecx
  __int64 v172; // rdx
  unsigned __int64 v173; // rdx
  unsigned __int64 v174; // rax
  __int64 v175; // rdx
  unsigned int v176; // r13d
  unsigned int v177; // r15d
  unsigned int v178; // r14d
  unsigned int v179; // r13d
  unsigned int v180; // eax
  unsigned __int64 v181; // rdx
  __int64 v182; // rax
  unsigned __int64 v183; // rbp
  _DWORD *v184; // rdx
  _DWORD *v185; // rdx
  unsigned __int64 v186; // rax
  __int64 v187; // rax
  __m128i v188; // [rsp+0h] [rbp-D8h] BYREF
  __m128 v189; // [rsp+10h] [rbp-C8h]
  __int64 v190; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v191; // [rsp+30h] [rbp-A8h]
  __int64 v192; // [rsp+38h] [rbp-A0h]
  __m128 v193; // [rsp+40h] [rbp-98h] BYREF
  __int64 v194[4]; // [rsp+50h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-68h] BYREF
  __int128 v196; // [rsp+80h] [rbp-58h] BYREF
  __int128 v197; // [rsp+90h] [rbp-48h]

  v6 = a3;
  v7 = a3;
  *(_QWORD *)&v9 = (a3 >> 3) & 1;
  *((_QWORD *)&v9 + 1) = a3 & 7;
  v10 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *v10;
  if ( v9 != 0 )
  {
LABEL_3:
    v188.m128i_i64[0] = (__int64)a4;
    v189 = _mm_loadh_ps((const double *)v188.m128i_i64);
    v15 = sub_F6C520(v14 & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *v10;
    v17 = v15 * (((unsigned __int64)a4 - (a4 != nullptr)) / v15 + (a4 != nullptr));
    v188.m128i_i64[0] = v17;
    v18 = _mm_loadh_ps((const double *)v188.m128i_i64);
    if ( (v16 & 7) == 0 )
    {
      v19 = v16;
      if ( (v16 & 8) == 0 )
      {
        v22 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v22 + 16) == 50 )
        {
          if ( v16 )
          {
            v25 = *(_QWORD *)(v16 + 32);
            if ( v25 )
              v25 = sub_17473B0((__int64)a1, *(_QWORD *)(v16 + 32));
            v19 = sub_A77DD0(
                    *(_QWORD *)(*a1 + 248LL),
                    (*(_WORD *)(v16 + 20) & 0x7FFFu) + *((_DWORD *)a1 + 8),
                    *(unsigned __int16 *)(v16 + 22),
                    (unsigned __int8)((unsigned __int16)WORD2(*(_QWORD *)(v16 + 16)) >> 8) >> 7,
                    v25);
            sub_1EA6140(a2, v19, 4, 4);
            v20 = v19 & 0xFFFFFFFFFFFFFFF0LL;
            *v26 = *(_DWORD *)v17;
LABEL_5:
            if ( !v20 )
              return 0;
            goto LABEL_13;
          }
        }
        else
        {
          v23 = v16 & 0xFFFFFFFFFFFFFFF0LL;
          if ( *(_BYTE *)(v22 + 16) == 45 && v19 )
          {
            sub_1EA6140(a2, v19, 4, 4);
            *v24 = *(_DWORD *)v17;
            if ( !v23 )
              return 0;
LABEL_13:
            result = sub_174C2F0(a1, v19, v189.m128_i64[0], v189.m128_i64[1], v18);
            if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
              return result;
            return 0;
          }
        }
      }
    }
    v188 = (__m128i)v18;
    v19 = sub_17687F0(a1, a2, v18.m128_u64[0], v18.m128_u64[1]);
    v20 = v19 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_5;
  }
  switch ( *(_BYTE *)(v14 + 16) )
  {
    case 0:
      v162 = sub_F6C520(*(_QWORD *)(v7 + 32));
      return sub_17687F0(
               a1,
               a2,
               *(_QWORD *)(v7 + 32),
               v162 * (((unsigned __int64)a4 - (a4 != nullptr)) / v162 + (a4 != nullptr)));
    case 1:
      v159 = sub_F6C520(*(_QWORD *)(v7 + 32));
      v160 = sub_17687F0(
               a1,
               a2,
               *(_QWORD *)(v7 + 32),
               v159 * (((unsigned __int64)a4 - (a4 != nullptr)) / v159 + (a4 != nullptr)));
      v157 = v160 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v160 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v157;
      v161 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_200;
      v157 = v7;
      sub_F6C520(*(_QWORD *)(v7 + 32));
      if ( *(_QWORD *)(v7 + 32) != v160 )
      {
        v161 = *a1;
LABEL_200:
        v157 = sub_A75D20(*(_QWORD **)(v161 + 248), v160);
      }
      sub_1EA6140(a2, v157, 0, 1);
      return v157;
    case 2:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_176DEF0(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 3:
      v154 = a4 + 1;
      v155 = sub_F6C520(*(_QWORD *)(v7 + 32));
      v156 = sub_17687F0(
               a1,
               a2,
               *(_QWORD *)(v7 + 32),
               v155 * (((unsigned __int64)v154 - (v154 != nullptr)) / v155 + (v154 != nullptr)));
      v157 = v156 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v156 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v157;
      v158 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_192;
      v157 = v7;
      sub_F6C520(*(_QWORD *)(v7 + 32));
      if ( v156 != *(_QWORD *)(v7 + 32) )
      {
        v158 = *a1;
LABEL_192:
        v157 = sub_A72990(*(_QWORD *)(v158 + 248), v156);
      }
      sub_1EA6140(a2, v157, 16, 8);
      return v157;
    case 4:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_176E1A0(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 5:
      v149 = a4 + 1;
      v150 = sub_F6C520(*(_QWORD *)(v7 + 32));
      v151 = sub_17687F0(
               a1,
               a2,
               *(_QWORD *)(v7 + 32),
               v150 * (((unsigned __int64)v149 - (v149 != nullptr)) / v150 + (v149 != nullptr)));
      if ( (v151 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_67;
      if ( *(_DWORD *)(*a1 + 12632LL) || *(_QWORD *)(v7 + 32) != v151 )
      {
        v6 = sub_1741030(
               a1,
               v151,
               (*(_WORD *)(v7 + 18) >> 6) & 7,
               0,
               0,
               (*(_BYTE *)(v7 + 18) >> 3) & 7,
               a4->m128i_i64[0]);
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_67;
      }
      sub_1EA6140(a2, v6, 16, 8);
      *(_DWORD *)v152 = a4->m128i_i32[0];
      v153 = a4->m128i_i32[1];
      *(_QWORD *)(v152 + 8) = 0;
      *(_DWORD *)(v152 + 4) = v153;
      goto LABEL_40;
    case 6:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_176E330(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 7:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_176E4C0(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 8:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_176E5A0(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 9:
    case 0x3B:
      goto LABEL_3;
    case 0xA:
      v175 = *(unsigned int *)(*a1 + 12632LL);
      if ( !(_DWORD)v175 )
        goto LABEL_46;
      v176 = *(_DWORD *)(v7 + 32);
      v177 = a4->m128i_i32[0];
      v178 = *(_BYTE *)(v7 + 32) & 1;
      v179 = (v176 >> 1) & 0xFFFFFF;
      v180 = sub_AAC1F0(
               *(_QWORD *)(*a1 + 248LL),
               *(_QWORD *)(*(_QWORD *)(*a1 + 248LL) + 18720LL),
               v175,
               (__int64)a4,
               a5);
      LODWORD(ptr[1]) = v180;
      if ( v180 > 0x40 )
      {
        v188.m128i_i64[0] = (__int64)ptr;
        sub_2205470(ptr, v179, 1);
      }
      else
      {
        v181 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v180;
        if ( !v180 )
          LODWORD(v181) = 0;
        ptr[0] = (void *)((unsigned int)v181 & v179);
      }
      v182 = sub_C0C5D0(*(_QWORD **)(*a1 + 248LL), (__int64)ptr, *(_QWORD *)(*(_QWORD *)(*a1 + 248LL) + 18720LL), v177);
      v6 = sub_1E6EEC0(*a1, v178, v182, v177);
      if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
        operator delete[](ptr[0]);
      goto LABEL_101;
    case 0xB:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_176E940(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0xC:
      v144 = sub_F6C520(*(_QWORD *)(v7 + 32));
      v145 = sub_17687F0(
               a1,
               a2,
               *(_QWORD *)(v7 + 32),
               v144 * (((unsigned __int64)a4 - (a4 != nullptr)) / v144 + (a4 != nullptr)));
      if ( (v145 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_67;
      v146 = *(_QWORD *)(v7 + 56);
      if ( v146 )
      {
        v147 = sub_175B800(a1, *(unsigned __int16 **)(v7 + 56));
        if ( v147 == 1 )
        {
LABEL_67:
          v6 = 0;
          goto LABEL_40;
        }
        v148 = v147 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v148 = 0;
      }
      if ( *(_DWORD *)(*a1 + 12632LL) || v146 != v148 || v145 != *(_QWORD *)(v7 + 32) )
        v6 = sub_1E5F880(
               *a1,
               v145,
               v148,
               (unsigned __int8)BYTE2(*(_DWORD *)(v7 + 16)) >> 7,
               HIBYTE(*(_DWORD *)(v7 + 16)) & 1);
      sub_1EA6140(a2, v6, 0, 1);
LABEL_40:
      result = v6;
      break;
    case 0xD:
      v27 = (*(_WORD *)(v7 + 18) >> 3) & 0x1FF;
      if ( (unsigned int)(v27 - 443) <= 4 || (unsigned int)(v27 - 451) <= 0x24 || v27 == 438 || (v28 = 8, v27 == 449) )
        v28 = 12;
      sub_1EA6140(a2, v7, v28, 4);
      v30 = a4->m128i_i32[0];
      *v29 = a4->m128i_i32[0];
      v29[1] = v30;
      if ( (((*(_WORD *)(v7 + 18) >> 3) + 74) & 0x1FFu) <= 0x31
        && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v7 + 18) >> 3) + 74)) & 1) != 0 )
      {
        v29[2] = a4->m128i_i32[2];
      }
      return v7;
    case 0xE:
    case 0x2D:
      goto LABEL_30;
    case 0xF:
      v139 = *a1;
      sub_18C74E0(*a1, 0, 0, 0);
      v140 = sub_175B800(a1, *(unsigned __int16 **)(v7 + 24));
      if ( v140 == 1
        || (v141 = sub_19A4070(*a1, v140 & 0xFFFFFFFFFFFFFFFELL), v141 == 1)
        || ((v142 = v141 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632LL)) || *(_QWORD *)(v7 + 24) != v142)
        && (v6 = sub_1E5FBF0(*a1, v142, 1), (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
        v6 = 0;
      }
      else
      {
        sub_1EA6140(a2, v6, 8, 4);
        *v143 = a4->m128i_i32[0];
        v143[1] = a4->m128i_i32[1];
      }
      sub_190D5E0(v139);
      return v6;
    case 0x10:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1771560(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x11:
      v171 = a4->m128i_i32[0];
      *(_OWORD *)ptr = 0;
      v172 = *(_QWORD *)(v7 + 40);
      v196 = 0;
      v197 = 0;
      v194[0] = sub_17475E0(a1, (__int64)ptr, v172, v171, 0, 0, 0);
      if ( !sub_F22B30(v194)
        && ((v173 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0
         || (v173 = sub_176A2F0(a1, *(_QWORD *)(v7 + 24)), (v173 & 0xFFFFFFFFFFFFFFF0LL) != 0))
        && (v174 = sub_AB7C40(*(_QWORD **)(*a1 + 248LL), v194[0], v173, 0), v7 = v174,
                                                                            (v174 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        sub_1EA6140(a2, v174, 4, 4);
        *v185 = a4->m128i_i32[0];
      }
      else
      {
        v7 = 0;
      }
      goto LABEL_108;
    case 0x12:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_17762A0(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x13:
      v188.m128i_i64[0] = *a1;
      sub_18C74E0(v188.m128i_i64[0], 4, 0, 4);
      v165 = (unsigned __int16 *)sub_F57B50(v7);
      v166 = sub_175B800(a1, v165);
      v167 = sub_19146D0(*a1, v166);
      if ( v167 == 1 )
        goto LABEL_232;
      v189.m128_u64[0] = v167 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632LL) || v189.m128_u64[0] != sub_F57B50(v7) )
      {
        v168 = a4->m128i_i32[0];
        v169 = sub_F57B40(v7);
        v6 = sub_1E6EEC0(*a1, v169, v189.m128_u64[0], v168);
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_232;
      }
      sub_1EA6140(a2, v6, 4, 4);
      *v170 = a4->m128i_i32[0];
      goto LABEL_118;
    case 0x14:
      v188.m128i_i64[0] = (__int64)a4;
      v164 = _mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1771E30(a1, a2, v164.m128_u64[0], v164.m128_u64[1], 0, a6, v164.m128_u64[0], v164.m128_u64[1]);
    case 0x15:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_17763E0(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x16:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1772D50(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x17:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1776500(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x18:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1776620(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x19:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1776B80(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x1A:
      v188.m128i_i64[0] = (__int64)a4;
      ptr[1] = (void *)0x400000000LL;
      v194[1] = (__int64)&v193;
      v50 = _mm_loadh_ps((const double *)v188.m128i_i64);
      ptr[0] = &v196;
      v188 = (__m128i)v50;
      v193 = v50;
      v194[0] = (__int64)a1;
      v194[2] = (__int64)ptr;
      v51 = sub_1767640(a1, a2, v50.m128_i64[0], (_DWORD *)v50.m128_u64[1], 0, a6, a1, (__int64 *)&v193, (__int64)ptr);
      v52 = ptr[0];
      v7 = v51;
      if ( ptr[0] != &v196 )
        goto LABEL_49;
      return v7;
    case 0x1B:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1776CF0(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x1C:
      return v7;
    case 0x1D:
      v33 = v7;
      v7 = 0;
      v34 = sub_F61460(v33, a2, *((__int64 *)&v9 + 1), (__int64)a4, a5, a6);
      v35 = sub_17473B0((__int64)a1, (__int64)v34);
      if ( !v35 )
        return v7;
      v39 = *(_QWORD *)(v35 + 48);
      if ( v39 )
        v7 = v39 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v7 = sub_A7AA70(*(_QWORD *)(*a1 + 248LL), v35, *a1, v36, v37, v38);
      goto LABEL_30;
    case 0x1E:
      v42 = &a4->m128i_i8[4];
      v43 = sub_F6C520(*(_QWORD *)(v7 + 24));
      v46 = sub_17687F0(
              a1,
              a2,
              *(_QWORD *)(v7 + 24),
              v43 * ((unsigned __int64)&v42[-(v42 != nullptr)] / v43 + (v42 != nullptr)));
      if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_67;
      v47 = *a1;
      v48 = *(unsigned int *)(*a1 + 12632LL);
      if ( (_DWORD)v48 )
        goto LABEL_45;
      sub_F6C520(*(_QWORD *)(v7 + 24));
      if ( v46 == *(_QWORD *)(v7 + 24) )
        goto LABEL_46;
      v47 = *a1;
LABEL_45:
      v6 = sub_A820D0(*(_QWORD *)(v47 + 248), v46, *(_QWORD *)(v7 + 32), v44, v48, v45);
      if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_46;
      goto LABEL_67;
    case 0x1F:
      v40 = sub_176A2F0(a1, *(_QWORD *)(v7 + 32));
      if ( (v40 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_67;
      if ( *(_DWORD *)(*a1 + 12632LL) || *(_QWORD *)(v7 + 32) != v40 )
      {
        v6 = sub_A76DD0(*(_QWORD *)(*a1 + 248LL), v40, *(_DWORD *)(v7 + 40), *(_DWORD *)(v7 + 44));
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_67;
      }
      sub_1EA6140(a2, v6, 32, 8);
      *(_DWORD *)v41 = a4->m128i_i32[0];
      *(_QWORD *)(v41 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(__m128i *)(v41 + 16) = _mm_loadu_si128(a4 + 1);
      goto LABEL_40;
    case 0x20:
      v53 = sub_176A2F0(a1, *(_QWORD *)(v7 + 32));
      result = v53 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v53 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v190 = *a1;
        sub_18C74E0(v190, 4, 0, 4);
        v54 = (unsigned __int16 *)a4[1].m128i_i64[0];
        if ( !v54 )
          v54 = *(unsigned __int16 **)(v7 + 40);
        v55 = a4[1].m128i_i64[1];
        if ( !v55 )
          v55 = *(_QWORD *)(v7 + 48);
        v189.m128_u64[0] = v55;
        v188.m128i_i64[0] = (__int64)v54;
        v56 = sub_175B800(a1, v54);
        v57 = sub_19146D0(*a1, v56);
        v58 = v188.m128i_i64[0];
        if ( v57 != 1
          && (v188.m128i_i64[0] = v57,
              v192 = v58,
              v191 = v189.m128_u64[0],
              v59 = sub_175B800(a1, (unsigned __int16 *)v189.m128_u64[0]),
              v60 = sub_19146D0(*a1, v59),
              v60 != 1)
          && ((v61 = v188.m128i_i64[0],
               v62 = *a1,
               v188.m128i_i64[0] = v60 & 0xFFFFFFFFFFFFFFFELL,
               v63 = *(_DWORD *)(v62 + 12632) == 0,
               v189.m128_u64[0] = v61 & 0xFFFFFFFFFFFFFFFELL,
               v63)
           && *(_QWORD *)(v7 + 32) == v53
           && v192 == v189.m128_u64[0]
           && v191 == v188.m128i_i64[0]
           || (v6 = sub_1E71AF0(v62, v53, v189.m128_u64[0], v188.m128i_i64[0], *(unsigned int *)(v7 + 56)),
               (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
        {
          v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
          sub_1EA6140(a2, v6, 32, 8);
          v64 = _mm_load_si128(&v188);
          *(_DWORD *)v65 = a4->m128i_i32[0];
          v66 = *(__int64 *)((char *)a4->m128i_i64 + 4);
          *(__m128i *)(v65 + 16) = v64;
          *(_QWORD *)(v65 + 4) = v66;
          v67 = v6;
        }
        else
        {
          v67 = 0;
        }
        v188.m128i_i64[0] = v67;
        sub_190D5E0(v190);
        return v188.m128i_i64[0];
      }
      return result;
    case 0x21:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1776E00(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x22:
      v131 = &a4->m128i_i8[4];
      v132 = sub_F6C520(*(_QWORD *)(v7 + 32));
      v133 = sub_17687F0(
               a1,
               a2,
               *(_QWORD *)(v7 + 32),
               v132 * ((unsigned __int64)&v131[-(v131 != nullptr)] / v132 + (v131 != nullptr)));
      if ( (v133 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_67;
      v134 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_153;
      sub_F6C520(*(_QWORD *)(v7 + 32));
      if ( *(_QWORD *)(v7 + 32) == v133 )
        goto LABEL_46;
      v134 = *a1;
LABEL_153:
      v6 = sub_A74EC0(*(_QWORD *)(v134 + 248), v133);
      if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_46;
      goto LABEL_67;
    case 0x23:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1777040(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x24:
      sub_1EA6360(a2, v7, a4);
      return v7;
    case 0x25:
      v119 = sub_17473B0((__int64)a1, *(_QWORD *)(v7 + 40));
      if ( !v119 )
        goto LABEL_67;
      if ( *(_DWORD *)(*a1 + 12632LL) || v119 != *(_QWORD *)(v7 + 40) )
      {
        LOBYTE(v120) = *(_BYTE *)(v7 + 32) & 0x3F;
        if ( (_BYTE)v120 )
        {
          v121 = a4->m128i_i32[2];
          v122 = a4->m128i_i32[1];
          v120 = (unsigned __int8)v120;
        }
        else
        {
          v121 = 0;
          v120 = 0;
          v122 = 0;
        }
        v6 = sub_1A891C0(*(_QWORD *)(*a1 + 736LL), v119, v122, (int)v7 + 48, v120, v121, (int)a4 + 12, v120, 1);
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_67;
      }
      v123 = *(_BYTE *)(v6 + 32) & 0x3F;
      if ( (*(_BYTE *)(v6 + 32) & 0x3F) != 0 )
        v123 = 4 * v123 + 8;
      sub_1EA6140(a2, v6, 4 * ((unsigned int)(v123 + 3) >> 2) + 4, 4);
      if ( (*(_BYTE *)(v7 + 32) & 0x3F) != 0 )
      {
        *(_DWORD *)(v124 + 4) = a4->m128i_i32[1];
        v125 = *(_BYTE *)(v7 + 32) & 0x3F;
        if ( (*(_BYTE *)(v7 + 32) & 0x3F) == 0 )
          goto LABEL_247;
        if ( ((unsigned __int64)&a4->m128i_u64[1] + 4 >= v124 + 28
           || v124 + 12 >= (unsigned __int64)&a4[1].m128i_u64[1] + 4)
          && v125 - 1 > 2 )
        {
          v126 = 12;
          do
          {
            *(__m128i *)(v124 + v126) = _mm_loadu_si128((const __m128i *)((char *)a4 + v126));
            v126 += 16;
          }
          while ( 16LL * (v125 >> 2) + 12 != v126 );
          v127 = v125 & 0xFC;
          if ( v125 != (v125 & 0xFFFFFFFC) )
          {
            *(_DWORD *)(v124 + 4LL * ((unsigned __int8)v125 & 0xFC) + 12) = a4->m128i_i32[(v125 & 0xFC) + 3];
            v128 = (unsigned int)(v127 + 1);
            if ( v125 != (_DWORD)v128 )
            {
              v129 = (unsigned int)(v127 + 2);
              *(_DWORD *)(v124 + 4 * v128 + 12) = a4->m128i_i32[v128 + 3];
              if ( (_DWORD)v129 != v125 )
                *(_DWORD *)(v124 + 4 * v129 + 12) = a4->m128i_i32[v129 + 3];
            }
          }
        }
        else
        {
          v187 = 0;
          do
          {
            *(_DWORD *)(v124 + 4 * v187 + 12) = a4->m128i_i32[v187 + 3];
            ++v187;
          }
          while ( v125 != (_DWORD)v187 );
        }
        if ( (*(_BYTE *)(v7 + 32) & 0x3F) != 0 )
          v130 = a4->m128i_i32[2];
        else
LABEL_247:
          v130 = 0;
        *(_DWORD *)(v124 + 8) = v130;
      }
      goto LABEL_40;
    case 0x26:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1777870(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x27:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_176A330(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x28:
      v114 = &a4->m128i_i64[1];
      v115 = sub_F6C520(*(_QWORD *)(v7 + 32));
      v116 = sub_17687F0(
               a1,
               a2,
               *(_QWORD *)(v7 + 32),
               v115 * (((unsigned __int64)v114 - (v114 != nullptr)) / v115 + (v114 != nullptr)));
      if ( (v116 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_67;
      v117 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_123;
      sub_F6C520(*(_QWORD *)(v7 + 32));
      if ( *(_QWORD *)(v7 + 32) != v116 )
      {
        v117 = *a1;
LABEL_123:
        v6 = sub_1E5EFE0(v117, v116);
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_67;
      }
      sub_1EA6140(a2, v6, 8, 4);
      *v118 = a4->m128i_i32[0];
      v118[1] = a4->m128i_i32[1];
      goto LABEL_40;
    case 0x29:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_17779E0(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x2A:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1777B00(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x2B:
    case 0x2C:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1777C30(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
    case 0x2E:
      v96 = sub_17473B0((__int64)a1, *(_QWORD *)(v7 + 32));
      if ( (*(_BYTE *)(v7 + 18) & 8) != 0 )
        v97 = *(_QWORD *)(v7 + 48);
      else
        v97 = *(_QWORD *)(v7 + 8);
      v98 = sub_176A2F0(a1, v97);
      v99 = v98 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v98 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v183 = sub_A77C90(
                 *(_QWORD *)(*a1 + 248LL),
                 v98,
                 v96,
                 *(_WORD *)(v7 + 20) & 0x7FFF,
                 *(_WORD *)(v7 + 22) & 0x7FFF,
                 *(_BYTE *)(v7 + 21) >> 7);
        sub_1EA6140(a2, v183, 4, 4);
        *v184 = a4->m128i_i32[0];
        return v183;
      }
      return v99;
    case 0x2F:
      v89 = sub_F60F10(v7, a2, *((__int64 *)&v9 + 1), (__int64)a4, a5, a6);
      v94 = (_QWORD *)sub_17473B0((__int64)a1, (__int64)v89);
      if ( !v94 )
        goto LABEL_67;
      if ( !*(_DWORD *)(*a1 + 12632LL) && v94 == sub_F60F10(v7, (__int64)v89, v90, v91, v92, v93) )
        goto LABEL_46;
      v79 = v94[6];
      if ( v79 )
        goto LABEL_76;
      v95 = *(_QWORD *)(*a1 + 248LL);
      goto LABEL_91;
    case 0x30:
      v163 = sub_F60F10(v7, a2, *((__int64 *)&v9 + 1), (__int64)a4, a5, a6);
      v94 = (_QWORD *)sub_17473B0((__int64)a1, (__int64)v163);
      if ( !v94 )
        goto LABEL_67;
      v90 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_205;
      if ( v94 == sub_F60F10(v7, (__int64)v163, v90, v91, v92, v93) )
        goto LABEL_46;
      v90 = *a1;
LABEL_205:
      v79 = v94[6];
      if ( v79 )
        goto LABEL_76;
      v95 = *(_QWORD *)(v90 + 248);
LABEL_91:
      v6 = sub_A7AA70(v95, (__int64)v94, v90, v91, v92, v93);
      v80 = v6 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_77;
    case 0x31:
      v188.m128i_i64[0] = (__int64)a4;
      v103 = a4->m128i_i32[0];
      *(_OWORD *)ptr = 0;
      v104 = *(_QWORD *)(v7 + 32);
      v196 = 0;
      v7 = 0;
      v105 = _mm_loadh_ps((const double *)v188.m128i_i64);
      v197 = 0;
      v188 = (__m128i)v105;
      v194[0] = sub_17475E0(a1, (__int64)ptr, v104, v103, 0, 0, 0);
      if ( !sub_F22B30(v194) )
        v7 = sub_1770560(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1], v194[0]);
LABEL_108:
      if ( HIDWORD(v196) )
      {
        v52 = (void *)v196;
LABEL_49:
        free(v52);
      }
      return v7;
    case 0x32:
      v31 = *(_QWORD *)(v7 + 32);
      if ( v31 )
        v31 = sub_17473B0((__int64)a1, *(_QWORD *)(v7 + 32));
      v7 = sub_A77DD0(
             *(_QWORD *)(*a1 + 248LL),
             (*(_WORD *)(v7 + 20) & 0x7FFFu) + *((_DWORD *)a1 + 8),
             *(unsigned __int16 *)(v7 + 22),
             (unsigned __int8)((unsigned __int16)WORD2(*(_QWORD *)(v7 + 16)) >> 8) >> 7,
             v31);
LABEL_30:
      sub_1EA6140(a2, v7, 4, 4);
      *v32 = a4->m128i_i32[0];
      return v7;
    case 0x33:
      v188.m128i_i64[0] = *a1;
      sub_18C79B0(v188.m128i_i64[0], 0, 0, 4);
      v106 = sub_175B800(a1, *(unsigned __int16 **)(v7 + 24));
      if ( v106 == 1 )
        goto LABEL_232;
      v107 = v106 & 0xFFFFFFFFFFFFFFFELL;
      v109 = sub_1934300(*a1, v106 & 0xFFFFFFFFFFFFFFFELL);
      if ( v109 == 1 )
        goto LABEL_232;
      v110 = *v10;
      if ( *(_BYTE *)(*v10 + 16) != 51 )
      {
        v111 = *v10;
        v189.m128_u64[0] = v109;
        v110 = sub_F63050(v111, v107, v108, v109);
        v109 = v189.m128_u64[0];
      }
      if ( ((v112 = v109 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632LL)) || *(_QWORD *)(v7 + 24) != v112)
        && (v6 = sub_1E631F0(*a1, v112, (*(_BYTE *)(v110 + 18) & 8) != 0), (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
LABEL_232:
        v6 = 0;
      }
      else
      {
        sub_1EA6140(a2, v6, 12, 4);
        *v113 = a4->m128i_i32[0];
        v113[1] = a4->m128i_i32[1];
        v113[2] = a4->m128i_i32[2];
      }
LABEL_118:
      sub_190D5E0(v188.m128i_i64[0]);
      return v6;
    case 0x34:
      v188.m128i_i64[0] = a4[1].m128i_i64[0];
      v84 = (__int64 *)sub_176A140(a1, v188.m128i_i64[0]);
      if ( !v84 )
        goto LABEL_67;
      v85 = *v10;
      if ( *(_BYTE *)(*v10 + 16) != 52 )
        v85 = sub_F63050(*v10, v188.m128i_i64[0], v81, v82);
      v86 = *(unsigned int *)(*a1 + 12632LL);
      if ( (_DWORD)v86 || (__int64 *)v188.m128i_i64[0] != v84 )
      {
        v6 = sub_A81D80(*(_QWORD *)(*a1 + 248LL), *v84, (*(_BYTE *)(v85 + 18) & 8) != 0, v82, v86, v83);
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_67;
      }
      sub_1EA6140(a2, v6, 24, 8);
      *(_DWORD *)v87 = a4->m128i_i32[0];
      *(_DWORD *)(v87 + 4) = a4->m128i_i32[1];
      v88 = a4->m128i_i32[2];
      *(_QWORD *)(v87 + 16) = v84;
      *(_DWORD *)(v87 + 8) = v88;
      goto LABEL_40;
    case 0x35:
      v74 = sub_17473B0((__int64)a1, *(_QWORD *)(v7 + 32));
      v78 = v74;
      if ( !v74 )
        goto LABEL_67;
      if ( !*(_DWORD *)(*a1 + 12632LL) && v74 == *(_QWORD *)(v7 + 32) )
        goto LABEL_46;
      v79 = *(_QWORD *)(v74 + 48);
      if ( v79 )
      {
LABEL_76:
        v80 = v79 & 0xFFFFFFFFFFFFFFF0LL;
        v6 = v80;
      }
      else
      {
        v6 = sub_A7AA70(*(_QWORD *)(*a1 + 248LL), v78, *a1, v75, v76, v77);
        v80 = v6 & 0xFFFFFFFFFFFFFFF0LL;
      }
LABEL_77:
      if ( v80 )
        goto LABEL_46;
      goto LABEL_67;
    case 0x36:
      if ( (*(_BYTE *)(v14 + 17) & 4) != 0 )
      {
        v72 = (_QWORD *)sub_176A140(a1, a4[1].m128i_i64[0]);
        if ( !v72 )
          goto LABEL_67;
        v6 = sub_1E70DB0(*a1, *v72, *(unsigned int *)(v7 + 48), a4->m128i_u32[0]);
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_67;
      }
      sub_1EA6140(a2, v6, 24, 8);
      *(_DWORD *)v73 = a4->m128i_i32[0];
      *(_QWORD *)(v73 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(_QWORD *)(v73 + 16) = a4[1].m128i_i64[0];
      goto LABEL_40;
    case 0x37:
      v68 = sub_17473B0((__int64)a1, *(_QWORD *)(v7 + 24));
      if ( !v68 )
        goto LABEL_67;
      if ( *(_DWORD *)(*a1 + 12632LL) || v68 != *(_QWORD *)(v7 + 24) )
      {
        v6 = sub_174ACC0(a1, a4->m128i_i32[0], v68, v69, v70, v71);
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_67;
      }
      goto LABEL_46;
    case 0x38:
      v135 = sub_17473B0((__int64)a1, *(_QWORD *)(v7 + 32));
      if ( !v135 )
        goto LABEL_67;
      v136 = sub_F5DBF0(v7);
      v137 = sub_176A2F0(a1, v136);
      if ( (v137 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_67;
      v138 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) || v135 != *(_QWORD *)(v7 + 32) )
        goto LABEL_162;
      v188.m128i_i64[0] = v137;
      v186 = sub_F5DBF0(v7);
      v137 = v188.m128i_i64[0];
      if ( v188.m128i_i64[0] != v186 )
      {
        v138 = *a1;
LABEL_162:
        v6 = sub_A77600(*(_QWORD *)(v138 + 248), v135, v137);
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_67;
      }
LABEL_46:
      sub_1EA6140(a2, v6, 4, 4);
      *v49 = a4->m128i_i32[0];
      goto LABEL_40;
    case 0x39:
      v100 = &a4->m128i_i8[4];
      v101 = sub_F6C520(*(_QWORD *)(v7 + 32));
      v102 = sub_17687F0(
               a1,
               a2,
               *(_QWORD *)(v7 + 32),
               v101 * ((unsigned __int64)&v100[-(v100 != nullptr)] / v101 + (v100 != nullptr)));
      if ( (v102 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( !*(_DWORD *)(*a1 + 12632LL) && v102 == *(_QWORD *)(v7 + 32) )
          goto LABEL_46;
        v6 = sub_A70300(*(_QWORD *)(*a1 + 248LL), v102, *(_DWORD *)(v7 + 20), (*(_BYTE *)(v7 + 18) >> 3) & 0xF);
LABEL_101:
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_46;
      }
      goto LABEL_67;
    case 0x3A:
      v188.m128i_i64[0] = (__int64)a4;
      v188 = (__m128i)_mm_loadh_ps((const double *)v188.m128i_i64);
      return sub_1777D20(a1, a2, v188.m128i_i64[0], v188.m128i_i64[1]);
  }
  return result;
}
