__int64 __fastcall ClpSimplex::loadProblem(void **this, CoinStructuredModel *a2, char a3, char a4)
{
  CoinStructuredModel *v4; // rax
  int v6; // ebx
  int v7; // r13d
  int v8; // esi
  int v9; // esi
  int v10; // eax
  _DWORD *v11; // rax
  unsigned __int64 v12; // rax
  double **v13; // r15
  unsigned __int64 v14; // rax
  int v15; // ebx
  void *v16; // rbp
  int v17; // r12d
  double **v18; // r10
  __int64 (__fastcall *v19)(CoinModel *); // rax
  int v20; // eax
  int *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edx
  int *v25; // rcx
  int v26; // edx
  int *v27; // rdx
  __int64 v28; // rax
  char v29; // r9
  void *v30; // rbx
  signed int v31; // ebp
  __m128i si128; // xmm14
  double **v33; // r13
  _DWORD *v34; // r14
  __int64 v35; // rax
  int v36; // r12d
  int *v37; // r15
  unsigned int v38; // esi
  int v39; // r11d
  unsigned int v40; // edi
  __m128i *v41; // rax
  unsigned int v42; // edx
  __m128i v43; // xmm12
  __m128i v44; // xmm11
  __m128i v45; // xmm10
  __m128i v46; // xmm0
  __m128i v47; // xmm9
  __m128i v48; // xmm8
  __m128i v49; // xmm2
  __m128i v50; // xmm4
  __m128i v51; // xmm1
  __m128i v52; // xmm2
  __m128i v53; // xmm7
  __m128i v54; // xmm5
  __m128i v55; // xmm1
  __m128i v56; // xmm6
  __m128i v57; // xmm7
  __m128i v58; // xmm15
  __m128i v59; // xmm13
  __m128i v60; // xmm3
  __m128i v61; // xmm7
  __m128i v62; // xmm15
  __m128i v63; // xmm13
  __m128i v64; // xmm6
  __m128i v65; // xmm15
  __m128i v66; // xmm13
  __m128i v67; // xmm4
  __m128i v68; // xmm13
  __m128i v69; // xmm7
  __m128i v70; // xmm2
  __m128i v71; // xmm7
  __m128i v72; // xmm3
  __m128i v73; // xmm5
  __m128i v74; // xmm3
  __m128i v75; // xmm15
  __m128i v76; // xmm1
  __m128i v77; // xmm15
  signed int v78; // edx
  signed int *v79; // rax
  int v80; // edx
  char v81; // r13
  __int64 v82; // rbx
  unsigned int v83; // r12d
  _DWORD *v84; // r14
  __m128i v85; // xmm14
  __int64 v86; // r15
  __int64 v87; // rax
  int v88; // ebp
  int *v89; // rcx
  unsigned int v90; // edi
  int v91; // r11d
  unsigned int v92; // esi
  __m128i *v93; // rax
  unsigned int v94; // edx
  __m128i v95; // xmm12
  __m128i v96; // xmm11
  __m128i v97; // xmm10
  __m128i v98; // xmm0
  __m128i v99; // xmm9
  __m128i v100; // xmm8
  __m128i v101; // xmm2
  __m128i v102; // xmm4
  __m128i v103; // xmm1
  __m128i v104; // xmm2
  __m128i v105; // xmm7
  __m128i v106; // xmm5
  __m128i v107; // xmm1
  __m128i v108; // xmm6
  __m128i v109; // xmm7
  __m128i v110; // xmm15
  __m128i v111; // xmm13
  __m128i v112; // xmm3
  __m128i v113; // xmm7
  __m128i v114; // xmm15
  __m128i v115; // xmm13
  __m128i v116; // xmm6
  __m128i v117; // xmm15
  __m128i v118; // xmm13
  __m128i v119; // xmm4
  __m128i v120; // xmm13
  __m128i v121; // xmm7
  __m128i v122; // xmm2
  __m128i v123; // xmm7
  __m128i v124; // xmm3
  __m128i v125; // xmm5
  __m128i v126; // xmm3
  __m128i v127; // xmm15
  __m128i v128; // xmm1
  __m128i v129; // xmm15
  unsigned int v130; // edx
  unsigned int *v131; // rax
  int v132; // edx
  int v133; // eax
  __int64 v134; // rbx
  __int64 v135; // rax
  int *v136; // rsi
  __int64 v137; // r15
  int v138; // edx
  __int64 v139; // r8
  __int64 v140; // r9
  double *v141; // r12
  double *v142; // r11
  __int64 v143; // rdi
  char *v144; // r10
  __int64 v145; // rdx
  __int64 v146; // rcx
  double v147; // xmm0_8
  int v148; // edx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // r10
  double *v152; // r14
  double *v153; // r13
  double *v154; // r12
  __int64 v155; // rdi
  char *v156; // r11
  __int64 v157; // rdx
  __int64 v158; // rcx
  double v159; // xmm0_8
  int v160; // edx
  __int64 v161; // rsi
  _DWORD *v162; // r9
  __int64 v163; // r8
  char *v164; // rdi
  __int64 v165; // rax
  __int64 v166; // rdx
  int v167; // ecx
  _DWORD *v168; // rdi
  __int64 v169; // rbx
  __int64 v170; // rbp
  int v171; // esi
  double **v172; // r14
  int v173; // ebx
  __int64 v174; // r12
  __int64 v175; // rax
  int *v176; // r12
  __int64 v177; // rcx
  bool v178; // zf
  int v179; // ebp
  int v180; // eax
  int v181; // eax
  double **v182; // rax
  double *v183; // rcx
  double **v184; // rsi
  int v185; // edx
  double *v186; // rdi
  int *v187; // r14
  __int64 v188; // r9
  int v189; // r12d
  __int64 v190; // rax
  __int64 v191; // r8
  __int64 v192; // r11
  char *v193; // r13
  char *v194; // r8
  double *v195; // r10
  double **v196; // r9
  int v197; // edx
  int v198; // ecx
  CoinPackedMatrix *v199; // rax
  double **v200; // r12
  double **v201; // r13
  double **v202; // r14
  CoinPackedMatrix *v203; // rbp
  ClpPackedMatrix *v204; // rbx
  ClpModel *v205; // r15
  int v206; // edx
  int v207; // esi
  __int64 v208; // rcx
  _BYTE *v209; // rsi
  int v210; // edi
  char *v211; // r9
  unsigned int v212; // ecx
  __int64 v213; // rax
  unsigned int v214; // edx
  __int64 v215; // rax
  char *v216; // rdx
  _BYTE *v217; // rax
  __int64 v218; // rcx
  __int64 v219; // rax
  char *v220; // rcx
  ClpModel *v221; // rax
  _QWORD *v222; // rdi
  __int64 *v223; // rdx
  _QWORD *v224; // rax
  __int64 v225; // xmm0_8
  __int64 v226; // rax
  _QWORD *v227; // rsi
  int v228; // r8d
  _QWORD *v229; // rsi
  _QWORD *v230; // rdi
  _QWORD *v231; // rax
  __int64 *v232; // rdx
  __int64 v233; // r9
  __int64 v234; // xmm0_8
  __int64 v235; // rax
  ClpModel *v236; // rax
  _QWORD *v237; // rdi
  __int64 *v238; // rdx
  _QWORD *v239; // rax
  __int64 v240; // xmm0_8
  __int64 v241; // rax
  _QWORD *v242; // rsi
  int v243; // edi
  __int64 *v244; // rsi
  __int64 *v245; // rcx
  __int64 *v246; // rax
  __int64 *v247; // rdx
  __int64 v248; // r9
  __int64 v249; // xmm0_8
  __int64 v250; // rax
  __int64 v252; // r13
  int *v253; // r14
  int v254; // edx
  double *v255; // r13
  int *v256; // r14
  int v257; // edx
  __int64 v258; // rdx
  __int64 v259; // rcx
  double *v260; // rsi
  int v261; // edi
  double *v262; // rax
  __int64 v263; // rcx
  double *v264; // rdx
  double *v265; // r9
  __int64 v266; // rdx
  double *v267; // rax
  double *v268; // r8
  double *v269; // rax
  _DWORD *v270; // rsi
  _OWORD *v271; // rax
  double *v272; // r9
  int v273; // r8d
  double *v274; // rax
  __int64 v275; // rcx
  double *v276; // rdx
  double *v277; // rdi
  __int64 v278; // rsi
  double *v279; // rax
  __int64 v280; // rdx
  char *v281; // rcx
  char *v282; // rax
  _DWORD *v283; // rax
  int v284; // edi
  char *v285; // rax
  int v286; // edi
  int v287; // edi
  char *v288; // rcx
  unsigned __int64 v289; // rbx
  unsigned int v290; // eax
  char *v291; // rbx
  __int64 v292; // rdx
  unsigned int v293; // esi
  __int64 v294; // rdx
  char *v295; // rsi
  char *v296; // rdx
  __int64 v297; // rax
  __int64 v298; // rsi
  char *v299; // rsi
  char *v300; // rdx
  _BYTE *v301; // rax
  char v302; // r8
  _QWORD *v303; // rax
  _QWORD *v304; // rdi
  int v305; // ecx
  _QWORD *v306; // rsi
  __int64 *v307; // rax
  __int64 v308; // rdx
  __int64 v309; // xmm0_8
  __int64 v310; // rdx
  _QWORD *v311; // rax
  _QWORD *v312; // r8
  int v313; // r9d
  _QWORD *v314; // rsi
  char *v315; // rdx
  __int64 *v316; // rax
  __int64 v317; // rdi
  __int64 v318; // xmm0_8
  __int64 v319; // rax
  unsigned __int64 v320; // rax
  _QWORD *v321; // rax
  _QWORD *v322; // rdi
  __int64 v323; // rsi
  _QWORD *v324; // rdx
  __int64 *v325; // rcx
  __int64 v326; // rax
  __int64 v327; // xmm0_8
  __int64 v328; // rax
  _QWORD *v329; // rax
  _QWORD *v330; // rdx
  int v331; // eax
  _QWORD *v332; // rcx
  char *v333; // rsi
  __int64 *v334; // rdi
  __int64 v335; // r8
  __int64 v336; // xmm0_8
  __int64 v337; // rsi
  char *v338; // rsi
  char *v339; // rdx
  char v340; // r9
  void *dest; // [rsp+0h] [rbp-198h]
  void *desta; // [rsp+0h] [rbp-198h]
  char *destc; // [rsp+0h] [rbp-198h]
  void *destb; // [rsp+0h] [rbp-198h]
  int v346[4]; // [rsp+10h] [rbp-188h] BYREF
  void *v347; // [rsp+20h] [rbp-178h]
  ClpModel *v348; // [rsp+28h] [rbp-170h]
  void *v349; // [rsp+30h] [rbp-168h]
  void *v350; // [rsp+38h] [rbp-160h]
  double **v351; // [rsp+40h] [rbp-158h]
  double *v352; // [rsp+48h] [rbp-150h]
  char *v353; // [rsp+50h] [rbp-148h]
  double **v354; // [rsp+58h] [rbp-140h]
  double **v355; // [rsp+60h] [rbp-138h]
  double **v356; // [rsp+68h] [rbp-130h]
  int v357[2]; // [rsp+70h] [rbp-128h]
  int v358; // [rsp+78h] [rbp-120h]
  int v359; // [rsp+7Ch] [rbp-11Ch]
  __int64 v360; // [rsp+80h] [rbp-118h]
  void *v361; // [rsp+88h] [rbp-110h]
  int v362; // [rsp+90h] [rbp-108h]
  unsigned int v363; // [rsp+94h] [rbp-104h]
  int *v364; // [rsp+98h] [rbp-100h]
  void *v365; // [rsp+A0h] [rbp-F8h]
  void *v366; // [rsp+A8h] [rbp-F0h]
  char *v367; // [rsp+B0h] [rbp-E8h]
  char *v368; // [rsp+B8h] [rbp-E0h]
  char v369; // [rsp+CFh] [rbp-C9h] BYREF
  double *v370; // [rsp+D0h] [rbp-C8h] BYREF
  double *v371; // [rsp+D8h] [rbp-C0h] BYREF
  double *v372; // [rsp+E0h] [rbp-B8h] BYREF
  double *v373; // [rsp+E8h] [rbp-B0h] BYREF
  double *v374; // [rsp+F0h] [rbp-A8h] BYREF
  void *v375; // [rsp+F8h] [rbp-A0h] BYREF
  double *v376[19]; // [rsp+100h] [rbp-98h] BYREF

  v4 = a2;
  v6 = *((_DWORD *)a2 + 2);
  v7 = *((_DWORD *)a2 + 25);
  v8 = *((_DWORD *)a2 + 3);
  v348 = (ClpModel *)this;
  v358 = v6;
  v359 = v8;
  v9 = *((_DWORD *)v4 + 26);
  LODWORD(v4) = *((_DWORD *)v4 + 27);
  LODWORD(v352) = v9;
  LODWORD(v353) = (_DWORD)v4;
  v361 = *(this + 33);
  if ( v361 )
  {
    v10 = *((_DWORD *)this + 26);
    if ( v10 && v10 == v6 && (v284 = *((_DWORD *)this + 27), v284 == v359) && a4 )
    {
      v285 = (char *)operator new[](v284 + v10);
      v361 = v285;
      v286 = *((_DWORD *)v348 + 27);
      v178 = *((_DWORD *)v348 + 26) + v286 == 0;
      v287 = *((_DWORD *)v348 + 26) + v286;
      v288 = *((char **)v348 + 33);
      if ( !v178 )
      {
        v289 = (unsigned __int64)v285;
        if ( v288 != v285 )
        {
          v290 = v287 >> 3;
          if ( v287 >> 3 <= 0 )
          {
            v299 = (char *)v361;
          }
          else
          {
            if ( ((unsigned __int64)v288 >= v289 + 16 || v289 >= (unsigned __int64)(v288 + 16)) && v290 > 1 )
            {
              v291 = (char *)v361;
              v292 = 0;
              v293 = 0;
              do
              {
                ++v293;
                *(__m128i *)&v291[v292] = _mm_loadu_si128((const __m128i *)&v288[v292]);
                v292 += 16;
              }
              while ( v290 >> 1 > v293 );
              v294 = 8LL * (v290 & 0xFFFFFFFE);
              v295 = &v288[v294];
              v296 = &v291[v294];
              if ( v290 != (v290 & 0xFFFFFFFE) )
              {
                *v296 = *v295;
                v296[1] = v295[1];
                v296[2] = v295[2];
                v296[3] = v295[3];
                v296[4] = v295[4];
                v296[5] = v295[5];
                v296[6] = v295[6];
                v296[7] = v295[7];
              }
              LODWORD(v297) = v290 - 1;
            }
            else
            {
              v338 = (char *)v361;
              v297 = v290 - 1;
              v339 = *((char **)v348 + 33);
              do
              {
                v340 = *v339;
                v339 += 8;
                v338 += 8;
                *(v338 - 8) = v340;
                *(v338 - 7) = *(v339 - 7);
                *(v338 - 6) = *(v339 - 6);
                *(v338 - 5) = *(v339 - 5);
                *(v338 - 4) = *(v339 - 4);
                *(v338 - 3) = *(v339 - 3);
                *(v338 - 2) = *(v339 - 2);
                *(v338 - 1) = *(v339 - 1);
              }
              while ( v339 != &v288[8 * v297 + 8] );
            }
            v298 = 8LL * (int)v297 + 8;
            v288 += v298;
            v299 = (char *)v361 + v298;
          }
          switch ( v287 % 8 )
          {
            case 1:
              goto LABEL_381;
            case 2:
              goto LABEL_380;
            case 3:
              goto LABEL_379;
            case 4:
              goto LABEL_378;
            case 5:
              goto LABEL_377;
            case 6:
              goto LABEL_376;
            case 7:
              v299[6] = v288[6];
LABEL_376:
              v299[5] = v288[5];
LABEL_377:
              v299[4] = v288[4];
LABEL_378:
              v299[3] = v288[3];
LABEL_379:
              v299[2] = v288[2];
LABEL_380:
              v299[1] = v288[1];
LABEL_381:
              *v299 = *v288;
              break;
            default:
              break;
          }
        }
      }
      if ( (unsigned __int64)v287 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_446;
      v303 = (_QWORD *)operator new[](8LL * v287);
      v304 = v303;
      v365 = v303;
      v305 = *((_DWORD *)v348 + 27);
      v306 = *((_QWORD **)v348 + 15);
      if ( v305 && v306 != v303 )
      {
        if ( v305 >> 3 <= 0 )
        {
          v311 = v365;
        }
        else
        {
          v307 = *((__int64 **)v348 + 15);
          v308 = (unsigned int)((v305 >> 3) - 1);
          do
          {
            v309 = *v307;
            v307 += 8;
            v304 += 8;
            *(v304 - 8) = v309;
            *(v304 - 7) = *(v307 - 7);
            *(v304 - 6) = *(v307 - 6);
            *(v304 - 5) = *(v307 - 5);
            *(v304 - 4) = *(v307 - 4);
            *(v304 - 3) = *(v307 - 3);
            *(v304 - 2) = *(v307 - 2);
            *(v304 - 1) = *(v307 - 1);
          }
          while ( v307 != &v306[8 * v308 + 8] );
          v310 = ((int)v308 + 1LL) << 6;
          v306 = (_QWORD *)((char *)v306 + v310);
          v311 = (char *)v365 + v310;
        }
        switch ( v305 % 8 )
        {
          case 1:
            goto LABEL_396;
          case 2:
            goto LABEL_395;
          case 3:
            goto LABEL_394;
          case 4:
            goto LABEL_393;
          case 5:
            goto LABEL_392;
          case 6:
            goto LABEL_391;
          case 7:
            v311[6] = v306[6];
LABEL_391:
            v311[5] = v306[5];
LABEL_392:
            v311[4] = v306[4];
LABEL_393:
            v311[3] = v306[3];
LABEL_394:
            v311[2] = v306[2];
LABEL_395:
            v311[1] = v306[1];
LABEL_396:
            *v311 = *v306;
            break;
          default:
            break;
        }
      }
      v312 = (char *)v365 + 8 * v305;
      v313 = *((_DWORD *)v348 + 26);
      v314 = *((_QWORD **)v348 + 14);
      if ( v313 && v312 != v314 )
      {
        if ( v313 >> 3 > 0 )
        {
          v315 = (char *)v365 + 8 * v305;
          v316 = *((__int64 **)v348 + 14);
          v317 = (unsigned int)((v313 >> 3) - 1);
          do
          {
            v318 = *v316;
            v316 += 8;
            v315 += 64;
            *((_QWORD *)v315 - 8) = v318;
            *((_QWORD *)v315 - 7) = *(v316 - 7);
            *((_QWORD *)v315 - 6) = *(v316 - 6);
            *((_QWORD *)v315 - 5) = *(v316 - 5);
            *((_QWORD *)v315 - 4) = *(v316 - 4);
            *((_QWORD *)v315 - 3) = *(v316 - 3);
            *((_QWORD *)v315 - 2) = *(v316 - 2);
            *((_QWORD *)v315 - 1) = *(v316 - 1);
          }
          while ( v316 != &v314[8 * v317 + 8] );
          v319 = ((int)v317 + 1LL) << 6;
          v314 = (_QWORD *)((char *)v314 + v319);
          v312 = (_QWORD *)((char *)v312 + v319);
        }
        switch ( v313 % 8 )
        {
          case 1:
            goto LABEL_410;
          case 2:
            goto LABEL_409;
          case 3:
            goto LABEL_408;
          case 4:
            goto LABEL_407;
          case 5:
            goto LABEL_406;
          case 6:
            goto LABEL_405;
          case 7:
            v312[6] = v314[6];
LABEL_405:
            v312[5] = v314[5];
LABEL_406:
            v312[4] = v314[4];
LABEL_407:
            v312[3] = v314[3];
LABEL_408:
            v312[2] = v314[2];
LABEL_409:
            v312[1] = v314[1];
LABEL_410:
            *v312 = *v314;
            break;
          default:
            break;
        }
      }
      v320 = v305 + v313;
      if ( v320 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_446;
      v321 = (_QWORD *)operator new[](8 * v320);
      v322 = v321;
      v366 = v321;
      v323 = *((int *)v348 + 27);
      v324 = *((_QWORD **)v348 + 17);
      if ( (_DWORD)v323 && v324 != v321 )
      {
        if ( (int)v323 >> 3 <= 0 )
        {
          v329 = v366;
        }
        else
        {
          v325 = *((__int64 **)v348 + 17);
          v326 = (unsigned int)(((int)v323 >> 3) - 1);
          do
          {
            v327 = *v325;
            v325 += 8;
            v322 += 8;
            *(v322 - 8) = v327;
            *(v322 - 7) = *(v325 - 7);
            *(v322 - 6) = *(v325 - 6);
            *(v322 - 5) = *(v325 - 5);
            *(v322 - 4) = *(v325 - 4);
            *(v322 - 3) = *(v325 - 3);
            *(v322 - 2) = *(v325 - 2);
            *(v322 - 1) = *(v325 - 1);
          }
          while ( v325 != &v324[8 * v326 + 8] );
          v328 = ((int)v326 + 1LL) << 6;
          v324 = (_QWORD *)((char *)v324 + v328);
          v329 = (char *)v366 + v328;
        }
        switch ( (int)v323 % 8 )
        {
          case 1:
            goto LABEL_425;
          case 2:
            goto LABEL_424;
          case 3:
            goto LABEL_423;
          case 4:
            goto LABEL_422;
          case 5:
            goto LABEL_421;
          case 6:
            goto LABEL_420;
          case 7:
            v329[6] = v324[6];
LABEL_420:
            v329[5] = v324[5];
LABEL_421:
            v329[4] = v324[4];
LABEL_422:
            v329[3] = v324[3];
LABEL_423:
            v329[2] = v324[2];
LABEL_424:
            v329[1] = v324[1];
LABEL_425:
            *v329 = *v324;
            break;
          default:
            break;
        }
      }
      v330 = (char *)v366 + 8 * v323;
      v331 = *((_DWORD *)v348 + 26);
      v332 = *((_QWORD **)v348 + 16);
      if ( v331 && v330 != v332 )
      {
        if ( v331 >> 3 > 0 )
        {
          v333 = (char *)v366 + 8 * v323;
          v334 = *((__int64 **)v348 + 16);
          v335 = (unsigned int)((v331 >> 3) - 1);
          do
          {
            v336 = *v334;
            v333 += 64;
            v334 += 8;
            *((_QWORD *)v333 - 8) = v336;
            *((_QWORD *)v333 - 7) = *(v334 - 7);
            *((_QWORD *)v333 - 6) = *(v334 - 6);
            *((_QWORD *)v333 - 5) = *(v334 - 5);
            *((_QWORD *)v333 - 4) = *(v334 - 4);
            *((_QWORD *)v333 - 3) = *(v334 - 3);
            *((_QWORD *)v333 - 2) = *(v334 - 2);
            *((_QWORD *)v333 - 1) = *(v334 - 1);
          }
          while ( v333 != (char *)&v330[8 * v335 + 8] );
          v337 = ((int)v335 + 1LL) << 6;
          v332 = (_QWORD *)((char *)v332 + v337);
          v330 = (_QWORD *)((char *)v330 + v337);
        }
        switch ( v331 % 8 )
        {
          case 1:
            goto LABEL_439;
          case 2:
            goto LABEL_438;
          case 3:
            goto LABEL_437;
          case 4:
            goto LABEL_436;
          case 5:
            goto LABEL_435;
          case 6:
            goto LABEL_434;
          case 7:
            v330[6] = v332[6];
LABEL_434:
            v330[5] = v332[5];
LABEL_435:
            v330[4] = v332[4];
LABEL_436:
            v330[3] = v332[3];
LABEL_437:
            v330[2] = v332[2];
LABEL_438:
            v330[1] = v332[1];
LABEL_439:
            *v330 = *v332;
            break;
          default:
            break;
        }
      }
    }
    else
    {
      v366 = nullptr;
      v365 = nullptr;
      v361 = nullptr;
    }
  }
  else
  {
    v366 = nullptr;
    v365 = nullptr;
  }
  if ( (unsigned __int64)v358 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_446;
  v370 = (double *)operator new[](8LL * v358);
  v371 = (double *)operator new[](8LL * v358);
  if ( (unsigned __int64)v359 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_446;
  v372 = (double *)operator new[](8LL * v359);
  v373 = (double *)operator new[](8LL * v359);
  v374 = (double *)operator new[](8LL * v359);
  v375 = (void *)operator new[](4LL * v359);
  if ( (unsigned __int64)v7 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_446;
  v11 = (_DWORD *)operator new[](4LL * v7);
  v349 = v11;
  if ( v7 )
  {
    if ( v7 / 8 > 0 )
    {
      v258 = (unsigned int)(v7 / 8 - 1);
      v259 = (__int64)&v11[8 * v258 + 8];
      do
      {
        *(_OWORD *)v11 = -1;
        v11 += 8;
        *((_OWORD *)v11 - 1) = -1;
      }
      while ( v11 != (_DWORD *)v259 );
      v11 = (char *)v349 + 32 * (int)v258 + 32;
    }
    switch ( v7 % 8 )
    {
      case 1:
        goto LABEL_260;
      case 2:
        goto LABEL_259;
      case 3:
        goto LABEL_258;
      case 4:
        goto LABEL_257;
      case 5:
        goto LABEL_256;
      case 6:
        goto LABEL_255;
      case 7:
        v11[6] = -1;
LABEL_255:
        v11[5] = -1;
LABEL_256:
        v11[4] = -1;
LABEL_257:
        v11[3] = -1;
LABEL_258:
        v11[2] = -1;
LABEL_259:
        v11[1] = -1;
LABEL_260:
        *v11 = -1;
        break;
      default:
        break;
    }
  }
  v12 = v7 + v358;
  if ( v12 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_446;
  v13 = (double **)operator new[](4 * v12);
  if ( (unsigned __int64)(int)v352 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_446;
  v347 = (void *)operator new[](4LL * (int)v352);
  if ( (_DWORD)v352 )
  {
    if ( (int)v352 / 8 <= 0 )
    {
      v283 = v347;
    }
    else
    {
      v280 = (unsigned int)((int)v352 / 8 - 1);
      v281 = (char *)v347 + 32 * v280 + 32;
      v282 = (char *)v347;
      do
      {
        *(_OWORD *)v282 = -1;
        v282 += 32;
        *((_OWORD *)v282 - 1) = -1;
      }
      while ( v282 != v281 );
      v283 = (char *)v347 + 32 * (int)v280 + 32;
    }
    switch ( (int)v352 % 8 )
    {
      case 1:
        goto LABEL_334;
      case 2:
        goto LABEL_333;
      case 3:
        goto LABEL_332;
      case 4:
        goto LABEL_331;
      case 5:
        goto LABEL_330;
      case 6:
        goto LABEL_329;
      case 7:
        v283[6] = -1;
LABEL_329:
        v283[5] = -1;
LABEL_330:
        v283[4] = -1;
LABEL_331:
        v283[3] = -1;
LABEL_332:
        v283[2] = -1;
LABEL_333:
        v283[1] = -1;
LABEL_334:
        *v283 = -1;
        break;
      default:
        break;
    }
  }
  v14 = (int)v352 + v359;
  if ( v14 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_446;
  v350 = (void *)operator new[](4 * v14);
  if ( (int)v353 <= 0 )
  {
    v354 = nullptr;
    v363 = 0;
  }
  else
  {
    v15 = 0;
    v363 = 0;
    v16 = nullptr;
    dest = (void *)((unsigned int)((_DWORD)v353 - 1) + 1LL);
    v351 = &v374;
    v354 = &v373;
    v355 = &v372;
    v356 = &v371;
    do
    {
      while ( 1 )
      {
        v17 = (int)v16;
        v18 = (double **)CoinStructuredModel::coinBlock(a2, (int)v16);
        v19 = *((__int64 (__fastcall **)(CoinModel *))*v18 + 3);
        if ( v19 == CoinModel::numberElements )
        {
          v20 = *((_DWORD *)v18 + 27);
        }
        else
        {
          *(_QWORD *)v346 = v18;
          v20 = v19((CoinModel *)v18);
          v18 = *(double ***)v346;
        }
        v15 += v20;
        v376[0] = v18[78];
        if ( *((_DWORD *)v18 + 66) )
        {
          *(_QWORD *)v346 = v18;
          v363 += CoinModel::createArrays((CoinModel *)v18, &v370, v356, v355, v354, v351, (int **)&v375, v376);
          v18 = *(double ***)v346;
        }
        v21 = (int *)(*((_QWORD *)a2 + 23) + 16LL * (_QWORD)v16);
        v22 = *v21;
        v23 = v21[1];
        v24 = v22;
        v25 = (int *)((char *)v349 + 4 * v22);
        if ( *v25 < 0 )
        {
          v26 = v358 + v24;
          *v25 = *((_DWORD *)v18 + 2);
          *((_DWORD *)v13 + v26) = (_DWORD)v16;
        }
        v27 = (int *)((char *)v347 + 4 * v23);
        if ( *v27 < 0 )
          break;
        v16 = (char *)v16 + 1;
        if ( v16 == dest )
          goto LABEL_23;
      }
      v133 = v359 + v23;
      v16 = (char *)v16 + 1;
      *v27 = *((_DWORD *)v18 + 3);
      *((_DWORD *)v350 + v133) = v17;
    }
    while ( v16 != dest );
LABEL_23:
    v354 = (double **)v15;
  }
  if ( v358 )
  {
    v272 = v370;
    v273 = v358 / 8;
    if ( v358 / 8 > 0 )
    {
      v274 = v370;
      v275 = (unsigned int)(v273 - 1);
      v276 = &v370[8 * v275 + 8];
      do
      {
        *v274 = -1.797693134862316e308;
        v274 += 8;
        *(v274 - 7) = -1.797693134862316e308;
        *(v274 - 6) = -1.797693134862316e308;
        *(v274 - 5) = -1.797693134862316e308;
        *(v274 - 4) = -1.797693134862316e308;
        *(v274 - 3) = -1.797693134862316e308;
        *(v274 - 2) = -1.797693134862316e308;
        *(v274 - 1) = -1.797693134862316e308;
      }
      while ( v274 != v276 );
      v277 = v371;
      v272 += 8 * (int)v275 + 8;
      v278 = (unsigned int)(v358 % 8);
      switch ( (int)v278 )
      {
        case 1:
          goto LABEL_317;
        case 2:
          goto LABEL_316;
        case 3:
          goto LABEL_315;
        case 4:
          goto LABEL_314;
        case 5:
          goto LABEL_313;
        case 6:
          goto LABEL_312;
        case 7:
          goto LABEL_311;
        default:
          goto LABEL_319;
      }
    }
    v277 = v371;
    v278 = (unsigned int)(v358 % 8);
    switch ( (int)v278 )
    {
      case 1:
        goto LABEL_317;
      case 2:
        goto LABEL_316;
      case 3:
        goto LABEL_315;
      case 4:
        goto LABEL_314;
      case 5:
        goto LABEL_313;
      case 6:
        goto LABEL_312;
      case 7:
LABEL_311:
        v272[6] = -1.797693134862316e308;
        v278 = 7;
LABEL_312:
        v272[5] = -1.797693134862316e308;
LABEL_313:
        v272[4] = -1.797693134862316e308;
LABEL_314:
        v272[3] = -1.797693134862316e308;
LABEL_315:
        v272[2] = -1.797693134862316e308;
LABEL_316:
        v272[1] = -1.797693134862316e308;
LABEL_317:
        *v272 = -1.797693134862316e308;
        if ( v273 > 0 )
        {
          LODWORD(v275) = v273 - 1;
LABEL_319:
          v279 = v277;
          do
          {
            *v279 = 1.797693134862316e308;
            v279 += 8;
            *(v279 - 7) = 1.797693134862316e308;
            *(v279 - 6) = 1.797693134862316e308;
            *(v279 - 5) = 1.797693134862316e308;
            *(v279 - 4) = 1.797693134862316e308;
            *(v279 - 3) = 1.797693134862316e308;
            *(v279 - 2) = 1.797693134862316e308;
            *(v279 - 1) = 1.797693134862316e308;
          }
          while ( v279 != &v277[8 * (unsigned int)v275 + 8] );
          v277 += 8 * (unsigned int)v275 + 8;
        }
        switch ( v278 )
        {
          case 1LL:
            goto LABEL_374;
          case 2LL:
            goto LABEL_373;
          case 3LL:
            goto LABEL_372;
          case 4LL:
            goto LABEL_371;
          case 5LL:
            goto LABEL_370;
          case 6LL:
            goto LABEL_369;
          case 7LL:
            v277[6] = 1.797693134862316e308;
LABEL_369:
            v277[5] = 1.797693134862316e308;
LABEL_370:
            v277[4] = 1.797693134862316e308;
LABEL_371:
            v277[3] = 1.797693134862316e308;
LABEL_372:
            v277[2] = 1.797693134862316e308;
LABEL_373:
            v277[1] = 1.797693134862316e308;
LABEL_374:
            *v277 = 1.797693134862316e308;
            break;
          default:
            goto LABEL_25;
        }
        break;
      default:
        break;
    }
  }
LABEL_25:
  if ( v359 )
  {
    v260 = v372;
    v261 = v359 / 8;
    if ( v359 / 8 > 0 )
    {
      v262 = v372;
      v263 = (unsigned int)(v261 - 1);
      v264 = &v372[8 * v263 + 8];
      do
      {
        *v262 = 0.0;
        v262[1] = 0.0;
        v262 += 8;
        *(v262 - 6) = 0.0;
        *(v262 - 5) = 0.0;
        *(v262 - 4) = 0.0;
        *(v262 - 3) = 0.0;
        *(v262 - 2) = 0.0;
        *(v262 - 1) = 0.0;
      }
      while ( v262 != v264 );
      v265 = v373;
      v260 += 8 * (int)v263 + 8;
      v266 = (unsigned int)(v359 % 8);
      switch ( (int)v266 )
      {
        case 1:
          goto LABEL_271;
        case 2:
          goto LABEL_270;
        case 3:
          goto LABEL_269;
        case 4:
          goto LABEL_268;
        case 5:
          goto LABEL_267;
        case 6:
          goto LABEL_266;
        case 7:
          goto LABEL_265;
        default:
          goto LABEL_273;
      }
    }
    v265 = v373;
    v266 = (unsigned int)(v359 % 8);
    switch ( (int)v266 )
    {
      case 1:
        goto LABEL_271;
      case 2:
        goto LABEL_270;
      case 3:
        goto LABEL_269;
      case 4:
        goto LABEL_268;
      case 5:
        goto LABEL_267;
      case 6:
        goto LABEL_266;
      case 7:
LABEL_265:
        v260[6] = 0.0;
        v266 = 7;
LABEL_266:
        v260[5] = 0.0;
LABEL_267:
        v260[4] = 0.0;
LABEL_268:
        v260[3] = 0.0;
LABEL_269:
        v260[2] = 0.0;
LABEL_270:
        v260[1] = 0.0;
LABEL_271:
        *v260 = 0.0;
        if ( v261 > 0 )
        {
          LODWORD(v263) = v261 - 1;
LABEL_273:
          v267 = v265;
          do
          {
            *v267 = 1.797693134862316e308;
            v267 += 8;
            *(v267 - 7) = 1.797693134862316e308;
            *(v267 - 6) = 1.797693134862316e308;
            *(v267 - 5) = 1.797693134862316e308;
            *(v267 - 4) = 1.797693134862316e308;
            *(v267 - 3) = 1.797693134862316e308;
            *(v267 - 2) = 1.797693134862316e308;
            *(v267 - 1) = 1.797693134862316e308;
          }
          while ( v267 != &v265[8 * (unsigned int)v263 + 8] );
          v268 = v374;
          v265 += 8 * (unsigned int)v263 + 8;
          switch ( (int)v266 )
          {
            case 1:
              goto LABEL_282;
            case 2:
              goto LABEL_281;
            case 3:
              goto LABEL_280;
            case 4:
              goto LABEL_279;
            case 5:
              goto LABEL_278;
            case 6:
              goto LABEL_277;
            case 7:
              goto LABEL_276;
            default:
              goto LABEL_285;
          }
        }
        v268 = v374;
        switch ( (int)v266 )
        {
          case 1:
            goto LABEL_282;
          case 2:
            goto LABEL_281;
          case 3:
            goto LABEL_280;
          case 4:
            goto LABEL_279;
          case 5:
            goto LABEL_278;
          case 6:
            goto LABEL_277;
          case 7:
LABEL_276:
            v265[6] = 1.797693134862316e308;
            v266 = 7;
LABEL_277:
            v265[5] = 1.797693134862316e308;
LABEL_278:
            v265[4] = 1.797693134862316e308;
LABEL_279:
            v265[3] = 1.797693134862316e308;
LABEL_280:
            v265[2] = 1.797693134862316e308;
LABEL_281:
            v265[1] = 1.797693134862316e308;
LABEL_282:
            *v265 = 1.797693134862316e308;
            break;
          default:
            goto LABEL_283;
        }
        break;
      default:
        v268 = v374;
        break;
    }
LABEL_283:
    if ( v261 > 0 )
    {
      LODWORD(v263) = v261 - 1;
LABEL_285:
      v269 = v268;
      do
      {
        *v269 = 0.0;
        v269[1] = 0.0;
        v269 += 8;
        *(v269 - 6) = 0.0;
        *(v269 - 5) = 0.0;
        *(v269 - 4) = 0.0;
        *(v269 - 3) = 0.0;
        *(v269 - 2) = 0.0;
        *(v269 - 1) = 0.0;
      }
      while ( v269 != &v268[8 * (unsigned int)v263 + 8] );
      v270 = v375;
      v268 += 8 * (unsigned int)v263 + 8;
      switch ( (int)v266 )
      {
        case 1:
          goto LABEL_294;
        case 2:
          goto LABEL_293;
        case 3:
          goto LABEL_292;
        case 4:
          goto LABEL_291;
        case 5:
          goto LABEL_290;
        case 6:
          goto LABEL_289;
        case 7:
          goto LABEL_288;
        default:
          goto LABEL_296;
      }
    }
    v270 = v375;
    switch ( (int)v266 )
    {
      case 1:
        goto LABEL_294;
      case 2:
        goto LABEL_293;
      case 3:
        goto LABEL_292;
      case 4:
        goto LABEL_291;
      case 5:
        goto LABEL_290;
      case 6:
        goto LABEL_289;
      case 7:
LABEL_288:
        v268[6] = 0.0;
        v266 = 7;
LABEL_289:
        v268[5] = 0.0;
LABEL_290:
        v268[4] = 0.0;
LABEL_291:
        v268[3] = 0.0;
LABEL_292:
        v268[2] = 0.0;
LABEL_293:
        v268[1] = 0.0;
LABEL_294:
        *v268 = 0.0;
        if ( v261 > 0 )
        {
          LODWORD(v263) = v261 - 1;
LABEL_296:
          v271 = v270;
          do
          {
            *v271 = 0;
            v271 += 2;
            *(v271 - 1) = 0;
          }
          while ( v271 != (_OWORD *)&v270[8 * (unsigned int)v263 + 8] );
          v270 += 8 * (unsigned int)v263 + 8;
        }
        switch ( v266 )
        {
          case 1LL:
            goto LABEL_306;
          case 2LL:
            goto LABEL_305;
          case 3LL:
            goto LABEL_304;
          case 4LL:
            goto LABEL_303;
          case 5LL:
            goto LABEL_302;
          case 6LL:
            goto LABEL_301;
          case 7LL:
            v270[6] = 0;
LABEL_301:
            v270[5] = 0;
LABEL_302:
            v270[4] = 0;
LABEL_303:
            v270[3] = 0;
LABEL_304:
            v270[2] = 0;
LABEL_305:
            v270[1] = 0;
LABEL_306:
            *v270 = 0;
            break;
          default:
            goto LABEL_26;
        }
        break;
      default:
        break;
    }
  }
LABEL_26:
  if ( v7 > 0 )
  {
    v28 = (unsigned int)(v7 - 1);
    v29 = a3;
    v30 = nullptr;
    v31 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_290830);
    v33 = v13;
    v34 = v349;
    desta = (void *)(v28 + 1);
    do
    {
      while ( 2 )
      {
        v36 = v34[(_QWORD)v30];
        v37 = (int *)v33 + v31;
        v34[(_QWORD)v30] = v31;
        if ( v29 )
        {
          LOBYTE(v351) = v29;
          *(__m128i *)v346 = si128;
          v35 = CoinStructuredModel::coinBlock(a2, *((_DWORD *)v33 + (int)v30 + v358));
          memcpy((char *)v33 + 4 * v31, *(const void **)(v35 + 176), 4LL * v36);
          v29 = (char)v351;
          si128 = _mm_load_si128((const __m128i *)v346);
        }
        else if ( v36 )
        {
          v38 = v36 / 8;
          v39 = v36 / 8;
          if ( v36 / 8 <= 0 )
          {
            v80 = v31;
          }
          else
          {
            v40 = v38 - 1;
            if ( (int)(v38 - 1) <= 2 )
            {
              v79 = (signed int *)v33 + v31;
              v78 = v31;
LABEL_37:
              *v79 = v78;
              v79[1] = v78 + 1;
              v79[2] = v78 + 2;
              v79[3] = v78 + 3;
              v79[4] = v78 + 4;
              v79[5] = v78 + 5;
              v79[6] = v78 + 6;
              v79[7] = v78 + 7;
              if ( v39 != 1 )
              {
                v79[8] = v78 + 8;
                v79[9] = v78 + 9;
                v79[10] = v78 + 10;
                v79[11] = v78 + 11;
                v79[12] = v78 + 12;
                v79[13] = v78 + 13;
                v79[14] = v78 + 14;
                v79[15] = v78 + 15;
                if ( v39 != 2 )
                {
                  v79[16] = v78 + 16;
                  v79[17] = v78 + 17;
                  v79[18] = v78 + 18;
                  v79[19] = v78 + 19;
                  v79[20] = v78 + 20;
                  v79[21] = v78 + 21;
                  v79[23] = v78 + 23;
                  v79[22] = v78 + 22;
                }
              }
            }
            else
            {
              v346[0] = v31;
              v41 = (__m128i *)((char *)v33 + 4 * v31);
              v42 = 0;
              v43 = _mm_load_si128((const __m128i *)&xmmword_290840);
              v44 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
              v45 = _mm_load_si128((const __m128i *)&xmmword_290850);
              v46 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v31), 0), (__m128i)xmmword_290820);
              v47 = _mm_load_si128((const __m128i *)&xmmword_290860);
              v48 = _mm_load_si128((const __m128i *)&xmmword_290870);
              do
              {
                ++v42;
                v49 = _mm_add_epi32(v46, v44);
                v41 += 8;
                v50 = _mm_unpacklo_epi32(v46, v49);
                v51 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_289C00), v46);
                v52 = _mm_unpackhi_epi32(v46, v49);
                v53 = _mm_add_epi32(v46, v45);
                v54 = _mm_unpacklo_epi32(v51, v53);
                v55 = _mm_unpackhi_epi32(v51, v53);
                v56 = _mm_add_epi32(v46, v43);
                v57 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_28CCB0), v46);
                v58 = _mm_add_epi32(v46, v47);
                v59 = v46;
                v60 = _mm_unpackhi_epi32(v57, v58);
                v46 = _mm_add_epi32(v46, si128);
                v61 = _mm_unpacklo_epi32(v57, v58);
                v62 = v56;
                v63 = _mm_add_epi32(v59, v48);
                v64 = _mm_unpackhi_epi32(v56, v63);
                v65 = _mm_unpacklo_epi32(v62, v63);
                v66 = v50;
                v67 = _mm_unpackhi_epi32(v50, v61);
                v68 = _mm_unpacklo_epi32(v66, v61);
                v69 = v52;
                v70 = _mm_unpackhi_epi32(v52, v60);
                v71 = _mm_unpacklo_epi32(v69, v60);
                v72 = v54;
                v73 = _mm_unpackhi_epi32(v54, v65);
                v74 = _mm_unpacklo_epi32(v72, v65);
                v75 = v55;
                v76 = _mm_unpackhi_epi32(v55, v64);
                v77 = _mm_unpacklo_epi32(v75, v64);
                v41[-8] = _mm_unpacklo_epi32(v68, v74);
                v41[-6] = _mm_unpacklo_epi32(v67, v73);
                v41[-7] = _mm_unpackhi_epi32(v68, v74);
                v41[-4] = _mm_unpacklo_epi32(v71, v77);
                v41[-5] = _mm_unpackhi_epi32(v67, v73);
                v41[-3] = _mm_unpackhi_epi32(v71, v77);
                v41[-2] = _mm_unpacklo_epi32(v70, v76);
                v41[-1] = _mm_unpackhi_epi32(v70, v76);
              }
              while ( v38 >> 2 > v42 );
              v39 = v38 - (v38 & 0xFFFFFFFC);
              v78 = v31 + 8 * (v38 & 0xFFFFFFFC);
              v79 = &v37[8 * (v38 & 0xFFFFFFFC)];
              if ( (v38 & 0xFFFFFFFC) != v38 )
                goto LABEL_37;
            }
            v80 = v31 + 8 * v40 + 8;
            v37 += 8 * (int)v40 + 8;
          }
          switch ( v36 % 8 )
          {
            case 1:
              goto LABEL_48;
            case 2:
              goto LABEL_47;
            case 3:
              goto LABEL_46;
            case 4:
              goto LABEL_45;
            case 5:
              goto LABEL_44;
            case 6:
              goto LABEL_43;
            case 7:
              v37[6] = v80 + 6;
LABEL_43:
              v37[5] = v80 + 5;
LABEL_44:
              v37[4] = v80 + 4;
LABEL_45:
              v37[3] = v80 + 3;
LABEL_46:
              v37[2] = v80 + 2;
LABEL_47:
              v37[1] = v80 + 1;
LABEL_48:
              v31 += v36;
              v30 = (char *)v30 + 1;
              *v37 = v80;
              if ( v30 == desta )
                goto LABEL_49;
              continue;
            default:
              goto LABEL_29;
          }
        }
        break;
      }
LABEL_29:
      v31 += v36;
      v30 = (char *)v30 + 1;
    }
    while ( v30 != desta );
LABEL_49:
    v13 = v33;
    a3 = v29;
  }
  if ( (int)v352 <= 0 )
    goto LABEL_78;
  v351 = v13;
  v81 = a3;
  v82 = 0;
  v83 = 0;
  v84 = v347;
  v85 = _mm_load_si128((const __m128i *)&xmmword_290830);
  v86 = (unsigned int)((_DWORD)v352 - 1) + 1LL;
  do
  {
    v88 = v84[v82];
    v84[v82] = v83;
    if ( v88 )
    {
      v89 = (int *)((char *)v350 + 4 * (int)v83);
      if ( v81 )
      {
        *(__m128i *)v346 = v85;
        destc = (char *)v350 + 4 * (int)v83;
        v87 = CoinStructuredModel::coinBlock(a2, *((_DWORD *)v350 + (int)v82 + v359));
        memcpy(destc, *(const void **)(v87 + 280), 4LL * v88);
        v85 = _mm_load_si128((const __m128i *)v346);
LABEL_53:
        v83 += v88;
        goto LABEL_54;
      }
      v90 = v88 / 8;
      v91 = v88 / 8;
      if ( v88 / 8 <= 0 )
      {
        v132 = v83;
LABEL_66:
        switch ( v88 % 8 )
        {
          case 1:
            goto LABEL_76;
          case 2:
            goto LABEL_75;
          case 3:
            goto LABEL_74;
          case 4:
            goto LABEL_73;
          case 5:
            goto LABEL_72;
          case 6:
            goto LABEL_71;
          case 7:
            v89[6] = v132 + 6;
LABEL_71:
            v89[5] = v132 + 5;
LABEL_72:
            v89[4] = v132 + 4;
LABEL_73:
            v89[3] = v132 + 3;
LABEL_74:
            v89[2] = v132 + 2;
LABEL_75:
            v89[1] = v132 + 1;
LABEL_76:
            *v89 = v132;
            break;
          default:
            goto LABEL_53;
        }
        goto LABEL_53;
      }
      v92 = v90 - 1;
      if ( (int)(v90 - 1) <= 2 )
      {
        v131 = (unsigned int *)((char *)v350 + 4 * (int)v83);
        v130 = v83;
      }
      else
      {
        v93 = (__m128i *)((char *)v350 + 4 * (int)v83);
        v94 = 0;
        v95 = _mm_load_si128((const __m128i *)&xmmword_290840);
        v96 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
        v97 = _mm_load_si128((const __m128i *)&xmmword_290850);
        v98 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v83), 0), (__m128i)xmmword_290820);
        v99 = _mm_load_si128((const __m128i *)&xmmword_290860);
        v100 = _mm_load_si128((const __m128i *)&xmmword_290870);
        do
        {
          ++v94;
          v101 = _mm_add_epi32(v98, v96);
          v93 += 8;
          v102 = _mm_unpacklo_epi32(v98, v101);
          v103 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_289C00), v98);
          v104 = _mm_unpackhi_epi32(v98, v101);
          v105 = _mm_add_epi32(v98, v97);
          v106 = _mm_unpacklo_epi32(v103, v105);
          v107 = _mm_unpackhi_epi32(v103, v105);
          v108 = _mm_add_epi32(v98, v95);
          v109 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_28CCB0), v98);
          v110 = _mm_add_epi32(v98, v99);
          v111 = v98;
          v112 = _mm_unpackhi_epi32(v109, v110);
          v98 = _mm_add_epi32(v98, v85);
          v113 = _mm_unpacklo_epi32(v109, v110);
          v114 = v108;
          v115 = _mm_add_epi32(v111, v100);
          v116 = _mm_unpackhi_epi32(v108, v115);
          v117 = _mm_unpacklo_epi32(v114, v115);
          v118 = v102;
          v119 = _mm_unpackhi_epi32(v102, v113);
          v120 = _mm_unpacklo_epi32(v118, v113);
          v121 = v104;
          v122 = _mm_unpackhi_epi32(v104, v112);
          v123 = _mm_unpacklo_epi32(v121, v112);
          v124 = v106;
          v125 = _mm_unpackhi_epi32(v106, v117);
          v126 = _mm_unpacklo_epi32(v124, v117);
          v127 = v107;
          v128 = _mm_unpackhi_epi32(v107, v116);
          v129 = _mm_unpacklo_epi32(v127, v116);
          v93[-8] = _mm_unpacklo_epi32(v120, v126);
          v93[-6] = _mm_unpacklo_epi32(v119, v125);
          v93[-7] = _mm_unpackhi_epi32(v120, v126);
          v93[-4] = _mm_unpacklo_epi32(v123, v129);
          v93[-5] = _mm_unpackhi_epi32(v119, v125);
          v93[-3] = _mm_unpackhi_epi32(v123, v129);
          v93[-2] = _mm_unpacklo_epi32(v122, v128);
          v93[-1] = _mm_unpackhi_epi32(v122, v128);
        }
        while ( v90 >> 2 > v94 );
        v91 = v90 - (v90 & 0xFFFFFFFC);
        v130 = v83 + 8 * (v90 & 0xFFFFFFFC);
        v131 = (unsigned int *)&v89[8 * (v90 & 0xFFFFFFFC)];
        if ( (v90 & 0xFFFFFFFC) == v90 )
        {
LABEL_65:
          v132 = v83 + 8 * v92 + 8;
          v89 += 8 * (int)v92 + 8;
          goto LABEL_66;
        }
      }
      *v131 = v130;
      v131[1] = v130 + 1;
      v131[2] = v130 + 2;
      v131[3] = v130 + 3;
      v131[4] = v130 + 4;
      v131[5] = v130 + 5;
      v131[6] = v130 + 6;
      v131[7] = v130 + 7;
      if ( v91 != 1 )
      {
        v131[8] = v130 + 8;
        v131[9] = v130 + 9;
        v131[10] = v130 + 10;
        v131[11] = v130 + 11;
        v131[12] = v130 + 12;
        v131[13] = v130 + 13;
        v131[14] = v130 + 14;
        v131[15] = v130 + 15;
        if ( v91 != 2 )
        {
          v131[16] = v130 + 16;
          v131[17] = v130 + 17;
          v131[18] = v130 + 18;
          v131[19] = v130 + 19;
          v131[20] = v130 + 20;
          v131[21] = v130 + 21;
          v131[23] = v130 + 23;
          v131[22] = v130 + 22;
        }
      }
      goto LABEL_65;
    }
