__int64 __fastcall sub_D44140(__int64 a1, __int64 **a2, void *a3, __m128 a4)
{
  void (*v7)(void); // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  char *v11; // r14
  int v12; // ecx
  unsigned int v13; // esi
  char *v14; // rdx
  char *v15; // rax
  _QWORD *v16; // rbp
  _QWORD *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  __int64 *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rsi
  unsigned int v24; // r12d
  __int64 v25; // rcx
  char v26; // al
  unsigned int v27; // eax
  __int64 v28; // r14
  __int64 v29; // rsi
  _DWORD *v30; // rax
  __int64 *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  _DWORD *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rsi
  int v38; // r8d
  _DWORD *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rsi
  unsigned int v42; // r12d
  __int64 v43; // r14
  unsigned int v44; // ecx
  _DWORD *v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rax
  unsigned int v50; // ebp
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // ecx
  _DWORD *v54; // rax
  _DWORD *v55; // rax
  _QWORD *v56; // rdx
  __int64 v57; // rax
  unsigned int *v58; // rax
  int v59; // eax
  __int64 v60; // rax
  _DWORD *v61; // rax
  unsigned int v62; // r14d
  unsigned int v63; // ecx
  size_t v64; // rsi
  __int64 result; // rax
  int v66; // eax
  __int64 *v67; // rdx
  unsigned int v68; // r14d
  size_t v69; // rsi
  unsigned int *v70; // rax
  unsigned int *v71; // rax
  char *v72; // rbp
  char *v73; // r12
  __int64 v74; // rdi
  __int64 v75; // rdi
  unsigned int v76; // ebp
  unsigned int v77; // ebp
  __int64 v78; // rax
  _OWORD *v79; // rdx
  __int64 v80; // rdx
  _QWORD *v81; // rax
  int v82; // r10d
  unsigned int v83; // ebp
  __int64 v84; // rax
  __int64 *v85; // r14
  __int64 v86; // rsi
  _DWORD *v87; // rdx
  unsigned int v88; // r8d
  __int64 v89; // rax
  int v90; // edx
  _DWORD **v91; // rax
  __int64 *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rdi
  _DWORD *v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rsi
  int v99; // r8d
  _DWORD *v100; // rcx
  __int64 v101; // rax
  __int64 *v102; // rcx
  __int64 v103; // rax
  __int64 *v104; // rbp
  __int64 *v105; // r12
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 *v108; // rax
  __int64 *v109; // r12
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 *v112; // rax
  __int64 *v113; // r14
  __int64 v114; // rax
  __int64 v115; // rdi
  __int64 v116; // rdi
  __int64 v117; // rsi
  char v118; // al
  __int64 v119; // r14
  _QWORD *v120; // rbp
  __int64 v121; // rdi
  __int64 v122; // rcx
  _DWORD *v123; // rdx
  _DWORD *v124; // rdx
  void *v125; // r13
  __int64 v126; // rax
  __int64 v127; // rbx
  __int64 v128; // r12
  void *v129; // rbp
  __int64 v130; // rsi
  __int64 *v131; // r12
  unsigned __int64 v132; // r13
  __int64 v133; // rsi
  __int64 v134; // rax
  __int64 v135; // r14
  __int64 v136; // rax
  int v137; // ecx
  int v138; // r8d
  int v139; // r9d
  __int64 v140; // rdx
  __int64 v141; // rdx
  __int64 v142; // rsi
  __int64 *v143; // rax
  __int64 *v144; // rdx
  __int64 j; // rax
  __int64 v146; // rax
  char v147; // al
  _DWORD *v148; // rdx
  __int64 v149; // rdx
  char v150; // al
  int *v151; // rdx
  __int64 v152; // rdx
  _DWORD *v153; // rax
  _QWORD *v154; // rax
  unsigned int *v155; // rax
  int v156; // ecx
  unsigned int *v157; // rdx
  __int64 v158; // rdx
  __int64 k; // rax
  __int64 v160; // rax
  unsigned int *v161; // rax
  __int64 v162; // rdx
  unsigned int *v163; // rdx
  _QWORD *v164; // rax
  unsigned int v165; // ebp
  __int64 v166; // rax
  int v167; // edx
  __int64 *v168; // rax
  void *v169; // r13
  _QWORD *v170; // rax
  unsigned int v171; // esi
  __int64 v172; // rdx
  _DWORD *v173; // rax
  void *v174; // r13
  unsigned int v175; // r14d
  unsigned int v176; // ecx
  unsigned int *v177; // rdx
  __int64 v178; // rdx
  __int64 v179; // rdx
  int v180; // r11d
  __int64 *v181; // rsi
  __int64 v182; // r12
  __int64 *v183; // r8
  __int64 v184; // r13
  __int64 *v185; // r9
  __int64 *i; // rdx
  __int64 v187; // rcx
  __int64 *v188; // rdx
  __int64 v189; // rcx
  __int64 *v190; // rdx
  __int64 v191; // rcx
  __int64 *v192; // rdx
  __int64 *v193; // rsi
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rbx
  void *v197; // rbp
  __int64 v198; // rsi
  __int64 *v199; // r12
  unsigned __int64 v200; // rdx
  __int64 v201; // rsi
  char *v202; // rsi
  _BYTE *v203; // rdi
  char v204; // al
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // rax
  __int64 *v208; // r12
  unsigned int *v209; // rcx
  unsigned int *v210; // r8
  __int64 v211; // rax
  void *v212; // r13
  unsigned int v213; // eax
  __int64 v214; // rdi
  __int64 v215; // r13
  void *v216; // rbx
  __int64 v217; // rsi
  unsigned int v218; // eax
  __int64 v219; // r13
  void *v220; // rbx
  __int64 v221; // rsi
  __int64 *v222; // r12
  unsigned __int64 v223; // r13
  __int64 v224; // rsi
  __int64 *v225; // r12
  __int64 v226; // rdx
  char v227; // al
  unsigned int v228; // eax
  __int64 v229; // rax
  __int64 v230; // rdi
  __int64 v231; // rax
  int v232; // ecx
  char **v233; // rax
  __int64 *v234; // r12
  unsigned __int64 v235; // r13
  __int64 v236; // rsi
  __int64 v237; // rdx
  void *v238; // r13
  unsigned int v239; // eax
  __int64 v240; // rax
  __int64 v241; // rax
  __int64 v242; // rax
  __int64 v243; // rax
  __int64 v244; // rax
  unsigned int v245; // eax
  char **exception; // rbx
  __int64 v247; // rdx
  unsigned __int8 v248; // [rsp+Ch] [rbp-19Ch]
  unsigned int v249; // [rsp+Ch] [rbp-19Ch]
  unsigned int v250; // [rsp+Ch] [rbp-19Ch]
  __int64 v251; // [rsp+10h] [rbp-198h]
  void *v252; // [rsp+10h] [rbp-198h]
  _QWORD *v253; // [rsp+10h] [rbp-198h]
  void *v254; // [rsp+10h] [rbp-198h]
  void *v255; // [rsp+10h] [rbp-198h]
  __int64 v256; // [rsp+20h] [rbp-188h]
  __int64 **v257; // [rsp+20h] [rbp-188h]
  void *v258; // [rsp+20h] [rbp-188h]
  __int64 v259; // [rsp+20h] [rbp-188h]
  void *v260; // [rsp+20h] [rbp-188h]
  __int64 v261; // [rsp+28h] [rbp-180h]
  __int64 *v262; // [rsp+30h] [rbp-178h]
  __int64 v263; // [rsp+38h] [rbp-170h]
  __int64 **v264; // [rsp+38h] [rbp-170h]
  __int64 **v265; // [rsp+40h] [rbp-168h]
  __int64 *v266; // [rsp+60h] [rbp-148h]
  __int64 v267; // [rsp+68h] [rbp-140h]
  _QWORD *v268; // [rsp+70h] [rbp-138h]
  unsigned int v269; // [rsp+78h] [rbp-130h]
  unsigned int v270; // [rsp+7Ch] [rbp-12Ch]
  __int64 **v271; // [rsp+80h] [rbp-128h]
  unsigned __int64 v272; // [rsp+80h] [rbp-128h]
  __int64 v273; // [rsp+80h] [rbp-128h]
  __int64 v274; // [rsp+80h] [rbp-128h]
  __int64 v275; // [rsp+80h] [rbp-128h]
  __int64 v276; // [rsp+80h] [rbp-128h]
  __int64 v277; // [rsp+80h] [rbp-128h]
  __int64 v278; // [rsp+80h] [rbp-128h]
  __int64 v279; // [rsp+80h] [rbp-128h]
  __int64 v280; // [rsp+90h] [rbp-118h]
  unsigned int *v281; // [rsp+90h] [rbp-118h]
  unsigned int *v282; // [rsp+90h] [rbp-118h]
  __int64 v283; // [rsp+90h] [rbp-118h]
  __int64 v284; // [rsp+90h] [rbp-118h]
  __int64 v285; // [rsp+90h] [rbp-118h]
  unsigned int *v286; // [rsp+98h] [rbp-110h]
  int v287[2]; // [rsp+A8h] [rbp-100h] BYREF
  int v288[2]; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v289; // [rsp+B8h] [rbp-F0h] BYREF
  int v290[2]; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD *v291; // [rsp+C8h] [rbp-E0h]
  int v292[2]; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 *v293; // [rsp+D8h] [rbp-D0h]
  int v294; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v295; // [rsp+E8h] [rbp-C0h]
  void *ptr; // [rsp+F0h] [rbp-B8h]
  _QWORD v297[2]; // [rsp+100h] [rbp-A8h] BYREF
  _QWORD v298[2]; // [rsp+110h] [rbp-98h] BYREF
  int v299[2]; // [rsp+120h] [rbp-88h] BYREF
  __int64 v300; // [rsp+128h] [rbp-80h]
  _QWORD v301[2]; // [rsp+130h] [rbp-78h] BYREF
  __int64 v302[2]; // [rsp+140h] [rbp-68h] BYREF
  _BYTE v303[88]; // [rsp+150h] [rbp-58h] BYREF

  v7 = *(void (**)(void))(*(_QWORD *)a1 + 160LL);
  if ( (char *)v7 != (char *)sub_D3D9C0 )
  {
    v7();
    goto LABEL_23;
  }
  v8 = *(_QWORD *)(a1 + 128);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  v9 = *(_QWORD *)(a1 + 136);
  if ( v9 )
    *(_DWORD *)(v9 - 4) = 0;
  if ( *(_DWORD *)(a1 + 116) || *(_DWORD *)(a1 + 120) )
  {
    v10 = *(unsigned int *)(a1 + 112);
    v11 = *(char **)(a1 + 104);
    v12 = 0;
    v13 = *(_DWORD *)(a1 + 112);
    v14 = &v11[24 * v10];
    v15 = v11;
    if ( v11 == v14 )
      goto LABEL_13;
    do
    {
      while ( *(_QWORD *)v15 )
      {
        *(_QWORD *)v15 = 0;
        v15 += 24;
        if ( v14 == v15 )
          goto LABEL_12;
      }
      v15 += 24;
      ++v12;
    }
    while ( v14 != v15 );
LABEL_12:
    if ( v13 <= 0x10 || 3 * v13 >= 4 * v12 )
      goto LABEL_13;
    if ( v11 )
    {
      v72 = v11;
      v73 = &v11[24 * v10];
      do
      {
        while ( 1 )
        {
          v74 = *((_QWORD *)v72 + 2);
          if ( v74 )
            sub_186B220((void *)(v74 - 8));
          v75 = *((_QWORD *)v72 + 1);
          if ( !v75 )
            break;
          v72 += 24;
          sub_186B220((void *)(v75 - 8));
          if ( v73 == v72 )
            goto LABEL_140;
        }
        v72 += 24;
      }
      while ( v72 != v73 );
LABEL_140:
      sub_186B220(v11);
      v76 = *(_DWORD *)(a1 + 112);
      *(_QWORD *)(a1 + 104) = 0;
      v77 = v76 >> 1;
      *(_DWORD *)(a1 + 112) = v77;
      v78 = sub_186B270(24LL * v77);
      if ( !v77 )
        goto LABEL_147;
      if ( v77 == 1 )
      {
        v80 = v78;
        goto LABEL_146;
      }
    }
    else
    {
      v171 = v13 >> 1;
      *(_QWORD *)(a1 + 104) = 0;
      *(_DWORD *)(a1 + 112) = v171;
      v77 = v171;
      v78 = sub_186B270(24LL * v171);
    }
    v79 = (_OWORD *)v78;
    a4 = 0;
    do
    {
      *v79 = 0;
      v79 += 3;
      *(v79 - 2) = 0;
      *(v79 - 1) = 0;
    }
    while ( (_OWORD *)(v78 + 48LL * (v77 >> 1)) != v79 );
    if ( (v77 & 1) == 0 )
      goto LABEL_147;
    v80 = v78 + 24LL * (v77 & 0x7FFFFFFE);
LABEL_146:
    *(_QWORD *)(v80 + 16) = 0;
    a4 = 0;
    *(_OWORD *)v80 = 0;
LABEL_147:
    *(_QWORD *)(a1 + 104) = v78;
LABEL_13:
    *(_QWORD *)(a1 + 116) = 0;
  }
  v16 = *(_QWORD **)(a1 + 32);
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 >= v17 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = *(_QWORD *)(a1 + 24);
          v20 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v20 )
            break;
        }
        if ( ++v16 >= v17 )
          goto LABEL_21;
      }
      sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_21:
    v16 = *(_QWORD **)(a1 + 32);
    if ( v16 )
