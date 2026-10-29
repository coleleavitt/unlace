__int64 __fastcall sub_CC26C0(__int64 a1, void **a2, __int64 a3)
{
  __int64 v4; // rbx
  _BYTE *v5; // rdx
  _DWORD **v6; // rcx
  unsigned __int64 v7; // r14
  _DWORD **v8; // r15
  _DWORD *v9; // r13
  bool v10; // zf
  unsigned int *v11; // rcx
  unsigned __int64 v12; // r13
  unsigned int *v13; // r15
  _QWORD *v14; // r14
  unsigned int v15; // eax
  _DWORD *v16; // rdx
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r15
  unsigned int v21; // edi
  _DWORD *v22; // rcx
  unsigned int v23; // esi
  __int64 *v24; // rdx
  unsigned int v25; // eax
  _DWORD *v26; // rax
  _QWORD *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rsi
  unsigned int v30; // r13d
  __int64 v31; // rax
  int v32; // edx
  __int64 **v33; // rax
  __int64 *v34; // rdx
  char j; // al
  unsigned int v36; // eax
  char *v37; // rcx
  __int64 v38; // rdx
  char k; // al
  unsigned int v40; // eax
  int v41; // eax
  void **v42; // rcx
  char v43; // r8
  __int64 v44; // rdi
  __int64 v45; // rax
  int v46; // esi
  _QWORD *v47; // r15
  __int64 *v48; // r12
  __int64 *v49; // r15
  __int64 v50; // rsi
  bool v51; // al
  void *v52; // r13
  void *v53; // rdi
  char v54; // r14
  _QWORD *v55; // r14
  __int64 v56; // rdx
  char n; // al
  __int64 v58; // r12
  __int64 v59; // r15
  __int64 v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // rax
  int v63; // edx
  __int64 *v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdi
  _QWORD *v67; // r12
  unsigned int v68; // edx
  unsigned int v69; // ebx
  __int64 v70; // rbx
  void *v72; // rdi
  char *v73; // rcx
  bool v74; // si
  char *v75; // rax
  __int64 v76; // rdx
  int v77; // ecx
  int v78; // r8d
  int v79; // r9d
  __int64 v80; // rdi
  __int64 v81; // rax
  void *v82; // r12
  int v83; // ecx
  int v84; // r8d
  int v85; // r9d
  __int64 v86; // rdi
  __int64 v87; // rax
  void *v88; // r12
  __int64 *v89; // rax
  void *v90; // r13
  char v91; // r12
  void *v92; // r12
  void *v93; // r13
  int v94; // edx
  __int64 v95; // rdx
  char v96; // cl
  __int64 v97; // rax
  void *v98; // r13
  void *v99; // r13
  int v100; // edx
  __int64 v101; // rdx
  char v102; // cl
  __int64 v103; // rax
  void *v104; // r13
  void *v105; // rsi
  void *v106; // r13
  _QWORD *v107; // rcx
  __int64 v108; // rax
  unsigned int v109; // edx
  __int64 v110; // r12
  _QWORD *v111; // r13
  unsigned int v112; // eax
  __int64 v113; // rdx
  int v114; // eax
  __m128 *v115; // rdx
  _QWORD *v116; // rcx
  __m128 v117; // xmm0
  void *v118; // r12
  unsigned __int64 v119; // r12
  int v120; // r13d
  int v121; // eax
  int v122; // r9d
  __int64 v123; // r12
  _QWORD *v124; // r13
  int v125; // eax
  _QWORD *v126; // r13
  int v127; // eax
  int v128; // ecx
  int v129; // r8d
  int v130; // r9d
  __int64 v131; // rdi
  __int64 v132; // rax
  unsigned int v133; // edx
  _QWORD *v134; // rsi
  __int64 v135; // r13
  char *v136; // rax
  __int64 *v137; // rdi
  unsigned __int64 v138; // rax
  __int64 v139; // r8
  unsigned int v140; // ecx
  size_t v141; // rsi
  unsigned int *v142; // rax
  unsigned int *v143; // rsi
  __int64 v144; // rcx
  unsigned int v145; // edx
  unsigned int v146; // ebx
  __int64 v147; // r12
  __m128i *v148; // rax
  unsigned __int64 v149; // rdi
  _QWORD *v150; // rcx
  __int64 v151; // rsi
  unsigned int v152; // eax
  int v153; // eax
  __int64 **v154; // rsi
  _DWORD *v155; // rdx
  int v156; // eax
  __int64 v157; // rbx
  _QWORD *v158; // rdi
  __int64 v159; // rax
  unsigned int v160; // r8d
  size_t v161; // rdi
  _DWORD *v162; // r9
  int v163; // r8d
  _QWORD *v164; // rcx
  __int64 v165; // r10
  _DWORD *v166; // rdx
  _QWORD *v167; // rdi
  _QWORD *ii; // rax
  __int64 v169; // rsi
  __int64 v170; // rsi
  __int64 v171; // rsi
  __int64 *v172; // rbx
  __int64 *v173; // r12
  __int64 v174; // rsi
  __int64 v175; // rdi
  __int64 v176; // rsi
  __int64 v177; // rdi
  _QWORD *v178; // rcx
  unsigned int v179; // edx
  _QWORD *v180; // r13
  __int64 v181; // rax
  __int64 v182; // r12
  __int64 v183; // rax
  unsigned int **v184; // rdx
  int v185; // esi
  unsigned int v186; // r8d
  unsigned int **v187; // rcx
  __int64 v188; // r8
  unsigned int **v189; // rdi
  unsigned int **jj; // rax
  unsigned int *v191; // r8
  __int64 v192; // rax
  __int64 *v193; // rcx
  unsigned int v194; // edx
  __int64 *v195; // rdi
  __int64 v196; // rdx
  __int64 *v197; // r9
  __int64 *v198; // rax
  __int64 v199; // rdx
  int v200; // ecx
  int v201; // r8d
  int v202; // r9d
  void *v203; // r12
  __int64 v204; // rax
  _QWORD *v205; // r14
  __int64 v206; // rax
  __int64 v207; // rcx
  char kk; // dl
  unsigned int v209; // r15d
  __int64 v210; // r13
  unsigned int v211; // r12d
  __int64 *v212; // r8
  unsigned __int64 v213; // r14
  __int64 v214; // rax
  int v215; // edx
  void **v216; // rax
  void *v217; // rax
  __int64 v218; // rdi
  __int64 v219; // rax
  _DWORD *v220; // rcx
  __m128i v221; // xmm0
  __int64 v222; // r8
  void *v223; // rcx
  _DWORD *v224; // rdx
  __int64 v225; // rsi
  __int64 v226; // rdi
  char v227; // al
  unsigned int v228; // eax
  int v229; // eax
  __int64 *v230; // rsi
  _DWORD *v231; // rax
  void *v232; // rcx
  void *v233; // rsi
  __int64 v234; // rdi
  int v235; // edx
  _QWORD *v236; // rax
  void *v237; // rsi
  _QWORD *v238; // r12
  __int64 v239; // rax
  __int64 v240; // rbx
  void (__fastcall ***v241)(void *); // r13
  void **v242; // rax
  _DWORD *v243; // r13
  unsigned int v244; // edx
  unsigned int v245; // ebx
  __int64 v246; // r12
  _DWORD *v247; // rsi
  __int64 v248; // rdi
  __int64 v249; // rsi
  __int64 v250; // rdi
  void *v251; // rbx
  void (__fastcall ***v252)(_QWORD); // rbx
  unsigned __int64 v253; // rax
  __int64 v254; // r9
  unsigned int *v255; // r13
  unsigned __int64 v256; // rax
  __int64 v257; // rax
  _DWORD *v258; // r8
  __m128i v259; // xmm0
  int v260; // eax
  _QWORD *v261; // rdx
  unsigned int v262; // eax
  __int64 v263; // rcx
  int v264; // eax
  unsigned int **v265; // rcx
  _QWORD *v266; // rax
  __int64 v267; // rax
  int v268; // r15d
  _QWORD *v269; // rdi
  __int64 v270; // rax
  __int64 v271; // rbx
  _QWORD *v272; // rdi
  __int64 v273; // rax
  __int64 v274; // rax
  __int64 v275; // rax
  __int64 v276; // rax
  void *v277; // rsi
  void *v278; // r13
  __int64 i; // rax
  unsigned int v280; // r13d
  unsigned int v281; // ecx
  unsigned int *v282; // rax
  __int64 v283; // rcx
  char *v284; // rax
  __int64 *v285; // rdi
  int v286; // esi
  unsigned __int64 v287; // rax
  __int64 v288; // rcx
  unsigned int v289; // r8d
  size_t v290; // rsi
  _DWORD *v291; // rax
  int v292; // r8d
  unsigned int v293; // r8d
  size_t v294; // rsi
  _DWORD *v295; // rax
  __int64 v296; // rsi
  int v297; // r8d
  __int64 m; // rax
  __int64 mm; // rax
  _QWORD *v300; // rdx
  _QWORD *v301; // rcx
  unsigned __int64 v302; // rax
  __int64 v303; // r8
  char **v304; // r15
  __int64 v305; // rdx
  char **v306; // rbx
  __int64 v307; // rdx
  char **v308; // r15
  __int64 v309; // rdx
  char **exception; // r15
  __int64 v311; // rdx
  char **v312; // rbx
  __int64 v313; // rdx
  int v314; // [rsp-8h] [rbp-288h]
  int v315; // [rsp+0h] [rbp-280h]
  int v316; // [rsp+0h] [rbp-280h]
  _Unwind_Exception *v317; // [rsp+0h] [rbp-280h]
  _Unwind_Exception *v318; // [rsp+0h] [rbp-280h]
  unsigned __int64 v319; // [rsp+8h] [rbp-278h]
  int v320; // [rsp+8h] [rbp-278h]
  int v321; // [rsp+8h] [rbp-278h]
  int v322; // [rsp+8h] [rbp-278h]
  __int64 v323; // [rsp+10h] [rbp-270h]
  int v324; // [rsp+10h] [rbp-270h]
  int v325; // [rsp+10h] [rbp-270h]
  int v326; // [rsp+10h] [rbp-270h]
  _DWORD *v327; // [rsp+18h] [rbp-268h]
  int v328; // [rsp+18h] [rbp-268h]
  __int64 v329; // [rsp+18h] [rbp-268h]
  __int64 v330; // [rsp+18h] [rbp-268h]
  _DWORD *v331; // [rsp+20h] [rbp-260h]
  int v332; // [rsp+20h] [rbp-260h]
  __int64 v333; // [rsp+20h] [rbp-260h]
  __int64 v334; // [rsp+20h] [rbp-260h]
  __int64 v335; // [rsp+28h] [rbp-258h]
  char v336; // [rsp+28h] [rbp-258h]
  _QWORD *v337; // [rsp+30h] [rbp-250h]
  int v338; // [rsp+30h] [rbp-250h]
  int v339; // [rsp+38h] [rbp-248h]
  int v340; // [rsp+38h] [rbp-248h]
  int v341; // [rsp+3Ch] [rbp-244h]
  _QWORD *v342; // [rsp+40h] [rbp-240h]
  int v343; // [rsp+40h] [rbp-240h]
  char *v344; // [rsp+48h] [rbp-238h]
  void *v345; // [rsp+48h] [rbp-238h]
  __int64 *v346; // [rsp+50h] [rbp-230h]
  __int64 v347; // [rsp+58h] [rbp-228h]
  __int64 v348; // [rsp+60h] [rbp-220h]
  __int64 v349; // [rsp+68h] [rbp-218h]
  __int64 v350; // [rsp+70h] [rbp-210h]
  _QWORD *v351; // [rsp+78h] [rbp-208h]
  _QWORD *v352; // [rsp+80h] [rbp-200h] BYREF
  void *v353; // [rsp+88h] [rbp-1F8h]
  __int64 v354; // [rsp+90h] [rbp-1F0h]
  __int64 v355; // [rsp+98h] [rbp-1E8h]
  void *v356; // [rsp+A0h] [rbp-1E0h]
  __int64 *v357; // [rsp+A8h] [rbp-1D8h]
  void *v358; // [rsp+B0h] [rbp-1D0h]
  __int64 *v359; // [rsp+B8h] [rbp-1C8h]
  void **v360; // [rsp+C0h] [rbp-1C0h]
  void *v361; // [rsp+C8h] [rbp-1B8h]
  char v362[8]; // [rsp+D8h] [rbp-1A8h] BYREF
  _QWORD v363[2]; // [rsp+E0h] [rbp-1A0h] BYREF
  _QWORD v364[2]; // [rsp+F0h] [rbp-190h] BYREF
  _QWORD v365[2]; // [rsp+100h] [rbp-180h] BYREF
  _QWORD v366[2]; // [rsp+110h] [rbp-170h] BYREF
  _QWORD v367[2]; // [rsp+120h] [rbp-160h] BYREF
  _QWORD v368[2]; // [rsp+130h] [rbp-150h] BYREF
  __int64 v369; // [rsp+140h] [rbp-140h] BYREF
  __int64 v370; // [rsp+148h] [rbp-138h]
  __int64 v371; // [rsp+150h] [rbp-130h] BYREF
  __int64 v372; // [rsp+158h] [rbp-128h]
  int v373[2]; // [rsp+160h] [rbp-120h] BYREF
  __int64 v374; // [rsp+168h] [rbp-118h]
  __int64 v375; // [rsp+170h] [rbp-110h] BYREF
  __int64 v376; // [rsp+178h] [rbp-108h]
  _QWORD v377[2]; // [rsp+180h] [rbp-100h] BYREF
  _QWORD v378[6]; // [rsp+190h] [rbp-F0h] BYREF
  void *ptr; // [rsp+1C0h] [rbp-C0h] BYREF
  __int64 v380; // [rsp+1C8h] [rbp-B8h]
  __int64 v381; // [rsp+1D0h] [rbp-B0h] BYREF
  __int64 v382; // [rsp+1D8h] [rbp-A8h]

  v4 = a1;
  v350 = a3;
  v360 = a2;
  sub_EE4F60((void *)"lia2pb");
  v5 = *a2;
  v6 = *(_DWORD ***)a3;
  *(_BYTE *)(a1 + 184) = (*((_BYTE *)*a2 + 123) & 4) != 0;
  *(_BYTE *)(a1 + 185) = (v5[123] & 0x10) != 0;
  v7 = (unsigned __int64)&v6[*(unsigned int *)(a3 + 8)];
  if ( (unsigned __int64)v6 < v7 )
  {
    v8 = v6;
    do
    {
      while ( 1 )
      {
        v9 = *v8;
        if ( *v8 )
        {
          v10 = v9[8]-- == 1;
          if ( v10 )
            break;
        }
        if ( (unsigned __int64)++v8 >= v7 )
          goto LABEL_7;
      }
      sub_ED44E0(v9);
      sub_186B220(v9);
      ++v8;
    }
    while ( (unsigned __int64)v8 < v7 );
LABEL_7:
    v5 = *v360;
  }
  *(_DWORD *)(v350 + 8) = 0;
  v344 = v362;
  sub_EE4940(v362, "lia2pb", v5);
  sub_F73E80(a1 + 8);
  v354 = a1 + 168;
  sub_14B6450(a1 + 168);
  v11 = *(unsigned int **)(a1 + 160);
  v361 = v11;
  if ( v11 )
  {
    v12 = (unsigned __int64)&v11[2 * *(v11 - 1)];
    if ( (unsigned __int64)v11 >= v12 )
      goto LABEL_25;
    do
    {
      v13 = *(unsigned int **)v361;
      if ( *(_QWORD *)v361 )
      {
        v14 = *(_QWORD **)(v4 + 152);
        v15 = (*v13 + 0x3FFFFFFF) & 0x3FFFFFFF | *v13 & 0xC0000000;
        *v13 = v15;
        if ( (v15 & 0x3FFFFFFF) == 0 )
        {
          v16 = (_DWORD *)v14[83];
          if ( v16 )
          {
            v17 = (unsigned int)*(v16 - 1);
            if ( (_DWORD)v17 == *(v16 - 2) )
            {
              v140 = (unsigned int)(3 * v17 + 1) >> 1;
              v141 = 8 * v140 + 8;
              if ( 8 * (int)v17 + 8 >= (unsigned int)v141 || (unsigned int)v17 >= v140 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_16387A((__int64 *)&ptr, "Overflow encountered when expanding vector", v311);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &ptr);
                sub_233E40((__int64)&ptr);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              LODWORD(v359) = (unsigned int)(3 * v17 + 1) >> 1;
              v142 = (unsigned int *)sub_186B300(v16 - 2, v141);
              v16 = v142 + 2;
              v143 = v142;
              v14[83] = v142 + 2;
              *v142 = (unsigned int)(3 * v17 + 1) >> 1;
              v144 = v142[1];
              v18 = v144 + 1;
              *(_QWORD *)&v16[2 * v144] = v13;
              v143[1] = v144 + 1;
            }
            else
            {
              v18 = v17 + 1;
              *(_QWORD *)&v16[2 * v17] = v13;
              *(v16 - 1) = v17 + 1;
            }
          }
          else
          {
            v276 = sub_186B270(0x18u);
            v16 = (_DWORD *)(v276 + 8);
            *(_QWORD *)v276 = 2;
            v14[83] = v276 + 8;
            *(_QWORD *)(v276 + 8) = v13;
            *(_DWORD *)(v276 + 4) = 1;
            v18 = 1;
          }
          while ( v18 )
          {
            v19 = (unsigned int)(v18 - 1);
            v20 = *(_QWORD *)&v16[2 * v19];
            v21 = v18 - 1;
            *(v16 - 1) = v19;
            if ( *(char *)(v20 + 3) < 0 )
            {
              v65 = *(_QWORD *)(v20 + 8);
              if ( v65 )
              {
                v66 = v14[81];
                v10 = (*(_DWORD *)(v65 + 8))-- == 1;
                if ( v10 )
                  sub_15D7BC0(v66, v65);
              }
              sub_17E9C40(v14[82], 16, v20);
            }
            else
            {
              v22 = *(_DWORD **)(v20 + 8);
              v23 = (*v22 + 0x3FFFFFFF) & 0x3FFFFFFF | *v22 & 0xC0000000;
              *v22 = v23;
              if ( (v23 & 0x3FFFFFFF) == 0 )
              {
                if ( v21 == *(v16 - 2) )
                {
                  v358 = v22;
                  v289 = (3 * v21 + 1) >> 1;
                  v290 = 8 * v289 + 8;
                  if ( 8 * v18 >= (unsigned int)v290 || (LODWORD(v359) = (3 * v21 + 1) >> 1, v21 >= v289) )
                  {
LABEL_459:
                    v304 = (char **)__cxa_allocate_exception(0x28u);
                    sub_16387A((__int64 *)&ptr, "Overflow encountered when expanding vector", v305);
                    *v304 = (char *)off_1C63128;
                    sub_2333C0(v304 + 1, &ptr);
                    sub_233E40((__int64)&ptr);
                    __cxa_throw(
                      v304,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v291 = (_DWORD *)sub_186B300(v16 - 2, v290);
                  v292 = (int)v359;
                  v155 = v291 + 2;
                  v22 = v358;
                  v14[83] = v291 + 2;
                  *v291 = v292;
                }
                else
                {
                  v155 = (_DWORD *)v14[83];
                }
                v156 = *(v155 - 1);
                *(_QWORD *)&v155[2 * v156] = v22;
                *(v155 - 1) = v156 + 1;
              }
              v24 = *(__int64 **)(v20 + 16);
              v25 = (*(_DWORD *)v24 + 0x3FFFFFFF) & 0x3FFFFFFF | *(_DWORD *)v24 & 0xC0000000;
              *(_DWORD *)v24 = v25;
              if ( (v25 & 0x3FFFFFFF) == 0 )
              {
                v150 = (_QWORD *)v14[83];
                if ( v150 )
                {
                  v151 = *((unsigned int *)v150 - 1);
                  v152 = *((_DWORD *)v150 - 2);
                  if ( v152 == (_DWORD)v151 )
                  {
                    v358 = v24;
                    v293 = (3 * v152 + 1) >> 1;
                    v294 = 8 * v293 + 8;
                    if ( 8 * v152 + 8 >= (unsigned int)v294 )
                      goto LABEL_459;
                    LODWORD(v359) = (3 * v152 + 1) >> 1;
                    if ( v152 >= v293 )
                      goto LABEL_459;
                    v295 = (_DWORD *)sub_186B300(v150 - 1, v294);
                    v296 = (unsigned int)v295[1];
                    v297 = (int)v359;
                    v150 = v295 + 2;
                    v14[83] = v295 + 2;
                    v24 = (__int64 *)v358;
                    *v295 = v297;
                    v153 = v296 + 1;
                    v154 = (__int64 **)&v150[v296];
                  }
                  else
                  {
                    v153 = v151 + 1;
                    v154 = (__int64 **)&v150[v151];
                  }
                }
                else
                {
                  v359 = v24;
                  v301 = (_QWORD *)sub_186B270(0x18u);
                  *v301 = 2;
                  v24 = v359;
                  v153 = 1;
                  v150 = v301 + 1;
                  v14[83] = v150;
                  v154 = (__int64 **)v150;
                }
                *v154 = v24;
                *((_DWORD *)v150 - 1) = v153;
              }
              sub_17E9C40(v14[82], 24, v20);
            }
            v16 = (_DWORD *)v14[83];
            if ( !v16 )
              break;
            v18 = *(v16 - 1);
          }
        }
      }
      v361 = (char *)v361 + 8;
    }
    while ( (unsigned __int64)v361 < v12 );
    v361 = *(void **)(v4 + 160);
    if ( v361 )
LABEL_25:
      *((_DWORD *)v361 - 1) = 0;
  }
  v26 = *v360;
  v27 = *v360;
  if ( (*((_BYTE *)*v360 + 123) & 0x20) != 0 )
  {
    ++v26[8];
    v145 = *(_DWORD *)(v350 + 8);
    v146 = *(_DWORD *)(v350 + 12);
    if ( v145 >= v146 )
    {
      v157 = 2 * v146;
      v147 = sub_186B270(8 * v157);
      v145 = *(_DWORD *)(v350 + 8);
      v158 = *(_QWORD **)v350;
      if ( v145 )
      {
        if ( v145 - 1 <= 2 || (_QWORD *)v147 == v158 + 1 )
        {
          for ( i = 0; i != v145; ++i )
            *(_QWORD *)(v147 + i * 8) = v158[i];
        }
        else
        {
          v159 = 0;
          do
          {
            *(__m128i *)(v147 + v159 * 8) = _mm_loadu_si128((const __m128i *)&v158[v159]);
            v159 += 2;
          }
          while ( v159 != 2LL * (v145 >> 1) );
          if ( (v145 & 1) != 0 )
            *(_QWORD *)(v147 + 8LL * (v145 & 0xFFFFFFFE)) = v158[v145 & 0xFFFFFFFE];
        }
      }
      if ( v158 != (_QWORD *)(v350 + 16) && v158 )
      {
        sub_186B220(v158);
        v145 = *(_DWORD *)(v350 + 8);
      }
      *(_QWORD *)v350 = v147;
      *(_DWORD *)(v350 + 12) = v157;
    }
    else
    {
      v147 = *(_QWORD *)v350;
    }
    *(_QWORD *)(v147 + 8LL * v145) = v27;
    *(_DWORD *)(v350 + 8) = v145 + 1;
    return sub_EE4A00(v344);
  }
  v28 = *((_QWORD *)v26 + 9);
  if ( !v28 )
    goto LABEL_68;
  v29 = *(_QWORD *)v26;
  v30 = 0;
  while ( 2 )
  {
    for ( j = *(_BYTE *)(v28 + 3) >> 6; !j; j = *(_BYTE *)(v28 + 3) >> 6 )
      v28 = *(_QWORD *)(v28 + 16);
    if ( j == 1 )
    {
      v36 = *(_DWORD *)(v28 + 4) + 1;
LABEL_40:
      if ( v30 >= v36 )
        break;
      goto LABEL_41;
    }
    if ( j != 2 )
    {
      v36 = *(_DWORD *)(v28 + 4);
      goto LABEL_40;
    }
    if ( v30 >= *(_DWORD *)(v28 + 4) - 1 )
      break;
LABEL_41:
    v37 = (char *)v27[11];
    if ( !v37 )
      goto LABEL_52;
    v38 = v27[11];
    for ( k = (unsigned __int8)v37[3] >> 6; !k; k = *(_BYTE *)(v38 + 3) >> 6 )
      v38 = *(_QWORD *)(v38 + 16);
    if ( k == 1 )
    {
      v40 = *(_DWORD *)(v38 + 4) + 1;
LABEL_46:
      if ( v30 >= v40 )
        goto LABEL_95;
      goto LABEL_47;
    }
    if ( k != 2 )
    {
      v40 = *(_DWORD *)(v38 + 4);
      goto LABEL_46;
    }
    if ( v30 >= *(_DWORD *)(v38 + 4) - 1 )
    {
LABEL_95:
      v37 = nullptr;
      goto LABEL_52;
    }
LABEL_47:
    v41 = 17;
    while ( 1 )
    {
      if ( v37[3] < 0 )
      {
        if ( (unsigned __int8)v37[3] >> 6 != 2 )
        {
          v42 = (void **)(*((_QWORD *)v37 + 2) + 8LL * v30);
          goto LABEL_51;
        }
        goto LABEL_59;
      }
      if ( *((_DWORD *)v37 + 1) == v30 )
        break;
LABEL_59:
      v37 = *((char **)v37 + 2);
      if ( !--v41 )
      {
        sub_233F80((__int64 *)(v29 + 616), (_DWORD *)v27 + 22);
        v42 = (void **)(*(_QWORD *)(v27[11] + 16LL) + 8LL * v30);
        v27 = *v360;
        goto LABEL_51;
      }
    }
    v42 = (void **)(v37 + 8);
LABEL_51:
    v37 = (char *)*v42;
LABEL_52:
    v43 = *((_BYTE *)v27 + 123);
    v44 = *v27;
    if ( (v43 & 0x10) == 0 )
    {
      v34 = nullptr;
      if ( (*((_BYTE *)v27 + 123) & 0x20) != 0 )
        goto LABEL_34;
      goto LABEL_54;
    }
    v31 = v27[13];
    v32 = 17;
    while ( 2 )
    {
      if ( *(char *)(v31 + 3) < 0 )
      {
        if ( *(_BYTE *)(v31 + 3) >> 6 != 2 )
        {
          v33 = (__int64 **)(*(_QWORD *)(v31 + 16) + 8LL * v30);
          goto LABEL_33;
        }
LABEL_62:
        v31 = *(_QWORD *)(v31 + 16);
        if ( !--v32 )
        {
          v361 = v37;
          v47 = v27;
          sub_236900((_QWORD *)(v44 + 672), v27 + 13);
          v43 = *((_BYTE *)*v360 + 123);
          v44 = *(_QWORD *)*v360;
          v27 = *v360;
          v33 = (__int64 **)(*(_QWORD *)(v47[13] + 16LL) + 8LL * v30);
          v37 = (char *)v361;
          goto LABEL_33;
        }
        continue;
      }
      break;
    }
    if ( *(_DWORD *)(v31 + 4) != v30 )
      goto LABEL_62;
    v33 = (__int64 **)(v31 + 8);
LABEL_33:
    v34 = *v33;
    if ( (v43 & 0x20) == 0 )
    {
LABEL_54:
      v45 = v27[9];
      v46 = 17;
      do
      {
        if ( *(char *)(v45 + 3) >= 0 )
        {
          if ( *(_DWORD *)(v45 + 4) == v30 )
            goto LABEL_34;
        }
        else if ( *(_BYTE *)(v45 + 3) >> 6 != 2 )
        {
          goto LABEL_34;
        }
        v45 = *(_QWORD *)(v45 + 16);
        --v46;
      }
      while ( v46 );
      v359 = v34;
      v361 = v37;
      sub_233F80((__int64 *)(v44 + 616), (_DWORD *)v27 + 18);
    }
LABEL_34:
    sub_F79EF0(v4 + 8);
    ++v30;
    v28 = *((_QWORD *)*v360 + 9);
    v27 = *v360;
    if ( v28 )
    {
      v29 = *(_QWORD *)*v360;
      continue;
    }
    break;
  }
LABEL_68:
  v48 = *(__int64 **)(v4 + 128);
  if ( !v48 || (v49 = &v48[*((unsigned int *)v48 - 1)], v48 == v49) )
  {
LABEL_109:
    *((_DWORD *)v27 + 30) = (*((_DWORD *)v27 + 30) + 1) & 0x3FFFFFF | v27[15] & 0xFC000000;
    v67 = *v360;
    if ( *v360 )
      ++*((_DWORD *)v67 + 8);
    v68 = *(_DWORD *)(v350 + 8);
    v69 = *(_DWORD *)(v350 + 12);
    if ( v68 >= v69 )
    {
      v268 = 2 * v69;
      v70 = sub_186B270(16LL * v69);
      v68 = *(_DWORD *)(v350 + 8);
      v269 = *(_QWORD **)v350;
      if ( v68 )
      {
        if ( v68 - 1 <= 2 || (_QWORD *)v70 == v269 + 1 )
        {
          for ( m = 0; m != v68; ++m )
            *(_QWORD *)(v70 + m * 8) = v269[m];
        }
        else
        {
          v270 = 0;
          do
          {
            *(__m128i *)(v70 + v270 * 8) = _mm_loadu_si128((const __m128i *)&v269[v270]);
            v270 += 2;
          }
          while ( 2LL * (v68 >> 1) != v270 );
          if ( (v68 & 1) != 0 )
            *(_QWORD *)(v70 + 8LL * (v68 & 0xFFFFFFFE)) = v269[v68 & 0xFFFFFFFE];
        }
      }
      if ( v269 != (_QWORD *)(v350 + 16) && v269 )
      {
        sub_186B220(v269);
        v68 = *(_DWORD *)(v350 + 8);
      }
      *(_QWORD *)v350 = v70;
      *(_DWORD *)(v350 + 12) = v268;
    }
    else
    {
      v70 = *(_QWORD *)v350;
    }
    *(_QWORD *)(v70 + 8LL * v68) = v67;
    *(_DWORD *)(v350 + 8) = v68 + 1;
    return sub_EE4A00(v344);
  }
  v361 = v377;
  v357 = &v381;
  while ( 1 )
  {
    v50 = *v48;
    v377[0] = 0;
    v377[1] = 0;
    v378[0] = 1;
    v378[1] = 0;
    v51 = sub_CBFB60(v4, v50, (__int64)v361);
    v52 = qword_1C7F2C0;
    if ( v51 )
      break;
    sub_182CBA0(qword_1C7F2C0, v361);
    sub_182CBA0(v52, v378);
LABEL_72:
    if ( v49 == ++v48 )
    {
      v27 = *v360;
      goto LABEL_109;
    }
  }
  ptr = &dword_0 + 1;
  v380 = 0;
  v381 = 1;
  v382 = 0;
  sub_182CBA0(qword_1C7F2C0, v357);
  BYTE4(v381) &= ~1u;
  LODWORD(v381) = 1;
  v53 = qword_1C7F2C0;
  if ( (v378[0] & 0x100000000LL) == 0 && LODWORD(v378[0]) == 1 )
  {
    if ( (BYTE4(ptr) & 1) != 0 || (v377[0] & 0x100000000LL) != 0 )
    {
      v54 = (int)sub_182C7B0(qword_1C7F2C0, &ptr, v361) < 0;
      v53 = qword_1C7F2C0;
    }
    else
    {
      v54 = (int)ptr < SLODWORD(v377[0]);
    }
  }
  else
  {
    v54 = sub_1848D40(qword_1C7F2C0, &ptr, v361);
    v53 = qword_1C7F2C0;
  }
  sub_182CBA0(v53, &ptr);
  sub_182CBA0(v53, v357);
  v359 = (__int64 *)qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v361);
  sub_182CBA0(v359, v378);
  if ( !v54 )
    goto LABEL_72;
  v377[0] = v4;
  v55 = *v360;
  v56 = *((_QWORD *)*v360 + 9);
  ptr = v357;
  v380 = 0x1000000000LL;
  if ( v56 )
  {
    for ( n = *(_BYTE *)(v56 + 3) >> 6; !n; n = *(_BYTE *)(v56 + 3) >> 6 )
      v56 = *(_QWORD *)(v56 + 16);
    if ( n == 1 )
      v58 = (unsigned int)(*(_DWORD *)(v56 + 4) + 1);
    else
      v58 = n == 2 ? (unsigned int)(*(_DWORD *)(v56 + 4) - 1) : *(unsigned int *)(v56 + 4);
    if ( (_DWORD)v58 )
    {
      v59 = 0;
      while ( 1 )
      {
        v61 = *v55;
        if ( (*((_BYTE *)v55 + 123) & 0x20) != 0 )
        {
          v60 = *(_QWORD *)(v61 + 864);
          goto LABEL_86;
        }
        v62 = v55[9];
        v63 = 17;
        while ( 1 )
        {
          if ( *(char *)(v62 + 3) < 0 )
          {
            if ( *(_BYTE *)(v62 + 3) >> 6 != 2 )
            {
              v64 = (__int64 *)(*(_QWORD *)(v62 + 16) + 8 * v59);
              goto LABEL_92;
            }
            goto LABEL_106;
          }
          if ( *(_DWORD *)(v62 + 4) == (_DWORD)v59 )
            break;
LABEL_106:
          v62 = *(_QWORD *)(v62 + 16);
          if ( !--v63 )
          {
            sub_233F80((__int64 *)(v61 + 616), (_DWORD *)v55 + 18);
            v64 = (__int64 *)(*(_QWORD *)(v55[9] + 16LL) + 8 * v59);
            goto LABEL_92;
          }
        }
        v64 = (__int64 *)(v62 + 8);
LABEL_92:
        v60 = *v64;
LABEL_86:
        sub_CC0CE0((__int64 *)v361, (__int64)&ptr, v60);
        if ( v58 == ++v59 )
        {
          v72 = ptr;
          v73 = (char *)ptr + 8 * (unsigned int)v380;
          v74 = ptr == v357 || ptr == nullptr;
          if ( ptr != v73 )
          {
            v75 = (char *)ptr;
            do
            {
              v76 = *(_QWORD *)v75;
              v75 += 8;
              *(_BYTE *)(v76 + 6) &= ~1u;
            }
            while ( v73 != v75 );
          }
          LODWORD(v380) = 0;
          if ( !v74 )
            sub_186B220(v72);
          break;
        }
      }
    }
  }
  if ( !(unsigned __int8)sub_CC0640(v4) )
  {
    v308 = (char **)__cxa_allocate_exception(0x28u);
    sub_16387A(
      (__int64 *)&ptr,
      "lia2pb failed, number of necessary bits exceeds specified threshold (use option :lia2pb-total-bits to increase threshold)",
      v309);
    *v308 = (char *)off_1C63670;
    sub_2333C0(v308 + 1, &ptr);
    sub_233E40((__int64)&ptr);
    __cxa_throw(v308, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  if ( *(_BYTE *)(v4 + 184) )
  {
    v148 = (__m128i *)sub_186B270(0x50u);
    v148[1].m128i_i8[8] = 1;
    v149 = *(_QWORD *)v4;
    v148[1].m128i_i64[0] = 0;
    v353 = v148;
    v319 = v149;
    strcpy(&v148[3].m128i_i8[8], "lia2pb");
    v148->m128i_i64[0] = (__int64)&off_1C60CE8;
    v148[3].m128i_i64[0] = 6;
    v148[4].m128i_i64[1] = 0;
    v148->m128i_i32[2] = 1;
    v148[2] = _mm_unpacklo_epi64((__m128i)v149, (__m128i)(unsigned __int64)&v148[3].m128i_u64[1]);
  }
  else
  {
    v353 = nullptr;
    v319 = *(_QWORD *)v4;
  }
  ptr = nullptr;
  LODWORD(v335) = v4 + 136;
  v380 = 0;
  v381 = 1;
  v382 = 0;
  sub_182CBA0(qword_1C7F2C0, v357);
  v80 = *(_QWORD *)(v4 + 144);
  BYTE4(v381) &= ~1u;
  LODWORD(v381) = 1;
  if ( !v80 )
  {
    sub_16669E0(v4 + 136);
    v80 = *(_QWORD *)(v4 + 144);
  }
  v81 = sub_166A700(v80, (unsigned int)&ptr, 1, v77, v78, v79);
  v348 = v81;
  if ( v81 )
    ++*(_DWORD *)(v81 + 8);
  v82 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &ptr);
  sub_182CBA0(v82, v357);
  ptr = &dword_0 + 1;
  v380 = 0;
  v381 = 1;
  v382 = 0;
  sub_182CBA0(qword_1C7F2C0, v357);
  v86 = *(_QWORD *)(v4 + 144);
  BYTE4(v381) &= ~1u;
  LODWORD(v381) = 1;
  if ( !v86 )
  {
    sub_16669E0(v4 + 136);
    v86 = *(_QWORD *)(v4 + 144);
  }
  v87 = sub_166A700(v86, (unsigned int)&ptr, 1, v83, v84, v85);
  v349 = v87;
  if ( v87 )
    ++*(_DWORD *)(v87 + 8);
  v88 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &ptr);
  sub_182CBA0(v88, v357);
  sub_1694A90(v361, *(_QWORD *)v4, *(unsigned __int8 *)(v4 + 185), 0);
  v363[0] = 0;
  v363[1] = 0;
  v380 = 0x1000000000LL;
  v89 = *(__int64 **)(v4 + 128);
  v364[0] = 1;
  v364[1] = 0;
  ptr = v357;
  if ( !v89 || (v346 = &v89[*((unsigned int *)v89 - 1)], v346 == v89) )
  {
    v351 = v363;
    goto LABEL_256;
  }
  v359 = v89;
  v341 = 0;
  v351 = v363;
  while ( 2 )
  {
    v347 = *v359;
    if ( !sub_CBFB60(v4, *v359, (__int64)v351) )
      goto LABEL_134;
    *(_QWORD *)v373 = 1;
    v374 = 0;
    v375 = 1;
    v376 = 0;
    sub_182CBA0(qword_1C7F2C0, &v375);
    BYTE4(v375) &= ~1u;
    LODWORD(v375) = 1;
    v90 = qword_1C7F2C0;
    if ( (v364[0] & 0x100000000LL) == 0 && LODWORD(v364[0]) == 1 )
    {
      if ( (v373[1] & 1) != 0 || (v363[0] & 0x100000000LL) != 0 )
      {
        v91 = (int)sub_182C7B0(qword_1C7F2C0, v373, v351) < 0;
        v90 = qword_1C7F2C0;
      }
      else
      {
        v91 = v373[0] < SLODWORD(v363[0]);
      }
    }
    else
    {
      v91 = sub_1848D40(qword_1C7F2C0, v373, v351);
      v90 = qword_1C7F2C0;
    }
    sub_182CBA0(v90, v373);
    sub_182CBA0(v90, &v375);
    if ( !v91 )
      goto LABEL_134;
    ++v341;
    LODWORD(v380) = 0;
    v365[0] = 1;
    v365[1] = 0;
    v366[0] = 1;
    v366[1] = 0;
    v337 = v366;
    sub_182CBA0(qword_1C7F2C0, v366);
    BYTE4(v366[0]) &= ~1u;
    LODWORD(v366[0]) = 1;
    v367[0] = 2;
    v367[1] = 0;
    v368[0] = 1;
    v368[1] = 0;
    v352 = v368;
    v356 = v365;
    sub_182CBA0(qword_1C7F2C0, v368);
    BYTE4(v368[0]) &= ~1u;
    LODWORD(v368[0]) = 1;
    v369 = 0;
    v92 = qword_1C7F2C0;
    v370 = 0;
    v371 = 1;
    v372 = 0;
    if ( (v363[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v369, v351);
    else
      LODWORD(v369) = v363[0];
    if ( (v364[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v92, &v371, v364);
    }
    else
    {
      BYTE4(v371) &= ~1u;
      LODWORD(v371) = v364[0];
    }
    LOBYTE(v373[1]) &= 0xFCu;
    BYTE4(v375) &= 0xFCu;
    v373[0] = 0;
    v93 = qword_1C7F2C0;
    v374 = 0;
    v358 = &v369;
    LODWORD(v375) = 1;
    v376 = 0;
    sub_1833EB0(qword_1C7F2C0, &v369, v367, v373);
    sub_182CBA0(v93, &v375);
    v94 = v373[0];
    v373[0] = v369;
    LODWORD(v369) = v94;
    v95 = v374;
    v374 = v370;
    v370 = v95;
    v96 = v373[1] & 1;
    LOBYTE(v95) = BYTE4(v369) & 0xFC | v373[1] & 2;
    LOBYTE(v373[1]) = BYTE4(v369) & 1 | v373[1] & 0xFC | BYTE4(v369) & 2;
    BYTE4(v369) = v96 | v95;
    LODWORD(v375) = v371;
    v97 = v372;
    v372 = v376;
    v376 = v97;
    LODWORD(v371) = 1;
    LOBYTE(v95) = BYTE4(v371) & 0xFC | BYTE4(v375) & 2;
    BYTE4(v375) = BYTE4(v371) & 1 | BYTE4(v371) & 2 | BYTE4(v375) & 0xFC;
    BYTE4(v371) = v95;
    v98 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v373);
    sub_182CBA0(v98, &v375);
    LODWORD(v355) = 1;
    if ( (int)v369 <= 0 )
    {
      v277 = v358;
      v358 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v277);
      sub_182CBA0(v358, &v371);
      v278 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v367);
      sub_182CBA0(v278, v352);
LABEL_147:
      LODWORD(v358) = 0;
      v356 = v365;
      do
      {
        v119 = *(_QWORD *)v4;
        v120 = sub_15D2CD0(*(_QWORD *)(v4 + 136), 5, 1, 0, 0);
        sub_180C5A0(v373, 0);
        v121 = sub_15E3D10(
                 v119,
                 (int)v373,
                 (int)&qword_18D6CD0,
                 0,
                 0,
                 v120,
                 1,
                 v314,
                 v315,
                 v319,
                 v323,
                 (int)v327,
                 (int)v331,
                 v335,
                 (char)v337,
                 v339,
                 (int)v342,
                 (int)v344,
                 (int)v346,
                 v347,
                 v348,
                 v349,
                 v350,
                 (int)v351,
                 (int)v352,
                 (int)v353,
                 v354,
                 v355,
                 (int)v356,
                 v357,
                 (int)v358,
                 (__int64)v359);
        v123 = sub_15DC610(v119, v121, 0, 0, v314, v122, v316, v320, v324, v328, v332, v336, v338, v340, v343, v345);
        v124 = *v360;
        v125 = sub_15E1B70(*(_QWORD *)(v4 + 136));
        sub_EDBA20((int)v124, v125, 0, v317, v321, v325, v329, v333);
        v126 = *v360;
        v127 = sub_15E1B70(*(_QWORD *)(v4 + 136));
        sub_EDBA20((int)v126, v127, 0, v318, v322, v326, v330, v334);
        if ( (v365[0] & 0x100000000LL) != 0
          || LODWORD(v365[0]) != 1
          || (v366[0] & 0x100000000LL) != 0
          || LODWORD(v366[0]) != 1 )
        {
          v131 = *(_QWORD *)(v4 + 144);
          if ( !v131 )
          {
            sub_16669E0(v335);
            v131 = *(_QWORD *)(v4 + 144);
          }
          sub_166A700(v131, (_DWORD)v356, 1, v128, v129, v130);
          v132 = sub_15E1B70(*(_QWORD *)(v4 + 136));
          v133 = v380;
          v134 = (_QWORD *)v132;
          if ( (unsigned int)v380 < HIDWORD(v380) )
          {
            v107 = ptr;
          }
          else
          {
            v352 = (_QWORD *)v132;
            v135 = (unsigned int)(2 * HIDWORD(v380));
            v136 = (char *)sub_186B270(8 * v135);
            v133 = v380;
            v137 = (__int64 *)ptr;
            v107 = v136;
            v134 = v352;
            if ( (_DWORD)v380 )
            {
              if ( (unsigned int)(v380 - 1) <= 2 || v136 == (char *)ptr + 8 )
              {
                v253 = 0;
                v254 = 8LL * (unsigned int)v380;
                do
                {
                  v107[v253 / 8] = v137[v253 / 8];
                  v253 += 8LL;
                }
                while ( v254 != v253 );
              }
              else
              {
                v138 = 0;
                v139 = 16LL * ((unsigned int)v380 >> 1);
                do
                {
                  *(__m128i *)&v107[v138 / 8] = _mm_loadu_si128((const __m128i *)&v137[v138 / 8]);
                  v138 += 16LL;
                }
                while ( v138 != v139 );
                if ( (v133 & 1) != 0 )
                  v107[v133 & 0xFFFFFFFE] = v137[v133 & 0xFFFFFFFE];
              }
            }
            if ( v137 != v357 && v137 )
            {
              v342 = v107;
              v352 = v134;
              sub_186B220(v137);
              v133 = v380;
              v107 = v342;
              v134 = v352;
            }
            ptr = v107;
            HIDWORD(v380) = v135;
          }
          v108 = v133;
          v109 = v133 + 1;
          v107[v108] = v134;
        }
        else
        {
          v179 = v380;
          if ( (unsigned int)v380 >= HIDWORD(v380) )
          {
            LODWORD(v352) = 2 * HIDWORD(v380);
            v284 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v380)));
            v179 = v380;
            v285 = (__int64 *)ptr;
            v180 = v284;
            v286 = (int)v352;
            if ( (_DWORD)v380 )
            {
              if ( (unsigned int)(v380 - 1) <= 2 || v284 == (char *)ptr + 8 )
              {
                v302 = 0;
                v303 = 8LL * (unsigned int)v380;
                do
                {
                  v180[v302 / 8] = v285[v302 / 8];
                  v302 += 8LL;
                }
                while ( v302 != v303 );
              }
              else
              {
                v287 = 0;
                v288 = 16LL * ((unsigned int)v380 >> 1);
                do
                {
                  *(__m128i *)&v180[v287 / 8] = _mm_loadu_si128((const __m128i *)&v285[v287 / 8]);
                  v287 += 16LL;
                }
                while ( v288 != v287 );
                if ( (v179 & 1) != 0 )
                  v180[v179 & 0xFFFFFFFE] = v285[v179 & 0xFFFFFFFE];
              }
            }
            if ( v285 != v357 && v285 )
            {
              LODWORD(v352) = v286;
              sub_186B220(v285);
              v179 = v380;
              v286 = (int)v352;
            }
            ptr = v180;
            HIDWORD(v380) = v286;
          }
          else
          {
            v180 = ptr;
          }
          v181 = v179;
          v109 = v179 + 1;
          v180[v181] = v123;
        }
        v10 = *(_BYTE *)(v4 + 184) == 0;
        LODWORD(v380) = v109;
        if ( !v10 )
        {
          v110 = *(_QWORD *)(v123 + 16);
          v352 = *((_QWORD **)v353 + 4);
          if ( v110 )
            ++*(_DWORD *)(v110 + 8);
          v111 = *((_QWORD **)v353 + 9);
          if ( v111 )
          {
            v112 = *((_DWORD *)v111 - 1);
            if ( v112 == *((_DWORD *)v111 - 2) )
            {
              v160 = (3 * v112 + 1) >> 1;
              v161 = 40 * v160 + 8;
              if ( 40 * v112 + 8 >= (unsigned int)v161 || v112 >= v160 )
              {
                v312 = (char **)__cxa_allocate_exception(0x28u);
                sub_16387A((__int64 *)v373, "Overflow encountered when expanding vector", v313);
                *v312 = (char *)off_1C63128;
                sub_2333C0(v312 + 1, v373);
                sub_233E40((__int64)v373);
                __cxa_throw(v312, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              LODWORD(v342) = (3 * v112 + 1) >> 1;
              v162 = (_DWORD *)sub_186B270(v161);
              v163 = (int)v342;
              v111 = v162 + 2;
              v164 = *((_QWORD **)v353 + 9);
              if ( v164 )
              {
                v165 = *((unsigned int *)v164 - 1);
                v166 = v162 + 2;
                v162[1] = v165;
                v167 = &v164[5 * v165];
                for ( ii = v164; v167 != ii; *(v166 - 2) = *((_DWORD *)ii - 2) )
                {
                  v169 = ii[1];
                  ii += 5;
                  v166 += 10;
                  *((_QWORD *)v166 - 4) = v169;
                  v170 = *(ii - 5);
                  *(ii - 5) = 0;
                  *((_QWORD *)v166 - 5) = v170;
                  *((_QWORD *)v166 - 2) = *(ii - 2);
                  v171 = *(ii - 3);
                  *(ii - 3) = 0;
                  *((_QWORD *)v166 - 3) = v171;
                }
                if ( (_DWORD)v165 )
                {
                  v323 = v4;
                  v172 = v164;
                  v173 = &v164[5 * v165];
                  v327 = v162;
                  do
                  {
                    while ( 1 )
                    {
                      v176 = v172[2];
                      if ( v176 )
                      {
                        v177 = v172[3];
                        v10 = (*(_DWORD *)(v176 + 8))-- == 1;
                        if ( v10 )
                          sub_15D7BC0(v177, v176);
                      }
                      v174 = *v172;
                      if ( *v172 )
                      {
                        v175 = v172[1];
                        v10 = (*(_DWORD *)(v174 + 8))-- == 1;
                        if ( v10 )
                          break;
                      }
                      v172 += 5;
                      if ( v172 == v173 )
                        goto LABEL_224;
                    }
                    sub_15D7BC0(v175, v174);
                    v172 += 5;
                  }
                  while ( v172 != v173 );
LABEL_224:
                  v163 = (int)v342;
                  v162 = v327;
                  v4 = v323;
                  v164 = *((_QWORD **)v353 + 9);
                }
                v331 = v162;
                LODWORD(v342) = v163;
                sub_186B220(v164 - 1);
                v162 = v331;
                v163 = (int)v342;
                v115 = (__m128 *)&v111[5 * (unsigned int)v331[1]];
                v114 = v331[1] + 1;
              }
              else
              {
                v162[1] = 0;
                v115 = (__m128 *)(v162 + 2);
                v114 = 1;
              }
              v178 = v353;
              *v162 = v163;
              v178[9] = v111;
            }
            else
            {
              v113 = v112;
              v114 = v112 + 1;
              v115 = (__m128 *)&v111[5 * v113];
            }
          }
          else
          {
            v266 = (_QWORD *)sub_186B270(0x58u);
            v111 = v266 + 1;
            *v266 = 2;
            v115 = (__m128 *)(v266 + 1);
            *((_QWORD *)v353 + 9) = v266 + 1;
            v114 = 1;
          }
          v116 = v352;
          v115[1].m128_u64[0] = 0;
          v117 = _mm_loadh_ps((const double *)&v352);
          v115[2].m128_i32[0] = 0;
          v115[1].m128_u64[1] = (unsigned __int64)v116;
          *v115 = v117;
          *((_DWORD *)v111 - 1) = v114;
        }
        *(_QWORD *)v373 = 2;
        v374 = 0;
        v375 = 1;
        v376 = 0;
        sub_182CBA0(qword_1C7F2C0, &v375);
        LODWORD(v375) = 1;
        BYTE4(v375) &= ~1u;
        if ( (v366[0] & 0x100000000LL) == 0 && LODWORD(v366[0]) == 1 )
        {
          v352 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, v356, v373);
          sub_182CBA0(v352, v337);
          BYTE4(v366[0]) &= ~1u;
          LODWORD(v366[0]) = 1;
        }
        else
        {
          sub_1848FF0(qword_1C7F2C0, v356, v373);
        }
        v118 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v373);
        sub_182CBA0(v118, &v375);
        LODWORD(v358) = (_DWORD)v358 + 1;
      }
      while ( (_DWORD)v358 != (_DWORD)v355 );
    }
    else
    {
      do
      {
        LODWORD(v355) = v355 + 1;
        v99 = qword_1C7F2C0;
        LOBYTE(v373[1]) &= 0xFCu;
        BYTE4(v375) &= 0xFCu;
        v373[0] = 0;
        v374 = 0;
        LODWORD(v375) = 1;
        v376 = 0;
        sub_1833EB0(qword_1C7F2C0, v358, v367, v373);
        sub_182CBA0(v99, &v375);
        v100 = v373[0];
        v373[0] = v369;
        LODWORD(v369) = v100;
        v101 = v374;
        v374 = v370;
        v370 = v101;
        v102 = v373[1] & 1;
        LOBYTE(v101) = BYTE4(v369) & 0xFC | v373[1] & 2;
        LOBYTE(v373[1]) = BYTE4(v369) & 1 | v373[1] & 0xFC | BYTE4(v369) & 2;
        BYTE4(v369) = v102 | v101;
        LODWORD(v375) = v371;
        v103 = v372;
        v372 = v376;
        v376 = v103;
        LODWORD(v371) = 1;
        LOBYTE(v101) = BYTE4(v371) & 0xFC | BYTE4(v375) & 2;
        BYTE4(v375) = BYTE4(v371) & 1 | BYTE4(v371) & 2 | BYTE4(v375) & 0xFC;
        BYTE4(v371) = v101;
        v104 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v373);
        sub_182CBA0(v104, &v375);
      }
      while ( (int)v369 > 0 );
      v105 = v358;
      v358 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v105);
      sub_182CBA0(v358, &v371);
      v106 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v367);
      sub_182CBA0(v106, v352);
      if ( (_DWORD)v355 )
        goto LABEL_147;
      v356 = v365;
    }
    if ( (_DWORD)v380 != 1 || (v182 = *(_QWORD *)ptr, *(_WORD *)(*(_QWORD *)ptr + 4LL)) )
      v182 = sub_15E1AF0(*(_QWORD *)(v4 + 136));
    if ( !*(_BYTE *)(v4 + 185) )
    {
      v191 = nullptr;
      goto LABEL_252;
    }
    v183 = *(unsigned int *)(v4 + 104);
    v184 = *(unsigned int ***)(v4 + 96);
    v185 = *(_DWORD *)(v347 + 12);
    v186 = v183 - 1;
    v183 *= 16;
    v187 = (unsigned int **)((char *)v184 + v183);
    v188 = 16LL * (v185 & v186);
    v189 = &v184[(unsigned __int64)v188 / 8];
    if ( v188 != v183 )
    {
      for ( jj = &v184[(unsigned __int64)v188 / 8]; v187 != jj; jj += 2 )
      {
        v191 = *jj;
        if ( (unsigned __int64)*jj > 1 )
        {
          if ( v191[3] == v185 && (unsigned int *)v347 == v191 )
          {
LABEL_351:
            v191 = jj[1];
            goto LABEL_244;
          }
        }
        else if ( !v191 )
        {
          goto LABEL_244;
        }
      }
    }
    for ( ; v189 != v184; v184 += 2 )
    {
      v191 = *v184;
      if ( (unsigned __int64)*v184 > 1 )
      {
        if ( v191[3] == v185 && (unsigned int *)v347 == v191 )
        {
          jj = v184;
          goto LABEL_351;
        }
      }
      else if ( !v191 )
      {
        goto LABEL_244;
      }
    }
    v191 = nullptr;
