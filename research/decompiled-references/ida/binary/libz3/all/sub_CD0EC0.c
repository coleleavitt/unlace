__int64 __fastcall sub_CD0EC0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64); // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r13d
  char v11; // bp
  __int64 v12; // r14
  _QWORD *v13; // r8
  __int64 v14; // rsi
  void *v15; // rdi
  bool v16; // zf
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r12
  void *v22; // rdi
  __int64 v23; // r12
  char *v24; // rax
  char *v25; // r9
  __int64 v26; // rax
  __int64 (__fastcall *v27)(__int64); // rax
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // r14d
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // r12
  __int64 v34; // r15
  unsigned int *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // r8
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // r12
  __int64 v44; // r13
  __int64 v45; // rdx
  __int64 v46; // r14
  char v47; // dl
  __int64 v48; // rsi
  __int64 v49; // rdi
  int v50; // edx
  _QWORD *v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // r14
  __int64 v55; // rdi
  _QWORD *v56; // rdi
  __int64 v57; // rax
  __int64 (*v58)(void); // rdx
  __int64 v59; // rdx
  unsigned int v60; // r14d
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // r12
  __int64 v64; // r15
  unsigned int *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // r8
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // r14
  char *v74; // rax
  char *v75; // rdi
  unsigned __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rdi
  _QWORD *v81; // rdi
  __int64 v82; // rax
  __int64 (*v83)(void); // rcx
  __int64 v84; // rcx
  unsigned int v85; // r13d
  __int64 v86; // rax
  __int64 *v87; // r14
  __int64 v88; // rbp
  __int64 v89; // r15
  unsigned int *v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // r8
  __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 v95; // rdx
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // rax
  int v99; // r8d
  char *v100; // rsi
  unsigned int v101; // ecx
  char *v102; // rdi
  __int64 v103; // rcx
  char *v104; // r9
  char *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rsi
  void *v108; // rdi
  char *v109; // rbx
  char *v110; // rbp
  __int64 v111; // rsi
  __int64 result; // rax
  unsigned __int64 v113; // rax
  __int64 v114; // r9
  __int64 v115; // rsi
  __int64 v116; // rdi
  _QWORD *v117; // rdi
  __int64 v118; // rax
  __int64 (*v119)(void); // rdx
  __int64 v120; // rdx
  unsigned int v121; // r13d
  __int64 v122; // rax
  __int64 *v123; // r14
  __int64 v124; // rbp
  __int64 v125; // r15
  unsigned int *v126; // rax
  _QWORD *v127; // rax
  _QWORD *v128; // rdx
  __int64 v129; // rsi
  __int64 v130; // r8
  __int64 v131; // rsi
  __int64 v132; // rsi
  __int64 v133; // r8
  __int64 v134; // rax
  int v135; // edi
  char *v136; // rcx
  unsigned int v137; // edx
  char *v138; // rsi
  __int64 v139; // rdx
  char *v140; // r8
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
  _QWORD *v214; // [rsp+30h] [rbp-1A8h]
  _QWORD *v215; // [rsp+30h] [rbp-1A8h]
  unsigned int v216; // [rsp+30h] [rbp-1A8h]
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
  __int64 v227; // [rsp+50h] [rbp-188h] BYREF
  __int64 v228; // [rsp+58h] [rbp-180h]
  __int64 v229; // [rsp+60h] [rbp-178h]
  void *ptr; // [rsp+68h] [rbp-170h]
  __int64 v231; // [rsp+70h] [rbp-168h]
  _BYTE v232[136]; // [rsp+78h] [rbp-160h] BYREF
  __int64 v233; // [rsp+100h] [rbp-D8h] BYREF
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
      goto LABEL_67;
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
        v233 = 0;
        v17 = *(_QWORD *)(a2 + 8 * v12 + 32);
        sub_CD2680(a1, v17, &v233);
        v18 = v233;
        v11 |= v17 != v233;
        v19 = *(_QWORD *)a1;
        if ( (unsigned int)v12 < v10 - 1 )
        {
          v20 = *(_QWORD *)(v19 + 856);
          if ( v233 == v20 )
            goto LABEL_58;
          v9 = *(_QWORD *)(v19 + 864);
          if ( v233 == v9 )
            goto LABEL_134;
          v9 = (*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
                 *(_QWORD *)(a1 + 8),
                 v233,
                 0);
          v18 = v233;
          v19 = *(_QWORD *)a1;
          if ( !(_BYTE)v9 )
          {
            v9 = *(_QWORD *)(v19 + 864);
            v21 = v9;
            if ( v9 )
            {
              ++*(_DWORD *)(v9 + 8);
              if ( !v18 )
              {
                v20 = *(_QWORD *)(v19 + 856);
                v233 = v9;
                if ( v9 == v20 )
                  goto LABEL_59;
                if ( v9 == *(_QWORD *)(v19 + 864) )
                  goto LABEL_134;
                v18 = v9;
LABEL_22:
                ++*(_DWORD *)(v18 + 8);
                goto LABEL_23;
              }
            }
            else if ( !v233 )
            {
              v16 = *(_QWORD *)(v19 + 856) == 0;
              v233 = 0;
              if ( !v16 )
                goto LABEL_134;
              goto LABEL_60;
            }
            v22 = v234;
            v16 = (*(_DWORD *)(v18 + 8))-- == 1;
            if ( v16 )
            {
              sub_15D7BC0(v22, v18);
              v19 = *(_QWORD *)a1;
            }
            v233 = v21;
            v18 = v21;
          }
        }
        if ( *(_QWORD *)(v19 + 856) == v18 )
        {
          v20 = v18;
LABEL_58:
          if ( v20 )
          {
LABEL_59:
            v9 = (__int64)v234;
            v16 = (*(_DWORD *)(v20 + 8))-- == 1;
            if ( !v16 )
              goto LABEL_60;
            v11 = 1;
            sub_15D7BC0(v9, v20);
          }
          else
          {
LABEL_60:
            v11 = 1;
          }
LABEL_8:
          if ( (unsigned int)++v12 >= v10 )
            goto LABEL_36;
          goto LABEL_9;
        }
        if ( v18 == *(_QWORD *)(v19 + 864) )
        {
          v9 = v18;
LABEL_134:
          v79 = *a3;
          if ( *a3 != v9 )
          {
            if ( v79 )
            {
              v80 = a3[1];
              v16 = (*(_DWORD *)(v79 + 8))-- == 1;
              if ( v16 )
              {
                sub_15D7BC0(v80, v79);
                v9 = v233;
              }
            }
            *a3 = v9;
            if ( v9 )
              ++*(_DWORD *)(v9 + 8);
          }
          v81 = *(_QWORD **)(a1 + 8);
          v82 = *v81;
          v83 = *(__int64 (**)(void))(*v81 + 56LL);
          if ( (char *)v83 == (char *)sub_CD0230 )
          {
            v84 = v81[8];
            if ( v84 )
            {
              v210 = *(_DWORD *)(v84 - 4) - v222;
              if ( v210 )
                goto LABEL_143;
LABEL_161:
              if ( *(_DWORD *)(a2 + 8) <= 1u )
                goto LABEL_169;
              v98 = *(unsigned int *)(a1 + 584);
              v99 = *(_DWORD *)(a2 + 12);
              v100 = *(char **)(a1 + 576);
              v101 = v98 - 1;
              v98 *= 16;
              v102 = &v100[v98];
              v103 = 16LL * (v99 & v101);
              v104 = &v100[v103];
              if ( v103 != v98 )
              {
                v105 = &v100[v103];
                do
                {
                  v106 = *(_QWORD *)v105;
                  if ( *(_QWORD *)v105 > 1u )
                  {
                    if ( *(_DWORD *)(v106 + 12) == v99 && a2 == v106 )
                      goto LABEL_292;
                  }
                  else if ( !v106 )
                  {
                    goto LABEL_169;
                  }
                  v105 += 16;
                }
                while ( v102 != v105 );
              }
              if ( v100 == v104 )
                goto LABEL_169;
              while ( 1 )
              {
                v170 = *(_QWORD *)v100;
                if ( *(_QWORD *)v100 > 1u )
                {
                  if ( *(_DWORD *)(v170 + 12) == v99 && a2 == v170 )
                  {
                    v105 = v100;
LABEL_292:
                    if ( *((_DWORD *)v105 + 2) > 1u )
                      sub_CD0860((_QWORD *)a1, (unsigned int *)a2, v9);
LABEL_169:
                    v107 = v233;
                    if ( v233 )
                    {
                      v108 = v234;
                      v16 = (*(_DWORD *)(v233 + 8))-- == 1;
                      if ( v16 )
                        sub_15D7BC0(v108, v107);
                    }
                    goto LABEL_172;
                  }
                }
                else if ( !v170 )
                {
                  goto LABEL_169;
                }
                v100 += 16;
                if ( v104 == v100 )
                  goto LABEL_169;
              }
            }
            if ( !v222 )
              goto LABEL_161;
            v216 = 0;
            v210 = -v222;
LABEL_144:
            (*(void (__fastcall **)(_QWORD *, _QWORD))(v82 + 40))(v81, v210);
            v85 = v216;
            v86 = *(_QWORD *)(a1 + 544);
            while ( v86 )
            {
              if ( v85 >= *(_DWORD *)(v86 - 4) )
              {
                --v85;
                if ( v216 - v85 >= v210 )
                  break;
              }
              else
              {
                v87 = (__int64 *)(v86 + 8LL * v85);
                v88 = *v87;
                if ( *v87 )
                {
                  v89 = v88 + 8LL * *(unsigned int *)(v88 - 4);
                  while ( v88 != v89 )
                  {
                    v90 = *(unsigned int **)(v89 - 8);
                    v89 -= 8;
                    v91 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 16LL * *v90);
                    v92 = (_QWORD *)v91[1];
                    v93 = *v92;
                    if ( *v92 )
                    {
                      v94 = *(_QWORD *)a1;
                      v16 = (*(_DWORD *)(v93 + 8))-- == 1;
                      if ( v16 )
                      {
                        v203 = v91;
                        sub_15D7BC0(v94, v93);
                        v91 = v203;
                        v92 = (_QWORD *)v203[1];
                      }
                    }
                    v95 = v92[2];
                    v91[1] = v95;
                    if ( !v95 )
                    {
                      v96 = *v91;
                      if ( *v91 )
                      {
                        v97 = *(_QWORD *)a1;
                        v16 = (*(_DWORD *)(v96 + 8))-- == 1;
                        if ( v16 )
                        {
                          v221 = v92;
                          v206 = v91;
                          sub_15D7BC0(v97, v96);
                          v92 = v221;
                          v91 = v206;
                        }
                      }
                      *v91 = 0;
                    }
                    sub_17E9C40(a1 + 16, 24, v92);
                  }
                  if ( *v87 )
                    *(_DWORD *)(*v87 - 4) = 0;
                }
                --v85;
                if ( v216 - v85 >= v210 )
                  break;
                v86 = *(_QWORD *)(a1 + 544);
              }
            }
          }
          else
          {
            v210 = v83() - v222;
            if ( v210 )
            {
              v81 = *(_QWORD **)(a1 + 8);
              v82 = *v81;
              v192 = *(__int64 (**)(void))(*v81 + 56LL);
              if ( (char *)v192 == (char *)sub_CD0230 )
              {
                v84 = v81[8];
                v216 = 0;
                if ( v84 )
LABEL_143:
                  v216 = *(_DWORD *)(v84 - 4);
              }
              else
              {
                v193 = v192();
                v81 = *(_QWORD **)(a1 + 8);
                v216 = v193;
                v82 = *v81;
              }
              goto LABEL_144;
            }
          }
          v9 = *a3;
          goto LABEL_161;
        }
        if ( v18 )
          goto LABEL_22;
