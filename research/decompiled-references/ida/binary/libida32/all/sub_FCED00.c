__int64 __fastcall sub_FCED00(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 *v5; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rbp
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // r9
  unsigned __int64 *v17; // r11
  unsigned __int64 *v18; // rax
  void **v19; // r12
  void **v20; // rbp
  void **v21; // rbx
  __int64 v23; // rbp
  __int64 v24; // r11
  unsigned __int64 v25; // rdi
  __int64 v26; // rdi
  __m128i *v27; // rax
  unsigned __int64 *v28; // r11
  __m128i *v29; // rbx
  __int64 v30; // rdx
  unsigned __int64 *v31; // r9
  int v32; // r8d
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __m128i v35; // xmm0
  unsigned __int64 *v36; // rbp
  __m128i *v37; // rcx
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  int v42; // eax
  unsigned __int64 v43; // rdx
  __int64 v44; // rdx
  unsigned __int64 v45; // rsi
  int v46; // ecx
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rcx
  unsigned __int64 *v49; // rdi
  unsigned int v50; // ecx
  unsigned __int64 *v51; // rdx
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // rdx
  __int64 v54; // r10
  __int64 v55; // r10
  __int64 v56; // rax
  __int64 v57; // r13
  __int64 v58; // r8
  unsigned __int64 *v59; // rbx
  __int64 v60; // rbp
  unsigned __int64 *v61; // r12
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  __m128i *v64; // rax
  __int64 v65; // r8
  __m128i si128; // xmm0
  __int64 *v67; // r10
  __int64 v68; // rdx
  unsigned __int64 *v69; // r11
  __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  unsigned __int64 *v72; // rax
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rdx
  __int64 v75; // rdx
  unsigned __int64 v76; // rcx
  int v77; // edx
  unsigned int v78; // edx
  int v79; // ebx
  unsigned __int64 *v80; // r9
  unsigned __int64 *v81; // rdi
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // r8
  __int64 v84; // rbp
  unsigned __int64 v85; // rbp
  __int64 v86; // r8
  int v87; // eax
  __int64 v88; // rcx
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // rcx
  __int64 v91; // rax
  unsigned __int64 v92; // rbx
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rcx
  __int64 v95; // rax
  int v96; // eax
  unsigned __int64 v97; // rdi
  int v98; // eax
  int v99; // r10d
  unsigned __int64 *v100; // rsi
  unsigned __int64 v101; // r11
  __int64 v102; // r11
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rcx
  __int64 v105; // rdx
  int v106; // ecx
  __int64 v107; // rdx
  unsigned __int64 v108; // rsi
  __m128i v109; // xmm0
  unsigned __int64 v110; // rsi
  __int64 v111; // rdx
  int v112; // esi
  int v113; // ecx
  int v114; // r10d
  unsigned __int64 *v115; // r9
  unsigned int v116; // esi
  unsigned __int64 v117; // r11
  __int64 v118; // rbp
  __int64 v119; // rbp
  unsigned __int64 v120; // rax
  __int64 *v121; // rax
  unsigned __int64 v122; // rax
  unsigned __int64 v123; // rdx
  int v124; // edx
  bool v125; // zf
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // r8
  __int64 v128; // rax
  __m128i *v129; // rax
  unsigned __int64 *v130; // r11
  __m128i *v131; // r10
  __int64 v132; // rdx
  __int64 v133; // rdx
  unsigned __int64 *v134; // r8
  unsigned __int64 v135; // rcx
  unsigned __int64 *v136; // rbx
  unsigned __int64 v137; // rbp
  unsigned __int64 v138; // rax
  __int64 v139; // rax
  unsigned __int64 v140; // rdx
  int v141; // eax
  __int64 v142; // rax
  unsigned __int64 *v143; // rdx
  unsigned __int64 v144; // rax
  __int64 v145; // rdi
  __int64 *v146; // rsi
  __m128i *v147; // r13
  unsigned __int64 *v148; // r15
  __int64 v149; // r10
  unsigned __int64 *v150; // rbx
  __int64 v151; // rdx
  unsigned __int64 v152; // r12
  unsigned __int64 *v153; // rbp
  __int64 v154; // r9
  unsigned __int64 *v155; // r14
  __int64 *v156; // r11
  unsigned __int64 v157; // rsi
  __int64 v158; // rdi
  __int64 v159; // rdi
  __int64 v160; // rax
  unsigned __int64 v161; // rax
  int v162; // ecx
  unsigned __int64 v163; // rdx
  __int64 v164; // rdx
  unsigned __int64 v165; // rsi
  int v166; // esi
  int v167; // ecx
  int v168; // ebp
  unsigned int v169; // esi
  unsigned __int64 v170; // r11
  __int64 v171; // rbx
  __int64 v172; // rbx
  int v173; // eax
  __int64 v174; // rax
  __m128i *v175; // rax
  __m128i v176; // xmm1
  __int64 v177; // rdx
  unsigned __int64 *v178; // r11
  __int64 v179; // rdx
  unsigned __int64 v180; // rcx
  unsigned __int64 *v181; // rax
  unsigned __int64 v182; // rsi
  unsigned __int64 v183; // rdx
  __int64 v184; // rdx
  unsigned __int64 v185; // rcx
  int v186; // edx
  unsigned __int64 *v187; // rdi
  unsigned __int64 v188; // rdx
  __int64 v189; // rdx
  __int64 v190; // rdx
  unsigned __int64 v191; // rsi
  unsigned __int64 v192; // rsi
  unsigned __int64 v193; // rdx
  unsigned __int64 v194; // rsi
  unsigned __int64 v195; // rdx
  unsigned __int64 v196; // rdx
  unsigned __int64 v197; // rsi
  __int64 v198; // rax
  unsigned __int64 *v199; // rbx
  __int64 v200; // rdi
  __int64 *v201; // rsi
  unsigned __int64 *v202; // rbp
  unsigned __int64 *v203; // rdx
  __m128i *v204; // r13
  unsigned __int64 *v205; // r15
  __int64 v206; // rcx
  __int64 v207; // r9
  unsigned __int64 v208; // r12
  unsigned __int64 *v209; // r14
  __int64 v210; // r10
  __int64 *v211; // r11
  unsigned __int64 v212; // rsi
  __int64 v213; // rdi
  __int64 v214; // rdi
  unsigned __int64 v215; // rdx
  unsigned __int64 v216; // rax
  __int64 v217; // rcx
  __int64 v218; // rcx
  unsigned __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // rcx
  unsigned __int64 v222; // rdx
  unsigned __int64 v223; // rcx
  unsigned __int64 v224; // rdi
  unsigned int v225; // edx
  int v226; // ebx
  unsigned __int64 *v227; // r9
  unsigned __int64 v228; // rcx
  unsigned __int64 v229; // r8
  __int64 v230; // rbp
  unsigned __int64 v231; // rbp
  __int64 v232; // r8
  unsigned __int64 v233; // rcx
  unsigned __int64 v234; // rdx
  char v235; // al
  unsigned __int64 *v236; // rsi
  unsigned __int64 *v237; // rdx
  __int64 *v238; // rax
  char v239; // al
  __int64 v240; // rax
  __int64 v241; // [rsp+8h] [rbp-C0h]
  unsigned __int64 *v242; // [rsp+10h] [rbp-B8h]
  __int64 v243; // [rsp+10h] [rbp-B8h]
  unsigned __int64 *v244; // [rsp+10h] [rbp-B8h]
  int v245; // [rsp+18h] [rbp-B0h]
  int v246; // [rsp+18h] [rbp-B0h]
  __int64 v247; // [rsp+20h] [rbp-A8h]
  int v248; // [rsp+20h] [rbp-A8h]
  __int64 v249; // [rsp+20h] [rbp-A8h]
  __int64 v250; // [rsp+20h] [rbp-A8h]
  int v251; // [rsp+20h] [rbp-A8h]
  __int64 v252; // [rsp+20h] [rbp-A8h]
  int v253; // [rsp+20h] [rbp-A8h]
  int v254; // [rsp+20h] [rbp-A8h]
  int v255; // [rsp+2Ch] [rbp-9Ch]
  int v256; // [rsp+2Ch] [rbp-9Ch]
  int v257; // [rsp+2Ch] [rbp-9Ch]
  int v258; // [rsp+2Ch] [rbp-9Ch]
  int v259; // [rsp+30h] [rbp-98h]
  unsigned __int64 *v260; // [rsp+30h] [rbp-98h]
  int v261; // [rsp+30h] [rbp-98h]
  __int64 v262; // [rsp+38h] [rbp-90h]
  unsigned __int64 *v263; // [rsp+38h] [rbp-90h]
  unsigned __int64 *v264; // [rsp+38h] [rbp-90h]
  unsigned __int64 *v265; // [rsp+40h] [rbp-88h]
  __int64 v266; // [rsp+40h] [rbp-88h]
  __int64 v267; // [rsp+40h] [rbp-88h]
  __int64 v268; // [rsp+48h] [rbp-80h]
  __int64 v269; // [rsp+48h] [rbp-80h]
  __int64 v270; // [rsp+50h] [rbp-78h]
  __int64 v271; // [rsp+50h] [rbp-78h]
  __int64 *v272; // [rsp+58h] [rbp-70h]
  __int64 *v273; // [rsp+58h] [rbp-70h]
  unsigned __int64 *v274; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v275; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 *v276; // [rsp+80h] [rbp-48h] BYREF
  char v277; // [rsp+88h] [rbp-40h]

  v2 = a1;
  v241 = *(_QWORD *)(a1 + 376);
  if ( *(_QWORD *)(a1 + 368) == v241 )
    return *(_QWORD *)(v2 + 336);
  v3 = *(_QWORD *)(a1 + 368);
  v4 = a1;
  v5 = (__int64 *)&v276;
  while ( 2 )
  {
    while ( 1 )
    {
      sub_FB5F30((__int64)v5, a2, *(const void **)v3, *(_QWORD *)(v3 + 8), 0, 1, 1);
      if ( (v277 & 1) == 0 )
        break;
      v18 = v276;
      v276 = nullptr;
      v274 = v18;
      sub_9E1A20(&v275, &v274);
      if ( v274 )
        (*(void (__fastcall **)(unsigned __int64 *))(*v274 + 8))(v274);
      v3 += 32;
      sub_9E1050(v5);
      if ( v241 == v3 )
        goto LABEL_11;
    }
    v7 = (unsigned __int64)v276;
    sub_9E1050(v5);
    v275 = v7;
    if ( !v7 )
      goto LABEL_6;
    v12 = *(_DWORD *)(v4 + 320);
    if ( !v12 )
    {
      v13 = *(unsigned int *)(v4 + 344);
      v14 = sub_FCA390(*(unsigned __int64 **)(v4 + 336), *(_QWORD *)(v4 + 336) + 8 * v13, &v275);
      if ( v17 != v14 )
        goto LABEL_6;
      if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 348) )
      {
        sub_22134E0(v4 + 336, v4 + 352, v13 + 1, 8);
        v17 = (unsigned __int64 *)(*(_QWORD *)(v4 + 336) + 8LL * *(unsigned int *)(v4 + 344));
      }
      *v17 = v7;
      v56 = (unsigned int)(*(_DWORD *)(v4 + 344) + 1);
      *(_DWORD *)(v4 + 344) = v56;
      if ( (unsigned int)v56 <= 2 )
        goto LABEL_6;
      v243 = a2;
      v57 = v3;
      v58 = *(_QWORD *)(v4 + 336) + 8 * v56;
      v59 = *(unsigned __int64 **)(v4 + 336);
      while ( 1 )
      {
LABEL_63:
        v60 = *(unsigned int *)(v4 + 328);
        v61 = *(unsigned __int64 **)(v4 + 312);
        if ( !(_DWORD)v60 )
        {
          v276 = nullptr;
LABEL_65:
          v247 = v58;
          v62 = (((((((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v60 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v60 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 8)
              | (((((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v60 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v60 - 1) | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v60 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v60 - 1) >> 1);
          v63 = ((v62 >> 16) | v62) + 1;
          if ( (unsigned int)v63 < 0x40 )
            LODWORD(v63) = 64;
          *(_DWORD *)(v4 + 328) = v63;
          v64 = (__m128i *)sub_220C370(8LL * (unsigned int)v63, 8, 64, v15, v58, v16);
          v65 = v247;
          si128 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
          v67 = (__int64 *)v64;
          *(_QWORD *)(v4 + 312) = v64;
          if ( v61 )
          {
            v68 = *(unsigned int *)(v4 + 328);
            *(_QWORD *)(v4 + 320) = 0;
            v69 = &v61[v60];
            v248 = v68;
            v70 = 8 * v68;
            if ( v64 != (__m128i *)&v64->m128i_i8[v70] )
            {
              v71 = ((unsigned __int64)(v70 - 8) >> 3) + 1;
              if ( v70 == 8 )
                goto LABEL_72;
              do
              {
                ++v64;
                v64[-1] = _mm_load_si128((const __m128i *)&xmmword_2384C40);
              }
              while ( v64 != (__m128i *)&v67[2 * (v71 >> 1)] );
              v64 = (__m128i *)&v67[v71 & 0xFFFFFFFFFFFFFFFELL];
              if ( (v71 & 0xFFFFFFFFFFFFFFFELL) != v71 )
LABEL_72:
                v64->m128i_i64[0] = -4096;
            }
            if ( v61 != v69 )
            {
              v262 = v65;
              v72 = v61;
              v265 = v59;
              v255 = v248 - 1;
              do
              {
                v73 = *v72;
                if ( *v72 != -4096 && v73 != -8192 )
                {
                  if ( !v248 )
                  {
                    *(_QWORD *)&dword_0 = *v72;
                    BUG();
                  }
                  v74 = *v72;
                  while ( 1 )
                  {
                    v75 = *(_QWORD *)(v74 + 8);
                    if ( !v75 )
                    {
LABEL_82:
                      v77 = -1916529075;
                      goto LABEL_83;
                    }
                    v76 = v75 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v75 & 4) == 0 )
                      break;
                    v74 = v75 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( !v76 )
                      goto LABEL_82;
                  }
                  v233 = HIDWORD(v76);
                  v234 = 0x9DDFEA08EB382D69LL * (v233 ^ (((8 * v75) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
                  v77 = -348639895
                      * (((unsigned int)((0x9DDFEA08EB382D69LL * (v234 ^ v233 ^ (v234 >> 47))) >> 32) >> 15)
                       ^ (-348639895 * (v234 ^ v233 ^ (v234 >> 47))));
LABEL_83:
                  v78 = v255 & v77;
                  v79 = 1;
                  v80 = nullptr;
                  v81 = (unsigned __int64 *)&v67[v78];
                  v82 = *v81;
                  if ( v73 != *v81 )
                  {
                    while ( v82 != -4096 )
                    {
                      if ( v82 == -8192 )
                      {
                        if ( !v80 )
                          v80 = v81;
                      }
                      else
                      {
                        v83 = *v72;
                        do
                        {
                          v84 = *(_QWORD *)(v83 + 8);
                          if ( !v84 )
                            break;
                          v83 = v84 & 0xFFFFFFFFFFFFFFF8LL;
                          if ( (v84 & 4) == 0 )
                            break;
                        }
                        while ( v83 );
                        v85 = v84 & 0xFFFFFFFFFFFFFFF8LL;
                        do
                        {
                          v86 = *(_QWORD *)(v82 + 8);
                          if ( !v86 )
                            break;
                          v82 = v86 & 0xFFFFFFFFFFFFFFF8LL;
                          if ( (v86 & 4) == 0 )
                            break;
                        }
                        while ( v82 );
                        if ( v85 == (v86 & 0xFFFFFFFFFFFFFFF8LL) )
                          goto LABEL_173;
                      }
                      v78 = v255 & (v79 + v78);
                      v81 = (unsigned __int64 *)&v67[v78];
                      v82 = *v81;
                      if ( v73 == *v81 )
                        goto LABEL_173;
                      ++v79;
                    }
                    if ( v80 )
                      v81 = v80;
                  }
LABEL_173:
                  v123 = *v72;
                  ++*(_DWORD *)(v4 + 320);
                  *v81 = v123;
                }
                ++v72;
              }
              while ( v69 != v72 );
              goto LABEL_175;
            }
            goto LABEL_176;
          }
          v217 = *(unsigned int *)(v4 + 328);
          *(_QWORD *)(v4 + 320) = 0;
          v218 = 8 * v217;
          if ( v64 != (__m128i *)&v64->m128i_i8[v218] )
          {
            v219 = ((unsigned __int64)(v218 - 8) >> 3) + 1;
            if ( v218 == 8 )
              goto LABEL_294;
            do
              *v64++ = si128;
            while ( &v67[2 * (v219 >> 1)] != (__int64 *)v64 );
            v67 += v219 & 0xFFFFFFFFFFFFFFFELL;
            if ( v219 != (v219 & 0xFFFFFFFFFFFFFFFELL) )
              goto LABEL_294;
          }
LABEL_177:
          v250 = v65;
          sub_FCEB30((__int64 *)(v4 + 312), v59, (unsigned __int64 **)v5);
          v58 = v250;
          v100 = v276;
          v124 = *(_DWORD *)(v4 + 320) + 1;
          goto LABEL_178;
        }
        v93 = *v59;
        v94 = *v59;
        while ( 1 )
        {
          v95 = *(_QWORD *)(v94 + 8);
          if ( !v95 )
          {
LABEL_111:
            v96 = -1916529075;
            goto LABEL_112;
          }
          v94 = v95 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v95 & 4) == 0 )
            break;
          if ( !v94 )
            goto LABEL_111;
        }
        v103 = 0x9DDFEA08EB382D69LL * (HIDWORD(v94) ^ (((8 * v95) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
        v104 = 0x9DDFEA08EB382D69LL * ((v103 >> 47) ^ HIDWORD(v94) ^ v103);
        v96 = -348639895 * (v104 ^ (v104 >> 47));
LABEL_112:
        v97 = (unsigned int)(v60 - 1);
        v98 = v97 & v96;
        v16 = &v61[v98];
        v15 = *v16;
        if ( v93 != *v16 )
          break;
LABEL_126:
        if ( (unsigned __int64 *)v58 == ++v59 )
          goto LABEL_127;
      }
      v99 = 1;
      v100 = nullptr;
      while ( 1 )
      {
        if ( v93 == -4096 || v93 == -8192 )
        {
          if ( v15 == -4096 )
          {
LABEL_242:
            v173 = *(_DWORD *)(v4 + 320);
            if ( !v100 )
              v100 = v16;
            v124 = v173 + 1;
            v15 = (unsigned int)(4 * (v173 + 1));
            v276 = v100;
            if ( (unsigned int)v15 >= 3 * (int)v60 )
              goto LABEL_65;
            v15 = (unsigned int)v60 >> 3;
            if ( (int)v60 - *(_DWORD *)(v4 + 324) - v124 <= (unsigned int)v15 )
            {
              v252 = v58;
              v174 = (((((((((v97 | (v97 >> 1)) >> 2) | v97 | (v97 >> 1)) >> 4)
                        | ((v97 | (v97 >> 1)) >> 2)
                        | v97
                        | (v97 >> 1)) >> 8)
                      | ((((v97 | (v97 >> 1)) >> 2) | v97 | (v97 >> 1)) >> 4)
                      | ((v97 | (v97 >> 1)) >> 2)
                      | v97
                      | (v97 >> 1)) >> 16)
                    | ((((((v97 | (v97 >> 1)) >> 2) | v97 | (v97 >> 1)) >> 4)
                      | ((v97 | (v97 >> 1)) >> 2)
                      | v97
                      | (v97 >> 1)) >> 8)
                    | ((((v97 | (v97 >> 1)) >> 2) | v97 | (v97 >> 1)) >> 4)
                    | ((v97 | (v97 >> 1)) >> 2)
                    | v97
                    | (v97 >> 1))
                   + 1;
              if ( (unsigned int)v174 < 0x40 )
                LODWORD(v174) = 64;
              *(_DWORD *)(v4 + 328) = v174;
              v175 = (__m128i *)sub_220C370(8LL * (unsigned int)v174, 8, 64, v15, v58, v16);
              v65 = v252;
              v176 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
              v67 = (__int64 *)v175;
              *(_QWORD *)(v4 + 312) = v175;
              if ( v61 )
              {
                v177 = *(unsigned int *)(v4 + 328);
                *(_QWORD *)(v4 + 320) = 0;
                v178 = &v61[v60];
                v253 = v177;
                v179 = 8 * v177;
                if ( v175 != (__m128i *)&v175->m128i_i8[v179] )
                {
                  v180 = ((unsigned __int64)(v179 - 8) >> 3) + 1;
                  if ( v179 == 8 )
                    goto LABEL_253;
                  do
                    *v175++ = v176;
                  while ( v175 != (__m128i *)&v67[2 * (v180 >> 1)] );
                  v175 = (__m128i *)&v67[v180 & 0xFFFFFFFFFFFFFFFELL];
                  if ( (v180 & 0xFFFFFFFFFFFFFFFELL) != v180 )
LABEL_253:
                    v175->m128i_i64[0] = -4096;
                }
                v262 = v65;
                v181 = v61;
                v265 = v59;
                v257 = v253 - 1;
                do
                {
                  v182 = *v181;
                  if ( *v181 != -4096 && v182 != -8192 )
                  {
                    if ( !v253 )
                    {
                      *(_QWORD *)&dword_0 = *v181;
                      BUG();
                    }
                    v183 = *v181;
                    while ( 1 )
                    {
                      v184 = *(_QWORD *)(v183 + 8);
                      if ( !v184 )
                      {
LABEL_262:
                        v186 = -1916529075;
                        goto LABEL_309;
                      }
                      v185 = v184 & 0xFFFFFFFFFFFFFFF8LL;
                      if ( (v184 & 4) == 0 )
                        break;
                      v183 = v184 & 0xFFFFFFFFFFFFFFF8LL;
                      if ( !v185 )
                        goto LABEL_262;
                    }
                    v223 = HIDWORD(v185);
                    v224 = 0x9DDFEA08EB382D69LL * (v223 ^ (((8 * v184) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
                    v186 = -348639895
                         * ((-348639895 * ((v224 >> 47) ^ v223 ^ v224))
                          ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v224 >> 47) ^ v223 ^ v224)) >> 32) >> 15));
LABEL_309:
                    v225 = v257 & v186;
                    v226 = 1;
                    v227 = nullptr;
                    v187 = (unsigned __int64 *)&v67[v225];
                    v228 = *v187;
                    if ( *v187 != v182 )
                    {
                      while ( v228 != -4096 )
                      {
                        if ( v228 == -8192 )
                        {
                          if ( !v227 )
                            v227 = v187;
                        }
                        else
                        {
                          v229 = *v181;
                          do
                          {
                            v230 = *(_QWORD *)(v229 + 8);
                            if ( !v230 )
                              break;
                            v229 = v230 & 0xFFFFFFFFFFFFFFF8LL;
                            if ( (v230 & 4) == 0 )
                              break;
                          }
                          while ( v229 );
                          v231 = v230 & 0xFFFFFFFFFFFFFFF8LL;
                          do
                          {
                            v232 = *(_QWORD *)(v228 + 8);
                            if ( !v232 )
                              break;
                            v228 = v232 & 0xFFFFFFFFFFFFFFF8LL;
                            if ( (v232 & 4) == 0 )
                              break;
                          }
                          while ( v228 );
                          if ( v231 == (v232 & 0xFFFFFFFFFFFFFFF8LL) )
                            goto LABEL_265;
                        }
                        v225 = v257 & (v226 + v225);
                        v187 = (unsigned __int64 *)&v67[v225];
                        v228 = *v187;
                        if ( *v187 == v182 )
                          goto LABEL_265;
                        ++v226;
                      }
                      if ( v227 )
                        v187 = v227;
                    }
LABEL_265:
                    v188 = *v181;
                    ++*(_DWORD *)(v4 + 320);
                    *v187 = v188;
                  }
                  ++v181;
                }
                while ( v178 != v181 );
LABEL_175:
                v65 = v262;
                v59 = v265;
LABEL_176:
                v249 = v65;
                operator delete();
                v65 = v249;
                goto LABEL_177;
              }
              v220 = *(unsigned int *)(v4 + 328);
              *(_QWORD *)(v4 + 320) = 0;
              v221 = 8 * v220;
              if ( v175 == (__m128i *)&v175->m128i_i8[v221] )
                goto LABEL_177;
              v222 = ((unsigned __int64)(v221 - 8) >> 3) + 1;
              if ( v221 != 8 )
              {
                do
                {
                  ++v175;
                  v175[-1] = _mm_load_si128((const __m128i *)&xmmword_2384C40);
                }
                while ( &v67[2 * (v222 >> 1)] != (__int64 *)v175 );
                v67 += v222 & 0xFFFFFFFFFFFFFFFELL;
                if ( (v222 & 0xFFFFFFFFFFFFFFFELL) == v222 )
                  goto LABEL_177;
              }
LABEL_294:
              *v67 = -4096;
              goto LABEL_177;
            }
LABEL_178:
            v125 = *v100 == -4096;
            *(_DWORD *)(v4 + 320) = v124;
            if ( !v125 )
              --*(_DWORD *)(v4 + 324);
            v126 = *v59++;
            *v100 = v126;
            if ( (unsigned __int64 *)v58 == v59 )
            {
LABEL_127:
              v3 = v57;
              a2 = v243;
              goto LABEL_6;
            }
            goto LABEL_63;
          }
          if ( v15 == -8192 )
          {
LABEL_161:
            if ( !v100 )
              v100 = v16;
          }
        }
        else
        {
          if ( v15 == -4096 )
            goto LABEL_242;
          if ( v15 == -8192 )
            goto LABEL_161;
          v16 = (unsigned __int64 *)*v59;
          do
          {
            v101 = v16[1];
            if ( !v101 )
            {
              v16 = nullptr;
              break;
            }
            v16 = (unsigned __int64 *)(v101 & 0xFFFFFFFFFFFFFFF8LL);
          }
          while ( (v101 & 4) != 0 && v16 );
          while ( 1 )
          {
            v102 = *(_QWORD *)(v15 + 8);
            if ( !v102 )
              break;
            v15 = v102 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v102 & 4) == 0 || !v15 )
              goto LABEL_125;
          }
          v15 = 0;
LABEL_125:
          if ( (unsigned __int64 *)v15 == v16 )
            goto LABEL_126;
        }
        v98 = v97 & (v99 + v98);
        v16 = &v61[v98];
        v15 = *v16;
        if ( v93 == *v16 )
          goto LABEL_126;
        ++v99;
      }
    }
    v23 = *(unsigned int *)(v4 + 328);
    v24 = *(_QWORD *)(v4 + 312);
    if ( !(_DWORD)v23 )
      goto LABEL_18;
    v43 = v7;
    while ( 1 )
    {
      v44 = *(_QWORD *)(v43 + 8);
      if ( !v44 )
      {
LABEL_41:
        v46 = -1916529075;
        goto LABEL_43;
      }
      v45 = v44 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v44 & 4) == 0 )
        break;
      v43 = v44 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v45 )
        goto LABEL_41;
    }
    v47 = HIDWORD(v45);
    v48 = 0x9DDFEA08EB382D69LL * (v47 ^ (((8 * v44) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
    v46 = -348639895
        * ((-348639895 * ((v48 >> 47) ^ v47 ^ v48))
         ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v48 >> 47) ^ v47 ^ v48)) >> 32) >> 15));
LABEL_43:
    v10 = (unsigned int)(v23 - 1);
    v11 = 1;
    v49 = nullptr;
    v50 = v10 & v46;
    v51 = (unsigned __int64 *)(v24 + 8LL * v50);
    v52 = *v51;
    if ( v7 == *v51 )
      goto LABEL_6;
    while ( v7 != -4096 && v7 != -8192 )
    {
      if ( v52 == -4096 )
        goto LABEL_97;
      if ( v52 == -8192 )
        goto LABEL_302;
      v53 = v7;
      do
      {
        v54 = *(_QWORD *)(v53 + 8);
        if ( !v54 )
        {
          v53 = 0;
          break;
        }
        v53 = v54 & 0xFFFFFFFFFFFFFFF8LL;
      }
      while ( (v54 & 4) != 0 && v53 );
      while ( 1 )
      {
        v55 = *(_QWORD *)(v52 + 8);
        if ( !v55 )
          break;
        v52 = v55 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v55 & 4) == 0 || !v52 )
          goto LABEL_55;
      }
      v52 = 0;