LABEL_22:
      *((_DWORD *)v16 - 1) = 0;
  }
LABEL_23:
  sub_D406A0(a1, a2);
  v21 = *a2;
  if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
    return 0;
  v22 = v21[9];
  if ( v22 )
  {
    v23 = *v21;
    v24 = 0;
    while ( 1 )
    {
      v25 = v22;
      v26 = *(_BYTE *)(v22 + 3) >> 6;
      if ( v26 )
      {
        if ( v26 == 1 )
          goto LABEL_53;
      }
      else
      {
        do
        {
          v25 = *(_QWORD *)(v25 + 16);
          v26 = *(_BYTE *)(v25 + 3) >> 6;
        }
        while ( !v26 );
        if ( v26 == 1 )
        {
LABEL_53:
          if ( v24 >= *(_DWORD *)(v25 + 4) + 1 )
            break;
          goto LABEL_31;
        }
      }
      if ( v26 == 2 )
        v27 = *(_DWORD *)(v25 + 4) - 1;
      else
        v27 = *(_DWORD *)(v25 + 4);
      if ( v24 >= v27 )
        break;
LABEL_31:
      if ( (*((_BYTE *)v21 + 123) & 0x20) != 0 )
      {
        v28 = *(_QWORD *)(v23 + 864);
        goto LABEL_33;
      }
      v66 = 17;
      while ( 1 )
      {
        if ( *(char *)(v22 + 3) < 0 )
        {
          if ( *(_BYTE *)(v22 + 3) >> 6 != 2 )
          {
            v67 = (__int64 *)(*(_QWORD *)(v22 + 16) + 8LL * v24);
            goto LABEL_112;
          }
          goto LABEL_114;
        }
        if ( v24 == *(_DWORD *)(v22 + 4) )
          break;
LABEL_114:
        v22 = *(_QWORD *)(v22 + 16);
        if ( !--v66 )
        {
          sub_233F80((__int64 *)(v23 + 616), (_DWORD *)v21 + 18);
          v67 = (__int64 *)(*(_QWORD *)(v21[9] + 16) + 8LL * v24);
          goto LABEL_112;
        }
      }
      v67 = (__int64 *)(v22 + 8);
LABEL_112:
      v28 = *v67;
LABEL_33:
      if ( *(_WORD *)(v28 + 4) )
        goto LABEL_87;
      v29 = *(_QWORD *)(v28 + 16);
      if ( !*(_DWORD *)(v28 + 24) )
      {
        v30 = *(_DWORD **)(v29 + 24);
        if ( !v30 || *v30 == -1 )
        {
          v56 = *(_QWORD **)(a1 + 128);
          if ( !v56 )
          {
            v154 = (_QWORD *)sub_186B270(0x10u);
            v56 = v154 + 1;
            *v154 = 2;
            *(_QWORD *)(a1 + 128) = v154 + 1;
            v58 = (unsigned int *)(v154 + 1);
            goto LABEL_90;
          }
          v57 = *((unsigned int *)v56 - 1);
          if ( (_DWORD)v57 == *((_DWORD *)v56 - 2) )
          {
            v62 = (unsigned int)(3 * v57 + 1) >> 1;
            v64 = 4 * v62 + 8;
            if ( 4 * (int)v57 + 8 < (unsigned int)v64 && (unsigned int)v57 < v62 )
              goto LABEL_130;
            goto LABEL_531;
          }
LABEL_89:
          v58 = (unsigned int *)v56 + v57;
          goto LABEL_90;
        }
      }
      if ( !(unsigned __int8)sub_168DB10(a1 + 40, v29) )
      {
LABEL_84:
        if ( *(_WORD *)(v28 + 4) || (v55 = *(_DWORD **)(*(_QWORD *)(v28 + 16) + 24LL)) == nullptr || *v55 )
        {
LABEL_87:
          v56 = *(_QWORD **)(a1 + 136);
          if ( !v56 )
          {
            v81 = (_QWORD *)sub_186B270(0x10u);
            v56 = v81 + 1;
            *v81 = 2;
            *(_QWORD *)(a1 + 136) = v81 + 1;
            v58 = (unsigned int *)(v81 + 1);
            goto LABEL_90;
          }
          v57 = *((unsigned int *)v56 - 1);
          if ( (_DWORD)v57 == *((_DWORD *)v56 - 2) )
          {
            v68 = (unsigned int)(3 * v57 + 1) >> 1;
            v69 = 4 * v68 + 8;
            if ( 4 * (int)v57 + 8 < (unsigned int)v69 && (unsigned int)v57 < v68 )
            {
              v70 = (unsigned int *)sub_186B300(v56 - 1, v69);
              v56 = v70 + 2;
              *(_QWORD *)(a1 + 136) = v70 + 2;
              *v70 = v68;
              v58 = &v70[v70[1] + 2];
              goto LABEL_90;
            }
LABEL_531:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_167E90(v302, "Overflow encountered when expanding vector", v247);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v302);
            sub_233E40((__int64)v302);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_89;
        }
        v59 = v55[1];
        if ( v59 != 6 )
        {
          if ( v59 == 8 && *(_DWORD *)(v28 + 24) == 1 )
          {
            v60 = *(_QWORD *)(v28 + 32);
            if ( !*(_WORD *)(v60 + 4) && !*(_DWORD *)(v60 + 24) )
            {
              v61 = *(_DWORD **)(*(_QWORD *)(v60 + 16) + 24LL);
              if ( !v61 || *v61 == -1 )
              {
                v56 = *(_QWORD **)(a1 + 128);
                if ( !v56 )
                {
LABEL_358:
                  v170 = (_QWORD *)sub_186B270(0x10u);
                  *v170 = 2;
                  v56 = v170 + 1;
                  *(_QWORD *)(a1 + 128) = v170 + 1;
                  v58 = (unsigned int *)(v170 + 1);
                  goto LABEL_90;
                }
                v57 = *((unsigned int *)v56 - 1);
                if ( (_DWORD)v57 == *((_DWORD *)v56 - 2) )
                {
                  v62 = (unsigned int)(3 * v57 + 1) >> 1;
                  v63 = 4 * v62 + 8;
                  if ( 4 * (int)v57 + 8 < v63 && (unsigned int)v57 < v62 )
                    goto LABEL_104;
                  goto LABEL_531;
                }
                goto LABEL_89;
              }
            }
          }
          goto LABEL_87;
        }
        v92 = (__int64 *)(v28 + 32);
        v93 = 8LL * *(unsigned int *)(v28 + 24);
        v94 = v28 + 32 + v93;
        if ( !v93 )
        {
LABEL_339:
          v161 = *(unsigned int **)(a1 + 128);
          if ( v161 )
          {
            v162 = *(v161 - 1);
            if ( (_DWORD)v162 == *(v161 - 2) )
            {
              v175 = (unsigned int)(3 * v162 + 1) >> 1;
              v176 = 4 * v175 + 8;
              if ( 4 * (int)v162 + 8 >= v176 || (unsigned int)v162 >= v175 )
                goto LABEL_531;
              v177 = (unsigned int *)sub_186B300(v161 - 2, v176);
              v161 = v177 + 2;
              *v177 = v175;
              v178 = v177[1];
              *(_QWORD *)(a1 + 128) = v161;
              v163 = &v161[v178];
            }
            else
            {
              v163 = &v161[v162];
            }
          }
          else
          {
            v164 = (_QWORD *)sub_186B270(0x10u);
            *v164 = 2;
            v161 = (unsigned int *)(v164 + 1);
            *(_QWORD *)(a1 + 128) = v161;
            v163 = v161;
          }
          *v163 = v24;
          ++*(v161 - 1);
          goto LABEL_91;
        }
        while ( 2 )
        {
          v97 = *v92;
          if ( *(_WORD *)(*v92 + 4) )
            break;
          v98 = *(_QWORD *)(v97 + 16);
          v99 = *(_DWORD *)(v97 + 24);
          v100 = *(_DWORD **)(v98 + 24);
          if ( v100 )
          {
            if ( !*v100 && v100[1] == 8 && v99 == 1 )
            {
              v97 = *(_QWORD *)(v97 + 32);
              if ( *(_WORD *)(v97 + 4) || *(_DWORD *)(v97 + 24) )
                break;
              v95 = *(_DWORD **)(*(_QWORD *)(v97 + 16) + 24LL);
              if ( !v95 )
              {
LABEL_182:
                if ( (__int64 *)v94 == ++v92 )
                  goto LABEL_339;
                continue;
              }
            }
            else
            {
              if ( v99 )
                break;
              v95 = *(_DWORD **)(v98 + 24);
            }
            if ( *v95 == -1 )
              goto LABEL_182;
          }
          else if ( !v99 )
          {
            goto LABEL_182;
          }
          break;
        }
        v96 = *(_QWORD *)(a1 + 16);
        if ( v97 != *(_QWORD *)(v96 + 856) && v97 != *(_QWORD *)(v96 + 864) )
          goto LABEL_87;
        goto LABEL_182;
      }
      v31 = (__int64 *)(v28 + 32);
      v32 = 8LL * *(unsigned int *)(v28 + 24);
      v33 = v28 + 32 + v32;
      if ( v32 )
      {
        do
        {
          v36 = *v31;
          if ( !*(_WORD *)(*v31 + 4) )
          {
            v37 = *(_QWORD *)(v36 + 16);
            v38 = *(_DWORD *)(v36 + 24);
            v39 = *(_DWORD **)(v37 + 24);
            if ( v39 )
            {
              if ( !*v39 && v39[1] == 8 && v38 == 1 )
              {
                v36 = *(_QWORD *)(v36 + 32);
                if ( !*(_WORD *)(v36 + 4) && !*(_DWORD *)(v36 + 24) )
                {
                  v34 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL);
                  if ( !v34 )
                    goto LABEL_46;
LABEL_43:
                  if ( *v34 == -1 )
                    goto LABEL_46;
                }
              }
              else if ( !v38 )
              {
                v34 = *(_DWORD **)(v37 + 24);
                goto LABEL_43;
              }
            }
            else if ( !v38 )
            {
              goto LABEL_46;
            }
          }
          v35 = *(_QWORD *)(a1 + 16);
          if ( v36 != *(_QWORD *)(v35 + 856) && v36 != *(_QWORD *)(v35 + 864) )
            goto LABEL_84;
LABEL_46:
          ++v31;
        }
        while ( (__int64 *)v33 != v31 );
      }
      v56 = *(_QWORD **)(a1 + 128);
      if ( !v56 )
        goto LABEL_358;
      v57 = *((unsigned int *)v56 - 1);
      if ( (_DWORD)v57 != *((_DWORD *)v56 - 2) )
        goto LABEL_89;
      v62 = (unsigned int)(3 * v57 + 1) >> 1;
      v63 = 4 * v62 + 8;
      if ( 4 * (int)v57 + 8 >= v63 || (unsigned int)v57 >= v62 )
        goto LABEL_531;
LABEL_104:
      v64 = v63;
LABEL_130:
      v71 = (unsigned int *)sub_186B300(v56 - 1, v64);
      v56 = v71 + 2;
      *(_QWORD *)(a1 + 128) = v71 + 2;
      *v71 = v62;
      v58 = &v71[v71[1] + 2];
LABEL_90:
      *v58 = v24;
      ++*((_DWORD *)v56 - 1);
LABEL_91:
      v21 = *a2;
      ++v24;
      v22 = (*a2)[9];
      if ( !v22 )
        break;
      v23 = *v21;
    }
  }
  v40 = *(_QWORD *)(a1 + 128);
  if ( !v40 || !*(_DWORD *)(v40 - 4) )
    return 0;
  v41 = *v21;
  v42 = 0;
  if ( (*((_BYTE *)v21 + 123) & 0x20) == 0 )
    goto LABEL_66;
