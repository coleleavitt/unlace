__int64 __fastcall c_ekkbtrn_ipivrw(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  int v7; // r13d
  __int64 v8; // rbp
  int v9; // r12d
  int *v10; // r11
  __int64 *v11; // r10
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // xmm0_8
  char v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // r11
  double *v23; // r13
  int v24; // r9d
  int v25; // r14d
  int v26; // r10d
  int *v27; // r8
  __int64 v28; // r14
  __int64 v29; // rsi
  int IsSet; // eax
  int v31; // r12d
  __int64 v32; // r11
  double v33; // xmm4_8
  __int64 v34; // r10
  __int64 v35; // r14
  int v36; // ecx
  __int64 v37; // r13
  __int64 v38; // r10
  int v39; // r11d
  int v40; // r10d
  _BYTE *v41; // r11
  int v42; // ecx
  int *v43; // r11
  __int64 v44; // r14
  __int64 v45; // rcx
  int *v46; // rbx
  __int64 v47; // r12
  double *v48; // r14
  int v49; // r10d
  double v50; // xmm1_8
  __int64 v51; // r13
  int v52; // r12d
  int v53; // r15d
  __int64 v54; // r14
  __int64 v55; // r12
  __int64 v56; // r13
  __int64 v57; // rcx
  __int64 v58; // r10
  double v59; // xmm2_8
  int v60; // r8d
  int *v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // r11
  __int64 v65; // r12
  __int64 v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rax
  int v69; // r9d
  __int64 v70; // rax
  int *v71; // r13
  int v72; // ebx
  int v73; // r15d
  double v74; // xmm1_8
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rdi
  int v78; // r9d
  double *v79; // rsi
  int v80; // r10d
  _BYTE *v81; // rdi
  _BYTE *v82; // rsi
  __int64 v83; // rax
  double *v84; // rsi
  int v85; // edi
  _BYTE *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rsi
  double v89; // xmm1_8
  int *v90; // r8
  __int64 v91; // rdi
  __int64 v92; // rsi
  double *v93; // rcx
  double v94; // xmm0_8
  int v95; // esi
  int *v96; // r8
  __int64 v97; // rdi
  __int64 v98; // rsi
  double *v99; // rcx
  double v100; // xmm0_8
  int v101; // esi
  __int64 v102; // r12
  __int64 v103; // r15
  int v104; // r10d
  int v105; // r13d
  _DWORD *v106; // r11
  int *v107; // rsi
  __int64 v108; // r14
  __int64 v109; // rcx
  int v110; // r8d
  int v111; // ebx
  __int64 v112; // rcx
  int v113; // eax
  __int64 v114; // rdi
  __int64 v115; // r9
  _BYTE *v116; // rcx
  int v117; // edx
  int v118; // edx
  __int64 v119; // r10
  unsigned int v120; // r9d
  int *v121; // rsi
  __int64 v122; // r11
  __int64 v123; // rax
  double *v124; // rdx
  double v125; // xmm2_8
  __int64 v126; // rbx
  int v127; // r8d
  int v128; // ecx
  int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rdi
  __int64 v134; // rcx
  double v135; // xmm0_8
  int *v136; // rdx
  __int64 v137; // rcx
  double *v138; // rsi
  double v139; // xmm0_8
  int v140; // ecx
  __int64 v141; // rsi
  int *v142; // rdx
  __int64 v143; // rcx
  double *v144; // rsi
  double v145; // xmm2_8
  __int64 v146; // rsi
  int v147; // edi
  int v148; // ecx
  int v149; // r9d
  __int64 v150; // rsi
  __int64 v151; // r8
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // rdi
  double v155; // xmm0_8
  __int64 v156; // rcx
  int *v157; // rdx
  __int64 v158; // rcx
  double *v159; // rsi
  double v160; // xmm0_8
  int v161; // ecx
  __int64 v162; // rsi
  int v165; // [rsp+10h] [rbp-98h]
  __int64 v166; // [rsp+18h] [rbp-90h]
  __int64 v167; // [rsp+18h] [rbp-90h]
  __int64 v168; // [rsp+18h] [rbp-90h]
  __int64 v169; // [rsp+20h] [rbp-88h]
  __int64 v170; // [rsp+20h] [rbp-88h]
  int *v171; // [rsp+20h] [rbp-88h]
  _DWORD *v172; // [rsp+20h] [rbp-88h]
  int v173; // [rsp+28h] [rbp-80h]
  _DWORD *v174; // [rsp+28h] [rbp-80h]
  __int64 v175; // [rsp+30h] [rbp-78h]
  __int64 v176; // [rsp+30h] [rbp-78h]
  __int64 v177; // [rsp+30h] [rbp-78h]
  _DWORD *v178; // [rsp+38h] [rbp-70h]
  unsigned int v179; // [rsp+38h] [rbp-70h]
  __int64 v180; // [rsp+38h] [rbp-70h]
  unsigned int v181; // [rsp+40h] [rbp-68h]
  int v182; // [rsp+44h] [rbp-64h]
  int v183; // [rsp+44h] [rbp-64h]
  int v184; // [rsp+44h] [rbp-64h]
  __int64 v185; // [rsp+48h] [rbp-60h]
  __int64 v186; // [rsp+48h] [rbp-60h]
  int v187; // [rsp+48h] [rbp-60h]
  int v188; // [rsp+50h] [rbp-58h]
  __int64 v189; // [rsp+50h] [rbp-58h]
  __int64 v190; // [rsp+58h] [rbp-50h]
  __int64 v191; // [rsp+60h] [rbp-48h]
  __int64 v192; // [rsp+68h] [rbp-40h]

  v5 = a1;
  v6 = *(_QWORD *)(a1 + 88);
  v7 = *(_DWORD *)(a1 + 340);
  v8 = *(_QWORD *)(a1 + 128);
  v9 = *(_DWORD *)(a1 + 240);
  v10 = (int *)(v6 + 4LL * a4);
  v11 = (__int64 *)(a2 + 8LL * a4);
  v12 = *(_QWORD *)(a1 + 176);
  v13 = *(_QWORD *)(v5 + 40);
  v14 = *(_QWORD *)(v5 + 56);
  v15 = *(_QWORD *)(v5 + 160);
  v16 = *(_QWORD *)(v5 + 48);
  v17 = *v11;
  v18 = *(_BYTE *)(v5 + 356);
  if ( v7 <= 0 || !a3 )
  {
    v22 = *v10;
    v23 = (double *)(v8 + 8 * v22);
    v20 = v22;
    *(_QWORD *)v23 = v17;
    *v11 = 0;
    if ( v18 )
    {
      v24 = *(_DWORD *)(v13 + 4 * v22);
      v20 = (unsigned int)(v9 + 1);
      v25 = v24 + *(_DWORD *)(v14 + 4 * v22);
      v26 = *(_DWORD *)(v5 + 288) + 1;
      if ( v24 < v25 )
      {
        v27 = (int *)(v15 + 4LL * v24);
        v28 = v15 + 4 * ((unsigned int)(v25 - v24 - 1) + (__int64)v24) + 4;
        do
        {
          v29 = *v27;
          if ( *(_DWORD *)(v16 + 4 * v29) < v26 )
          {
            v26 = *(_DWORD *)(v16 + 4 * v29);
            v20 = (unsigned int)v29;
          }
          ++v27;
        }
        while ( (int *)v28 != v27 );
      }
      *v23 = *(double *)(v12 + 8LL * *(int *)(v16 + 4 * v22)) * *v23;
      if ( (int)v20 > v9 )
        return c_ekkbtrn(v5, a2, a3, v20);
      goto LABEL_14;
    }
LABEL_5:
    if ( (int)v20 > v9 )
      return c_ekkbtrn(v5, a2, a3, v20);
LABEL_14:
    v166 = a3;
    v165 = v20;
    IsSet = c_ekk_IsSet(*(_QWORD *)(v5 + 96), (unsigned int)v20);
    v20 = v165;
    a3 = v166;
    if ( IsSet )
    {
      v20 = *(unsigned int *)(*(_QWORD *)(v5 + 80) + 4LL * *(int *)(v5 + 324) + 4);
      *(double *)(v8 + 8LL * v165) = -*(double *)(v8 + 8LL * v165);
    }
    return c_ekkbtrn(v5, a2, a3, v20);
  }
  if ( !v18 )
  {
    v19 = *v10;
    *(_QWORD *)(v8 + 8 * v19) = v17;
    v20 = v19;
    *v11 = 0;
    goto LABEL_5;
  }
  *(_DWORD *)(a3 + 4) = a4;
  v31 = *(_DWORD *)(v5 + 240);
  v32 = *v10;
  *(_QWORD *)(v8 + 8 * v32) = v17;
  *(_DWORD *)(a3 + 4) = v32;
  *v11 = 0;
  if ( v31 <= 110 )
  {
    v20 = 0;
    return c_ekkbtrn(v5, a2, a3, v20);
  }
  v33 = *(double *)(v5 + 24);
  v173 = 1;
  v182 = 0;
  v190 = *(_QWORD *)(v5 + 72);
  v188 = *(_DWORD *)(v5 + 240);
  v167 = *(_QWORD *)(v5 + 112);
  v34 = 4LL * v188;
  v35 = *(_QWORD *)(v5 + 184);
  *(_DWORD *)(v34 + a5) = v32;
  v169 = v34 + a5;
  v185 = v35;
  v178 = (_DWORD *)(v34 + a5 + v34);
  v36 = 0;
  *v178 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v181 = v36;
      v37 = v36;
      v38 = *(int *)(v169 + v37 * 4);
      if ( *(_BYTE *)(v167 + v38) == 1 )
        goto LABEL_24;
      v39 = v178[v37];
      if ( *(_DWORD *)(v14 + 4 * v38) == v39 )
        break;
      v40 = *(_DWORD *)(v15 + 4LL * (v39 + *(_DWORD *)(v13 + 4 * v38)));
      v178[v37] = v39 + 1;
      v41 = (_BYTE *)(v167 + v40);
      if ( !*v41 )
      {
        ++v173;
        *(_DWORD *)(v169 + v37 * 4 + 4) = v40;
        *v41 = 2;
        v36 = v173 - 1;
        v178[v37 + 1] = 0;
      }
    }
    *(_DWORD *)(a5 + 4LL * v182) = *(_DWORD *)(v169 + 4LL * v36);
    *(_BYTE *)(v167 + v38) = 1;
    ++v182;
