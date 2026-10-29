__int64 __fastcall sub_18D2070(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned int *a4,
        __int64 a5,
        double a6,
        double a7)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // r14
  char v14; // r12
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // r15d
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 *v58; // r14
  __int64 v59; // rdx
  char v60; // al
  __int64 v61; // rdi
  __int64 v62; // r12
  __int64 v63; // rax
  unsigned int v64; // r12d
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  unsigned int v69; // eax
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rdx
  int v74; // eax
  unsigned __int64 v75; // r8
  __int64 v76; // rcx
  __int64 v77; // rax
  char v78; // al
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rdi
  char v83; // al
  _QWORD *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rbx
  unsigned int v88; // ebx
  __int64 v89; // rax
  __int64 v90; // rdx
  bool v91; // zf
  int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rdi
  __int64 v96; // rbx
  __int64 v97; // rax
  unsigned int v98; // ebx
  __int64 v99; // rdx
  __int64 v100; // rax
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rsi
  __int64 v107; // r12
  __int64 v108; // rdx
  __int64 v109; // r12
  __int64 v110; // r13
  unsigned __int64 v111; // rbx
  unsigned __int64 v112; // r12
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rax
  __int64 v115; // rbp
  __int64 v116; // rbx
  unsigned __int64 v117; // rax
  unsigned __int64 v118; // rax
  __int64 v119; // rdi
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rax
  __int64 v128; // rax
  _QWORD *v129; // rdi
  unsigned __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  unsigned int v134; // eax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rbx
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rdx
  __int64 v146; // rax
  __int64 v147; // rbx
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rax
  __int64 v156; // rax
  unsigned __int64 v157; // rsi
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rbx
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rdx
  __int64 v172; // rax
  __int64 v173; // rbx
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rax
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  _QWORD *v190; // rdi
  unsigned __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rdx
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rbx
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rcx
  __int64 v202; // r13
  __int64 v203; // rdx
  __int64 v204; // r13
  unsigned __int64 v205; // rax
  unsigned __int64 v206; // r13
  __int64 v207; // rdx
  __int64 v208; // rax
  __int64 v209; // rax
  __int64 v210; // rdx
  __int64 v211; // rsi
  unsigned __int64 v212; // rbx
  char v213; // al
  __int64 v214; // rax
  __int64 v215; // rax
  __int64 v216; // rdx
  __int64 v217; // rax
  __int64 v218; // rsi
  __int64 v219; // rcx
  __int64 v220; // rax
  __int64 v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rax
  __int64 v224; // rdx
  __int64 v225; // rdx
  __int64 v226; // rdx
  __int64 v227; // rax
  __int64 v228; // rax
  __int64 v229; // rdx
  __int64 v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rdx
  __int64 v233; // rax
  __int64 v234; // rax
  __int64 v235; // rdx
  __int64 v236; // [rsp+8h] [rbp-100h]
  __int64 *v237; // [rsp+8h] [rbp-100h]
  __int64 v238; // [rsp+10h] [rbp-F8h]
  __int64 v239; // [rsp+10h] [rbp-F8h]
  __int64 v240; // [rsp+10h] [rbp-F8h]
  __int64 v241; // [rsp+10h] [rbp-F8h]
  __int64 v242; // [rsp+10h] [rbp-F8h]
  __int64 v243; // [rsp+10h] [rbp-F8h]
  __int64 v244; // [rsp+10h] [rbp-F8h]
  __int64 v245; // [rsp+10h] [rbp-F8h]
  __int64 v246; // [rsp+10h] [rbp-F8h]
  __int64 v247; // [rsp+10h] [rbp-F8h]
  __int64 v248; // [rsp+10h] [rbp-F8h]
  __int64 v249; // [rsp+10h] [rbp-F8h]
  __int64 v250; // [rsp+10h] [rbp-F8h]
  __int64 v251; // [rsp+10h] [rbp-F8h]
  __int64 v252; // [rsp+10h] [rbp-F8h]
  __int64 v253; // [rsp+18h] [rbp-F0h]
  __int64 v254; // [rsp+20h] [rbp-E8h]
  __int64 v255; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v256; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v257; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v258; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v259[25]; // [rsp+40h] [rbp-C8h] BYREF

  v8 = *a3;
  v256 = a2;
  v9 = *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v10 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v257 = v9;
  v11 = (_QWORD *)(*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
  v256 = v12;
  v257 = *v11 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v12 == v257 )
    goto LABEL_24;
  v13 = *(_QWORD *)v12;
  v14 = a5;
  v18 = *(unsigned __int8 *)(*(_QWORD *)v12 + 16LL);
  if ( (_BYTE)v18 == 16 )
  {
    if ( ((*(_BYTE *)(v13 + 18) >> 3) & 3) != 2 )
      goto LABEL_4;
LABEL_24:
    *a4 = 5;
    return 0;
  }
  if ( (_BYTE)v18 == 7 )
  {
    v36 = sub_18D2070(a1, *(_QWORD *)(v13 + 32), a3, a4, 1);
    if ( v36 <= 9 && ((1LL << v36) & 0x203) != 0 )
    {
      if ( *a4 != 5 && v14 )
        *a3 = sub_160A600(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v13 + 32), *a4, 0, 0, a6, a7, 0);
      *a4 = 59;
    }
    return v36;
  }
  if ( (unsigned int)(v18 - 43) <= 1 )
  {
LABEL_26:
    v38 = *(_QWORD *)(a1 + 248);
    v39 = sub_9B4870(v13, (__int64)v11, (__int64)a3, (__int64)a4, a5);
    if ( sub_AAC110(v38, v39, v257, 0) )
    {
      *a4 = 2;
      return 0;
    }
    return 18;
  }