LABEL_23:
        v9 = (unsigned int)v231;
        if ( (unsigned int)v231 < HIDWORD(v231) )
        {
          v13 = ptr;
        }
        else
        {
          v23 = (unsigned int)(2 * HIDWORD(v231));
          v24 = (char *)sub_186B270(8 * v23);
          v9 = (unsigned int)v231;
          v25 = (char *)ptr;
          v13 = v24;
          if ( (_DWORD)v231 )
          {
            if ( (unsigned int)(v231 - 1) <= 2 || v24 == (char *)ptr + 8 )
            {
              v78 = 0;
              do
              {
                v13[v78] = *(_QWORD *)&v25[v78 * 8];
                ++v78;
              }
              while ( v78 != (unsigned int)v9 );
            }
            else
            {
              v26 = 0;
              do
              {
                *(__m128i *)&v13[v26] = _mm_loadu_si128((const __m128i *)&v25[v26 * 8]);
                v26 += 2;
              }
              while ( 2LL * ((unsigned int)v9 >> 1) != v26 );
              if ( (v9 & 1) != 0 )
                v13[(unsigned int)v9 & 0xFFFFFFFE] = *(_QWORD *)&v25[8 * (v9 & 0xFFFFFFFE)];
            }
          }
          if ( v25 != v232 && v25 )
          {
            v212 = v13;
            sub_186B220(v25);
            v9 = (unsigned int)v231;
            v13 = v212;
          }
          ptr = v13;
          HIDWORD(v231) = v23;
        }
        v13[(unsigned int)v9] = v18;
        v14 = v233;
        LODWORD(v231) = v9 + 1;
        if ( !v233 )
          goto LABEL_8;
        v15 = v234;
        v16 = (*(_DWORD *)(v233 + 8))-- == 1;
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
  v27 = *(__int64 (__fastcall **)(__int64))(*v5 + 56LL);
  if ( v27 == sub_CD0230 )
  {
    v8 = v5[8];
    if ( !v8 )
    {
      v28 = 0;
LABEL_39:
      v213 = v28 - v222;
      if ( v28 != v222 )
        goto LABEL_40;
      goto LABEL_66;
    }
LABEL_38:
    v28 = *(_DWORD *)(v8 - 4);
    goto LABEL_39;
  }
  v213 = ((__int64 (*)(void))v27)() - v222;
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
    v29 = v5[8];
    if ( v29 )
      v218 = *(_DWORD *)(v29 - 4);
    else
      v218 = 0;
