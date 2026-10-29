__int64 __fastcall sub_E0C540(
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
  _QWORD *v42; // r8
  _QWORD *v43; // rcx
  _QWORD *v44; // rdx
  int i; // r11d
  __int64 v46; // rcx
  unsigned int v47; // edi
  _QWORD *v48; // rsi
  __int64 v49; // r10
  __int64 v50; // rcx
  int v51; // esi
  const __m128i *v52; // rdi
  int v53; // r11d
  const __m128i **v54; // r12
  const __m128i **v55; // rbp
  __int64 result; // rax
  const __m128i **v57; // r13
  unsigned int v58; // r15d
  unsigned __int64 v59; // rdi
  const __m128i **v60; // rdx
  const __m128i *v61; // rsi
  _QWORD *v62; // r12
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  _QWORD *v66; // rdx
  int v67; // r9d
  _QWORD *v68; // r8
  _QWORD *v69; // rcx
  _QWORD *v70; // rdx
  int j; // r11d
  __int64 v72; // rcx
  unsigned int v73; // edi
  _QWORD *v74; // rsi
  __int64 v75; // r10
  __int64 v76; // rcx
  int v77; // esi
  const __m128i *v78; // rdi
  int v79; // edi
  const __m128i **v80; // r12
  const __m128i **v81; // rbp
  const __m128i **v82; // r13
  unsigned int v83; // r15d
  unsigned __int64 v84; // rdi
  const __m128i **v85; // rdx
  const __m128i *v86; // rsi
  _QWORD *v87; // r12
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rdx
  int v92; // r9d
  _QWORD *v93; // r8
  _QWORD *v94; // rcx
  _QWORD *v95; // rdx
  int k; // r11d
  __int64 v97; // rcx
  unsigned int v98; // edi
  _QWORD *v99; // rsi
  __int64 v100; // r10
  __int64 v101; // rcx
  int v102; // esi
  const __m128i *v103; // rdi
  int v104; // edi
  const __m128i **v105; // r12
  __int64 v106; // rdx
  int v107; // r8d
  int v108; // r8d
  int v109; // r8d
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rcx
  _QWORD *v114; // rdx
  int v115; // r9d
  _QWORD *v116; // rcx
  _QWORD *v117; // rdx
  int v118; // r11d
  __int64 v119; // rcx
  unsigned int v120; // r10d
  _QWORD *v121; // rsi
  __int64 v122; // rdi
  __int64 v123; // rcx
  const __m128i **v124; // r12
  const __m128i **v125; // r11
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rcx
  _QWORD *v131; // rdx
  int v132; // r9d
  _QWORD *v133; // rcx
  _QWORD *v134; // rdx
  int v135; // r11d
  __int64 v136; // rcx
  unsigned int v137; // r10d
  _QWORD *v138; // rsi
  __int64 v139; // rdi
  __int64 v140; // rcx
  int v141; // edi
  const __m128i **v142; // r12
  unsigned __int64 v143; // rax
  unsigned __int64 v144; // rdx
  __int64 v145; // rax
  __int64 v146; // rcx
  _QWORD *v147; // rdx
  int v148; // r9d
  _QWORD *v149; // rcx
  _QWORD *v150; // rdx
  int v151; // r11d
  __int64 v152; // rcx
  unsigned int v153; // r10d
  _QWORD *v154; // rsi
  __int64 v155; // rdi
  __int64 v156; // rcx
  const __m128i **v157; // r12
  const __m128i **v158; // r11
  __m128i *v159; // rsi
  __int32 v160; // eax
  __int64 v161; // rdi
  const void *v163; // rdx
  const void *v164; // rsi
  int v165; // eax
  size_t v166; // rdx
  size_t v167; // rdx
  int v168; // r10d
  int v169; // r10d
  int v170; // r10d
  __int64 v171; // rcx
  _QWORD *v172; // rcx
  _QWORD *v173; // rdx
  __int64 v174; // rcx
  _QWORD *v175; // rcx
  _QWORD *v176; // rdx
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
  const __m128i **v189; // r11
  _QWORD *v190; // [rsp+8h] [rbp-70h]
  __int64 v191; // [rsp+10h] [rbp-68h]
  _QWORD *v192; // [rsp+18h] [rbp-60h]
  __int64 v193; // [rsp+20h] [rbp-58h] BYREF
  int v194; // [rsp+28h] [rbp-50h]
  __m128i v195; // [rsp+30h] [rbp-48h]
  int v196; // [rsp+80h] [rbp+8h]
  int v197; // [rsp+80h] [rbp+8h]
  int v198; // [rsp+80h] [rbp+8h]

  v7 = (void *)(a1 + 24);
  v8 = (__m128i *)a4;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  v11 = a7;
  *(_QWORD *)(a1 + 16) = 0x800000000LL;
  v12 = *(_DWORD *)(a3 + 8);
  if ( v12 )
  {
    v161 = a1 + 8;
    if ( a3 != a1 + 8 )
    {
      v163 = *(const void **)a3;
      v164 = (const void *)(a3 + 16);
      if ( v163 == (const void *)(a3 + 16) )
      {
        v167 = 32LL * v12;
        if ( v12 <= 8uLL
          || (LODWORD(v191) = a6,
              v190 = (_QWORD *)a5,
              sub_22134E0(v161, v7, v12, 32),
              v7 = *(void **)(a1 + 8),
              v164 = *(const void **)a3,
              a5 = (unsigned __int64)v190,
              v167 = 32LL * *(unsigned int *)(a3 + 8),
              a6 = (unsigned int)v191,
              v11 = a7,
              v167) )
        {
          v197 = v11;
          LODWORD(v191) = a6;
          v190 = (_QWORD *)a5;
          memcpy(v7, v164, v167);
          a6 = (unsigned int)v191;
          a5 = (unsigned __int64)v190;
          v11 = v197;
        }
        *(_DWORD *)(a1 + 16) = v12;
        *(_DWORD *)(a3 + 8) = 0;
      }
      else
      {
        v165 = *(_DWORD *)(a3 + 12);
        *(_QWORD *)(a1 + 8) = v163;
        *(_DWORD *)(a1 + 16) = v12;
        *(_DWORD *)(a1 + 20) = v165;
        *(_QWORD *)a3 = v164;
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
    v159 = v8 + 1;
    if ( (__m128i *)v8->m128i_i64[0] != &v8[1] )
    {
      v160 = v8->m128i_i32[3];
      *(_QWORD *)(a1 + 280) = v8->m128i_i64[0];
      *(_DWORD *)(a1 + 288) = v14;
      *(_DWORD *)(a1 + 292) = v160;
      v8->m128i_i64[0] = (__int64)v159;
      v8->m128i_i64[1] = 0;
      goto LABEL_3;
    }
    if ( v14 > 8uLL )
    {
      LODWORD(v191) = a6;
      v198 = v11;
      v190 = (_QWORD *)a5;
      sub_22134E0(a1 + 280, a1 + 296, v14, 24);
      v159 = (__m128i *)v8->m128i_i64[0];
      v13 = *(void **)(a1 + 280);
      a5 = (unsigned __int64)v190;
      a6 = (unsigned int)v191;
      v11 = v198;
      v166 = 24LL * v8->m128i_u32[2];
      if ( !v166 )
        goto LABEL_170;
    }
    else
    {
      v166 = 24LL * v14;
    }
    v196 = v11;
    LODWORD(v191) = a6;
    v190 = (_QWORD *)a5;
    memcpy(v13, v159, v166);
    a6 = (unsigned int)v191;
    a5 = (unsigned __int64)v190;
    v11 = v196;
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
    v191 = a1 + 504;
    v21 = 2;
    v190 = (_QWORD *)(a1 + 488);
    v22 = 0;
    v23 = v11;
    while ( 1 )
    {
      v24 = _mm_loadu_si128(v18 + 1);
      a4 = (const __m128i *)&v193;
      v193 = v18->m128i_i64[0];
      v25 = v18->m128i_i32[2];
      v195 = v24;
      v194 = v23 + v25;
      v26 = v22 + 1;
      v27 = (__m128i *)(v20 + 32 * v22);
      if ( v26 > v21 )
      {
        if ( v20 > (unsigned __int64)&v193 || v27 <= (__m128i *)&v193 )
        {
          sub_22134E0(v190, v191, v26, 32);
          a4 = (const __m128i *)&v193;
          v27 = (__m128i *)(*(_QWORD *)(a1 + 488) + 32LL * *(unsigned int *)(a1 + 496));
        }
        else
        {
          sub_22134E0(v190, v191, v26, 32);
          v106 = *(_QWORD *)(a1 + 488);
          a4 = (const __m128i *)((char *)&v193 + v106 - v20);
          v27 = (__m128i *)(v106 + 32LL * *(unsigned int *)(a1 + 496));
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
    v107 = 1;
    a6 = 0;
    if ( v34 != (const __m128i *)-4096LL )
    {
      while ( 1 )
      {
        if ( v34 == (const __m128i *)-8192LL && !a6 )
          a6 = (__int64)v33;
        v170 = v107 + 1;
        a5 = v32 + v107;
        v32 = v31 & a5;
        v33 = (const __m128i **)&v35[2 * ((unsigned int)v31 & (unsigned int)a5)];
        v34 = *v33;
        if ( a4 == *v33 )
          goto LABEL_13;
        if ( v34 == (const __m128i *)-4096LL )
          break;
        v107 = v170;
      }
      if ( a6 )
        v33 = (const __m128i **)a6;
    }
    v51 = *(_DWORD *)(a1 + 576) + 1;
    a5 = (unsigned int)(4 * v51);
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
      v38 = sub_220C370(16LL * (unsigned int)v37, 8, v36, a4, a5, a6);
      *(_QWORD *)(a1 + 568) = v38;
      if ( v35 )
      {
        v39 = *(unsigned int *)(a1 + 584);
        v40 = (_QWORD *)v38;
        *(_QWORD *)(a1 + 576) = 0;
        v41 = v39;
        v42 = &v35[2 * v30];
        v43 = (_QWORD *)(v38 + 16 * v39);
        if ( (_QWORD *)v38 != v43 )
        {
          do
          {
            *v40 = -4096;
            v40 += 2;
          }
          while ( v43 != v40 );
        }
        v44 = v35;
        for ( i = v41 - 1; v42 != v44; v44 += 2 )
        {
          v46 = *v44;
          if ( *v44 != -8192 && v46 != -4096 )
          {
            if ( !v41 )
            {
              *(_QWORD *)&dword_0 = *v44;
              BUG();
            }
            v47 = i & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
            v48 = (_QWORD *)(v38 + 16LL * v47);
            v49 = *v48;
            if ( v46 != *v48 && v49 != -4096 )
            {
              LODWORD(v191) = 1;
              v190 = nullptr;
              v192 = v44;
              while ( 1 )
              {
                if ( v49 == -8192 )
                {
                  if ( v190 )
                    v48 = v190;
                  v190 = v48;
                }
                v47 = i & (v191 + v47);
                v48 = (_QWORD *)(v38 + 16LL * v47);
                v49 = *v48;
                if ( v46 == *v48 )
                {
                  v44 = v192;
                  goto LABEL_25;
                }
                if ( v49 == -4096 )
                  break;
                LODWORD(v191) = v191 + 1;
              }
              v44 = v192;
              if ( v190 )
                v48 = v190;
            }
LABEL_25:
            *v48 = v46;
            v50 = v44[1];
            ++*(_DWORD *)(a1 + 576);
            v48[1] = v50;
          }
        }
        operator delete();
        v38 = *(_QWORD *)(a1 + 568);
        v30 = *(_DWORD *)(a1 + 584);
        v51 = *(_DWORD *)(a1 + 576) + 1;
      }
      else
      {
        v174 = *(unsigned int *)(a1 + 584);
        *(_QWORD *)(a1 + 576) = 0;
        v30 = v174;
        v175 = (_QWORD *)(v38 + 16 * v174);
        if ( (_QWORD *)v38 != v175 )
        {
          v176 = (_QWORD *)v38;
          do
          {
            *v176 = -4096;
            v176 += 2;
          }
          while ( v175 != v176 );
        }
        v51 = 1;
      }
      if ( !v30 )
        goto LABEL_357;
      a4 = *v28;
      a6 = v30 - 1;
      a5 = (unsigned int)a6 & (((unsigned int)*v28 >> 9) ^ ((unsigned int)*v28 >> 4));
      v33 = (const __m128i **)(v38 + 16 * a5);
      v52 = *v33;
      if ( *v33 == *v28 )
        goto LABEL_85;
      v53 = 1;
      v54 = nullptr;
      if ( v52 != (const __m128i *)-4096LL )
      {
        while ( 1 )
        {
          if ( v54 || v52 != (const __m128i *)-8192LL )
            v33 = v54;
          a5 = (unsigned int)a6 & (v53 + (_DWORD)a5);
          v52 = *(const __m128i **)(v38 + 16LL * (unsigned int)a5);
          if ( a4 == v52 )
          {
            v33 = (const __m128i **)(v38 + 16LL * (unsigned int)a5);
            goto LABEL_85;
          }
          if ( v52 == (const __m128i *)-4096LL )
            break;
          ++v53;
          v54 = v33;
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
      if ( v30 - *(_DWORD *)(a1 + 580) - v51 > (unsigned int)a5 )
      {
LABEL_84:
        v52 = *v33;
        goto LABEL_85;
      }
      v126 = (((((v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 4) | (v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 8)
           | (((v31 >> 1) | v31 | (((v31 >> 1) | v31) >> 2)) >> 4)
           | (v31 >> 1)
           | v31
           | (((v31 >> 1) | v31) >> 2);
      v127 = v126 >> 16;
      v128 = ((v126 >> 16) | v126) + 1;
      if ( (unsigned int)v128 < 0x40 )
        LODWORD(v128) = 64;
      *(_DWORD *)(a1 + 584) = v128;
      v129 = sub_220C370(16LL * (unsigned int)v128, 8, v127, a4, a5, a6);
      *(_QWORD *)(a1 + 568) = v129;
      if ( v35 )
      {
        v130 = *(unsigned int *)(a1 + 584);
        v131 = (_QWORD *)v129;
        *(_QWORD *)(a1 + 576) = 0;
        v132 = v130;
        v133 = (_QWORD *)(v129 + 16 * v130);
        if ( (_QWORD *)v129 != v133 )
        {
          do
          {
            *v131 = -4096;
            v131 += 2;
          }
          while ( v133 != v131 );
        }
        v134 = v35;
        v135 = v132 - 1;
        do
        {
          v136 = *v134;
          if ( *v134 != -4096 && v136 != -8192 )
          {
            if ( !v132 )
            {
              *(_QWORD *)&dword_0 = *v134;
              BUG();
            }
            v137 = v135 & (((unsigned int)v136 >> 9) ^ ((unsigned int)v136 >> 4));
            v138 = (_QWORD *)(v129 + 16LL * v137);
            v139 = *v138;
            if ( v136 != *v138 && v139 != -4096 )
            {
              LODWORD(v191) = 1;
              v190 = nullptr;
              v192 = v134;
              while ( 1 )
              {
                if ( !v190 )
                {
                  if ( v139 != -8192 )
                    v138 = v190;
                  v190 = v138;
                }
                v137 = v135 & (v191 + v137);
                v138 = (_QWORD *)(v129 + 16LL * v137);
                v139 = *v138;
                if ( v136 == *v138 )
                {
                  v134 = v192;
                  goto LABEL_133;
                }
                if ( v139 == -4096 )
                  break;
                LODWORD(v191) = v191 + 1;
              }
              v134 = v192;
              if ( v190 )
                v138 = v190;
            }
LABEL_133:
            *v138 = v136;
            v140 = v134[1];
            ++*(_DWORD *)(a1 + 576);
            v138[1] = v140;
          }
          v134 += 2;
        }
        while ( &v35[2 * v30] != v134 );
        operator delete();
        v129 = *(_QWORD *)(a1 + 568);
        v30 = *(_DWORD *)(a1 + 584);
        v51 = *(_DWORD *)(a1 + 576) + 1;
      }
      else
      {
        v186 = *(unsigned int *)(a1 + 584);
        *(_QWORD *)(a1 + 576) = 0;
        v30 = v186;
        v187 = (_QWORD *)(v129 + 16 * v186);
        if ( (_QWORD *)v129 != v187 )
        {
          v188 = (_QWORD *)v129;
          do
          {
            *v188 = -4096;
            v188 += 2;
          }
          while ( v187 != v188 );
        }
        v51 = 1;
      }
      if ( !v30 )
      {
LABEL_357:
        ++*(_DWORD *)(a1 + 576);
        BUG();
      }
      a6 = (__int64)*v28;
      a5 = (v30 - 1) & (((unsigned int)*v28 >> 9) ^ ((unsigned int)*v28 >> 4));
      v33 = (const __m128i **)(v129 + 16 * a5);
      a4 = *v33;
      v52 = *v33;
      if ( *v28 == *v33 )
        goto LABEL_85;
      v141 = 1;
      v142 = nullptr;
      if ( a4 == (const __m128i *)-4096LL )
      {
        a4 = *v28;
      }
      else
      {
        while ( 1 )
        {
          if ( v142 || a4 != (const __m128i *)-8192LL )
            v33 = v142;
          a5 = (v30 - 1) & (v141 + (_DWORD)a5);
          v189 = (const __m128i **)(v129 + 16LL * (unsigned int)a5);
          a4 = *v189;
          if ( (const __m128i *)a6 == *v189 )
          {
            v52 = *v189;
            v33 = (const __m128i **)(v129 + 16LL * (unsigned int)a5);
            goto LABEL_85;
          }
          if ( a4 == (const __m128i *)-4096LL )
            break;
          ++v141;
          v142 = v33;
          v33 = (const __m128i **)(v129 + 16LL * (unsigned int)a5);
        }
        if ( v33 )
        {
          v52 = *v33;
          a4 = *v28;
LABEL_85:
          *(_DWORD *)(a1 + 576) = v51;
          if ( v52 != (const __m128i *)-4096LL )
            --*(_DWORD *)(a1 + 580);
          goto LABEL_87;
        }
        a4 = *v28;
        v33 = (const __m128i **)(v129 + 16LL * (unsigned int)a5);
      }
    }
    *(_DWORD *)(a1 + 576) = v51;
LABEL_87:
    *v33 = a4;
    v33[1] = nullptr;
    goto LABEL_13;
  }
LABEL_32:
  v55 = *(const __m128i ***)(a1 + 280);
  result = 3LL * *(unsigned int *)(a1 + 288);
  v57 = &v55[3 * *(unsigned int *)(a1 + 288)];
  if ( v55 != v57 )
  {
    v58 = *(_DWORD *)(a1 + 608);
    while ( 1 )
    {
      v62 = *(_QWORD **)(a1 + 592);
      if ( !v58 )
        goto LABEL_37;
      a4 = *v55;
      v59 = v58 - 1;
      result = (unsigned int)v59 & (((unsigned int)*v55 >> 9) ^ ((unsigned int)*v55 >> 4));
      v60 = (const __m128i **)&v62[2 * result];
      v61 = *v60;
      if ( *v55 != *v60 )
        break;
LABEL_35:
      v60[1] = (const __m128i *)v55;
      v55 += 3;
      if ( v57 == v55 )
        goto LABEL_54;
    }
    v108 = 1;
    a6 = 0;
    if ( v61 != (const __m128i *)-4096LL )
    {
      while ( 1 )
      {
        if ( !a6 && v61 == (const __m128i *)-8192LL )
          a6 = (__int64)v60;
        v169 = v108 + 1;
        a5 = (unsigned int)(result + v108);
        result = (unsigned int)v59 & (unsigned int)a5;
        v60 = (const __m128i **)&v62[2 * result];
        v61 = *v60;
        if ( a4 == *v60 )
          goto LABEL_35;
        if ( v61 == (const __m128i *)-4096LL )
          break;
        v108 = v169;
      }
      if ( a6 )
        v60 = (const __m128i **)a6;
    }
    v77 = *(_DWORD *)(a1 + 600) + 1;
    a5 = (unsigned int)(4 * v77);
    if ( (unsigned int)a5 >= 3 * v58 )
    {
LABEL_37:
      v63 = ((((((((2 * v58 - 1) | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 2)
               | (2 * v58 - 1)
               | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 4)
             | (((2 * v58 - 1) | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 2)
             | (2 * v58 - 1)
             | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 8)
           | (((((2 * v58 - 1) | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 2)
             | (2 * v58 - 1)
             | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 4)
           | (((2 * v58 - 1) | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 2)
           | (2 * v58 - 1)
           | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 16;
      v64 = (v63
           | (((((((2 * v58 - 1) | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 2)
               | (2 * v58 - 1)
               | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 4)
             | (((2 * v58 - 1) | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 2)
             | (2 * v58 - 1)
             | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 8)
           | (((((2 * v58 - 1) | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 2)
             | (2 * v58 - 1)
             | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 4)
           | (((2 * v58 - 1) | ((unsigned __int64)(2 * v58 - 1) >> 1)) >> 2)
           | (2 * v58 - 1)
           | ((unsigned __int64)(2 * v58 - 1) >> 1))
          + 1;
      if ( (unsigned int)v64 < 0x40 )
        LODWORD(v64) = 64;
      *(_DWORD *)(a1 + 608) = v64;
      result = sub_220C370(16LL * (unsigned int)v64, 8, v63, a4, a5, a6);
      *(_QWORD *)(a1 + 592) = result;
      if ( v62 )
      {
        v65 = *(unsigned int *)(a1 + 608);
        v66 = (_QWORD *)result;
        *(_QWORD *)(a1 + 600) = 0;
        v67 = v65;
        v68 = &v62[2 * v58];
        v69 = (_QWORD *)(result + 16 * v65);
        if ( (_QWORD *)result != v69 )
        {
          do
          {
            *v66 = -4096;
            v66 += 2;
          }
          while ( v69 != v66 );
        }
        v70 = v62;
        for ( j = v67 - 1; v68 != v70; v70 += 2 )
        {
          v72 = *v70;
          if ( *v70 != -8192 && v72 != -4096 )
          {
            if ( !v67 )
            {
              *(_QWORD *)&dword_0 = *v70;
              BUG();
            }
            v73 = j & (((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4));
            v74 = (_QWORD *)(result + 16LL * v73);
            v75 = *v74;
            if ( *v74 != v72 && v75 != -4096 )
            {
              LODWORD(v191) = 1;
              v190 = nullptr;
              v192 = v70;
              while ( 1 )
              {
                if ( v75 == -8192 )
                {
                  if ( v190 )
                    v74 = v190;
                  v190 = v74;
                }
                v73 = j & (v191 + v73);
                v74 = (_QWORD *)(result + 16LL * v73);
                v75 = *v74;
                if ( v72 == *v74 )
                {
                  v70 = v192;
                  goto LABEL_47;
                }
                if ( v75 == -4096 )
                  break;
                LODWORD(v191) = v191 + 1;
              }
              v70 = v192;
              if ( v190 )
                v74 = v190;
            }
LABEL_47:
            *v74 = v72;
            v76 = v70[1];
            ++*(_DWORD *)(a1 + 600);
            v74[1] = v76;
          }
        }
        operator delete();
        result = *(_QWORD *)(a1 + 592);
        v58 = *(_DWORD *)(a1 + 608);
        v77 = *(_DWORD *)(a1 + 600) + 1;
      }
      else
      {
        v177 = *(unsigned int *)(a1 + 608);
        *(_QWORD *)(a1 + 600) = 0;
        v58 = v177;
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
        v77 = 1;
      }
      if ( !v58 )
        goto LABEL_364;
      a6 = (__int64)*v55;
      a5 = (v58 - 1) & (((unsigned int)*v55 >> 9) ^ ((unsigned int)*v55 >> 4));
      v60 = (const __m128i **)(result + 16 * a5);
      a4 = *v60;
      v78 = *v60;
      if ( *v55 == *v60 )
        goto LABEL_92;
      v79 = 1;
      v80 = nullptr;
      if ( a4 != (const __m128i *)-4096LL )
      {
        while ( 1 )
        {
          if ( v80 || a4 != (const __m128i *)-8192LL )
            v60 = v80;
          a5 = (v58 - 1) & (v79 + (_DWORD)a5);
          v125 = (const __m128i **)(result + 16LL * (unsigned int)a5);
          a4 = *v125;
          if ( (const __m128i *)a6 == *v125 )
          {
            v78 = *v125;
            v60 = (const __m128i **)(result + 16LL * (unsigned int)a5);
            goto LABEL_92;
          }
          if ( a4 == (const __m128i *)-4096LL )
            break;
          ++v79;
          v80 = v60;
          v60 = (const __m128i **)(result + 16LL * (unsigned int)a5);
        }
        if ( v60 )
        {
          v78 = *v60;
          a4 = *v55;
LABEL_92:
          *(_DWORD *)(a1 + 600) = v77;
          if ( v78 != (const __m128i *)-4096LL )
            --*(_DWORD *)(a1 + 604);
          goto LABEL_94;
        }
LABEL_348:
        v60 = v125;
      }
    }
    else
    {
      result = v58 - *(_DWORD *)(a1 + 604) - v77;
      a5 = v58 >> 3;
      if ( (unsigned int)result > (unsigned int)a5 )
      {
LABEL_91:
        v78 = *v60;
        goto LABEL_92;
      }
      v110 = (((((v59 >> 1) | v59 | (((v59 >> 1) | v59) >> 2)) >> 4) | (v59 >> 1) | v59 | (((v59 >> 1) | v59) >> 2)) >> 8)
           | (((v59 >> 1) | v59 | (((v59 >> 1) | v59) >> 2)) >> 4)
           | (v59 >> 1)
           | v59
           | (((v59 >> 1) | v59) >> 2);
      v111 = v110 >> 16;
      v112 = ((v110 >> 16) | v110) + 1;
      if ( (unsigned int)v112 < 0x40 )
        LODWORD(v112) = 64;
      *(_DWORD *)(a1 + 608) = v112;
      result = sub_220C370(16LL * (unsigned int)v112, 8, v111, a4, a5, a6);
      *(_QWORD *)(a1 + 592) = result;
      if ( v62 )
      {
        v113 = *(unsigned int *)(a1 + 608);
        v114 = (_QWORD *)result;
        *(_QWORD *)(a1 + 600) = 0;
        v115 = v113;
        v116 = (_QWORD *)(result + 16 * v113);
        if ( (_QWORD *)result != v116 )
        {
          do
          {
            *v114 = -4096;
            v114 += 2;
          }
          while ( v116 != v114 );
        }
        v117 = v62;
        v118 = v115 - 1;
        do
        {
          v119 = *v117;
          if ( *v117 != -8192 && v119 != -4096 )
          {
            if ( !v115 )
            {
              *(_QWORD *)&dword_0 = *v117;
              BUG();
            }
            v120 = v118 & (((unsigned int)v119 >> 9) ^ ((unsigned int)v119 >> 4));
            v121 = (_QWORD *)(result + 16LL * v120);
            v122 = *v121;
            if ( v119 != *v121 && v122 != -4096 )
            {
              LODWORD(v191) = 1;
              v190 = nullptr;
              v192 = v117;
              while ( 1 )
              {
                if ( !v190 )
                {
                  if ( v122 != -8192 )
                    v121 = v190;
                  v190 = v121;
                }
                v120 = v118 & (v191 + v120);
                v121 = (_QWORD *)(result + 16LL * v120);
                v122 = *v121;
                if ( v119 == *v121 )
                {
                  v117 = v192;
                  goto LABEL_112;
                }
                if ( v122 == -4096 )
                  break;
                LODWORD(v191) = v191 + 1;
              }
              v117 = v192;
              if ( v190 )
                v121 = v190;
            }
LABEL_112:
            *v121 = v119;
            v123 = v117[1];
            ++*(_DWORD *)(a1 + 600);
            v121[1] = v123;
          }
          v117 += 2;
        }
        while ( &v62[2 * v58] != v117 );
        operator delete();
        result = *(_QWORD *)(a1 + 592);
        v58 = *(_DWORD *)(a1 + 608);
        v77 = *(_DWORD *)(a1 + 600) + 1;
      }
      else
      {
        v180 = *(unsigned int *)(a1 + 608);
        *(_QWORD *)(a1 + 600) = 0;
        v58 = v180;
        v181 = (_QWORD *)(result + 16 * v180);
        if ( (_QWORD *)result != v181 )
        {
          v182 = (_QWORD *)result;
          do
          {
            *v182 = -4096;
            v182 += 2;
          }
          while ( v181 != v182 );
        }
        v77 = 1;
      }
      if ( !v58 )
      {
LABEL_364:
        ++*(_DWORD *)(a1 + 600);
        BUG();
      }
      a4 = *v55;
      a5 = (v58 - 1) & (((unsigned int)*v55 >> 9) ^ ((unsigned int)*v55 >> 4));
      v60 = (const __m128i **)(result + 16 * a5);
      v78 = *v60;
      if ( *v60 == *v55 )
        goto LABEL_92;
      a6 = (__int64)*v55;
      if ( v78 != (const __m128i *)-4096LL )
      {
        a6 = 1;
        v124 = nullptr;
        while ( 1 )
        {
          if ( v124 || v78 != (const __m128i *)-8192LL )
            v60 = v124;
          a5 = (v58 - 1) & ((_DWORD)a6 + (_DWORD)a5);
          v125 = (const __m128i **)(result + 16LL * (unsigned int)a5);
          v78 = *v125;
          if ( a4 == *v125 )
          {
            v60 = (const __m128i **)(result + 16LL * (unsigned int)a5);
            goto LABEL_92;
          }
          if ( v78 == (const __m128i *)-4096LL )
            break;
          a6 = (unsigned int)(a6 + 1);
          v124 = v60;
          v60 = (const __m128i **)(result + 16LL * (unsigned int)a5);
        }
        if ( v60 )
          goto LABEL_91;
        a6 = (__int64)*v55;
        goto LABEL_348;
      }
    }
    *(_DWORD *)(a1 + 600) = v77;
    a4 = (const __m128i *)a6;
LABEL_94:
    *v60 = a4;
    v60[1] = nullptr;
    goto LABEL_35;
  }
LABEL_54:
  v81 = *(const __m128i ***)(a1 + 488);
  v82 = &v81[4 * *(unsigned int *)(a1 + 496)];
  if ( v81 != v82 )
  {
    v83 = *(_DWORD *)(a1 + 632);
    while ( 1 )
    {
      v87 = *(_QWORD **)(a1 + 616);
      if ( !v83 )
        goto LABEL_59;
      a4 = *v81;
      v84 = v83 - 1;
      result = (unsigned int)v84 & (((unsigned int)*v81 >> 9) ^ ((unsigned int)*v81 >> 4));
      v85 = (const __m128i **)&v87[2 * result];
      v86 = *v85;
      if ( *v85 != *v81 )
        break;
LABEL_57:
      v85[1] = (const __m128i *)v81;
      v81 += 4;
      if ( v82 == v81 )
        return result;
    }
    v109 = 1;
    a6 = 0;
    if ( v86 != (const __m128i *)-4096LL )
    {
      while ( 1 )
      {
        if ( !a6 && v86 == (const __m128i *)-8192LL )
          a6 = (__int64)v85;
        v168 = v109 + 1;
        a5 = (unsigned int)(result + v109);
        result = (unsigned int)v84 & (unsigned int)a5;
        v85 = (const __m128i **)&v87[2 * result];
        v86 = *v85;
        if ( a4 == *v85 )
          goto LABEL_57;
        if ( v86 == (const __m128i *)-4096LL )
          break;
        v109 = v168;
      }
      if ( a6 )
        v85 = (const __m128i **)a6;
    }
    v102 = *(_DWORD *)(a1 + 624) + 1;
    a5 = (unsigned int)(4 * v102);
    if ( (unsigned int)a5 >= 3 * v83 )
    {
LABEL_59:
      v88 = ((((((((2 * v83 - 1) | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 2)
               | (2 * v83 - 1)
               | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 4)
             | (((2 * v83 - 1) | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 2)
             | (2 * v83 - 1)
             | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 8)
           | (((((2 * v83 - 1) | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 2)
             | (2 * v83 - 1)
             | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 4)
           | (((2 * v83 - 1) | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 2)
           | (2 * v83 - 1)
           | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 16;
      v89 = (v88
           | (((((((2 * v83 - 1) | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 2)
               | (2 * v83 - 1)
               | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 4)
             | (((2 * v83 - 1) | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 2)
             | (2 * v83 - 1)
             | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 8)
           | (((((2 * v83 - 1) | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 2)
             | (2 * v83 - 1)
             | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 4)
           | (((2 * v83 - 1) | ((unsigned __int64)(2 * v83 - 1) >> 1)) >> 2)
           | (2 * v83 - 1)
           | ((unsigned __int64)(2 * v83 - 1) >> 1))
          + 1;
      if ( (unsigned int)v89 < 0x40 )
        LODWORD(v89) = 64;
      *(_DWORD *)(a1 + 632) = v89;
      result = sub_220C370(16LL * (unsigned int)v89, 8, v88, a4, a5, a6);
      *(_QWORD *)(a1 + 616) = result;
      if ( v87 )
      {
        v90 = *(unsigned int *)(a1 + 632);
        v91 = (_QWORD *)result;
        *(_QWORD *)(a1 + 624) = 0;
        v92 = v90;
        v93 = &v87[2 * v83];
        v94 = (_QWORD *)(result + 16 * v90);
        if ( (_QWORD *)result != v94 )
        {
          do
          {
            *v91 = -4096;
            v91 += 2;
          }
          while ( v94 != v91 );
        }
        v95 = v87;
        for ( k = v92 - 1; v93 != v95; v95 += 2 )
        {
          v97 = *v95;
          if ( *v95 != -8192 && v97 != -4096 )
          {
            if ( !v92 )
            {
              *(_QWORD *)&dword_0 = *v95;
              BUG();
            }
            v98 = k & (((unsigned int)v97 >> 9) ^ ((unsigned int)v97 >> 4));
            v99 = (_QWORD *)(result + 16LL * v98);
            v100 = *v99;
            if ( *v99 != v97 && v100 != -4096 )
            {
              LODWORD(v191) = 1;
              v190 = nullptr;
              v192 = v95;
              while ( 1 )
              {
                if ( v100 == -8192 )
                {
                  if ( v190 )
                    v99 = v190;
                  v190 = v99;
                }
                v98 = k & (v191 + v98);
                v99 = (_QWORD *)(result + 16LL * v98);
                v100 = *v99;
                if ( v97 == *v99 )
                {
                  v95 = v192;
                  goto LABEL_69;
                }
                if ( v100 == -4096 )
                  break;
                LODWORD(v191) = v191 + 1;
              }
              v95 = v192;
              if ( v190 )
                v99 = v190;
            }
LABEL_69:
            *v99 = v97;
            v101 = v95[1];
            ++*(_DWORD *)(a1 + 624);
            v99[1] = v101;
          }
        }
        operator delete();
        result = *(_QWORD *)(a1 + 616);
        v83 = *(_DWORD *)(a1 + 632);
        v102 = *(_DWORD *)(a1 + 624) + 1;
      }
      else
      {
        v171 = *(unsigned int *)(a1 + 632);
        *(_QWORD *)(a1 + 624) = 0;
        v83 = v171;
        v172 = (_QWORD *)(result + 16 * v171);
        if ( (_QWORD *)result != v172 )
        {
          v173 = (_QWORD *)result;
          do
          {
            *v173 = -4096;
            v173 += 2;
          }
          while ( v172 != v173 );
        }
        v102 = 1;
      }
      if ( !v83 )
        goto LABEL_358;
      a6 = (__int64)*v81;
      a5 = (v83 - 1) & (((unsigned int)*v81 >> 9) ^ ((unsigned int)*v81 >> 4));
      v85 = (const __m128i **)(result + 16 * a5);
      a4 = *v85;
      v103 = *v85;
      if ( *v81 == *v85 )
        goto LABEL_99;
      v104 = 1;
      v105 = nullptr;
      if ( a4 != (const __m128i *)-4096LL )
      {
        while ( 1 )
        {
          if ( v105 || a4 != (const __m128i *)-8192LL )
            v85 = v105;
          a5 = (v83 - 1) & (v104 + (_DWORD)a5);
          v158 = (const __m128i **)(result + 16LL * (unsigned int)a5);
          a4 = *v158;
          if ( (const __m128i *)a6 == *v158 )
          {
            v103 = *v158;
            v85 = (const __m128i **)(result + 16LL * (unsigned int)a5);
            goto LABEL_99;
          }
          if ( a4 == (const __m128i *)-4096LL )
            break;
          ++v104;
          v105 = v85;
          v85 = (const __m128i **)(result + 16LL * (unsigned int)a5);
        }
        if ( v85 )
        {
          v103 = *v85;
          a4 = *v81;
LABEL_99:
          *(_DWORD *)(a1 + 624) = v102;
          if ( v103 != (const __m128i *)-4096LL )
            --*(_DWORD *)(a1 + 628);
          goto LABEL_101;
        }
LABEL_339:
        v85 = v158;
      }
    }
    else
    {
      result = v83 - *(_DWORD *)(a1 + 628) - v102;
      a5 = v83 >> 3;
      if ( (unsigned int)result > (unsigned int)a5 )
      {
LABEL_98:
        v103 = *v85;
        goto LABEL_99;
      }
      v143 = (((((v84 >> 1) | v84 | (((v84 >> 1) | v84) >> 2)) >> 4) | (v84 >> 1) | v84 | (((v84 >> 1) | v84) >> 2)) >> 8)
           | (((v84 >> 1) | v84 | (((v84 >> 1) | v84) >> 2)) >> 4)
           | (v84 >> 1)
           | v84
           | (((v84 >> 1) | v84) >> 2);
      v144 = v143 >> 16;
      v145 = ((v143 >> 16) | v143) + 1;
      if ( (unsigned int)v145 < 0x40 )
        LODWORD(v145) = 64;
      *(_DWORD *)(a1 + 632) = v145;
      result = sub_220C370(16LL * (unsigned int)v145, 8, v144, a4, a5, a6);
      *(_QWORD *)(a1 + 616) = result;
      if ( v87 )
      {
        v146 = *(unsigned int *)(a1 + 632);
        v147 = (_QWORD *)result;
        *(_QWORD *)(a1 + 624) = 0;
        v148 = v146;
        v149 = (_QWORD *)(result + 16 * v146);
        if ( (_QWORD *)result != v149 )
        {
          do
          {
            *v147 = -4096;
            v147 += 2;
          }
          while ( v149 != v147 );
        }
        v150 = v87;
        v151 = v148 - 1;
        do
        {
          v152 = *v150;
          if ( *v150 != -4096 && v152 != -8192 )
          {
            if ( !v148 )
            {
              *(_QWORD *)&dword_0 = *v150;
              BUG();
            }
            v153 = v151 & (((unsigned int)v152 >> 9) ^ ((unsigned int)v152 >> 4));
            v154 = (_QWORD *)(result + 16LL * v153);
            v155 = *v154;
            if ( *v154 != v152 && v155 != -4096 )
            {
              LODWORD(v191) = 1;
              v190 = nullptr;
              v192 = v150;
              while ( 1 )
              {
                if ( v155 == -8192 )
                {
                  if ( v190 )
                    v154 = v190;
                  v190 = v154;
                }
                v153 = v151 & (v191 + v153);
                v154 = (_QWORD *)(result + 16LL * v153);
                v155 = *v154;
                if ( v152 == *v154 )
                {
                  v150 = v192;
                  goto LABEL_150;
                }
                if ( v155 == -4096 )
                  break;
                LODWORD(v191) = v191 + 1;
              }
              v150 = v192;
              if ( v190 )
                v154 = v190;
            }
LABEL_150:
            *v154 = v152;
            v156 = v150[1];
            ++*(_DWORD *)(a1 + 624);
            v154[1] = v156;
          }
          v150 += 2;
        }
        while ( &v87[2 * v83] != v150 );
        operator delete();
        result = *(_QWORD *)(a1 + 616);
        v83 = *(_DWORD *)(a1 + 632);
        v102 = *(_DWORD *)(a1 + 624) + 1;
      }
      else
      {
        v183 = *(unsigned int *)(a1 + 632);
        *(_QWORD *)(a1 + 624) = 0;
        v83 = v183;
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
        v102 = 1;
      }
      if ( !v83 )
      {
LABEL_358:
        ++*(_DWORD *)(a1 + 624);
        BUG();
      }
      a4 = *v81;
      a5 = (v83 - 1) & (((unsigned int)*v81 >> 9) ^ ((unsigned int)*v81 >> 4));
      v85 = (const __m128i **)(result + 16 * a5);
      v103 = *v85;
      if ( *v85 == *v81 )
        goto LABEL_99;
      a6 = (__int64)*v81;
      if ( v103 != (const __m128i *)-4096LL )
      {
        a6 = 1;
        v157 = nullptr;
        while ( 1 )
        {
          if ( v103 != (const __m128i *)-8192LL || v157 )
            v85 = v157;
          a5 = (v83 - 1) & ((_DWORD)a6 + (_DWORD)a5);
          v158 = (const __m128i **)(result + 16LL * (unsigned int)a5);
          v103 = *v158;
          if ( a4 == *v158 )
          {
            v85 = (const __m128i **)(result + 16LL * (unsigned int)a5);
            goto LABEL_99;
          }
          if ( v103 == (const __m128i *)-4096LL )
            break;
          a6 = (unsigned int)(a6 + 1);
          v157 = v85;
          v85 = (const __m128i **)(result + 16LL * (unsigned int)a5);
        }
        if ( v85 )
          goto LABEL_98;
        a6 = (__int64)*v81;
        goto LABEL_339;
      }
    }
    *(_DWORD *)(a1 + 624) = v102;
    a4 = (const __m128i *)a6;
LABEL_101:
    *v85 = a4;
    v85[1] = nullptr;
    goto LABEL_57;
  }
  return result;
}