LABEL_4:
  v13 = sub_18BBE30(v13, (__int64)v11, (__int64)a3, (__int64)a4);
  if ( v13 )
    goto LABEL_26;
  v20 = *(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v22 = *(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL);
  v23 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v21 == 58 )
  {
    if ( (_BYTE)v23 == 58 )
      return 18;
    if ( sub_F610C0(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v11, v21, v22, a5, v19) )
    {
      if ( v14 )
        *a3 = sub_18D1860((_QWORD *)a1, v256, *a3 & 0xFFFFFFFFFFFFFFFELL, v22, a6, a7);
      *a4 = 26;
      return 0;
    }
    v20 = *(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL);
    LODWORD(v21) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    v23 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
  }
  v24 = (unsigned int)(v21 - 57);
  v25 = v23 - 57;
  if ( (unsigned __int8)v24 <= 1u )
  {
    if ( v25 <= 1 )
    {
      if ( (unsigned __int8)sub_A63DE0(*(_QWORD *)(a1 + 248), v256, v257, v22, a5) )
        goto LABEL_41;
      v11 = (_QWORD *)v257;
      if ( sub_18C27C0(a1, v257, v256, v43, v44, v45) )
      {
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL) - 21) <= 3
          && (unsigned __int8)sub_18BC000(v257, v256, v24, v22)
          && !(unsigned __int8)sub_A63DE0(*(_QWORD *)(a1 + 248), v257, v256, v93, v94) )
        {
          v134 = sub_C00A40(*a3 & 0xFFFFFFFFFFFFFFFELL, v257, v131, v132, v133);
          sub_168B9F0((__int64)v259, (__int64 *)(a1 + 8), v134, 0x1AB2u, 0);
          v135 = sub_1605D30((__int64)v259, &v257);
          sub_1605D30(v135, (__int64 *)&v256);
          sub_15F7200(v259);
        }
        *a4 = 1;
        return 13;
      }
      v20 = *(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL);
    }
LABEL_8:
    if ( sub_F61140(v20, (__int64)v11, v24, v22, a5, v19) )
    {
      v30 = *(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL);
      if ( ((unsigned int)*(unsigned __int8 *)(v30 + 16) - 57 <= 1
         || (v30 = sub_18BBF30(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v11, v26, v27)) != 0)
        && *(_DWORD *)(v30 + 20) == 1
        && sub_18C27C0(a1, v257, v256, v27, v28, v29) )
      {
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL) - 21) <= 3
          && (((*(_BYTE *)(v30 + 18) >> 3) + 15) & 0xFu) <= 2 )
        {
          v34 = sub_C00A40(*a3 & 0xFFFFFFFFFFFFFFFELL, v257, v31, v32, v33);
          sub_168B9F0((__int64)v259, (__int64 *)(a1 + 8), v34, 0x1AB2u, 0);
          v35 = sub_1605D30((__int64)v259, &v257);
          sub_1605D30(v35, (__int64 *)&v256);
          sub_15F7200(v259);
        }
        v36 = 0;
        *a3 = sub_160A600(a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v256, 1u, 0, 0, a6, a7, 0);
        *a4 = 1;
        return v36;
      }
    }
    if ( !sub_F58320(*(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL))
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 57 > 1 )
    {
      v41 = *(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
        goto LABEL_36;
      if ( !sub_F58320(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL)) )
        goto LABEL_35;
    }
    if ( !sub_1629840(*(__int64 **)(a1 + 632), v256, v257) && !sub_1629DB0(*(__int64 **)(a1 + 632), v256, v257) )
    {
LABEL_35:
      v41 = *(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_36:
      if ( (sub_F58350(v41)
         && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                         & 0xFFFFFFFFFFFFFFF0LL)
                                             + 16LL)
          - 57 <= 1
         || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                         & 0xFFFFFFFFFFFFFFF0LL)
                                             + 16LL)
          - 57 <= 1
         && sub_F58350(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL)))
        && (sub_AA90B0(*(_QWORD *)(a1 + 248), v256, v257, v42) || sub_AB1240(*(__int64 **)(a1 + 248), v256, v257)) )
      {
        goto LABEL_41;
      }
      return 18;
    }
