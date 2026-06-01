__int64 __fastcall sub_B9D270(__int64 a1, __m128 a2, __m128 a3, __m128 a4)
{
  char **v4; // rbp
  char **v5; // rbp
  char **exception; // rbp
  _QWORD *v7; // r8
  __int64 result; // rax
  unsigned int *v9; // r9
  __int64 v10; // r13
  __int64 v11; // r10
  unsigned int *v12; // r12
  unsigned int v13; // r8d
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int **v16; // rbx
  int v17; // r14d
  int v18; // edi
  __int64 v19; // rcx
  unsigned __int64 *v20; // rbp
  __int64 v21; // r14
  unsigned int **v22; // rsi
  unsigned int **v23; // rdx
  unsigned int *v24; // r11
  unsigned int **v25; // rdx
  unsigned int **v26; // rdi
  unsigned int *v27; // rcx
  unsigned int *v28; // rdx
  unsigned int v29; // r15d
  _QWORD *v30; // rax
  unsigned int *v31; // rax
  __int64 *v32; // rdi
  __int64 v33; // rax
  int v34; // r12d
  unsigned int v35; // r15d
  unsigned int v36; // ebp
  __int64 *v37; // r15
  unsigned int v38; // r12d
  _QWORD *v39; // rcx
  __int64 v40; // rbx
  unsigned int v41; // r14d
  unsigned int v42; // ebp
  unsigned int v43; // ebx
  size_t v44; // rsi
  unsigned int *v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rdx
  __int64 v50; // rax
  unsigned int *v51; // rax
  unsigned int v52; // r13d
  int v53; // r12d
  _QWORD *v54; // rbp
  unsigned __int64 v55; // xmm4_8
  unsigned __int64 v56; // r15
  char *v57; // rax
  _QWORD *v58; // r8
  unsigned int *v59; // r11
  unsigned int *v60; // rdx
  _QWORD *v61; // rax
  __int64 v62; // rax
  unsigned int v63; // r14d
  _QWORD *v64; // rdx
  __int64 v65; // rax
  unsigned int *v66; // rax
  unsigned int *v67; // rbx
  __int64 v68; // rax
  unsigned int *v69; // rcx
  __int64 v70; // rax
  __int16 v71; // dx
  unsigned int v72; // r8d
  __m128 *v73; // rax
  int v74; // edx
  size_t v75; // rcx
  __m128 *v76; // r11
  const __m128i *v77; // r15
  __int64 v78; // rsi
  __m128i *v79; // r14
  __m128 *v80; // rbp
  const __m128i *v81; // rbx
  __int64 v82; // rdx
  __m128 *v83; // rsi
  __m128 *v84; // rdx
  __int64 v85; // r14
  __int64 v86; // rbx
  unsigned int v87; // eax
  __int64 v88; // rbx
  char v89; // bl
  _DWORD *v90; // rax
  unsigned int *v91; // r8
  __int64 v92; // rax
  unsigned int *v93; // rbp
  unsigned int *v94; // r14
  __int64 v95; // rax
  __int16 v96; // dx
  __int64 *v97; // rbp
  __int64 v98; // rax
  __int64 *v99; // rsi
  unsigned int *v100; // rdi
  unsigned int v101; // ebx
  __int64 v102; // rax
  __int16 v103; // dx
  unsigned int v104; // ebx
  unsigned int v105; // ecx
  unsigned int *v106; // rax
  __int64 v107; // rax
  unsigned int v108; // ebx
  unsigned int v109; // ecx
  unsigned int *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rax
  _QWORD *v114; // rax
  __int64 *v115; // r15
  __int64 v116; // rax
  __int64 *v117; // r8
  __int64 v118; // rdi
  __int64 *v119; // r13
  unsigned int *v120; // rbp
  __int64 v121; // rsi
  __int16 v122; // ax
  _QWORD *v123; // rax
  __int64 *v124; // rbx
  __int64 v125; // rax
  __int64 *v126; // r15
  __int64 v127; // rsi
  __int16 v128; // ax
  __int64 v129; // rdx
  __int64 v130; // rax
  unsigned int *v131; // r15
  _BYTE *v132; // rbp
  unsigned int v133; // r13d
  unsigned int v134; // edx
  int v135; // r14d
  __int64 v136; // r13
  __int64 v137; // rax
  char *v138; // rdi
  __int64 v139; // rax
  __int64 v140; // r10
  unsigned int v141; // eax
  __int64 v142; // r10
  __int64 v143; // rax
  __int64 v144; // rsi
  _QWORD *v145; // r15
  __int64 v146; // rbx
  __int64 v147; // rax
  __int64 v148; // r11
  _QWORD *v149; // rax
  unsigned int *v150; // [rsp+8h] [rbp-100h]
  __int64 v151; // [rsp+8h] [rbp-100h]
  _QWORD *v152; // [rsp+8h] [rbp-100h]
  _QWORD *v153; // [rsp+8h] [rbp-100h]
  _QWORD *v154; // [rsp+8h] [rbp-100h]
  _QWORD *v155; // [rsp+8h] [rbp-100h]
  _QWORD *v156; // [rsp+8h] [rbp-100h]
  unsigned int *v157; // [rsp+10h] [rbp-F8h]
  int v158; // [rsp+10h] [rbp-F8h]
  unsigned int v159; // [rsp+10h] [rbp-F8h]
  unsigned int v160; // [rsp+18h] [rbp-F0h]
  unsigned int v161; // [rsp+18h] [rbp-F0h]
  unsigned int *v162; // [rsp+18h] [rbp-F0h]
  unsigned int *v163; // [rsp+18h] [rbp-F0h]
  unsigned int *v164; // [rsp+18h] [rbp-F0h]
  size_t v165; // [rsp+18h] [rbp-F0h]
  int v166; // [rsp+18h] [rbp-F0h]
  unsigned int v167; // [rsp+18h] [rbp-F0h]
  unsigned int v168; // [rsp+18h] [rbp-F0h]
  unsigned int *v169; // [rsp+18h] [rbp-F0h]
  unsigned int v170; // [rsp+18h] [rbp-F0h]
  __int64 v171; // [rsp+20h] [rbp-E8h]
  _QWORD *v172; // [rsp+28h] [rbp-E0h]
  unsigned int v173; // [rsp+28h] [rbp-E0h]
  unsigned int *v174; // [rsp+30h] [rbp-D8h]
  unsigned int v175; // [rsp+30h] [rbp-D8h]
  unsigned int *v176; // [rsp+30h] [rbp-D8h]
  unsigned int *v177; // [rsp+30h] [rbp-D8h]
  __int64 *v178; // [rsp+30h] [rbp-D8h]
  unsigned int *v179; // [rsp+30h] [rbp-D8h]
  unsigned int v180; // [rsp+38h] [rbp-D0h]
  __int64 v181; // [rsp+38h] [rbp-D0h]
  __int64 v182; // [rsp+40h] [rbp-C8h]
  size_t v183; // [rsp+40h] [rbp-C8h]
  unsigned int *v184; // [rsp+40h] [rbp-C8h]
  unsigned int *v185; // [rsp+48h] [rbp-C0h]
  int v186; // [rsp+48h] [rbp-C0h]
  unsigned int *v187; // [rsp+50h] [rbp-B8h]
  unsigned int v188; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v189; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v190; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v191; // [rsp+74h] [rbp-94h] BYREF
  __int64 v192; // [rsp+78h] [rbp-90h] BYREF
  void *v193; // [rsp+80h] [rbp-88h] BYREF
  __int64 v194; // [rsp+88h] [rbp-80h]
  _BYTE src[120]; // [rsp+90h] [rbp-78h] BYREF

  v7 = (_QWORD *)a1;
  result = *(_QWORD *)(a1 + 56);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v9 = *(unsigned int **)(a1 + 48);
  v188 = 0;
  v189 = 0;
  v190 = 0;
  if ( !v9 )
    goto LABEL_63;
  v150 = &v9[*(v9 - 1)];
  if ( v9 == v150 )
    goto LABEL_63;
  v10 = a1;
  v157 = nullptr;
  v172 = (_QWORD *)(a1 + 168);
  do
  {
    v11 = *v9;
    v12 = *(unsigned int **)(*(_QWORD *)(v10 + 40) + 8 * v11);
    v191 = *v9;
    v13 = v11;
    if ( *((_WORD *)v12 + 2) == 1 )
    {
      v60 = (unsigned int *)(*(_QWORD *)(v10 + 64) + 4LL * v12[4]);
      if ( *v60 == -1 )
      {
        *v60 = v11;
      }
      else
      {
        a3 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v60), _mm_cvtsi32_si128(v11));
        v162 = v9;
        v61 = (_QWORD *)sub_180C100(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL), 24);
        *(_DWORD *)v61 = 21;
        v61[1] = 0;
        v61[2] = a3.m128_u64[0];
        v193 = v61;
        sub_B9B7D0(v172, &v193);
        v9 = v162;
      }
      goto LABEL_34;
    }
    if ( (*((_BYTE *)v12 + 30) & 1) != 0 )
    {
      v86 = *(_QWORD *)v10;
      v174 = v9;
      v160 = v11;
      v87 = sub_952CC0(*(__int64 **)(*(_QWORD *)v10 + 7472LL), *(_QWORD *)(v10 + 72));
      sub_B6F6E0(v86, (__int64)v12, 0, v87, *(double *)a2.m128_u64, a3, a4);
      v88 = *(_QWORD *)(*(_QWORD *)(v86 + 8656) + 8LL * *v12);
      v30 = (_QWORD *)sub_180C100(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL), 32);
      *(_DWORD *)v30 = 22;
      v30[1] = 0;
      *((_DWORD *)v30 + 4) = v160;
      v30[3] = v88;
      goto LABEL_33;
    }
    v14 = *(unsigned int *)(v10 + 120);
    v15 = v12[3];
    v16 = *(unsigned int ***)(v10 + 112);
    v17 = v14 - 1;
    v18 = *(_DWORD *)(v10 + 120);
    v19 = 16 * v14;
    v20 = (unsigned __int64 *)&v16[(unsigned __int64)v19 / 8];
    v21 = 16LL * (v15 & v17);
    v22 = &v16[(unsigned __int64)v21 / 8];
    if ( v21 == v19 )
    {
LABEL_64:
      if ( v16 != v22 )
      {
        v23 = *(unsigned int ***)(v10 + 112);
        while ( 1 )
        {
          v59 = *v23;
          if ( (unsigned __int64)*v23 > 1 )
          {
            if ( v59[3] == v15 && v12 == v59 )
              goto LABEL_31;
          }
          else if ( !v59 )
          {
            goto LABEL_15;
          }
          v23 += 2;
          if ( v22 == v23 )
            goto LABEL_15;
        }
      }
      goto LABEL_15;
    }
    v23 = &v16[(unsigned __int64)v21 / 8];
    while ( 1 )
    {
      v24 = *v23;
      if ( (unsigned __int64)*v23 > 1 )
        break;
      if ( !v24 )
        goto LABEL_15;
LABEL_12:
      v23 += 2;
      if ( v20 == (unsigned __int64 *)v23 )
        goto LABEL_64;
    }
    if ( v24[3] != v15 || v12 != v24 )
      goto LABEL_12;
