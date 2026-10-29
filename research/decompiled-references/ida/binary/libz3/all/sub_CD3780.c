__int64 __fastcall sub_CD3780(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64); // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned int v10; // r13d
  char v11; // bp
  __int64 v12; // r14
  _QWORD *v13; // r8
  __int64 v14; // rsi
  void *v15; // rdi
  bool v16; // zf
  unsigned int *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r12
  void *v21; // rdi
  __int64 v22; // r12
  char *v23; // rax
  char *v24; // r9
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64); // rax
  int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // r14d
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r12
  __int64 v33; // r15
  unsigned int *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // r8
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdi
  _QWORD *v44; // rdi
  __int64 v45; // rax
  __int64 (*v46)(void); // rdx
  __int64 v47; // rdx
  unsigned int v48; // r13d
  __int64 v49; // rax
  __int64 *v50; // r14
  __int64 v51; // rbp
  __int64 v52; // r15
  unsigned int *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // r8
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rdi
  void *v61; // rdi
  __int64 v62; // rax
  int v63; // r8d
  char *v64; // rcx
  unsigned int v65; // edx
  char *v66; // rdi
  __int64 v67; // rdx
  char *v68; // r9
  char *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rsi
  void *v72; // rdi
  char *v73; // rbx
  char *v74; // rbp
  __int64 v75; // rsi
  __int64 result; // rax
  __int64 v77; // r12
  __int64 v78; // r13
  unsigned int *v79; // rdx
  char v80; // dl
  __int64 v81; // rsi
  __int64 v82; // r14
  __int64 v83; // rdi
  int v84; // edx
  _QWORD *v85; // rcx
  __int64 v86; // rsi
  __int64 v87; // rdi
  unsigned int *v88; // r14
  __int64 v89; // rdi
  _QWORD *v90; // rdi
  __int64 v91; // rax
  __int64 (*v92)(void); // rdx
  __int64 v93; // rdx
  unsigned int v94; // r14d
  __int64 v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // r12
  __int64 v98; // r15
  unsigned int *v99; // rax
  _QWORD *v100; // rax
  _QWORD *v101; // r8
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // rdx
  __int64 v105; // rsi
  __int64 v106; // rdi
  __int64 v107; // r14
  char *v108; // rax
  char *v109; // rdi
  unsigned __int64 v110; // rax
  __int64 v111; // r8
  __int64 v112; // rax
  __int64 v113; // rdi
  _QWORD *v114; // rdi
  __int64 v115; // rax
  __int64 (*v116)(void); // rdx
  __int64 v117; // rdx
  unsigned int v118; // r13d
  __int64 v119; // rax
  __int64 *v120; // r14
  __int64 v121; // rbp
  __int64 v122; // r15
  unsigned int *v123; // rax
  _QWORD *v124; // rax
  _QWORD *v125; // rdx
  __int64 v126; // rsi
  __int64 v127; // r8
  __int64 v128; // rsi
  __int64 v129; // rsi
  __int64 v130; // r8
  __int64 v131; // rax
  unsigned __int64 v132; // rax
  __int64 v133; // r9
  __int64 v134; // rax
  int v135; // r8d
  char *v136; // rcx
  unsigned int v137; // edx
  char *v138; // rdi
  __int64 v139; // rdx
  char *v140; // r9
  char *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rsi
  __int64 v144; // rdi
  char *v145; // rbx
  char *v146; // rbp
  __int64 v147; // rsi
  __int64 v148; // rdi
  unsigned int v149; // edi
  __int64 v150; // rbp
  __int64 v151; // rsi
  __int64 v152; // rdi
  unsigned int v153; // eax
  __int64 v154; // rax
  char *v155; // rcx
  int v156; // edi
  unsigned int v157; // edx
  char *v158; // rsi
  __int64 v159; // rdx
  char *v160; // r8
  char *v161; // rax
  __int64 v162; // rdx
  char *v163; // rbx
  char *v164; // rbp
  __int64 v165; // rsi
  __int64 v166; // rdi
  char *v167; // rbx
  char *v168; // rbp
  __int64 v169; // rsi
  __int64 v170; // rax
  __int64 (*v171)(void); // rax
  __int64 v172; // rax
  char *v173; // r9
  __int64 v174; // rdx
  const __m128i *v175; // rcx
  unsigned __int64 v176; // rax
  unsigned __int64 v177; // r8
  bool v178; // cc
  const __m128i *v179; // rax
  const __m128i *v180; // rdx
  const __m128i *v181; // rsi
  __m128d v182; // xmm1
  __m128d v183; // xmm0
  unsigned __int64 v184; // rax
  __int64 *v185; // rcx
  char *v186; // rdx
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rsi
  __int64 v190; // rsi
  __int64 v191; // rdi
  __int64 (*v192)(void); // rdx
  unsigned int v193; // eax
  __int64 v194; // rax
  __int64 (*v195)(void); // rdx
  unsigned int v196; // eax
  __int64 (*v197)(void); // rdx
  unsigned int v198; // eax
  int v199; // ecx
  _QWORD *v201; // [rsp+10h] [rbp-1C8h]
  _QWORD *v202; // [rsp+10h] [rbp-1C8h]
  _QWORD *v203; // [rsp+10h] [rbp-1C8h]
  _QWORD *v204; // [rsp+10h] [rbp-1C8h]
  _QWORD *v205; // [rsp+10h] [rbp-1C8h]
  _QWORD *v206; // [rsp+10h] [rbp-1C8h]
  _QWORD *v207; // [rsp+10h] [rbp-1C8h]
  _QWORD *v208; // [rsp+10h] [rbp-1C8h]
  _QWORD *v209; // [rsp+18h] [rbp-1C0h]
  unsigned int v210; // [rsp+18h] [rbp-1C0h]
  _QWORD *v212; // [rsp+30h] [rbp-1A8h]
  unsigned int v213; // [rsp+30h] [rbp-1A8h]
  unsigned int v214; // [rsp+30h] [rbp-1A8h]
  _QWORD *v215; // [rsp+30h] [rbp-1A8h]
  _QWORD *v216; // [rsp+30h] [rbp-1A8h]
  unsigned int v217; // [rsp+30h] [rbp-1A8h]
  unsigned int v218; // [rsp+38h] [rbp-1A0h]
  unsigned int v219; // [rsp+38h] [rbp-1A0h]
  unsigned int v220; // [rsp+38h] [rbp-1A0h]
  _QWORD *v221; // [rsp+38h] [rbp-1A0h]
  int v222; // [rsp+40h] [rbp-198h]
  unsigned int v223; // [rsp+40h] [rbp-198h]
  _QWORD *v224; // [rsp+40h] [rbp-198h]
  _QWORD *v225; // [rsp+48h] [rbp-190h]
  _QWORD *v226; // [rsp+48h] [rbp-190h]
  unsigned int *v227; // [rsp+50h] [rbp-188h] BYREF
  __int64 v228; // [rsp+58h] [rbp-180h]
  __int64 v229; // [rsp+60h] [rbp-178h]
  void *ptr; // [rsp+68h] [rbp-170h]
  __int64 v231; // [rsp+70h] [rbp-168h]
  _BYTE v232[136]; // [rsp+78h] [rbp-160h] BYREF
  unsigned int *v233; // [rsp+100h] [rbp-D8h] BYREF
  void *v234; // [rsp+108h] [rbp-D0h]
  __int64 v235; // [rsp+110h] [rbp-C8h]
  _BYTE v236[192]; // [rsp+118h] [rbp-C0h] BYREF

  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD **)(a1 + 8);
  ptr = v232;
  v231 = 0x1000000000LL;
  v6 = *v5;
  v229 = v4;
  v7 = *(__int64 (__fastcall **)(__int64))(v6 + 56);
  if ( v7 == sub_CD0230 )
  {
    v8 = v5[8];
    v9 = v4;
    if ( !v8 )
    {
      v10 = *(_DWORD *)(a2 + 24);
      v222 = 0;
      v11 = 0;
      if ( v10 )
        goto LABEL_4;
      goto LABEL_116;
    }
    v10 = *(_DWORD *)(a2 + 24);
    v11 = 0;
    v222 = *(_DWORD *)(v8 - 4);
    if ( v10 )
    {
LABEL_4:
      v12 = 0;
      v11 = 0;
      while ( 1 )
      {
        v234 = (void *)v9;
        v233 = nullptr;
        v17 = *(unsigned int **)(a2 + 8 * v12 + 32);
        sub_CD2680(a1, v17, (__int64 *)&v233);
        v18 = (__int64)v233;
        v11 |= v17 != v233;
        v19 = *(_QWORD *)a1;
        if ( (unsigned int)v12 < v10 - 1 )
        {
          v9 = *(_QWORD *)(v19 + 864);
          if ( *(unsigned int **)(v19 + 856) == v233 )
          {
            if ( v233 != (unsigned int *)v9 )
              goto LABEL_58;
LABEL_83:
            if ( v18 )
            {
LABEL_84:
              v61 = v234;
              v16 = (*(_DWORD *)(v18 + 8))-- == 1;
              if ( !v16 )
                goto LABEL_85;
              sub_15D7BC0(v61, v18);
              v11 = 1;
            }
            else
            {
LABEL_85:
              v11 = 1;
            }
LABEL_8:
            if ( (unsigned int)++v12 >= v10 )
              goto LABEL_36;
            goto LABEL_9;
          }
          if ( v233 == (unsigned int *)v9 )
            goto LABEL_83;
          v9 = (*(unsigned int (__fastcall **)(_QWORD, unsigned int *, __int64))(**(_QWORD **)(a1 + 8) + 16LL))(
                 *(_QWORD *)(a1 + 8),
                 v233,
                 1);
          v18 = (__int64)v233;
          v19 = *(_QWORD *)a1;
          if ( !(_BYTE)v9 )
          {
            v20 = *(_QWORD *)(v19 + 856);
            if ( v20 )
            {
              ++*(_DWORD *)(v20 + 8);
              if ( !v18 )
              {
                v18 = *(_QWORD *)(v19 + 864);
                v233 = (unsigned int *)v20;
                if ( v20 != v18 )
                {
LABEL_211:
                  v18 = v20;
LABEL_58:
                  v42 = *a3;
                  if ( *a3 != v18 )
                  {
                    if ( v42 )
                    {
                      v43 = a3[1];
                      v16 = (*(_DWORD *)(v42 + 8))-- == 1;
                      if ( v16 )
                      {
                        sub_15D7BC0(v43, v42);
                        v18 = (__int64)v233;
                      }
                    }
                    *a3 = v18;
                    if ( v18 )
                      ++*(_DWORD *)(v18 + 8);
                  }
                  v44 = *(_QWORD **)(a1 + 8);
                  v45 = *v44;
                  v46 = *(__int64 (**)(void))(*v44 + 56LL);
                  if ( (char *)v46 == (char *)sub_CD0230 )
                  {
                    v47 = v44[8];
                    if ( v47 )
                    {
                      v210 = *(_DWORD *)(v47 - 4) - v222;
                      if ( v210 )
                        goto LABEL_67;
LABEL_89:
                      if ( *(_DWORD *)(a2 + 8) <= 1u )
                        goto LABEL_97;
                      v62 = *(unsigned int *)(a1 + 584);
                      v63 = *(_DWORD *)(a2 + 12);
                      v64 = *(char **)(a1 + 576);
                      v65 = v62 - 1;
                      v62 *= 16;
                      v66 = &v64[v62];
                      v67 = 16LL * (v63 & v65);
                      v68 = &v64[v67];
                      if ( v67 != v62 )
                      {
                        v69 = &v64[v67];
                        do
                        {
                          v70 = *(_QWORD *)v69;
                          if ( *(_QWORD *)v69 > 1u )
                          {
                            if ( *(_DWORD *)(v70 + 12) == v63 && a2 == v70 )
                              goto LABEL_294;
                          }
                          else if ( !v70 )
                          {
                            goto LABEL_97;
                          }
                          v69 += 16;
                        }
                        while ( v66 != v69 );
                      }
                      if ( v64 == v68 )
                        goto LABEL_97;
                      while ( 1 )
                      {
                        v170 = *(_QWORD *)v64;
                        if ( *(_QWORD *)v64 > 1u )
                        {
                          if ( *(_DWORD *)(v170 + 12) == v63 && a2 == v170 )
                          {
                            v69 = v64;
LABEL_294:
                            if ( *((_DWORD *)v69 + 2) > 1u )
                              sub_CD0860((_QWORD *)a1, (unsigned int *)a2, v18);
LABEL_97:
                            v71 = (__int64)v233;
                            if ( v233 )
                            {
                              v72 = v234;
                              v16 = v233[2]-- == 1;
                              if ( v16 )
                                sub_15D7BC0(v72, v71);
                            }
                            goto LABEL_100;
                          }
                        }
                        else if ( !v170 )
                        {
                          goto LABEL_97;
                        }
                        v64 += 16;
                        if ( v68 == v64 )
                          goto LABEL_97;
                      }
                    }
                    if ( !v222 )
                      goto LABEL_89;
                    v214 = 0;
                    v210 = -v222;
LABEL_68:
                    (*(void (__fastcall **)(_QWORD *, _QWORD))(v45 + 40))(v44, v210);
                    v48 = v214;
                    v49 = *(_QWORD *)(a1 + 544);
                    while ( v49 )
                    {
                      if ( v48 >= *(_DWORD *)(v49 - 4) )
                      {
                        --v48;
                        if ( v214 - v48 >= v210 )
                          break;
                      }
                      else
                      {
                        v50 = (__int64 *)(v49 + 8LL * v48);
                        v51 = *v50;
                        if ( *v50 )
                        {
                          v52 = v51 + 8LL * *(unsigned int *)(v51 - 4);
                          while ( v51 != v52 )
                          {
                            v53 = *(unsigned int **)(v52 - 8);
                            v52 -= 8;
                            v54 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 16LL * *v53);
                            v55 = (_QWORD *)v54[1];
                            v56 = *v55;
                            if ( *v55 )
                            {
                              v57 = *(_QWORD *)a1;
                              v16 = (*(_DWORD *)(v56 + 8))-- == 1;
                              if ( v16 )
                              {
                                v203 = v54;
                                sub_15D7BC0(v57, v56);
                                v54 = v203;
                                v55 = (_QWORD *)v203[1];
                              }
                            }
                            v58 = v55[2];
                            v54[1] = v58;
                            if ( !v58 )
                            {
                              v59 = *v54;
                              if ( *v54 )
                              {
                                v60 = *(_QWORD *)a1;
                                v16 = (*(_DWORD *)(v59 + 8))-- == 1;
                                if ( v16 )
                                {
                                  v221 = v55;
                                  v206 = v54;
                                  sub_15D7BC0(v60, v59);
                                  v55 = v221;
                                  v54 = v206;
                                }
                              }
                              *v54 = 0;
                            }
                            sub_17E9C40(a1 + 16, 24, v55);
                          }
                          if ( *v50 )
                            *(_DWORD *)(*v50 - 4) = 0;
                        }
                        --v48;
                        if ( v214 - v48 >= v210 )
                          break;
                        v49 = *(_QWORD *)(a1 + 544);
                      }
                    }
                  }
                  else
                  {
                    v210 = v46() - v222;
                    if ( v210 )
                    {
                      v44 = *(_QWORD **)(a1 + 8);
                      v45 = *v44;
                      v192 = *(__int64 (**)(void))(*v44 + 56LL);
                      if ( (char *)v192 == (char *)sub_CD0230 )
                      {
                        v47 = v44[8];
                        v214 = 0;
                        if ( v47 )
LABEL_67:
                          v214 = *(_DWORD *)(v47 - 4);
                      }
                      else
                      {
                        v193 = v192();
                        v44 = *(_QWORD **)(a1 + 8);
                        v214 = v193;
                        v45 = *v44;
                      }
                      goto LABEL_68;
                    }
                  }
                  v18 = *a3;
                  goto LABEL_89;
                }
                goto LABEL_84;
              }
            }
            else if ( !v233 )
            {
              v16 = *(_QWORD *)(v19 + 864) == 0;
              v233 = nullptr;
              if ( !v16 )
                goto LABEL_211;
              goto LABEL_85;
            }
            v21 = v234;
            v16 = (*(_DWORD *)(v18 + 8))-- == 1;
            if ( v16 )
            {
              sub_15D7BC0(v21, v18);
              v19 = *(_QWORD *)a1;
            }
            v233 = (unsigned int *)v20;
            v18 = v20;
          }
        }
        if ( *(_QWORD *)(v19 + 864) == v18 )
          goto LABEL_83;
        if ( *(_QWORD *)(v19 + 856) == v18 )
          goto LABEL_58;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        v9 = (unsigned int)v231;
        if ( (unsigned int)v231 < HIDWORD(v231) )
        {
          v13 = ptr;
        }
        else
        {
          v22 = (unsigned int)(2 * HIDWORD(v231));
          v23 = (char *)sub_186B270(8 * v22);
          v9 = (unsigned int)v231;
          v24 = (char *)ptr;
          v13 = v23;
          if ( (_DWORD)v231 )
          {
            if ( (unsigned int)(v231 - 1) <= 2 || v23 == (char *)ptr + 8 )
            {
              v131 = 0;
              do
              {
                v13[v131] = *(_QWORD *)&v24[v131 * 8];
                ++v131;
              }
              while ( v131 != (unsigned int)v9 );
            }
            else
            {
              v25 = 0;
              do
              {
                *(__m128i *)&v13[v25] = _mm_loadu_si128((const __m128i *)&v24[v25 * 8]);
                v25 += 2;
              }
              while ( 2LL * ((unsigned int)v9 >> 1) != v25 );
              if ( (v9 & 1) != 0 )
                v13[(unsigned int)v9 & 0xFFFFFFFE] = *(_QWORD *)&v24[8 * (v9 & 0xFFFFFFFE)];
            }
          }
          if ( v24 != v232 && v24 )
          {
            v212 = v13;
            sub_186B220(v24);
            v9 = (unsigned int)v231;
            v13 = v212;
          }
          ptr = v13;
          HIDWORD(v231) = v22;
        }
        v13[(unsigned int)v9] = v18;
        v14 = (__int64)v233;
        LODWORD(v231) = v9 + 1;
        if ( !v233 )
          goto LABEL_8;
        v15 = v234;
        v16 = v233[2]-- == 1;
        if ( !v16 )
          goto LABEL_8;
        sub_15D7BC0(v15, v14);
        if ( (unsigned int)++v12 >= v10 )
          goto LABEL_36;
LABEL_9:
        v9 = *(_QWORD *)a1;
      }
    }
    goto LABEL_38;
  }
  v222 = ((__int64 (*)(void))v7)();
  v10 = *(_DWORD *)(a2 + 24);
  if ( v10 )
  {
    v9 = *(_QWORD *)a1;
    goto LABEL_4;
  }
  v11 = 0;