LABEL_54:
    ++v82;
  }
  while ( v82 != v86 );
  v13 = v351;
LABEL_78:
  if ( (int)v353 > 0 )
  {
    v134 = 0;
    LOBYTE(v346[0]) = 0;
    v351 = v13;
    destb = (void *)((unsigned int)((_DWORD)v353 - 1) + 1LL);
    while ( 1 )
    {
      v135 = CoinStructuredModel::coinBlock(a2, v134);
      v136 = (int *)(*((_QWORD *)a2 + 23) + 16 * v134);
      v137 = *((int *)v347 + v136[1]);
      if ( *((_BYTE *)v136 + 9)
        && (v138 = *(_DWORD *)(v135 + 8), v139 = *(_QWORD *)(v135 + 128), v140 = *(_QWORD *)(v135 + 136), v138 > 0) )
      {
        v141 = v370;
        v142 = v371;
        v143 = (unsigned int)(v138 - 1) + 1LL;
        v144 = (char *)v351 + 4 * *((int *)v349 + *v136);
        v145 = 0;
        do
        {
          v146 = *(int *)&v144[4 * v145];
          v141[v146] = *(double *)(v139 + 8 * v145);
          v147 = *(double *)(v140 + 8 * v145++);
          v142[v146] = v147;
        }
        while ( v145 != v143 );
        if ( !*((_BYTE *)v136 + 12) )
        {
LABEL_81:
          if ( *((_BYTE *)v136 + 11) )
            goto LABEL_92;
          goto LABEL_82;
        }
      }
      else if ( !*((_BYTE *)v136 + 12) )
      {
        goto LABEL_81;
      }
      v148 = *(_DWORD *)(v135 + 12);
      v149 = *(_QWORD *)(v135 + 192);
      v150 = *(_QWORD *)(v135 + 200);
      v151 = *(_QWORD *)(v135 + 184);
      if ( v148 <= 0 )
      {
        if ( !*((_BYTE *)v136 + 11) )
          goto LABEL_82;
        LOBYTE(v346[0]) = 1;
LABEL_96:
        if ( (void *)++v134 == destb )
        {
LABEL_97:
          v13 = v351;
          goto LABEL_98;
        }
      }
      else
      {
        v152 = v372;
        v153 = v373;
        v154 = v374;
        v155 = (unsigned int)(v148 - 1) + 1LL;
        v156 = (char *)v350 + 4 * (int)v137;
        v157 = 0;
        do
        {
          v158 = *(int *)&v156[4 * v157];
          v152[v158] = *(double *)(v149 + 8 * v157);
          v153[v158] = *(double *)(v150 + 8 * v157);
          v159 = *(double *)(v151 + 8 * v157++);
          v154[v158] = v159;
        }
        while ( v157 != v155 );
        if ( *((_BYTE *)v136 + 11) )
        {
LABEL_92:
          v160 = *(_DWORD *)(v135 + 12);
          v161 = *(_QWORD *)(v135 + 240);
          if ( v160 > 0 )
          {
            v162 = v375;
            v163 = 4LL * (unsigned int)(v160 - 1) + 4;
            v164 = (char *)v350 + 4 * v137;
            v165 = 0;
            do
            {
              v166 = *(int *)&v164[v165];
              v167 = *(_DWORD *)(v161 + v165);
              v165 += 4;
              v162[v166] = v167;
            }
            while ( v165 != v163 );
          }
          LOBYTE(v346[0]) = 1;
          goto LABEL_96;
        }
LABEL_82:
        if ( (void *)++v134 == destb )
          goto LABEL_97;
      }
    }
  }
  LOBYTE(v346[0]) = 0;
