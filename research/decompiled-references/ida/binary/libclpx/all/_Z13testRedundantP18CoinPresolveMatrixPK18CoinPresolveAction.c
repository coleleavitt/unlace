const CoinPresolveAction *__fastcall testRedundant(CoinPresolveMatrix *a1, const CoinPresolveAction *a2)
{
  unsigned __int64 v2; // rbp
  int v3; // r14d
  unsigned __int64 v4; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  _QWORD *v9; // rsi
  _QWORD *v10; // rbp
  bool v11; // di
  int v12; // r14d
  _QWORD *v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  _QWORD *v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // xmm0_8
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  unsigned int v26; // r9d
  __int64 v27; // rcx
  __int64 v28; // r13
  __int64 v29; // rdi
  _BYTE *v30; // r13
  __int64 v31; // rdi
  __int64 v32; // r13
  double v33; // xmm7_8
  double *v34; // r15
  __int64 v35; // rdx
  int v36; // r10d
  int v37; // r11d
  int v38; // r9d
  __int64 v39; // rsi
  double v40; // xmm3_8
  __int64 v41; // rax
  double v42; // xmm4_8
  double v43; // xmm1_8
  double v44; // xmm1_8
  double v45; // xmm0_8
  __int64 v46; // rcx
  double v47; // xmm1_8
  double v48; // xmm1_8
  double v49; // xmm7_8
  double v50; // xmm3_8
  double v51; // xmm4_8
  double v52; // xmm0_8
  double v53; // xmm9_8
  __int64 v54; // r13
  double v55; // xmm1_8
  double v56; // xmm10_8
  double *v57; // rcx
  int *v58; // rsi
  __int64 v59; // r13
  __int64 v60; // rdi
  double v61; // xmm0_8
  double *v62; // r10
  double *v63; // rax
  double v64; // xmm6_8
  double v65; // xmm5_8
  double v66; // xmm1_8
  double v67; // xmm8_8
  int v68; // r11d
  int *v69; // r10
  __int64 v70; // r12
  _BYTE *v71; // r11
  double v72; // xmm12_8
  double v73; // xmm8_8
  int v74; // r10d
  bool v75; // sf
  int v76; // edi
  int *v77; // rax
  __int64 v78; // r10
  _BYTE *v79; // rdi
  double v80; // xmm0_8
  double v81; // xmm4_8
  double v82; // xmm8_8
  double v83; // xmm1_8
  int v84; // r11d
  int *v85; // rax
  __int64 v86; // r12
  _BYTE *v87; // r11
  double v88; // xmm4_8
  double v89; // xmm8_8
  double v90; // xmm1_8
  int v91; // r10d
  int v92; // edi
  int *v93; // rax
  __int64 v94; // r10
  _BYTE *v95; // rdi
  double v96; // xmm0_8
  CoinMessageHandler *v97; // rax
  CoinMessageHandler *v98; // rax
  CoinMessageHandler *v99; // rax
  double v100; // xmm0_8
  __int64 v101; // rax
  int v102; // eax
  __int64 i; // rdi
  __int64 v104; // rax
  int v105; // ecx
  double v106; // xmm2_8
  double v107; // xmm10_8
  __int64 v108; // r10
  __int64 v109; // r9
  const CoinPresolveAction *v110; // rax
  int v111; // esi
  double v112; // xmm1_8
  double v113; // xmm1_8
  double v114; // xmm0_8
  __int64 v115; // rdx
  double v116; // xmm1_8
  double v117; // xmm1_8
  double v118; // xmm1_8
  double v119; // xmm2_8
  const CoinPresolveAction *v120; // r12
  CoinPresolveMatrix *v121; // r13
  __int64 v122; // rcx
  __int64 v123; // r11
  const CoinPresolveAction *v124; // r8
  __int64 v125; // r9
  CoinPresolveMatrix *v126; // rsi
  __int64 v127; // rdi
  __m128d v128; // xmm11
  __int64 v129; // rax
  int *v130; // rdx
  __m128d v131; // xmm8
  double v132; // xmm4_8
  double v133; // xmm5_8
  double v134; // xmm0_8
  __m128d v135; // xmm1
  __m128d v136; // xmm6
  __m128d v137; // xmm3
  __m128d v138; // xmm1
  __m128d v139; // xmm2
  __m128d v140; // xmm0
  __int64 v141; // r15
  _BYTE *v142; // r15
  __int64 v143; // r14
  __int64 v144; // r15
  _BYTE *v145; // r15
  __int64 v146; // r14
  double v148; // xmm4_8
  double v149; // xmm0_8
  __int64 v150; // r15
  int v151; // r14d
  __m128d v152; // xmm6
  _BYTE *v153; // r15
  __int64 v154; // xmm1_8
  __int64 v155; // rdx
  int v156; // [rsp+10h] [rbp-F8h]
  int v157; // [rsp+14h] [rbp-F4h]
  __int64 v158; // [rsp+18h] [rbp-F0h]
  __int64 v159; // [rsp+20h] [rbp-E8h]
  __int64 v160; // [rsp+28h] [rbp-E0h]
  __int64 v161; // [rsp+30h] [rbp-D8h]
  double v162; // [rsp+38h] [rbp-D0h]
  __int64 v163; // [rsp+40h] [rbp-C8h]
  __int64 v164; // [rsp+48h] [rbp-C0h]
  int v165; // [rsp+50h] [rbp-B8h]
  int v166; // [rsp+54h] [rbp-B4h]
  double v167; // [rsp+58h] [rbp-B0h]
  __int64 v168; // [rsp+60h] [rbp-A8h]
  __int64 v169; // [rsp+68h] [rbp-A0h]
  const CoinPresolveAction *v171; // [rsp+78h] [rbp-90h]
  int v172; // [rsp+80h] [rbp-88h]
  int v173; // [rsp+84h] [rbp-84h]
  CoinMessageHandler *v174; // [rsp+88h] [rbp-80h]
  double v175; // [rsp+90h] [rbp-78h]
  int v176; // [rsp+98h] [rbp-70h]
  unsigned int v177; // [rsp+9Ch] [rbp-6Ch]
  CoinPresolveMatrix *v178; // [rsp+A0h] [rbp-68h]
  _BYTE v180[88]; // [rsp+B0h] [rbp-58h] BYREF

  v158 = *((_QWORD *)a1 + 35);
  v166 = *((_DWORD *)a1 + 1);
  v161 = *((_QWORD *)a1 + 36);
  v2 = *(int *)a1;
  v176 = *(_DWORD *)a1;
  v159 = *((_QWORD *)a1 + 37);
  v160 = *((_QWORD *)a1 + 38);
  v168 = *((_QWORD *)a1 + 5);
  v164 = *((_QWORD *)a1 + 7);
  v169 = *((_QWORD *)a1 + 6);
  v171 = *((const CoinPresolveAction **)a1 + 13);
  v163 = *((_QWORD *)a1 + 14);
  if ( v2 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v3 = *(_DWORD *)a1;
  v4 = 8 * v2;
  v6 = (_QWORD *)operator new[](v4);
  v7 = operator new[](v4);
  v9 = *((_QWORD **)a1 + 11);
  v10 = (_QWORD *)v7;
  v11 = v3 == 0;
  if ( v9 != v6 && v3 )
  {
    v12 = v3 >> 3;
    if ( v12 <= 0 )
    {
      v17 = v6;
    }
    else
    {
      v13 = v6;
      v14 = *((__int64 **)a1 + 11);
      v8 = (unsigned int)(v12 - 1);
      do
      {
        v15 = *v14;
        v14 += 8;
        v13 += 8;
        *(v13 - 8) = v15;
        *(v13 - 7) = *(v14 - 7);
        *(v13 - 6) = *(v14 - 6);
        *(v13 - 5) = *(v14 - 5);
        *(v13 - 4) = *(v14 - 4);
        *(v13 - 3) = *(v14 - 3);
        *(v13 - 2) = *(v14 - 2);
        *(v13 - 1) = *(v14 - 1);
      }
      while ( v14 != &v9[8 * v8 + 8] );
      v16 = ((int)v8 + 1LL) << 6;
      v9 = (_QWORD *)((char *)v9 + v16);
      v17 = (_QWORD *)((char *)v6 + v16);
    }
    switch ( v176 % 8 )
    {
      case 1:
        goto LABEL_15;
      case 2:
        goto LABEL_14;
      case 3:
        goto LABEL_13;
      case 4:
        goto LABEL_12;
      case 5:
        goto LABEL_11;
      case 6:
        goto LABEL_10;
      case 7:
        v17[6] = v9[6];
LABEL_10:
        v17[5] = v9[5];
LABEL_11:
        v17[4] = v9[4];
LABEL_12:
        v17[3] = v9[3];
LABEL_13:
        v17[2] = v9[2];
LABEL_14:
        v17[1] = v9[1];
LABEL_15:
        *v17 = *v9;
        break;
      default:
        break;
    }
  }
  v18 = *((_QWORD **)a1 + 12);
  if ( v18 != v10 && !v11 )
  {
    if ( v176 >> 3 <= 0 )
    {
      v23 = v10;
    }
    else
    {
      v19 = v10;
      v20 = *((__int64 **)a1 + 12);
      do
      {
        v21 = *v20;
        v20 += 8;
        v19 += 8;
        *(v19 - 8) = v21;
        *(v19 - 7) = *(v20 - 7);
        *(v19 - 6) = *(v20 - 6);
        *(v19 - 5) = *(v20 - 5);
        *(v19 - 4) = *(v20 - 4);
        *(v19 - 3) = *(v20 - 3);
        *(v19 - 2) = *(v20 - 2);
        *(v19 - 1) = *(v20 - 1);
      }
      while ( v20 != &v18[8 * (unsigned int)((v176 >> 3) - 1) + 8] );
      v22 = ((v176 >> 3) - 1 + 1LL) << 6;
      v18 = (_QWORD *)((char *)v18 + v22);
      v23 = (_QWORD *)((char *)v10 + v22);
    }
    switch ( v176 % 8 )
    {
      case 1:
        goto LABEL_29;
      case 2:
        goto LABEL_28;
      case 3:
        goto LABEL_27;
      case 4:
        goto LABEL_26;
      case 5:
        goto LABEL_25;
      case 6:
        goto LABEL_24;
      case 7:
        v23[6] = v18[6];
LABEL_24:
        v23[5] = v18[5];
LABEL_25:
        v23[4] = v18[4];
LABEL_26:
        v23[3] = v18[3];
LABEL_27:
        v23[2] = v18[2];
LABEL_28:
        v23[1] = v18[1];
LABEL_29:
        *v23 = *v18;
        break;
      default:
        break;
    }
  }
  v24 = *((_QWORD *)a1 + 56);
  v175 = *((double *)a1 + 42);
  v178 = (CoinPresolveMatrix *)(v24 + 4LL * v166);
  v162 = v175 * 100.0;
  v172 = *((_DWORD *)a1 + 109) & 0x4000;
  if ( v166 <= 0 )
  {
    v177 = 0;
    v33 = v175 * 100.0;
  }
  else
  {
    v25 = 0;
    v26 = 0;
    v27 = (unsigned int)(v166 - 1) + 1LL;
    v8 = (unsigned __int64)v171;
    do
    {
      while ( (*((double *)v171 + v25) > -1.0e15 || *(double *)(v163 + 8 * v25) < 1.0e15)
           && *(int *)(v161 + 4 * v25) > 0 )
      {
        *(_BYTE *)(v24 + v25++) = -1;
        if ( v27 == v25 )
          goto LABEL_40;
      }
      *(_BYTE *)(v24 + v25) = 1;
      if ( *(int *)(v161 + 4 * v25) > 0 )
      {
        v28 = *((_QWORD *)a1 + 50);
        v29 = (int)v26++;
        *((_DWORD *)v178 + v29) = v25;
        v30 = (_BYTE *)(v25 + v28);
        if ( (*v30 & 1) == 0 )
        {
          *v30 |= 1u;
          v31 = *((int *)a1 + 108);
          v32 = *((_QWORD *)a1 + 53);
          *((_DWORD *)a1 + 108) = v31 + 1;
          *(_DWORD *)(v32 + 4 * v31) = v25;
        }
      }
      ++v25;
    }
    while ( v27 != v25 );
LABEL_40:
    v33 = v175 * 100.0;
    v177 = v26;
  }
  v157 = -1;
  v173 = -1;
  v167 = -v33;
LABEL_42:
  ++v157;
  if ( v166 > 0 )
  {
    v34 = (double *)v171;
    v35 = 0;
    v156 = 0;
    v165 = 0;
LABEL_45:
    if ( *(_BYTE *)(v24 + v35) != 0xFF )
      goto LABEL_44;
    v36 = *(_DWORD *)(v158 + 4 * v35);
    v37 = v36 + *(_DWORD *)(v161 + 4 * v35);
    if ( v36 >= v37 )
    {
      v38 = 0;
      v51 = 0.0;
      v8 = 0;
      v52 = 0.0;
      v50 = 0.0;
      v49 = 0.0;
      goto LABEL_60;
    }
    v38 = 0;
    v8 = 0;
    v39 = (unsigned int)(*(_DWORD *)(v161 + 4 * v35) - 1) + 1LL;
    v40 = 0.0;
    v41 = 0;
    v42 = 0.0;
    while ( 1 )
    {
      while ( 1 )
      {
        v45 = *(double *)(v159 + 8LL * v36 + 8 * v41);
        v46 = *(int *)(v160 + 4LL * v36 + 4 * v41);
        if ( v45 > 0.0 )
        {
          v43 = *(double *)&v10[v46];
          if ( v43 >= 1.0e15 )
            v8 = (unsigned int)(v8 + 1);
          else
            v42 = v42 + v43 * v45;
          v44 = *(double *)&v6[v46];
          if ( v44 <= -1.0e15 )
            ++v38;
          else
            v40 = v40 + v45 * v44;
          goto LABEL_52;
        }
        if ( v45 < 0.0 )
          break;
LABEL_52:
        if ( v39 == ++v41 )
          goto LABEL_59;
      }
      v47 = *(double *)&v10[v46];
      if ( v47 >= 1.0e15 )
        ++v38;
      else
        v40 = v40 + v47 * v45;
      v48 = *(double *)&v6[v46];
      if ( v48 <= -1.0e15 )
      {
        v8 = (unsigned int)(v8 + 1);
        goto LABEL_52;
      }
      ++v41;
      v42 = v42 + v45 * v48;
      if ( v39 == v41 )
      {
LABEL_59:
        v49 = fabs(v42) * 0.00000001 + v42;
        v50 = v40 - fabs(v40) * 0.00000001;
        v51 = v50 - (double)v38 * 1.0e31;
        v52 = (double)(int)v8 * 1.0e31 + v49;
LABEL_60:
        *(_BYTE *)(v24 + v35) = -2;
        v53 = *v34;
        v54 = 8 * v35;
        v55 = *v34 - v162;
        if ( v55 <= v52 )
        {
          v56 = *(double *)(v163 + 8 * v35);
          if ( v51 <= v162 + v56 )
          {
            if ( v175 + v56 >= v52 && v51 >= v53 - v175 )
              goto LABEL_44;
            if ( v53 > v49 && v49 > v55 )
              v49 = *v34;
            if ( v50 > v56 && v162 + v56 > v50 )
              v50 = *(double *)(v163 + 8 * v35);
            if ( v36 >= v37 )
            {
LABEL_44:
              ++v35;
              ++v34;
              if ( (unsigned int)(v166 - 1) + 1LL == v35 )
                goto LABEL_145;
              goto LABEL_45;
            }
            v57 = (double *)(v159 + 8LL * v36);
            v58 = (int *)(v160 + 4LL * v36);
            v59 = v159 + 8 * ((unsigned int)(v37 - v36 - 1) + (__int64)v36) + 8;
            while ( 2 )
            {
              v60 = *v58;
              v61 = *v57;
              v62 = (double *)&v6[v60];
              v63 = (double *)&v10[v60];
              v64 = *v62;
              v65 = *v63;
              if ( *v57 > 0.0 )
              {
                if ( v53 > -1.0e15 )
                {
                  if ( (_DWORD)v8 )
                  {
                    if ( (_DWORD)v8 == 1 && v65 >= 1.0e15 )
                    {
                      v66 = (v53 - v49) / v61;
                      goto LABEL_76;
                    }
                  }
                  else
                  {
                    v66 = (v53 - v49) / v61 + v65;
LABEL_76:
                    v67 = fabs(v49);
                    if ( v67 > 100000000.0 )
                      v66 = v66 - v67 * 1.0e-12;
                    if ( v66 > v64 + 1.0e-12 && v66 > -1.0e15 )
                    {
                      if ( v167 > v65 - v66 )
                        goto LABEL_227;
                      *v62 = v66;
                      *(_BYTE *)(v24 + v35) = 1;
                      ++v156;
                      v68 = *(_DWORD *)(v168 + 4 * v60);
                      if ( v68 < v68 + *(_DWORD *)(v169 + 4 * v60) )
                      {
                        v69 = (int *)(v164 + 4LL * v68);
                        v70 = v164 + 4 * ((unsigned int)(*(_DWORD *)(v169 + 4 * v60) - 1) + (__int64)v68) + 4;
                        do
                        {
                          v71 = (_BYTE *)(v24 + *v69);
                          if ( *v71 == 0xFE )
                            *v71 = -1;
                          ++v69;
                        }
                        while ( (int *)v70 != v69 );
                      }
                      if ( v64 > -1.0e15 )
                      {
                        v81 = v66 - v64;
                        v64 = v66;
                        v50 = v50 + v81 * v61;
                      }
                      else
                      {
                        v64 = v66;
                        --v38;
                        v50 = v50 + v66 * v61;
                      }
                    }
                  }
                }
                if ( v56 < 1.0e15 )
                {
                  if ( !v38 )
                  {
                    v72 = fabs(v50);
                    v73 = (v56 - v50) / v61 + v64;
                    if ( v72 > 100000000.0 )
                      goto LABEL_91;
                    goto LABEL_92;
                  }
                  if ( v38 == 1 && v64 <= -1.0e15 )
                  {
                    v72 = fabs(v50);
                    v73 = (v56 - v50) / v61;
                    if ( v72 > 100000000.0 )
LABEL_91:
                      v73 = v73 + v72 * 1.0e-12;
LABEL_92:
                    if ( v65 - 1.0e-12 > v73 && v73 < 1.0e15 )
                    {
                      *v63 = v73;
                      if ( v167 > v73 - v64 )
                        goto LABEL_227;
                      *(_BYTE *)(v24 + v35) = 1;
                      ++v156;
                      v74 = *(_DWORD *)(v168 + 4 * v60);
                      v75 = -*(_DWORD *)(v169 + 4 * v60) < 0;
                      v76 = v74 + *(_DWORD *)(v169 + 4 * v60);
                      if ( v75 != __OFSUB__(v74, v76) )
                      {
                        v77 = (int *)(v164 + 4LL * v74);
                        v78 = v164 + 4 * ((unsigned int)(v76 - v74 - 1) + (__int64)v74) + 4;
                        do
                        {
                          v79 = (_BYTE *)(v24 + *v77);
                          if ( *v79 == 0xFE )
                            *v79 = -1;
                          ++v77;
                        }
                        while ( (int *)v78 != v77 );
                      }
                      if ( v65 < 1.0e15 )
                      {
                        v80 = v61 * (v73 - v65);
                      }
                      else
                      {
                        v80 = v61 * v73;
                        v8 = (unsigned int)(v8 - 1);
                      }
                      v49 = v49 + v80;
                    }
                  }
                }
LABEL_103:
                ++v57;
                ++v58;
                if ( (double *)v59 == v57 )
                  goto LABEL_44;
                continue;
              }
              break;
            }
            if ( v53 > -1.0e15 )
            {
              if ( (_DWORD)v8 )
              {
                if ( (_DWORD)v8 == 1 && v64 <= -1.0e15 )
                {
                  v82 = (v53 - v49) / v61;
                  goto LABEL_112;
                }
              }
              else
              {
                v82 = (v53 - v49) / v61 + v64;
LABEL_112:
                v83 = fabs(v49);
                if ( v83 > 100000000.0 )
                  v82 = v82 + v83 * 1.0e-12;
                if ( v65 - 1.0e-12 > v82 && v82 < 1.0e15 )
                {
                  *v63 = v82;
                  if ( v167 > v82 - v64 )
                    goto LABEL_227;
                  *(_BYTE *)(v24 + v35) = 1;
                  ++v156;
                  v84 = *(_DWORD *)(v168 + 4 * v60);
                  if ( v84 < v84 + *(_DWORD *)(v169 + 4 * v60) )
                  {
                    v85 = (int *)(v164 + 4LL * v84);
                    v86 = v164 + 4 * ((unsigned int)(*(_DWORD *)(v169 + 4 * v60) - 1) + (__int64)v84) + 4;
                    do
                    {
                      v87 = (_BYTE *)(v24 + *v85);
                      if ( *v87 == 0xFE )
                        *v87 = -1;
                      ++v85;
                    }
                    while ( (int *)v86 != v85 );
                  }
                  if ( v65 < 1.0e15 )
                  {
                    v148 = v82 - v65;
                    v65 = v82;
                    v88 = v148 * v61;
                  }
                  else
                  {
                    v88 = v82 * v61;
                    v65 = v82;
                    --v38;
                  }
                  v50 = v50 + v88;
                }
              }
            }
            if ( v56 >= 1.0e15 )
              goto LABEL_103;
            if ( v38 )
            {
              if ( v38 != 1 || v65 < 1.0e15 )
                goto LABEL_103;
              v89 = fabs(v50);
              v90 = (v56 - v50) / v61;
              if ( v89 > 100000000.0 )
LABEL_128:
                v90 = v90 - v89 * 1.0e-12;
            }
            else
            {
              v89 = fabs(v50);
              v90 = (v56 - v50) / v61 + v65;
              if ( v89 > 100000000.0 )
                goto LABEL_128;
            }
            if ( v90 > v64 + 1.0e-12 && v90 > -1.0e15 )
            {
              *v62 = v90;
              if ( v167 > v65 - v90 )
              {
LABEL_227:
                ++v165;
                goto LABEL_44;
              }
              *(_BYTE *)(v24 + v35) = 1;
              ++v156;
              v91 = *(_DWORD *)(v168 + 4 * v60);
              v75 = -*(_DWORD *)(v169 + 4 * v60) < 0;
              v92 = v91 + *(_DWORD *)(v169 + 4 * v60);
              if ( v75 != __OFSUB__(v91, v92) )
              {
                v93 = (int *)(v164 + 4LL * v91);
                v94 = v164 + 4 * ((unsigned int)(v92 - v91 - 1) + (__int64)v91) + 4;
                do
                {
                  v95 = (_BYTE *)(v24 + *v93);
                  if ( *v95 == 0xFE )
                    *v95 = -1;
                  ++v93;
                }
                while ( (int *)v94 != v93 );
              }
              if ( v64 > -1.0e15 )
              {
                v96 = v61 * (v90 - v64);
              }
              else
              {
                v96 = v61 * v90;
                v8 = (unsigned int)(v8 - 1);
              }
              v49 = v49 + v96;
            }
            goto LABEL_103;
          }
        }
        if ( v172 )
          goto LABEL_44;
        ++v165;
        v174 = *((CoinMessageHandler **)a1 + 26);
        CoinMessages::CoinMessages((CoinMessages *)v180, (CoinPresolveMatrix *)((char *)a1 + 224));
        v97 = (CoinMessageHandler *)CoinMessageHandler::message(v174, 16, (const CoinMessages *)v180);
        v98 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v97);
        v99 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v98);
        v100 = *(double *)(v163 + v54);
        v101 = CoinMessageHandler::operator<<(v99);
        CoinMessageHandler::operator<<(v101, 0, v100);
        CoinMessages::~CoinMessages((CoinMessages *)v180);
LABEL_145:
        if ( v157 == 1 )
        {
          v102 = 10;
          if ( v156 >> 5 >= 10 )
            v102 = v156 >> 5;
          v173 = v102;
        }
        if ( v165 )
        {
          v120 = a2;
          *((_DWORD *)a1 + 86) = 1;
          goto LABEL_194;
        }
LABEL_150:
        if ( v157 > 9 || v156 <= v173 )
          goto LABEL_152;
        goto LABEL_42;
      }
    }
  }
  if ( v157 != 1 )
  {
    v156 = 0;
    goto LABEL_150;
  }