LABEL_36:
  v5 = *(_QWORD **)(a1 + 8);
  v26 = *(__int64 (__fastcall **)(__int64))(*v5 + 56LL);
  if ( v26 == sub_CD0230 )
  {
    v8 = v5[8];
    if ( !v8 )
    {
      v27 = 0;
LABEL_39:
      v213 = v27 - v222;
      if ( v27 != v222 )
        goto LABEL_40;
      goto LABEL_115;
    }
LABEL_38:
    v27 = *(_DWORD *)(v8 - 4);
    goto LABEL_39;
  }
  v213 = ((__int64 (*)(void))v26)() - v222;
  if ( v213 )
  {
    v5 = *(_QWORD **)(a1 + 8);
    v171 = *(__int64 (**)(void))(*v5 + 56LL);
    if ( (char *)v171 != (char *)sub_CD0230 )
    {
      v218 = v171();
      v5 = *(_QWORD **)(a1 + 8);
      goto LABEL_42;
    }
LABEL_40:
    v28 = v5[8];
    if ( v28 )
      v218 = *(_DWORD *)(v28 - 4);
    else
      v218 = 0;
LABEL_42:
    (*(void (__fastcall **)(_QWORD *, _QWORD, unsigned __int64))(*v5 + 40LL))(v5, v213, v9);
    v29 = v218;
    v30 = *(_QWORD *)(a1 + 544);
    do
    {
      if ( !v30 )
        break;
      while ( v29 < *(_DWORD *)(v30 - 4) )
      {
        v31 = (_QWORD *)(v30 + 8LL * v29);
        v32 = *v31;
        v209 = v31;
        if ( *v31 )
        {
          v33 = v32 + 8LL * *(unsigned int *)(v32 - 4);
          while ( v32 != v33 )
          {
            v34 = *(unsigned int **)(v33 - 8);
            v33 -= 8;
            v35 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 16LL * *v34);
            v36 = (_QWORD *)v35[1];
            v37 = *v36;
            if ( *v36 )
            {
              v38 = *(_QWORD *)a1;
              v16 = (*(_DWORD *)(v37 + 8))-- == 1;
              if ( v16 )
              {
                v201 = v35;
                sub_15D7BC0(v38, v37);
                v35 = v201;
                v36 = (_QWORD *)v201[1];
              }
            }
            v39 = v36[2];
            v35[1] = v39;
            if ( !v39 )
            {
              v40 = *v35;
              if ( *v35 )
              {
                v41 = *(_QWORD *)a1;
                v16 = (*(_DWORD *)(v40 + 8))-- == 1;
                if ( v16 )
                {
                  v225 = v36;
                  v202 = v35;
                  sub_15D7BC0(v41, v40);
                  v36 = v225;
                  v35 = v202;
                }
              }
              *v35 = 0;
            }
            sub_17E9C40(a1 + 16, 24, v36);
          }
          if ( *v209 )
            *(_DWORD *)(*v209 - 4LL) = 0;
        }
        --v29;
        if ( v218 - v29 < v213 )
        {
          v30 = *(_QWORD *)(a1 + 544);
          if ( v30 )
            continue;
        }
        goto LABEL_115;
      }
      --v29;
    }
    while ( v218 - v29 < v213 );
  }
