__int64 __fastcall sub_65FFA0(__int64 a1, __int64 a2)
{
  char **v2; // r12
  char **exception; // rbp
  char **v4; // r12
  char **v5; // r12
  char **v6; // r12
  char **v7; // r12
  char **v8; // rbp
  char **v9; // rbp
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  unsigned int v18; // ebx
  unsigned __int64 v19; // r12
  _DWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rsi
  _DWORD *v26; // rdx
  _DWORD *v27; // rax
  unsigned int v28; // ebp
  unsigned int v29; // r12d
  unsigned __int64 v31; // r13
  __int64 v32; // rax
  unsigned __int64 v33; // rbp
  __int64 v34; // r14
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rsi
  _DWORD *v40; // rax
  _DWORD *v41; // rax
  _QWORD *v42; // r15
  unsigned __int64 *v43; // r14
  int v44; // r13d
  unsigned int v45; // r12d
  unsigned __int64 v46; // rbx
  unsigned __int64 *v47; // r15
  int v48; // edi
  __int64 v49; // rax
  unsigned __int64 *v50; // rsi
  unsigned __int64 *v51; // rax
  unsigned __int64 *v52; // rbp
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  unsigned __int64 *v55; // rax
  unsigned __int64 *v56; // rbp
  unsigned __int64 *v57; // rcx
  unsigned __int64 *v58; // r13
  unsigned __int64 *v59; // rdx
  unsigned __int64 v60; // rsi
  __int64 v61; // rax
  unsigned __int64 *v62; // rdi
  unsigned __int64 *v63; // rax
  unsigned __int64 v64; // rdx
  unsigned __int64 *v65; // r13
  unsigned __int64 *v66; // rbx
  unsigned __int64 v67; // rax
  unsigned __int64 *v68; // rdx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  _QWORD *v71; // rdx
  int v72; // eax
  _QWORD *v73; // rdx
  _QWORD *v74; // rcx
  unsigned __int64 v75; // rsi
  __int64 v76; // rdi
  bool v77; // zf
  __int64 v78; // rax
  unsigned __int64 *v79; // r12
  __int64 v80; // rax
  unsigned __int64 v81; // r15
  unsigned int v82; // ebx
  size_t v83; // rbp
  unsigned __int64 *v84; // r12
  int v85; // edx
  __int64 v86; // rbx
  unsigned __int64 *v87; // rsi
  unsigned __int64 *v88; // rbx
  unsigned __int64 *v89; // rbp
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rax
  __int64 v92; // rax
  unsigned __int64 *v93; // r13
  size_t v94; // r8
  unsigned __int64 *v95; // r10
  unsigned __int64 *v96; // r9
  unsigned __int64 *v97; // rax
  unsigned __int64 v98; // rdx
  __int64 v99; // rax
  unsigned __int64 *v100; // rsi
  unsigned __int64 *v101; // rax
  unsigned __int64 v102; // rdx
  unsigned __int64 *v103; // r9
  unsigned __int64 *v104; // rbx
  unsigned __int64 v105; // rdi
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rax
  _QWORD *v108; // rax
  _QWORD *v109; // rdx
  size_t *v110; // rcx
  int v111; // eax
  unsigned int v112; // eax
  __int64 v113; // rcx
  unsigned int v114; // ebp
  size_t v115; // rsi
  unsigned int *v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rbx
  void *v119; // rdi
  __int64 *v120; // rbx
  unsigned __int64 v121; // rbp
  __int64 v122; // rsi
  __int64 v123; // rdi
  int v124; // ebx
  __int64 v125; // rax
  _BYTE *v126; // rbp
  int v127; // eax
  __int64 v128; // rdx
  unsigned __int8 *v129; // rax
  unsigned int *v130; // rcx
  unsigned int v131; // edi
  __int64 v132; // rax
  unsigned __int64 *v133; // r8
  __int64 v134; // rcx
  unsigned __int64 *v135; // rsi
  unsigned __int64 *v136; // rdx
  unsigned int *v137; // r9
  unsigned __int64 *v138; // rbx
  unsigned __int64 *v139; // rbp
  unsigned __int64 v140; // rax
  unsigned int v141; // eax
  __int64 v142; // rcx
  unsigned int v143; // r12d
  unsigned int v144; // ecx
  unsigned int *v145; // rax
  __int64 v146; // rcx
  __int64 v147; // r12
  int v148; // edx
  int v149; // r8d
  int v150; // r9d
  __int64 v151; // rsi
  _DWORD *v152; // rax
  _DWORD *v153; // rax
  __int64 v154; // rcx
  __int64 v155; // r12
  _QWORD *v156; // rax
  unsigned int v157; // ebp
  __int64 v158; // rdx
  __int64 *v159; // rdx
  unsigned __int64 *j; // rax
  unsigned int *v161; // rdx
  _DWORD *v162; // rsi
  unsigned int v163; // eax
  unsigned int v164; // ecx
  unsigned int v165; // edx
  unsigned int v166; // ecx
  _QWORD *v167; // rax
  unsigned int *v168; // rax
  _QWORD *v169; // rbx
  _DWORD *v170; // rax
  __int64 v171; // r13
  int v172; // edx
  int v173; // r8d
  int v174; // r9d
  __int64 v175; // rsi
  _DWORD *v176; // rax
  int v177; // edx
  unsigned int v178; // r15d
  __int64 v179; // rax
  unsigned int v180; // r13d
  unsigned int v181; // edx
  __int64 v182; // r8
  __int64 v183; // rax
  _BYTE *v184; // rcx
  __int64 v185; // rsi
  _BYTE *v186; // rax
  char v187; // di
  __int64 v188; // rax
  unsigned int *v189; // rdx
  __int64 v190; // r13
  __int64 v191; // rdi
  _QWORD *v192; // rsi
  _QWORD *v193; // rax
  unsigned int v194; // eax
  __int64 v195; // rsi
  int v196; // eax
  _QWORD *v197; // rsi
  _QWORD *v198; // rdi
  __int64 v199; // rax
  size_t *v200; // r15
  int v201; // eax
  int v202; // r8d
  int v203; // r9d
  size_t v204; // rdx
  int v205; // ecx
  __int64 v206; // rsi
  _DWORD *v207; // rax
  int v208; // eax
  _DWORD *v209; // rax
  unsigned int v210; // r8d
  size_t v211; // rsi
  _DWORD *v212; // rax
  __int64 v213; // rsi
  unsigned int *v214; // rdx
  _QWORD *v215; // rbx
  _QWORD *v216; // rax
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // rax
  unsigned __int64 *v220; // r15
  unsigned __int64 v221; // r13
  int v222; // edx
  __int64 v223; // rcx
  int v224; // r8d
  int v225; // r9d
  __int64 v226; // rsi
  _DWORD *v227; // rax
  _DWORD *v228; // rax
  __int64 v229; // r13
  _DWORD *v230; // rax
  int v231; // edx
  int v232; // ecx
  int v233; // r8d
  int v234; // r9d
  __int64 v235; // rsi
  _DWORD *v236; // rax
  _DWORD *v237; // rax
  unsigned int v238; // r13d
  unsigned int v239; // edx
  unsigned int *v240; // rdx
  __int64 v241; // rdx
  int v242; // ebp
  _QWORD *v243; // rax
  unsigned __int64 *i; // rdx
  unsigned int *v245; // r9
  __int64 v246; // r15
  __int16 v247; // cx
  int v248; // edx
  int v249; // ecx
  int v250; // r8d
  int v251; // r9d
  __int64 v252; // rsi
  _DWORD *v253; // rax
  int v254; // ecx
  _DWORD *v255; // rax
  int v256; // edx
  int v257; // ecx
  int v258; // r8d
  int v259; // r9d
  __int64 v260; // rsi
  _DWORD *v261; // rax
  int v262; // ecx
  _DWORD *v263; // rax
  __int64 v264; // rcx
  __int64 v265; // rcx
  __int64 v266; // r13
  _QWORD *v267; // rcx
  unsigned int v268; // eax
  _DWORD *v269; // rax
  unsigned int v270; // r15d
  unsigned int v271; // edx
  unsigned int *v272; // rax
  _QWORD *v273; // rax
  __int64 v274; // rax
  int v275; // eax
  int v276; // edx
  int v277; // r8d
  int v278; // r9d
  unsigned __int64 *v279; // rcx
  int v280; // edi
  unsigned __int64 v281; // rsi
  _DWORD *v282; // rax
  int v283; // eax
  int v284; // edi
  _DWORD *v285; // rax
  __int64 v286; // rdx
  unsigned int *v287; // r13
  __int64 v288; // rax
  _DWORD *v289; // rdx
  __int64 v290; // r15
  int v291; // edx
  int v292; // r8d
  int v293; // r9d
  __int64 v294; // rsi
  _DWORD *v295; // rax
  _DWORD *v296; // rax
  __int64 v297; // rcx
  __int64 v298; // r15
  _QWORD *v299; // rdi
  unsigned int v300; // eax
  unsigned int v301; // ecx
  unsigned int v302; // edx
  _DWORD *v303; // rax
  _QWORD *v304; // rax
  _QWORD *v305; // rax
  unsigned int v306; // edx
  __int64 v307; // rsi
  int v308; // edx
  unsigned int **v309; // rsi
  __int64 v310; // rax
  int v311; // eax
  int v312; // edx
  int v313; // r8d
  int v314; // r9d
  unsigned __int64 *v315; // rcx
  int v316; // edi
  unsigned __int64 v317; // rsi
  _DWORD *v318; // rax
  int v319; // eax
  int v320; // edi
  _DWORD *v321; // rax
  unsigned int v322; // r8d
  size_t v323; // rsi
  _DWORD *v324; // rdx
  __int64 v325; // rsi
  _QWORD *v326; // rax
  int v327; // [rsp+0h] [rbp-1E8h]
  int v328; // [rsp+8h] [rbp-1E0h]
  unsigned __int64 *v329; // [rsp+8h] [rbp-1E0h]
  unsigned __int64 *v330; // [rsp+8h] [rbp-1E0h]
  unsigned int *v331; // [rsp+8h] [rbp-1E0h]
  unsigned int *v332; // [rsp+10h] [rbp-1D8h]
  int v333; // [rsp+18h] [rbp-1D0h]
  __int64 v334; // [rsp+18h] [rbp-1D0h]
  __int64 v335; // [rsp+18h] [rbp-1D0h]
  unsigned __int64 *v336; // [rsp+18h] [rbp-1D0h]
  _QWORD *v337; // [rsp+18h] [rbp-1D0h]
  int v338; // [rsp+20h] [rbp-1C8h]
  unsigned int v339; // [rsp+24h] [rbp-1C4h]
  unsigned int *v340; // [rsp+28h] [rbp-1C0h]
  size_t v341; // [rsp+30h] [rbp-1B8h]
  int v342; // [rsp+38h] [rbp-1B0h]
  unsigned __int64 v343; // [rsp+38h] [rbp-1B0h]
  unsigned __int64 *v344; // [rsp+38h] [rbp-1B0h]
  _QWORD *v345; // [rsp+38h] [rbp-1B0h]
  unsigned __int64 *v346; // [rsp+40h] [rbp-1A8h]
  unsigned __int64 *v347; // [rsp+40h] [rbp-1A8h]
  unsigned __int64 *v348; // [rsp+40h] [rbp-1A8h]
  unsigned int *v349; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 *v350; // [rsp+50h] [rbp-198h]
  unsigned __int64 *v351; // [rsp+58h] [rbp-190h]
  unsigned __int64 *v352; // [rsp+58h] [rbp-190h]
  __int64 v353; // [rsp+60h] [rbp-188h]
  unsigned __int64 *v354; // [rsp+68h] [rbp-180h]
  unsigned __int64 *v355; // [rsp+68h] [rbp-180h]
  unsigned int v358; // [rsp+80h] [rbp-168h]
  unsigned int v359; // [rsp+84h] [rbp-164h]
  unsigned int *v360; // [rsp+88h] [rbp-160h]
  __int64 v361; // [rsp+90h] [rbp-158h]
  __int64 v362; // [rsp+98h] [rbp-150h] BYREF
  __int64 v363; // [rsp+B0h] [rbp-138h] BYREF
  _DWORD *v364; // [rsp+B8h] [rbp-130h]
  __int64 v365; // [rsp+C0h] [rbp-128h]
  __int64 *v366; // [rsp+C8h] [rbp-120h]
  __int64 *v367; // [rsp+D0h] [rbp-118h]
  __int64 v368[4]; // [rsp+E0h] [rbp-108h] BYREF
  char v369[8]; // [rsp+100h] [rbp-E8h] BYREF
  __int64 v370; // [rsp+108h] [rbp-E0h]
  __int64 *v371; // [rsp+110h] [rbp-D8h]
  __int64 v372; // [rsp+120h] [rbp-C8h]
  char v373[8]; // [rsp+130h] [rbp-B8h] BYREF
  __int64 v374; // [rsp+138h] [rbp-B0h]
  void *v375; // [rsp+158h] [rbp-90h]
  __m128 v376; // [rsp+170h] [rbp-78h] BYREF
  void *ptr; // [rsp+198h] [rbp-50h]

  v11 = a1 + 32;
  v12 = *(_QWORD *)(a2 + 32);
  v362 = a2;
  v353 = v11;
  v361 = sub_15D1F10(v12);
  v13 = *(_QWORD *)sub_15F6BE0(v11, v361);
  if ( !v13 || *(_DWORD *)(v13 - 4) <= 1u )
    return 1;
  v14 = sub_15FCC40(v11, *(_QWORD *)(a2 + 16));
  v364 = nullptr;
  v360 = (unsigned int *)v14;
  v363 = v14;
  v15 = *(_QWORD *)(a1 + 176);
  v366 = &v362;
  v16 = *(_DWORD *)(v15 + 68);
  v17 = *(_DWORD *)(v15 + 56);
  v365 = a1;
  v367 = &v363;
  v358 = v16;
  v359 = v17;
  if ( v16 < v17 )
  {
    v18 = v16;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v15 + 8LL * v18 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !*(_WORD *)(v19 + 4) )
      {
        v20 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
        if ( !v20 )
          goto LABEL_8;
        if ( *v20 )
          goto LABEL_8;
        if ( v20[1] != 5 )
          goto LABEL_8;
        v31 = v19 + 32;
        v32 = 8LL * *(unsigned int *)(v19 + 24);
        v33 = v19 + 32 + v32;
        if ( !v32 )
          goto LABEL_8;
        do
        {
          v34 = *(_QWORD *)v31;
          if ( !*(_WORD *)(*(_QWORD *)v31 + 4LL) )
          {
            if ( (v35 = sub_15F0200(v11), !*(_WORD *)(v34 + 4))
              && (v39 = *(_QWORD *)(v34 + 16), (v40 = *(_DWORD **)(v39 + 24)) != nullptr)
              && v35 == *v40
              && v40[1] == 1
              || (v35 = sub_15F0200(v11), !*(_WORD *)(v34 + 4))
              && (v39 = *(_QWORD *)(v34 + 16), (v41 = *(_DWORD **)(v39 + 24)) != nullptr)
              && v35 == *v41
              && v41[1] == 2 )
            {
              if ( *(_QWORD *)(v34 + 32) == *(_QWORD *)(a2 + 32)
                && v360 == (unsigned int *)sub_15F0BB0(
                                             v11,
                                             v39,
                                             v35,
                                             v36,
                                             v37,
                                             v38,
                                             v327,
                                             v328,
                                             (_DWORD)v332,
                                             v333,
                                             v338,
                                             (_DWORD)v340,
                                             v341,
                                             v342,
                                             (_DWORD)v346,
                                             (_DWORD)v349,
                                             (char)v350) )
              {
                goto LABEL_35;
              }
            }
          }
          v31 += 8LL;
        }
        while ( v33 != v31 );
        if ( !*(_WORD *)(v19 + 4) )
        {
LABEL_8:
          v21 = sub_15F0200(v11);
          if ( !*(_WORD *)(v19 + 4)
            && (v25 = *(_QWORD *)(v19 + 16), (v26 = *(_DWORD **)(v25 + 24)) != nullptr)
            && v21 == *v26
            && v26[1] == 1 )
          {
            if ( *(_QWORD *)(v19 + 32) != *(_QWORD *)(a2 + 32) )
              goto LABEL_17;
          }
          else
          {
            LODWORD(v26) = sub_15F0200(v11);
            if ( *(_WORD *)(v19 + 4) )
              goto LABEL_17;
            v25 = *(_QWORD *)(v19 + 16);
            v27 = *(_DWORD **)(v25 + 24);
            if ( !v27 )
              goto LABEL_17;
            if ( (_DWORD)v26 != *v27 || v27[1] != 2 )
            {
LABEL_14:
              if ( !*v27 && v27[1] == 8 )
              {
                v28 = *(_DWORD *)(v19 + 24);
                if ( v28 == 1 )
                {
                  v147 = *(_QWORD *)(v19 + 32);
                  if ( !*(_WORD *)(v147 + 4) )
                  {
                    if ( (v148 = sub_15F0200(v11), !*(_WORD *)(v147 + 4))
                      && (v151 = *(_QWORD *)(v147 + 16), (v152 = *(_DWORD **)(v151 + 24)) != nullptr)
                      && v148 == *v152
                      && v152[1] == 1
                      || (v148 = sub_15F0200(v11), !*(_WORD *)(v147 + 4))
                      && (v151 = *(_QWORD *)(v147 + 16), (v153 = *(_DWORD **)(v151 + 24)) != nullptr)
                      && v148 == *v153
                      && v153[1] == 2 )
                    {
                      v154 = *(_QWORD *)(v147 + 32);
                      if ( *(_QWORD *)(a2 + 32) == v154 )
                      {
                        v155 = sub_15F0BB0(
                                 v11,
                                 v151,
                                 v148,
                                 v154,
                                 v149,
                                 v150,
                                 v327,
                                 v328,
                                 (_DWORD)v332,
                                 v333,
                                 v338,
                                 (_DWORD)v340,
                                 v341,
                                 v342,
                                 (_DWORD)v346,
                                 (_DWORD)v349,
                                 (char)v350);
                        if ( v360 != (unsigned int *)v155 )
                        {
                          v156 = v364;
                          if ( v364 )
                          {
                            v157 = *(v364 - 1);
                            if ( v157 == *(v364 - 2) )
                            {
                              v238 = (3 * v157 + 1) >> 1;
                              v239 = 8 * v238 + 8;
                              if ( 8 * v157 + 8 >= v239 || v157 >= v238 )
                              {
                                exception = (char **)__cxa_allocate_exception(0x28u);
                                sub_24ABB0((__int64 *)&v376, "Overflow encountered when expanding vector");
                                *exception = (char *)off_1C63128;
                                sub_2333C0(exception + 1, &v376);
                                sub_233E40((__int64)&v376);
                                __cxa_throw(
                                  exception,
                                  (struct type_info *)&`typeinfo for'default_exception,
                                  (void (*)(void *))sub_230E50);
                              }
                              v240 = (unsigned int *)sub_186B300(v364 - 2, v239);
                              v156 = v240 + 2;
                              *v240 = v238;
                              v241 = v240[1];
                              v364 = v156;
                              v242 = v241;
                              v159 = &v156[v241];
                              v28 = v242 + 1;
                            }
                            else
                            {
                              v158 = v157;
                              v28 = v157 + 1;
                              v159 = (__int64 *)&v364[2 * v158];
                            }
                          }
                          else
                          {
                            v243 = (_QWORD *)sub_186B270(0x18u);
                            *v243 = 2;
                            v156 = v243 + 1;
                            v364 = v156;
                            v159 = v156;
                          }
                          *v159 = v155;
                          *((_DWORD *)v156 - 1) = v28;
                        }
                      }
                    }
                  }
                }
              }
              goto LABEL_17;
            }
            v22 = *(_QWORD *)(v19 + 32);
            if ( *(_QWORD *)(a2 + 32) != v22 )
              goto LABEL_17;
          }
          if ( v360 == (unsigned int *)sub_15F0BB0(
                                         v11,
                                         v25,
                                         (_DWORD)v26,
                                         v22,
                                         v23,
                                         v24,
                                         v327,
                                         v328,
                                         (_DWORD)v332,
                                         v333,
                                         v338,
                                         (_DWORD)v340,
                                         v341,
                                         v342,
                                         (_DWORD)v346,
                                         (_DWORD)v349,
                                         (char)v350) )
          {
LABEL_35:
            v42 = v364;
            v29 = 1;
            goto LABEL_36;
          }
          if ( !*(_WORD *)(v19 + 4) )
          {
            v27 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
            if ( v27 )
              goto LABEL_14;
          }
        }
      }
LABEL_17:
      if ( v17 == ++v18 )
        break;
      v15 = *(_QWORD *)(a1 + 176);
    }
  }
  v43 = (unsigned __int64 *)sub_186B270(0x80u);
  *(_OWORD *)v43 = 0;
  *((_OWORD *)v43 + 1) = 0;
  *((_OWORD *)v43 + 2) = 0;
  *((_OWORD *)v43 + 3) = 0;
  *((_OWORD *)v43 + 4) = 0;
  *((_OWORD *)v43 + 5) = 0;
  *((_OWORD *)v43 + 6) = 0;
  *((_OWORD *)v43 + 7) = 0;
  if ( v358 < v17 )
  {
    LODWORD(v340) = 0;
    v44 = 0;
    v339 = 8;
    while ( 1 )
    {
      v45 = 2 * v339;
      v343 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL * v358 + 80);
      v46 = v343 & 0xFFFFFFFFFFFFFFF8LL;
      if ( 3 * v339 < 4 * (v44 + (int)v340) )
      {
        v341 = 16LL * v45;
        v55 = (unsigned __int64 *)sub_186B270(v341);
        v56 = v55;
        v57 = (unsigned __int64 *)((char *)v55 + v341);
        if ( v45 )
        {
          if ( (v341 & 0x10) == 0 || (*(_OWORD *)v55 = 0, v55 += 2, v57 != v55) )
          {
            do
            {
              *(_OWORD *)v55 = 0;
              v55 += 4;
              *((_OWORD *)v55 - 1) = 0;
            }
            while ( v57 != v55 );
          }
          v47 = v57;
          LODWORD(v332) = v45 - 1;
          v334 = v339;
          v329 = &v43[2 * v339];
LABEL_64:
          v58 = v43 + 1;
          while ( 2 )
          {
            v60 = *(v58 - 1);
            if ( v60 > 1 )
            {
              v61 = 16LL * (*(_DWORD *)(v60 + 12) & (unsigned int)v332);
              v62 = &v56[(unsigned __int64)v61 / 8];
              if ( v341 == v61 )
              {
LABEL_84:
                if ( v56 == v62 )
                {
LABEL_235:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v68 = v56;
                while ( *v68 )
                {
                  v68 += 2;
                  if ( v62 == v68 )
                    goto LABEL_235;
                }
                *v68 = v60;
                if ( v58 != v68 + 1 )
                {
                  v69 = v68[1];
                  if ( v69 )
                  {
                    v348 = v68;
                    sub_186B220((void *)(v69 - 8));
                    v68 = v348;
                  }
                  v68[1] = 0;
                  v68[1] = *v58;
                  *v58 = 0;
                }
              }
              else
              {
                v63 = &v56[(unsigned __int64)v61 / 8];
                while ( *v63 )
                {
                  v63 += 2;
                  if ( v47 == v63 )
                    goto LABEL_84;
                }
                *v63 = v60;
                if ( v58 != v63 + 1 )
                {
                  v64 = v63[1];
                  if ( v64 )
                  {
                    v347 = v63;
                    sub_186B220((void *)(v64 - 8));
                    v63 = v347;
                  }
                  v63[1] = 0;
                  v63[1] = *v58;
                  v59 = v58 + 2;
                  *v58 = 0;
                  if ( v329 == v58 + 1 )
                    goto LABEL_76;
                  goto LABEL_66;
                }
              }
            }
            v59 = v58 + 2;
            if ( v329 == v58 + 1 )
              goto LABEL_76;
LABEL_66:
            v58 = v59;
            continue;
          }
        }
        LODWORD(v332) = -1;
        v47 = v55;
        v334 = v339;
        v329 = &v43[2 * v339];
        if ( v329 != v43 )
          goto LABEL_64;
LABEL_76:
        if ( v43 )
        {
          v65 = v43;
          if ( v339 )
          {
            v66 = &v43[2 * v334];
            do
            {
              while ( 1 )
              {
                v67 = v65[1];
                if ( !v67 )
                  break;
                v65 += 2;
                sub_186B220((void *)(v67 - 8));
                if ( v66 == v65 )
                  goto LABEL_81;
              }
              v65 += 2;
            }
            while ( v66 != v65 );
LABEL_81:
            v46 = v343 & 0xFFFFFFFFFFFFFFF8LL;
            v45 = 2 * v339;
          }
          sub_186B220(v43);
        }
        v339 = v45;
        v43 = v56;
        v44 = 0;
      }
      else
      {
        LODWORD(v332) = v339 - 1;
        v47 = &v43[2 * v339];
        v341 = 16LL * v339;
      }
      v48 = *(_DWORD *)(v46 + 12);
      v49 = 16LL * (v48 & (unsigned int)v332);
      v50 = &v43[(unsigned __int64)v49 / 8];
      if ( v49 == v341 )
      {
        v52 = nullptr;
LABEL_50:
        if ( v50 == v43 )
        {
LABEL_58:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v51 = v43;
        while ( 1 )
        {
          while ( 1 )
          {
            v54 = *v51;
            if ( *v51 <= 1 )
              break;
            if ( *(_DWORD *)(v54 + 12) == v48 && v54 == v46 )
              goto LABEL_229;
            v51 += 2;
            if ( v50 == v51 )
              goto LABEL_58;
          }
          if ( !v54 )
            break;
          v52 = v51;
          v51 += 2;
          if ( v50 == v51 )
            goto LABEL_58;
        }
        if ( v52 )
          --v44;
        else
          v52 = v51;
        v70 = v52[1];
        *v52 = v46;
        if ( !v70 )
          goto LABEL_96;
      }
      else
      {
        v51 = &v43[(unsigned __int64)v49 / 8];
        v52 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v53 = *v51;
            if ( *v51 <= 1 )
              break;
            if ( *(_DWORD *)(v53 + 12) == v48 && v53 == v46 )
            {
LABEL_229:
              v73 = (_QWORD *)v51[1];
              v52 = v51;
              if ( !v73 )
                goto LABEL_97;
              v141 = *((_DWORD *)v73 - 1);
              if ( v141 == *((_DWORD *)v73 - 2) )
              {
                v143 = (3 * v141 + 1) >> 1;
                v144 = 8 * v143 + 8;
                if ( 8 * v141 + 8 >= v144 || v141 >= v143 )
                {
                  v9 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)&v376, "Overflow encountered when expanding vector");
                  *v9 = (char *)off_1C63128;
                  sub_2333C0(v9 + 1, &v376);
                  sub_233E40((__int64)&v376);
                  __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v145 = (unsigned int *)sub_186B300(v73 - 1, v144);
                v146 = v145[1];
                v73 = v145 + 2;
                *v145 = v143;
                v52[1] = (unsigned __int64)(v145 + 2);
                LODWORD(v145) = v146;
                v74 = &v73[v146];
                v72 = (_DWORD)v145 + 1;
              }
              else
              {
                v142 = v141;
                v72 = v141 + 1;
                v74 = &v73[v142];
              }
              goto LABEL_98;
            }
            v51 += 2;
            if ( v51 == v47 )
              goto LABEL_50;
          }
          if ( !v53 )
            break;
          v52 = v51;
          v51 += 2;
          if ( v51 == v47 )
            goto LABEL_50;
        }
        if ( v52 )
          --v44;
        else
          v52 = v51;
        v70 = v52[1];
        *v52 = v46;
        if ( !v70 )
          goto LABEL_96;
      }
      sub_186B220((void *)(v70 - 8));
LABEL_96:
      v52[1] = 0;
      LODWORD(v340) = (_DWORD)v340 + 1;
LABEL_97:
      v71 = (_QWORD *)sub_186B270(0x18u);
      *v71 = 2;
      v72 = 1;
      v73 = v71 + 1;
      v52[1] = (unsigned __int64)v73;
      v74 = v73;
LABEL_98:
      *v74 = 0;
      *((_DWORD *)v73 - 1) = v72;
      v376 = _mm_loadh_ps((const double *)a1);
      if ( v343 > 7 )
        ++*(_DWORD *)(v46 + 8);
      v349 = (unsigned int *)&v376;
      sub_167EE60(v369, &v376, 1, 0, 0);
      v75 = v376.m128_u64[0];
      if ( v376.m128_u64[0] )
      {
        v76 = v376.m128_i64[1];
        v77 = (*(_DWORD *)(v376.m128_u64[0] + 8))-- == 1;
        if ( v77 )
          sub_15D7BC0(v76, v75);
      }
      v346 = (unsigned __int64 *)v373;
      sub_167F5F0(v373, v369);
      sub_167F5B0(&v376, v369);
      while ( (unsigned __int8)sub_167E490(v373, &v376) )
      {
        v78 = sub_167E460(v373);
        v341 = v78;
        if ( !*(_WORD *)(v78 + 4) )
        {
          v79 = (unsigned __int64 *)(v78 + 32);
          v80 = *(unsigned int *)(v78 + 24);
          v344 = &v79[v80];
          if ( v80 * 8 )
          {
            v330 = v79;
            do
            {
              v81 = *v330;
              v82 = 2 * v339;
              if ( 3 * v339 < 4 * (v44 + (int)v340) )
              {
                v83 = 16LL * v82;
                v92 = sub_186B270(v83);
                v93 = (unsigned __int64 *)v92;
                v94 = v92 + v83;
                if ( v82 )
                {
                  if ( (v83 & 0x10) == 0 || (v92 += 16, *(_OWORD *)(v92 - 16) = 0, v94 != v92) )
                  {
                    do
                    {
                      v92 += 32;
                      *(_OWORD *)(v92 - 32) = 0;
                      *(_OWORD *)(v92 - 16) = 0;
                    }
                    while ( v94 != v92 );
                  }
                  v84 = (unsigned __int64 *)v94;
                  LODWORD(v332) = v82 - 1;
                  v335 = v339;
                  v95 = &v43[2 * v339];
LABEL_133:
                  v96 = v43 + 1;
                  while ( 2 )
                  {
                    v98 = *(v96 - 1);
                    if ( v98 > 1 )
                    {
                      v99 = 16LL * (*(_DWORD *)(v98 + 12) & (unsigned int)v332);
                      v100 = &v93[(unsigned __int64)v99 / 8];
                      if ( v83 == v99 )
                      {
LABEL_153:
                        if ( v93 == v100 )
                        {
LABEL_170:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v101 = v93;
                        while ( *v101 )
                        {
                          v101 += 2;
                          if ( v100 == v101 )
                            goto LABEL_170;
                        }
                        *v101 = v98;
                        if ( v96 != v101 + 1 )
                        {
                          v106 = v101[1];
                          if ( v106 )
                          {
                            v355 = v95;
                            v352 = v101;
                            v350 = v96;
                            sub_186B220((void *)(v106 - 8));
                            v95 = v355;
                            v101 = v352;
                            v96 = v350;
                          }
                          goto LABEL_144;
                        }
                      }
                      else
                      {
                        v101 = &v93[(unsigned __int64)v99 / 8];
                        while ( *v101 )
                        {
                          v101 += 2;
                          if ( v101 == v84 )
                            goto LABEL_153;
                        }
                        *v101 = v98;
                        if ( v96 != v101 + 1 )
                        {
                          v102 = v101[1];
                          if ( v102 )
                          {
                            v354 = v95;
                            v351 = v96;
                            v350 = v101;
                            sub_186B220((void *)(v102 - 8));
                            v95 = v354;
                            v96 = v351;
                            v101 = v350;
                          }
LABEL_144:
                          v101[1] = 0;
                          v101[1] = *v96;
                          v97 = v96 + 2;
                          v103 = v96 + 1;
                          *(v103 - 1) = 0;
                          if ( v95 == v103 )
                            goto LABEL_145;
LABEL_135:
                          v96 = v97;
                          continue;
                        }
                      }
                    }
                    break;
                  }
                  v97 = v96 + 2;
                  if ( v95 == v96 + 1 )
                    goto LABEL_145;
                  goto LABEL_135;
                }
                LODWORD(v332) = -1;
                v84 = (unsigned __int64 *)v92;
                v335 = v339;
                v95 = &v43[2 * v339];
                if ( v43 != v95 )
                  goto LABEL_133;
LABEL_145:
                if ( v43 )
                {
                  v336 = &v43[2 * v335];
                  if ( v339 )
                  {
                    LOBYTE(v350) = 2 * v339;
                    v104 = v43;
                    do
                    {
                      while ( 1 )
                      {
                        v105 = v104[1];
                        if ( !v105 )
                          break;
                        v104 += 2;
                        sub_186B220((void *)(v105 - 8));
                        if ( v336 == v104 )
                          goto LABEL_150;
                      }
                      v104 += 2;
                    }
                    while ( v336 != v104 );
LABEL_150:
                    v82 = 2 * v339;
                  }
                  sub_186B220(v43);
                }
                v43 = v93;
                v339 = v82;
                v44 = 0;
              }
              else
              {
                v83 = 16LL * v339;
                LODWORD(v332) = v339 - 1;
                v84 = &v43[v83 / 8];
              }
              v85 = *(_DWORD *)(v81 + 12);
              v86 = 16LL * (v85 & (unsigned int)v332);
              v87 = &v43[(unsigned __int64)v86 / 8];
              if ( v83 == v86 )
              {
                v89 = nullptr;
LABEL_119:
                if ( v43 == v87 )
                {
LABEL_127:
                  sub_1872CE0("");
                  sub_1873130(114, 461);
                }
                v88 = v43;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v91 = *v88;
                    if ( *v88 <= 1 )
                      break;
                    if ( *(_DWORD *)(v91 + 12) == v85 && v81 == v91 )
                      goto LABEL_175;
                    v88 += 2;
                    if ( v87 == v88 )
                      goto LABEL_127;
                  }
                  if ( !v91 )
                    break;
                  v89 = v88;
                  v88 += 2;
                  if ( v87 == v88 )
                    goto LABEL_127;
                }
                if ( v89 )
                  --v44;
                else
                  v89 = v88;
                v107 = v89[1];
                *v89 = v81;
                if ( !v107 )
                  goto LABEL_166;
              }
              else
              {
                v88 = &v43[(unsigned __int64)v86 / 8];
                v89 = nullptr;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v90 = *v88;
                    if ( *v88 <= 1 )
                      break;
                    if ( *(_DWORD *)(v90 + 12) == v85 && v81 == v90 )
                    {
LABEL_175:
                      v109 = (_QWORD *)v88[1];
                      if ( !v109 )
                      {
                        v89 = v88;
                        goto LABEL_167;
                      }
                      v112 = *((_DWORD *)v109 - 1);
                      if ( v112 == *((_DWORD *)v109 - 2) )
                      {
                        v114 = (3 * v112 + 1) >> 1;
                        v115 = 8 * v114 + 8;
                        if ( 8 * v112 + 8 >= (unsigned int)v115 || v112 >= v114 )
                        {
                          v8 = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0(v368, "Overflow encountered when expanding vector");
                          *v8 = (char *)off_1C63128;
                          sub_2333C0(v8 + 1, v368);
                          sub_233E40((__int64)v368);
                          __cxa_throw(
                            v8,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v116 = (unsigned int *)sub_186B300(v109 - 1, v115);
                        v117 = v116[1];
                        v109 = v116 + 2;
                        *v116 = v114;
                        v88[1] = (unsigned __int64)(v116 + 2);
                        LODWORD(v116) = v117;
                        v110 = &v109[v117];
                        v111 = (_DWORD)v116 + 1;
                      }
                      else
                      {
                        v113 = v112;
                        v111 = v112 + 1;
                        v110 = &v109[v113];
                      }
                      goto LABEL_168;
                    }
                    v88 += 2;
                    if ( v84 == v88 )
                      goto LABEL_119;
                  }
                  if ( !v90 )
                    break;
                  v89 = v88;
                  v88 += 2;
                  if ( v84 == v88 )
                    goto LABEL_119;
                }
                if ( v89 )
                  --v44;
                else
                  v89 = v88;
                v107 = v89[1];
                *v89 = v81;
                if ( !v107 )
                  goto LABEL_166;
              }
              sub_186B220((void *)(v107 - 8));
LABEL_166:
              v89[1] = 0;
              LODWORD(v340) = (_DWORD)v340 + 1;
LABEL_167:
              v108 = (_QWORD *)sub_186B270(0x18u);
              v109 = v108 + 1;
              v89[1] = (unsigned __int64)(v108 + 1);
              *v108 = 2;
              v110 = v108 + 1;
              v111 = 1;
LABEL_168:
              ++v330;
              *v110 = v341;
              *((_DWORD *)v109 - 1) = v111;
            }
            while ( v344 != v330 );
          }
        }
        sub_167EA90(v373);
      }
      if ( ptr )
        sub_186B220(ptr);
      if ( v376.m128_u64[1] )
        sub_186B220((void *)(v376.m128_u64[1] - 8));
      if ( v375 )
        sub_186B220(v375);
      if ( v374 )
        sub_186B220((void *)(v374 - 8));
      v118 = v372;
      if ( v372 )
      {
        v119 = *(void **)(v372 + 16);
        if ( v119 )
          memset(v119, 0, 4LL * *(unsigned int *)(v372 + 12));
        *(_DWORD *)(v118 + 8) = 0;
      }
      v120 = v371;
      if ( v371 )
      {
        v121 = (unsigned __int64)&v371[*((unsigned int *)v371 - 1)];
        if ( (unsigned __int64)v371 >= v121 )
          goto LABEL_206;
        do
        {
          while ( 1 )
          {
            v122 = *v120;
            if ( *v120 )
            {
              v123 = v370;
              v77 = (*(_DWORD *)(v122 + 8))-- == 1;
              if ( v77 )
                break;
            }
            if ( (unsigned __int64)++v120 >= v121 )
              goto LABEL_205;
          }
          sub_15D7BC0(v123, v122);
          ++v120;
        }
        while ( (unsigned __int64)v120 < v121 );
LABEL_205:
        v120 = v371;
        if ( v371 )
LABEL_206:
          sub_186B220(v120 - 1);
      }
      if ( v359 == ++v358 )
        goto LABEL_208;
    }
  }
  v339 = 8;
LABEL_208:
  if ( v364 )
    v124 = *(v364 - 1);
  else
    v124 = 0;
  v125 = sub_186B270(0x28u);
  *(_BYTE *)(v125 + 8) = 0;
  v126 = (_BYTE *)(v125 + 8);
  *(_DWORD *)(v125 + 12) = v124;
  *(_QWORD *)(v125 + 16) = a2;
  *(_QWORD *)v125 = 0x100000002LL;
  v127 = 1;
LABEL_211:
  v128 = (unsigned int)(v127 - 1);
  v129 = &v126[16 * v128];
  v29 = *v129;
  if ( (_BYTE)v29 )
  {
    v162 = v364;
    v163 = *((_DWORD *)v129 + 1);
    *((_DWORD *)v126 - 1) = v128;
    if ( v162 )
    {
      v164 = *(v162 - 1);
      if ( v163 < v164 )
      {
        v165 = v164 - 1;
        if ( (((_BYTE)v164 - (_BYTE)v163) & 1) == 0 || (v165 = v164 - 2, v163 != v164 - 1) )
        {
          do
          {
            v166 = v165 - 1;
            v165 -= 2;
          }
          while ( v163 != v166 );
        }
        *(v162 - 1) = v163;
      }
    }
    goto LABEL_289;
  }
  v130 = *((unsigned int **)v129 + 1);
  *v129 = 1;
  v131 = v130[3];
  v331 = v130;
  v132 = 16LL * v339;
  v133 = &v43[(unsigned __int64)v132 / 8];
  v134 = 16LL * (v131 & (v339 - 1));
  v135 = &v43[(unsigned __int64)v134 / 8];
  if ( v134 == v132 )
  {
LABEL_417:
    if ( v135 != v43 )
    {
      for ( i = v43; v135 != i; i += 2 )
      {
        v245 = (unsigned int *)*i;
        if ( *i > 1 )
        {
          if ( v245[3] == v131 && v331 == v245 )
            goto LABEL_275;
        }
        else if ( !v245 )
        {
          break;
        }
      }
    }
LABEL_219:
    v42 = v364;
    goto LABEL_220;
  }
  v136 = &v43[(unsigned __int64)v134 / 8];
  while ( 1 )
  {
    v137 = (unsigned int *)*v136;
    if ( *v136 > 1 )
      break;
    if ( !v137 )
      goto LABEL_219;
LABEL_216:
    v136 += 2;
    if ( v133 == v136 )
      goto LABEL_417;
  }
  if ( v137[3] != v131 || v331 != v137 )
    goto LABEL_216;
LABEL_275:
  if ( v134 == v132 )
  {
LABEL_366:
    if ( v135 != v43 )
    {
      for ( j = v43; v135 != j; j += 2 )
      {
        v214 = (unsigned int *)*j;
        if ( *j > 1 )
        {
          if ( v214[3] == v131 && v331 == v214 )
            goto LABEL_293;
        }
        else if ( !v214 )
        {
          break;
        }
      }
    }
LABEL_564:
    BUG();
  }
  j = &v43[(unsigned __int64)v134 / 8];
  while ( 2 )
  {
    v161 = (unsigned int *)*j;
    if ( *j <= 1 )
    {
      if ( !v161 )
        goto LABEL_564;
      goto LABEL_279;
    }
    if ( v161[3] != v131 || v331 != v161 )
    {
LABEL_279:
      j += 2;
      if ( v133 == j )
        goto LABEL_366;
      continue;
    }
    break;
  }
LABEL_293:
  v167 = (_QWORD *)j[1];
  if ( !v167 )
    goto LABEL_289;
  v345 = &v167[*((unsigned int *)v167 - 1)];
  if ( v345 == v167 )
    goto LABEL_289;
  v337 = v167;
  while ( 2 )
  {
    v169 = (_QWORD *)*v337;
    if ( *v337 )
    {
      if ( *((_WORD *)v169 + 2) )
        goto LABEL_311;
      v170 = *(_DWORD **)(v169[2] + 24LL);
      if ( v170
        && !*v170
        && v170[1] == 5
        && (v199 = *((unsigned int *)v169 + 6), v340 = (unsigned int *)&v169[v199 + 4], v199 * 8) )
      {
        v200 = v169 + 4;
        v332 = (unsigned int *)(v365 + 32);
        v171 = v365 + 32;
        do
        {
          if ( !*(_WORD *)(*v200 + 4) )
          {
            if ( (v341 = *v200, v201 = sub_15F0200(v332), v204 = v341, v205 = v201, !*(_WORD *)(v341 + 4))
              && (v206 = *(_QWORD *)(v341 + 16), (v207 = *(_DWORD **)(v206 + 24)) != nullptr)
              && v205 == *v207
              && v207[1] == 1
              || (v208 = sub_15F0200(v332), v204 = v341, v205 = v208, !*(_WORD *)(v341 + 4))
              && (v206 = *(_QWORD *)(v341 + 16), (v209 = *(_DWORD **)(v206 + 24)) != nullptr)
              && v205 == *v209
              && v209[1] == 2 )
            {
              if ( *(_QWORD *)(v204 + 32) == *(_QWORD *)(*v366 + 32)
                && *v367 == sub_15F0BB0(
                              (_DWORD)v332,
                              v206,
                              v204,
                              v205,
                              v202,
                              v203,
                              v327,
                              (_DWORD)v331,
                              (_DWORD)v332,
                              (_DWORD)v337,
                              v338,
                              (_DWORD)v340,
                              v341,
                              (_DWORD)v345,
                              (_DWORD)v346,
                              (_DWORD)v349,
                              (char)v350) )
              {
                goto LABEL_298;
              }
            }
          }
          ++v200;
        }
        while ( v340 != (unsigned int *)v200 );
        if ( *((_WORD *)v169 + 2) )
        {
LABEL_311:
          if ( v364 )
            v178 = *(v364 - 1);
          else
            v178 = 0;
          if ( v126 )
          {
            v179 = *((unsigned int *)v126 - 1);
            if ( (_DWORD)v179 == *((_DWORD *)v126 - 2) )
            {
              v180 = (unsigned int)(3 * v179 + 1) >> 1;
              v181 = 16 * v180 + 8;
              if ( 16 * (int)v179 + 8 >= v181 || (unsigned int)v179 >= v180 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v376, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, &v376);
                sub_233E40((__int64)&v376);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v182 = sub_186B270(v181);
              v183 = *((unsigned int *)v126 - 1);
              v184 = v126;
              *(_DWORD *)(v182 + 4) = v183;
              v185 = v182 + 8;
              v186 = &v126[16 * v183];
              if ( v126 != v186 )
              {
                do
                {
                  v187 = *v184;
                  v184 += 16;
                  v185 += 16;
                  *(_BYTE *)(v185 - 16) = v187;
                  *(_DWORD *)(v185 - 12) = *((_DWORD *)v184 - 3);
                  *(_QWORD *)(v185 - 8) = *((_QWORD *)v184 - 1);
                }
                while ( v184 != v186 );
              }
              v340 = (unsigned int *)(v182 + 8);
              v332 = (unsigned int *)v182;
              sub_186B220(v126 - 8);
              v188 = v332[1];
              *v332 = v180;
              v126 = v340;
              v168 = &v340[4 * v188];
            }
            else
            {
              v168 = (unsigned int *)&v126[16 * v179];
            }
          }
          else
          {
            v216 = (_QWORD *)sub_186B270(0x28u);
            *v216 = 2;
            v126 = v216 + 1;
            v168 = (unsigned int *)(v216 + 1);
          }
          *(_BYTE *)v168 = 0;
          v168[1] = v178;
          *((_QWORD *)v168 + 1) = v169;
          ++*((_DWORD *)v126 - 1);
          goto LABEL_298;
        }
      }
      else
      {
        v171 = v365 + 32;
      }
      v172 = sub_15F0200(v171);
      if ( !*((_WORD *)v169 + 2)
        && (v175 = v169[2], (v176 = *(_DWORD **)(v175 + 24)) != nullptr)
        && v172 == *v176
        && v176[1] == 1 )
      {
        v217 = *v366;
        v218 = *(_QWORD *)(*v366 + 32);
        if ( v169[4] != v218 )
          goto LABEL_381;
LABEL_451:
        if ( *v367 == sub_15F0BB0(
                        v171,
                        v175,
                        v217,
                        v218,
                        v173,
                        v174,
                        v327,
                        (_DWORD)v331,
                        (_DWORD)v332,
                        (_DWORD)v337,
                        v338,
                        (_DWORD)v340,
                        v341,
                        (_DWORD)v345,
                        (_DWORD)v346,
                        (_DWORD)v349,
                        (char)v350) )
          goto LABEL_298;
        if ( *((_WORD *)v169 + 2) )
          goto LABEL_311;
        v176 = *(_DWORD **)(v169[2] + 24LL);
        if ( !v176 )
          goto LABEL_311;
      }
      else
      {
        v177 = sub_15F0200(v171);
        if ( *((_WORD *)v169 + 2) )
          goto LABEL_311;
        v175 = v169[2];
        v176 = *(_DWORD **)(v175 + 24);
        if ( !v176 )
          goto LABEL_311;
        if ( v177 == *v176 && v176[1] == 2 )
        {
          v218 = v169[4];
          v217 = *v366;
          if ( *(_QWORD *)(*v366 + 32) != v218 )
            goto LABEL_381;
          goto LABEL_451;
        }
      }
      if ( *v176 )
        goto LABEL_311;
      if ( v176[1] != 4 )
        goto LABEL_382;
      v246 = v169[4];
      v247 = *(_WORD *)(v246 + 4);
      if ( v331 != (unsigned int *)v169[5] )
      {
        if ( !v247 )
          goto LABEL_428;
LABEL_382:
        if ( v176[1] == 5 )
        {
          v286 = *((unsigned int *)v169 + 6);
          v332 = (unsigned int *)&v169[v286 + 4];
          if ( v286 * 8 )
          {
            v287 = (unsigned int *)(v169 + 4);
            do
            {
              v288 = *(_QWORD *)v287;
              if ( !*(_WORD *)(*(_QWORD *)v287 + 4LL) )
              {
                v289 = *(_DWORD **)(*(_QWORD *)(v288 + 16) + 24LL);
                if ( v289 )
                {
                  if ( !*v289 && v289[1] == 8 && *(_DWORD *)(v288 + 24) == 1 )
                  {
                    v290 = *(_QWORD *)(v288 + 32);
                    if ( !*(_WORD *)(v290 + 4) )
                    {
                      if ( (v291 = sub_15F0200(v353), !*(_WORD *)(v290 + 4))
                        && (v294 = *(_QWORD *)(v290 + 16), (v295 = *(_DWORD **)(v294 + 24)) != nullptr)
                        && v291 == *v295
                        && v295[1] == 1
                        || (v291 = sub_15F0200(v353), !*(_WORD *)(v290 + 4))
                        && (v294 = *(_QWORD *)(v290 + 16), (v296 = *(_DWORD **)(v294 + 24)) != nullptr)
                        && v291 == *v296
                        && v296[1] == 2 )
                      {
                        v297 = *(_QWORD *)(v290 + 32);
                        if ( *(_QWORD *)(a2 + 32) == v297 )
                        {
                          v298 = sub_15F0BB0(
                                   v353,
                                   v294,
                                   v291,
                                   v297,
                                   v292,
                                   v293,
                                   v327,
                                   (_DWORD)v331,
                                   (_DWORD)v332,
                                   (_DWORD)v337,
                                   v338,
                                   (_DWORD)v340,
                                   v341,
                                   (_DWORD)v345,
                                   (_DWORD)v346,
                                   (_DWORD)v349,
                                   (char)v350);
                          if ( v360 != (unsigned int *)v298 )
                          {
                            v299 = v364;
                            if ( v364 )
                            {
                              v300 = *(v364 - 1);
                              if ( v300 == *(v364 - 2) )
                              {
                                v301 = (3 * v300 + 1) >> 1;
                                v302 = 8 * v301 + 8;
                                if ( 8 * v300 + 8 >= v302 || v300 >= v301 )
                                {
                                  v2 = (char **)__cxa_allocate_exception(0x28u);
                                  sub_24ABB0((__int64 *)&v376, "Overflow encountered when expanding vector");
                                  *v2 = (char *)off_1C63128;
                                  sub_2333C0(v2 + 1, &v376);
                                  sub_233E40((__int64)&v376);
                                  __cxa_throw(
                                    v2,
                                    (struct type_info *)&`typeinfo for'default_exception,
                                    (void (*)(void *))sub_230E50);
                                }
                                LODWORD(v340) = (3 * v300 + 1) >> 1;
                                v303 = (_DWORD *)sub_186B300(v364 - 2, v302);
                                v299 = v303 + 2;
                                v364 = v303 + 2;
                                *v303 = (_DWORD)v340;
                                v300 = v303[1];
                              }
                            }
                            else
                            {
                              v304 = (_QWORD *)sub_186B270(0x18u);
                              v299 = v304 + 1;
                              *v304 = 2;
                              v300 = 0;
                              v364 = v299;
                            }
                            v299[v300] = v298;
                            *((_DWORD *)v299 - 1) = v300 + 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
              v287 += 2;
            }
            while ( v332 != v287 );
            if ( *((_WORD *)v169 + 2) )
              goto LABEL_311;
            v176 = *(_DWORD **)(v169[2] + 24LL);
            if ( !v176 || *v176 )
              goto LABEL_311;
          }
        }
        if ( v176[1] != 6 )
          goto LABEL_311;
        v219 = *((unsigned int *)v169 + 6);
        v346 = &v169[v219 + 4];
        if ( !(v219 * 8) )
          goto LABEL_311;
        v220 = v169 + 4;
        while ( 2 )
        {
          v221 = *v220;
          if ( *(_WORD *)(*v220 + 4) )
            goto LABEL_386;
          v222 = sub_15F0200(v353);
          if ( !*(_WORD *)(v221 + 4) )
          {
            v226 = *(_QWORD *)(v221 + 16);
            v227 = *(_DWORD **)(v226 + 24);
            if ( v227 )
            {
              if ( v222 == *v227 && v227[1] == 1 )
              {
                if ( *(_QWORD *)(v221 + 32) == *(_QWORD *)(a2 + 32) )
                  goto LABEL_522;
                goto LABEL_386;
              }
            }
          }
          v222 = sub_15F0200(v353);
          if ( *(_WORD *)(v221 + 4) )
            goto LABEL_386;
          v226 = *(_QWORD *)(v221 + 16);
          v228 = *(_DWORD **)(v226 + 24);
          if ( !v228 )
            goto LABEL_386;
          if ( v222 == *v228 && v228[1] == 2 )
          {
            v223 = *(_QWORD *)(v221 + 32);
            if ( *(_QWORD *)(a2 + 32) != v223 )
              goto LABEL_386;
LABEL_522:
            v332 = (unsigned int *)sub_15F0BB0(
                                     v353,
                                     v226,
                                     v222,
                                     v223,
                                     v224,
                                     v225,
                                     v327,
                                     (_DWORD)v331,
                                     (_DWORD)v332,
                                     (_DWORD)v337,
                                     v338,
                                     (_DWORD)v340,
                                     v341,
                                     (_DWORD)v345,
                                     (_DWORD)v346,
                                     (_DWORD)v349,
                                     (char)v350);
            if ( v360 != v332 )
            {
              v305 = v364;
              if ( v364 )
              {
                v306 = *(v364 - 1);
                if ( v306 == *(v364 - 2) )
                {
                  v322 = (3 * v306 + 1) >> 1;
                  v323 = 8 * v322 + 8;
                  if ( 8 * v306 + 8 >= (unsigned int)v323 || v306 >= v322 )
                  {
                    v5 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v376, "Overflow encountered when expanding vector");
                    *v5 = (char *)off_1C63128;
                    sub_2333C0(v5 + 1, &v376);
                    sub_233E40((__int64)&v376);
                    __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  LODWORD(v340) = (3 * v306 + 1) >> 1;
                  v324 = (_DWORD *)sub_186B300(v364 - 2, v323);
                  v305 = v324 + 2;
                  v325 = (unsigned int)v324[1];
                  v364 = v324 + 2;
                  *v324 = (_DWORD)v340;
                  LODWORD(v324) = v325;
                  v309 = (unsigned int **)&v305[v325];
                  v308 = (_DWORD)v324 + 1;
                }
                else
                {
                  v307 = v306;
                  v308 = v306 + 1;
                  v309 = (unsigned int **)&v364[2 * v307];
                }
              }
              else
              {
                v326 = (_QWORD *)sub_186B270(0x18u);
                *v326 = 2;
                v305 = v326 + 1;
                v308 = 1;
                v364 = v305;
                v309 = (unsigned int **)v305;
              }
              *v309 = v332;
              *((_DWORD *)v305 - 1) = v308;
            }
            if ( *(_WORD *)(v221 + 4) )
              goto LABEL_386;
            v228 = *(_DWORD **)(*(_QWORD *)(v221 + 16) + 24LL);
            if ( !v228 )
              goto LABEL_386;
          }
          if ( *v228
            || v228[1] != 8
            || *(_DWORD *)(v221 + 24) != 1
            || (v229 = *(_QWORD *)(v221 + 32), *(_WORD *)(v229 + 4)) )
          {
LABEL_386:
            if ( v346 == ++v220 )
              goto LABEL_311;
            continue;
          }
          break;
        }
        v230 = *(_DWORD **)(*(_QWORD *)(v229 + 16) + 24LL);
        if ( !v230
          || *v230
          || v230[1] != 5
          || (v310 = 8LL * *(unsigned int *)(v229 + 24), v349 = (unsigned int *)(v229 + 32 + v310), !v310) )
        {
          v340 = (unsigned int *)(v365 + 32);
LABEL_401:
          v232 = sub_15F0200(v340);
          if ( !*(_WORD *)(v229 + 4)
            && (v235 = *(_QWORD *)(v229 + 16), (v236 = *(_DWORD **)(v235 + 24)) != nullptr)
            && v232 == *v236
            && v236[1] == 1
            || (v232 = sub_15F0200(v340), !*(_WORD *)(v229 + 4))
            && (v235 = *(_QWORD *)(v229 + 16), (v237 = *(_DWORD **)(v235 + 24)) != nullptr)
            && v232 == *v237
            && v237[1] == 2 )
          {
            if ( *(_QWORD *)(v229 + 32) == *(_QWORD *)(*v366 + 32)
              && *v367 == sub_15F0BB0(
                            (_DWORD)v340,
                            v235,
                            v231,
                            v232,
                            v233,
                            v234,
                            v327,
                            (_DWORD)v331,
                            (_DWORD)v332,
                            (_DWORD)v337,
                            v338,
                            (_DWORD)v340,
                            v341,
                            (_DWORD)v345,
                            (_DWORD)v346,
                            (_DWORD)v349,
                            (char)v350) )
            {
              goto LABEL_298;
            }
          }
          goto LABEL_386;
        }
        v332 = (unsigned int *)(v229 + 32);
        v341 = v365 + 32;
        v340 = (unsigned int *)(v365 + 32);
        while ( 1 )
        {
          if ( !*(_WORD *)(*(_QWORD *)v332 + 4LL) )
          {
            if ( (v350 = *(unsigned __int64 **)v332,
                  v311 = sub_15F0200(v341),
                  v315 = v350,
                  v316 = v311,
                  !*((_WORD *)v350 + 2))
              && (v317 = v350[2], (v318 = *(_DWORD **)(v317 + 24)) != nullptr)
              && v316 == *v318
              && v318[1] == 1
              || (v319 = sub_15F0200(v341), v315 = v350, v320 = v319, !*((_WORD *)v350 + 2))
              && (v317 = v350[2], (v321 = *(_DWORD **)(v317 + 24)) != nullptr)
              && v320 == *v321
              && v321[1] == 2 )
            {
              if ( v315[4] == *(_QWORD *)(*v366 + 32)
                && *v367 == sub_15F0BB0(
                              v341,
                              v317,
                              v312,
                              (_DWORD)v315,
                              v313,
                              v314,
                              v327,
                              (_DWORD)v331,
                              (_DWORD)v332,
                              (_DWORD)v337,
                              v338,
                              (_DWORD)v340,
                              v341,
                              (_DWORD)v345,
                              (_DWORD)v346,
                              (_DWORD)v349,
                              (char)v350) )
              {
                break;
              }
            }
          }
          v332 += 2;
          if ( v349 == v332 )
          {
            if ( *(_WORD *)(v229 + 4) )
              goto LABEL_386;
            goto LABEL_401;
          }
        }
LABEL_298:
        if ( v345 != ++v337 )
          continue;
        if ( !v126 )
        {
          v42 = v364;
          v29 = 1;
          goto LABEL_221;
        }
LABEL_289:
        v127 = *((_DWORD *)v126 - 1);
        if ( !v127 )
        {
          v42 = v364;
          v29 = 1;
          goto LABEL_220;
        }
        goto LABEL_211;
      }
      if ( !v247 )
      {
        v340 = (unsigned int *)v169[6];
        v255 = *(_DWORD **)(*(_QWORD *)(v246 + 16) + 24LL);
        if ( v255
          && !*v255
          && v255[1] == 5
          && (v274 = 8LL * *(unsigned int *)(v246 + 24), v341 = v246 + 32 + v274, v274) )
        {
          v332 = (unsigned int *)(v246 + 32);
          while ( 1 )
          {
            if ( !*(_WORD *)(*(_QWORD *)v332 + 4LL) )
            {
              if ( (v346 = *(unsigned __int64 **)v332,
                    v275 = sub_15F0200(v171),
                    v279 = v346,
                    v280 = v275,
                    !*((_WORD *)v346 + 2))
                && (v281 = v346[2], (v282 = *(_DWORD **)(v281 + 24)) != nullptr)
                && v280 == *v282
                && v282[1] == 1
                || (v283 = sub_15F0200(v171), v279 = v346, v284 = v283, !*((_WORD *)v346 + 2))
                && (v281 = v346[2], (v285 = *(_DWORD **)(v281 + 24)) != nullptr)
                && v284 == *v285
                && v285[1] == 2 )
              {
                if ( v279[4] == *(_QWORD *)(*v366 + 32)
                  && *v367 == sub_15F0BB0(
                                v171,
                                v281,
                                v276,
                                (_DWORD)v279,
                                v277,
                                v278,
                                v327,
                                (_DWORD)v331,
                                (_DWORD)v332,
                                (_DWORD)v337,
                                v338,
                                (_DWORD)v340,
                                v341,
                                (_DWORD)v345,
                                (_DWORD)v346,
                                (_DWORD)v349,
                                (char)v350) )
                {
                  break;
                }
              }
            }
            v332 += 2;
            if ( (unsigned int *)v341 == v332 )
            {
              if ( *(_WORD *)(v246 + 4) )
                goto LABEL_432;
              goto LABEL_438;
            }
          }
LABEL_483:
          if ( v331 != v340 )
            goto LABEL_298;
LABEL_447:
          if ( !*(_WORD *)(v246 + 4) )
            goto LABEL_428;
        }
        else
        {
LABEL_438:
          v257 = sub_15F0200(v171);
          if ( *(_WORD *)(v246 + 4)
            || (v260 = *(_QWORD *)(v246 + 16), (v261 = *(_DWORD **)(v260 + 24)) == nullptr)
            || v257 != *v261
            || v261[1] != 1 )
          {
            v262 = sub_15F0200(v171);
            if ( *(_WORD *)(v246 + 4) )
              goto LABEL_432;
            v260 = *(_QWORD *)(v246 + 16);
            v263 = *(_DWORD **)(v260 + 24);
            if ( !v263 || v262 != *v263 || v263[1] != 2 )
              goto LABEL_428;
          }
          v264 = *(_QWORD *)(v246 + 32);
          if ( *(_QWORD *)(*v366 + 32) == v264 )
          {
            if ( *v367 == sub_15F0BB0(
                            v171,
                            v260,
                            v256,
                            v264,
                            v258,
                            v259,
                            v327,
                            (_DWORD)v331,
                            (_DWORD)v332,
                            (_DWORD)v337,
                            v338,
                            (_DWORD)v340,
                            v341,
                            (_DWORD)v345,
                            (_DWORD)v346,
                            (_DWORD)v349,
                            (char)v350) )
              goto LABEL_483;
            goto LABEL_447;
          }
LABEL_428:
          v249 = sub_15F0200(v353);
          if ( !*(_WORD *)(v246 + 4)
            && (v252 = *(_QWORD *)(v246 + 16), (v253 = *(_DWORD **)(v252 + 24)) != nullptr)
            && v249 == *v253
            && v253[1] == 1
            || (v254 = sub_15F0200(v353), !*(_WORD *)(v246 + 4))
            && (v252 = *(_QWORD *)(v246 + 16), (v269 = *(_DWORD **)(v252 + 24)) != nullptr)
            && v254 == *v269
            && v269[1] == 2 )
          {
            v265 = *(_QWORD *)(v246 + 32);
            if ( *(_QWORD *)(a2 + 32) == v265 )
            {
              v266 = sub_15F0BB0(
                       v353,
                       v252,
                       v248,
                       v265,
                       v250,
                       v251,
                       v327,
                       (_DWORD)v331,
                       (_DWORD)v332,
                       (_DWORD)v337,
                       v338,
                       (_DWORD)v340,
                       v341,
                       (_DWORD)v345,
                       (_DWORD)v346,
                       (_DWORD)v349,
                       (char)v350);
              if ( v360 != (unsigned int *)v266 )
              {
                v267 = v364;
                if ( v364 )
                {
                  v268 = *(v364 - 1);
                  if ( v268 == *(v364 - 2) )
                  {
                    v270 = (3 * v268 + 1) >> 1;
                    v271 = 8 * v270 + 8;
                    if ( 8 * v268 + 8 >= v271 || v268 >= v270 )
                    {
                      v6 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)&v376, "Overflow encountered when expanding vector");
                      *v6 = (char *)off_1C63128;
                      sub_2333C0(v6 + 1, &v376);
                      sub_233E40((__int64)&v376);
                      __cxa_throw(
                        v6,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v272 = (unsigned int *)sub_186B300(v364 - 2, v271);
                    v267 = v272 + 2;
                    *v272 = v270;
                    v268 = v272[1];
                    v364 = v267;
                  }
                }
                else
                {
                  v273 = (_QWORD *)sub_186B270(0x18u);
                  v267 = v273 + 1;
                  *v273 = 2;
                  v268 = 0;
                  v364 = v267;
                }
                v267[v268] = v266;
                *((_DWORD *)v267 - 1) = v268 + 1;
              }
            }
          }
        }
      }
LABEL_432:
      if ( *((_WORD *)v169 + 2) )
        goto LABEL_311;
      v176 = *(_DWORD **)(v169[2] + 24LL);
      if ( !v176 )
        goto LABEL_311;
LABEL_381:
      if ( *v176 )
        goto LABEL_311;
      goto LABEL_382;
    }
    break;
  }
  v189 = *(unsigned int **)sub_15F6BE0(v353, v361);
  v42 = v364;
  if ( !v189 )
    goto LABEL_342;
  v332 = &v189[2 * *(v189 - 1)];
  if ( v332 == v189 )
    goto LABEL_342;
  v190 = *(_QWORD *)v189;
  if ( !v364 )
    goto LABEL_377;
  v191 = (unsigned int)*(v364 - 1);
  while ( 2 )
  {
    v192 = &v42[v191];
    if ( v42 == v192 )
    {
LABEL_331:
      if ( !v169 )
      {
LABEL_377:
        v340 = v189;
        v215 = (_QWORD *)sub_186B270(0x18u);
        *v215 = 2;
        v189 = v340;
        v196 = 1;
        v169 = v215 + 1;
        v197 = v169;
        goto LABEL_334;
      }
      while ( 1 )
      {
        v194 = *((_DWORD *)v169 - 1);
        if ( v194 == *((_DWORD *)v169 - 2) )
        {
          v210 = (3 * v194 + 1) >> 1;
          v211 = 8 * v210 + 8;
          if ( 8 * v194 + 8 >= (unsigned int)v211 || v194 >= v210 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v376, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, &v376);
            sub_233E40((__int64)&v376);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v341 = (size_t)v189;
          LODWORD(v340) = (3 * v194 + 1) >> 1;
          v212 = (_DWORD *)sub_186B300(v169 - 1, v211);
          v213 = (unsigned int)v212[1];
          v169 = v212 + 2;
          v189 = (unsigned int *)v341;
          *v212 = (_DWORD)v340;
          LODWORD(v212) = v213;
          v197 = &v169[v213];
          v196 = (_DWORD)v212 + 1;
        }
        else
        {
          v195 = v194;
          v196 = v194 + 1;
          v197 = &v169[v195];
        }
LABEL_334:
        *v197 = v190;
        v189 += 2;
        *((_DWORD *)v169 - 1) = v196;
        if ( v332 == v189 )
          goto LABEL_339;
        v190 = *(_QWORD *)v189;
        if ( v42 )
        {
          v191 = *((unsigned int *)v42 - 1);
          v192 = &v42[v191];
          if ( v42 != v192 )
            break;
        }
      }
    }
    v193 = v42;
    while ( *v193 != v190 )
    {
      if ( ++v193 == v192 )
        goto LABEL_331;
    }
    v189 += 2;
    if ( v332 != v189 )
    {
      v190 = *(_QWORD *)v189;
      continue;
    }
    break;
  }
  if ( v169 )
  {
LABEL_339:
    v198 = v169 - 1;
    if ( *((_DWORD *)v169 - 1) == 1 && *v169 == v363 )
    {
      sub_186B220(v198);
      goto LABEL_298;
    }
    sub_186B220(v198);
  }
LABEL_342:
  if ( v126 )
LABEL_220:
    sub_186B220(v126 - 8);
LABEL_221:
  if ( v43 )
  {
    if ( v339 )
    {
      v138 = v43;
      v139 = &v43[2 * v339];
      do
      {
        while ( 1 )
        {
          v140 = v138[1];
          if ( !v140 )
            break;
          v138 += 2;
          sub_186B220((void *)(v140 - 8));
          if ( v139 == v138 )
            goto LABEL_226;
        }
        v138 += 2;
      }
      while ( v139 != v138 );
    }
LABEL_226:
    sub_186B220(v43);
  }
LABEL_36:
  if ( v42 )
    sub_186B220(v42 - 1);
  return v29;
}