LABEL_41:
    *a4 = 1;
    return 0;
  }
  if ( v25 <= 1 )
    goto LABEL_8;
  v46 = v256;
  if ( (unsigned __int8)sub_18BD220((_QWORD **)(a1 + 248), v256, v257) )
    return 18;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
    goto LABEL_73;
  v51 = *(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v51 + 16) != 14
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v51 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 14
     || !sub_F63050(v51, v256, v47, v48)) )
  {
    goto LABEL_73;
  }
  v52 = *(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v52 + 16) != 14 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 14
      || !sub_F63050(v52, v256, v47, v48) )
    {
      return 18;
    }
LABEL_73:
    v52 = *(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL);
  }
  if ( sub_F610C0(v52, v256, v47, v48, v49, v50)
    && sub_F610C0(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL), v256, v53, v54, v55, v56)
    && ((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0
     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47) )
  {
    if ( v14 )
    {
      v36 = 0;
      *a4 = sub_18D1110((_QWORD *)a1, a3, v256, a6, a7);
      return v36;
    }
    return 0;
  }
  v57 = v256;
  v58 = (__int64 *)(v256 & 0xFFFFFFFFFFFFFFF0LL);
  v59 = *(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL);
  v60 = *(_BYTE *)(v59 + 16);
  if ( v60 != 42 )
  {
    if ( v60 == 11 )
    {
      v95 = *(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v95 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
      {
        LODWORD(v96) = 0;
        v97 = *(_QWORD *)&byte_8[*(_QWORD *)(v59 + 32) & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v97 & 8) != 0 )
          v96 = *(__int64 *)((char *)&qword_18 + (v97 & 0xFFFFFFFFFFFFFFF0LL));
        v98 = (unsigned int)v96 >> 9;
        if ( *(_BYTE *)(v95 + 16) != 11 )
          v95 = sub_18BBE60(v95, v256, v59, v54);
        v99 = *(_QWORD *)&byte_8[*(_QWORD *)(v95 + 32) & 0xFFFFFFFFFFFFFFF0LL];
        LODWORD(v100) = 0;
        if ( (v99 & 8) != 0 )
          v100 = *(__int64 *)((char *)&qword_18 + (v99 & 0xFFFFFFFFFFFFFFF0LL));
        v91 = (unsigned int)v100 >> 9 == v98;
        v101 = 63;
        if ( v91 )
          v101 = 1;
        v102 = v256;
        *a4 = v101;
        v258 = v102;
        v103 = *(_QWORD *)(a1 + 232);
        v259[0] = v257;
        v104 = *(_QWORD *)(*(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF0LL) + 32LL);
        v105 = *(_QWORD *)(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL) + 32LL);
        if ( (*(_BYTE *)(v103 + 1) & 8) == 0 )
        {
          v106 = 0;
          if ( (v104 & 8) != 0 )
            v106 = *(__int64 *)((char *)&qword_18 + (v104 & 0xFFFFFFFFFFFFFFF0LL));
          v107 = v104 & 7;
          v108 = 0;
          v109 = v106 | v107;
          if ( (v105 & 8) != 0 )
            v108 = *(__int64 *)((char *)&qword_18 + (v105 & 0xFFFFFFFFFFFFFFF0LL));
          if ( (*(_BYTE *)(v103 + 47) & 0x20) != 0 )
          {
            v110 = *(_QWORD *)(a1 + 248);
            v111 = v108 & 0xFFFFFFFF000001FFLL | *(_QWORD *)(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL) + 32LL) & 7LL;
            v112 = v109 & 0xFFFFFFFF000001FFLL;
            v113 = sub_6D5440(v259);
            v36 = 9 * (v112 != v111);
            v114 = sub_A70F20(v110, v113, v111);
            v115 = *(_QWORD *)(a1 + 248);
            v116 = v114;
            v117 = sub_6D5440(&v258);
            v118 = sub_A70F20(v115, v117, v112);
            if ( sub_AAB3D0(v110, v118, v116) )
              return v36;
          }
          else
          {
            v36 = 9 * (v109 != (v108 | *(_QWORD *)(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL) + 32LL) & 7LL));
            if ( sub_AAB3D0(*(_QWORD *)(a1 + 248), v258, v259[0]) )
              return v36;
          }
        }
        return 15;
      }
      if ( sub_9EC890(v95, v256, v59, v54, v256) )
      {
        *a4 = 21;
        return 14;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 4) != 0
        && sub_9C7DB0(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL), v256, v124, v125, v126)
        || ((v40 = *(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v40 + 16) == 42)
         || (v40 = sub_18BBDD0(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL), v256, v124, v125)) != 0)
        && (v127 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v127 + 16) == 13)
        && ((*(_WORD *)(v127 + 18) >> 3) & 0x1FF) == 0x1B3 )
      {
        *a4 = 42;
        return 0;
      }
      return 18;
    }
    if ( v60 != 34 )
    {
      if ( (**(_BYTE **)(a1 + 232) & 8) != 0 )
      {
        v72 = *(_QWORD *)(*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v72 + 16) == 13 && ((*(_WORD *)(v72 + 18) >> 3) & 0x1FF) == 0x1E8 )
        {
          v46 = *(_QWORD *)(a1 + 248);
          if ( (unsigned int)sub_BFE6E0(*a3 & 0xFFFFFFFFFFFFFFFELL, v46, 1, a6) )
          {
            *a4 = 13;
            return 0;
          }
          v57 = v256;
        }
      }
      v73 = v257;
      v74 = *(unsigned __int8 *)(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (_BYTE)v74 == 42 || (_BYTE)v74 == 34 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18640LL) == v57 )
        {
          *a4 = 23;
          return 0;
        }
        if ( sub_9EC890(*(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF0LL), v46, v257, v54, v57 & 0xFFFFFFFFFFFFFFF0LL) )
        {
          *a4 = 22;
          return 2;
        }
        return 18;
      }
      v75 = v57 & 0xFFFFFFFFFFFFFFF0LL;
      v76 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v75 + 16LL) - 47;
      if ( (unsigned int)v76 > 1
        || (unsigned int)(v74 - 47) > 1
        || (v46 = v256, !sub_AAC110(*(_QWORD *)(a1 + 248), v256, v257, 0)) )
      {
        v77 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v77 + 16) == 13
          && ((*(_WORD *)(v77 + 18) >> 3) & 0x1FF) == 0x1EC
          && sub_9EC890(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL), v46, v73, v76, v75) )
        {
          *a4 = 64;
          return 0;
        }
        return 18;
      }
      *a4 = 5;
      return 0;
    }
    v253 = v257;
    v119 = *(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL);
    v237 = (__int64 *)(v257 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v119 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
    {
      if ( sub_9EC890(v119, v256, v59, v54, v256) )
        goto LABEL_155;
      v122 = (__int64 *)(v257 & 0xFFFFFFFFFFFFFFF0LL);
      v123 = *(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v123 + 16) != 42 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v123 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 11
          || !(unsigned __int8)sub_F68150(
                                 *(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL),
                                 *(char **)(a1 + 248),
                                 v123,
                                 v120,
                                 v121) )
        {
          return 18;
        }
        if ( v14 && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0 )
          sub_18BBAA0(a1, a3);
        *a4 = 41;
        return 0;
      }
      *a4 = 40;
      if ( sub_F67340(*v122) )
        return 0;
      if ( sub_A5EA70(*(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL), v46, v187, v188, v189) )
      {
        v190 = *(_QWORD **)(a1 + 248);
        v191 = v190[191];
        if ( (v191 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          v191 = sub_18C03A0(v190);
        v36 = 0;
        if ( (*(_QWORD *)&byte_8[v257 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[v257 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v257) & 7) == (*(_QWORD *)&byte_8[v191 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v191 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v191) & 7) )
          return v36;
      }
      return 5;
    }
    *a4 = 1;
    v137 = *v58;
    v138 = *v58;
    if ( *(_BYTE *)(*v58 + 16) == 34 )
      goto LABEL_170;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v137 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      goto LABEL_211;
    v239 = v57;
    v138 = sub_F63050(*v58, v46, v59, v54);
    v57 = v239;
    if ( v138 )
    {
LABEL_170:
      v139 = *(_QWORD *)(*(_QWORD *)(v138 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v140 = (unsigned int)*(unsigned __int8 *)(v139 + 16) - 35;
      if ( (unsigned int)v140 > 1 )
      {
        v238 = v57;
        v139 = sub_F63050(v139, v46, v140, v54);
        v57 = v238;
      }
      v59 = *(unsigned __int8 *)(v139 + 19);
      LOBYTE(v59) = (unsigned __int8)v59 >> 2;
      if ( !(_BYTE)v59 )
      {
        v141 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v139 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v141 + 16) == 13 && ((*(_WORD *)(v141 + 18) >> 3) & 0x1FF) == 0x1E9 )
          goto LABEL_175;
      }
    }
    if ( *(_BYTE *)(v137 + 16) == 34 )
    {
      v158 = v137;
      goto LABEL_206;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v137 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
    {
      v248 = v57;
      v158 = sub_F63050(v137, v46, v59, v54);
      v57 = v248;
      if ( v158 )
      {
LABEL_206:
        v159 = *(_QWORD *)(*(_QWORD *)(v158 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        v160 = (unsigned int)*(unsigned __int8 *)(v159 + 16) - 35;
        if ( (unsigned int)v160 > 1 )
        {
          v240 = v57;
          v159 = sub_F63050(v159, v46, v160, v54);
          v57 = v240;
        }
        v59 = *(unsigned __int8 *)(v159 + 19);
        LOBYTE(v59) = (unsigned __int8)v59 >> 2;
        if ( !(_BYTE)v59 )
        {
          v161 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v159 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v161 + 16) == 13 && ((*(_WORD *)(v161 + 18) >> 3) & 0x1FF) == 0x1EA )
            goto LABEL_175;
        }
      }
    }
LABEL_211:
    if ( *(_BYTE *)(v137 + 16) != 42
      && (v252 = v57, v234 = sub_18BBDD0(v137, v46, v59, v54), v57 = v252, (v137 = v234) == 0)
      || (v162 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v137 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(v162 + 16) != 13)
      || ((*(_WORD *)(v162 + 18) >> 3) & 0x1FF) != 0x1EB )
    {
      v163 = *v237;
      v164 = *v237;
      if ( *(_BYTE *)(*v237 + 16) == 34 )
        goto LABEL_215;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v163 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
        goto LABEL_267;
      v242 = v57;
      v164 = sub_F63050(*v237, v46, v59, v54);
      v57 = v242;
      if ( v164 )
      {
LABEL_215:
        v165 = *(_QWORD *)(*(_QWORD *)(v164 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        v166 = (unsigned int)*(unsigned __int8 *)(v165 + 16) - 35;
        if ( (unsigned int)v166 > 1 )
        {
          v241 = v57;
          v165 = sub_F63050(v165, v46, v166, v54);
          v57 = v241;
        }
        v59 = *(unsigned __int8 *)(v165 + 19);
        LOBYTE(v59) = (unsigned __int8)v59 >> 2;
        if ( !(_BYTE)v59 )
        {
          v167 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v165 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v167 + 16) == 13 && ((*(_WORD *)(v167 + 18) >> 3) & 0x1FF) == 0x1E9 )
            goto LABEL_220;
        }
      }
      if ( *(_BYTE *)(v163 + 16) == 34 )
      {
        v192 = v163;
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v163 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
          goto LABEL_267;
        v251 = v57;
        v192 = sub_F63050(v163, v46, v59, v54);
        v57 = v251;
        if ( !v192 )
          goto LABEL_267;
      }
      v193 = *(_QWORD *)(*(_QWORD *)(v192 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v194 = (unsigned int)*(unsigned __int8 *)(v193 + 16) - 35;
      if ( (unsigned int)v194 > 1 )
      {
        v243 = v57;
        v193 = sub_F63050(v193, v46, v194, v54);
        v57 = v243;
      }
      v59 = *(unsigned __int8 *)(v193 + 19);
      LOBYTE(v59) = (unsigned __int8)v59 >> 2;
      if ( !(_BYTE)v59 )
      {
        v195 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v193 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v195 + 16) == 13 && ((*(_WORD *)(v195 + 18) >> 3) & 0x1FF) == 0x1EA )
        {
LABEL_220:
          v168 = *v237;
          if ( *(_BYTE *)(*v237 + 16) != 34 )
          {
            v235 = *(_QWORD *)(*(_QWORD *)(v168 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v235 + 16) != 34 )
              goto LABEL_197;
            v168 = sub_F63050(*v237, v46, v235, v54);
            if ( !v168 )
              goto LABEL_197;
          }
          v169 = *(_QWORD *)(*(_QWORD *)(v168 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v170 = (unsigned int)*(unsigned __int8 *)(v169 + 16) - 35;
          if ( (unsigned int)v170 > 1 )
            v169 = sub_F63050(v169, v46, v170, v54);
          v171 = *(unsigned __int8 *)(v169 + 19);
          LOBYTE(v171) = (unsigned __int8)v171 >> 2;
          if ( (_BYTE)v171 )
            goto LABEL_197;
          v172 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v169 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v172 + 16) != 13 || ((*(_WORD *)(v172 + 18) >> 3) & 0x1FF) != 0x1EA )
            goto LABEL_197;
          v173 = *v58;
          v174 = *v58;
          if ( *(_BYTE *)(*v58 + 16) == 34 )
            goto LABEL_227;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v173 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
            goto LABEL_239;
          v174 = sub_F63050(*v58, v46, v171, v54);
          if ( v174 )
          {
LABEL_227:
            v175 = *(_QWORD *)(*(_QWORD *)(v174 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            v176 = (unsigned int)*(unsigned __int8 *)(v175 + 16) - 35;
            if ( (unsigned int)v176 > 1 )
              v175 = sub_F63050(v175, v46, v176, v54);
            v171 = *(unsigned __int8 *)(v175 + 19);
            LOBYTE(v171) = (unsigned __int8)v171 >> 2;
            if ( !(_BYTE)v171 )
            {
              v177 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v175 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v177 + 16) == 13 && ((*(_WORD *)(v177 + 18) >> 3) & 0x1FF) == 0x1E9 )
                goto LABEL_197;
            }
          }
          if ( *(_BYTE *)(v173 + 16) == 34 )
          {
            v178 = v173;
          }
          else
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v173 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
              goto LABEL_239;
            v178 = sub_F63050(v173, v46, v171, v54);
            if ( !v178 )
              goto LABEL_239;
          }
          v179 = *(_QWORD *)(*(_QWORD *)(v178 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v180 = (unsigned int)*(unsigned __int8 *)(v179 + 16) - 35;
          if ( (unsigned int)v180 > 1 )
            v179 = sub_F63050(v179, v46, v180, v54);
          v171 = *(unsigned __int8 *)(v179 + 19);
          LOBYTE(v171) = (unsigned __int8)v171 >> 2;
          if ( !(_BYTE)v171 )
          {
            v181 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v179 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v181 + 16) == 13 && ((*(_WORD *)(v181 + 18) >> 3) & 0x1FF) == 0x1EA )
              goto LABEL_197;
          }
LABEL_239:
          if ( *(_BYTE *)(v173 + 16) == 42 || (v173 = sub_18BBDD0(v173, v46, v171, v54)) != 0 )
          {
            v182 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v173 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v182 + 16) == 13 && ((*(_WORD *)(v182 + 18) >> 3) & 0x1FF) == 0x1EB )
              goto LABEL_197;
          }
          v183 = *v58;
          if ( *(_BYTE *)(*v58 + 16) == 34 )
            goto LABEL_243;
LABEL_331:
          v232 = *(_QWORD *)(*(_QWORD *)(v183 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v232 + 16) != 34 )
            return 5;
          v183 = sub_F63050(v183, v46, v232, v54);
          if ( !v183 )
            return 5;
LABEL_243:
          v184 = *(_QWORD *)(*(_QWORD *)(v183 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v185 = (unsigned int)*(unsigned __int8 *)(v184 + 16) - 35;
          if ( (unsigned int)v185 > 1 )
            v184 = sub_F63050(v184, v46, v185, v54);
          if ( !(*(_BYTE *)(v184 + 19) >> 2) )
            return 5;
          v186 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v184 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v186 + 16) != 13 || ((*(_WORD *)(v186 + 18) >> 3) & 0x1FF) != 0x1EA )
            return 5;
LABEL_197:
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 0x14) != 0 )
          {
            v157 = a2;
            v36 = 17;
            if ( !(unsigned __int8)sub_19D1230(*(_QWORD *)(a1 + 736), v157, v257) )
              return v36;
          }
          return 0;
        }
      }