LABEL_115:
  v4 = *(_QWORD *)a1;
LABEL_116:
  v233 = (unsigned int *)v4;
  v234 = v236;
  v235 = 0x1000000000LL;
  if ( !(_DWORD)v231 )
    goto LABEL_143;
  v77 = (unsigned int)(v231 - 1);
  v78 = 8 * v77;
  while ( 1 )
  {
    v88 = *(unsigned int **)((char *)ptr + v78);
    v228 = v4;
    v227 = nullptr;
    sub_CD2680(a1, v88, (__int64 *)&v227);
    v81 = (__int64)v227;
    v11 |= v88 != v227;
    v4 = *(_QWORD *)a1;
    if ( (_DWORD)v77 )
      break;
    if ( v227 != *(unsigned int **)(v4 + 864) )
    {
LABEL_127:
      if ( *(_QWORD *)(v4 + 856) == v81 )
        goto LABEL_174;
      if ( v81 )
        ++*(_DWORD *)(v81 + 8);
      v84 = v235;
      if ( (unsigned int)v235 >= HIDWORD(v235) )
      {
        v107 = (unsigned int)(2 * HIDWORD(v235));
        v108 = (char *)sub_186B270(8 * v107);
        v84 = v235;
        v109 = (char *)v234;
        v85 = v108;
        if ( (_DWORD)v235 )
        {
          if ( (unsigned int)(v235 - 1) <= 2 || v108 == (char *)v234 + 8 )
          {
            v132 = 0;
            v133 = 8LL * (unsigned int)v235;
            do
            {
              v85[v132 / 8] = *(_QWORD *)&v109[v132];
              v132 += 8LL;
            }
            while ( v133 != v132 );
          }
          else
          {
            v110 = 0;
            v111 = 16LL * ((unsigned int)v235 >> 1);
            do
            {
              *(__m128i *)&v85[v110 / 8] = _mm_loadu_si128((const __m128i *)&v109[v110]);
              v110 += 16LL;
            }
            while ( v110 != v111 );
            if ( (v84 & 1) != 0 )
              v85[v84 & 0xFFFFFFFE] = *(_QWORD *)&v109[8 * (v84 & 0xFFFFFFFE)];
          }
        }
        if ( v109 && v109 != v236 )
        {
          v216 = v85;
          sub_186B220(v109);
          v84 = v235;
          v85 = v216;
        }
        v234 = v85;
        HIDWORD(v235) = v107;
      }
      else
      {
        v85 = v234;
      }
      v85[v84] = v81;
      v86 = (__int64)v227;
      LODWORD(v235) = v84 + 1;
      if ( v227 )
      {
        v87 = v228;
        v16 = v227[2]-- == 1;
        if ( v16 )
          sub_15D7BC0(v87, v86);
      }
      goto LABEL_135;
    }
    if ( !v227 || (v89 = v228, v16 = v227[2] == 1, --v227[2], !v16) )
    {
      v11 = 1;
LABEL_143:
      v90 = *(_QWORD **)(a1 + 8);
      v91 = *v90;
      v92 = *(__int64 (**)(void))(*v90 + 56LL);
      if ( (char *)v92 == (char *)sub_CD0230 )
      {
        v93 = v90[8];
        if ( v93 )
        {
          v219 = *(_DWORD *)(v93 - 4) - v222;
          if ( v219 )
            goto LABEL_146;
LABEL_255:
          if ( !v11 )
          {
            v190 = *a3;
            v153 = *(_DWORD *)(a2 + 8) + 1;
            *(_DWORD *)(a2 + 8) = v153;
            if ( v190 )
            {
              v191 = a3[1];
              v16 = (*(_DWORD *)(v190 + 8))-- == 1;
              if ( v16 )
                sub_15D7BC0(v191, v190);
              v153 = *(_DWORD *)(a2 + 8);
            }
            v150 = a2;
            *a3 = a2;
            goto LABEL_263;
          }
          v149 = v235;
          if ( !(_DWORD)v235 )
          {
            v150 = *(_QWORD *)(*(_QWORD *)a1 + 864LL);
            if ( v150 )
              goto LABEL_258;
            goto LABEL_259;
          }
          v173 = (char *)v234;
          if ( (_DWORD)v235 != 1 )
          {
            v174 = 8LL * (unsigned int)v235;
            v175 = (const __m128i *)((char *)v234 + v174 - 8);
            if ( v234 >= v175 )
              goto LABEL_334;
            if ( (unsigned __int64)(v174 - 9) <= 0x1F )
            {
              v179 = (const __m128i *)v234;
            }
            else
            {
              v176 = (unsigned __int64)(v174 - 9) >> 4;
              v177 = v176 + 1;
              v178 = (__int64)(8 * (v176 + 1)) <= (__int64)(v174 - 8 - 8 * v176);
              v179 = (const __m128i *)v234;
              if ( v178 )
              {
                v180 = (const __m128i *)((char *)v234 + v174 - 16);
                v181 = (const __m128i *)((char *)v234 + 16 * (v177 >> 1));
                do
                {
                  v182 = (__m128d)_mm_loadu_si128(v180);
                  v183 = (__m128d)_mm_loadu_si128(v179++);
                  --v180;
                  v179[-1] = (const __m128i)_mm_shuffle_pd(v182, v182, 1);
                  v180[1] = (const __m128i)_mm_shuffle_pd(v183, v183, 1);
                }
                while ( v181 != v179 );
                if ( (v177 & 1) != 0 )
                {
                  v184 = -8LL * (v177 & 0xFFFFFFFFFFFFFFFELL);
                  v185 = &v175->m128i_i64[v184 / 8];
                  v186 = &v173[-v184];
                  v187 = *(_QWORD *)&v173[-v184];
                  *(_QWORD *)v186 = *v185;
                  *v185 = v187;
                }
LABEL_334:
                sub_1447B20(a1 + 616, *(_QWORD *)(a2 + 16), v149, v173, a3);
                v150 = *a3;
                v153 = *(_DWORD *)(a2 + 8);
LABEL_263:
                if ( v153 <= 1 )
                  goto LABEL_271;
                v154 = *(unsigned int *)(a1 + 584);
                v155 = *(char **)(a1 + 576);
                v156 = *(_DWORD *)(a2 + 12);
                v157 = v154 - 1;
                v154 *= 16;
                v158 = &v155[v154];
                v159 = 16LL * (v156 & v157);
                v160 = &v155[v159];
                if ( v159 != v154 )
                {
                  v161 = &v155[v159];
                  do
                  {
                    v162 = *(_QWORD *)v161;
                    if ( *(_QWORD *)v161 > 1u )
                    {
                      if ( *(_DWORD *)(v162 + 12) == v156 && a2 == v162 )
                        goto LABEL_310;
                    }
                    else if ( !v162 )
                    {
                      goto LABEL_271;
                    }
                    v161 += 16;
                  }
                  while ( v158 != v161 );
                }
                while ( v160 != v155 )
                {
                  v172 = *(_QWORD *)v155;
                  if ( *(_QWORD *)v155 > 1u )
                  {
                    if ( *(_DWORD *)(v172 + 12) == v156 && a2 == v172 )
                    {
                      v161 = v155;
LABEL_310:
                      if ( *((_DWORD *)v161 + 2) > 1u )
                        sub_CD0860((_QWORD *)a1, (unsigned int *)a2, v150);
                      break;
                    }
                  }
                  else if ( !v172 )
                  {
                    break;
                  }
                  v155 += 16;
                }
LABEL_271:
                v163 = (char *)v234;
                v164 = (char *)v234 + 8 * (unsigned int)v235;
                if ( v234 < v164 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v165 = *(_QWORD *)v163;
                      if ( *(_QWORD *)v163 )
                      {
                        v166 = (__int64)v233;
                        v16 = (*(_DWORD *)(v165 + 8))-- == 1;
                        if ( v16 )
                          break;
                      }
                      v163 += 8;
                      if ( v163 >= v164 )
                        goto LABEL_277;
                    }
                    sub_15D7BC0(v166, v165);
                    v163 += 8;
                  }
                  while ( v163 < v164 );
LABEL_277:
                  v163 = (char *)v234;
                }
                if ( v163 != v236 && v163 )
                  sub_186B220(v163);
                v167 = (char *)ptr;
                result = (unsigned int)v231;
                v168 = (char *)ptr + 8 * (unsigned int)v231;
                if ( ptr < v168 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v169 = *(_QWORD *)v167;
                      if ( *(_QWORD *)v167 )
                      {
                        v16 = (*(_DWORD *)(v169 + 8))-- == 1;
                        if ( v16 )
                          break;
                      }
                      v167 += 8;
                      if ( v167 >= v168 )
                        goto LABEL_287;
                    }
                    result = sub_15D7BC0(v229, v169);
                    v167 += 8;
                  }
                  while ( v167 < v168 );
LABEL_287:
                  v167 = (char *)ptr;
                }
                if ( v167 )
                {
                  result = (__int64)v232;
                  if ( v167 != v232 )
                    return sub_186B220(v167);
                }
                return result;
              }
            }
            do
            {
              v188 = v179->m128i_i64[0];
              v189 = v175->m128i_i64[0];
              v179 = (const __m128i *)((char *)v179 + 8);
              v175 = (const __m128i *)((char *)v175 - 8);
              v179[-1].m128i_i64[1] = v189;
              v175->m128i_i64[1] = v188;
            }
            while ( v179 < v175 );
            goto LABEL_334;
          }
          v150 = *(_QWORD *)v234;
          if ( *(_QWORD *)v234 )
