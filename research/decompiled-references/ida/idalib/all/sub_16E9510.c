void __fastcall sub_16E9510(
        __int64 a1,
        __int64 p_ptr,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __m128i si128,
        unsigned __int8 a8,
        unsigned int a9,
        __int64 a10,
        unsigned int a11)
{
  __int64 v11; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  _QWORD *v18; // rax
  unsigned __int64 v19; // r15
  __int64 *v20; // r13
  bool v21; // zf
  unsigned __int64 *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 *v26; // r15
  __int64 *v27; // r12
  __int64 *v28; // r13
  bool v29; // zf
  __int64 *v30; // rax
  unsigned __int8 v31; // al
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // r9
  _QWORD *v38; // rdx
  unsigned __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rcx
  __int64 *v42; // rax
  _DWORD *v43; // r13
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  unsigned __int64 v57; // r12
  unsigned int v58; // r14d
  __int64 v59; // r15
  __int64 *v60; // r13
  bool v61; // zf
  __int64 *v62; // rax
  unsigned int v63; // eax
  unsigned int v64; // r12d
  bool v65; // r13
  __int64 v66; // r15
  unsigned __int64 v67; // r14
  __int64 v68; // rbx
  bool v69; // al
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned __int16 v76; // r15
  __int64 v77; // rdx
  __int64 v78; // rdi
  __int64 v79; // rdx
  size_t v80; // r14
  unsigned int v81; // eax
  int v82; // eax
  void *v83; // rdi
  __int64 v84; // r12
  __int64 v85; // r14
  char *v86; // rax
  _QWORD *v87; // rdi
  unsigned __int64 v88; // rcx
  __int64 v89; // r14
  int v90; // eax
  __int64 v91; // r9
  unsigned __int64 *v92; // rax
  unsigned __int64 v93; // rax
  __int64 *v94; // rax
  __int64 v95; // rcx
  char v96; // r15
  __int64 *v97; // rax
  __int64 v98; // r14
  char v99; // dl
  char v100; // r13
  char v101; // al
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // rbx
  unsigned int v106; // eax
  int v107; // eax
  __int64 *v108; // rax
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rdx
  __int64 *v112; // rcx
  __int64 *v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // r14
  __int64 *v117; // r12
  __int64 *v118; // rbp
  __int64 *v119; // r14
  bool v120; // zf
  __int64 *v121; // rax
  unsigned __int8 v122; // al
  __int64 v123; // r13
  __int64 v124; // rax
  __int64 v125; // rax
  unsigned __int64 v126; // r14
  __int64 j; // r15
  unsigned __int16 v128; // ax
  bool v129; // al
  __int64 v130; // rbp
  unsigned __int64 *v131; // rax
  unsigned __int64 *v132; // rax
  char v133; // r13
  __int64 v134; // r14
  __int64 (*v135)(); // r12
  size_t v136; // rax
  __int64 v137; // r14
  __int64 *v138; // rax
  int v139; // eax
  unsigned int v140; // ebp
  __int64 v141; // rax
  __int64 *v142; // rax
  __int64 v143; // rdx
  __int64 *v144; // rax
  __int64 *v145; // rax
  __int64 v146; // rdx
  __int64 v147; // r15
  __int64 *v148; // rdx
  __int64 *v149; // rax
  __int64 v150; // rdx
  __int64 *v151; // r13
  __int64 v152; // rax
  __int64 v153; // r13
  __int64 v154; // rcx
  unsigned __int64 v155; // r14
  unsigned __int64 v156; // rax
  __int64 v157; // rbx
  __int64 v158; // r15
  unsigned __int64 v159; // rbp
  bool v160; // al
  unsigned int v161; // eax
  __int64 v162; // rcx
  __int64 v163; // r12
  __int64 *v164; // r13
  __int64 v165; // rax
  __int64 *v166; // r12
  unsigned __int64 v167; // rdx
  unsigned __int64 v168; // rax
  __int64 v169; // r15
  __int64 i; // r13
  unsigned __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rax
  _WORD *v176; // r14
  unsigned int v177; // eax
  __int64 **v178; // rax
  int v179; // eax
  __int64 *v180; // r9
  unsigned __int64 v181; // rax
  unsigned __int64 v182; // rcx
  __int64 v183; // rdx
  __int64 *v184; // rax
  __int64 v185; // rax
  __int64 v186; // r12
  __int64 v187; // r15
  unsigned __int64 v188; // rcx
  __int64 v189; // rdx
  unsigned int v190; // r13d
  unsigned __int64 v191; // rax
  __int64 *v192; // rax
  __int64 v193; // rdx
  __int64 *v194; // rax
  __int64 v195; // rcx
  unsigned __int64 v196; // r12
  __int64 k; // r13
  _WORD *v198; // r14
  unsigned __int64 *v199; // rax
  __int64 v200; // r12
  __int64 v201; // r15
  __int64 v202; // r13
  __int64 v203; // r12
  __int64 v204; // r15
  __int64 v205; // rax
  __int64 v206; // r15
  __int64 v207; // r14
  __int64 v208; // rax
  unsigned int v209; // eax
  __int64 v210; // rax
  __int64 v211; // r15
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 v216; // r13
  __int64 v217; // rax
  _QWORD *v218; // rax
  __int64 v220; // [rsp+10h] [rbp-1D8h]
  unsigned __int64 v221; // [rsp+18h] [rbp-1D0h]
  unsigned int v222; // [rsp+18h] [rbp-1D0h]
  unsigned __int64 v224; // [rsp+20h] [rbp-1C8h]
  __int64 v225; // [rsp+28h] [rbp-1C0h]
  unsigned int v226; // [rsp+28h] [rbp-1C0h]
  __int64 v227; // [rsp+28h] [rbp-1C0h]
  __int64 v228; // [rsp+28h] [rbp-1C0h]
  unsigned int v229; // [rsp+28h] [rbp-1C0h]
  bool v230; // [rsp+30h] [rbp-1B8h]
  __int64 v231; // [rsp+38h] [rbp-1B0h]
  __int64 v232; // [rsp+40h] [rbp-1A8h]
  char v234; // [rsp+50h] [rbp-198h]
  __int64 v235; // [rsp+50h] [rbp-198h]
  unsigned __int64 v236; // [rsp+58h] [rbp-190h]
  char v237; // [rsp+58h] [rbp-190h]
  bool v238; // [rsp+60h] [rbp-188h]
  __int64 v239; // [rsp+60h] [rbp-188h]
  __int64 v240; // [rsp+68h] [rbp-180h]
  unsigned __int64 v241; // [rsp+70h] [rbp-178h] BYREF
  __int64 v242; // [rsp+78h] [rbp-170h] BYREF
  void *ptr; // [rsp+80h] [rbp-168h] BYREF
  __m128 v244; // [rsp+88h] [rbp-160h]
  __m128 v245; // [rsp+A0h] [rbp-148h] BYREF
  unsigned int v246; // [rsp+B0h] [rbp-138h] BYREF
  char v247; // [rsp+B4h] [rbp-134h]
  __int64 v248; // [rsp+B8h] [rbp-130h] BYREF
  unsigned int v249; // [rsp+C0h] [rbp-128h]
  __m128 v250; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v251; // [rsp+130h] [rbp-B8h] BYREF

  v11 = a1;
  v220 = p_ptr;
  v234 = sub_B8E180(*(_QWORD *)(a1 + 544));
  if ( v234 )
    return;
  v241 = 1;
  if ( !p_ptr )
  {
    if ( a11 == 4 )
    {
LABEL_206:
      v231 = 0;
      v230 = v220 != 0;
      if ( v220 | a3 )
        goto LABEL_58;
      goto LABEL_55;
    }
    if ( a3 )
    {
      v231 = 0;
      v32 = *(unsigned __int16 *)(a3 + 22);
      v33 = v32;
      if ( a6 > v32 )
        goto LABEL_30;
      v230 = 0;
      v231 = p_ptr;
      goto LABEL_58;
    }
    v231 = 0;
    v33 = 0;
    LODWORD(v32) = 0;
    if ( !a6 )
      goto LABEL_55;
    while ( 1 )
    {
LABEL_30:
      p_ptr = *(_QWORD *)(a5 + 8 * v33);
      if ( !p_ptr )
        goto LABEL_29;
      if ( (v241 & 1) != 0 )
      {
        v14 = v241 >> 58;
        if ( !(v241 >> 58) )
          goto LABEL_28;
        v13 = v241 >> 1;
        v34 = -1LL << v14;
        v14 = (unsigned int)v32;
        v35 = (((v241 >> 1) & ~v34) >> v32) & 1;
      }
      else
      {
        v14 = *(unsigned int *)(v241 + 64);
        if ( !(_DWORD)v14 )
        {
LABEL_28:
          sub_18E0790(v11, p_ptr, a11, v14);
          goto LABEL_29;
        }
        v13 = *(_QWORD *)v241;
        v14 = (unsigned int)v32;
        v35 = (*(_QWORD *)(*(_QWORD *)v241 + 8LL * ((unsigned int)v32 >> 6)) >> v32) & 1LL;
      }
      if ( !(_BYTE)v35 )
        goto LABEL_28;
LABEL_29:
      LODWORD(v32) = v32 + 1;
      v33 = (unsigned int)v32;
      if ( (unsigned int)v32 >= a6 )
      {
        if ( v231 )
        {
          p_ptr = v231;
          sub_16C9AE0(v11, v231, a8, a4, a5, a6);
          v230 = v220 != 0;
          v14 = v220 | a3;
          if ( v220 | a3 )
            goto LABEL_58;
          goto LABEL_54;
        }
        goto LABEL_206;
      }
    }
  }
  v17 = *(_BYTE *)(p_ptr + 29);
  if ( (v17 & 1) == 0 )
    goto LABEL_11;
  v18 = sub_B8C3D0(p_ptr, p_ptr, v13, v14, v15, v16);
  v13 = *((unsigned int *)v18 + 2);
  v19 = *v18 + 8 * v13;
  if ( (*(_BYTE *)(p_ptr + 29) & 1) != 0 )
    v20 = (__int64 *)*sub_B8C3D0(p_ptr, p_ptr, v13, v14, v15, v16);
  else
    v20 = nullptr;
  v21 = v20 == (__int64 *)v19;
  if ( (unsigned __int64)v20 >= v19 )
    goto LABEL_179;
LABEL_7:
  v22 = (unsigned __int64 *)v20;
  while ( 1 )
  {
    v13 = *v22;
    if ( *(_WORD *)(*v22 + 36) == 219 )
      break;
    if ( (unsigned __int64 *)v19 == ++v22 )
    {
LABEL_10:
      v11 = a1;
      v17 = *(_BYTE *)(v220 + 29);
      goto LABEL_11;
    }
  }
  do
  {
LABEL_171:
    v137 = *v20;
    if ( *(_WORD *)(*v20 + 36) != 219 )
    {
      v138 = v20 + 1;
      do
      {
        v137 = *v138;
        v20 = v138++;
      }
      while ( *(_WORD *)(v137 + 36) != 219 );
    }
    p_ptr = (unsigned int)a6;
    sub_16B98E0(&v241, a6);
    v139 = *(_DWORD *)(v137 + 48);
    v16 = (unsigned int)(v139 - 1);
    if ( a8 )
    {
      if ( v139 == 1 )
        goto LABEL_178;
      LODWORD(v16) = v139 - 2;
    }
    v229 = v16;
    v140 = sub_16CA550(
             *(_QWORD *)(*(_QWORD *)(v137 + 40) + 16LL) + 16LL,
             **(unsigned int **)(*(_QWORD *)(v137 + 40) + 16LL));
    v141 = sub_B06750(v137);
    p_ptr = a5;
    sub_16E8B90(a1, a5, a6, 3u, v141, v229, *(double *)si128.m128i_i64, 0, v140, a11, a9, a10, (__int64)&v241);
LABEL_178:
    v21 = ++v20 == (__int64 *)v19;
    if ( (unsigned __int64)v20 < v19 )
      goto LABEL_7;
LABEL_179:
    if ( v21 )
      goto LABEL_10;
  }
  while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 219 );
  v142 = (__int64 *)(v19 + 8);
  while ( 1 )
  {
    v13 = (unsigned __int64)v142;
    if ( v20 == v142 )
      break;
    v143 = *v142++;
    if ( *(_WORD *)(v143 + 36) == 219 )
      goto LABEL_171;
  }
  v11 = a1;
  v17 = *(_BYTE *)(v220 + 29);