LABEL_42:
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v5 + 40LL))(v5, v213, v9);
    v30 = v218;
    v31 = *(_QWORD *)(a1 + 544);
    do
    {
      if ( !v31 )
        break;
      while ( v30 < *(_DWORD *)(v31 - 4) )
      {
        v32 = (_QWORD *)(v31 + 8LL * v30);
        v33 = *v32;
        v209 = v32;
        if ( *v32 )
        {
          v34 = v33 + 8LL * *(unsigned int *)(v33 - 4);
          while ( v33 != v34 )
          {
            v35 = *(unsigned int **)(v34 - 8);
            v34 -= 8;
            v36 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 16LL * *v35);
            v37 = (_QWORD *)v36[1];
            v38 = *v37;
            if ( *v37 )
            {
              v39 = *(_QWORD *)a1;
              v16 = (*(_DWORD *)(v38 + 8))-- == 1;
              if ( v16 )
              {
                v201 = v36;
                sub_15D7BC0(v39, v38);
                v36 = v201;
                v37 = (_QWORD *)v201[1];
              }
            }
            v40 = v37[2];
            v36[1] = v40;
            if ( !v40 )
            {
              v41 = *v36;
              if ( *v36 )
              {
                v42 = *(_QWORD *)a1;
                v16 = (*(_DWORD *)(v41 + 8))-- == 1;
                if ( v16 )
                {
                  v225 = v37;
                  v202 = v36;
                  sub_15D7BC0(v42, v41);
                  v37 = v225;
                  v36 = v202;
                }
              }
              *v36 = 0;
            }
            sub_17E9C40(a1 + 16, 24, v37);
          }
          if ( *v209 )
            *(_DWORD *)(*v209 - 4LL) = 0;
        }
        --v30;
        if ( v218 - v30 < v213 )
        {
          v31 = *(_QWORD *)(a1 + 544);
          if ( v31 )
            continue;
        }
        goto LABEL_66;
      }
      --v30;
    }
    while ( v218 - v30 < v213 );
  }
