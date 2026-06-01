__int64 __fastcall sub_20E6C10(__int64 *a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 *v6; // r13
  unsigned int *v7; // r11
  unsigned int *i; // r12
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  __int64 v11; // r10
  int v12; // ecx
  unsigned int v13; // ebx
  __int64 v14; // rbp
  unsigned int v15; // ebp
  __int64 v16; // rbx
  unsigned int v17; // ebx
  __int64 v18; // rbp
  unsigned int v19; // ebp
  __int64 v20; // rbx
  unsigned int v21; // ebx
  __int64 v22; // rbp
  unsigned int v23; // ebp
  __int64 v24; // rbx
  unsigned int v25; // ebx
  __int64 v26; // rbp
  unsigned int v27; // ebp
  __int64 v28; // rbx
  unsigned int v29; // ebx
  __int64 v30; // rbp
  unsigned int v31; // ebp
  __int64 v32; // rbx
  unsigned int v33; // ebx
  __int64 v34; // rbp
  unsigned int v35; // ebp
  __int64 v36; // rbx
  unsigned int v37; // ebx
  __int64 v38; // rbp
  unsigned int v39; // ebp
  __int64 v40; // rbx
  unsigned int v41; // ebx
  __int64 v42; // rbp
  __int64 v43; // r8
  __int64 v44; // rbx
  unsigned int v45; // r8d
  __int64 v46; // rbx
  __int64 v47; // rbx
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // rbx
  __int64 v51; // rbx
  __int64 v52; // rbx
  __int64 v53; // rbx
  __int64 v54; // rbx
  __int64 v55; // rbx
  __int64 v56; // rbx
  __int64 v57; // rbx
  __int64 v58; // rbx
  __int64 v59; // rbx
  __int64 v60; // r8
  __int64 v61; // rax
  unsigned int v62; // r9d
  __int64 v63; // rsi
  unsigned int v64; // ebx
  unsigned int v65; // ecx
  __int64 v66; // rbx
  __int64 v67; // rbx
  __int64 v68; // rbx
  __int64 v69; // rbx
  __int64 v70; // rbx
  __int64 v71; // rbx
  __int64 v72; // rbx
  __int64 v73; // rbx
  __int64 v74; // rbx
  __int64 v75; // rbx
  __int64 v76; // rbx
  __int64 v77; // rbx
  __int64 v78; // rbx
  __int64 v79; // rbx
  __int64 v80; // r9
  __int64 v81; // rsi
  __int64 v82; // rsi
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // rsi
  __int64 v86; // rsi
  __int64 v87; // rsi
  __int64 v88; // rsi
  __int64 v89; // rsi
  __int64 v90; // rsi
  __int64 v91; // rsi
  __int64 v92; // rsi
  __int64 v93; // rsi
  __int64 v94; // rsi
  __int64 v95; // rsi
  unsigned int *v96; // rbp
  unsigned int *v97; // rcx
  __int64 *v98; // r14
  unsigned int v99; // esi
  unsigned int v100; // r8d
  unsigned int v101; // ebx
  unsigned int v102; // r8d
  unsigned int v103; // r12d
  unsigned int v104; // r12d
  __int64 v105; // r13
  unsigned int v106; // r13d
  __int64 v107; // r12
  unsigned int v108; // r12d
  __int64 v109; // r13
  unsigned int v110; // r13d
  __int64 v111; // r12
  unsigned int v112; // r12d
  __int64 v113; // r13
  unsigned int v114; // r13d
  __int64 v115; // r12
  unsigned int v116; // r12d
  __int64 v117; // r13
  unsigned int v118; // r13d
  __int64 v119; // r12
  unsigned int v120; // r12d
  __int64 v121; // r13
  unsigned int v122; // r13d
  __int64 v123; // r12
  unsigned int v124; // r12d
  __int64 v125; // r13
  unsigned int v126; // r13d
  __int64 v127; // r12
  unsigned int v128; // r12d
  __int64 v129; // r13
  unsigned int v130; // r13d
  __int64 v131; // r12
  unsigned int v132; // r12d
  __int64 v133; // r13
  __int64 v134; // r10
  __int64 v135; // r12
  unsigned int v136; // r10d
  __int64 v137; // r12
  __int64 v138; // r12
  __int64 v139; // r12
  __int64 v140; // r12
  __int64 v141; // r12
  __int64 v142; // r12
  __int64 v143; // r12
  __int64 v144; // r12
  __int64 v145; // r12
  __int64 v146; // r12
  __int64 v147; // r12
  __int64 v148; // r12
  __int64 v149; // r12
  __int64 v150; // r12
  __int64 v151; // r10
  __int64 v152; // r9
  unsigned int *v153; // r11
  unsigned int v154; // r10d
  unsigned int v155; // r12d
  unsigned int v156; // r8d
  __int64 v157; // r13
  __int64 v158; // r13
  __int64 v159; // r13
  __int64 v160; // r13
  __int64 v161; // r13
  __int64 v162; // r13
  __int64 v163; // r13
  __int64 v164; // r13
  __int64 v165; // r13
  __int64 v166; // r13
  __int64 v167; // r13
  __int64 v168; // r13
  __int64 v169; // r13
  __int64 v170; // r13
  __int64 v171; // rsi
  __int64 v172; // rsi
  __int64 v173; // rsi
  __int64 v174; // rsi
  __int64 v175; // rsi
  __int64 v176; // rsi
  __int64 v177; // rsi
  __int64 v178; // rsi
  __int64 v179; // rsi
  __int64 v180; // rsi
  __int64 v181; // rsi
  __int64 v182; // rsi
  __int64 v183; // rsi
  __int64 v184; // rsi
  __int64 v185; // rsi
  __int64 v186; // rsi
  unsigned int v187; // [rsp+0h] [rbp-48h]
  unsigned int v189; // [rsp+8h] [rbp-40h]
  unsigned int v191; // [rsp+14h] [rbp-34h]

  result = a2 - 1;
  v191 = a2 - 1;
  v187 = a2 - 1;
  if ( a2 == 1 )
    return result;
  v5 = (int)result;
  v6 = &a1[(int)result];
  v7 = &a3[v5];
  for ( i = &a4[v5]; ; --i )
  {
    v9 = *v7;
    v10 = *i;
    --v187;
    if ( *v7 == *i )
      break;
    v11 = (int)v187;
    if ( v187 != -1 )
    {
      do
      {
        v12 = v10 - v9;
        v61 = *v6;
        v62 = a3[v11];
        v63 = a1[v11];
        if ( v12 > 0 )
        {
          if ( v12 > v62 )
            v12 = a3[v11];
          if ( v12 > 16 - v9 )
            v12 = 16 - v9;
          v13 = v9 - 1;
          if ( v9 )
          {
            v14 = v12 + v13;
            *(_QWORD *)(v61 + 8 * v14) = *(_QWORD *)(v61 + 8LL * v13);
            *(_DWORD *)(v61 + 4 * v14 + 128) = *(_DWORD *)(v61 + 4LL * v13 + 128);
            v15 = v9 - 2;
            if ( v9 != 1 )
            {
              v16 = v12 + v15;
              *(_QWORD *)(v61 + 8 * v16) = *(_QWORD *)(v61 + 8LL * v15);
              *(_DWORD *)(v61 + 4 * v16 + 128) = *(_DWORD *)(v61 + 4LL * v15 + 128);
              v17 = v9 - 3;
              if ( v9 != 2 )
              {
                v18 = v12 + v17;
                *(_QWORD *)(v61 + 8 * v18) = *(_QWORD *)(v61 + 8LL * v17);
                *(_DWORD *)(v61 + 4 * v18 + 128) = *(_DWORD *)(v61 + 4LL * v17 + 128);
                v19 = v9 - 4;
                if ( v9 != 3 )
                {
                  v20 = v12 + v19;
                  *(_QWORD *)(v61 + 8 * v20) = *(_QWORD *)(v61 + 8LL * v19);
                  *(_DWORD *)(v61 + 4 * v20 + 128) = *(_DWORD *)(v61 + 4LL * v19 + 128);
                  v21 = v9 - 5;
                  if ( v9 != 4 )
                  {
                    v22 = v12 + v21;
                    *(_QWORD *)(v61 + 8 * v22) = *(_QWORD *)(v61 + 8LL * v21);
                    *(_DWORD *)(v61 + 4 * v22 + 128) = *(_DWORD *)(v61 + 4LL * v21 + 128);
                    v23 = v9 - 6;
                    if ( v9 != 5 )
                    {
                      v24 = v12 + v23;
                      *(_QWORD *)(v61 + 8 * v24) = *(_QWORD *)(v61 + 8LL * v23);
                      *(_DWORD *)(v61 + 4 * v24 + 128) = *(_DWORD *)(v61 + 4LL * v23 + 128);
                      v25 = v9 - 7;
                      if ( v9 != 6 )
                      {
                        v26 = v12 + v25;
                        *(_QWORD *)(v61 + 8 * v26) = *(_QWORD *)(v61 + 8LL * v25);
                        *(_DWORD *)(v61 + 4 * v26 + 128) = *(_DWORD *)(v61 + 4LL * v25 + 128);
                        v27 = v9 - 8;
                        if ( v9 != 7 )
                        {
                          v28 = v12 + v27;
                          *(_QWORD *)(v61 + 8 * v28) = *(_QWORD *)(v61 + 8LL * v27);
                          *(_DWORD *)(v61 + 4 * v28 + 128) = *(_DWORD *)(v61 + 4LL * v27 + 128);
                          v29 = v9 - 9;
                          if ( v9 != 8 )
                          {
                            v30 = v12 + v29;
                            *(_QWORD *)(v61 + 8 * v30) = *(_QWORD *)(v61 + 8LL * v29);
                            *(_DWORD *)(v61 + 4 * v30 + 128) = *(_DWORD *)(v61 + 4LL * v29 + 128);
                            v31 = v9 - 10;
                            if ( v9 != 9 )
                            {
                              v32 = v12 + v31;
                              *(_QWORD *)(v61 + 8 * v32) = *(_QWORD *)(v61 + 8LL * v31);
                              *(_DWORD *)(v61 + 4 * v32 + 128) = *(_DWORD *)(v61 + 4LL * v31 + 128);
                              v33 = v9 - 11;
                              if ( v9 != 10 )
                              {
                                v34 = v12 + v33;
                                *(_QWORD *)(v61 + 8 * v34) = *(_QWORD *)(v61 + 8LL * v33);
                                *(_DWORD *)(v61 + 4 * v34 + 128) = *(_DWORD *)(v61 + 4LL * v33 + 128);
                                v35 = v9 - 12;
                                if ( v9 != 11 )
                                {
                                  v36 = v12 + v35;
                                  *(_QWORD *)(v61 + 8 * v36) = *(_QWORD *)(v61 + 8LL * v35);
                                  *(_DWORD *)(v61 + 4 * v36 + 128) = *(_DWORD *)(v61 + 4LL * v35 + 128);
                                  v37 = v9 - 13;
                                  if ( v9 != 12 )
                                  {
                                    v38 = v12 + v37;
                                    *(_QWORD *)(v61 + 8 * v38) = *(_QWORD *)(v61 + 8LL * v37);
                                    *(_DWORD *)(v61 + 4 * v38 + 128) = *(_DWORD *)(v61 + 4LL * v37 + 128);
                                    v39 = v9 - 14;
                                    if ( v9 != 13 )
                                    {
                                      v40 = v12 + v39;
                                      *(_QWORD *)(v61 + 8 * v40) = *(_QWORD *)(v61 + 8LL * v39);
                                      *(_DWORD *)(v61 + 4 * v40 + 128) = *(_DWORD *)(v61 + 4LL * v39 + 128);
                                      v41 = v9 - 15;
                                      if ( v9 != 14 )
                                      {
                                        v42 = v12 + v41;
                                        v43 = v9 - 16;
                                        *(_QWORD *)(v61 + 8 * v42) = *(_QWORD *)(v61 + 8LL * v41);
                                        *(_DWORD *)(v61 + 4 * v42 + 128) = *(_DWORD *)(v61 + 4LL * v41 + 128);
                                        if ( v41 )
                                        {
                                          v44 = (unsigned int)(v12 + v43);
                                          *(_QWORD *)(v61 + 8 * v44) = *(_QWORD *)(v61 + 8 * v43);
                                          *(_DWORD *)(v61 + 4 * v44 + 128) = *(_DWORD *)(v61 + 4 * v43 + 128);
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
              }
            }
          }
          v45 = v62 - v12;
          if ( v62 != v62 - v12 )
          {
            *(_QWORD *)v61 = *(_QWORD *)(v63 + 8LL * v45);
            *(_DWORD *)(v61 + 128) = *(_DWORD *)(v63 + 4LL * v45 + 128);
            v46 = v45 + 1;
            if ( v62 != (_DWORD)v46 )
            {
              *(_QWORD *)(v61 + 8) = *(_QWORD *)(v63 + 8 * v46);
              *(_DWORD *)(v61 + 132) = *(_DWORD *)(v63 + 4 * v46 + 128);
              v47 = v45 + 2;
              if ( v62 != (_DWORD)v47 )
              {
                *(_QWORD *)(v61 + 16) = *(_QWORD *)(v63 + 8 * v47);
                *(_DWORD *)(v61 + 136) = *(_DWORD *)(v63 + 4 * v47 + 128);
                v48 = v45 + 3;
                if ( v62 != (_DWORD)v48 )
                {
                  *(_QWORD *)(v61 + 24) = *(_QWORD *)(v63 + 8 * v48);
                  *(_DWORD *)(v61 + 140) = *(_DWORD *)(v63 + 4 * v48 + 128);
                  v49 = v45 + 4;
                  if ( v62 != (_DWORD)v49 )
                  {
                    *(_QWORD *)(v61 + 32) = *(_QWORD *)(v63 + 8 * v49);
                    *(_DWORD *)(v61 + 144) = *(_DWORD *)(v63 + 4 * v49 + 128);
                    v50 = v45 + 5;
                    if ( v62 != (_DWORD)v50 )
                    {
                      *(_QWORD *)(v61 + 40) = *(_QWORD *)(v63 + 8 * v50);
                      *(_DWORD *)(v61 + 148) = *(_DWORD *)(v63 + 4 * v50 + 128);
                      v51 = v45 + 6;
                      if ( v62 != (_DWORD)v51 )
                      {
                        *(_QWORD *)(v61 + 48) = *(_QWORD *)(v63 + 8 * v51);
                        *(_DWORD *)(v61 + 152) = *(_DWORD *)(v63 + 4 * v51 + 128);
                        v52 = v45 + 7;
                        if ( v62 != (_DWORD)v52 )
                        {
                          *(_QWORD *)(v61 + 56) = *(_QWORD *)(v63 + 8 * v52);
                          *(_DWORD *)(v61 + 156) = *(_DWORD *)(v63 + 4 * v52 + 128);
                          v53 = v45 + 8;
                          if ( v62 != (_DWORD)v53 )
                          {
                            *(_QWORD *)(v61 + 64) = *(_QWORD *)(v63 + 8 * v53);
                            *(_DWORD *)(v61 + 160) = *(_DWORD *)(v63 + 4 * v53 + 128);
                            v54 = v45 + 9;
                            if ( v62 != (_DWORD)v54 )
                            {
                              *(_QWORD *)(v61 + 72) = *(_QWORD *)(v63 + 8 * v54);
                              *(_DWORD *)(v61 + 164) = *(_DWORD *)(v63 + 4 * v54 + 128);
                              v55 = v45 + 10;
                              if ( v62 != (_DWORD)v55 )
                              {
                                *(_QWORD *)(v61 + 80) = *(_QWORD *)(v63 + 8 * v55);
                                *(_DWORD *)(v61 + 168) = *(_DWORD *)(v63 + 4 * v55 + 128);
                                v56 = v45 + 11;
                                if ( v62 != (_DWORD)v56 )
                                {
                                  *(_QWORD *)(v61 + 88) = *(_QWORD *)(v63 + 8 * v56);
                                  *(_DWORD *)(v61 + 172) = *(_DWORD *)(v63 + 4 * v56 + 128);
                                  v57 = v45 + 12;
                                  if ( v62 != (_DWORD)v57 )
                                  {
                                    *(_QWORD *)(v61 + 96) = *(_QWORD *)(v63 + 8 * v57);
                                    *(_DWORD *)(v61 + 176) = *(_DWORD *)(v63 + 4 * v57 + 128);
                                    v58 = v45 + 13;
                                    if ( v62 != (_DWORD)v58 )
                                    {
                                      *(_QWORD *)(v61 + 104) = *(_QWORD *)(v63 + 8 * v58);
                                      *(_DWORD *)(v61 + 180) = *(_DWORD *)(v63 + 4 * v58 + 128);
                                      v59 = v45 + 14;
                                      if ( v62 != (_DWORD)v59 )
                                      {
                                        v60 = v45 + 15;
                                        *(_QWORD *)(v61 + 112) = *(_QWORD *)(v63 + 8 * v59);
                                        *(_DWORD *)(v61 + 184) = *(_DWORD *)(v63 + 4 * v59 + 128);
                                        if ( v62 != (_DWORD)v60 )
                                        {
                                          *(_QWORD *)(v61 + 120) = *(_QWORD *)(v63 + 8 * v60);
                                          *(_DWORD *)(v61 + 188) = *(_DWORD *)(v63 + 4 * v60 + 128);
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
              }
            }
          }
        }
        else
        {
          v64 = 16 - v62;
          if ( 16 - v62 > v9 )
            v64 = v9;
          v65 = -v12;
          if ( v64 <= v65 )
            v65 = v64;
          if ( v65 )
          {
            *(_QWORD *)(v63 + 8LL * v62) = *(_QWORD *)v61;
            *(_DWORD *)(v63 + 4LL * v62 + 128) = *(_DWORD *)(v61 + 128);
            v66 = v62 + 1;
            if ( v65 != 1 )
            {
              *(_QWORD *)(v63 + 8 * v66) = *(_QWORD *)(v61 + 8);
              *(_DWORD *)(v63 + 4 * v66 + 128) = *(_DWORD *)(v61 + 132);
              v67 = v62 + 2;
              if ( v65 != 2 )
              {
                *(_QWORD *)(v63 + 8 * v67) = *(_QWORD *)(v61 + 16);
                *(_DWORD *)(v63 + 4 * v67 + 128) = *(_DWORD *)(v61 + 136);
                v68 = v62 + 3;
                if ( v65 != 3 )
                {
                  *(_QWORD *)(v63 + 8 * v68) = *(_QWORD *)(v61 + 24);
                  *(_DWORD *)(v63 + 4 * v68 + 128) = *(_DWORD *)(v61 + 140);
                  v69 = v62 + 4;
                  if ( v65 != 4 )
                  {
                    *(_QWORD *)(v63 + 8 * v69) = *(_QWORD *)(v61 + 32);
                    *(_DWORD *)(v63 + 4 * v69 + 128) = *(_DWORD *)(v61 + 144);
                    v70 = v62 + 5;
                    if ( v65 != 5 )
                    {
                      *(_QWORD *)(v63 + 8 * v70) = *(_QWORD *)(v61 + 40);
                      *(_DWORD *)(v63 + 4 * v70 + 128) = *(_DWORD *)(v61 + 148);
                      v71 = v62 + 6;
                      if ( v65 != 6 )
                      {
                        *(_QWORD *)(v63 + 8 * v71) = *(_QWORD *)(v61 + 48);
                        *(_DWORD *)(v63 + 4 * v71 + 128) = *(_DWORD *)(v61 + 152);
                        v72 = v62 + 7;
                        if ( v65 != 7 )
                        {
                          *(_QWORD *)(v63 + 8 * v72) = *(_QWORD *)(v61 + 56);
                          *(_DWORD *)(v63 + 4 * v72 + 128) = *(_DWORD *)(v61 + 156);
                          v73 = v62 + 8;
                          if ( v65 != 8 )
                          {
                            *(_QWORD *)(v63 + 8 * v73) = *(_QWORD *)(v61 + 64);
                            *(_DWORD *)(v63 + 4 * v73 + 128) = *(_DWORD *)(v61 + 160);
                            v74 = v62 + 9;
                            if ( v65 != 9 )
                            {
                              *(_QWORD *)(v63 + 8 * v74) = *(_QWORD *)(v61 + 72);
                              *(_DWORD *)(v63 + 4 * v74 + 128) = *(_DWORD *)(v61 + 164);
                              v75 = v62 + 10;
                              if ( v65 != 10 )
                              {
                                *(_QWORD *)(v63 + 8 * v75) = *(_QWORD *)(v61 + 80);
                                *(_DWORD *)(v63 + 4 * v75 + 128) = *(_DWORD *)(v61 + 168);
                                v76 = v62 + 11;
                                if ( v65 != 11 )
                                {
                                  *(_QWORD *)(v63 + 8 * v76) = *(_QWORD *)(v61 + 88);
                                  *(_DWORD *)(v63 + 4 * v76 + 128) = *(_DWORD *)(v61 + 172);
                                  v77 = v62 + 12;
                                  if ( v65 != 12 )
                                  {
                                    *(_QWORD *)(v63 + 8 * v77) = *(_QWORD *)(v61 + 96);
                                    *(_DWORD *)(v63 + 4 * v77 + 128) = *(_DWORD *)(v61 + 176);
                                    v78 = v62 + 13;
                                    if ( v65 != 13 )
                                    {
                                      *(_QWORD *)(v63 + 8 * v78) = *(_QWORD *)(v61 + 104);
                                      *(_DWORD *)(v63 + 4 * v78 + 128) = *(_DWORD *)(v61 + 180);
                                      v79 = v62 + 14;
                                      if ( v65 != 14 )
                                      {
                                        v80 = v62 + 15;
                                        *(_QWORD *)(v63 + 8 * v79) = *(_QWORD *)(v61 + 112);
                                        *(_DWORD *)(v63 + 4 * v79 + 128) = *(_DWORD *)(v61 + 184);
                                        if ( v65 != 15 )
                                        {
                                          *(_QWORD *)(v63 + 8 * v80) = *(_QWORD *)(v61 + 120);
                                          *(_DWORD *)(v63 + 4 * v80 + 128) = *(_DWORD *)(v61 + 188);
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
              }
            }
          }
          if ( v65 != v9 )
          {
            *(_QWORD *)v61 = *(_QWORD *)(v61 + 8LL * v65);
            *(_DWORD *)(v61 + 128) = *(_DWORD *)(v61 + 4LL * v65 + 128);
            v81 = v65 + 1;
            if ( v9 != (_DWORD)v81 )
            {
              *(_QWORD *)(v61 + 8) = *(_QWORD *)(v61 + 8 * v81);
              *(_DWORD *)(v61 + 132) = *(_DWORD *)(v61 + 4 * v81 + 128);
              v82 = v65 + 2;
              if ( v9 != (_DWORD)v82 )
              {
                *(_QWORD *)(v61 + 16) = *(_QWORD *)(v61 + 8 * v82);
                *(_DWORD *)(v61 + 136) = *(_DWORD *)(v61 + 4 * v82 + 128);
                v83 = v65 + 3;
                if ( v9 != (_DWORD)v83 )
                {
                  *(_QWORD *)(v61 + 24) = *(_QWORD *)(v61 + 8 * v83);
                  *(_DWORD *)(v61 + 140) = *(_DWORD *)(v61 + 4 * v83 + 128);
                  v84 = v65 + 4;
                  if ( v9 != (_DWORD)v84 )
                  {
                    *(_QWORD *)(v61 + 32) = *(_QWORD *)(v61 + 8 * v84);
                    *(_DWORD *)(v61 + 144) = *(_DWORD *)(v61 + 4 * v84 + 128);
                    v85 = v65 + 5;
                    if ( v9 != (_DWORD)v85 )
                    {
                      *(_QWORD *)(v61 + 40) = *(_QWORD *)(v61 + 8 * v85);
                      *(_DWORD *)(v61 + 148) = *(_DWORD *)(v61 + 4 * v85 + 128);
                      v86 = v65 + 6;
                      if ( v9 != (_DWORD)v86 )
                      {
                        *(_QWORD *)(v61 + 48) = *(_QWORD *)(v61 + 8 * v86);
                        *(_DWORD *)(v61 + 152) = *(_DWORD *)(v61 + 4 * v86 + 128);
                        v87 = v65 + 7;
                        if ( v9 != (_DWORD)v87 )
                        {
                          *(_QWORD *)(v61 + 56) = *(_QWORD *)(v61 + 8 * v87);
                          *(_DWORD *)(v61 + 156) = *(_DWORD *)(v61 + 4 * v87 + 128);
                          v88 = v65 + 8;
                          if ( v9 != (_DWORD)v88 )
                          {
                            *(_QWORD *)(v61 + 64) = *(_QWORD *)(v61 + 8 * v88);
                            *(_DWORD *)(v61 + 160) = *(_DWORD *)(v61 + 4 * v88 + 128);
                            v89 = v65 + 9;
                            if ( v9 != (_DWORD)v89 )
                            {
                              *(_QWORD *)(v61 + 72) = *(_QWORD *)(v61 + 8 * v89);
                              *(_DWORD *)(v61 + 164) = *(_DWORD *)(v61 + 4 * v89 + 128);
                              v90 = v65 + 10;
                              if ( v9 != (_DWORD)v90 )
                              {
                                *(_QWORD *)(v61 + 80) = *(_QWORD *)(v61 + 8 * v90);
                                *(_DWORD *)(v61 + 168) = *(_DWORD *)(v61 + 4 * v90 + 128);
                                v91 = v65 + 11;
                                if ( v9 != (_DWORD)v91 )
                                {
                                  *(_QWORD *)(v61 + 88) = *(_QWORD *)(v61 + 8 * v91);
                                  *(_DWORD *)(v61 + 172) = *(_DWORD *)(v61 + 4 * v91 + 128);
                                  v92 = v65 + 12;
                                  if ( v9 != (_DWORD)v92 )
                                  {
                                    *(_QWORD *)(v61 + 96) = *(_QWORD *)(v61 + 8 * v92);
                                    *(_DWORD *)(v61 + 176) = *(_DWORD *)(v61 + 4 * v92 + 128);
                                    v93 = v65 + 13;
                                    if ( v9 != (_DWORD)v93 )
                                    {
                                      *(_QWORD *)(v61 + 104) = *(_QWORD *)(v61 + 8 * v93);
                                      *(_DWORD *)(v61 + 180) = *(_DWORD *)(v61 + 4 * v93 + 128);
                                      v94 = v65 + 14;
                                      if ( v9 != (_DWORD)v94 )
                                      {
                                        *(_QWORD *)(v61 + 112) = *(_QWORD *)(v61 + 8 * v94);
                                        *(_DWORD *)(v61 + 184) = *(_DWORD *)(v61 + 4 * v94 + 128);
                                        v95 = v65 + 15;
                                        if ( v9 != (_DWORD)v95 )
                                        {
                                          *(_QWORD *)(v61 + 120) = *(_QWORD *)(v61 + 8 * v95);
                                          *(_DWORD *)(v61 + 188) = *(_DWORD *)(v61 + 4 * v95 + 128);
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
              }
            }
          }
          v12 = -v65;
        }
        a3[v11] -= v12;
        v9 = *v7 + v12;
        *v7 = v9;
        v10 = *i;
        if ( v9 >= *i )
          break;
        --v11;
      }
      while ( (_DWORD)v11 != -1 );
      break;
    }
LABEL_87:
    --v7;
    --v6;
  }
  if ( v187 )
    goto LABEL_87;
  result = a2;
  if ( a2 && v191 )
  {
    v97 = a4;
    v189 = 0;
    v96 = a3;
    v98 = a1;
    do
    {
      v99 = *v96;
      v100 = *v97;
      ++v189;
      if ( *v96 != *v97 )
      {
        result = v189;
        if ( a2 != v189 )
        {
          v101 = v189;
          do
          {
            v152 = *v98;
            v103 = v99 - v100;
            result = a1[v101];
            v153 = &a3[v101];
            v154 = *v153;
            if ( (int)(v99 - v100) > 0 )
            {
              v102 = 16 - v154;
              if ( v103 > v99 )
                v103 = v99;
              if ( v102 > v103 )
                v102 = v103;
              v104 = v154 - 1;
              if ( v154 )
              {
                v105 = v104 + v102;
                *(_QWORD *)(result + 8 * v105) = *(_QWORD *)(result + 8LL * v104);
                *(_DWORD *)(result + 4 * v105 + 128) = *(_DWORD *)(result + 4LL * v104 + 128);
                v106 = v154 - 2;
                if ( v154 != 1 )
                {
                  v107 = v106 + v102;
                  *(_QWORD *)(result + 8 * v107) = *(_QWORD *)(result + 8LL * v106);
                  *(_DWORD *)(result + 4 * v107 + 128) = *(_DWORD *)(result + 4LL * v106 + 128);
                  v108 = v154 - 3;
                  if ( v154 != 2 )
                  {
                    v109 = v102 + v108;
                    *(_QWORD *)(result + 8 * v109) = *(_QWORD *)(result + 8LL * v108);
                    *(_DWORD *)(result + 4 * v109 + 128) = *(_DWORD *)(result + 4LL * v108 + 128);
                    v110 = v154 - 4;
                    if ( v154 != 3 )
                    {
                      v111 = v110 + v102;
                      *(_QWORD *)(result + 8 * v111) = *(_QWORD *)(result + 8LL * v110);
                      *(_DWORD *)(result + 4 * v111 + 128) = *(_DWORD *)(result + 4LL * v110 + 128);
                      v112 = v154 - 5;
                      if ( v154 != 4 )
                      {
                        v113 = v112 + v102;
                        *(_QWORD *)(result + 8 * v113) = *(_QWORD *)(result + 8LL * v112);
                        *(_DWORD *)(result + 4 * v113 + 128) = *(_DWORD *)(result + 4LL * v112 + 128);
                        v114 = v154 - 6;
                        if ( v154 != 5 )
                        {
                          v115 = v102 + v114;
                          *(_QWORD *)(result + 8 * v115) = *(_QWORD *)(result + 8LL * v114);
                          *(_DWORD *)(result + 4 * v115 + 128) = *(_DWORD *)(result + 4LL * v114 + 128);
                          v116 = v154 - 7;
                          if ( v154 != 6 )
                          {
                            v117 = v102 + v116;
                            *(_QWORD *)(result + 8 * v117) = *(_QWORD *)(result + 8LL * v116);
                            *(_DWORD *)(result + 4 * v117 + 128) = *(_DWORD *)(result + 4LL * v116 + 128);
                            v118 = v154 - 8;
                            if ( v154 != 7 )
                            {
                              v119 = v102 + v118;
                              *(_QWORD *)(result + 8 * v119) = *(_QWORD *)(result + 8LL * v118);
                              *(_DWORD *)(result + 4 * v119 + 128) = *(_DWORD *)(result + 4LL * v118 + 128);
                              v120 = v154 - 9;
                              if ( v154 != 8 )
                              {
                                v121 = v102 + v120;
                                *(_QWORD *)(result + 8 * v121) = *(_QWORD *)(result + 8LL * v120);
                                *(_DWORD *)(result + 4 * v121 + 128) = *(_DWORD *)(result + 4LL * v120 + 128);
                                v122 = v154 - 10;
                                if ( v154 != 9 )
                                {
                                  v123 = v102 + v122;
                                  *(_QWORD *)(result + 8 * v123) = *(_QWORD *)(result + 8LL * v122);
                                  *(_DWORD *)(result + 4 * v123 + 128) = *(_DWORD *)(result + 4LL * v122 + 128);
                                  v124 = v154 - 11;
                                  if ( v154 != 10 )
                                  {
                                    v125 = v102 + v124;
                                    *(_QWORD *)(result + 8 * v125) = *(_QWORD *)(result + 8LL * v124);
                                    *(_DWORD *)(result + 4 * v125 + 128) = *(_DWORD *)(result + 4LL * v124 + 128);
                                    v126 = v154 - 12;
                                    if ( v154 != 11 )
                                    {
                                      v127 = v102 + v126;
                                      *(_QWORD *)(result + 8 * v127) = *(_QWORD *)(result + 8LL * v126);
                                      *(_DWORD *)(result + 4 * v127 + 128) = *(_DWORD *)(result + 4LL * v126 + 128);
                                      v128 = v154 - 13;
                                      if ( v154 != 12 )
                                      {
                                        v129 = v102 + v128;
                                        *(_QWORD *)(result + 8 * v129) = *(_QWORD *)(result + 8LL * v128);
                                        *(_DWORD *)(result + 4 * v129 + 128) = *(_DWORD *)(result + 4LL * v128 + 128);
                                        v130 = v154 - 14;
                                        if ( v154 != 13 )
                                        {
                                          v131 = v102 + v130;
                                          *(_QWORD *)(result + 8 * v131) = *(_QWORD *)(result + 8LL * v130);
                                          *(_DWORD *)(result + 4 * v131 + 128) = *(_DWORD *)(result + 4LL * v130 + 128);
                                          v132 = v154 - 15;
                                          if ( v154 != 14 )
                                          {
                                            v133 = v102 + v132;
                                            v134 = v154 - 16;
                                            *(_QWORD *)(result + 8 * v133) = *(_QWORD *)(result + 8LL * v132);
                                            *(_DWORD *)(result + 4 * v133 + 128) = *(_DWORD *)(result + 4LL * v132 + 128);
                                            if ( v132 )
                                            {
                                              v135 = v102 + (unsigned int)v134;
                                              *(_QWORD *)(result + 8 * v135) = *(_QWORD *)(result + 8 * v134);
                                              *(_DWORD *)(result + 4 * v135 + 128) = *(_DWORD *)(result + 4 * v134 + 128);
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
                  }
                }
              }
              v136 = v99 - v102;
              if ( v99 - v102 != v99 )
              {
                *(_QWORD *)result = *(_QWORD *)(v152 + 8LL * v136);
                *(_DWORD *)(result + 128) = *(_DWORD *)(v152 + 4LL * v136 + 128);
                v137 = v136 + 1;
                if ( (_DWORD)v137 != v99 )
                {
                  *(_QWORD *)(result + 8) = *(_QWORD *)(v152 + 8 * v137);
                  *(_DWORD *)(result + 132) = *(_DWORD *)(v152 + 4 * v137 + 128);
                  v138 = v136 + 2;
                  if ( (_DWORD)v138 != v99 )
                  {
                    *(_QWORD *)(result + 16) = *(_QWORD *)(v152 + 8 * v138);
                    *(_DWORD *)(result + 136) = *(_DWORD *)(v152 + 4 * v138 + 128);
                    v139 = v136 + 3;
                    if ( v99 != (_DWORD)v139 )
                    {
                      *(_QWORD *)(result + 24) = *(_QWORD *)(v152 + 8 * v139);
                      *(_DWORD *)(result + 140) = *(_DWORD *)(v152 + 4 * v139 + 128);
                      v140 = v136 + 4;
                      if ( v99 != (_DWORD)v140 )
                      {
                        *(_QWORD *)(result + 32) = *(_QWORD *)(v152 + 8 * v140);
                        *(_DWORD *)(result + 144) = *(_DWORD *)(v152 + 4 * v140 + 128);
                        v141 = v136 + 5;
                        if ( v99 != (_DWORD)v141 )
                        {
                          *(_QWORD *)(result + 40) = *(_QWORD *)(v152 + 8 * v141);
                          *(_DWORD *)(result + 148) = *(_DWORD *)(v152 + 4 * v141 + 128);
                          v142 = v136 + 6;
                          if ( (_DWORD)v142 != v99 )
                          {
                            *(_QWORD *)(result + 48) = *(_QWORD *)(v152 + 8 * v142);
                            *(_DWORD *)(result + 152) = *(_DWORD *)(v152 + 4 * v142 + 128);
                            v143 = v136 + 7;
                            if ( (_DWORD)v143 != v99 )
                            {
                              *(_QWORD *)(result + 56) = *(_QWORD *)(v152 + 8 * v143);
                              *(_DWORD *)(result + 156) = *(_DWORD *)(v152 + 4 * v143 + 128);
                              v144 = v136 + 8;
                              if ( (_DWORD)v144 != v99 )
                              {
                                *(_QWORD *)(result + 64) = *(_QWORD *)(v152 + 8 * v144);
                                *(_DWORD *)(result + 160) = *(_DWORD *)(v152 + 4 * v144 + 128);
                                v145 = v136 + 9;
                                if ( (_DWORD)v145 != v99 )
                                {
                                  *(_QWORD *)(result + 72) = *(_QWORD *)(v152 + 8 * v145);
                                  *(_DWORD *)(result + 164) = *(_DWORD *)(v152 + 4 * v145 + 128);
                                  v146 = v136 + 10;
                                  if ( (_DWORD)v146 != v99 )
                                  {
                                    *(_QWORD *)(result + 80) = *(_QWORD *)(v152 + 8 * v146);
                                    *(_DWORD *)(result + 168) = *(_DWORD *)(v152 + 4 * v146 + 128);
                                    v147 = v136 + 11;
                                    if ( (_DWORD)v147 != v99 )
                                    {
                                      *(_QWORD *)(result + 88) = *(_QWORD *)(v152 + 8 * v147);
                                      *(_DWORD *)(result + 172) = *(_DWORD *)(v152 + 4 * v147 + 128);
                                      v148 = v136 + 12;
                                      if ( (_DWORD)v148 != v99 )
                                      {
                                        *(_QWORD *)(result + 96) = *(_QWORD *)(v152 + 8 * v148);
                                        *(_DWORD *)(result + 176) = *(_DWORD *)(v152 + 4 * v148 + 128);
                                        v149 = v136 + 13;
                                        if ( (_DWORD)v149 != v99 )
                                        {
                                          *(_QWORD *)(result + 104) = *(_QWORD *)(v152 + 8 * v149);
                                          *(_DWORD *)(result + 180) = *(_DWORD *)(v152 + 4 * v149 + 128);
                                          v150 = v136 + 14;
                                          if ( (_DWORD)v150 != v99 )
                                          {
                                            v151 = v136 + 15;
                                            *(_QWORD *)(result + 112) = *(_QWORD *)(v152 + 8 * v150);
                                            *(_DWORD *)(result + 184) = *(_DWORD *)(v152 + 4 * v150 + 128);
                                            if ( (_DWORD)v151 != v99 )
                                            {
                                              *(_QWORD *)(result + 120) = *(_QWORD *)(v152 + 8 * v151);
                                              *(_DWORD *)(result + 188) = *(_DWORD *)(v152 + 4 * v151 + 128);
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
                  }
                }
              }
            }
            else
            {
              v155 = v100 - v99;
              if ( 16 - v99 <= v100 - v99 )
                v155 = 16 - v99;
              v156 = v155;
              if ( v154 <= v155 )
                v156 = *v153;
              if ( v156 )
              {
                *(_QWORD *)(v152 + 8LL * v99) = *(_QWORD *)result;
                *(_DWORD *)(v152 + 4LL * v99 + 128) = *(_DWORD *)(result + 128);
                v157 = v99 + 1;
                if ( v156 != 1 )
                {
                  *(_QWORD *)(v152 + 8 * v157) = *(_QWORD *)(result + 8);
                  *(_DWORD *)(v152 + 4 * v157 + 128) = *(_DWORD *)(result + 132);
                  v158 = v99 + 2;
                  if ( v156 != 2 )
                  {
                    *(_QWORD *)(v152 + 8 * v158) = *(_QWORD *)(result + 16);
                    *(_DWORD *)(v152 + 4 * v158 + 128) = *(_DWORD *)(result + 136);
                    v159 = v99 + 3;
                    if ( v156 != 3 )
                    {
                      *(_QWORD *)(v152 + 8 * v159) = *(_QWORD *)(result + 24);
                      *(_DWORD *)(v152 + 4 * v159 + 128) = *(_DWORD *)(result + 140);
                      v160 = v99 + 4;
                      if ( v156 != 4 )
                      {
                        *(_QWORD *)(v152 + 8 * v160) = *(_QWORD *)(result + 32);
                        *(_DWORD *)(v152 + 4 * v160 + 128) = *(_DWORD *)(result + 144);
                        v161 = v99 + 5;
                        if ( v156 != 5 )
                        {
                          *(_QWORD *)(v152 + 8 * v161) = *(_QWORD *)(result + 40);
                          *(_DWORD *)(v152 + 4 * v161 + 128) = *(_DWORD *)(result + 148);
                          v162 = v99 + 6;
                          if ( v156 != 6 )
                          {
                            *(_QWORD *)(v152 + 8 * v162) = *(_QWORD *)(result + 48);
                            *(_DWORD *)(v152 + 4 * v162 + 128) = *(_DWORD *)(result + 152);
                            v163 = v99 + 7;
                            if ( v156 != 7 )
                            {
                              *(_QWORD *)(v152 + 8 * v163) = *(_QWORD *)(result + 56);
                              *(_DWORD *)(v152 + 4 * v163 + 128) = *(_DWORD *)(result + 156);
                              v164 = v99 + 8;
                              if ( v156 != 8 )
                              {
                                *(_QWORD *)(v152 + 8 * v164) = *(_QWORD *)(result + 64);
                                *(_DWORD *)(v152 + 4 * v164 + 128) = *(_DWORD *)(result + 160);
                                v165 = v99 + 9;
                                if ( v156 != 9 )
                                {
                                  *(_QWORD *)(v152 + 8 * v165) = *(_QWORD *)(result + 72);
                                  *(_DWORD *)(v152 + 4 * v165 + 128) = *(_DWORD *)(result + 164);
                                  v166 = v99 + 10;
                                  if ( v156 != 10 )
                                  {
                                    *(_QWORD *)(v152 + 8 * v166) = *(_QWORD *)(result + 80);
                                    *(_DWORD *)(v152 + 4 * v166 + 128) = *(_DWORD *)(result + 168);
                                    v167 = v99 + 11;
                                    if ( v156 != 11 )
                                    {
                                      *(_QWORD *)(v152 + 8 * v167) = *(_QWORD *)(result + 88);
                                      *(_DWORD *)(v152 + 4 * v167 + 128) = *(_DWORD *)(result + 172);
                                      v168 = v99 + 12;
                                      if ( v156 != 12 )
                                      {
                                        *(_QWORD *)(v152 + 8 * v168) = *(_QWORD *)(result + 96);
                                        *(_DWORD *)(v152 + 4 * v168 + 128) = *(_DWORD *)(result + 176);
                                        v169 = v99 + 13;
                                        if ( v156 != 13 )
                                        {
                                          *(_QWORD *)(v152 + 8 * v169) = *(_QWORD *)(result + 104);
                                          *(_DWORD *)(v152 + 4 * v169 + 128) = *(_DWORD *)(result + 180);
                                          v170 = v99 + 14;
                                          if ( v156 != 14 )
                                          {
                                            v171 = v99 + 15;
                                            *(_QWORD *)(v152 + 8 * v170) = *(_QWORD *)(result + 112);
                                            *(_DWORD *)(v152 + 4 * v170 + 128) = *(_DWORD *)(result + 184);
                                            if ( v156 != 15 )
                                            {
                                              *(_QWORD *)(v152 + 8 * v171) = *(_QWORD *)(result + 120);
                                              *(_DWORD *)(v152 + 4 * v171 + 128) = *(_DWORD *)(result + 188);
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
                  }
                }
              }
              if ( v154 > v155 )
              {
                *(_QWORD *)result = *(_QWORD *)(result + 8LL * v156);
                *(_DWORD *)(result + 128) = *(_DWORD *)(result + 4LL * v156 + 128);
                v172 = v156 + 1;
                if ( v154 != (_DWORD)v172 )
                {
                  *(_QWORD *)(result + 8) = *(_QWORD *)(result + 8 * v172);
                  *(_DWORD *)(result + 132) = *(_DWORD *)(result + 4 * v172 + 128);
                  v173 = v156 + 2;
                  if ( v154 != (_DWORD)v173 )
                  {
                    *(_QWORD *)(result + 16) = *(_QWORD *)(result + 8 * v173);
                    *(_DWORD *)(result + 136) = *(_DWORD *)(result + 4 * v173 + 128);
                    v174 = v156 + 3;
                    if ( v154 != (_DWORD)v174 )
                    {
                      *(_QWORD *)(result + 24) = *(_QWORD *)(result + 8 * v174);
                      *(_DWORD *)(result + 140) = *(_DWORD *)(result + 4 * v174 + 128);
                      v175 = v156 + 4;
                      if ( v154 != (_DWORD)v175 )
                      {
                        *(_QWORD *)(result + 32) = *(_QWORD *)(result + 8 * v175);
                        *(_DWORD *)(result + 144) = *(_DWORD *)(result + 4 * v175 + 128);
                        v176 = v156 + 5;
                        if ( v154 != (_DWORD)v176 )
                        {
                          *(_QWORD *)(result + 40) = *(_QWORD *)(result + 8 * v176);
                          *(_DWORD *)(result + 148) = *(_DWORD *)(result + 4 * v176 + 128);
                          v177 = v156 + 6;
                          if ( v154 != (_DWORD)v177 )
                          {
                            *(_QWORD *)(result + 48) = *(_QWORD *)(result + 8 * v177);
                            *(_DWORD *)(result + 152) = *(_DWORD *)(result + 4 * v177 + 128);
                            v178 = v156 + 7;
                            if ( v154 != (_DWORD)v178 )
                            {
                              *(_QWORD *)(result + 56) = *(_QWORD *)(result + 8 * v178);
                              *(_DWORD *)(result + 156) = *(_DWORD *)(result + 4 * v178 + 128);
                              v179 = v156 + 8;
                              if ( v154 != (_DWORD)v179 )
                              {
                                *(_QWORD *)(result + 64) = *(_QWORD *)(result + 8 * v179);
                                *(_DWORD *)(result + 160) = *(_DWORD *)(result + 4 * v179 + 128);
                                v180 = v156 + 9;
                                if ( v154 != (_DWORD)v180 )
                                {
                                  *(_QWORD *)(result + 72) = *(_QWORD *)(result + 8 * v180);
                                  *(_DWORD *)(result + 164) = *(_DWORD *)(result + 4 * v180 + 128);
                                  v181 = v156 + 10;
                                  if ( v154 != (_DWORD)v181 )
                                  {
                                    *(_QWORD *)(result + 80) = *(_QWORD *)(result + 8 * v181);
                                    *(_DWORD *)(result + 168) = *(_DWORD *)(result + 4 * v181 + 128);
                                    v182 = v156 + 11;
                                    if ( v154 != (_DWORD)v182 )
                                    {
                                      *(_QWORD *)(result + 88) = *(_QWORD *)(result + 8 * v182);
                                      *(_DWORD *)(result + 172) = *(_DWORD *)(result + 4 * v182 + 128);
                                      v183 = v156 + 12;
                                      if ( v154 != (_DWORD)v183 )
                                      {
                                        *(_QWORD *)(result + 96) = *(_QWORD *)(result + 8 * v183);
                                        *(_DWORD *)(result + 176) = *(_DWORD *)(result + 4 * v183 + 128);
                                        v184 = v156 + 13;
                                        if ( v154 != (_DWORD)v184 )
                                        {
                                          *(_QWORD *)(result + 104) = *(_QWORD *)(result + 8 * v184);
                                          *(_DWORD *)(result + 180) = *(_DWORD *)(result + 4 * v184 + 128);
                                          v185 = v156 + 14;
                                          if ( v154 != (_DWORD)v185 )
                                          {
                                            *(_QWORD *)(result + 112) = *(_QWORD *)(result + 8 * v185);
                                            *(_DWORD *)(result + 184) = *(_DWORD *)(result + 4 * v185 + 128);
                                            v186 = v156 + 15;
                                            if ( v154 != (_DWORD)v186 )
                                            {
                                              *(_QWORD *)(result + 120) = *(_QWORD *)(result + 8 * v186);
                                              *(_DWORD *)(result + 188) = *(_DWORD *)(result + 4 * v186 + 128);
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
                  }
                }
              }
              v102 = -v156;
            }
            *v153 += v102;
            v99 = *v96 - v102;
            *v96 = v99;
            v100 = *v97;
            if ( v99 >= *v97 )
              break;
            ++v101;
          }
          while ( a2 != v101 );
        }
      }
      ++v96;
      ++v97;
      ++v98;
    }
    while ( v191 != v189 );
  }
  return result;
}
