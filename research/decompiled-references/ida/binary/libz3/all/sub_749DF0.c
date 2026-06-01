__int64 __fastcall sub_749DF0(__int64 a1, _QWORD *a2, __int64 a3)
{
  char **v3; // r14
  char **v4; // r13
  char **v5; // r13
  char **v6; // r13
  char **v7; // r13
  char **v8; // r13
  char **v9; // r14
  char **v10; // r13
  char **v11; // r13
  char **v12; // r13
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r12
  char v16; // al
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 *v19; // rsi
  char v20; // al
  unsigned int v21; // eax
  struct _Unwind_Exception *v22; // r10
  int v23; // eax
  struct _Unwind_Exception **p_exception_cleanup; // rax
  char v25; // di
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // rax
  _QWORD *v29; // r15
  _QWORD *v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdi
  bool v33; // zf
  _QWORD *v34; // r15
  _QWORD *v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // edx
  __int64 *v43; // rax
  __int64 v44; // rax
  void (__fastcall ***v45)(void *); // r15
  __int64 v46; // r14
  unsigned int v47; // edx
  unsigned int v48; // ecx
  __int64 v49; // r13
  int v51; // r15d
  _QWORD *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rbx
  unsigned int v58; // edx
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rbx
  unsigned int v65; // edx
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // r15
  __int64 v76; // r15
  __int64 v77; // rbx
  unsigned __int64 v78; // rax
  bool v79; // cf
  __int16 v80; // ax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rbx
  unsigned int v85; // edx
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rbx
  __int64 v95; // r15
  unsigned __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  int v99; // r9d
  unsigned int v100; // r15d
  __int16 v101; // ax
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rax
  unsigned int v105; // edx
  __int64 m; // rax
  __int64 v107; // rax
  unsigned int v108; // r15d
  int v109; // edx
  unsigned int v110; // eax
  __int64 v111; // rcx
  unsigned int v112; // esi
  char **v113; // r13
  char **v114; // r13
  __int64 v115; // rax
  __int64 v116; // rdx
  _QWORD *v117; // rcx
  int v118; // ecx
  __int64 v119; // rax
  unsigned int v120; // ecx
  _QWORD *v121; // rax
  unsigned int v122; // edx
  __int64 v123; // rdi
  __int64 v124; // rax
  __int64 v125; // r15
  _QWORD *v126; // rax
  unsigned int v127; // ecx
  int v128; // edx
  __int64 v129; // r15
  __int64 v130; // rcx
  size_t v131; // rcx
  __int64 v132; // r8
  _QWORD *v133; // rax
  __int64 v134; // r8
  _QWORD *v135; // rdx
  __int64 v136; // rax
  unsigned __int64 v137; // r15
  size_t v138; // r9
  size_t v139; // rcx
  int i; // eax
  size_t v141; // rcx
  __int64 v142; // r8
  unsigned int v143; // eax
  __int64 v144; // rdi
  __int64 v145; // rcx
  size_t v146; // rcx
  __int64 v147; // r8
  _QWORD *v148; // rax
  size_t v149; // rcx
  __int64 v150; // r9
  __int64 v151; // r8
  _QWORD *v152; // rdx
  int v153; // eax
  unsigned int v154; // eax
  __int64 v155; // rdx
  unsigned int v156; // r11d
  unsigned int v157; // edx
  unsigned int *v158; // rax
  __int64 v159; // rdx
  unsigned int v160; // r11d
  unsigned int v161; // edx
  unsigned int *v162; // rax
  __int64 v163; // rdx
  _DWORD *v164; // rcx
  __int64 v165; // rax
  __int64 *v166; // rdx
  char v167; // al
  __int64 *v168; // rdx
  __int64 v169; // rax
  __int64 *v170; // r8
  __int64 v171; // rsi
  _QWORD *v172; // rax
  unsigned __int64 j; // rcx
  __int64 v174; // rsi
  __int64 v175; // rax
  __int64 *v176; // rcx
  char v177; // al
  __int64 *v178; // rcx
  unsigned int v179; // edi
  __int64 v180; // rax
  __int64 *v181; // r8
  __int64 v182; // rsi
  unsigned __int64 v183; // rcx
  _QWORD *k; // rax
  __int64 v185; // rsi
  __int64 v186; // rax
  __int64 v187; // rsi
  __int64 v188; // rdi
  _QWORD *v189; // rax
  unsigned int v190; // ecx
  unsigned __int64 v191; // r8
  _QWORD *v192; // rdx
  __int64 v193; // rsi
  __int64 v194; // rdi
  size_t v195; // rdx
  int v196; // ecx
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rcx
  __int64 v200; // rdi
  __int64 v201; // rsi
  __int64 v202; // rdi
  __int64 v203; // rdx
  int v204; // eax
  __int64 *v205; // rbx
  __int64 v206; // rax
  __int64 v207; // r13
  struct _Unwind_Exception *v208; // r12
  __int64 v209; // rax
  __int64 *v210; // rbx
  __int64 v211; // r13
  struct _Unwind_Exception *v212; // r12
  _QWORD *v213; // rax
  int v214; // r15d
  __int64 v215; // rcx
  int v216; // edx
  _QWORD *v217; // rcx
  unsigned int *v218; // rax
  __int64 v219; // rdx
  unsigned int *v220; // rdx
  unsigned int v221; // edx
  unsigned int v222; // ecx
  size_t v223; // rsi
  unsigned int *v224; // rdx
  unsigned int v225; // ecx
  size_t v226; // rsi
  unsigned int *v227; // rdx
  _QWORD *v228; // rax
  _QWORD *v229; // rax
  unsigned int v230; // r8d
  size_t v231; // rsi
  unsigned int *v232; // rcx
  __int64 v233; // rsi
  __int64 v234; // rdi
  size_t v235; // rdx
  _QWORD *v236; // rax
  unsigned int v237; // r8d
  unsigned int v238; // edx
  unsigned int *v239; // rdx
  unsigned int v240; // r15d
  size_t v241; // rsi
  unsigned int *v242; // rdx
  unsigned int v243; // ebx
  unsigned int v244; // eax
  unsigned int *v245; // rax
  char **exception; // r14
  const char *v247; // rax
  char **v248; // r14
  const char *v249; // rax
  char **v250; // r14
  const char *v251; // rax
  _QWORD *v252; // rax
  _QWORD *v253; // rax
  _QWORD *v254; // rax
  char **v255; // r14
  const char *v256; // rax
  __int64 *v257; // [rsp+8h] [rbp-138h]
  __int64 v258; // [rsp+10h] [rbp-130h]
  __int64 *v259; // [rsp+10h] [rbp-130h]
  size_t v260; // [rsp+18h] [rbp-128h]
  __int64 v261; // [rsp+18h] [rbp-128h]
  __int64 *v262; // [rsp+18h] [rbp-128h]
  __int64 *v263; // [rsp+18h] [rbp-128h]
  __int64 v264; // [rsp+20h] [rbp-120h]
  __int64 v265; // [rsp+28h] [rbp-118h]
  __int64 v266; // [rsp+28h] [rbp-118h]
  size_t v267; // [rsp+28h] [rbp-118h]
  __int64 *v268; // [rsp+28h] [rbp-118h]
  unsigned __int64 v269; // [rsp+28h] [rbp-118h]
  size_t v270; // [rsp+30h] [rbp-110h]
  __int64 v271; // [rsp+30h] [rbp-110h]
  size_t v272; // [rsp+30h] [rbp-110h]
  __int64 v273; // [rsp+38h] [rbp-108h]
  __int64 *v274; // [rsp+40h] [rbp-100h]
  __int64 *v275; // [rsp+40h] [rbp-100h]
  _QWORD *v276; // [rsp+40h] [rbp-100h]
  __int64 *v277; // [rsp+40h] [rbp-100h]
  _QWORD *v278; // [rsp+40h] [rbp-100h]
  __int64 v279; // [rsp+40h] [rbp-100h]
  __int64 v280; // [rsp+48h] [rbp-F8h]
  size_t v281; // [rsp+48h] [rbp-F8h]
  unsigned int v282; // [rsp+48h] [rbp-F8h]
  __int64 *v283; // [rsp+48h] [rbp-F8h]
  unsigned __int64 v284; // [rsp+48h] [rbp-F8h]
  _QWORD *v285; // [rsp+48h] [rbp-F8h]
  __int64 v286; // [rsp+48h] [rbp-F8h]
  int v287; // [rsp+54h] [rbp-ECh]
  unsigned int v288; // [rsp+58h] [rbp-E8h]
  unsigned __int64 v289; // [rsp+58h] [rbp-E8h]
  size_t v290; // [rsp+58h] [rbp-E8h]
  unsigned int v291; // [rsp+60h] [rbp-E0h]
  unsigned int v292; // [rsp+60h] [rbp-E0h]
  unsigned int v293; // [rsp+60h] [rbp-E0h]
  unsigned int v294; // [rsp+60h] [rbp-E0h]
  unsigned int v295; // [rsp+60h] [rbp-E0h]
  size_t v296; // [rsp+60h] [rbp-E0h]
  __int64 v297; // [rsp+60h] [rbp-E0h]
  __int64 v298; // [rsp+70h] [rbp-D0h]
  _QWORD *v299; // [rsp+80h] [rbp-C0h]
  __int64 v300; // [rsp+88h] [rbp-B8h]
  unsigned int v301; // [rsp+88h] [rbp-B8h]
  unsigned int v302; // [rsp+88h] [rbp-B8h]
  __int64 v303; // [rsp+88h] [rbp-B8h]
  unsigned __int64 v304; // [rsp+88h] [rbp-B8h]
  unsigned int v305; // [rsp+88h] [rbp-B8h]
  unsigned int v306; // [rsp+88h] [rbp-B8h]
  unsigned int v307; // [rsp+88h] [rbp-B8h]
  __int64 v308; // [rsp+88h] [rbp-B8h]
  __int64 v309; // [rsp+88h] [rbp-B8h]
  __int64 v311; // [rsp+98h] [rbp-A8h]
  unsigned __int64 v312; // [rsp+A0h] [rbp-A0h]
  unsigned __int64 v313; // [rsp+A0h] [rbp-A0h]
  __int64 v314; // [rsp+A0h] [rbp-A0h]
  __int64 v315; // [rsp+A0h] [rbp-A0h]
  size_t v316; // [rsp+A0h] [rbp-A0h]
  __int64 v317; // [rsp+A0h] [rbp-A0h]
  __int64 v318; // [rsp+A0h] [rbp-A0h]
  __int64 v319; // [rsp+A0h] [rbp-A0h]
  int v321; // [rsp+B0h] [rbp-90h]
  unsigned int v322; // [rsp+B4h] [rbp-8Ch]
  struct _Unwind_Exception *v323; // [rsp+B8h] [rbp-88h]
  struct _Unwind_Exception *v324; // [rsp+B8h] [rbp-88h]
  struct _Unwind_Exception *v325; // [rsp+B8h] [rbp-88h]
  struct _Unwind_Exception *v326; // [rsp+B8h] [rbp-88h]
  char v327[8]; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v328; // [rsp+D0h] [rbp-70h]
  __int64 v329; // [rsp+E0h] [rbp-60h]
  __int64 v330[10]; // [rsp+F0h] [rbp-50h] BYREF

  v13 = a1;
  sub_EE4940(v327, "elim-small-bv", *a2);
  sub_EE4F60("elim-small-bv");
  sub_EE5110("elim-small-bv");
  v14 = *a2;
  v15 = *(_QWORD *)(*a2 + 72LL);
  *(_BYTE *)(*(_QWORD *)(a1 + 168) + 88LL) = (*(_BYTE *)(*a2 + 123LL) & 4) != 0;
  v298 = *(_QWORD *)(a1 + 16);
  if ( !v15 )
  {
    v17 = 0;
    goto LABEL_97;
  }
  v16 = *(_BYTE *)(v15 + 3) >> 6;
  if ( v16 )
  {
    if ( v16 != 1 )
      goto LABEL_4;
  }
  else
  {
    do
    {
      v15 = *(_QWORD *)(v15 + 16);
      v16 = *(_BYTE *)(v15 + 3) >> 6;
    }
    while ( !v16 );
    if ( v16 != 1 )
    {
LABEL_4:
      if ( v16 == 2 )
        v321 = *(_DWORD *)(v15 + 4) - 1;
      else
        v321 = *(_DWORD *)(v15 + 4);
      if ( v321 )
        goto LABEL_7;
LABEL_116:
      v17 = 0;
      v15 = 0;
      goto LABEL_97;
    }
  }
  v321 = *(_DWORD *)(v15 + 4) + 1;
  if ( *(_DWORD *)(v15 + 4) == -1 )
    goto LABEL_116;
LABEL_7:
  v311 = 0;
  v17 = 0;
  v15 = 0;
  v322 = 0;
  while ( 2 )
  {
    v18 = *(_QWORD *)(v14 + 88);
    v19 = *(__int64 **)v14;
    v323 = (struct _Unwind_Exception *)v18;
    if ( !v18 )
      goto LABEL_20;
    v20 = *(_BYTE *)(v18 + 3) >> 6;
    if ( !v20 )
    {
      do
      {
        v18 = *(_QWORD *)(v18 + 16);
        v20 = *(_BYTE *)(v18 + 3) >> 6;
      }
      while ( !v20 );
      v323 = *(struct _Unwind_Exception **)(v14 + 88);
    }
    if ( v20 == 1 )
    {
      v21 = *(_DWORD *)(v18 + 4) + 1;
LABEL_13:
      if ( v322 < v21 )
        goto LABEL_14;
      goto LABEL_120;
    }
    if ( v20 != 2 )
    {
      v21 = *(_DWORD *)(v18 + 4);
      goto LABEL_13;
    }
    if ( v322 < *(_DWORD *)(v18 + 4) - 1 )
    {
LABEL_14:
      v22 = v323;
      v23 = 18;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !--v23 )
          {
            sub_233F80(v19 + 77, (_DWORD *)(v14 + 88));
            v19 = *(__int64 **)v14;
            p_exception_cleanup = (struct _Unwind_Exception **)(*(_QWORD *)(*(_QWORD *)(v14 + 88) + 16LL) + v311);
            goto LABEL_19;
          }
          if ( (v22->exception_class & 0x80000000) == 0 )
            break;
          if ( BYTE3(v22->exception_class) >> 6 != 2 )
          {
            p_exception_cleanup = (struct _Unwind_Exception **)(v22->private_1 + v311);
            goto LABEL_19;
          }
          v22 = (struct _Unwind_Exception *)v22->private_1;
        }
        if ( HIDWORD(v22->exception_class) == v322 )
          break;
        v22 = (struct _Unwind_Exception *)v22->private_1;
      }
      p_exception_cleanup = (struct _Unwind_Exception **)&v22->exception_cleanup;