LABEL_11:
  if ( (v17 & 1) != 0 )
  {
    v23 = sub_B8C3D0(v220, p_ptr, v13, v14, v15, v16);
    v24 = *((unsigned int *)v23 + 2);
    v25 = *v23 + 8 * v24;
    if ( (*(_BYTE *)(v220 + 29) & 1) != 0 )
      v26 = (__int64 *)*sub_B8C3D0(v220, p_ptr, v24, v14, v15, v16);
    else
      v26 = nullptr;
    v27 = (__int64 *)v25;
    v28 = v26;
    v29 = v26 == v27;
    if ( v26 >= v27 )
      goto LABEL_199;
    while ( 1 )
    {
      v30 = v28;
      while ( *(_WORD *)(*v30 + 36) != 217 )
      {
        if ( v27 == ++v30 )
          goto LABEL_18;
      }
      while ( 1 )
      {
LABEL_195:
        v147 = *v28;
        if ( *(_WORD *)(*v28 + 36) != 217 )
        {
          v148 = v28 + 1;
          do
          {
            v147 = *v148;
            v28 = v148++;
          }
          while ( *(_WORD *)(v147 + 36) != 217 );
        }
        ++v28;
        sub_16B98E0(&v241, a6);
        p_ptr = v147;
        sub_16E9030(v11, v147, a5, a6, a8, a11, *(double *)si128.m128i_i64, a9, a10, (__int64)&v241);
        v29 = v28 == v27;
        if ( v28 < v27 )
          break;
LABEL_199:
        if ( v29 )
          goto LABEL_18;
        if ( *(_WORD *)(*v27 + 36) != 217 )
        {
          v149 = v27 + 1;
          while ( v28 != v149 )
          {
            v150 = *v149++;
            if ( *(_WORD *)(v150 + 36) == 217 )
              goto LABEL_195;
          }
          goto LABEL_18;
        }
      }
    }
  }