LABEL_66:
  v4 = *(_QWORD *)a1;
LABEL_67:
  v233 = v4;
  v234 = v236;
  v235 = 0x1000000000LL;
  if ( !(_DWORD)v231 )
    goto LABEL_94;
  v43 = (unsigned int)(v231 - 1);
  v44 = 8 * v43;
  while ( 1 )
  {
    v54 = *(_QWORD *)((char *)ptr + v44);
    v228 = v4;
    v227 = 0;
    sub_CD2680(a1, v54, &v227);
    v48 = v227;
    v11 |= v54 != v227;
    v4 = *(_QWORD *)a1;
    if ( !(_DWORD)v43 )
      break;
    v45 = *(_QWORD *)(v4 + 856);
    if ( v227 == v45 )
    {
      if ( !v227 )
        goto LABEL_128;
      v55 = v228;
      v16 = (*(_DWORD *)(v227 + 8))-- == 1;
      if ( !v16 )
        goto LABEL_128;
      goto LABEL_313;
    }
    v46 = *(_QWORD *)(v4 + 864);
    if ( v227 == v46 )
      goto LABEL_191;
    v47 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
            *(_QWORD *)(a1 + 8),
            v227,
            0);
    v48 = v227;
    v4 = *(_QWORD *)a1;
    if ( v47 )
      goto LABEL_77;
    v46 = *(_QWORD *)(v4 + 864);
    if ( !v46 )
    {
      if ( !v227 )
      {
        v16 = *(_QWORD *)(v4 + 856) == 0;
        v227 = 0;
        if ( !v16 )
          goto LABEL_191;
LABEL_128:
        v44 -= 8;
        v11 = 1;
        goto LABEL_88;
      }
LABEL_74:
      v49 = v228;
      v16 = (*(_DWORD *)(v48 + 8))-- == 1;
      if ( v16 )
      {
        sub_15D7BC0(v49, v48);
        v4 = *(_QWORD *)a1;
      }
      v227 = v46;
      v48 = v46;
LABEL_77:
      if ( *(_QWORD *)(v4 + 856) != v48 )
        goto LABEL_78;
      if ( !v48 )
        goto LABEL_128;
      v55 = v228;
      v16 = (*(_DWORD *)(v48 + 8))-- == 1;
      if ( !v16 )
        goto LABEL_128;
LABEL_312:
      v45 = v48;
      goto LABEL_313;
    }
    ++*(_DWORD *)(v46 + 8);
    if ( v48 )
      goto LABEL_74;
    v45 = *(_QWORD *)(v4 + 856);
    v227 = v46;
    if ( v46 != v45 )
    {
      if ( v46 == *(_QWORD *)(v4 + 864) )
        goto LABEL_191;
      v48 = v46;
LABEL_80:
      ++*(_DWORD *)(v48 + 8);
LABEL_81:
      v50 = v235;
      if ( (unsigned int)v235 >= HIDWORD(v235) )
      {
        v73 = (unsigned int)(2 * HIDWORD(v235));
        v74 = (char *)sub_186B270(8 * v73);
        v50 = v235;
        v75 = (char *)v234;
        v51 = v74;
        if ( (_DWORD)v235 )
        {
          if ( (unsigned int)(v235 - 1) <= 2 || v74 == (char *)v234 + 8 )
          {
            v113 = 0;
            v114 = 8LL * (unsigned int)v235;
            do
            {
              v51[v113 / 8] = *(_QWORD *)&v75[v113];
              v113 += 8LL;
            }
            while ( v114 != v113 );
          }
          else
          {
            v76 = 0;
            v77 = 16LL * ((unsigned int)v235 >> 1);
            do
            {
              *(__m128i *)&v51[v76 / 8] = _mm_loadu_si128((const __m128i *)&v75[v76]);
              v76 += 16LL;
            }
            while ( v76 != v77 );
            if ( (v50 & 1) != 0 )
              v51[v50 & 0xFFFFFFFE] = *(_QWORD *)&v75[8 * (v50 & 0xFFFFFFFE)];
          }
        }
        if ( v75 && v75 != v236 )
        {
          v215 = v51;
          sub_186B220(v75);
          v50 = v235;
          v51 = v215;
        }
        v234 = v51;
        HIDWORD(v235) = v73;
      }
      else
      {
        v51 = v234;
      }
      v51[v50] = v48;
      v52 = v227;
      LODWORD(v235) = v50 + 1;
      if ( v227 )
      {
        v53 = v228;
        v16 = (*(_DWORD *)(v227 + 8))-- == 1;
        if ( v16 )
          sub_15D7BC0(v53, v52);
      }
      goto LABEL_86;
    }
    v55 = v228;
    v16 = (*(_DWORD *)(v46 + 8))-- == 1;
    if ( !v16 )
      goto LABEL_128;
