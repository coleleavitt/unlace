_BYTE *__fastcall sub_530480(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  int v12; // eax
  __int64 v13; // r15
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int *v23; // rax
  _DWORD *v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r15
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rsi
  int v34; // r8d
  int v35; // edi
  int v36; // r8d
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // r8
  __int64 v43; // rsi
  unsigned int v44; // edx
  __int64 *v45; // rax
  __int64 v46; // rdx
  __int64 *v47; // rdi
  int v48; // r9d
  __int64 v49; // r11
  int v50; // eax
  int v51; // edi
  int v52; // edx
  __int64 v53; // rax
  int v54; // edi
  unsigned int v55; // edx
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r10
  __int64 i; // rax
  int v60; // edx
  __int64 v61; // rdi
  unsigned int v62; // edx
  __int64 v63; // rax
  _BYTE *v64; // r8
  __int64 v65; // rsi
  __int64 v66; // rcx
  _QWORD *v67; // rax
  _BYTE *result; // rax
  int v69; // eax
  int v70; // edx
  __int64 v71; // r15
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // r14
  __int64 v75; // rax
  int v76; // r8d
  __int64 v77; // rcx
  int v78; // edi
  int v79; // esi
  int v80; // edi
  __int64 v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rax
  int v85; // edx
  __int64 v86; // r8
  __int64 v87; // rcx
  unsigned int v88; // edx
  __int64 *v89; // rax
  __int64 v90; // rdx
  __int64 *v91; // rsi
  int v92; // edi
  __int64 v93; // r10
  int v94; // eax
  int v95; // esi
  int v96; // edx
  __int64 v97; // rax
  int v98; // esi
  unsigned int v99; // edx
  __int64 v100; // rdi
  __int64 v101; // rdx
  __int64 v102; // r9
  __int64 j; // rax
  int v104; // edx
  __int64 v105; // rsi
  unsigned int v106; // edx
  __int64 v107; // rax
  int v108; // eax
  __int64 v109; // rbx
  _QWORD *v110; // rax
  _OWORD *v111; // rax
  unsigned int v112; // eax
  unsigned int v113; // edx
  __int64 v114; // r13
  unsigned __int64 v115; // rbx
  __int64 v116; // r13
  int v117; // eax
  _QWORD *v118; // rax
  _DWORD *v119; // r13
  _DWORD **v120; // rbx
  unsigned int v121; // r15d
  __int64 v122; // rax
  _DWORD *v123; // rsi
  size_t v124; // rdx
  __int64 v125; // r15
  __int64 v126; // rdx
  _QWORD *v127; // rax
  _QWORD *v128; // rdx
  __int64 v129; // rdx
  __int64 v130; // rsi
  bool v131; // zf
  _BYTE *v132; // rdi
  char *v133; // rcx
  char *v134; // rax
  __int64 v135; // rdx
  __int64 *v136; // rbx
  unsigned __int64 v137; // rbp
  __int64 v138; // rsi
  int v139; // edx
  int v140; // eax
  unsigned int v141; // eax
  char v142; // al
  _QWORD *v143; // rax
  _QWORD *v144; // rbx
  _QWORD *v145; // r15
  __int64 v146; // rdx
  char *v147; // rax
  char *v148; // rbx
  __int64 v149; // rdx
  _QWORD *v150; // rdi
  _QWORD *v151; // rdx
  __int64 v152; // rsi
  __m128i v153; // xmm0
  int v154; // eax
  unsigned int v155; // eax
  char v156; // al
  __int64 *v157; // rax
  size_t v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // rbx
  __int64 v162; // rax
  _DWORD *v163; // rsi
  unsigned __int64 v164; // rax
  __int64 v165; // rax
  _QWORD *v166; // rax
  unsigned int v167; // edx
  unsigned int v168; // r8d
  size_t v169; // rsi
  unsigned int *v170; // rax
  unsigned int v171; // eax
  __int64 v172; // rax
  __int64 v173; // rsi
  __int64 *v174; // rbx
  unsigned __int64 v175; // rbp
  __int64 v176; // rsi
  _QWORD *v177; // rax
  _QWORD *v178; // rbx
  _QWORD *v179; // r14
  __int64 v180; // rdx
  char *v181; // rax
  char *v182; // rbx
  __int64 v183; // rdx
  _QWORD *v184; // rdi
  _QWORD *v185; // rdx
  __int64 v186; // rsi
  __m128i v187; // xmm0
  char **exception; // rbp
  char **v189; // r12
  unsigned int v190; // [rsp+8h] [rbp-1D0h]
  __int64 v191; // [rsp+8h] [rbp-1D0h]
  _BYTE *v192; // [rsp+8h] [rbp-1D0h]
  unsigned int v193; // [rsp+8h] [rbp-1D0h]
  __int64 v194; // [rsp+8h] [rbp-1D0h]
  __int64 v195; // [rsp+10h] [rbp-1C8h]
  unsigned int v196; // [rsp+10h] [rbp-1C8h]
  unsigned int v197; // [rsp+10h] [rbp-1C8h]
  _QWORD *v198; // [rsp+18h] [rbp-1C0h]
  unsigned int v200; // [rsp+28h] [rbp-1B0h]
  __int64 v201; // [rsp+28h] [rbp-1B0h]
  __int64 v202; // [rsp+30h] [rbp-1A8h]
  __int64 v203; // [rsp+30h] [rbp-1A8h]
  __int64 v204; // [rsp+30h] [rbp-1A8h]
  __int64 v205; // [rsp+30h] [rbp-1A8h]
  __int64 v206; // [rsp+30h] [rbp-1A8h]
  unsigned int v207; // [rsp+30h] [rbp-1A8h]
  unsigned int v208; // [rsp+30h] [rbp-1A8h]
  __int64 v209; // [rsp+30h] [rbp-1A8h]
  __int64 v210; // [rsp+30h] [rbp-1A8h]
  unsigned int v211; // [rsp+30h] [rbp-1A8h]
  unsigned int v212; // [rsp+30h] [rbp-1A8h]
  __int64 v213; // [rsp+30h] [rbp-1A8h]
  __int64 v214; // [rsp+38h] [rbp-1A0h]
  __int64 v215; // [rsp+38h] [rbp-1A0h]
  __int64 v216; // [rsp+40h] [rbp-198h]
  unsigned int v217; // [rsp+40h] [rbp-198h]
  __int64 v218; // [rsp+40h] [rbp-198h]
  unsigned int v219; // [rsp+40h] [rbp-198h]
  unsigned int v220; // [rsp+40h] [rbp-198h]
  __int64 v221; // [rsp+40h] [rbp-198h]
  __int64 v222; // [rsp+40h] [rbp-198h]
  __int64 v223; // [rsp+48h] [rbp-190h]
  unsigned int v224; // [rsp+50h] [rbp-188h]
  __int64 *v225; // [rsp+50h] [rbp-188h]
  unsigned int v226; // [rsp+50h] [rbp-188h]
  unsigned int v227; // [rsp+50h] [rbp-188h]
  _QWORD *v228; // [rsp+50h] [rbp-188h]
  unsigned int v229; // [rsp+58h] [rbp-180h]
  unsigned int v230; // [rsp+5Ch] [rbp-17Ch]
  unsigned int v231; // [rsp+5Ch] [rbp-17Ch]
  __int64 v232; // [rsp+60h] [rbp-178h]
  __int64 v233; // [rsp+60h] [rbp-178h]
  _QWORD *v234; // [rsp+68h] [rbp-170h]
  __int64 v235; // [rsp+88h] [rbp-150h] BYREF
  __int64 v236; // [rsp+90h] [rbp-148h]
  _DWORD *v237[4]; // [rsp+A0h] [rbp-138h] BYREF
  void *v238[2]; // [rsp+C0h] [rbp-118h] BYREF
  int v239; // [rsp+D0h] [rbp-108h]
  void *v240; // [rsp+D8h] [rbp-100h]
  __int64 v241; // [rsp+E0h] [rbp-F8h]
  _BYTE v242[128]; // [rsp+E8h] [rbp-F0h] BYREF
  void *ptr; // [rsp+168h] [rbp-70h]
  __int64 v244; // [rsp+170h] [rbp-68h]
  int v245; // [rsp+178h] [rbp-60h]
  __int128 v246; // [rsp+180h] [rbp-58h]
  __int128 v247; // [rsp+190h] [rbp-48h]

  if ( *a5 )
    v229 = *(_DWORD *)(*a5 - 4LL);
  else
    v229 = 0;
  v9 = *(_QWORD *)(a3 + 8);
  v10 = v9;
  if ( v9 )
  {
    v200 = *(_DWORD *)(v9 - 4) + v229;
    v223 = *a4;
    v198 = (_QWORD *)a4[1];
    v11 = v198;
    if ( !v198 )
    {
      v236 = *a4;
      goto LABEL_21;
    }
  }
  else
  {
    v223 = *a4;
    v11 = (_QWORD *)a4[1];
    v198 = v11;
    v200 = v229;
    if ( !v11 )
    {
      v236 = *a4;
      goto LABEL_265;
    }
  }
  v12 = *((_DWORD *)v11 - 1);
  v200 -= v12;
  v236 = v223;
  if ( v12 )
  {
    v13 = *v11;
    if ( *v11 )
      ++*(_DWORD *)(v13 + 8);
    v14 = 0;
LABEL_15:
    v19 = (_QWORD *)sub_186B270(0x18u);
    *v19 = 2;
    v20 = a4[1];
    v17 = 1;
    v18 = v19 + 1;
    v198 = v18;
    while ( 1 )
    {
      *v18 = v13;
      ++v14;
      *((_DWORD *)v198 - 1) = v17;
      if ( !v20 )
      {
        v9 = *(_QWORD *)(a3 + 8);
        goto LABEL_20;
      }
      if ( v14 >= *(_DWORD *)(v20 - 4) )
        break;
      v13 = *(_QWORD *)(v20 + 8LL * v14);
      if ( v13 )
      {
        ++*(_DWORD *)(v13 + 8);
        if ( !v198 )
          goto LABEL_15;
      }
      v15 = *((_DWORD *)v198 - 1);
      if ( v15 == *((_DWORD *)v198 - 2) )
      {
        v21 = (3 * v15 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v15 + 8 >= v22 || v15 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v238, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v238);
          sub_233E40((__int64)v238);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v190 = (3 * v15 + 1) >> 1;
        v23 = (unsigned int *)sub_186B300(v198 - 1, v22);
        v24 = v23 + 2;
        v198 = v23 + 2;
        *v23 = v190;
        LODWORD(v23) = v23[1];
        v18 = &v24[2 * (unsigned int)v23];
        v20 = a4[1];
        v17 = (_DWORD)v23 + 1;
      }
      else
      {
        v16 = v15;
        v17 = v15 + 1;
        v18 = &v198[v16];
      }
    }
    v10 = *(_QWORD *)(a3 + 8);
  }
  else
  {
    v198 = nullptr;
  }
  v9 = v10;
LABEL_20:
  if ( !v9 )
    goto LABEL_265;
LABEL_21:
  v25 = *(_DWORD *)(v9 - 4);
  v230 = v25;
  if ( !v25 )
  {
LABEL_265:
    v230 = 0;
    goto LABEL_60;
  }
  v214 = 0;
  v216 = v25 - 1;
  v26 = 0;
  v224 = v25 - 2;
  if ( v25 != 1 )
  {
    do
    {
      v195 = 8 * v26;
      v27 = 8 * v26 + 8;
      v191 = 8 * (v26 + v224 - (unsigned int)v26 + 2);
      do
      {
        v28 = sub_52E440(a1, *(_QWORD *)(*(_QWORD *)(a3 + 8) + v195), *(_QWORD *)(*(_QWORD *)(a3 + 8) + v27));
        v30 = v29;
        v31 = *(unsigned int *)(a1 + 56);
        v32 = *(_DWORD *)(v28 + 12);
        v33 = *(_QWORD *)(a1 + 48);
        LODWORD(v29) = (*(_DWORD *)(v29 + 12) - v32) ^ (v32 << 8);
        v34 = (v32 - (_DWORD)v29) << 10;
        v35 = v29 - v32 + (v29 ^ ((v32 - (_DWORD)v29) << 16));
        LODWORD(v29) = v31 - 1;
        v31 *= 32;
        v36 = v35 ^ v34;
        v37 = v33 + v31;
        v38 = 32LL * (v36 & (unsigned int)v29);
        v39 = v33 + v38;
        if ( v38 != v31 )
        {
          v40 = v33 + v38;
          do
          {
            v41 = *(_DWORD *)(v40 + 4);
            if ( v41 == 2 )
            {
              if ( v36 == *(_DWORD *)v40 && *(_QWORD *)(v40 + 8) == v28 && *(_QWORD *)(v40 + 16) == v30 )
                goto LABEL_32;
            }
            else if ( !v41 )
            {
              goto LABEL_58;
            }
            v40 += 32;
          }
          while ( v37 != v40 );
        }
        while ( v39 != v33 )
        {
          v69 = *(_DWORD *)(v33 + 4);
          if ( v69 == 2 )
          {
            if ( v36 == *(_DWORD *)v33 && *(_QWORD *)(v33 + 8) == v28 && *(_QWORD *)(v33 + 16) == v30 )
            {
              v40 = v33;
LABEL_32:
              v42 = *(_QWORD *)(v40 + 24);
              if ( v42 )
              {
                v43 = *(_QWORD *)(v42 + 24);
                if ( !v43 || (v44 = *(_DWORD *)(v43 - 4)) == 0 )
                {
LABEL_79:
                  sub_1872CE0("");
                  sub_1873130(114, 104);
                }
                v45 = *(__int64 **)(v42 + 24);
                while ( a2 != *v45 )
                {
                  if ( ++v45 == (__int64 *)(v43 + 8LL * v44) )
                    goto LABEL_79;
                }
                v46 = v44 - 1;
                v47 = (__int64 *)(v43 + 8 * v46);
                *v45 = *v47;
                *v47 = a2;
                *(_DWORD *)(v43 - 4) = v46;
                if ( v200 > 2 )
                {
                  --*(_DWORD *)(v42 + 4);
                  LODWORD(v46) = *(_DWORD *)(v43 - 4);
                }
                if ( !(_DWORD)v46 )
                {
                  v48 = *(_DWORD *)(v28 + 12);
                  v49 = *(_QWORD *)(a1 + 48);
                  v50 = (*(_DWORD *)(v30 + 12) - v48) ^ (v48 << 8);
                  v51 = (v48 - v50) << 10;
                  v52 = v50 - v48 + (v50 ^ ((v48 - v50) << 16));
                  v53 = *(unsigned int *)(a1 + 56);
                  v54 = v52 ^ v51;
                  v55 = v53 - 1;
                  v53 *= 32;
                  v56 = v49 + v53;
                  v57 = 32LL * (v54 & v55);
                  v58 = v49 + v57;
                  if ( v57 != v53 )
                  {
                    for ( i = v49 + v57; v56 != i; i += 32 )
                    {
                      v60 = *(_DWORD *)(i + 4);
                      if ( v60 == 2 )
                      {
                        if ( v54 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v28 && *(_QWORD *)(i + 16) == v30 )
                        {
LABEL_49:
                          v61 = i + 32;
                          if ( v56 == i + 32 )
                            v61 = *(_QWORD *)(a1 + 48);
                          v62 = *(_DWORD *)(a1 + 60) - 1;
                          if ( *(_DWORD *)(v61 + 4) )
                          {
                            *(_DWORD *)(i + 4) = 1;
                            v140 = *(_DWORD *)(a1 + 64);
                            *(_DWORD *)(a1 + 60) = v62;
                            v141 = v140 + 1;
                            if ( v62 < 0x40 )
                              v62 = 64;
                            *(_DWORD *)(a1 + 64) = v141;
                            if ( v62 < v141 )
                            {
                              v206 = v42;
                              v142 = sub_186AF10(64);
                              v42 = v206;
                              if ( !v142 )
                              {
                                v232 = v206;
                                v207 = *(_DWORD *)(a1 + 56);
                                v143 = (_QWORD *)sub_186B270(32LL * v207);
                                v144 = &v143[4 * v207];
                                v42 = v232;
                                v145 = v143;
                                if ( v207 )
                                {
                                  do
                                  {
                                    *v143 = 0;
                                    v143 += 4;
                                    *(v143 - 3) = 0;
                                    *(v143 - 2) = 0;
                                  }
                                  while ( v143 != v144 );
                                }
                                v146 = *(unsigned int *)(a1 + 56);
                                v147 = *(char **)(a1 + 48);
                                v208 = v146 - 1;
                                v233 = 32 * v146;
                                v148 = &v147[32 * v146];
                                v234 = &v145[4 * v146];
                                if ( v147 != v148 )
                                {
                                  do
                                  {
                                    if ( *((_DWORD *)v147 + 1) == 2 )
                                    {
                                      v149 = 32LL * (*(_DWORD *)v147 & v208);
                                      v150 = &v145[(unsigned __int64)v149 / 8];
                                      if ( v233 == v149 )
                                      {
LABEL_272:
                                        if ( v145 == v150 )
                                        {
LABEL_288:
                                          sub_1872CE0("");
                                          sub_1873130(114, 213);
                                        }
                                        v151 = v145;
                                        while ( *((_DWORD *)v151 + 1) )
                                        {
                                          v151 += 4;
                                          if ( v150 == v151 )
                                            goto LABEL_288;
                                        }
                                      }
                                      else
                                      {
                                        v151 = &v145[(unsigned __int64)v149 / 8];
                                        while ( *((_DWORD *)v151 + 1) )
                                        {
                                          v151 += 4;
                                          if ( v234 == v151 )
                                            goto LABEL_272;
                                        }
                                      }
                                      *(_DWORD *)v151 = *(_DWORD *)v147;
                                      v152 = *((_QWORD *)v147 + 3);
                                      *((_DWORD *)v151 + 1) = 2;
                                      v153 = _mm_loadu_si128((const __m128i *)(v147 + 8));
                                      v151[3] = v152;
                                      *(__m128i *)(v151 + 1) = v153;
                                    }
                                    v147 += 32;
                                  }
                                  while ( v148 != v147 );
                                  v148 = *(char **)(a1 + 48);
                                }
                                if ( v148 )
                                {
                                  v210 = v42;
                                  sub_186B220(v148);
                                  v42 = v210;
                                }
                                *(_QWORD *)(a1 + 48) = v145;
                                *(_DWORD *)(a1 + 64) = 0;
                              }
                              v43 = *(_QWORD *)(v42 + 24);
                            }
                          }
                          else
                          {
                            *(_DWORD *)(i + 4) = 0;
                            *(_DWORD *)(a1 + 60) = v62;
                          }
                          goto LABEL_53;
                        }
                      }
                      else if ( !v60 )
                      {
                        goto LABEL_53;
                      }
                    }
                  }
                  if ( v49 != v58 )
                  {
                    for ( i = *(_QWORD *)(a1 + 48); v58 != i; i += 32 )
                    {
                      v70 = *(_DWORD *)(i + 4);
                      if ( v70 == 2 )
                      {
                        if ( v54 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v28 && *(_QWORD *)(i + 16) == v30 )
                          goto LABEL_49;
                      }
                      else if ( !v70 )
                      {
                        break;
                      }
                    }
                  }
LABEL_53:
                  if ( v43 )
                  {
                    v202 = v42;
                    sub_186B220((void *)(v43 - 8));
                    v42 = v202;
                  }
                  v63 = *(_QWORD *)(v42 + 16);
                  if ( v63 )
                  {
                    v203 = v42;
                    sub_186B220((void *)(v63 - 8));
                    v42 = v203;
                  }
                  sub_186B220((void *)v42);
                }
              }
              break;
            }
          }
          else if ( !v69 )
          {
            break;
          }
          v33 += 32;
        }
LABEL_58:
        v27 += 8;
      }
      while ( v27 != v191 );
      v26 = ++v214;
    }
    while ( v214 != v216 );
  }
LABEL_60:
  if ( !v229 )
    goto LABEL_140;
  v192 = nullptr;
  v215 = 8LL * v229;
  do
  {
    v64 = v192;
    v65 = *(_QWORD *)&v192[*a5];
    if ( v198 )
    {
      v66 = *((unsigned int *)v198 - 1);
      while ( (_DWORD)v66 )
      {
        v67 = v198;
        while ( *v67 != v65 )
        {
          if ( &v198[v66] == ++v67 )
            goto LABEL_89;
        }
        result = (_BYTE *)(8LL * v229);
        v64 += 8;
        if ( v64 == (_BYTE *)v215 )
          goto LABEL_139;
        v65 = *(_QWORD *)&v64[*a5];
      }
LABEL_89:
      v192 = v64;
    }
    if ( v230 )
    {
      v71 = 0;
      while ( 1 )
      {
        v72 = sub_52E440(a1, v65, *(_QWORD *)(*(_QWORD *)(a3 + 8) + v71));
        v74 = v73;
        v75 = *(unsigned int *)(a1 + 56);
        v76 = *(_DWORD *)(v72 + 12);
        v77 = *(_QWORD *)(a1 + 48);
        LODWORD(v73) = (*(_DWORD *)(v73 + 12) - v76) ^ (v76 << 8);
        v78 = (v76 - (_DWORD)v73) << 10;
        v79 = v73 - v76 + (v73 ^ ((v76 - (_DWORD)v73) << 16));
        LODWORD(v73) = v75 - 1;
        v75 *= 32;
        v80 = v79 ^ v78;
        v81 = v77 + v75;
        v82 = 32LL * (v80 & (unsigned int)v73);
        v83 = v77 + v82;
        if ( v82 != v75 )
        {
          v84 = v77 + v82;
          do
          {
            v85 = *(_DWORD *)(v84 + 4);
            if ( v85 == 2 )
            {
              if ( v80 == *(_DWORD *)v84 && v72 == *(_QWORD *)(v84 + 8) && v74 == *(_QWORD *)(v84 + 16) )
                goto LABEL_100;
            }
            else if ( !v85 )
            {
              goto LABEL_126;
            }
            v84 += 32;
          }
          while ( v81 != v84 );
        }
        while ( v83 != v77 )
        {
          v108 = *(_DWORD *)(v77 + 4);
          if ( v108 == 2 )
          {
            if ( v80 == *(_DWORD *)v77 && v72 == *(_QWORD *)(v77 + 8) && v74 == *(_QWORD *)(v77 + 16) )
            {
              v84 = v77;
LABEL_100:
              v86 = *(_QWORD *)(v84 + 24);
              if ( v86 )
              {
                v87 = *(_QWORD *)(v86 + 24);
                if ( !v87 || (v88 = *(_DWORD *)(v87 - 4)) == 0 )
                {
LABEL_137:
                  sub_1872CE0("");
                  sub_1873130(114, 104);
                }
                v89 = *(__int64 **)(v86 + 24);
                while ( a2 != *v89 )
                {
                  if ( ++v89 == (__int64 *)(v87 + 8LL * v88) )
                    goto LABEL_137;
                }
                v90 = v88 - 1;
                v91 = (__int64 *)(v87 + 8 * v90);
                *v89 = *v91;
                *v91 = a2;
                *(_DWORD *)(v87 - 4) = v90;
                if ( v200 > 2 )
                {
                  --*(_DWORD *)(v86 + 4);
                  LODWORD(v90) = *(_DWORD *)(v87 - 4);
                }
                if ( !(_DWORD)v90 )
                {
                  v92 = *(_DWORD *)(v72 + 12);
                  v93 = *(_QWORD *)(a1 + 48);
                  v94 = (*(_DWORD *)(v74 + 12) - v92) ^ (v92 << 8);
                  v95 = (v92 - v94) << 10;
                  v96 = v94 - v92 + (v94 ^ ((v92 - v94) << 16));
                  v97 = *(unsigned int *)(a1 + 56);
                  v98 = v96 ^ v95;
                  v99 = v97 - 1;
                  v97 *= 32;
                  v100 = v93 + v97;
                  v101 = 32LL * (v98 & v99);
                  v102 = v93 + v101;
                  if ( v101 != v97 )
                  {
                    for ( j = v93 + v101; v100 != j; j += 32 )
                    {
                      v104 = *(_DWORD *)(j + 4);
                      if ( v104 == 2 )
                      {
                        if ( v98 == *(_DWORD *)j && v72 == *(_QWORD *)(j + 8) && v74 == *(_QWORD *)(j + 16) )
                        {
LABEL_117:
                          v105 = j + 32;
                          if ( v100 == j + 32 )
                            v105 = *(_QWORD *)(a1 + 48);
                          v106 = *(_DWORD *)(a1 + 60) - 1;
                          if ( *(_DWORD *)(v105 + 4) )
                          {
                            *(_DWORD *)(j + 4) = 1;
                            v154 = *(_DWORD *)(a1 + 64);
                            *(_DWORD *)(a1 + 60) = v106;
                            v155 = v154 + 1;
                            if ( v106 < 0x40 )
                              v106 = 64;
                            *(_DWORD *)(a1 + 64) = v155;
                            if ( v106 < v155 )
                            {
                              v209 = v86;
                              v156 = sub_186AF10(v100);
                              v86 = v209;
                              if ( !v156 )
                              {
                                v221 = v209;
                                v211 = *(_DWORD *)(a1 + 56);
                                v177 = (_QWORD *)sub_186B270(32LL * v211);
                                v178 = &v177[4 * v211];
                                v86 = v221;
                                v179 = v177;
                                if ( v211 )
                                {
                                  do
                                  {
                                    *v177 = 0;
                                    v177 += 4;
                                    *(v177 - 3) = 0;
                                    *(v177 - 2) = 0;
                                  }
                                  while ( v178 != v177 );
                                }
                                v180 = *(unsigned int *)(a1 + 56);
                                v181 = *(char **)(a1 + 48);
                                v212 = v180 - 1;
                                v222 = 32 * v180;
                                v182 = &v181[32 * v180];
                                v228 = &v179[4 * v180];
                                if ( v181 != v182 )
                                {
                                  do
                                  {
                                    if ( *((_DWORD *)v181 + 1) == 2 )
                                    {
                                      v183 = 32LL * (*(_DWORD *)v181 & v212);
                                      v184 = &v179[(unsigned __int64)v183 / 8];
                                      if ( v222 == v183 )
                                      {
LABEL_295:
                                        if ( v179 == v184 )
                                        {
LABEL_302:
                                          sub_1872CE0("");
                                          sub_1873130(114, 213);
                                        }
                                        v185 = v179;
                                        while ( *((_DWORD *)v185 + 1) )
                                        {
                                          v185 += 4;
                                          if ( v184 == v185 )
                                            goto LABEL_302;
                                        }
                                      }
                                      else
                                      {
                                        v185 = &v179[(unsigned __int64)v183 / 8];
                                        while ( *((_DWORD *)v185 + 1) )
                                        {
                                          v185 += 4;
                                          if ( v228 == v185 )
                                            goto LABEL_295;
                                        }
                                      }
                                      *(_DWORD *)v185 = *(_DWORD *)v181;
                                      v186 = *((_QWORD *)v181 + 3);
                                      *((_DWORD *)v185 + 1) = 2;
                                      v187 = _mm_loadu_si128((const __m128i *)(v181 + 8));
                                      v185[3] = v186;
                                      *(__m128i *)(v185 + 1) = v187;
                                    }
                                    v181 += 32;
                                  }
                                  while ( v182 != v181 );
                                  v182 = *(char **)(a1 + 48);
                                }
                                if ( v182 )
                                {
                                  v213 = v86;
                                  sub_186B220(v182);
                                  v86 = v213;
                                }
                                *(_QWORD *)(a1 + 48) = v179;
                                *(_DWORD *)(a1 + 64) = 0;
                              }
                              v87 = *(_QWORD *)(v86 + 24);
                            }
                          }
                          else
                          {
                            *(_DWORD *)(j + 4) = 0;
                            *(_DWORD *)(a1 + 60) = v106;
                          }
                          goto LABEL_121;
                        }
                      }
                      else if ( !v104 )
                      {
                        goto LABEL_121;
                      }
                    }
                  }
                  if ( v93 != v102 )
                  {
                    for ( j = *(_QWORD *)(a1 + 48); v102 != j; j += 32 )
                    {
                      v139 = *(_DWORD *)(j + 4);
                      if ( v139 == 2 )
                      {
                        if ( v98 == *(_DWORD *)j && v72 == *(_QWORD *)(j + 8) && v74 == *(_QWORD *)(j + 16) )
                          goto LABEL_117;
                      }
                      else if ( !v139 )
                      {
                        break;
                      }
                    }
                  }
LABEL_121:
                  if ( v87 )
                  {
                    v204 = v86;
                    sub_186B220((void *)(v87 - 8));
                    v86 = v204;
                  }
                  v107 = *(_QWORD *)(v86 + 16);
                  if ( v107 )
                  {
                    v205 = v86;
                    sub_186B220((void *)(v107 - 8));
                    v86 = v205;
                  }
                  sub_186B220((void *)v86);
                }
              }
              break;
            }
          }
          else if ( !v108 )
          {
            break;
          }
          v77 += 32;
        }
LABEL_126:
        v71 += 8;
        if ( 8LL * v230 == v71 )
          break;
        v65 = *(_QWORD *)&v192[*a5];
      }
    }
    v192 += 8;
    result = v192;
  }
  while ( v192 != (_BYTE *)v215 );
LABEL_139:
  if ( v229 == 1 )
  {
    v174 = v198;
    if ( v198 )
    {
      v175 = (unsigned __int64)&v198[*((unsigned int *)v198 - 1)];
      if ( (unsigned __int64)v198 < v175 )
      {
        do
        {
          while ( 1 )
          {
            v176 = *v174;
            if ( *v174 )
            {
              v131 = (*(_DWORD *)(v176 + 8))-- == 1;
              if ( v131 )
                break;
            }
            if ( (unsigned __int64)++v174 >= v175 )
              return (_BYTE *)sub_186B220(v198 - 1);
          }
          ++v174;
          sub_15D7BC0(v223, v176);
        }
        while ( (unsigned __int64)v174 < v175 );
      }
      return (_BYTE *)sub_186B220(v198 - 1);
    }
  }
  else
  {
LABEL_140:
    v109 = *(_QWORD *)(a2 + 40);
    v110 = (_QWORD *)sub_186B270(0x80u);
    *v110 = 0;
    v110[2] = 0;
    v110[4] = 0;
    v110[6] = 0;
    v110[8] = 0;
    v110[10] = 0;
    v110[12] = 0;
    v110[14] = 0;
    v238[0] = v110;
    v240 = v242;
    v238[1] = &byte_8;
    v239 = 0;
    v241 = 0x1000000000LL;
    v111 = (_OWORD *)sub_186B270(0x40u);
    *v111 = 0;
    v111[1] = 0;
    v111[2] = 0;
    v111[3] = 0;
    ptr = v111;
    v244 = 8;
    v245 = 0;
    v246 = 0;
    v247 = 0;
    sub_148BC40(v238, v109, 1);
    v112 = *(_DWORD *)(a2 + 56);
    v113 = *(_DWORD *)(a2 + 64);
    if ( v113 < v112 )
    {
      v114 = a2 + 8LL * v113;
      v115 = a2 + 8 * (v113 + (unsigned __int64)(v112 - 1 - v113)) + 8;
      do
      {
        sub_148BC40(v238, *(_QWORD *)(v114 + 80) & 0xFFFFFFFFFFFFFFF8LL, 1);
        v114 += 8;
      }
      while ( v115 != v114 );
    }
    v116 = 0;
    if ( v229 )
    {
      do
      {
        sub_148BC40(v238, *(_QWORD *)(*a5 + v116), 1);
        v116 += 8;
      }
      while ( v116 != 8LL * v229 );
    }
    if ( v198 )
    {
LABEL_146:
      v117 = *((_DWORD *)v198 - 1);
      if ( v117 )
      {
        while ( 1 )
        {
          v201 = v198[v117 - 1];
          v118 = (_QWORD *)sub_62B3A0(*(_QWORD *)(a1 + 16), v201);
          v119 = (_DWORD *)*v118;
          v120 = (_DWORD **)v118;
          if ( *v118 )
          {
            v121 = *(v119 - 1);
            v193 = *(v119 - 2);
            v122 = sub_186B270(4LL * v193 + 8);
            v123 = *v120;
            v119 = (_DWORD *)(v122 + 8);
            *(_QWORD *)v122 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v193), _mm_cvtsi32_si128(v121)).m128i_u64[0];
            if ( v123 )
            {
              v124 = 4LL * (unsigned int)*(v123 - 1);
              if ( v124 <= 4 )
              {
                if ( v124 == 4 )
                  *(_DWORD *)(v122 + 8) = *v123;
              }
              else
              {
                memmove((void *)(v122 + 8), v123, v124);
              }
            }
          }
          sub_148BC40(v238, v201, 0xFFFFFFFFLL);
          v194 = 0;
          if ( v229 )
            break;
LABEL_157:
          sub_148BC40(v238, v201, 1);
          v129 = (unsigned int)(*((_DWORD *)v198 - 1) - 1);
          v130 = v198[v129];
          *((_DWORD *)v198 - 1) = v129;
          if ( v130 )
          {
            v131 = (*(_DWORD *)(v130 + 8))-- == 1;
            if ( v131 )
              sub_15D7BC0(v223, v130);
          }
          if ( !v119 )
            goto LABEL_146;
          sub_186B220(v119 - 2);
          v117 = *((_DWORD *)v198 - 1);
          if ( !v117 )
            goto LABEL_162;
        }
        while ( 1 )
        {
          v125 = *(_QWORD *)(*a5 + v194);
          v126 = *((unsigned int *)v198 - 1);
          if ( (_DWORD)v126 )
          {
            v127 = v198;
            v128 = &v198[v126];
            while ( v125 != *v127 )
            {
              if ( v128 == ++v127 )
                goto LABEL_217;
            }
            goto LABEL_156;
          }
LABEL_217:
          sub_148BC40(v238, *(_QWORD *)(*a5 + v194), 0xFFFFFFFFLL);
          v157 = (__int64 *)sub_62B3A0(*(_QWORD *)(a1 + 16), v125);
          v161 = *v157;
          if ( *v157 )
          {
            v225 = v157;
            v196 = *(_DWORD *)(v161 - 4);
            v217 = *(_DWORD *)(v161 - 8);
            v162 = sub_186B270(4LL * v217 + 8);
            v158 = (size_t)v225;
            v160 = v162;
            v161 = v162 + 8;
            v163 = (_DWORD *)*v225;
            *(_QWORD *)v162 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v217), _mm_cvtsi32_si128(v196)).m128i_u64[0];
            if ( v163 )
            {
              v158 = 4LL * (unsigned int)*(v163 - 1);
              if ( v158 <= 4 )
              {
                if ( v158 == 4 )
                  *(_DWORD *)(v162 + 8) = *v163;
              }
              else
              {
                v218 = v162;
                memmove((void *)(v162 + 8), v163, v158);
                v160 = v218;
              }
            }
            if ( !v119 )
              goto LABEL_232;
            v159 = (unsigned int)*(v119 - 1);
            if ( v196 >= (unsigned int)v159 )
            {
              if ( !(_DWORD)v159 )
                goto LABEL_232;
LABEL_224:
              if ( (unsigned int)v159 <= 3 )
                goto LABEL_246;
              goto LABEL_225;
            }
            v167 = v159 + 1;
            if ( v196 >= (int)v159 + 1 )
            {
              *(_DWORD *)(v160 + 4) = v167;
              goto LABEL_224;
            }
          }
          else
          {
            if ( !v119 )
              goto LABEL_232;
            v159 = (unsigned int)*(v119 - 1);
            if ( !(_DWORD)v159 )
              goto LABEL_232;
            if ( (_DWORD)v159 == -1 )
            {
              v159 = 0xFFFFFFFFLL;
              goto LABEL_225;
            }
            v226 = v159 + 1;
            v219 = *(v119 - 1);
            v166 = (_QWORD *)sub_186B270(0x10u);
            v196 = 0;
            v159 = v219;
            v167 = v226;
            v161 = (__int64)(v166 + 1);
            *v166 = 2;
          }
          while ( 1 )
          {
            v171 = *(_DWORD *)(v161 - 8);
            if ( v171 >= v167 )
              break;
            v168 = (3 * v171 + 1) >> 1;
            v169 = 4 * v168 + 8;
            if ( 4 * v171 + 8 >= (unsigned int)v169 || v171 >= v168 )
            {
              v189 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v237, "Overflow encountered when expanding vector");
              *v189 = (char *)off_1C63128;
              sub_2333C0(v189 + 1, v237);
              sub_233E40((__int64)v237);
              __cxa_throw(v189, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v231 = v167;
            v227 = (3 * v171 + 1) >> 1;
            v220 = v159;
            v170 = (unsigned int *)sub_186B300((void *)(v161 - 8), v169);
            v160 = v227;
            v159 = v220;
            v161 = (__int64)(v170 + 2);
            v167 = v231;
            *v170 = v227;
          }
          *(_DWORD *)(v161 - 4) = v167;
          v172 = 4LL * v167;
          v173 = 4LL * v196;
          if ( v173 == v172 )
            goto LABEL_224;
          v197 = v159;
          memset((void *)(v161 + v173), 0, v172 - v173);
          v159 = v197;
          if ( v197 <= 3 )
          {
LABEL_246:
            v165 = 0;
            goto LABEL_228;
          }
LABEL_225:
          v164 = 0;
          v158 = 16LL * ((unsigned int)v159 >> 2);
          do
          {
            *(__m128i *)(v161 + v164) = _mm_or_si128(
                                          _mm_loadu_si128((const __m128i *)(v161 + v164)),
                                          _mm_loadu_si128((const __m128i *)&v119[v164 / 4]));
            v164 += 16LL;
          }
          while ( v164 != v158 );
          v165 = (unsigned int)v159 & 0xFFFFFFFC;
          if ( (v159 & 3) == 0 )
            goto LABEL_232;
LABEL_228:
          v159 = (unsigned int)(v159 - v165);
          if ( (_DWORD)v159 == 1 )
            goto LABEL_231;
          v158 = v161 + 4LL * (unsigned int)v165;
          *(_QWORD *)v158 = _mm_or_si128(
                              _mm_loadl_epi64((const __m128i *)&v119[(unsigned int)v165]),
                              _mm_loadl_epi64((const __m128i *)v158)).m128i_u64[0];
          if ( (v159 & 1) != 0 )
          {
            v159 = (unsigned int)v159 & 0xFFFFFFFE;
            v165 = (unsigned int)(v159 + v165);
LABEL_231:
            v158 = (unsigned int)v119[v165];
            *(_DWORD *)(v161 + 4 * v165) |= v158;
          }
LABEL_232:
          v237[0] = nullptr;
          sub_148BFD0(v238, v237, v158, v159, v160);
          sub_148BC40(v238, v125, 1);
          v235 = v161;
          sub_52E800(v237, &v235);
          sub_52EC40((__int64 **)a1, v125, v201, a2, (__int64 *)v237);
          if ( v237[0] )
            sub_186B220(v237[0] - 2);
          if ( v161 )
            sub_186B220((void *)(v161 - 8));
LABEL_156:
          v194 += 8;
          if ( 8LL * v229 == v194 )
            goto LABEL_157;
        }
      }
    }