LABEL_258:
            ++*(_DWORD *)(v150 + 8);
LABEL_259:
          v151 = *a3;
          if ( *a3 )
          {
            v152 = a3[1];
            v16 = (*(_DWORD *)(v151 + 8))-- == 1;
            if ( v16 )
              sub_15D7BC0(v152, v151);
          }
          *a3 = v150;
          v153 = *(_DWORD *)(a2 + 8);
          goto LABEL_263;
        }
        v199 = v222;
        if ( !v222 )
          goto LABEL_255;
        v223 = 0;
        v219 = -v199;
      }
      else
      {
        v219 = v92() - v222;
        if ( !v219 )
          goto LABEL_255;
        v90 = *(_QWORD **)(a1 + 8);
        v91 = *v90;
        v195 = *(__int64 (**)(void))(*v90 + 56LL);
        if ( (char *)v195 == (char *)sub_CD0230 )
        {
          v93 = v90[8];
          v223 = 0;
          if ( v93 )
LABEL_146:
            v223 = *(_DWORD *)(v93 - 4);
        }
        else
        {
          v196 = v195();
          v90 = *(_QWORD **)(a1 + 8);
          v223 = v196;
          v91 = *v90;
        }
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v91 + 40))(v90, v219);
      v94 = v223;
      v95 = *(_QWORD *)(a1 + 544);
      while ( v95 )
      {
        if ( v94 >= *(_DWORD *)(v95 - 4) )
        {
          --v94;
          if ( v223 - v94 >= v219 )
            goto LABEL_255;
        }
        else
        {
          v96 = (_QWORD *)(v95 + 8LL * v94);
          v97 = *v96;
          v215 = v96;
          if ( *v96 )
          {
            v98 = v97 + 8LL * *(unsigned int *)(v97 - 4);
            while ( v97 != v98 )
            {
              v99 = *(unsigned int **)(v98 - 8);
              v98 -= 8;
              v100 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 16LL * *v99);
              v101 = (_QWORD *)v100[1];
              v102 = *v101;
              if ( *v101 )
              {
                v103 = *(_QWORD *)a1;
                v16 = (*(_DWORD *)(v102 + 8))-- == 1;
                if ( v16 )
                {
                  v204 = v100;
                  sub_15D7BC0(v103, v102);
                  v100 = v204;
                  v101 = (_QWORD *)v204[1];
                }
              }
              v104 = v101[2];
              v100[1] = v104;
              if ( !v104 )
              {
                v105 = *v100;
                if ( *v100 )
                {
                  v106 = *(_QWORD *)a1;
                  v16 = (*(_DWORD *)(v105 + 8))-- == 1;
                  if ( v16 )
                  {
                    v226 = v101;
                    v207 = v100;
                    sub_15D7BC0(v106, v105);
                    v101 = v226;
                    v100 = v207;
                  }
                }
                *v100 = 0;
              }
              sub_17E9C40(a1 + 16, 24, v101);
            }
            if ( *v215 )
              *(_DWORD *)(*v215 - 4LL) = 0;
          }
          --v94;
          if ( v223 - v94 >= v219 )
            goto LABEL_255;
          v95 = *(_QWORD *)(a1 + 544);
        }
      }
      goto LABEL_255;
    }