LABEL_55:
      if ( v52 == v53 )
        goto LABEL_6;
LABEL_185:
      v50 = v10 & (v11 + v50);
      v51 = (unsigned __int64 *)(v24 + 8LL * v50);
      v52 = *v51;
      if ( *v51 == v7 )
        goto LABEL_6;
      v11 = (unsigned int)(v11 + 1);
    }
    if ( v52 != -4096 )
    {
      if ( v52 != -8192 )
        goto LABEL_185;
LABEL_302:
      if ( !v49 )
        v49 = v51;
      goto LABEL_185;
    }
LABEL_97:
    if ( !v49 )
      v49 = v51;
    v87 = v12 + 1;
    v8 = (unsigned int)(3 * v23);
    v9 = (unsigned int)(4 * v87);
    if ( (unsigned int)v9 >= (unsigned int)v8 )
    {
LABEL_18:
      v242 = *(unsigned __int64 **)(v4 + 312);
      v25 = (((((((unsigned int)(2 * v23 - 1) | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v23 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v23 - 1) | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v23 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v23 - 1) | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v23 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v23 - 1) | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v23 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v23 - 1) >> 1);
      v26 = ((v25 >> 16) | v25) + 1;
      if ( (unsigned int)v26 < 0x40 )
        LODWORD(v26) = 64;
      *(_DWORD *)(v4 + 328) = v26;
      v27 = (__m128i *)sub_220C370(8LL * (unsigned int)v26, 8, v8, v9, v10, v11);
      v28 = v242;
      v29 = v27;
      *(_QWORD *)(v4 + 312) = v27;
      if ( v242 )
      {
        v30 = *(unsigned int *)(v4 + 328);
        *(_QWORD *)(v4 + 320) = 0;
        v31 = &v242[v23];
        v32 = v30;
        v33 = 8 * v30;
        if ( v27 != (__m128i *)&v27->m128i_i8[v33] )
        {
          v34 = ((unsigned __int64)(v33 - 8) >> 3) + 1;
          if ( v33 == 8 )
            goto LABEL_26;
          v35 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
          do
            *v27++ = v35;
          while ( v27 != &v29[v34 >> 1] );
          v27 = (__m128i *)((char *)v29 + 8 * (v34 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v34 & 0xFFFFFFFFFFFFFFFELL) != v34 )
LABEL_26:
            v27->m128i_i64[0] = -4096;
        }
        if ( v242 != v31 )
        {
          v36 = v242;
          v37 = v29;
          do
          {
            v38 = *v36;
            if ( *v36 != -4096 && v38 != -8192 )
            {
              if ( !v32 )
              {
                *(_QWORD *)&dword_0 = *v36;
                BUG();
              }
              v39 = *v36;
              while ( 1 )
              {
                v40 = *(_QWORD *)(v39 + 8);
                if ( !v40 )
                {
LABEL_36:
                  v42 = -1916529075;
                  goto LABEL_277;
                }
                v41 = v40 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v40 & 4) == 0 )
                  break;
                v39 = v40 & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v41 )
                  goto LABEL_36;
              }
              v196 = HIDWORD(v41);
              v197 = 0x9DDFEA08EB382D69LL * (v196 ^ (((8 * v40) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
              v42 = -348639895
                  * ((-348639895 * ((v197 >> 47) ^ v196 ^ v197))
                   ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v197 >> 47) ^ v196 ^ v197)) >> 32) >> 15));
LABEL_277:
              v254 = 1;
              v198 = (v32 - 1) & (unsigned int)v42;
              v258 = v32 - 1;
              v199 = (unsigned __int64 *)v37 + v198;
              v246 = v198;
              v120 = *v199;
              if ( v38 != *v199 )
              {
                v260 = v36;
                v200 = a2;
                v201 = v5;
                v202 = nullptr;
                v203 = v260;
                v204 = v37;
                v205 = v31;
                v206 = v3;
                v207 = v4;
                v208 = v38;
                v209 = v28;
                v210 = v200;
                v211 = v201;
                while ( 1 )
                {
                  if ( v120 != -4096 && v120 != -8192 )
                  {
                    v212 = v208;
                    do
                    {
                      v213 = *(_QWORD *)(v212 + 8);
                      if ( !v213 )
                      {
                        v212 = 0;
                        break;
                      }
                      v212 = v213 & 0xFFFFFFFFFFFFFFF8LL;
                    }
                    while ( (v213 & 4) != 0 && v212 );
                    while ( 1 )
                    {
                      v214 = *(_QWORD *)(v120 + 8);
                      if ( !v214 )
                        break;
                      v120 = v214 & 0xFFFFFFFFFFFFFFF8LL;
                      if ( (v214 & 4) == 0 || !v120 )
                        goto LABEL_166;
                    }
                    v120 = 0;
LABEL_166:
                    if ( v212 == v120 )
                    {
LABEL_167:
                      v121 = v211;
                      v3 = v206;
                      v28 = v209;
                      v37 = v204;
                      v4 = v207;
                      v36 = v203;
                      v31 = v205;
                      a2 = v210;
                      v5 = v121;
                      goto LABEL_168;
                    }
                  }
                  if ( *v199 == -4096 )
                    break;
                  v272 = v211;
                  v270 = v210;
                  v268 = v207;
                  v266 = v206;
                  v263 = v203;
                  v261 = v32;
                  v235 = sub_FCA750(*v199, 0xFFFFFFFFFFFFE000LL);
                  v32 = v261;
                  v203 = v263;
                  v206 = v266;
                  v207 = v268;
                  v210 = v270;
                  v211 = v272;
                  if ( !v202 && v235 )
                    v202 = v199;
                  v199 = (unsigned __int64 *)v204 + (v258 & (unsigned int)(v246 + v254));
                  v246 = v258 & (v246 + v254);
                  v120 = *v199;
                  if ( v208 == *v199 )
                    goto LABEL_167;
                  ++v254;
                }
                v236 = v203;
                v237 = v202;
                v238 = v211;
                v3 = v206;
                v125 = v202 == nullptr;
                v37 = v204;
                v28 = v209;
                a2 = v210;
                v4 = v207;
                v36 = v236;
                v31 = v205;
                if ( !v125 )
                  v199 = v237;
                v5 = v238;
              }
LABEL_168:
              v122 = *v36;
              ++*(_DWORD *)(v4 + 320);
              *v199 = v122;
            }
            ++v36;
          }
          while ( v31 != v36 );
        }
        operator delete();
        v29 = *(__m128i **)(v4 + 312);
        v106 = *(_DWORD *)(v4 + 328);
        v87 = *(_DWORD *)(v4 + 320) + 1;
      }
      else
      {
        v105 = *(unsigned int *)(v4 + 328);
        *(_QWORD *)(v4 + 320) = 0;
        v106 = v105;
        v107 = 8 * v105;
        if ( v27 != (__m128i *)&v27->m128i_i8[v107] )
        {
          v108 = ((unsigned __int64)(v107 - 8) >> 3) + 1;
          if ( v107 == 8 )
            goto LABEL_136;
          v109 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
          do
            *v27++ = v109;
          while ( &v29[v108 >> 1] != v27 );
          v27 = (__m128i *)((char *)v29 + 8 * (v108 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v108 & 0xFFFFFFFFFFFFFFFELL) != v108 )
LABEL_136:
            v27->m128i_i64[0] = -4096;
        }
        v87 = 1;
      }
      if ( !v106 )
      {
LABEL_182:
        v89 = 0x10102464C457FLL;
        v49 = nullptr;
LABEL_102:
        *(_DWORD *)(v4 + 320) = v87;
        if ( v89 != -4096 )
LABEL_103:
          --*(_DWORD *)(v4 + 324);
        goto LABEL_104;
      }
      v110 = v275;
      while ( 1 )
      {
        v111 = *(_QWORD *)(v110 + 8);
        if ( !v111 )
        {
LABEL_143:
          v112 = -1916529075;
          goto LABEL_144;
        }
        v110 = v111 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v111 & 4) == 0 )
          break;
        if ( !v110 )
          goto LABEL_143;
      }
      v192 = HIDWORD(v110);
      v193 = 0x9DDFEA08EB382D69LL * (v192 ^ (((8 * v111) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
      v112 = -348639895
           * ((-348639895 * (v193 ^ v192 ^ (v193 >> 47)))
            ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v193 ^ v192 ^ (v193 >> 47))) >> 32) >> 15));