LABEL_162:
    if ( *((_QWORD *)&v247 + 1) )
      sub_186B220((void *)(*((_QWORD *)&v247 + 1) - 8LL));
    if ( (_QWORD)v247 )
      sub_186B220((void *)(v247 - 8));
    if ( *((_QWORD *)&v246 + 1) )
      sub_186B220((void *)(*((_QWORD *)&v246 + 1) - 8LL));
    if ( (_QWORD)v246 )
      sub_186B220((void *)(v246 - 8));
    if ( ptr )
      sub_186B220(ptr);
    v132 = v240;
    v133 = (char *)v240 + 8 * (unsigned int)v241;
    v134 = (char *)v240;
    if ( v240 != v133 )
    {
      do
      {
        v135 = *(_QWORD *)v134;
        v134 += 8;
        *(_BYTE *)(v135 + 6) &= ~1u;
      }
      while ( v133 != v134 );
    }
    LODWORD(v241) = 0;
    result = v242;
    if ( v132 != v242 && v132 )
      result = (_BYTE *)sub_186B220(v132);
    if ( v238[0] )
      result = (_BYTE *)sub_186B220(v238[0]);
    v136 = v198;
    if ( v198 )
    {
      v137 = (unsigned __int64)&v198[*((unsigned int *)v198 - 1)];
      if ( (unsigned __int64)v198 < v137 )
      {
        do
        {
          while ( 1 )
          {
            v138 = *v136;
            if ( *v136 )
            {
              v131 = (*(_DWORD *)(v138 + 8))-- == 1;
              if ( v131 )
                break;
            }
            if ( (unsigned __int64)++v136 >= v137 )
              return (_BYTE *)sub_186B220(v198 - 1);
          }
          ++v136;
          sub_15D7BC0(v223, v138);
        }
        while ( (unsigned __int64)v136 < v137 );
      }
      return (_BYTE *)sub_186B220(v198 - 1);
    }
  }
  return result;
}