LABEL_306:
    sub_15D7BC0(v89, v81);
    v11 = 1;
LABEL_135:
    v78 -= 8;
    if ( !(_DWORD)v77 )
      goto LABEL_143;
    v4 = *(_QWORD *)a1;
LABEL_137:
    LODWORD(v77) = v77 - 1;
  }
  v79 = *(unsigned int **)(v4 + 864);
  if ( v227 == *(unsigned int **)(v4 + 856) )
  {
    if ( v227 != v79 )
      goto LABEL_174;
    goto LABEL_201;
  }
  if ( v227 == v79 )
    goto LABEL_201;
  v80 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64))(**(_QWORD **)(a1 + 8) + 16LL))(
          *(_QWORD *)(a1 + 8),
          v227,
          1);
  v81 = (__int64)v227;
  v4 = *(_QWORD *)a1;
  if ( v80 )
    goto LABEL_126;
  v82 = *(_QWORD *)(v4 + 856);
  if ( !v82 )
  {
    if ( !v227 )
    {
      v16 = *(_QWORD *)(v4 + 864) == 0;
      v227 = nullptr;
      if ( !v16 )
        goto LABEL_217;
LABEL_203:
      v78 -= 8;
      v11 = 1;
      goto LABEL_137;
    }
LABEL_123:
    v83 = v228;
    v16 = (*(_DWORD *)(v81 + 8))-- == 1;
    if ( v16 )
    {
      sub_15D7BC0(v83, v81);
      v4 = *(_QWORD *)a1;
    }
    v227 = (unsigned int *)v82;
    v81 = v82;
LABEL_126:
    if ( *(_QWORD *)(v4 + 864) != v81 )
      goto LABEL_127;
LABEL_201:
    if ( !v81 )
      goto LABEL_203;
    v89 = v228;
    v16 = (*(_DWORD *)(v81 + 8))-- == 1;
    if ( !v16 )
      goto LABEL_203;
    goto LABEL_306;
  }
  ++*(_DWORD *)(v82 + 8);
  if ( v81 )
    goto LABEL_123;
  v81 = *(_QWORD *)(v4 + 864);
  v227 = (unsigned int *)v82;
  if ( v82 == v81 )
  {
    v89 = v228;
    v16 = (*(_DWORD *)(v82 + 8))-- == 1;
    if ( !v16 )
      goto LABEL_203;
    goto LABEL_306;
  }
