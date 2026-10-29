_QWORD *__fastcall sub_DA58E0(_QWORD *a1, unsigned int **a2, __int64 *a3)
{
  void *exception; // r15
  void *v4; // r15
  __int64 v5; // rax
  char **v6; // r12
  char **v7; // r12
  char **v8; // r12
  char **v9; // r12
  char **v10; // r15
  char **v11; // r12
  char **v12; // r12
  char **v13; // r12
  char **v14; // r12
  char **v15; // r12
  char **v16; // r15
  __m128i *v18; // rax
  __int64 v19; // rdx
  __m128i *v20; // r13
  char v21; // al
  __int64 v22; // rax
  unsigned int *v23; // r14
  _QWORD *v24; // rbp
  __int64 *v25; // rax
  __int64 v26; // rsi
  char *v27; // rsi
  char *v28; // rdi
  char v29; // al
  int i; // eax
  char *v31; // rbx
  unsigned int v32; // eax
  char *v33; // rcx
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rdx
  int v38; // eax
  unsigned int *v39; // rcx
  unsigned __int64 v40; // rbx
  bool v41; // zf
  unsigned int *v42; // rax
  int v43; // esi
  size_t v44; // r15
  __m128i *v45; // r12
  __int64 v46; // rax
  char *v47; // rdi
  __m128i *m; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // r10
  int v54; // eax
  int v55; // esi
  __int64 v56; // rax
  _QWORD *v57; // rdx
  int v58; // edi
  int v59; // esi
  unsigned int v60; // eax
  __int64 v61; // rsi
  int v62; // eax
  unsigned __int64 *v63; // rsi
  unsigned __int64 v64; // r9
  int v65; // esi
  __m128i v66; // xmm0
  __int64 v67; // rcx
  __m128i *v68; // rdi
  __m128i *v69; // rax
  __m128i *v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rdx
  _QWORD *v73; // rbp
  int v74; // eax
  __int64 *v75; // rdx
  __int64 v76; // r15
  unsigned int v77; // eax
  __int64 v78; // rdx
  int v79; // eax
  __int64 *v80; // rdx
  __int64 v81; // rdx
  unsigned __int64 v82; // r12
  __int64 v83; // rbx
  __int64 v84; // rax
  int v85; // edx
  char **v86; // rax
  __int64 v87; // rax
  int v88; // esi
  size_t v89; // r15
  __m128i *v90; // r12
  __int64 v91; // rax
  char *v92; // rdi
  __m128i *j; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  int v97; // ecx
  __int64 v98; // r9
  int v99; // eax
  int v100; // esi
  __int64 v101; // rax
  _QWORD *v102; // rdx
  int v103; // edi
  int v104; // esi
  unsigned int v105; // eax
  __int64 v106; // rsi
  int v107; // eax
  unsigned __int64 *v108; // rsi
  unsigned __int64 v109; // r8
  int v110; // esi
  __m128i v111; // xmm0
  __int64 v112; // rcx
  __m128i *v113; // rdi
  __m128i *v114; // rax
  __m128i *v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rdx
  _QWORD *v118; // rbp
  int v119; // eax
  __int64 *v120; // rdx
  __int64 v121; // rdx
  char *v122; // rcx
  __int64 v123; // rax
  char *k; // rax
  __int64 v125; // rdx
  int v126; // r12d
  __int64 v127; // rax
  unsigned __int64 *v128; // rax
  unsigned int v129; // ebx
  unsigned int v130; // edx
  __int64 v131; // rax
  __int64 v132; // rcx
  _DWORD *v133; // r12
  __int64 v134; // rsi
  unsigned __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rdx
  int v138; // eax
  __int64 v139; // rdx
  unsigned int v140; // edx
  __int64 v141; // rax
  __int64 v142; // rcx
  unsigned __int64 v143; // rax
  __int64 v144; // rcx
  unsigned int v145; // eax
  __int64 v146; // rdx
  int v147; // eax
  unsigned int *v148; // rcx
  __int64 v149; // rax
  unsigned __int64 *v150; // rdx
  unsigned __int64 v151; // rsi
  __int64 v152; // rdi
  unsigned int v153; // eax
  __int64 v154; // rdx
  unsigned int v155; // ebx
  unsigned int v156; // edx
  __int64 v157; // rax
  __int64 v158; // rcx
  _DWORD *v159; // r12
  __int64 v160; // r15
  unsigned __int64 v161; // rax
  __int64 v162; // rcx
  __int64 v163; // rdx
  int v164; // eax
  unsigned int v165; // edx
  __int64 v166; // rax
  __int64 v167; // rcx
  unsigned __int64 v168; // rax
  __int64 v169; // rcx
  __m128 *v170; // rax
  __m128 *v171; // r11
  __m128 *v172; // r8
  const double *v173; // rax
  __int64 v174; // rdx
  __m128 *v175; // rdi
  __m128 *v176; // rdx
  __int64 v177; // rdx
  unsigned int v178; // r15d
  unsigned int v179; // edx
  unsigned int *v180; // rax
  __int64 v181; // rax
  unsigned __int64 *v182; // rdx
  unsigned __int64 v183; // rsi
  __int64 v184; // rdi
  unsigned int v185; // eax
  __int64 v186; // rdx
  _QWORD *v187; // rbp
  unsigned int v188; // r8d
  size_t v189; // rsi
  unsigned int *v190; // rax
  __int64 v191; // rsi
  unsigned int v192; // ebx
  unsigned int v193; // edx
  unsigned int *v194; // r12
  __int64 v195; // rax
  unsigned __int64 v196; // rdx
  __int64 v197; // rax
  __int64 v198; // rdx
  unsigned int v199; // ebx
  unsigned int v200; // eax
  unsigned int *v201; // r12
  __int64 v202; // rax
  unsigned __int64 v203; // rdx
  __int64 v204; // rax
  __int64 v205; // rdx
  unsigned int v206; // ebx
  unsigned int v207; // edx
  __int64 v208; // rax
  __int64 v209; // rcx
  _DWORD *v210; // r12
  __int64 v211; // r15
  unsigned __int64 v212; // rax
  __int64 v213; // rcx
  __int64 v214; // rdx
  int v215; // eax
  _QWORD *v216; // rdx
  __m128 *v217; // rax
  __m128 *v218; // r11
  __m128 *v219; // r10
  const double *v220; // rax
  __int64 v221; // rdx
  __m128 *v222; // rdi
  __m128 *v223; // rdx
  char *m128i_i8; // r15
  __int64 *v225; // r12
  char *v226; // rax
  __int64 v227; // rax
  __int64 *v228; // r15
  __int64 *v229; // r12
  __int64 v230; // rsi
  int v232; // r8d
  __int64 v233; // rsi
  __int64 v234; // rdx
  char *v235; // r9
  char *v236; // rdx
  unsigned int v237; // r8d
  size_t v238; // rsi
  unsigned int *v239; // rax
  __int64 v240; // rsi
  __int64 v241; // rbx
  unsigned int v242; // eax
  __int64 v243; // rdx
  int v244; // eax
  _QWORD *v245; // rdx
  _QWORD *v246; // rdx
  _QWORD *v247; // rbp
  _QWORD *v248; // rbp
  unsigned int v249; // r12d
  unsigned int v250; // edx
  __int64 v251; // rax
  __int64 v252; // rdx
  _DWORD *v253; // r15
  __int64 v254; // rcx
  unsigned __int64 v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rdx
  int v258; // eax
  _QWORD *v259; // rbp
  char *v260; // [rsp+0h] [rbp-138h]
  int v261; // [rsp+0h] [rbp-138h]
  _QWORD *v262; // [rsp+0h] [rbp-138h]
  unsigned int v263; // [rsp+8h] [rbp-130h]
  unsigned int v264; // [rsp+Ch] [rbp-12Ch]
  char *v265; // [rsp+10h] [rbp-128h]
  int v266; // [rsp+18h] [rbp-120h]
  int v267; // [rsp+1Ch] [rbp-11Ch]
  __int64 v268; // [rsp+20h] [rbp-118h]
  unsigned int *v269; // [rsp+28h] [rbp-110h]
  __int64 v270; // [rsp+30h] [rbp-108h]
  int v271; // [rsp+38h] [rbp-100h]
  __int64 v272; // [rsp+38h] [rbp-100h]
  int v273; // [rsp+38h] [rbp-100h]
  __int64 v274; // [rsp+38h] [rbp-100h]
  __int64 v275; // [rsp+38h] [rbp-100h]
  __int64 v276; // [rsp+38h] [rbp-100h]
  unsigned int *v277; // [rsp+40h] [rbp-F8h]
  __int64 v279; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v280; // [rsp+60h] [rbp-D8h]
  __int64 v281; // [rsp+60h] [rbp-D8h]
  __int64 v282; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v283; // [rsp+60h] [rbp-D8h]
  __int64 v284; // [rsp+60h] [rbp-D8h]
  __int64 v285; // [rsp+60h] [rbp-D8h]
  __int64 v286; // [rsp+60h] [rbp-D8h]
  __int64 v287; // [rsp+60h] [rbp-D8h]
  __int64 v288; // [rsp+68h] [rbp-D0h]
  unsigned int v289; // [rsp+68h] [rbp-D0h]
  __int64 v290; // [rsp+68h] [rbp-D0h]
  __int64 v291; // [rsp+68h] [rbp-D0h]
  unsigned int v292; // [rsp+68h] [rbp-D0h]
  __int64 v293; // [rsp+68h] [rbp-D0h]
  __m128 *v295; // [rsp+80h] [rbp-B8h]
  __m128 *v296; // [rsp+80h] [rbp-B8h]
  __m128 *v297; // [rsp+88h] [rbp-B0h]
  __m128 *v298; // [rsp+88h] [rbp-B0h]
  __int64 v300[4]; // [rsp+B0h] [rbp-88h] BYREF
  unsigned int *v301; // [rsp+D0h] [rbp-68h] BYREF
  char *v302; // [rsp+D8h] [rbp-60h]
  _QWORD *v303; // [rsp+E0h] [rbp-58h]
  void *ptr; // [rsp+E8h] [rbp-50h]
  unsigned int v305; // [rsp+F0h] [rbp-48h]
  int v306; // [rsp+F4h] [rbp-44h]
  int v307; // [rsp+F8h] [rbp-40h]

  v269 = *a2;
  v270 = *((_QWORD *)*a2 + 81);
  ++*(_DWORD *)((v270 & 0xFFFFFFFFFFFFFFFELL) + 4);
  v18 = (__m128i *)sub_186B270(0x80u);
  v19 = a3[9];
  v20 = v18;
  *v18 = 0;
  v18[1] = 0;
  v18[2] = 0;
  v18[3] = 0;
  v18[4] = 0;
  v18[5] = 0;
  v18[6] = 0;
  v18[7] = 0;
  if ( !v19 )
    goto LABEL_336;
  v21 = *(_BYTE *)(v19 + 3) >> 6;
  if ( !v21 )
  {
    do
    {
      v19 = *(_QWORD *)(v19 + 16);
      v21 = *(_BYTE *)(v19 + 3) >> 6;
    }
    while ( !v21 );
    if ( v21 != 1 )
      goto LABEL_4;
LABEL_322:
    v22 = (unsigned int)(*(_DWORD *)(v19 + 4) + 1);
    goto LABEL_6;
  }
  if ( v21 == 1 )
    goto LABEL_322;
LABEL_4:
  if ( v21 == 2 )
    v22 = (unsigned int)(*(_DWORD *)(v19 + 4) - 1);
  else
    v22 = *(unsigned int *)(v19 + 4);
LABEL_6:
  if ( !(_DWORD)v22 )
  {
LABEL_336:
    v265 = nullptr;
    v23 = v269;
    m128i_i8 = v20[8].m128i_i8;
    v24 = nullptr;
    v83 = v270;
    goto LABEL_278;
  }
  v279 = v22;
  v23 = v269;
  v24 = nullptr;
  v25 = a3;
  v268 = 0;
  v266 = 0;
  v26 = *a3;
  v267 = 0;
  v263 = 8;
  v265 = nullptr;
  if ( (*((_BYTE *)a3 + 123) & 0x20) != 0 )
  {
LABEL_8:
    v27 = *(char **)(v26 + 864);
    goto LABEL_9;
  }
  while ( 2 )
  {
    v84 = v25[9];
    v85 = 17;
    while ( 1 )
    {
      if ( *(char *)(v84 + 3) < 0 )
      {
        if ( *(_BYTE *)(v84 + 3) >> 6 != 2 )
        {
          v86 = (char **)(*(_QWORD *)(v84 + 16) + 8 * v268);
          goto LABEL_78;
        }
        goto LABEL_172;
      }
      if ( *(_DWORD *)(v84 + 4) == (_DWORD)v268 )
        break;
LABEL_172:
      v84 = *(_QWORD *)(v84 + 16);
      if ( !--v85 )
      {
        sub_233F80((__int64 *)(v26 + 616), (_DWORD *)a3 + 18);
        v86 = (char **)(*(_QWORD *)(a3[9] + 16) + 8 * v268);
        goto LABEL_78;
      }
    }
    v86 = (char **)(v84 + 8);
LABEL_78:
    v27 = *v86;
LABEL_9:
    v28 = (char *)&v301;
    v301 = v23;
    v303 = v24;
    v302 = v265;
    ptr = v20;
    v305 = v263;
    v306 = v267;
    v307 = v266;
    v29 = sub_DAE860(&v301, v27);
    v23 = v301;
    v24 = v303;
    v263 = v305;
    v265 = v302;
    v20 = (__m128i *)ptr;
    v267 = v306;
    v266 = v307;
    if ( !v29 && v302 )
    {
      for ( i = *((_DWORD *)v302 - 1); i; *((_DWORD *)v265 - 1) = i )
      {
        while ( 1 )
        {
          v277 = v23 + 30;
LABEL_14:
          if ( *((_QWORD *)v23 + 84) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v28, v27) )
          {
            exception = __cxa_allocate_exception(0x28u);
            sub_DA7950(exception, off_1C7E178);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'aig_exception, sub_DA72D0);
          }
          v28 = *((char **)v23 + 13);
          if ( !(unsigned __int8)sub_18290A0(v28) )
          {
            v4 = __cxa_allocate_exception(0x28u);
            v5 = sub_1829130(*((_QWORD *)v23 + 13));
            sub_DA7950(v4, v5);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'aig_exception, sub_DA72D0);
          }
          v31 = &v265[16 * (*((_DWORD *)v265 - 1) - 1)];
          v32 = *((_DWORD *)v31 + 2);
          v33 = *(char **)v31;
          v260 = v31;
          if ( !v32 && *((_DWORD *)v33 + 2) > 1u )
            break;
LABEL_18:
          v264 = *((_DWORD *)v33 + 6);
          if ( v32 >= v264 )
            goto LABEL_71;
          while ( 2 )
          {
            v40 = *(_QWORD *)&v33[8 * v32 + 32];
            v41 = *(_WORD *)(v40 + 4) == 0;
            *((_DWORD *)v260 + 2) = v32 + 1;
            if ( !v41 )
            {
              v88 = *(_DWORD *)(v40 + 12);
              v89 = 16LL * v263;
              v90 = &v20[v89 / 0x10];
              v91 = 16LL * ((v263 - 1) & v88);
              v92 = v20[(unsigned __int64)v91 / 0x10].m128i_i8;
              if ( v91 != v89 )
              {
                for ( j = &v20[(unsigned __int64)v91 / 0x10]; v90 != j; ++j )
                {
                  v94 = j->m128i_i64[0];
                  if ( j->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v94 + 12) == v88 && v40 == v94 )
                    {
LABEL_133:
                      v76 = j->m128i_i64[1];
                      ++*(_DWORD *)((v76 & 0xFFFFFFFFFFFFFFFELL) + 4);
                      if ( v24 )
                      {
                        v77 = *((_DWORD *)v24 - 1);
                        if ( v77 == *((_DWORD *)v24 - 2) )
                        {
                          v129 = (3 * v77 + 1) >> 1;
                          v130 = 8 * v129 + 8;
                          if ( 8 * v77 + 8 >= v130 || v77 >= v129 )
                          {
                            v9 = (char **)__cxa_allocate_exception(0x28u);
                            sub_24ABB0(v300, "Overflow encountered when expanding vector");
                            *v9 = (char *)off_1C63128;
                            sub_2333C0(v9 + 1, v300);
                            sub_233E40((__int64)v300);
                            __cxa_throw(
                              v9,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v131 = sub_186B270(v130);
                          v132 = *((unsigned int *)v24 - 1);
                          v133 = (_DWORD *)v131;
                          v134 = v131 + 8;
                          *(_DWORD *)(v131 + 4) = v132;
                          v135 = 0;
                          v136 = 8 * v132;
                          if ( v136 )
                          {
                            do
                            {
                              *(_QWORD *)&v133[v135 / 4 + 2] = v24[v135 / 8];
                              v135 += 8LL;
                            }
                            while ( v136 != v135 );
                          }
                          goto LABEL_139;
                        }
                        goto LABEL_69;
                      }
LABEL_232:
                      v187 = (_QWORD *)sub_186B270(0x18u);
                      *v187 = 2;
                      v79 = 1;
                      v24 = v187 + 1;
                      v80 = v24;
                      goto LABEL_70;
                    }
                  }
                  else if ( !v94 )
                  {
                    goto LABEL_94;
                  }
                }
              }
              if ( v92 != (char *)v20 )
              {
                for ( j = v20; v92 != (char *)j; ++j )
                {
                  v139 = j->m128i_i64[0];
                  if ( j->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v139 + 12) == v88 && v40 == v139 )
                      goto LABEL_133;
                  }
                  else if ( !v139 )
                  {
                    break;
                  }
                }
              }
LABEL_94:
              ++v23[24];
              v95 = sub_17E9C90(v277, 32);
              v96 = *((_QWORD *)v23 + 1);
              v97 = v263 - 1;
              v98 = v95;
              if ( v96 && (v99 = *(_DWORD *)(v96 - 4)) != 0 )
              {
                v100 = v99 - 1;
                v101 = *(unsigned int *)(v96 + 4LL * (unsigned int)(v99 - 1));
                *(_DWORD *)(v96 - 4) = v100;
              }
              else
              {
                v101 = *v23;
                *v23 = v101 + 1;
              }
              *(_BYTE *)(v98 + 24) &= ~1u;
              v102 = *((_QWORD **)v23 + 14);
              v103 = *(_DWORD *)(v40 + 8);
              *(_DWORD *)v98 = v101;
              *(_DWORD *)(v98 + 4) = 0;
              *(_QWORD *)(v98 + 8) = 0;
              v104 = v103 + 1;
              if ( v102 )
              {
                if ( (_DWORD)v101 == *((_DWORD *)v102 - 1) )
                {
                  *(_DWORD *)(v40 + 8) = v104;
                  v105 = *((_DWORD *)v102 - 1);
                  if ( v105 == *((_DWORD *)v102 - 2) )
                  {
                    v237 = (3 * v105 + 1) >> 1;
                    v238 = 8 * v237 + 8;
                    if ( 8 * v105 + 8 >= (unsigned int)v238 || v105 >= v237 )
                    {
                      v10 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v300, "Overflow encountered when expanding vector");
                      *v10 = (char *)off_1C63128;
                      sub_2333C0(v10 + 1, v300);
                      sub_233E40((__int64)v300);
                      __cxa_throw(
                        v10,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v292 = (3 * v105 + 1) >> 1;
                    v285 = v98;
                    v239 = (unsigned int *)sub_186B300(v102 - 1, v238);
                    v240 = v239[1];
                    v102 = v239 + 2;
                    v97 = v263 - 1;
                    v98 = v285;
                    *((_QWORD *)v23 + 14) = v239 + 2;
                    *v239 = v292;
                    LODWORD(v239) = v240;
                    v108 = &v102[v240];
                    v107 = (_DWORD)v239 + 1;
                  }
                  else
                  {
                    v106 = v105;
                    v107 = v105 + 1;
                    v108 = &v102[v106];
                  }
LABEL_101:
                  *v108 = v40;
                  *((_DWORD *)v102 - 1) = v107;
LABEL_102:
                  v109 = v98 & 0xFFFFFFFFFFFFFFFELL;
                  ++*(_DWORD *)((v98 & 0xFFFFFFFFFFFFFFFELL) + 4);
                  v273 = 2 * v263;
                  if ( 3 * v263 < 4 * (v267 + v266) )
                  {
                    v290 = v98;
                    v89 = 32LL * v263;
                    v283 = v98 & 0xFFFFFFFFFFFFFFFELL;
                    v217 = (__m128 *)sub_186B270(v89);
                    v109 = v283;
                    v218 = v217;
                    v219 = &v217[v89 / 0x10];
                    v98 = v290;
                    if ( v273 )
                    {
                      if ( (v89 & 0x10) == 0 || (*v217 = 0, ++v217, v217 != v219) )
                      {
                        do
                        {
                          *v217 = 0;
                          v217 += 2;
                          v217[-1] = 0;
                        }
                        while ( v217 != v219 );
                      }
                    }
                    v97 = v273 - 1;
                    v220 = (const double *)v20;
                    if ( v90 != v20 )
                    {
                      do
                      {
                        while ( *(_QWORD *)v220 <= 1u )
                        {
                          v220 += 2;
                          if ( v90 == (__m128i *)v220 )
                            goto LABEL_268;
                        }
                        v221 = 16LL * (*(_DWORD *)(*(_QWORD *)v220 + 12LL) & (unsigned int)v97);
                        v222 = &v218[(unsigned __int64)v221 / 0x10];
                        if ( v89 == v221 )
                        {
LABEL_271:
                          if ( v218 == v222 )
                          {
LABEL_313:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v223 = v218;
                          while ( v223->m128_u64[0] )
                          {
                            if ( v222 == ++v223 )
                              goto LABEL_313;
                          }
                        }
                        else
                        {
                          v223 = &v218[(unsigned __int64)v221 / 0x10];
                          while ( v223->m128_u64[0] )
                          {
                            if ( v219 == ++v223 )
                              goto LABEL_271;
                          }
                        }
                        v220 += 2;
                        *v223 = _mm_loadh_ps(v220 - 1);
                      }
                      while ( v90 != (__m128i *)v220 );
                    }
LABEL_268:
                    if ( v20 )
                    {
                      v298 = v219;
                      v296 = v218;
                      sub_186B220(v20);
                      v219 = v298;
                      v218 = v296;
                      v98 = v290;
                      v109 = v283;
                      v97 = v273 - 1;
                    }
                    v266 = 0;
                    v90 = (__m128i *)v219;
                    v20 = (__m128i *)v218;
                    v263 *= 2;
                  }
                  v110 = *(_DWORD *)(v40 + 12);
                  v111 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)(unsigned __int64)v98);
                  v112 = 16LL * (v110 & (unsigned int)v97);
                  v113 = &v20[(unsigned __int64)v112 / 0x10];
                  if ( v112 == v89 )
                  {
                    v115 = nullptr;
LABEL_111:
                    if ( v20 != v113 )
                    {
                      v114 = v20;
                      do
                      {
                        while ( 1 )
                        {
                          v117 = v114->m128i_i64[0];
                          if ( v114->m128i_i64[0] <= 1uLL )
                            break;
                          if ( *(_DWORD *)(v117 + 12) == v110 && v40 == v117 )
                            goto LABEL_318;
                          if ( v113 == ++v114 )
                            goto LABEL_119;
                        }
                        if ( !v117 )
                          goto LABEL_225;
                        v115 = v114++;
                      }
                      while ( v113 != v114 );
                    }
LABEL_119:
                    sub_1872CE0("");
                    sub_1873130(114, 405);
                  }
                  v114 = &v20[(unsigned __int64)v112 / 0x10];
                  v115 = nullptr;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v116 = v114->m128i_i64[0];
                      if ( v114->m128i_i64[0] <= 1uLL )
                        break;
                      if ( *(_DWORD *)(v116 + 12) == v110 && v40 == v116 )
                      {
LABEL_318:
                        *v114 = v111;
                        goto LABEL_228;
                      }
                      if ( ++v114 == v90 )
                        goto LABEL_111;
                    }
                    if ( !v116 )
                      break;
                    v115 = v114++;
                    if ( v114 == v90 )
                      goto LABEL_111;
                  }
LABEL_225:
                  if ( v115 )
                    --v266;
                  else
                    v115 = v114;
                  *v115 = v111;
                  ++v267;
LABEL_228:
                  ++*(_DWORD *)(v109 + 4);
                  if ( v24 )
                  {
                    v185 = *((_DWORD *)v24 - 1);
                    if ( v185 == *((_DWORD *)v24 - 2) )
                    {
                      v206 = (3 * v185 + 1) >> 1;
                      v207 = 8 * v206 + 8;
                      if ( 8 * v185 + 8 >= v207 || v185 >= v206 )
                      {
                        v16 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v300, "Overflow encountered when expanding vector");
                        *v16 = (char *)off_1C63128;
                        sub_2333C0(v16 + 1, v300);
                        sub_233E40((__int64)v300);
                        __cxa_throw(
                          v16,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v276 = v98;
                      v208 = sub_186B270(v207);
                      v209 = *((unsigned int *)v24 - 1);
                      v210 = (_DWORD *)v208;
                      v211 = v208 + 8;
                      *(_DWORD *)(v208 + 4) = v209;
                      v212 = 0;
                      v213 = 8 * v209;
                      if ( v213 )
                      {
                        do
                        {
                          *(_QWORD *)&v210[v212 / 4 + 2] = v24[v212 / 8];
                          v212 += 8LL;
                        }
                        while ( v213 != v212 );
                      }
                      sub_186B220(v24 - 1);
                      v214 = (unsigned int)v210[1];
                      v98 = v276;
                      *v210 = v206;
                      v24 = (_QWORD *)v211;
                      v215 = v214;
                      v120 = (__int64 *)(v211 + 8 * v214);
                      v119 = v215 + 1;
                    }
                    else
                    {
                      v186 = v185;
                      v119 = v185 + 1;
                      v120 = &v24[v186];
                    }
                  }
                  else
                  {
                    v274 = v98;
                    v118 = (_QWORD *)sub_186B270(0x18u);
                    *v118 = 2;
                    v98 = v274;
                    v119 = 1;
                    v24 = v118 + 1;
                    v120 = v24;
                  }
                  *v120 = v98;
                  *((_DWORD *)v24 - 1) = v119;
                  goto LABEL_28;
                }
              }
              else if ( !(_DWORD)v101 )
              {
                *(_DWORD *)(v40 + 8) = v104;
                v286 = v98;
                v246 = (_QWORD *)sub_186B270(0x18u);
                *v246 = 2;
                v97 = v263 - 1;
                v107 = 1;
                v102 = v246 + 1;
                v98 = v286;
                *((_QWORD *)v23 + 14) = v102;
                v108 = v102;
                goto LABEL_101;
              }
              v181 = v101;
              *(_DWORD *)(v40 + 8) = v104;
              v182 = &v102[v181];
              v183 = *v182;
              if ( *v182 )
              {
                v184 = *((_QWORD *)v23 + 13);
                v41 = (*(_DWORD *)(v183 + 8))-- == 1;
                if ( v41 )
                {
                  v293 = v181 * 8;
                  v287 = v98;
                  sub_15D7BC0(v184, v183);
                  v98 = v287;
                  v97 = v263 - 1;
                  v182 = (unsigned __int64 *)(*((_QWORD *)v23 + 14) + v293);
                }
              }
              *v182 = v40;
              goto LABEL_102;
            }
            v42 = *(unsigned int **)(*(_QWORD *)(v40 + 16) + 24LL);
            if ( v42 )
            {
              v27 = (char *)*v42;
              if ( !(_DWORD)v27 )
              {
                v34 = v42[1];
                if ( v34 != 2 )
                {
                  if ( v34 > 2 )
                  {
                    if ( (unsigned int)(v34 - 4) <= 5 )
                      goto LABEL_122;
                  }
                  else
                  {
                    if ( !v34 )
                    {
                      ++*(_DWORD *)((*((_QWORD *)v23 + 81) & 0xFFFFFFFFFFFFFFFELL) + 4);
                      if ( v24 )
                      {
                        v145 = *((_DWORD *)v24 - 1);
                        if ( v145 == *((_DWORD *)v24 - 2) )
                        {
                          v192 = (3 * v145 + 1) >> 1;
                          v193 = 8 * v192 + 8;
                          if ( 8 * v145 + 8 >= v193 || v145 >= v192 )
                          {
                            v14 = (char **)__cxa_allocate_exception(0x28u);
                            sub_24ABB0(v300, "Overflow encountered when expanding vector");
                            *v14 = (char *)off_1C63128;
                            sub_2333C0(v14 + 1, v300);
                            sub_233E40((__int64)v300);
                            __cxa_throw(
                              v14,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v194 = (unsigned int *)sub_186B270(v193);
                          v195 = *((unsigned int *)v24 - 1);
                          v196 = 0;
                          v194[1] = v195;
                          v197 = 8 * v195;
                          if ( v197 )
                          {
                            do
                            {
                              *(_QWORD *)&v194[v196 / 4 + 2] = v24[v196 / 8];
                              v196 += 8LL;
                            }
                            while ( v197 != v196 );
                          }
                          sub_186B220(v24 - 1);
                          v198 = v194[1];
                          *v194 = v192;
                          v24 = v194 + 2;
                          v148 = &v194[2 * v198 + 2];
                          v147 = v198 + 1;
                        }
                        else
                        {
                          v146 = v145;
                          v147 = v145 + 1;
                          v148 = (unsigned int *)&v24[v146];
                        }
                      }
                      else
                      {
                        v247 = (_QWORD *)sub_186B270(0x18u);
                        *v247 = 2;
                        v147 = 1;
                        v24 = v247 + 1;
                        v148 = (unsigned int *)v24;
                      }
                      *(_QWORD *)v148 = *((_QWORD *)v23 + 81);
                      *((_DWORD *)v24 - 1) = v147;
                      goto LABEL_28;
                    }
                    if ( v34 == 1 )
                    {
                      ++*(_DWORD *)((*((_QWORD *)v23 + 82) & 0xFFFFFFFFFFFFFFFELL) + 4);
                      if ( v24 )
                      {
                        v35 = *((_DWORD *)v24 - 1);
                        v36 = *((_DWORD *)v24 - 2);
                        if ( v35 == v36 )
                        {
                          v199 = (3 * v36 + 1) >> 1;
                          v200 = 8 * v199 + 8;
                          if ( 8 * v36 + 8 >= v200 || v36 >= v199 )
                          {
                            v7 = (char **)__cxa_allocate_exception(0x28u);
                            sub_24ABB0(v300, "Overflow encountered when expanding vector");
                            *v7 = (char *)off_1C63128;
                            sub_2333C0(v7 + 1, v300);
                            sub_233E40((__int64)v300);
                            __cxa_throw(
                              v7,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v201 = (unsigned int *)sub_186B270(v200);
                          v202 = *((unsigned int *)v24 - 1);
                          v203 = 0;
                          v201[1] = v202;
                          v204 = 8 * v202;
                          if ( v204 )
                          {
                            do
                            {
                              *(_QWORD *)&v201[v203 / 4 + 2] = v24[v203 / 8];
                              v203 += 8LL;
                            }
                            while ( v204 != v203 );
                          }
                          sub_186B220(v24 - 1);
                          v205 = v201[1];
                          *v201 = v199;
                          v24 = v201 + 2;
                          v39 = &v201[2 * v205 + 2];
                          v38 = v205 + 1;
                        }
                        else
                        {
                          v37 = v35;
                          v38 = v35 + 1;
                          v39 = (unsigned int *)&v24[v37];
                        }
                      }
                      else
                      {
                        v248 = (_QWORD *)sub_186B270(0x18u);
                        *v248 = 2;
                        v38 = 1;
                        v24 = v248 + 1;
                        v39 = (unsigned int *)v24;
                      }
                      *(_QWORD *)v39 = *((_QWORD *)v23 + 82);
                      *((_DWORD *)v24 - 1) = v38;
                      goto LABEL_28;
                    }
                  }
                  goto LABEL_33;
                }
                v27 = *(char **)(v40 + 32);
                v28 = *((char **)v23 + 13);
                if ( !(unsigned __int8)sub_15D2CB0(v28, v27) )
                  goto LABEL_33;
LABEL_122:
                if ( *(_DWORD *)(v40 + 8) <= 1u )
                  goto LABEL_130;
                v27 = (char *)*(unsigned int *)(v40 + 12);
                v121 = 16LL * v263;
                v122 = v20[(unsigned __int64)v121 / 0x10].m128i_i8;
                v123 = 16LL * ((unsigned int)v27 & (v263 - 1));
                v28 = v20[(unsigned __int64)v123 / 0x10].m128i_i8;
                if ( v123 != v121 )
                {
                  for ( k = v20[(unsigned __int64)v123 / 0x10].m128i_i8; v122 != k; k += 16 )
                  {
                    v125 = *(_QWORD *)k;
                    if ( *(_QWORD *)k > 1u )
                    {
                      if ( *(_DWORD *)(v125 + 12) == (_DWORD)v27 && v40 == v125 )
                      {
LABEL_179:
                        v76 = *((_QWORD *)k + 1);
                        ++*(_DWORD *)((v76 & 0xFFFFFFFFFFFFFFFELL) + 4);
                        if ( v24 )
                        {
                          v77 = *((_DWORD *)v24 - 1);
                          if ( v77 == *((_DWORD *)v24 - 2) )
                          {
                            v129 = (3 * v77 + 1) >> 1;
                            v165 = 8 * v129 + 8;
                            if ( 8 * v77 + 8 >= v165 || v77 >= v129 )
                            {
                              v8 = (char **)__cxa_allocate_exception(0x28u);
                              sub_24ABB0(v300, "Overflow encountered when expanding vector");
                              *v8 = (char *)off_1C63128;
                              sub_2333C0(v8 + 1, v300);
                              sub_233E40((__int64)v300);
                              __cxa_throw(
                                v8,
                                (struct type_info *)&`typeinfo for'default_exception,
                                (void (*)(void *))sub_230E50);
                            }
                            v166 = sub_186B270(v165);
                            v167 = *((unsigned int *)v24 - 1);
                            v133 = (_DWORD *)v166;
                            v134 = v166 + 8;
                            *(_DWORD *)(v166 + 4) = v167;
                            v168 = 0;
                            v169 = 8 * v167;
                            if ( v169 )
                            {
                              do
                              {
                                *(_QWORD *)&v133[v168 / 4 + 2] = v24[v168 / 8];
                                v168 += 8LL;
                              }
                              while ( v169 != v168 );
                            }
                            goto LABEL_139;
                          }
LABEL_69:
                          v78 = v77;
                          v79 = v77 + 1;
                          v80 = &v24[v78];
                          goto LABEL_70;
                        }
                        goto LABEL_232;
                      }
                    }
                    else if ( !v125 )
                    {
                      goto LABEL_130;
                    }
                  }
                }
                if ( v28 == (char *)v20 )
                {
LABEL_130:
                  if ( !v24 )
                    goto LABEL_216;
                  goto LABEL_131;
                }
                k = (char *)v20;
                while ( 1 )
                {
                  v177 = *(_QWORD *)k;
                  if ( *(_QWORD *)k <= 1u )
                    break;
                  if ( *(_DWORD *)(v177 + 12) == (_DWORD)v27 && v40 == v177 )
                    goto LABEL_179;
LABEL_212:
                  k += 16;
                  if ( v28 == k )
                    goto LABEL_130;
                }
                if ( v177 )
                  goto LABEL_212;
                if ( !v24 )
                {
LABEL_216:
                  v126 = 0;
                  v127 = *((unsigned int *)v265 - 1);
                  if ( (_DWORD)v127 == *((_DWORD *)v265 - 2) )
                    goto LABEL_217;
                  goto LABEL_132;
                }
LABEL_131:
                v126 = *((_DWORD *)v24 - 1);
                v127 = *((unsigned int *)v265 - 1);
                if ( (_DWORD)v127 == *((_DWORD *)v265 - 2) )
                {
LABEL_217:
                  v178 = (unsigned int)(3 * v127 + 1) >> 1;
                  v179 = 16 * v178 + 8;
                  if ( 16 * (int)v127 + 8 >= v179 || (unsigned int)v127 >= v178 )
                  {
                    v6 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v300, "Overflow encountered when expanding vector");
                    *v6 = (char *)off_1C63128;
                    sub_2333C0(v6 + 1, v300);
                    sub_233E40((__int64)v300);
                    __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v27 = (char *)v179;
                  v180 = (unsigned int *)sub_186B300(v265 - 8, v179);
                  v28 = (char *)(v180 + 2);
                  *v180 = v178;
                  v127 = v180[1];
                  v265 = v28;
                }
LABEL_132:
                v128 = (unsigned __int64 *)&v265[16 * v127];
                *v128 = v40;
                *((_DWORD *)v128 + 2) = 0;
                *((_DWORD *)v128 + 3) = v126;
                ++*((_DWORD *)v265 - 1);
                goto LABEL_14;
              }
            }
LABEL_33:
            v43 = *(_DWORD *)(v40 + 12);
            v44 = 16LL * v263;
            v45 = &v20[v44 / 0x10];
            v46 = 16LL * ((v263 - 1) & v43);
            v47 = v20[(unsigned __int64)v46 / 0x10].m128i_i8;
            if ( v46 == v44 )
            {
LABEL_79:
              if ( v47 != (char *)v20 )
              {
                for ( m = v20; v47 != (char *)m; ++m )
                {
                  v87 = m->m128i_i64[0];
                  if ( m->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v87 + 12) == v43 && v40 == v87 )
                      goto LABEL_67;
                  }
                  else if ( !v87 )
                  {
                    break;
                  }
                }
              }
LABEL_40:
              ++v23[24];
              v50 = sub_17E9C90(v277, 32);
              v51 = *((_QWORD *)v23 + 1);
              v52 = v263 - 1;
              v53 = v50;
              if ( v51 && (v54 = *(_DWORD *)(v51 - 4)) != 0 )
              {
                v55 = v54 - 1;
                v56 = *(unsigned int *)(v51 + 4LL * (unsigned int)(v54 - 1));
                *(_DWORD *)(v51 - 4) = v55;
              }
              else
              {
                v56 = *v23;
                *v23 = v56 + 1;
              }
              *(_BYTE *)(v53 + 24) &= ~1u;
              v57 = *((_QWORD **)v23 + 14);
              v58 = *(_DWORD *)(v40 + 8);
              *(_DWORD *)v53 = v56;
              *(_DWORD *)(v53 + 4) = 0;
              *(_QWORD *)(v53 + 8) = 0;
              v59 = v58 + 1;
              if ( v57 )
              {
                if ( (_DWORD)v56 == *((_DWORD *)v57 - 1) )
                {
                  *(_DWORD *)(v40 + 8) = v59;
                  v60 = *((_DWORD *)v57 - 1);
                  if ( v60 == *((_DWORD *)v57 - 2) )
                  {
                    v188 = (3 * v60 + 1) >> 1;
                    v189 = 8 * v188 + 8;
                    if ( 8 * v60 + 8 >= (unsigned int)v189 || v60 >= v188 )
                    {
                      v11 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v300, "Overflow encountered when expanding vector");
                      *v11 = (char *)off_1C63128;
                      sub_2333C0(v11 + 1, v300);
                      sub_233E40((__int64)v300);
                      __cxa_throw(
                        v11,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v289 = (3 * v60 + 1) >> 1;
                    v281 = v53;
                    v190 = (unsigned int *)sub_186B300(v57 - 1, v189);
                    v191 = v190[1];
                    v57 = v190 + 2;
                    v52 = v263 - 1;
                    v53 = v281;
                    *((_QWORD *)v23 + 14) = v190 + 2;
                    *v190 = v289;
                    LODWORD(v190) = v191;
                    v63 = &v57[v191];
                    v62 = (_DWORD)v190 + 1;
                  }
                  else
                  {
                    v61 = v60;
                    v62 = v60 + 1;
                    v63 = &v57[v61];
                  }
LABEL_47:
                  *v63 = v40;
                  *((_DWORD *)v57 - 1) = v62;
LABEL_48:
                  v64 = v53 & 0xFFFFFFFFFFFFFFFELL;
                  ++*(_DWORD *)((v53 & 0xFFFFFFFFFFFFFFFELL) + 4);
                  v271 = 2 * v263;
                  if ( 3 * v263 < 4 * (v267 + v266) )
                  {
                    v288 = v53;
                    v44 = 32LL * v263;
                    v280 = v53 & 0xFFFFFFFFFFFFFFFELL;
                    v170 = (__m128 *)sub_186B270(v44);
                    v64 = v280;
                    v171 = v170;
                    v172 = &v170[v44 / 0x10];
                    v53 = v288;
                    if ( v271 )
                    {
                      if ( (v44 & 0x10) == 0 || (*v170 = 0, ++v170, v170 != v172) )
                      {
                        do
                        {
                          *v170 = 0;
                          v170 += 2;
                          v170[-1] = 0;
                        }
                        while ( v170 != v172 );
                      }
                    }
                    v52 = v271 - 1;
                    v173 = (const double *)v20;
                    if ( v45 != v20 )
                    {
                      do
                      {
                        while ( *(_QWORD *)v173 <= 1u )
                        {
                          v173 += 2;
                          if ( v45 == (__m128i *)v173 )
                            goto LABEL_199;
                        }
                        v174 = 16LL * (*(_DWORD *)(*(_QWORD *)v173 + 12LL) & (unsigned int)v52);
                        v175 = &v171[(unsigned __int64)v174 / 0x10];
                        if ( v44 == v174 )
                        {
LABEL_202:
                          if ( v171 == v175 )
                          {
LABEL_246:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v176 = v171;
                          while ( v176->m128_u64[0] )
                          {
                            if ( v175 == ++v176 )
                              goto LABEL_246;
                          }
                        }
                        else
                        {
                          v176 = &v171[(unsigned __int64)v174 / 0x10];
                          while ( v176->m128_u64[0] )
                          {
                            if ( v172 == ++v176 )
                              goto LABEL_202;
                          }
                        }
                        v173 += 2;
                        *v176 = _mm_loadh_ps(v173 - 1);
                      }
                      while ( v45 != (__m128i *)v173 );
                    }
LABEL_199:
                    if ( v20 )
                    {
                      v297 = v172;
                      v295 = v171;
                      sub_186B220(v20);
                      v172 = v297;
                      v171 = v295;
                      v53 = v288;
                      v64 = v280;
                      v52 = v271 - 1;
                    }
                    v266 = 0;
                    v45 = (__m128i *)v172;
                    v20 = (__m128i *)v171;
                    v263 *= 2;
                  }
                  v65 = *(_DWORD *)(v40 + 12);
                  v66 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)(unsigned __int64)v53);
                  v67 = 16LL * (v65 & (unsigned int)v52);
                  v68 = &v20[(unsigned __int64)v67 / 0x10];
                  if ( v67 == v44 )
                  {
                    v70 = nullptr;
LABEL_57:
                    if ( v68 != v20 )
                    {
                      v69 = v20;
                      do
                      {
                        while ( 1 )
                        {
                          v72 = v69->m128i_i64[0];
                          if ( v69->m128i_i64[0] <= 1uLL )
                            break;
                          if ( *(_DWORD *)(v72 + 12) == v65 && v40 == v72 )
                            goto LABEL_254;
                          if ( v68 == ++v69 )
                            goto LABEL_65;
                        }
                        if ( !v72 )
                          goto LABEL_164;
                        v70 = v69++;
                      }
                      while ( v68 != v69 );
                    }
LABEL_65:
                    sub_1872CE0("");
                    sub_1873130(114, 405);
                  }
                  v69 = &v20[(unsigned __int64)v67 / 0x10];
                  v70 = nullptr;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v71 = v69->m128i_i64[0];
                      if ( v69->m128i_i64[0] <= 1uLL )
                        break;
                      if ( *(_DWORD *)(v71 + 12) == v65 && v40 == v71 )
                      {
LABEL_254:
                        *v69 = v66;
                        goto LABEL_167;
                      }
                      if ( ++v69 == v45 )
                        goto LABEL_57;
                    }
                    if ( !v71 )
                      break;
                    v70 = v69++;
                    if ( v69 == v45 )
                      goto LABEL_57;
                  }
LABEL_164:
                  if ( v70 )
                    --v266;
                  else
                    v70 = v69;
                  *v70 = v66;
                  ++v267;
LABEL_167:
                  ++*(_DWORD *)(v64 + 4);
                  if ( v24 )
                  {
                    v153 = *((_DWORD *)v24 - 1);
                    if ( v153 == *((_DWORD *)v24 - 2) )
                    {
                      v155 = (3 * v153 + 1) >> 1;
                      v156 = 8 * v155 + 8;
                      if ( 8 * v153 + 8 >= v156 || v153 >= v155 )
                      {
                        v13 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v300, "Overflow encountered when expanding vector");
                        *v13 = (char *)off_1C63128;
                        sub_2333C0(v13 + 1, v300);
                        sub_233E40((__int64)v300);
                        __cxa_throw(
                          v13,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v275 = v53;
                      v157 = sub_186B270(v156);
                      v158 = *((unsigned int *)v24 - 1);
                      v159 = (_DWORD *)v157;
                      v160 = v157 + 8;
                      *(_DWORD *)(v157 + 4) = v158;
                      v161 = 0;
                      v162 = 8 * v158;
                      if ( v162 )
                      {
                        do
                        {
                          *(_QWORD *)&v159[v161 / 4 + 2] = v24[v161 / 8];
                          v161 += 8LL;
                        }
                        while ( v162 != v161 );
                      }
                      sub_186B220(v24 - 1);
                      v163 = (unsigned int)v159[1];
                      v53 = v275;
                      *v159 = v155;
                      v24 = (_QWORD *)v160;
                      v164 = v163;
                      v75 = (__int64 *)(v160 + 8 * v163);
                      v74 = v164 + 1;
                    }
                    else
                    {
                      v154 = v153;
                      v74 = v153 + 1;
                      v75 = &v24[v154];
                    }
                  }
                  else
                  {
                    v272 = v53;
                    v73 = (_QWORD *)sub_186B270(0x18u);
                    *v73 = 2;
                    v53 = v272;
                    v74 = 1;
                    v24 = v73 + 1;
                    v75 = v24;
                  }
                  *v75 = v53;
                  *((_DWORD *)v24 - 1) = v74;
LABEL_28:
                  v28 = v260;
                  v32 = *((_DWORD *)v260 + 2);
                  if ( v32 >= v264 )
                    break;
                  goto LABEL_29;
                }
              }
              else if ( !(_DWORD)v56 )
              {
                *(_DWORD *)(v40 + 8) = v59;
                v282 = v53;
                v216 = (_QWORD *)sub_186B270(0x18u);
                *v216 = 2;
                v52 = v263 - 1;
                v62 = 1;
                v57 = v216 + 1;
                v53 = v282;
                *((_QWORD *)v23 + 14) = v57;
                v63 = v57;
                goto LABEL_47;
              }
              v149 = v56;
              *(_DWORD *)(v40 + 8) = v59;
              v150 = &v57[v149];
              v151 = *v150;
              if ( *v150 )
              {
                v152 = *((_QWORD *)v23 + 13);
                v41 = (*(_DWORD *)(v151 + 8))-- == 1;
                if ( v41 )
                {
                  v291 = v149 * 8;
                  v284 = v53;
                  sub_15D7BC0(v152, v151);
                  v53 = v284;
                  v52 = v263 - 1;
                  v150 = (unsigned __int64 *)(*((_QWORD *)v23 + 14) + v291);
                }
              }
              *v150 = v40;
              goto LABEL_48;
            }
            m = &v20[(unsigned __int64)v46 / 0x10];
            while ( 1 )
            {
              v49 = m->m128i_i64[0];
              if ( m->m128i_i64[0] > 1uLL )
                break;
              if ( !v49 )
                goto LABEL_40;
LABEL_37:
              if ( v45 == ++m )
                goto LABEL_79;
            }
            if ( *(_DWORD *)(v49 + 12) != v43 || v40 != v49 )
              goto LABEL_37;
LABEL_67:
            v76 = m->m128i_i64[1];
            ++*(_DWORD *)((v76 & 0xFFFFFFFFFFFFFFFELL) + 4);
            if ( !v24 )
              goto LABEL_232;
            v77 = *((_DWORD *)v24 - 1);
            if ( v77 != *((_DWORD *)v24 - 2) )
              goto LABEL_69;
            v129 = (3 * v77 + 1) >> 1;
            v140 = 8 * v129 + 8;
            if ( 8 * v77 + 8 >= v140 || v77 >= v129 )
            {
              v12 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v300, "Overflow encountered when expanding vector");
              *v12 = (char *)off_1C63128;
              sub_2333C0(v12 + 1, v300);
              sub_233E40((__int64)v300);
              __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v141 = sub_186B270(v140);
            v142 = *((unsigned int *)v24 - 1);
            v133 = (_DWORD *)v141;
            v134 = v141 + 8;
            *(_DWORD *)(v141 + 4) = v142;
            v143 = 0;
            v144 = 8 * v142;
            if ( v144 )
            {
              do
              {
                *(_QWORD *)&v133[v143 / 4 + 2] = v24[v143 / 8];
                v143 += 8LL;
              }
              while ( v144 != v143 );
            }
LABEL_139:
            sub_186B220(v24 - 1);
            v137 = (unsigned int)v133[1];
            *v133 = v129;
            v138 = v137;
            v24 = (_QWORD *)v134;
            v80 = (__int64 *)(v134 + 8 * v137);
            v79 = v138 + 1;
LABEL_70:
            v28 = v260;
            *v80 = v76;
            *((_DWORD *)v24 - 1) = v79;
            v32 = *((_DWORD *)v260 + 2);
            if ( v32 < v264 )
            {
LABEL_29:
              v33 = *(char **)v28;
              continue;
            }
            break;
          }
LABEL_71:
          v27 = v260;
          v301 = v23;
          v28 = (char *)&v301;
          v303 = v24;
          v302 = v265;
          ptr = v20;
          v305 = v263;
          v306 = v267;
          v307 = v266;
          sub_DAD020(&v301, v260);
          v23 = v301;
          v24 = v303;
          v263 = v305;
          v265 = v302;
          v20 = (__m128i *)ptr;
          v267 = v306;
          v266 = v307;
          v261 = *((_DWORD *)v302 - 1);
          *((_DWORD *)v302 - 1) = v261 - 1;
          if ( v261 == 1 )
            goto LABEL_72;
        }
        v232 = *((_DWORD *)v33 + 3);
        v233 = 16LL * v263;
        v28 = v20[(unsigned __int64)v233 / 0x10].m128i_i8;
        v234 = 16LL * (v232 & (v263 - 1));
        v235 = v20[(unsigned __int64)v234 / 0x10].m128i_i8;
        if ( v234 == v233 )
        {
LABEL_302:
          if ( v235 != (char *)v20 )
          {
            v236 = (char *)v20;
            while ( 1 )
            {
              v27 = *(char **)v236;
              if ( *(_QWORD *)v236 > 1u )
              {
                if ( *((_DWORD *)v27 + 3) == v232 && v27 == v33 )
                  goto LABEL_314;
              }
              else if ( !v27 )
              {
                goto LABEL_18;
              }
              v236 += 16;
              if ( v235 == v236 )
                goto LABEL_18;
            }
          }
          goto LABEL_18;
        }
        v236 = v20[(unsigned __int64)v234 / 0x10].m128i_i8;
        while ( 1 )
        {
          while ( 1 )
          {
            v27 = *(char **)v236;
            if ( *(_QWORD *)v236 > 1u )
              break;
            if ( !v27 )
              goto LABEL_18;
            v236 += 16;
            if ( v28 == v236 )
              goto LABEL_302;
          }
          if ( *((_DWORD *)v27 + 3) == v232 && v27 == v33 )
            break;
          v236 += 16;
          if ( v28 == v236 )
            goto LABEL_302;
        }
LABEL_314:
        v241 = *((_QWORD *)v236 + 1);
        ++*(_DWORD *)((v241 & 0xFFFFFFFFFFFFFFFELL) + 4);
        if ( v24 )
        {
          v242 = *((_DWORD *)v24 - 1);
          if ( v242 == *((_DWORD *)v24 - 2) )
          {
            v249 = (3 * v242 + 1) >> 1;
            v250 = 8 * v249 + 8;
            if ( 8 * v242 + 8 >= v250 || v242 >= v249 )
            {
              v15 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v300, "Overflow encountered when expanding vector");
              *v15 = (char *)off_1C63128;
              sub_2333C0(v15 + 1, v300);
              sub_233E40((__int64)v300);
              __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v251 = sub_186B270(v250);
            v252 = *((unsigned int *)v24 - 1);
            v253 = (_DWORD *)v251;
            v254 = v251 + 8;
            *(_DWORD *)(v251 + 4) = v252;
            v255 = 0;
            v256 = 8 * v252;
            if ( v256 )
            {
              do
              {
                v27 = (char *)v24[v255 / 8];
                *(_QWORD *)&v253[v255 / 4 + 2] = v27;
                v255 += 8LL;
              }
              while ( v256 != v255 );
            }
            v28 = (char *)(v24 - 1);
            v262 = (_QWORD *)v254;
            sub_186B220(v24 - 1);
            v257 = (unsigned int)v253[1];
            *v253 = v249;
            v258 = v257;
            v24 = v262;
            v245 = &v262[v257];
            v244 = v258 + 1;
          }
          else
          {
            v243 = v242;
            v244 = v242 + 1;
            v245 = &v24[v243];
          }
        }
        else
        {
          v28 = (char *)&qword_18;
          v259 = (_QWORD *)sub_186B270(0x18u);
          *v259 = 2;
          v244 = 1;
          v24 = v259 + 1;
          v245 = v24;
        }
        *v245 = v241;
        *((_DWORD *)v24 - 1) = v244;
        i = *((_DWORD *)v265 - 1) - 1;
      }
    }
LABEL_72:
    v81 = v24[--*((_DWORD *)v24 - 1)];
    v82 = v81 & 0xFFFFFFFFFFFFFFFELL;
    v83 = sub_DA8B90(v269, v270, v81);
    ++*(_DWORD *)((v83 & 0xFFFFFFFFFFFFFFFELL) + 4);
    sub_DAAB00(v269, v270 & 0xFFFFFFFFFFFFFFFELL);
    sub_DAAB00(v269, v82);
    if ( v279 != ++v268 )
    {
      v25 = a3;
      v270 = v83;
      v26 = *a3;
      if ( (*((_BYTE *)a3 + 123) & 0x20) != 0 )
        goto LABEL_8;
      continue;
    }
    break;
  }
  m128i_i8 = v20[v263].m128i_i8;
  if ( m128i_i8 == (char *)v20 )
    goto LABEL_286;
LABEL_278:
  v225 = (__int64 *)v20;
  while ( (unsigned __int64)*v225 <= 1 )
  {
    v225 += 2;
    if ( v225 == (__int64 *)m128i_i8 )
      goto LABEL_285;
  }
  while ( v225 != (__int64 *)m128i_i8 )
  {
    sub_DAAB00(v23, v225[1] & 0xFFFFFFFFFFFFFFFELL);
    v226 = (char *)(v225 + 2);
    if ( v225 + 2 == (__int64 *)m128i_i8 )
      break;
    while ( 1 )
    {
      v225 = (__int64 *)v226;
      if ( *(_QWORD *)v226 > 1u )
        break;
      v226 += 16;
      if ( m128i_i8 == v226 )
        goto LABEL_285;
    }
  }
LABEL_285:
  if ( v24 )
  {
LABEL_286:
    v227 = *((unsigned int *)v24 - 1);
    v228 = v24;
    v229 = &v24[v227];
    if ( (_DWORD)v227 )
    {
      do
      {
        v230 = *v228++;
        sub_DAAB00(v23, v230 & 0xFFFFFFFFFFFFFFFELL);
      }
      while ( v228 != v229 );
    }
    *((_DWORD *)v24 - 1) = 0;
    if ( v20 )
      sub_186B220(v20);
    sub_186B220(v24 - 1);
    goto LABEL_291;
  }
  if ( v20 )
    sub_186B220(v20);
LABEL_291:
  if ( v265 )
    sub_186B220(v265 - 8);
  *a1 = a2;
  a1[1] = v83;
  return a1;
}

