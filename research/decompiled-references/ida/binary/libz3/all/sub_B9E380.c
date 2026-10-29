__int64 __fastcall sub_B9E380(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  char **exception; // rbp
  char **v10; // rbp
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdx
  _BYTE *v15; // rbx
  __int64 v16; // r14
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // rbp
  __int64 v20; // r11
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r13
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // r10
  __int16 v28; // r12
  int v29; // esi
  int *v30; // rax
  __int64 v31; // rax
  int v32; // ecx
  unsigned int v33; // r14d
  _QWORD *v34; // rcx
  unsigned int v35; // ebp
  __int64 v36; // r12
  __int64 v37; // rbx
  unsigned int v38; // edx
  size_t v39; // rsi
  unsigned int v40; // r13d
  unsigned int *v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rbx
  __int64 v44; // rdx
  _QWORD *v45; // rdx
  __int64 v46; // rax
  unsigned int *v47; // rax
  __int16 v48; // ax
  __int64 v49; // r12
  __int64 v50; // rbp
  int v51; // eax
  _BYTE *v52; // r13
  unsigned int *v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // r14
  __int64 v56; // rbp
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // rdi
  __int64 v60; // r12
  __int64 v61; // r14
  int v62; // esi
  __int64 v63; // r10
  _BYTE *v64; // r15
  __int64 v65; // rbx
  __int16 v66; // ax
  __int64 v67; // rax
  __int64 v68; // rcx
  int v69; // edx
  unsigned int v70; // r10d
  int v71; // r8d
  __int64 v72; // rsi
  __int64 v73; // rbp
  __int16 v74; // di
  int v75; // esi
  unsigned int v76; // ebx
  size_t v77; // rsi
  unsigned int *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 v81; // r9
  int v82; // eax
  int v83; // r10d
  int v84; // r8d
  __int64 v85; // rdx
  __int64 v86; // r14
  __int16 v87; // si
  int v88; // edx
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rsi
  _BYTE *v93; // r8
  int v94; // edi
  __int64 v95; // r15
  __int64 v96; // r10
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rbx
  __int64 v101; // r14
  __int16 v102; // bp
  __int64 v103; // r13
  unsigned int v104; // eax
  __int64 v105; // rbx
  char *v106; // rdi
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rbx
  char *v110; // rdi
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rbp
  __int64 v116; // r12
  int v117; // ebp
  __int64 v118; // r15
  __int64 v119; // rsi
  __int16 v120; // ax
  __int64 v121; // r14
  int v122; // ebx
  __int64 v123; // r13
  __int64 v124; // rax
  unsigned int v125; // ebx
  __int64 v126; // r13
  int v127; // eax
  char *v128; // rcx
  __int64 v129; // rcx
  int v130; // ebp
  __int64 v131; // rax
  int v132; // r12d
  int v133; // edx
  _QWORD *v134; // rbx
  int v135; // edx
  _QWORD *v136; // r12
  __int64 v137; // rbx
  char *v138; // rdi
  __int64 v139; // rdx
  __int64 v140; // rsi
  __int64 v141; // rbx
  char *v142; // rax
  char *v143; // rdi
  unsigned __int64 v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rcx
  int v148; // eax
  __int64 v149; // r12
  char *v150; // rax
  char *v151; // rdi
  unsigned __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rsi
  __int64 v156; // rdx
  __int64 v157; // rsi
  unsigned __int64 v158; // rax
  __int64 v159; // rsi
  __int64 v160; // rdx
  __int64 v161; // rsi
  unsigned __int64 v162; // rax
  __int64 v163; // rsi
  __int64 v164; // rdx
  __int64 v165; // rsi
  __int64 v166; // rdx
  __int64 v167; // rsi
  __int64 v168; // [rsp+0h] [rbp-188h]
  __int64 *v169; // [rsp+0h] [rbp-188h]
  __int64 v170; // [rsp+0h] [rbp-188h]
  __int64 v171; // [rsp+8h] [rbp-180h]
  int v172; // [rsp+8h] [rbp-180h]
  char *v173; // [rsp+8h] [rbp-180h]
  char v174; // [rsp+10h] [rbp-178h]
  unsigned int v175; // [rsp+10h] [rbp-178h]
  int v176; // [rsp+14h] [rbp-174h]
  int v177[2]; // [rsp+18h] [rbp-170h]
  int v178[2]; // [rsp+18h] [rbp-170h]
  __int64 v179; // [rsp+20h] [rbp-168h]
  unsigned __int16 v180; // [rsp+28h] [rbp-160h]
  __int64 v181; // [rsp+28h] [rbp-160h]
  __int64 v182; // [rsp+30h] [rbp-158h]
  unsigned int v183; // [rsp+30h] [rbp-158h]
  int *v184; // [rsp+38h] [rbp-150h]
  unsigned int v185; // [rsp+38h] [rbp-150h]
  __int64 v186; // [rsp+40h] [rbp-148h]
  __int64 v187; // [rsp+40h] [rbp-148h]
  int v188; // [rsp+48h] [rbp-140h]
  int v189; // [rsp+4Ch] [rbp-13Ch]
  int v190; // [rsp+4Ch] [rbp-13Ch]
  int v191; // [rsp+50h] [rbp-138h]
  int v192; // [rsp+54h] [rbp-134h]
  __int64 v193; // [rsp+60h] [rbp-128h]
  __int64 v194; // [rsp+68h] [rbp-120h]
  __int64 v195; // [rsp+70h] [rbp-118h]
  __int64 v196; // [rsp+78h] [rbp-110h]
  __int64 v197; // [rsp+80h] [rbp-108h]
  __int64 v198; // [rsp+88h] [rbp-100h]
  __int64 v199; // [rsp+90h] [rbp-F8h]
  _BYTE *v200; // [rsp+98h] [rbp-F0h]
  char *v201[4]; // [rsp+A0h] [rbp-E8h] BYREF
  void *src; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v203; // [rsp+C8h] [rbp-C0h]
  _BYTE v204[184]; // [rsp+D0h] [rbp-B8h] BYREF

  v11 = a1;
  v12 = *(_QWORD *)(a1 + 80);
  v176 = 1;
  result = *(unsigned int *)(v12 + 24);
  v188 = result;
  v14 = (unsigned int)result;
  if ( (unsigned int)result > 1 )
  {
    while ( 1 )
    {
      v15 = *(_BYTE **)(v11 + 104);
      if ( !(_DWORD)v14 )
      {
        *v15 = 1;
        BUG();
      }
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = v11;
      do
      {
        if ( !v15[v16] )
        {
          v21 = *(_QWORD *)(v12 + 8 * v16 + 32);
          LOBYTE(src) = 0;
          if ( (*(_BYTE *)(v21 + 30) & 1) != 0 )
            goto LABEL_63;
          v22 = *(unsigned int *)(v21 + 24);
          if ( !(_DWORD)v22 )
            goto LABEL_63;
          v171 = v12;
          a7 = v21 + 8 * v22;
          v23 = v21;
          v24 = 0;
          v168 = v14;
          a9 = v18;
          v25 = v21;
          v26 = v16;
          do
          {
            v27 = *(_QWORD *)(v23 + 32);
            v28 = *(_WORD *)(v27 + 4);
            if ( v28 == 1 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(v20 + 64) + 4LL * *(unsigned int *)(v27 + 16)) == -1 )
                LOBYTE(src) = 1;
              else
                ++v24;
            }
            else if ( !v28 && (*(_BYTE *)(v27 + 30) & 1) == 0 )
            {
              v58 = *(unsigned int *)(v27 + 24);
              if ( (_DWORD)v58 )
              {
                v175 = v24;
                v59 = v27 + 8 * v58;
                v60 = *(_QWORD *)(v23 + 32);
                v61 = v26;
                *(_QWORD *)v178 = a7;
                v62 = 0;
                v63 = v25;
                v64 = v15;
                do
                {
                  v65 = *(_QWORD *)(v60 + 32);
                  v66 = *(_WORD *)(v65 + 4);
                  if ( v66 == 1 )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(v20 + 64) + 4LL * *(unsigned int *)(v65 + 16)) == -1 )
                      LOBYTE(src) = 1;
                    else
                      ++v62;
                  }
                  else if ( !v66 && (*(_BYTE *)(v65 + 30) & 1) == 0 )
                  {
                    v67 = *(unsigned int *)(v65 + 24);
                    if ( (_DWORD)v67 )
                    {
                      v181 = v19;
                      v68 = v65 + 8 * v67;
                      v69 = 0;
                      v179 = v63;
                      v70 = a9;
                      v183 = v17;
                      v71 = v62;
                      v72 = v59;
                      do
                      {
                        v73 = *(_QWORD *)(v65 + 32);
                        v74 = *(_WORD *)(v73 + 4);
                        if ( v74 == 1 )
                        {
                          if ( *(_DWORD *)(*(_QWORD *)(v20 + 64) + 4LL * *(unsigned int *)(v73 + 16)) == -1 )
                            LOBYTE(src) = 1;
                          else
                            ++v69;
                        }
                        else if ( !v74 && (*(_BYTE *)(v73 + 30) & 1) == 0 )
                        {
                          v80 = *(unsigned int *)(v73 + 24);
                          if ( (_DWORD)v80 )
                          {
                            v187 = v72;
                            v81 = v73 + 8 * v80;
                            v82 = 0;
                            v185 = v70;
                            v83 = v71;
                            v84 = v69;
                            v85 = v61;
                            do
                            {
                              v86 = *(_QWORD *)(v73 + 32);
                              v87 = *(_WORD *)(v86 + 4);
                              if ( v87 == 1 )
                              {
                                if ( *(_DWORD *)(*(_QWORD *)(v20 + 64) + 4LL * *(unsigned int *)(v86 + 16)) == -1 )
                                  LOBYTE(src) = 1;
                                else
                                  ++v82;
                              }
                              else if ( !v87 && (*(_BYTE *)(v86 + 30) & 1) == 0 )
                              {
                                v91 = *(unsigned int *)(v86 + 24);
                                if ( (_DWORD)v91 )
                                {
                                  v190 = v84;
                                  v92 = v86 + 8 * v91;
                                  v93 = v64;
                                  v94 = 0;
                                  v191 = v83;
                                  v95 = v60;
                                  v96 = v68;
                                  v97 = v73;
                                  v192 = v82;
                                  v98 = v85;
                                  v99 = v65;
                                  v100 = *(_QWORD *)(v73 + 32);
                                  do
                                  {
                                    v101 = *(_QWORD *)(v100 + 32);
                                    v102 = *(_WORD *)(v101 + 4);
                                    if ( v102 == 1 )
                                    {
                                      if ( *(_DWORD *)(*(_QWORD *)(v20 + 64) + 4LL * *(unsigned int *)(v101 + 16)) == -1 )
                                        LOBYTE(src) = 1;
                                      else
                                        ++v94;
                                    }
                                    else if ( !v102 && (*(_BYTE *)(v101 + 30) & 1) == 0 )
                                    {
                                      v115 = *(unsigned int *)(v101 + 24);
                                      if ( (_DWORD)v115 )
                                      {
                                        v194 = v96;
                                        v116 = v101 + 8 * v115;
                                        v117 = 0;
                                        v195 = v99;
                                        v196 = v81;
                                        v197 = v97;
                                        v198 = v92;
                                        v193 = v95;
                                        v118 = v98;
                                        do
                                        {
                                          v119 = *(_QWORD *)(v101 + 32);
                                          v120 = *(_WORD *)(v119 + 4);
                                          if ( v120 == 1 )
                                          {
                                            if ( *(_DWORD *)(*(_QWORD *)(v20 + 64) + 4LL * *(unsigned int *)(v119 + 16)) == -1 )
                                              LOBYTE(src) = 1;
                                            else
                                              ++v117;
                                          }
                                          else if ( !v120 )
                                          {
                                            v200 = v93;
                                            v199 = v20;
                                            v148 = sub_B99920(v20, v119, &src);
                                            v93 = v200;
                                            v20 = v199;
                                            v117 += v148;
                                          }
                                          v101 += 8;
                                        }
                                        while ( v116 != v101 );
                                        v98 = v118;
                                        v95 = v193;
                                        v96 = v194;
                                        v94 += v117;
                                        v99 = v195;
                                        v81 = v196;
                                        v97 = v197;
                                        v92 = v198;
                                      }
                                    }
                                    v100 += 8;
                                  }
                                  while ( v100 != v92 );
                                  v65 = v99;
                                  v85 = v98;
                                  v60 = v95;
                                  v73 = v97;
                                  v64 = v93;
                                  v68 = v96;
                                  v84 = v190;
                                  v83 = v191;
                                  v82 = v94 + v192;
                                }
                              }
                              v73 += 8;
                            }
                            while ( v81 != v73 );
                            v61 = v85;
                            v88 = v84;
                            v72 = v187;
                            v71 = v83;
                            v69 = v82 + v88;
                            v70 = v185;
                          }
                        }
                        v65 += 8;
                      }
                      while ( v68 != v65 );
                      v59 = v72;
                      v75 = v71;
                      a9 = v70;
                      v19 = v181;
                      v63 = v179;
                      v17 = v183;
                      v62 = v69 + v75;
                    }
                  }
                  v60 += 8;
                }
                while ( v59 != v60 );
                v15 = v64;
                a7 = *(_QWORD *)v178;
                v25 = v63;
                v26 = v61;
                v24 = v62 + v175;
              }
            }
            v23 += 8;
          }
          while ( a7 != v23 );
          v21 = v25;
          v12 = v171;
          v14 = v168;
          v18 = a9;
          v16 = v26;
          if ( !(_BYTE)src )
          {
LABEL_63:
            v15[v16] = 1;
            v11 = v20;
            if ( *(_BYTE *)(v20 + 32) )
              sub_B9B270(*(_QWORD **)(v20 + 24), *(int **)(v21 + 16));
            sub_B9B890((int *)v11, (unsigned int *)v21, v14, a7, v17, a9, *(double *)a2.m128_u64, a3, a4);
            goto LABEL_66;
          }
          if ( !v19 || (unsigned int)a9 < v24 )
          {
            v17 = (unsigned int)v26;
            v18 = v24;
            v19 = v21;
          }
        }
        ++v16;
      }
      while ( v14 != v16 );
      v29 = *(_DWORD *)(v19 + 24);
      v30 = *(int **)(v19 + 16);
      v15[v17] = 1;
      v11 = v20;
      v182 = v19;
      v180 = v29;
      v184 = v30;
      v186 = *(_BYTE *)(v20 + 32) ? 1LL << sub_B9B270(*(_QWORD **)(v20 + 24), v30) : 0LL;
      v31 = *(_QWORD *)(v11 + 88);
      v32 = *(_DWORD *)(v31 + 24);
      v189 = v32;
      *(_DWORD *)(v31 + 24) = v32 + (unsigned __int16)v29;
      src = v204;
      v203 = 0x1000000000LL;
      if ( (_WORD)v29 )
        break;
      v52 = v204;