LABEL_57:
  v43 = *(_QWORD *)(v41 + 864);
  v44 = *(_DWORD *)(v43 + 24);
  if ( !*(_WORD *)(v43 + 4) )
  {
LABEL_58:
    v45 = *(_DWORD **)(*(_QWORD *)(v43 + 16) + 24LL);
    if ( v45 )
    {
      if ( *v45 )
      {
        if ( !v44 )
        {
          if ( *v45 != -1 )
            goto LABEL_63;
LABEL_62:
          sub_D3E1E0(a1, v42, v43, 1);
          goto LABEL_63;
        }
      }
      else if ( v45[1] == 8 && v44 == 1 )
      {
        v172 = *(_QWORD *)(v43 + 32);
        if ( !*(_WORD *)(v172 + 4) && !*(_DWORD *)(v172 + 24) )
        {
          v173 = *(_DWORD **)(*(_QWORD *)(v172 + 16) + 24LL);
          if ( !v173 || *v173 == -1 )
          {
            sub_D3E1E0(a1, v42, v172, 0);
            goto LABEL_63;
          }
        }
      }
      else if ( !v44 )
      {
        goto LABEL_63;
      }
    }
    else if ( !v44 )
    {
      goto LABEL_62;
    }
LABEL_73:
    v50 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v51 = *(_QWORD *)(v43 + 8LL * v50 + 32);
        v52 = *(_QWORD *)(a1 + 16);
        if ( v51 == *(_QWORD *)(v52 + 856) || v51 == *(_QWORD *)(v52 + 864) )
          goto LABEL_82;
        if ( *(_WORD *)(v51 + 4) )
          return 0;
        v53 = *(_DWORD *)(v51 + 24);
        v54 = *(_DWORD **)(*(_QWORD *)(v51 + 16) + 24LL);
        if ( v54 )
          break;
        if ( v53 )
          return 0;
LABEL_81:
        sub_D3E1E0(a1, v42, v51, 1);
        v44 = *(_DWORD *)(v43 + 24);
LABEL_82:
        if ( ++v50 >= v44 )
          goto LABEL_63;
      }
      if ( *v54 )
      {
        if ( v53 || *v54 != -1 )
          return 0;
        goto LABEL_81;
      }
      if ( v54[1] != 8 )
        return 0;
      if ( v53 != 1 )
        return 0;
      v152 = *(_QWORD *)(v51 + 32);
      if ( *(_WORD *)(v152 + 4) )
        return 0;
      if ( *(_DWORD *)(v152 + 24) )
        return 0;
      v153 = *(_DWORD **)(*(_QWORD *)(v152 + 16) + 24LL);
      if ( v153 )
      {
        if ( *v153 != -1 )
          return 0;
      }
      ++v50;
      sub_D3E1E0(a1, v42, v152, 0);
      v44 = *(_DWORD *)(v43 + 24);
      if ( v50 >= v44 )
        goto LABEL_63;
    }
  }
  while ( 1 )
  {
    if ( v44 )
      goto LABEL_73;
LABEL_63:
    v40 = *(_QWORD *)(a1 + 128);
    ++v42;
    if ( !v40 || v42 >= *(_DWORD *)(v40 - 4) )
      break;
    v21 = *a2;
    v41 = **a2;
    if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
      goto LABEL_57;
LABEL_66:
    v46 = *(unsigned int *)(v40 + 4LL * v42);
    v47 = v21[9];
    v48 = 18;
    while ( --v48 )
    {
      if ( *(char *)(v47 + 3) >= 0 )
      {
        if ( (_DWORD)v46 == *(_DWORD *)(v47 + 4) )
        {
          v49 = v47 + 8;
          goto LABEL_71;
        }
      }
      else if ( *(_BYTE *)(v47 + 3) >> 6 != 2 )
      {
        v49 = *(_QWORD *)(v47 + 16) + 8 * v46;
        goto LABEL_71;
      }
      v47 = *(_QWORD *)(v47 + 16);
    }
    sub_233F80((__int64 *)(v41 + 616), (_DWORD *)v21 + 18);
    v49 = *(_QWORD *)(v21[9] + 16) + 8 * v46;
LABEL_71:
    v43 = *(_QWORD *)v49;
    v44 = *(_DWORD *)(*(_QWORD *)v49 + 24LL);
    if ( !*(_WORD *)(*(_QWORD *)v49 + 4LL) )
      goto LABEL_58;
  }
  v82 = *(_DWORD *)(a1 + 116);
  v83 = 0;
  v295 = 0;
  *(_QWORD *)v287 = a1 + 104;
  ptr = nullptr;
  if ( !v82 )
    return 0;
  while ( 1 )
  {
    v84 = *(_QWORD *)(a1 + 136);
    if ( !v84 || v83 >= *(_DWORD *)(v84 - 4) )
      break;
    v85 = *a2;
    v86 = **a2;
    if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
    {
      v87 = *(_DWORD **)(v86 + 864);
    }
    else
    {
      v88 = *(_DWORD *)(v84 + 4LL * v83);
      v89 = v85[9];
      v90 = 18;
      while ( --v90 )
      {
        if ( *(char *)(v89 + 3) >= 0 )
        {
          if ( v88 == *(_DWORD *)(v89 + 4) )
          {
            v91 = (_DWORD **)(v89 + 8);
            goto LABEL_170;
          }
        }
        else if ( *(_BYTE *)(v89 + 3) >> 6 != 2 )
        {
          v91 = (_DWORD **)(*(_QWORD *)(v89 + 16) + 8LL * v88);
          goto LABEL_170;
        }
        v89 = *(_QWORD *)(v89 + 16);
      }
      v250 = v88;
      sub_233F80((__int64 *)(v86 + 616), (_DWORD *)v85 + 18);
      v91 = (_DWORD **)(*(_QWORD *)(v85[9] + 16) + 8LL * v250);
LABEL_170:
      v87 = *v91;
    }
    sub_D432C0((unsigned __int64 ***)v287, (__int64)&v294, v87);
    ++v83;
    if ( !*(_DWORD *)(a1 + 116) )
      goto LABEL_162;
  }
  v101 = *(unsigned int *)(a1 + 112);
  v102 = *(__int64 **)(a1 + 104);
  *(_BYTE *)(a1 + 144) = 0;
  v103 = 3 * v101;
  v104 = v102;
  v105 = &v102[v103];
  if ( v105 == v102 )
  {
LABEL_223:
    v113 = *a2;
LABEL_224:
    v114 = *(_QWORD *)(a1 + 128);
    if ( !v114 )
      goto LABEL_253;
    v249 = 0;
LABEL_226:
    if ( v249 >= *(_DWORD *)(v114 - 4) )
      goto LABEL_253;
    v115 = *(_QWORD *)(a1 + 16);
    v297[0] = 0;
    v298[0] = 1;
    v251 = v115;
    *(_QWORD *)v299 = 0;
    v301[0] = 1;
    v116 = *v113;
    v297[1] = 0;
    v298[1] = 0;
    v300 = 0;
    v301[1] = 0;
    if ( (*((_BYTE *)v113 + 123) & 0x20) != 0 )
    {
      v256 = *(_QWORD *)(v116 + 864);
      v117 = v256;
    }
    else
    {
      v165 = *(_DWORD *)(v114 + 4LL * v249);
      v166 = v113[9];
      v167 = 18;
      while ( --v167 )
      {
        if ( *(char *)(v166 + 3) >= 0 )
        {
          if ( v165 == *(_DWORD *)(v166 + 4) )
          {
            v168 = (__int64 *)(v166 + 8);
            goto LABEL_351;
          }
        }
        else if ( *(_BYTE *)(v166 + 3) >> 6 != 2 )
        {
          v168 = (__int64 *)(*(_QWORD *)(v166 + 16) + 8LL * v165);
          goto LABEL_351;
        }
        v166 = *(_QWORD *)(v166 + 16);
      }
      sub_233F80((__int64 *)(v116 + 616), (_DWORD *)v113 + 18);
      v168 = (__int64 *)(*(_QWORD *)(v113[9] + 16) + 8LL * v165);
LABEL_351:
      v256 = *v168;
      v117 = *v168;
    }
    v291 = nullptr;
    *(_QWORD *)v290 = v251;
    *(_QWORD *)v288 = 0;
    v118 = sub_D3EC80(a1, v117, (__int64)v290, (__int64 *)v288, (__int64)v297);
    v119 = *(_QWORD *)v288;
    v120 = v291;
    v261 = *(_QWORD *)v290;
    if ( !v118 )
    {
      v254 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v299);
      sub_182CBA0(v254, v301);
      v169 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v297);
      sub_182CBA0(v169, v298);
      if ( v119 )
      {
        v126 = *(unsigned int *)(v119 - 4);
        if ( (_DWORD)v126 )
          goto LABEL_240;
        goto LABEL_243;
      }