LABEL_98:
  ClpModel::gutsOfLoadModel(v348, v358, v359, v372, v373, v374, v370, v371, nullptr);
  if ( v370 )
    operator delete[](v370);
  if ( v371 )
    operator delete[](v371);
  if ( v372 )
    operator delete[](v372);
  if ( v373 )
    operator delete[](v373);
  if ( v374 )
    operator delete[](v374);
  v168 = v375;
  if ( LOBYTE(v346[0]) && v359 > 0 )
  {
    v169 = 0;
    v170 = (unsigned int)(v359 - 1) + 1LL;
    do
    {
      while ( !v168[v169] )
      {
        if ( ++v169 == v170 )
          goto LABEL_114;
      }
      v171 = v169++;
      ClpModel::setInteger(v348, v171);
      v168 = v375;
    }
    while ( v169 != v170 );
  }
LABEL_114:
  if ( v168 )
    operator delete[](v168);
  ClpModel::setObjectiveOffset(v348, *((double *)a2 + 3));
  v172 = v354;
  if ( (unsigned __int64)v354 > 0x1FFFFFFFFFFFFFFELL
    || (v354 = (double **)operator new[](4LL * (_QWORD)v354),
        v355 = (double **)operator new[](4LL * (_QWORD)v172),
        (unsigned __int64)v172 > 0xFFFFFFFFFFFFFFFLL) )
  {
LABEL_446:
    __cxa_throw_bad_array_new_length();
  }
  v356 = (double **)operator new[](8LL * (_QWORD)v172);
  if ( (int)v353 <= 0 )
  {
    v173 = 0;
  }
  else
  {
    *(_QWORD *)v346 = 0;
    v173 = 0;
    v360 = (unsigned int)((_DWORD)v353 - 1) + 1LL;
    v367 = (char *)v13 + 4;
    v353 = &v369;
    v368 = (char *)v350 + 4;
    do
    {
      v174 = 16LL * *(_QWORD *)v346;
      v175 = CoinStructuredModel::coinBlock(a2, v346[0]);
      v176 = (int *)(*((_QWORD *)a2 + 23) + v174);
      v177 = v175;
      v351 = (double **)v175;
      v178 = *((_BYTE *)v176 + 10) == 0;
      v179 = *((_DWORD *)v349 + *v176);
      v362 = *((_DWORD *)v347 + v176[1]);
      if ( !v178 )
      {
        v180 = *(_DWORD *)(v175 + 160);
        if ( v180 )
        {
          v252 = *(_QWORD *)(v177 + 144);
          if ( v180 > 0 )
          {
            v253 = (int *)v13 + v179;
            v364 = (int *)&v367[4 * v179 + 4 * (unsigned __int64)(unsigned int)(v180 - 1)];
            v352 = (double *)&std::string::_Rep::_S_empty_rep_storage;
            if ( &_pthread_key_create )
            {
              do
              {
                v357[0] = *v253;
                std::string::string();
                ClpModel::setRowName(v348, v357[0], (std::string *)v376);
                if ( v376[0] - 3 != v352
                  && _InterlockedExchangeAdd((volatile signed __int32 *)v376[0] - 2, 0xFFFFFFFF) <= 0 )
                {
                  std::string::_Rep::_M_destroy();
                }
                ++v253;
                v252 += 8;
              }
              while ( v253 != v364 );
            }
            else
            {
              do
              {
                v357[0] = *v253;
                std::string::string();
                ClpModel::setRowName(v348, v357[0], (std::string *)v376);
                if ( v376[0] - 3 != v352 )
                {
                  v254 = *((_DWORD *)v376[0] - 2);
                  *((_DWORD *)v376[0] - 2) = v254 - 1;
                  if ( v254 <= 0 )
                    std::string::_Rep::_M_destroy();
                }
                ++v253;
                v252 += 8;
              }
              while ( v253 != v364 );
            }
          }
        }
      }
      if ( *((_BYTE *)v176 + 13) )
      {
        v181 = *((_DWORD *)v351 + 56);
        if ( v181 )
        {
          v255 = v351[26];
          if ( v181 > 0 )
          {
            v256 = (int *)((char *)v350 + 4 * v362);
            v364 = (int *)&v368[4 * v362 + 4 * (unsigned __int64)(unsigned int)(v181 - 1)];
            v352 = (double *)&std::string::_Rep::_S_empty_rep_storage;
            if ( &_pthread_key_create )
            {
              do
              {
                v357[0] = *v256;
                std::string::string();
                ClpModel::setColumnName(v348, v357[0], (std::string *)v376);
                if ( v376[0] - 3 != v352
                  && _InterlockedExchangeAdd((volatile signed __int32 *)v376[0] - 2, 0xFFFFFFFF) <= 0 )
                {
                  std::string::_Rep::_M_destroy();
                }
                ++v256;
                ++v255;
              }
              while ( v256 != v364 );
            }
            else
            {
              do
              {
                v357[0] = *v256;
                std::string::string();
                ClpModel::setColumnName(v348, v357[0], (std::string *)v376);
                if ( v376[0] - 3 != v352 )
                {
                  v257 = *((_DWORD *)v376[0] - 2);
                  *((_DWORD *)v376[0] - 2) = v257 - 1;
                  if ( v257 <= 0 )
                    std::string::_Rep::_M_destroy();
                }
                ++v256;
                ++v255;
              }
              while ( v256 != v364 );
            }
          }
        }
      }
      if ( *((_BYTE *)v176 + 8) )
      {
        CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v376);
        v182 = (double **)v351[38];
        if ( !v182 )
        {
          CoinModel::createPackedMatrix((CoinModel *)v351, (CoinPackedMatrix *)v376, v351[78]);
          v182 = v376;
        }
        v178 = *((_BYTE *)v182 + 8) == 0;
        v183 = v182[4];
        v184 = (double **)v182[6];
        v185 = *((_DWORD *)v182 + 16);
        *(_QWORD *)v357 = v182[5];
        v186 = v182[7];
        v352 = v183;
        if ( v178 )
          v185 = *((_DWORD *)v182 + 17);
        if ( v185 > 0 )
        {
          v187 = (int *)((char *)v350 + 4 * v362);
          v351 = (double **)((char *)v184 + 4 * (unsigned int)(v185 - 1) + 4);
          do
          {
            v188 = *(int *)v184;
            v189 = *v187;
            if ( (int)v188 + *(_DWORD *)v186 > (int)v188 )
            {
              v190 = (int)v188 + 1;
              v191 = -4 * v190 + 4LL * v173;
              v192 = *(_QWORD *)v357 + -4 * v190 + 4 * v188;
              v193 = (char *)v354 + v191;
              v194 = (char *)v355 + v191;
              v195 = &v352[v188 - v190];
              v196 = &(&v356[v173])[-v190];
              do
              {
                v197 = *(_DWORD *)(v192 + 4 * v190);
                *(_DWORD *)&v194[4 * v190] = v189;
                v198 = v190;
                ++v173;
                v196[v190] = *(double **)&v195[v190];
                *(_DWORD *)&v193[4 * v190++] = *((_DWORD *)v13 + v179 + v197);
              }
              while ( *(_DWORD *)v184 + *(_DWORD *)v186 > v198 );
            }
            ++v187;
            v184 = (double **)((char *)v184 + 4);
            v186 = (double *)((char *)v186 + 4);
          }
          while ( v184 != v351 );
        }
        CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v376);
      }
      ++*(_QWORD *)v346;
    }
    while ( *(_QWORD *)v346 != v360 );
  }
  operator delete[](v13);
  operator delete[](v350);
  operator delete[](v349);
  operator delete[](v347);
  v199 = (CoinPackedMatrix *)operator new(0x58u);
  v200 = v356;
  v201 = v355;
  v202 = v354;
  v203 = v199;
  CoinPackedMatrix::CoinPackedMatrix(v199, 1, (const int *)v354, (const int *)v355, (const double *)v356, v173);
  v204 = (ClpPackedMatrix *)operator new(0x78u);
  ClpPackedMatrix::ClpPackedMatrix(v204, v203);
  v205 = v348;
  v206 = v359;
  v207 = v358;
  *((_QWORD *)v348 + 24) = v204;
  ClpPackedMatrix::setDimensions(v204, v207, v206);
  operator delete[](v202);
  operator delete[](v201);
  operator delete[](v200);
  ClpSimplex::createStatus(v205);
  if ( v361 )
  {
    v208 = *((int *)v205 + 27);
    v209 = *((_BYTE **)v205 + 33);
    v210 = *((_DWORD *)v205 + 26) + *((_DWORD *)v205 + 27);
    if ( v210 )
    {
      v211 = (char *)v361;
      if ( v209 != v361 )
      {
        v212 = v210 >> 3;
        if ( v210 >> 3 <= 0 )
        {
          v220 = (char *)v361;
        }
        else
        {
          if ( (v361 >= v209 + 16 || v209 >= (char *)v361 + 16) && v212 > 1 )
          {
            v213 = 0;
            v214 = 0;
            do
            {
              ++v214;
              *(__m128i *)&v209[v213] = _mm_loadu_si128((const __m128i *)&v211[v213]);
              v213 += 16;
            }
            while ( v212 >> 1 > v214 );
            v215 = 8LL * (v212 & 0xFFFFFFFE);
            v216 = (char *)v361 + v215;
            v217 = &v209[v215];
            if ( (v212 & 0xFFFFFFFE) != v212 )
            {
              *v217 = *v216;
              v217[1] = v216[1];
              v217[2] = v216[2];
              v217[3] = v216[3];
              v217[4] = v216[4];
              v217[5] = v216[5];
              v217[6] = v216[6];
              v217[7] = v216[7];
            }
            LODWORD(v218) = v212 - 1;
          }
          else
          {
            v300 = (char *)v361;
            v218 = v212 - 1;
            v301 = *((_BYTE **)v205 + 33);
            do
            {
              v302 = *v300;
              v301 += 8;
              v300 += 8;
              *(v301 - 8) = v302;
              *(v301 - 7) = *(v300 - 7);
              *(v301 - 6) = *(v300 - 6);
              *(v301 - 5) = *(v300 - 5);
              *(v301 - 4) = *(v300 - 4);
              *(v301 - 3) = *(v300 - 3);
              *(v301 - 2) = *(v300 - 2);
              *(v301 - 1) = *(v300 - 1);
            }
            while ( v301 != &v209[8 * v218 + 8] );
          }
          v219 = 8LL * (int)v218 + 8;
          v220 = (char *)v361 + v219;
          v209 += v219;
        }
        switch ( v210 % 8 )
        {
          case 1:
            goto LABEL_157;
          case 2:
            goto LABEL_156;
          case 3:
            goto LABEL_155;
          case 4:
            goto LABEL_154;
          case 5:
            goto LABEL_153;
          case 6:
            goto LABEL_152;
          case 7:
            v209[6] = v220[6];
LABEL_152:
            v209[5] = v220[5];
LABEL_153:
            v209[4] = v220[4];
LABEL_154:
            v209[3] = v220[3];
LABEL_155:
            v209[2] = v220[2];
LABEL_156:
            v209[1] = v220[1];
LABEL_157:
            *v209 = *v220;
            break;
          default:
            break;
        }
        v208 = *((int *)v348 + 27);
      }
    }
    v221 = v348;
    v222 = *((_QWORD **)v348 + 15);
    if ( (_DWORD)v208 )
    {
      v223 = (__int64 *)v365;
      if ( v222 != v365 )
      {
        if ( (int)v208 >> 3 <= 0 )
        {
          v227 = v365;
        }
        else
        {
          v224 = *((_QWORD **)v348 + 15);
          do
          {
            v225 = *v223;
            v224 += 8;
            v223 += 8;
            *(v224 - 8) = v225;
            *(v224 - 7) = *(v223 - 7);
            *(v224 - 6) = *(v223 - 6);
            *(v224 - 5) = *(v223 - 5);
            *(v224 - 4) = *(v223 - 4);
            *(v224 - 3) = *(v223 - 3);
            *(v224 - 2) = *(v223 - 2);
            *(v224 - 1) = *(v223 - 1);
          }
          while ( v224 != &v222[8 * (unsigned int)(((int)v208 >> 3) - 1) + 8] );
          v226 = (((int)v208 >> 3) - 1 + 1LL) << 6;
          v227 = (char *)v365 + v226;
          v222 = (_QWORD *)((char *)v222 + v226);
        }
        switch ( (int)v208 % 8 )
        {
          case 1:
            goto LABEL_172;
          case 2:
            goto LABEL_171;
          case 3:
            goto LABEL_170;
          case 4:
            goto LABEL_169;
          case 5:
            goto LABEL_168;
          case 6:
            goto LABEL_167;
          case 7:
            v222[6] = v227[6];
LABEL_167:
            v222[5] = v227[5];
LABEL_168:
            v222[4] = v227[4];
LABEL_169:
            v222[3] = v227[3];
LABEL_170:
            v222[2] = v227[2];
LABEL_171:
            v222[1] = v227[1];
LABEL_172:
            *v222 = *v227;
            break;
          default:
            break;
        }
        v221 = v348;
        v208 = *((int *)v348 + 27);
      }
    }
    v228 = *((_DWORD *)v221 + 26);
    v229 = *((_QWORD **)v221 + 14);
    v230 = (char *)v365 + 8 * (int)v208;
    if ( v228 && v229 != v230 )
    {
      if ( v228 >> 3 > 0 )
      {
        v231 = *((_QWORD **)v221 + 14);
        v232 = (__int64 *)((char *)v365 + 8 * (int)v208);
        v233 = (unsigned int)((v228 >> 3) - 1);
        do
        {
          v234 = *v232;
          v231 += 8;
          v232 += 8;
          *(v231 - 8) = v234;
          *(v231 - 7) = *(v232 - 7);
          *(v231 - 6) = *(v232 - 6);
          *(v231 - 5) = *(v232 - 5);
          *(v231 - 4) = *(v232 - 4);
          *(v231 - 3) = *(v232 - 3);
          *(v231 - 2) = *(v232 - 2);
          *(v231 - 1) = *(v232 - 1);
        }
        while ( v231 != &v229[8 * v233 + 8] );
        v235 = ((int)v233 + 1LL) << 6;
        v230 = (_QWORD *)((char *)v230 + v235);
        v229 = (_QWORD *)((char *)v229 + v235);
      }
      switch ( v228 % 8 )
      {
        case 1:
          goto LABEL_187;
        case 2:
          goto LABEL_186;
        case 3:
          goto LABEL_185;
        case 4:
          goto LABEL_184;
        case 5:
          goto LABEL_183;
        case 6:
          goto LABEL_182;
        case 7:
          v229[6] = v230[6];
LABEL_182:
          v229[5] = v230[5];
LABEL_183:
          v229[4] = v230[4];
LABEL_184:
          v229[3] = v230[3];
LABEL_185:
          v229[2] = v230[2];
LABEL_186:
          v229[1] = v230[1];
LABEL_187:
          *v229 = *v230;
          break;
        default:
          break;
      }
      v208 = *((int *)v348 + 27);
    }
    v236 = v348;
    v237 = *((_QWORD **)v348 + 17);
    if ( (_DWORD)v208 )
    {
      v238 = (__int64 *)v366;
      if ( v237 != v366 )
      {
        if ( (int)v208 >> 3 <= 0 )
        {
          v242 = v366;
        }
        else
        {
          v239 = *((_QWORD **)v348 + 17);
          do
          {
            v240 = *v238;
            v239 += 8;
            v238 += 8;
            *(v239 - 8) = v240;
            *(v239 - 7) = *(v238 - 7);
            *(v239 - 6) = *(v238 - 6);
            *(v239 - 5) = *(v238 - 5);
            *(v239 - 4) = *(v238 - 4);
            *(v239 - 3) = *(v238 - 3);
            *(v239 - 2) = *(v238 - 2);
            *(v239 - 1) = *(v238 - 1);
          }
          while ( &v237[8 * (unsigned int)(((int)v208 >> 3) - 1) + 8] != v239 );
          v241 = (((int)v208 >> 3) - 1 + 1LL) << 6;
          v242 = (char *)v366 + v241;
          v237 = (_QWORD *)((char *)v237 + v241);
        }
        switch ( (int)v208 % 8 )
        {
          case 1:
            goto LABEL_202;
          case 2:
            goto LABEL_201;
          case 3:
            goto LABEL_200;
          case 4:
            goto LABEL_199;
          case 5:
            goto LABEL_198;
          case 6:
            goto LABEL_197;
          case 7:
            v237[6] = v242[6];
LABEL_197:
            v237[5] = v242[5];
LABEL_198:
            v237[4] = v242[4];
LABEL_199:
            v237[3] = v242[3];
LABEL_200:
            v237[2] = v242[2];
LABEL_201:
            v237[1] = v242[1];
LABEL_202:
            *v237 = *v242;
            break;
          default:
            break;
        }
        v236 = v348;
        v208 = *((int *)v348 + 27);
      }
    }
    v243 = *((_DWORD *)v236 + 26);
    v244 = *((__int64 **)v236 + 16);
    v245 = (__int64 *)((char *)v366 + 8 * v208);
    if ( v243 && v244 != v245 )
    {
      if ( v243 >> 3 > 0 )
      {
        v246 = *((__int64 **)v236 + 16);
        v247 = v245;
        v248 = (unsigned int)((v243 >> 3) - 1);
        do
        {
          v249 = *v247;
          v246 += 8;
          v247 += 8;
          *(v246 - 8) = v249;
          *(v246 - 7) = *(v247 - 7);
          *(v246 - 6) = *(v247 - 6);
          *(v246 - 5) = *(v247 - 5);
          *(v246 - 4) = *(v247 - 4);
          *(v246 - 3) = *(v247 - 3);
          *(v246 - 2) = *(v247 - 2);
          *(v246 - 1) = *(v247 - 1);
        }
        while ( v246 != &v244[8 * v248 + 8] );
        v250 = ((int)v248 + 1LL) << 6;
        v245 = (__int64 *)((char *)v245 + v250);
        v244 = (__int64 *)((char *)v244 + v250);
      }
      switch ( v243 % 8 )
      {
        case 1:
          goto LABEL_217;
        case 2:
          goto LABEL_216;
        case 3:
          goto LABEL_215;
        case 4:
          goto LABEL_214;
        case 5:
          goto LABEL_213;
        case 6:
          goto LABEL_212;
        case 7:
          v244[6] = v245[6];
LABEL_212:
          v244[5] = v245[5];
LABEL_213:
          v244[4] = v245[4];
LABEL_214:
          v244[3] = v245[3];
LABEL_215:
          v244[2] = v245[2];
LABEL_216:
          v244[1] = v245[1];
LABEL_217:
          *v244 = *v245;
          break;
        default:
          break;
      }
    }
    operator delete[](v361);
    if ( v365 )
      operator delete[](v365);
    if ( v366 )
      operator delete[](v366);
  }
  *(_QWORD *)v348 = *((_QWORD *)a2 + 2);
  return v363;
}