LABEL_19:
      v323 = *p_exception_cleanup;
      goto LABEL_20;
    }
LABEL_120:
    v323 = nullptr;
LABEL_20:
    v25 = *(_BYTE *)(v14 + 123);
    if ( (v25 & 0x10) != 0 )
    {
      v26 = *(_QWORD *)(v14 + 104);
      v27 = 18;
      while ( --v27 )
      {
        if ( *(char *)(v26 + 3) >= 0 )
        {
          if ( *(_DWORD *)(v26 + 4) == v322 )
            goto LABEL_25;
        }
        else if ( *(_BYTE *)(v26 + 3) >> 6 != 2 )
        {
          goto LABEL_25;
        }
        v26 = *(_QWORD *)(v26 + 16);
      }
      sub_236900(v19 + 84, (__int64 *)(v14 + 104));
      v25 = *(_BYTE *)(v14 + 123);
      v19 = *(__int64 **)v14;
LABEL_25:
      if ( (v25 & 0x20) != 0 )
      {
LABEL_26:
        v300 = v19[108];
        goto LABEL_27;
      }
    }
    else if ( (*(_BYTE *)(v14 + 123) & 0x20) != 0 )
    {
      goto LABEL_26;
    }
    v41 = *(_QWORD *)(v14 + 72);
    v42 = 18;
    while ( 1 )
    {
      if ( !--v42 )
      {
        sub_233F80(v19 + 77, (_DWORD *)(v14 + 72));
        v43 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v14 + 72) + 16LL) + v311);
        goto LABEL_93;
      }
      if ( *(char *)(v41 + 3) >= 0 )
        break;
      if ( *(_BYTE *)(v41 + 3) >> 6 != 2 )
      {
        v43 = (__int64 *)(*(_QWORD *)(v41 + 16) + v311);
        goto LABEL_93;
      }