LABEL_24:
    if ( !v36 )
      break;
    v173 = v36--;
  }
  v174 = (_DWORD *)(a3 + 4);
  v42 = v182 - 1;
  if ( !v182 )
  {
    if ( v188 > 99 )
    {
      LODWORD(v45) = 0;
      v60 = 99;
      goto LABEL_39;
    }
    goto LABEL_54;
  }
  v175 = v5;
  v43 = (int *)(a5 + 4LL * v42);
  v170 = v6;
  v44 = (__int64)&v43[-v42 - 1];
  v45 = 0;
  v46 = (int *)v44;
  do
  {
    v47 = *v43;
    v48 = (double *)(v8 + 8 * v47);
    v49 = *v43;
    v50 = *(double *)(v12 + 8LL * *(int *)(v16 + 4 * v47)) * *v48;
    *(_BYTE *)(v167 + v47) = 0;
    if ( fabs(v50) < v33 )
    {
      *v48 = 0.0;
    }
    else
    {
      v51 = *(int *)(v13 + 4 * v47);
      v52 = *(_DWORD *)(v14 + 4 * v47);
      *v48 = v50;
      v53 = v45 + 1;
      v174[v45] = v49;
      if ( (int)v51 < (int)v51 + v52 )
      {
        v54 = v15 + 4 * v51;
        v55 = (unsigned int)(v52 - 1) + 1LL;
        v56 = v185 + 8 * v51;
        v57 = 0;
        do
        {
          v58 = *(int *)(v54 + 4 * v57);
          v59 = *(double *)(v56 + 8 * v57++ - 8);
          *(double *)(v8 + 8 * v58) = *(double *)(v8 + 8 * v58) - v59 * v50;
        }
        while ( v55 != v57 );
      }
      v45 = v53;
    }
    --v43;
  }
  while ( v46 != v43 );
  v6 = v170;
  v5 = v175;
  v60 = 10 * v45 + 99;
  if ( v188 <= v60 )
  {
LABEL_54:
    sub_20FE80(v5, v8);
LABEL_55:
    sub_211940(v5, v8);
    return sub_20FA20(v5, (int *)(v6 + 4), v8, (double *)(a2 + 8), v174);
  }
  if ( (_DWORD)v45 )
  {
    v61 = (int *)(a3 + 4);
    do
    {
      v62 = *v61++;
      *(_BYTE *)(v167 + v62) = 1;
    }
    while ( (int *)(a3 + 4LL * (unsigned int)(v45 - 1) + 8) != v61 );
  }