LABEL_244:
      if ( !v120 )
        goto LABEL_252;
      goto LABEL_245;
    }
    if ( !v291 )
    {
      v255 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v299);
      sub_182CBA0(v255, v301);
      v174 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v297);
      sub_182CBA0(v174, v298);
      if ( !v119 )
        goto LABEL_252;
      v126 = *(unsigned int *)(v119 - 4);
      if ( !(_DWORD)v126 )
      {
        sub_186B220((void *)(v119 - 8));
        goto LABEL_252;
      }
LABEL_240:
      v253 = v120;
      v257 = a2;
      v127 = v119;
      v128 = v119 + 32 * v126;
      do
      {
        v129 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v127);
        v130 = v127 + 16;
        v127 += 32;
        sub_182CBA0(v129, v130);
      }
      while ( v128 != v127 );
      v120 = v253;
      a2 = v257;
LABEL_243:
      sub_186B220((void *)(v119 - 8));
      goto LABEL_244;
    }
    if ( !*((_DWORD *)v291 - 1) )
      goto LABEL_238;
    v121 = *v291;
    if ( *(_WORD *)(*v291 + 4LL) )
      goto LABEL_238;
    v122 = *(_QWORD *)(v121 + 16);
    v123 = *(_DWORD **)(v122 + 24);
    if ( v123 )
    {
      if ( !*v123 && v123[1] == 8 && *(_DWORD *)(v121 + 24) == 1 )
      {
        v121 = *(_QWORD *)(v121 + 32);
        if ( *(_WORD *)(v121 + 4) || *(_DWORD *)(v121 + 24) )
          goto LABEL_238;
        v124 = *(_DWORD **)(*(_QWORD *)(v121 + 16) + 24LL);
        if ( !v124 )
          goto LABEL_377;
      }
      else
      {
        if ( *(_DWORD *)(v121 + 24) )
          goto LABEL_238;
        v124 = *(_DWORD **)(v122 + 24);
        v118 = 0;
      }
      if ( *v124 != -1 )
        goto LABEL_238;
    }
    else
    {
      if ( *(_DWORD *)(v121 + 24) )
        goto LABEL_238;
      v118 = 0;
    }