LABEL_217:
  v81 = v82;
LABEL_174:
  v112 = *a3;
  if ( *a3 != v81 )
  {
    if ( v112 )
    {
      v113 = a3[1];
      v16 = (*(_DWORD *)(v112 + 8))-- == 1;
      if ( v16 )
      {
        sub_15D7BC0(v113, v112);
        v81 = (__int64)v227;
      }
    }
    *a3 = v81;
    if ( v81 )
      ++*(_DWORD *)(v81 + 8);
  }
  v114 = *(_QWORD **)(a1 + 8);
  v115 = *v114;
  v116 = *(__int64 (**)(void))(*v114 + 56LL);
  if ( (char *)v116 != (char *)sub_CD0230 )
  {
    v217 = v116() - v222;
    if ( !v217 )
    {
LABEL_232:
      v81 = *a3;
      goto LABEL_233;
    }
    v114 = *(_QWORD **)(a1 + 8);
    v115 = *v114;
    v197 = *(__int64 (**)(void))(*v114 + 56LL);
    if ( (char *)v197 == (char *)sub_CD0230 )
    {
      v117 = v114[8];
      v220 = 0;
      if ( v117 )
LABEL_183:
        v220 = *(_DWORD *)(v117 - 4);
    }
    else
    {
      v198 = v197();
      v114 = *(_QWORD **)(a1 + 8);
      v220 = v198;
      v115 = *v114;
    }
LABEL_184:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(v115 + 40))(v114, v217);
    v118 = v220;
    v119 = *(_QWORD *)(a1 + 544);
    do
    {
      if ( !v119 )
        break;
      while ( v118 < *(_DWORD *)(v119 - 4) )
      {
        v120 = (__int64 *)(v119 + 8LL * v118);
        v121 = *v120;
        if ( *v120 )
        {
          v122 = v121 + 8LL * *(unsigned int *)(v121 - 4);
          while ( v121 != v122 )
          {
            v123 = *(unsigned int **)(v122 - 8);
            v122 -= 8;
            v124 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 16LL * *v123);
            v125 = (_QWORD *)v124[1];
            v126 = *v125;
            if ( *v125 )
            {
              v127 = *(_QWORD *)a1;
              v16 = (*(_DWORD *)(v126 + 8))-- == 1;
              if ( v16 )
              {
                v205 = v124;
                sub_15D7BC0(v127, v126);
                v124 = v205;
                v125 = (_QWORD *)v205[1];
              }
            }
            v128 = v125[2];
            v124[1] = v128;
            if ( !v128 )
            {
              v129 = *v124;
              if ( *v124 )
              {
                v130 = *(_QWORD *)a1;
                v16 = (*(_DWORD *)(v129 + 8))-- == 1;
                if ( v16 )
                {
                  v224 = v125;
                  v208 = v124;
                  sub_15D7BC0(v130, v129);
                  v125 = v224;
                  v124 = v208;
                }
              }
              *v124 = 0;
            }
            sub_17E9C40(a1 + 16, 24, v125);
          }
          if ( *v120 )
            *(_DWORD *)(*v120 - 4) = 0;
        }
        --v118;
        if ( v220 - v118 < v217 )
        {
          v119 = *(_QWORD *)(a1 + 544);
          if ( v119 )
            continue;
        }
        goto LABEL_232;
      }
      --v118;
    }
    while ( v220 - v118 < v217 );
    goto LABEL_232;
  }
  v117 = v114[8];
  if ( !v117 )
  {
    if ( !v222 )
      goto LABEL_233;
    v220 = 0;
    v217 = -v222;
    goto LABEL_184;
  }
  v217 = *(_DWORD *)(v117 - 4) - v222;
  if ( v217 )
    goto LABEL_183;
