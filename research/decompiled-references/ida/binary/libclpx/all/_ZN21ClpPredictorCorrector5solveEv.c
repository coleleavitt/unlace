__int64 __fastcall ClpPredictorCorrector::solve(ClpPredictorCorrector *this, double a2)
{
  const void *v3; // rax
  ClpQuadraticObjective *v4; // rbx
  __int64 v5; // rax
  unsigned int (__fastcall ***v6)(_QWORD, ClpPredictorCorrector *); // rdi
  unsigned int (__fastcall **v7)(_QWORD, ClpPredictorCorrector *); // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned int (__fastcall ***v11)(_QWORD, ClpPredictorCorrector *); // rdi
  unsigned int (__fastcall **v12)(_QWORD, ClpPredictorCorrector *); // rax
  int v13; // esi
  double *v14; // rax
  __int64 v15; // xmm0_8
  int updated; // ebx
  unsigned __int64 v17; // rax
  double *v18; // rbp
  double *v19; // r12
  __int64 v20; // rax
  double v21; // xmm0_8
  int v22; // r13d
  __int64 v23; // rsi
  double *v24; // r14
  double *v25; // r12
  CoinMessageHandler *v26; // rdi
  CoinMessageHandler *v27; // rax
  CoinMessageHandler *v28; // rax
  CoinMessageHandler *v29; // rax
  CoinMessageHandler *v30; // rax
  double v31; // xmm0_8
  CoinMessageHandler *v32; // rax
  CoinMessageHandler *v33; // rax
  __int64 v34; // rax
  double v35; // xmm1_8
  double v36; // xmm0_8
  double v37; // xmm4_8
  double v38; // xmm2_8
  double v39; // xmm3_8
  double v40; // xmm1_8
  double v41; // xmm0_8
  double v42; // xmm2_8
  double v43; // xmm6_8
  CoinMessageHandler *v44; // rax
  __int64 v45; // rax
  int v46; // eax
  double v47; // xmm2_8
  double v48; // xmm1_8
  unsigned __int64 v49; // rsi
  double *v50; // rdx
  double *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // xmm0_8
  __int64 v54; // rax
  double *v55; // rcx
  double *v56; // rax
  _QWORD *v57; // rcx
  _QWORD *v58; // rax
  __int64 *v59; // rdx
  __int64 v60; // xmm0_8
  double v61; // xmm3_8
  double v62; // xmm0_8
  double v63; // xmm0_8
  char v64; // al
  int v65; // eax
  int v66; // ebx
  double v67; // xmm0_8
  const double *v68; // rdi
  double v69; // xmm0_8
  double v70; // xmm1_8
  double v71; // xmm0_8
  double v72; // xmm1_8
  unsigned __int64 v73; // rdi
  void *v74; // rbp
  double v75; // xmm1_8
  double v76; // xmm0_8
  int v77; // eax
  double v78; // xmm0_8
  double v79; // xmm1_8
  double v80; // xmm0_8
  int v81; // eax
  double v82; // xmm0_8
  double v83; // xmm1_8
  double v84; // xmm3_8
  double v85; // xmm2_8
  double v86; // xmm2_8
  double v87; // xmm0_8
  double v88; // xmm3_8
  double v89; // xmm1_8
  double v90; // xmm0_8
  double v91; // xmm0_8
  double v92; // xmm0_8
  int v93; // eax
  double *v94; // r13
  int v95; // r12d
  double *v96; // rbp
  int v97; // r14d
  double *v98; // rcx
  double *v99; // rax
  __int64 *v100; // rdx
  __int64 v101; // xmm0_8
  int v102; // esi
  _QWORD *v103; // r11
  _QWORD *v104; // rax
  __int64 *v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // xmm0_8
  __int64 v108; // rax
  double *v109; // rcx
  double *v110; // rax
  double *v111; // rdx
  double v112; // xmm0_8
  double *v113; // rcx
  double *v114; // rax
  __int64 *v115; // rdx
  __int64 v116; // xmm0_8
  double v117; // xmm0_8
  double v118; // xmm1_8
  double v119; // xmm5_8
  double v120; // xmm4_8
  double v121; // xmm6_8
  double *v122; // rax
  double *v123; // rdx
  double *v124; // rcx
  double v125; // xmm0_8
  int v126; // ecx
  _QWORD *v127; // r11
  __int64 *v128; // rdx
  _QWORD *v129; // rax
  __int64 v130; // rdi
  __int64 v131; // xmm0_8
  __int64 v132; // rdi
  _QWORD *v133; // rax
  double *v134; // rax
  double *v135; // rdx
  double *v136; // rcx
  __int64 v137; // xmm0_8
  double *v138; // rcx
  __int64 v139; // rdx
  double *v140; // rax
  __int64 v141; // xmm0_8
  double *v142; // rax
  double v143; // xmm0_8
  __int64 v144; // rdi
  __int64 v145; // rax
  double v146; // xmm3_8
  double v147; // xmm2_8
  unsigned __int64 v148; // rcx
  double *v149; // rax
  double *v150; // rdx
  __int64 v151; // rdi
  __int64 v152; // xmm0_8
  __int64 v153; // rax
  double *v154; // rsi
  double v155; // xmm0_8
  CoinMessageHandler *v156; // rax
  CoinMessageHandler *v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rax
  int v163; // esi
  double *v164; // rdx
  double *v165; // rcx
  __int64 v166; // rax
  double v167; // xmm0_8
  __int64 v168; // rdx
  double *v169; // rcx
  double *v170; // rdx
  double *v171; // rdx
  double *v172; // rax
  double v173; // xmm0_8
  __int64 v174; // rdx
  double *v175; // rdi
  double *v176; // rdx
  _QWORD *v177; // rsi
  __int64 *v178; // rcx
  _QWORD *v179; // rdx
  __int64 v180; // xmm0_8
  __int64 v181; // rax
  _QWORD *v182; // rdx
  int v183; // edx
  int v184; // ecx
  _QWORD *v185; // rsi
  _QWORD *v186; // rdi
  _QWORD *v187; // rax
  __int64 *v188; // rdx
  __int64 v189; // r9
  __int64 v190; // xmm0_8
  __int64 v191; // rax
  __int64 v192; // rdi
  double v193; // xmm0_8
  CoinMessageHandler *v194; // rax
  CoinMessageHandler *v195; // rax
  CoinMessageHandler *v196; // rax
  CoinMessageHandler *v197; // rax
  double v198; // xmm0_8
  __int64 v199; // rax
  __int64 v200; // rdi
  CoinMessageHandler *v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r9
  CoinMessageHandler *v206; // rax
  double v207; // xmm0_8
  __int64 v208; // rax
  double *v209; // rsi
  double *v210; // rax
  double *v211; // rdx
  double v212; // xmm0_8
  int v213; // r9d
  __int64 v214; // rsi
  double *v215; // rax
  double *v216; // rdx
  __int64 v217; // rdi
  double v218; // xmm0_8
  __int64 v219; // rdx
  _QWORD *v220; // rdx
  double *v221; // rax
  double *v222; // rdx
  double *v223; // rsi
  double v224; // xmm0_8
  double *v225; // rsi
  double *v226; // rax
  double *v227; // rdx
  double v228; // xmm0_8
  double *v229; // rsi
  double *v230; // rax
  double *v231; // rdx
  double v232; // xmm0_8
  double *v233; // rsi
  double *v234; // rax
  double *v235; // rdx
  double v236; // xmm0_8
  CoinMessageHandler *v237; // rax
  CoinMessageHandler *v238; // rax
  double v239; // xmm0_8
  __int64 v240; // rax
  int v241; // eax
  int v242; // eax
  int v243; // eax
  CoinMessageHandler *v244; // rax
  __int64 v245; // rax
  int v246; // eax
  double v247; // xmm0_8
  __int64 v248; // rdx
  double *v249; // rcx
  __int64 v250; // rax
  _QWORD *v251; // rcx
  _QWORD *v252; // rax
  __int64 *v253; // rdx
  __int64 v254; // xmm0_8
  _QWORD *v255; // rcx
  __int64 *v256; // rax
  __int64 v257; // rdx
  __int64 v258; // xmm0_8
  __int64 v259; // rdx
  _QWORD *v260; // rax
  int v261; // eax
  _QWORD *v262; // rsi
  int v263; // eax
  __int64 v264; // rdi
  _QWORD *v265; // rax
  int v266; // ecx
  _QWORD *v267; // rdi
  CoinMessageHandler *v268; // rax
  double v269; // xmm0_8
  CoinMessageHandler *v270; // rax
  __int64 v271; // rdx
  __int64 v272; // rcx
  __int64 v273; // r8
  __int64 v274; // r9
  __int64 v275; // rax
  __int64 v276; // rax
  __int64 v277; // rax
  CoinMessageHandler *v278; // rdi
  CoinMessageHandler *v279; // rax
  __int64 v280; // rdx
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // r9
  const char *v284; // rsi
  __int64 v285; // rax
  CoinMessageHandler *v286; // rdi
  __int64 v287; // rax
  __int64 v288; // rdi
  CoinMessageHandler *v289; // rax
  __int64 v290; // rax
  CoinMessageHandler *v291; // rdi
  CoinMessageHandler *v292; // rdi
  CoinMessageHandler *v293; // rax
  __int64 v294; // [rsp+0h] [rbp-1A8h]
  __int64 v295; // [rsp+8h] [rbp-1A0h]
  _QWORD *v296; // [rsp+10h] [rbp-198h]
  double *v297; // [rsp+18h] [rbp-190h]
  double *v298; // [rsp+20h] [rbp-188h]
  double *v299; // [rsp+28h] [rbp-180h]
  double v300; // [rsp+30h] [rbp-178h]
  double v301; // [rsp+30h] [rbp-178h]
  double v302; // [rsp+30h] [rbp-178h]
  double v303; // [rsp+38h] [rbp-170h]
  double v304; // [rsp+38h] [rbp-170h]
  double *v305; // [rsp+40h] [rbp-168h]
  double v306; // [rsp+48h] [rbp-160h]
  double v307; // [rsp+48h] [rbp-160h]
  __int64 v308; // [rsp+48h] [rbp-160h]
  int v309; // [rsp+50h] [rbp-158h]
  int v310; // [rsp+54h] [rbp-154h]
  double *v311; // [rsp+58h] [rbp-150h]
  int *v312; // [rsp+60h] [rbp-148h]
  ClpQuadraticObjective *v313; // [rsp+78h] [rbp-130h]
  double v314; // [rsp+80h] [rbp-128h]
  const void *v315; // [rsp+88h] [rbp-120h]
  CoinMessages *v316; // [rsp+90h] [rbp-118h]
  int v317; // [rsp+98h] [rbp-110h]
  int v318; // [rsp+9Ch] [rbp-10Ch]
  double v319; // [rsp+B0h] [rbp-F8h]
  __int64 v320; // [rsp+C0h] [rbp-E8h]
  double v321; // [rsp+C8h] [rbp-E0h]
  char WorkingData; // [rsp+D1h] [rbp-D7h]
  char v323; // [rsp+D2h] [rbp-D6h]
  char v324; // [rsp+D3h] [rbp-D5h]
  int v325; // [rsp+D4h] [rbp-D4h]
  double v326; // [rsp+E8h] [rbp-C0h]
  double *v327; // [rsp+F0h] [rbp-B8h]
  double *v328; // [rsp+F8h] [rbp-B0h]
  char *v329; // [rsp+100h] [rbp-A8h]
  int v330; // [rsp+108h] [rbp-A0h]
  int v331; // [rsp+10Ch] [rbp-9Ch]
  double *v332; // [rsp+110h] [rbp-98h]
  _QWORD *v333; // [rsp+118h] [rbp-90h]
  double *v334; // [rsp+120h] [rbp-88h]
  _QWORD *v335; // [rsp+128h] [rbp-80h]
  __int64 v336; // [rsp+130h] [rbp-78h]
  double *v337; // [rsp+138h] [rbp-70h]
  double *v338; // [rsp+140h] [rbp-68h]
  int v339; // [rsp+148h] [rbp-60h]
  int v340; // [rsp+14Ch] [rbp-5Ch]
  int v341; // [rsp+150h] [rbp-58h] BYREF
  int v342; // [rsp+154h] [rbp-54h] BYREF
  double v343; // [rsp+158h] [rbp-50h] BYREF
  double v344; // [rsp+160h] [rbp-48h] BYREF
  double v345[8]; // [rsp+168h] [rbp-40h] BYREF

  *((_DWORD *)this + 80) = -1;
  *((_DWORD *)this + 328) = 1;
  WorkingData = ClpInterior::createWorkingData(this);
  if ( !WorkingData )
  {
    *((_DWORD *)this + 80) = 4;
    return 2;
  }
  v3 = *((const void **)this + 20);
  v315 = v3;
  if ( v3 )
  {
    v313 = (ClpQuadraticObjective *)__dynamic_cast(
                                      v3,
                                      (const struct __class_type_info *)&`typeinfo for'ClpObjective,
                                      (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
                                      0);
    if ( v313 )
    {
      if ( !*(_BYTE *)(*((_QWORD *)this + 161) + 12LL) )
      {
        v287 = CoinMessageHandler::message(
                 *((CoinMessageHandler **)this + 43),
                 81,
                 (ClpPredictorCorrector *)((char *)this + 416));
        CoinMessageHandler::operator<<(v287, 0, a2);
        return 0xFFFFFFFFLL;
      }
      v4 = (ClpQuadraticObjective *)operator new(0x40u);
      ClpQuadraticObjective::ClpQuadraticObjective(v4, v313, 1);
      *((_QWORD *)this + 20) = v4;
    }
    else
    {
      v315 = nullptr;
    }
    if ( *((int *)this + 64) <= 0 )
      goto LABEL_19;
  }
  else
  {
    v313 = nullptr;
    if ( *((int *)this + 64) <= 0 )
      goto LABEL_19;
  }
  if ( *((_QWORD *)this + 28) )
  {
    v320 = *((_QWORD *)this + 24);
    v5 = (*(__int64 (__fastcall **)(__int64, ClpPredictorCorrector *))(*(_QWORD *)v320 + 176LL))(v320, this);
    v6 = *((unsigned int (__fastcall ****)(_QWORD, ClpPredictorCorrector *))this + 161);
    *((_QWORD *)this + 24) = v5;
    v7 = *v6;
    *((_QWORD *)this + 128) = 0x7FEFFFFFFFFFFFFFLL;
    *((_QWORD *)this + 129) = 0x7FEFFFFFFFFFFFFFLL;
    *((_QWORD *)this + 130) = 0x7FEFFFFFFFFFFFFFLL;
    *((_QWORD *)this + 131) = 0x7FEFFFFFFFFFFFFFLL;
    *((_QWORD *)this + 132) = 0x7FEFFFFFFFFFFFFFLL;
    *((_QWORD *)this + 133) = 0x7FEFFFFFFFFFFFFFLL;
    if ( (*v7)(v6, this)
      || (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 161) + 8LL))(*((_QWORD *)this + 161)) )
    {
      *((_DWORD *)this + 80) = 4;
      ClpInterior::deleteWorkingData(this);
      v8 = *((_QWORD *)this + 24);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 480LL))(v8);
      *((_QWORD *)this + 24) = v320;
LABEL_13:
      if ( v315 )
      {
        v9 = *((_QWORD *)this + 20);
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9);
        *((_QWORD *)this + 20) = v315;
        return 0xFFFFFFFFLL;
      }
      return 0xFFFFFFFFLL;
    }
    *((_DWORD *)this + 77) = -1;
    *((_QWORD *)this + 124) = 0x3FF0000000000000LL;
    *((_QWORD *)this + 107) = 0x4202A05F20000000LL;
    v310 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    if ( (int)ClpPredictorCorrector::createSolution(this) < 0 )
    {
      *((_DWORD *)this + 80) = 4;
      ClpInterior::deleteWorkingData(this);
      v144 = *((_QWORD *)this + 24);
      if ( v144 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v144 + 480LL))(v144);
      *((_QWORD *)this + 24) = v320;
      return 0xFFFFFFFFLL;
    }
    goto LABEL_23;
  }
LABEL_19:
  v11 = *((unsigned int (__fastcall ****)(_QWORD, ClpPredictorCorrector *))this + 161);
  v12 = *v11;
  *((_QWORD *)this + 128) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 129) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 130) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 131) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 132) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 133) = 0x7FEFFFFFFFFFFFFFLL;
  if ( (*v12)(v11, this)
    || (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 161) + 8LL))(*((_QWORD *)this + 161)) )
  {
    *((_DWORD *)this + 80) = 4;
    ClpInterior::deleteWorkingData(this);
    goto LABEL_13;
  }
  *((_DWORD *)this + 77) = -1;
  *((_QWORD *)this + 124) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 107) = 0x4202A05F20000000LL;
  v310 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  if ( (int)ClpPredictorCorrector::createSolution(this) < 0 )
  {
    *((_DWORD *)this + 80) = 4;
    ClpInterior::deleteWorkingData(this);
    return 0xFFFFFFFFLL;
  }
  v320 = 0;
LABEL_23:
  v13 = *((_DWORD *)this + 26);
  v14 = *((double **)this + 16);
  v328 = v14;
  if ( v13 )
  {
    if ( v13 / 8 > 0 )
    {
      v248 = (unsigned int)(v13 / 8 - 1);
      v249 = &v14[8 * v248 + 8];
      do
      {
        *v14 = 0.0;
        v14[1] = 0.0;
        v14 += 8;
        *(v14 - 6) = 0.0;
        *(v14 - 5) = 0.0;
        *(v14 - 4) = 0.0;
        *(v14 - 3) = 0.0;
        *(v14 - 2) = 0.0;
        *(v14 - 1) = 0.0;
      }
      while ( v14 != v249 );
      v14 = &v328[8 * (int)v248 + 8];
    }
    switch ( v13 % 8 )
    {
      case 1:
        goto LABEL_508;
      case 2:
        goto LABEL_507;
      case 3:
        goto LABEL_506;
      case 4:
        goto LABEL_505;
      case 5:
        goto LABEL_504;
      case 6:
        goto LABEL_503;
      case 7:
        v14[6] = 0.0;
LABEL_503:
        v14[5] = 0.0;
LABEL_504:
        v14[4] = 0.0;
LABEL_505:
        v14[3] = 0.0;
LABEL_506:
        v14[2] = 0.0;
LABEL_507:
        v14[1] = 0.0;
LABEL_508:
        *v14 = 0.0;
        break;
      default:
        break;
    }
    v13 = *((_DWORD *)this + 26);
  }
  multiplyAdd(
    (const double *)(*((_QWORD *)this + 143) + 8LL * *((int *)this + 27)),
    v13,
    -1.0,
    *((double **)this + 138),
    0.0);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 360LL))(
    *((_QWORD *)this + 24),
    *((_QWORD *)this + 143),
    *((_QWORD *)this + 138),
    1.0);
  maximumAbsElement(*((const double **)this + 138), *((_DWORD *)this + 26));
  *((_QWORD *)this + 121) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 127) = 0;
  *((_QWORD *)this + 126) = 0;
  *((_QWORD *)this + 122) = 0x3FF0000000000000LL;
  *((_BYTE *)this + 1308) = 0;
  *((_BYTE *)this + 1309) = 0;
  v15 = *((_QWORD *)this + 110);
  *((_QWORD *)this + 113) = v15;
  *((_QWORD *)this + 107) = v15;
  updated = ClpPredictorCorrector::updateSolution(this, -1.797693134862316e308);
  if ( (unsigned __int64)v310 > 0xFFFFFFFFFFFFFFFLL
    || (v336 = 8LL * v310, v297 = (double *)operator new[](v336), v17 = *((int *)this + 26), v17 > 0xFFFFFFFFFFFFFFFLL) )
  {
LABEL_590:
    __cxa_throw_bad_array_new_length();
  }
  v296 = (_QWORD *)operator new[](8 * v17);
  v18 = (double *)operator new[](v336);
  v298 = v18;
  v19 = (double *)operator new[](v336);
  v299 = v19;
  v329 = (char *)operator new[](v336);
  v20 = operator new[](v336);
  v21 = *((double *)this + 12) * *((double *)this + 11);
  v332 = (double *)v20;
  v316 = (ClpPredictorCorrector *)((char *)this + 416);
  if ( *((int *)this + 80) < 0 )
  {
    v317 = updated;
    v326 = 1.797693134862316e308;
    v303 = 1.797693134862316e308;
    v309 = v310 >> 3;
    v300 = 1.797693134862316e308;
    v319 = 1.797693134862316e288;
    v335 = nullptr;
    v334 = nullptr;
    v333 = nullptr;
    v327 = nullptr;
    v323 = 0;
    v22 = v310 % 8;
    v324 = 0;
    v340 = (v310 >> 3) - 1;
    v325 = 0;
    v331 = v313 == nullptr ? 5 : 10;
    v23 = ((unsigned int)v340 + 1LL) << 6;
    v339 = -1;
    v318 = -1;
    v295 = v23;
    v24 = (double *)((char *)v297 + v23);
    v311 = (double *)((char *)v18 + v23);
    v25 = (double *)((char *)v19 + v23);
    v337 = (double *)&v329[v23];
    v338 = (double *)(v23 + v20);
    v330 = -1;
    while ( 1 )
    {
      ClpPredictorCorrector::complementarityGap(this, (int *)this + 324, (int *)this + 325, 0);
      v26 = *((CoinMessageHandler **)this + 43);
      *((double *)this + 134) = v21;
      v27 = (CoinMessageHandler *)CoinMessageHandler::message(v26, 57, v316);
      v28 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v27);
      v29 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v28);
      v30 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v29);
      v31 = *((double *)this + 134);
      v32 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v30);
      v33 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v32);
      v34 = CoinMessageHandler::operator<<(v33);
      CoinMessageHandler::operator<<(v34, 0, v31);
      if ( (***((int (__fastcall ****)(_QWORD, __int64))this + 45))(*((_QWORD *)this + 45), 100) >= 0 )
      {
        *((_QWORD *)this + 40) = 0x6400000005LL;
        goto LABEL_291;
      }
      *(_OWORD *)((char *)this + 1032) = *((_OWORD *)this + 65);
      v35 = fmin(*((double *)this + 126), *((double *)this + 127));
      *(_OWORD *)((char *)this + 1048) = *((_OWORD *)this + 66);
      v36 = *((double *)this + 134);
      v306 = v35;
      *((double *)this + 133) = v36;
      v37 = 0.93;
      if ( v324 )
      {
        v37 = 0.99;
        if ( updated <= 10000 )
          v37 = 0.7;
      }
      if ( *((_BYTE *)this + 1308) && *((_BYTE *)this + 1309) )
      {
        v38 = *((double *)this + 112);
        v39 = v38;
        if ( v38 < 0.0 )
          v39 = -v38;
        v40 = *((double *)this + 111);
        v41 = v40;
        if ( v40 < 0.0 )
          v41 = -v40;
        v42 = v38 - v40;
        v43 = fmax(1.0, fmax(v39, v41));
        if ( v42 < 0.0 )
          v42 = -v42;
        *(double *)&v312 = v37;
        v44 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 58, v316);
        v45 = CoinMessageHandler::operator<<(v44);
        CoinMessageHandler::operator<<(v45, 0, v42 / v43);
        v46 = v330;
        v47 = v42 / v43;
        if ( v330 < v317 )
          v46 = v317;
        v330 = v46;
        v37 = *(double *)&v312;
        if ( v303 <= v47 )
        {
          v48 = *((double *)this + 112);
          if ( v326 > v48 )
            v326 = *((double *)this + 112);
          v321 = v303;
        }
        else
        {
          v48 = *((double *)this + 112);
          v49 = *((int *)this + 26);
          v318 = *((_DWORD *)this + 77);
          v326 = fmin(v48, v326);
          if ( !v327 )
          {
            if ( v49 > 0xFFFFFFFFFFFFFFFLL )
              goto LABEL_590;
            v327 = (double *)operator new[](8 * v49);
            v250 = operator new[](v336);
            LODWORD(v49) = *((_DWORD *)this + 26);
            v333 = (_QWORD *)v250;
            v48 = *((double *)this + 112);
            v37 = *(double *)&v312;
          }
          if ( (_DWORD)v49 )
          {
            v50 = v327;
            v51 = v328;
            if ( v327 != v328 )
            {
              if ( (int)v49 >> 3 <= 0 )
              {
                v56 = v327;
                v55 = v328;
              }
              else
              {
                v52 = (unsigned int)(((int)v49 >> 3) - 1);
                do
                {
                  v53 = *(_QWORD *)v51;
                  v51 += 8;
                  v50 += 8;
                  *((_QWORD *)v50 - 8) = v53;
                  *(v50 - 7) = *(v51 - 7);
                  *(v50 - 6) = *(v51 - 6);
                  *(v50 - 5) = *(v51 - 5);
                  *(v50 - 4) = *(v51 - 4);
                  *(v50 - 3) = *(v51 - 3);
                  *(v50 - 2) = *(v51 - 2);
                  *(v50 - 1) = *(v51 - 1);
                }
                while ( v51 != &v328[8 * v52 + 8] );
                v54 = ((int)v52 + 1LL) << 6;
                v55 = (double *)((char *)v328 + v54);
                v56 = (double *)((char *)v327 + v54);
              }
              switch ( (int)v49 % 8 )
              {
                case 1:
                  goto LABEL_58;
                case 2:
                  goto LABEL_57;
                case 3:
                  goto LABEL_56;
                case 4:
                  goto LABEL_55;
                case 5:
                  goto LABEL_54;
                case 6:
                  goto LABEL_53;
                case 7:
                  v56[6] = v55[6];
LABEL_53:
                  v56[5] = v55[5];
LABEL_54:
                  v56[4] = v55[4];
LABEL_55:
                  v56[3] = v55[3];
LABEL_56:
                  v56[2] = v55[2];
LABEL_57:
                  v56[1] = v55[1];
LABEL_58:
                  *v56 = *v55;
                  break;
                default:
                  break;
              }
            }
          }
          v57 = *((_QWORD **)this + 143);
          if ( !v310 || (v58 = v333, v57 == v333) )
          {
LABEL_494:
            v321 = v47;
          }
          else
          {
            if ( v309 > 0 )
            {
              v59 = *((__int64 **)this + 143);
              do
              {
                v60 = *v59;
                v58 += 8;
                v59 += 8;
                *(v58 - 8) = v60;
                *(v58 - 7) = *(v59 - 7);
                *(v58 - 6) = *(v59 - 6);
                *(v58 - 5) = *(v59 - 5);
                *(v58 - 4) = *(v59 - 4);
                *(v58 - 3) = *(v59 - 3);
                *(v58 - 2) = *(v59 - 2);
                *(v58 - 1) = *(v59 - 1);
              }
              while ( v58 != (_QWORD *)((char *)v333 + v295) );
              v57 = (_QWORD *)((char *)v57 + v295);
            }
            switch ( v22 )
            {
              case 1:
                goto LABEL_501;
              case 2:
                goto LABEL_500;
              case 3:
                goto LABEL_499;
              case 4:
                goto LABEL_498;
              case 5:
                goto LABEL_497;
              case 6:
                goto LABEL_496;
              case 7:
                v58[6] = v57[6];
LABEL_496:
                v58[5] = v57[5];
LABEL_497:
                v58[4] = v57[4];
LABEL_498:
                v58[3] = v57[3];
LABEL_499:
                v58[2] = v57[2];
LABEL_500:
                v58[1] = v57[1];
LABEL_501:
                v321 = v47;
                *v58 = *v57;
                break;
              default:
                goto LABEL_494;
            }
          }
        }
        v61 = *((double *)this + 111);
        v247 = v48 - v61;
        if ( v48 - v61 < 0.0 )
          v247 = -v247;
        if ( *((double *)this + 3) > v247 )
          v47 = 0.0;
      }
      else
      {
        if ( v318 >= 0 )
        {
          *(double *)&v305 = v37;
          v145 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 59, v316);
          CoinMessageHandler::operator<<(v145, 0, v36);
          v146 = *((double *)this + 122);
          v37 = *(double *)&v305;
          v147 = *((double *)this + 121) / (*((double *)this + 110) + 10.0);
          if ( v317 > v330 && v146 < 0.000001 && v147 < 0.01 )
          {
            v148 = *((int *)this + 26);
            v339 = *((_DWORD *)this + 77);
            if ( !v334 )
            {
              if ( v148 > 0xFFFFFFFFFFFFFFFLL )
                goto LABEL_590;
              v334 = (double *)operator new[](8 * v148);
              v277 = operator new[](v336);
              LODWORD(v148) = *((_DWORD *)this + 26);
              v335 = (_QWORD *)v277;
              v146 = *((double *)this + 122);
              v37 = *(double *)&v305;
            }
            if ( (_DWORD)v148 )
            {
              v149 = v334;
              v150 = v328;
              if ( v334 != v328 )
              {
                if ( (int)v148 >> 3 <= 0 )
                {
                  v154 = v328;
                }
                else
                {
                  v151 = (unsigned int)(((int)v148 >> 3) - 1);
                  do
                  {
                    v152 = *(_QWORD *)v150;
                    v149 += 8;
                    v150 += 8;
                    *((_QWORD *)v149 - 8) = v152;
                    *(v149 - 7) = *(v150 - 7);
                    *(v149 - 6) = *(v150 - 6);
                    *(v149 - 5) = *(v150 - 5);
                    *(v149 - 4) = *(v150 - 4);
                    *(v149 - 3) = *(v150 - 3);
                    *(v149 - 2) = *(v150 - 2);
                    *(v149 - 1) = *(v150 - 1);
                  }
                  while ( v149 != &v334[8 * v151 + 8] );
                  v153 = ((int)v151 + 1LL) << 6;
                  v154 = (double *)((char *)v328 + v153);
                  v149 = (double *)((char *)v334 + v153);
                }
                switch ( (int)v148 % 8 )
                {
                  case 1:
                    goto LABEL_516;
                  case 2:
                    goto LABEL_515;
                  case 3:
                    goto LABEL_514;
                  case 4:
                    goto LABEL_513;
                  case 5:
                    goto LABEL_512;
                  case 6:
                    goto LABEL_511;
                  case 7:
                    v149[6] = v154[6];
LABEL_511:
                    v149[5] = v154[5];
LABEL_512:
                    v149[4] = v154[4];
LABEL_513:
                    v149[3] = v154[3];
LABEL_514:
                    v149[2] = v154[2];
LABEL_515:
                    v149[1] = v154[1];
LABEL_516:
                    *v149 = *v154;
                    break;
                  default:
                    break;
                }
              }
            }
            v251 = *((_QWORD **)this + 143);
            if ( !v310 || (v252 = v335, v251 == v335) )
            {
LABEL_538:
              v330 = v317;
            }
            else
            {
              if ( v309 > 0 )
              {
                v253 = *((__int64 **)this + 143);
                do
                {
                  v254 = *v253;
                  v252 += 8;
                  v253 += 8;
                  *(v252 - 8) = v254;
                  *(v252 - 7) = *(v253 - 7);
                  *(v252 - 6) = *(v253 - 6);
                  *(v252 - 5) = *(v253 - 5);
                  *(v252 - 4) = *(v253 - 4);
                  *(v252 - 3) = *(v253 - 3);
                  *(v252 - 2) = *(v253 - 2);
                  *(v252 - 1) = *(v253 - 1);
                }
                while ( v252 != (_QWORD *)((char *)v335 + v295) );
                v251 = (_QWORD *)((char *)v251 + v295);
              }
              switch ( v22 )
              {
                case 1:
                  goto LABEL_280;
                case 2:
                  goto LABEL_279;
                case 3:
                  goto LABEL_278;
                case 4:
                  goto LABEL_277;
                case 5:
                  goto LABEL_276;
                case 6:
                  goto LABEL_275;
                case 7:
                  v252[6] = v251[6];
LABEL_275:
                  v252[5] = v251[5];
LABEL_276:
                  v252[4] = v251[4];
LABEL_277:
                  v252[3] = v251[3];
LABEL_278:
                  v252[2] = v251[2];
LABEL_279:
                  v252[1] = v251[1];
LABEL_280:
                  *v252 = *v251;
                  v330 = v317;
                  break;
                default:
                  goto LABEL_538;
              }
            }
          }
          if ( v323 )
          {
            v155 = 0.01;
            if ( v146 > 0.01 || v147 > 0.01 || (v155 = 0.01 * *((double *)this + 108), *((double *)this + 123) > v155) )
            {
              v289 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 62, v316);
              v290 = CoinMessageHandler::operator<<(v289);
              CoinMessageHandler::operator<<(v290, 0, v155);
              *((_DWORD *)this + 80) = 0;
              goto LABEL_291;
            }
            v36 = *((double *)this + 134);
          }
          else
          {
            v36 = *((double *)this + 134);
            if ( (v146 > 0.1
               || *((double *)this + 121) / (*((double *)this + 110) + 10.0) > 0.1
               || *((double *)this + 123) > 0.1 * *((double *)this + 108))
              && *((int *)this + 77) > 50
              && v36 > *((double *)this + 129) * 0.9 )
            {
              goto LABEL_471;
            }
            if ( v36 > v300 * 0.95 && v303 < 0.001 )
            {
              v243 = *((_DWORD *)this + 77);
              if ( v243 > v318 + 5 || v243 > 100 )
                goto LABEL_471;
            }
          }
        }
        v48 = *((double *)this + 112);
        if ( v36 > 0.5 * v300 )
        {
          v36 = v326 + 0.000000001;
          if ( v48 > v326 + 0.000000001 )
          {
            v242 = *((_DWORD *)this + 77);
            if ( v242 > v318 + 5 || v242 > 100 )
              goto LABEL_471;
            v61 = *((double *)this + 111);
            v321 = v303;
            v47 = 1.797693134862316e308;
          }
          else
          {
            v61 = *((double *)this + 111);
            v321 = v303;
            v47 = 1.797693134862316e308;
          }
        }
        else
        {
          v61 = *((double *)this + 111);
          v321 = v303;
          v47 = 1.797693134862316e308;
        }
      }
      v62 = fabs(v48) + 1.0 + fabs(v61);
      if ( v313 )
        v62 = v62 * 5.0;
      v63 = v62 * 0.000000001;
      if ( v63 + 0.00001 > v47 )
      {
        v323 = WorkingData;
      }
      else
      {
        v64 = v323;
        if ( v63 + 0.1 > *((double *)this + 134) )
          v64 = WorkingData;
        v323 = v64;
      }
      if ( v47 < 0.000001 || (v36 = *((double *)this + 134), v47 < 0.0001) && v36 < 0.1 )
      {
        if ( v324 )
        {
          v36 = *((double *)this + 134);
        }
        else
        {
          v302 = v37;
          v237 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 60, v316);
          v238 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v237);
          v239 = *((double *)this + 134);
          v240 = CoinMessageHandler::operator<<(v238);
          CoinMessageHandler::operator<<(v240, 0, v239);
          v36 = *((double *)this + 134);
          v37 = v302;
          v323 = WorkingData;
          v324 = WorkingData;
        }
      }
      if ( v36 >= v319 * 1.05 )
      {
        v156 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 61, v316);
        v36 = *((double *)this + 134);
        v157 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v156);
        v162 = CoinMessageHandler::operator<<(v157, (__int64)"increasing", v158, v159, v160, v161, v294);
        CoinMessageHandler::operator<<(v162, 0, v36);
        if ( v318 >= 0 && v323 )
          goto LABEL_471;
        v65 = *((_DWORD *)this + 77);
        if ( v65 - v325 >= v331 && *((double *)this + 134) < 0.000001 )
          goto LABEL_291;
      }
      else
      {
        v65 = *((_DWORD *)this + 77);
        if ( v37 * v319 > v36 )
        {
          v325 = *((_DWORD *)this + 77);
          v319 = v36;
          goto LABEL_85;
        }
        if ( v65 - v325 < v331 )
        {
          if ( v65 - v325 <= 1 )
            goto LABEL_85;
        }
        else if ( v36 < 0.001 )
        {
          v268 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 61, v316);
          v269 = *((double *)this + 134);
          v270 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v268);
          v275 = CoinMessageHandler::operator<<(v270, (__int64)"not decreasing", v271, v272, v273, v274, v294);
          CoinMessageHandler::operator<<(v275, 0, v269);
          v36 = v303 * 0.75;
          if ( v47 > v303 * 0.75 && updated <= 9999 )
            goto LABEL_291;
          v65 = *((_DWORD *)this + 77);
          goto LABEL_85;
        }
        if ( v36 < 0.000001 )
        {
          v293 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 61, v316);
          v67 = *((double *)this + 134);
          v279 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v293);
          v284 = "not decreasing";
          goto LABEL_571;
        }
      }
LABEL_85:
      if ( *((_DWORD *)this + 326) < v65 || (v66 = ClpModel::hitMaximumIterations(this), (_BYTE)v66) )
      {
        v276 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 63, v316);
        CoinMessageHandler::operator<<(v276, 0, v36);
        *((_DWORD *)this + 80) = 3;
        ClpModel::onStopped(this);
        goto LABEL_291;
      }
      v67 = *((double *)this + 119);
      if ( v67 > v47 )
      {
        v278 = *((CoinMessageHandler **)this + 43);
        *((_DWORD *)this + 80) = 0;
        v279 = (CoinMessageHandler *)CoinMessageHandler::message(v278, 64, v316);
        v284 = " ";
LABEL_571:
        v285 = CoinMessageHandler::operator<<(v279, (__int64)v284, v280, v281, v282, v283, v294);
        CoinMessageHandler::operator<<(v285, 0, v67);
        goto LABEL_291;
      }
      v67 = *((double *)this + 134);
      if ( v67 < 1.0e-12 )
      {
        v286 = *((CoinMessageHandler **)this + 43);
        *((_DWORD *)this + 80) = 0;
        v279 = (CoinMessageHandler *)CoinMessageHandler::message(v286, 64, v316);
        v284 = "- small complementarity gap";
        goto LABEL_571;
      }
      if ( v67 < 1.0e-10 && v47 < 1.0e-10 )
      {
        v291 = *((CoinMessageHandler **)this + 43);
        *((_DWORD *)this + 80) = 0;
        v279 = (CoinMessageHandler *)CoinMessageHandler::message(v291, 64, v316);
        v284 = "- objective gap and complementarity gap both small";
        goto LABEL_571;
      }
      if ( v47 < 0.000000001 )
      {
        v67 = v67 * v47 * *((double *)this + 126) * *((double *)this + 127);
        if ( v67 < 1.0e-17 && *((_DWORD *)this + 77) > v325 )
        {
          v292 = *((CoinMessageHandler **)this + 43);
          *((_DWORD *)this + 80) = 0;
          v279 = (CoinMessageHandler *)CoinMessageHandler::message(v292, 64, v316);
          v284 = "- objective gap and complementarity gap both smallish and small steps";
          goto LABEL_571;
        }
      }
      v68 = *((const double **)this + 142);
      *((_QWORD *)this + 136) = 0;
      v341 = 0;
      v342 = 0;
      v343 = 0.0;
      getNorms(v68, v310, &v344, &v343);
      v69 = v343 / (double)*((int *)this + 324);
      v70 = sqrt(v69);
      if ( v69 < 0.0 )
        sqrt(v69);
      v71 = v344;
      *((double *)this + 113) = v70;
      v72 = 1.0;
      *((_QWORD *)this + 124) = 0x3FF0000000000000LL;
      if ( v71 > 1.0e27 )
      {
        do
        {
          v71 = v71 * 0.5;
          v72 = v72 * 0.5;
        }
        while ( v71 > 1.0e27 );
        *((double *)this + 124) = v72;
        v344 = v71;
        if ( v72 != 1.0 )
        {
          v201 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 65, v316);
          v206 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                         v201,
                                         (__int64)"diagonal",
                                         v202,
                                         v203,
                                         v204,
                                         v205,
                                         v294);
          v207 = *((double *)this + 124);
          v208 = CoinMessageHandler::operator<<(v206);
          CoinMessageHandler::operator<<(v208, 0, v207);
          v72 = *((double *)this + 124);
          *((double *)this + 113) = *((double *)this + 113) * v72;
        }
      }
      v36 = 0.0;
      multiplyAdd(nullptr, v310, 0.0, *((double **)this + 142), v72);
      v73 = *((int *)this + 26);
      if ( v73 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_590;
      v74 = (void *)operator new[](4 * v73);
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, void *, double, double, double))(**((_QWORD **)this + 161)
                                                                                          + 16LL))(
             *((_QWORD *)this + 161),
             *((_QWORD *)this + 142),
             v74,
             0.0,
             v72,
             0.5) == -1 )
      {
        *((_DWORD *)this + 80) = 4;
        ClpInterior::deleteWorkingData(this);
        result = 0xFFFFFFFFLL;
        if ( v320 )
        {
          v288 = *((_QWORD *)this + 24);
          if ( v288 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v288 + 480LL))(v288);
            result = 0xFFFFFFFFLL;
          }
          *((_QWORD *)this + 24) = v320;
        }
        return result;
      }
      operator delete[](v74);
      if ( *(_DWORD *)(*((_QWORD *)this + 161) + 48LL) )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::endl<char,std::char_traits<char>>();
        abort();
      }
      ClpPredictorCorrector::setupForSolve(this, 0);
      ClpPredictorCorrector::findDirectionVector(this, 0);
      if ( *((double *)this + 136) < 0.0 )
        *((_QWORD *)this + 136) = 0;
      if ( v318 > 0 && 0.0 > 1.0 )
      {
LABEL_471:
        v244 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 62, v316);
        v245 = CoinMessageHandler::operator<<(v244);
        CoinMessageHandler::operator<<(v245, 0, v36);
LABEL_291:
        operator delete[](v297);
        operator delete[](v296);
        operator delete[](v298);
        operator delete[](v299);
        operator delete[](v329);
        operator delete[](v332);
        if ( v327 )
        {
          v163 = *((_DWORD *)this + 26);
          if ( *((_DWORD *)this + 77) - v318 <= 20 || *((_DWORD *)this + 77) - v339 > 4 )
          {
            v171 = v327;
            if ( v327 != v328 && v163 )
            {
              if ( v163 >> 3 <= 0 )
              {
                v176 = v328;
                v175 = v327;
              }
              else
              {
                v172 = v328;
                do
                {
                  v173 = *v171;
                  v172 += 8;
                  v171 += 8;
                  *(v172 - 8) = v173;
                  *(v172 - 7) = *(v171 - 7);
                  *(v172 - 6) = *(v171 - 6);
                  *(v172 - 5) = *(v171 - 5);
                  *(v172 - 4) = *(v171 - 4);
                  *(v172 - 3) = *(v171 - 3);
                  *(v172 - 2) = *(v171 - 2);
                  *(v172 - 1) = *(v171 - 1);
                }
                while ( &v328[8 * (unsigned int)((v163 >> 3) - 1) + 8] != v172 );
                v174 = ((v163 >> 3) - 1 + 1LL) << 6;
                v175 = (double *)((char *)v327 + v174);
                v176 = (double *)((char *)v328 + v174);
              }
              switch ( v163 % 8 )
              {
                case 1:
                  goto LABEL_314;
                case 2:
                  goto LABEL_313;
                case 3:
                  goto LABEL_312;
                case 4:
                  goto LABEL_311;
                case 5:
                  goto LABEL_310;
                case 6:
                  goto LABEL_309;
                case 7:
                  v176[6] = v175[6];
LABEL_309:
                  v176[5] = v175[5];
LABEL_310:
                  v176[4] = v175[4];
LABEL_311:
                  v176[3] = v175[3];
LABEL_312:
                  v176[2] = v175[2];
LABEL_313:
                  v176[1] = v175[1];
LABEL_314:
                  *v176 = *v175;
                  break;
                default:
                  break;
              }
            }
            v177 = *((_QWORD **)this + 143);
            if ( v310 )
            {
              v178 = v333;
              if ( v177 != v333 )
              {
                if ( v309 <= 0 )
                {
                  v182 = v333;
                }
                else
                {
                  v179 = *((_QWORD **)this + 143);
                  do
                  {
                    v180 = *v178;
                    v179 += 8;
                    v178 += 8;
                    *(v179 - 8) = v180;
                    *(v179 - 7) = *(v178 - 7);
                    *(v179 - 6) = *(v178 - 6);
                    *(v179 - 5) = *(v178 - 5);
                    *(v179 - 4) = *(v178 - 4);
                    *(v179 - 3) = *(v178 - 3);
                    *(v179 - 2) = *(v178 - 2);
                    *(v179 - 1) = *(v178 - 1);
                  }
                  while ( (_QWORD *)((char *)v177 + v295) != v179 );
                  v181 = (v340 + 1LL) << 6;
                  v182 = (_QWORD *)((char *)v333 + v181);
                  v177 = (_QWORD *)((char *)v177 + v181);
                }
                switch ( v22 )
                {
                  case 1:
                    goto LABEL_328;
                  case 2:
                    goto LABEL_327;
                  case 3:
                    goto LABEL_326;
                  case 4:
                    goto LABEL_325;
                  case 5:
                    goto LABEL_324;
                  case 6:
                    goto LABEL_323;
                  case 7:
                    v177[6] = v182[6];
LABEL_323:
                    v177[5] = v182[5];
LABEL_324:
                    v177[4] = v182[4];
LABEL_325:
                    v177[3] = v182[3];
LABEL_326:
                    v177[2] = v182[2];
LABEL_327:
                    v177[1] = v182[1];
LABEL_328:
                    *v177 = *v182;
                    break;
                  default:
                    break;
                }
              }
            }
          }
          else
          {
            if ( v334 != v328 && v163 )
            {
              if ( v163 >> 3 <= 0 )
              {
                v170 = v328;
                v169 = v334;
              }
              else
              {
                v164 = v328;
                v165 = v334;
                v166 = (unsigned int)((v163 >> 3) - 1);
                do
                {
                  v167 = *v165;
                  v164 += 8;
                  v165 += 8;
                  *(v164 - 8) = v167;
                  *(v164 - 7) = *(v165 - 7);
                  *(v164 - 6) = *(v165 - 6);
                  *(v164 - 5) = *(v165 - 5);
                  *(v164 - 4) = *(v165 - 4);
                  *(v164 - 3) = *(v165 - 3);
                  *(v164 - 2) = *(v165 - 2);
                  *(v164 - 1) = *(v165 - 1);
                }
                while ( &v328[8 * v166 + 8] != v164 );
                v168 = ((int)v166 + 1LL) << 6;
                v169 = (double *)((char *)v334 + v168);
                v170 = (double *)((char *)v328 + v168);
              }
              switch ( v163 % 8 )
              {
                case 1:
                  goto LABEL_530;
                case 2:
                  goto LABEL_529;
                case 3:
                  goto LABEL_528;
                case 4:
                  goto LABEL_527;
                case 5:
                  goto LABEL_526;
                case 6:
                  goto LABEL_525;
                case 7:
                  v170[6] = v169[6];
LABEL_525:
                  v170[5] = v169[5];
LABEL_526:
                  v170[4] = v169[4];
LABEL_527:
                  v170[3] = v169[3];
LABEL_528:
                  v170[2] = v169[2];
LABEL_529:
                  v170[1] = v169[1];
LABEL_530:
                  *v170 = *v169;
                  break;
                default:
                  break;
              }
            }
            v255 = *((_QWORD **)this + 143);
            if ( v310 )
            {
              v256 = v335;
              if ( v255 != v335 )
              {
                if ( v309 <= 0 )
                {
                  v260 = v335;
                }
                else
                {
                  v257 = *((_QWORD *)this + 143);
                  do
                  {
                    v258 = *v256;
                    v256 += 8;
                    v257 += 64;
                    *(_QWORD *)(v257 - 64) = v258;
                    *(_QWORD *)(v257 - 56) = *(v256 - 7);
                    *(_QWORD *)(v257 - 48) = *(v256 - 6);
                    *(_QWORD *)(v257 - 40) = *(v256 - 5);
                    *(_QWORD *)(v257 - 32) = *(v256 - 4);
                    *(_QWORD *)(v257 - 24) = *(v256 - 3);
                    *(_QWORD *)(v257 - 16) = *(v256 - 2);
                    *(_QWORD *)(v257 - 8) = *(v256 - 1);
                  }
                  while ( (_QWORD *)((char *)v335 + v295) != v256 );
                  v259 = (v340 + 1LL) << 6;
                  v260 = (_QWORD *)((char *)v335 + v259);
                  v255 = (_QWORD *)((char *)v255 + v259);
                }
                switch ( v22 )
                {
                  case 1:
                    goto LABEL_545;
                  case 2:
                    goto LABEL_544;
                  case 3:
                    goto LABEL_543;
                  case 4:
                    goto LABEL_542;
                  case 5:
                    goto LABEL_541;
                  case 6:
                    goto LABEL_540;
                  case 7:
                    v255[6] = v260[6];
LABEL_540:
                    v255[5] = v260[5];
LABEL_541:
                    v255[4] = v260[4];
LABEL_542:
                    v255[3] = v260[3];
LABEL_543:
                    v255[2] = v260[2];
LABEL_544:
                    v255[1] = v260[1];
LABEL_545:
                    *v255 = *v260;
                    break;
                  default:
                    break;
                }
              }
            }
          }
          operator delete[](v327);
          if ( v333 )
            operator delete[](v333);
        }
        if ( v334 )
          operator delete[](v334);
        if ( v335 )
          operator delete[](v335);
        goto LABEL_335;
      }
      ClpPredictorCorrector::findStepLength(this, 0);
      ClpPredictorCorrector::complementarityGap(this, &v341, &v342, 1);
      ClpPredictorCorrector::debugMove(this, 0, *((double *)this + 126), *((double *)this + 127));
      ClpPredictorCorrector::debugMove(this, 0, 0.01, 0.01);
      v75 = *((double *)this + 134);
      v76 = fmax(0.0, 0.8 * v75);
      if ( v313 )
        v76 = fmax(0.0, 0.99 * v75);
      v345[0] = v76;
      v77 = *((_DWORD *)this + 324);
      v78 = (double)v77;
      if ( v75 <= 0.0001 * (double)v77 )
      {
        if ( v77 > 5000 )
        {
          v143 = pow(v78, 1.5);
          v75 = *((double *)this + 134);
          if ( v143 < 250000.0 )
            v143 = 250000.0;
        }
        else
        {
          v143 = v78 * v78;
        }
        *((double *)this + 107) = v75 / v143;
      }
      else
      {
        *((double *)this + 107) = 0.0 / (double)*((int *)this + 325) * (0.0 / v75) * (0.0 / v75);
      }
      ClpPredictorCorrector::affineProduct(this);
      v79 = *((double *)this + 134);
      v80 = 1.001 * v79;
      if ( 1.001 * v79 >= 0.0 )
      {
        v209 = *((double **)this + 145);
        v210 = v297;
        if ( v209 != v297 && v310 )
        {
          if ( v309 > 0 )
          {
            v211 = *((double **)this + 145);
            do
            {
              v212 = *v211;
              v210 += 8;
              v211 += 8;
              *(v210 - 8) = v212;
              *(v210 - 7) = *(v211 - 7);
              *(v210 - 6) = *(v211 - 6);
              *(v210 - 5) = *(v211 - 5);
              *(v210 - 4) = *(v211 - 4);
              *(v210 - 3) = *(v211 - 3);
              *(v210 - 2) = *(v211 - 2);
              v80 = *(v211 - 1);
              *(v210 - 1) = v80;
            }
            while ( v210 != v24 );
            v209 = (double *)((char *)v209 + v295);
            v210 = v24;
          }
          switch ( v22 )
          {
            case 1:
              goto LABEL_376;
            case 2:
              goto LABEL_375;
            case 3:
              goto LABEL_374;
            case 4:
              goto LABEL_373;
            case 5:
              goto LABEL_372;
            case 6:
              goto LABEL_371;
            case 7:
              v210[6] = v209[6];
LABEL_371:
              v210[5] = v209[5];
LABEL_372:
              v210[4] = v209[4];
LABEL_373:
              v210[3] = v209[3];
LABEL_374:
              v210[2] = v209[2];
LABEL_375:
              v210[1] = v209[1];
LABEL_376:
              v80 = *v209;
              *v210 = *v209;
              break;
            default:
              break;
          }
        }
        v213 = *((_DWORD *)this + 26);
        v214 = *((_QWORD *)this + 146);
        if ( v213 )
        {
          v215 = (double *)v296;
          if ( (_QWORD *)v214 != v296 )
          {
            if ( v213 >> 3 <= 0 )
            {
              v220 = v296;
            }
            else
            {
              v216 = *((double **)this + 146);
              v217 = (unsigned int)((v213 >> 3) - 1);
              do
              {
                v218 = *v216;
                v215 += 8;
                v216 += 8;
                *(v215 - 8) = v218;
                *(v215 - 7) = *(v216 - 7);
                *(v215 - 6) = *(v216 - 6);
                *(v215 - 5) = *(v216 - 5);
                *(v215 - 4) = *(v216 - 4);
                *(v215 - 3) = *(v216 - 3);
                *(v215 - 2) = *(v216 - 2);
                v80 = *(v216 - 1);
                *(v215 - 1) = v80;
              }
              while ( &v296[8 * v217 + 8] != (_QWORD *)v215 );
              v219 = ((int)v217 + 1LL) << 6;
              v214 += v219;
              v220 = (_QWORD *)((char *)v296 + v219);
            }
            switch ( v213 % 8 )
            {
              case 1:
                goto LABEL_390;
              case 2:
                goto LABEL_389;
              case 3:
                goto LABEL_388;
              case 4:
                goto LABEL_387;
              case 5:
                goto LABEL_386;
              case 6:
                goto LABEL_385;
              case 7:
                v220[6] = *(_QWORD *)(v214 + 48);
LABEL_385:
                v220[5] = *(_QWORD *)(v214 + 40);
LABEL_386:
                v220[4] = *(_QWORD *)(v214 + 32);
LABEL_387:
                v220[3] = *(_QWORD *)(v214 + 24);
LABEL_388:
                v220[2] = *(_QWORD *)(v214 + 16);
LABEL_389:
                v220[1] = *(_QWORD *)(v214 + 8);
LABEL_390:
                v80 = *(double *)v214;
                *v220 = *(_QWORD *)v214;
                break;
              default:
                break;
            }
          }
        }
        v221 = *((double **)this + 147);
        v222 = v298;
        if ( v221 != v298 && v310 )
        {
          if ( v309 > 0 )
          {
            v223 = (double *)((char *)v221 + v295);
            do
            {
              v224 = *v221;
              v221 += 8;
              v222 += 8;
              *(v222 - 8) = v224;
              *(v222 - 7) = *(v221 - 7);
              *(v222 - 6) = *(v221 - 6);
              *(v222 - 5) = *(v221 - 5);
              *(v222 - 4) = *(v221 - 4);
              *(v222 - 3) = *(v221 - 3);
              *(v222 - 2) = *(v221 - 2);
              v80 = *(v221 - 1);
              *(v222 - 1) = v80;
            }
            while ( v221 != v223 );
            v222 = v311;
          }
          switch ( v22 )
          {
            case 1:
              goto LABEL_404;
            case 2:
              goto LABEL_403;
            case 3:
              goto LABEL_402;
            case 4:
              goto LABEL_401;
            case 5:
              goto LABEL_400;
            case 6:
              goto LABEL_399;
            case 7:
              v222[6] = v221[6];
LABEL_399:
              v222[5] = v221[5];
LABEL_400:
              v222[4] = v221[4];
LABEL_401:
              v222[3] = v221[3];
LABEL_402:
              v222[2] = v221[2];
LABEL_403:
              v222[1] = v221[1];
LABEL_404:
              v80 = *v221;
              *v222 = *v221;
              break;
            default:
              break;
          }
        }
        v225 = *((double **)this + 148);
        v226 = v299;
        if ( v225 != v299 && v310 )
        {
          if ( v309 > 0 )
          {
            v227 = *((double **)this + 148);
            do
            {
              v228 = *v227;
              v226 += 8;
              v227 += 8;
              *(v226 - 8) = v228;
              *(v226 - 7) = *(v227 - 7);
              *(v226 - 6) = *(v227 - 6);
              *(v226 - 5) = *(v227 - 5);
              *(v226 - 4) = *(v227 - 4);
              *(v226 - 3) = *(v227 - 3);
              *(v226 - 2) = *(v227 - 2);
              v80 = *(v227 - 1);
              *(v226 - 1) = v80;
            }
            while ( v226 != v25 );
            v225 = (double *)((char *)v225 + v295);
            v226 = v25;
          }
          switch ( v22 )
          {
            case 1:
              goto LABEL_418;
            case 2:
              goto LABEL_417;
            case 3:
              goto LABEL_416;
            case 4:
              goto LABEL_415;
            case 5:
              goto LABEL_414;
            case 6:
              goto LABEL_413;
            case 7:
              v226[6] = v225[6];
LABEL_413:
              v226[5] = v225[5];
LABEL_414:
              v226[4] = v225[4];
LABEL_415:
              v226[3] = v225[3];
LABEL_416:
              v226[2] = v225[2];
LABEL_417:
              v226[1] = v225[1];
LABEL_418:
              v80 = *v225;
              *v226 = *v225;
              break;
            default:
              break;
          }
        }
        v229 = *((double **)this + 150);
        v230 = (double *)v329;
        if ( v229 != (double *)v329 && v310 )
        {
          if ( v309 > 0 )
          {
            v231 = *((double **)this + 150);
            do
            {
              v232 = *v231;
              v230 += 8;
              v231 += 8;
              *(v230 - 8) = v232;
              *(v230 - 7) = *(v231 - 7);
              *(v230 - 6) = *(v231 - 6);
              *(v230 - 5) = *(v231 - 5);
              *(v230 - 4) = *(v231 - 4);
              *(v230 - 3) = *(v231 - 3);
              *(v230 - 2) = *(v231 - 2);
              v80 = *(v231 - 1);
              *(v230 - 1) = v80;
            }
            while ( v337 != v230 );
            v229 = (double *)((char *)v229 + v295);
            v230 = v337;
          }
          switch ( v22 )
          {
            case 1:
              goto LABEL_432;
            case 2:
              goto LABEL_431;
            case 3:
              goto LABEL_430;
            case 4:
              goto LABEL_429;
            case 5:
              goto LABEL_428;
            case 6:
              goto LABEL_427;
            case 7:
              v230[6] = v229[6];
LABEL_427:
              v230[5] = v229[5];
LABEL_428:
              v230[4] = v229[4];
LABEL_429:
              v230[3] = v229[3];
LABEL_430:
              v230[2] = v229[2];
LABEL_431:
              v230[1] = v229[1];
LABEL_432:
              v80 = *v229;
              *v230 = *v229;
              break;
            default:
              break;
          }
        }
        v233 = *((double **)this + 149);
        v234 = v332;
        if ( v233 != v332 && v310 )
        {
          if ( v309 > 0 )
          {
            v235 = *((double **)this + 149);
            do
            {
              v236 = *v235;
              v234 += 8;
              v235 += 8;
              *(v234 - 8) = v236;
              *(v234 - 7) = *(v235 - 7);
              *(v234 - 6) = *(v235 - 6);
              *(v234 - 5) = *(v235 - 5);
              *(v234 - 4) = *(v235 - 4);
              *(v234 - 3) = *(v235 - 3);
              *(v234 - 2) = *(v235 - 2);
              v80 = *(v235 - 1);
              *(v234 - 1) = v80;
            }
            while ( v338 != v234 );
            v233 = (double *)((char *)v233 + v295);
            v234 = v338;
          }
          switch ( v22 )
          {
            case 1:
              goto LABEL_446;
            case 2:
              goto LABEL_445;
            case 3:
              goto LABEL_444;
            case 4:
              goto LABEL_443;
            case 5:
              goto LABEL_442;
            case 6:
              goto LABEL_441;
            case 7:
              v234[6] = v233[6];
LABEL_441:
              v234[5] = v233[5];
LABEL_442:
              v234[4] = v233[4];
LABEL_443:
              v234[3] = v233[3];
LABEL_444:
              v234[2] = v233[2];
LABEL_445:
              v234[1] = v233[1];
LABEL_446:
              v80 = *v233;
              *v234 = *v233;
              break;
            default:
              break;
          }
        }
        ClpPredictorCorrector::setupForSolve(this, 1);
        ClpPredictorCorrector::findDirectionVector(this, 1);
        if ( v80 > *((double *)this + 136) )
          *((double *)this + 136) = v80;
        if ( v80 <= fmax(
                      *((double *)this + 121),
                      fmax(*((double *)this + 4), fmax(100.0 * *((double *)this + 120), 0.0 * 100.0)))
          || *((int *)this + 77) < -77 )
        {
          ClpPredictorCorrector::findStepLength(this, 1);
          ClpPredictorCorrector::complementarityGap(this, &v341, &v342, 1);
          v314 = v80;
          ClpPredictorCorrector::debugMove(this, 1, *((double *)this + 126), *((double *)this + 127));
          v241 = ClpPredictorCorrector::checkGoodMove(this, 1, v345, 0);
          if ( v80 >= 0.0 && (_BYTE)v241 )
          {
            v66 = v241;
            goto LABEL_122;
          }
          v79 = *((double *)this + 134);
        }
        else
        {
          v79 = *((double *)this + 134);
        }
      }
      v81 = *((_DWORD *)this + 324);
      v82 = (double)v81;
      v83 = v79 / (v82 + v82);
      v84 = (1.0 - v306) / (v306 * 10.0 + 1.0);
      *((double *)this + 107) = v83;
      v85 = sqrt(v84);
      if ( v84 < 0.0 )
      {
        sqrt(v84);
        v81 = *((_DWORD *)this + 324);
        v83 = *((double *)this + 107);
        v82 = (double)v81;
      }
      v86 = v85 * v83;
      *((double *)this + 107) = v86;
      if ( v81 > 500 )
        v87 = fmax(250000.0, pow(v82, 1.5));
      else
        v87 = v82 * v82;
      v88 = *((double *)this + 134);
      *((double *)this + 107) = v88 / v87;
      v89 = v88 / v87 * v86;
      if ( v89 < 0.0 )
      {
        sqrt(v89);
        v88 = *((double *)this + 134);
      }
      v90 = (double)*((int *)this + 325);
      *((double *)this + 107) = 0.5 * v88 / v90;
      ClpPredictorCorrector::setupForSolve(this, 2);
      ClpPredictorCorrector::findDirectionVector(this, 2);
      ClpPredictorCorrector::findStepLength(this, 2);
      v307 = v90;
      v345[0] = 1.0005 * *((double *)this + 134);
      v91 = v345[0];
      ClpPredictorCorrector::complementarityGap(this, &v341, &v342, 2);
      v314 = v91;
      v92 = *((double *)this + 126);
      ClpPredictorCorrector::debugMove(this, 2, v92, *((double *)this + 127));
      ClpPredictorCorrector::checkGoodMove(this, 0, v345, 0);
      if ( v314 > 0.9 * *((double *)this + 134)
        && v314 > 0.0
        && ((v246 = *((_DWORD *)this + 77), v246 > 80) || v313 && v246 > 20)
        || v307 < 0.0 )
      {
        ClpPredictorCorrector::setupForSolve(this, 0);
        ClpPredictorCorrector::findDirectionVector(this, 0);
        ClpPredictorCorrector::findStepLength(this, 0);
        ClpPredictorCorrector::complementarityGap(this, &v341, &v342, 1);
        v314 = v92;
        v345[0] = *((double *)this + 134);
      }
      *((double *)this + 107) = v314 / ((double)v341 * 1.1);
LABEL_122:
      if ( *((double *)this + 127) <= 0.9 || *((double *)this + 126) <= 0.9 )
      {
        v93 = v22;
        v94 = v25;
        v95 = 0;
        v96 = v24;
        v97 = v93;
LABEL_125:
        while ( 1 )
        {
          v66 ^= 1u;
          LOBYTE(v66) = (v95 > 4) | v66;
          if ( (_BYTE)v66 )
            break;
          while ( 1 )
          {
            v98 = *((double **)this + 145);
            ++v95;
            v99 = v297;
            if ( v98 != v297 && v310 )
            {
              if ( v309 > 0 )
              {
                v100 = *((__int64 **)this + 145);
                do
                {
                  v101 = *v100;
                  v99 += 8;
                  v100 += 8;
                  *((_QWORD *)v99 - 8) = v101;
                  *((_QWORD *)v99 - 7) = *(v100 - 7);
                  *((_QWORD *)v99 - 6) = *(v100 - 6);
                  *((_QWORD *)v99 - 5) = *(v100 - 5);
                  *((_QWORD *)v99 - 4) = *(v100 - 4);
                  *((_QWORD *)v99 - 3) = *(v100 - 3);
                  *((_QWORD *)v99 - 2) = *(v100 - 2);
                  *((_QWORD *)v99 - 1) = *(v100 - 1);
                }
                while ( v99 != v96 );
                v98 = (double *)((char *)v98 + v295);
                v99 = v96;
              }
              switch ( v97 )
              {
                case 1:
                  goto LABEL_139;
                case 2:
                  goto LABEL_138;
                case 3:
                  goto LABEL_137;
                case 4:
                  goto LABEL_136;
                case 5:
                  goto LABEL_135;
                case 6:
                  goto LABEL_134;
                case 7:
                  v99[6] = v98[6];
LABEL_134:
                  v99[5] = v98[5];
LABEL_135:
                  v99[4] = v98[4];
LABEL_136:
                  v99[3] = v98[3];
LABEL_137:
                  v99[2] = v98[2];
LABEL_138:
                  v99[1] = v98[1];
LABEL_139:
                  *v99 = *v98;
                  break;
                default:
                  break;
              }
            }
            v102 = *((_DWORD *)this + 26);
            v103 = *((_QWORD **)this + 146);
            if ( v102 )
            {
              v104 = v296;
              if ( v103 != v296 )
              {
                if ( v102 >> 3 > 0 )
                {
                  v105 = *((__int64 **)this + 146);
                  v106 = (unsigned int)((v102 >> 3) - 1);
                  do
                  {
                    v107 = *v105;
                    v104 += 8;
                    v105 += 8;
                    *(v104 - 8) = v107;
                    *(v104 - 7) = *(v105 - 7);
                    *(v104 - 6) = *(v105 - 6);
                    *(v104 - 5) = *(v105 - 5);
                    *(v104 - 4) = *(v105 - 4);
                    *(v104 - 3) = *(v105 - 3);
                    *(v104 - 2) = *(v105 - 2);
                    *(v104 - 1) = *(v105 - 1);
                  }
                  while ( v104 != &v296[8 * v106 + 8] );
                  v108 = ((int)v106 + 1LL) << 6;
                  v103 = (_QWORD *)((char *)v103 + v108);
                  v104 = (_QWORD *)((char *)v296 + v108);
                }
                switch ( v102 % 8 )
                {
                  case 1:
                    goto LABEL_153;
                  case 2:
                    goto LABEL_152;
                  case 3:
                    goto LABEL_151;
                  case 4:
                    goto LABEL_150;
                  case 5:
                    goto LABEL_149;
                  case 6:
                    goto LABEL_148;
                  case 7:
                    v104[6] = v103[6];
LABEL_148:
                    v104[5] = v103[5];
LABEL_149:
                    v104[4] = v103[4];
LABEL_150:
                    v104[3] = v103[3];
LABEL_151:
                    v104[2] = v103[2];
LABEL_152:
                    v104[1] = v103[1];
LABEL_153:
                    *v104 = *v103;
                    break;
                  default:
                    break;
                }
              }
            }
            v109 = *((double **)this + 147);
            v110 = v298;
            if ( v109 != v298 && v310 )
            {
              if ( v309 > 0 )
              {
                v111 = *((double **)this + 147);
                do
                {
                  v112 = *v111;
                  v110 += 8;
                  v111 += 8;
                  *(v110 - 8) = v112;
                  *(v110 - 7) = *(v111 - 7);
                  *(v110 - 6) = *(v111 - 6);
                  *(v110 - 5) = *(v111 - 5);
                  *(v110 - 4) = *(v111 - 4);
                  *(v110 - 3) = *(v111 - 3);
                  *(v110 - 2) = *(v111 - 2);
                  *(v110 - 1) = *(v111 - 1);
                }
                while ( v311 != v110 );
                v109 = (double *)((char *)v109 + v295);
                v110 = v311;
              }
              switch ( v97 )
              {
                case 1:
                  goto LABEL_167;
                case 2:
                  goto LABEL_166;
                case 3:
                  goto LABEL_165;
                case 4:
                  goto LABEL_164;
                case 5:
                  goto LABEL_163;
                case 6:
                  goto LABEL_162;
                case 7:
                  v110[6] = v109[6];
LABEL_162:
                  v110[5] = v109[5];
LABEL_163:
                  v110[4] = v109[4];
LABEL_164:
                  v110[3] = v109[3];
LABEL_165:
                  v110[2] = v109[2];
LABEL_166:
                  v110[1] = v109[1];
LABEL_167:
                  *v110 = *v109;
                  break;
                default:
                  break;
              }
            }
            v113 = *((double **)this + 148);
            v114 = v299;
            if ( v113 != v299 && v310 )
            {
              if ( v309 > 0 )
              {
                v115 = *((__int64 **)this + 148);
                do
                {
                  v116 = *v115;
                  v114 += 8;
                  v115 += 8;
                  *((_QWORD *)v114 - 8) = v116;
                  *((_QWORD *)v114 - 7) = *(v115 - 7);
                  *((_QWORD *)v114 - 6) = *(v115 - 6);
                  *((_QWORD *)v114 - 5) = *(v115 - 5);
                  *((_QWORD *)v114 - 4) = *(v115 - 4);
                  *((_QWORD *)v114 - 3) = *(v115 - 3);
                  *((_QWORD *)v114 - 2) = *(v115 - 2);
                  *((_QWORD *)v114 - 1) = *(v115 - 1);
                }
                while ( v114 != v94 );
                v113 = (double *)((char *)v113 + v295);
                v114 = v94;
              }
              switch ( v97 )
              {
                case 1:
                  goto LABEL_181;
                case 2:
                  goto LABEL_180;
                case 3:
                  goto LABEL_179;
                case 4:
                  goto LABEL_178;
                case 5:
                  goto LABEL_177;
                case 6:
                  goto LABEL_176;
                case 7:
                  v114[6] = v113[6];
LABEL_176:
                  v114[5] = v113[5];
LABEL_177:
                  v114[4] = v113[4];
LABEL_178:
                  v114[3] = v113[3];
LABEL_179:
                  v114[2] = v113[2];
LABEL_180:
                  v114[1] = v113[1];
LABEL_181:
                  *v114 = *v113;
                  break;
                default:
                  break;
              }
            }
            v304 = *((double *)this + 126);
            v301 = *((double *)this + 127);
            v308 = *((_QWORD *)this + 107);
            ClpPredictorCorrector::setupForSolve(this, 3);
            ClpPredictorCorrector::findDirectionVector(this, 3);
            ClpPredictorCorrector::findStepLength(this, 3);
            v117 = *((double *)this + 126);
            ClpPredictorCorrector::debugMove(this, 3, v117, *((double *)this + 127));
            ClpPredictorCorrector::complementarityGap(this, &v341, &v342, 3);
            if ( v301 <= v304 * 5.0 )
            {
              if ( v304 <= 5.0 * v301 )
              {
                v118 = v304;
                v119 = v301;
              }
              else
              {
                v119 = v301;
                v118 = v301 + v301;
              }
            }
            else
            {
              v118 = v304;
              v119 = v304 + v304;
            }
            v120 = *((double *)this + 126);
            if ( v118 > v120 )
              break;
            v121 = *((double *)this + 127);
            if ( v119 > v121 || v117 > v314 && v117 > 0.9 * *((double *)this + 134) )
              break;
            if ( v118 * 1.01 > v120 )
              goto LABEL_125;
            LOBYTE(v66) = v119 * 1.01 <= v121;
            v66 ^= 1u;
            LOBYTE(v66) = (v95 > 4) | v66;
            if ( (_BYTE)v66 )
              goto LABEL_190;
          }
          v122 = *((double **)this + 145);
          v123 = v297;
          *((double *)this + 126) = v304;
          *((double *)this + 127) = v301;
          *((_QWORD *)this + 107) = v308;
          if ( v122 != v297 && v310 )
          {
            if ( v309 > 0 )
            {
              v124 = (double *)((char *)v122 + v295);
              do
              {
                v125 = *v123;
                v122 += 8;
                v123 += 8;
                *(v122 - 8) = v125;
                *(v122 - 7) = *(v123 - 7);
                *(v122 - 6) = *(v123 - 6);
                *(v122 - 5) = *(v123 - 5);
                *(v122 - 4) = *(v123 - 4);
                *(v122 - 3) = *(v123 - 3);
                *(v122 - 2) = *(v123 - 2);
                *(v122 - 1) = *(v123 - 1);
              }
              while ( v124 != v122 );
              v122 = v124;
              v123 = v96;
            }
            switch ( v97 )
            {
              case 1:
                goto LABEL_206;
              case 2:
                goto LABEL_205;
              case 3:
                goto LABEL_204;
              case 4:
                goto LABEL_203;
              case 5:
                goto LABEL_202;
              case 6:
                goto LABEL_201;
              case 7:
                v122[6] = v123[6];
LABEL_201:
                v122[5] = v123[5];
LABEL_202:
                v122[4] = v123[4];
LABEL_203:
                v122[3] = v123[3];
LABEL_204:
                v122[2] = v123[2];
LABEL_205:
                v122[1] = v123[1];
LABEL_206:
                *v122 = *v123;
                break;
              default:
                break;
            }
          }
          v126 = *((_DWORD *)this + 26);
          v127 = *((_QWORD **)this + 146);
          if ( v126 )
          {
            v128 = v296;
            if ( v127 != v296 )
            {
              if ( v126 >> 3 <= 0 )
              {
                v133 = v296;
              }
              else
              {
                v129 = *((_QWORD **)this + 146);
                v130 = (unsigned int)((v126 >> 3) - 1);
                do
                {
                  v131 = *v128;
                  v129 += 8;
                  v128 += 8;
                  *(v129 - 8) = v131;
                  *(v129 - 7) = *(v128 - 7);
                  *(v129 - 6) = *(v128 - 6);
                  *(v129 - 5) = *(v128 - 5);
                  *(v129 - 4) = *(v128 - 4);
                  *(v129 - 3) = *(v128 - 3);
                  *(v129 - 2) = *(v128 - 2);
                  *(v129 - 1) = *(v128 - 1);
                }
                while ( v129 != &v127[8 * v130 + 8] );
                v132 = ((int)v130 + 1LL) << 6;
                v133 = (_QWORD *)((char *)v296 + v132);
                v127 = (_QWORD *)((char *)v127 + v132);
              }
              switch ( v126 % 8 )
              {
                case 1:
                  goto LABEL_220;
                case 2:
                  goto LABEL_219;
                case 3:
                  goto LABEL_218;
                case 4:
                  goto LABEL_217;
                case 5:
                  goto LABEL_216;
                case 6:
                  goto LABEL_215;
                case 7:
                  v127[6] = v133[6];
LABEL_215:
                  v127[5] = v133[5];
LABEL_216:
                  v127[4] = v133[4];
LABEL_217:
                  v127[3] = v133[3];
LABEL_218:
                  v127[2] = v133[2];
LABEL_219:
                  v127[1] = v133[1];
LABEL_220:
                  *v127 = *v133;
                  break;
                default:
                  break;
              }
            }
          }
          v134 = *((double **)this + 147);
          v135 = v298;
          if ( v134 != v298 && v310 )
          {
            if ( v309 > 0 )
            {
              v136 = (double *)((char *)v134 + v295);
              do
              {
                v137 = *(_QWORD *)v135;
                v134 += 8;
                v135 += 8;
                *((_QWORD *)v134 - 8) = v137;
                *(v134 - 7) = *(v135 - 7);
                *(v134 - 6) = *(v135 - 6);
                *(v134 - 5) = *(v135 - 5);
                *(v134 - 4) = *(v135 - 4);
                *(v134 - 3) = *(v135 - 3);
                *(v134 - 2) = *(v135 - 2);
                *(v134 - 1) = *(v135 - 1);
              }
              while ( v136 != v134 );
              v135 = v311;
              v134 = v136;
            }
            switch ( v97 )
            {
              case 1:
                goto LABEL_234;
              case 2:
                goto LABEL_233;
              case 3:
                goto LABEL_232;
              case 4:
                goto LABEL_231;
              case 5:
                goto LABEL_230;
              case 6:
                goto LABEL_229;
              case 7:
                v134[6] = v135[6];
LABEL_229:
                v134[5] = v135[5];
LABEL_230:
                v134[4] = v135[4];
LABEL_231:
                v134[3] = v135[3];
LABEL_232:
                v134[2] = v135[2];
LABEL_233:
                v134[1] = v135[1];
LABEL_234:
                *v134 = *v135;
                break;
              default:
                break;
            }
          }
          v138 = *((double **)this + 148);
          if ( v310 != 0 && v138 != v299 )
          {
            if ( v309 <= 0 )
            {
              v142 = v299;
            }
            else
            {
              v139 = *((_QWORD *)this + 148);
              v140 = v299;
              do
              {
                v141 = *(_QWORD *)v140;
                v140 += 8;
                v139 += 64;
                *(_QWORD *)(v139 - 64) = v141;
                *(double *)(v139 - 56) = *(v140 - 7);
                *(double *)(v139 - 48) = *(v140 - 6);
                *(double *)(v139 - 40) = *(v140 - 5);
                *(double *)(v139 - 32) = *(v140 - 4);
                *(double *)(v139 - 24) = *(v140 - 3);
                *(double *)(v139 - 16) = *(v140 - 2);
                *(double *)(v139 - 8) = *(v140 - 1);
              }
              while ( v140 != v94 );
              v138 = (double *)((char *)v138 + v295);
              v142 = v94;
            }
            switch ( v97 )
            {
              case 1:
                goto LABEL_247;
              case 2:
                goto LABEL_246;
              case 3:
                goto LABEL_245;
              case 4:
                goto LABEL_244;
              case 5:
                goto LABEL_243;
              case 6:
                goto LABEL_242;
              case 7:
                v138[6] = v142[6];
LABEL_242:
                v138[5] = v142[5];
LABEL_243:
                v138[4] = v142[4];
LABEL_244:
                v138[3] = v142[3];
LABEL_245:
                v138[2] = v142[2];
LABEL_246:
                v138[1] = v142[1];
LABEL_247:
                *v138 = *v142;
                break;
              default:
                break;
            }
            v66 = 0;
          }
        }
LABEL_190:
        v25 = v94;
        v22 = v97;
        v24 = v96;
      }
      v21 = v314;
      v300 = *((double *)this + 134);
      updated = ClpPredictorCorrector::updateSolution(this, v314);
      v317 += updated;
      if ( *((int *)this + 80) >= 0 )
        goto LABEL_291;
      v303 = v321;
    }
  }
  operator delete[](v297);
  operator delete[](v296);
  operator delete[](v18);
  operator delete[](v19);
  operator delete[](v329);
  operator delete[](v332);
LABEL_335:
  v183 = *((_DWORD *)this + 26);
  if ( v183 )
  {
    v261 = v183 + 7;
    v262 = *((_QWORD **)this + 14);
    if ( v183 >= 0 )
      v261 = *((_DWORD *)this + 26);
    v263 = v261 >> 3;
    if ( v263 > 0 )
    {
      v264 = (unsigned int)(v263 - 1);
      v265 = *((_QWORD **)this + 14);
      v266 = v264;
      v267 = &v262[8 * v264 + 8];
      do
      {
        *v265 = 0;
        v265[1] = 0;
        v265 += 8;
        *(v265 - 6) = 0;
        *(v265 - 5) = 0;
        *(v265 - 4) = 0;
        *(v265 - 3) = 0;
        *(v265 - 2) = 0;
        *(v265 - 1) = 0;
      }
      while ( v267 != v265 );
      v262 += 8 * v266 + 8;
    }
    switch ( v183 % 8 )
    {
      case 1:
        goto LABEL_560;
      case 2:
        goto LABEL_559;
      case 3:
        goto LABEL_558;
      case 4:
        goto LABEL_557;
      case 5:
        goto LABEL_556;
      case 6:
        goto LABEL_555;
      case 7:
        v262[6] = 0;
LABEL_555:
        v262[5] = 0;
LABEL_556:
        v262[4] = 0;
LABEL_557:
        v262[3] = 0;
LABEL_558:
        v262[2] = 0;
LABEL_559:
        v262[1] = 0;
LABEL_560:
        *v262 = 0;
        break;
      default:
        break;
    }
  }
  v184 = *((_DWORD *)this + 27);
  v185 = *((_QWORD **)this + 15);
  v186 = *((_QWORD **)this + 143);
  if ( v184 && v185 != v186 )
  {
    if ( v184 >> 3 > 0 )
    {
      v187 = *((_QWORD **)this + 15);
      v188 = *((__int64 **)this + 143);
      v189 = (unsigned int)((v184 >> 3) - 1);
      do
      {
        v190 = *v188;
        v187 += 8;
        v188 += 8;
        *(v187 - 8) = v190;
        *(v187 - 7) = *(v188 - 7);
        *(v187 - 6) = *(v188 - 6);
        *(v187 - 5) = *(v188 - 5);
        *(v187 - 4) = *(v188 - 4);
        *(v187 - 3) = *(v188 - 3);
        *(v187 - 2) = *(v188 - 2);
        *(v187 - 1) = *(v188 - 1);
      }
      while ( v187 != &v185[8 * v189 + 8] );
      v191 = ((int)v189 + 1LL) << 6;
      v186 = (_QWORD *)((char *)v186 + v191);
      v185 = (_QWORD *)((char *)v185 + v191);
    }
    switch ( v184 % 8 )
    {
      case 1:
        goto LABEL_349;
      case 2:
        goto LABEL_348;
      case 3:
        goto LABEL_347;
      case 4:
        goto LABEL_346;
      case 5:
        goto LABEL_345;
      case 6:
        goto LABEL_344;
      case 7:
        v185[6] = v186[6];
LABEL_344:
        v185[5] = v186[5];
LABEL_345:
        v185[4] = v186[4];
LABEL_346:
        v185[3] = v186[3];
LABEL_347:
        v185[2] = v186[2];
LABEL_348:
        v185[1] = v186[1];
LABEL_349:
        *v185 = *v186;
        break;
      default:
        break;
    }
    v185 = *((_QWORD **)this + 15);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD, double))(**((_QWORD **)this + 24) + 360LL))(
    *((_QWORD *)this + 24),
    v185,
    *((_QWORD *)this + 14),
    1.0);
  multiplyAdd(nullptr, v310, 0.0, *((double **)this + 100), *((double *)this + 125));
  multiplyAdd(nullptr, *((_DWORD *)this + 26), 0.0, v328, *((double *)this + 125));
  ClpInterior::checkSolution(this);
  if ( v315 )
  {
    v192 = *((_QWORD *)this + 20);
    if ( v192 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v192 + 80LL))(v192);
    v193 = *((double *)this + 112) + *((double *)this + 111);
    *((_QWORD *)this + 20) = v315;
    *((double *)this + 9) = v193 * 0.5;
  }
  v194 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 68, v316);
  v195 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v194);
  v196 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v195);
  v197 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v196);
  v198 = *((double *)this + 9) * *(double *)this - *((double *)this + 5);
  v199 = CoinMessageHandler::operator<<(v197);
  CoinMessageHandler::operator<<(v199, 0, v198);
  ClpInterior::deleteWorkingData(this);
  if ( v320 )
  {
    v200 = *((_QWORD *)this + 24);
    if ( v200 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v200 + 480LL))(v200);
    *((_QWORD *)this + 24) = v320;
  }
  return *((unsigned int *)this + 80);
}