LABEL_144:
      v113 = v106 - 1;
      v114 = 1;
      v115 = nullptr;
      v116 = v113 & v112;
      v49 = (unsigned __int64 *)v29 + v116;
      v89 = *v49;
      if ( v275 == *v49 )
        goto LABEL_102;
      while ( 1 )
      {
        if ( v275 == -4096 || v275 == -8192 )
        {
          if ( v89 == -4096 )
            goto LABEL_300;
          if ( v89 == -8192 )
          {
LABEL_332:
            if ( !v115 )
              v115 = v49;
          }
        }
        else
        {
          if ( v89 == -4096 )
            goto LABEL_300;
          if ( v89 == -8192 )
            goto LABEL_332;
          v117 = v275;
          do
          {
            v118 = *(_QWORD *)(v117 + 8);
            if ( !v118 )
            {
              v117 = 0;
              break;
            }
            v117 = v118 & 0xFFFFFFFFFFFFFFF8LL;
          }
          while ( (v118 & 4) != 0 && v117 );
          while ( 1 )
          {
            v119 = *(_QWORD *)(v89 + 8);
            if ( !v119 )
              break;
            v89 = v119 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v119 & 4) == 0 || !v89 )
              goto LABEL_156;
          }
          v89 = 0;
LABEL_156:
          if ( v117 == v89 )
            goto LABEL_239;
        }
        v116 = v113 & (v114 + v116);
        v49 = (unsigned __int64 *)v29 + v116;
        v89 = *v49;
        if ( v275 == *v49 )
          goto LABEL_102;
        ++v114;
      }
    }
    v88 = (unsigned int)v23 >> 3;
    if ( (int)v23 - *(_DWORD *)(v4 + 324) - v87 > (unsigned int)v88 )
    {
      v89 = *v49;
      goto LABEL_102;
    }
    v244 = *(unsigned __int64 **)(v4 + 312);
    v127 = (v10 >> 1) | v10;
    v128 = (((((((v127 | (v127 >> 2)) >> 4) | v127 | (v127 >> 2)) >> 8)
            | ((v127 | (v127 >> 2)) >> 4)
            | v127
            | (v127 >> 2)) >> 16)
          | ((((v127 | (v127 >> 2)) >> 4) | v127 | (v127 >> 2)) >> 8)
          | ((v127 | (v127 >> 2)) >> 4)
          | v127
          | (v127 >> 2))
         + 1;
    if ( (unsigned int)v128 < 0x40 )
      LODWORD(v128) = 64;
    *(_DWORD *)(v4 + 328) = v128;
    v129 = (__m128i *)sub_220C370(8LL * (unsigned int)v128, 8, 64, v88, v127, v11);
    v130 = v244;
    v131 = v129;
    *(_QWORD *)(v4 + 312) = v129;
    if ( v244 )
    {
      v132 = *(unsigned int *)(v4 + 328);
      *(_QWORD *)(v4 + 320) = 0;
      v245 = v132;
      v133 = 8 * v132;
      v134 = &v244[(unsigned int)v23];
      if ( v129 != (__m128i *)&v129->m128i_i8[v133] )
      {
        v135 = ((unsigned __int64)(v133 - 8) >> 3) + 1;
        if ( v133 == 8 )
          goto LABEL_194;
        do
        {
          ++v129;
          v129[-1] = _mm_load_si128((const __m128i *)&xmmword_2384C40);
        }
        while ( &v131[v135 >> 1] != v129 );
        v129 = (__m128i *)((char *)v131 + 8 * (v135 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v135 & 0xFFFFFFFFFFFFFFFELL) != v135 )
LABEL_194:
          v129->m128i_i64[0] = -4096;
      }
      v136 = v244;
      do
      {
        v137 = *v136;
        if ( *v136 != -4096 && v137 != -8192 )
        {
          if ( !v245 )
          {
            *(_QWORD *)&dword_0 = *v136;
            BUG();
          }
          v138 = *v136;
          while ( 1 )
          {
            v139 = *(_QWORD *)(v138 + 8);
            if ( !v139 )
            {
LABEL_203:
              v141 = -1916529075;
              goto LABEL_204;
            }
            v140 = v139 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v139 & 4) == 0 )
              break;
            v138 = v139 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v140 )
              goto LABEL_203;
          }
          v215 = HIDWORD(v140);
          v216 = 0x9DDFEA08EB382D69LL * (v215 ^ (((8 * v139) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
          v141 = -348639895
               * (((unsigned int)((0x9DDFEA08EB382D69LL * (v216 ^ v215 ^ (v216 >> 47))) >> 32) >> 15)
                ^ (-348639895 * (v216 ^ v215 ^ (v216 >> 47))));
LABEL_204:
          v256 = 1;
          v142 = (v245 - 1) & (unsigned int)v141;
          v259 = v245 - 1;
          v143 = (unsigned __int64 *)v131 + v142;
          v251 = v142;
          v144 = *v143;
          if ( *v143 != v137 )
          {
            v145 = a2;
            v146 = v5;
            v147 = v131;
            v148 = v136;
            v149 = v145;
            v150 = v143;
            v151 = v3;
            v152 = v137;
            v153 = nullptr;
            v154 = v4;
            v155 = v130;
            v156 = v146;
            while ( 1 )
            {
              if ( v144 != -4096 && v144 != -8192 )
              {
                v157 = v152;
                do
                {
                  v158 = *(_QWORD *)(v157 + 8);
                  if ( !v158 )
                  {
                    v157 = 0;
                    break;
                  }
                  v157 = v158 & 0xFFFFFFFFFFFFFFF8LL;
                }
                while ( (v158 & 4) != 0 && v157 );
                while ( 1 )
                {
                  v159 = *(_QWORD *)(v144 + 8);
                  if ( !v159 )
                    break;
                  v144 = v159 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v159 & 4) == 0 || !v144 )
                    goto LABEL_215;
                }
                v144 = 0;
LABEL_215:
                if ( v157 == v144 )
                {
LABEL_216:
                  v160 = v149;
                  v3 = v151;
                  v131 = v147;
                  v143 = v150;
                  a2 = v160;
                  v136 = v148;
                  v5 = v156;
                  v130 = v155;
                  v4 = v154;
                  goto LABEL_217;
                }
              }
              if ( *v150 == -4096 )
                break;
              v273 = v156;
              v271 = v149;
              v269 = v154;
              v267 = v151;
              v264 = v134;
              v239 = sub_FCA750(*v150, 0xFFFFFFFFFFFFE000LL);
              v134 = v264;
              v151 = v267;
              v154 = v269;
              v149 = v271;
              v156 = v273;
              if ( !v153 && v239 )
                v153 = v150;
              v150 = (unsigned __int64 *)v147 + (v259 & (unsigned int)(v256 + v251));
              v251 = v259 & (v256 + v251);
              v144 = *v150;
              if ( *v150 == v152 )
                goto LABEL_216;
              ++v256;
            }
            v240 = v149;
            v3 = v151;
            v143 = v150;
            v131 = v147;
            v136 = v148;
            a2 = v240;
            v5 = v156;
            if ( v153 )
              v143 = v153;
            v130 = v155;
            v4 = v154;
          }
LABEL_217:
          v161 = *v136;
          ++*(_DWORD *)(v4 + 320);
          *v143 = v161;
        }
        ++v136;
      }
      while ( v134 != v136 );
      operator delete();
      v131 = *(__m128i **)(v4 + 312);
      v162 = *(_DWORD *)(v4 + 328);
      v87 = *(_DWORD *)(v4 + 320) + 1;
    }
    else
    {
      v189 = *(unsigned int *)(v4 + 328);
      *(_QWORD *)(v4 + 320) = 0;
      v162 = v189;
      v190 = 8 * v189;
      if ( v129 != (__m128i *)&v129->m128i_i8[v190] )
      {
        v191 = ((unsigned __int64)(v190 - 8) >> 3) + 1;
        if ( v190 == 8 )
          goto LABEL_272;
        do
        {
          ++v129;
          v129[-1] = _mm_load_si128((const __m128i *)&xmmword_2384C40);
        }
        while ( v129 != &v131[v191 >> 1] );
        v129 = (__m128i *)((char *)v131 + 8 * (v191 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v191 & 0xFFFFFFFFFFFFFFFELL) != v191 )
LABEL_272:
          v129->m128i_i64[0] = -4096;
      }
      v87 = 1;
    }
    if ( !v162 )
      goto LABEL_182;
    v163 = v275;
    while ( 1 )
    {
      v164 = *(_QWORD *)(v163 + 8);
      if ( !v164 )
      {
LABEL_225:
        v166 = -1916529075;
        goto LABEL_226;
      }
      v165 = v164 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v164 & 4) == 0 )
        break;
      v163 = v164 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v165 )
        goto LABEL_225;
    }
    v194 = HIDWORD(v165);
    v195 = 0x9DDFEA08EB382D69LL * (v194 ^ (((8 * v164) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
    v166 = -348639895
         * ((-348639895 * (v195 ^ v194 ^ (v195 >> 47)))
          ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v195 ^ v194 ^ (v195 >> 47))) >> 32) >> 15));