LABEL_244:
    v192 = *(unsigned int *)(v4 + 80);
    v193 = *(__int64 **)(v4 + 72);
    v194 = v192 - 1;
    v192 *= 16;
    v195 = (__int64 *)((char *)v193 + v192);
    v196 = 16LL * (v185 & v194);
    v197 = &v193[(unsigned __int64)v196 / 8];
    if ( v196 == v192 )
    {
LABEL_365:
      if ( v193 != v197 )
      {
        while ( 1 )
        {
          v267 = *v193;
          if ( (unsigned __int64)*v193 > 1 )
          {
            if ( *(_DWORD *)(v267 + 12) == v185 && v347 == v267 )
            {
              v198 = v193;
              goto LABEL_353;
            }
          }
          else if ( !v267 )
          {
            goto LABEL_251;
          }
          v193 += 2;
          if ( v197 == v193 )
            goto LABEL_251;
        }
      }
      goto LABEL_251;
    }
    v198 = &v193[(unsigned __int64)v196 / 8];
    while ( 2 )
    {
      v199 = *v198;
      if ( (unsigned __int64)*v198 <= 1 )
      {
        if ( !v199 )
          goto LABEL_251;
        goto LABEL_248;
      }
      if ( *(_DWORD *)(v199 + 12) != v185 || v347 != v199 )
      {
LABEL_248:
        v198 += 2;
        if ( v195 == v198 )
          goto LABEL_365;
        continue;
      }
      break;
    }