LABEL_377:
    v179 = *(unsigned int *)(a1 + 112);
    v180 = *(_DWORD *)(v121 + 12);
    v181 = *(__int64 **)(a1 + 104);
    v182 = 24 * v179;
    v183 = &v181[3 * v179];
    v184 = 24LL * (v180 & (unsigned int)(v179 - 1));
    v185 = &v181[(unsigned __int64)v184 / 8];
    if ( v184 != 24 * v179 )
    {
      for ( i = &v181[3 * (v180 & (unsigned int)(v179 - 1))]; v183 != i; i += 3 )
      {
        v187 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v187 + 12) == v180 && v121 == v187 )
          {
            v190 = &v181[(unsigned __int64)v184 / 8];
            while ( 1 )
            {
LABEL_406:
              v191 = *v190;
              if ( (unsigned __int64)*v190 > 1 )
              {
                if ( *(_DWORD *)(v191 + 12) == v180 && v121 == v191 )
                {
                  v181 = v190;
                  goto LABEL_409;
                }
              }
              else if ( !v191 )
              {
                goto LABEL_408;
              }
              v190 += 3;
              if ( v183 == v190 )
                goto LABEL_495;
            }
          }
        }
        else if ( !v187 )
        {
          goto LABEL_238;
        }
      }
    }
    if ( v181 == v185 )
    {
LABEL_238:
      v252 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v299);
      sub_182CBA0(v252, v301);
      v125 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v297);
      sub_182CBA0(v125, v298);
      if ( v119 )
      {
        v126 = *(unsigned int *)(v119 - 4);
        if ( (_DWORD)v126 )
          goto LABEL_240;
        sub_186B220((void *)(v119 - 8));
      }