LABEL_313:
    v11 = 1;
    sub_15D7BC0(v55, v45);
LABEL_86:
    v44 -= 8;
    if ( !(_DWORD)v43 )
      goto LABEL_94;
    v4 = *(_QWORD *)a1;
LABEL_88:
    LODWORD(v43) = v43 - 1;
  }
  if ( v227 == *(_QWORD *)(v4 + 856) )
  {
    if ( !v227 || (v55 = v228, v16 = *(_DWORD *)(v227 + 8) == 1, --*(_DWORD *)(v227 + 8), !v16) )
    {
      v11 = 1;
LABEL_94:
      v56 = *(_QWORD **)(a1 + 8);
      v57 = *v56;
      v58 = *(__int64 (**)(void))(*v56 + 56LL);
      if ( (char *)v58 == (char *)sub_CD0230 )
      {
        v59 = v56[8];
        if ( v59 )
        {
          v219 = *(_DWORD *)(v59 - 4) - v222;
          if ( v219 )
            goto LABEL_97;
LABEL_253:
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
            goto LABEL_261;
          }
          v149 = v235;
          if ( !(_DWORD)v235 )
          {
            v150 = *(_QWORD *)(*(_QWORD *)a1 + 856LL);
            if ( v150 )
              goto LABEL_256;
            goto LABEL_257;
          }
          v173 = (char *)v234;
          if ( (_DWORD)v235 != 1 )
          {
            v174 = 8LL * (unsigned int)v235;
            v175 = (const __m128i *)((char *)v234 + v174 - 8);
            if ( v234 >= v175 )
              goto LABEL_336;
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
LABEL_336:
                sub_1447B20(a1 + 616, *(_QWORD *)(a2 + 16), v149, v173, a3);
                v150 = *a3;
                v153 = *(_DWORD *)(a2 + 8);
LABEL_261:
                if ( v153 <= 1 )
                  goto LABEL_269;
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
                        goto LABEL_308;
                    }
                    else if ( !v162 )
                    {
                      goto LABEL_269;
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
LABEL_308:
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
LABEL_269:
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
                        v166 = v233;
                        v16 = (*(_DWORD *)(v165 + 8))-- == 1;
                        if ( v16 )
                          break;
                      }
                      v163 += 8;
                      if ( v163 >= v164 )
                        goto LABEL_275;
                    }
                    sub_15D7BC0(v166, v165);
                    v163 += 8;
                  }
                  while ( v163 < v164 );
LABEL_275:
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
                        goto LABEL_285;
                    }
                    result = sub_15D7BC0(v229, v169);
                    v167 += 8;
                  }
                  while ( v167 < v168 );
