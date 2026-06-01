void __fastcall sub_96E040(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __m128 *v6; // r14
  _BYTE **v7; // r13
  unsigned __int8 v8; // al
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 *v14; // rdx
  unsigned __int64 v15; // rax
  __int64 *v16; // rcx
  _BYTE *v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // r8
  int v20; // r15d
  void **v21; // rbp
  void **v22; // rbx
  __int64 v23; // rax
  __int64 *v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  unsigned __int64 v31; // r12
  void **v32; // rbx
  __int64 v33; // rcx
  void **v34; // r13
  void **v35; // r15
  void **v36; // r12
  __int64 v37; // rax
  __int64 *v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 *v45; // rdx
  unsigned __int64 v46; // rax
  __int64 *v47; // rcx
  _BYTE *v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rdx
  unsigned int *v54; // rcx
  int v55; // eax
  const char *v56; // rdi
  unsigned __int64 v57; // rsi
  unsigned int *v58; // rdi
  char **v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  int v65; // eax
  __int64 *v66; // rax
  _QWORD *v67; // r10
  _QWORD *v68; // rbx
  _QWORD *v69; // r13
  unsigned __int64 v70; // rbp
  unsigned __int64 v71; // r14
  __int64 v72; // r15
  unsigned __int8 v73; // al
  __int64 *v74; // rcx
  unsigned int v75; // eax
  __int64 v76; // rax
  __int64 *v77; // rdx
  unsigned __int64 v78; // rax
  __int64 *v79; // rsi
  __int64 v80; // r15
  __int64 v81; // r9
  unsigned int *v82; // rax
  __int64 v83; // rdx
  void *v84; // rsi
  int v85; // eax
  const char *v86; // rdi
  unsigned __int64 v87; // rsi
  unsigned int *v88; // rdi
  char **v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // r15
  int v96; // eax
  unsigned __int64 v97; // r15
  __int64 v98; // rbx
  __int64 v99; // r15
  _BYTE *v100; // rax
  __int64 v101; // rbp
  __int64 v102; // rax
  __int64 *v103; // rdx
  unsigned __int64 v104; // rcx
  __int64 *v105; // rax
  __int64 v106; // rbp
  __int64 v107; // rax
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // r13
  char *v110; // rax
  void **v111; // rbx
  void **v112; // rbx
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 *v115; // rax
  __int64 v116; // r12
  __int64 v117; // rax
  unsigned __int64 v118; // rdx
  __int64 *v119; // rax
  __int64 v120; // rcx
  unsigned __int64 v121; // rsi
  unsigned int *v122; // rax
  __int64 v123; // rdx
  unsigned int *v124; // rcx
  int v125; // eax
  const char *v126; // rdi
  unsigned __int64 v127; // rsi
  unsigned int *v128; // rdi
  char **v129; // rax
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rax
  void *v135; // rdi
  __int64 v136; // rsi
  char v137; // al
  __int64 v138; // rax
  unsigned __int64 v139; // rdx
  unsigned __int64 v140; // rsi
  unsigned int *v141; // rax
  __int64 v142; // rdx
  unsigned int *v143; // rcx
  int v144; // eax
  const char *v145; // rdi
  unsigned __int64 v146; // rsi
  unsigned int *v147; // rdi
  char **v148; // rax
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rax
  void **v154; // rbx
  __int64 *v155; // rax
  __int64 v156; // rcx
  __int64 v157; // rdi
  __int64 v158; // rax
  __int64 *v159; // rdx
  unsigned __int64 v160; // rcx
  __int64 *v161; // rax
  __int64 v162; // rcx
  unsigned __int64 v163; // r13
  void **v164; // r15
  int v165; // ecx
  _DWORD *v166; // rax
  void **v167; // r13
  void **v168; // r15
  unsigned int v169; // r13d
  unsigned __int64 v170; // rsi
  unsigned int *v171; // rax
  __int64 v172; // rdx
  int v173; // eax
  const char *v174; // rdi
  unsigned __int64 v175; // rsi
  unsigned int *v176; // rdi
  char **v177; // rax
  __int64 v178; // rcx
  __int64 v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rax
  unsigned __int64 v184; // rcx
  __int64 v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  unsigned __int64 v192; // rdx
  int v193; // ecx
  __int64 v194; // r15
  void **v195; // r12
  char ***v196; // rsi
  char ***v197; // rdi
  __int64 v198; // rax
  __int64 *v199; // rax
  void **v200; // r12
  char ***v201; // rsi
  char ***v202; // rdi
  __int64 v203; // rax
  __int64 *v204; // rdx
  unsigned __int64 v205; // rcx
  __int64 *v206; // rax
  void **v207; // rbx
  __int64 v208; // rax
  void **v209; // r15
  __int64 v210; // r12
  void **v211; // rbx
  int v212; // edx
  void **v213; // r12
  int v214; // r12d
  __int64 *v215; // rax
  __int64 v216; // rcx
  __int64 v217; // rcx
  __int64 *v218; // rax
  __int64 *v219; // rax
  __int64 v220; // rcx
  __int64 v221; // rax
  __int64 *v222; // rdx
  unsigned __int64 v223; // rsi
  __int64 *v224; // rax
  __int64 v225; // rax
  unsigned __int64 v226; // rdx
  char **v227; // rax
  __int64 *v228; // rax
  __int64 v229; // rcx
  __int64 v230; // [rsp+0h] [rbp-418h] BYREF
  _BYTE **v231; // [rsp+8h] [rbp-410h]
  __int64 v232; // [rsp+18h] [rbp-400h] BYREF
  void *v233; // [rsp+20h] [rbp-3F8h] BYREF
  __int64 v234; // [rsp+28h] [rbp-3F0h]
  int v235; // [rsp+30h] [rbp-3E8h] BYREF
  __int64 v236; // [rsp+38h] [rbp-3E0h]
  int v237; // [rsp+40h] [rbp-3D8h]
  __int64 v238; // [rsp+48h] [rbp-3D0h]
  void **v239; // [rsp+50h] [rbp-3C8h] BYREF
  unsigned __int64 v240; // [rsp+58h] [rbp-3C0h]
  _BYTE v241[384]; // [rsp+60h] [rbp-3B8h] BYREF
  __m128 v242; // [rsp+1E0h] [rbp-238h] BYREF
  __int64 v243; // [rsp+1F0h] [rbp-228h]
  char v244; // [rsp+1F8h] [rbp-220h]
  __int16 v245; // [rsp+1F9h] [rbp-21Fh]
  void *v246; // [rsp+200h] [rbp-218h]
  __int64 v247; // [rsp+208h] [rbp-210h]
  __int64 v248; // [rsp+210h] [rbp-208h] BYREF
  void *ptr; // [rsp+230h] [rbp-1E8h] BYREF
  __int64 v250; // [rsp+238h] [rbp-1E0h]
  _BYTE v251[16]; // [rsp+240h] [rbp-1D8h] BYREF
  void *v252; // [rsp+250h] [rbp-1C8h]
  __int64 v253; // [rsp+258h] [rbp-1C0h]
  __int64 v254; // [rsp+260h] [rbp-1B8h] BYREF

  v4 = (__int64)sub_962E30(a1);
  v6 = &v242;
  v7 = *(_BYTE ***)(a1 + 8);
  v230 = v4;
  v246 = &v248;
  v247 = 0x200000000LL;
  v250 = 0x200000000LL;
  v252 = &v254;
  ptr = v251;
  v253 = 0x800000000LL;
  LOBYTE(v4) = *((_BYTE *)v7 + 28);
  v230 = a1;
  v8 = v4 & 0x7F;
  v243 = a2;
  v244 = a3;
  v245 = 0;
  v242 = _mm_loadh_ps((const double *)&v230);
  if ( (unsigned int)v8 - 34 <= 5 )
  {
    v9 = 0;
    sub_B52330(v7);
    v11 = v10;
    if ( !v10 )
      goto LABEL_12;
    while ( 1 )
    {
      sub_B52330(v7);
      if ( v12 <= (unsigned int)v9 )
        goto LABEL_11;
      if ( (*((_BYTE *)v7 + 29) & 1) != 0 )
      {
        v13 = sub_B68690(v7);
        v14 = *(__int64 **)v13;
        v15 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
        if ( (unsigned __int64)v14 >= v15 )
        {
          if ( v14 != (__int64 *)v15 )
          {
            if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 364 )
              goto LABEL_27;
            v28 = (__int64 *)(v15 + 8);
            while ( v14 != v28 )
            {
              v29 = *v28++;
              if ( *(_WORD *)(v29 + 36) == 364 )
                goto LABEL_27;
            }
          }
        }
        else
        {
          v16 = v14;
          while ( *(_WORD *)(*v16 + 36) != 364 )
          {
            if ( (__int64 *)v15 == ++v16 )
              goto LABEL_9;
          }
          if ( (__int64 *)v15 != v16 )
          {
LABEL_27:
            v23 = *v14;
            if ( *(_WORD *)(*v14 + 36) != 364 )
            {
              v24 = v14 + 1;
              do
                v23 = *v24++;
              while ( *(_WORD *)(v23 + 36) != 364 );
            }
            if ( !*(_DWORD *)(v23 + 40) )
              goto LABEL_11;
            v18 = 8LL * (unsigned int)v9;
            if ( (*(_DWORD *)(v23 + 44) & 0x3FFFFFFF) - 1 - ((*(_DWORD *)(v23 + 44) >> 30) & 1) != (_DWORD)v9 )
              goto LABEL_11;
LABEL_32:
            v25 = *(_QWORD *)&v7[15][v18];
            v26 = (unsigned int)v250;
            v27 = (unsigned int)v250 + 1LL;
            if ( v27 > HIDWORD(v250) )
            {
              sub_22134E0(&ptr, v251, v27, 8);
              v26 = (unsigned int)v250;
            }
            *((_QWORD *)ptr + v26) = v25;
            LODWORD(v250) = v250 + 1;
            goto LABEL_11;
          }
        }
      }
LABEL_9:
      v17 = v7[15];
      v18 = 8LL * (unsigned int)v9;
      v19 = *(_QWORD *)&v17[v18];
      if ( (*(_BYTE *)(v19 + 29) & 1) != 0 )
      {
        v230 = *(_QWORD *)&v17[8 * (unsigned int)v9];
        v37 = sub_B68690(v230);
        v19 = v230;
        v38 = *(__int64 **)v37;
        v39 = *(_QWORD *)v37 + 8LL * *(unsigned int *)(v37 + 8);
        if ( *(_QWORD *)v37 < v39 )
        {
          v66 = *(__int64 **)v37;
          while ( *(_WORD *)(*v66 + 36) != 414 )
          {
            if ( (__int64 *)v39 == ++v66 )
              goto LABEL_10;
          }
          if ( (__int64 *)v39 != v66 )
            goto LABEL_32;
        }
        else if ( v38 != (__int64 *)v39 )
        {
          if ( *(_WORD *)(*(_QWORD *)v39 + 36LL) == 414 )
            goto LABEL_32;
          v40 = (__int64 *)(v39 + 8);
          while ( v38 != v40 )
          {
            v41 = *v40++;
            if ( *(_WORD *)(v41 + 36) == 414 )
              goto LABEL_32;
          }
        }
      }
LABEL_10:
      if ( !v244 )
        goto LABEL_11;
      v51 = *(_QWORD *)(v19 + 40);
      if ( (v51 & 7) != 0 )
      {
        v57 = 0;
        v56 = &byte_22CD811;
        goto LABEL_84;
      }
      if ( (v51 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v52 = *(unsigned int **)((v51 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v53 = *v52;
        v54 = v52 + 4;
        switch ( v53 )
        {
          case 17LL:
            if ( *((_QWORD *)v52 + 2) ^ 0x6974656C706D6F63LL | *((_QWORD *)v52 + 3) ^ 0x656C646E61486E6FLL
              || *((_BYTE *)v52 + 32) != 114 )
            {
              goto LABEL_80;
            }
LABEL_179:
            v55 = 0;
            goto LABEL_81;
          case 10LL:
            if ( *((_QWORD *)v52 + 2) == 0x6974656C706D6F63LL && *((_WORD *)v52 + 12) == 28271 )
            {
              v55 = 0;
              goto LABEL_81;
            }
            goto LABEL_80;
          case 21LL:
            if ( !(*((_QWORD *)v52 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v52 + 3) ^ 0x61486E6F6974656CLL)
              && v52[8] == 1701602414
              && *((_BYTE *)v52 + 36) == 114 )
            {
              v55 = 0;
              goto LABEL_81;
            }
            goto LABEL_80;
          case 14LL:
            if ( *((_QWORD *)v52 + 2) == 0x706D6F4368746977LL && v52[6] == 1769235820 && *((_WORD *)v52 + 14) == 28271 )
            {
              v55 = 0;
              goto LABEL_81;
            }
            goto LABEL_80;
          case 15LL:
            if ( *((_QWORD *)v52 + 2) != 0x6974656C706D6F63LL
              || v52[6] != 1816292975
              || *((_WORD *)v52 + 14) != 25455
              || *((_BYTE *)v52 + 30) != 107 )
            {
              goto LABEL_80;
            }
            goto LABEL_179;
          case 19LL:
            if ( !(*((_QWORD *)v52 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v52 + 3) ^ 0x6C426E6F6974656CLL)
              && *((_WORD *)v52 + 16) == 25455
              && *((_BYTE *)v52 + 34) == 107 )
            {
              v55 = 0;
LABEL_81:
              if ( !v55 )
                goto LABEL_85;
              break;
            }
LABEL_80:
            v55 = 1;
            goto LABEL_81;
          case 7LL:
            if ( v52[4] == 1819305330 && *((_WORD *)v52 + 10) == 21625 && *((_BYTE *)v52 + 22) == 111 )
              goto LABEL_85;
            break;
          case 5LL:
            if ( v52[4] == 1819305330 && *((_BYTE *)v52 + 20) == 121 )
              goto LABEL_85;
            break;
          default:
            if ( v53 == 11
              && *((_QWORD *)v52 + 2) == 0x6C70655268746977LL
              && *((_WORD *)v52 + 12) == 21625
              && *((_BYTE *)v52 + 26) == 111 )
            {
              goto LABEL_85;
            }
            break;
        }
      }
      v56 = &byte_22CD811;
      v57 = v51 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v57 )
      {
        v58 = *(unsigned int **)(v57 + 16);
        v57 = *v58;
        v56 = (const char *)(v58 + 4);
      }
LABEL_84:
      v230 = v19;
      v59 = sub_9677D0((__int64)v56, v57);
      v51 = (unsigned __int64)&unk_2B16370;
      v19 = v230;
      if ( v59 == (char **)&unk_2B16370 )
        goto LABEL_93;
LABEL_85:
      v60 = *(_QWORD *)(*(_QWORD *)(v19 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v61 = *(_QWORD *)(*(_QWORD *)(v60 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v61 + 16) != 11 )
        goto LABEL_93;
      if ( *(_BYTE *)(v60 + 16) != 11 )
        v60 = sub_F3F310(v60, v51, v61, v54, v19);
      v62 = *(_QWORD *)(*(_QWORD *)(v60 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v63 = (unsigned int)*(unsigned __int8 *)(v62 + 16) - 25;
      if ( (unsigned int)v63 > 1 )
        v62 = sub_F3F310(v62, v51, v63, v54, v19);
      v64 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v62 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v64 + 16) == 13 && ((*(_WORD *)(v64 + 18) >> 3) & 0x1FF) == 0x1B3 )
        goto LABEL_32;
      if ( v244 )
      {
LABEL_93:
        if ( ((unsigned __int8)v7[5] & 7) != 0 )
        {
          sub_B52330(v7);
        }
        else
        {
          v230 = (__int64)v7[5];
          sub_B52330(v7);
          if ( v65 == 1
            && (v230 & 0xFFFFFFFFFFFFFFF8LL) != 0
            && sub_9677D0(
                 *(_QWORD *)((v230 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 16LL,
                 **(unsigned int **)((v230 & 0xFFFFFFFFFFFFFFF8LL) + 16)) != (char **)&unk_2B16370 )
          {
            goto LABEL_32;
          }
        }
      }
LABEL_11:
      if ( v11 == ++v9 )
        goto LABEL_12;
    }
  }
  if ( v8 == 18 )
  {
    v42 = *((unsigned int *)v7 + 26);
    v43 = 0;
    if ( !*((_DWORD *)v7 + 26) )
      goto LABEL_13;
    while ( 1 )
    {
      v233 = v7[5];
      if ( (unsigned int)sub_FBABF0(&v233) > (unsigned int)v43 )
      {
        if ( (*((_BYTE *)v7 + 29) & 1) != 0 )
        {
          v44 = sub_B68690(v7);
          v45 = *(__int64 **)v44;
          v46 = *(_QWORD *)v44 + 8LL * *(unsigned int *)(v44 + 8);
          if ( (unsigned __int64)v45 >= v46 )
          {
            if ( v45 != (__int64 *)v46 )
            {
              if ( *(_WORD *)(*(_QWORD *)v46 + 36LL) == 364 )
                goto LABEL_185;
              v119 = (__int64 *)(v46 + 8);
              while ( v45 != v119 )
              {
                v120 = *v119++;
                if ( *(_WORD *)(v120 + 36) == 364 )
                  goto LABEL_185;
              }
            }
          }
          else
          {
            v47 = v45;
            while ( *(_WORD *)(*v47 + 36) != 364 )
            {
              if ( (__int64 *)v46 == ++v47 )
                goto LABEL_71;
            }
            if ( (__int64 *)v46 != v47 )
            {
LABEL_185:
              v114 = *v45;
              if ( *(_WORD *)(*v45 + 36) != 364 )
              {
                v115 = v45 + 1;
                do
                  v114 = *v115++;
                while ( *(_WORD *)(v114 + 36) != 364 );
              }
              if ( !*(_DWORD *)(v114 + 40) )
                goto LABEL_73;
              v49 = 8LL * (unsigned int)v43;
              if ( (*(_DWORD *)(v114 + 44) & 0x3FFFFFFF) - 1 - ((*(_DWORD *)(v114 + 44) >> 30) & 1) != (_DWORD)v43 )
                goto LABEL_73;
              goto LABEL_190;
            }
          }
        }
LABEL_71:
        v48 = v7[12];
        v49 = 8LL * (unsigned int)v43;
        v50 = *(_QWORD *)&v48[v49];
        if ( (*(_BYTE *)(v50 + 29) & 1) != 0 )
        {
          v157 = *(_QWORD *)&v48[8 * (unsigned int)v43];
          v231 = (_BYTE **)(8LL * (unsigned int)v43);
          v230 = v50;
          v158 = sub_B68690(v157);
          v50 = v230;
          v49 = (__int64)v231;
          v159 = *(__int64 **)v158;
          v160 = *(_QWORD *)v158 + 8LL * *(unsigned int *)(v158 + 8);
          if ( *(_QWORD *)v158 < v160 )
          {
            v199 = *(__int64 **)v158;
            while ( *(_WORD *)(*v199 + 36) != 414 )
            {
              if ( (__int64 *)v160 == ++v199 )
                goto LABEL_72;
            }
            if ( (__int64 *)v160 != v199 )
              goto LABEL_190;
          }
          else if ( v159 != (__int64 *)v160 )
          {
            if ( *(_WORD *)(*(_QWORD *)v160 + 36LL) == 414 )
              goto LABEL_190;
            v161 = (__int64 *)(v160 + 8);
            while ( v159 != v161 )
            {
              v162 = *v161++;
              if ( *(_WORD *)(v162 + 36) == 414 )
                goto LABEL_190;
            }
          }
        }
LABEL_72:
        if ( v244 )
          break;
      }
LABEL_73:
      if ( v42 == ++v43 )
        goto LABEL_12;
    }
    v170 = *(_QWORD *)(v50 + 40);
    if ( (v170 & 7) != 0 )
    {
      v175 = 0;
      v174 = &byte_22CD811;
      goto LABEL_307;
    }
    if ( (v170 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v171 = *(unsigned int **)((v170 & 0xFFFFFFFFFFFFFFF8LL) + 16);
      v172 = *v171;
      switch ( v172 )
      {
        case 17LL:
          if ( *((_QWORD *)v171 + 2) ^ 0x6974656C706D6F63LL | *((_QWORD *)v171 + 3) ^ 0x656C646E61486E6FLL
            || *((_BYTE *)v171 + 32) != 114 )
          {
LABEL_303:
            v173 = 1;
            goto LABEL_304;
          }
          goto LABEL_376;
        case 10LL:
          if ( *((_QWORD *)v171 + 2) != 0x6974656C706D6F63LL || *((_WORD *)v171 + 12) != 28271 )
            goto LABEL_303;
LABEL_376:
          v173 = 0;
          goto LABEL_304;
        case 21LL:
          if ( *((_QWORD *)v171 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v171 + 3) ^ 0x61486E6F6974656CLL
            || v171[8] != 1701602414
            || *((_BYTE *)v171 + 36) != 114 )
          {
            goto LABEL_303;
          }
          v173 = 0;
LABEL_304:
          if ( v173 )
            break;
LABEL_308:
          v178 = *(_QWORD *)(v50 + 48);
          v179 = *(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL);
          v180 = *(_QWORD *)(*(_QWORD *)(v179 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v180 + 16) != 11 )
          {
LABEL_317:
            v184 = v178 & 0xFFFFFFFFFFFFFFF0LL;
            v239 = (void **)v233;
            v185 = *(_QWORD *)v184;
            v186 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v184 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v186 + 16) != 11 )
              goto LABEL_73;
            if ( *(_BYTE *)(v185 + 16) != 11 )
            {
              v230 = v49;
              v185 = sub_F3F310(v185, v170, v186, v184, v49);
              v49 = v230;
            }
            v187 = *(_QWORD *)(*(_QWORD *)(v185 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            v188 = (unsigned int)*(unsigned __int8 *)(v187 + 16) - 25;
            if ( (unsigned int)v188 > 1 )
            {
              v230 = v49;
              v187 = sub_F3F310(v187, v170, v188, v184, v49);
              v49 = v230;
            }
            v189 = *(_QWORD *)(v187 + 24);
            v230 = v49;
            v190 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v189 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v190 + 16) != 13
              || ((*(_WORD *)(v190 + 18) >> 3) & 0x1FF) != 0x1B3
              || (unsigned int)sub_FBB1C0(v239) == 3 )
            {
              goto LABEL_73;
            }
            v231 = (_BYTE **)&v239;
            if ( (unsigned int)sub_FBABF0(&v239) == 1 )
            {
              v225 = sub_FBAC60(v231, 0);
              v227 = sub_9677D0(v225, v226);
              v49 = v230;
              if ( v227 != (char **)&unk_2B16370 )
                goto LABEL_190;
              goto LABEL_73;
            }
            v191 = sub_FBAC60(v231, (unsigned int)v43);
            v49 = v230;
            if ( v192 == 17 )
            {
              if ( *(_QWORD *)v191 ^ 0x6974656C706D6F63LL | *(_QWORD *)(v191 + 8) ^ 0x656C646E61486E6FLL
                || *(_BYTE *)(v191 + 16) != 114 )
              {
LABEL_329:
                v193 = 1;
                goto LABEL_330;
              }
            }
            else
            {
              if ( v192 != 10 )
              {
                switch ( v192 )
                {
                  case 0x15uLL:
                    if ( *(_QWORD *)v191 ^ 0x706D6F4368746977LL | *(_QWORD *)(v191 + 8) ^ 0x61486E6F6974656CLL
                      || *(_DWORD *)(v191 + 16) != 1701602414
                      || *(_BYTE *)(v191 + 20) != 114 )
                    {
                      goto LABEL_329;
                    }
                    v193 = 0;
                    break;
                  case 0xEuLL:
                    if ( *(_QWORD *)v191 != 0x706D6F4368746977LL
                      || *(_DWORD *)(v191 + 8) != 1769235820
                      || *(_WORD *)(v191 + 12) != 28271 )
                    {
                      goto LABEL_329;
                    }
                    v193 = 0;
                    break;
                  case 0xFuLL:
                    if ( *(_QWORD *)v191 != 0x6974656C706D6F63LL
                      || *(_DWORD *)(v191 + 8) != 1816292975
                      || *(_WORD *)(v191 + 12) != 25455
                      || *(_BYTE *)(v191 + 14) != 107 )
                    {
                      goto LABEL_329;
                    }
                    v193 = 0;
                    break;
                  default:
                    switch ( v192 )
                    {
                      case 0x13uLL:
                        if ( !(*(_QWORD *)v191 ^ 0x706D6F4368746977LL | *(_QWORD *)(v191 + 8) ^ 0x6C426E6F6974656CLL)
                          && *(_WORD *)(v191 + 16) == 25455
                          && *(_BYTE *)(v191 + 18) == 107 )
                        {
                          goto LABEL_190;
                        }
                        break;
                      case 7uLL:
                        if ( *(_DWORD *)v191 == 1819305330
                          && *(_WORD *)(v191 + 4) == 21625
                          && *(_BYTE *)(v191 + 6) == 111 )
                        {
                          goto LABEL_190;
                        }
                        break;
                      case 5uLL:
                        if ( *(_DWORD *)v191 == 1819305330 && *(_BYTE *)(v191 + 4) == 121 )
                          goto LABEL_190;
                        break;
                      default:
                        if ( v192 == 11
                          && *(_QWORD *)v191 == 0x6C70655268746977LL
                          && *(_WORD *)(v191 + 8) == 21625
                          && *(_BYTE *)(v191 + 10) == 111 )
                        {
                          goto LABEL_190;
                        }
                        break;
                    }
LABEL_331:
                    if ( sub_9677D0(v191, v192) != (char **)&unk_2B16370 )
                    {
                      v49 = v230;
LABEL_190:
                      v116 = *(_QWORD *)&v7[12][v49];
                      v117 = (unsigned int)v250;
                      v118 = (unsigned int)v250 + 1LL;
                      if ( v118 > HIDWORD(v250) )
                      {
                        sub_22134E0(&ptr, v251, v118, 8);
                        v117 = (unsigned int)v250;
                      }
                      *((_QWORD *)ptr + v117) = v116;
                      LODWORD(v250) = v250 + 1;
                      goto LABEL_73;
                    }
                    goto LABEL_73;
                }
LABEL_330:
                if ( !v193 )
                  goto LABEL_190;
                goto LABEL_331;
              }
              if ( *(_QWORD *)v191 != 0x6974656C706D6F63LL || *(_WORD *)(v191 + 8) != 28271 )
                goto LABEL_329;
            }
            v193 = 0;
            goto LABEL_330;
          }
          if ( *(_BYTE *)(v179 + 16) != 11 )
          {
            v231 = (_BYTE **)v49;
            v230 = v50;
            v179 = sub_F3F310(v179, v170, v180, v178, v49);
            v49 = (__int64)v231;
            v50 = v230;
          }
          v181 = *(_QWORD *)(*(_QWORD *)(v179 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v182 = (unsigned int)*(unsigned __int8 *)(v181 + 16) - 25;
          if ( (unsigned int)v182 > 1 )
          {
            v231 = (_BYTE **)v49;
            v230 = v50;
            v181 = sub_F3F310(v181, v170, v182, v178, v49);
            v49 = (__int64)v231;
            v50 = v230;
          }
          v183 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v181 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v183 + 16) == 13 && ((*(_WORD *)(v183 + 18) >> 3) & 0x1FF) == 0x1B3 )
            goto LABEL_190;
          if ( !v244 )
            goto LABEL_73;
LABEL_316:
          v178 = *(_QWORD *)(v50 + 48);
          goto LABEL_317;
        case 14LL:
          if ( *((_QWORD *)v171 + 2) != 0x706D6F4368746977LL || v171[6] != 1769235820 || *((_WORD *)v171 + 14) != 28271 )
            goto LABEL_303;
          v173 = 0;
          goto LABEL_304;
        case 15LL:
          if ( *((_QWORD *)v171 + 2) != 0x6974656C706D6F63LL
            || v171[6] != 1816292975
            || *((_WORD *)v171 + 14) != 25455
            || *((_BYTE *)v171 + 30) != 107 )
          {
            goto LABEL_303;
          }
          v173 = 0;
          goto LABEL_304;
        case 19LL:
          if ( *((_QWORD *)v171 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v171 + 3) ^ 0x6C426E6F6974656CLL
            || *((_WORD *)v171 + 16) != 25455
            || *((_BYTE *)v171 + 34) != 107 )
          {
            goto LABEL_303;
          }
          v173 = 0;
          goto LABEL_304;
        case 7LL:
          if ( v171[4] == 1819305330 && *((_WORD *)v171 + 10) == 21625 && *((_BYTE *)v171 + 22) == 111 )
            goto LABEL_308;
          break;
        case 5LL:
          if ( v171[4] == 1819305330 && *((_BYTE *)v171 + 20) == 121 )
            goto LABEL_308;
          break;
        default:
          if ( v172 == 11
            && *((_QWORD *)v171 + 2) == 0x6C70655268746977LL
            && *((_WORD *)v171 + 12) == 21625
            && *((_BYTE *)v171 + 26) == 111 )
          {
            goto LABEL_308;
          }
          break;
      }
    }
    v174 = &byte_22CD811;
    v175 = v170 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v175 )
    {
      v176 = *(unsigned int **)(v175 + 16);
      v175 = *v176;
      v174 = (const char *)(v176 + 4);
    }
LABEL_307:
    v231 = (_BYTE **)v49;
    v230 = v50;
    v177 = sub_9677D0((__int64)v174, v175);
    v170 = (unsigned __int64)&unk_2B16370;
    v50 = v230;
    v49 = (__int64)v231;
    if ( v177 == (char **)&unk_2B16370 )
      goto LABEL_316;
    goto LABEL_308;
  }
  if ( v8 != 8 )
    goto LABEL_13;
  v67 = v7[13];
  v68 = &v67[2 * *((unsigned int *)v7 + 28)];
  if ( v67 == v68 )
  {
    v98 = *((unsigned int *)v7 + 20);
    if ( !*((_DWORD *)v7 + 20) )
      goto LABEL_13;
LABEL_145:
    v99 = 0;
    while ( 1 )
    {
      v100 = v7[9];
      v101 = *(_QWORD *)&v100[8 * (unsigned int)v99];
      if ( (*(_BYTE *)(v101 + 29) & 1) != 0 )
      {
        v102 = sub_B68690(*(_QWORD *)&v100[8 * (unsigned int)v99]);
        v103 = *(__int64 **)v102;
        v104 = *(_QWORD *)v102 + 8LL * *(unsigned int *)(v102 + 8);
        if ( *(_QWORD *)v102 >= v104 )
        {
          if ( v103 != (__int64 *)v104 )
          {
            if ( *(_WORD *)(*(_QWORD *)v104 + 36LL) == 414 )
              goto LABEL_154;
            v155 = (__int64 *)(v104 + 8);
            while ( v103 != v155 )
            {
              v156 = *v155++;
              if ( *(_WORD *)(v156 + 36) == 414 )
                goto LABEL_154;
            }
          }
        }
        else
        {
          v105 = *(__int64 **)v102;
          while ( *(_WORD *)(*v105 + 36) != 414 )
          {
            if ( (__int64 *)v104 == ++v105 )
              goto LABEL_146;
          }
          if ( (__int64 *)v104 != v105 )
            goto LABEL_154;
        }
      }
LABEL_146:
      if ( v244 )
        break;
LABEL_147:
      if ( v98 == ++v99 )
        goto LABEL_12;
    }
    v121 = *(_QWORD *)(v101 + 40);
    if ( (v121 & 7) != 0 )
    {
      v127 = 0;
      v126 = &byte_22CD811;
      goto LABEL_207;
    }
    if ( (v121 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
LABEL_205:
      v126 = &byte_22CD811;
      v127 = v121 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v127 )
      {
        v128 = *(unsigned int **)(v127 + 16);
        v127 = *v128;
        v126 = (const char *)(v128 + 4);
      }
LABEL_207:
      v129 = sub_9677D0((__int64)v126, v127);
      v121 = (unsigned __int64)&unk_2B16370;
      if ( v129 != (char **)&unk_2B16370 )
        goto LABEL_208;
      goto LABEL_147;
    }
    v122 = *(unsigned int **)((v121 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v123 = *v122;
    v124 = v122 + 4;
    if ( v123 == 17 )
    {
      if ( !(*((_QWORD *)v122 + 2) ^ 0x6974656C706D6F63LL | *((_QWORD *)v122 + 3) ^ 0x656C646E61486E6FLL)
        && *((_BYTE *)v122 + 32) == 114 )
      {
        v125 = 0;
        goto LABEL_204;
      }
    }
    else
    {
      if ( v123 != 10 )
      {
        if ( v123 == 21 )
        {
          if ( *((_QWORD *)v122 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v122 + 3) ^ 0x61486E6F6974656CLL
            || v122[8] != 1701602414
            || *((_BYTE *)v122 + 36) != 114 )
          {
            goto LABEL_203;
          }
          v125 = 0;
        }
        else if ( v123 == 14 )
        {
          if ( *((_QWORD *)v122 + 2) != 0x706D6F4368746977LL || v122[6] != 1769235820 || *((_WORD *)v122 + 14) != 28271 )
            goto LABEL_203;
          v125 = 0;
        }
        else if ( v123 == 15 )
        {
          if ( *((_QWORD *)v122 + 2) != 0x6974656C706D6F63LL
            || v122[6] != 1816292975
            || *((_WORD *)v122 + 14) != 25455
            || *((_BYTE *)v122 + 30) != 107 )
          {
            goto LABEL_203;
          }
          v125 = 0;
        }
        else
        {
          if ( v123 != 19 )
          {
            if ( v123 == 7 )
            {
              if ( v122[4] == 1819305330 && *((_WORD *)v122 + 10) == 21625 && *((_BYTE *)v122 + 22) == 111 )
                goto LABEL_208;
            }
            else if ( v123 == 5 )
            {
              if ( v122[4] == 1819305330 && *((_BYTE *)v122 + 20) == 121 )
                goto LABEL_208;
            }
            else if ( v123 == 11
                   && *((_QWORD *)v122 + 2) == 0x6C70655268746977LL
                   && *((_WORD *)v122 + 12) == 21625
                   && *((_BYTE *)v122 + 26) == 111 )
            {
LABEL_208:
              v130 = *(_QWORD *)(*(_QWORD *)(v101 + 48) & 0xFFFFFFFFFFFFFFF0LL);
              v131 = *(_QWORD *)(*(_QWORD *)(v130 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v131 + 16) != 11 )
                goto LABEL_147;
              if ( *(_BYTE *)(v130 + 16) != 11 )
                v130 = sub_F3F310(v130, v121, v131, v124, v5);
              v132 = *(_QWORD *)(*(_QWORD *)(v130 + 32) & 0xFFFFFFFFFFFFFFF0LL);
              v133 = (unsigned int)*(unsigned __int8 *)(v132 + 16) - 25;
              if ( (unsigned int)v133 > 1 )
                v132 = sub_F3F310(v132, v121, v133, v124, v5);
              v134 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v132 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v134 + 16) != 13 || ((*(_WORD *)(v134 + 18) >> 3) & 0x1FF) != 0x1B3 )
                goto LABEL_147;
LABEL_154:
              v106 = *(_QWORD *)&v7[9][8 * (unsigned int)v99];
              v107 = (unsigned int)v250;
              v108 = (unsigned int)v250 + 1LL;
              if ( v108 > HIDWORD(v250) )
              {
                sub_22134E0(&v6[5], &v6[6], v108, 8);
                v107 = (unsigned int)v250;
              }
              *((_QWORD *)ptr + v107) = v106;
              LODWORD(v250) = v250 + 1;
              goto LABEL_147;
            }
            goto LABEL_205;
          }
          if ( *((_QWORD *)v122 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v122 + 3) ^ 0x6C426E6F6974656CLL
            || *((_WORD *)v122 + 16) != 25455
            || *((_BYTE *)v122 + 34) != 107 )
          {
            goto LABEL_203;
          }
          v125 = 0;
        }
LABEL_204:
        if ( !v125 )
          goto LABEL_208;
        goto LABEL_205;
      }
      if ( *((_QWORD *)v122 + 2) == 0x6974656C706D6F63LL && *((_WORD *)v122 + 12) == 28271 )
      {
        v125 = 0;
        goto LABEL_204;
      }
    }
LABEL_203:
    v125 = 1;
    goto LABEL_204;
  }
  v230 = (__int64)&v242;
  v231 = v7;
  v69 = v67;
  do
  {
    v70 = *v69 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v70 + 28) & 0x7F) != 0x2B )
      goto LABEL_143;
    v71 = *(_QWORD *)(v70 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v70 + 16) & 4) != 0 )
      v71 = *(_QWORD *)v71;
    v72 = (unsigned __int8)(*(_WORD *)(v70 + 98) >> 4);
    if ( (_DWORD)v72 == 255 )
      v72 = (unsigned int)sub_B50B40(*v69 & 0xFFFFFFFFFFFFFFF8LL);
    v73 = *(_BYTE *)(v71 + 8) & 0x7F;
    if ( (unsigned int)v73 - 34 > 5 )
    {
      if ( v73 == 18 )
      {
        v136 = v71 - 48;
        if ( v71 != 48 )
        {
LABEL_228:
          v137 = sub_968200(v230, v136, v72);
          goto LABEL_229;
        }
      }
LABEL_235:
      if ( (*(_BYTE *)(v70 + 29) & 1) != 0 )
      {
        v203 = sub_B68690(v70);
        v204 = *(__int64 **)v203;
        v205 = *(_QWORD *)v203 + 8LL * *(unsigned int *)(v203 + 8);
        if ( *(_QWORD *)v203 >= v205 )
        {
          if ( v204 != (__int64 *)v205 )
          {
            if ( *(_WORD *)(*(_QWORD *)v205 + 36LL) == 414 )
              goto LABEL_230;
            v215 = (__int64 *)(v205 + 8);
            while ( v204 != v215 )
            {
              v216 = *v215++;
              if ( *(_WORD *)(v216 + 36) == 414 )
                goto LABEL_230;
            }
          }
        }
        else
        {
          v206 = *(__int64 **)v203;
          while ( *(_WORD *)(*v206 + 36) != 414 )
          {
            if ( (__int64 *)v205 == ++v206 )
              goto LABEL_236;
          }
          if ( (__int64 *)v205 != v206 )
            goto LABEL_230;
        }
      }
LABEL_236:
      if ( !v244 )
        goto LABEL_143;
      v140 = *(_QWORD *)(v70 + 40);
      if ( (v140 & 7) != 0 )
      {
        v146 = 0;
        v145 = &byte_22CD811;
        goto LABEL_246;
      }
      if ( (v140 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v141 = *(unsigned int **)((v140 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v142 = *v141;
        v143 = v141 + 4;
        switch ( v142 )
        {
          case 17LL:
            if ( *((_QWORD *)v141 + 2) ^ 0x6974656C706D6F63LL | *((_QWORD *)v141 + 3) ^ 0x656C646E61486E6FLL
              || *((_BYTE *)v141 + 32) != 114 )
            {
LABEL_242:
              v144 = 1;
              goto LABEL_243;
            }
            goto LABEL_393;
          case 10LL:
            if ( *((_QWORD *)v141 + 2) != 0x6974656C706D6F63LL || *((_WORD *)v141 + 12) != 28271 )
              goto LABEL_242;
LABEL_393:
            v144 = 0;
            goto LABEL_243;
          case 21LL:
            if ( *((_QWORD *)v141 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v141 + 3) ^ 0x61486E6F6974656CLL
              || v141[8] != 1701602414
              || *((_BYTE *)v141 + 36) != 114 )
            {
              goto LABEL_242;
            }
            v144 = 0;
LABEL_243:
            if ( !v144 )
              goto LABEL_247;
            break;
          case 14LL:
            if ( *((_QWORD *)v141 + 2) != 0x706D6F4368746977LL
              || v141[6] != 1769235820
              || *((_WORD *)v141 + 14) != 28271 )
            {
              goto LABEL_242;
            }
            v144 = 0;
            goto LABEL_243;
          case 15LL:
            if ( *((_QWORD *)v141 + 2) != 0x6974656C706D6F63LL
              || v141[6] != 1816292975
              || *((_WORD *)v141 + 14) != 25455
              || *((_BYTE *)v141 + 30) != 107 )
            {
              goto LABEL_242;
            }
            v144 = 0;
            goto LABEL_243;
          case 19LL:
            if ( *((_QWORD *)v141 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v141 + 3) ^ 0x6C426E6F6974656CLL
              || *((_WORD *)v141 + 16) != 25455
              || *((_BYTE *)v141 + 34) != 107 )
            {
              goto LABEL_242;
            }
            v144 = 0;
            goto LABEL_243;
          case 7LL:
            if ( v141[4] == 1819305330 && *((_WORD *)v141 + 10) == 21625 && *((_BYTE *)v141 + 22) == 111 )
              goto LABEL_247;
            break;
          case 5LL:
            if ( v141[4] == 1819305330 && *((_BYTE *)v141 + 20) == 121 )
              goto LABEL_247;
            break;
          default:
            if ( v142 == 11
              && *((_QWORD *)v141 + 2) == 0x6C70655268746977LL
              && *((_WORD *)v141 + 12) == 21625
              && *((_BYTE *)v141 + 26) == 111 )
            {
              goto LABEL_247;
            }
            break;
        }
      }
      v145 = &byte_22CD811;
      v146 = v140 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v146 )
      {
        v147 = *(unsigned int **)(v146 + 16);
        v146 = *v147;
        v145 = (const char *)(v147 + 4);
      }
LABEL_246:
      v148 = sub_9677D0((__int64)v145, v146);
      v140 = (unsigned __int64)&unk_2B16370;
      if ( v148 == (char **)&unk_2B16370 )
        goto LABEL_143;
LABEL_247:
      v149 = *(_QWORD *)(*(_QWORD *)(v70 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v150 = *(_QWORD *)(*(_QWORD *)(v149 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v150 + 16) == 11 )
      {
        if ( *(_BYTE *)(v149 + 16) != 11 )
          v149 = sub_F3F310(v149, v140, v150, v143, v5);
        v151 = *(_QWORD *)(*(_QWORD *)(v149 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        v152 = (unsigned int)*(unsigned __int8 *)(v151 + 16) - 25;
        if ( (unsigned int)v152 > 1 )
          v151 = sub_F3F310(v151, v140, v152, v143, v5);
        v153 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v151 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v153 + 16) == 13 && ((*(_WORD *)(v153 + 18) >> 3) & 0x1FF) == 0x1B3 )
          goto LABEL_230;
      }
      goto LABEL_143;
    }
    if ( v71 == 72 )
    {
      v136 = 24;
      if ( v73 == 18 )
        goto LABEL_228;
      goto LABEL_235;
    }
    sub_B52330(v71 - 72);
    if ( (unsigned int)v72 >= v75 )
      goto LABEL_143;
    if ( (*(_BYTE *)(v71 - 43) & 1) == 0 )
      goto LABEL_119;
    v76 = sub_B68690(v71 - 72);
    v77 = *(__int64 **)v76;
    v78 = *(_QWORD *)v76 + 8LL * *(unsigned int *)(v76 + 8);
    if ( (unsigned __int64)v77 >= v78 )
    {
      if ( v77 == (__int64 *)v78 )
        goto LABEL_119;
      if ( *(_WORD *)(*(_QWORD *)v78 + 36LL) != 364 )
      {
        v219 = (__int64 *)(v78 + 8);
        while ( 1 )
        {
          v74 = v219;
          if ( v77 == v219 )
            break;
          v220 = *v219++;
          if ( *(_WORD *)(v220 + 36) == 364 )
            goto LABEL_385;
        }
LABEL_119:
        v80 = *(_QWORD *)(*(_QWORD *)(v71 + 48) + 8 * v72);
        if ( (*(_BYTE *)(v80 + 29) & 1) != 0 )
        {
          v221 = sub_B68690(v80);
          v222 = *(__int64 **)v221;
          v223 = *(_QWORD *)v221 + 8LL * *(unsigned int *)(v221 + 8);
          if ( *(_QWORD *)v221 >= v223 )
          {
            if ( v222 != (__int64 *)v223 )
            {
              if ( *(_WORD *)(*(_QWORD *)v223 + 36LL) == 414 )
                goto LABEL_230;
              v228 = (__int64 *)(v223 + 8);
              while ( 1 )
              {
                v74 = v228;
                if ( v222 == v228 )
                  break;
                v229 = *v228++;
                if ( *(_WORD *)(v229 + 36) == 414 )
                  goto LABEL_230;
              }
            }
          }
          else
          {
            v224 = *(__int64 **)v221;
            while ( *(_WORD *)(*v224 + 36) != 414 )
            {
              if ( (__int64 *)v223 == ++v224 )
                goto LABEL_120;
            }
            if ( (__int64 *)v223 != v224 )
              goto LABEL_230;
          }
        }
LABEL_120:
        if ( !v244 )
          goto LABEL_143;
        v81 = *(_QWORD *)(v80 + 40);
        if ( (v81 & 7) != 0 )
        {
          v87 = 0;
          v86 = &byte_22CD811;
          goto LABEL_130;
        }
        if ( (v81 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_128;
        v82 = *(unsigned int **)((v81 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v83 = *v82;
        v84 = v82 + 4;
        if ( v83 == 17 )
        {
          if ( *((_QWORD *)v82 + 2) ^ 0x6974656C706D6F63LL | *((_QWORD *)v82 + 3) ^ 0x656C646E61486E6FLL
            || *((_BYTE *)v82 + 32) != 114 )
          {
            goto LABEL_126;
          }
LABEL_440:
          v85 = 0;
LABEL_127:
          if ( !v85 )
            goto LABEL_131;
LABEL_128:
          v86 = &byte_22CD811;
          v87 = v81 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v81 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v88 = *(unsigned int **)(v87 + 16);
            v87 = *v88;
            v86 = (const char *)(v88 + 4);
          }
LABEL_130:
          v89 = sub_9677D0((__int64)v86, v87);
          v84 = &unk_2B16370;
          if ( v89 != (char **)&unk_2B16370 )
          {
LABEL_131:
            v90 = *(_QWORD *)(*(_QWORD *)(v80 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            v91 = *(_QWORD *)(*(_QWORD *)(v90 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v91 + 16) == 11 )
            {
              if ( *(_BYTE *)(v90 + 16) != 11 )
                v90 = sub_F3F310(v90, v84, v91, v74, v5);
              v92 = *(_QWORD *)(*(_QWORD *)(v90 + 32) & 0xFFFFFFFFFFFFFFF0LL);
              v93 = (unsigned int)*(unsigned __int8 *)(v92 + 16) - 25;
              if ( (unsigned int)v93 > 1 )
                v92 = sub_F3F310(v92, v84, v93, v74, v5);
              v94 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v92 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v94 + 16) == 13 && ((*(_WORD *)(v94 + 18) >> 3) & 0x1FF) == 0x1B3 )
                goto LABEL_230;
              if ( !v244 )
                goto LABEL_143;
            }
          }
          v95 = *(_QWORD *)(v71 - 32);
          if ( (v95 & 7) != 0 )
          {
            sub_B52330(v71 - 72);
            goto LABEL_143;
          }
          sub_B52330(v71 - 72);
          if ( v96 == 1 )
          {
            v97 = v95 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v97 )
            {
              if ( sub_9677D0(*(_QWORD *)(v97 + 16) + 16LL, **(unsigned int **)(v97 + 16)) != (char **)&unk_2B16370 )
                goto LABEL_230;
            }
          }
          goto LABEL_143;
        }
        if ( v83 == 10 )
        {
          if ( *((_QWORD *)v82 + 2) == 0x6974656C706D6F63LL && *((_WORD *)v82 + 12) == 28271 )
            goto LABEL_440;
        }
        else if ( v83 == 21 )
        {
          if ( !(*((_QWORD *)v82 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v82 + 3) ^ 0x61486E6F6974656CLL)
            && v82[8] == 1701602414
            && *((_BYTE *)v82 + 36) == 114 )
          {
            v85 = 0;
            goto LABEL_127;
          }
        }
        else if ( v83 == 14 )
        {
          if ( *((_QWORD *)v82 + 2) == 0x706D6F4368746977LL && v82[6] == 1769235820 && *((_WORD *)v82 + 14) == 28271 )
          {
            v85 = 0;
            goto LABEL_127;
          }
        }
        else if ( v83 == 15 )
        {
          if ( *((_QWORD *)v82 + 2) == 0x6974656C706D6F63LL
            && v82[6] == 1816292975
            && *((_WORD *)v82 + 14) == 25455
            && *((_BYTE *)v82 + 30) == 107 )
          {
            v85 = 0;
            goto LABEL_127;
          }
        }
        else
        {
          if ( v83 != 19 )
          {
            if ( v83 == 7 )
            {
              if ( v82[4] != 1819305330 || *((_WORD *)v82 + 10) != 21625 || *((_BYTE *)v82 + 22) != 111 )
                goto LABEL_128;
            }
            else if ( v83 == 5 )
            {
              if ( v82[4] != 1819305330 || *((_BYTE *)v82 + 20) != 121 )
                goto LABEL_128;
            }
            else if ( v83 != 11
                   || *((_QWORD *)v82 + 2) != 0x6C70655268746977LL
                   || *((_WORD *)v82 + 12) != 21625
                   || *((_BYTE *)v82 + 26) != 111 )
            {
              goto LABEL_128;
            }
            goto LABEL_131;
          }
          if ( !(*((_QWORD *)v82 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v82 + 3) ^ 0x6C426E6F6974656CLL)
            && *((_WORD *)v82 + 16) == 25455
            && *((_BYTE *)v82 + 34) == 107 )
          {
            v85 = 0;
            goto LABEL_127;
          }
        }
LABEL_126:
        v85 = 1;
        goto LABEL_127;
      }
    }
    else
    {
      v79 = v77;
      while ( 1 )
      {
        v74 = (__int64 *)*v79;
        if ( *(_WORD *)(*v79 + 36) == 364 )
          break;
        if ( (__int64 *)v78 == ++v79 )
          goto LABEL_119;
      }
      if ( (__int64 *)v78 == v79 )
        goto LABEL_119;
    }
LABEL_385:
    v217 = *v77;
    if ( *(_WORD *)(*v77 + 36) != 364 )
    {
      v218 = v77 + 1;
      do
        v217 = *v218++;
      while ( *(_WORD *)(v217 + 36) != 364 );
    }
    if ( *(_DWORD *)(v217 + 40) )
    {
      v137 = (*(_DWORD *)(v217 + 44) & 0x3FFFFFFF) - 1 - ((*(_DWORD *)(v217 + 44) >> 30) & 1) == (_DWORD)v72;
LABEL_229:
      if ( !v137 )
        goto LABEL_143;
LABEL_230:
      v138 = (unsigned int)v250;
      v139 = (unsigned int)v250 + 1LL;
      if ( v139 > HIDWORD(v250) )
      {
        sub_22134E0(v230 + 80, v230 + 96, v139, 8);
        v138 = (unsigned int)v250;
      }
      *((_QWORD *)ptr + v138) = v70;
      LODWORD(v250) = v250 + 1;
    }
LABEL_143:
    v69 += 2;
  }
  while ( v68 != v69 );
  v7 = v231;
  v6 = (__m128 *)v230;
  v98 = *((unsigned int *)v231 + 20);
  if ( *((_DWORD *)v231 + 20) )
    goto LABEL_145;
LABEL_12:
  v20 = v250;
  if ( (_DWORD)v250 )
  {
    v30 = (unsigned int)v250;
    v234 = 0x200000000LL;
    v233 = &v235;
    if ( (unsigned int)v250 > 2uLL )
    {
      sub_22134E0(&v233, &v235, (unsigned int)v250, 16);
      v166 = v233;
      do
      {
        *v166 = 8;
        v166 += 4;
        *((_QWORD *)v166 - 1) = 0;
        --v30;
      }
      while ( v30 );
    }
    else
    {
      v235 = 8;
      v236 = 0;
      if ( (unsigned int)v250 != 1 )
      {
        v237 = 8;
        v238 = 0;
      }
    }
    LODWORD(v234) = v20;
    v31 = *(unsigned int *)(v242.m128_u64[0] + 24);
    v239 = (void **)v241;
    v230 = (__int64)&v239;
    LODWORD(v231) = v31;
    v240 = 0x800000000LL;
    if ( v31 > 8 )
    {
      v163 = v31;
      v32 = (void **)sub_22136C0(v230, v241, v31, 48, &v232);
      v164 = v32;
      do
      {
        *((_DWORD *)v164 + 2) = 0;
        *((_DWORD *)v164 + 3) = 2;
        v165 = v234;
        *v164 = v164 + 2;
        if ( v165 )
          sub_966910((__int64 *)v164, (__int64 *)&v233);
        v164 += 6;
        --v163;
      }
      while ( v163 );
      v167 = v239;
      v168 = &v239[6 * (unsigned int)v240];
      if ( v239 != v168 )
      {
        do
        {
          while ( 1 )
          {
            v168 -= 6;
            if ( *v168 == v168 + 2 )
              break;
            free(*v168);
            if ( v167 == v168 )
              goto LABEL_292;
          }
        }
        while ( v167 != v168 );
LABEL_292:
        v168 = v239;
      }
      v169 = v232;
      if ( v168 != (void **)(v230 + 16) )
        free(v168);
      v239 = v32;
      v240 = __PAIR64__(v169, (unsigned int)v231);
    }
    else
    {
      v32 = (void **)v241;
      if ( v31 )
      {
        v109 = v31;
        while ( 1 )
        {
          *((_DWORD *)v32 + 2) = 0;
          *v32 = v32 + 2;
          *((_DWORD *)v32 + 3) = 2;
          if ( v20 )
            sub_966910((__int64 *)v32, (__int64 *)&v233);
          v32 += 6;
          if ( !--v109 )
            break;
          v20 = v234;
        }
        v32 = v239;
      }
      LODWORD(v240) = (_DWORD)v231;
    }
    v33 = (unsigned int)v253;
    v34 = (void **)v252;
    if ( v32 != (void **)(v230 + 16) )
    {
      v154 = (void **)((char *)v252 + 48 * (unsigned int)v253);
      if ( v154 != v252 )
      {
        do
        {
          while ( 1 )
          {
            v154 -= 6;
            if ( *v154 == v154 + 2 )
              break;
            free(*v154);
            if ( v154 == v34 )
              goto LABEL_258;
          }
        }
        while ( v154 != v34 );
LABEL_258:
        v34 = (void **)v252;
      }
      if ( v34 != (void **)&v6[8] )
        free(v34);
      v252 = v239;
      v253 = v240;
      goto LABEL_172;
    }
    if ( v31 <= (unsigned int)v253 )
    {
      v110 = (char *)v252;
      if ( v31 )
      {
        v200 = (void **)((char *)v252 + 48 * v31);
        do
        {
          v201 = (char ***)v32;
          v202 = (char ***)v34;
          v34 += 6;
          v32 += 6;
          sub_966A00(v202, v201);
        }
        while ( v34 != v200 );
        v110 = (char *)v252;
        v33 = (unsigned int)v253;
      }
      v111 = (void **)&v110[48 * v33];
      while ( v34 != v111 )
      {
        while ( 1 )
        {
          v111 -= 6;
          if ( *v111 == v111 + 2 )
            break;
          free(*v111);
          if ( v34 == v111 )
            goto LABEL_166;
        }
      }
LABEL_166:
      v112 = v239;
      LODWORD(v253) = (_DWORD)v231;
      v113 = 6LL * (unsigned int)v240;
      v35 = &v239[v113];
      if ( v239 == &v239[v113] )
        goto LABEL_170;
      do
      {
        while ( 1 )
        {
          v35 -= 6;
          if ( *v35 == v35 + 2 )
            break;
          free(*v35);
          if ( v112 == v35 )
            goto LABEL_169;
        }
      }
      while ( v112 != v35 );
    }
    else
    {
      if ( v31 > HIDWORD(v253) )
      {
        v207 = (void **)((char *)v252 + 48 * (unsigned int)v253);
        while ( v207 != v34 )
        {
          while ( 1 )
          {
            v207 -= 6;
            if ( *v207 == v207 + 2 )
              break;
            free(*v207);
            if ( v207 == v34 )
              goto LABEL_359;
          }
        }
LABEL_359:
        LODWORD(v253) = 0;
        v208 = sub_22136C0(&v6[7], &v6[8], v31, 48, &v232);
        v209 = (void **)v252;
        v34 = (void **)v208;
        v210 = v208;
        v211 = (void **)((char *)v252 + 48 * (unsigned int)v253);
        if ( v252 != v211 )
        {
          do
          {
            *(_DWORD *)(v210 + 8) = 0;
            *(_DWORD *)(v210 + 12) = 2;
            v212 = *((_DWORD *)v209 + 2);
            *(_QWORD *)v210 = v210 + 16;
            if ( v212 )
              sub_966A00((char ***)v210, (char ***)v209);
            v209 += 6;
            v210 += 48;
          }
          while ( v211 != v209 );
          v213 = (void **)v252;
          v211 = (void **)((char *)v252 + 48 * (unsigned int)v253);
          if ( v252 != v211 )
          {
            do
            {
              while ( 1 )
              {
                v211 -= 6;
                if ( *v211 == v211 + 2 )
                  break;
                free(*v211);
                if ( v213 == v211 )
                  goto LABEL_367;
              }
            }
            while ( v213 != v211 );
LABEL_367:
            v211 = (void **)v252;
          }
        }
        v214 = v232;
        if ( v211 != (void **)&v6[8] )
          free(v211);
        v35 = v239;
        HIDWORD(v253) = v214;
        v252 = v34;
        v31 = (unsigned int)v240;
        v32 = v239;
      }
      else
      {
        v35 = v32;
        if ( (_DWORD)v253 )
        {
          v194 = 48LL * (unsigned int)v253;
          v195 = (void **)((char *)v252 + v194);
          do
          {
            v196 = (char ***)v32;
            v197 = (char ***)v34;
            v34 += 6;
            v32 += 6;
            sub_966A00(v197, v196);
          }
          while ( v34 != v195 );
          v198 = v194;
          v31 = (unsigned int)v240;
          v34 = (void **)((char *)v252 + v194);
          v35 = v239;
          v32 = (void **)((char *)v239 + v198);
        }
      }
      v36 = &v35[6 * v31];
      if ( v36 != v32 )
      {
        do
        {
          *((_DWORD *)v34 + 2) = 0;
          *v34 = v34 + 2;
          *((_DWORD *)v34 + 3) = 2;
          if ( *((_DWORD *)v32 + 2) )
            sub_966A00((char ***)v34, (char ***)v32);
          v32 += 6;
          v34 += 6;
        }
        while ( v36 != v32 );
        v35 = v239;
        v32 = &v239[6 * (unsigned int)v240];
      }
      LODWORD(v253) = (_DWORD)v231;
      if ( v32 == v35 )
        goto LABEL_170;
      while ( 1 )
      {
        v32 -= 6;
        v135 = *v32;
        if ( *v32 != v32 + 2 )
          break;
LABEL_225:
        if ( v32 == v35 )
          goto LABEL_169;
      }
      while ( 1 )
      {
        free(v135);
        if ( v32 == v35 )
          break;
        v32 -= 6;
        v135 = *v32;
        if ( *v32 == v32 + 2 )
          goto LABEL_225;
      }
    }
LABEL_169:
    v35 = v239;
LABEL_170:
    LODWORD(v240) = 0;
    if ( v35 != (void **)(v230 + 16) )
      free(v35);
LABEL_172:
    if ( v233 != &v235 )
      free(v233);
  }
LABEL_13:
  sub_96B7F0((__int64)v6);
  v21 = (void **)v252;
  v22 = (void **)((char *)v252 + 48 * (unsigned int)v253);
  if ( v252 != v22 )
  {
    do
    {
      while ( 1 )
      {
        v22 -= 6;
        if ( *v22 == v22 + 2 )
          break;
        free(*v22);
        if ( v21 == v22 )
          goto LABEL_16;
      }
    }
    while ( v21 != v22 );
LABEL_16:
    v22 = (void **)v252;
  }
  if ( v22 != (void **)&v6[8] )
    free(v22);
  if ( ptr != &v6[6] )
    free(ptr);
  if ( v246 != &v6[3] )
    free(v246);
}

