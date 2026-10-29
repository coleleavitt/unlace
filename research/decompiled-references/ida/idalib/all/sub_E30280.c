__int64 __fastcall sub_E30280(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7)
{
  void *v7; // rax
  __m128i *v8; // r12
  int v11; // r10d
  unsigned int v12; // r14d
  void *v13; // rax
  unsigned __int32 v14; // r13d
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // r14
  const __m128i *v18; // rbp
  const __m128i *v19; // r14
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // r12d
  __m128i v24; // xmm0
  __int32 v25; // edx
  unsigned __int64 v26; // rdx
  __m128i *v27; // rax
  const __m128i **v28; // rbp
  const __m128i **v29; // r13
  unsigned int v30; // r15d
  unsigned __int64 v31; // rdi
  unsigned int v32; // eax
  const __m128i **v33; // rdx
  const __m128i *v34; // rsi
  _QWORD *v35; // r12
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  int v41; // r9d
  __int64 v42; // r15
  _QWORD *v43; // r8
  _QWORD *v44; // rcx
  _QWORD *v45; // rdx
  int i; // r11d
  __int64 v47; // rcx
  unsigned int v48; // edi
  _QWORD *v49; // rsi
  __int64 v50; // r10
  __int64 v51; // rcx
  int v52; // esi
  const __m128i *v53; // rdi
  int v54; // r11d
  const __m128i **v55; // r12
  const __m128i **v56; // rbp
  __int64 result; // rax
  const __m128i **v58; // r13
  unsigned int v59; // r15d
  unsigned __int64 v60; // rdi
  const __m128i **v61; // rdx
  const __m128i *v62; // rsi
  _QWORD *v63; // r12
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rdx
  int v68; // r9d
  __int64 v69; // r15
  _QWORD *v70; // r8
  _QWORD *v71; // rcx
  _QWORD *v72; // rdx
  int j; // r11d
  __int64 v74; // rcx
  unsigned int v75; // edi
  _QWORD *v76; // rsi
  __int64 v77; // r10
  __int64 v78; // rcx
  int v79; // esi
  const __m128i *v80; // rdi
  int v81; // edi
  const __m128i **v82; // r12
  const __m128i **v83; // rbp
  const __m128i **v84; // r13
  unsigned int v85; // r15d
  unsigned __int64 v86; // rdi
  const __m128i **v87; // rdx
  const __m128i *v88; // rsi
  _QWORD *v89; // r12
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // rax
  __int64 v92; // rcx
  _QWORD *v93; // rdx
  int v94; // r9d
  __int64 v95; // r15
  _QWORD *v96; // r8
  _QWORD *v97; // rcx
  _QWORD *v98; // rdx
  int k; // r11d
  __int64 v100; // rcx
  unsigned int v101; // edi
  _QWORD *v102; // rsi
  __int64 v103; // r10
  __int64 v104; // rcx
  int v105; // esi
  const __m128i *v106; // rdi
  int v107; // edi
  const __m128i **v108; // r12
  __int64 v109; // rdx
  int v110; // r8d
  int v111; // r8d
  int v112; // r8d
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rcx
  _QWORD *v117; // rdx
  int v118; // r9d
  __int64 v119; // r15
  _QWORD *v120; // rcx
  _QWORD *v121; // rdx
  int v122; // r11d
  __int64 v123; // rcx
  unsigned int v124; // r10d
  _QWORD *v125; // rsi
  __int64 v126; // rdi
  __int64 v127; // rcx
  const __m128i **v128; // r12
  const __m128i **v129; // r11
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rcx
  _QWORD *v135; // rdx
  int v136; // r9d
  __int64 v137; // r15
  _QWORD *v138; // rcx
  _QWORD *v139; // rdx
  int v140; // r11d
  __int64 v141; // rcx
  unsigned int v142; // r10d
  _QWORD *v143; // rsi
  __int64 v144; // rdi
  __int64 v145; // rcx
  int v146; // edi
  const __m128i **v147; // r12
  unsigned __int64 v148; // rax
  unsigned __int64 v149; // rdx
  __int64 v150; // rax
  __int64 v151; // rcx
  _QWORD *v152; // rdx
  int v153; // r9d
  __int64 v154; // r15
  _QWORD *v155; // rcx
  _QWORD *v156; // rdx
  int v157; // r11d
  __int64 v158; // rcx
  unsigned int v159; // r10d
  _QWORD *v160; // rsi
  __int64 v161; // rdi
  __int64 v162; // rcx
  const __m128i **v163; // r12
  const __m128i **v164; // r11
  __m128i *v165; // rsi
  __int32 v166; // eax
  __int64 v167; // rdi
  const void *v169; // rdx
  const void *v170; // rsi
  int v171; // eax
  size_t v172; // rdx
  size_t v173; // rdx
  int v174; // r10d
  int v175; // r10d
  int v176; // r10d
  __int64 v177; // rcx
  _QWORD *v178; // rcx
  _QWORD *v179; // rdx
  __int64 v180; // rcx
  _QWORD *v181; // rcx
  _QWORD *v182; // rdx
  __int64 v183; // rcx
  _QWORD *v184; // rcx
  _QWORD *v185; // rdx
  __int64 v186; // rcx
  _QWORD *v187; // rcx
  _QWORD *v188; // rdx
  __int64 v189; // rcx
  _QWORD *v190; // rcx
  _QWORD *v191; // rdx
  __int64 v192; // rcx
  _QWORD *v193; // rcx
  _QWORD *v194; // rdx
  const __m128i **v195; // r11
  _QWORD *v196; // [rsp+8h] [rbp-70h]
  __int64 v197; // [rsp+10h] [rbp-68h]
  _QWORD *v198; // [rsp+18h] [rbp-60h]
  __int64 v199; // [rsp+20h] [rbp-58h] BYREF
  int v200; // [rsp+28h] [rbp-50h]
  __m128i v201; // [rsp+30h] [rbp-48h]
  int v202; // [rsp+80h] [rbp+8h]
  int v203; // [rsp+80h] [rbp+8h]
  int v204; // [rsp+80h] [rbp+8h]

  v7 = (void *)(a1 + 24);
  v8 = (__m128i *)a4;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  v11 = a7;
  *(_QWORD *)(a1 + 16) = 0x800000000LL;
  v12 = *(_DWORD *)(a3 + 8);
  if ( v12 )
  {
    v167 = a1 + 8;
    if ( a3 != a1 + 8 )
    {
      v169 = *(const void **)a3;
      v170 = (const void *)(a3 + 16);
      if ( v169 == (const void *)(a3 + 16) )
      {
        v173 = 32LL * v12;
        if ( v12 <= 8uLL
          || (LODWORD(v197) = a6,
              v196 = (_QWORD *)a5,
              sub_2237220(v167, v7, v12, 32),
              v7 = *(void **)(a1 + 8),
              v170 = *(const void **)a3,
              a5 = (unsigned __int64)v196,
              v173 = 32LL * *(unsigned int *)(a3 + 8),
              a6 = (unsigned int)v197,
              v11 = a7,
              v173) )
        {
          v203 = v11;
          LODWORD(v197) = a6;
          v196 = (_QWORD *)a5;
          memcpy(v7, v170, v173);
          a6 = (unsigned int)v197;
          a5 = (unsigned __int64)v196;
          v11 = v203;
        }
        *(_DWORD *)(a1 + 16) = v12;
        *(_DWORD *)(a3 + 8) = 0;
      }
      else
      {
        v171 = *(_DWORD *)(a3 + 12);
        *(_QWORD *)(a1 + 8) = v169;
        *(_DWORD *)(a1 + 16) = v12;
        *(_DWORD *)(a1 + 20) = v171;
        *(_QWORD *)a3 = v170;
        *(_QWORD *)(a3 + 8) = 0;
      }
    }
  }
  v13 = (void *)(a1 + 296);
  *(_QWORD *)(a1 + 288) = 0x800000000LL;
  v14 = v8->m128i_u32[2];
  *(_QWORD *)(a1 + 280) = a1 + 296;
  if ( v14 && v8 != (__m128i *)(a1 + 280) )
  {
    v165 = v8 + 1;
    if ( (__m128i *)v8->m128i_i64[0] != &v8[1] )
    {
      v166 = v8->m128i_i32[3];
      *(_QWORD *)(a1 + 280) = v8->m128i_i64[0];
      *(_DWORD *)(a1 + 288) = v14;
      *(_DWORD *)(a1 + 292) = v166;
      v8->m128i_i64[0] = (__int64)v165;
      v8->m128i_i64[1] = 0;
      goto LABEL_3;
    }
    if ( v14 > 8uLL )
    {
      LODWORD(v197) = a6;
      v204 = v11;
      v196 = (_QWORD *)a5;
      sub_2237220(a1 + 280, a1 + 296, v14, 24);
      v165 = (__m128i *)v8->m128i_i64[0];
      v13 = *(void **)(a1 + 280);
      a5 = (unsigned __int64)v196;
      a6 = (unsigned int)v197;
      v11 = v204;
      v172 = 24LL * v8->m128i_u32[2];
      if ( !v172 )
        goto LABEL_170;
    }
    else
    {
      v172 = 24LL * v14;
    }
    v202 = v11;
    LODWORD(v197) = a6;
    v196 = (_QWORD *)a5;
    memcpy(v13, v165, v172);
    a6 = (unsigned int)v197;
    a5 = (unsigned __int64)v196;
    v11 = v202;
LABEL_170:
    *(_DWORD *)(a1 + 288) = v14;
    v8->m128i_i32[2] = 0;
  }
LABEL_3:
  LOBYTE(v15) = 0;
  *(_QWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 488) = a1 + 504;
  *(_QWORD *)(a1 + 496) = 0x200000000LL;
  *(_QWORD *)(a1 + 576) = 0;
  *(_DWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  *(_DWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_DWORD *)(a1 + 632) = 0;
  *(_DWORD *)(a1 + 640) = v11;
  *(_DWORD *)(a1 + 644) = a6;
  v16 = *(_BYTE *)(a2 + 73) >> 5;
  *(_BYTE *)(a1 + 648) = v16 == 2;
  if ( v16 == 2 )
    v15 = (*(_QWORD *)(a2 + 72) >> 24) & 1LL;
  v17 = *(unsigned int *)(a5 + 8);
  v18 = *(const __m128i **)a5;
  *(_BYTE *)(a1 + 649) = v15;
  v19 = &v18[2 * v17];
  if ( v18 != v19 )
  {
    v20 = a1 + 504;
    v197 = a1 + 504;
    v21 = 2;
    v196 = (_QWORD *)(a1 + 488);
    v22 = 0;
    v23 = v11;
    while ( 1 )
    {
      v24 = _mm_loadu_si128(v18 + 1);
      a4 = (const __m128i *)&v199;
      v199 = v18->m128i_i64[0];
      v25 = v18->m128i_i32[2];
      v201 = v24;
      v200 = v23 + v25;
      v26 = v22 + 1;
      v27 = (__m128i *)(v20 + 32 * v22);
      if ( v26 > v21 )
      {
        if ( v20 > (unsigned __int64)&v199 || v27 <= (__m128i *)&v199 )
        {
          sub_2237220(v196, v197, v26, 32);
          a4 = (const __m128i *)&v199;
          v27 = (__m128i *)(*(_QWORD *)(a1 + 488) + 32LL * *(unsigned int *)(a1 + 496));
        }
        else
        {
          sub_2237220(v196, v197, v26, 32);
          v109 = *(_QWORD *)(a1 + 488);
          a4 = (const __m128i *)((char *)&v199 + v109 - v20);
          v27 = (__m128i *)(v109 + 32LL * *(unsigned int *)(a1 + 496));
        }
      }
      v18 += 2;
      *v27 = _mm_loadu_si128(a4);
      v27[1] = _mm_loadu_si128(a4 + 1);
      v22 = (unsigned int)(*(_DWORD *)(a1 + 496) + 1);
      *(_DWORD *)(a1 + 496) = v22;
      if ( v19 == v18 )
        break;
      v21 = *(unsigned int *)(a1 + 500);
      v20 = *(_QWORD *)(a1 + 488);
    }
  }
  v28 = *(const __m128i ***)(a1 + 8);
  v29 = &v28[4 * *(unsigned int *)(a1 + 16)];
  if ( v28 != v29 )
  {
    v30 = *(_DWORD *)(a1 + 584);
    while ( 1 )
    {
      v35 = *(_QWORD **)(a1 + 568);
      if ( !v30 )
        goto LABEL_15;
      a4 = *v28;
      v31 = v30 - 1;
      v32 = v31 & (((unsigned int)*v28 >> 9) ^ ((unsigned int)*v28 >> 4));
      v33 = (const __m128i **)&v35[2 * v32];
      v34 = *v33;
      if ( *v28 != *v33 )
        break;
LABEL_13:
      v33[1] = (const __m128i *)v28;
      v28 += 4;
      if ( v29 == v28 )
        goto LABEL_32;
    }
    v110 = 1;
    a6 = 0;
    if ( v34 != (const __m128i *)-4096LL )
    {
      while ( 1 )
      {
        if ( v34 == (const __m128i *)-8192LL && !a6 )
          a6 = (__int64)v33;
        v176 = v110 + 1;
        a5 = v32 + v110;
        v32 = v31 & a5;
        v33 = (const __m128i **)&v35[2 * ((unsigned int)v31 & (unsigned int)a5)];
        v34 = *v33;
        if ( a4 == *v33 )
          goto LABEL_13;
        if ( v34 == (const __m128i *)-4096LL )
          break;
        v110 = v176;
      }
      if ( a6 )
        v33 = (const __m128i **)a6;
    }
    v52 = *(_DWORD *)(a1 + 576) + 1;
    a5 = (unsigned int)(4 * v52);
    if ( (unsigned int)a5 >= 3 * v30 )
    {
LABEL_15:
      v36 = ((((((((2 * v30 - 1) | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 2)
               | (2 * v30 - 1)
               | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 4)
             | (((2 * v30 - 1) | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 2)
             | (2 * v30 - 1)
             | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 8)
           | (((((2 * v30 - 1) | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 2)
             | (2 * v30 - 1)
             | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 4)
           | (((2 * v30 - 1) | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 2)
           | (2 * v30 - 1)
           | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 16;
      v37 = (v36
           | (((((((2 * v30 - 1) | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 2)
               | (2 * v30 - 1)
               | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 4)
             | (((2 * v30 - 1) | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 2)
             | (2 * v30 - 1)
             | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 8)
           | (((((2 * v30 - 1) | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 2)
             | (2 * v30 - 1)
             | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 4)
           | (((2 * v30 - 1) | ((unsigned __int64)(2 * v30 - 1) >> 1)) >> 2)
           | (2 * v30 - 1)
           | ((unsigned __int64)(2 * v30 - 1) >> 1))
          + 1;
      if ( (unsigned int)v37 < 0x40 )
        LODWORD(v37) = 64;
      *(_DWORD *)(a1 + 584) = v37;
      v38 = sub_22300B0(16LL * (unsigned int)v37, 8, v36, a4, a5, a6);
      *(_QWORD *)(a1 + 568) = v38;
      if ( v35 )
      {
        v39 = *(unsigned int *)(a1 + 584);
        v40 = (_QWORD *)v38;
        *(_QWORD *)(a1 + 576) = 0;
        v41 = v39;
        v42 = 2LL * v30;
        v43 = &v35[v42];
        v44 = (_QWORD *)(v38 + 16 * v39);
        if ( (_QWORD *)v38 != v44 )
        {
          do
          {
            *v40 = -4096;
            v40 += 2;
          }
          while ( v44 != v40 );
        }
        v45 = v35;
        for ( i = v41 - 1; v43 != v45; v45 += 2 )
        {
          v47 = *v45;
          if ( *v45 != -8192 && v47 != -4096 )
          {
            if ( !v41 )
            {
              *(_QWORD *)&dword_0 = *v45;
              BUG();
            }
            v48 = i & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
            v49 = (_QWORD *)(v38 + 16LL * v48);
            v50 = *v49;
            if ( v47 != *v49 && v50 != -4096 )
            {
              LODWORD(v197) = 1;
              v196 = nullptr;
              v198 = v45;
              while ( 1 )
              {
                if ( v50 == -8192 )
                {
                  if ( v196 )
                    v49 = v196;
                  v196 = v49;
                }
                v48 = i & (v197 + v48);
                v49 = (_QWORD *)(v38 + 16LL * v48);
                v50 = *v49;
                if ( v47 == *v49 )
                {
                  v45 = v198;
                  goto LABEL_25;
                }
                if ( v50 == -4096 )
                  break;
                LODWORD(v197) = v197 + 1;
              }
              v45 = v198;
              if ( v196 )
                v49 = v196;
            }
LABEL_25:
            *v49 = v47;
            v51 = v45[1];
            ++*(_DWORD *)(a1 + 576);
            v49[1] = v51;
          }
        }
        operator delete(v35, v42 * 8, 8);
        v38 = *(_QWORD *)(a1 + 568);
        v30 = *(_DWORD *)(a1 + 584);
        v52 = *(_DWORD *)(a1 + 576) + 1;
      }
      else
      {
        v180 = *(unsigned int *)(a1 + 584);
        *(_QWORD *)(a1 + 576) = 0;
        v30 = v180;
        v181 = (_QWORD *)(v38 + 16 * v180);
        if ( (_QWORD *)v38 != v181 )
        {
          v182 = (_QWORD *)v38;
          do
          {
            *v182 = -4096;
            v182 += 2;
          }
          while ( v181 != v182 );
        }
        v52 = 1;
      }
      if ( !v30 )
        goto LABEL_357;
      a4 = *v28;
      a6 = v30 - 1;
      a5 = (unsigned int)a6 & (((unsigned int)*v28 >> 9) ^ ((unsigned int)*v28 >> 4));
      v33 = (const __m128i **)(v38 + 16 * a5);
      v53 = *v33;
      if ( *v33 == *v28 )
        goto LABEL_85;
      v54 = 1;
      v55 = nullptr;
      if ( v53 != (const __m128i *)-4096LL )
      {
        while ( 1 )
        {
          if ( v55 || v53 != (const __m128i *)-8192LL )
            v33 = v55;
          a5 = (unsigned int)a6 & (v54 + (_DWORD)a5);
          v53 = *(const __m128i **)(v38 + 16LL * (unsigned int)a5);
          if ( a4 == v53 )
          {
            v33 = (const __m128i **)(v38 + 16LL * (unsigned int)a5);
            goto LABEL_85;
          }
          if ( v53 == (const __m128i *)-4096LL )
            break;
          ++v54;
          v55 = v33;
          v33 = (const __m128i **)(v38 + 16LL * (unsigned int)a5);
        }
        if ( v33 )
          goto LABEL_84;
        v33 = (const __m128i **)(v38 + 16LL * (unsigned int)a5);
      }
    }
    else
    {
      a5 = v30 >> 3;
      if ( v30 - *(_DWORD *)(a1 + 580) - v52 > (unsigned int)a5 )
      {
LABEL_84:
        v53 = *v33;
        goto LABEL_85;
      }
      v130 = (((((v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 4) | (v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 8)
           | (((v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 4)
           | (v31 >> 1)
           | v31
           | (((v31 >> 1) | v31) >> 2);
      v131 = v130 >> 16;
      v132 = ((v130 >> 16) | v130) + 1;
      if ( (unsigned int)v132 < 0x40 )
        LODWORD(v132) = 64;
      *(_DWORD *)(a1 + 584) = v132;
      v133 = sub_22300B0(16LL * (unsigned int)v132, 8, v131, a4, a5, a6);
      *(_QWORD *)(a1 + 568) = v133;
      if ( v35 )
      {
        v134 = *(unsigned int *)(a1 + 584);
        v135 = (_QWORD *)v133;
        *(_QWORD *)(a1 + 576) = 0;
        v136 = v134;
        v137 = 2LL * v30;
        v138 = (_QWORD *)(v133 + 16 * v134);
        if ( (_QWORD *)v133 != v138 )
        {
          do
          {
            *v135 = -4096;
            v135 += 2;
          }
          while ( v138 != v135 );
        }
        v139 = v35;
        v140 = v136 - 1;
        do
        {
          v141 = *v139;
          if ( *v139 != -4096 && v141 != -8192 )
          {
            if ( !v136 )
            {
              *(_QWORD *)&dword_0 = *v139;
              BUG();
            }
            v142 = v140 & (((unsigned int)v141 >> 9) ^ ((unsigned int)v141 >> 4));
            v143 = (_QWORD *)(v133 + 16LL * v142);
            v144 = *v143;
            if ( v141 != *v143 && v144 != -4096 )
            {
              LODWORD(v197) = 1;
              v196 = nullptr;
              v198 = v139;
              while ( 1 )
              {
                if ( !v196 )
                {
                  if ( v144 != -8192 )
                    v143 = v196;
                  v196 = v143;
                }
                v142 = v140 & (v197 + v142);
                v143 = (_QWORD *)(v133 + 16LL * v142);
                v144 = *v143;
                if ( v141 == *v143 )
                {
                  v139 = v198;
                  goto LABEL_133;
                }
                if ( v144 == -4096 )
                  break;
                LODWORD(v197) = v197 + 1;
              }
              v139 = v198;
              if ( v196 )
                v143 = v196;
            }
LABEL_133:
            *v143 = v141;
            v145 = v139[1];
            ++*(_DWORD *)(a1 + 576);
            v143[1] = v145;
          }
          v139 += 2;
        }
        while ( &v35[v137] != v139 );
        operator delete(v35, v137 * 8, 8);
        v133 = *(_QWORD *)(a1 + 568);
        v30 = *(_DWORD *)(a1 + 584);
        v52 = *(_DWORD *)(a1 + 576) + 1;
      }
      else
      {
        v192 = *(unsigned int *)(a1 + 584);
        *(_QWORD *)(a1 + 576) = 0;
        v30 = v192;
        v193 = (_QWORD *)(v133 + 16 * v192);
        if ( (_QWORD *)v133 != v193 )
        {
          v194 = (_QWORD *)v133;
          do
          {
            *v194 = -4096;
            v194 += 2;
          }
          while ( v193 != v194 );
        }
        v52 = 1;
      }
      if ( !v30 )
      {
LABEL_357:
        ++*(_DWORD *)(a1 + 576);
        BUG();
      }
      a6 = (__int64)*v28;
      a5 = (v30 - 1) & (((unsigned int)*v28 >> 9) ^ ((unsigned int)*v28 >> 4));
      v33 = (const __m128i **)(v133 + 16 * a5);
      a4 = *v33;
      v53 = *v33;
      if ( *v28 == *v33 )
        goto LABEL_85;
      v146 = 1;
      v147 = nullptr;
      if ( a4 == (const __m128i *)-4096LL )
      {
        a4 = *v28;
      }
      else
      {
        while ( 1 )
        {
          if ( v147 || a4 != (const __m128i *)-8192LL )
            v33 = v147;
          a5 = (v30 - 1) & (v146 + (_DWORD)a5);
          v195 = (const __m128i **)(v133 + 16LL * (unsigned int)a5);
          a4 = *v195;
          if ( (const __m128i *)a6 == *v195 )
          {
            v53 = *v195;
            v33 = (const __m128i **)(v133 + 16LL * (unsigned int)a5);
            goto LABEL_85;
          }
          if ( a4 == (const __m128i *)-4096LL )
            break;
          ++v146;
          v147 = v33;
          v33 = (const __m128i **)(v133 + 16LL * (unsigned int)a5);
        }
        if ( v33 )
        {
          v53 = *v33;
          a4 = *v28;
LABEL_85:
          *(_DWORD *)(a1 + 576) = v52;
          if ( v53 != (const __m128i *)-4096LL )
            --*(_DWORD *)(a1 + 580);
          goto LABEL_87;
        }
        a4 = *v28;
        v33 = (const __m128i **)(v133 + 16LL * (unsigned int)a5);
      }
    }
    *(_DWORD *)(a1 + 576) = v52;
LABEL_87:
    *v33 = a4;
    v33[1] = nullptr;
    goto LABEL_13;
  }
LABEL_32:
  v56 = *(const __m128i ***)(a1 + 280);
  result = 3LL * *(unsigned int *)(a1 + 288);
  v58 = &v56[3 * *(unsigned int *)(a1 + 288)];
  if ( v56 != v58 )
  {
    v59 = *(_DWORD *)(a1 + 608);
    while ( 1 )
    {
      v63 = *(_QWORD **)(a1 + 592);
      if ( !v59 )
        goto LABEL_37;
      a4 = *v56;
      v60 = v59 - 1;
      result = (unsigned int)v60 & (((unsigned int)*v56 >> 9) ^ ((unsigned int)*v56 >> 4));
      v61 = (const __m128i **)&v63[2 * result];
      v62 = *v61;
      if ( *v56 != *v61 )
        break;
LABEL_35:
      v61[1] = (const __m128i *)v56;
      v56 += 3;
      if ( v58 == v56 )
        goto LABEL_54;
    }
    v111 = 1;
    a6 = 0;
    if ( v62 != (const __m128i *)-4096LL )
    {
      while ( 1 )
      {
        if ( !a6 && v62 == (const __m128i *)-8192LL )
          a6 = (__int64)v61;
        v175 = v111 + 1;
        a5 = (unsigned int)(result + v111);
        result = (unsigned int)v60 & (unsigned int)a5;
        v61 = (const __m128i **)&v63[2 * result];
        v62 = *v61;
        if ( a4 == *v61 )
          goto LABEL_35;
        if ( v62 == (const __m128i *)-4096LL )
          break;
        v111 = v175;
      }
      if ( a6 )
        v61 = (const __m128i **)a6;
    }
    v79 = *(_DWORD *)(a1 + 600) + 1;
    a5 = (unsigned int)(4 * v79);
    if ( (unsigned int)a5 >= 3 * v59 )
    {
LABEL_37:
      v64 = ((((((((2 * v59 - 1) | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 2)
               | (2 * v59 - 1)
               | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 4)
             | (((2 * v59 - 1) | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 2)
             | (2 * v59 - 1)
             | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 8)
           | (((((2 * v59 - 1) | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 2)
             | (2 * v59 - 1)
             | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 4)
           | (((2 * v59 - 1) | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 2)
           | (2 * v59 - 1)
           | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 16;
      v65 = (v64
           | (((((((2 * v59 - 1) | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 2)
               | (2 * v59 - 1)
               | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 4)
             | (((2 * v59 - 1) | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 2)
             | (2 * v59 - 1)
             | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 8)
           | (((((2 * v59 - 1) | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 2)
             | (2 * v59 - 1)
             | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 4)
           | (((2 * v59 - 1) | ((unsigned __int64)(2 * v59 - 1) >> 1)) >> 2)
           | (2 * v59 - 1)
           | ((unsigned __int64)(2 * v59 - 1) >> 1))
          + 1;
      if ( (unsigned int)v65 < 0x40 )
        LODWORD(v65) = 64;
      *(_DWORD *)(a1 + 608) = v65;
      result = sub_22300B0(16LL * (unsigned int)v65, 8, v64, a4, a5, a6);
      *(_QWORD *)(a1 + 592) = result;
      if ( v63 )
      {
        v66 = *(unsigned int *)(a1 + 608);
        v67 = (_QWORD *)result;
        *(_QWORD *)(a1 + 600) = 0;
        v68 = v66;
        v69 = 2LL * v59;
        v70 = &v63[v69];
        v71 = (_QWORD *)(result + 16 * v66);
        if ( (_QWORD *)result != v71 )
        {
          do
          {
            *v67 = -4096;
            v67 += 2;
          }
          while ( v71 != v67 );
        }
        v72 = v63;
        for ( j = v68 - 1; v70 != v72; v72 += 2 )
        {
          v74 = *v72;
          if ( *v72 != -8192 && v74 != -4096 )
          {
            if ( !v68 )
            {
              *(_QWORD *)&dword_0 = *v72;
              BUG();
            }
            v75 = j & (((unsigned int)v74 >> 9) ^ ((unsigned int)v74 >> 4));
            v76 = (_QWORD *)(result + 16LL * v75);
            v77 = *v76;
            if ( *v76 != v74 && v77 != -4096 )
            {
              LODWORD(v197) = 1;
              v196 = nullptr;
              v198 = v72;
              while ( 1 )
              {
                if ( v77 == -8192 )
                {
                  if ( v196 )
                    v76 = v196;
                  v196 = v76;
                }
                v75 = j & (v197 + v75);
                v76 = (_QWORD *)(result + 16LL * v75);
                v77 = *v76;
                if ( v74 == *v76 )
                {
                  v72 = v198;
                  goto LABEL_47;
                }
                if ( v77 == -4096 )
                  break;
                LODWORD(v197) = v197 + 1;
              }
              v72 = v198;
              if ( v196 )
                v76 = v196;
            }
LABEL_47:
            *v76 = v74;
            v78 = v72[1];
            ++*(_DWORD *)(a1 + 600);
            v76[1] = v78;
          }
        }
        operator delete(v63, v69 * 8, 8);
        result = *(_QWORD *)(a1 + 592);
        v59 = *(_DWORD *)(a1 + 608);
        v79 = *(_DWORD *)(a1 + 600) + 1;
      }
      else
      {
        v183 = *(unsigned int *)(a1 + 608);
        *(_QWORD *)(a1 + 600) = 0;
        v59 = v183;
        v184 = (_QWORD *)(result + 16 * v183);
        if ( (_QWORD *)result != v184 )
        {
          v185 = (_QWORD *)result;
          do
          {
            *v185 = -4096;
            v185 += 2;
          }
          while ( v184 != v185 );
        }
        v79 = 1;
      }
      if ( !v59 )
        goto LABEL_364;
      a6 = (__int64)*v56;
      a5 = (v59 - 1) & (((unsigned int)*v56 >> 9) ^ ((unsigned int)*v56 >> 4));
      v61 = (const __m128i **)(result + 16 * a5);
      a4 = *v61;
      v80 = *v61;
      if ( *v56 == *v61 )
        goto LABEL_92;
      v81 = 1;
      v82 = nullptr;
      if ( a4 != (const __m128i *)-4096LL )
      {
        while ( 1 )
        {
          if ( v82 || a4 != (const __m128i *)-8192LL )
            v61 = v82;
          a5 = (v59 - 1) & (v81 + (_DWORD)a5);
          v129 = (const __m128i **)(result + 16LL * (unsigned int)a5);
          a4 = *v129;
          if ( (const __m128i *)a6 == *v129 )
          {
            v80 = *v129;
            v61 = (const __m128i **)(result + 16LL * (unsigned int)a5);
            goto LABEL_92;
          }
          if ( a4 == (const __m128i *)-4096LL )
            break;
          ++v81;
          v82 = v61;
          v61 = (const __m128i **)(result + 16LL * (unsigned int)a5);
        }
        if ( v61 )
        {
          v80 = *v61;
          a4 = *v56;
LABEL_92:
          *(_DWORD *)(a1 + 600) = v79;
          if ( v80 != (const __m128i *)-4096LL )
            --*(_DWORD *)(a1 + 604);
          goto LABEL_94;
        }
LABEL_348:
        v61 = v129;
      }
    }
    else
    {
      result = v59 - *(_DWORD *)(a1 + 604) - v79;
      a5 = v59 >> 3;
      if ( (unsigned int)result > (unsigned int)a5 )
      {
LABEL_91:
        v80 = *v61;
        goto LABEL_92;
      }
      v113 = (((((v60 >> 1) | v60 | (((v60 >> 1) | v60) >> 2)) >> 4) | (v60 >> 1) | v60 | (((v60 >> 1) | v60) >> 2)) >> 8)
           | (((v60 >> 1) | v60 | (((v60 >> 1) | v60) >> 2)) >> 4)
           | (v60 >> 1)
           | v60
           | (((v60 >> 1) | v60) >> 2);
      v114 = v113 >> 16;
      v115 = ((v113 >> 16) | v113) + 1;
      if ( (unsigned int)v115 < 0x40 )
        LODWORD(v115) = 64;
      *(_DWORD *)(a1 + 608) = v115;
      result = sub_22300B0(16LL * (unsigned int)v115, 8, v114, a4, a5, a6);
      *(_QWORD *)(a1 + 592) = result;
      if ( v63 )
      {
        v116 = *(unsigned int *)(a1 + 608);
        v117 = (_QWORD *)result;
        *(_QWORD *)(a1 + 600) = 0;
        v118 = v116;
        v119 = 2LL * v59;
        v120 = (_QWORD *)(result + 16 * v116);
        if ( (_QWORD *)result != v120 )
        {
          do
          {
            *v117 = -4096;
            v117 += 2;
          }
          while ( v120 != v117 );
        }
        v121 = v63;
        v122 = v118 - 1;
        do
        {
          v123 = *v121;
          if ( *v121 != -8192 && v123 != -4096 )
          {
            if ( !v118 )
            {
              *(_QWORD *)&dword_0 = *v121;
              BUG();
            }
            v124 = v122 & (((unsigned int)v123 >> 9) ^ ((unsigned int)v123 >> 4));
            v125 = (_QWORD *)(result + 16LL * v124);
            v126 = *v125;
            if ( v123 != *v125 && v126 != -4096 )
            {
              LODWORD(v197) = 1;
              v196 = nullptr;
              v198 = v121;
              while ( 1 )
              {
                if ( !v196 )
                {
                  if ( v126 != -8192 )
                    v125 = v196;
                  v196 = v125;
                }
                v124 = v122 & (v197 + v124);
                v125 = (_QWORD *)(result + 16LL * v124);
                v126 = *v125;
                if ( v123 == *v125 )
                {
                  v121 = v198;
                  goto LABEL_112;
                }
                if ( v126 == -4096 )
                  break;
                LODWORD(v197) = v197 + 1;
              }
              v121 = v198;
              if ( v196 )
                v125 = v196;
            }
LABEL_112:
            *v125 = v123;
            v127 = v121[1];
            ++*(_DWORD *)(a1 + 600);
            v125[1] = v127;
          }
          v121 += 2;
        }
        while ( &v63[v119] != v121 );
        operator delete(v63, v119 * 8, 8);
        result = *(_QWORD *)(a1 + 592);
        v59 = *(_DWORD *)(a1 + 608);
        v79 = *(_DWORD *)(a1 + 600) + 1;
      }
      else
      {
        v186 = *(unsigned int *)(a1 + 608);
        *(_QWORD *)(a1 + 600) = 0;
        v59 = v186;
        v187 = (_QWORD *)(result + 16 * v186);
        if ( (_QWORD *)result != v187 )
        {
          v188 = (_QWORD *)result;
          do
          {
            *v188 = -4096;
            v188 += 2;
          }
          while ( v187 != v188 );
        }
        v79 = 1;
      }
      if ( !v59 )
      {
LABEL_364:
        ++*(_DWORD *)(a1 + 600);
        BUG();
      }
      a4 = *v56;
      a5 = (v59 - 1) & (((unsigned int)*v56 >> 9) ^ ((unsigned int)*v56 >> 4));
      v61 = (const __m128i **)(result + 16 * a5);
      v80 = *v61;
      if ( *v61 == *v56 )
        goto LABEL_92;
      a6 = (__int64)*v56;
      if ( v80 != (const __m128i *)-4096LL )
      {
        a6 = 1;
        v128 = nullptr;
        while ( 1 )
        {
          if ( v128 || v80 != (const __m128i *)-8192LL )
            v61 = v128;
          a5 = (v59 - 1) & ((_DWORD)a6 + (_DWORD)a5);
          v129 = (const __m128i **)(result + 16LL * (unsigned int)a5);
          v80 = *v129;
          if ( a4 == *v129 )
          {
            v61 = (const __m128i **)(result + 16LL * (unsigned int)a5);
            goto LABEL_92;
          }
          if ( v80 == (const __m128i *)-4096LL )
            break;
          a6 = (unsigned int)(a6 + 1);
          v128 = v61;
          v61 = (const __m128i **)(result + 16LL * (unsigned int)a5);
        }
        if ( v61 )
          goto LABEL_91;
        a6 = (__int64)*v56;
        goto LABEL_348;
      }
    }
    *(_DWORD *)(a1 + 600) = v79;
    a4 = (const __m128i *)a6;
LABEL_94:
    *v61 = a4;
    v61[1] = nullptr;
    goto LABEL_35;
  }
LABEL_54:
  v83 = *(const __m128i ***)(a1 + 488);
  v84 = &v83[4 * *(unsigned int *)(a1 + 496)];
  if ( v83 != v84 )
  {
    v85 = *(_DWORD *)(a1 + 632);
    while ( 1 )
    {
      v89 = *(_QWORD **)(a1 + 616);
      if ( !v85 )
        goto LABEL_59;
      a4 = *v83;
      v86 = v85 - 1;
      result = (unsigned int)v86 & (((unsigned int)*v83 >> 9) ^ ((unsigned int)*v83 >> 4));
      v87 = (const __m128i **)&v89[2 * result];
      v88 = *v87;
      if ( *v87 != *v83 )
        break;
LABEL_57:
      v87[1] = (const __m128i *)v83;
      v83 += 4;
      if ( v84 == v83 )
        return result;
    }
    v112 = 1;
    a6 = 0;
    if ( v88 != (const __m128i *)-4096LL )
    {
      while ( 1 )
      {
        if ( !a6 && v88 == (const __m128i *)-8192LL )
          a6 = (__int64)v87;
        v174 = v112 + 1;
        a5 = (unsigned int)(result + v112);
        result = (unsigned int)v86 & (unsigned int)a5;
        v87 = (const __m128i **)&v89[2 * result];
        v88 = *v87;
        if ( a4 == *v87 )
          goto LABEL_57;
        if ( v88 == (const __m128i *)-4096LL )
          break;
        v112 = v174;
      }
      if ( a6 )
        v87 = (const __m128i **)a6;
    }
    v105 = *(_DWORD *)(a1 + 624) + 1;
    a5 = (unsigned int)(4 * v105);
    if ( (unsigned int)a5 >= 3 * v85 )
    {
LABEL_59:
      v90 = ((((((((2 * v85 - 1) | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 2)
               | (2 * v85 - 1)
               | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 4)
             | (((2 * v85 - 1) | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 2)
             | (2 * v85 - 1)
             | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 8)
           | (((((2 * v85 - 1) | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 2)
             | (2 * v85 - 1)
             | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 4)
           | (((2 * v85 - 1) | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 2)
           | (2 * v85 - 1)
           | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 16;
      v91 = (v90
           | (((((((2 * v85 - 1) | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 2)
               | (2 * v85 - 1)
               | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 4)
             | (((2 * v85 - 1) | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 2)
             | (2 * v85 - 1)
             | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 8)
           | (((((2 * v85 - 1) | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 2)
             | (2 * v85 - 1)
             | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 4)
           | (((2 * v85 - 1) | ((unsigned __int64)(2 * v85 - 1) >> 1)) >> 2)
           | (2 * v85 - 1)
           | ((unsigned __int64)(2 * v85 - 1) >> 1))
          + 1;
      if ( (unsigned int)v91 < 0x40 )
        LODWORD(v91) = 64;
      *(_DWORD *)(a1 + 632) = v91;
      result = sub_22300B0(16LL * (unsigned int)v91, 8, v90, a4, a5, a6);
      *(_QWORD *)(a1 + 616) = result;
      if ( v89 )
      {
        v92 = *(unsigned int *)(a1 + 632);
        v93 = (_QWORD *)result;
        *(_QWORD *)(a1 + 624) = 0;
        v94 = v92;
        v95 = 2LL * v85;
        v96 = &v89[v95];
        v97 = (_QWORD *)(result + 16 * v92);
        if ( (_QWORD *)result != v97 )
        {
          do
          {
            *v93 = -4096;
            v93 += 2;
          }
          while ( v97 != v93 );
        }
        v98 = v89;
        for ( k = v94 - 1; v96 != v98; v98 += 2 )
        {
          v100 = *v98;
          if ( *v98 != -8192 && v100 != -4096 )
          {
            if ( !v94 )
            {
              *(_QWORD *)&dword_0 = *v98;
              BUG();
            }
            v101 = k & (((unsigned int)v100 >> 9) ^ ((unsigned int)v100 >> 4));
            v102 = (_QWORD *)(result + 16LL * v101);
            v103 = *v102;
            if ( *v102 != v100 && v103 != -4096 )
            {
              LODWORD(v197) = 1;
              v196 = nullptr;
              v198 = v98;
              while ( 1 )
              {
                if ( v103 == -8192 )
                {
                  if ( v196 )
                    v102 = v196;
                  v196 = v102;
                }
                v101 = k & (v197 + v101);
                v102 = (_QWORD *)(result + 16LL * v101);
                v103 = *v102;
                if ( v100 == *v102 )
                {
                  v98 = v198;
                  goto LABEL_69;
                }
                if ( v103 == -4096 )
                  break;
                LODWORD(v197) = v197 + 1;
              }
              v98 = v198;
              if ( v196 )
                v102 = v196;
            }
LABEL_69:
            *v102 = v100;
            v104 = v98[1];
            ++*(_DWORD *)(a1 + 624);
            v102[1] = v104;
          }
        }
        operator delete(v89, v95 * 8, 8);
        result = *(_QWORD *)(a1 + 616);
        v85 = *(_DWORD *)(a1 + 632);
        v105 = *(_DWORD *)(a1 + 624) + 1;
      }
      else
      {
        v177 = *(unsigned int *)(a1 + 632);
        *(_QWORD *)(a1 + 624) = 0;
        v85 = v177;
        v178 = (_QWORD *)(result + 16 * v177);
        if ( (_QWORD *)result != v178 )
        {
          v179 = (_QWORD *)result;
          do
          {
            *v179 = -4096;
            v179 += 2;
          }
          while ( v178 != v179 );
        }
        v105 = 1;
      }
      if ( !v85 )
        goto LABEL_358;
      a6 = (__int64)*v83;
      a5 = (v85 - 1) & (((unsigned int)*v83 >> 9) ^ ((unsigned int)*v83 >> 4));
      v87 = (const __m128i **)(result + 16 * a5);
      a4 = *v87;
      v106 = *v87;
      if ( *v83 == *v87 )
        goto LABEL_99;
      v107 = 1;
      v108 = nullptr;
      if ( a4 != (const __m128i *)-4096LL )
      {
        while ( 1 )
        {
          if ( v108 || a4 != (const __m128i *)-8192LL )
            v87 = v108;
          a5 = (v85 - 1) & (v107 + (_DWORD)a5);
          v164 = (const __m128i **)(result + 16LL * (unsigned int)a5);
          a4 = *v164;
          if ( (const __m128i *)a6 == *v164 )
          {
            v106 = *v164;
            v87 = (const __m128i **)(result + 16LL * (unsigned int)a5);
            goto LABEL_99;
          }
          if ( a4 == (const __m128i *)-4096LL )
            break;
          ++v107;
          v108 = v87;
          v87 = (const __m128i **)(result + 16LL * (unsigned int)a5);
        }
        if ( v87 )
        {
          v106 = *v87;
          a4 = *v83;
LABEL_99:
          *(_DWORD *)(a1 + 624) = v105;
          if ( v106 != (const __m128i *)-4096LL )
            --*(_DWORD *)(a1 + 628);
          goto LABEL_101;
        }
LABEL_339:
        v87 = v164;
      }
    }
    else
    {
      result = v85 - *(_DWORD *)(a1 + 628) - v105;
      a5 = v85 >> 3;
      if ( (unsigned int)result > (unsigned int)a5 )
      {
LABEL_98:
        v106 = *v87;
        goto LABEL_99;
      }
      v148 = (((((v86 >> 1) | v86 | (((v86 >> 1) | v86) >> 2)) >> 4) | (v86 >> 1) | v86 | (((v86 >> 1) | v86) >> 2)) >> 8)
           | (((v86 >> 1) | v86 | (((v86 >> 1) | v86) >> 2)) >> 4)
           | (v86 >> 1)
           | v86
           | (((v86 >> 1) | v86) >> 2);
      v149 = v148 >> 16;
      v150 = ((v148 >> 16) | v148) + 1;
      if ( (unsigned int)v150 < 0x40 )
        LODWORD(v150) = 64;
      *(_DWORD *)(a1 + 632) = v150;
      result = sub_22300B0(16LL * (unsigned int)v150, 8, v149, a4, a5, a6);
      *(_QWORD *)(a1 + 616) = result;
      if ( v89 )
      {
        v151 = *(unsigned int *)(a1 + 632);
        v152 = (_QWORD *)result;
        *(_QWORD *)(a1 + 624) = 0;
        v153 = v151;
        v154 = 2LL * v85;
        v155 = (_QWORD *)(result + 16 * v151);
        if ( (_QWORD *)result != v155 )
        {
          do
          {
            *v152 = -4096;
            v152 += 2;
          }
          while ( v155 != v152 );
        }
        v156 = v89;
        v157 = v153 - 1;
        do
        {
          v158 = *v156;
          if ( *v156 != -4096 && v158 != -8192 )
          {
            if ( !v153 )
            {
              *(_QWORD *)&dword_0 = *v156;
              BUG();
            }
            v159 = v157 & (((unsigned int)v158 >> 9) ^ ((unsigned int)v158 >> 4));
            v160 = (_QWORD *)(result + 16LL * v159);
            v161 = *v160;
            if ( *v160 != v158 && v161 != -4096 )
            {
              LODWORD(v197) = 1;
              v196 = nullptr;
              v198 = v156;
              while ( 1 )
              {
                if ( v161 == -8192 )
                {
                  if ( v196 )
                    v160 = v196;
                  v196 = v160;
                }
                v159 = v157 & (v197 + v159);
                v160 = (_QWORD *)(result + 16LL * v159);
                v161 = *v160;
                if ( v158 == *v160 )
                {
                  v156 = v198;
                  goto LABEL_150;
                }
                if ( v161 == -4096 )
                  break;
                LODWORD(v197) = v197 + 1;
              }
              v156 = v198;
              if ( v196 )
                v160 = v196;
            }
LABEL_150:
            *v160 = v158;
            v162 = v156[1];
            ++*(_DWORD *)(a1 + 624);
            v160[1] = v162;
          }
          v156 += 2;
        }
        while ( &v89[v154] != v156 );
        operator delete(v89, v154 * 8, 8);
        result = *(_QWORD *)(a1 + 616);
        v85 = *(_DWORD *)(a1 + 632);
        v105 = *(_DWORD *)(a1 + 624) + 1;
      }
      else
      {
        v189 = *(unsigned int *)(a1 + 632);
        *(_QWORD *)(a1 + 624) = 0;
        v85 = v189;
        v190 = (_QWORD *)(result + 16 * v189);
        if ( (_QWORD *)result != v190 )
        {
          v191 = (_QWORD *)result;
          do
          {
            *v191 = -4096;
            v191 += 2;
          }
          while ( v190 != v191 );
        }
        v105 = 1;
      }
      if ( !v85 )
      {
LABEL_358:
        ++*(_DWORD *)(a1 + 624);
        BUG();
      }
      a4 = *v83;
      a5 = (v85 - 1) & (((unsigned int)*v83 >> 9) ^ ((unsigned int)*v83 >> 4));
      v87 = (const __m128i **)(result + 16 * a5);
      v106 = *v87;
      if ( *v87 == *v83 )
        goto LABEL_99;
      a6 = (__int64)*v83;
      if ( v106 != (const __m128i *)-4096LL )
      {
        a6 = 1;
        v163 = nullptr;
        while ( 1 )
        {
          if ( v106 != (const __m128i *)-8192LL || v163 )
            v87 = v163;
          a5 = (v85 - 1) & ((_DWORD)a6 + (_DWORD)a5);
          v164 = (const __m128i **)(result + 16LL * (unsigned int)a5);
          v106 = *v164;
          if ( a4 == *v164 )
          {
            v87 = (const __m128i **)(result + 16LL * (unsigned int)a5);
            goto LABEL_99;
          }
          if ( v106 == (const __m128i *)-4096LL )
            break;
          a6 = (unsigned int)(a6 + 1);
          v163 = v87;
          v87 = (const __m128i **)(result + 16LL * (unsigned int)a5);
        }
        if ( v87 )
          goto LABEL_98;
        a6 = (__int64)*v83;
        goto LABEL_339;
      }
    }
    *(_DWORD *)(a1 + 624) = v105;
    a4 = (const __m128i *)a6;
LABEL_101:
    *v87 = a4;
    v87[1] = nullptr;
    goto LABEL_57;
  }
  return result;
}
