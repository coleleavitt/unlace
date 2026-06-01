__int64 __fastcall sub_13DD4A0(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  char *v5; // rax
  char *v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  int v9; // edx
  int v10; // edx
  __int64 v11; // r8
  char *v12; // rbx
  int v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // ecx
  char *v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // r15
  char v19; // al
  int v20; // r12d
  unsigned __int64 v21; // r15
  char *v22; // rbx
  char v23; // al
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  char *v26; // rdi
  unsigned __int64 v27; // r8
  char v29; // al
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rbx
  char *v32; // rdi
  char *v33; // r15
  unsigned __int64 v34; // r13
  bool v35; // al
  char *v36; // rdx
  int v37; // esi
  unsigned __int64 v38; // r8
  char *v39; // rdx
  unsigned __int64 v40; // r13
  char v41; // al
  unsigned __int64 v42; // rax
  int (**v43)(int); // rax
  int v44; // edi
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rsi
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int v107; // eax
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // eax
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // eax
  int v139; // eax
  int v140; // eax
  int v141; // eax
  int v142; // eax
  int v143; // eax
  int v144; // eax
  int v145; // eax
  int v146; // eax
  int v147; // eax
  int v148; // eax
  int v149; // eax
  int v150; // eax
  int v151; // eax
  int v152; // eax
  __int64 v153; // [rsp+0h] [rbp-68h]
  int v154; // [rsp+0h] [rbp-68h]
  int v155; // [rsp+0h] [rbp-68h]
  int v156; // [rsp+0h] [rbp-68h]
  char *v157; // [rsp+0h] [rbp-68h]
  int v158; // [rsp+0h] [rbp-68h]
  int v159; // [rsp+0h] [rbp-68h]
  int v160; // [rsp+0h] [rbp-68h]
  int v161; // [rsp+0h] [rbp-68h]
  int v162; // [rsp+0h] [rbp-68h]
  int v163; // [rsp+0h] [rbp-68h]
  int v164; // [rsp+0h] [rbp-68h]
  int v165; // [rsp+0h] [rbp-68h]
  int v166; // [rsp+0h] [rbp-68h]
  int v167; // [rsp+0h] [rbp-68h]
  int v168; // [rsp+0h] [rbp-68h]
  int v169; // [rsp+0h] [rbp-68h]
  int v170; // [rsp+0h] [rbp-68h]
  int v171; // [rsp+0h] [rbp-68h]
  int v172; // [rsp+0h] [rbp-68h]
  int v173; // [rsp+0h] [rbp-68h]
  int v174; // [rsp+0h] [rbp-68h]
  int v175; // [rsp+0h] [rbp-68h]
  int v176; // [rsp+0h] [rbp-68h]
  int v177; // [rsp+0h] [rbp-68h]
  int v178; // [rsp+0h] [rbp-68h]
  int v179; // [rsp+0h] [rbp-68h]
  int v180; // [rsp+0h] [rbp-68h]
  int v181; // [rsp+0h] [rbp-68h]
  int v182; // [rsp+0h] [rbp-68h]
  int v183; // [rsp+0h] [rbp-68h]
  int v184; // [rsp+0h] [rbp-68h]
  int v185; // [rsp+0h] [rbp-68h]
  int v186; // [rsp+0h] [rbp-68h]
  int v187; // [rsp+0h] [rbp-68h]
  int v188; // [rsp+0h] [rbp-68h]
  int v189; // [rsp+0h] [rbp-68h]
  int v190; // [rsp+0h] [rbp-68h]
  int v191; // [rsp+0h] [rbp-68h]
  int v192; // [rsp+0h] [rbp-68h]
  int v193; // [rsp+0h] [rbp-68h]
  int v194; // [rsp+0h] [rbp-68h]
  int v195; // [rsp+0h] [rbp-68h]
  int v196; // [rsp+0h] [rbp-68h]
  int v197; // [rsp+0h] [rbp-68h]
  int v198; // [rsp+0h] [rbp-68h]
  int v199; // [rsp+0h] [rbp-68h]
  int v200; // [rsp+0h] [rbp-68h]
  int v201; // [rsp+0h] [rbp-68h]
  int v202; // [rsp+0h] [rbp-68h]
  int v203; // [rsp+0h] [rbp-68h]
  int v204; // [rsp+0h] [rbp-68h]
  int v205; // [rsp+0h] [rbp-68h]
  int v206; // [rsp+0h] [rbp-68h]
  int v207; // [rsp+0h] [rbp-68h]
  int v208; // [rsp+0h] [rbp-68h]
  int v209; // [rsp+0h] [rbp-68h]
  int v210; // [rsp+0h] [rbp-68h]
  int v211; // [rsp+0h] [rbp-68h]
  int v212; // [rsp+0h] [rbp-68h]
  int v213; // [rsp+0h] [rbp-68h]
  int v214; // [rsp+0h] [rbp-68h]
  int v215; // [rsp+0h] [rbp-68h]
  int v216; // [rsp+0h] [rbp-68h]
  int v217; // [rsp+0h] [rbp-68h]
  int v218; // [rsp+0h] [rbp-68h]
  int v219; // [rsp+0h] [rbp-68h]
  int v220; // [rsp+0h] [rbp-68h]
  int v221; // [rsp+0h] [rbp-68h]
  int v222; // [rsp+0h] [rbp-68h]
  int v223; // [rsp+0h] [rbp-68h]
  int v224; // [rsp+0h] [rbp-68h]
  int v225; // [rsp+0h] [rbp-68h]
  int v226; // [rsp+0h] [rbp-68h]
  int v227; // [rsp+0h] [rbp-68h]
  int v228; // [rsp+0h] [rbp-68h]
  int v229; // [rsp+0h] [rbp-68h]
  int v230; // [rsp+0h] [rbp-68h]
  int v231; // [rsp+0h] [rbp-68h]
  int v232; // [rsp+0h] [rbp-68h]
  int v233; // [rsp+0h] [rbp-68h]
  int v234; // [rsp+0h] [rbp-68h]
  int v235; // [rsp+0h] [rbp-68h]
  int v236; // [rsp+0h] [rbp-68h]
  int v237; // [rsp+0h] [rbp-68h]
  int v238; // [rsp+0h] [rbp-68h]
  int v239; // [rsp+0h] [rbp-68h]
  int v240; // [rsp+0h] [rbp-68h]
  int v241; // [rsp+0h] [rbp-68h]
  int v242; // [rsp+0h] [rbp-68h]
  int v243; // [rsp+0h] [rbp-68h]
  int v244; // [rsp+0h] [rbp-68h]
  int v245; // [rsp+0h] [rbp-68h]
  int v246; // [rsp+0h] [rbp-68h]
  int v247; // [rsp+0h] [rbp-68h]
  int v248; // [rsp+0h] [rbp-68h]
  int v249; // [rsp+0h] [rbp-68h]
  int v250; // [rsp+8h] [rbp-60h]
  char *v251; // [rsp+10h] [rbp-58h] BYREF
  int (**v252)(int); // [rsp+18h] [rbp-50h]
  int v253; // [rsp+20h] [rbp-48h]
  int v254; // [rsp+24h] [rbp-44h]

  v4 = *(_QWORD *)(a2 + 8);
  v251 = (char *)sub_13DD420;
  v5 = *(char **)a2;
  v252 = &isspace;
  if ( v4 )
  {
    v6 = v5;
    while ( sub_13DD420((unsigned int (__fastcall *)(_QWORD))&isspace, *v6) )
    {
      ++v6;
      if ( !--v4 )
      {
        v7 = *(_QWORD *)(a2 + 8);
        v5 = *(char **)a2;
        v8 = v7;
        v4 = (unsigned int)v7;
        v9 = v7;
        if ( (unsigned int)v7 <= v7 )
          goto LABEL_6;
        goto LABEL_47;
      }
    }
    v8 = *(_QWORD *)(a2 + 8);
    v5 = *(char **)a2;
    LODWORD(v7) = v8 - v4;
    if ( v8 - v4 > v8 )
      v7 = *(_QWORD *)(a2 + 8);
    v4 = (unsigned int)v7;
    v9 = v7;
    if ( (unsigned int)v7 > v8 )
    {
LABEL_47:
      v12 = &v5[v8];
      v13 = *(_DWORD *)(a2 + 16) + v7;
      goto LABEL_48;
    }
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
LABEL_6:
  v10 = *(_DWORD *)(a2 + 16) + v9;
  v251 = (char *)sub_13DD420;
  v11 = v8 - v4;
  v12 = &v5[v4];
  v13 = v10;
  *(_DWORD *)(a2 + 16) = v10;
  *(_QWORD *)a2 = &v5[v4];
  *(_QWORD *)(a2 + 8) = v11;
  v252 = &isspace;
  if ( v11 )
  {
    while ( 1 )
    {
      v153 = v11;
      if ( !sub_13DD420((unsigned int (__fastcall *)(_QWORD))&isspace, *v12) )
        break;
      ++v12;
      v11 = v153 - 1;
      if ( v153 == 1 )
      {
        v14 = *(_QWORD *)(a2 + 8);
        v15 = *(_DWORD *)(a2 + 16);
        v16 = *(char **)a2;
        LODWORD(v17) = v14;
        goto LABEL_10;
      }
    }
    v14 = *(_QWORD *)(a2 + 8);
    v15 = *(_DWORD *)(a2 + 16);
    v16 = *(char **)a2;
    LODWORD(v17) = v14 - v153;
    if ( v14 - v153 > v14 )
      v17 = *(_QWORD *)(a2 + 8);
LABEL_10:
    v13 = v17 + v15;
    if ( (unsigned int)v17 > v14 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      *(_QWORD *)a2 = &v16[v14];
      *(_DWORD *)(a2 + 16) = v13;
LABEL_38:
      *(_DWORD *)a1 = 1;
      *(_DWORD *)(a1 + 4) = v13;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      return a1;
    }
    v12 = &v16[(unsigned int)v17];
    v18 = v14 - (unsigned int)v17;
    if ( v18 == -1 )
    {
      *(_QWORD *)a2 = v12;
      *(_QWORD *)(a2 + 8) = -1;
      *(_DWORD *)(a2 + 16) = v13;
      goto LABEL_13;
    }
  }
  else
  {
LABEL_48:
    v18 = 0;
  }
  *(_QWORD *)a2 = v12;
  *(_QWORD *)(a2 + 8) = v18;
  *(_DWORD *)(a2 + 16) = v13;
  if ( !v18 )
    goto LABEL_38;
LABEL_13:
  v19 = *v12;
  if ( *v12 == 44 )
  {
    *(_DWORD *)a1 = 10;
    *(_QWORD *)(a2 + 8) = v18 - 1;
    *(_QWORD *)a2 = v12 + 1;
    *(_DWORD *)(a2 + 16) = v13 + 1;
    *(_DWORD *)(a1 + 4) = v13;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    return a1;
  }
  if ( v19 > 44 )
  {
    switch ( v19 )
    {
      case '=':
        *(_DWORD *)a1 = 12;
        *(_QWORD *)(a2 + 8) = v18 - 1;
        *(_QWORD *)a2 = v12 + 1;
        *(_DWORD *)(a2 + 16) = v13 + 1;
        *(_DWORD *)(a1 + 4) = v13;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        return a1;
      case '|':
        *(_DWORD *)a1 = 11;
        *(_QWORD *)(a2 + 8) = v18 - 1;
        *(_QWORD *)a2 = v12 + 1;
        *(_DWORD *)(a2 + 16) = v13 + 1;
        *(_DWORD *)(a1 + 4) = v13;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        return a1;
      case '-':
        *(_DWORD *)a1 = 14;
        *(_QWORD *)(a2 + 8) = v18 - 1;
        *(_QWORD *)a2 = v12 + 1;
        *(_DWORD *)(a2 + 16) = v13 + 1;
        *(_DWORD *)(a1 + 4) = v13;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        return a1;
    }
  }
  else
  {
    switch ( v19 )
    {
      case ')':
        *(_DWORD *)a1 = 9;
        *(_QWORD *)(a2 + 8) = v18 - 1;
        *(_QWORD *)a2 = v12 + 1;
        *(_DWORD *)(a2 + 16) = v13 + 1;
        *(_DWORD *)(a1 + 4) = v13;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        return a1;
      case '+':
        *(_DWORD *)a1 = 13;
        *(_QWORD *)(a2 + 8) = v18 - 1;
        *(_QWORD *)a2 = v12 + 1;
        *(_DWORD *)(a2 + 16) = v13 + 1;
        *(_DWORD *)(a1 + 4) = v13;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        return a1;
      case '(':
        *(_DWORD *)a1 = 8;
        *(_QWORD *)(a2 + 8) = v18 - 1;
        *(_QWORD *)a2 = v12 + 1;
        *(_DWORD *)(a2 + 16) = v13 + 1;
        *(_DWORD *)(a1 + 4) = v13;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        return a1;
    }
  }
  if ( (unsigned int)(v19 - 48) > 9 && v19 != 46 )
  {
    if ( v18 == 1 )
    {
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = v13;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 0;
      return a1;
    }
    if ( ((unsigned __int8)(v19 - 115) <= 2u || v19 == 98) && (unsigned int)(v12[1] - 48) <= 9 )
    {
      if ( v19 == 115 )
      {
        v20 = 7;
      }
      else if ( v19 <= 115 )
      {
        v20 = 4;
      }
      else if ( v19 == 116 )
      {
        v20 = 5;
      }
      else
      {
        v20 = 6;
      }
      v21 = v18 - 1;
      v22 = v12 + 1;
      *(_QWORD *)a2 = v22;
      *(_QWORD *)(a2 + 8) = v21;
      *(_DWORD *)(a2 + 16) = v13 + 1;
      while ( 1 )
      {
        v154 = v13;
        v23 = sub_1165330((__int64 (__fastcall *)(_QWORD))sub_13DD460, *v22);
        v13 = v154;
        if ( !v23 )
          break;
        ++v22;
        if ( !--v21 )
        {
          v24 = *(_QWORD *)(a2 + 8);
          v25 = -1;
          goto LABEL_32;
        }
      }
      v24 = *(_QWORD *)(a2 + 8);
      v25 = v24 - v21;
LABEL_32:
      v26 = *(char **)a2;
      if ( v25 > v24 )
        v25 = v24;
      v27 = 0;
      if ( (unsigned int)v25 <= v24 )
      {
        v27 = v24 - (unsigned int)v25;
        v24 = (unsigned int)v25;
      }
      *(_QWORD *)(a2 + 8) = v27;
      *(_QWORD *)a2 = &v26[v24];
      *(_DWORD *)(a2 + 16) += v25;
      *(_DWORD *)a1 = v20;
      *(_DWORD *)(a1 + 4) = v154;
      *(_QWORD *)(a1 + 8) = v26;
      *(_QWORD *)(a1 + 16) = v25;
      return a1;
    }
    v39 = v12;
    v40 = v18;
    while ( 1 )
    {
      v250 = v13;
      v157 = v39;
      v41 = sub_13DD440((__int64)&v251, *v39);
      v13 = v250;
      if ( !v41 )
        break;
      v39 = v157 + 1;
      if ( !--v40 )
      {
        v42 = -1;
        goto LABEL_82;
      }
    }
    v42 = v18 - v40;
LABEL_82:
    v251 = v12;
    if ( v42 <= v18 )
      v18 = v42;
    v254 = 0;
    v252 = (int (**)(int))v18;
    if ( v18 == 13 )
    {
      v53 = sub_22462B0(&v251, "RootSignature", 13);
      v13 = v250;
      if ( !v53 )
      {
        v253 = 15;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    else
    {
      v43 = (int (**)(int))v18;
    }
    if ( v43 == (int (**)(int))byte_9 )
    {
      v161 = v13;
      v52 = sub_22462B0(&v251, "RootFlags", 9);
      v13 = v161;
      if ( !v52 )
      {
        v253 = 16;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_9[6] )
    {
      v169 = v13;
      v64 = sub_22462B0(&v251, "DescriptorTable", 15);
      v13 = v169;
      if ( !v64 )
      {
        v253 = 17;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_9[4] )
    {
      v168 = v13;
      v62 = sub_22462B0(&v251, "RootConstants", 13);
      v13 = v168;
      if ( !v62 )
      {
        v253 = 18;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
      if ( v252 == (int (**)(int))&byte_9[4] )
      {
        v63 = sub_22462B0(&v251, "StaticSampler", 13);
        v13 = v168;
        if ( !v63 )
        {
          v253 = 19;
          LOBYTE(v254) = 1;
        }
        if ( (_BYTE)v254 )
          goto LABEL_189;
        v43 = v252;
      }
    }
    if ( v43 == (int (**)(int))((char *)&word_10 + 1) )
    {
      v167 = v13;
      v61 = sub_22462B0(&v251, "num32BitConstants", 17);
      v13 = v167;
      if ( !v61 )
      {
        v253 = 20;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&dword_0 + 3) )
    {
      v166 = v13;
      v58 = sub_22462B0(&v251, "CBV", 3);
      v13 = v166;
      if ( !v58 )
      {
        v253 = 21;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
      if ( v252 == (int (**)(int))((char *)&dword_0 + 3) )
      {
        v59 = sub_22462B0(&v251, "SRV", 3);
        v13 = v166;
        if ( !v59 )
        {
          v253 = 22;
          LOBYTE(v254) = 1;
        }
        if ( (_BYTE)v254 )
          goto LABEL_189;
        v43 = v252;
        if ( v252 == (int (**)(int))((char *)&dword_0 + 3) )
        {
          v60 = sub_22462B0(&v251, "UAV", 3);
          v13 = v166;
          if ( !v60 )
          {
            v253 = 23;
            LOBYTE(v254) = 1;
          }
          if ( (_BYTE)v254 )
            goto LABEL_189;
          v43 = v252;
        }
      }
    }
    if ( v43 == (int (**)(int))&byte_7 )
    {
      v165 = v13;
      v57 = sub_22462B0(&v251, "Sampler", 7);
      v13 = v165;
      if ( !v57 )
      {
        v253 = 24;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_5 )
    {
      v164 = v13;
      v56 = sub_22462B0(&v251, "space", 5);
      v13 = v164;
      if ( !v56 )
      {
        v253 = 25;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_9[1] )
    {
      v163 = v13;
      v55 = sub_22462B0(&v251, "visibility", 10);
      v13 = v163;
      if ( !v55 )
      {
        v253 = 26;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_5 )
    {
      v162 = v13;
      v54 = sub_22462B0(&v251, "flags", 5);
      v13 = v162;
      if ( !v54 )
      {
        v253 = 27;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_9[5] )
    {
      v185 = v13;
      v84 = sub_22462B0(&v251, "numDescriptors", 14);
      v13 = v185;
      if ( !v84 )
      {
        v253 = 28;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_6 )
    {
      v184 = v13;
      v82 = sub_22462B0(&v251, "offset", 6);
      v13 = v184;
      if ( !v82 )
      {
        v253 = 29;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
      if ( v252 == (int (**)(int))&byte_6 )
      {
        v83 = sub_22462B0(&v251, "filter", 6);
        v13 = v184;
        if ( !v83 )
        {
          v253 = 30;
          LOBYTE(v254) = 1;
        }
        if ( (_BYTE)v254 )
          goto LABEL_189;
        v43 = v252;
      }
    }
    if ( v43 == (int (**)(int))&byte_9[1] )
    {
      v183 = v13;
      v81 = sub_22462B0(&v251, "mipLODBias", 10);
      v13 = v183;
      if ( !v81 )
      {
        v253 = 31;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))byte_8 )
    {
      v182 = v13;
      v78 = sub_22462B0(&v251, "addressU", 8);
      v13 = v182;
      if ( !v78 )
      {
        v253 = 32;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
      if ( v252 == (int (**)(int))byte_8 )
      {
        v79 = sub_22462B0(&v251, "addressV", 8);
        v13 = v182;
        if ( !v79 )
        {
          v253 = 33;
          LOBYTE(v254) = 1;
        }
        if ( (_BYTE)v254 )
          goto LABEL_189;
        v43 = v252;
        if ( v252 == (int (**)(int))byte_8 )
        {
          v80 = sub_22462B0(&v251, "addressW", 8);
          v13 = v182;
          if ( !v80 )
          {
            v253 = 34;
            LOBYTE(v254) = 1;
          }
          if ( (_BYTE)v254 )
            goto LABEL_189;
          v43 = v252;
        }
      }
    }
    if ( v43 == (int (**)(int))&byte_9[4] )
    {
      v181 = v13;
      v77 = sub_22462B0(&v251, "maxAnisotropy", 13);
      v13 = v181;
      if ( !v77 )
      {
        v253 = 35;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_9[5] )
    {
      v180 = v13;
      v76 = sub_22462B0(&v251, "comparisonFunc", 14);
      v13 = v180;
      if ( !v76 )
      {
        v253 = 36;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_9[2] )
    {
      v179 = v13;
      v75 = sub_22462B0(&v251, "borderColor", 11);
      v13 = v179;
      if ( !v75 )
      {
        v253 = 37;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_6 )
    {
      v178 = v13;
      v73 = sub_22462B0(&v251, "minLOD", 6);
      v13 = v178;
      if ( !v73 )
      {
        v253 = 38;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
      if ( v252 == (int (**)(int))&byte_6 )
      {
        v74 = sub_22462B0(&v251, "maxLOD", 6);
        v13 = v178;
        if ( !v74 )
        {
          v253 = 39;
          LOBYTE(v254) = 1;
        }
        if ( (_BYTE)v254 )
          goto LABEL_189;
        v43 = v252;
      }
    }
    if ( v43 == (int (**)(int))byte_9 )
    {
      v177 = v13;
      v72 = sub_22462B0(&v251, "unbounded", 9);
      v13 = v177;
      if ( !v72 )
      {
        v253 = 40;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 6) )
    {
      v176 = v13;
      v71 = sub_22462B0(&v251, "DESCRIPTOR_RANGE_OFFSET_APPEND", 30);
      v13 = v176;
      if ( !v71 )
      {
        v253 = 41;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 2) )
    {
      v175 = v13;
      v70 = sub_22462B0(&v251, "ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT", 34);
      v13 = v175;
      if ( !v70 )
      {
        v253 = 42;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 6) )
    {
      v174 = v13;
      v69 = sub_22462B0(&v251, "DENY_VERTEX_SHADER_ROOT_ACCESS", 30);
      v13 = v174;
      if ( !v69 )
      {
        v253 = 43;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 4) )
    {
      v173 = v13;
      v68 = sub_22462B0(&v251, "DENY_HULL_SHADER_ROOT_ACCESS", 28);
      v13 = v173;
      if ( !v68 )
      {
        v253 = 44;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 6) )
    {
      v172 = v13;
      v67 = sub_22462B0(&v251, "DENY_DOMAIN_SHADER_ROOT_ACCESS", 30);
      v13 = v172;
      if ( !v67 )
      {
        v253 = 45;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&qword_20 )
    {
      v171 = v13;
      v66 = sub_22462B0(&v251, "DENY_GEOMETRY_SHADER_ROOT_ACCESS", 32);
      v13 = v171;
      if ( !v66 )
      {
        v253 = 46;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 5) )
    {
      v170 = v13;
      v65 = sub_22462B0(&v251, "DENY_PIXEL_SHADER_ROOT_ACCESS", 29);
      v13 = v170;
      if ( !v65 )
      {
        v253 = 47;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 5) )
    {
      v249 = v13;
      v152 = sub_22462B0(&v251, "DENY_AMPLIFICATION_SHADER_ROOT_ACCESS", 37);
      v13 = v249;
      if ( !v152 )
      {
        v253 = 48;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 4) )
    {
      v248 = v13;
      v151 = sub_22462B0(&v251, "DENY_MESH_SHADER_ROOT_ACCESS", 28);
      v13 = v248;
      if ( !v151 )
      {
        v253 = 49;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&word_12 + 1) )
    {
      v247 = v13;
      v150 = sub_22462B0(&v251, "ALLOW_STREAM_OUTPUT", 19);
      v13 = v247;
      if ( !v150 )
      {
        v253 = 50;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&dword_14 )
    {
      v246 = v13;
      v149 = sub_22462B0(&v251, "LOCAL_ROOT_SIGNATURE", 20);
      v13 = v246;
      if ( !v149 )
      {
        v253 = 51;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 1) )
    {
      v245 = v13;
      v148 = sub_22462B0(&v251, "CBV_SRV_UAV_HEAP_DIRECTLY_INDEXED", 33);
      v13 = v245;
      if ( !v148 )
      {
        v253 = 52;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 5) )
    {
      v244 = v13;
      v147 = sub_22462B0(&v251, "SAMPLER_HEAP_DIRECTLY_INDEXED", 29);
      v13 = v244;
      if ( !v147 )
      {
        v253 = 53;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_9[4] )
    {
      v243 = v13;
      v146 = sub_22462B0(&v251, "DATA_VOLATILE", 13);
      v13 = v243;
      if ( !v146 )
      {
        v253 = 54;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&qword_20 )
    {
      v242 = v13;
      v145 = sub_22462B0(&v251, "DATA_STATIC_WHILE_SET_AT_EXECUTE", 32);
      v13 = v242;
      if ( !v145 )
      {
        v253 = 55;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_9[2] )
    {
      v241 = v13;
      v144 = sub_22462B0(&v251, "DATA_STATIC", 11);
      v13 = v241;
      if ( !v144 )
      {
        v253 = 56;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&dword_14 )
    {
      v240 = v13;
      v143 = sub_22462B0(&v251, "DESCRIPTORS_VOLATILE", 20);
      v13 = v240;
      if ( !v143 )
      {
        v253 = 57;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_28 + 7) )
    {
      v239 = v13;
      v142 = sub_22462B0(&v251, "DESCRIPTORS_STATIC_KEEPING_BUFFER_BOUNDS_CHECKS", 47);
      v13 = v239;
      if ( !v142 )
      {
        v253 = 58;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&dword_14 + 1) )
    {
      v238 = v13;
      v141 = sub_22462B0(&v251, "SHADER_VISIBILITY_ALL", 21);
      v13 = v238;
      if ( !v141 )
      {
        v253 = 59;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&qword_18 )
    {
      v237 = v13;
      v140 = sub_22462B0(&v251, "SHADER_VISIBILITY_VERTEX", 24);
      v13 = v237;
      if ( !v140 )
      {
        v253 = 60;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&dword_14 + 2) )
    {
      v236 = v13;
      v139 = sub_22462B0(&v251, "SHADER_VISIBILITY_HULL", 22);
      v13 = v236;
      if ( !v139 )
      {
        v253 = 61;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&qword_18 )
    {
      v235 = v13;
      v138 = sub_22462B0(&v251, "SHADER_VISIBILITY_DOMAIN", 24);
      v13 = v235;
      if ( !v138 )
      {
        v253 = 62;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 2) )
    {
      v234 = v13;
      v137 = sub_22462B0(&v251, "SHADER_VISIBILITY_GEOMETRY", 26);
      v13 = v234;
      if ( !v137 )
      {
        v253 = 63;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&dword_14 + 3) )
    {
      v233 = v13;
      v136 = sub_22462B0(&v251, "SHADER_VISIBILITY_PIXEL", 23);
      v13 = v233;
      if ( !v136 )
      {
        v253 = 64;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 7) )
    {
      v232 = v13;
      v135 = sub_22462B0(&v251, "SHADER_VISIBILITY_AMPLIFICATION", 31);
      v13 = v232;
      if ( !v135 )
      {
        v253 = 65;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&dword_14 + 2) )
    {
      v231 = v13;
      v134 = sub_22462B0(&v251, "SHADER_VISIBILITY_MESH", 22);
      v13 = v231;
      if ( !v134 )
      {
        v253 = 66;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&qword_18 )
    {
      v230 = v13;
      v133 = sub_22462B0(&v251, "FILTER_MIN_MAG_MIP_POINT", 24);
      v13 = v230;
      if ( !v133 )
      {
        v253 = 67;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 7) )
    {
      v229 = v13;
      v132 = sub_22462B0(&v251, "FILTER_MIN_MAG_POINT_MIP_LINEAR", 31);
      v13 = v229;
      if ( !v132 )
      {
        v253 = 68;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 5) )
    {
      v228 = v13;
      v131 = sub_22462B0(&v251, "FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT", 37);
      v13 = v228;
      if ( !v131 )
      {
        v253 = 69;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 7) )
    {
      v227 = v13;
      v129 = sub_22462B0(&v251, "FILTER_MIN_POINT_MAG_MIP_LINEAR", 31);
      v13 = v227;
      if ( !v129 )
      {
        v253 = 70;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
      if ( v252 == (int (**)(int))((char *)&qword_18 + 7) )
      {
        v130 = sub_22462B0(&v251, "FILTER_MIN_LINEAR_MAG_MIP_POINT", 31);
        v13 = v227;
        if ( !v130 )
        {
          v253 = 71;
          LOBYTE(v254) = 1;
        }
        if ( (_BYTE)v254 )
          goto LABEL_189;
        v43 = v252;
      }
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 6) )
    {
      v226 = v13;
      v128 = sub_22462B0(&v251, "FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR", 38);
      v13 = v226;
      if ( !v128 )
      {
        v253 = 72;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 7) )
    {
      v225 = v13;
      v127 = sub_22462B0(&v251, "FILTER_MIN_MAG_LINEAR_MIP_POINT", 31);
      v13 = v225;
      if ( !v127 )
      {
        v253 = 73;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 1) )
    {
      v224 = v13;
      v126 = sub_22462B0(&v251, "FILTER_MIN_MAG_MIP_LINEAR", 25);
      v13 = v224;
      if ( !v126 )
      {
        v253 = 74;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&word_12 )
    {
      v223 = v13;
      v125 = sub_22462B0(&v251, "FILTER_ANISOTROPIC", 18);
      v13 = v223;
      if ( !v125 )
      {
        v253 = 75;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 3) )
    {
      v222 = v13;
      v124 = sub_22462B0(&v251, "FILTER_COMPARISON_MIN_MAG_MIP_POINT", 35);
      v13 = v222;
      if ( !v124 )
      {
        v253 = 76;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_28 + 2) )
    {
      v221 = v13;
      v123 = sub_22462B0(&v251, "FILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR", 42);
      v13 = v221;
      if ( !v123 )
      {
        v253 = 77;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&dword_30 )
    {
      v220 = v13;
      v122 = sub_22462B0(&v251, "FILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT", 48);
      v13 = v220;
      if ( !v122 )
      {
        v253 = 78;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_28 + 2) )
    {
      v219 = v13;
      v120 = sub_22462B0(&v251, "FILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR", 42);
      v13 = v219;
      if ( !v120 )
      {
        v253 = 79;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
      if ( v252 == (int (**)(int))((char *)&qword_28 + 2) )
      {
        v121 = sub_22462B0(&v251, "FILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT", 42);
        v13 = v219;
        if ( !v121 )
        {
          v253 = 80;
          LOBYTE(v254) = 1;
        }
        if ( (_BYTE)v254 )
          goto LABEL_189;
        v43 = v252;
      }
    }
    if ( v43 == (int (**)(int))((char *)&dword_30 + 1) )
    {
      v218 = v13;
      v119 = sub_22462B0(&v251, "FILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR", 49);
      v13 = v218;
      if ( !v119 )
      {
        v253 = 81;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_28 + 2) )
    {
      v217 = v13;
      v118 = sub_22462B0(&v251, "FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT", 42);
      v13 = v217;
      if ( !v118 )
      {
        v253 = 82;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 4) )
    {
      v216 = v13;
      v117 = sub_22462B0(&v251, "FILTER_COMPARISON_MIN_MAG_MIP_LINEAR", 36);
      v13 = v216;
      if ( !v117 )
      {
        v253 = 83;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 5) )
    {
      v215 = v13;
      v116 = sub_22462B0(&v251, "FILTER_COMPARISON_ANISOTROPIC", 29);
      v13 = v215;
      if ( !v116 )
      {
        v253 = 84;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&qword_20 )
    {
      v214 = v13;
      v115 = sub_22462B0(&v251, "FILTER_MINIMUM_MIN_MAG_MIP_POINT", 32);
      v13 = v214;
      if ( !v115 )
      {
        v253 = 85;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 7) )
    {
      v213 = v13;
      v114 = sub_22462B0(&v251, "FILTER_MINIMUM_MIN_MAG_POINT_MIP_LINEAR", 39);
      v13 = v213;
      if ( !v114 )
      {
        v253 = 86;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_28 + 5) )
    {
      v212 = v13;
      v113 = sub_22462B0(&v251, "FILTER_MINIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT", 45);
      v13 = v212;
      if ( !v113 )
      {
        v253 = 87;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 7) )
    {
      v211 = v13;
      v111 = sub_22462B0(&v251, "FILTER_MINIMUM_MIN_POINT_MAG_MIP_LINEAR", 39);
      v13 = v211;
      if ( !v111 )
      {
        v253 = 88;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
      if ( v252 == (int (**)(int))((char *)&qword_20 + 7) )
      {
        v112 = sub_22462B0(&v251, "FILTER_MINIMUM_MIN_LINEAR_MAG_MIP_POINT", 39);
        v13 = v211;
        if ( !v112 )
        {
          v253 = 89;
          LOBYTE(v254) = 1;
        }
        if ( (_BYTE)v254 )
          goto LABEL_189;
        v43 = v252;
      }
    }
    if ( v43 == (int (**)(int))((char *)&qword_28 + 6) )
    {
      v210 = v13;
      v110 = sub_22462B0(&v251, "FILTER_MINIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR", 46);
      v13 = v210;
      if ( !v110 )
      {
        v253 = 90;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 7) )
    {
      v209 = v13;
      v109 = sub_22462B0(&v251, "FILTER_MINIMUM_MIN_MAG_LINEAR_MIP_POINT", 39);
      v13 = v209;
      if ( !v109 )
      {
        v253 = 91;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 1) )
    {
      v208 = v13;
      v108 = sub_22462B0(&v251, "FILTER_MINIMUM_MIN_MAG_MIP_LINEAR", 33);
      v13 = v208;
      if ( !v108 )
      {
        v253 = 92;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 2) )
    {
      v207 = v13;
      v107 = sub_22462B0(&v251, "FILTER_MINIMUM_ANISOTROPIC", 26);
      v13 = v207;
      if ( !v107 )
      {
        v253 = 93;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&qword_20 )
    {
      v206 = v13;
      v106 = sub_22462B0(&v251, "FILTER_MAXIMUM_MIN_MAG_MIP_POINT", 32);
      v13 = v206;
      if ( !v106 )
      {
        v253 = 94;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 7) )
    {
      v205 = v13;
      v105 = sub_22462B0(&v251, "FILTER_MAXIMUM_MIN_MAG_POINT_MIP_LINEAR", 39);
      v13 = v205;
      if ( !v105 )
      {
        v253 = 95;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_28 + 5) )
    {
      v204 = v13;
      v104 = sub_22462B0(&v251, "FILTER_MAXIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT", 45);
      v13 = v204;
      if ( !v104 )
      {
        v253 = 96;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 7) )
    {
      v203 = v13;
      v102 = sub_22462B0(&v251, "FILTER_MAXIMUM_MIN_POINT_MAG_MIP_LINEAR", 39);
      v13 = v203;
      if ( !v102 )
      {
        v253 = 97;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
      if ( v252 == (int (**)(int))((char *)&qword_20 + 7) )
      {
        v103 = sub_22462B0(&v251, "FILTER_MAXIMUM_MIN_LINEAR_MAG_MIP_POINT", 39);
        v13 = v203;
        if ( !v103 )
        {
          v253 = 98;
          LOBYTE(v254) = 1;
        }
        if ( (_BYTE)v254 )
          goto LABEL_189;
        v43 = v252;
      }
    }
    if ( v43 == (int (**)(int))((char *)&qword_28 + 6) )
    {
      v202 = v13;
      v101 = sub_22462B0(&v251, "FILTER_MAXIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR", 46);
      v13 = v202;
      if ( !v101 )
      {
        v253 = 99;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 7) )
    {
      v201 = v13;
      v100 = sub_22462B0(&v251, "FILTER_MAXIMUM_MIN_MAG_LINEAR_MIP_POINT", 39);
      v13 = v201;
      if ( !v100 )
      {
        v253 = 100;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 1) )
    {
      v200 = v13;
      v99 = sub_22462B0(&v251, "FILTER_MAXIMUM_MIN_MAG_MIP_LINEAR", 33);
      v13 = v200;
      if ( !v99 )
      {
        v253 = 101;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 2) )
    {
      v199 = v13;
      v98 = sub_22462B0(&v251, "FILTER_MAXIMUM_ANISOTROPIC", 26);
      v13 = v199;
      if ( !v98 )
      {
        v253 = 102;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&dword_14 )
    {
      v198 = v13;
      v97 = sub_22462B0(&v251, "TEXTURE_ADDRESS_WRAP", 20);
      v13 = v198;
      if ( !v97 )
      {
        v253 = 103;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&dword_14 + 2) )
    {
      v197 = v13;
      v96 = sub_22462B0(&v251, "TEXTURE_ADDRESS_MIRROR", 22);
      v13 = v197;
      if ( !v96 )
      {
        v253 = 104;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&dword_14 + 1) )
    {
      v196 = v13;
      v95 = sub_22462B0(&v251, "TEXTURE_ADDRESS_CLAMP", 21);
      v13 = v196;
      if ( !v95 )
      {
        v253 = 105;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&dword_14 + 2) )
    {
      v195 = v13;
      v94 = sub_22462B0(&v251, "TEXTURE_ADDRESS_BORDER", 22);
      v13 = v195;
      if ( !v94 )
      {
        v253 = 106;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_18 + 2) )
    {
      v194 = v13;
      v93 = sub_22462B0(&v251, "TEXTURE_ADDRESS_MIRRORONCE", 26);
      v13 = v194;
      if ( !v93 )
      {
        v253 = 107;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&word_10 )
    {
      v193 = v13;
      v92 = sub_22462B0(&v251, "COMPARISON_NEVER", 16);
      v13 = v193;
      if ( !v92 )
      {
        v253 = 108;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&byte_9[6] )
    {
      v192 = v13;
      v91 = sub_22462B0(&v251, "COMPARISON_LESS", 15);
      v13 = v192;
      if ( !v91 )
      {
        v253 = 109;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&word_10 )
    {
      v191 = v13;
      v90 = sub_22462B0(&v251, "COMPARISON_EQUAL", 16);
      v13 = v191;
      if ( !v90 )
      {
        v253 = 110;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&dword_14 + 1) )
    {
      v190 = v13;
      v89 = sub_22462B0(&v251, "COMPARISON_LESS_EQUAL", 21);
      v13 = v190;
      if ( !v89 )
      {
        v253 = 111;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&word_12 )
    {
      v189 = v13;
      v88 = sub_22462B0(&v251, "COMPARISON_GREATER", 18);
      v13 = v189;
      if ( !v88 )
      {
        v253 = 112;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&dword_14 )
    {
      v188 = v13;
      v87 = sub_22462B0(&v251, "COMPARISON_NOT_EQUAL", 20);
      v13 = v188;
      if ( !v87 )
      {
        v253 = 113;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&qword_18 )
    {
      v187 = v13;
      v86 = sub_22462B0(&v251, "COMPARISON_GREATER_EQUAL", 24);
      v13 = v187;
      if ( !v86 )
      {
        v253 = 114;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&word_10 + 1) )
    {
      v186 = v13;
      v85 = sub_22462B0(&v251, "COMPARISON_ALWAYS", 17);
      v13 = v186;
      if ( !v85 )
      {
        v253 = 115;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))((char *)&qword_20 + 5) )
    {
      v160 = v13;
      v51 = sub_22462B0(&v251, "STATIC_BORDER_COLOR_TRANSPARENT_BLACK", 37);
      v13 = v160;
      if ( !v51 )
      {
        v253 = 116;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
    }
    if ( v43 == (int (**)(int))&qword_20 )
    {
      v159 = v13;
      v49 = sub_22462B0(&v251, "STATIC_BORDER_COLOR_OPAQUE_BLACK", 32);
      v13 = v159;
      if ( !v49 )
      {
        v253 = 117;
        LOBYTE(v254) = 1;
      }
      if ( (_BYTE)v254 )
        goto LABEL_189;
      v43 = v252;
      if ( v252 == (int (**)(int))&qword_20 )
      {
        v50 = sub_22462B0(&v251, "STATIC_BORDER_COLOR_OPAQUE_WHITE", 32);
        v13 = v159;
        if ( !v50 )
        {
          v253 = 118;
          LOBYTE(v254) = 1;
        }
        if ( (_BYTE)v254 )
          goto LABEL_189;
        v43 = v252;
      }
    }
    if ( v43 != (int (**)(int))((char *)&qword_20 + 5) )
      goto LABEL_178;
    v158 = v13;
    v47 = sub_22462B0(&v251, "STATIC_BORDER_COLOR_OPAQUE_BLACK_UINT", 37);
    v13 = v158;
    if ( !v47 )
    {
      v253 = 119;
      LOBYTE(v254) = 1;
    }
    if ( !(_BYTE)v254 )
    {
      if ( v252 != (int (**)(int))((char *)&qword_20 + 5) )
        goto LABEL_178;
      v48 = sub_22462B0(&v251, "STATIC_BORDER_COLOR_OPAQUE_WHITE_UINT", 37);
      v13 = v158;
      if ( !v48 )
      {
        v253 = 120;
        LOBYTE(v254) = 1;
      }
      if ( !(_BYTE)v254 )
      {
LABEL_178:
        v44 = 0;
LABEL_179:
        v45 = *(_QWORD *)(a2 + 8);
        v46 = 0;
        if ( v45 >= (unsigned int)v18 )
        {
          v46 = v45 - (unsigned int)v18;
          v45 = (unsigned int)v18;
        }
        *(_QWORD *)a2 += v45;
        *(_QWORD *)(a2 + 8) = v46;
        *(_DWORD *)(a2 + 16) += v18;
        *(_DWORD *)a1 = v44;
        *(_DWORD *)(a1 + 4) = v13;
        *(_QWORD *)(a1 + 8) = 0;
        *(_QWORD *)(a1 + 16) = 0;
        return a1;
      }
    }
LABEL_189:
    v44 = v253;
    goto LABEL_179;
  }
  while ( 1 )
  {
    v155 = v13;
    v29 = sub_1165330((__int64 (__fastcall *)(_QWORD))sub_13DD460, *v12);
    v13 = v155;
    if ( !v29 )
      break;
    ++v12;
    if ( !--v18 )
    {
      v30 = *(_QWORD *)(a2 + 8);
      v31 = -1;
      goto LABEL_64;
    }
  }
  v30 = *(_QWORD *)(a2 + 8);
  v31 = v30 - v18;
LABEL_64:
  v32 = *(char **)a2;
  v251 = (char *)sub_13DD420;
  if ( v31 > v30 )
    v31 = v30;
  v252 = &isdigit;
  if ( v31 )
  {
    v33 = v32;
    v34 = v31;
    while ( 1 )
    {
      v156 = v13;
      v35 = sub_13DD420((unsigned int (__fastcall *)(_QWORD))&isdigit, *v33);
      v13 = v156;
      if ( !v35 )
        break;
      ++v33;
      if ( !--v34 )
      {
        v30 = *(_QWORD *)(a2 + 8);
        v36 = *(char **)a2;
        goto LABEL_71;
      }
    }
    v30 = *(_QWORD *)(a2 + 8);
    v36 = *(char **)a2;
    v37 = (v31 - v34 != -1) + 2;
  }
  else
  {
    v36 = v32;
LABEL_71:
    v37 = 2;
  }
  v38 = 0;
  if ( v30 >= (unsigned int)v31 )
  {
    v38 = v30 - (unsigned int)v31;
    v30 = (unsigned int)v31;
  }
  *(_QWORD *)(a2 + 8) = v38;
  *(_QWORD *)a2 = &v36[v30];
  *(_DWORD *)(a2 + 16) += v31;
  *(_DWORD *)a1 = v37;
  *(_DWORD *)(a1 + 4) = v13;
  *(_QWORD *)(a1 + 8) = v32;
  *(_QWORD *)(a1 + 16) = v31;
  return a1;
}