LABEL_353:
    v255 = (unsigned int *)v198[1];
    if ( v255 )
    {
      if ( !v191 || v255 == v191 )
      {
        v191 = (unsigned int *)v198[1];
        v260 = (*v255 + 1) & 0x3FFFFFFF;
      }
      else
      {
        v256 = *(_QWORD *)v4;
        v358 = v191;
        v257 = sub_17E9C90(*(_QWORD *)(v256 + 656), 24);
        v258 = v358;
        v259 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v255, (__m128i)(unsigned __int64)v358);
        *v255 = (*v255 + 1) & 0x3FFFFFFF | *v255 & 0xC0000000;
        *v258 = (*v258 + 1) & 0x3FFFFFFF | *v258 & 0xC0000000;
        v191 = (unsigned int *)v257;
        v260 = 1;
        *(_QWORD *)v191 = 0;
        *(__m128i *)(v191 + 2) = v259;
      }
LABEL_357:
      v261 = *(_QWORD **)(v4 + 160);
      *v191 = v260 & 0x3FFFFFFF | *v191 & 0xC0000000;
      if ( v261 )
      {
        v262 = *((_DWORD *)v261 - 1);
        if ( v262 == *((_DWORD *)v261 - 2) )
        {
          v280 = (3 * v262 + 1) >> 1;
          v281 = 8 * v280 + 8;
          if ( 8 * v262 + 8 >= v281 || v262 >= v280 )
          {
            v306 = (char **)__cxa_allocate_exception(0x28u);
            sub_16387A((__int64 *)v373, "Overflow encountered when expanding vector", v307);
            *v306 = (char *)off_1C63128;
            sub_2333C0(v306 + 1, v373);
            sub_233E40((__int64)v373);
            __cxa_throw(v306, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v358 = v191;
          v282 = (unsigned int *)sub_186B300(v261 - 1, v281);
          v283 = v282[1];
          v261 = v282 + 2;
          *v282 = v280;
          *(_QWORD *)(v4 + 160) = v282 + 2;
          v191 = (unsigned int *)v358;
          LODWORD(v282) = v283;
          v265 = (unsigned int **)&v261[v283];
          v264 = (_DWORD)v282 + 1;
        }
        else
        {
          v263 = v262;
          v264 = v262 + 1;
          v265 = (unsigned int **)&v261[v263];
        }
      }
      else
      {
        v358 = v191;
        v300 = (_QWORD *)sub_186B270(0x18u);
        *v300 = 2;
        v191 = (unsigned int *)v358;
        v264 = 1;
        v261 = v300 + 1;
        *(_QWORD *)(v4 + 160) = v261;
        v265 = (unsigned int **)v261;
      }
      *v265 = v191;
      *((_DWORD *)v261 - 1) = v264;
      goto LABEL_252;
    }
LABEL_251:
    if ( v191 )
    {
      v260 = (*v191 + 1) & 0x3FFFFFFF;
      goto LABEL_357;
    }
LABEL_252:
    sub_1692DB0(v361, v347, v182, 0, v191);
    if ( *(_BYTE *)(v4 + 184) )
      sub_13333D0((_DWORD)v353, *(_QWORD *)(v347 + 16), v182, v200, v201, v202);
    v203 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v356);
    sub_182CBA0(v203, v337);