LABEL_226:
    v167 = v162 - 1;
    v168 = 1;
    v115 = nullptr;
    v169 = v167 & v166;
    v49 = (unsigned __int64 *)v131 + v169;
    v89 = *v49;
    if ( v275 == *v49 )
      goto LABEL_102;
    while ( 2 )
    {
      if ( v275 != -4096 && v275 != -8192 )
      {
        if ( v89 == -4096 )
          goto LABEL_300;
        if ( v89 != -8192 )
        {
          v170 = v275;
          do
          {
            v171 = *(_QWORD *)(v170 + 8);
            if ( !v171 )
            {
              v170 = 0;
              break;
            }
            v170 = v171 & 0xFFFFFFFFFFFFFFF8LL;
          }
          while ( (v171 & 4) != 0 && v170 );
          while ( 1 )
          {
            v172 = *(_QWORD *)(v89 + 8);
            if ( !v172 )
              break;
            v89 = v172 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v172 & 4) == 0 || !v89 )
              goto LABEL_238;
          }
          v89 = 0;
LABEL_238:
          if ( v170 == v89 )
          {
LABEL_239:
            *(_DWORD *)(v4 + 320) = v87;
            goto LABEL_103;
          }
          goto LABEL_328;
        }
LABEL_359:
        if ( !v115 )
          v115 = v49;