LABEL_18:
  v31 = *(_BYTE *)(v220 + 28) & 0x7F;
  v13 = (unsigned int)v31 - 34;
  if ( (unsigned int)v13 > 5 )
  {
    if ( a11 != 4 )
    {
      if ( !a3 )
      {
        v231 = 0;
        goto LABEL_278;
      }
      v231 = 0;
      v32 = *(unsigned __int16 *)(a3 + 22);
      v33 = v32;
      if ( a6 > v32 )
        goto LABEL_30;
      goto LABEL_211;
    }
    v231 = 0;
    v230 = 1;
  }
  else if ( a11 == 4 || (p_ptr = 0, (unsigned int)sub_B75A50(v220, 0) == 1007) )
  {
    p_ptr = v220;
    sub_16C9AE0(v11, v220, a8, a4, a5, a6);
    v231 = v220;
    v230 = 1;
  }
  else
  {
    if ( a3 )
    {
      v14 = v220;
      LODWORD(v32) = *(unsigned __int16 *)(a3 + 22);
      v231 = v220;
      v33 = *(unsigned __int16 *)(a3 + 22);
      goto LABEL_23;
    }
    v31 = *(_BYTE *)(v220 + 28) & 0x7F;
    v13 = (unsigned int)v31 - 34;
    if ( (unsigned int)v13 <= 5 )
    {
      v231 = v220;
      v32 = (unsigned int)sub_B76070(v220, 0, v13, v14);
      v33 = v32;
      goto LABEL_23;
    }
    v231 = v220;
LABEL_278:
    if ( v31 == 18 )
    {
      v33 = *(unsigned int *)(v220 + 104);
      LODWORD(v32) = *(_DWORD *)(v220 + 104);
    }
    else
    {
      v33 = 0;
      LODWORD(v32) = 0;
    }
LABEL_23:
    if ( a6 > v33 )
      goto LABEL_30;
    if ( !v231 )
    {
      v230 = v220 != 0;
      goto LABEL_58;
    }
    p_ptr = v231;
    sub_16C9AE0(v11, v231, a8, a4, a5, a6);
LABEL_211:
    v230 = 1;
  }