LABEL_47:
      v56 = sub_180C100(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL), 8LL * v180 + 40);
      *(_DWORD *)v56 = 28;
      *(_QWORD *)(v56 + 8) = 0;
      *(_WORD *)(v56 + 24) = v180;
      *(_QWORD *)(v56 + 16) = v184;
      *(_DWORD *)(v56 + 28) = v189;
      *(_QWORD *)(v56 + 32) = v186;
      memcpy((void *)(v56 + 40), v52, 8LL * v180);
      v201[0] = (char *)v56;
      sub_B9B7D0((_QWORD *)(v11 + 168), v201);
      v57 = *(_QWORD *)(v11 + 48);
      ++*(_DWORD *)(v11 + 96);
      for ( ; v57; v57 = *(_QWORD *)(v11 + 48) )
      {
        if ( !*(_DWORD *)(v57 - 4) )
          break;
        sub_B9D270(v11, a2, a3, a4);
      }
      if ( src == v204 || !src )
      {
LABEL_66:
        result = (unsigned int)++v176;
        if ( v188 == v176 )
          return result;
      }
      else
      {
        sub_186B220(src);
        result = (unsigned int)++v176;
        if ( v188 == v176 )
          return result;
      }
      v12 = *(_QWORD *)(v11 + 80);
      v14 = *(unsigned int *)(v12 + 24);
    }
    v33 = v32 + 1;
    v174 = 0;
    v172 = v32 + 1 + (unsigned __int16)v29;
    v169 = (__int64 *)(v19 + 32);
    while ( 1 )
    {
      v34 = *(_QWORD **)(v11 + 40);
      v35 = v33 - 1;
      v36 = *v169;
      if ( !v34 )
        break;
      v37 = *((unsigned int *)v34 - 1);
      if ( v35 < (unsigned int)v37 )
        goto LABEL_29;
      if ( (unsigned int)v37 < v33 )
        goto LABEL_26;
      v45 = *(_QWORD **)(v11 + 48);
      *((_DWORD *)v34 - 1) = v33;
      v34[v35] = v36;
      if ( v45 )
      {
LABEL_30:
        v46 = *((unsigned int *)v45 - 1);
        if ( (_DWORD)v46 == *((_DWORD *)v45 - 2) )
        {
          v76 = (unsigned int)(3 * v46 + 1) >> 1;
          v77 = 4 * v76 + 8;
          if ( 4 * (int)v46 + 8 >= (unsigned int)v77 || (unsigned int)v46 >= v76 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_151CF2(v201);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v201);
            sub_233E40((__int64)v201);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v78 = (unsigned int *)sub_186B300(v45 - 1, v77);
          v45 = v78 + 2;
          *v78 = v76;
          v79 = v78[1];
          *(_QWORD *)(v11 + 48) = v45;
          v47 = (unsigned int *)v45 + v79;
        }
        else
        {
          v47 = (unsigned int *)v45 + v46;
        }
        goto LABEL_32;
      }
LABEL_98:
      v90 = (_QWORD *)sub_186B270(0x10u);
      v45 = v90 + 1;
      *(_QWORD *)(v11 + 48) = v90 + 1;
      *v90 = 2;
      v47 = (unsigned int *)(v90 + 1);
LABEL_32:
      *v47 = v35;
      ++*((_DWORD *)v45 - 1);
      v48 = *(_WORD *)(v36 + 4);
      if ( v48 == 1 )
      {
        v174 |= *(_DWORD *)(*(_QWORD *)(v11 + 64) + 4LL * *(unsigned int *)(v36 + 16)) >= 0;
      }
      else if ( !v48 )
      {
        v174 |= *(_BYTE *)(v36 + 30) & 1;
      }
      ++v33;
      ++v169;
      if ( v33 == v172 )
      {
        if ( v174 )
        {
          v49 = v182;
          v50 = v182 + 8LL * v180;
          while ( 1 )
          {
            v53 = *(unsigned int **)(v49 + 32);
            if ( *((_WORD *)v53 + 2) == 1 )
              break;
            if ( (*((_BYTE *)v53 + 30) & 1) != 0 )
            {
              v103 = *(_QWORD *)v11;
              v104 = sub_952CC0(*(__int64 **)(*(_QWORD *)v11 + 7472LL), *(_QWORD *)(v11 + 72));
              sub_B6F6E0(v103, (__int64)v53, 0, v104, *(double *)a2.m128_u64, a3, a4);
              v51 = v203;
              v55 = *(_QWORD *)(*(_QWORD *)(v103 + 8656) + 8LL * *v53) | 1LL;
              if ( (unsigned int)v203 >= HIDWORD(v203) )
              {
                v105 = (unsigned int)(2 * HIDWORD(v203));
                v52 = (_BYTE *)sub_186B270(8 * v105);
                v51 = v203;
                v106 = (char *)src;
                if ( (_DWORD)v203 )
                {
                  if ( (unsigned int)(v203 - 1) <= 2 || v52 == (char *)src + 8 )
                  {
                    v164 = 0;
                    v165 = 8LL * (unsigned int)v203;
                    do
                    {
                      *(_QWORD *)&v52[v164] = *(_QWORD *)&v106[v164];
                      v164 += 8;
                    }
                    while ( v165 != v164 );
                  }
                  else
                  {
                    v107 = 0;
                    v108 = 16LL * ((unsigned int)v203 >> 1);
                    do
                    {
                      a2 = (__m128)_mm_loadu_si128((const __m128i *)&v106[v107]);
                      *(__m128 *)&v52[v107] = a2;
                      v107 += 16;
                    }
                    while ( v108 != v107 );
                    if ( (v51 & 1) != 0 )
                      *(_QWORD *)&v52[8 * (v51 & 0xFFFFFFFE)] = *(_QWORD *)&v106[8 * (v51 & 0xFFFFFFFE)];
                  }
                }
                if ( v106 != v204 )
                {
LABEL_116:
                  if ( v106 )
                  {
                    sub_186B220(v106);
                    v51 = v203;
                  }
                }
                goto LABEL_118;
              }
LABEL_45:
              v52 = src;
LABEL_46:
              v49 += 8;
              *(_QWORD *)&v52[8 * v51] = v55;
              LODWORD(v203) = v51 + 1;
              if ( v50 == v49 )
                goto LABEL_47;
            }
            else
            {
              v51 = v203;
              if ( (unsigned int)v203 >= HIDWORD(v203) )
              {
                v109 = (unsigned int)(2 * HIDWORD(v203));
                v52 = (_BYTE *)sub_186B270(8 * v109);
                v51 = v203;
                v110 = (char *)src;
                if ( (_DWORD)v203 )
                {
                  if ( (unsigned int)(v203 - 1) > 2 && v52 != (char *)src + 8 )
                  {
                    v111 = 0;
                    v112 = 16LL * ((unsigned int)v203 >> 1);
                    do
                    {
                      a2 = (__m128)_mm_loadu_si128((const __m128i *)&v110[v111]);
                      *(__m128 *)&v52[v111] = a2;
                      v111 += 16;
                    }
                    while ( v112 != v111 );
                    goto LABEL_126;
                  }
                  v156 = 0;
                  v157 = 8LL * (unsigned int)v203;
                  do
                  {
                    *(_QWORD *)&v52[v156] = *(_QWORD *)&v110[v156];
                    v156 += 8;
                  }
                  while ( v156 != v157 );
                }
LABEL_128:
                if ( v110 && v110 != v204 )
                {
                  sub_186B220(v110);
                  v51 = v203;
                }
                src = v52;
                HIDWORD(v203) = v109;
                goto LABEL_41;
              }
LABEL_40:
              v52 = src;
LABEL_41:
              v49 += 8;
              *(_QWORD *)&v52[8 * v51] = 0;
              LODWORD(v203) = v51 + 1;
              if ( v50 == v49 )
                goto LABEL_47;
            }
          }
          v54 = *(int *)(*(_QWORD *)(v11 + 64) + 4LL * v53[4]);
          v51 = v203;
          if ( (int)v54 >= 0 )
          {
            v55 = 8 * v54 + 2;
            if ( (unsigned int)v203 >= HIDWORD(v203) )
            {
              v105 = (unsigned int)(2 * HIDWORD(v203));
              v52 = (_BYTE *)sub_186B270(8 * v105);
              v51 = v203;
              v106 = (char *)src;
              if ( (_DWORD)v203 )
              {
                if ( (unsigned int)(v203 - 1) <= 2 || v52 == (char *)src + 8 )
                {
                  v166 = 0;
                  v167 = 8LL * (unsigned int)v203;
                  do
                  {
                    *(_QWORD *)&v52[v166] = *(_QWORD *)&v106[v166];
                    v166 += 8;
                  }
                  while ( v166 != v167 );
                  if ( v106 != v204 )
                    goto LABEL_116;
                  goto LABEL_118;
                }
                v146 = 0;
                v147 = 16LL * ((unsigned int)v203 >> 1);
                do
                {
                  a2 = (__m128)_mm_loadu_si128((const __m128i *)&v106[v146]);
                  *(__m128 *)&v52[v146] = a2;
                  v146 += 16;
                }
                while ( v146 != v147 );
                if ( (v51 & 1) != 0 )
                  *(_QWORD *)&v52[8 * (v51 & 0xFFFFFFFE)] = *(_QWORD *)&v106[8 * (v51 & 0xFFFFFFFE)];
              }
              if ( v106 != v204 )
                goto LABEL_116;
LABEL_118:
              src = v52;
              HIDWORD(v203) = v105;
              goto LABEL_46;
            }
            goto LABEL_45;
          }
          if ( (unsigned int)v203 >= HIDWORD(v203) )
          {
            v109 = (unsigned int)(2 * HIDWORD(v203));
            v52 = (_BYTE *)sub_186B270(8 * v109);
            v51 = v203;
            v110 = (char *)src;
            if ( (_DWORD)v203 )
            {
              if ( (unsigned int)(v203 - 1) <= 2 || v52 == (char *)src + 8 )
              {
                v160 = 0;
                v161 = 8LL * (unsigned int)v203;
                do
                {
                  *(_QWORD *)&v52[v160] = *(_QWORD *)&v110[v160];
                  v160 += 8;
                }
                while ( v160 != v161 );
              }
              else
              {
                v113 = 0;
                v114 = 16LL * ((unsigned int)v203 >> 1);
                do
                {
                  a2 = (__m128)_mm_loadu_si128((const __m128i *)&v110[v113]);
                  *(__m128 *)&v52[v113] = a2;
                  v113 += 16;
                }
                while ( v114 != v113 );
LABEL_126:
                if ( (v51 & 1) != 0 )
                  *(_QWORD *)&v52[8 * (v51 & 0xFFFFFFFE)] = *(_QWORD *)&v110[8 * (v51 & 0xFFFFFFFE)];
              }
            }
            goto LABEL_128;
          }
          goto LABEL_40;
        }
        v121 = v182;
        v170 = v182 + 8LL * v180;
        while ( 2 )
        {
          while ( 2 )
          {
            v129 = *(_QWORD *)(v121 + 32);
            if ( *(_WORD *)(v129 + 4) )
            {
              v135 = v203;
              if ( (unsigned int)v203 >= HIDWORD(v203) )
              {
                v141 = (unsigned int)(2 * HIDWORD(v203));
                v142 = (char *)sub_186B270(8 * v141);
                v135 = v203;
                v143 = (char *)src;
                v136 = v142;
                if ( (_DWORD)v203 )
                {
                  if ( (unsigned int)(v203 - 1) <= 2 || v142 == (char *)src + 8 )
                  {
                    v158 = 0;
                    v159 = 8LL * (unsigned int)v203;
                    do
                    {
                      v136[v158 / 8] = *(_QWORD *)&v143[v158];
                      v158 += 8LL;
                    }
                    while ( v158 != v159 );
                  }
                  else
                  {
                    v144 = 0;
                    v145 = 16LL * ((unsigned int)v203 >> 1);
                    do
                    {
                      a2 = (__m128)_mm_loadu_si128((const __m128i *)&v143[v144]);
                      *(__m128 *)&v136[v144 / 8] = a2;
                      v144 += 16LL;
                    }
                    while ( v145 != v144 );
                    if ( (v135 & 1) != 0 )
                      v136[v135 & 0xFFFFFFFE] = *(_QWORD *)&v143[8 * (v135 & 0xFFFFFFFE)];
                  }
                }
                if ( v143 != v204 && v143 )
                {
                  sub_186B220(v143);
                  v135 = v203;
                }
                src = v136;
                HIDWORD(v203) = v141;
              }
              else
              {
                v136 = src;
              }
              v136[v135] = 0;
              LODWORD(v203) = v135 + 1;
LABEL_154:
              v121 += 8;
              if ( v121 == v170 )
                goto LABEL_161;
              continue;
            }
            break;
          }
          v130 = *(_DWORD *)(v129 + 24);
          v131 = v129 + 32;
          v132 = 0;
          if ( v130 )
          {
            while ( 1 )
            {
              if ( *(_WORD *)(*(_QWORD *)v131 + 4LL) == 1 )
              {
                v122 = *(_DWORD *)(*(_QWORD *)(v11 + 64) + 4LL * *(unsigned int *)(*(_QWORD *)v131 + 16LL));
                if ( v122 >= 0 )
                  break;
              }
              ++v132;
              v131 += 8;
              if ( v130 == v132 )
                goto LABEL_159;
            }
            v123 = *(_QWORD *)(v129 + 16);
            v124 = sub_180C100(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL), 16);
            *(_DWORD *)(v124 + 8) = v132;
            *(_DWORD *)(v124 + 12) = v122;
            v125 = HIDWORD(v203);
            *(_QWORD *)v124 = v123;
            v126 = v124 | 3;
            v127 = v203;
            if ( (unsigned int)v203 >= v125 )
            {
              v137 = 2 * v125;
              v128 = (char *)sub_186B270(8 * v137);
              v127 = v203;
              v138 = (char *)src;
              if ( (_DWORD)v203 )
              {
                if ( (unsigned int)(v203 - 1) <= 2 || v128 == (char *)src + 8 )
                {
                  v154 = 0;
                  v155 = 8LL * (unsigned int)v203;
                  do
                  {
                    *(_QWORD *)&v128[v154] = *(_QWORD *)&v138[v154];
                    v154 += 8;
                  }
                  while ( v155 != v154 );
                }
                else
                {
                  v139 = 0;
                  v140 = 16LL * ((unsigned int)v203 >> 1);
                  do
                  {
                    a2 = (__m128)_mm_loadu_si128((const __m128i *)&v138[v139]);
                    *(__m128 *)&v128[v139] = a2;
                    v139 += 16;
                  }
                  while ( v140 != v139 );
                  if ( (v127 & 1) != 0 )
                    *(_QWORD *)&v128[8 * (v127 & 0xFFFFFFFE)] = *(_QWORD *)&v138[8 * (v127 & 0xFFFFFFFE)];
                }
              }
              if ( v138 != v204 && v138 )
              {
                v173 = v128;
                sub_186B220(v138);
                v127 = v203;
                v128 = v173;
              }
              src = v128;
              HIDWORD(v203) = v137;
            }
            else
            {
              v128 = (char *)src;
            }
            *(_QWORD *)&v128[8 * v127] = v126;
            LODWORD(v203) = v127 + 1;
            if ( v130 != v132 )
              goto LABEL_154;
          }
LABEL_159:
          v133 = v203;
          v134 = src;
          if ( (unsigned int)v203 < HIDWORD(v203) )
          {
LABEL_160:
            v121 += 8;
            v134[v133] = 0;
            LODWORD(v203) = v133 + 1;
            if ( v121 == v170 )
            {
LABEL_161:
              v52 = src;
              goto LABEL_47;
            }
            continue;
          }
          break;
        }
        v149 = (unsigned int)(2 * HIDWORD(v203));
        v150 = (char *)sub_186B270(8 * v149);
        v133 = v203;
        v151 = (char *)src;
        v134 = v150;
        if ( (_DWORD)v203 )
        {
          if ( (unsigned int)(v203 - 1) > 2 && v150 != (char *)src + 8 )
          {
            v152 = 0;
            v153 = 16LL * ((unsigned int)v203 >> 1);
            do
            {
              a2 = (__m128)_mm_loadu_si128((const __m128i *)&v151[v152]);
              *(__m128 *)&v134[v152 / 8] = a2;
              v152 += 16LL;
            }
            while ( v152 != v153 );
            if ( (v133 & 1) != 0 )
              v134[v133 & 0xFFFFFFFE] = *(_QWORD *)&v151[8 * (v133 & 0xFFFFFFFE)];
            goto LABEL_206;
          }
          v162 = 0;
          v163 = 8LL * (unsigned int)v203;
          do
          {
            v134[v162 / 8] = *(_QWORD *)&v151[v162];
            v162 += 8LL;
          }
          while ( v163 != v162 );
          if ( !v151 )
          {
LABEL_209:
            src = v134;
            HIDWORD(v203) = v149;
            goto LABEL_160;
          }
        }
        else
        {
LABEL_206:
          if ( !v151 )
            goto LABEL_209;
        }
        if ( v151 != v204 )
        {
          sub_186B220(v151);
          v133 = v203;
        }
        goto LABEL_209;
      }
    }
    if ( v33 )
    {
      v89 = (_QWORD *)sub_186B270(0x18u);
      v34 = v89 + 1;
      v37 = 0;
      *(_QWORD *)(v11 + 40) = v89 + 1;
      *v89 = 2;
LABEL_26:
      while ( 1 )
      {
        v42 = *((_DWORD *)v34 - 2);
        if ( v42 >= v33 )
          break;
        v38 = (3 * v42 + 1) >> 1;
        v39 = 8 * v38 + 8;
        v40 = v38;
        if ( 8 * v42 + 8 >= (unsigned int)v39 || v42 >= v38 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_151CF2(v201);
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, v201);
          sub_233E40((__int64)v201);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v34 - 1, v39);
        v34 = v41 + 2;
        *v41 = v40;
        *(_QWORD *)(v11 + 40) = v41 + 2;
      }
      v43 = 8 * v37;
      *((_DWORD *)v34 - 1) = v33;
      v44 = 8LL * v33;
      if ( v43 != v44 )
      {
        *(_QWORD *)v177 = v34;
        memset(&v34[(unsigned __int64)v43 / 8], 0, v44 - v43);
        v34 = *(_QWORD **)v177;
      }
    }
LABEL_29:
    v45 = *(_QWORD **)(v11 + 48);
    v34[v35] = v36;
    if ( v45 )
      goto LABEL_30;
    goto LABEL_98;
  }
  return result;
}