LABEL_134:
    if ( v346 != ++v359 )
      continue;
    break;
  }
LABEL_256:
  sub_EE4A20(":converted-lia2pb");
  sub_14B64E0(v354, v361);
  v369 = 0;
  v204 = *(_QWORD *)v4;
  *(_QWORD *)v373 = 0;
  v370 = v204;
  v374 = v204;
  v205 = *v360;
  v206 = *((_QWORD *)*v360 + 9);
  if ( !v206 )
    goto LABEL_318;
  v207 = *((_QWORD *)*v360 + 9);
  for ( kk = *(_BYTE *)(v206 + 3) >> 6; !kk; kk = *(_BYTE *)(v207 + 3) >> 6 )
    v207 = *(_QWORD *)(v207 + 16);
  if ( kk == 1 )
    v209 = *(_DWORD *)(v207 + 4) + 1;
  else
    v209 = kk == 2 ? *(_DWORD *)(v207 + 4) - 1 : *(_DWORD *)(v207 + 4);
  if ( (*((_BYTE *)v205 + 123) & 0x20) != 0 || !v209 )
    goto LABEL_318;
  v210 = 0;
  v211 = 0;
  v359 = (__int64 *)v373;
  while ( 2 )
  {
    v235 = 17;
    while ( 2 )
    {
      if ( *(char *)(v206 + 3) < 0 )
      {
        if ( *(_BYTE *)(v206 + 3) >> 6 != 2 )
        {
          v236 = (_QWORD *)(v210 + *(_QWORD *)(v206 + 16));
          goto LABEL_301;
        }
LABEL_310:
        v206 = *(_QWORD *)(v206 + 16);
        if ( !--v235 )
        {
          sub_233F80((__int64 *)(*v205 + 616LL), (_DWORD *)v205 + 18);
          v236 = (_QWORD *)(v210 + *(_QWORD *)(v205[9] + 16LL));
          goto LABEL_301;
        }
        continue;
      }
      break;
    }
    if ( v211 != *(_DWORD *)(v206 + 4) )
      goto LABEL_310;
    v236 = (_QWORD *)(v206 + 8);
LABEL_301:
    sub_14BB8A0(v354, *v236, &v369, v359);
    if ( !*(_BYTE *)(v4 + 185) )
      goto LABEL_275;
    v212 = (__int64 *)*v360;
    if ( (*((_BYTE *)*v360 + 123) & 0x10) == 0 )
    {
      sub_14B6570(v354);
      goto LABEL_274;
    }
    v213 = *(_QWORD *)v4;
    v214 = v212[13];
    v215 = 18;
    while ( 2 )
    {
      if ( !--v215 )
      {
        v274 = *v212;
        v358 = *v360;
        sub_236900((_QWORD *)(v274 + 672), v212 + 13);
        v216 = (void **)(v210 + *(_QWORD *)(*((_QWORD *)v358 + 13) + 16LL));
        goto LABEL_270;
      }
      if ( *(char *)(v214 + 3) < 0 )
      {
        if ( *(_BYTE *)(v214 + 3) >> 6 != 2 )
        {
          v216 = (void **)(v210 + *(_QWORD *)(v214 + 16));
          goto LABEL_270;
        }
        goto LABEL_313;
      }
      if ( v211 != *(_DWORD *)(v214 + 4) )
      {
LABEL_313:
        v214 = *(_QWORD *)(v214 + 16);
        continue;
      }
      break;
    }
    v216 = (void **)(v214 + 8);
LABEL_270:
    v358 = *v216;
    v217 = (void *)sub_14B6570(v354);
    if ( v217 )
    {
      if ( v358 )
      {
        v356 = v358;
        if ( v217 != v358 )
        {
          v218 = *(_QWORD *)(v213 + 656);
          v358 = v217;
          v219 = sub_17E9C90(v218, 24);
          v220 = v356;
          v221 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v358, (__m128i)(unsigned __int64)v356);
          *(_DWORD *)v358 = (*(_DWORD *)v358 + 1) & 0x3FFFFFFF | *(_DWORD *)v358 & 0xC0000000;
          *v220 = (*v220 + 1) & 0x3FFFFFFF | *v220 & 0xC0000000;
          *(_QWORD *)v219 = 0;
          *(__m128i *)(v219 + 8) = v221;
        }
      }
    }