LABEL_285:
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
            goto LABEL_336;
          }
          v150 = *(_QWORD *)v234;
          if ( *(_QWORD *)v234 )
LABEL_256:
            ++*(_DWORD *)(v150 + 8);
LABEL_257:
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
          goto LABEL_261;
        }
        v199 = v222;
        if ( !v222 )
          goto LABEL_253;
        v223 = 0;
        v219 = -v199;
      }
      else
      {
        v219 = v58() - v222;
        if ( !v219 )
          goto LABEL_253;
        v56 = *(_QWORD **)(a1 + 8);
        v57 = *v56;
        v195 = *(__int64 (**)(void))(*v56 + 56LL);
        if ( (char *)v195 == (char *)sub_CD0230 )
        {
          v59 = v56[8];
          v223 = 0;
          if ( v59 )
LABEL_97:
            v223 = *(_DWORD *)(v59 - 4);
        }
        else
        {
          v196 = v195();
          v56 = *(_QWORD **)(a1 + 8);
          v223 = v196;
          v57 = *v56;
        }
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v57 + 40))(v56, v219);
      v60 = v223;
      v61 = *(_QWORD *)(a1 + 544);
      while ( v61 )
      {
        if ( v60 >= *(_DWORD *)(v61 - 4) )
        {
          --v60;
          if ( v223 - v60 >= v219 )
            goto LABEL_253;
        }
        else
        {
          v62 = (_QWORD *)(v61 + 8LL * v60);
          v63 = *v62;
          v214 = v62;
          if ( *v62 )
          {
            v64 = v63 + 8LL * *(unsigned int *)(v63 - 4);
            while ( v63 != v64 )
            {
              v65 = *(unsigned int **)(v64 - 8);
              v64 -= 8;
              v66 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 16LL * *v65);
              v67 = (_QWORD *)v66[1];
              v68 = *v67;
              if ( *v67 )
              {
                v69 = *(_QWORD *)a1;
                v16 = (*(_DWORD *)(v68 + 8))-- == 1;
                if ( v16 )
                {
                  v204 = v66;
                  sub_15D7BC0(v69, v68);
                  v66 = v204;
                  v67 = (_QWORD *)v204[1];
                }
              }
              v70 = v67[2];
              v66[1] = v70;
              if ( !v70 )
              {
                v71 = *v66;
                if ( *v66 )
                {
                  v72 = *(_QWORD *)a1;
                  v16 = (*(_DWORD *)(v71 + 8))-- == 1;
                  if ( v16 )
                  {
                    v226 = v67;
                    v207 = v66;
                    sub_15D7BC0(v72, v71);
                    v67 = v226;
                    v66 = v207;
                  }
                }
                *v66 = 0;
              }
              sub_17E9C40(a1 + 16, 24, v67);
            }
            if ( *v214 )
              *(_DWORD *)(*v214 - 4LL) = 0;
          }
          --v60;
          if ( v223 - v60 >= v219 )
            goto LABEL_253;
          v61 = *(_QWORD *)(a1 + 544);
        }
      }
      goto LABEL_253;
    }
    goto LABEL_312;
  }