LABEL_39:
  v63 = *(_QWORD *)(v5 + 144);
  v64 = *(_QWORD *)(v5 + 152);
  v65 = *(_QWORD *)(v5 + 136);
  v66 = *(_QWORD *)(v5 + 112);
  v67 = *(int *)(v5 + 360);
  v68 = 4 * (v67 + 1);
  v69 = *(_DWORD *)(v63 + v68);
  if ( (int)v67 <= 0 )
  {
    if ( (_DWORD)v45 )
      goto LABEL_57;
    goto LABEL_60;
  }
  v70 = v68 - 4;
  v191 = v5;
  v71 = (int *)(v63 + v70);
  v171 = (int *)(*(_QWORD *)(v5 + 232) + v70);
  v186 = v6;
  v176 = v63 + v70 - 4 - 4LL * (unsigned int)(v67 - 1);
  v72 = v69;
  do
  {
    v73 = *v71;
    v74 = *(double *)(v8 + 8LL * *v171);
    if ( v74 != 0.0 )
    {
      if ( v72 < v73 - 1 )
      {
        v183 = v72;
        v75 = 4LL * v72;
        v179 = (unsigned int)(v73 + -2 - v72) >> 1;
        v76 = 4 * (v72 + 2LL * v179 + 2);
        do
        {
          v77 = *(int *)(v65 + v75 + 4);
          v78 = *(_DWORD *)(v65 + v75 + 8);
          v79 = (double *)(v8 + 8 * v77);
          v80 = *(_DWORD *)(v65 + v75 + 4);
          v81 = (_BYTE *)(v66 + v77);
          *v79 = *(double *)(v64 + 2 * v75 + 8) * v74 + *v79;
          *(double *)(v8 + 8LL * v78) = *(double *)(v64 + 2 * v75 + 16) * v74 + *(double *)(v8 + 8LL * v78);
          if ( !*v81 )
          {
            LODWORD(v45) = v45 + 1;
            *v81 = 1;
            *(_DWORD *)(a3 + 4LL * (int)v45) = v80;
          }
          v82 = (_BYTE *)(v66 + v78);
          if ( !*v82 )
          {
            LODWORD(v45) = v45 + 1;
            *v82 = 1;
            *(_DWORD *)(a3 + 4LL * (int)v45) = v78;
          }
          v75 += 8;
        }
        while ( v76 != v75 );
        v72 = v183 + 2 * v179 + 2;
      }
      if ( v73 > v72 )
      {
        v83 = *(int *)(v65 + 4LL * v72 + 4);
        v84 = (double *)(v8 + 8 * v83);
        v85 = *(_DWORD *)(v65 + 4LL * v72 + 4);
        v86 = (_BYTE *)(v66 + v83);
        *v84 = v74 * *(double *)(v64 + 8LL * v72 + 8) + *v84;
        if ( !*v86 )
        {
          LODWORD(v45) = v45 + 1;
          *v86 = 1;
          *(_DWORD *)(a3 + 4LL * (int)v45) = v85;
        }
      }
    }
    --v71;
    --v171;
    v72 = v73;
  }
  while ( (int *)v176 != v71 );
  v6 = v186;
  v5 = v191;
  v60 = 10 * v45 + 99;
  if ( (_DWORD)v45 )
  {
LABEL_57:
    v87 = 0;
    do
    {
      v88 = *(int *)(a3 + 4 * v87++ + 4);
      *(_BYTE *)(v167 + v88) = 0;
    }
    while ( (int)v45 > (int)v87 );
  }
  if ( v188 <= v60 )
    goto LABEL_55;
