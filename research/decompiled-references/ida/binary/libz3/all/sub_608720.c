__int64 __fastcall sub_608720(__int64 *a1, __int64 a2, unsigned int a3, __int64 *a4, int a5, int a6)
{
  __int64 v7; // rbp
  __int64 *v8; // rbx
  __int64 *v9; // r13
  __int64 *v10; // rdx
  _DWORD *v11; // rax
  __int64 v13; // rax
  int v14; // edi
  __int64 *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 *v18; // rsi
  __int64 v19; // rdx
  __int64 *v20; // r8
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // r14
  _QWORD *v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rdi
  bool v28; // zf
  __int64 v29; // r13
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  _QWORD *v34; // rcx
  __int64 v35; // r15
  int v36; // r9d
  _QWORD *v37; // rbx
  unsigned int v38; // r8d
  size_t v39; // r15
  _QWORD *v40; // r12
  int v41; // ecx
  __int64 v42; // r8
  _QWORD *v43; // rdi
  _QWORD *v44; // rax
  _QWORD *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // ebx
  unsigned int v49; // ecx
  unsigned int *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  int v53; // ecx
  char *v54; // r14
  char *v55; // r9
  __int64 v56; // rax
  _QWORD *v57; // rbp
  char *v58; // rbx
  __int64 v59; // r9
  __int64 v60; // rax
  _QWORD *v61; // rdx
  _QWORD *v62; // rax
  _QWORD *v63; // r14
  _QWORD *v64; // r15
  __int64 v65; // rsi
  __int64 v66; // rdi
  _QWORD *v67; // r14
  _QWORD *v68; // r15
  __int64 v69; // rsi
  __int64 v70; // rdi
  unsigned int v71; // r9d
  __int64 v72; // rcx
  int v73; // eax
  __int64 *v74; // rcx
  __int64 v75; // r14
  _DWORD *v76; // rax
  _QWORD *v77; // rdx
  unsigned int v78; // eax
  __int64 v79; // rcx
  int v80; // eax
  _QWORD *v81; // rcx
  __int64 v82; // r15
  __int64 v83; // rax
  unsigned int v84; // r14d
  __int64 v85; // rax
  __int64 v86; // r15
  _QWORD *v87; // rdx
  unsigned int v88; // eax
  __int64 v89; // rcx
  int v90; // eax
  __int64 *v91; // rcx
  _QWORD *v92; // rdx
  unsigned int v93; // eax
  unsigned int v94; // ecx
  size_t v95; // rsi
  __int64 v96; // rax
  unsigned int v97; // ecx
  size_t v98; // rsi
  __int64 v99; // rax
  unsigned int v100; // r15d
  unsigned int v101; // ecx
  unsigned int *v102; // rax
  __int64 v103; // rcx
  _DWORD *v104; // rax
  __int64 v105; // rax
  int v106; // edi
  __int64 *v107; // rcx
  unsigned int v108; // edx
  __int64 *v109; // rsi
  __int64 v110; // rdx
  __int64 *v111; // r8
  __int64 *i; // rax
  __int64 v113; // rdx
  __int64 *v114; // rbx
  __int64 *v115; // r13
  __int64 *v116; // r14
  __int64 v117; // r15
  _QWORD *v118; // rdx
  int v119; // eax
  __int64 *v120; // rdx
  unsigned int v121; // eax
  __int64 v122; // rax
  __int64 v123; // r14
  unsigned int v124; // r15d
  __int64 v125; // r14
  _QWORD *v126; // rax
  unsigned int v127; // edx
  _QWORD *v128; // rax
  unsigned int v129; // edx
  unsigned int v130; // edi
  unsigned int v131; // r13d
  int v132; // edi
  _QWORD *v133; // rcx
  __int64 v134; // rdx
  _QWORD *v135; // r9
  __int64 v136; // rax
  _QWORD *v137; // r8
  _QWORD *v138; // rax
  _QWORD *v139; // rsi
  __int64 v140; // rdx
  unsigned int v141; // eax
  __int64 *v142; // r15
  __int64 v143; // rcx
  int v144; // eax
  _QWORD *v145; // rcx
  __int64 v146; // rdi
  unsigned int v147; // r14d
  __int64 v148; // rax
  __int64 v149; // rcx
  _QWORD *v150; // rdx
  unsigned int v151; // eax
  __int64 v152; // rsi
  int v153; // eax
  __int64 *v154; // rsi
  __int64 v155; // r14
  _QWORD *v156; // rdx
  unsigned int v157; // eax
  unsigned int v158; // ecx
  size_t v159; // rsi
  __int64 v160; // rax
  unsigned int v161; // r8d
  size_t v162; // rsi
  _DWORD *v163; // rax
  __int64 v164; // rsi
  _QWORD *v165; // rdx
  _QWORD *v166; // rdx
  _QWORD *v167; // rdx
  _QWORD *v168; // rdx
  unsigned int v169; // edx
  unsigned int v170; // ecx
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rcx
  int v174; // edx
  __int64 v175; // rax
  __int64 v176; // rbx
  __int64 v177; // rsi
  __int64 v178; // rdi
  __int64 v179; // rsi
  __int64 v180; // rdi
  __int64 v181; // rax
  __int64 v182; // rax
  _QWORD *v183; // rsi
  __int64 v184; // r15
  _QWORD *v185; // rax
  char v186; // al
  unsigned int v187; // r14d
  __int64 v188; // rdx
  unsigned int v189; // r9d
  _QWORD *v190; // rcx
  int v191; // eax
  __int64 v192; // rdx
  __int64 v193; // r14
  _QWORD *v194; // rdx
  unsigned int v195; // eax
  _QWORD *v196; // rdx
  _QWORD *v197; // rdx
  unsigned int v198; // r14d
  unsigned int v199; // ecx
  unsigned int *v200; // rax
  __int64 v201; // rax
  unsigned int v202; // r15d
  unsigned int v203; // ecx
  unsigned int *v204; // rdx
  __m128i *v205; // rax
  __m128i *v206; // r15
  __m128i *v207; // r9
  __m128i *v208; // rdi
  const __m128i *v209; // r8
  __int64 v210; // rax
  __m128i *v211; // rdx
  __m128i *v212; // rax
  unsigned int v213; // r15d
  unsigned int v214; // ecx
  unsigned int *v215; // rdx
  _QWORD *v216; // rax
  _QWORD *v217; // rax
  _QWORD *v218; // rdx
  char **v219; // r12
  char **v220; // rbp
  char **v221; // rbp
  char **exception; // rbx
  char **v223; // r12
  char **v224; // rbp
  char **v225; // rbp
  char **v226; // rbp
  char **v227; // rbp
  char **v228; // r12
  int v229; // [rsp+0h] [rbp-B8h]
  int v231; // [rsp+8h] [rbp-B0h]
  unsigned int v232; // [rsp+8h] [rbp-B0h]
  __int64 *v233; // [rsp+8h] [rbp-B0h]
  int v235; // [rsp+10h] [rbp-A8h]
  __int64 *v236; // [rsp+10h] [rbp-A8h]
  __int64 v237; // [rsp+18h] [rbp-A0h]
  unsigned int v238; // [rsp+18h] [rbp-A0h]
  unsigned int v239; // [rsp+18h] [rbp-A0h]
  unsigned int v240; // [rsp+18h] [rbp-A0h]
  unsigned int v241; // [rsp+20h] [rbp-98h]
  unsigned int v242; // [rsp+20h] [rbp-98h]
  __int64 v243; // [rsp+20h] [rbp-98h]
  unsigned int v244; // [rsp+20h] [rbp-98h]
  __int64 v245; // [rsp+20h] [rbp-98h]
  const __m128i *v246; // [rsp+28h] [rbp-90h]
  int v247; // [rsp+30h] [rbp-88h]
  unsigned int v248; // [rsp+34h] [rbp-84h]
  __int64 v249; // [rsp+38h] [rbp-80h]
  int v250; // [rsp+40h] [rbp-78h]
  void *v251; // [rsp+48h] [rbp-70h]
  __int64 v252[11]; // [rsp+60h] [rbp-58h] BYREF

  v7 = a2;
  if ( !a3 )
  {
    v13 = a1[15];
    v14 = *(_DWORD *)(a2 + 12);
    v15 = *(__int64 **)(v13 + 152);
    v16 = *(unsigned int *)(v13 + 160);
    v17 = v16 - 1;
    v16 *= 8;
    v18 = (__int64 *)((char *)v15 + v16);
    v19 = 8LL * (v14 & v17);
    v20 = &v15[(unsigned __int64)v19 / 8];
    if ( v19 != v16 )
    {
      v21 = &v15[(unsigned __int64)v19 / 8];
      do
      {
        while ( 1 )
        {
          v22 = *v21;
          if ( (unsigned __int64)*v21 > 1 )
            break;
          if ( !v22 )
            return 5;
          if ( v18 == ++v21 )
            goto LABEL_15;
        }
        if ( *(_DWORD *)(v22 + 12) == v14 && v7 == v22 )
        {
LABEL_32:
          v29 = a1[16];
          ++*(_DWORD *)(v7 + 8);
          v30 = *(_QWORD **)(v29 + 232);
          if ( v30 )
          {
            v31 = *((_DWORD *)v30 - 1);
            if ( v31 == *((_DWORD *)v30 - 2) )
            {
              v48 = (3 * v31 + 1) >> 1;
              v49 = 8 * v48 + 8;
              if ( 8 * v31 + 8 >= v49 || v31 >= v48 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v252, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v252);
                sub_233E40((__int64)v252);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v50 = (unsigned int *)sub_186B300(v30 - 1, v49);
              v51 = v50[1];
              v30 = v50 + 2;
              *(_QWORD *)(v29 + 232) = v50 + 2;
              *v50 = v48;
              LODWORD(v50) = v51;
              v34 = &v30[v51];
              v33 = (_DWORD)v50 + 1;
            }
            else
            {
              v32 = v31;
              v33 = v31 + 1;
              v34 = &v30[v32];
            }
          }
          else
          {
            v168 = (_QWORD *)sub_186B270(0x18u);
            *v168 = 2;
            v33 = 1;
            v30 = v168 + 1;
            *(_QWORD *)(v29 + 232) = v30;
            v34 = v30;
          }
          *v34 = v7;
          *((_DWORD *)v30 - 1) = v33;
          v35 = *(unsigned int *)(v29 + 160);
          v36 = *(_DWORD *)(v29 + 168);
          if ( 3 * (int)v35 < (unsigned int)(4 * (v36 + *(_DWORD *)(v29 + 164))) )
          {
            v231 = 2 * v35;
            v39 = 8LL * (unsigned int)(2 * v35);
            v52 = (_QWORD *)sub_186B270(v39);
            v53 = v231;
            v37 = v52;
            if ( v231 )
            {
              memset(v52, 0, v39);
              v53 = v231;
            }
            v54 = *(char **)(v29 + 152);
            v38 = v53 - 1;
            v40 = &v37[v39 / 8];
            v55 = &v54[8 * *(unsigned int *)(v29 + 160)];
            if ( v54 != v55 )
            {
              v56 = v7;
              v57 = v37;
              v58 = &v54[8 * *(unsigned int *)(v29 + 160)];
              v59 = v56;
              do
              {
                if ( *(_QWORD *)v54 > 1u )
                {
                  v60 = 8LL * (*(_DWORD *)(*(_QWORD *)v54 + 12LL) & v38);
                  v61 = &v57[(unsigned __int64)v60 / 8];
                  if ( v39 == v60 )
                  {
LABEL_67:
                    if ( v57 == v61 )
                    {
LABEL_79:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v62 = v57;
                    while ( *v62 )
                    {
                      if ( v61 == ++v62 )
                        goto LABEL_79;
                    }
                  }
                  else
                  {
                    v62 = &v57[(unsigned __int64)v60 / 8];
                    while ( *v62 )
                    {
                      if ( v40 == ++v62 )
                        goto LABEL_67;
                    }
                  }
                  *v62 = *(_QWORD *)v54;
                }
                v54 += 8;
              }
              while ( v58 != v54 );
              v37 = v57;
              v7 = v59;
              v55 = *(char **)(v29 + 152);
            }
            if ( v55 )
            {
              v235 = v53;
              v232 = v53 - 1;
              sub_186B220(v55);
              v53 = v235;
              v38 = v232;
            }
            *(_QWORD *)(v29 + 152) = v37;
            v36 = 0;
            *(_DWORD *)(v29 + 160) = v53;
            *(_DWORD *)(v29 + 168) = 0;
          }
          else
          {
            v37 = *(_QWORD **)(v29 + 152);
            v38 = v35 - 1;
            v39 = 8 * v35;
            v40 = &v37[v39 / 8];
          }
          v41 = *(_DWORD *)(v7 + 12);
          v42 = v41 & v38;
          v43 = &v37[v42];
          if ( 8 * v42 != v39 )
          {
            v44 = &v37[v42];
            v45 = nullptr;
            while ( 1 )
            {
              v46 = *v44;
              if ( *v44 > 1u )
              {
                if ( *(_DWORD *)(v46 + 12) == v41 && v7 == v46 )
                {
                  *v44 = v7;
                  return 5;
                }
              }
              else
              {
                if ( !v46 )
                {
                  if ( v45 )
                    goto LABEL_77;
                  v45 = v44;
                  goto LABEL_78;
                }
                v45 = v44;
              }
              if ( ++v44 == v40 )
                goto LABEL_48;
            }
          }
          v45 = nullptr;
          while ( 1 )
          {
LABEL_48:
            if ( v43 == v37 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v47 = *v37;
            if ( *v37 > 1u )
            {
              if ( *(_DWORD *)(v47 + 12) == v41 && v7 == v47 )
              {
                *v37 = v7;
                return 5;
              }
            }
            else
            {
              if ( !v47 )
              {
                if ( v45 )
LABEL_77:
                  *(_DWORD *)(v29 + 168) = v36 - 1;
                else
                  v45 = v37;
LABEL_78:
                *v45 = v7;
                ++*(_DWORD *)(v29 + 164);
                return 5;
              }
              v45 = v37;
            }
            ++v37;
          }
        }
        ++v21;
      }
      while ( v18 != v21 );
    }
LABEL_15:
    if ( v15 == v20 )
      return 5;
    while ( 1 )
    {
      v23 = *v15;
      if ( (unsigned __int64)*v15 > 1 )
      {
        if ( *(_DWORD *)(v23 + 12) == v14 && v7 == v23 )
          goto LABEL_32;
      }
      else if ( !v23 )
      {
        return 5;
      }
      if ( v20 == ++v15 )
        return 5;
    }
  }
  v8 = a4;
  v9 = &a4[a3];
  v10 = a4;
  do
  {
    if ( *(_WORD *)(*v10 + 4) )
      return 5;
    v11 = *(_DWORD **)(*(_QWORD *)(*v10 + 16) + 24LL);
    if ( !v11 || *((_DWORD *)a1 + 4) != *v11 || v11[1] != 64 )
      return 5;
    ++v10;
  }
  while ( v10 != v9 );
  v24 = (_QWORD *)a1[6];
  if ( v24 )
  {
    v25 = &v24[*((unsigned int *)v24 - 1)];
    if ( v24 >= v25 )
      goto LABEL_83;
    do
    {
      v26 = *v24;
      if ( *v24 )
      {
        v27 = a1[5];
        v28 = (*(_DWORD *)(v26 + 8))-- == 1;
        if ( v28 )
          sub_15D7BC0(v27, v26);
      }
      ++v24;
    }
    while ( v24 < v25 );
    v24 = (_QWORD *)a1[6];
    if ( v24 )
LABEL_83:
      *((_DWORD *)v24 - 1) = 0;
  }
  v63 = (_QWORD *)a1[10];
  if ( v63 )
  {
    v64 = &v63[*((unsigned int *)v63 - 1)];
    if ( v63 >= v64 )
      goto LABEL_92;
    do
    {
      v65 = *v63;
      if ( *v63 )
      {
        v66 = a1[9];
        v28 = (*(_DWORD *)(v65 + 8))-- == 1;
        if ( v28 )
          sub_15D7BC0(v66, v65);
      }
      ++v63;
    }
    while ( v63 < v64 );
    v63 = (_QWORD *)a1[10];
    if ( v63 )
LABEL_92:
      *((_DWORD *)v63 - 1) = 0;
  }
  v67 = (_QWORD *)a1[8];
  if ( v67 )
  {
    v68 = &v67[*((unsigned int *)v67 - 1)];
    if ( v67 >= v68 )
      goto LABEL_101;
    do
    {
      v69 = *v67;
      if ( *v67 )
      {
        v70 = a1[7];
        v28 = (*(_DWORD *)(v69 + 8))-- == 1;
        if ( v28 )
          sub_15D7BC0(v70, v69);
      }
      ++v67;
    }
    while ( v67 < v68 );
    v67 = (_QWORD *)a1[8];
    if ( v67 )
LABEL_101:
      *((_DWORD *)v67 - 1) = 0;
  }
  v71 = 0;
  v249 = a1[1];
  do
  {
    v75 = *v8;
    if ( *(_WORD *)(*v8 + 4)
      || (v76 = *(_DWORD **)(*(_QWORD *)(v75 + 16) + 24LL)) == nullptr
      || *((_DWORD *)a1 + 4) != *v76
      || v76[1] != 64 )
    {
      v77 = (_QWORD *)a1[6];
      ++*(_DWORD *)(v75 + 8);
      if ( v77 )
      {
        v78 = *((_DWORD *)v77 - 1);
        if ( v78 == *((_DWORD *)v77 - 2) )
        {
          v100 = (3 * v78 + 1) >> 1;
          v101 = 8 * v100 + 8;
          if ( 8 * v78 + 8 >= v101 || v78 >= v100 )
          {
            v227 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v252, "Overflow encountered when expanding vector");
            *v227 = (char *)off_1C63128;
            sub_2333C0(v227 + 1, v252);
            sub_233E40((__int64)v252);
            __cxa_throw(v227, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v238 = v71;
          v102 = (unsigned int *)sub_186B300(v77 - 1, v101);
          v103 = v102[1];
          v77 = v102 + 2;
          v71 = v238;
          *v102 = v100;
          a1[6] = (__int64)(v102 + 2);
          LODWORD(v102) = v103;
          v81 = &v77[v103];
          v80 = (_DWORD)v102 + 1;
        }
        else
        {
          v79 = v78;
          v80 = v78 + 1;
          v81 = &v77[v79];
        }
      }
      else
      {
        v240 = v71;
        v165 = (_QWORD *)sub_186B270(0x18u);
        *v165 = 2;
        v71 = v240;
        v80 = 1;
        v77 = v165 + 1;
        a1[6] = (__int64)v77;
        v81 = v77;
      }
      *v81 = v75;
      v82 = a1[1];
      *((_DWORD *)v77 - 1) = v80;
      LODWORD(v237) = v71;
      v83 = sub_15D1F10(v75);
      v84 = v237 + 1;
      v85 = sub_15DB5C0(v82, (unsigned int)v237, v83);
      v86 = v85;
      if ( v85 )
        ++*(_DWORD *)(v85 + 8);
      v87 = (_QWORD *)a1[8];
      if ( v87 )
      {
        v88 = *((_DWORD *)v87 - 1);
        if ( v88 == *((_DWORD *)v87 - 2) )
        {
          v97 = (3 * v88 + 1) >> 1;
          v98 = 8 * v97 + 8;
          if ( 8 * v88 + 8 >= (unsigned int)v98 || v88 >= v97 )
          {
            v224 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v252, "Overflow encountered when expanding vector");
            *v224 = (char *)off_1C63128;
            sub_2333C0(v224 + 1, v252);
            sub_233E40((__int64)v252);
            __cxa_throw(v224, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v237) = (3 * v88 + 1) >> 1;
          v99 = sub_186B300(v87 - 1, v98);
          v87 = (_QWORD *)(v99 + 8);
          a1[8] = v99 + 8;
          *(_DWORD *)v99 = v237;
          LODWORD(v99) = *(_DWORD *)(v99 + 4);
          v91 = &v87[(unsigned int)v99];
          v90 = v99 + 1;
        }
        else
        {
          v89 = v88;
          v90 = v88 + 1;
          v91 = &v87[v89];
        }
      }
      else
      {
        v166 = (_QWORD *)sub_186B270(0x18u);
        *v166 = 2;
        v90 = 1;
        v87 = v166 + 1;
        a1[8] = (__int64)v87;
        v91 = v87;
      }
      *v91 = v86;
      *((_DWORD *)v87 - 1) = v90;
      if ( v86 )
        ++*(_DWORD *)(v86 + 8);
      v92 = (_QWORD *)a1[10];
      if ( v92 )
      {
        v93 = *((_DWORD *)v92 - 1);
        if ( v93 == *((_DWORD *)v92 - 2) )
        {
          v94 = (3 * v93 + 1) >> 1;
          v95 = 8 * v94 + 8;
          if ( 8 * v93 + 8 >= (unsigned int)v95 || v93 >= v94 )
          {
            v225 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v252, "Overflow encountered when expanding vector");
            *v225 = (char *)off_1C63128;
            sub_2333C0(v225 + 1, v252);
            sub_233E40((__int64)v252);
            __cxa_throw(v225, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v237) = (3 * v93 + 1) >> 1;
          v96 = sub_186B300(v92 - 1, v95);
          v92 = (_QWORD *)(v96 + 8);
          a1[10] = v96 + 8;
          *(_DWORD *)v96 = v237;
          LODWORD(v96) = *(_DWORD *)(v96 + 4);
          v74 = &v92[(unsigned int)v96];
          v73 = v96 + 1;
        }
        else
        {
          v72 = v93;
          v73 = v93 + 1;
          v74 = &v92[v72];
        }
      }
      else
      {
        v167 = (_QWORD *)sub_186B270(0x18u);
        *v167 = 2;
        v73 = 1;
        v92 = v167 + 1;
        a1[10] = (__int64)v92;
        v74 = v92;
      }
      *v74 = v86;
      v71 = v84;
      *((_DWORD *)v92 - 1) = v73;
      goto LABEL_105;
    }
    v141 = *(_DWORD *)(v75 + 24);
    v142 = (__int64 *)(v75 + 32);
    v248 = v141;
    v239 = v141 + v71;
    if ( v141 )
    {
      while ( 1 )
      {
        v155 = *v142;
        if ( *v142 )
          ++*(_DWORD *)(v155 + 8);
        v156 = (_QWORD *)a1[6];
        if ( v156 )
        {
          v157 = *((_DWORD *)v156 - 1);
          if ( v157 == *((_DWORD *)v156 - 2) )
          {
            v158 = (3 * v157 + 1) >> 1;
            v159 = 8 * v158 + 8;
            if ( 8 * v157 + 8 >= (unsigned int)v159 || v157 >= v158 )
            {
              v220 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v252, "Overflow encountered when expanding vector");
              *v220 = (char *)off_1C63128;
              sub_2333C0(v220 + 1, v252);
              sub_233E40((__int64)v252);
              __cxa_throw(v220, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v246) = (3 * v157 + 1) >> 1;
            v242 = v71;
            v160 = sub_186B300(v156 - 1, v159);
            v156 = (_QWORD *)(v160 + 8);
            v71 = v242;
            a1[6] = v160 + 8;
            *(_DWORD *)v160 = (_DWORD)v246;
            LODWORD(v160) = *(_DWORD *)(v160 + 4);
            v145 = &v156[(unsigned int)v160];
            v144 = v160 + 1;
          }
          else
          {
            v143 = v157;
            v144 = v157 + 1;
            v145 = &v156[v143];
          }
        }
        else
        {
          v244 = v71;
          v196 = (_QWORD *)sub_186B270(0x18u);
          *v196 = 2;
          v71 = v244;
          v144 = 1;
          v156 = v196 + 1;
          a1[6] = (__int64)v156;
          v145 = v156;
        }
        v146 = a1[1];
        *v145 = v155;
        v147 = v71 + 1;
        *((_DWORD *)v156 - 1) = v144;
        v148 = sub_15DB5C0(v146, v71, *(_QWORD *)(v146 + 840));
        v149 = v148;
        if ( v148 )
          ++*(_DWORD *)(v148 + 8);
        v150 = (_QWORD *)a1[10];
        if ( v150 )
        {
          v151 = *((_DWORD *)v150 - 1);
          if ( v151 == *((_DWORD *)v150 - 2) )
          {
            v161 = (3 * v151 + 1) >> 1;
            v162 = 8 * v161 + 8;
            if ( 8 * v151 + 8 >= (unsigned int)v162 || v151 >= v161 )
            {
              v221 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v252, "Overflow encountered when expanding vector");
              *v221 = (char *)off_1C63128;
              sub_2333C0(v221 + 1, v252);
              sub_233E40((__int64)v252);
              __cxa_throw(v221, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v246) = (3 * v151 + 1) >> 1;
            v243 = v149;
            v163 = (_DWORD *)sub_186B300(v150 - 1, v162);
            v164 = (unsigned int)v163[1];
            v150 = v163 + 2;
            a1[10] = (__int64)(v163 + 2);
            v149 = v243;
            *v163 = (_DWORD)v246;
            LODWORD(v163) = v164;
            v154 = &v150[v164];
            v153 = (_DWORD)v163 + 1;
          }
          else
          {
            v152 = v151;
            v153 = v151 + 1;
            v154 = &v150[v152];
          }
        }
        else
        {
          v245 = v148;
          v197 = (_QWORD *)sub_186B270(0x18u);
          *v197 = 2;
          v149 = v245;
          v153 = 1;
          v150 = v197 + 1;
          a1[10] = (__int64)v150;
          v154 = v150;
        }
        *v154 = v149;
        ++v142;
        *((_DWORD *)v150 - 1) = v153;
        if ( v147 == v239 )
          break;
        v71 = v147;
      }
      v71 = v239;
    }
    else
    {
      v150 = (_QWORD *)a1[10];
      if ( !v150 )
      {
        v181 = 0;
        goto LABEL_216;
      }
    }
    v181 = *((unsigned int *)v150 - 1);
LABEL_216:
    v241 = v71;
    v237 = (__int64)&v150[v181 - v248];
    v182 = sub_15E1AF0(a1[3]);
    v183 = (_QWORD *)a1[3];
    v71 = v241;
    v184 = v182;
    if ( v183[114] )
    {
      if ( v248 )
      {
        v185 = (_QWORD *)v237;
        while ( *v185 == v183[107] || *v185 == v183[108] )
        {
          if ( ++v185 == (_QWORD *)(v237 + 8LL * v248) )
            goto LABEL_222;
        }
      }
      else
      {
LABEL_222:
        v186 = sub_15D4710(a1[4], v184);
        v71 = v241;
        if ( v186 )
        {
          v187 = v248 & 3;
          if ( (v248 & 3) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            v189 = v241;
            v193 = 0;
            do
            {
              v241 = v189;
              std::ostream::operator<<();
              ++v193;
              v189 = v241;
            }
            while ( (unsigned int)v193 < v248 );
          }
          else
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            v188 = a1[3];
            v189 = v241;
            *(_DWORD *)(*(_QWORD *)(v188 + 912) + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v188 + 912) + 16LL) - 24LL) + 40LL) = *(_DWORD *)(*(_QWORD *)(v188 + 912) + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v188 + 912) + 16LL) - 24LL) + 40LL) & 0xFFFFFFB5 | 8;
LABEL_225:
            v190 = (_QWORD *)(v237 + 8LL * v187);
            v191 = 0;
            while ( v187 < v248 )
            {
              v191 *= 2;
              ++v187;
              if ( *v190 == *(_QWORD *)(v188 + 856) )
                v191 |= 1u;
              ++v190;
              if ( v187 == 4 )
              {
                v192 = *(_QWORD *)(v188 + 912);
                LOBYTE(v252[0]) = v191;
                v241 = v189;
                if ( *(_QWORD *)(v192 + *(_QWORD *)(*(_QWORD *)(v192 + 16) - 24LL) + 32) )
                  std::__ostream_insert<char,std::char_traits<char>>();
                else
                  std::ostream::put((std::ostream *)(v192 + 16), v191);
                v189 = v241;
                v188 = a1[3];
                goto LABEL_225;
              }
            }
            *(_DWORD *)(*(_QWORD *)(v188 + 912) + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v188 + 912) + 16LL) - 24LL) + 40LL) = *(_DWORD *)(*(_QWORD *)(v188 + 912) + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v188 + 912) + 16LL) - 24LL) + 40LL) & 0xFFFFFFB5 | 2;
          }
          LODWORD(v237) = v189;
          std::__ostream_insert<char,std::char_traits<char>>();
          v71 = v237;
        }
      }
    }
    if ( v184 )
      ++*(_DWORD *)(v184 + 8);
    v194 = (_QWORD *)a1[8];
    if ( v194 )
    {
      v195 = *((_DWORD *)v194 - 1);
      if ( v195 == *((_DWORD *)v194 - 2) )
      {
        v198 = (3 * v195 + 1) >> 1;
        v199 = 8 * v198 + 8;
        if ( 8 * v195 + 8 >= v199 || v195 >= v198 )
        {
          v226 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v252, "Overflow encountered when expanding vector");
          *v226 = (char *)off_1C63128;
          sub_2333C0(v226 + 1, v252);
          sub_233E40((__int64)v252);
          __cxa_throw(v226, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v237) = v71;
        v200 = (unsigned int *)sub_186B300(v194 - 1, v199);
        v194 = v200 + 2;
        *v200 = v198;
        v71 = v237;
        a1[8] = (__int64)(v200 + 2);
        v195 = v200[1];
      }
    }
    else
    {
      LODWORD(v237) = v71;
      v218 = (_QWORD *)sub_186B270(0x18u);
      *v218 = 2;
      v71 = v237;
      v195 = 0;
      v194 = v218 + 1;
      a1[8] = (__int64)v194;
    }
    v194[v195] = v184;
    *((_DWORD *)v194 - 1) = v195 + 1;