LABEL_245:
      v131 = v120;
      v132 = (unsigned __int64)&v120[*((unsigned int *)v120 - 1)];
      if ( (unsigned __int64)v120 < v132 )
      {
        do
        {
          while ( 1 )
          {
            v133 = *v131;
            if ( *v131 )
            {
              v20 = (*(_DWORD *)(v133 + 8))-- == 1;
              if ( v20 )
                break;
            }
            if ( (unsigned __int64)++v131 >= v132 )
              goto LABEL_251;
          }
          ++v131;
          sub_15D7BC0(v261, v133);
        }
        while ( (unsigned __int64)v131 < v132 );
      }
      goto LABEL_251;
    }
    v188 = *(__int64 **)(a1 + 104);
    while ( 1 )
    {
      v189 = *v188;
      if ( (unsigned __int64)*v188 > 1 )
      {
        if ( *(_DWORD *)(v189 + 12) == v180 && v121 == v189 )
        {
          v190 = &v181[(unsigned __int64)v184 / 8];
          if ( v184 != v182 )
            goto LABEL_406;
LABEL_495:
          while ( v185 != v181 )
          {
            v237 = *v181;
            if ( (unsigned __int64)*v181 > 1 )
            {
              if ( *(_DWORD *)(v237 + 12) == v180 && v121 == v237 )
                goto LABEL_409;
            }
            else if ( !v237 )
            {
              break;
            }
            v181 += 3;
          }
LABEL_408:
          v181 = nullptr;
LABEL_409:
          v192 = v181 + 2;
          v193 = v181 + 1;
          if ( !v118 )
            v192 = v193;
          v194 = *v192;
          v266 = v192;
          if ( *v192 )
          {
            v270 = 0;
            v263 = 0;
            v262 = nullptr;
            do
            {
              if ( v270 >= *(_DWORD *)(v194 - 4) )
                break;
              v269 = *(_DWORD *)(v194 + 4LL * v270);
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL * v249) != v269 )
              {
                if ( v263 )
                {
                  v195 = *(unsigned int *)(v263 - 4);
                  if ( (_DWORD)v195 )
                  {
                    v268 = v120;
                    v271 = a2;
                    v196 = v263;
                    v267 = v263 + 32 * v195;
                    do
                    {
                      v197 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v196);
                      v198 = v196 + 16;
                      v196 += 32;
                      sub_182CBA0(v197, v198);
                    }
                    while ( v267 != v196 );
                    v120 = v268;
                    a2 = v271;
                  }
                  *(_DWORD *)(v263 - 4) = 0;
                }
                if ( v262 )
                {
                  v199 = v262;
                  v200 = (unsigned __int64)&v262[*((unsigned int *)v262 - 1)];
                  if ( (unsigned __int64)v262 < v200 )
                  {
                    do
                    {
                      v201 = *v199;
                      if ( *v199 )
                      {
                        v20 = (*(_DWORD *)(v201 + 8))-- == 1;
                        if ( v20 )
                        {
                          v272 = v200;
                          sub_15D7BC0(v251, v201);
                          v200 = v272;
                        }
                      }
                      ++v199;
                    }
                    while ( (unsigned __int64)v199 < v200 );
                  }
                  *((_DWORD *)v262 - 1) = 0;
                }
                v225 = *a2;
                v226 = **a2;
                if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
                {
                  v202 = *(char **)(v226 + 864);
                }
                else
                {
                  v231 = v225[9];
                  v232 = 18;
                  while ( --v232 )
                  {
                    if ( *(char *)(v231 + 3) >= 0 )
                    {
                      if ( v269 == *(_DWORD *)(v231 + 4) )
                      {
                        v233 = (char **)(v231 + 8);
                        goto LABEL_483;
                      }
                    }
                    else if ( *(_BYTE *)(v231 + 3) >> 6 != 2 )
                    {
                      v233 = (char **)(*(_QWORD *)(v231 + 16) + 8LL * v269);
                      goto LABEL_483;
                    }
                    v231 = *(_QWORD *)(v231 + 16);
                  }
                  sub_233F80((__int64 *)(v226 + 616), (_DWORD *)v225 + 18);
                  v233 = (char **)(*(_QWORD *)(v225[9] + 16) + 8LL * v269);
LABEL_483:
                  v202 = *v233;
                }
                *(_QWORD *)v292 = v251;
                v293 = v262;
                v289 = v263;
                v227 = sub_D3EC80(a1, (__int64)v202, (__int64)v292, &v289, (__int64)v299);
                v251 = *(_QWORD *)v292;
                v263 = v289;
                v262 = v293;
                if ( v227 )
                {
                  v203 = qword_1C7F2C0;
                  if ( (v298[0] & 0x100000000LL) != 0
                    || LODWORD(v298[0]) != 1
                    || (v301[0] & 0x100000000LL) != 0
                    || LODWORD(v301[0]) != 1 )
                  {
                    v202 = (char *)v297;
                    LOBYTE(v228) = sub_1848D40(qword_1C7F2C0, v297, v299);
                  }
                  else if ( (v297[0] & 0x100000000LL) != 0 || (v299[1] & 1) != 0 )
                  {
                    v202 = (char *)v297;
                    v228 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v297, v299) >> 31;
                  }
                  else
                  {
                    LOBYTE(v228) = SLODWORD(v297[0]) < v299[0];
                  }
                  if ( !(_BYTE)v228 )
                  {
                    if ( *((_DWORD *)v120 - 1) )
                    {
                      v206 = 0;
                      v205 = v119;
                      if ( v262 )
                      {
                        while ( 1 )
                        {
                          v229 = 0;
                          if ( !*((_DWORD *)v262 - 1) )
                            break;
                          while ( 1 )
                          {
                            v230 = v229 + 1;
                            if ( v262[v229] == v120[v206] )
                              break;
                            ++v229;
                            if ( v230 == *((_DWORD *)v262 - 1) )
                              goto LABEL_443;
                          }
                          v202 = (char *)(v263 + 32 * v229);
                          v203 = qword_1C7F2C0;
                          if ( (v202[20] & 1) != 0
                            || *((_DWORD *)v202 + 4) != 1
                            || (*(_BYTE *)(v205 + 20) & 1) != 0
                            || *(_DWORD *)(v205 + 16) != 1 )
                          {
                            v280 = v206;
                            v273 = v205;
                            v204 = sub_1848D40(qword_1C7F2C0, v202, v205);
                            v205 = v273;
                            v206 = v280;
                            if ( v204 )
                              break;
                          }
                          else
                          {
                            if ( (v202[4] & 1) != 0 || (*(_BYTE *)(v205 + 4) & 1) != 0 )
                            {
                              v285 = v206;
                              v279 = v205;
                              v245 = sub_182C7B0(qword_1C7F2C0, v202, v205);
                              v205 = v279;
                              v206 = v285;
                              v239 = v245 >> 31;
                            }
                            else
                            {
                              LOBYTE(v239) = *(_DWORD *)v205 > *(_DWORD *)v202;
                            }
                            if ( (_BYTE)v239 )
                              break;
                          }
                          ++v206;
                          v205 += 32;
                          if ( (unsigned int)v206 >= *((_DWORD *)v120 - 1) )
                            goto LABEL_432;
                        }
                      }
                    }
                    else
                    {
LABEL_432:
                      if ( (unsigned int)sub_180B130(v203) > 2 )
                      {
                        if ( (unsigned __int8)sub_186A530(*(double *)a4.m128_u64) )
                        {
                          sub_186A4C0(*(double *)a4.m128_u64);
                          v274 = sub_180B150(v203, v202);
                          std::__ostream_insert<char,std::char_traits<char>>();
                          sub_1606360(v302, v256, *(_QWORD *)(a1 + 16), 0, 0, 0);
                          v207 = sub_160E8B0(v274, v302);
                          v202 = "\n";
                          sub_D3D960(v207, "\n");
                          v203 = v303;
                          sub_18572D0(v303);
                          sub_186A500(v303, "\n");
                        }
                        else
                        {
                          v277 = sub_180B150(v203, v202);
                          std::__ostream_insert<char,std::char_traits<char>>();
                          sub_1606360(v302, v256, *(_QWORD *)(a1 + 16), 0, 0, 0);
                          v242 = sub_160E8B0(v277, v302);
                          v202 = "\n";
                          sub_D3D960(v242, "\n");
                          v203 = v303;
                          sub_18572D0(v303);
                        }
                      }
                      if ( (unsigned int)sub_180B130(v203) > 2 )
                      {
                        if ( (unsigned __int8)sub_186A530(*(double *)a4.m128_u64) )
                        {
                          sub_186A4C0(*(double *)a4.m128_u64);
                          v276 = sub_180B150(v203, v202);
                          std::__ostream_insert<char,std::char_traits<char>>();
                          v283 = *(_QWORD *)(a1 + 16);
                          v240 = sub_2FCEB0(*a2, v269);
                          sub_1606360(v302, v240, v283, 0, 0, 0);
                          v241 = sub_160E8B0(v276, v302);
                          sub_D3D960(v241, "\n");
                          sub_18572D0(v303);
                          sub_186A500(v303, "\n");
                        }
                        else
                        {
                          v278 = sub_180B150(v203, v202);
                          std::__ostream_insert<char,std::char_traits<char>>();
                          v284 = *(_QWORD *)(a1 + 16);
                          v243 = sub_2FCEB0(*a2, v269);
                          sub_1606360(v302, v243, v284, 0, 0, 0);
                          v244 = sub_160E8B0(v278, v302);
                          sub_D3D960(v244, "\n");
                          sub_18572D0(v303);
                        }
                      }
                      v208 = *a2;
                      if ( (*((_BYTE *)*a2 + 123) & 0x10) != 0 )
                      {
                        v275 = *(_QWORD *)(a1 + 16);
                        v209 = *(unsigned int **)sub_2FCF50((_QWORD *)(*v208 + 672), v208 + 13, v269);
                        if ( (*((_BYTE *)*a2 + 123) & 0x10) != 0 )
                        {
                          v281 = v209;
                          v210 = *(unsigned int **)sub_2FCF50(
                                                     (_QWORD *)(**a2 + 672),
                                                     *a2 + 13,
                                                     *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL * v249));
                          if ( v210 )
                          {
                            if ( v281 )
                            {
                              v286 = v281;
                              if ( v281 != v210 )
                              {
                                v282 = v210;
                                v211 = sub_17E9C90(*(_QWORD *)(v275 + 656), 24);
                                a4 = (__m128)_mm_unpacklo_epi64(
                                               (__m128i)(unsigned __int64)v282,
                                               (__m128i)(unsigned __int64)v286);
                                *v282 = (*v282 + 1) & 0x3FFFFFFF | *v282 & 0xC0000000;
                                *v286 = (*v286 + 1) & 0x3FFFFFFF | *v286 & 0xC0000000;
                                *(_QWORD *)v211 = 0;
                                *(__m128 *)(v211 + 8) = a4;
                              }
                            }
                          }
                        }
                      }
                      sub_EDBFA0((int)v208);
                      *(_BYTE *)(a1 + 144) = 1;
                    }
                  }
                }
LABEL_443:
                v194 = *v266;
              }
              ++v270;
            }
            while ( v194 );
            v258 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v299);
            sub_182CBA0(v258, v301);
            v212 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v297);
            sub_182CBA0(v212, v298);
            if ( v263 )
            {
              v213 = *(_DWORD *)(v263 - 4);
              if ( v213 )
              {
                v265 = a2;
                v214 = v263 + 32LL * v213;
                v215 = v263;
                do
                {
                  v216 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v215);
                  v217 = v215 + 16;
                  v215 += 32;
                  sub_182CBA0(v216, v217);
                }
                while ( v214 != v215 );
                a2 = v265;
              }
              sub_186B220((void *)(v263 - 8));
            }
            if ( v119 )
            {
              v218 = *(_DWORD *)(v119 - 4);
              if ( v218 )
              {
LABEL_453:
                v264 = a2;
                v219 = v119;
                v259 = v119 + 32LL * v218;
                do
                {
                  v220 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v219);
                  v221 = v219 + 16;
                  v219 += 32;
                  sub_182CBA0(v220, v221);
                }
                while ( v259 != v219 );
                a2 = v264;
              }
              sub_186B220((void *)(v119 - 8));
            }
            if ( v262 )
            {
              v222 = v262;
              v223 = (unsigned __int64)&v262[*((unsigned int *)v262 - 1)];
              if ( (unsigned __int64)v262 < v223 )
              {
                do
                {
                  v224 = *v222;
                  if ( *v222 )
                  {
                    v20 = (*(_DWORD *)(v224 + 8))-- == 1;
                    if ( v20 )
                      sub_15D7BC0(v251, v224);
                  }
                  ++v222;
                }
                while ( (unsigned __int64)v222 < v223 );
              }
              sub_186B220(v262 - 1);
            }
          }
          else
          {
            v260 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v299);
            sub_182CBA0(v260, v301);
            v238 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v297);
            sub_182CBA0(v238, v298);
            if ( v119 )
            {
              v218 = *(_DWORD *)(v119 - 4);
              v262 = nullptr;
              if ( v218 )
                goto LABEL_453;
              sub_186B220((void *)(v119 - 8));
            }
          }
          v234 = v120;
          v235 = (unsigned __int64)&v120[*((unsigned int *)v120 - 1)];
          if ( (unsigned __int64)v120 < v235 )
          {
            do
            {
              v236 = *v234;
              if ( *v234 )
              {
                v20 = (*(_DWORD *)(v236 + 8))-- == 1;
                if ( v20 )
                  sub_15D7BC0(v261, v236);
              }
              ++v234;
            }
            while ( (unsigned __int64)v234 < v235 );
          }
