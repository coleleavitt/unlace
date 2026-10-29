__int64 __fastcall sub_3802C0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 *v4; // r14
  __int64 v5; // rdx
  __int64 *v6; // r12
  __int64 v7; // r15
  _QWORD *v8; // rax
  unsigned int *v9; // rsi
  unsigned int v10; // r13d
  _QWORD *v11; // rcx
  __int64 *v12; // rax
  unsigned int v13; // eax
  unsigned __int64 v14; // r15
  __int64 *v15; // r14
  __int64 v16; // rsi
  bool v17; // zf
  __int64 *v18; // r12
  unsigned int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // rbx
  unsigned int v23; // ecx
  size_t v24; // rsi
  unsigned int v25; // r13d
  unsigned int *v26; // rax
  __int64 v27; // rcx
  char v28; // dl
  __int64 *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  char j; // al
  __int64 v33; // r12
  unsigned int v34; // r14d
  __int64 v35; // rax
  int v36; // edx
  unsigned int **v37; // rax
  unsigned int *v38; // rcx
  _QWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rsi
  int v42; // eax
  unsigned int **v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rcx
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rsi
  int v49; // eax
  _QWORD *v50; // rsi
  _DWORD *v51; // r10
  __int64 v52; // rdx
  __int64 v53; // rcx
  char k; // al
  unsigned int v55; // eax
  int v56; // eax
  __int64 *v57; // rdx
  _QWORD *v58; // rcx
  unsigned int v59; // eax
  __int64 v60; // rsi
  int v61; // eax
  _QWORD *v62; // rsi
  __int64 v63; // r10
  _QWORD *v64; // rax
  unsigned int v65; // r10d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rsi
  unsigned int v69; // r10d
  size_t v70; // rsi
  unsigned int *v71; // rax
  __int64 v72; // rsi
  unsigned int v73; // r10d
  size_t v74; // rsi
  unsigned int *v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rax
  int v78; // ecx
  __int64 *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  unsigned int v82; // edx
  unsigned int v83; // r14d
  int v84; // ecx
  int v85; // r8d
  int v86; // r9d
  __m128i *v87; // r12
  __int64 v88; // rax
  _QWORD *v89; // rdx
  int v90; // eax
  int v91; // ecx
  int v92; // r8d
  int v93; // r9d
  __int64 v94; // rsi
  __int64 v95; // rdi
  unsigned int v96; // r14d
  __int64 v97; // r14
  __int64 v98; // rax
  void (__fastcall ***v99)(void *); // r12
  __int64 *v100; // rcx
  __int64 v101; // r12
  unsigned int v102; // edx
  unsigned int v103; // eax
  __int64 v104; // r14
  unsigned int **v105; // rbx
  unsigned int **v106; // r12
  unsigned int *v107; // r15
  _QWORD *v108; // r13
  unsigned int v109; // eax
  _DWORD *v110; // rdx
  __int64 v111; // rax
  int v112; // ecx
  __int64 v113; // rsi
  __int64 v114; // rax
  unsigned int *v115; // r14
  unsigned int v116; // eax
  unsigned int *v117; // r14
  unsigned int v118; // eax
  unsigned int **v119; // rbx
  unsigned __int64 v120; // r12
  unsigned int *v121; // r15
  _QWORD *v122; // r13
  unsigned int v123; // eax
  _DWORD *v124; // rdx
  __int64 v125; // rax
  int v126; // ecx
  __int64 v127; // rsi
  __int64 v128; // rax
  unsigned int *v129; // r14
  unsigned int v130; // eax
  unsigned int *v131; // r14
  unsigned int v132; // eax
  __int64 *v133; // rbx
  unsigned __int64 v134; // r14
  __int64 v135; // rsi
  __int64 *v136; // rbx
  unsigned __int64 v137; // r15
  __int64 v138; // rsi
  __int64 *v139; // rbx
  unsigned __int64 v140; // r14
  __int64 v141; // rsi
  __int64 *v142; // rbx
  unsigned __int64 v143; // r15
  __int64 v144; // rsi
  __int64 *v145; // rbx
  unsigned __int64 v146; // r14
  __int64 v147; // rsi
  __int64 v148; // rdi
  unsigned int **v149; // rbx
  unsigned __int64 v150; // r12
  unsigned int *v151; // r15
  _QWORD *v152; // r13
  unsigned int v153; // eax
  _DWORD *v154; // rdx
  __int64 v155; // rax
  int v156; // ecx
  __int64 v157; // rsi
  __int64 v158; // rdi
  unsigned int *v159; // r14
  unsigned int v160; // esi
  unsigned int *v161; // r14
  unsigned int v162; // eax
  __int64 *v163; // rbx
  unsigned __int64 v164; // r15
  __int64 v165; // rsi
  __int64 v166; // rdi
  __int64 *v167; // rbx
  unsigned __int64 v168; // r14
  __int64 v169; // rsi
  __int64 v170; // rdi
  __int64 *v171; // rbx
  unsigned __int64 v172; // r15
  __int64 v173; // rsi
  __int64 v174; // rdi
  __int64 v175; // rsi
  __int64 v176; // rdi
  _QWORD *v177; // r15
  __int64 *v178; // rbx
  __int64 *v179; // r12
  __int64 v180; // rsi
  __int64 v181; // rdi
  __int64 v182; // rax
  _QWORD *v183; // rax
  unsigned int v184; // r14d
  unsigned int *v185; // rcx
  int v186; // r15d
  _QWORD *v187; // rdi
  __int64 v188; // rax
  __int64 v189; // rsi
  __int64 v190; // rdi
  __int64 v191; // rsi
  __int64 v192; // rdi
  __int64 v193; // rsi
  __int64 v194; // rdi
  unsigned int v195; // r14d
  unsigned int v196; // ecx
  unsigned int *v197; // rax
  __int64 v198; // rsi
  unsigned int v199; // r14d
  unsigned int v200; // ecx
  unsigned int *v201; // rax
  __int64 v202; // rsi
  unsigned int v203; // r14d
  unsigned int v204; // ecx
  unsigned int *v205; // rax
  __int64 v206; // rsi
  __int64 v207; // rbx
  _QWORD *v208; // rdi
  __int64 v209; // rax
  _QWORD *v210; // rax
  unsigned int v211; // edx
  __int64 v212; // rcx
  int v213; // edx
  unsigned int **v214; // rcx
  _QWORD *v215; // rax
  unsigned int v216; // edx
  __int64 v217; // rcx
  int v218; // edx
  unsigned int **v219; // rcx
  _QWORD *v220; // rax
  __int64 v221; // rcx
  unsigned int v222; // edx
  int v223; // esi
  unsigned int **v224; // rdx
  _DWORD *v225; // rax
  int v226; // edx
  unsigned int v227; // esi
  _DWORD *v228; // rax
  int v229; // edx
  _DWORD *v230; // rax
  int v231; // edx
  __int64 v232; // rax
  __int64 v233; // rax
  __int64 v234; // rax
  __int64 i; // rax
  __int64 m; // rax
  unsigned int v237; // r15d
  unsigned int v238; // ecx
  unsigned int *v239; // rdx
  __int64 v240; // rdx
  unsigned int v241; // r15d
  unsigned int v242; // eax
  unsigned int *v243; // rdx
  unsigned int v244; // r15d
  unsigned int v245; // eax
  unsigned int *v246; // rdx
  unsigned int v247; // r15d
  unsigned int v248; // ecx
  unsigned int *v249; // rdx
  __int64 v250; // rcx
  unsigned int v251; // r15d
  unsigned int v252; // eax
  unsigned int *v253; // rdx
  unsigned int v254; // r15d
  unsigned int v255; // ecx
  unsigned int *v256; // rdx
  __int64 v257; // rcx
  _QWORD *v258; // rax
  _QWORD *v259; // rax
  _QWORD *v260; // rax
  char **v261; // rbx
  __int64 v262; // rdx
  char **v263; // rbx
  __int64 v264; // rdx
  char **v265; // rbx
  __int64 v266; // rdx
  char **v267; // rbx
  __int64 v268; // rdx
  char **exception; // r12
  __int64 v270; // rdx
  char **v271; // rbx
  __int64 v272; // rdx
  char **v273; // rbx
  __int64 v274; // rdx
  struct _Unwind_Exception *v275; // [rsp+0h] [rbp-3D0h]
  __int64 v276; // [rsp+0h] [rbp-3D0h]
  char v277; // [rsp+32h] [rbp-39Eh]
  char v278; // [rsp+33h] [rbp-39Dh]
  unsigned int v279; // [rsp+34h] [rbp-39Ch]
  unsigned int v280; // [rsp+34h] [rbp-39Ch]
  unsigned int v281; // [rsp+34h] [rbp-39Ch]
  unsigned int *v282; // [rsp+38h] [rbp-398h]
  __int64 v283; // [rsp+38h] [rbp-398h]
  _DWORD *v284; // [rsp+38h] [rbp-398h]
  unsigned int *v285; // [rsp+38h] [rbp-398h]
  __int64 v286; // [rsp+38h] [rbp-398h]
  __int64 v287; // [rsp+38h] [rbp-398h]
  __int64 *v288; // [rsp+38h] [rbp-398h]
  __int64 v289; // [rsp+38h] [rbp-398h]
  __int64 v290; // [rsp+38h] [rbp-398h]
  int v292; // [rsp+50h] [rbp-380h]
  __int64 v293; // [rsp+70h] [rbp-360h]
  int v294[2]; // [rsp+78h] [rbp-358h]
  int v295; // [rsp+78h] [rbp-358h]
  int v296; // [rsp+78h] [rbp-358h]
  int v297[2]; // [rsp+78h] [rbp-358h]
  int v298[2]; // [rsp+78h] [rbp-358h]
  int v299[2]; // [rsp+78h] [rbp-358h]
  int v300[2]; // [rsp+78h] [rbp-358h]
  char v301[8]; // [rsp+88h] [rbp-348h] BYREF
  _QWORD *v302; // [rsp+90h] [rbp-340h] BYREF
  _QWORD *v303; // [rsp+98h] [rbp-338h]
  _QWORD *v304; // [rsp+A0h] [rbp-330h] BYREF
  _QWORD *v305; // [rsp+A8h] [rbp-328h]
  _QWORD *v306; // [rsp+B0h] [rbp-320h] BYREF
  _QWORD *v307; // [rsp+B8h] [rbp-318h]
  _QWORD *v308; // [rsp+C0h] [rbp-310h] BYREF
  __int64 *v309; // [rsp+C8h] [rbp-308h]
  _QWORD *v310; // [rsp+D0h] [rbp-300h] BYREF
  _DWORD **v311; // [rsp+D8h] [rbp-2F8h]
  int v312[2]; // [rsp+E0h] [rbp-2F0h] BYREF
  unsigned int **v313; // [rsp+E8h] [rbp-2E8h]
  char v314[16]; // [rsp+F0h] [rbp-2E0h] BYREF
  __int64 v315; // [rsp+100h] [rbp-2D0h]
  int v316[2]; // [rsp+110h] [rbp-2C0h] BYREF
  __int64 v317; // [rsp+118h] [rbp-2B8h]
  _BYTE v318[48]; // [rsp+130h] [rbp-2A0h] BYREF
  __int64 v319[10]; // [rsp+160h] [rbp-270h] BYREF
  void *v320; // [rsp+1B0h] [rbp-220h]
  void *v321; // [rsp+1C8h] [rbp-208h]
  __int64 v322; // [rsp+218h] [rbp-1B8h]
  __int64 v323; // [rsp+220h] [rbp-1B0h]
  void *v324; // [rsp+230h] [rbp-1A0h]
  char v325[80]; // [rsp+258h] [rbp-178h] BYREF
  void *v326; // [rsp+2A8h] [rbp-128h]
  void *v327; // [rsp+2C0h] [rbp-110h]
  void *v328; // [rsp+2D8h] [rbp-F8h]
  __int64 v329; // [rsp+2F0h] [rbp-E0h]
  _QWORD *v330; // [rsp+2F8h] [rbp-D8h]
  __int64 v331; // [rsp+300h] [rbp-D0h]
  __int64 *v332; // [rsp+308h] [rbp-C8h]
  __int64 v333; // [rsp+310h] [rbp-C0h]
  __int64 *v334; // [rsp+318h] [rbp-B8h]
  _QWORD *v335; // [rsp+320h] [rbp-B0h]
  unsigned int **v336; // [rsp+328h] [rbp-A8h]
  void *v337; // [rsp+330h] [rbp-A0h]
  __int64 v338; // [rsp+348h] [rbp-88h]
  __int64 *v339; // [rsp+350h] [rbp-80h]
  void *v340; // [rsp+358h] [rbp-78h]
  __int64 v341; // [rsp+370h] [rbp-60h]
  char v342[8]; // [rsp+378h] [rbp-58h] BYREF
  void *ptr; // [rsp+380h] [rbp-50h]

  sub_EE4940(v301, "macro-finder", *a2);
  sub_162A710(v314, *a1);
  v4 = *(__int64 **)(v315 + 32);
  v293 = *(_QWORD *)(v315 + 8);
  v5 = 2LL * *(unsigned int *)(v315 + 40);
  v6 = &v4[v5];
  if ( v4 != &v4[v5] )
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      v4 += 2;
      if ( v6 == v4 )
        goto LABEL_32;
    }
    if ( v6 != v4 )
    {
      v7 = *v4;
      if ( *v4 )
        ++*(_DWORD *)(v7 + 8);
      v8 = (_QWORD *)sub_186B270(0x18u);
      v9 = (unsigned int *)(v8 + 1);
      *v8 = 2;
      v10 = 1;
      *(_QWORD *)v294 = v8 + 1;
      v11 = v8 + 1;
      while ( 1 )
      {
        v12 = v4 + 2;
        *(_QWORD *)v9 = v7;
        *((_DWORD *)v11 - 1) = v10;
        if ( v6 == v4 + 2 )
          break;
        while ( 1 )
        {
          v7 = *v12;
          v4 = v12;
          if ( (unsigned __int64)*v12 > 1 )
            break;
          v12 += 2;
          if ( v6 == v12 )
          {
            *(_QWORD *)v294 = v11;
            goto LABEL_17;
          }
        }
        *(_QWORD *)v294 = v11;
        if ( v6 == v12 )
          break;
        ++*(_DWORD *)(v7 + 8);
        v13 = *((_DWORD *)v11 - 1);
        if ( v13 == *((_DWORD *)v11 - 2) )
        {
          v23 = (3 * v13 + 1) >> 1;
          v24 = 8 * v23 + 8;
          v25 = v23;
          if ( 8 * v13 + 8 >= (unsigned int)v24 || v13 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_C2C1E(v319, "Overflow encountered when expanding vector", v270);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v319);
            sub_233E40((__int64)v319);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v26 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v294 - 8LL), v24);
          v27 = v26[1];
          *v26 = v25;
          *(_QWORD *)v294 = v26 + 2;
          v9 = &v26[2 * v27 + 2];
          v10 = v27 + 1;
          v11 = v26 + 2;
        }
        else
        {
          v10 = v13 + 1;
          v9 = (unsigned int *)&v11[v13];
        }
      }