LABEL_105:
    ++v8;
  }
  while ( v8 != v9 );
  v104 = *(_DWORD **)(v7 + 24);
  if ( v104 && *v104 != -1 )
    return 5;
  v105 = *((unsigned int *)a1 + 36);
  v106 = *(_DWORD *)(v7 + 12);
  v107 = (__int64 *)a1[17];
  v108 = v105 - 1;
  v105 *= 16;
  v109 = (__int64 *)((char *)v107 + v105);
  v110 = 16LL * (v106 & v108);
  v111 = &v107[(unsigned __int64)v110 / 8];
  if ( v110 != v105 )
  {
    for ( i = &v107[(unsigned __int64)v110 / 8]; v109 != i; i += 2 )
    {
      v113 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v113 + 12) == v106 && v7 == v113 )
        {
          v107 = i;
LABEL_202:
          v125 = v107[1];
          goto LABEL_203;
        }
      }
      else if ( !v113 )
      {
        goto LABEL_139;
      }
    }
  }
  for ( ; v111 != v107; v107 += 2 )
  {
    v172 = *v107;
    if ( (unsigned __int64)*v107 > 1 )
    {
      if ( *(_DWORD *)(v172 + 12) == v106 && v7 == v172 )
        goto LABEL_202;
    }
    else if ( !v172 )
    {
      break;
    }
  }