LABEL_60:
  v89 = *(double *)(v5 + 24);
  if ( *(_DWORD *)(v5 + 284) )
  {
    v102 = *(_QWORD *)(v5 + 112);
    v103 = *(_QWORD *)(v5 + 184);
    v104 = *(_DWORD *)(v5 + 248);
    v184 = *(_DWORD *)(v5 + 240);
    v105 = v184;
    v106 = (_DWORD *)(a5 + 4LL * v184);
    v177 = *(_QWORD *)(v5 + 72);
    v189 = 4LL * v184 + *(_QWORD *)(v5 + 40);
    v172 = &v106[v184];
    if ( !(_DWORD)v45 )
      return 0;
    v180 = *(_QWORD *)(v5 + 160);
    v107 = (int *)(a3 + 4);
    v187 = 0;
    v108 = 4LL * v184 + *(_QWORD *)(v5 + 40);
    v192 = v5;
    v168 = a3 + 4LL * (unsigned int)(v45 - 1) + 8;
    do
    {
      v109 = *v107;
      if ( *(_BYTE *)(v102 + v109) != 1 )
      {
        if ( v104 <= (int)v109 )
        {
          *v106 = v109;
          v110 = 1;
          *v172 = *(_DWORD *)(v108 + 4 * v109);
          while ( 2 )
          {
            v113 = v110 - 1;
            v114 = (int)v106[v110 - 1];
            v115 = v110 - 1;
            v116 = (_BYTE *)(v102 + v114);
            v117 = v106[v115];
            if ( *(_BYTE *)(v102 + v114) == 1 || v104 > (int)v114 )
            {
              if ( v104 > v117 )
              {
                *(_DWORD *)(a5 + 4LL * --v105) = v117;
                *v116 = 1;
              }
            }
            else
            {
              v111 = v172[v113];
              if ( v111 != *(_DWORD *)(v108 + 4 * v114 + 4) )
              {
                v112 = *(int *)(v180 + 4LL * v111);
                v172[v113] = v111 + 1;
                v113 = v110;
                if ( !*(_BYTE *)(v102 + v112) )
                {
                  v106[v115 + 1] = v112;
                  *(_BYTE *)(v102 + v112) = 2;
                  v113 = v110 + 1;
                  v172[v115 + 1] = *(_DWORD *)(v108 + 4 * v112);
                }
LABEL_91:
                v110 = v113;
                continue;
              }
              *(_DWORD *)(a5 + 4LL * v187) = v117;
              *v116 = 1;
              ++v187;
            }
            break;
          }
          if ( v110 == 1 )
            goto LABEL_83;
          goto LABEL_91;
        }
        *(_DWORD *)(a5 + 4LL * --v105) = *v107;
        *(_BYTE *)(v102 + v109) = 1;
      }
LABEL_83:
      ++v107;
    }
    while ( (int *)v168 != v107 );
    result = *(unsigned int *)(v192 + 344);
    v118 = v187 - 1;
    if ( (_DWORD)result )
    {
      v119 = a2 + 8;
      if ( v187 )
      {
        v120 = v181;
        v121 = (int *)(a5 + 4LL * v118);
        v122 = (__int64)&v121[-v118 - 1];
        do
        {
          v123 = *v121;
          v124 = (double *)(v8 + 8 * v123);
          v125 = *v124;
          *v124 = 0.0;
          *(_BYTE *)(v102 + v123) = 0;
          if ( fabs(v125) <= v89 )
          {
            *v124 = 0.0;
          }
          else
          {
            v126 = (int)v120;
            v127 = *(_DWORD *)(v177 + 4 * v123);
            v128 = *(_DWORD *)(v189 + 4 * v123);
            v129 = *(_DWORD *)(v189 + 4 * v123 + 4);
            *(double *)(v119 + 8LL * (int)v120) = v125;
            if ( v129 > v128 )
            {
              v130 = v128;
              v131 = (unsigned int)(v129 - v128 - 1);
              v132 = v128 + 1LL;
              v133 = v132 + v131;
              while ( 1 )
              {
                v134 = *(int *)(v180 + 4 * v130);
                v135 = *(double *)(v103 + 8 * v130 - 8);
                v130 = v132;
                *(double *)(v8 + 8 * v134) = v135 * v125 + *(double *)(v8 + 8 * v134);
                if ( v133 == v132 )
                  break;
                ++v132;
              }
            }
            ++v120;
            v174[v126] = v127 - 1;
          }
          --v121;
        }
        while ( (int *)v122 != v121 );
        v181 = v120;
      }
      if ( v184 <= v105 )
      {
        return v181;
      }
      else
      {
        v136 = (int *)(a5 + 4LL * v105);
        result = v181;
        do
        {
          v137 = *v136;
          v138 = (double *)(v8 + 8 * v137);
          *(_BYTE *)(v102 + v137) = 0;
          v139 = *v138;
          *v138 = 0.0;
          if ( fabs(v139) > v89 )
          {
            v140 = *(_DWORD *)(v177 + 4 * v137);
            v141 = (int)result;
            result = (unsigned int)(result + 1);
            *(double *)(v119 + 8 * v141) = v139;
            v174[v141] = v140 - 1;
          }
          ++v136;
        }
        while ( v136 != (int *)(a5 + 4 * (v105 + (unsigned __int64)(unsigned int)(v184 - 1 - v105)) + 4) );
      }
    }
    else
    {
      if ( v187 )
      {
        v142 = (int *)(a5 + 4LL * v118);
        do
        {
          v143 = *v142;
          v144 = (double *)(v8 + 8 * v143);
          v145 = *v144;
          *v144 = 0.0;
          *(_BYTE *)(v102 + v143) = 0;
          if ( fabs(v145) <= v89 )
          {
            *v144 = 0.0;
          }
          else
          {
            v146 = *(int *)(v177 + 4 * v143);
            v147 = *(_DWORD *)(v189 + 4 * v143);
            v148 = *(_DWORD *)(v189 + 4 * v143 + 4);
            v149 = v146;
            *(double *)(a2 + 8 * v146) = v145;
            if ( v148 > v147 )
            {
              v150 = v147;
              v151 = (unsigned int)(v148 - v147 - 1);
              v152 = v147 + 1LL;
              v153 = v152 + v151;
              while ( 1 )
              {
                v154 = *(int *)(v180 + 4 * v150);
                v155 = *(double *)(v103 + 8 * v150 - 8);
                v150 = v152;
                *(double *)(v8 + 8 * v154) = v155 * v145 + *(double *)(v8 + 8 * v154);
                if ( v153 == v152 )
                  break;
                ++v152;
              }
            }
            v156 = (int)result;
            result = (unsigned int)(result + 1);
            v174[v156] = v149 - 1;
          }
          --v142;
        }
        while ( (int *)(a5 - 4) != v142 );
      }
      if ( v184 > v105 )
      {
        v157 = (int *)(a5 + 4LL * v105);
        do
        {
          v158 = *v157;
          v159 = (double *)(v8 + 8 * v158);
          *(_BYTE *)(v102 + v158) = 0;
          v160 = *v159;
          *v159 = 0.0;
          if ( fabs(v160) > v89 )
          {
            v161 = *(_DWORD *)(v177 + 4 * v158);
            *(double *)(a2 + 8LL * v161) = v160;
            v162 = (int)result;
            result = (unsigned int)(result + 1);
            v174[v162] = v161 - 1;
          }
          ++v157;
        }
        while ( (int *)(a5 + 4 * (v105 + (unsigned __int64)(unsigned int)(v184 - 1 - v105)) + 4) != v157 );
      }
    }
  }
  else
  {
    result = *(unsigned int *)(v5 + 344);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)v45 )
      {
        v90 = (int *)(a3 + 4);
        v91 = a3 + 4LL * (unsigned int)(v45 - 1) + 8;
        result = 0;
        do
        {
          v92 = *v90;
          v93 = (double *)(v8 + 8 * v92);
          v94 = *v93;
          if ( *v93 != 0.0 )
          {
            if ( fabs(v94) >= v89 )
            {
              v95 = *(_DWORD *)(v190 + 4 * v92);
              result = (unsigned int)(result + 1);
              *(double *)(a2 + 8LL * (int)result) = v94;
              *(_DWORD *)(a3 + 4LL * (int)result) = v95 - 1;
            }
            *v93 = 0.0;
          }
          ++v90;
        }
        while ( (int *)v91 != v90 );
        return result;
      }
      return 0;
    }
    if ( (_DWORD)v45 )
    {
      v96 = (int *)(a3 + 4);
      v97 = a3 + 4LL * (unsigned int)(v45 - 1) + 8;
      do
      {
        v98 = *v96;
        v99 = (double *)(v8 + 8 * v98);
        v100 = *v99;
        if ( *v99 != 0.0 )
        {
          if ( fabs(v100) >= v89 )
          {
            result = (unsigned int)(result + 1);
            v101 = *(_DWORD *)(v190 + 4 * v98);
            *(double *)(a2 + 8LL * v101) = v100;
            *(_DWORD *)(a3 + 4LL * (int)result) = v101 - 1;
          }
          *v99 = 0.0;
        }
        ++v96;
      }
      while ( (int *)v97 != v96 );
    }
  }
  return result;
}