LABEL_17:
      v14 = *(_QWORD *)v294 + 8LL * v10;
      if ( *(_QWORD *)v294 < v14 )
      {
        v15 = *(__int64 **)v294;
        do
        {
          while ( 1 )
          {
            v16 = *v15;
            if ( *v15 )
            {
              v17 = (*(_DWORD *)(v16 + 8))-- == 1;
              if ( v17 )
                break;
            }
            if ( (unsigned __int64)++v15 >= v14 )
              goto LABEL_23;
          }
          ++v15;
          sub_15D7BC0(v293, v16);
        }
        while ( (unsigned __int64)v15 < v14 );
      }
LABEL_23:
      sub_186B220((void *)(*(_QWORD *)v294 - 8LL));
      if ( v10 )
      {
        v18 = (__int64 *)*a2;
        if ( *a2 )
          ++*((_DWORD *)v18 + 8);
        v19 = *(_DWORD *)(a3 + 8);
        v20 = *(_DWORD *)(a3 + 12);
        if ( v19 >= v20 )
        {
          v186 = 2 * v20;
          v21 = sub_186B270(16LL * v20);
          v19 = *(_DWORD *)(a3 + 8);
          v187 = *(_QWORD **)a3;
          if ( v19 )
          {
            if ( v19 - 1 <= 2 || (_QWORD *)v21 == v187 + 1 )
            {
              for ( i = 0; i != v19; ++i )
                *(_QWORD *)(v21 + i * 8) = v187[i];
            }
            else
            {
              v188 = 0;
              do
              {
                *(__m128i *)(v21 + v188 * 8) = _mm_loadu_si128((const __m128i *)&v187[v188]);
                v188 += 2;
              }
              while ( v188 != 2LL * (v19 >> 1) );
              if ( (v19 & 1) != 0 )
                *(_QWORD *)(v21 + 8LL * (v19 & 0xFFFFFFFE)) = v187[v19 & 0xFFFFFFFE];
            }
          }
          if ( v187 != (_QWORD *)(a3 + 16) && v187 )
          {
            sub_186B220(v187);
            v19 = *(_DWORD *)(a3 + 8);
          }
          *(_QWORD *)a3 = v21;
          *(_DWORD *)(a3 + 12) = v186;
        }
        else
        {
          v21 = *(_QWORD *)a3;
        }
        *(_QWORD *)(v21 + 8LL * v19) = v18;
        *(_DWORD *)(a3 + 8) = v19 + 1;
        return sub_EE4A00(v301);
      }
    }
  }