LABEL_152:
  if ( v166 > 0 )
  {
    for ( i = 0; (unsigned int)(v166 - 1) + 1LL != i; ++i )
    {
      if ( *(_BYTE *)(v24 + i) != 1 )
      {
        v104 = *(int *)(v158 + 4 * i);
        if ( (int)v104 < (int)v104 + *(_DWORD *)(v161 + 4 * i) )
        {
          v105 = 0;
          v106 = 0.0;
          v107 = 0.0;
          v108 = v159 + 8 * v104;
          v8 = (unsigned int)(*(_DWORD *)(v161 + 4 * i) - 1) + 1LL;
          v109 = v160 + 4 * v104;
          v110 = nullptr;
          v111 = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              v114 = *(double *)(v108 + 8LL * (_QWORD)v110);
              v115 = *(int *)(v109 + 4LL * (_QWORD)v110);
              if ( v114 > 0.0 )
              {
                v112 = *(double *)&v10[v115];
                if ( v112 >= 1.0e15 )
                  ++v111;
                else
                  v107 = v107 + v112 * v114;
                v113 = *(double *)&v6[v115];
                if ( v113 <= -1.0e15 )
                  ++v105;
                else
                  v106 = v106 + v114 * v113;
                goto LABEL_161;
              }
              if ( v114 < 0.0 )
                break;
LABEL_161:
              v110 = (const CoinPresolveAction *)((char *)v110 + 1);
              if ( (const CoinPresolveAction *)v8 == v110 )
                goto LABEL_168;
            }
            v116 = *(double *)&v10[v115];
            if ( v116 >= 1.0e15 )
              ++v105;
            else
              v106 = v106 + v116 * v114;
            v117 = *(double *)&v6[v115];
            if ( v117 <= -1.0e15 )
            {
              ++v111;
              goto LABEL_161;
            }
            v110 = (const CoinPresolveAction *)((char *)v110 + 1);
            v107 = v107 + v114 * v117;
            if ( (const CoinPresolveAction *)v8 == v110 )
            {
LABEL_168:
              v118 = (double)v111 * 1.0e31 + COERCE_DOUBLE(*(_QWORD *)&v107 & 0x7FFFFFFFFFFFFFFFLL) * 0.00000001 + v107;
              v119 = v106 - fabs(v106) * 0.00000001 - (double)v105 * 1.0e31;
              goto LABEL_169;
            }
          }
        }
        v119 = 0.0;
        v118 = 0.0;
LABEL_169:
        if ( *(double *)(v163 + 8 * i) + v175 >= v118 && v119 >= *((double *)v171 + i) - v175 )
          *((_DWORD *)v178 + (int)v177++) = i;
      }
    }
  }
  v120 = a2;
  if ( v177 )
  {
    v121 = a1;
    v120 = (const CoinPresolveAction *)useless_constraint_action::presolve(
                                         a1,
                                         v178,
                                         (const int *)v177,
                                         (int)a2,
                                         (const CoinPresolveAction *)v8);
    if ( (*((_BYTE *)a1 + 436) & 0x10) == 0 )
      goto LABEL_194;
  }
  else
  {
    v121 = a1;
    if ( (*((_BYTE *)a1 + 436) & 0x10) == 0 )
      goto LABEL_194;
  }
  v122 = *((_QWORD *)v121 + 39);
  v123 = *((_QWORD *)v121 + 20);
  v124 = *((const CoinPresolveAction **)v121 + 11);
  v125 = *((_QWORD *)v121 + 12);
  v126 = *((CoinPresolveMatrix **)v121 + 58);
  if ( v176 <= 0 )
    goto LABEL_194;
  v127 = 0;
  v128.m128d_f64[0] = 0.0000001;
  v129 = (unsigned int)(v176 - 1) + 1LL;
  v130 = nullptr;
  v131 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
  do
  {
    while ( 1 )
    {
      v132 = *((double *)v124 + v127);
      v133 = *(double *)(v125 + 8 * v127);
      if ( v132 == v133 )
        goto LABEL_191;
      v134 = *(double *)&v6[v127];
      v135 = (__m128d)(unsigned __int64)v10[v127];
      if ( *(_BYTE *)(v122 + v127) )
        break;
      if ( v135.m128d_f64[0] - v134 < 0.00000001 )
      {
        v136 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
        goto LABEL_218;
      }
LABEL_191:
      if ( v129 == ++v127 )
        goto LABEL_192;
    }
    v137.m128d_f64[1] = 0.0;
    v136 = v131;
    v137.m128d_f64[0] = v135.m128d_f64[0] + 0.0001;
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v135.m128d_f64[0] + 0.0001) & *(_QWORD *)&v131.m128d_f64[0]) < 4.503599627370496e15 )
    {
      v138 = 0;
      v138.m128d_f64[0] = (double)(int)v137.m128d_f64[0];
      v138.m128d_f64[0] = v138.m128d_f64[0]
                        - COERCE_DOUBLE(
                            COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v138, v137).m128d_f64[0]))
                          & 0x3FF0000000000000LL);
      v137 = _mm_or_pd(v138, _mm_andn_pd(v131, v137));
    }
    v139.m128d_f64[1] = 0.0;
    v135 = v137;
    v139.m128d_f64[0] = v134 - 0.0001;
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v134 - 0.0001) & *(_QWORD *)&v131.m128d_f64[0]) < 4.503599627370496e15 )
    {
      v140.m128d_f64[0] = (double)(int)v139.m128d_f64[0];
      *(_QWORD *)&v139.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                        COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v139, v140).m128d_f64[0] & 0x3FF0000000000000LL)
                                      + v140.m128d_f64[0])
                                    | ~*(_QWORD *)&v131.m128d_f64[0] & *(_QWORD *)&v139.m128d_f64[0];
    }
    v134 = v139.m128d_f64[0];
    if ( v137.m128d_f64[0] - v139.m128d_f64[0] >= 0.00000001 )
    {
      if ( v133 > v137.m128d_f64[0] )
      {
        v141 = *((_QWORD *)v121 + 45);
        *(double *)(v125 + 8 * v127) = v137.m128d_f64[0];
        v142 = (_BYTE *)(v127 + v141);
        if ( (*v142 & 1) == 0 )
        {
          *v142 |= 1u;
          v143 = *((int *)v121 + 98);
          *((_DWORD *)v121 + 98) = v143 + 1;
          *(_DWORD *)(*((_QWORD *)v121 + 48) + 4 * v143) = v127;
        }
        v132 = *((double *)v124 + v127);
      }
      if ( v139.m128d_f64[0] > v132 )
      {
        v144 = *((_QWORD *)v121 + 45);
        *((_QWORD *)v124 + v127) = *(_QWORD *)&v139.m128d_f64[0];
        v145 = (_BYTE *)(v127 + v144);
        if ( (*v145 & 1) == 0 )
        {
          *v145 |= 1u;
          v146 = *((int *)v121 + 98);
          *((_DWORD *)v121 + 98) = v146 + 1;
          *(_DWORD *)(*((_QWORD *)v121 + 48) + 4 * v146) = v127;
        }
      }
      goto LABEL_191;
    }