LABEL_58:
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v11 + 4616) + 640LL * *(unsigned int *)(v11 + 4624) - 640) - 4) > 1
    && !*(_BYTE *)(v11 + 2440) )
  {
    v245.m128_u64[0] = 1;
    if ( !v230 )
    {
LABEL_222:
      v153 = a3;
      if ( a3 )
        goto LABEL_223;
      if ( (*(_BYTE *)(v220 + 28) & 0x7Fu) - 26 <= 0x1A )
      {
        v250.m128_u64[0] = *(_QWORD *)(v220 + 48);
        v163 = sub_C1BEF0((__int64)&v250, p_ptr, v13, v220);
        v164 = (__int64 *)(v163 & 0xFFFFFFFFFFFFFFF0LL);
        v165 = *(_QWORD *)(v163 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v165 + 16) == 42
          || (v165 = sub_16B68B0(v165, p_ptr, v13, v162)) != 0
          || (v165 = *v164, *(_BYTE *)(*v164 + 16) == 11)
          || (v13 = *(_QWORD *)(*(_QWORD *)(v165 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v13 + 16) == 11)
          && (v165 = sub_F63050(*v164, p_ptr, v13, v162)) != 0 )
        {
          v163 = *(_QWORD *)(v165 + 32);
        }
        v166 = (__int64 *)(v163 & 0xFFFFFFFFFFFFFFF0LL);
        v153 = *v166;
        if ( *(_BYTE *)(*v166 + 16) == 26 || (v153 = sub_16B6900(*v166, p_ptr, v13, v162)) != 0 )
        {
LABEL_223:
          v154 = v153 + 48;
          if ( v153 + 48 != v153 + 48 + 8LL * *(unsigned __int16 *)(v153 + 22) )
          {
            v155 = (8 * (unsigned __int64)*(unsigned __int16 *)(v153 + 22) - 8) >> 3;
            v156 = a6;
            v157 = 0;
            v158 = v11;
            v159 = v156;
            while ( 1 )
            {
              LOWORD(v161) = sub_F6A600(
                               *(_QWORD *)(*(_QWORD *)(v153 + 8 * v157 + 48) & 0xFFFFFFFFFFFFFFF0LL),
                               p_ptr,
                               v13,
                               v154,
                               v15);
              v154 = v161;
              LOWORD(v154) = BYTE1(v161);
              if ( BYTE1(v161) && !(_BYTE)v161 )
              {
                if ( (v245.m128_i8[0] & 1) != 0 )
                  v160 = v245.m128_u64[0] >> 58 == 0;
                else
                  v160 = *(_DWORD *)(v245.m128_u64[0] + 64) == 0;
                if ( v160 )
                  sub_16B98E0((unsigned __int64 *)&v245, v159);
                p_ptr = (unsigned int)v157;
                sub_16C5130((unsigned __int64 *)&v245, v157);
              }
              if ( v155 == v157 )
                break;
              ++v157;
            }
            a6 = v159;
            v11 = v158;
          }
        }
      }
LABEL_240:
      v167 = v245.m128_u64[0];
      if ( (v245.m128_i8[0] & 1) != 0 )
        v168 = v245.m128_u64[0] >> 58;
      else
        LODWORD(v168) = *(_DWORD *)(v245.m128_u64[0] + 64);
      if ( !(_DWORD)v168 )
      {
LABEL_250:
        sub_1505150((void ***)&v245);
        goto LABEL_60;
      }
      v169 = (unsigned int)(v168 - 1);
      for ( i = 0; ; i = v175 )
      {
        if ( (v167 & 1) != 0 )
        {
          v171 = v167;
          v172 = v167 >> 1;
          v173 = -1LL << (v171 >> 58);
          v174 = (unsigned int)i;
          if ( (((v172 & (unsigned __int64)~v173) >> i) & 1) == 0 )
            goto LABEL_245;
        }
        else
        {
          v172 = *(_QWORD *)v167;
          v174 = (unsigned int)i;
          if ( ((*(_QWORD *)(v172 + 8LL * ((unsigned int)i >> 6)) >> i) & 1) == 0 )
          {
LABEL_245:
            v175 = i + 1;
            if ( v169 == i )
              goto LABEL_250;
            goto LABEL_246;
          }
        }
        v176 = *(_WORD **)(a5 + 8 * i);
        v177 = sub_C00A40((unsigned __int64)v176, p_ptr, v172, v174, v15);
        p_ptr = (__int64)v176;
        sub_16BF5F0(v11, v176, v177, *(double *)si128.m128i_i64);
        v175 = i + 1;
        if ( v169 == i )
          goto LABEL_250;
LABEL_246:
        v167 = v245.m128_u64[0];
      }
    }
    if ( (*(_BYTE *)(v220 + 29) & 1) == 0 )
    {
LABEL_143:
      v122 = *(_BYTE *)(v220 + 28) & 0x7F;
      v13 = (unsigned int)v122 - 34;
      if ( (unsigned int)v13 <= 5 )
      {
        v123 = *(_QWORD *)(v220 + 120);
        v124 = (unsigned int)sub_B76070(v220, p_ptr, v13, v14);
        goto LABEL_146;
      }
      if ( v122 == 18 )
      {
        v123 = *(_QWORD *)(v220 + 96);
        v124 = *(unsigned int *)(v220 + 104);
LABEL_146:
        v125 = v123 + 8 * v124;
        if ( v123 == v125 )
          goto LABEL_240;
        v228 = v11;
        v126 = (unsigned __int64)(v125 - v123 - 8) >> 3;
        for ( j = 0; ; ++j )
        {
          v130 = *(_QWORD *)(v123 + 8 * j);
          if ( (*(_BYTE *)(v130 + 29) & 1) == 0 )
            goto LABEL_148;
          v131 = sub_B8C3D0(*(_QWORD *)(v123 + 8 * j), p_ptr, v13, v14, v15, v16);
          v13 = *v131;
          v14 = *v131 + 8LL * *((unsigned int *)v131 + 2);
          if ( *v131 >= v14 )
          {
            if ( v13 == v14 )
              goto LABEL_148;
            if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 100 )
            {
              v194 = (__int64 *)(v14 + 8);
              while ( 1 )
              {
                v14 = (unsigned __int64)v194;
                if ( (__int64 *)v13 == v194 )
                  break;
                v195 = *v194++;
                if ( *(_WORD *)(v195 + 36) == 100 )
                  goto LABEL_150;
              }
LABEL_148:
              v128 = sub_F6A600(*(_QWORD *)(*(_QWORD *)(v130 + 48) & 0xFFFFFFFFFFFFFFF0LL), p_ptr, v13, v14, v15);
              if ( !HIBYTE(v128) || (_BYTE)v128 )
                goto LABEL_155;
            }
          }
          else
          {
            v132 = (unsigned __int64 *)*v131;
            while ( 1 )
            {
              v13 = *v132;
              if ( *(_WORD *)(*v132 + 36) == 100 )
                break;
              if ( (unsigned __int64 *)v14 == ++v132 )
                goto LABEL_148;
            }
            if ( (unsigned __int64 *)v14 == v132 )
              goto LABEL_148;
          }
LABEL_150:
          if ( (v245.m128_i8[0] & 1) != 0 )
            v129 = v245.m128_u64[0] >> 58 == 0;
          else
            v129 = *(_DWORD *)(v245.m128_u64[0] + 64) == 0;
          if ( v129 )
            sub_16B98E0((unsigned __int64 *)&v245, a6);
          p_ptr = (unsigned int)j;
          sub_16C5130((unsigned __int64 *)&v245, j);
LABEL_155:
          if ( v126 == j )
          {
            v11 = v228;
            goto LABEL_240;
          }
        }
      }
      goto LABEL_222;
    }
    v114 = sub_B8C3D0(v220, p_ptr, v13, v14, v15, v16);
    v115 = *((unsigned int *)v114 + 2);
    v116 = *v114 + 8 * v115;
    if ( (*(_BYTE *)(v220 + 29) & 1) != 0 )
      v117 = (__int64 *)*sub_B8C3D0(v220, p_ptr, v115, v14, v15, v16);
    else
      v117 = nullptr;
    v227 = v11;
    v118 = (__int64 *)v116;
    v119 = v117;
    v120 = v117 == v118;
    if ( v117 < v118 )
      goto LABEL_139;
LABEL_301:
    if ( v120 )
    {
LABEL_142:
      v11 = v227;
      goto LABEL_143;
    }
    if ( *(_WORD *)(*v118 + 36) != 100 )
    {
      v192 = v118 + 1;
      while ( v119 != v192 )
      {
        v193 = *v192++;
        if ( *(_WORD *)(v193 + 36) == 100 )
          goto LABEL_288;
      }
      goto LABEL_142;
    }