LABEL_32:
  v28 = *(_BYTE *)(*a2 + 123LL);
  v278 = v28 & 0x10;
  v277 = v28 & 8;
  sub_1380990(v319, *a1);
  sub_139A1A0(v318, *a1, v319);
  v29 = (__int64 *)*a2;
  v30 = (_QWORD *)*a1;
  v303 = nullptr;
  v305 = nullptr;
  v31 = v29[9];
  v302 = v30;
  v304 = v30;
  v306 = v30;
  v307 = nullptr;
  v308 = v30;
  v309 = nullptr;
  v310 = v30;
  v311 = nullptr;
  *(_QWORD *)v312 = v30;
  v313 = nullptr;
  if ( !v31 )
    goto LABEL_104;
  for ( j = *(_BYTE *)(v31 + 3) >> 6; !j; j = *(_BYTE *)(v31 + 3) >> 6 )
    v31 = *(_QWORD *)(v31 + 16);
  if ( j == 1 )
    v295 = *(_DWORD *)(v31 + 4) + 1;
  else
    v295 = j == 2 ? *(_DWORD *)(v31 + 4) - 1 : *(_DWORD *)(v31 + 4);
  if ( !v295 )
    goto LABEL_104;
  v33 = 0;
  v34 = 0;
  while ( 2 )
  {
    v44 = *v29;
    if ( (*((_BYTE *)v29 + 123) & 0x20) != 0 )
    {
      v45 = *(_QWORD *)(v44 + 864);
      goto LABEL_52;
    }
    v77 = v29[9];
    v78 = 17;
    while ( 1 )
    {
      if ( *(char *)(v77 + 3) < 0 )
      {
        if ( *(_BYTE *)(v77 + 3) >> 6 != 2 )
        {
          v79 = (__int64 *)(v33 + *(_QWORD *)(v77 + 16));
          goto LABEL_94;
        }
        goto LABEL_96;
      }
      if ( v34 == *(_DWORD *)(v77 + 4) )
        break;
LABEL_96:
      v77 = *(_QWORD *)(v77 + 16);
      if ( !--v78 )
      {
        v288 = v29;
        sub_233F80((__int64 *)(v44 + 616), (_DWORD *)v29 + 18);
        v79 = (__int64 *)(v33 + *(_QWORD *)(v288[9] + 16));
        goto LABEL_94;
      }
    }
    v79 = (__int64 *)(v77 + 8);
LABEL_94:
    v45 = *v79;
LABEL_52:
    if ( v45 )
      ++*(_DWORD *)(v45 + 8);
    v46 = v303;
    if ( v303 )
    {
      v47 = *((_DWORD *)v303 - 1);
      if ( v47 == *((_DWORD *)v303 - 2) )
      {
        v73 = (3 * v47 + 1) >> 1;
        v74 = 8 * v73 + 8;
        if ( 8 * v47 + 8 >= (unsigned int)v74 || v47 >= v73 )
        {
          v273 = (char **)__cxa_allocate_exception(0x28u);
          sub_C2C1E((__int64 *)v316, "Overflow encountered when expanding vector", v274);
          *v273 = (char *)off_1C63128;
          sub_2333C0(v273 + 1, v316);
          sub_233E40((__int64)v316);
          __cxa_throw(v273, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v281 = (3 * v47 + 1) >> 1;
        v287 = v45;
        v75 = (unsigned int *)sub_186B300(v303 - 1, v74);
        v76 = v75[1];
        v46 = v75 + 2;
        v303 = v75 + 2;
        v45 = v287;
        *v75 = v281;
        LODWORD(v75) = v76;
        v50 = &v46[v76];
        v49 = (_DWORD)v75 + 1;
      }
      else
      {
        v48 = v47;
        v49 = v47 + 1;
        v50 = &v303[v48];
      }
    }
    else
    {
      v290 = v45;
      v183 = (_QWORD *)sub_186B270(0x18u);
      v46 = v183 + 1;
      *v183 = 2;
      v45 = v290;
      v49 = 1;
      v303 = v46;
      v50 = v46;
    }
    v51 = (_DWORD *)*a2;
    *v50 = v45;
    *((_DWORD *)v46 - 1) = v49;
    v52 = *((_QWORD *)v51 + 11);
    if ( !v52 )
      goto LABEL_69;
    v53 = *((_QWORD *)v51 + 11);
    for ( k = *(_BYTE *)(v52 + 3) >> 6; !k; k = *(_BYTE *)(v53 + 3) >> 6 )
      v53 = *(_QWORD *)(v53 + 16);
    if ( k == 1 )
    {
      v55 = *(_DWORD *)(v53 + 4) + 1;
LABEL_62:
      if ( v34 >= v55 )
        goto LABEL_99;
    }
    else
    {
      if ( k != 2 )
      {
        v55 = *(_DWORD *)(v53 + 4);
        goto LABEL_62;
      }
      if ( v34 >= *(_DWORD *)(v53 + 4) - 1 )
      {
LABEL_99:
        v58 = v307;
        v52 = 0;
        if ( v307 )
          goto LABEL_70;
        goto LABEL_100;
      }
    }
    v56 = 17;
    while ( 2 )
    {
      if ( *(char *)(v52 + 3) < 0 )
      {
        if ( *(_BYTE *)(v52 + 3) >> 6 != 2 )
        {
          v57 = (__int64 *)(v33 + *(_QWORD *)(v52 + 16));
          goto LABEL_67;
        }
LABEL_79:
        v52 = *(_QWORD *)(v52 + 16);
        if ( !--v56 )
        {
          v284 = v51;
          sub_233F80((__int64 *)(*(_QWORD *)v51 + 616LL), v51 + 22);
          v57 = (__int64 *)(v33 + *(_QWORD *)(*((_QWORD *)v284 + 11) + 16LL));
          goto LABEL_67;
        }
        continue;
      }
      break;
    }
    if ( v34 != *(_DWORD *)(v52 + 4) )
      goto LABEL_79;
    v57 = (__int64 *)(v52 + 8);
LABEL_67:
    v52 = *v57;
    if ( v52 )
      ++*(_DWORD *)(v52 + 8);
LABEL_69:
    v58 = v307;
    if ( !v307 )
    {
LABEL_100:
      v289 = v52;
      v80 = (_QWORD *)sub_186B270(0x18u);
      v58 = v80 + 1;
      *v80 = 2;
      v52 = v289;
      v61 = 1;
      v307 = v58;
      v62 = v58;
      goto LABEL_72;
    }
LABEL_70:
    v59 = *((_DWORD *)v58 - 1);
    if ( v59 == *((_DWORD *)v58 - 2) )
    {
      v69 = (3 * v59 + 1) >> 1;
      v70 = 8 * v69 + 8;
      if ( 8 * v59 + 8 >= (unsigned int)v70 || v59 >= v69 )
      {
        v261 = (char **)__cxa_allocate_exception(0x28u);
        sub_C2C1E((__int64 *)v316, "Overflow encountered when expanding vector", v262);
        *v261 = (char *)off_1C63128;
        sub_2333C0(v261 + 1, v316);
        sub_233E40((__int64)v316);
        __cxa_throw(v261, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v280 = (3 * v59 + 1) >> 1;
      v286 = v52;
      v71 = (unsigned int *)sub_186B300(v58 - 1, v70);
      v72 = v71[1];
      v58 = v71 + 2;
      v307 = v71 + 2;
      v52 = v286;
      *v71 = v280;
      LODWORD(v71) = v72;
      v62 = &v58[v72];
      v61 = (_DWORD)v71 + 1;
    }
    else
    {
      v60 = v59;
      v61 = v59 + 1;
      v62 = &v58[v60];
    }
LABEL_72:
    v63 = *a2;
    *v62 = v52;
    *((_DWORD *)v58 - 1) = v61;
    if ( (*(_BYTE *)(v63 + 123) & 0x10) == 0 )
    {
      v39 = v311;
      v38 = nullptr;
      if ( v311 )
        goto LABEL_46;
      goto LABEL_74;
    }
    v35 = *(_QWORD *)(v63 + 104);
    v36 = 17;
    while ( 2 )
    {
      if ( *(char *)(v35 + 3) < 0 )
      {
        if ( *(_BYTE *)(v35 + 3) >> 6 != 2 )
        {
          v37 = (unsigned int **)(v33 + *(_QWORD *)(v35 + 16));
          goto LABEL_43;
        }
LABEL_76:
        v35 = *(_QWORD *)(v35 + 16);
        if ( !--v36 )
        {
          v283 = v63;
          sub_236900((_QWORD *)(*(_QWORD *)v63 + 672LL), (__int64 *)(v63 + 104));
          v37 = (unsigned int **)(v33 + *(_QWORD *)(*(_QWORD *)(v283 + 104) + 16LL));
          goto LABEL_43;
        }
        continue;
      }
      break;
    }
    if ( v34 != *(_DWORD *)(v35 + 4) )
      goto LABEL_76;
    v37 = (unsigned int **)(v35 + 8);
LABEL_43:
    v38 = *v37;
    if ( *v37 )
      *v38 = (*v38 + 1) & 0x3FFFFFFF | *v38 & 0xC0000000;
    v39 = v311;
    if ( !v311 )
    {
LABEL_74:
      v282 = v38;
      v64 = (_QWORD *)sub_186B270(0x18u);
      v39 = v64 + 1;
      *v64 = 2;
      v38 = v282;
      v42 = 1;
      v311 = (_DWORD **)v39;
      v43 = (unsigned int **)v39;
      goto LABEL_48;
    }
LABEL_46:
    v40 = *((_DWORD *)v39 - 1);
    if ( v40 == *((_DWORD *)v39 - 2) )
    {
      v65 = (3 * v40 + 1) >> 1;
      v66 = 8 * v65 + 8;
      if ( 8 * v40 + 8 >= (unsigned int)v66 || v40 >= v65 )
      {
        v271 = (char **)__cxa_allocate_exception(0x28u);
        sub_C2C1E((__int64 *)v316, "Overflow encountered when expanding vector", v272);
        *v271 = (char *)off_1C63128;
        sub_2333C0(v271 + 1, v316);
        sub_233E40((__int64)v316);
        __cxa_throw(v271, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v279 = (3 * v40 + 1) >> 1;
      v285 = v38;
      v67 = (unsigned int *)sub_186B300(v39 - 1, v66);
      v68 = v67[1];
      v39 = v67 + 2;
      v311 = (_DWORD **)(v67 + 2);
      v38 = v285;
      *v67 = v279;
      LODWORD(v67) = v68;
      v43 = (unsigned int **)&v39[v68];
      v42 = (_DWORD)v67 + 1;
    }
    else
    {
      v41 = v40;
      v42 = v40 + 1;
      v43 = (unsigned int **)&v39[v41];
    }
LABEL_48:
    *v43 = v38;
    ++v34;
    v33 += 8;
    *((_DWORD *)v39 - 1) = v42;
    if ( v34 != v295 )
    {
      v29 = (__int64 *)*a2;
      continue;
    }
    break;
  }
LABEL_104:
  sub_139DD00(
    (unsigned int)v318,
    (unsigned int)&v302,
    (unsigned int)&v306,
    (unsigned int)&v310,
    (unsigned int)&v304,
    (unsigned int)&v308,
    (__int64)v312);
  sub_ED2DA0(*a2);
  v81 = v305;
  if ( v305 )
  {
    if ( v277 )
    {
      v184 = 0;
      do
      {
        if ( v184 >= *((_DWORD *)v81 - 1) )
          break;
        v185 = nullptr;
        if ( v278 )
          v185 = v313[v184];
        sub_EDB570(*a2, v81[v184], v309[v184], v185);
        ++v184;
        v81 = v305;
      }
      while ( v305 );
    }
    else
    {
      v82 = 0;
      if ( v278 )
      {
        do
        {
          v96 = v82;
          if ( v82 >= *((_DWORD *)v81 - 1) )
            break;
          sub_EDB570(*a2, v81[v82], 0, v313[v82]);
          v81 = v305;
          v82 = v96 + 1;
        }
        while ( v305 );
      }
      else
      {
        do
        {
          v83 = v82;
          if ( v82 >= *((_DWORD *)v81 - 1) )
            break;
          sub_EDB570(*a2, v81[v82], 0, 0);
          v81 = v305;
          v82 = v83 + 1;
        }
        while ( v305 );
      }
    }
  }
  v87 = (__m128i *)sub_186B270(0x50u);
  v88 = v319[0];
  v87->m128i_i32[2] = 0;
  v87[1].m128i_i64[0] = 0;
  v87->m128i_i64[0] = (__int64)&off_1C60CE8;
  v89 = v330;
  v87[1].m128i_i8[8] = 1;
  strcpy(&v87[3].m128i_i8[8], "macro_finder");
  v87[3].m128i_i64[0] = 12;
  v87[4].m128i_i64[1] = 0;
  v87[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v88, (__m128i)(unsigned __int64)&v87[3].m128i_u64[1]);
  if ( v89 )
  {
    v292 = *((_DWORD *)v89 - 1);
    if ( v292 )
    {
      v296 = 0;
      while ( 1 )
      {
        *(_QWORD *)v316 = 0;
        v317 = v88;
        v90 = sub_1380690((int)v319, v296, (int)v316, v84, v85, v86, v275);
        sub_13333D0((_DWORD)v87, v90, v316[0], v91, v92, v93, v276);
        v94 = *(_QWORD *)v316;
        if ( *(_QWORD *)v316 )
        {
          v95 = v317;
          v17 = (*(_DWORD *)(*(_QWORD *)v316 + 8LL))-- == 1;
          if ( v17 )
            sub_15D7BC0(v95, v94);
        }
        ++v296;
        v84 = v292;
        if ( v296 == v292 )
          break;
        v88 = v319[0];
      }
    }
  }
  v97 = *a2;
  v98 = sub_1336AB0(*(_QWORD *)(*a2 + 8LL), v87);
  *(_QWORD *)v297 = v98;
  if ( v98 )
    ++*(_DWORD *)(v98 + 8);
  v99 = *(void (__fastcall ****)(void *))(v97 + 8);
  if ( v99 )
  {
    v17 = (*((_DWORD *)v99 + 2))-- == 1;
    if ( v17 )
    {
      (**v99)(v99);
      sub_186B220(v99);
    }
  }
  v100 = (__int64 *)*a2;
  *(_QWORD *)(v97 + 8) = *(_QWORD *)v297;
  *((_DWORD *)v100 + 30) = (*((_DWORD *)v100 + 30) + 1) & 0x3FFFFFF | v100[15] & 0xFC000000;
  v101 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v101 + 32);
  v102 = *(_DWORD *)(a3 + 8);
  v103 = *(_DWORD *)(a3 + 12);
  if ( v102 >= v103 )
  {
    v207 = 2 * v103;
    v104 = sub_186B270(8 * v207);
    v102 = *(_DWORD *)(a3 + 8);
    v208 = *(_QWORD **)a3;
    if ( v102 )
    {
      if ( v102 - 1 <= 2 || (_QWORD *)v104 == v208 + 1 )
      {
        for ( m = 0; m != v102; ++m )
          *(_QWORD *)(v104 + m * 8) = v208[m];
      }
      else
      {
        v209 = 0;
        do
        {
          *(__m128i *)(v104 + v209 * 8) = _mm_loadu_si128((const __m128i *)&v208[v209]);
          v209 += 2;
        }
        while ( v209 != 2LL * (v102 >> 1) );
        if ( (v102 & 1) != 0 )
          *(_QWORD *)(v104 + 8LL * (v102 & 0xFFFFFFFE)) = v208[v102 & 0xFFFFFFFE];
      }
    }
    if ( v208 != (_QWORD *)(a3 + 16) && v208 )
    {
      sub_186B220(v208);
      v102 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v104;
    *(_DWORD *)(a3 + 12) = v207;
  }
  else
  {
    v104 = *(_QWORD *)a3;
  }
  v105 = v313;
  *(_QWORD *)(v104 + 8LL * v102) = v101;
  *(_DWORD *)(a3 + 8) = v102 + 1;
  if ( v105 )
  {
    v106 = &v105[*((unsigned int *)v105 - 1)];
    if ( v105 >= v106 )
      goto LABEL_146;
    do
    {
      v107 = *v105;
      if ( *v105 )
      {
        v108 = *(_QWORD **)v312;
        v109 = (**v105 + 0x3FFFFFFF) & 0x3FFFFFFF | **v105 & 0xC0000000;
        *v107 = v109;
        if ( (v109 & 0x3FFFFFFF) == 0 )
        {
          v110 = (_DWORD *)v108[83];
          if ( v110 )
          {
            v111 = (unsigned int)*(v110 - 1);
            if ( (_DWORD)v111 != *(v110 - 2) )
            {
              v112 = v111 + 1;
              *(_QWORD *)&v110[2 * v111] = v107;
              *(v110 - 1) = v111 + 1;
              goto LABEL_138;
            }
            v199 = (unsigned int)(3 * v111 + 1) >> 1;
            v200 = 8 * v199 + 8;
            if ( 8 * (int)v111 + 8 < v200 && (unsigned int)v111 < v199 )
            {
              v201 = (unsigned int *)sub_186B300(v110 - 2, v200);
              v202 = v201[1];
              v110 = v201 + 2;
              v108[83] = v201 + 2;
              v112 = v202 + 1;
              *v201 = v199;
              *(_QWORD *)&v201[2 * v202 + 2] = v107;
              v201[1] = v202 + 1;
              goto LABEL_138;
            }
LABEL_400:
            v265 = (char **)__cxa_allocate_exception(0x28u);
            sub_C2C1E((__int64 *)v316, "Overflow encountered when expanding vector", v266);
            *v265 = (char *)off_1C63128;
            sub_2333C0(v265 + 1, v316);
            sub_233E40((__int64)v316);
            __cxa_throw(v265, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v232 = sub_186B270(0x18u);
          v112 = 1;
          v110 = (_DWORD *)(v232 + 8);
          *(_QWORD *)v232 = 2;
          v108[83] = v232 + 8;
          *(_QWORD *)(v232 + 8) = v107;
          *(_DWORD *)(v232 + 4) = 1;
LABEL_138:
          while ( v112 )
          {
            v113 = (unsigned int)(v112 - 1);
            v114 = *(_QWORD *)&v110[2 * v113];
            *(v110 - 1) = v113;
            *(_QWORD *)v298 = v114;
            if ( *(char *)(v114 + 3) < 0 )
            {
              v193 = *(_QWORD *)(v114 + 8);
              if ( v193 )
              {
                v194 = v108[81];
                v17 = (*(_DWORD *)(v193 + 8))-- == 1;
                if ( v17 )
                  sub_15D7BC0(v194, v193);
              }
              sub_17E9C40(v108[82], 16, *(_QWORD *)v298);
            }
            else
            {
              v115 = *(unsigned int **)(v114 + 8);
              v116 = (*v115 + 0x3FFFFFFF) & 0x3FFFFFFF | *v115 & 0xC0000000;
              *v115 = v116;
              if ( (v116 & 0x3FFFFFFF) == 0 )
              {
                if ( (_DWORD)v113 == *(v110 - 2) )
                {
                  v251 = (unsigned int)(3 * v113 + 1) >> 1;
                  v252 = 8 * v251 + 8;
                  if ( 8 * v112 >= v252 || (unsigned int)v113 >= v251 )
                    goto LABEL_400;
                  v253 = (unsigned int *)sub_186B300(v110 - 2, v252);
                  v225 = v253 + 2;
                  v108[83] = v253 + 2;
                  *v253 = v251;
                }
                else
                {
                  v225 = (_DWORD *)v108[83];
                }
                v226 = *(v225 - 1);
                *(_QWORD *)&v225[2 * v226] = v115;
                *(v225 - 1) = v226 + 1;
              }
              v117 = *(unsigned int **)(*(_QWORD *)v298 + 16LL);
              v118 = (*v117 + 0x3FFFFFFF) & 0x3FFFFFFF | *v117 & 0xC0000000;
              *v117 = v118;
              if ( (v118 & 0x3FFFFFFF) == 0 )
              {
                v215 = (_QWORD *)v108[83];
                if ( v215 )
                {
                  v216 = *((_DWORD *)v215 - 1);
                  if ( v216 == *((_DWORD *)v215 - 2) )
                  {
                    v254 = (3 * v216 + 1) >> 1;
                    v255 = 8 * v254 + 8;
                    if ( 8 * v216 + 8 >= v255 || v216 >= v254 )
                      goto LABEL_400;
                    v256 = (unsigned int *)sub_186B300(v215 - 1, v255);
                    v215 = v256 + 2;
                    v257 = v256[1];
                    v108[83] = v256 + 2;
                    *v256 = v254;
                    LODWORD(v256) = v257;
                    v219 = (unsigned int **)&v215[v257];
                    v218 = (_DWORD)v256 + 1;
                  }
                  else
                  {
                    v217 = v216;
                    v218 = v216 + 1;
                    v219 = (unsigned int **)&v215[v217];
                  }
                }
                else
                {
                  v258 = (_QWORD *)sub_186B270(0x18u);
                  v218 = 1;
                  *v258 = 2;
                  v215 = v258 + 1;
                  v108[83] = v215;
                  v219 = (unsigned int **)v215;
                }
                *v219 = v117;
                *((_DWORD *)v215 - 1) = v218;
              }
              sub_17E9C40(v108[82], 24, *(_QWORD *)v298);
            }
            v110 = (_DWORD *)v108[83];
            if ( !v110 )
              break;
            v112 = *(v110 - 1);
          }
        }
      }
      ++v105;
    }
    while ( v105 < v106 );
    v105 = v313;
    if ( v313 )
LABEL_146:
      sub_186B220(v105 - 1);
  }
  v119 = v311;
  if ( v311 )
  {
    v120 = (unsigned __int64)&v311[*((unsigned int *)v311 - 1)];
    if ( (unsigned __int64)v311 >= v120 )
      goto LABEL_164;
    do
    {
      v121 = *v119;
      if ( *v119 )
      {
        v122 = v310;
        v123 = (**v119 + 0x3FFFFFFF) & 0x3FFFFFFF | **v119 & 0xC0000000;
        *v121 = v123;
        if ( (v123 & 0x3FFFFFFF) == 0 )
        {
          v124 = (_DWORD *)v122[83];
          if ( v124 )
          {
            v125 = (unsigned int)*(v124 - 1);
            if ( (_DWORD)v125 != *(v124 - 2) )
            {
              v126 = v125 + 1;
              *(_QWORD *)&v124[2 * v125] = v121;
              *(v124 - 1) = v125 + 1;
              goto LABEL_156;
            }
            v195 = (unsigned int)(3 * v125 + 1) >> 1;
            v196 = 8 * v195 + 8;
            if ( 8 * (int)v125 + 8 < v196 && (unsigned int)v125 < v195 )
            {
              v197 = (unsigned int *)sub_186B300(v124 - 2, v196);
              v198 = v197[1];
              v124 = v197 + 2;
              v122[83] = v197 + 2;
              v126 = v198 + 1;
              *v197 = v195;
              *(_QWORD *)&v197[2 * v198 + 2] = v121;
              v197[1] = v198 + 1;
              goto LABEL_156;
            }
LABEL_399:
            v263 = (char **)__cxa_allocate_exception(0x28u);
            sub_C2C1E((__int64 *)v316, "Overflow encountered when expanding vector", v264);
            *v263 = (char *)off_1C63128;
            sub_2333C0(v263 + 1, v316);
            sub_233E40((__int64)v316);
            __cxa_throw(v263, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v233 = sub_186B270(0x18u);
          v126 = 1;
          v124 = (_DWORD *)(v233 + 8);
          *(_QWORD *)v233 = 2;
          v122[83] = v233 + 8;
          *(_QWORD *)(v233 + 8) = v121;
          *(_DWORD *)(v233 + 4) = 1;
LABEL_156:
          while ( v126 )
          {
            v127 = (unsigned int)(v126 - 1);
            v128 = *(_QWORD *)&v124[2 * v127];
            *(v124 - 1) = v127;
            *(_QWORD *)v299 = v128;
            if ( *(char *)(v128 + 3) < 0 )
            {
              v189 = *(_QWORD *)(v128 + 8);
              if ( v189 )
              {
                v190 = v122[81];
                v17 = (*(_DWORD *)(v189 + 8))-- == 1;
                if ( v17 )
                  sub_15D7BC0(v190, v189);
              }
              sub_17E9C40(v122[82], 16, *(_QWORD *)v299);
            }
            else
            {
              v129 = *(unsigned int **)(v128 + 8);
              v130 = (*v129 + 0x3FFFFFFF) & 0x3FFFFFFF | *v129 & 0xC0000000;
              *v129 = v130;
              if ( (v130 & 0x3FFFFFFF) == 0 )
              {
                if ( (_DWORD)v127 == *(v124 - 2) )
                {
                  v244 = (unsigned int)(3 * v127 + 1) >> 1;
                  v245 = 8 * v244 + 8;
                  if ( 8 * v126 >= v245 || (unsigned int)v127 >= v244 )
                    goto LABEL_399;
                  v246 = (unsigned int *)sub_186B300(v124 - 2, v245);
                  v230 = v246 + 2;
                  v122[83] = v246 + 2;
                  *v246 = v244;
                }
                else
                {
                  v230 = (_DWORD *)v122[83];
                }
                v231 = *(v230 - 1);
                *(_QWORD *)&v230[2 * v231] = v129;
                *(v230 - 1) = v231 + 1;
              }
              v131 = *(unsigned int **)(*(_QWORD *)v299 + 16LL);
              v132 = (*v131 + 0x3FFFFFFF) & 0x3FFFFFFF | *v131 & 0xC0000000;
              *v131 = v132;
              if ( (v132 & 0x3FFFFFFF) == 0 )
              {
                v210 = (_QWORD *)v122[83];
                if ( v210 )
                {
                  v211 = *((_DWORD *)v210 - 1);
                  if ( v211 == *((_DWORD *)v210 - 2) )
                  {
                    v247 = (3 * v211 + 1) >> 1;
                    v248 = 8 * v247 + 8;
                    if ( 8 * v211 + 8 >= v248 || v211 >= v247 )
                      goto LABEL_399;
                    v249 = (unsigned int *)sub_186B300(v210 - 1, v248);
                    v210 = v249 + 2;
                    v250 = v249[1];
                    v122[83] = v249 + 2;
                    *v249 = v247;
                    LODWORD(v249) = v250;
                    v214 = (unsigned int **)&v210[v250];
                    v213 = (_DWORD)v249 + 1;
                  }
                  else
                  {
                    v212 = v211;
                    v213 = v211 + 1;
                    v214 = (unsigned int **)&v210[v212];
                  }
                }
                else
                {
                  v260 = (_QWORD *)sub_186B270(0x18u);
                  v213 = 1;
                  *v260 = 2;
                  v210 = v260 + 1;
                  v122[83] = v210;
                  v214 = (unsigned int **)v210;
                }
                *v214 = v131;
                *((_DWORD *)v210 - 1) = v213;
              }
              sub_17E9C40(v122[82], 24, *(_QWORD *)v299);
            }
            v124 = (_DWORD *)v122[83];
            if ( !v124 )
              break;
            v126 = *(v124 - 1);
          }
        }
      }
      ++v119;
    }
    while ( (unsigned __int64)v119 < v120 );
    v119 = v311;
    if ( v311 )
LABEL_164:
      sub_186B220(v119 - 1);
  }
  v133 = v309;
  if ( v309 )
  {
    if ( v309 >= &v309[*((unsigned int *)v309 - 1)] )
      goto LABEL_173;
    v134 = (unsigned __int64)&v309[*((unsigned int *)v309 - 1)];
    do
    {
      while ( 1 )
      {
        v135 = *v133;
        if ( *v133 )
        {
          v17 = (*(_DWORD *)(v135 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( (unsigned __int64)++v133 >= v134 )
          goto LABEL_172;
      }
      sub_15D7BC0(v308, v135);
      ++v133;
    }
    while ( (unsigned __int64)v133 < v134 );
LABEL_172:
    v133 = v309;
    if ( v309 )
LABEL_173:
      sub_186B220(v133 - 1);
  }
  v136 = v307;
  if ( v307 )
  {
    if ( v307 >= &v307[*((unsigned int *)v307 - 1)] )
      goto LABEL_182;
    v137 = (unsigned __int64)&v307[*((unsigned int *)v307 - 1)];
    do
    {
      while ( 1 )
      {
        v138 = *v136;
        if ( *v136 )
        {
          v17 = (*(_DWORD *)(v138 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( (unsigned __int64)++v136 >= v137 )
          goto LABEL_181;
      }
      sub_15D7BC0(v306, v138);
      ++v136;
    }
    while ( (unsigned __int64)v136 < v137 );
LABEL_181:
    v136 = v307;
    if ( v307 )
LABEL_182:
      sub_186B220(v136 - 1);
  }
  v139 = v305;
  if ( v305 )
  {
    if ( v305 >= &v305[*((unsigned int *)v305 - 1)] )
      goto LABEL_191;
    v140 = (unsigned __int64)&v305[*((unsigned int *)v305 - 1)];
    do
    {
      while ( 1 )
      {
        v141 = *v139;
        if ( *v139 )
        {
          v17 = (*(_DWORD *)(v141 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( (unsigned __int64)++v139 >= v140 )
          goto LABEL_190;
      }
      sub_15D7BC0(v304, v141);
      ++v139;
    }
    while ( (unsigned __int64)v139 < v140 );
LABEL_190:
    v139 = v305;
    if ( v305 )
LABEL_191:
      sub_186B220(v139 - 1);
  }
  v142 = v303;
  if ( v303 )
  {
    if ( v303 >= &v303[*((unsigned int *)v303 - 1)] )
      goto LABEL_200;
    v143 = (unsigned __int64)&v303[*((unsigned int *)v303 - 1)];
    do
    {
      while ( 1 )
      {
        v144 = *v142;
        if ( *v142 )
        {
          v17 = (*(_DWORD *)(v144 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( (unsigned __int64)++v142 >= v143 )
          goto LABEL_199;
      }
      sub_15D7BC0(v302, v144);
      ++v142;
    }
    while ( (unsigned __int64)v142 < v143 );
LABEL_199:
    v142 = v303;
    if ( v303 )
LABEL_200:
      sub_186B220(v142 - 1);
  }
  sub_1600000(v342);
  if ( ptr )
    sub_186B220(ptr);
  if ( v341 )
    sub_186B220((void *)(v341 - 8));
  if ( v340 )
    sub_186B220(v340);
  v145 = v339;
  if ( v339 )
  {
    if ( v339 >= &v339[*((unsigned int *)v339 - 1)] )
      goto LABEL_215;
    v146 = (unsigned __int64)&v339[*((unsigned int *)v339 - 1)];
    do
    {
      while ( 1 )
      {
        v147 = *v145;
        if ( *v145 )
        {
          v148 = v338;
          v17 = (*(_DWORD *)(v147 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( (unsigned __int64)++v145 >= v146 )
          goto LABEL_214;
      }
      sub_15D7BC0(v148, v147);
      ++v145;
    }
    while ( (unsigned __int64)v145 < v146 );
LABEL_214:
    v145 = v339;
    if ( v339 )
LABEL_215:
      sub_186B220(v145 - 1);
  }
  if ( v337 )
    sub_186B220(v337);
  v149 = v336;
  if ( v336 )
  {
    v150 = (unsigned __int64)&v336[*((unsigned int *)v336 - 1)];
    if ( (unsigned __int64)v336 >= v150 )
      goto LABEL_235;
    do
    {
      v151 = *v149;
      if ( *v149 )
      {
        v152 = v335;
        v153 = (**v149 + 0x3FFFFFFF) & 0x3FFFFFFF | **v149 & 0xC0000000;
        *v151 = v153;
        if ( (v153 & 0x3FFFFFFF) == 0 )
        {
          v154 = (_DWORD *)v152[83];
          if ( v154 )
          {
            v155 = (unsigned int)*(v154 - 1);
            if ( (_DWORD)v155 != *(v154 - 2) )
            {
              v156 = v155 + 1;
              *(_QWORD *)&v154[2 * v155] = v151;
              *(v154 - 1) = v155 + 1;
              goto LABEL_227;
            }
            v203 = (unsigned int)(3 * v155 + 1) >> 1;
            v204 = 8 * v203 + 8;
            if ( 8 * (int)v155 + 8 < v204 && (unsigned int)v155 < v203 )
            {
              v205 = (unsigned int *)sub_186B300(v154 - 2, v204);
              v206 = v205[1];
              v154 = v205 + 2;
              v152[83] = v205 + 2;
              v156 = v206 + 1;
              *v205 = v203;
              *(_QWORD *)&v205[2 * v206 + 2] = v151;
              v205[1] = v206 + 1;
              goto LABEL_227;
            }
LABEL_402:
            v267 = (char **)__cxa_allocate_exception(0x28u);
            sub_C2C1E((__int64 *)v316, "Overflow encountered when expanding vector", v268);
            *v267 = (char *)off_1C63128;
            sub_2333C0(v267 + 1, v316);
            sub_233E40((__int64)v316);
            __cxa_throw(v267, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v234 = sub_186B270(0x18u);
          v156 = 1;
          v154 = (_DWORD *)(v234 + 8);
          *(_QWORD *)v234 = 2;
          v152[83] = v234 + 8;
          *(_QWORD *)(v234 + 8) = v151;
          *(_DWORD *)(v234 + 4) = 1;
LABEL_227:
          while ( v156 )
          {
            v157 = (unsigned int)(v156 - 1);
            v158 = *(_QWORD *)&v154[2 * v157];
            *(v154 - 1) = v157;
            *(_QWORD *)v300 = v158;
            if ( *(char *)(v158 + 3) < 0 )
            {
              v191 = *(_QWORD *)(v158 + 8);
              if ( v191 )
              {
                v192 = v152[81];
                v17 = (*(_DWORD *)(v191 + 8))-- == 1;
                if ( v17 )
                  sub_15D7BC0(v192, v191);
              }
              sub_17E9C40(v152[82], 16, *(_QWORD *)v300);
            }
            else
            {
              v159 = *(unsigned int **)(v158 + 8);
              v160 = (*v159 + 0x3FFFFFFF) & 0x3FFFFFFF | *v159 & 0xC0000000;
              *v159 = v160;
              if ( (v160 & 0x3FFFFFFF) == 0 )
              {
                v227 = *(v154 - 2);
                if ( v227 == v156 - 1 )
                {
                  v241 = (3 * v227 + 1) >> 1;
                  v242 = 8 * v241 + 8;
                  if ( 8 * v156 >= v242 || v227 >= v241 )
                    goto LABEL_402;
                  v243 = (unsigned int *)sub_186B300(v154 - 2, v242);
                  v228 = v243 + 2;
                  v152[83] = v243 + 2;
                  *v243 = v241;
                }
                else
                {
                  v228 = (_DWORD *)v152[83];
                }
                v229 = *(v228 - 1);
                *(_QWORD *)&v228[2 * v229] = v159;
                *(v228 - 1) = v229 + 1;
              }
              v161 = *(unsigned int **)(v158 + 16);
              v162 = (*v161 + 0x3FFFFFFF) & 0x3FFFFFFF | *v161 & 0xC0000000;
              *v161 = v162;
              if ( (v162 & 0x3FFFFFFF) == 0 )
              {
                v220 = (_QWORD *)v152[83];
                if ( v220 )
                {
                  v221 = *((unsigned int *)v220 - 1);
                  v222 = *((_DWORD *)v220 - 2);
                  if ( v222 == (_DWORD)v221 )
                  {
                    v237 = (3 * v222 + 1) >> 1;
                    v238 = 8 * v237 + 8;
                    if ( 8 * v222 + 8 >= v238 || v222 >= v237 )
                      goto LABEL_402;
                    v239 = (unsigned int *)sub_186B300(v220 - 1, v238);
                    v220 = v239 + 2;
                    v152[83] = v239 + 2;
                    *v239 = v237;
                    v240 = v239[1];
                    v223 = v240 + 1;
                    v224 = (unsigned int **)&v220[v240];
                  }
                  else
                  {
                    v223 = v221 + 1;
                    v224 = (unsigned int **)&v220[v221];
                  }
                }
                else
                {
                  v259 = (_QWORD *)sub_186B270(0x18u);
                  v223 = 1;
                  *v259 = 2;
                  v220 = v259 + 1;
                  v152[83] = v220;
                  v224 = (unsigned int **)v220;
                }
                *v224 = v161;
                *((_DWORD *)v220 - 1) = v223;
              }
              sub_17E9C40(v152[82], 24, v158);
            }
            v154 = (_DWORD *)v152[83];
            if ( !v154 )
              break;
            v156 = *(v154 - 1);
          }
        }
      }
      ++v149;
    }
    while ( (unsigned __int64)v149 < v150 );
    v149 = v336;
    if ( v336 )
LABEL_235:
      sub_186B220(v149 - 1);
  }
  v163 = v334;
  if ( v334 )
  {
    if ( v334 >= &v334[*((unsigned int *)v334 - 1)] )
      goto LABEL_244;
    v164 = (unsigned __int64)&v334[*((unsigned int *)v334 - 1)];
    do
    {
      while ( 1 )
      {
        v165 = *v163;
        if ( *v163 )
        {
          v166 = v333;
          v17 = (*(_DWORD *)(v165 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( (unsigned __int64)++v163 >= v164 )
          goto LABEL_243;
      }
      sub_15D7BC0(v166, v165);
      ++v163;
    }
    while ( (unsigned __int64)v163 < v164 );
LABEL_243:
    v163 = v334;
    if ( v334 )
LABEL_244:
      sub_186B220(v163 - 1);
  }
  v167 = v332;
  if ( v332 )
  {
    if ( v332 >= &v332[*((unsigned int *)v332 - 1)] )
      goto LABEL_253;
    v168 = (unsigned __int64)&v332[*((unsigned int *)v332 - 1)];
    do
    {
      while ( 1 )
      {
        v169 = *v167;
        if ( *v167 )
        {
          v170 = v331;
          v17 = (*(_DWORD *)(v169 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( (unsigned __int64)++v167 >= v168 )
          goto LABEL_252;
      }
      sub_15D7BC0(v170, v169);
      ++v167;
    }
    while ( (unsigned __int64)v167 < v168 );
LABEL_252:
    v167 = v332;
    if ( v332 )
LABEL_253:
      sub_186B220(v167 - 1);
  }
  v171 = v330;
  if ( v330 )
  {
    if ( v330 >= &v330[*((unsigned int *)v330 - 1)] )
      goto LABEL_262;
    v172 = (unsigned __int64)&v330[*((unsigned int *)v330 - 1)];
    do
    {
      while ( 1 )
      {
        v173 = *v171;
        if ( *v171 )
        {
          v174 = v329;
          v17 = (*(_DWORD *)(v173 + 8))-- == 1;
          if ( v17 )
            break;
        }
        if ( (unsigned __int64)++v171 >= v172 )
          goto LABEL_261;
      }
      sub_15D7BC0(v174, v173);
      ++v171;
    }
    while ( (unsigned __int64)v171 < v172 );
LABEL_261:
    v171 = v330;
    if ( v330 )
LABEL_262:
      sub_186B220(v171 - 1);
  }
  if ( v328 )
    sub_186B220(v328);
  if ( v327 )
    sub_186B220(v327);
  if ( v326 )
    sub_186B220(v326);
  sub_157EB20(v325);
  if ( v324 )
    sub_186B220(v324);
  v175 = v322;
  if ( v322 )
  {
    v176 = v323;
    v17 = (*(_DWORD *)(v322 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v176, v175);
  }
  if ( v321 )
    sub_186B220(v321);
  v177 = v320;
  if ( v320 )
  {
    v178 = *((__int64 **)v320 + 12);
    if ( v178 )
    {
      v179 = &v178[*((unsigned int *)v178 - 1)];
      if ( v178 >= v179 )
        goto LABEL_285;
      do
      {
        while ( 1 )
        {
          v180 = *v178;
          if ( *v178 )
          {
            v181 = v177[11];
            v17 = (*(_DWORD *)(v180 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( ++v178 >= v179 )
            goto LABEL_284;
        }
        sub_15D7BC0(v181, v180);
        ++v178;
      }
      while ( v178 < v179 );
LABEL_284:
      v178 = (__int64 *)v177[12];
      if ( v178 )
LABEL_285:
        sub_186B220(v178 - 1);
    }
    v182 = v177[10];
    if ( v182 )
      sub_186B220((void *)(v182 - 8));
    sub_186B220(v177);
  }
  return sub_EE4A00(v301);
}