LABEL_78:
  if ( v48 != *(_QWORD *)(v4 + 864) )
  {
    if ( v48 )
      goto LABEL_80;
    goto LABEL_81;
  }
  v46 = v48;
LABEL_191:
  v115 = *a3;
  if ( *a3 != v46 )
  {
    if ( v115 )
    {
      v116 = a3[1];
      v16 = (*(_DWORD *)(v115 + 8))-- == 1;
      if ( v16 )
      {
        sub_15D7BC0(v116, v115);
        v46 = v227;
      }
    }
    *a3 = v46;
    if ( v46 )
      ++*(_DWORD *)(v46 + 8);
  }
  v117 = *(_QWORD **)(a1 + 8);
  v118 = *v117;
  v119 = *(__int64 (**)(void))(*v117 + 56LL);
  if ( (char *)v119 != (char *)sub_CD0230 )
  {
    v217 = v119() - v222;
    if ( !v217 )
    {
LABEL_230:
      v46 = *a3;
      goto LABEL_231;
    }
    v117 = *(_QWORD **)(a1 + 8);
    v118 = *v117;
    v197 = *(__int64 (**)(void))(*v117 + 56LL);
    if ( (char *)v197 == (char *)sub_CD0230 )
    {
      v120 = v117[8];
      v220 = 0;
      if ( v120 )
LABEL_200:
        v220 = *(_DWORD *)(v120 - 4);
    }
    else
    {
      v198 = v197();
      v117 = *(_QWORD **)(a1 + 8);
      v220 = v198;
      v118 = *v117;
    }
LABEL_201:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(v118 + 40))(v117, v217);
    v121 = v220;
    v122 = *(_QWORD *)(a1 + 544);
    do
    {
      if ( !v122 )
        break;
      while ( v121 < *(_DWORD *)(v122 - 4) )
      {
        v123 = (__int64 *)(v122 + 8LL * v121);
        v124 = *v123;
        if ( *v123 )
        {
          v125 = v124 + 8LL * *(unsigned int *)(v124 - 4);
          while ( v124 != v125 )
          {
            v126 = *(unsigned int **)(v125 - 8);
            v125 -= 8;
            v127 = (_QWORD *)(*(_QWORD *)(a1 + 536) + 16LL * *v126);
            v128 = (_QWORD *)v127[1];
            v129 = *v128;
            if ( *v128 )
            {
              v130 = *(_QWORD *)a1;
              v16 = (*(_DWORD *)(v129 + 8))-- == 1;
              if ( v16 )
              {
                v205 = v127;
                sub_15D7BC0(v130, v129);
                v127 = v205;
                v128 = (_QWORD *)v205[1];
              }
            }
            v131 = v128[2];
            v127[1] = v131;
            if ( !v131 )
            {
              v132 = *v127;
              if ( *v127 )
              {
                v133 = *(_QWORD *)a1;
                v16 = (*(_DWORD *)(v132 + 8))-- == 1;
                if ( v16 )
                {
                  v224 = v128;
                  v208 = v127;
                  sub_15D7BC0(v133, v132);
                  v128 = v224;
                  v127 = v208;
                }
              }
              *v127 = 0;
            }
            sub_17E9C40(a1 + 16, 24, v128);
          }
          if ( *v123 )
            *(_DWORD *)(*v123 - 4) = 0;
        }
        --v121;
        if ( v220 - v121 < v217 )
        {
          v122 = *(_QWORD *)(a1 + 544);
          if ( v122 )
            continue;
        }
        goto LABEL_230;
      }
      --v121;
    }
    while ( v220 - v121 < v217 );
    goto LABEL_230;
  }
  v120 = v117[8];
  if ( !v120 )
  {
    if ( !v222 )
      goto LABEL_231;
    v220 = 0;
    v217 = -v222;
    goto LABEL_201;
  }
  v217 = *(_DWORD *)(v120 - 4) - v222;
  if ( v217 )
    goto LABEL_200;