LABEL_251:
          sub_186B220(v120 - 1);
LABEL_252:
          v114 = *(_QWORD *)(a1 + 128);
          ++v249;
          v113 = *a2;
          if ( !v114 )
          {
LABEL_253:
            sub_ED9A60(v113);
            result = *(unsigned __int8 *)(a1 + 144);
            goto LABEL_163;
          }
          goto LABEL_226;
        }
      }
      else if ( !v189 )
      {
        goto LABEL_238;
      }
      v188 += 3;
      if ( v185 == v188 )
        goto LABEL_238;
    }
  }
  while ( (unsigned __int64)*v104 <= 1 )
  {
    v104 += 3;
    if ( v105 == v104 )
    {
      v104 = &v102[v103];
      goto LABEL_211;
    }
  }
LABEL_203:
  if ( v105 != v104 )
  {
    v106 = v104[1];
    if ( v106 && *(_DWORD *)(v106 - 4) > 1u && (v107 = v104[2]) != 0 && *(_DWORD *)(v107 - 4) > 1u )
    {
      while ( 1 )
      {
        v104 += 3;
        if ( v105 == v104 )
          break;
        if ( (unsigned __int64)*v104 > 1 )
          goto LABEL_203;
      }
    }
    else if ( v105 != v104 )
    {
      v134 = v104[1];
      v135 = *v104;
      if ( !v134 )
        goto LABEL_280;
LABEL_256:
      if ( *(_DWORD *)(v134 - 4) )
      {
        v136 = v104[2];
        if ( !v136 || !*(_DWORD *)(v136 - 4) )
        {
          sub_D3FED0(a1, v104 + 1, v135, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 856LL), a2, *(double *)a4.m128_u64);
          if ( *(_WORD *)(v135 + 4) )
          {
            v140 = *(_QWORD *)(a1 + 16);
          }
          else
          {
            v150 = 1;
            do
            {
              v142 = *(_QWORD *)(v135 + 16);
              v151 = *(int **)(v142 + 24);
              if ( !v151 )
                goto LABEL_295;
              v137 = *v151;
              if ( *v151 || v151[1] != 8 || *(_DWORD *)(v135 + 24) != 1 )
                goto LABEL_295;
              v135 = *(_QWORD *)(v135 + 32);
              v150 ^= 1u;
            }
            while ( !*(_WORD *)(v135 + 4) );
            v142 = *(_QWORD *)(v135 + 16);
LABEL_295:
            v140 = *(_QWORD *)(a1 + 16);
            if ( !v150 )
            {
              v141 = *(_QWORD *)(v140 + 864);
              goto LABEL_262;
            }
          }
          v141 = *(_QWORD *)(v140 + 856);
          v142 = *(_QWORD *)(v135 + 16);
          goto LABEL_262;
        }
        goto LABEL_263;
      }
LABEL_280:
      while ( 1 )
      {
        sub_D3FED0(a1, v104 + 2, v135, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 864LL), a2, *(double *)a4.m128_u64);
        if ( *(_WORD *)(v135 + 4) )
          break;
        v147 = 0;
        while ( 1 )
        {
          v142 = *(_QWORD *)(v135 + 16);
          v148 = *(_DWORD **)(v142 + 24);
          if ( !v148 || *v148 || v148[1] != 8 || *(_DWORD *)(v135 + 24) != 1 )
            break;
          v135 = *(_QWORD *)(v135 + 32);
          v147 ^= 1u;
          if ( *(_WORD *)(v135 + 4) )
          {
            v142 = *(_QWORD *)(v135 + 16);
            break;
          }
        }
        v149 = *(_QWORD *)(a1 + 16);
        if ( !v147 )
          goto LABEL_287;
        v141 = *(_QWORD *)(v149 + 856);
LABEL_262:
        sub_13333D0((_DWORD)a3, v142, v141, v137, v138, v139);
LABEL_263:
        if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
          goto LABEL_162;
        v104 += 3;
        if ( v105 != v104 )
        {
          v143 = v104;
          do
          {
            v104 = v143;
            if ( (unsigned __int64)*v143 > 1 )
              break;
            v143 += 3;
            v104 = v143;
          }
          while ( v105 != v143 );
        }
        v102 = *(__int64 **)(a1 + 104);
        v144 = &v102[3 * *(unsigned int *)(a1 + 112)];
        if ( v144 == v104 )
          goto LABEL_211;
        for ( j = v104[1]; j; j = v104[1] )
        {
          if ( *(_DWORD *)(j - 4) <= 1u )
            break;
          v146 = v104[2];
          if ( !v146 || *(_DWORD *)(v146 - 4) <= 1u )
            break;
          do
            v104 += 3;
          while ( v105 != v104 && (unsigned __int64)*v104 <= 1 );
          if ( v144 == v104 )
            goto LABEL_211;
        }
        if ( v144 == v104 )
          goto LABEL_211;
        v134 = v104[1];
        v135 = *v104;
        if ( v134 )
          goto LABEL_256;
      }
      v142 = *(_QWORD *)(v135 + 16);
      v149 = *(_QWORD *)(a1 + 16);
