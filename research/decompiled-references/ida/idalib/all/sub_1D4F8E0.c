unsigned __int64 __fastcall sub_1D4F8E0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128 si128,
        __m128 a8)
{
  __int64 v8; // r15
  __int64 v9; // r14
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
  int v27; // eax
  __int64 v28; // rdx
  _DWORD *v29; // rdx
  __int32 v30; // eax
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  _DWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned int v41; // r9d
  unsigned int v42; // edx
  int v43; // eax
  __int64 v44; // rdx
  unsigned int v45; // ecx
  __int64 v46; // rdi
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int32 v51; // eax
  __int8 *v52; // r13
  unsigned int v53; // eax
  __int64 v54; // r13
  __int64 v55; // rax
  _DWORD *v56; // rdx
  __int64 v57; // r13
  __int64 v58; // r8
  void *v59; // rcx
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  char *v66; // rax
  __int64 v67; // r8
  void *v68; // rcx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rdi
  bool v76; // zf
  __int64 v77; // rdx
  __int64 v78; // rax
  void *v79; // rax
  __int64 v80; // rdx
  unsigned __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  unsigned __int64 v88; // rsi
  __int64 v89; // rdx
  unsigned __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdi
  unsigned __int64 v93; // rcx
  _DWORD *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  _QWORD *v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  _QWORD *v102; // r13
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // r13
  __int64 v106; // rsi
  __int64 v107; // rax
  unsigned __int64 v108; // rdx
  __int64 v109; // r13
  unsigned __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rax
  __m128 v113; // xmm0
  __int64 v114; // rax
  void *v115; // rdi
  __int8 *v116; // r13
  unsigned int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // r9
  unsigned __int64 v120; // r13
  __int64 v121; // rax
  __int64 v122; // r8
  __int64 *v123; // r13
  unsigned int v124; // eax
  __int64 v125; // r13
  __int64 v126; // rdi
  _DWORD *v127; // rdx
  const __m128i *v128; // r13
  unsigned int v129; // eax
  __int64 v130; // rax
  __int64 v131; // rdx
  __int32 v132; // eax
  const __m128i *v133; // rbx
  unsigned int v134; // eax
  __int64 v135; // r13
  unsigned __int64 v136; // rbx
  __int64 v137; // rax
  unsigned int v138; // eax
  __int64 v139; // r13
  __int64 v140; // rax
  unsigned int v141; // eax
  __m128 v142; // kr00_16
  unsigned __int16 *v143; // rax
  __int64 v144; // rdx
  unsigned __int64 v145; // rcx
  __int64 v146; // r8
  unsigned __int64 v147; // rax
  unsigned __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rax
  unsigned __int32 v153; // r13d
  unsigned __int8 v154; // al
  _DWORD *v155; // rdx
  __int64 v156; // rax
  void *v157; // rdx
  void *v158; // rbp
  unsigned int v159; // eax
  __int64 v160; // r13
  __int64 v161; // rdx
  unsigned __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  unsigned __int64 v169; // rax
  unsigned __int64 v170; // rax
  _DWORD *v171; // rdx
  __int8 *v172; // r13
  unsigned int v173; // eax
  __int64 v174; // rax
  unsigned int v175; // eax
  __int64 v176; // rdx
  unsigned __int64 v177; // rcx
  __int64 v178; // rbx
  __int64 v179; // r8
  __int64 v180; // r13
  __int64 v181; // rax
  unsigned __int64 v182; // rdx
  __int8 *v183; // r13
  unsigned int v184; // eax
  __int64 v185; // r13
  __int64 v186; // rdi
  __int64 v187; // rdx
  unsigned int v188; // r13d
  unsigned int v189; // r15d
  unsigned int v190; // r14d
  unsigned int v191; // r13d
  unsigned int v192; // eax
  unsigned __int64 v193; // rdx
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  _QWORD *v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rax
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rsi
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r9
  __int64 *v209; // r14
  __int64 v210; // rax
  __int64 v211; // r8
  __int64 v212; // rdx
  __int32 v213; // eax
  unsigned int v214; // ecx
  __int64 v215; // rdx
  _QWORD *v216; // rsi
  __int64 v217; // rdi
  unsigned __int64 v218; // r12
  _DWORD *v219; // rdx
  void *v220; // rax
  __int64 v221; // rax
  void *src[2]; // [rsp+0h] [rbp-D8h] BYREF
  __m128 v223; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v224; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v225; // [rsp+30h] [rbp-A8h]
  void *v226; // [rsp+38h] [rbp-A0h]
  __m128 v227; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v228[4]; // [rsp+50h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-68h] BYREF
  _OWORD v230[5]; // [rsp+80h] [rbp-58h] BYREF

  v8 = a3;
  v9 = a3;
  *(_QWORD *)&v11 = (a3 >> 3) & 1;
  *((_QWORD *)&v11 + 1) = a3 & 7;
  v12 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *v12;
  if ( v11 != 0 )
  {
LABEL_3:
    src[0] = (void *)a4;
    v223 = _mm_loadh_ps((const double *)src);
    v17 = sub_F6C520(v16 & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *v12;
    v19 = v17 * (((unsigned __int64)a4 - (a4 != nullptr)) / v17 + (a4 != nullptr));
    src[0] = (void *)v19;
    v20 = _mm_loadh_ps((const double *)src);
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
          result = sub_1D40AC0(a1, v21, v223.m128_i64[0], v223.m128_i64[1], v20);
          if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            return result;
          return 0;
        }
      }
    }
    *(__m128 *)src = v20;
    v21 = sub_1D4F8E0(a1, a2, v20.m128_u64[0], v20.m128_u64[1]);
    v22 = v21 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_5;
  }
  switch ( *(_BYTE *)(v16 + 16) )
  {
    case 0:
      v141 = sub_F6C520(*(_QWORD *)(v9 + 32));
      return sub_1D4F8E0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v141 * (((unsigned __int64)a4 - (a4 != nullptr)) / v141 + (a4 != nullptr)));
    case 1:
      v138 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v139 = sub_1D4F8E0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v138 * (((unsigned __int64)a4 - (a4 != nullptr)) / v138 + (a4 != nullptr)));
      v136 = v139 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v139 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v136;
      v140 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_144;
      v136 = v9;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( *(_QWORD *)(v9 + 32) != v139 )
      {
        v140 = *a1;
LABEL_144:
        v136 = sub_A75D20(*(_QWORD **)(v140 + 248), v139);
      }
      sub_1EA6140(a2, v136, 0, 1);
      return v136;
    case 2:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D511D0(a1, a2, src[0], src[1]);
    case 3:
      v133 = a4 + 1;
      v134 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v135 = sub_1D4F8E0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v134 * (((unsigned __int64)v133 - (v133 != nullptr)) / v134 + (v133 != nullptr)));
      v136 = v135 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v135 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v136;
      v137 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_136;
      v136 = v9;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( *(_QWORD *)(v9 + 32) != v135 )
      {
        v137 = *a1;
LABEL_136:
        v136 = sub_A72990(*(_QWORD *)(v137 + 248), v135);
      }
      sub_1EA6140(a2, v136, 16, 8);
      return v136;
    case 4:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D60BB0(a1, a2, src[0], src[1]);
    case 5:
      v128 = a4 + 1;
      v129 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v130 = sub_1D4F8E0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v129 * (((unsigned __int64)v128 - (v128 != nullptr)) / v129 + (v128 != nullptr)));
      if ( (v130 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      if ( *(_DWORD *)(*a1 + 12632LL) || v130 != *(_QWORD *)(v9 + 32) )
      {
        v8 = sub_1D36FA0(
               a1,
               v130,
               (*(_WORD *)(v9 + 18) >> 6) & 7,
               0,
               0,
               (*(_BYTE *)(v9 + 18) >> 3) & 7,
               a4->m128i_i64[0]);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
      sub_1EA6140(a2, v8, 16, 8);
      *(_DWORD *)v131 = a4->m128i_i32[0];
      v132 = a4->m128i_i32[1];
      *(_QWORD *)(v131 + 8) = 0;
      *(_DWORD *)(v131 + 4) = v132;
      goto LABEL_60;
    case 6:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D60D40(a1, a2, src[0], src[1]);
    case 7:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D60ED0(a1, a2, src[0], src[1]);
    case 8:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D60FB0(a1, a2, src[0], src[1]);
    case 9:
    case 0x3B:
      goto LABEL_3;
    case 0xA:
      v187 = *(unsigned int *)(*a1 + 12632LL);
      if ( !(_DWORD)v187 )
        goto LABEL_59;
      v188 = *(_DWORD *)(v9 + 32);
      v189 = a4->m128i_i32[0];
      v190 = *(_BYTE *)(v9 + 32) & 1;
      v191 = (v188 >> 1) & 0xFFFFFF;
      v192 = sub_AAC1F0(
               *(_QWORD *)(*a1 + 248LL),
               *(_QWORD *)(*(_QWORD *)(*a1 + 248LL) + 18720LL),
               v187,
               (__int64)a4,
               a5);
      LODWORD(ptr[1]) = v192;
      if ( v192 > 0x40 )
      {
        src[0] = ptr;
        sub_2205470(ptr, v191, 1);
      }
      else
      {
        v193 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v192;
        if ( !v192 )
          LODWORD(v193) = 0;
        ptr[0] = (void *)((unsigned int)v193 & v191);
      }
      v194 = sub_C0C5D0(*(_QWORD **)(*a1 + 248LL), (__int64)ptr, *(_QWORD *)(*(_QWORD *)(*a1 + 248LL) + 18720LL), v189);
      v8 = sub_1E6EEC0(*a1, v190, v194, v189);
      if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
        operator delete[](ptr[0]);
      goto LABEL_172;
    case 0xB:
      v183 = &a4->m128i_i8[4];
      v184 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v185 = sub_1D4F8E0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v184 * ((unsigned __int64)&v183[-(v183 != nullptr)] / v184 + (v183 != nullptr)));
      if ( (v185 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      v186 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_187;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( *(_QWORD *)(v9 + 32) == v185 )
        goto LABEL_59;
      v186 = *a1;
LABEL_187:
      v8 = sub_1E6FF00(v186, v185, a4->m128i_u32[0], 0);
      if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_59;
      goto LABEL_95;
    case 0xC:
      v175 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v178 = sub_1D4F8E0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v175 * (((unsigned __int64)a4 - (a4 != nullptr)) / v175 + (a4 != nullptr)));
      if ( (v178 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      v180 = *(_QWORD *)(v9 + 56);
      if ( v180 )
      {
        v181 = sub_1D434A0(a1, *(unsigned __int16 **)(v9 + 56), si128, a8, v176, v177, v179);
        if ( v181 == 1 )
        {
LABEL_95:
          v8 = 0;
          goto LABEL_60;
        }
        v182 = v181 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v182 = 0;
      }
      if ( *(_DWORD *)(*a1 + 12632LL) || v180 != v182 || v178 != *(_QWORD *)(v9 + 32) )
        v8 = sub_1E5F880(
               *a1,
               v178,
               v182,
               (unsigned __int8)BYTE2(*(_DWORD *)(v9 + 16)) >> 7,
               HIBYTE(*(_DWORD *)(v9 + 16)) & 1);
      sub_1EA6140(a2, v8, 0, 1);
LABEL_60:
      result = v8;
      break;
    case 0xD:
      v27 = (*(_WORD *)(v9 + 18) >> 3) & 0x1FF;
      if ( (unsigned int)(v27 - 443) <= 4 || (unsigned int)(v27 - 451) <= 0x24 || v27 == 438 || (v28 = 8, v27 == 449) )
        v28 = 12;
      sub_1EA6140(a2, v9, v28, 4);
      v30 = a4->m128i_i32[0];
      *v29 = a4->m128i_i32[0];
      v29[1] = v30;
      if ( (((*(_WORD *)(v9 + 18) >> 3) + 74) & 0x1FFu) <= 0x31
        && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v9 + 18) >> 3) + 74)) & 1) != 0 )
      {
        v29[2] = a4->m128i_i32[2];
      }
      return v9;
    case 0xE:
    case 0x2D:
    case 0x32:
      goto LABEL_28;
    case 0xF:
      v160 = *a1;
      sub_18C74E0(*a1, 0, 0, 0);
      v164 = sub_1D434A0(a1, *(unsigned __int16 **)(v9 + 24), si128, a8, v161, v162, v163);
      if ( v164 == 1
        || (v169 = sub_19A4070(*a1, (_QWORD *)(v164 & 0xFFFFFFFFFFFFFFFELL), v165, v166, v167, v168, si128, a8),
            v169 == 1)
        || ((v170 = v169 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632LL)) || v170 != *(_QWORD *)(v9 + 24))
        && (v8 = sub_1E5FBF0(*a1, v170, 1), (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
        v8 = 0;
      }
      else
      {
        sub_1EA6140(a2, v8, 8, 4);
        *v171 = a4->m128i_i32[0];
        v171[1] = a4->m128i_i32[1];
      }
      sub_190D5E0(v160, si128);
      return v8;
    case 0x10:
      if ( !*((_BYTE *)a1 + 41) )
        goto LABEL_231;
      v9 = sub_AB5840(
             *(_QWORD *)(*a1 + 248LL),
             a1[4],
             (*(_BYTE *)(v9 + 18) >> 3) & 3,
             (a1[4] & 0xFFFFFFFFFFFFFFF0LL) == 0,
             *((_BYTE *)a1 + 40),
             *(__int64 **)(v9 + 32),
             v9 + 48,
             *(unsigned int *)(v9 + 20));
      v156 = sub_1EA6140(a2, v9, 16, 8);
      v158 = v157;
      v159 = sub_F6C560(v156);
      memcpy(v158, a4, v159);
      return v9;
    case 0x11:
      if ( *((_BYTE *)a1 + 41) )
        v9 = sub_AB7C40(*(_QWORD **)(*a1 + 248LL), *(_QWORD *)(v9 + 40), a1[4], (a1[4] & 0xFFFFFFFFFFFFFFF0LL) == 0);
      else
LABEL_231:
        v9 = a1[4];
      goto LABEL_28;
    case 0x12:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D61350(a1, a2, src[0], src[1]);
    case 0x13:
      src[0] = *(void **)a1;
      sub_18C74E0((__int64)src[0], 4, 0, 4);
      v143 = (unsigned __int16 *)sub_F57B50(v9);
      v147 = sub_1D434A0(a1, v143, si128, a8, v144, v145, v146);
      v152 = sub_19146D0(*a1, v147, v148, v149, v150, v151, si128, a8);
      if ( v152 == 1 )
        goto LABEL_230;
      v223.m128_u64[0] = v152 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(*a1 + 12632LL) || sub_F57B50(v9) != v223.m128_u64[0] )
      {
        v153 = a4->m128i_i32[0];
        v154 = sub_F57B40(v9);
        v8 = sub_1E6EEC0(*a1, v154, v223.m128_u64[0], v153);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_230;
      }
      sub_1EA6140(a2, v8, 4, 4);
      *v155 = a4->m128i_i32[0];
      goto LABEL_82;
    case 0x14:
      src[0] = (void *)a4;
      v142 = _mm_loadh_ps((const double *)src);
      return sub_1D5A410(a1, a2, v142.m128_u64[0], v142.m128_u64[1], 0, a6, v142.m128_u64[0], v142.m128_u64[1]);
    case 0x15:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D61490(a1, a2, src[0], src[1]);
    case 0x16:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D5B790(a1, a2, src[0], src[1]);
    case 0x17:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D615B0(a1, a2, src[0], src[1]);
    case 0x18:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D616D0(a1, a2, src[0], src[1]);
    case 0x19:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D61C30(a1, a2, src[0], src[1]);
    case 0x1A:
      src[0] = (void *)a4;
      ptr[1] = (void *)0x400000000LL;
      v228[1] = &v227;
      v113 = _mm_loadh_ps((const double *)src);
      ptr[0] = v230;
      *(__m128 *)src = v113;
      v227 = v113;
      v228[0] = a1;
      v228[2] = ptr;
      v114 = sub_1D4E990(
               a1,
               a2,
               v113.m128_i64[0],
               (_DWORD *)v113.m128_u64[1],
               0,
               *(double *)v113.m128_u64,
               a8,
               a6,
               a1,
               (__int64 *)&v227,
               (__int64)ptr);
      v115 = ptr[0];
      v9 = v114;
      if ( ptr[0] != v230 )
        goto LABEL_110;
      return v9;
    case 0x1B:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D61DA0(a1, a2, src[0], src[1]);
    case 0x1C:
      return v9;
    case 0x1D:
      v31 = v9;
      v9 = 0;
      v32 = sub_F61460(v31, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v33 = sub_1D41150((__int64)a1, (__int64)v32);
      if ( !v33 )
        return v9;
      v37 = *(_QWORD *)(v33 + 48);
      if ( v37 )
        v9 = v37 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v9 = sub_A7AA70(*(_QWORD *)(*a1 + 248LL), v33, *a1, v34, v35, v36);
LABEL_28:
      sub_1EA6140(a2, v9, 4, 4);
      *v38 = a4->m128i_i32[0];
      return v9;
    case 0x1E:
      v116 = &a4->m128i_i8[4];
      v117 = sub_F6C520(*(_QWORD *)(v9 + 24));
      v120 = sub_1D4F8E0(
               a1,
               a2,
               *(_QWORD *)(v9 + 24),
               v117 * ((unsigned __int64)&v116[-(v116 != nullptr)] / v117 + (v116 != nullptr)));
      if ( (v120 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      v121 = *a1;
      v122 = *(unsigned int *)(*a1 + 12632LL);
      if ( (_DWORD)v122 )
        goto LABEL_115;
      sub_F6C520(*(_QWORD *)(v9 + 24));
      if ( *(_QWORD *)(v9 + 24) == v120 )
        goto LABEL_59;
      v121 = *a1;
LABEL_115:
      v8 = sub_A820D0(*(_QWORD *)(v121 + 248), v120, *(_QWORD *)(v9 + 32), v118, v122, v119);
      if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_59;
      goto LABEL_95;
    case 0x1F:
      v95 = sub_1D51630(a1, *(_QWORD *)(v9 + 32));
      if ( (v95 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      if ( *(_DWORD *)(*a1 + 12632LL) || *(_QWORD *)(v9 + 32) != v95 )
      {
        v8 = sub_A76DD0(*(_QWORD *)(*a1 + 248LL), v95, *(_DWORD *)(v9 + 40), *(_DWORD *)(v9 + 44));
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
      sub_1EA6140(a2, v8, 32, 8);
      *(_DWORD *)v96 = a4->m128i_i32[0];
      *(_QWORD *)(v96 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(__m128i *)(v96 + 16) = _mm_loadu_si128(a4 + 1);
      goto LABEL_60;
    case 0x20:
      v57 = sub_1D51630(a1, *(_QWORD *)(v9 + 32));
      result = v57 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v57 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v224 = *a1;
        sub_18C74E0(v224, 4, 0, 4);
        v59 = (void *)a4[1].m128i_i64[0];
        if ( !v59 )
          v59 = *(void **)(v9 + 40);
        v60 = a4[1].m128i_i64[1];
        if ( !v60 )
          v60 = *(_QWORD *)(v9 + 48);
        v223.m128_u64[0] = v60;
        src[0] = v59;
        v61 = sub_1D434A0(a1, (unsigned __int16 *)v59, si128, a8, v60, (unsigned __int64)v59, v58);
        v66 = (char *)sub_19146D0(*a1, v61, v62, v63, v64, v65, si128, a8);
        v68 = src[0];
        if ( v66 != (_BYTE *)&dword_0 + 1
          && (src[0] = v66,
              v226 = v68,
              v225 = v223.m128_u64[0],
              v69 = sub_1D434A0(
                      a1,
                      (unsigned __int16 *)v223.m128_u64[0],
                      si128,
                      a8,
                      v223.m128_i64[0],
                      (unsigned __int64)v68,
                      v67),
              v74 = sub_19146D0(*a1, v69, v70, v71, v72, v73, si128, a8),
              v74 != 1)
          && ((v75 = *a1,
               v223.m128_u64[0] = v74 & 0xFFFFFFFFFFFFFFFELL,
               v76 = *(_DWORD *)(v75 + 12632) == 0,
               src[0] = (void *)((unsigned __int64)src[0] & ~1uLL),
               v76)
           && v57 == *(_QWORD *)(v9 + 32)
           && v226 == src[0]
           && v225 == v223.m128_u64[0]
           || (v8 = sub_1E71AF0(v75, v57, src[0], v223.m128_u64[0], *(unsigned int *)(v9 + 56)),
               (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
        {
          *(__m128 *)src = _mm_loadh_ps((const double *)v223.m128_u64);
          sub_1EA6140(a2, v8, 32, 8);
          si128 = (__m128)_mm_load_si128((const __m128i *)src);
          *(_DWORD *)v77 = a4->m128i_i32[0];
          v78 = *(__int64 *)((char *)a4->m128i_i64 + 4);
          *(__m128 *)(v77 + 16) = si128;
          *(_QWORD *)(v77 + 4) = v78;
          v79 = (void *)v8;
        }
        else
        {
          v79 = nullptr;
        }
        src[0] = v79;
        sub_190D5E0(v224, si128);
        return (unsigned __int64)src[0];
      }
      return result;
    case 0x21:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D61EB0(a1, a2, src[0], src[1]);
    case 0x22:
      v52 = &a4->m128i_i8[4];
      v53 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v54 = sub_1D4F8E0(
              a1,
              a2,
              *(_QWORD *)(v9 + 32),
              v53 * ((unsigned __int64)&v52[-(v52 != nullptr)] / v53 + (v52 != nullptr)));
      if ( (v54 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      v55 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_58;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( v54 == *(_QWORD *)(v9 + 32) )
        goto LABEL_59;
      v55 = *a1;
LABEL_58:
      v8 = sub_A74EC0(*(_QWORD *)(v55 + 248), v54);
      if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_59;
      goto LABEL_95;
    case 0x23:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D620F0(a1, a2, src[0], src[1]);
    case 0x24:
      sub_1EA6360(a2, v9, a4);
      return v9;
    case 0x25:
      v39 = sub_1D41150((__int64)a1, *(_QWORD *)(v9 + 40));
      if ( !v39 )
        goto LABEL_95;
      if ( *(_DWORD *)(*a1 + 12632LL) || v39 != *(_QWORD *)(v9 + 40) )
      {
        LOBYTE(v40) = *(_BYTE *)(v9 + 32) & 0x3F;
        if ( (_BYTE)v40 )
        {
          v41 = a4->m128i_u32[2];
          v42 = a4->m128i_u32[1];
          v40 = (unsigned __int8)v40;
        }
        else
        {
          v41 = 0;
          v40 = 0;
          v42 = 0;
        }
        v8 = sub_1A891C0(*(__int64 **)(*a1 + 736LL), v39, v42, (_BYTE *)(v9 + 48), v40, v41, (int)a4 + 12, v40, 1);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
      v43 = *(_BYTE *)(v8 + 32) & 0x3F;
      if ( (*(_BYTE *)(v8 + 32) & 0x3F) != 0 )
        v43 = 4 * v43 + 8;
      sub_1EA6140(a2, v8, 4 * ((unsigned int)(v43 + 3) >> 2) + 4, 4);
      if ( (*(_BYTE *)(v9 + 32) & 0x3F) != 0 )
      {
        *(_DWORD *)(v44 + 4) = a4->m128i_i32[1];
        v45 = *(_BYTE *)(v9 + 32) & 0x3F;
        if ( (*(_BYTE *)(v9 + 32) & 0x3F) == 0 )
          goto LABEL_245;
        v46 = v44 + 12;
        if ( ((unsigned __int64)&a4->m128i_u64[1] + 4 >= v44 + 28
           || v44 + 12 >= (unsigned __int64)&a4[1].m128i_u64[1] + 4)
          && v45 - 1 > 2 )
        {
          v47 = 12;
          do
          {
            *(__m128i *)(v44 + v47) = _mm_loadu_si128((const __m128i *)((char *)a4 + v47));
            v47 += 16;
          }
          while ( v47 != 16LL * (v45 >> 2) + 12 );
          v48 = v45 & 0xFC;
          if ( v45 != (v45 & 0xFFFFFFFC) )
          {
            *(_DWORD *)(v46 + 4LL * ((unsigned __int8)v45 & 0xFC)) = a4->m128i_i32[(v45 & 0xFC) + 3];
            v49 = (unsigned int)(v48 + 1);
            if ( v45 != (_DWORD)v49 )
            {
              v50 = (unsigned int)(v48 + 2);
              *(_DWORD *)(v46 + 4 * v49) = a4->m128i_i32[v49 + 3];
              if ( (_DWORD)v50 != v45 )
                *(_DWORD *)(v44 + 4 * v50 + 12) = a4->m128i_i32[v50 + 3];
            }
          }
        }
        else
        {
          v221 = 0;
          do
          {
            *(_DWORD *)(v44 + 4 * v221 + 12) = a4->m128i_i32[v221 + 3];
            ++v221;
          }
          while ( v45 != (_DWORD)v221 );
        }
        if ( (*(_BYTE *)(v9 + 32) & 0x3F) != 0 )
          v51 = a4->m128i_i32[2];
        else
LABEL_245:
          v51 = 0;
        *(_DWORD *)(v44 + 8) = v51;
      }
      goto LABEL_60;
    case 0x26:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D62890(a1, a2, src[0], src[1]);
    case 0x27:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D51670(a1, a2, src[0], src[1]);
    case 0x28:
      v123 = &a4->m128i_i64[1];
      v124 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v125 = sub_1D4F8E0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v124 * (((unsigned __int64)v123 - (v123 != nullptr)) / v124 + (v123 != nullptr)));
      if ( (v125 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      v126 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_123;
      sub_F6C520(*(_QWORD *)(v9 + 32));
      if ( *(_QWORD *)(v9 + 32) != v125 )
      {
        v126 = *a1;
LABEL_123:
        v8 = sub_1E5EFE0(v126, v125);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
      sub_1EA6140(a2, v8, 8, 4);
      *v127 = a4->m128i_i32[0];
      v127[1] = a4->m128i_i32[1];
      goto LABEL_60;
    case 0x29:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D62A00(a1, a2, src[0], src[1]);
    case 0x2A:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D62B20(a1, a2, src[0], src[1]);
    case 0x2B:
    case 0x2C:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D62C50(a1, a2, src[0], src[1]);
    case 0x2E:
      v105 = sub_1D41150((__int64)a1, *(_QWORD *)(v9 + 32));
      if ( (*(_BYTE *)(v9 + 18) & 8) != 0 )
        v106 = *(_QWORD *)(v9 + 48);
      else
        v106 = *(_QWORD *)(v9 + 8);
      v107 = sub_1D51630(a1, v106);
      v108 = v107 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v107 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v218 = sub_A77C90(
                 *(_QWORD *)(*a1 + 248LL),
                 v107,
                 v105,
                 *(_WORD *)(v9 + 20) & 0x7FFF,
                 *(_WORD *)(v9 + 22) & 0x7FFF,
                 *(_BYTE *)(v9 + 21) >> 7);
        sub_1EA6140(a2, v218, 4, 4);
        *v219 = a4->m128i_i32[0];
        return v218;
      }
      return v108;
    case 0x2F:
      v97 = sub_F60F10(v9, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v102 = (_QWORD *)sub_1D41150((__int64)a1, (__int64)v97);
      if ( !v102 )
        goto LABEL_95;
      if ( !*(_DWORD *)(*a1 + 12632LL) && v102 == sub_F60F10(v9, (__int64)v97, v98, v99, v100, v101) )
        goto LABEL_59;
      v103 = v102[6];
      if ( v103 )
        goto LABEL_93;
      v217 = *(_QWORD *)(*a1 + 248LL);
      goto LABEL_229;
    case 0x30:
      v216 = sub_F60F10(v9, a2, *((__int64 *)&v11 + 1), (__int64)a4, a5, a6);
      v102 = (_QWORD *)sub_1D41150((__int64)a1, (__int64)v216);
      if ( !v102 )
        goto LABEL_95;
      v98 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) )
        goto LABEL_227;
      if ( v102 == sub_F60F10(v9, (__int64)v216, v98, v99, v100, v101) )
        goto LABEL_59;
      v98 = *a1;
LABEL_227:
      v103 = v102[6];
      if ( v103 )
        goto LABEL_93;
      v217 = *(_QWORD *)(v98 + 248);
LABEL_229:
      v8 = sub_A7AA70(v217, (__int64)v102, v98, v99, v100, v101);
      v104 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_94;
    case 0x31:
      src[0] = (void *)a4;
      v214 = a4->m128i_i32[0];
      *(_OWORD *)ptr = 0;
      v215 = *(_QWORD *)(v9 + 32);
      memset(v230, 0, 32);
      v9 = 0;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      v228[0] = sub_1D41260((__int64 **)a1, (__m128i *)ptr, v215, v214, 0, 0, 0.0, *(double *)a8.m128_u64, 0);
      if ( !sub_F22B30(v228) )
        v9 = sub_1D572F0(a1, a2, src[0], src[1], v228[0]);
      if ( !HIDWORD(v230[0]) )
        return v9;
      v115 = *(void **)&v230[0];
LABEL_110:
      free(v115);
      return v9;
    case 0x33:
      src[0] = *(void **)a1;
      sub_18C79B0((__int64)src[0], 0, 0, 4);
      v83 = sub_1D434A0(a1, *(unsigned __int16 **)(v9 + 24), si128, a8, v80, v81, v82);
      if ( v83 == 1 )
        goto LABEL_230;
      v88 = v83 & 0xFFFFFFFFFFFFFFFELL;
      v90 = sub_1934300(*a1, (_QWORD *)(v83 & 0xFFFFFFFFFFFFFFFELL), v84, v85, v86, v87, (__m128i)si128, a8);
      if ( v90 == 1 )
        goto LABEL_230;
      v91 = *v12;
      if ( *(_BYTE *)(*v12 + 16) != 51 )
      {
        v92 = *v12;
        v223.m128_u64[0] = v90;
        v91 = sub_F63050(v92, v88, v89, v90);
        v90 = v223.m128_u64[0];
      }
      if ( ((v93 = v90 & 0xFFFFFFFFFFFFFFFELL, *(_DWORD *)(*a1 + 12632LL)) || v93 != *(_QWORD *)(v9 + 24))
        && (v8 = sub_1E631F0(*a1, v93, (*(_BYTE *)(v91 + 18) & 8) != 0), (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0) )
      {
LABEL_230:
        v8 = 0;
      }
      else
      {
        sub_1EA6140(a2, v8, 12, 4);
        *v94 = a4->m128i_i32[0];
        v94[1] = a4->m128i_i32[1];
        v94[2] = a4->m128i_i32[2];
      }
LABEL_82:
      sub_190D5E0((__int64)src[0], si128);
      return v8;
    case 0x34:
      src[0] = (void *)a4[1].m128i_i64[0];
      v209 = (__int64 *)sub_1D51480(a1, src[0]);
      if ( !v209 )
        goto LABEL_95;
      v210 = *v12;
      if ( *(_BYTE *)(*v12 + 16) != 52 )
        v210 = sub_F63050(*v12, src[0], v206, v207);
      v211 = *(unsigned int *)(*a1 + 12632LL);
      if ( (_DWORD)v211 || src[0] != v209 )
      {
        v8 = sub_A81D80(*(_QWORD *)(*a1 + 248LL), *v209, (*(_BYTE *)(v210 + 18) & 8) != 0, v207, v211, v208);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
      sub_1EA6140(a2, v8, 24, 8);
      *(_DWORD *)v212 = a4->m128i_i32[0];
      *(_DWORD *)(v212 + 4) = a4->m128i_i32[1];
      v213 = a4->m128i_i32[2];
      *(_QWORD *)(v212 + 16) = v209;
      *(_DWORD *)(v212 + 8) = v213;
      goto LABEL_60;
    case 0x35:
      v201 = sub_1D41150((__int64)a1, *(_QWORD *)(v9 + 32));
      v205 = v201;
      if ( !v201 )
        goto LABEL_95;
      if ( !*(_DWORD *)(*a1 + 12632LL) && v201 == *(_QWORD *)(v9 + 32) )
        goto LABEL_59;
      v103 = *(_QWORD *)(v201 + 48);
      if ( v103 )
      {
LABEL_93:
        v104 = v103 & 0xFFFFFFFFFFFFFFF0LL;
        v8 = v104;
      }
      else
      {
        v8 = sub_A7AA70(*(_QWORD *)(*a1 + 248LL), v205, *a1, v202, v203, v204);
        v104 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      }
LABEL_94:
      if ( !v104 )
        goto LABEL_95;
      goto LABEL_59;
    case 0x36:
      if ( (*(_BYTE *)(v16 + 17) & 4) != 0 )
      {
        v199 = (_QWORD *)sub_1D51480(a1, a4[1].m128i_i64[0]);
        if ( !v199 )
          goto LABEL_95;
        v8 = sub_1E70DB0(*a1, *v199, *(unsigned int *)(v9 + 48), a4->m128i_u32[0]);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
      sub_1EA6140(a2, v8, 24, 8);
      *(_DWORD *)v200 = a4->m128i_i32[0];
      *(_QWORD *)(v200 + 4) = *(__int64 *)((char *)a4->m128i_i64 + 4);
      *(_QWORD *)(v200 + 16) = a4[1].m128i_i64[0];
      goto LABEL_60;
    case 0x37:
      v195 = sub_1D41150((__int64)a1, *(_QWORD *)(v9 + 24));
      if ( v195 )
      {
        if ( !*(_DWORD *)(*a1 + 12632LL) && v195 == *(_QWORD *)(v9 + 24) )
          goto LABEL_59;
        v8 = sub_1D40410(a1, a4->m128i_i32[0], v195, v196, v197, v198, (__m128i)si128, *(double *)a8.m128_u64);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_59;
      }
      goto LABEL_95;
    case 0x38:
      v109 = sub_1D41150((__int64)a1, *(_QWORD *)(v9 + 32));
      if ( !v109 )
        goto LABEL_95;
      v110 = sub_F5DBF0(v9);
      v111 = sub_1D51630(a1, v110);
      if ( (v111 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_95;
      v112 = *a1;
      if ( *(_DWORD *)(*a1 + 12632LL) || v109 != *(_QWORD *)(v9 + 32) )
        goto LABEL_105;
      src[0] = (void *)v111;
      v220 = (void *)sub_F5DBF0(v9);
      v111 = (__int64)src[0];
      if ( src[0] != v220 )
      {
        v112 = *a1;
LABEL_105:
        v8 = sub_A77600(*(_QWORD *)(v112 + 248), v109, v111);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_95;
      }
LABEL_59:
      sub_1EA6140(a2, v8, 4, 4);
      *v56 = a4->m128i_i32[0];
      goto LABEL_60;
    case 0x39:
      v172 = &a4->m128i_i8[4];
      v173 = sub_F6C520(*(_QWORD *)(v9 + 32));
      v174 = sub_1D4F8E0(
               a1,
               a2,
               *(_QWORD *)(v9 + 32),
               v173 * ((unsigned __int64)&v172[-(v172 != nullptr)] / v173 + (v172 != nullptr)));
      if ( (v174 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( !*(_DWORD *)(*a1 + 12632LL) && *(_QWORD *)(v9 + 32) == v174 )
          goto LABEL_59;
        v8 = sub_A70300(*(_QWORD *)(*a1 + 248LL), v174, *(_DWORD *)(v9 + 20), (*(_BYTE *)(v9 + 18) >> 3) & 0xF);
LABEL_172:
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_59;
      }
      goto LABEL_95;
    case 0x3A:
      src[0] = (void *)a4;
      *(__m128 *)src = _mm_loadh_ps((const double *)src);
      return sub_1D62D40(a1, a2, src[0], src[1]);
  }
  return result;
}