LABEL_95:
      v41 = *(_QWORD *)(v41 + 16);
    }
    if ( *(_DWORD *)(v41 + 4) != v322 )
      goto LABEL_95;
    v43 = (__int64 *)(v41 + 8);
LABEL_93:
    v300 = *v43;
LABEL_27:
    if ( (*(_BYTE *)(*a2 + 123LL) & 0x20) != 0 )
    {
      v14 = *a2;
      goto LABEL_97;
    }
    v299 = (_QWORD *)(v13 + 24);
    v28 = *(_QWORD *)(v13 + 64);
    if ( v28 )
    {
      if ( *(_DWORD *)(v28 - 4) || *(_QWORD *)(v13 + 56) != **(_QWORD **)(v13 + 48) )
      {
        *(_DWORD *)(v28 - 4) = 0;
LABEL_32:
        v29 = *(_QWORD **)(v13 + 80);
        if ( v29 )
        {
          v30 = &v29[*((unsigned int *)v29 - 1)];
          if ( v29 >= v30 )
            goto LABEL_40;
          do
          {
            while ( 1 )
            {
              v31 = *v29;
              if ( *v29 )
              {
                v32 = *(_QWORD *)(v13 + 72);
                v33 = (*(_DWORD *)(v31 + 8))-- == 1;
                if ( v33 )
                  break;
              }
              if ( ++v29 >= v30 )
                goto LABEL_39;
            }
            v312 = (unsigned __int64)v30;
            sub_15D7BC0(v32, v31);
            v30 = (_QWORD *)v312;
            ++v29;
          }
          while ( (unsigned __int64)v29 < v312 );
LABEL_39:
          v29 = *(_QWORD **)(v13 + 80);
          if ( v29 )
LABEL_40:
            *((_DWORD *)v29 - 1) = 0;
        }
        v34 = *(_QWORD **)(v13 + 112);
        if ( v34 )
        {
          v35 = &v34[*((unsigned int *)v34 - 1)];
          if ( v34 >= v35 )
            goto LABEL_49;
          do
          {
            while ( 1 )
            {
              v36 = *v34;
              if ( *v34 )
              {
                v37 = *(_QWORD *)(v13 + 104);
                v33 = (*(_DWORD *)(v36 + 8))-- == 1;
                if ( v33 )
                  break;
              }
              if ( ++v34 >= v35 )
                goto LABEL_48;
            }
            v313 = (unsigned __int64)v35;
            sub_15D7BC0(v37, v36);
            v35 = (_QWORD *)v313;
            ++v34;
          }
          while ( (unsigned __int64)v34 < v313 );
LABEL_48:
          v34 = *(_QWORD **)(v13 + 112);
          if ( v34 )
LABEL_49:
            *((_DWORD *)v34 - 1) = 0;
        }
        v38 = *(_QWORD *)(v13 + 160);
        if ( v38 )
          *(_DWORD *)(v38 - 4) = 0;
        sub_15843E0(v299);
      }
    }
    else if ( **(_QWORD **)(v13 + 48) != *(_QWORD *)(v13 + 56) )
    {
      goto LABEL_32;
    }
    if ( !*(_BYTE *)(v13 + 40) )
    {
      if ( v17 )
      {
        v33 = (*(_DWORD *)(v17 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v298, v17);
      }
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(v13 + 32)) )
      {
        if ( *(_BYTE *)(v13 + 41) )
        {
          sub_7434D0((__int64)v299);
          exception = (char **)__cxa_allocate_exception(0x28u);
          v247 = (const char *)sub_1829130(*(_QWORD *)(v13 + 32));
          sub_743560(v330, v247);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v330);
          *exception = (char *)off_1C650D8;
          sub_233E40((__int64)v330);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
        }
        if ( v300 )
          ++*(_DWORD *)(v300 + 8);
        if ( v15 )
        {
          v33 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v33 )
LABEL_63:
            sub_15D7BC0(v298, v15);
        }