LABEL_288:
    v183 = *v119;
    if ( *(_WORD *)(*v119 + 36) != 100 )
    {
      v184 = v119 + 1;
      do
      {
        v183 = *v184;
        v119 = v184++;
      }
      while ( *(_WORD *)(v183 + 36) != 100 );
    }
    v185 = *(unsigned int *)(v183 + 40);
    if ( !(_DWORD)v185 )
    {
      v11 = v227;
      v196 = a5 + 8 * a6;
      for ( k = a5; v196 != k; k += 8 )
      {
        v198 = *(_WORD **)k;
        p_ptr = *(_QWORD *)(*(_QWORD *)k + 8LL);
        if ( (unsigned __int8)sub_18065A0(v227, p_ptr, 0) )
        {
          p_ptr = (__int64)v198;
          sub_16BF5F0(v227, v198, a9, *(double *)si128.m128i_i64);
        }
      }
      goto LABEL_250;
    }
    v186 = *(_QWORD *)(v183 + 48);
    v187 = v186 + 4 * v185;
    while ( 1 )
    {
      while ( 1 )
      {
        v190 = (*(_DWORD *)v186 & 0x3FFFFFFF) - 1 - ((*(_BYTE *)(v186 + 3) & 0x40) != 0);
        if ( a6 <= v190 )
          goto LABEL_295;
        v191 = v245.m128_u64[0];
        if ( (v245.m128_i8[0] & 1) == 0 )
          break;
        v188 = v245.m128_u64[0] >> 58;
        if ( !(v245.m128_u64[0] >> 58) )
          goto LABEL_307;
LABEL_294:
        v189 = -1LL << v188;
        v14 = v188 << 57;
        v245.m128_u64[0] = 2 * (v14 | ~v189 & (~v189 & (v191 >> 1) | (1LL << v190))) + 1;
LABEL_295:
        v186 += 4;
        if ( v187 == v186 )
          goto LABEL_300;
      }
      if ( !*(_DWORD *)(v245.m128_u64[0] + 64) )
      {
LABEL_307:
        p_ptr = (unsigned int)a6;
        sub_16B98E0((unsigned __int64 *)&v245, a6);
        v191 = v245.m128_u64[0];
        if ( (v245.m128_i8[0] & 1) == 0 )
          goto LABEL_299;
        v188 = v245.m128_u64[0] >> 58;
        goto LABEL_294;
      }
LABEL_299:
      p_ptr = *(_QWORD *)v191;
      v14 = v190;
      v186 += 4;
      *(_QWORD *)(*(_QWORD *)v191 + 8LL * (v190 >> 6)) |= 1LL << v190;
      if ( v187 == v186 )
      {
LABEL_300:
        v120 = ++v119 == v118;
        if ( v119 >= v118 )
          goto LABEL_301;
LABEL_139:
        v121 = v119;
        while ( *(_WORD *)(*v121 + 36) != 100 )
        {
          if ( v118 == ++v121 )
            goto LABEL_142;
        }
        goto LABEL_288;
      }
    }
  }