LABEL_231:
  if ( *(_DWORD *)(a2 + 8) <= 1u )
    goto LABEL_239;
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
          goto LABEL_326;
      }
      else if ( !v142 )
      {
        goto LABEL_239;
      }
      v141 += 16;
    }
    while ( v138 != v141 );
  }
  if ( v136 == v140 )
    goto LABEL_239;
  while ( 2 )
  {
    v194 = *(_QWORD *)v136;
    if ( *(_QWORD *)v136 <= 1u )
    {
      if ( !v194 )
        goto LABEL_239;
      goto LABEL_352;
    }
    if ( *(_DWORD *)(v194 + 12) != v135 || a2 != v194 )
    {
LABEL_352:
      v136 += 16;
      if ( v140 == v136 )
        goto LABEL_239;
      continue;
    }
    break;
  }
  v141 = v136;
LABEL_326:
  if ( *((_DWORD *)v141 + 2) > 1u )
    sub_CD0860((_QWORD *)a1, (unsigned int *)a2, v46);
LABEL_239:
  v143 = v227;
  if ( v227 )
  {
    v144 = v228;
    v16 = (*(_DWORD *)(v227 + 8))-- == 1;
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
          v148 = v233;
          v16 = (*(_DWORD *)(v147 + 8))-- == 1;
          if ( v16 )
            break;
        }
        v145 += 8;
        if ( v145 >= v146 )
          goto LABEL_248;
      }
      sub_15D7BC0(v148, v147);
      v145 += 8;
    }
    while ( v145 < v146 );
LABEL_248:
    v145 = (char *)v234;
  }
  if ( v145 && v145 != v236 )
    sub_186B220(v145);
LABEL_172:
  v109 = (char *)ptr;
  v110 = (char *)ptr + 8 * (unsigned int)v231;
  if ( ptr < v110 )
  {
    do
    {
      while ( 1 )
      {
        v111 = *(_QWORD *)v109;
        if ( *(_QWORD *)v109 )
        {
          v16 = (*(_DWORD *)(v111 + 8))-- == 1;
          if ( v16 )
            break;
        }
        v109 += 8;
        if ( v109 >= v110 )
          goto LABEL_178;
      }
      sub_15D7BC0(v229, v111);
      v109 += 8;
    }
    while ( v109 < v110 );
LABEL_178:
    v109 = (char *)ptr;
  }
  result = (__int64)v232;
  if ( v109 != v232 && v109 )
    return sub_186B220(v109);
  return result;
}