LABEL_233:
  if ( *(_DWORD *)(a2 + 8) <= 1u )
    goto LABEL_241;
  v134 = *(unsigned int *)(a1 + 584);
  v135 = *(_DWORD *)(a2 + 12);
  v136 = *(char **)(a1 + 576);
  v137 = v134 - 1;
  v134 *= 16;
  v138 = &v136[v134];
  v139 = 16LL * (v135 & v137);
  v140 = &v136[v139];
  if ( v139 != v134 )
  {
    v141 = &v136[v139];
    do
    {
      v142 = *(_QWORD *)v141;
      if ( *(_QWORD *)v141 > 1u )
      {
        if ( *(_DWORD *)(v142 + 12) == v135 && a2 == v142 )
          goto LABEL_324;
      }
      else if ( !v142 )
      {
        goto LABEL_241;
      }
      v141 += 16;
    }
    while ( v138 != v141 );
  }
  if ( v136 == v140 )
    goto LABEL_241;
  while ( 2 )
  {
    v194 = *(_QWORD *)v136;
    if ( *(_QWORD *)v136 <= 1u )
    {
      if ( !v194 )
        goto LABEL_241;
      goto LABEL_350;
    }
    if ( *(_DWORD *)(v194 + 12) != v135 || a2 != v194 )
    {
LABEL_350:
      v136 += 16;
      if ( v140 == v136 )
        goto LABEL_241;
      continue;
    }
    break;
  }
  v141 = v136;