LABEL_60:
  if ( !v230 )
  {
    if ( !a3 )
      goto LABEL_53;
LABEL_69:
    v63 = *(unsigned __int16 *)(a3 + 22);
    if ( v63 > (unsigned int)a6 )
      v63 = a6;
    v64 = v63;
    v238 = sub_F582D0(*(_QWORD *)(*(_QWORD *)(a3 + 24) & 0xFFFFFFFFFFFFFFF0LL));
    if ( v64 )
    {
      v236 = a6;
      v65 = 0;
      v66 = 1;
      do
      {
        v67 = *(_QWORD *)(a5 + 8 * v66 - 8);
        if ( v67 && (*(_DWORD *)v67 & 0x40000) == 0 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 248) + 17448LL) + 260LL) == 20 && v230 )
          {
            if ( (unsigned __int8)sub_B843B0((_BYTE *)v220) )
            {
              v101 = sub_B844D0((_BYTE *)v220);
              if ( a11 == 4 && v101 != 2 )
              {
                v105 = *(_QWORD *)(v11 + 768);
                v106 = sub_C00A40(v67, p_ptr, v102, v103, v104);
                sub_1C0DAD0(v105, v106, v67);
              }
            }
          }
          v68 = *(_QWORD *)(a3 + 8 * v66 + 40);
          v69 = sub_F582D0(*(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v69 )
            v65 = v69;
          v225 = *(_QWORD *)(v67 + 8);
          sub_D8B070(
            &v250,
            (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
            16,
            (__int64)"%u",
            (unsigned int)v66);
          p_ptr = (unsigned int)sub_C00A40(v67, (__int64)&vsnprintf, v70, v71, v72);
          sub_16D4620(v11, p_ptr, v220, v250.m128_i64[0], v250.m128_i64[1], v225, v68);
          if ( (__int64 *)v250.m128_u64[0] != &v251 )
            operator delete((void *)v250.m128_u64[0]);
        }
        ++v66;
      }
      while ( v64 - 1 + 2LL != v66 );
      a6 = v236;
    }
    else
    {
      v65 = 0;
    }
    p_ptr = a3;
    sub_A5E110(&v245, a3);
    v76 = ((unsigned __int16)v245.m128_i16[1] >> 3) & 0x1FF;
    if ( (v245.m128_i8[2] & 8) != 0 )
    {
      v77 = *(_QWORD *)(v11 + 544);
      v78 = *(_QWORD *)(v11 + 248);
      if ( (*(_BYTE *)(v77 + 8) & 0x7Fu) - 34 <= 5 && (v79 = v77 - 72) != 0 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
        ptr = nullptr;
        v244 = (__m128)si128;
        sub_A83E70(v78, (char **)&ptr, v79);
        v80 = j__strlen("sme");
        sub_EC0F90((__int64 **)&v250, (__int64 *)ptr + v244.m128_u32[0], 1);
        v221 = v250.m128_u64[0];
        v81 = sub_2244B30("sme", v80);
        v82 = sub_2244E60(&ptr, "sme", v80, v81);
        if ( v82 == -1 )
          p_ptr = (__int64)ptr + 8 * v244.m128_u32[0];
        else
          p_ptr = (__int64)ptr + 8 * v82;
        sub_EC0F90((__int64 **)&v250, (__int64 *)p_ptr, 1);
        if ( v250.m128_u64[0] == v221 )
        {
          p_ptr = v11 + 8;
          sub_168B9F0((__int64)&v250, (__int64 *)(v11 + 8), a9, 0x137Fu, 0);
          sub_15F7200(&v250);
        }
        v83 = ptr;
        if ( v244.m128_i32[1] && v244.m128_i32[0] )
        {
          v84 = 0;
          v85 = 8LL * (unsigned int)(v244.m128_i32[0] - 1) + 8;
          v86 = (char *)ptr;
          do
          {
            v87 = *(_QWORD **)&v86[v84];
            if ( v87 != (_QWORD *)-8LL && v87 )
            {
              p_ptr = *v87 + 17LL;
              operator delete(v87, p_ptr, 8);
              v86 = (char *)ptr;
            }
            v84 += 8;
          }
          while ( v85 != v84 );
          v83 = v86;
        }
        free(v83);
      }
      else
      {
        v134 = *(_QWORD *)(v78 + 17448);
        v135 = *(__int64 (**)())(*(_QWORD *)v134 + 584LL);
        v136 = j__strlen("sme");
        if ( v135 == sub_A55EE0
          || (p_ptr = (__int64)"sme", !((unsigned __int8 (__fastcall *)(__int64, char *, size_t))v135)(
                                         v134,
                                         "sme",
                                         v136)) )
        {
          p_ptr = v11 + 8;
          sub_168B9F0((__int64)&v250, (__int64 *)(v11 + 8), a9, 0x137Fu, 0);
          sub_15F7200(&v250);
        }
      }
    }
    v88 = *(_QWORD *)(v11 + 544);
    v224 = v88;
    if ( (*(_BYTE *)(v88 + 8) & 0x7Fu) - 34 > 5 || (v88 -= 72LL, (v89 = v88) == 0) )
    {
      v91 = v76 >> 5;
      v107 = v76 >> 2;
      v73 = ((unsigned __int8)v91 | (unsigned __int8)v107) & 7;
      if ( (((unsigned __int8)v91 | (unsigned __int8)v107) & 7) == 0 )
        goto LABEL_123;
      v91 &= 7u;
      v100 = 1;
      v99 = 1;
      v222 = v107 & 7;
      v226 = v91;
      goto LABEL_165;
    }
    if ( !v231 || (p_ptr = 0, !(unsigned int)sub_B75A50(v231, 0)) )
    {
      if ( v238 || v65 )
      {
        v179 = sub_16292C0(v89, p_ptr, v73, v88, v74, v75);
        if ( (v76 & 2) == 0 )
        {
          if ( v179 == 2 || (LOBYTE(v73) = v179 == 1, (v179 == 1) != (v76 & 1)) )
          {
            v180 = (__int64 *)(v11 + 8);
            if ( !v65
              || (sub_168B9F0((__int64)&v250, (__int64 *)(v11 + 8), a9, 0x1CCFu, 0),
                  LOBYTE(ptr) = 1,
                  p_ptr = (__int64)&ptr,
                  sub_1588420((__int64)&v250, (unsigned __int8 *)&ptr),
                  sub_15F7200(&v250),
                  v180 = (__int64 *)(v11 + 8),
                  v238) )
            {
              sub_168B9F0((__int64)&v250, v180, a9, 0x1CCFu, 0);
              LOBYTE(ptr) = 0;
              p_ptr = (__int64)&ptr;
              sub_1588420((__int64)&v250, (unsigned __int8 *)&ptr);
              sub_15F7200(&v250);
            }
          }
        }
      }
    }
    v90 = v76 >> 2;
    v88 = v90 & 7;
    v91 = ((unsigned __int8)v90 | (unsigned __int8)(v76 >> 5)) & 7;
    v226 = (v76 >> 5) & 7;
    v222 = v90 & 7;
    if ( (((unsigned __int8)v90 | (unsigned __int8)(v76 >> 5)) & 7) == 0 )
      goto LABEL_123;
    if ( (*(_BYTE *)(v224 - 43) & 1) == 0 )
      goto LABEL_113;
    v92 = sub_B8C3D0(v89, p_ptr, v73, v88, v74, v91);
    v73 = *v92;
    v93 = *v92 + 8LL * *((unsigned int *)v92 + 2);
    if ( v73 < v93 )
    {
      v88 = v73;
      while ( 1 )
      {
        p_ptr = *(_QWORD *)v88;
        if ( *(_WORD *)(*(_QWORD *)v88 + 36LL) == 137 )
          break;
        v88 += 8LL;
        if ( v93 == v88 )
          goto LABEL_113;
      }
      if ( v93 == v88 )
        goto LABEL_113;
    }
    else
    {
      if ( v73 == v93 )
      {
LABEL_113:
        v96 = 0;
LABEL_114:
        v97 = (__int64 *)(*(_QWORD *)(v224 - 24) & 0xFFFFFFFFFFFFFFF0LL);
        v98 = *v97;
        if ( *(_BYTE *)(*v97 + 16) == 26 || (v98 = sub_16B6900(*v97, p_ptr, v73, v88)) != 0 )
        {
          sub_A5E110(&v250, v98);
          v234 |= (v250.m128_i8[2] & 0xE0) != 0;
          sub_A5E110(&v250, v98);
          v99 = v234 ^ 1;
          v100 = (v96 | ((v250.m128_i8[3] & 7) != 0)) ^ 1;
        }
        else
        {
          v100 = v96 ^ 1;
          v99 = v234 ^ 1;
        }
LABEL_165:
        v88 = v226;
        p_ptr = v222;
        v133 = (v226 != 0) & v100;
        if ( !v222 || !v99 )
        {
          v73 = v222;
          if ( v133 )
          {
            v151 = (__int64 *)(v11 + 8);
            p_ptr = v11 + 8;
            sub_168B9F0((__int64)&v250, (__int64 *)(v11 + 8), a9, 0x1387u, 0);
            sub_15F7200(&v250);
            if ( !v234 || v222 )
              goto LABEL_123;
          }
          else
          {
            if ( v222 != 0 || v226 == 0 || !v234 )
              goto LABEL_123;
            v151 = (__int64 *)(v11 + 8);
          }
          sub_168B9F0((__int64)&v250, v151, a9, 0x1384u, 0);
          sub_15F7200(&v250);
          p_ptr = (__int64)v151;
          sub_168B9F0((__int64)&v250, v151, a9, 0x18DCu, 0);
          sub_15F7200(&v250);
          goto LABEL_123;
        }
        p_ptr = v11 + 8;
        sub_168B9F0((__int64)&v250, (__int64 *)(v11 + 8), a9, 0x1386u, 0);
        sub_15F7200(&v250);
        if ( v133 )
        {
          p_ptr = v11 + 8;
          sub_168B9F0((__int64)&v250, (__int64 *)(v11 + 8), a9, 0x1387u, 0);
          sub_15F7200(&v250);
        }
LABEL_123:
        if ( v230 )
          goto LABEL_124;
        goto LABEL_53;
      }
      if ( *(_WORD *)(*(_QWORD *)v93 + 36LL) != 137 )
      {
        v94 = (__int64 *)(v93 + 8);
        do
        {
          v88 = (unsigned __int64)v94;
          if ( (__int64 *)v73 == v94 )
            goto LABEL_113;
          v95 = *v94++;
        }
        while ( *(_WORD *)(v95 + 36) != 137 );
      }
    }
    v88 = *(_QWORD *)v73;
    if ( *(_WORD *)(*(_QWORD *)v73 + 36LL) != 137 )
    {
      v199 = (unsigned __int64 *)(v73 + 8);
      do
        v88 = *v199++;
      while ( *(_WORD *)(v88 + 36) != 137 );
    }
    v200 = *(_QWORD *)(v88 + 48);
    v201 = 16LL * *(unsigned int *)(v88 + 40);
    v232 = v200 + v201;
    v240 = v201 >> 4;
    v239 = v201 >> 6;
    if ( v201 >> 6 )
    {
      v202 = *(_QWORD *)(v88 + 48);
      v235 = v202;
      v203 = v200 + (v201 >> 6 << 6);
      do
      {
        p_ptr = v202;
        if ( (unsigned __int8)sub_16BB040("za", v202) )
        {
          v200 = v235;
          v237 = v232 != v202;
          goto LABEL_336;
        }
        v204 = v202 + 16;
        p_ptr = v202 + 16;
        if ( (unsigned __int8)sub_16BB040("za", v202 + 16)
          || (v204 = v202 + 32, p_ptr = v202 + 32, (unsigned __int8)sub_16BB040("za", v202 + 32))
          || (v204 = v202 + 48, p_ptr = v202 + 48, (unsigned __int8)sub_16BB040("za", v202 + 48)) )
        {
          v200 = v235;
          v237 = v232 != v204;
          goto LABEL_336;
        }
        v202 += 64;
      }
      while ( v203 != v202 );
      v200 = v235;
      v208 = (v232 - v202) >> 4;
    }
    else
    {
      v208 = v201 >> 4;
      v202 = *(_QWORD *)(v88 + 48);
    }
    if ( v208 != 2 )
    {
      if ( v208 != 3 )
      {
        if ( v208 != 1 )
        {
          v237 = 0;
          goto LABEL_336;
        }
        goto LABEL_372;
      }
      p_ptr = v202;
      if ( (unsigned __int8)sub_16BB040("za", v202) )
      {
        v237 = v202 != v232;
LABEL_336:
        v205 = v240;
        if ( v239 )
        {
          v206 = v200 + (v239 << 6);
          while ( 1 )
          {
            p_ptr = v200;
            if ( (unsigned __int8)sub_16BB040("zt0", v200) )
              goto LABEL_343;
            v207 = v200 + 16;
            p_ptr = v200 + 16;
            if ( (unsigned __int8)sub_16BB040("zt0", v200 + 16)
              || (v207 = v200 + 32, p_ptr = v200 + 32, (unsigned __int8)sub_16BB040("zt0", v200 + 32))
              || (v207 = v200 + 48, p_ptr = v200 + 48, (unsigned __int8)sub_16BB040("zt0", v200 + 48)) )
            {
              v96 = v232 != v207;
              goto LABEL_344;
            }
            v200 += 64;
            if ( v206 == v200 )
            {
              v205 = (v232 - v200) >> 4;
              break;
            }
          }
        }
        if ( v205 != 2 )
        {
          if ( v205 != 3 )
          {
            v96 = 0;
            if ( v205 != 1 )
              goto LABEL_344;
            goto LABEL_365;
          }
          p_ptr = v200;
          if ( (unsigned __int8)sub_16BB040("zt0", v200) )
          {
LABEL_343:
            v96 = v200 != v232;
LABEL_344:
            v234 = v237;
            goto LABEL_114;
          }
          v200 += 16;
        }
        p_ptr = v200;
        if ( (unsigned __int8)sub_16BB040("zt0", v200) )
        {
LABEL_366:
          v96 = v232 != v200;
          goto LABEL_344;
        }
        v200 += 16;
LABEL_365:
        p_ptr = v200;
        v96 = sub_16BB040("zt0", v200);
        v234 = v237;
        if ( !v96 )
          goto LABEL_114;
        goto LABEL_366;
      }
      v202 += 16;
    }
    p_ptr = v202;
    if ( (unsigned __int8)sub_16BB040("za", v202) )
    {
LABEL_373:
      v237 = v232 != v202;
      goto LABEL_336;
    }
    v202 += 16;