LABEL_328:
        v169 = v167 & (v168 + v169);
        v49 = (unsigned __int64 *)v131 + v169;
        v89 = *v49;
        if ( v275 == *v49 )
          goto LABEL_102;
        ++v168;
        continue;
      }
      break;
    }
    if ( v89 != -4096 )
    {
      if ( v89 == -8192 )
        goto LABEL_359;
      goto LABEL_328;
    }
LABEL_300:
    if ( v115 )
    {
      v89 = *v115;
      v49 = v115;
      goto LABEL_102;
    }
    *(_DWORD *)(v4 + 320) = v87;
LABEL_104:
    v90 = *(unsigned int *)(v4 + 348);
    *v49 = v275;
    v91 = *(unsigned int *)(v4 + 344);
    v92 = v275;
    if ( v91 + 1 > v90 )
    {
      sub_22134E0(v4 + 336, v4 + 352, v91 + 1, 8);
      v91 = *(unsigned int *)(v4 + 344);
    }
    *(_QWORD *)(*(_QWORD *)(v4 + 336) + 8 * v91) = v92;
    ++*(_DWORD *)(v4 + 344);
LABEL_6:
    v3 += 32;
    if ( v241 != v3 )
      continue;
    break;
  }
LABEL_11:
  v19 = *(void ***)(v4 + 368);
  v20 = *(void ***)(v4 + 376);
  v2 = v4;
  if ( v19 != v20 )
  {
    v21 = *(void ***)(v4 + 368);
    do
    {
      while ( *v21 != v21 + 2 )
      {
        operator delete(*v21);
        v21 += 4;
        if ( v20 == v21 )
        {
          *(_QWORD *)(v4 + 376) = v19;
          return *(_QWORD *)(v2 + 336);
        }
      }
      v21 += 4;
    }
    while ( v20 != v21 );
    *(_QWORD *)(v4 + 376) = v19;
  }
  return *(_QWORD *)(v2 + 336);
}

