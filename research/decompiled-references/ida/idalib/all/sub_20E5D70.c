unsigned __int64 __fastcall sub_20E5D70(__int64 *a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // r13
  unsigned int *i; // rbx
  unsigned int v7; // r8d
  unsigned int v8; // esi
  _QWORD *v9; // rax
  __int64 v10; // r11
  int v11; // esi
  unsigned int v12; // ebp
  __int64 v13; // r15
  _QWORD *v14; // r12
  unsigned int v15; // r12d
  __int64 v16; // r15
  _QWORD *v17; // rbp
  unsigned int v18; // ebp
  __int64 v19; // r15
  _QWORD *v20; // r12
  unsigned int v21; // r12d
  __int64 v22; // r15
  _QWORD *v23; // rbp
  unsigned int v24; // ebp
  __int64 v25; // r15
  _QWORD *v26; // r12
  unsigned int v27; // r12d
  __int64 v28; // r15
  _QWORD *v29; // rbp
  unsigned int v30; // ebp
  __int64 v31; // r15
  _QWORD *v32; // r12
  unsigned int v33; // r12d
  __int64 v34; // r15
  _QWORD *v35; // rbp
  unsigned int v36; // ebp
  __int64 v37; // r15
  _QWORD *v38; // r12
  unsigned int v39; // r12d
  __int64 v40; // r15
  _QWORD *v41; // rbp
  unsigned int v42; // ebp
  unsigned int v43; // r8d
  __int64 v44; // r15
  _QWORD *v45; // r12
  __int64 v46; // r12
  __int64 v47; // rbp
  _QWORD *v48; // r8
  unsigned int v49; // r8d
  __int64 v50; // r12
  __int64 v51; // rbp
  __int64 v52; // r12
  __int64 v53; // rbp
  __int64 v54; // r12
  __int64 v55; // rbp
  __int64 v56; // r12
  __int64 v57; // rbp
  __int64 v58; // r12
  __int64 v59; // rbp
  __int64 v60; // r12
  __int64 v61; // rbp
  __int64 v62; // r12
  __int64 v63; // rbp
  __int64 v64; // r12
  __int64 v65; // rbp
  __int64 v66; // r12
  __int64 v67; // rbp
  __int64 v68; // r12
  __int64 v69; // rbp
  __int64 v70; // r12
  __int64 v71; // rbp
  __int64 v72; // r8
  __int64 v73; // r10
  __int64 v74; // r8
  unsigned int v75; // r10d
  __int64 v76; // r9
  unsigned int v77; // ebp
  unsigned int v78; // esi
  _QWORD *v79; // rbp
  _QWORD *v80; // rbp
  _QWORD *v81; // rbp
  _QWORD *v82; // rbp
  _QWORD *v83; // rbp
  _QWORD *v84; // rbp
  _QWORD *v85; // rbp
  _QWORD *v86; // rbp
  _QWORD *v87; // rbp
  _QWORD *v88; // rbp
  _QWORD *v89; // rbp
  __int64 v90; // r10
  _QWORD *v91; // r9
  __int64 v92; // r10
  __int64 v93; // r10
  __int64 v94; // r9
  __int64 v95; // r10
  __int64 v96; // r9
  __int64 v97; // r10
  __int64 v98; // r9
  __int64 v99; // r10
  __int64 v100; // r9
  __int64 v101; // r10
  __int64 v102; // r9
  __int64 v103; // r10
  __int64 v104; // r9
  __int64 v105; // r10
  __int64 v106; // r9
  __int64 v107; // r10
  __int64 v108; // r9
  __int64 v109; // r10
  __int64 v110; // r9
  __int64 v111; // r10
  __int64 v112; // r9
  __int64 v113; // r10
  __int64 v114; // r9
  unsigned int *v115; // rbp
  unsigned int v116; // esi
  unsigned int v117; // r9d
  int v118; // ebx
  __int64 v119; // r10
  unsigned int v120; // r8d
  int v121; // r12d
  unsigned int v122; // r12d
  __int64 v123; // r15
  _QWORD *v124; // r13
  unsigned int v125; // r13d
  __int64 v126; // r15
  _QWORD *v127; // r12
  unsigned int v128; // r12d
  __int64 v129; // r15
  _QWORD *v130; // r13
  unsigned int v131; // r13d
  __int64 v132; // r15
  _QWORD *v133; // r12
  unsigned int v134; // r12d
  __int64 v135; // r15
  _QWORD *v136; // r13
  unsigned int v137; // r13d
  __int64 v138; // r15
  _QWORD *v139; // r12
  unsigned int v140; // r12d
  __int64 v141; // r15
  _QWORD *v142; // r13
  unsigned int v143; // r13d
  __int64 v144; // r15
  _QWORD *v145; // r12
  unsigned int v146; // r12d
  __int64 v147; // r15
  _QWORD *v148; // r13
  unsigned int v149; // r13d
  __int64 v150; // r15
  _QWORD *v151; // r12
  unsigned int v152; // r12d
  unsigned int v153; // r9d
  __int64 v154; // r15
  _QWORD *v155; // r13
  __int64 v156; // r13
  __int64 v157; // r12
  _QWORD *v158; // r9
  unsigned int v159; // r9d
  __int64 v160; // r13
  __int64 v161; // r12
  __int64 v162; // r13
  __int64 v163; // r12
  __int64 v164; // r13
  __int64 v165; // r12
  __int64 v166; // r13
  __int64 v167; // r12
  __int64 v168; // r13
  __int64 v169; // r12
  __int64 v170; // r13
  __int64 v171; // r12
  __int64 v172; // r13
  __int64 v173; // r12
  __int64 v174; // r13
  __int64 v175; // r12
  __int64 v176; // r13
  __int64 v177; // r12
  __int64 v178; // r13
  __int64 v179; // r12
  __int64 v180; // r13
  __int64 v181; // r12
  __int64 v182; // r9
  unsigned int *v183; // r11
  unsigned int v184; // r9d
  unsigned int v185; // r12d
  unsigned int v186; // r8d
  _QWORD *v187; // r13
  _QWORD *v188; // r13
  _QWORD *v189; // r13
  _QWORD *v190; // r13
  _QWORD *v191; // r13
  _QWORD *v192; // r13
  _QWORD *v193; // r13
  _QWORD *v194; // r13
  _QWORD *v195; // r13
  _QWORD *v196; // r13
  _QWORD *v197; // r13
  __int64 v198; // rsi
  _QWORD *v199; // rsi
  __int64 v200; // r12
  __int64 v201; // rsi
  __int64 v202; // r12
  __int64 v203; // rsi
  __int64 v204; // r12
  __int64 v205; // rsi
  __int64 v206; // r12
  __int64 v207; // rsi
  __int64 v208; // r12
  __int64 v209; // rsi
  __int64 v210; // r12
  __int64 v211; // rsi
  __int64 v212; // r12
  __int64 v213; // rsi
  __int64 v214; // r12
  __int64 v215; // rsi
  __int64 v216; // r12
  __int64 v217; // rsi
  __int64 v218; // r12
  __int64 v219; // rsi
  __int64 v220; // r12
  __int64 v221; // rsi
  __int64 v222; // r9
  __int64 v223; // rsi
  __int64 *v225; // [rsp+4h] [rbp-40h]
  unsigned int v226; // [rsp+Ch] [rbp-38h]
  int v227; // [rsp+Ch] [rbp-38h]
  unsigned int v228; // [rsp+10h] [rbp-34h]

  result = a2 - 1;
  v228 = a2 - 1;
  v226 = a2 - 1;
  if ( a2 == 1 )
    return result;
  v5 = (int)result;
  for ( i = &a3[v5]; ; --i )
  {
    v7 = *i;
    v8 = a4[v5];
    --v226;
    if ( *i != v8 )
    {
      if ( v226 == -1 )
        goto LABEL_71;
      v9 = (_QWORD *)a1[v5];
      v10 = (int)v226;
      do
      {
        v11 = v8 - v7;
        v75 = a3[v10];
        v76 = a1[v10];
        if ( v11 > 0 )
        {
          if ( v11 > v75 )
            v11 = a3[v10];
          if ( v11 > 12 - v7 )
            v11 = 12 - v7;
          v12 = v7 - 1;
          if ( v7 )
          {
            v13 = v9[v12 + 12];
            v14 = &v9[v11 + v12];
            *v14 = v9[v12];
            v14[12] = v13;
            v15 = v7 - 2;
            if ( v7 != 1 )
            {
              v16 = v9[v15 + 12];
              v17 = &v9[v11 + v15];
              *v17 = v9[v15];
              v17[12] = v16;
              v18 = v7 - 3;
              if ( v7 != 2 )
              {
                v19 = v9[v18 + 12];
                v20 = &v9[v11 + v18];
                *v20 = v9[v18];
                v20[12] = v19;
                v21 = v7 - 4;
                if ( v7 != 3 )
                {
                  v22 = v9[v21 + 12];
                  v23 = &v9[v11 + v21];
                  *v23 = v9[v21];
                  v23[12] = v22;
                  v24 = v7 - 5;
                  if ( v7 != 4 )
                  {
                    v25 = v9[v24 + 12];
                    v26 = &v9[v11 + v24];
                    *v26 = v9[v24];
                    v26[12] = v25;
                    v27 = v7 - 6;
                    if ( v7 != 5 )
                    {
                      v28 = v9[v27 + 12];
                      v29 = &v9[v11 + v27];
                      *v29 = v9[v27];
                      v29[12] = v28;
                      v30 = v7 - 7;
                      if ( v7 != 6 )
                      {
                        v31 = v9[v30 + 12];
                        v32 = &v9[v11 + v30];
                        *v32 = v9[v30];
                        v32[12] = v31;
                        v33 = v7 - 8;
                        if ( v7 != 7 )
                        {
                          v34 = v9[v33 + 12];
                          v35 = &v9[v11 + v33];
                          *v35 = v9[v33];
                          v35[12] = v34;
                          v36 = v7 - 9;
                          if ( v7 != 8 )
                          {
                            v37 = v9[v36 + 12];
                            v38 = &v9[v11 + v36];
                            *v38 = v9[v36];
                            v38[12] = v37;
                            v39 = v7 - 10;
                            if ( v7 != 9 )
                            {
                              v40 = v9[v39 + 12];
                              v41 = &v9[v11 + v39];
                              *v41 = v9[v39];
                              v41[12] = v40;
                              v42 = v7 - 11;
                              if ( v7 != 10 )
                              {
                                v43 = v7 - 12;
                                v44 = v9[v42 + 12];
                                v45 = &v9[v11 + v42];
                                *v45 = v9[v42];
                                v45[12] = v44;
                                if ( v42 )
                                {
                                  v46 = v9[v43];
                                  v47 = v9[v43 + 12];
                                  v48 = &v9[v11 + v43];
                                  *v48 = v46;
                                  v48[12] = v47;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          v49 = v75 - v11;
          if ( v75 != v75 - v11 )
          {
            v50 = *(_QWORD *)(v76 + 8LL * v49);
            v9[12] = *(_QWORD *)(v76 + 8LL * v49 + 96);
            v51 = v49 + 1;
            *v9 = v50;
            if ( v75 != (_DWORD)v51 )
            {
              v52 = *(_QWORD *)(v76 + 8 * v51);
              v9[13] = *(_QWORD *)(v76 + 8 * v51 + 96);
              v53 = v49 + 2;
              v9[1] = v52;
              if ( v75 != (_DWORD)v53 )
              {
                v54 = *(_QWORD *)(v76 + 8 * v53);
                v9[14] = *(_QWORD *)(v76 + 8 * v53 + 96);
                v55 = v49 + 3;
                v9[2] = v54;
                if ( v75 != (_DWORD)v55 )
                {
                  v56 = *(_QWORD *)(v76 + 8 * v55);
                  v9[15] = *(_QWORD *)(v76 + 8 * v55 + 96);
                  v57 = v49 + 4;
                  v9[3] = v56;
                  if ( v75 != (_DWORD)v57 )
                  {
                    v58 = *(_QWORD *)(v76 + 8 * v57);
                    v9[16] = *(_QWORD *)(v76 + 8 * v57 + 96);
                    v59 = v49 + 5;
                    v9[4] = v58;
                    if ( v75 != (_DWORD)v59 )
                    {
                      v60 = *(_QWORD *)(v76 + 8 * v59);
                      v9[17] = *(_QWORD *)(v76 + 8 * v59 + 96);
                      v61 = v49 + 6;
                      v9[5] = v60;
                      if ( v75 != (_DWORD)v61 )
                      {
                        v62 = *(_QWORD *)(v76 + 8 * v61);
                        v9[18] = *(_QWORD *)(v76 + 8 * v61 + 96);
                        v63 = v49 + 7;
                        v9[6] = v62;
                        if ( v75 != (_DWORD)v63 )
                        {
                          v64 = *(_QWORD *)(v76 + 8 * v63);
                          v9[19] = *(_QWORD *)(v76 + 8 * v63 + 96);
                          v65 = v49 + 8;
                          v9[7] = v64;
                          if ( v75 != (_DWORD)v65 )
                          {
                            v66 = *(_QWORD *)(v76 + 8 * v65);
                            v9[20] = *(_QWORD *)(v76 + 8 * v65 + 96);
                            v67 = v49 + 9;
                            v9[8] = v66;
                            if ( v75 != (_DWORD)v67 )
                            {
                              v68 = *(_QWORD *)(v76 + 8 * v67);
                              v9[21] = *(_QWORD *)(v76 + 8 * v67 + 96);
                              v69 = v49 + 10;
                              v9[9] = v68;
                              if ( v75 != (_DWORD)v69 )
                              {
                                v70 = *(_QWORD *)(v76 + 8 * v69);
                                v71 = *(_QWORD *)(v76 + 8 * v69 + 96);
                                v72 = v49 + 11;
                                v9[10] = v70;
                                v9[22] = v71;
                                if ( v75 != (_DWORD)v72 )
                                {
                                  v73 = *(_QWORD *)(v76 + 8 * v72);
                                  v74 = *(_QWORD *)(v76 + 8 * v72 + 96);
                                  v9[11] = v73;
                                  v9[23] = v74;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v77 = 12 - v75;
          if ( 12 - v75 > v7 )
            v77 = v7;
          v78 = -v11;
          if ( v77 <= v78 )
            v78 = v77;
          if ( v78 )
          {
            v79 = (_QWORD *)(v76 + 8LL * v75);
            *v79 = *v9;
            v79[12] = v9[12];
            if ( v78 != 1 )
            {
              v80 = (_QWORD *)(v76 + 8LL * (v75 + 1));
              *v80 = v9[1];
              v80[12] = v9[13];
              if ( v78 != 2 )
              {
                v81 = (_QWORD *)(v76 + 8LL * (v75 + 2));
                *v81 = v9[2];
                v81[12] = v9[14];
                if ( v78 != 3 )
                {
                  v82 = (_QWORD *)(v76 + 8LL * (v75 + 3));
                  *v82 = v9[3];
                  v82[12] = v9[15];
                  if ( v78 != 4 )
                  {
                    v83 = (_QWORD *)(v76 + 8LL * (v75 + 4));
                    *v83 = v9[4];
                    v83[12] = v9[16];
                    if ( v78 != 5 )
                    {
                      v84 = (_QWORD *)(v76 + 8LL * (v75 + 5));
                      *v84 = v9[5];
                      v84[12] = v9[17];
                      if ( v78 != 6 )
                      {
                        v85 = (_QWORD *)(v76 + 8LL * (v75 + 6));
                        *v85 = v9[6];
                        v85[12] = v9[18];
                        if ( v78 != 7 )
                        {
                          v86 = (_QWORD *)(v76 + 8LL * (v75 + 7));
                          *v86 = v9[7];
                          v86[12] = v9[19];
                          if ( v78 != 8 )
                          {
                            v87 = (_QWORD *)(v76 + 8LL * (v75 + 8));
                            *v87 = v9[8];
                            v87[12] = v9[20];
                            if ( v78 != 9 )
                            {
                              v88 = (_QWORD *)(v76 + 8LL * (v75 + 9));
                              *v88 = v9[9];
                              v88[12] = v9[21];
                              if ( v78 != 10 )
                              {
                                v89 = (_QWORD *)(v76 + 8LL * (v75 + 10));
                                v90 = v75 + 11;
                                *v89 = v9[10];
                                v89[12] = v9[22];
                                if ( v78 != 11 )
                                {
                                  v91 = (_QWORD *)(v76 + 8 * v90);
                                  v92 = v9[23];
                                  *v91 = v9[11];
                                  v91[12] = v92;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if ( v78 != v7 )
          {
            v93 = v9[v78];
            v9[12] = v9[v78 + 12];
            v94 = v78 + 1;
            *v9 = v93;
            if ( v7 != (_DWORD)v94 )
            {
              v95 = v9[v94];
              v9[13] = v9[v94 + 12];
              v96 = v78 + 2;
              v9[1] = v95;
              if ( v7 != (_DWORD)v96 )
              {
                v97 = v9[v96];
                v9[14] = v9[v96 + 12];
                v98 = v78 + 3;
                v9[2] = v97;
                if ( v7 != (_DWORD)v98 )
                {
                  v99 = v9[v98];
                  v9[15] = v9[v98 + 12];
                  v100 = v78 + 4;
                  v9[3] = v99;
                  if ( v7 != (_DWORD)v100 )
                  {
                    v101 = v9[v100];
                    v9[16] = v9[v100 + 12];
                    v102 = v78 + 5;
                    v9[4] = v101;
                    if ( v7 != (_DWORD)v102 )
                    {
                      v103 = v9[v102];
                      v9[17] = v9[v102 + 12];
                      v104 = v78 + 6;
                      v9[5] = v103;
                      if ( v7 != (_DWORD)v104 )
                      {
                        v105 = v9[v104];
                        v9[18] = v9[v104 + 12];
                        v106 = v78 + 7;
                        v9[6] = v105;
                        if ( v7 != (_DWORD)v106 )
                        {
                          v107 = v9[v106];
                          v9[19] = v9[v106 + 12];
                          v108 = v78 + 8;
                          v9[7] = v107;
                          if ( v7 != (_DWORD)v108 )
                          {
                            v109 = v9[v108];
                            v9[20] = v9[v108 + 12];
                            v110 = v78 + 9;
                            v9[8] = v109;
                            if ( v7 != (_DWORD)v110 )
                            {
                              v111 = v9[v110];
                              v9[21] = v9[v110 + 12];
                              v112 = v78 + 10;
                              v9[9] = v111;
                              if ( v7 != (_DWORD)v112 )
                              {
                                v113 = v9[v112];
                                v9[22] = v9[v112 + 12];
                                v114 = v78 + 11;
                                v9[10] = v113;
                                if ( v7 != (_DWORD)v114 )
                                {
                                  v9[11] = v9[v114];
                                  v9[23] = v9[v114 + 12];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          v11 = -v78;
        }
        a3[v10] -= v11;
        v7 = *i + v11;
        *i = v7;
        v8 = a4[v5];
        if ( v7 >= v8 )
          break;
        --v10;
      }
      while ( (_DWORD)v10 != -1 );
    }
    if ( !v226 )
      break;
LABEL_71:
    --v5;
  }
  result = a2;
  if ( a2 && v228 )
  {
    v225 = a1;
    v115 = a3;
    v227 = 0;
    do
    {
      v116 = *v115;
      v117 = *a4;
      ++v227;
      if ( *v115 != *a4 )
      {
        v118 = v227;
        if ( a2 != v227 )
        {
          v119 = *v225;
          do
          {
            v183 = &a3[v118];
            v121 = v116 - v117;
            result = a1[v118];
            v184 = *v183;
            if ( v121 > 0 )
            {
              v120 = 12 - v184;
              if ( v121 > v116 )
                v121 = v116;
              if ( v120 > v121 )
                v120 = v121;
              v122 = v184 - 1;
              if ( v184 )
              {
                v123 = *(_QWORD *)(result + 8LL * v122 + 96);
                v124 = (_QWORD *)(result + 8LL * (v122 + v120));
                *v124 = *(_QWORD *)(result + 8LL * v122);
                v124[12] = v123;
                v125 = v184 - 2;
                if ( v184 != 1 )
                {
                  v126 = *(_QWORD *)(result + 8LL * v125 + 96);
                  v127 = (_QWORD *)(result + 8LL * (v120 + v125));
                  *v127 = *(_QWORD *)(result + 8LL * v125);
                  v127[12] = v126;
                  v128 = v184 - 3;
                  if ( v184 != 2 )
                  {
                    v129 = *(_QWORD *)(result + 8LL * v128 + 96);
                    v130 = (_QWORD *)(result + 8LL * (v128 + v120));
                    *v130 = *(_QWORD *)(result + 8LL * v128);
                    v130[12] = v129;
                    v131 = v184 - 4;
                    if ( v184 != 3 )
                    {
                      v132 = *(_QWORD *)(result + 8LL * v131 + 96);
                      v133 = (_QWORD *)(result + 8LL * (v120 + v131));
                      *v133 = *(_QWORD *)(result + 8LL * v131);
                      v133[12] = v132;
                      v134 = v184 - 5;
                      if ( v184 != 4 )
                      {
                        v135 = *(_QWORD *)(result + 8LL * v134 + 96);
                        v136 = (_QWORD *)(result + 8LL * (v120 + v134));
                        *v136 = *(_QWORD *)(result + 8LL * v134);
                        v136[12] = v135;
                        v137 = v184 - 6;
                        if ( v184 != 5 )
                        {
                          v138 = *(_QWORD *)(result + 8LL * v137 + 96);
                          v139 = (_QWORD *)(result + 8LL * (v137 + v120));
                          *v139 = *(_QWORD *)(result + 8LL * v137);
                          v139[12] = v138;
                          v140 = v184 - 7;
                          if ( v184 != 6 )
                          {
                            v141 = *(_QWORD *)(result + 8LL * v140 + 96);
                            v142 = (_QWORD *)(result + 8LL * (v120 + v140));
                            *v142 = *(_QWORD *)(result + 8LL * v140);
                            v142[12] = v141;
                            v143 = v184 - 8;
                            if ( v184 != 7 )
                            {
                              v144 = *(_QWORD *)(result + 8LL * v143 + 96);
                              v145 = (_QWORD *)(result + 8LL * (v120 + v143));
                              *v145 = *(_QWORD *)(result + 8LL * v143);
                              v145[12] = v144;
                              v146 = v184 - 9;
                              if ( v184 != 8 )
                              {
                                v147 = *(_QWORD *)(result + 8LL * v146 + 96);
                                v148 = (_QWORD *)(result + 8LL * (v120 + v146));
                                *v148 = *(_QWORD *)(result + 8LL * v146);
                                v148[12] = v147;
                                v149 = v184 - 10;
                                if ( v184 != 9 )
                                {
                                  v150 = *(_QWORD *)(result + 8LL * v149 + 96);
                                  v151 = (_QWORD *)(result + 8LL * (v120 + v149));
                                  *v151 = *(_QWORD *)(result + 8LL * v149);
                                  v151[12] = v150;
                                  v152 = v184 - 11;
                                  if ( v184 != 10 )
                                  {
                                    v153 = v184 - 12;
                                    v154 = *(_QWORD *)(result + 8LL * v152 + 96);
                                    v155 = (_QWORD *)(result + 8LL * (v120 + v152));
                                    *v155 = *(_QWORD *)(result + 8LL * v152);
                                    v155[12] = v154;
                                    if ( v152 )
                                    {
                                      v156 = *(_QWORD *)(result + 8LL * v153);
                                      v157 = *(_QWORD *)(result + 8LL * v153 + 96);
                                      v158 = (_QWORD *)(result + 8LL * (v120 + v153));
                                      *v158 = v156;
                                      v158[12] = v157;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              v159 = v116 - v120;
              if ( v116 - v120 != v116 )
              {
                v160 = *(_QWORD *)(v119 + 8LL * v159);
                *(_QWORD *)(result + 96) = *(_QWORD *)(v119 + 8LL * v159 + 96);
                v161 = v159 + 1;
                *(_QWORD *)result = v160;
                if ( (_DWORD)v161 != v116 )
                {
                  v162 = *(_QWORD *)(v119 + 8 * v161);
                  *(_QWORD *)(result + 104) = *(_QWORD *)(v119 + 8 * v161 + 96);
                  v163 = v159 + 2;
                  *(_QWORD *)(result + 8) = v162;
                  if ( v116 != (_DWORD)v163 )
                  {
                    v164 = *(_QWORD *)(v119 + 8 * v163);
                    *(_QWORD *)(result + 112) = *(_QWORD *)(v119 + 8 * v163 + 96);
                    v165 = v159 + 3;
                    *(_QWORD *)(result + 16) = v164;
                    if ( v116 != (_DWORD)v165 )
                    {
                      v166 = *(_QWORD *)(v119 + 8 * v165);
                      *(_QWORD *)(result + 120) = *(_QWORD *)(v119 + 8 * v165 + 96);
                      v167 = v159 + 4;
                      *(_QWORD *)(result + 24) = v166;
                      if ( (_DWORD)v167 != v116 )
                      {
                        v168 = *(_QWORD *)(v119 + 8 * v167);
                        *(_QWORD *)(result + 128) = *(_QWORD *)(v119 + 8 * v167 + 96);
                        v169 = v159 + 5;
                        *(_QWORD *)(result + 32) = v168;
                        if ( (_DWORD)v169 != v116 )
                        {
                          v170 = *(_QWORD *)(v119 + 8 * v169);
                          *(_QWORD *)(result + 136) = *(_QWORD *)(v119 + 8 * v169 + 96);
                          v171 = v159 + 6;
                          *(_QWORD *)(result + 40) = v170;
                          if ( (_DWORD)v171 != v116 )
                          {
                            v172 = *(_QWORD *)(v119 + 8 * v171);
                            *(_QWORD *)(result + 144) = *(_QWORD *)(v119 + 8 * v171 + 96);
                            v173 = v159 + 7;
                            *(_QWORD *)(result + 48) = v172;
                            if ( (_DWORD)v173 != v116 )
                            {
                              v174 = *(_QWORD *)(v119 + 8 * v173);
                              *(_QWORD *)(result + 152) = *(_QWORD *)(v119 + 8 * v173 + 96);
                              v175 = v159 + 8;
                              *(_QWORD *)(result + 56) = v174;
                              if ( (_DWORD)v175 != v116 )
                              {
                                v176 = *(_QWORD *)(v119 + 8 * v175);
                                *(_QWORD *)(result + 160) = *(_QWORD *)(v119 + 8 * v175 + 96);
                                v177 = v159 + 9;
                                *(_QWORD *)(result + 64) = v176;
                                if ( (_DWORD)v177 != v116 )
                                {
                                  v178 = *(_QWORD *)(v119 + 8 * v177);
                                  *(_QWORD *)(result + 168) = *(_QWORD *)(v119 + 8 * v177 + 96);
                                  v179 = v159 + 10;
                                  *(_QWORD *)(result + 72) = v178;
                                  if ( (_DWORD)v179 != v116 )
                                  {
                                    v180 = *(_QWORD *)(v119 + 8 * v179);
                                    v181 = *(_QWORD *)(v119 + 8 * v179 + 96);
                                    v182 = v159 + 11;
                                    *(_QWORD *)(result + 80) = v180;
                                    *(_QWORD *)(result + 176) = v181;
                                    if ( (_DWORD)v182 != v116 )
                                    {
                                      *(_QWORD *)(result + 88) = *(_QWORD *)(v119 + 8 * v182);
                                      *(_QWORD *)(result + 184) = *(_QWORD *)(v119 + 8 * v182 + 96);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v185 = -v121;
              if ( 12 - v116 <= v185 )
                v185 = 12 - v116;
              v186 = v185;
              if ( v184 <= v185 )
                v186 = *v183;
              if ( v186 )
              {
                v187 = (_QWORD *)(v119 + 8LL * v116);
                *v187 = *(_QWORD *)result;
                v187[12] = *(_QWORD *)(result + 96);
                if ( v186 != 1 )
                {
                  v188 = (_QWORD *)(v119 + 8LL * (v116 + 1));
                  *v188 = *(_QWORD *)(result + 8);
                  v188[12] = *(_QWORD *)(result + 104);
                  if ( v186 != 2 )
                  {
                    v189 = (_QWORD *)(v119 + 8LL * (v116 + 2));
                    *v189 = *(_QWORD *)(result + 16);
                    v189[12] = *(_QWORD *)(result + 112);
                    if ( v186 != 3 )
                    {
                      v190 = (_QWORD *)(v119 + 8LL * (v116 + 3));
                      *v190 = *(_QWORD *)(result + 24);
                      v190[12] = *(_QWORD *)(result + 120);
                      if ( v186 != 4 )
                      {
                        v191 = (_QWORD *)(v119 + 8LL * (v116 + 4));
                        *v191 = *(_QWORD *)(result + 32);
                        v191[12] = *(_QWORD *)(result + 128);
                        if ( v186 != 5 )
                        {
                          v192 = (_QWORD *)(v119 + 8LL * (v116 + 5));
                          *v192 = *(_QWORD *)(result + 40);
                          v192[12] = *(_QWORD *)(result + 136);
                          if ( v186 != 6 )
                          {
                            v193 = (_QWORD *)(v119 + 8LL * (v116 + 6));
                            *v193 = *(_QWORD *)(result + 48);
                            v193[12] = *(_QWORD *)(result + 144);
                            if ( v186 != 7 )
                            {
                              v194 = (_QWORD *)(v119 + 8LL * (v116 + 7));
                              *v194 = *(_QWORD *)(result + 56);
                              v194[12] = *(_QWORD *)(result + 152);
                              if ( v186 != 8 )
                              {
                                v195 = (_QWORD *)(v119 + 8LL * (v116 + 8));
                                *v195 = *(_QWORD *)(result + 64);
                                v195[12] = *(_QWORD *)(result + 160);
                                if ( v186 != 9 )
                                {
                                  v196 = (_QWORD *)(v119 + 8LL * (v116 + 9));
                                  *v196 = *(_QWORD *)(result + 72);
                                  v196[12] = *(_QWORD *)(result + 168);
                                  if ( v186 != 10 )
                                  {
                                    v197 = (_QWORD *)(v119 + 8LL * (v116 + 10));
                                    v198 = v116 + 11;
                                    *v197 = *(_QWORD *)(result + 80);
                                    v197[12] = *(_QWORD *)(result + 176);
                                    if ( v186 != 11 )
                                    {
                                      v199 = (_QWORD *)(v119 + 8 * v198);
                                      *v199 = *(_QWORD *)(result + 88);
                                      v199[12] = *(_QWORD *)(result + 184);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if ( v184 > v185 )
              {
                v200 = *(_QWORD *)(result + 8LL * v186);
                *(_QWORD *)(result + 96) = *(_QWORD *)(result + 8LL * v186 + 96);
                v201 = v186 + 1;
                *(_QWORD *)result = v200;
                if ( v184 != (_DWORD)v201 )
                {
                  v202 = *(_QWORD *)(result + 8 * v201);
                  *(_QWORD *)(result + 104) = *(_QWORD *)(result + 8 * v201 + 96);
                  v203 = v186 + 2;
                  *(_QWORD *)(result + 8) = v202;
                  if ( v184 != (_DWORD)v203 )
                  {
                    v204 = *(_QWORD *)(result + 8 * v203);
                    *(_QWORD *)(result + 112) = *(_QWORD *)(result + 8 * v203 + 96);
                    v205 = v186 + 3;
                    *(_QWORD *)(result + 16) = v204;
                    if ( v184 != (_DWORD)v205 )
                    {
                      v206 = *(_QWORD *)(result + 8 * v205);
                      *(_QWORD *)(result + 120) = *(_QWORD *)(result + 8 * v205 + 96);
                      v207 = v186 + 4;
                      *(_QWORD *)(result + 24) = v206;
                      if ( v184 != (_DWORD)v207 )
                      {
                        v208 = *(_QWORD *)(result + 8 * v207);
                        *(_QWORD *)(result + 128) = *(_QWORD *)(result + 8 * v207 + 96);
                        v209 = v186 + 5;
                        *(_QWORD *)(result + 32) = v208;
                        if ( v184 != (_DWORD)v209 )
                        {
                          v210 = *(_QWORD *)(result + 8 * v209);
                          *(_QWORD *)(result + 136) = *(_QWORD *)(result + 8 * v209 + 96);
                          v211 = v186 + 6;
                          *(_QWORD *)(result + 40) = v210;
                          if ( v184 != (_DWORD)v211 )
                          {
                            v212 = *(_QWORD *)(result + 8 * v211);
                            *(_QWORD *)(result + 144) = *(_QWORD *)(result + 8 * v211 + 96);
                            v213 = v186 + 7;
                            *(_QWORD *)(result + 48) = v212;
                            if ( v184 != (_DWORD)v213 )
                            {
                              v214 = *(_QWORD *)(result + 8 * v213);
                              *(_QWORD *)(result + 152) = *(_QWORD *)(result + 8 * v213 + 96);
                              v215 = v186 + 8;
                              *(_QWORD *)(result + 56) = v214;
                              if ( v184 != (_DWORD)v215 )
                              {
                                v216 = *(_QWORD *)(result + 8 * v215);
                                *(_QWORD *)(result + 160) = *(_QWORD *)(result + 8 * v215 + 96);
                                v217 = v186 + 9;
                                *(_QWORD *)(result + 64) = v216;
                                if ( v184 != (_DWORD)v217 )
                                {
                                  v218 = *(_QWORD *)(result + 8 * v217);
                                  *(_QWORD *)(result + 168) = *(_QWORD *)(result + 8 * v217 + 96);
                                  v219 = v186 + 10;
                                  *(_QWORD *)(result + 72) = v218;
                                  if ( v184 != (_DWORD)v219 )
                                  {
                                    v220 = *(_QWORD *)(result + 8 * v219);
                                    *(_QWORD *)(result + 176) = *(_QWORD *)(result + 8 * v219 + 96);
                                    v221 = v186 + 11;
                                    *(_QWORD *)(result + 80) = v220;
                                    if ( v184 != (_DWORD)v221 )
                                    {
                                      v222 = *(_QWORD *)(result + 8 * v221);
                                      v223 = *(_QWORD *)(result + 8 * v221 + 96);
                                      *(_QWORD *)(result + 88) = v222;
                                      *(_QWORD *)(result + 184) = v223;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              v120 = -v186;
            }
            *v183 += v120;
            v116 = *v115 - v120;
            *v115 = v116;
            v117 = *a4;
            if ( v116 >= *a4 )
              break;
            ++v118;
          }
          while ( a2 != v118 );
        }
      }
      ++v115;
      ++a4;
      ++v225;
    }
    while ( v228 != v227 );
  }
  return result;
}