LABEL_287:
      v141 = *(_QWORD *)(v149 + 864);
      goto LABEL_262;
    }
  }
LABEL_211:
  if ( v102 == v104 )
    goto LABEL_223;
  v108 = v102;
  while ( 1 )
  {
    v109 = v108;
    if ( (unsigned __int64)*v108 > 1 )
      break;
    v108 += 3;
    if ( v104 == v108 )
      goto LABEL_223;
  }
  while ( 1 )
  {
    if ( v109 == v104 )
      goto LABEL_223;
    v110 = v109[1];
    if ( !v110 )
      break;
    if ( *(_DWORD *)(v110 - 4) <= 1u )
      break;
    v111 = v109[2];
    if ( !v111 || *(_DWORD *)(v111 - 4) <= 1u )
      break;
    v112 = v109 + 3;
    if ( v109 + 3 == v104 )
      goto LABEL_223;
    while ( 1 )
    {
      v109 = v112;
      if ( (unsigned __int64)*v112 > 1 )
        break;
      v112 += 3;
      if ( v104 == v112 )
        goto LABEL_223;
    }
  }
  if ( v109 == v104 )
    goto LABEL_223;
  while ( 1 )
  {
    v155 = (unsigned int *)v109[1];
    if ( v155 )
    {
      v156 = *(v155 - 1);
      v157 = (unsigned int *)v109[2];
      if ( v156 == 1 )
      {
        if ( v157 && *(v157 - 1) )
          sub_D419A0(a1, a3, *v155, v109 + 2, a2, a4);
      }
      else if ( v157 && *(v157 - 1) == 1 && v156 )
      {
        sub_D419A0(a1, a3, *v157, v109 + 1, a2, a4);
      }
    }
    v113 = *a2;
    if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
      break;
    v109 += 3;
    if ( v109 == v104 )
    {
LABEL_328:
      v109 = v104;
    }
    else
    {
      while ( (unsigned __int64)*v109 <= 1 )
      {
        v109 += 3;
        if ( v104 == v109 )
          goto LABEL_328;
      }
    }
    v158 = *(_QWORD *)(a1 + 104) + 24LL * *(unsigned int *)(a1 + 112);
    if ( v109 != (__int64 *)v158 )
    {
      for ( k = v109[1]; k; k = v109[1] )
      {
        if ( *(_DWORD *)(k - 4) <= 1u )
          break;
        v160 = v109[2];
        if ( !v160 || *(_DWORD *)(v160 - 4) <= 1u )
          break;
        do
          v109 += 3;
        while ( v109 != v104 && (unsigned __int64)*v109 <= 1 );
        if ( (__int64 *)v158 == v109 )
          goto LABEL_224;
      }
      if ( (__int64 *)v158 != v109 )
        continue;
    }
    goto LABEL_224;
  }
LABEL_162:
  result = 0;
LABEL_163:
  if ( ptr )
  {
    v248 = result;
    sub_186B220(ptr);
    return v248;
  }
  return result;
}