LABEL_267:
      if ( *(_BYTE *)(v163 + 16) != 42
        && (v250 = v57, v233 = sub_18BBDD0(v163, v46, v59, v54), v57 = v250, (v163 = v233) == 0)
        || (v196 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v163 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v196 + 16) != 13)
        || ((*(_WORD *)(v196 + 18) >> 3) & 0x1FF) != 0x1EB )
      {
        v197 = *v58;
        if ( *(_BYTE *)(*v58 + 16) != 34 )
        {
          v244 = v57;
          v197 = sub_F63050(*v58, v46, v59, v54);
          v57 = v244;
        }
        v198 = *(_QWORD *)(v197 + 32);
        v199 = *v237;
        if ( *(_BYTE *)(*v237 + 16) != 34 )
        {
          v245 = v57;
          v199 = sub_F63050(*v237, v46, v59, v54);
          v57 = v245;
        }
        v200 = *(_QWORD *)(v199 + 32);
        v201 = *(_QWORD *)(a1 + 248);
        v246 = v201;
        v202 = *(_QWORD *)&byte_8[v200 & 0xFFFFFFFFFFFFFFF0LL];
        v203 = 0;
        if ( (v202 & 8) != 0 )
          v203 = *(__int64 *)((char *)&qword_18 + (v202 & 0xFFFFFFFFFFFFFFF0LL));
        v204 = ((unsigned __int8)v200 | (unsigned __int8)v202) & 7;
        v205 = *(_QWORD *)(v198 & 0xFFFFFFFFFFFFFFF0LL);
        v206 = v203 | v204;
        v207 = *(_QWORD *)(v205 + 8) & 7LL;
        if ( v207 | (*(__int64 *)(v205 + 8) >> 3) & 1 )
        {
          v255 = v57;
          v205 = sub_F64F00(v198, v207 | (*(__int64 *)(v205 + 8) >> 3) & 1, v207, v201, v57);
          v57 = v255;
        }
        v208 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v205 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v208 + 16) == 13 && ((*(_WORD *)(v208 + 18) >> 3) & 0x1FF) == 0x1B3 )
          v206 &= ~8uLL;
        v209 = *(_QWORD *)&byte_8[v198 & 0xFFFFFFFFFFFFFFF0LL];
        v210 = 0;
        if ( (v209 & 8) != 0 )
          v210 = *(__int64 *)((char *)&qword_18 + (v209 & 0xFFFFFFFFFFFFFFF0LL));
        v211 = (unsigned int)v206 >> 9;
        v212 = v210 | ((unsigned __int8)v209 | (unsigned __int8)v198) & 7;
        if ( (_DWORD)v211 != (unsigned int)v212 >> 9
          && (v254 = v57, v213 = sub_F56A30((unsigned int)v212 >> 9, v211, v246), v57 = v254, !v213)
          || ((v212 >> 4) & 3) != ((v206 >> 4) & 3) && (v212 & 0x30) != 0 && (v206 & 0x30) != 0
          || HIDWORD(v206) != HIDWORD(v212)
          || ((v212 >> 6) & 7) != ((v206 >> 6) & 7)
          || ((unsigned __int8)v206 & (unsigned __int8)~(_BYTE)v212 & 7) != 0
          || (v206 & 8) != 0 && (v212 & 8) == 0 )
        {
          v214 = *v58;
          if ( *(_BYTE *)(*v58 + 16) != 34 )
          {
            v225 = *(_QWORD *)(*(_QWORD *)(v214 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v225 + 16) != 34 )
              return 9;
            v249 = v57;
            v214 = sub_F63050(*v58, v211, v225, v201);
            v57 = v249;
            if ( !v214 )
              return 9;
          }
          v215 = *(_QWORD *)(*(_QWORD *)(v214 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v216 = (unsigned int)*(unsigned __int8 *)(v215 + 16) - 35;
          if ( (unsigned int)v216 > 1 )
          {
            v247 = v57;
            v215 = sub_F63050(v215, v211, v216, v201);
            v57 = v247;
          }
          if ( !(*(_BYTE *)(v215 + 19) >> 2) )
            return 9;
          v217 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v215 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v217 + 16) != 13 || ((*(_WORD *)(v217 + 18) >> 3) & 0x1FF) != 0x1E9 )
            return 9;
        }
        v218 = v57;
        if ( !sub_AAC110(*(_QWORD *)(a1 + 248), v57, v253, 0) )
        {
          v220 = *v58;
          if ( *(_BYTE *)(*v58 + 16) == 34
            || (v226 = *(_QWORD *)(*(_QWORD *)(v220 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v226 + 16) == 34)
            && (v220 = sub_F63050(*v58, v218, v226, v219)) != 0 )
          {
            v221 = *(_QWORD *)(*(_QWORD *)(v220 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            v222 = (unsigned int)*(unsigned __int8 *)(v221 + 16) - 35;
            if ( (unsigned int)v222 > 1 )
              v221 = sub_F63050(v221, v218, v222, v219);
            if ( *(_BYTE *)(v221 + 19) >> 2 )
            {
              v223 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v221 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v223 + 16) == 13 && ((*(_WORD *)(v223 + 18) >> 3) & 0x1FF) == 0x1E9 )
                return 16;
            }
          }
          v227 = *v237;
          if ( *(_BYTE *)(*v237 + 16) == 34
            || (v231 = *(_QWORD *)(*(_QWORD *)(v227 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v231 + 16) == 34)
            && (v227 = sub_F63050(*v237, v218, v231, v219)) != 0 )
          {
            v228 = *(_QWORD *)(*(_QWORD *)(v227 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            v229 = (unsigned int)*(unsigned __int8 *)(v228 + 16) - 35;
            if ( (unsigned int)v229 > 1 )
              v228 = sub_F63050(v228, v218, v229, v219);
            if ( *(_BYTE *)(v228 + 19) >> 2 )
            {
              v230 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v228 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v230 + 16) == 13 && ((*(_WORD *)(v230 + 18) >> 3) & 0x1FF) == 0x1E9 )
                return 16;
            }
          }
          return 5;
        }
        goto LABEL_197;
      }
      goto LABEL_220;
    }