LABEL_274:
    sub_14B7D00(v354);
LABEL_275:
    v222 = *(_QWORD *)v4;
    v223 = *(void **)v373;
    if ( !*(_DWORD *)(*(_QWORD *)v4 + 712LL) )
      goto LABEL_294;
    v224 = *v360;
    v225 = *((_QWORD *)*v360 + 11);
    if ( !v225 )
      goto LABEL_288;
    v226 = *((_QWORD *)*v360 + 11);
    v227 = *(_BYTE *)(v225 + 3) >> 6;
    if ( v227 )
    {
      if ( v227 != 1 )
        goto LABEL_279;
LABEL_305:
      if ( v211 >= *(_DWORD *)(v226 + 4) + 1 )
        goto LABEL_306;
    }
    else
    {
      do
      {
        v226 = *(_QWORD *)(v226 + 16);
        v227 = *(_BYTE *)(v226 + 3) >> 6;
      }
      while ( !v227 );
      if ( v227 == 1 )
        goto LABEL_305;
LABEL_279:
      if ( v227 == 2 )
        v228 = *(_DWORD *)(v226 + 4) - 1;
      else
        v228 = *(_DWORD *)(v226 + 4);
      if ( v211 >= v228 )
      {
LABEL_306:
        v225 = 0;
        goto LABEL_288;
      }
    }
    v229 = 18;
    while ( 2 )
    {
      if ( !--v229 )
      {
        v275 = *(_QWORD *)v224;
        v355 = *(_QWORD *)v4;
        v356 = *(void **)v373;
        v358 = v224;
        sub_233F80((__int64 *)(v275 + 616), v224 + 22);
        v223 = v356;
        v222 = v355;
        v230 = (__int64 *)(v210 + *(_QWORD *)(*((_QWORD *)v358 + 11) + 16LL));
        goto LABEL_287;
      }
      if ( *(char *)(v225 + 3) < 0 )
      {
        if ( *(_BYTE *)(v225 + 3) >> 6 != 2 )
        {
          v230 = (__int64 *)(v210 + *(_QWORD *)(v225 + 16));
          goto LABEL_287;
        }
        goto LABEL_315;
      }
      if ( v211 != *(_DWORD *)(v225 + 4) )
      {
LABEL_315:
        v225 = *(_QWORD *)(v225 + 16);
        continue;
      }
      break;
    }
    v230 = (__int64 *)(v225 + 8);