LABEL_218:
    *(_QWORD *)&v149 = *(_QWORD *)&v134 & *(_QWORD *)&v136.m128d_f64[0];
    v150 = *((_QWORD *)v121 + 45);
    v151 = (_DWORD)v130 + 1;
    v152 = _mm_and_pd(v136, v135);
    *((_DWORD *)v126 + (_QWORD)v130) = v127;
    v153 = (_BYTE *)(v127 + v150);
    v152.m128d_f64[0] = fmin(v152.m128d_f64[0], v149);
    v154 = *(_QWORD *)&v135.m128d_f64[0] & *(_QWORD *)&_mm_cmpgt_sd(v152, v128).m128d_f64[0];
    if ( (*v153 & 1) == 0 )
    {
      *v153 |= 1u;
      v155 = *((int *)v121 + 98);
      *((_DWORD *)v121 + 98) = v155 + 1;
      *(_DWORD *)(*((_QWORD *)v121 + 48) + 4 * v155) = v127;
    }
    *(_QWORD *)(v125 + 8 * v127) = v154;
    v130 = (int *)v151;
    *((_QWORD *)v124 + v127) = v154;
    if ( !v123 )
      goto LABEL_191;
    *(_QWORD *)(v123 + 8 * v127++) = v154;
  }
  while ( v129 != v127 );
LABEL_192:
  if ( (_DWORD)v130 )
    v120 = (const CoinPresolveAction *)remove_fixed_action::presolve(a1, v126, v130, (int)v120, v124);
LABEL_194:
  operator delete[](v6);
  operator delete[](v10);
  return v120;
}