LABEL_175:
    v142 = *v58;
    if ( *(_BYTE *)(*v58 + 16) != 34 )
    {
      v224 = *(_QWORD *)(*(_QWORD *)(v142 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v224 + 16) != 34 )
        goto LABEL_197;
      v142 = sub_F63050(*v58, v46, v224, v54);
      if ( !v142 )
        goto LABEL_197;
    }
    v143 = *(_QWORD *)(*(_QWORD *)(v142 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v144 = (unsigned int)*(unsigned __int8 *)(v143 + 16) - 35;
    if ( (unsigned int)v144 > 1 )
      v143 = sub_F63050(v143, v46, v144, v54);
    v145 = *(unsigned __int8 *)(v143 + 19);
    LOBYTE(v145) = (unsigned __int8)v145 >> 2;
    if ( (_BYTE)v145 )
      goto LABEL_197;
    v146 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v143 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                     & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v146 + 16) != 13 || ((*(_WORD *)(v146 + 18) >> 3) & 0x1FF) != 0x1EA )
      goto LABEL_197;
    v147 = *v237;
    v148 = *v237;
    if ( *(_BYTE *)(*v237 + 16) == 34 )
      goto LABEL_182;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v147 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      goto LABEL_194;
    v148 = sub_F63050(*v237, v46, v145, v54);
    if ( v148 )
    {
LABEL_182:
      v149 = *(_QWORD *)(*(_QWORD *)(v148 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v150 = (unsigned int)*(unsigned __int8 *)(v149 + 16) - 35;
      if ( (unsigned int)v150 > 1 )
        v149 = sub_F63050(v149, v46, v150, v54);
      v145 = *(unsigned __int8 *)(v149 + 19);
      LOBYTE(v145) = (unsigned __int8)v145 >> 2;
      if ( !(_BYTE)v145 )
      {
        v151 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v149 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v151 + 16) == 13 && ((*(_WORD *)(v151 + 18) >> 3) & 0x1FF) == 0x1E9 )
          goto LABEL_197;
      }
    }
    if ( *(_BYTE *)(v147 + 16) == 34 )
    {
      v152 = v147;
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v147 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
        goto LABEL_194;
      v152 = sub_F63050(v147, v46, v145, v54);
      if ( !v152 )
        goto LABEL_194;
    }
    v153 = *(_QWORD *)(*(_QWORD *)(v152 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v154 = (unsigned int)*(unsigned __int8 *)(v153 + 16) - 35;
    if ( (unsigned int)v154 > 1 )
      v153 = sub_F63050(v153, v46, v154, v54);
    v145 = *(unsigned __int8 *)(v153 + 19);
    LOBYTE(v145) = (unsigned __int8)v145 >> 2;
    if ( !(_BYTE)v145 )
    {
      v155 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v153 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v155 + 16) == 13 && ((*(_WORD *)(v155 + 18) >> 3) & 0x1FF) == 0x1EA )
        goto LABEL_197;
    }