LABEL_139:
  v114 = (__int64 *)a1[6];
  if ( v114 )
  {
    v115 = &v114[*((unsigned int *)v114 - 1)];
    if ( v115 == v114 )
    {
      v122 = a1[6];
      v123 = *a1;
      v114 = nullptr;
      goto LABEL_146;
    }
    v116 = (__int64 *)a1[6];
    v117 = sub_15D1F10(*v114);
    v118 = (_QWORD *)sub_186B270(0x18u);
    *v118 = 2;
    v119 = 1;
    v120 = v118 + 1;
    v114 = v120;
    while ( 1 )
    {
      ++v116;
      *v120 = v117;
      *((_DWORD *)v114 - 1) = v119;
      if ( v115 == v116 )
        break;
      while ( 1 )
      {
        v117 = sub_15D1F10(*v116);
        v121 = *((_DWORD *)v114 - 1);
        if ( v121 == *((_DWORD *)v114 - 2) )
          break;
        ++v116;
        v114[v121] = v117;
        *((_DWORD *)v114 - 1) = v121 + 1;
        if ( v115 == v116 )
          goto LABEL_145;
      }
      v169 = (3 * v121 + 1) >> 1;
      v170 = 8 * v169 + 8;
      if ( 8 * v121 + 8 >= v170 || v121 >= v169 )
      {
        v223 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v252, "Overflow encountered when expanding vector");
        *v223 = (char *)off_1C63128;
        sub_2333C0(v223 + 1, v252);
        sub_233E40((__int64)v252);
        __cxa_throw(v223, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v237) = (3 * v121 + 1) >> 1;
      v171 = sub_186B300(v114 - 1, v170);
      v114 = (__int64 *)(v171 + 8);
      *(_DWORD *)v171 = v237;
      LODWORD(v171) = *(_DWORD *)(v171 + 4);
      v120 = &v114[(unsigned int)v171];
      v119 = v171 + 1;
    }
LABEL_145:
    v122 = a1[6];
    v123 = *a1;
    if ( v122 )
LABEL_146:
      v124 = *(_DWORD *)(v122 - 4);
    else
      v124 = 0;
  }
  else
  {
    v123 = *a1;
    v124 = 0;
  }
  sub_180C5A0(v252, "bv");
  v125 = sub_651680(v123, v7 + 16, v252, v124, v114, v7);
  v126 = (_QWORD *)a1[12];
  ++*(_DWORD *)(v7 + 8);
  if ( v126 )
  {
    v127 = *((_DWORD *)v126 - 1);
    if ( v127 == *((_DWORD *)v126 - 2) )
    {
      v202 = (3 * v127 + 1) >> 1;
      v203 = 8 * v202 + 8;
      if ( 8 * v127 + 8 >= v203 || v127 >= v202 )
      {
        v228 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v252, "Overflow encountered when expanding vector");
        *v228 = (char *)off_1C63128;
        sub_2333C0(v228 + 1, v252);
        sub_233E40((__int64)v252);
        __cxa_throw(v228, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v204 = (unsigned int *)sub_186B300(v126 - 1, v203);
      v126 = v204 + 2;
      *v204 = v202;
      v127 = v204[1];
      a1[12] = (__int64)v126;
    }
  }
  else
  {
    v217 = (_QWORD *)sub_186B270(0x18u);
    *v217 = 2;
    v126 = v217 + 1;
    v127 = 0;
    a1[12] = (__int64)v126;
  }
  v126[v127] = v7;
  *((_DWORD *)v126 - 1) = v127 + 1;
  if ( v125 )
    ++*(_DWORD *)(v125 + 8);
  v128 = (_QWORD *)a1[14];
  if ( v128 )
  {
    v129 = *((_DWORD *)v128 - 1);
    if ( v129 == *((_DWORD *)v128 - 2) )
    {
      v213 = (3 * v129 + 1) >> 1;
      v214 = 8 * v213 + 8;
      if ( 8 * v129 + 8 >= v214 || v129 >= v213 )
      {
        v219 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v252, "Overflow encountered when expanding vector");
        *v219 = (char *)off_1C63128;
        sub_2333C0(v219 + 1, v252);
        sub_233E40((__int64)v252);
        __cxa_throw(v219, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v215 = (unsigned int *)sub_186B300(v128 - 1, v214);
      v128 = v215 + 2;
      *v215 = v213;
      v129 = v215[1];
      a1[14] = (__int64)v128;
    }
  }
  else
  {
    v216 = (_QWORD *)sub_186B270(0x18u);
    *v216 = 2;
    v128 = v216 + 1;
    v129 = 0;
    a1[14] = (__int64)v128;
  }
  v128[v129] = v125;
  *((_DWORD *)v128 - 1) = v129 + 1;
  v130 = *((_DWORD *)a1 + 36);
  v131 = 2 * v130;
  v241 = v130;
  if ( 3 * v130 < 4 * (*((_DWORD *)a1 + 37) + *((_DWORD *)a1 + 38)) )
  {
    v241 = 2 * v130;
    v237 = 16LL * v131;
    v205 = (__m128i *)sub_186B270(v237);
    v206 = v205;
    v207 = (__m128i *)((char *)v205 + v237);
    if ( v131 )
    {
      if ( (v237 & 0x10) == 0 || (*v205 = 0, ++v205, v205 != v207) )
      {
        do
        {
          *v205 = 0;
          v205 += 2;
          v205[-1] = 0;
        }
        while ( v205 != v207 );
      }
    }
    v208 = (__m128i *)a1[17];
    v209 = v208;
    v246 = &v208[*((unsigned int *)a1 + 36)];
    if ( v208 != v246 )
    {
      do
      {
        if ( v209->m128i_i64[0] > 1uLL )
        {
          v210 = 16LL * (*(_DWORD *)(v209->m128i_i64[0] + 12) & (v131 - 1));
          v211 = &v206[(unsigned __int64)v210 / 0x10];
          if ( v237 == v210 )
          {
LABEL_278:
            if ( v206 == v211 )
            {
LABEL_300:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v212 = v206;
            while ( v212->m128i_i64[0] )
            {
              if ( v211 == ++v212 )
                goto LABEL_300;
            }
          }
          else
          {
            v212 = &v206[(unsigned __int64)v210 / 0x10];
            while ( v212->m128i_i64[0] )
            {
              if ( v207 == ++v212 )
                goto LABEL_278;
            }
          }
          *v212 = _mm_loadu_si128(v209);
        }
        ++v209;
      }
      while ( v246 != v209 );
      v208 = (__m128i *)a1[17];
    }
    if ( v208 )
      sub_186B220(v208);
    a1[17] = (__int64)v206;
    *((_DWORD *)a1 + 36) = v131;
    *((_DWORD *)a1 + 38) = 0;
  }
  v132 = *(_DWORD *)(v7 + 12);
  v133 = (_QWORD *)a1[17];
  v134 = 16LL * v241;
  v135 = &v133[(unsigned __int64)v134 / 8];
  v136 = 16LL * (v132 & (v241 - 1));
  v137 = &v133[(unsigned __int64)v136 / 8];
  if ( v136 == v134 )
  {
    v139 = nullptr;
LABEL_249:
    if ( v133 == v137 )
    {
LABEL_257:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v201 = *v133;
      if ( *v133 > 1u )
      {
        if ( *(_DWORD *)(v201 + 12) == v132 && v7 == v201 )
        {
          *v133 = v7;
          v133[1] = v125;
          goto LABEL_258;
        }
      }
      else
      {
        if ( !v201 )
        {
          if ( v139 )
          {
            --*((_DWORD *)a1 + 38);
            v133 = v139;
          }
          *v133 = v7;
          v133[1] = v125;
          ++*((_DWORD *)a1 + 37);
          goto LABEL_258;
        }
        v139 = v133;
      }
      v133 += 2;
      if ( v137 == v133 )
        goto LABEL_257;
    }
  }
  v138 = &v133[(unsigned __int64)v136 / 8];
  v139 = nullptr;
  while ( 2 )
  {
    v140 = *v138;
    if ( *v138 > 1u )
    {
      if ( *(_DWORD *)(v140 + 12) == v132 && v7 == v140 )
      {
        *v138 = v7;
        v138[1] = v125;
        goto LABEL_258;
      }
LABEL_158:
      v138 += 2;
      if ( v135 == v138 )
        goto LABEL_249;
      continue;
    }
    break;
  }
  if ( v140 )
  {
    v139 = v138;
    goto LABEL_158;
  }
  if ( v139 )
  {
    --*((_DWORD *)a1 + 38);
    v138 = v139;
  }
  *v138 = v7;
  v138[1] = v125;
  ++*((_DWORD *)a1 + 37);
LABEL_258:
  sub_63F9D0(a1[16], a1[15], v7, v125);
  if ( v114 )
    sub_186B220(v114 - 1);
LABEL_203:
  v173 = a1[6];
  if ( v173 )
    v174 = *(_DWORD *)(v173 - 4);
  else
    v174 = 0;
  v175 = sub_15DC610(
           a1[1],
           v125,
           v174,
           v173,
           (int)v111,
           v71,
           v229,
           a5,
           a6,
           v237,
           v241,
           (char)v246,
           v247,
           v249,
           v250,
           v251);
  v176 = v175;
  if ( v175 )
    ++*(_DWORD *)(v175 + 8);
  v177 = *v233;
  if ( *v233 )
  {
    v178 = v233[1];
    v28 = (*(_DWORD *)(v177 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v178, v177);
  }
  *v233 = v176;
  v179 = *v236;
  if ( *v236 )
  {
    v180 = v236[1];
    v28 = (*(_DWORD *)(v179 + 8))-- == 1;
    if ( v28 )
      sub_15D7BC0(v180, v179);
  }
  *v236 = 0;
  return 4;
}