LABEL_31:
    v29 = *((_DWORD *)v23 + 2);
    if ( (_DWORD)v11 != v29 )
    {
      v160 = v11;
      v174 = v9;
      v30 = (_QWORD *)sub_180C100(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL), 24);
      *(_DWORD *)v30 = 21;
      a4 = (__m128)_mm_cvtsi32_si128(v160);
      v30[1] = 0;
      a2.m128_u64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), (__m128i)a4).m128i_u64[0];
      v30[2] = a2.m128_u64[0];
LABEL_33:
      v193 = v30;
      sub_B9B7D0(v172, &v193);
      LODWORD(v193) = 0;
      sub_B9B6D0((_QWORD *)(v10 + 136), v160, (unsigned int *)&v193);
      v9 = v174;
      goto LABEL_34;
    }
LABEL_15:
    if ( 3 * v18 < (unsigned int)(4 * (*(_DWORD *)(v10 + 124) + *(_DWORD *)(v10 + 128))) )
    {
      v185 = v9;
      v182 = v11;
      v180 = v11;
      v165 = 16LL * (unsigned int)(2 * v18);
      v73 = (__m128 *)sub_186B270(v165);
      v74 = 2 * v18;
      v75 = v165;
      v13 = v180;
      v11 = v182;
      v16 = (unsigned int **)v73;
      v9 = v185;
      v76 = &v73[v165 / 0x10];
      if ( 2 * v18 )
      {
        do
        {
          v73->m128_u64[0] = 0;
          ++v73;
          v73[-1].m128_i32[2] = 0;
        }
        while ( v73 != v76 );
      }
      v77 = *(const __m128i **)(v10 + 112);
      v20 = (unsigned __int64 *)v76;
      v166 = 2 * v18 - 1;
      v78 = *(unsigned int *)(v10 + 120);
      v79 = (__m128i *)&v77[v78];
      if ( v77 != &v77[v78] )
      {
        v80 = (__m128 *)v16;
        v81 = &v77[v78];
        do
        {
          while ( v77->m128i_i64[0] <= 1uLL )
          {
            if ( v81 == ++v77 )
              goto LABEL_108;
          }
          v82 = 16LL * (*(_DWORD *)(v77->m128i_i64[0] + 12) & (unsigned int)v166);
          v83 = &v80[(unsigned __int64)v82 / 0x10];
          if ( v75 == v82 )
          {
LABEL_113:
            if ( v80 == v83 )
            {
LABEL_141:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v84 = v80;
            while ( v84->m128_u64[0] )
            {
              if ( v83 == ++v84 )
                goto LABEL_141;
            }
          }
          else
          {
            v84 = &v80[(unsigned __int64)v82 / 0x10];
            while ( v84->m128_u64[0] )
            {
              if ( v76 == ++v84 )
                goto LABEL_113;
            }
          }
          a2 = (__m128)_mm_loadu_si128(v77++);
          *v84 = a2;
        }
        while ( v81 != v77 );
LABEL_108:
        v79 = *(__m128i **)(v10 + 112);
        v16 = (unsigned int **)v80;
        v74 = 2 * v18;
        v20 = (unsigned __int64 *)v76;
      }
      if ( v79 )
      {
        v187 = v185;
        v186 = v74;
        v183 = v75;
        v181 = v11;
        v175 = v13;
        sub_186B220(v79);
        v9 = v187;
        v74 = v186;
        v75 = v183;
        v11 = v181;
        v13 = v175;
      }
      v15 = v12[3];
      *(_QWORD *)(v10 + 112) = v16;
      *(_DWORD *)(v10 + 120) = v74;
      *(_DWORD *)(v10 + 128) = 0;
      v85 = 16LL * (v15 & v166);
      v22 = &v16[(unsigned __int64)v85 / 8];
      if ( v85 != v75 )
      {
LABEL_17:
        v25 = v22;
        v26 = nullptr;
        while ( 1 )
        {
          v27 = *v25;
          if ( (unsigned __int64)*v25 > 1 )
          {
            if ( v27[3] == v15 && v12 == v27 )
            {
              *v25 = v12;
              *((_DWORD *)v25 + 2) = v13;
              goto LABEL_75;
            }
          }
          else
          {
            if ( !v27 )
            {
              if ( v26 )
                goto LABEL_122;
              v26 = v25;
              goto LABEL_123;
            }
            v26 = v25;
          }
          v25 += 2;
          if ( v25 == (unsigned int **)v20 )
            goto LABEL_27;
        }
      }
    }
    else if ( v21 != v19 )
    {
      goto LABEL_17;
    }
    v26 = nullptr;
LABEL_27:
    while ( 2 )
    {
      if ( v16 == v22 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v28 = *v16;
      if ( (unsigned __int64)*v16 > 1 )
      {
        if ( v28[3] == v15 && v12 == v28 )
        {
          *v16 = v12;
          *((_DWORD *)v16 + 2) = v13;
          goto LABEL_75;
        }
        goto LABEL_26;
      }
      if ( v28 )
      {
        v26 = v16;
LABEL_26:
        v16 += 2;
        continue;
      }
      break;
    }
    if ( v26 )
LABEL_122:
      --*(_DWORD *)(v10 + 128);
    else
      v26 = v16;
LABEL_123:
    *v26 = v12;
    *((_DWORD *)v26 + 2) = v13;
    ++*(_DWORD *)(v10 + 124);
LABEL_75:
    if ( !*(_BYTE *)(v10 + 32)
      || (v62 = *(_QWORD *)(v10 + 136)) != 0 && v13 < *(_DWORD *)(v62 - 4) && *(_DWORD *)(v62 + 4 * v11) == 2 )
    {
      if ( v157 )
      {
LABEL_80:
        v63 = v190;
        if ( v190 )
        {
          LODWORD(v193) = 0;
          LODWORD(v192) = 1;
          if ( (*((_BYTE *)v12 + 30) & 1) != 0 )
            goto LABEL_96;
          v67 = v12 + 8;
          v68 = 2LL * v12[6];
          if ( !(v68 * 4) )
            goto LABEL_96;
          v69 = &v12[v68 + 8];
          do
          {
            v70 = *(_QWORD *)v67;
            v71 = *(_WORD *)(*(_QWORD *)v67 + 4LL);
            if ( v71 == 1 )
            {
              LODWORD(v192) = v192 + 1;
              if ( *(_DWORD *)(*(_QWORD *)(v10 + 64) + 4LL * *(unsigned int *)(v70 + 16)) == -1 )
                LODWORD(v193) = (_DWORD)v193 + 1;
            }
            else if ( !v71 )
            {
              LODWORD(v192) = v192 + 1;
              if ( (*(_BYTE *)(v70 + 30) & 1) == 0 )
              {
                v97 = (__int64 *)(v70 + 32);
                v98 = *(unsigned int *)(v70 + 24);
                v99 = &v97[v98];
                if ( v98 * 8 )
                {
                  v100 = v67;
                  v101 = v13;
                  do
                  {
                    v102 = *v97;
                    v103 = *(_WORD *)(*v97 + 4);
                    if ( v103 == 1 )
                    {
                      LODWORD(v192) = v192 + 1;
                      if ( *(_DWORD *)(*(_QWORD *)(v10 + 64) + 4LL * *(unsigned int *)(v102 + 16)) == -1 )
                        LODWORD(v193) = (_DWORD)v193 + 1;
                    }
                    else if ( !v103 )
                    {
                      LODWORD(v192) = v192 + 1;
                      if ( (*(_BYTE *)(v102 + 30) & 1) == 0 )
                      {
                        v115 = (__int64 *)(v102 + 32);
                        v116 = *(unsigned int *)(v102 + 24);
                        v117 = &v115[v116];
                        if ( v116 * 8 )
                        {
                          v169 = v100;
                          v118 = v10;
                          v119 = v99;
                          v178 = v97;
                          v120 = v69;
                          do
                          {
                            v121 = *v115;
                            v122 = *(_WORD *)(*v115 + 4);
                            if ( v122 == 1 )
                            {
                              LODWORD(v192) = v192 + 1;
                              if ( *(_DWORD *)(*(_QWORD *)(v118 + 64) + 4LL * *(unsigned int *)(v121 + 16)) == -1 )
                                LODWORD(v193) = (_DWORD)v193 + 1;
                            }
                            else if ( !v122 )
                            {
                              v184 = v9;
                              sub_B9A160(v118, v121, &v192, &v193);
                              v9 = v184;
                            }
                            ++v115;
                          }
                          while ( v117 != v115 );
                          v69 = v120;
                          v99 = v119;
                          v97 = v178;
                          v10 = v118;
                          v100 = v169;
                        }
                      }
                    }
                    ++v97;
                  }
                  while ( v99 != v97 );
                  v13 = v101;
                  v67 = v100;
                }
              }
            }
            v67 += 2;
          }
          while ( v69 != v67 );
          if ( !(_DWORD)v193 || v189 < (unsigned int)v192 || (_DWORD)v192 == v189 && (unsigned int)v193 < v63 )
          {
LABEL_96:
            v164 = v9;
            v159 = v13;
            sub_B9C320((_QWORD *)(v10 + 56), &v188);
            v72 = v159;
            v157 = v12;
            v9 = v164;
            v189 = v192;
            v188 = v72;
            v190 = (unsigned int)v193;
          }
          else
          {
            v163 = v9;
            sub_B9C320((_QWORD *)(v10 + 56), &v191);
            v9 = v163;
          }
        }
        else
        {
          v64 = *(_QWORD **)(v10 + 56);
          if ( v64 )
          {
            v65 = *((unsigned int *)v64 - 1);
            if ( (_DWORD)v65 == *((_DWORD *)v64 - 2) )
            {
              v104 = (unsigned int)(3 * v65 + 1) >> 1;
              v105 = 4 * v104 + 8;
              if ( 4 * (int)v65 + 8 >= v105 || (unsigned int)v65 >= v104 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_151CF2((char **)&v193);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v193);
                sub_233E40((__int64)&v193);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v177 = v9;
              v168 = v13;
              v106 = (unsigned int *)sub_186B300(v64 - 1, v105);
              v13 = v168;
              v9 = v177;
              v64 = v106 + 2;
              *v106 = v104;
              v107 = v106[1];
              *(_QWORD *)(v10 + 56) = v64;
              v66 = (unsigned int *)v64 + v107;
            }
            else
            {
              v66 = (unsigned int *)v64 + v65;
            }
          }
          else
          {
            v179 = v9;
            v170 = v13;
            v149 = (_QWORD *)sub_186B270(0x10u);
            v13 = v170;
            v9 = v179;
            *v149 = 2;
            v64 = v149 + 1;
            *(_QWORD *)(v10 + 56) = v149 + 1;
            v66 = (unsigned int *)(v149 + 1);
          }
          *v66 = v13;
          ++*((_DWORD *)v64 - 1);
        }
        goto LABEL_34;
      }
    }
    else
    {
      v176 = v9;
      v167 = v13;
      v89 = sub_B9B270(*(_QWORD **)(v10 + 24), *((int **)v12 + 2));
      v90 = (_DWORD *)sub_180C100(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL), 32);
      *v90 = 23;
      v90[4] = v167;
      *((_QWORD *)v90 + 3) = 1LL << v89;
      *((_QWORD *)v90 + 1) = 0;
      v193 = v90;
      sub_B9B7D0(v172, &v193);
      LODWORD(v193) = 2;
      sub_B9B6D0((_QWORD *)(v10 + 136), v167, (unsigned int *)&v193);
      v9 = v176;
      v13 = v167;
      if ( v157 )
        goto LABEL_80;
    }
    v188 = v13;
    v190 = 0;
    v189 = 1;
    if ( (*((_BYTE *)v12 + 30) & 1) == 0 )
    {
      v91 = v12 + 8;
      v92 = 2LL * v12[6];
      v93 = &v12[v92 + 8];
      if ( v92 * 4 )
      {
        v94 = v9;
        do
        {
          v95 = *(_QWORD *)v91;
          v96 = *(_WORD *)(*(_QWORD *)v91 + 4LL);
          if ( v96 == 1 )
          {
            v112 = *(unsigned int *)(v95 + 16);
            v113 = *(_QWORD *)(v10 + 64);
            ++v189;
            if ( *(_DWORD *)(v113 + 4 * v112) == -1 )
              ++v190;
          }
          else if ( !v96 )
          {
            ++v189;
            if ( (*(_BYTE *)(v95 + 30) & 1) == 0 )
            {
              v124 = (__int64 *)(v95 + 32);
              v125 = *(unsigned int *)(v95 + 24);
              v126 = &v124[v125];
              if ( v125 * 8 )
              {
                v127 = *v124;
                v128 = *(_WORD *)(*v124 + 4);
                if ( v128 != 1 )
                {
LABEL_170:
                  if ( !v128 )
                    sub_B9A160(v10, v127, &v189, &v190);
                  goto LABEL_172;
                }
                while ( 1 )
                {
                  v129 = *(unsigned int *)(v127 + 16);
                  v130 = *(_QWORD *)(v10 + 64);
                  ++v189;
                  if ( *(_DWORD *)(v130 + 4 * v129) == -1 )
                    ++v190;
LABEL_172:
                  if ( v126 == ++v124 )
                    break;
                  v127 = *v124;
                  v128 = *(_WORD *)(*v124 + 4);
                  if ( v128 != 1 )
                    goto LABEL_170;
                }
              }
            }
          }
          v91 += 2;
        }
        while ( v93 != v91 );
        v9 = v94;
      }
    }
    v157 = v12;
LABEL_34:
    ++v9;
  }
  while ( v150 != v9 );
  v7 = (_QWORD *)v10;
  if ( !v157 )
    goto LABEL_62;
  v171 = *((_QWORD *)v157 + 2);
  v161 = v157[6];
  if ( !(8LL * v161) )
  {
LABEL_177:
    v193 = src;
    v194 = 0x1000000000LL;
    if ( (_WORD)v161 )
    {
      v131 = v157;
      v132 = src;
      v133 = 16;
      v134 = 0;
      while ( 1 )
      {
        v135 = *(_DWORD *)(v7[8] + 4LL * *(unsigned int *)(*((_QWORD *)v131 + 4) + 16LL));
        if ( v134 >= v133 )
        {
          v155 = v7;
          v136 = 2 * v133;
          v137 = sub_186B270(4 * v136);
          v134 = v194;
          v138 = (char *)v193;
          v132 = (_BYTE *)v137;
          v7 = v155;
          if ( (_DWORD)v194 )
          {
            if ( (unsigned int)(v194 - 1) <= 2 || (unsigned __int64)(v137 - ((_QWORD)v193 + 4)) <= 8 )
            {
              v147 = 0;
              v148 = 4LL * (unsigned int)v194;
              do
              {
                *(_DWORD *)&v132[v147] = *(_DWORD *)&v138[v147];
                v147 += 4;
              }
              while ( v147 != v148 );
            }
            else
            {
              v139 = 0;
              v140 = 16LL * ((unsigned int)v194 >> 2);
              do
              {
                *(__m128i *)&v132[v139] = _mm_loadu_si128((const __m128i *)&v138[v139]);
                v139 += 16;
              }
              while ( v139 != v140 );
              v141 = v134 & 0xFFFFFFFC;
              if ( (v134 & 3) != 0 )
              {
                *(_DWORD *)&v132[4 * v141] = *(_DWORD *)&v138[4 * v141];
                v142 = v141 + 1;
                if ( (unsigned int)v142 < v134 )
                {
                  v143 = v141 + 2;
                  *(_DWORD *)&v132[4 * v142] = *(_DWORD *)&v138[4 * v142];
                  if ( (unsigned int)v143 < v134 )
                    *(_DWORD *)&v132[4 * v143] = *(_DWORD *)&v138[4 * v143];
                }
              }
            }
          }
          if ( v138 && v138 != src )
          {
            sub_186B220(v138);
            v134 = v194;
            v7 = v155;
          }
          v193 = v132;
          HIDWORD(v194) = v136;
        }
        v131 += 2;
        *(_DWORD *)&v132[4 * v134] = v135;
        v134 = v194 + 1;
        LODWORD(v194) = v194 + 1;
        if ( v131 == &v157[2 * (unsigned __int16)v161] )
          break;
        v133 = HIDWORD(v194);
      }
      v144 = 4 * (unsigned int)(unsigned __int16)v161 + 40;
    }
    else
    {
      v144 = 40;
      v132 = src;
    }
    v156 = v7;
    v145 = v7 + 21;
    v52 = v188;
    v146 = sub_180C100(*(_QWORD *)(v7[2] + 16LL), v144);
    *(_DWORD *)v146 = 37;
    *(_QWORD *)(v146 + 8) = 0;
    *(_DWORD *)(v146 + 16) = v52;
    *(_QWORD *)(v146 + 24) = v171;
    *(_WORD *)(v146 + 32) = v161;
    memcpy((void *)(v146 + 36), v132, 4LL * (unsigned __int16)v161);
    v192 = v146;
    sub_B9B7D0(v145, &v192);
    v58 = v156;
    if ( v193 != src && v193 )
    {
      sub_186B220(v193);
      v58 = v156;
    }
    goto LABEL_61;
  }
  v31 = v157 + 8;
  v32 = (__int64 *)(v157 + 8);
  while ( *(_WORD *)(*(_QWORD *)v31 + 4LL) == 1
       && *(_DWORD *)(*(_QWORD *)(v10 + 64) + 4LL * *(unsigned int *)(*(_QWORD *)v31 + 16LL)) != -1 )
  {
    v31 += 2;
    if ( &v157[2 * v161 + 8] == v31 )
      goto LABEL_177;
  }
  v33 = *(_QWORD *)(v10 + 88);
  v34 = (unsigned __int16)v161;
  v35 = *(_DWORD *)(v33 + 24);
  v36 = v35 + 1;
  *(_DWORD *)(v33 + 24) = v35 + (unsigned __int16)v161;
  if ( !(_WORD)v161 )
    goto LABEL_58;
  v158 = v35 + 1 + (unsigned __int16)v161;
  v173 = v35;
  v37 = v32;
  v38 = v36;
  while ( 2 )
  {
    v39 = *(_QWORD **)(v10 + 40);
    v40 = *v37;
    v41 = v38 - 1;
    if ( !v39 )
    {
      if ( v38 )
      {
        v42 = 0;
        v114 = (_QWORD *)sub_186B270(0x18u);
        v151 = v40;
        v39 = v114 + 1;
        *v114 = 2;
        *(_QWORD *)(v10 + 40) = v114 + 1;
LABEL_50:
        while ( 1 )
        {
          v46 = *((_DWORD *)v39 - 2);
          if ( v46 >= v38 )
            break;
          v43 = (3 * v46 + 1) >> 1;
          v44 = 8 * v43 + 8;
          if ( 8 * v46 + 8 >= (unsigned int)v44 || v46 >= v43 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_151CF2((char **)&v193);
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v193);
            sub_233E40((__int64)&v193);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v45 = (unsigned int *)sub_186B300(v39 - 1, v44);
          v39 = v45 + 2;
          *v45 = v43;
          *(_QWORD *)(v10 + 40) = v45 + 2;
        }
        *((_DWORD *)v39 - 1) = v38;
        v40 = v151;
        v47 = 8LL * v42;
        v48 = 8LL * v38;
        if ( v47 != v48 )
        {
          v152 = v39;
          memset(&v39[(unsigned __int64)v47 / 8], 0, v48 - v47);
          v39 = v152;
        }
      }
LABEL_53:
      v49 = *(_QWORD **)(v10 + 56);
      v39[v41] = v40;
      if ( !v49 )
        goto LABEL_166;
      goto LABEL_54;
    }
    v42 = *((_DWORD *)v39 - 1);
    if ( v41 < v42 )
      goto LABEL_53;
    if ( v42 < v38 )
    {
      v151 = *v37;
      goto LABEL_50;
    }
    v49 = *(_QWORD **)(v10 + 56);
    *((_DWORD *)v39 - 1) = v38;
    v39[v41] = v40;
    if ( !v49 )
    {
LABEL_166:
      v123 = (_QWORD *)sub_186B270(0x10u);
      *v123 = 2;
      v49 = v123 + 1;
      *(_QWORD *)(v10 + 56) = v123 + 1;
      v51 = (unsigned int *)(v123 + 1);
      goto LABEL_56;
    }
LABEL_54:
    v50 = *((unsigned int *)v49 - 1);
    if ( (_DWORD)v50 == *((_DWORD *)v49 - 2) )
    {
      v108 = (unsigned int)(3 * v50 + 1) >> 1;
      v109 = 4 * v108 + 8;
      if ( 4 * (int)v50 + 8 >= v109 || (unsigned int)v50 >= v108 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_151CF2((char **)&v193);
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, &v193);
        sub_233E40((__int64)&v193);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v110 = (unsigned int *)sub_186B300(v49 - 1, v109);
      v49 = v110 + 2;
      *v110 = v108;
      v111 = v110[1];
      *(_QWORD *)(v10 + 56) = v49;
      v51 = (unsigned int *)v49 + v111;
    }
    else
    {
      v51 = (unsigned int *)v49 + v50;
    }
LABEL_56:
    *v51 = v41;
    ++v37;
    ++v38;
    ++*((_DWORD *)v49 - 1);
    if ( v158 != v38 )
      continue;
    break;
  }
  v35 = v173;
  v34 = (unsigned __int16)v161;
  v7 = (_QWORD *)v10;
LABEL_58:
  v52 = v188;
  v53 = v34 + 6;
  v54 = v7 + 21;
  v153 = v7;
  v55 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v188), _mm_cvtsi32_si128(v35)).m128i_u64[0];
  if ( (unsigned __int16)v161 >= 7u )
    v53 = 13;
  v56 = v55;
  v57 = (char *)sub_180C100(*(_QWORD *)(v7[2] + 16LL), 40);
  *((_WORD *)v57 + 12) = v161;
  *((_QWORD *)v57 + 2) = v171;
  *(_DWORD *)v57 = v53;
  *((_QWORD *)v57 + 1) = 0;
  *(_QWORD *)(v57 + 28) = v56;
  v193 = v57;
  sub_B9B7D0(v54, &v193);
  v58 = v153;
  ++*((_DWORD *)v153 + 24);
LABEL_61:
  v154 = v58;
  LODWORD(v193) = 0;
  sub_B9B6D0(v58 + 17, v52, (unsigned int *)&v193);
  v7 = v154;
LABEL_62:
  v9 = (unsigned int *)v7[6];
  result = v7[7];
LABEL_63:
  v7[6] = result;
  v7[7] = v9;
  return result;
}