LABEL_64:
        v15 = v300;
        v39 = 0;
        goto LABEL_65;
      }
      *(_DWORD *)(v13 + 152) = 0;
      *(_DWORD *)(v13 + 176) = 0;
      *(_QWORD *)(v13 + 144) = v300;
      v54 = v300;
      if ( (unsigned __int8)sub_746430(v299, v300, 3) )
      {
        v55 = 0x7FFFFFFF8LL;
        v56 = *(_QWORD *)(v13 + 80);
        if ( v56 )
          v55 = 8LL * (unsigned int)(*(_DWORD *)(v56 - 4) - 1);
        v57 = *(_QWORD *)(v56 + v55);
        if ( v57 )
          ++*(_DWORD *)(v57 + 8);
        if ( v15 )
        {
          v33 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v33 )
          {
            sub_15D7BC0(v298, v15);
            v56 = *(_QWORD *)(v13 + 80);
          }
        }
        v58 = *(_DWORD *)(v56 - 4) - 1;
        v59 = *(_QWORD *)(v56 + 8LL * v58);
        *(_DWORD *)(v56 - 4) = v58;
        if ( !v59 )
          goto LABEL_147;
        v60 = *(_QWORD *)(v13 + 72);
        v33 = (*(_DWORD *)(v59 + 8))-- == 1;
        if ( !v33 )
          goto LABEL_147;
      }
      else
      {
LABEL_206:
        while ( 1 )
        {
          v102 = *(_QWORD *)(v13 + 64);
          if ( !v102 )
            break;
          while ( 1 )
          {
            if ( !*(_DWORD *)(v102 - 4) )
              goto LABEL_208;
            v91 = *(_QWORD *)(v13 + 32);
            if ( !(unsigned __int8)sub_18290A0(v91) && *(_BYTE *)(v13 + 41) )
            {
              sub_7434D0((__int64)v299);
              v250 = (char **)__cxa_allocate_exception(0x28u);
              v251 = (const char *)sub_1829130(*(_QWORD *)(v13 + 32));
              sub_743560(v330, v251);
              *v250 = (char *)off_1C63128;
              sub_2333C0(v250 + 1, v330);
              *v250 = (char *)off_1C650D8;
              sub_233E40((__int64)v330);
              __cxa_throw(v250, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
            }
            v92 = 0xFFFFFFFF0LL;
            v93 = *(_QWORD *)(v13 + 64);
            if ( v93 )
              v92 = 16LL * (unsigned int)(*(_DWORD *)(v93 - 4) - 1);
            v94 = v93 + v92;
            v95 = *(_QWORD *)(v13 + 168);
            v316 = *(_QWORD *)(v93 + v92);
            v96 = (unsigned int)(*(_DWORD *)(v13 + 176) + 1);
            *(_DWORD *)(v13 + 176) = v96;
            if ( *(_QWORD *)(v95 + 72) < v96 )
            {
              v114 = (char **)__cxa_allocate_exception(0x28u);
              sub_743560(v330, off_1C7E168[0]);
              *v114 = (char *)off_1C63128;
              sub_2333C0(v114 + 1, v330);
              *v114 = (char *)off_1C650D8;
              sub_233E40((__int64)v330);
              __cxa_throw(v114, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
            }
            if ( *(_QWORD *)(v95 + 80) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v91, v54) )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_743560(v330, off_1C7E178);
              *v8 = (char *)off_1C63670;
              sub_2333C0(v8 + 1, v330);
              sub_233E40((__int64)v330);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
            }
            v100 = *(_DWORD *)(v94 + 8) & 0xFFFFFFCC;
            if ( v100 )
              break;
            if ( (*(_BYTE *)(v94 + 8) & 1) == 0 )
            {
              v101 = *(_WORD *)(v316 + 4);
              if ( v101 == 1 )
                goto LABEL_252;
              if ( v101 != 2 )
                goto LABEL_204;
              v287 = *(_DWORD *)(v316 + 20);
LABEL_390:
              sub_15856A0(v299);
              *(_QWORD *)(v13 + 144) = *(_QWORD *)(v316 + 24);
              v213 = *(_QWORD **)(v13 + 184);
              if ( v213 )
                v306 = *((_DWORD *)v213 - 1);
              else
                v306 = 0;
              if ( v287 )
              {
                v214 = 0;
                while ( 1 )
                {
                  if ( v213 )
                  {
                    v221 = *((_DWORD *)v213 - 1);
                    if ( v221 == *((_DWORD *)v213 - 2) )
                    {
                      v222 = (3 * v221 + 1) >> 1;
                      v223 = 8 * v222 + 8;
                      if ( 8 * v221 + 8 >= (unsigned int)v223 || v221 >= v222 )
                      {
                        v10 = (char **)__cxa_allocate_exception(0x28u);
                        sub_743560(v330, "Overflow encountered when expanding vector");
                        *v10 = (char *)off_1C63128;
                        sub_2333C0(v10 + 1, v330);
                        sub_233E40((__int64)v330);
                        __cxa_throw(
                          v10,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v293 = (3 * v221 + 1) >> 1;
                      v224 = (unsigned int *)sub_186B300(v213 - 1, v223);
                      v213 = v224 + 2;
                      *(_QWORD *)(v13 + 184) = v224 + 2;
                      *v224 = v293;
                      LODWORD(v224) = v224[1];
                      v217 = &v213[(unsigned int)v224];
                      v216 = (_DWORD)v224 + 1;
                    }
                    else
                    {
                      v215 = v221;
                      v216 = v221 + 1;
                      v217 = &v213[v215];
                    }
                  }
                  else
                  {
                    v228 = (_QWORD *)sub_186B270(0x18u);
                    *v228 = 2;
                    v213 = v228 + 1;
                    v216 = 1;
                    *(_QWORD *)(v13 + 184) = v213;
                    v217 = v213;
                  }
                  *v217 = 0;
                  *((_DWORD *)v213 - 1) = v216;
                  v218 = *(unsigned int **)(v13 + 552);
                  if ( v218 )
                  {
                    v219 = *(v218 - 1);
                    if ( (_DWORD)v219 == *(v218 - 2) )
                    {
                      v225 = (unsigned int)(3 * v219 + 1) >> 1;
                      v226 = 4 * v225 + 8;
                      if ( 4 * (int)v219 + 8 >= (unsigned int)v226 || (unsigned int)v219 >= v225 )
                      {
                        v12 = (char **)__cxa_allocate_exception(0x28u);
                        sub_743560(v330, "Overflow encountered when expanding vector");
                        *v12 = (char *)off_1C63128;
                        sub_2333C0(v12 + 1, v330);
                        sub_233E40((__int64)v330);
                        __cxa_throw(
                          v12,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v294 = (unsigned int)(3 * v219 + 1) >> 1;
                      v227 = (unsigned int *)sub_186B300(v218 - 2, v226);
                      v218 = v227 + 2;
                      *(_QWORD *)(v13 + 552) = v227 + 2;
                      *v227 = v294;
                      v220 = &v227[v227[1] + 2];
                    }
                    else
                    {
                      v220 = &v218[v219];
                    }
                  }
                  else
                  {
                    v229 = (_QWORD *)sub_186B270(0x10u);
                    *v229 = 2;
                    v218 = (unsigned int *)(v229 + 1);
                    *(_QWORD *)(v13 + 552) = v218;
                    v220 = v218;
                  }
                  ++v214;
                  *v220 = v306;
                  ++*(v218 - 1);
                  if ( v214 == v287 )
                    break;
                  v213 = *(_QWORD **)(v13 + 184);
                }
              }
              *(_DWORD *)(v13 + 152) += v287;
LABEL_237:
              v108 = *(_DWORD *)(v316 + 72) + *(_DWORD *)(v316 + 76) + 1;
              while ( 1 )
              {
                v110 = *(_DWORD *)(v94 + 8) >> 6;
                if ( v110 >= v108 )
                  break;
                if ( v110 )
                {
                  v111 = v110 - 1;
                  v112 = *(_DWORD *)(v316 + 72);
                  if ( v112 < v110 )
                    v111 = (unsigned int)v111 - v112;
                  v54 = *(_QWORD *)(16LL * *(unsigned int *)(v316 + 20) + v316 + 8 * v111 + 80);
                }
                else
                {
                  v54 = *(_QWORD *)(v316 + 24);
                }
                v109 = ((v110 + 1) << 6) | *(_DWORD *)(v94 + 8) & 0x3F;
                *(_DWORD *)(v94 + 8) = v109;
                if ( !(unsigned __int8)sub_746430(v299, v54, ((unsigned __int8)v109 >> 4) & 3) )
                  goto LABEL_206;
              }
              v274 = (__int64 *)(*(_QWORD *)(v13 + 80) + 8LL * *(unsigned int *)(v94 + 12));
              v273 = *(_QWORD *)(v13 + 32);
              v264 = *v274;
              v328 = v273;
              v129 = *(unsigned int *)(v316 + 20);
              v291 = *(_DWORD *)(v316 + 76);
              v288 = *(_DWORD *)(v316 + 72);
              v130 = 16 * v129;
              if ( v288 )
              {
                v131 = v316 + v130;
                v132 = *(_QWORD *)(v131 + 80);
                if ( v132 )
                  ++*(_DWORD *)(v132 + 8);
                v270 = v131;
                v303 = v132;
                v133 = (_QWORD *)sub_186B270(0x18u);
                *v133 = 2;
                v134 = v303;
                v135 = v133 + 1;
                v280 = v288;
                v136 = v288 + 2 * v129;
                v137 = (unsigned __int64)v135;
                v138 = v316 + 8 * v136;
                v139 = v270;
                for ( i = 1; ; i = (_DWORD)v158 + 1 )
                {
                  v141 = v139 + 8;
                  *v135 = v134;
                  *(_DWORD *)(v137 - 4) = i;
                  if ( v138 == v141 )
                    break;
                  while ( 1 )
                  {
                    v142 = *(_QWORD *)(v141 + 80);
                    if ( v142 )
                      ++*(_DWORD *)(v142 + 8);
                    v143 = *(_DWORD *)(v137 - 4);
                    if ( v143 == *(_DWORD *)(v137 - 8) )
                      break;
                    v141 += 8LL;
                    *(_QWORD *)(v137 + 8LL * v143) = v142;
                    *(_DWORD *)(v137 - 4) = v143 + 1;
                    if ( v138 == v141 )
                      goto LABEL_281;
                  }
                  v156 = (3 * v143 + 1) >> 1;
                  v157 = 8 * v156 + 8;
                  if ( 8 * v143 + 8 >= v157 || v143 >= v156 )
                  {
                    v6 = (char **)__cxa_allocate_exception(0x28u);
                    sub_743560(v330, "Overflow encountered when expanding vector");
                    *v6 = (char *)off_1C63128;
                    sub_2333C0(v6 + 1, v330);
                    sub_233E40((__int64)v330);
                    __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v260 = v141;
                  v266 = v142;
                  v272 = v138;
                  v305 = (3 * v143 + 1) >> 1;
                  v158 = (unsigned int *)sub_186B300((void *)(v137 - 8), v157);
                  v159 = v158[1];
                  v137 = (unsigned __int64)(v158 + 2);
                  v138 = v272;
                  v134 = v266;
                  *v158 = v305;
                  LODWORD(v158) = v159;
                  v139 = v260;
                  v135 = (_QWORD *)(v137 + 8 * v159);
                }
LABEL_281:
                v144 = *(_QWORD *)(v13 + 32);
                v145 = *(unsigned int *)(v316 + 20);
                v271 = v144;
                v329 = v144;
                v130 = 16 * v145;
                if ( !v291 )
                {
                  v304 = 0;
                  v262 = v274 + 1;
                  v165 = v288;
                  goto LABEL_299;
                }
LABEL_282:
                v146 = v316 + v130;
                v147 = *(_QWORD *)(v146 + 80);
                if ( v147 )
                  ++*(_DWORD *)(v147 + 8);
                v265 = v147;
                v281 = v146;
                v148 = (_QWORD *)sub_186B270(0x18u);
                v149 = v281;
                v150 = 0;
                v151 = v265;
                v152 = v148 + 1;
                *v148 = 2;
                v153 = 1;
                v304 = (unsigned __int64)v152;
                while ( 1 )
                {
                  *v152 = v151;
                  ++v150;
                  *(_DWORD *)(v304 - 4) = v153;
                  if ( (unsigned int)v150 >= v291 )
                    break;
                  v151 = *(_QWORD *)(v149 + 8 * v150 + 80);
                  if ( v151 )
                    ++*(_DWORD *)(v151 + 8);
                  v154 = *(_DWORD *)(v304 - 4);
                  if ( v154 == *(_DWORD *)(v304 - 8) )
                  {
                    v160 = (3 * v154 + 1) >> 1;
                    v161 = 8 * v160 + 8;
                    if ( 8 * v154 + 8 >= v161 || v154 >= v160 )
                    {
                      v9 = (char **)__cxa_allocate_exception(0x28u);
                      sub_743560(v330, "Overflow encountered when expanding vector");
                      *v9 = (char *)off_1C63128;
                      sub_2333C0(v9 + 1, v330);
                      sub_233E40((__int64)v330);
                      __cxa_throw(
                        v9,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v258 = v151;
                    v261 = v150;
                    v267 = v149;
                    v282 = (3 * v154 + 1) >> 1;
                    v162 = (unsigned int *)sub_186B300((void *)(v304 - 8), v161);
                    v163 = v162[1];
                    v164 = v162 + 2;
                    v304 = (unsigned __int64)(v162 + 2);
                    v150 = v261;
                    *v162 = v282;
                    LODWORD(v162) = v163;
                    v151 = v258;
                    v152 = &v164[2 * v163];
                    v153 = (_DWORD)v162 + 1;
                    v149 = v267;
                  }
                  else
                  {
                    v155 = v154;
                    v153 = v154 + 1;
                    v152 = (_QWORD *)(v304 + 8 * v155);
                  }
                }
                v262 = v274 + 1;
                v165 = v288;
                v280 = v288;
                if ( v288 )
                {
                  v144 = *(_QWORD *)(v13 + 32);
LABEL_299:
                  v166 = v274;
                  v288 = 0;
                  v268 = &v274[v165];
                  while ( 1 )
                  {
                    v275 = v166;
                    v167 = sub_15D3190(v144, v166[1]);
                    v168 = v275;
                    if ( v167 )
                    {
                      v169 = v275[1];
                      v170 = (__int64 *)(v137 + 8LL * v288++);
                      if ( v169 )
                        ++*(_DWORD *)(v169 + 8);
                      v171 = *v170;
                      if ( *v170 )
                      {
                        v33 = (*(_DWORD *)(v171 + 8))-- == 1;
                        if ( v33 )
                        {
                          v257 = v275;
                          v259 = v170;
                          v279 = v169;
                          sub_15D7BC0(v273, v171);
                          v168 = v257;
                          v170 = v259;
                          v169 = v279;
                        }
                      }
                      *v170 = v169;
                    }
                    v166 = v168 + 1;
                    if ( v268 == v166 )
                      break;
                    v144 = *(_QWORD *)(v13 + 32);
                  }
                  if ( v137 )
                  {
                    v165 = v288;
                    goto LABEL_311;
                  }
LABEL_318:
                  if ( v291 )
                    goto LABEL_319;
                }
                else
                {
                  v280 = 0;
                  if ( v137 )
                  {
LABEL_311:
                    v172 = (_QWORD *)(v137 + 8 * v165);
                    for ( j = v137 + 8LL * *(unsigned int *)(v137 - 4); (unsigned __int64)v172 < j; ++v172 )
                    {
                      v174 = *v172;
                      if ( *v172 )
                      {
                        v33 = (*(_DWORD *)(v174 + 8))-- == 1;
                        if ( v33 )
                        {
                          v269 = j;
                          v276 = v172;
                          sub_15D7BC0(v273, v174);
                          j = v269;
                          v172 = v276;
                        }
                      }
                    }
                    *(_DWORD *)(v137 - 4) = v288;
                    goto LABEL_318;
                  }
LABEL_319:
                  v175 = v291;
                  v291 = 0;
                  v176 = &v262[v280];
                  v277 = &v262[v280 + v175];
                  do
                  {
                    v283 = v176;
                    v177 = sub_15D3190(*(_QWORD *)(v13 + 32), *v176);
                    v178 = v283;
                    if ( v177 )
                    {
                      v179 = v291;
                      v180 = *v283;
                      ++v291;
                      v181 = (__int64 *)(v304 + 8LL * v179);
                      if ( *v283 )
                        ++*(_DWORD *)(v180 + 8);
                      v182 = *v181;
                      if ( *v181 )
                      {
                        v33 = (*(_DWORD *)(v182 + 8))-- == 1;
                        if ( v33 )
                        {
                          v263 = v283;
                          v286 = v180;
                          sub_15D7BC0(v271, v182);
                          v178 = v263;
                          v181 = (__int64 *)(v304 + 8LL * v179);
                          v180 = v286;
                        }
                      }
                      *v181 = v180;
                    }
                    v176 = v178 + 1;
                  }
                  while ( v277 != v176 );
                }
                if ( v304 )
                {
                  v183 = v304 + 8LL * *(unsigned int *)(v304 - 4);
                  for ( k = (_QWORD *)(v304 + 8LL * v291); (unsigned __int64)k < v183; ++k )
                  {
                    v185 = *k;
                    if ( *k )
                    {
                      v33 = (*(_DWORD *)(v185 + 8))-- == 1;
                      if ( v33 )
                      {
                        v278 = k;
                        v284 = v183;
                        sub_15D7BC0(v271, v185);
                        k = v278;
                        v183 = v284;
                      }
                    }
                  }
                  *(_DWORD *)(v304 - 4) = v291;
                }
              }
              else
              {
                v137 = 0;
                v329 = v273;
                v271 = v273;
                if ( v291 )
                  goto LABEL_282;
                v304 = 0;
              }
              if ( (unsigned __int8)sub_744F00(
                                      *(__int64 **)(v13 + 168),
                                      v316,
                                      v264,
                                      (__int64 *)(v13 + 504),
                                      (_QWORD *)(v13 + 520)) )
              {
LABEL_344:
                v189 = *(_QWORD **)(v13 + 80);
                if ( v189 )
                  goto LABEL_345;
              }
              else
              {
                if ( (*(_BYTE *)(v94 + 8) & 2) != 0 )
                {
                  v186 = sub_15DBA30(*(_QWORD *)(v13 + 32), v316, v288, v137, v291, v304, v264);
                  if ( v186 )
                    ++*(_DWORD *)(v186 + 8);
                  v187 = *(_QWORD *)(v13 + 504);
                  if ( v187 )
                  {
                    v188 = *(_QWORD *)(v13 + 512);
                    v33 = (*(_DWORD *)(v187 + 8))-- == 1;
                    if ( v33 )
                    {
                      v297 = v186;
                      sub_15D7BC0(v188, v187);
                      v186 = v297;
                    }
                  }
                  *(_QWORD *)(v13 + 504) = v186;
                  goto LABEL_344;
                }
                v233 = *(_QWORD *)(v13 + 504);
                ++*(_DWORD *)(v316 + 8);
                if ( v233 )
                {
                  v234 = *(_QWORD *)(v13 + 512);
                  v33 = (*(_DWORD *)(v233 + 8))-- == 1;
                  if ( v33 )
                    sub_15D7BC0(v234, v233);
                }
                *(_QWORD *)(v13 + 504) = v316;
                v189 = *(_QWORD **)(v13 + 80);
                if ( !v189 )
                {
                  v235 = v316;
                  goto LABEL_419;
                }
LABEL_345:
                v190 = *(_DWORD *)(v94 + 12);
                v191 = (unsigned __int64)&v189[*((unsigned int *)v189 - 1)];
                v192 = &v189[v190];
                if ( (unsigned __int64)v192 >= v191 )
                  goto LABEL_352;
                do
                {
                  v193 = *v192;
                  if ( *v192 )
                  {
                    v194 = *(_QWORD *)(v13 + 72);
                    v33 = (*(_DWORD *)(v193 + 8))-- == 1;
                    if ( v33 )
                    {
                      v285 = v192;
                      v289 = v191;
                      v292 = v190;
                      sub_15D7BC0(v194, v193);
                      v192 = v285;
                      v191 = v289;
                      v190 = v292;
                    }
                  }
                  ++v192;
                }
                while ( (unsigned __int64)v192 < v191 );
                v189 = *(_QWORD **)(v13 + 80);
                if ( v189 )
                {
LABEL_352:
                  v195 = *(_QWORD *)(v13 + 504);
                  *((_DWORD *)v189 - 1) = v190;
                  if ( v195 )
                  {
                    ++*(_DWORD *)(v195 + 8);
                    v190 = *((_DWORD *)v189 - 1);
                  }
                  if ( *((_DWORD *)v189 - 2) == v190 )
                  {
                    v230 = (3 * v190 + 1) >> 1;
                    v231 = 8 * v230 + 8;
                    if ( 8 * v190 + 8 >= (unsigned int)v231 || v190 >= v230 )
                    {
                      v3 = (char **)__cxa_allocate_exception(0x28u);
                      sub_743560(v330, "Overflow encountered when expanding vector");
                      *v3 = (char *)off_1C63128;
                      sub_2333C0(v3 + 1, v330);
                      sub_233E40((__int64)v330);
                      __cxa_throw(
                        v3,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v290 = v195;
                    v295 = (3 * v190 + 1) >> 1;
                    v232 = (unsigned int *)sub_186B300(v189 - 1, v231);
                    v189 = v232 + 2;
                    v195 = v290;
                    *(_QWORD *)(v13 + 80) = v232 + 2;
                    *v232 = v295;
                  }
                  goto LABEL_355;
                }
              }
              v235 = *(_QWORD *)(v13 + 504);
              if ( v235 )
LABEL_419:
                ++*(_DWORD *)(v235 + 8);
              v296 = v235;
              v236 = (_QWORD *)sub_186B270(0x18u);
              *v236 = 2;
              v189 = v236 + 1;
              v195 = v296;
              *(_QWORD *)(v13 + 80) = v189;
LABEL_355:
              v196 = *((_DWORD *)v189 - 1);
              v189[v196] = v195;
              *((_DWORD *)v189 - 1) = v196 + 1;
              v197 = *(_QWORD *)(v13 + 184);
              if ( v197 )
                *(_DWORD *)(v197 - 4) -= v287;
              v198 = *(_QWORD *)(v13 + 552);
              if ( v198 )
                *(_DWORD *)(v198 - 4) -= v287;
              sub_15844D0(v299);
              v199 = *(_QWORD *)(v13 + 504);
              if ( (*(_BYTE *)(v94 + 8) & 1) != 0 )
              {
                sub_1584390(v299, v316, 0, v199);
                v199 = *(_QWORD *)(v13 + 504);
              }
              if ( v199 )
              {
                v200 = *(_QWORD *)(v13 + 512);
                v33 = (*(_DWORD *)(v199 + 8))-- == 1;
                if ( v33 )
                  sub_15D7BC0(v200, v199);
              }
              v201 = *(_QWORD *)(v13 + 520);
              *(_QWORD *)(v13 + 504) = 0;
              if ( v201
                && (v202 = *(_QWORD *)(v13 + 528), v33 = *(_DWORD *)(v201 + 8) == 1, --*(_DWORD *)(v201 + 8), v33) )
              {
                sub_15D7BC0(v202, v201);
                v54 = *(_QWORD *)(v13 + 504);
              }
              else
              {
                v54 = 0;
              }
              *(_QWORD *)(v13 + 520) = 0;
              v203 = *(_QWORD *)(v13 + 64);
              v204 = *(_DWORD *)(v203 - 4);
              *(_DWORD *)(v203 - 4) = v204 - 1;
              if ( v316 != v54 && v204 != 1 )
                *(_BYTE *)(v203 + 16LL * (unsigned int)(v204 - 2) + 8) |= 2u;
              v205 = (__int64 *)v304;
              if ( v304 )
              {
                v206 = *(unsigned int *)(v304 - 4);
                if ( v304 < v304 + 8 * v206 )
                {
                  v318 = v13;
                  v207 = v15;
                  v208 = v323;
                  v325 = (struct _Unwind_Exception *)(v304 + 8 * v206);
                  do
                  {
                    v54 = *v205;
                    if ( *v205 )
                    {
                      v33 = (*(_DWORD *)(v54 + 8))-- == 1;
                      if ( v33 )
                        sub_15D7BC0(v271, v54);
                    }
                    ++v205;
                  }
                  while ( v205 < (__int64 *)v325 );
                  v323 = v208;
                  v15 = v207;
                  v13 = v318;
                }
                sub_186B220((void *)(v304 - 8));
              }
              if ( v137 )
              {
                v209 = *(unsigned int *)(v137 - 4);
                v210 = (__int64 *)v137;
                if ( v137 < v137 + 8 * v209 )
                {
                  v319 = v13;
                  v211 = v15;
                  v212 = v323;
                  v326 = (struct _Unwind_Exception *)(v137 + 8 * v209);
                  do
                  {
                    v54 = *v210;
                    if ( *v210 )
                    {
                      v33 = (*(_DWORD *)(v54 + 8))-- == 1;
                      if ( v33 )
                        sub_15D7BC0(v273, v54);
                    }
                    ++v210;
                  }
                  while ( v210 < (__int64 *)v326 );
                  v323 = v212;
                  v15 = v211;
                  v13 = v319;
                }
                sub_186B220((void *)(v137 - 8));
              }
              goto LABEL_206;
            }
            v115 = sub_1680FB0(*(_QWORD *)(v13 + 56), v316, 0);
            v116 = v115;
            if ( !v115 )
              break;
            v117 = *(_QWORD **)(v13 + 80);
            ++*(_DWORD *)(v115 + 8);
            if ( v117 )
            {
              v100 = *((_DWORD *)v117 - 1);
              if ( v100 == *((_DWORD *)v117 - 2) )
              {
                v243 = (3 * v100 + 1) >> 1;
                v244 = 8 * v243 + 8;
                if ( 8 * v100 + 8 >= v244 || v100 >= v243 )
                {
                  v7 = (char **)__cxa_allocate_exception(0x28u);
                  sub_743560(v330, "Overflow encountered when expanding vector");
                  *v7 = (char *)off_1C63128;
                  sub_2333C0(v7 + 1, v330);
                  sub_233E40((__int64)v330);
                  __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v308 = v116;
                v245 = (unsigned int *)sub_186B300(v117 - 1, v244);
                v117 = v245 + 2;
                *v245 = v243;
                v100 = v245[1];
                *(_QWORD *)(v13 + 80) = v245 + 2;
                v116 = v308;
              }
            }
            else
            {
              v309 = v115;
              v253 = (_QWORD *)sub_186B270(0x18u);
              v117 = v253 + 1;
              *v253 = 2;
              v116 = v309;
              *(_QWORD *)(v13 + 80) = v253 + 1;
            }
            v117[v100] = v116;
            v102 = *(_QWORD *)(v13 + 64);
            *((_DWORD *)v117 - 1) = v100 + 1;
            v118 = *(_DWORD *)(v102 - 4);
            v54 = (unsigned int)(v118 - 1);
            *(_DWORD *)(v102 - 4) = v54;
            if ( v316 != v116 && v118 != 1 )
              *(_BYTE *)(v102 + 16LL * (unsigned int)(v118 - 2) + 8) |= 2u;
          }
          v101 = *(_WORD *)(v316 + 4);
          if ( v101 == 1 )
          {
LABEL_252:
            v54 = v316;
            --*(_DWORD *)(*(_QWORD *)(v13 + 64) - 4LL);
            sub_745BC0(v299, v316);
            continue;
          }
          if ( v101 == 2 )
          {
            v287 = *(_DWORD *)(v316 + 20);
            if ( *(_DWORD *)(v94 + 8) <= 0x3Fu )
              goto LABEL_390;
            goto LABEL_237;
          }
LABEL_204:
          if ( v101 )
          {
            sub_1872CE0("");
            sub_1873130(114, 793);
          }
          v54 = v316;
          sub_7491D0((__int64)v299, v316, v94, v97, v98, v99);
        }
LABEL_208:
        v103 = 0x7FFFFFFF8LL;
        v104 = *(_QWORD *)(v13 + 80);
        if ( v104 )
          v103 = 8LL * (unsigned int)(*(_DWORD *)(v104 - 4) - 1);
        v57 = *(_QWORD *)(v104 + v103);
        if ( v57 )
          ++*(_DWORD *)(v57 + 8);
        if ( v15 )
        {
          v33 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v33 )
          {
            sub_15D7BC0(v298, v15);
            v104 = *(_QWORD *)(v13 + 80);
          }
        }
        v105 = *(_DWORD *)(v104 - 4) - 1;
        v59 = *(_QWORD *)(v104 + 8LL * v105);
        *(_DWORD *)(v104 - 4) = v105;
        if ( !v59 )
          goto LABEL_147;
        v60 = *(_QWORD *)(v13 + 72);
        v33 = (*(_DWORD *)(v59 + 8))-- == 1;
        if ( !v33 )
          goto LABEL_147;
      }
      sub_15D7BC0(v60, v59);
LABEL_147:
      v15 = v57;
      v39 = 0;
      goto LABEL_65;
    }
    if ( v17 )
    {
      v33 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v33 )
        sub_15D7BC0(v298, v17);
    }
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(v13 + 32)) )
    {
      if ( *(_BYTE *)(v13 + 41) )
      {
        sub_7434D0((__int64)v299);
        v248 = (char **)__cxa_allocate_exception(0x28u);
        v249 = (const char *)sub_1829130(*(_QWORD *)(v13 + 32));
        sub_743560(v330, v249);
        *v248 = (char *)off_1C63128;
        sub_2333C0(v248 + 1, v330);
        *v248 = (char *)off_1C650D8;
        sub_233E40((__int64)v330);
        __cxa_throw(v248, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
      }
      if ( v300 )
        ++*(_DWORD *)(v300 + 8);
      if ( v15 )
      {
        v33 = (*(_DWORD *)(v15 + 8))-- == 1;
        if ( v33 )
          goto LABEL_63;
      }
      goto LABEL_64;
    }
    *(_DWORD *)(v13 + 152) = 0;
    *(_DWORD *)(v13 + 176) = 0;
    *(_QWORD *)(v13 + 144) = v300;
    v61 = v300;
    if ( !(unsigned __int8)sub_746BF0(v299, v300, 3) )
    {
LABEL_177:
      v81 = *(_QWORD *)(v13 + 64);
      if ( v81 )
      {
        while ( *(_DWORD *)(v81 - 4) )
        {
          v73 = *(_QWORD *)(v13 + 32);
          if ( !(unsigned __int8)sub_18290A0(v73) && *(_BYTE *)(v13 + 41) )
          {
            sub_7434D0((__int64)v299);
            v255 = (char **)__cxa_allocate_exception(0x28u);
            v256 = (const char *)sub_1829130(*(_QWORD *)(v13 + 32));
            sub_743560(v330, v256);
            *v255 = (char *)off_1C63128;
            sub_2333C0(v255 + 1, v330);
            *v255 = (char *)off_1C650D8;
            sub_233E40((__int64)v330);
            __cxa_throw(v255, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
          }
          v74 = 0xFFFFFFFF0LL;
          v75 = *(_QWORD *)(v13 + 64);
          if ( v75 )
            v74 = 16LL * (unsigned int)(*(_DWORD *)(v75 - 4) - 1);
          v76 = v74 + v75;
          v77 = *(_QWORD *)v76;
          v78 = (unsigned int)(*(_DWORD *)(v13 + 176) + 1);
          v79 = *(_QWORD *)(*(_QWORD *)(v13 + 168) + 72LL) < v78;
          v315 = *(_QWORD *)(v13 + 168);
          *(_DWORD *)(v13 + 176) = v78;
          if ( v79 )
          {
            v113 = (char **)__cxa_allocate_exception(0x28u);
            sub_743560(v330, off_1C7E168[0]);
            *v113 = (char *)off_1C63128;
            sub_2333C0(v113 + 1, v330);
            *v113 = (char *)off_1C650D8;
            sub_233E40((__int64)v330);
            __cxa_throw(v113, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
          }
          if ( *(_QWORD *)(v315 + 80) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v73, v61) )
          {
            v11 = (char **)__cxa_allocate_exception(0x28u);
            sub_743560(v330, off_1C7E178);
            *v11 = (char *)off_1C63670;
            sub_2333C0(v11 + 1, v330);
            sub_233E40((__int64)v330);
            __cxa_throw(v11, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
          }
          if ( (*(_DWORD *)(v76 + 8) & 0xFFFFFFCC) != 0
            || (*(_BYTE *)(v76 + 8) & 1) == 0
            || (v301 = *(_DWORD *)(v76 + 8) & 0xFFFFFFCC,
                v119 = sub_1680FB0(*(_QWORD *)(v13 + 56), v77, 0),
                v317 = v119,
                v120 = v301,
                !v119) )
          {
            v80 = *(_WORD *)(v77 + 4);
            if ( v80 == 1 )
            {
              v61 = v77;
              --*(_DWORD *)(*(_QWORD *)(v13 + 64) - 4LL);
              sub_745FA0(v299, v77);
            }
            else if ( v80 == 2 )
            {
              v61 = v77;
              sub_7475D0((__int64)v299, v77, v76);
            }
            else
            {
              if ( v80 )
              {
                sub_1872CE0("");
                sub_1873130(114, 793);
              }
              v61 = v77;
              sub_7486C0(v299, v77, v76);
            }
            goto LABEL_177;
          }
          ++*(_DWORD *)(v119 + 8);
          v121 = *(_QWORD **)(v13 + 80);
          if ( v121 )
          {
            v122 = *((_DWORD *)v121 - 1);
            if ( v122 == *((_DWORD *)v121 - 2) )
            {
              v240 = (3 * v122 + 1) >> 1;
              v241 = 8 * v240 + 8;
              if ( 8 * v122 + 8 >= (unsigned int)v241 || v122 >= v240 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_743560(v330, "Overflow encountered when expanding vector");
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, v330);
                sub_233E40((__int64)v330);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v242 = (unsigned int *)sub_186B300(v121 - 1, v241);
              v121 = v242 + 2;
              v120 = v301;
              *v242 = v240;
              v122 = v242[1];
              *(_QWORD *)(v13 + 80) = v121;
            }
          }
          else
          {
            v254 = (_QWORD *)sub_186B270(0x18u);
            *v254 = 2;
            v121 = v254 + 1;
            v120 = v301;
            v122 = 0;
            *(_QWORD *)(v13 + 80) = v121;
          }
          v302 = v120;
          v123 = *(_QWORD *)(v13 + 96);
          v121[v122] = v317;
          v61 = v77;
          *((_DWORD *)v121 - 1) = v122 + 1;
          v124 = sub_1680FB0(v123, v77, 0);
          v125 = v124;
          if ( v124 )
            ++*(_DWORD *)(v124 + 8);
          v126 = *(_QWORD **)(v13 + 112);
          if ( v126 )
          {
            v127 = *((_DWORD *)v126 - 1);
            if ( v127 == *((_DWORD *)v126 - 2) )
            {
              v237 = (3 * v127 + 1) >> 1;
              v238 = 8 * v237 + 8;
              if ( 8 * v127 + 8 >= v238 || v127 >= v237 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_743560(v330, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v330);
                sub_233E40((__int64)v330);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v61 = v238;
              v307 = (3 * v127 + 1) >> 1;
              v239 = (unsigned int *)sub_186B300(v126 - 1, v238);
              v126 = v239 + 2;
              *(_QWORD *)(v13 + 112) = v239 + 2;
              v127 = v239[1];
              *v239 = v307;
            }
          }
          else
          {
            v252 = (_QWORD *)sub_186B270(0x18u);
            *v252 = 2;
            v126 = v252 + 1;
            v127 = v302;
            *(_QWORD *)(v13 + 112) = v126;
          }
          v126[v127] = v125;
          *((_DWORD *)v126 - 1) = v127 + 1;
          v81 = *(_QWORD *)(v13 + 64);
          v128 = *(_DWORD *)(v81 - 4);
          *(_DWORD *)(v81 - 4) = v128 - 1;
          if ( v77 != v317 && v128 != 1 )
            *(_BYTE *)(v81 + 16LL * (unsigned int)(v128 - 2) + 8) |= 2u;
        }
      }
      v82 = 0x7FFFFFFF8LL;
      v83 = *(_QWORD *)(v13 + 80);
      if ( v83 )
        v82 = 8LL * (unsigned int)(*(_DWORD *)(v83 - 4) - 1);
      v84 = *(_QWORD *)(v83 + v82);
      v314 = v84;
      if ( v84 )
        ++*(_DWORD *)(v84 + 8);
      if ( v15 )
      {
        v33 = (*(_DWORD *)(v15 + 8))-- == 1;
        if ( v33 )
        {
          sub_15D7BC0(v298, v15);
          v83 = *(_QWORD *)(v13 + 80);
        }
      }
      v85 = *(_DWORD *)(v83 - 4) - 1;
      v86 = *(_QWORD *)(v83 + 8LL * v85);
      *(_DWORD *)(v83 - 4) = v85;
      if ( v86 )
      {
        v87 = *(_QWORD *)(v13 + 72);
        v33 = (*(_DWORD *)(v86 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v87, v86);
      }
      v88 = *(_QWORD *)(v13 + 112);
      if ( v88 )
      {
        v89 = (unsigned int)(*(_DWORD *)(v88 - 4) - 1);
        v39 = *(_QWORD *)(v88 + 8 * v89);
        if ( !v39 )
        {
          *(_DWORD *)(v88 - 4) = v89;
          goto LABEL_229;
        }
        ++*(_DWORD *)(v39 + 8);
        v90 = (unsigned int)(*(_DWORD *)(v88 - 4) - 1);
        v71 = *(_QWORD *)(v88 + 8 * v90);
        *(_DWORD *)(v88 - 4) = v90;
        if ( !v71 )
          goto LABEL_164;
      }
      else
      {
        v39 = MEMORY[0x7FFFFFFF8];
        if ( !MEMORY[0x7FFFFFFF8] )
        {
          --MEMORY[0xFFFFFFFFFFFFFFFC];
          goto LABEL_229;
        }
        ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
        v71 = MEMORY[0x7FFFFFFF8];
        --MEMORY[0xFFFFFFFFFFFFFFFC];
      }
      v72 = *(_QWORD *)(v13 + 104);
      v33 = (*(_DWORD *)(v71 + 8))-- == 1;
      if ( !v33 )
        goto LABEL_164;
LABEL_163:
      sub_15D7BC0(v72, v71);
      goto LABEL_164;
    }
    v62 = 0x7FFFFFFF8LL;
    v63 = *(_QWORD *)(v13 + 80);
    if ( v63 )
      v62 = 8LL * (unsigned int)(*(_DWORD *)(v63 - 4) - 1);
    v64 = *(_QWORD *)(v63 + v62);
    v314 = v64;
    if ( v64 )
      ++*(_DWORD *)(v64 + 8);
    if ( v15 )
    {
      v33 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v33 )
      {
        sub_15D7BC0(v298, v15);
        v63 = *(_QWORD *)(v13 + 80);
      }
    }
    v65 = *(_DWORD *)(v63 - 4) - 1;
    v66 = *(_QWORD *)(v63 + 8LL * v65);
    *(_DWORD *)(v63 - 4) = v65;
    if ( v66 )
    {
      v67 = *(_QWORD *)(v13 + 72);
      v33 = (*(_DWORD *)(v66 + 8))-- == 1;
      if ( v33 )
        sub_15D7BC0(v67, v66);
    }
    v68 = *(_QWORD *)(v13 + 112);
    if ( v68 )
    {
      v69 = (unsigned int)(*(_DWORD *)(v68 - 4) - 1);
      v39 = *(_QWORD *)(v68 + 8 * v69);
      if ( v39 )
      {
        ++*(_DWORD *)(v39 + 8);
        v70 = (unsigned int)(*(_DWORD *)(v68 - 4) - 1);
        v71 = *(_QWORD *)(v68 + 8 * v70);
        *(_DWORD *)(v68 - 4) = v70;
        if ( v71 )
          goto LABEL_162;
        goto LABEL_164;
      }
      *(_DWORD *)(v68 - 4) = v69;
LABEL_229:
      v107 = sub_15DE1B0(*(_QWORD *)(v13 + 32));
      v39 = v107;
      if ( v107 )
        ++*(_DWORD *)(v107 + 8);
      goto LABEL_164;
    }
    v39 = MEMORY[0x7FFFFFFF8];
    if ( !MEMORY[0x7FFFFFFF8] )
    {
      --MEMORY[0xFFFFFFFFFFFFFFFC];
      goto LABEL_229;
    }
    ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
    v71 = MEMORY[0x7FFFFFFF8];
    --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_162:
    v72 = *(_QWORD *)(v13 + 104);
    v33 = (*(_DWORD *)(v71 + 8))-- == 1;
    if ( v33 )
      goto LABEL_163;
LABEL_164:
    v15 = v314;
LABEL_65:
    v40 = sub_15DE0E0(*(_QWORD *)(v13 + 16), v323, v39);
    v17 = v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    if ( v39 )
    {
      v33 = (*(_DWORD *)(v39 + 8))-- == 1;
      if ( v33 )
        sub_15D7BC0(v298, v39);
    }
    sub_EDBFA0(*a2);
    v311 += 8;
    if ( v322 + 1 != v321 )
    {
      ++v322;
      continue;
    }
    break;
  }
  v14 = *a2;
LABEL_97:
  v44 = sub_1336AB0(*(_QWORD *)(v14 + 8), *(_QWORD *)(v13 + 616));
  v324 = (struct _Unwind_Exception *)v44;
  if ( v44 )
    ++*(_DWORD *)(v44 + 8);
  v45 = *(void (__fastcall ****)(void *))(v14 + 8);
  if ( v45 )
  {
    v33 = (*((_DWORD *)v45 + 2))-- == 1;
    if ( v33 )
    {
      (**v45)(v45);
      sub_186B220(v45);
    }
  }
  *(_QWORD *)(v14 + 8) = v324;
  sub_EE4A20(":elim-small-bv-num-eliminated");
  *(_DWORD *)(*a2 + 120LL) = (*(_DWORD *)(*a2 + 120LL) + 1) & 0x3FFFFFF | *(_DWORD *)(*a2 + 120LL) & 0xFC000000;
  v46 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v46 + 32);
  v47 = *(_DWORD *)(a3 + 8);
  v48 = *(_DWORD *)(a3 + 12);
  if ( v47 >= v48 )
  {
    v51 = 2 * v48;
    v49 = sub_186B270(16LL * v48);
    v47 = *(_DWORD *)(a3 + 8);
    v52 = *(_QWORD **)a3;
    if ( v47 )
    {
      if ( v47 - 1 <= 2 || (_QWORD *)v49 == v52 + 1 )
      {
        for ( m = 0; m != v47; ++m )
          *(_QWORD *)(v49 + m * 8) = v52[m];
      }
      else
      {
        v53 = 0;
        do
        {
          *(__m128i *)(v49 + v53 * 8) = _mm_loadu_si128((const __m128i *)&v52[v53]);
          v53 += 2;
        }
        while ( v53 != 2LL * (v47 >> 1) );
        if ( (v47 & 1) != 0 )
          *(_QWORD *)(v49 + 8LL * (v47 & 0xFFFFFFFE)) = v52[v47 & 0xFFFFFFFE];
      }
    }
    if ( v52 != (_QWORD *)(a3 + 16) && v52 )
    {
      sub_186B220(v52);
      v47 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v49;
    *(_DWORD *)(a3 + 12) = v51;
  }
  else
  {
    v49 = *(_QWORD *)a3;
  }
  *(_QWORD *)(v49 + 8LL * v47) = v46;
  *(_DWORD *)(a3 + 8) = v47 + 1;
  if ( v17 )
  {
    v33 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v298, v17);
  }
  if ( v15 )
  {
    v33 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v298, v15);
  }
  return sub_EE4A00(v327);
}