LABEL_194:
    if ( *(_BYTE *)(v147 + 16) == 42 || (v147 = sub_18BBDD0(v147, v46, v145, v54)) != 0 )
    {
      v156 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v147 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v156 + 16) == 13 && ((*(_WORD *)(v156 + 18) >> 3) & 0x1FF) == 0x1EB )
        goto LABEL_197;
    }
    v183 = *v237;
    if ( *(_BYTE *)(*v237 + 16) == 34 )
      goto LABEL_243;
    goto LABEL_331;
  }
  v61 = *(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v61 + 16) == 42 )
  {
    LODWORD(v62) = 0;
    v63 = *(_QWORD *)&byte_8[*(_QWORD *)(v59 + 32) & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v63 & 8) != 0 )
      v62 = *(__int64 *)((char *)&qword_18 + (v63 & 0xFFFFFFFFFFFFFFF0LL));
    v64 = (unsigned int)v62 >> 9;
    v65 = *(_QWORD *)&byte_8[sub_F68450(v61, v256, v59, v54, v256) & 0xFFFFFFFFFFFFFFF0LL];
    LODWORD(v68) = 0;
    if ( (v65 & 8) != 0 )
      v68 = *(__int64 *)((char *)&qword_18 + (v65 & 0xFFFFFFFFFFFFFFF0LL));
    if ( (unsigned int)v68 >> 9 == v64 )
    {
      v46 = v257;
      if ( (unsigned __int8)sub_ABFF60(*(_QWORD **)(a1 + 248), v257, v256, v66, v67) )
        *a4 = 5;
      else
        *a4 = 1;
    }
    else
    {
      *a4 = 63;
    }
    v69 = sub_EEB7E0(*a3 & 0xFFFFFFFFFFFFFFFELL, v46, a6);
    return (unsigned int)sub_18BF570((_QWORD *)a1, v256, v257, v69, v70, v71);
  }
  v236 = *(_QWORD *)(v256 & 0xFFFFFFFFFFFFFFF0LL);
  v78 = sub_9EC890(v61, v256, v59, v54, v256);
  v81 = v236;
  if ( v78 )
  {
LABEL_155:
    *a4 = 21;
    return 3;
  }
  v82 = *(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL);
  v83 = *(_BYTE *)(v82 + 16);
  if ( v83 == 34 )
  {
    v128 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v236 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                     & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v128 + 16) != 13 || ((*(_WORD *)(v128 + 18) >> 3) & 0x1FF) != 0x1B3 )
    {
      if ( !sub_A5EA70(v82, v256, v236, v79, v80) )
        goto LABEL_154;
      v129 = *(_QWORD **)(a1 + 248);
      v130 = v129[191];
      if ( (v130 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        v130 = sub_18C03A0(v129);
      if ( (*(_QWORD *)&byte_8[v256 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v256 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v256) & 7) != (*(_QWORD *)&byte_8[v130 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v130 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v130) & 7) )
      {
LABEL_154:
        *a4 = 1;
        return 5;
      }
    }
    goto LABEL_41;
  }
  if ( v83 != 11 )
  {
    v136 = sub_18BBE60(v82, v256, v236, v79);
    v81 = v236;
    if ( !v136 )
      return 18;
  }
  v84 = (_QWORD *)(*(_QWORD *)(v81 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v85 = *(_QWORD *)(*(_QWORD *)(*v84 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v85 + 16) != 13 || ((*(_WORD *)(v85 + 18) >> 3) & 0x1FF) != 0x1B3 )
    return 18;
  v86 = v84[1];
  LODWORD(v87) = 0;
  if ( (v86 & 8) != 0 )
    v87 = *(__int64 *)((char *)&qword_18 + (v86 & 0xFFFFFFFFFFFFFFF0LL));
  v88 = (unsigned int)v87 >> 9;
  v89 = *(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v89 + 16) != 11 )
    v89 = sub_18BBE60(*(_QWORD *)(v257 & 0xFFFFFFFFFFFFFFF0LL), v256, (__int64)v84, v79);
  v90 = *(_QWORD *)&byte_8[*(_QWORD *)(v89 + 32) & 0xFFFFFFFFFFFFFFF0LL];
  LODWORD(v89) = 0;
  if ( (v90 & 8) != 0 )
    v89 = *(__int64 *)((char *)&qword_18 + (v90 & 0xFFFFFFFFFFFFFFF0LL));
  v91 = (unsigned int)v89 >> 9 == v88;
  v92 = 63;
  if ( v91 )
    v92 = 1;
  v36 = 0;
  *a4 = v92;
  return v36;
}
