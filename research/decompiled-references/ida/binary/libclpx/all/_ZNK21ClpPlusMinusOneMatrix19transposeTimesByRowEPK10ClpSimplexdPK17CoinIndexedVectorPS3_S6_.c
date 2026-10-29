CoinIndexedVector *__fastcall ClpPlusMinusOneMatrix::transposeTimesByRow(
        ClpPlusMinusOneMatrix *this,
        const ClpSimplex *a2,
        double a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        CoinIndexedVector *a6)
{
  int v8; // r14d
  int *v9; // rbp
  double v10; // xmm3_8
  __int64 v11; // rbx
  __int64 v12; // r12
  int *v13; // r13
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rcx
  double v19; // xmm1_8
  int *v20; // r11
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // eax
  bool v27; // cc
  int *v28; // r10
  int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rcx
  int v33; // edi
  int v34; // eax
  int *v35; // rdx
  int v36; // esi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // ecx
  double *v41; // rax
  CoinIndexedVector *v42; // rax
  __int64 (__fastcall *v44)(ClpPlusMinusOneMatrix *__hidden); // rax
  int v45; // eax
  __int64 v46; // r13
  int v47; // edx
  int *v48; // rcx
  int *v49; // r9
  __int64 v50; // r10
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // rax
  double v54; // xmm1_8
  __int64 v55; // r14
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // r11
  __int64 v60; // rcx
  int v61; // r8d
  int v62; // eax
  int *v63; // r11
  int v64; // r8d
  __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rcx
  int v68; // edi
  int v69; // eax
  __int64 v70; // r8
  int *v71; // rcx
  int v72; // edx
  __int64 v73; // rsi
  _BYTE *v74; // rax
  int v75; // edi
  double *v76; // rsi
  double v77; // xmm0_8
  __int64 v78; // rax
  int v79; // ecx
  int v80; // ecx
  __int64 v81; // rsi
  __int64 v82; // r9
  __int64 v83; // r11
  int *v84; // r13
  int *v85; // r14
  int v86; // edx
  int v87; // r8d
  __int64 v88; // rax
  int *v89; // r15
  int v90; // r10d
  double v91; // xmm2_8
  double v92; // xmm1_8
  double v93; // xmm1_8
  int *v94; // r10
  __int64 v95; // rdi
  __int64 v96; // rsi
  int *v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // r11
  __int64 v100; // r9
  int *v101; // r8
  int v102; // eax
  __int64 v103; // r12
  double v104; // xmm1_8
  __int64 v105; // rdx
  __int64 v106; // r11
  __int64 v107; // r10
  int *v108; // r9
  __int64 v109; // r8
  int v110; // edi
  double v111; // xmm0_8
  __int64 v112; // rdx
  __int64 v113; // r8
  int *v114; // rdi
  unsigned __int64 v115; // r9
  __int64 v116; // rdx
  double *v117; // rdx
  int v118; // r9d
  int *v119; // rdx
  unsigned __int64 v120; // r8
  __int64 v121; // rdi
  double *v122; // rdi
  __int64 v123; // r8
  int v124; // esi
  __int64 v125; // rax
  __int64 v126; // r8
  __int64 v127; // rsi
  __int64 v128; // rax
  __int64 v129; // rsi
  double v130; // xmm0_8
  int v131; // ecx
  __int64 v132; // rdi
  int v133; // ecx
  int v134; // ecx
  __int64 v135; // rax
  double v136; // xmm0_8
  __int64 v137; // rdi
  int v138; // r8d
  int *v139; // r9
  __int64 v140; // rcx
  __int64 v141; // rax
  int v142; // ecx
  int v143; // esi
  _DWORD *v144; // rsi
  double v145; // xmm0_8
  __int64 v146; // rax
  __int64 v147; // rdi
  __int64 v148; // rbx
  int *v149; // rbp
  int v150; // ecx
  int v151; // ecx
  double v152; // xmm1_8
  __int64 v153; // rsi
  __int64 v154; // rdx
  __int64 v155; // rsi
  int v156; // edi
  int v157; // ecx
  double v158; // xmm1_8
  __int64 v159; // rax
  __int64 v160; // rdi
  int *v161; // rsi
  __int64 v162; // rdx
  __int64 v163; // rdx
  __int64 v164; // rsi
  double v165; // xmm0_8
  __int64 v166; // rax
  __int64 v167; // r9
  __int64 v168; // r8
  double *v169; // rdx
  int v170; // edx
  int v171; // r8d
  __int64 v172; // rax
  __int64 v173; // r9
  __int64 v174; // rsi
  double *v175; // rdx
  int v176; // edx
  int v177; // edi
  int *v178; // rax
  __int64 v179; // rdi
  __int64 v180; // rdx
  __int64 v181; // rcx
  double *v182; // rdx
  int v183; // edx
  __int64 v184; // r10
  __int64 v185; // r13
  __int64 v186; // r8
  __int64 v187; // r11
  __int64 v188; // rax
  double v189; // xmm2_8
  int v190; // esi
  int v191; // edx
  __int64 v192; // r9
  int *v193; // rax
  int *v194; // rsi
  __int64 v195; // rcx
  int v196; // ecx
  int *v197; // rax
  int *v198; // rcx
  __int64 v199; // rdx
  __int64 v200; // rax
  double v201; // xmm0_8
  __int64 v202; // rdi
  double v203; // xmm0_8
  __int64 v204; // rdi
  int v205; // r8d
  int *v206; // r9
  __int64 v207; // rcx
  __int64 v208; // rax
  int v209; // esi
  int v210; // ecx
  int v211; // edx
  _DWORD *v212; // rdi
  double v213; // xmm0_8
  __int64 v214; // rax
  __int64 v215; // r8
  int *v216; // rbp
  __int64 v217; // rsi
  int v218; // ecx
  __int64 v219; // rcx
  __int64 v220; // rdi
  __int64 v221; // r11
  __int64 v222; // r10
  double *v223; // r9
  __int64 v224; // rdi
  __int64 v225; // r11
  __int64 i; // r10
  double *v227; // r8
  __int64 v228; // r9
  int v229; // r8d
  int v230; // edx
  __int64 v231; // r8
  int v232; // r9d
  __int64 v233; // [rsp+8h] [rbp-80h]
  double *v234; // [rsp+10h] [rbp-78h]
  int *v237; // [rsp+28h] [rbp-60h]
  __int64 v238; // [rsp+28h] [rbp-60h]
  __int64 v239; // [rsp+28h] [rbp-60h]
  __int64 v240; // [rsp+30h] [rbp-58h]
  int v241; // [rsp+30h] [rbp-58h]
  __int64 v242; // [rsp+38h] [rbp-50h]
  int v243; // [rsp+38h] [rbp-50h]
  char v244; // [rsp+47h] [rbp-41h]

  CoinIndexedVector::clear(a6);
  v8 = *((_DWORD *)a4 + 4);
  v9 = *(int **)a6;
  v10 = *((double *)a2 + 88);
  v11 = *((_QWORD *)a6 + 1);
  v234 = *((double **)a4 + 1);
  v12 = *((_QWORD *)this + 13);
  v240 = *((_QWORD *)this + 15);
  v233 = *((_QWORD *)this + 14);
  v237 = *(int **)a4;
  v244 = *((_BYTE *)a4 + 28);
  if ( v8 > 2 )
  {
    if ( *((_BYTE *)a4 + 28) )
    {
      v44 = *(__int64 (__fastcall **)(ClpPlusMinusOneMatrix *__hidden))(*(_QWORD *)this + 24LL);
      if ( v44 == ClpPlusMinusOneMatrix::getNumCols )
        v45 = *((_DWORD *)this + 33);
      else
        v45 = v44(this);
      v46 = (unsigned int)(v8 - 1);
      v47 = 0;
      v48 = v237;
      while ( 1 )
      {
        v47 = *(_DWORD *)(v12 + 4LL * *v48 + 4) + v47 - *(_DWORD *)(v12 + 4LL * *v48);
        if ( v45 < v47 )
          break;
        if ( &v237[v46 + 1] == ++v48 )
        {
          v49 = &v9[*((int *)a6 + 5)];
          v50 = *((_QWORD *)a5 + 1);
          v51 = v46 + 1;
          v52 = 0;
          v242 = v51;
          v53 = 0;
          do
          {
            v54 = v234[v52] * a3;
            v55 = 4LL * v237[v52];
            v56 = *(int *)(v12 + v55);
            v57 = *(int *)(v55 + v233);
            if ( (int)v56 < (int)v57 )
            {
              v58 = (int)v56 + 1;
              v59 = v240 + 4 * (v56 - v58);
              do
              {
                while ( 1 )
                {
                  v60 = *(int *)(v59 + 4 * v58);
                  if ( *((_BYTE *)v49 + v60) )
                    break;
                  *((_BYTE *)v49 + v60) = 1;
                  v9[v53] = v60;
                  v61 = v53 + 1;
                  v57 = *(int *)(v55 + v233);
                  *(double *)(v50 + 8 * v60) = *(double *)(v50 + 8 * v60) + v54;
                  v62 = v58++;
                  v27 = v62 < (int)v57;
                  v53 = v61;
                  if ( !v27 )
                    goto LABEL_36;
                }
                *(double *)(v50 + 8 * v60) = *(double *)(v50 + 8 * v60) + v54;
                v133 = v58++;
              }
              while ( v133 < (int)v57 );
            }
LABEL_36:
            v63 = (int *)(v12 + v55 + 4);
            v64 = *v63;
            if ( *v63 > (int)v57 )
            {
              v65 = (int)v57 + 1;
              v66 = v57 - v65;
              do
              {
                while ( 1 )
                {
                  v67 = *(int *)(v240 + 4 * v66 + 4 * v65);
                  if ( *((_BYTE *)v49 + v67) )
                    break;
                  *((_BYTE *)v49 + v67) = 1;
                  v9[v53] = v67;
                  v68 = v53 + 1;
                  v64 = *v63;
                  *(double *)(v50 + 8 * v67) = *(double *)(v50 + 8 * v67) - v54;
                  v69 = v65++;
                  v27 = v69 < v64;
                  v53 = v68;
                  if ( !v27 )
                    goto LABEL_40;
                }
                *(double *)(v50 + 8 * v67) = *(double *)(v50 + 8 * v67) - v54;
                v134 = v65++;
              }
              while ( v134 < v64 );
            }
LABEL_40:
            ++v52;
          }
          while ( v242 != v52 );
          if ( (_DWORD)v53 )
          {
            v70 = (__int64)&v9[(unsigned int)(v53 - 1) + 1];
            v71 = v9;
            v72 = 0;
            do
            {
              v73 = *v71;
              v74 = (char *)v49 + v73;
              v75 = *v71;
              if ( *((_BYTE *)v49 + v73) )
              {
                v76 = (double *)(v50 + 8 * v73);
                v77 = *v76;
                *v76 = 0.0;
                *v74 = 0;
                if ( fabs(v77) > v10 )
                {
                  v78 = v72++;
                  *(double *)(v11 + 8 * v78) = v77;
                  v9[v78] = v75;
                }
              }
              ++v71;
            }
            while ( (int *)v70 != v71 );
            goto LABEL_47;
          }
          goto LABEL_22;
        }
      }
      v184 = v240;
      v185 = v46 + 1;
      v186 = 0;
      v241 = v45;
      v187 = v184 + 4;
      do
      {
        v188 = v237[v186];
        v189 = v234[v186] * a3;
        v190 = *(_DWORD *)(v12 + 4 * v188);
        v191 = *(_DWORD *)(v233 + 4 * v188);
        v192 = 4 * v188;
        if ( v190 < v191 )
        {
          v193 = (int *)(v184 + 4LL * v190);
          v194 = (int *)(v187 + 4 * (v190 + (unsigned __int64)(unsigned int)(v191 - 1 - v190)));
          do
          {
            v195 = *v193++;
            *(double *)(v11 + 8 * v195) = *(double *)(v11 + 8 * v195) + v189;
          }
          while ( v194 != v193 );
        }
        v196 = *(_DWORD *)(v12 + v192 + 4);
        if ( v196 > v191 )
        {
          v197 = (int *)(v184 + 4LL * v191);
          v198 = (int *)(v187 + 4 * ((unsigned int)(v196 - v191 - 1) + (__int64)v191));
          do
          {
            v199 = *v197++;
            *(double *)(v11 + 8 * v199) = *(double *)(v11 + 8 * v199) - v189;
          }
          while ( v197 != v198 );
        }
        ++v186;
      }
      while ( v185 != v186 );
      if ( v241 > 0 )
      {
        v200 = 0;
        v72 = 0;
        do
        {
          v201 = *(double *)(v11 + 8 * v200);
          if ( v201 != 0.0 )
          {
            *(_QWORD *)(v11 + 8 * v200) = 0;
            if ( fabs(v201) > v10 )
            {
              v202 = v72++;
              *(double *)(v11 + 8 * v202) = v201;
              v9[v202] = v200;
            }
          }
          ++v200;
        }
        while ( (unsigned int)(v241 - 1) + 1LL != v200 );
        goto LABEL_47;
      }
    }
    else
    {
      v13 = *(int **)a4;
      v14 = *((_QWORD *)a5 + 1);
      v15 = 0;
      v238 = (__int64)&v237[v8 - 1 + 1];
      do
      {
        while ( 1 )
        {
          v16 = *v13;
          v17 = 4 * v16;
          v18 = *(int *)(v12 + 4 * v16);
          v19 = v234[v16] * a3;
          v20 = (int *)(v233 + 4 * v16);
          v21 = *v20;
          if ( (int)v21 > (int)v18 )
          {
            v22 = (int)v18 + 1;
            v23 = v240 + 4 * (v18 - v22);
            do
            {
              while ( 1 )
              {
                v24 = *(int *)(v23 + 4 * v22);
                if ( *(_BYTE *)(v14 + v24) )
                  break;
                *(_BYTE *)(v14 + v24) = 1;
                v9[v15] = v24;
                v25 = v15 + 1;
                v21 = *v20;
                *(double *)(v11 + 8 * v24) = *(double *)(v11 + 8 * v24) + v19;
                v26 = v22++;
                v27 = v26 < (int)v21;
                v15 = v25;
                if ( !v27 )
                  goto LABEL_8;
              }
              *(double *)(v11 + 8 * v24) = *(double *)(v11 + 8 * v24) + v19;
              v79 = v22++;
            }
            while ( v79 < (int)v21 );
          }
LABEL_8:
          v28 = (int *)(v12 + v17 + 4);
          v29 = *v28;
          if ( (int)v21 < *v28 )
            break;
LABEL_12:
          if ( (int *)v238 == ++v13 )
            goto LABEL_13;
        }
        v30 = (int)v21 + 1;
        v31 = v21 - v30;
        do
        {
          while ( 1 )
          {
            v32 = *(int *)(v240 + 4 * v31 + 4 * v30);
            if ( *(_BYTE *)(v14 + v32) )
              break;
            *(_BYTE *)(v14 + v32) = 1;
            v9[v15] = v32;
            v33 = v15 + 1;
            v29 = *v28;
            *(double *)(v11 + 8 * v32) = *(double *)(v11 + 8 * v32) - v19;
            v34 = v30++;
            v27 = v34 < v29;
            v15 = v33;
            if ( !v27 )
              goto LABEL_12;
          }
          *(double *)(v11 + 8 * v32) = *(double *)(v11 + 8 * v32) - v19;
          v80 = v30++;
        }
        while ( v80 < v29 );
        ++v13;
      }
      while ( (int *)v238 != v13 );
LABEL_13:
      if ( (_DWORD)v15 )
      {
        v35 = v9;
        v36 = 0;
        v37 = (__int64)&v9[(unsigned int)(v15 - 1) + 1];
        do
        {
          while ( 1 )
          {
            v39 = *v35;
            *(_BYTE *)(v14 + v39) = 0;
            v40 = v39;
            v41 = (double *)(v11 + 8 * v39);
            if ( fabs(*v41) <= v10 )
              break;
            ++v35;
            v38 = v36++;
            v9[v38] = v40;
            if ( (int *)v37 == v35 )
              goto LABEL_18;
          }
          ++v35;
          *v41 = 0.0;
        }
        while ( (int *)v37 != v35 );
LABEL_18:
        v42 = a6;
        *((_DWORD *)a6 + 4) = v36;
        if ( v36 )
          goto LABEL_25;
        goto LABEL_23;
      }
    }
    goto LABEL_22;
  }
  if ( v8 != 2 )
  {
    if ( v8 != 1 )
    {
LABEL_22:
      v42 = a6;
      *((_DWORD *)a6 + 4) = 0;
      goto LABEL_23;
    }
    v135 = *v237;
    if ( v244 )
    {
      v136 = a3 * *v234;
      if ( fabs(v136) <= v10 )
        goto LABEL_22;
      v137 = 4 * v135;
      v138 = *(_DWORD *)(v12 + 4 * v135);
      v139 = (int *)(4 * v135 + v233);
      v140 = *v139;
      if ( v138 >= (int)v140 )
      {
        v144 = (_DWORD *)(v12 + v137 + 4);
        if ( *v144 <= (int)v140 )
          goto LABEL_22;
        v72 = 0;
      }
      else
      {
        v141 = 1;
        do
        {
          v142 = *(_DWORD *)(v240 + 4LL * v138 + 4 * v141 - 4);
          *(double *)(v11 + 8 * v141 - 8) = v136;
          v143 = v138 + v141;
          v72 = v141;
          v9[v141 - 1] = v142;
          v140 = *v139;
          ++v141;
        }
        while ( (int)v140 > v143 );
        v144 = (_DWORD *)(v12 + v137 + 4);
        if ( (int)v140 >= *v144 )
          goto LABEL_99;
      }
      v145 = -v136;
      v146 = (int)v140 + 1;
      v147 = v240 + -4 * v146 + 4 * v140;
      v148 = -8 * v146 + 8LL * v72 + v11;
      v149 = &v9[v72 - v146];
      do
      {
        v150 = *(_DWORD *)(v147 + 4 * v146);
        ++v72;
        *(double *)(v148 + 8 * v146) = v145;
        v149[v146] = v150;
        v151 = v146++;
      }
      while ( *v144 > v151 );
LABEL_99:
      v42 = a6;
      *((_DWORD *)a6 + 4) = v72;
      goto LABEL_24;
    }
    v203 = a3 * v234[v135];
    if ( fabs(v203) <= v10 )
      goto LABEL_22;
    v204 = 4 * v135;
    v205 = *(_DWORD *)(v12 + 4 * v135);
    v206 = (int *)(4 * v135 + v233);
    v207 = *v206;
    if ( v205 >= (int)v207 )
    {
      v212 = (_DWORD *)(v12 + v204 + 4);
      if ( *v212 <= (int)v207 )
        goto LABEL_22;
      v211 = 0;
    }
    else
    {
      v208 = 1;
      do
      {
        v209 = v205 + v208;
        v210 = *(_DWORD *)(v240 + 4LL * v205 + 4 * v208 - 4);
        *(double *)(v11 + 8LL * v210) = v203;
        v211 = v208;
        v9[v208 - 1] = v210;
        v207 = *v206;
        ++v208;
      }
      while ( (int)v207 > v209 );
      v212 = (_DWORD *)(v12 + v204 + 4);
      if ( (int)v207 >= *v212 )
        goto LABEL_147;
    }
    v213 = -v203;
    v214 = (int)v207 + 1;
    v215 = v240 + -4 * v214 + 4 * v207;
    v216 = &v9[v211 - v214];
    do
    {
      v217 = *(int *)(v215 + 4 * v214);
      v218 = v214;
      ++v211;
      *(double *)(v11 + 8 * v217) = v213;
      v216[v214++] = v217;
    }
    while ( *v212 > v218 );
LABEL_147:
    *((_DWORD *)a6 + 4) = v211;
    goto LABEL_25;
  }
  v81 = v237[1];
  v82 = *v237;
  v83 = 4 * v81;
  v84 = (int *)(v12 + 4 * v81 + 4);
  v85 = (int *)(v12 + 4 * v82 + 4);
  v86 = *v84;
  v87 = *v85;
  v239 = 4 * v82;
  v88 = *(int *)(v12 + 4 * v81);
  v243 = *v84 - v88;
  v89 = (int *)(v12 + 4 * v82);
  v90 = *v85 - *v89;
  if ( !v244 )
  {
    if ( v243 <= v90 )
    {
      v84 = (int *)(v12 + 4 * v82 + 4);
      v86 = *v85;
      v85 = (int *)(v12 + 4 * v81 + 4);
      LODWORD(v88) = *v89;
      v83 = 4 * v82;
      v239 = 4 * v81;
      v219 = v81;
      v89 = (int *)(v12 + 4 * v81);
      v81 = v82;
      v82 = v219;
    }
    v152 = v234[v81] * a3;
    v153 = *(int *)(v233 + v83);
    if ( (int)v153 <= (int)v88 )
    {
      v157 = 0;
    }
    else
    {
      v154 = 1;
      do
      {
        v155 = *(int *)(v240 + 4LL * (int)v88 + 4 * v154 - 4);
        v156 = v88 + v154;
        v157 = v154;
        v9[v154 - 1] = v155;
        *(double *)(v11 + 8 * v155) = v152;
        v153 = *(int *)(v233 + v83);
        ++v154;
      }
      while ( (int)v153 > v156 );
      v86 = *v84;
    }
    if ( (int)v153 < v86 )
    {
      v158 = -v152;
      v159 = (int)v153 + 1;
      v160 = v240 + -4 * v159 + 4 * v153;
      v161 = &v9[v157 - v159];
      do
      {
        v162 = *(int *)(v160 + 4 * v159);
        ++v157;
        v161[v159] = v162;
        *(double *)(v11 + 8 * v162) = v158;
        LODWORD(v162) = v159++;
      }
      while ( *v84 > (int)v162 );
    }
    v163 = *v89;
    v164 = *(int *)(v239 + v233);
    v165 = a3 * v234[v82];
    if ( (int)v163 >= (int)v164 )
    {
LABEL_113:
      v171 = *v85;
      if ( *v85 <= (int)v164 )
      {
LABEL_117:
        v177 = v157;
        if ( !v157 )
          goto LABEL_22;
LABEL_118:
        v178 = v9;
        v36 = 0;
        v179 = (__int64)&v9[v177 - 1 + 1];
        do
        {
          v181 = *v178;
          v182 = (double *)(v11 + 8 * v181);
          if ( fabs(*v182) > v10 )
          {
            v180 = v36++;
            v9[v180] = v181;
          }
          else
          {
            *v182 = 0.0;
          }
          ++v178;
        }
        while ( (int *)v179 != v178 );
        goto LABEL_18;
      }
    }
    else
    {
      v166 = (int)v163 + 1;
      v167 = v240 + 4 * (v163 - v166);
      while ( 1 )
      {
        while ( 1 )
        {
          v168 = *(int *)(v167 + 4 * v166);
          v169 = (double *)(v11 + 8 * v168);
          if ( *v169 == 0.0 )
            break;
          *v169 = *v169 + v165;
          v170 = v166++;
          if ( v170 >= (int)v164 )
            goto LABEL_113;
        }
        v177 = v157 + 1;
        v9[v157] = v168;
        v164 = *(int *)(v239 + v233);
        *v169 = v165;
        v183 = v166++;
        if ( v183 >= (int)v164 )
          break;
        ++v157;
      }
      v171 = *v85;
      if ( *v85 <= (int)v164 )
        goto LABEL_118;
      ++v157;
    }
    v172 = (int)v164 + 1;
    v173 = v240 + 4 * (v164 - v172);
    while ( 1 )
    {
      while ( 1 )
      {
        v174 = *(int *)(v173 + 4 * v172);
        v175 = (double *)(v11 + 8 * v174);
        if ( *v175 == 0.0 )
          break;
        *v175 = *v175 - v165;
        v176 = v172++;
        if ( v176 >= v171 )
          goto LABEL_117;
      }
      v177 = v157 + 1;
      v9[v157] = v174;
      v171 = *v85;
      *v175 = -v165;
      v230 = v172++;
      if ( v230 >= v171 )
        goto LABEL_118;
      ++v157;
    }
  }
  v91 = *v234;
  v92 = v234[1];
  if ( v243 >= v90 )
  {
    v84 = (int *)(v12 + 4 * v82 + 4);
    v85 = (int *)(v12 + 4 * v81 + 4);
    v88 = *v89;
    v92 = *v234;
    v83 = 4 * v82;
    v86 = v87;
    v89 = (int *)(v12 + 4 * v81);
    v239 = 4 * v81;
    v91 = v234[1];
  }
  v93 = v92 * a3;
  v94 = (int *)(v233 + v83);
  v95 = *(int *)(v233 + v83);
  v96 = *(_QWORD *)a5;
  v97 = &v9[*((int *)a6 + 5)];
  if ( (int)v95 <= (int)v88 )
  {
    v102 = 0;
  }
  else
  {
    v98 = (int)v88 + 1;
    v99 = v11 - 8 * v98;
    v100 = v240 + -4 * v98 + 4 * v88;
    v101 = &v9[-v98];
    v102 = 0;
    do
    {
      v103 = *(int *)(v100 + 4 * v98);
      *(double *)(v99 + 8 * v98) = v93;
      *((_BYTE *)v97 + v103) = 1;
      *(_DWORD *)(v96 + 4 * v103) = v102++;
      v101[v98] = v103;
      v95 = *v94;
      LODWORD(v103) = v98++;
    }
    while ( (int)v95 > (int)v103 );
    v86 = *v84;
  }
  if ( (int)v95 < v86 )
  {
    v104 = -v93;
    v105 = (int)v95 + 1;
    v106 = v240 + -4 * v105 + 4 * v95;
    v107 = v11 + -8 * v105 + 8LL * v102;
    v108 = &v9[v102 - v105];
    do
    {
      v109 = *(int *)(v106 + 4 * v105);
      v110 = v105;
      *(double *)(v107 + 8 * v105) = v104;
      *((_BYTE *)v97 + v109) = 1;
      *(_DWORD *)(v96 + 4 * v109) = v102++;
      v108[v105++] = v109;
    }
    while ( *v84 > v110 );
  }
  v111 = a3 * v91;
  v112 = *v89;
  v113 = *(int *)(v239 + v233);
  if ( (int)v112 >= (int)v113 )
    goto LABEL_70;
  if ( fabs(v111) <= v10 )
  {
    v114 = (int *)(v240 + 4LL * (int)v112);
    v115 = v240 + 4 * ((int)v112 + (unsigned __int64)(unsigned int)(v113 - v112 - 1)) + 4;
    do
    {
      v116 = *v114;
      if ( *((_BYTE *)v97 + v116) )
      {
        v117 = (double *)(v11 + 8LL * *(int *)(v96 + 4 * v116));
        *v117 = *v117 + v111;
      }
      ++v114;
    }
    while ( (int *)v115 != v114 );
LABEL_70:
    v118 = *v85;
    if ( (int)v113 >= *v85 )
    {
LABEL_76:
      v72 = v102;
      goto LABEL_77;
    }
    if ( fabs(v111) <= v10 )
    {
      v119 = (int *)(v240 + 4LL * (int)v113);
      v120 = v240 + 4 * ((int)v113 + (unsigned __int64)(unsigned int)(v118 - 1 - v113)) + 4;
      do
      {
        v121 = *v119;
        if ( *((_BYTE *)v97 + v121) )
        {
          v122 = (double *)(v11 + 8LL * *(int *)(v96 + 4 * v121));
          *v122 = *v122 - v111;
        }
        ++v119;
      }
      while ( (int *)v120 != v119 );
      goto LABEL_76;
    }
    v72 = v102;
LABEL_153:
    v224 = (int)v113 + 1;
    v225 = v240 + 4 * (v113 - v224);
    do
    {
      for ( i = *(int *)(v225 + 4 * v224); *((_BYTE *)v97 + i); i = *(int *)(v225 + 4 * v224) )
      {
        v227 = (double *)(v11 + 8LL * *(int *)(v96 + 4 * i));
        *v227 = *v227 - v111;
        LODWORD(v227) = v224++;
        if ( (int)v227 >= v118 )
          goto LABEL_77;
      }
      v228 = v72;
      v229 = v224;
      ++v72;
      *(double *)(v11 + 8 * v228) = -v111;
      v9[v228] = i;
      v118 = *v85;
      ++v224;
    }
    while ( v229 < *v85 );
    if ( v102 )
      goto LABEL_78;
    goto LABEL_99;
  }
  v220 = (int)v112 + 1;
  v221 = v240 + 4 * (v112 - v220);
  v72 = v102;
  do
  {
    while ( 1 )
    {
      v222 = *(int *)(v221 + 4 * v220);
      if ( !*((_BYTE *)v97 + v222) )
        break;
      v223 = (double *)(v11 + 8LL * *(int *)(v96 + 4 * v222));
      *v223 = *v223 + v111;
      LODWORD(v223) = v220++;
      if ( (int)v223 >= (int)v113 )
        goto LABEL_152;
    }
    v231 = v72;
    v232 = v220;
    ++v72;
    *(double *)(v11 + 8 * v231) = v111;
    v9[v231] = v222;
    v113 = *(int *)(v239 + v233);
    ++v220;
  }
  while ( v232 < (int)v113 );
LABEL_152:
  v118 = *v85;
  if ( *v85 > (int)v113 )
    goto LABEL_153;
LABEL_77:
  if ( v102 )
  {
LABEL_78:
    v123 = (unsigned int)(v102 - 1);
    v124 = 0;
    v125 = 0;
    v126 = v123 + 1;
    do
    {
      *((_BYTE *)v97 + v9[v125]) = 0;
      v124 -= (v10 < fabs(*(double *)(v11 + 8 * v125++))) - 1;
    }
    while ( v126 != v125 );
    if ( v124 )
    {
      if ( !v72 )
        goto LABEL_22;
      v127 = (unsigned int)(v72 - 1);
      v128 = 0;
      v72 = 0;
      v129 = v127 + 1;
      do
      {
        v130 = *(double *)(v11 + 8 * v128);
        v131 = v9[v128];
        *(_QWORD *)(v11 + 8 * v128) = 0;
        if ( fabs(v130) > v10 )
        {
          v132 = v72++;
          *(double *)(v11 + 8 * v132) = v130;
          v9[v132] = v131;
        }
        ++v128;
      }
      while ( v129 != v128 );
    }
  }
LABEL_47:
  v42 = a6;
  *((_DWORD *)a6 + 4) = v72;
  if ( v72 )
    goto LABEL_24;
LABEL_23:
  *((_BYTE *)v42 + 28) = 0;
  if ( v244 )
LABEL_24:
    *((_BYTE *)v42 + 28) = 1;
LABEL_25:
  *((_DWORD *)a5 + 4) = 0;
  *((_BYTE *)a5 + 28) = 0;
  return a5;
}