LABEL_287:
    v225 = *v230;
LABEL_288:
    v231 = (_DWORD *)sub_15DE0E0(v222, v225, v223);
    v232 = v231;
    if ( v231 )
      ++v231[2];
    v233 = *(void **)v373;
    if ( *(_QWORD *)v373 )
    {
      v234 = v374;
      v10 = (*(_DWORD *)(*(_QWORD *)v373 + 8LL))-- == 1;
      if ( v10 )
      {
        v358 = v231;
        sub_15D7BC0(v234, v233);
        v232 = v358;
      }
    }
    *(_QWORD *)v373 = v232;
LABEL_294:
    sub_EDBFA0((int)*v360);
    ++v211;
    v210 += 8;
    v205 = *v360;
    if ( (*((_BYTE *)*v360 + 123) & 0x20) == 0 && v211 < v209 )
    {
      v206 = v205[9];
      continue;
    }
    break;
  }
LABEL_318:
  v237 = v353;
  *((_DWORD *)v205 + 30) = (*((_DWORD *)v205 + 30) + 1) & 0x3FFFFFF | v205[15] & 0xFC000000;
  v238 = *v360;
  v239 = sub_1336AB0(*((_QWORD *)*v360 + 1), v237);
  v240 = v239;
  if ( v239 )
    ++*(_DWORD *)(v239 + 8);
  v241 = (void (__fastcall ***)(void *))v238[1];
  if ( v241 )
  {
    v10 = (*((_DWORD *)v241 + 2))-- == 1;
    if ( v10 )
    {
      (**v241)(v241);
      sub_186B220(v241);
    }
  }
  v242 = v360;
  v238[1] = v240;
  v243 = *v242;
  if ( *v242 )
    ++v243[8];
  v244 = *(_DWORD *)(v350 + 8);
  v245 = *(_DWORD *)(v350 + 12);
  if ( v244 >= v245 )
  {
    v271 = 2 * v245;
    v246 = sub_186B270(8 * v271);
    v244 = *(_DWORD *)(v350 + 8);
    v272 = *(_QWORD **)v350;
    if ( v244 )
    {
      if ( v244 - 1 <= 2 || (_QWORD *)v246 == v272 + 1 )
      {
        for ( mm = 0; mm != v244; ++mm )
          *(_QWORD *)(v246 + mm * 8) = v272[mm];
      }
      else
      {
        v273 = 0;
        do
        {
          *(__m128i *)(v246 + v273 * 8) = _mm_loadu_si128((const __m128i *)&v272[v273]);
          v273 += 2;
        }
        while ( v273 != 2LL * (v244 >> 1) );
        if ( (v244 & 1) != 0 )
          *(_QWORD *)(v246 + 8LL * (v244 & 0xFFFFFFFE)) = v272[v244 & 0xFFFFFFFE];
      }
    }
    if ( v272 != (_QWORD *)(v350 + 16) && v272 )
    {
      sub_186B220(v272);
      v244 = *(_DWORD *)(v350 + 8);
    }
    *(_QWORD *)v350 = v246;
    *(_DWORD *)(v350 + 12) = v271;
  }
  else
  {
    v246 = *(_QWORD *)v350;
  }
  v247 = *(_DWORD **)v373;
  *(_QWORD *)(v246 + 8LL * v244) = v243;
  *(_DWORD *)(v350 + 8) = v244 + 1;
  if ( v247 )
  {
    v248 = v374;
    v10 = v247[2]-- == 1;
    if ( v10 )
      sub_15D7BC0(v248, v247);
  }
  v249 = v369;
  if ( v369 )
  {
    v250 = v370;
    v10 = (*(_DWORD *)(v369 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v250, v249);
  }
  if ( ptr != v357 && ptr )
    sub_186B220(ptr);
  v251 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v351);
  sub_182CBA0(v251, v364);
  sub_1695230(v361);
  if ( v349 )
  {
    LODWORD(v361) = *(_DWORD *)(v349 + 8);
    v10 = (_DWORD)v361 == 1;
    *(_DWORD *)(v349 + 8) = (_DWORD)v361 - 1;
    if ( v10 )
      sub_15D7BC0(v319, v349);
  }
  if ( v348 )
  {
    LODWORD(v361) = *(_DWORD *)(v348 + 8);
    v10 = (_DWORD)v361 == 1;
    *(_DWORD *)(v348 + 8) = (_DWORD)v361 - 1;
    if ( v10 )
      sub_15D7BC0(v319, v348);
  }
  v252 = (void (__fastcall ***)(_QWORD))v353;
  if ( v353 )
  {
    LODWORD(v361) = *((_DWORD *)v353 + 2);
    v10 = (_DWORD)v361 == 1;
    *((_DWORD *)v353 + 2) = (_DWORD)v361 - 1;
    if ( v10 )
    {
      (**v252)(v252);
      sub_186B220(v252);
    }
  }
  return sub_EE4A00(v344);
}