LABEL_324:
  if ( *((_DWORD *)v141 + 2) > 1u )
    sub_CD0860((_QWORD *)a1, (unsigned int *)a2, v81);
LABEL_241:
  v143 = (__int64)v227;
  if ( v227 )
  {
    v144 = v228;
    v16 = v227[2]-- == 1;
    if ( v16 )
      sub_15D7BC0(v144, v143);
  }
  v145 = (char *)v234;
  v146 = (char *)v234 + 8 * (unsigned int)v235;
  if ( v234 < v146 )
  {
    do
    {
      while ( 1 )
      {
        v147 = *(_QWORD *)v145;
        if ( *(_QWORD *)v145 )
        {
          v148 = (__int64)v233;
          v16 = (*(_DWORD *)(v147 + 8))-- == 1;
          if ( v16 )
            break;
        }
        v145 += 8;
        if ( v145 >= v146 )
          goto LABEL_250;
      }
      sub_15D7BC0(v148, v147);
      v145 += 8;
    }
    while ( v145 < v146 );
LABEL_250:
    v145 = (char *)v234;
  }
  if ( v145 && v145 != v236 )
    sub_186B220(v145);
LABEL_100:
  v73 = (char *)ptr;
  v74 = (char *)ptr + 8 * (unsigned int)v231;
  if ( ptr < v74 )
  {
    do
    {
      while ( 1 )
      {
        v75 = *(_QWORD *)v73;
        if ( *(_QWORD *)v73 )
        {
          v16 = (*(_DWORD *)(v75 + 8))-- == 1;
          if ( v16 )
            break;
        }
        v73 += 8;
        if ( v73 >= v74 )
          goto LABEL_106;
      }
      sub_15D7BC0(v229, v75);
      v73 += 8;
    }
    while ( v73 < v74 );
LABEL_106:
    v73 = (char *)ptr;
  }
  result = (__int64)v232;
  if ( v73 != v232 && v73 )
    return sub_186B220(v73);
  return result;
}