LABEL_372:
    p_ptr = v202;
    v237 = sub_16BB040("za", v202);
    if ( !v237 )
      goto LABEL_336;
    goto LABEL_373;
  }
  if ( (*(_BYTE *)(v220 + 29) & 1) != 0 )
  {
    v52 = sub_B8C3D0(v220, p_ptr, v13, v14, v15, v16);
    v56 = *((unsigned int *)v52 + 2);
    v57 = *v52 + 8 * v56;
    if ( (*(_BYTE *)(v220 + 29) & 1) != 0 )
    {
      v58 = a9;
      v59 = a5;
      v60 = (__int64 *)*sub_B8C3D0(v220, p_ptr, v56, v53, v54, v55);
    }
    else
    {
      v60 = nullptr;
      v58 = a9;
      v59 = a5;
    }
    v61 = v60 == (__int64 *)v57;
    if ( (unsigned __int64)v60 >= v57 )
      goto LABEL_189;
    while ( 1 )
    {
      v62 = v60;
      while ( *(_WORD *)(*v62 + 36) != 134 )
      {
        if ( (__int64 *)v57 == ++v62 )
          goto LABEL_68;
      }
      while ( 1 )
      {
LABEL_185:
        p_ptr = *v60;
        if ( *(_WORD *)(*v60 + 36) != 134 )
        {
          v144 = v60 + 1;
          do
          {
            p_ptr = *v144;
            v60 = v144++;
          }
          while ( *(_WORD *)(p_ptr + 36) != 134 );
        }
        sub_16D8200(v11, (void **)p_ptr, v59, a6, v58, *(double *)si128.m128i_i64);
        v61 = ++v60 == (__int64 *)v57;
        if ( (unsigned __int64)v60 < v57 )
          break;
LABEL_189:
        if ( v61 )
          goto LABEL_68;
        if ( *(_WORD *)(*(_QWORD *)v57 + 36LL) != 134 )
        {
          v145 = (__int64 *)(v57 + 8);
          while ( v60 != v145 )
          {
            v146 = *v145++;
            if ( *(_WORD *)(v146 + 36) == 134 )
              goto LABEL_185;
          }
          goto LABEL_68;
        }
      }
    }
  }
