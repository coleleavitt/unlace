/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B638
// Address: 0x0007B638

//----- (0007B638) --------------------------------------------------------
int __fastcall sub_7B638(void **a1, unsigned int *a2, int a3)
{
  void *v5; // r12
  unsigned int v7; // r7
  void *v8; // lr
  _DWORD *v9; // r1
  int *v10; // r4
  unsigned int v11; // r3
  unsigned int v12; // r8
  _DWORD *v13; // r0
  char *v14; // r4
  unsigned int v15; // r0
  unsigned int v16; // r1
  int v17; // r3
  bool v18; // cc
  unsigned int v19; // r12
  unsigned int v20; // r6
  char *v21; // r0
  __int64 v22; // kr00_8
  char *v23; // r0
  int v24; // r12
  char *v25; // r3
  char *v26; // r6
  int v27; // r0
  int v28; // r1
  int v29; // r2
  char *v30; // r4
  int v31; // r0
  char *v32; // r12
  int v33; // r3
  char *v34; // r2
  int v35; // r10
  unsigned int v36; // r2
  int v37; // r1
  int v38; // r3
  int v39; // r2
  char *v40; // r7
  int v41; // r3
  char *v42; // r6
  int v43; // r0
  unsigned int v44; // r0
  unsigned int v45; // r1
  unsigned int v46; // r12
  unsigned int v47; // r6
  unsigned int v48; // r1
  int v49; // r2
  char *v50; // r4
  int v52; // r4
  void *v53; // r0
  _DWORD *v54; // r10
  _DWORD *v55; // r11
  unsigned int v56; // r0
  unsigned int v57; // r1
  unsigned int v58; // r12
  unsigned int v59; // r6
  char *v60; // r0
  __int64 v61; // kr08_8
  int v62; // r12
  char *v63; // r3
  char *v64; // r6
  int v65; // r0
  int v66; // r1
  int v67; // r2
  char *v68; // r10
  unsigned int v69; // r0
  unsigned int v70; // r1
  int v71; // r3
  unsigned int v72; // r12
  unsigned int v73; // r6
  unsigned int v74; // r1
  int v75; // r2
  char *v76; // r10
  int v77; // r12
  unsigned int v78; // r10
  _DWORD *v79; // r4
  unsigned int v80; // r1
  int v81; // r2
  char *v82; // r3
  char *v83; // r8
  unsigned int v84; // r0
  unsigned int v85; // r1
  unsigned int v86; // lr
  unsigned int v87; // r6
  char *v88; // r0
  __int64 v89; // kr10_8
  char *v90; // r0
  int v91; // lr
  char *v92; // r6
  char *v93; // r12
  int v94; // r0
  int v95; // r1
  int v96; // r2
  __int64 v97; // kr18_8
  unsigned int v98; // r0
  unsigned int v99; // r1
  unsigned int v100; // r6
  char *v101; // r0
  __int64 v102; // kr20_8
  int v103; // r12
  char *v104; // r3
  char *v105; // r6
  int v106; // r0
  int v107; // r1
  int v108; // r2
  unsigned int v109; // r1
  int v110; // r2
  char *v111; // r3
  unsigned int v112; // r0
  unsigned int v113; // r1
  unsigned int v114; // r12
  unsigned int v115; // r6
  unsigned int v116; // r1
  int v117; // r2
  char *v118; // r4
  char *v119; // r0
  __int64 v120; // kr28_8
  int v121; // r12
  char *v122; // r3
  char *v123; // r6
  int v124; // r0
  int v125; // r1
  int v126; // r2
  char *v127; // r10
  int v128; // r3
  unsigned int v129; // r0
  unsigned int v130; // r1
  unsigned int v131; // r12
  unsigned int v132; // r8
  unsigned int v133; // r1
  int v134; // r2
  char *v135; // r10
  char *v136; // r0
  __int64 v137; // kr30_8
  char *v138; // r0
  int v139; // r12
  char *v140; // r6
  char *v141; // r3
  int v142; // r0
  int v143; // r1
  int v144; // r2
  char *v145; // r0
  __int64 v146; // kr38_8
  int v147; // r12
  char *v148; // r3
  char *v149; // r6
  int v150; // r0
  int v151; // r1
  int v152; // r2
  char *v153; // r0
  __int64 v154; // r2
  char *v155; // r0
  int v156; // lr
  char *v157; // r6
  char *v158; // r12
  int v159; // r0
  int v160; // r1
  int v161; // r2
  char *v162; // r0
  __int64 v163; // kr40_8
  char *v164; // r0
  int v165; // r12
  char *v166; // r3
  char *v167; // lr
  int v168; // r0
  int v169; // r1
  int v170; // r2
  unsigned int v171; // r1
  int v172; // r2
  char *v173; // r10
  char *v174; // r0
  __int64 v175; // kr48_8
  int v176; // r12
  char *v177; // r6
  int v178; // r3
  int v179; // r0
  int v180; // r1
  int v181; // r2
  char *v182; // r0
  __int64 v183; // kr50_8
  int v184; // r6
  char *v185; // r3
  char *v186; // r12
  int v187; // r0
  int v188; // r1
  int v189; // r2
  char *v190; // r0
  void *v191; // r3
  int v192; // r7
  char *v193; // r0
  int v194; // r7
  char *v195; // r3
  char *v196; // r6
  int v197; // r0
  int v198; // r1
  int v199; // r2
  char *v200; // r0
  __int64 v201; // kr60_8
  int v202; // r12
  char *v203; // r3
  char *v204; // lr
  int v205; // r0
  int v206; // r1
  int v207; // r2
  unsigned int v208; // r1
  int v209; // r2
  char *v210; // r10
  char *v211; // r0
  __int64 v212; // kr68_8
  int v213; // r12
  char *v214; // r6
  int v215; // r3
  int v216; // r0
  int v217; // r1
  int v218; // r2
  char *v219; // r0
  __int64 v220; // kr70_8
  int v221; // lr
  char *v222; // r12
  int v223; // r3
  int v224; // r0
  int v225; // r1
  int v226; // r2
  char *v227; // r0
  __int64 v228; // kr78_8
  char *v229; // r0
  int v230; // r6
  char *v231; // r3
  char *v232; // r12
  int v233; // r0
  int v234; // r1
  int v235; // r2
  int v236; // [sp+8h] [bp-3Ch]
  void *dest; // [sp+Ch] [bp-38h]
  void *desta; // [sp+Ch] [bp-38h]
  char *v239; // [sp+14h] [bp-30h]
  unsigned int v240; // [sp+18h] [bp-2Ch]
  int v241; // [sp+1Ch] [bp-28h]
  unsigned int v242; // [sp+24h] [bp-20h] BYREF
  unsigned int v243; // [sp+28h] [bp-1Ch]
  int v244; // [sp+2Ch] [bp-18h]
  unsigned int v245; // [sp+30h] [bp-14h]
  unsigned int v246; // [sp+34h] [bp-10h]
  int v247; // [sp+38h] [bp-Ch]

  v5 = a1[1];
  v7 = *a2;
  v8 = v5;
  v9 = *a1;
  if ( v5 )
  {
    v10 = &v9[2 * ((_DWORD)v5 + 0x1FFFFFFF)];
    v11 = v10[1];
    if ( v11 == v7 )
    {
      if ( *(_BYTE *)(a3 + 16) )
      {
        v127 = *(char **)a3;
        v128 = *(_DWORD *)(a3 + 4);
        v129 = *v10;
        v130 = v10[1];
        v18 = *(_DWORD *)a3 > (unsigned int)&v242;
        LOBYTE(v244) = 1;
        v131 = v128 + 1;
        v132 = *(_DWORD *)(a3 + 8);
        v242 = v129;
        v243 = v130;
        if ( v18 || &v242 >= (unsigned int *)&v127[12 * v132] )
        {
          if ( v132 < v131 )
          {
            v162 = (char *)sub_77EB0(a3, nullptr, v128 + 1, 0xCu);
            v163 = *(_QWORD *)(a3 + 4);
            v127 = v162;
            *(_DWORD *)(a3 + 8) = v132;
            v164 = *(char **)a3;
            v165 = v163 - 1;
            if ( (int)v163 - 1 >= 0 )
            {
              v166 = v164 + 12;
              v167 = v127 + 12;
              do
              {
                v168 = *((_DWORD *)v166 - 3);
                v169 = *((_DWORD *)v166 - 2);
                v170 = *((_DWORD *)v166 - 1);
                --v165;
                v166 += 12;
                *((_DWORD *)v167 - 3) = v168;
                *((_DWORD *)v167 - 2) = v169;
                *((_DWORD *)v167 - 1) = v170;
                v167 += 12;
              }
              while ( v165 != -1 );
              v164 = *(char **)a3;
            }
            sub_77E08(v164);
            v128 = *(_DWORD *)(a3 + 4);
            *(_DWORD *)a3 = v127;
            *(_DWORD *)(a3 + 8) = HIDWORD(v163);
          }
          v133 = v243;
          v134 = v244;
          v135 = &v127[12 * v128];
          *(_DWORD *)v135 = v242;
          *((_DWORD *)v135 + 1) = v133;
          *((_DWORD *)v135 + 2) = v134;
        }
        else
        {
          v245 = v242;
          v246 = v243;
          v247 = v244;
          if ( v132 < v131 )
          {
            v219 = (char *)sub_77EB0(a3, nullptr, v131, 0xCu);
            v220 = *(_QWORD *)(a3 + 4);
            v127 = v219;
            *(_DWORD *)(a3 + 8) = v132;
            v221 = v220 - 1;
            if ( (int)v220 - 1 >= 0 )
            {
              v222 = v219 + 12;
              v223 = *(_DWORD *)a3 + 12;
              do
              {
                v224 = *(_DWORD *)(v223 - 12);
                v225 = *(_DWORD *)(v223 - 8);
                v226 = *(_DWORD *)(v223 - 4);
                --v221;
                v223 += 12;
                *((_DWORD *)v222 - 3) = v224;
                *((_DWORD *)v222 - 2) = v225;
                *((_DWORD *)v222 - 1) = v226;
                v222 += 12;
              }
              while ( v221 != -1 );
            }
            sub_77E08(*(void **)a3);
            v128 = *(_DWORD *)(a3 + 4);
            *(_DWORD *)a3 = v127;
            *(_DWORD *)(a3 + 8) = HIDWORD(v220);
          }
          v171 = v246;
          v172 = v247;
          v173 = &v127[12 * v128];
          *(_DWORD *)v173 = v245;
          *((_DWORD *)v173 + 1) = v171;
          *((_DWORD *)v173 + 2) = v172;
        }
        ++*(_DWORD *)(a3 + 4);
      }
      v10[1] = a2[1];
      if ( *(_BYTE *)(a3 + 16) )
      {
        v112 = *v10;
        v113 = v10[1];
        v14 = *(char **)a3;
        v17 = *(_DWORD *)(a3 + 4);
        v242 = v112;
        v243 = v113;
        LOBYTE(v244) = 0;
        v114 = v17 + 1;
        v115 = *(_DWORD *)(a3 + 8);
        if ( v14 > (char *)&v242 || &v242 >= (unsigned int *)&v14[12 * v115] )
        {
          if ( v115 >= v114 )
            goto LABEL_45;
          v119 = (char *)sub_77EB0(a3, nullptr, v17 + 1, 0xCu);
          v120 = *(_QWORD *)(a3 + 4);
          v14 = v119;
          *(_DWORD *)(a3 + 8) = v115;
          v23 = *(char **)a3;
          v121 = v120 - 1;
          v22 = v120;
          if ( (int)v120 - 1 < 0 )
            goto LABEL_14;
          v122 = v23 + 12;
          v123 = v14 + 12;
          do
          {
            v124 = *((_DWORD *)v122 - 3);
            v125 = *((_DWORD *)v122 - 2);
            v126 = *((_DWORD *)v122 - 1);
            --v121;
            v122 += 12;
            *((_DWORD *)v123 - 3) = v124;
            *((_DWORD *)v123 - 2) = v125;
            *((_DWORD *)v123 - 1) = v126;
            v123 += 12;
          }
          while ( v121 != -1 );
          goto LABEL_13;
        }
        v245 = v242;
        v246 = v243;
        v247 = v244;
        if ( v115 >= v114 )
          goto LABEL_99;
        v211 = (char *)sub_77EB0(a3, nullptr, v17 + 1, 0xCu);
        v212 = *(_QWORD *)(a3 + 4);
        v14 = v211;
        *(_DWORD *)(a3 + 8) = v115;
        v213 = v212 - 1;
        v137 = v212;
        if ( (int)v212 - 1 >= 0 )
        {
          v214 = v211 + 12;
          v215 = *(_DWORD *)a3 + 12;
          do
          {
            v216 = *(_DWORD *)(v215 - 12);
            v217 = *(_DWORD *)(v215 - 8);
            v218 = *(_DWORD *)(v215 - 4);
            --v213;
            v215 += 12;
            *((_DWORD *)v214 - 3) = v216;
            *((_DWORD *)v214 - 2) = v217;
            *((_DWORD *)v214 - 1) = v218;
            v214 += 12;
          }
          while ( v213 != -1 );
        }
        goto LABEL_115;
      }
      goto LABEL_65;
    }
    v12 = a2[1];
    if ( v11 < v7 )
    {
      if ( (char *)v5 + 1 > a1[2] )
      {
        v13 = sub_77EB0((int)a1, v9, (unsigned int)v5 + 1, 8u);
        v5 = a1[1];
        v9 = v13;
        *a1 = v13;
      }
      v9[2 * (_DWORD)v5] = v7;
      v9[2 * (_DWORD)v5 + 1] = v12;
      a1[1] = (char *)a1[1] + 1;
      if ( *(_BYTE *)(a3 + 16) )
      {
        v14 = *(char **)a3;
        v15 = *a2;
        v16 = a2[1];
        v17 = *(_DWORD *)(a3 + 4);
        v18 = *(_DWORD *)a3 > (unsigned int)&v242;
        LOBYTE(v244) = 0;
        v242 = v15;
        v243 = v16;
        v19 = v17 + 1;
        v20 = *(_DWORD *)(a3 + 8);
        if ( v18 || &v242 >= (unsigned int *)&v14[12 * v20] )
        {
          if ( v20 >= v19 )
          {
LABEL_45:
            v48 = v243;
            v49 = v244;
            v50 = &v14[12 * v17];
            *(_DWORD *)v50 = v242;
            *((_DWORD *)v50 + 1) = v48;
            *((_DWORD *)v50 + 2) = v49;
LABEL_46:
            ++*(_DWORD *)(a3 + 4);
            a1[3] = nullptr;
            return 1;
          }
          v21 = (char *)sub_77EB0(a3, nullptr, v17 + 1, 0xCu);
          v22 = *(_QWORD *)(a3 + 4);
          v14 = v21;
          *(_DWORD *)(a3 + 8) = v20;
          v23 = *(char **)a3;
          v24 = v22 - 1;
          if ( (int)v22 - 1 < 0 )
          {
LABEL_14:
            sub_77E08(v23);
            v17 = *(_DWORD *)(a3 + 4);
            *(_DWORD *)a3 = v14;
            *(_DWORD *)(a3 + 8) = HIDWORD(v22);
            goto LABEL_45;
          }
          v25 = v23 + 12;
          v26 = v14 + 12;
          do
          {
            v27 = *((_DWORD *)v25 - 3);
            v28 = *((_DWORD *)v25 - 2);
            v29 = *((_DWORD *)v25 - 1);
            --v24;
            v25 += 12;
            *((_DWORD *)v26 - 3) = v27;
            *((_DWORD *)v26 - 2) = v28;
            *((_DWORD *)v26 - 1) = v29;
            v26 += 12;
          }
          while ( v24 != -1 );
LABEL_13:
          v23 = *(char **)a3;
          goto LABEL_14;
        }
        v245 = v242;
        v246 = v243;
        v247 = v244;
        if ( v20 < v19 )
        {
          v200 = (char *)sub_77EB0(a3, nullptr, v17 + 1, 0xCu);
          v201 = *(_QWORD *)(a3 + 4);
          v14 = v200;
          *(_DWORD *)(a3 + 8) = v20;
          v138 = *(char **)a3;
          v202 = v201 - 1;
          v137 = v201;
          if ( (int)v201 - 1 < 0 )
            goto LABEL_116;
          v203 = v138 + 12;
          v204 = v14 + 12;
          do
          {
            v205 = *((_DWORD *)v203 - 3);
            v206 = *((_DWORD *)v203 - 2);
            v207 = *((_DWORD *)v203 - 1);
            --v202;
            v203 += 12;
            *((_DWORD *)v204 - 3) = v205;
            *((_DWORD *)v204 - 2) = v206;
            *((_DWORD *)v204 - 1) = v207;
            v204 += 12;
          }
          while ( v202 != -1 );
          goto LABEL_115;
        }
LABEL_99:
        v116 = v246;
        v117 = v247;
        v118 = &v14[12 * v17];
        *(_DWORD *)v118 = v245;
        *((_DWORD *)v118 + 1) = v116;
        *((_DWORD *)v118 + 2) = v117;
        goto LABEL_46;
      }
      goto LABEL_65;
    }
  }
  else
  {
    v12 = a2[1];
  }
  v30 = (char *)*a1;
  v31 = (8 * (int)v5) >> 3;
  v32 = (char *)&v9[2 * (_DWORD)v5];
  while ( v31 > 0 )
  {
    v33 = v31 >> 1;
    v34 = &v30[8 * (v31 >> 1)];
    if ( v7 > *((_DWORD *)v34 + 1) )
    {
      v35 = v31 >> 1;
      v33 = v31;
    }
    else
    {
      if ( !v33 )
        break;
      while ( 1 )
      {
        v35 = v33 >> 1;
        v34 = &v30[8 * (v33 >> 1)];
        if ( *((_DWORD *)v34 + 1) < v7 )
          break;
        v33 >>= 1;
        if ( !v35 )
          goto LABEL_22;
      }
    }
    v30 = v34 + 8;
    v31 = v33 - 1 - v35;
  }
LABEL_22:
  if ( v30 == v32 )
  {
    if ( (char *)v8 + 1 > a1[2] )
      *a1 = sub_77EB0((int)a1, v9, (unsigned int)v8 + 1, 8u);
    v97 = *(_QWORD *)a1;
    *((_DWORD *)*a1 + 2 * (_DWORD)a1[1]) = v7;
    *(_DWORD *)(v97 + 8 * HIDWORD(v97) + 4) = v12;
    a1[1] = (char *)a1[1] + 1;
    if ( *(_BYTE *)(a3 + 16) )
    {
      v14 = *(char **)a3;
      v98 = *a2;
      v99 = a2[1];
      LOBYTE(v244) = 0;
      v100 = *(_DWORD *)(a3 + 8);
      v242 = v98;
      v243 = v99;
      if ( v14 > (char *)&v242 || &v242 >= (unsigned int *)&v14[12 * v100] )
      {
        v17 = *(_DWORD *)(a3 + 4);
        if ( v17 + 1 <= v100 )
          goto LABEL_45;
        v101 = (char *)sub_77EB0(a3, nullptr, v17 + 1, 0xCu);
        v102 = *(_QWORD *)(a3 + 4);
        v14 = v101;
        *(_DWORD *)(a3 + 8) = v100;
        v23 = *(char **)a3;
        v103 = v102 - 1;
        v22 = v102;
        if ( (int)v102 - 1 < 0 )
          goto LABEL_14;
        v104 = v23 + 12;
        v105 = v14 + 12;
        do
        {
          v106 = *((_DWORD *)v104 - 3);
          v107 = *((_DWORD *)v104 - 2);
          v108 = *((_DWORD *)v104 - 1);
          --v103;
          v104 += 12;
          *((_DWORD *)v105 - 3) = v106;
          *((_DWORD *)v105 - 2) = v107;
          *((_DWORD *)v105 - 1) = v108;
          v105 += 12;
        }
        while ( v103 != -1 );
        goto LABEL_13;
      }
      v17 = *(_DWORD *)(a3 + 4);
      v245 = v242;
      v246 = v243;
      v247 = v244;
      if ( v100 < v17 + 1 )
      {
        v182 = (char *)sub_77EB0(a3, nullptr, v17 + 1, 0xCu);
        v183 = *(_QWORD *)(a3 + 4);
        v14 = v182;
        *(_DWORD *)(a3 + 8) = v100;
        v138 = *(char **)a3;
        v184 = v183 - 1;
        v137 = v183;
        if ( (int)v183 - 1 < 0 )
          goto LABEL_116;
        v185 = v138 + 12;
        v186 = v14 + 12;
        do
        {
          v187 = *((_DWORD *)v185 - 3);
          v188 = *((_DWORD *)v185 - 2);
          v189 = *((_DWORD *)v185 - 1);
          --v184;
          v185 += 12;
          *((_DWORD *)v186 - 3) = v187;
          *((_DWORD *)v186 - 2) = v188;
          *((_DWORD *)v186 - 1) = v189;
          v186 += 12;
        }
        while ( v184 != -1 );
        goto LABEL_115;
      }
      goto LABEL_99;
    }
    goto LABEL_65;
  }
  v36 = *(_DWORD *)v30;
  if ( *(_DWORD *)v30 <= v7 )
  {
    if ( *((_DWORD *)v30 + 1) >= v12 )
      return 0;
    if ( v36 <= v12 )
    {
LABEL_25:
      v37 = (v32 - v30) >> 3;
      v38 = *(_DWORD *)v30;
      if ( v36 >= v7 )
        v38 = v7;
      v39 = (int)v32;
      v40 = v30;
      v236 = v38;
      while ( v37 > 0 )
      {
        v41 = v37 >> 1;
        v42 = &v40[8 * (v37 >> 1)];
        if ( *((_DWORD *)v42 + 1) > v12 )
        {
          if ( !v41 )
            break;
          while ( 1 )
          {
            v43 = v41 >> 1;
            v42 = &v40[8 * (v41 >> 1)];
            if ( *((_DWORD *)v42 + 1) <= v12 )
              break;
            v41 >>= 1;
            if ( !v43 )
              goto LABEL_34;
          }
        }
        else
        {
          v43 = v37 >> 1;
          v41 = v37;
        }
        v40 = v42 + 8;
        v37 = v41 - 1 - v43;
      }
LABEL_34:
      if ( v32 == v40 )
        goto LABEL_72;
      if ( *(_DWORD *)v40 <= v12 )
      {
        v12 = *((_DWORD *)v40 + 1);
        v40 += 8;
      }
      if ( v40 == v30 )
      {
        if ( *(_BYTE *)(a3 + 16) )
        {
          v68 = *(char **)a3;
          v69 = *(_DWORD *)v30;
          v70 = *((_DWORD *)v30 + 1);
          v71 = *(_DWORD *)(a3 + 4);
          v18 = *(_DWORD *)a3 > (unsigned int)&v242;
          LOBYTE(v244) = 1;
          v242 = v69;
          v243 = v70;
          v72 = v71 + 1;
          v73 = *(_DWORD *)(a3 + 8);
          if ( v18 || &v242 >= (unsigned int *)&v68[12 * v73] )
          {
            if ( v73 < v72 )
            {
              v190 = (char *)sub_77EB0(a3, nullptr, v72, 0xCu);
              v191 = *(void **)(a3 + 8);
              v192 = *(_DWORD *)(a3 + 4);
              v68 = v190;
              *(_DWORD *)(a3 + 8) = v73;
              v193 = *(char **)a3;
              v194 = v192 - 1;
              desta = v191;
              if ( v194 >= 0 )
              {
                v195 = v193 + 12;
                v196 = v68 + 12;
                do
                {
                  v197 = *((_DWORD *)v195 - 3);
                  v198 = *((_DWORD *)v195 - 2);
                  v199 = *((_DWORD *)v195 - 1);
                  --v194;
                  v195 += 12;
                  *((_DWORD *)v196 - 3) = v197;
                  *((_DWORD *)v196 - 2) = v198;
                  *((_DWORD *)v196 - 1) = v199;
                  v196 += 12;
                }
                while ( v194 != -1 );
                v193 = *(char **)a3;
              }
              sub_77E08(v193);
              v71 = *(_DWORD *)(a3 + 4);
              *(_DWORD *)a3 = v68;
              *(_DWORD *)(a3 + 8) = desta;
            }
            v74 = v243;
            v75 = v244;
            v76 = &v68[12 * v71];
            *(_DWORD *)v76 = v242;
            *((_DWORD *)v76 + 1) = v74;
            *((_DWORD *)v76 + 2) = v75;
          }
          else
          {
            v245 = v242;
            v246 = v243;
            v247 = v244;
            if ( v73 < v72 )
            {
              v227 = (char *)sub_77EB0(a3, nullptr, v72, 0xCu);
              v228 = *(_QWORD *)(a3 + 4);
              v68 = v227;
              *(_DWORD *)(a3 + 8) = v73;
              v229 = *(char **)a3;
              v230 = v228 - 1;
              if ( (int)v228 - 1 >= 0 )
              {
                v231 = v229 + 12;
                v232 = v68 + 12;
                do
                {
                  v233 = *((_DWORD *)v231 - 3);
                  v234 = *((_DWORD *)v231 - 2);
                  v235 = *((_DWORD *)v231 - 1);
                  --v230;
                  v231 += 12;
                  *((_DWORD *)v232 - 3) = v233;
                  *((_DWORD *)v232 - 2) = v234;
                  *((_DWORD *)v232 - 1) = v235;
                  v232 += 12;
                }
                while ( v230 != -1 );
                v229 = *(char **)a3;
              }
              sub_77E08(v229);
              v71 = *(_DWORD *)(a3 + 4);
              *(_DWORD *)a3 = v68;
              *(_DWORD *)(a3 + 8) = HIDWORD(v228);
            }
            v208 = v246;
            v209 = v247;
            v210 = &v68[12 * v71];
            *(_DWORD *)v210 = v245;
            *((_DWORD *)v210 + 1) = v208;
            *((_DWORD *)v210 + 2) = v209;
          }
          ++*(_DWORD *)(a3 + 4);
        }
      }
      else
      {
LABEL_72:
        if ( *(_BYTE *)(a3 + 16) && v30 < v40 )
        {
          v239 = v30;
          dest = v30 + 8;
          v77 = *(_DWORD *)(a3 + 4);
          v78 = (unsigned int)&v30[((unsigned int)&v40[-1 - (_DWORD)v30] & 0xFFFFFFF8) + 16];
          v79 = v30 + 8;
          v240 = v12;
          do
          {
            v83 = *(char **)a3;
            v84 = *(v79 - 2);
            v85 = *(v79 - 1);
            v86 = v77 + 1;
            LOBYTE(v244) = 1;
            v87 = *(_DWORD *)(a3 + 8);
            v242 = v84;
            v243 = v85;
            if ( v83 <= (char *)&v242 && &v242 < (unsigned int *)&v83[12 * v87] )
            {
              v245 = v242;
              v246 = v243;
              v247 = v244;
              if ( v87 < v86 )
              {
                v153 = (char *)sub_77EB0(a3, nullptr, v77 + 1, 0xCu);
                v154 = *(_QWORD *)(a3 + 4);
                v83 = v153;
                *(_DWORD *)(a3 + 8) = v87;
                v155 = *(char **)a3;
                v156 = v154 - 1;
                v241 = HIDWORD(v154);
                if ( (int)v154 - 1 >= 0 )
                {
                  v157 = v155 + 12;
                  v158 = v83 + 12;
                  do
                  {
                    v159 = *((_DWORD *)v157 - 3);
                    v160 = *((_DWORD *)v157 - 2);
                    v161 = *((_DWORD *)v157 - 1);
                    --v156;
                    v157 += 12;
                    *((_DWORD *)v158 - 3) = v159;
                    *((_DWORD *)v158 - 2) = v160;
                    *((_DWORD *)v158 - 1) = v161;
                    v158 += 12;
                  }
                  while ( v156 != -1 );
                  v155 = *(char **)a3;
                }
                sub_77E08(v155);
                v77 = *(_DWORD *)(a3 + 4);
                *(_DWORD *)a3 = v83;
                *(_DWORD *)(a3 + 8) = v241;
              }
              v109 = v246;
              v110 = v247;
              v111 = &v83[12 * v77];
              *(_DWORD *)v111 = v245;
              *((_DWORD *)v111 + 1) = v109;
              *((_DWORD *)v111 + 2) = v110;
            }
            else
            {
              if ( v87 < v86 )
              {
                v88 = (char *)sub_77EB0(a3, nullptr, v77 + 1, 0xCu);
                v89 = *(_QWORD *)(a3 + 4);
                v83 = v88;
                *(_DWORD *)(a3 + 8) = v87;
                v90 = *(char **)a3;
                v91 = v89 - 1;
                if ( (int)v89 - 1 >= 0 )
                {
                  v92 = v90 + 12;
                  v93 = v83 + 12;
                  do
                  {
                    v94 = *((_DWORD *)v92 - 3);
                    v95 = *((_DWORD *)v92 - 2);
                    v96 = *((_DWORD *)v92 - 1);
                    --v91;
                    v92 += 12;
                    *((_DWORD *)v93 - 3) = v94;
                    *((_DWORD *)v93 - 2) = v95;
                    *((_DWORD *)v93 - 1) = v96;
                    v93 += 12;
                  }
                  while ( v91 != -1 );
                  v90 = *(char **)a3;
                }
                sub_77E08(v90);
                v77 = *(_DWORD *)(a3 + 4);
                *(_DWORD *)a3 = v83;
                *(_DWORD *)(a3 + 8) = HIDWORD(v89);
              }
              v80 = v243;
              v81 = v244;
              v82 = &v83[12 * v77];
              *(_DWORD *)v82 = v242;
              *((_DWORD *)v82 + 1) = v80;
              *((_DWORD *)v82 + 2) = v81;
            }
            v79 += 2;
            v77 = *(_DWORD *)(a3 + 4) + 1;
            *(_DWORD *)(a3 + 4) = v77;
          }
          while ( (_DWORD *)v78 != v79 );
          v30 = v239;
          v12 = v240;
          v39 = (int)*a1 + 8 * (_DWORD)a1[1];
        }
        else
        {
          dest = v30 + 8;
        }
        memmove(dest, v40, v39 - (_DWORD)v40);
        a1[1] = (char *)a1[1] - ((v40 - (_BYTE *)dest) >> 3);
      }
      *(_DWORD *)v30 = v236;
      *((_DWORD *)v30 + 1) = v12;
      if ( *(_BYTE *)(a3 + 16) )
      {
        v44 = *(_DWORD *)v30;
        v45 = *((_DWORD *)v30 + 1);
        v14 = *(char **)a3;
        v17 = *(_DWORD *)(a3 + 4);
        v242 = v44;
        v243 = v45;
        LOBYTE(v244) = 0;
        v46 = v17 + 1;
        v47 = *(_DWORD *)(a3 + 8);
        if ( v14 > (char *)&v242 || &v242 >= (unsigned int *)&v14[12 * v47] )
        {
          if ( v47 >= v46 )
            goto LABEL_45;
          v145 = (char *)sub_77EB0(a3, nullptr, v17 + 1, 0xCu);
          v146 = *(_QWORD *)(a3 + 4);
          v14 = v145;
          *(_DWORD *)(a3 + 8) = v47;
          v23 = *(char **)a3;
          v147 = v146 - 1;
          v22 = v146;
          if ( (int)v146 - 1 < 0 )
            goto LABEL_14;
          v148 = v23 + 12;
          v149 = v14 + 12;
          do
          {
            v150 = *((_DWORD *)v148 - 3);
            v151 = *((_DWORD *)v148 - 2);
            v152 = *((_DWORD *)v148 - 1);
            --v147;
            v148 += 12;
            *((_DWORD *)v149 - 3) = v150;
            *((_DWORD *)v149 - 2) = v151;
            *((_DWORD *)v149 - 1) = v152;
            v149 += 12;
          }
          while ( v147 != -1 );
          goto LABEL_13;
        }
        v245 = v242;
        v246 = v243;
        v247 = v244;
        if ( v47 >= v46 )
          goto LABEL_99;
        v136 = (char *)sub_77EB0(a3, nullptr, v17 + 1, 0xCu);
        v137 = *(_QWORD *)(a3 + 4);
        v14 = v136;
        *(_DWORD *)(a3 + 8) = v47;
        v138 = *(char **)a3;
        v139 = v137 - 1;
        if ( (int)v137 - 1 < 0 )
        {
LABEL_116:
          sub_77E08(v138);
          v17 = *(_DWORD *)(a3 + 4);
          *(_DWORD *)a3 = v14;
          *(_DWORD *)(a3 + 8) = HIDWORD(v137);
          goto LABEL_99;
        }
        v140 = v138 + 12;
        v141 = v14 + 12;
        do
        {
          v142 = *((_DWORD *)v140 - 3);
          v143 = *((_DWORD *)v140 - 2);
          v144 = *((_DWORD *)v140 - 1);
          --v139;
          v140 += 12;
          *((_DWORD *)v141 - 3) = v142;
          *((_DWORD *)v141 - 2) = v143;
          *((_DWORD *)v141 - 1) = v144;
          v141 += 12;
        }
        while ( v139 != -1 );
LABEL_115:
        v138 = *(char **)a3;
        goto LABEL_116;
      }
      goto LABEL_65;
    }
  }
  else if ( v36 <= v12 )
  {
    goto LABEL_25;
  }
  v52 = v30 - (char *)v9;
  if ( (char *)v8 + 1 > a1[2] )
  {
    v53 = sub_77EB0((int)a1, v9, (unsigned int)v8 + 1, 8u);
    v8 = a1[1];
    *a1 = v53;
  }
  v54 = *a1;
  v55 = (char *)*a1 + v52;
  memmove(v55 + 2, v55, 8 * (_DWORD)v8 - v52);
  *(_DWORD *)((char *)v54 + v52) = v7;
  v55[1] = v12;
  a1[1] = (char *)a1[1] + 1;
  if ( *(_BYTE *)(a3 + 16) )
  {
    v14 = *(char **)a3;
    v56 = *a2;
    v57 = a2[1];
    v17 = *(_DWORD *)(a3 + 4);
    v18 = *(_DWORD *)a3 > (unsigned int)&v242;
    LOBYTE(v244) = 0;
    v242 = v56;
    v243 = v57;
    v58 = v17 + 1;
    v59 = *(_DWORD *)(a3 + 8);
    if ( v18 || &v242 >= (unsigned int *)&v14[12 * v59] )
    {
      if ( v59 >= v58 )
        goto LABEL_45;
      v60 = (char *)sub_77EB0(a3, nullptr, v17 + 1, 0xCu);
      v61 = *(_QWORD *)(a3 + 4);
      v14 = v60;
      *(_DWORD *)(a3 + 8) = v59;
      v23 = *(char **)a3;
      v62 = v61 - 1;
      v22 = v61;
      if ( (int)v61 - 1 < 0 )
        goto LABEL_14;
      v63 = v23 + 12;
      v64 = v14 + 12;
      do
      {
        v65 = *((_DWORD *)v63 - 3);
        v66 = *((_DWORD *)v63 - 2);
        v67 = *((_DWORD *)v63 - 1);
        --v62;
        v63 += 12;
        *((_DWORD *)v64 - 3) = v65;
        *((_DWORD *)v64 - 2) = v66;
        *((_DWORD *)v64 - 1) = v67;
        v64 += 12;
      }
      while ( v62 != -1 );
      goto LABEL_13;
    }
    v245 = v242;
    v246 = v243;
    v247 = v244;
    if ( v59 >= v58 )
      goto LABEL_99;
    v174 = (char *)sub_77EB0(a3, nullptr, v17 + 1, 0xCu);
    v175 = *(_QWORD *)(a3 + 4);
    v14 = v174;
    *(_DWORD *)(a3 + 8) = v59;
    v176 = v175 - 1;
    v137 = v175;
    if ( (int)v175 - 1 >= 0 )
    {
      v177 = v174 + 12;
      v178 = *(_DWORD *)a3 + 12;
      do
      {
        v179 = *(_DWORD *)(v178 - 12);
        v180 = *(_DWORD *)(v178 - 8);
        v181 = *(_DWORD *)(v178 - 4);
        --v176;
        v178 += 12;
        *((_DWORD *)v177 - 3) = v179;
        *((_DWORD *)v177 - 2) = v180;
        *((_DWORD *)v177 - 1) = v181;
        v177 += 12;
      }
      while ( v176 != -1 );
    }
    goto LABEL_115;
  }
LABEL_65:
  a1[3] = nullptr;
  return 1;
}