LABEL_68:
  if ( a3 )
    goto LABEL_69;
  p_ptr = 1;
  v152 = sub_B8DC30(v220, 1);
  if ( v152 )
  {
    if ( *(_BYTE *)(v152 + 16) == 26 )
    {
      p_ptr = 1;
      a3 = sub_B8DC30(v220, 1);
      if ( a3 )
        goto LABEL_69;
    }
  }
LABEL_124:
  if ( (*(_BYTE *)(v220 + 29) & 1) != 0 )
  {
    v108 = sub_B8C3D0(v220, p_ptr, v73, v88, v74, v91);
    v111 = *v108;
    v112 = (__int64 *)(*v108 + 8LL * *((unsigned int *)v108 + 2));
    if ( *v108 >= (unsigned __int64)v112 )
    {
      if ( (__int64 *)v111 != v112 )
      {
        if ( *(_WORD *)(*v112 + 36) == 127 )
          goto LABEL_35;
        v178 = (__int64 **)(v112 + 1);
        while ( (__int64 **)v111 != v178 )
        {
          v112 = *v178++;
          if ( *((_WORD *)v112 + 18) == 127 )
            goto LABEL_35;
        }
      }
    }
    else
    {
      v113 = (__int64 *)*v108;
      while ( 1 )
      {
        v111 = *v113;
        if ( *(_WORD *)(*v113 + 36) == 127 )
          break;
        if ( v112 == ++v113 )
          goto LABEL_53;
      }
      if ( v112 != v113 )
      {
LABEL_35:
        if ( (*(_BYTE *)(v220 + 29) & 1) == 0 )
          goto LABEL_398;
        v36 = sub_B8C3D0(v220, p_ptr, v111, (__int64)v112, v109, v110);
        v38 = (_QWORD *)*v36;
        v39 = *v36 + 8LL * *((unsigned int *)v36 + 2);
        if ( (unsigned __int64)v38 < v39 )
        {
          v40 = v38;
          while ( *(_WORD *)(*v40 + 36LL) != 127 )
          {
            if ( (_QWORD *)v39 == ++v40 )
              goto LABEL_398;
          }
          if ( (_QWORD *)v39 != v40 )
            goto LABEL_41;
LABEL_398:
          BUG();
        }
        if ( v38 == (_QWORD *)v39 )
          goto LABEL_398;
        if ( *(_WORD *)(*(_QWORD *)v39 + 36LL) == 127 )
          goto LABEL_41;
        v181 = v39 + 8;
        v182 = v181;
        if ( v38 == (_QWORD *)v181 )
          goto LABEL_398;
        while ( 1 )
        {
          v181 += 8LL;
          if ( *(_WORD *)(*(_QWORD *)v182 + 36LL) == 127 )
            break;
          v182 = v181;
          if ( v38 == (_QWORD *)v181 )
            goto LABEL_398;
        }
LABEL_41:
        v41 = *v38;
        if ( *(_WORD *)(*v38 + 36LL) != 127 )
        {
          v42 = v38 + 1;
          do
            v41 = *v42++;
          while ( *(_WORD *)(v41 + 36) != 127 );
        }
        v43 = *(_DWORD **)(a5 + 8LL * ((*(_DWORD *)(v41 + 40) & 0x3FFFFFFF) - 1 - ((*(_DWORD *)(v41 + 40) >> 30) & 1u)));
        if ( (*v43 & 0x20000) == 0 )
        {
          v44 = *(_QWORD *)(v11 + 248);
          v245.m128_i16[0] = 0;
          v247 &= ~1u;
          v245.m128_u64[1] = 0;
          v246 = 0;
          if ( (unsigned __int8)sub_C3F220((unsigned __int64)v43, (__int64)&v245, v44, 0, 0, v37) )
          {
            if ( v249 > 0x40 )
            {
              if ( (unsigned int)sub_22069E0(&v248) != 1 )
                goto LABEL_49;
            }
            else if ( !v248 || (v45 = v248 - 1, (v248 & (v248 - 1)) != 0) )
            {
LABEL_49:
              v48 = sub_C00A40((unsigned __int64)v43, (__int64)&v245, v45, v46, v47);
              sub_168B9F0((__int64)&v250, (__int64 *)(v11 + 8), v48, 0x195Du, 0);
              ptr = (void *)sub_EEC8C0((unsigned __int64)v43, v11 + 8, *(double *)si128.m128i_i64);
              sub_1587DB0((__int64)&v250, (__int64 *)&ptr);
              sub_15F7200(&v250);
            }
            if ( (unsigned __int8)sub_16BE0B0(&v248, (void *)0x100000000LL) )
            {
              v209 = sub_C00A40((unsigned __int64)v43, 0x100000000LL, v49, v50, v51);
              sub_168B9F0((__int64)&v250, (__int64 *)(v11 + 8), v209, 0x197Fu, 0);
              ptr = (void *)sub_EEC8C0((unsigned __int64)v43, v11 + 8, *(double *)si128.m128i_i64);
              v210 = sub_1587DB0((__int64)&v250, (__int64 *)&ptr);
              v211 = v210;
              if ( *(_BYTE *)(v210 + 120) )
              {
                sub_16B6F70((unsigned __int8 **)(v210 + 32), 0x100000000LL);
              }
              else if ( *(_BYTE *)(v210 + 132) )
              {
                v216 = sub_168B9E0((_QWORD *)v210);
                v217 = *(_QWORD *)(v211 + 16);
                if ( v217 )
                  v217 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v217 + 32LL))(*(_QWORD *)(v211 + 16));
                v242 = v217;
                v218 = sub_1587BC0(v216, &v242, v212, v213, v214, v215);
                sub_16B6F70((unsigned __int8 **)(*v218 + 32LL * *(unsigned int *)(v211 + 128) + 8), 0x100000000LL);
              }
              sub_15F7200(&v250);
            }
          }
          if ( v246 > 1 )
            sub_A4F8E0((int *)&v246);
        }
      }
    }
  }
LABEL_53:
  if ( v231 )
LABEL_54:
    sub_1BDEA00(v11, v231, a4, a5, a6, a9);
LABEL_55:
  sub_1505150((void ***)&v241);
}
