__int64 __fastcall ClpSimplexNonlinear::primalSLP(
        ClpSimplexNonlinear *this,
        int a2,
        double a3,
        char a4,
        double a5,
        __m128d a6,
        __m128d a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  unsigned __int64 v13; // r13
  int v14; // eax
  int *v15; // r15
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdi
  ClpLinearObjective *v19; // rbx
  unsigned __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  double v26; // xmm0_8
  double v27; // xmm1_8
  unsigned __int64 *v28; // rdx
  double *v29; // rbp
  __int64 v30; // rbx
  void *v31; // rax
  double v32; // xmm4_8
  bool v33; // dl
  _BOOL4 v34; // r11d
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rax
  _BYTE *v38; // rbx
  __int64 v39; // rcx
  int v40; // eax
  _BOOL4 v41; // edi
  __m128d v42; // xmm6
  double v43; // xmm5_8
  void (__fastcall *v44)(ClpObjective *); // rax
  int v45; // edx
  __int64 v46; // rax
  double v47; // xmm1_8
  bool v48; // zf
  double v49; // xmm0_8
  unsigned __int64 v50; // rax
  double v51; // xmm0_8
  double v52; // xmm0_8
  double v53; // xmm4_8
  __m128d v54; // xmm5
  double v55; // xmm1_8
  int v56; // r11d
  __int64 *v57; // rax
  __int64 *v58; // rdx
  __int64 *v59; // rcx
  __int64 v60; // xmm0_8
  double v62; // xmm4_8
  double v63; // xmm4_8
  __m128d v64; // xmm0
  double v65; // xmm4_8
  double v66; // xmm5_8
  double v67; // rdx
  double v68; // r10
  double v69; // r8
  int v70; // r11d
  bool v71; // r9
  unsigned __int64 v72; // rax
  double v73; // xmm0_8
  int v74; // r9d
  __int64 v75; // rax
  int v76; // ecx
  int v77; // esi
  CoinMessageHandler *v78; // rax
  CoinMessageHandler *v79; // rax
  CoinMessageHandler *v80; // rax
  CoinMessageHandler *v81; // rax
  __int64 v82; // rax
  double *v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rdx
  double *v86; // rsi
  double *v87; // rdx
  double v88; // xmm0_8
  int v89; // r11d
  double *v90; // rax
  double *v91; // rdx
  double v92; // xmm1_8
  __int64 *v93; // rsi
  __int64 *v94; // rax
  bool v95; // cl
  __int64 *v96; // rdx
  __int64 v97; // xmm1_8
  double *v98; // rdi
  double *v99; // rax
  double *v100; // rdx
  double v101; // xmm1_8
  _BYTE *v102; // rdx
  __int64 v103; // rax
  unsigned int v104; // edi
  _BYTE *v105; // rax
  _BYTE *v106; // rax
  double v107; // xmm1_8
  double v108; // xmm1_8
  CoinMessageHandler *v109; // rdi
  int v110; // ecx
  __int64 *v111; // rax
  __int64 *v112; // rdx
  __int64 v113; // xmm0_8
  __int64 *v114; // rsi
  __int64 *v115; // rdi
  unsigned __int64 v116; // rax
  double *v117; // rdx
  __int64 v118; // rdi
  __int64 v119; // xmm0_8
  __int64 v120; // rax
  double *v121; // rdi
  _QWORD *v122; // rax
  __int64 v123; // rdi
  CoinIndexedVector *v124; // rcx
  __int64 v125; // rax
  unsigned int v126; // edx
  signed int v127; // eax
  __int64 v128; // rdx
  int v129; // eax
  __int64 *v130; // rcx
  __int64 *v131; // rax
  __int64 *v132; // rdx
  __int64 v133; // xmm0_8
  __int64 (__fastcall *v134)(double, double, double, double, double, double, double); // rax
  CoinPackedMatrix *v135; // rdi
  int *v136; // rdx
  __int64 v137; // rax
  double *v138; // rsi
  double v139; // xmm1_8
  _QWORD *v140; // rax
  double *v141; // rdx
  __int64 v142; // xmm0_8
  __int64 *v143; // rax
  __int64 *v144; // rdx
  __int64 *v145; // rcx
  __int64 v146; // xmm0_8
  double *v147; // rax
  double *v148; // rdx
  double *v149; // rcx
  __int64 v150; // xmm0_8
  _BYTE *v151; // rax
  __int64 v152; // rdx
  unsigned int v153; // ecx
  _BYTE *v154; // rdx
  _BYTE *v155; // rcx
  _BYTE *v156; // rdx
  __int64 v157; // rax
  unsigned int v158; // edx
  signed int v159; // eax
  double *v160; // rdx
  int v161; // eax
  double *v162; // rax
  __int64 v163; // rax
  unsigned int v164; // edx
  __m128d v165; // xmm5
  double *v166; // rax
  int v167; // eax
  double *v168; // rdx
  int v169; // eax
  double v170; // xmm4_8
  double v171; // xmm4_8
  CoinMessageHandler *v172; // rdi
  int v173; // eax
  unsigned __int64 v174; // rax
  __int64 v175; // rax
  char *v176; // rax
  char *v177; // rdi
  char v178; // r8
  bool v179; // al
  __int64 *v180; // rdx
  __int64 *v181; // rax
  __int64 v182; // xmm0_8
  __int64 v183; // rax
  __int64 *v184; // rcx
  char *v185; // rdx
  __int64 v186; // rax
  double *v187; // rcx
  double *v188; // rax
  double v189; // xmm1_8
  __int64 *v190; // rax
  __int64 *v191; // rcx
  __int64 *v192; // rdx
  __int64 v193; // xmm0_8
  __int64 v194; // rdx
  __int64 v195; // rdi
  char *v196; // rax
  __int64 v197; // rdx
  double v198; // xmm0_8
  __int64 v199; // rbx
  void *v200; // rdi
  char *v201; // rdx
  char v202; // si
  int v203; // eax
  ClpSimplexNonlinear *v204; // rbp
  CoinIndexedVector *v205; // rdi
  int v206; // esi
  __int64 v207; // r11
  char *v208; // rax
  __int64 v209; // rdi
  double v210; // xmm0_8
  double *v211; // rsi
  unsigned __int64 *v212; // rdx
  double v213; // xmm0_8
  _BYTE *v214; // r8
  unsigned __int8 v215; // cl
  double v216; // xmm2_8
  char v217; // dl
  double v218; // xmm0_8
  char v219; // cl
  char v220; // dl
  int v221; // r14d
  __int64 v222; // rbp
  __int64 v223; // rbx
  __int64 v224; // rdx
  double (__fastcall *v225)(ClpObjective *, ClpSimplexNonlinear *, __int64, __int64, double *, double *, double, double *); // r11
  __int64 v226; // rcx
  double v227; // xmm4_8
  double v228; // xmm1_8
  double v229; // xmm0_8
  double v230; // xmm1_8
  double v231; // xmm0_8
  double v232; // xmm4_8
  double v233; // xmm0_8
  double v234; // xmm1_8
  double v235; // xmm0_8
  __int64 v236; // rdx
  double v237; // xmm0_8
  double *v238; // rax
  double v239; // xmm0_8
  _BYTE *v240; // rsi
  double v241; // xmm1_8
  char v242; // al
  char v243; // cl
  char v244; // al
  __int64 v245; // rdi
  __int64 v246; // rsi
  char *v247; // rax
  double v248; // xmm0_8
  __int64 v249; // rdx
  double *v250; // r10
  unsigned __int64 *v251; // rdx
  unsigned __int64 v252; // xmm0_8
  char v253; // cl
  char v254; // al
  double *v255; // rcx
  double *v256; // rax
  __int64 v257; // rdx
  __int64 v258; // xmm0_8
  _BYTE *v259; // rax
  __int64 v260; // rdx
  unsigned int v261; // ecx
  _BYTE *v262; // rdx
  _BYTE *v263; // rcx
  _BYTE *v264; // rdx
  char v265; // cl
  char v266; // dl
  unsigned __int64 v267; // rax
  __int64 *v268; // rax
  unsigned __int64 v269; // rdx
  __int64 v270; // xmm0_8
  __int64 v271; // rax
  __int64 *v272; // rdx
  _QWORD *v273; // rax
  double *v274; // rax
  double *v275; // rdx
  double v276; // xmm0_8
  __int64 v277; // rdx
  double *v278; // rcx
  double *v279; // rdx
  __int64 *v280; // rax
  __int64 *v281; // rdx
  __int64 v282; // xmm0_8
  __int64 v283; // rax
  double *v284; // r8
  double *v285; // rdi
  _QWORD *v286; // rdx
  __int64 v287; // xmm0_8
  __int64 v288; // rax
  double *v289; // rdx
  _BYTE *v290; // rdx
  __int64 v291; // rax
  unsigned int v292; // ecx
  _BYTE *v293; // rax
  __int64 v294; // rax
  _BYTE *v295; // rcx
  char *v296; // rax
  __int64 v297; // rdx
  double *v298; // rdi
  double *v299; // rdx
  double v300; // xmm1_8
  double v301; // xmm0_8
  __int64 v302; // rax
  __int64 v303; // rdx
  char v304; // al
  char v305; // si
  std::ostream *v306; // rax
  __int64 v307; // rax
  __int64 v308; // rdx
  char *v309; // rdx
  char v310; // si
  char *v311; // rcx
  _BYTE *v312; // rax
  char v313; // di
  double v314; // xmm4_8
  double v315; // xmm5_8
  __int64 (__fastcall *v316)(__int64, unsigned int); // rax
  double v317; // xmm4_8
  double v318; // xmm5_8
  int v319; // [rsp+0h] [rbp-368h]
  unsigned __int64 v320; // [rsp+0h] [rbp-368h]
  unsigned __int64 v321; // [rsp+0h] [rbp-368h]
  __int64 v322; // [rsp+8h] [rbp-360h]
  __int64 v323; // [rsp+10h] [rbp-358h]
  double *v324; // [rsp+18h] [rbp-350h]
  double *v325; // [rsp+20h] [rbp-348h]
  ClpObjective *v326; // [rsp+28h] [rbp-340h]
  int v327; // [rsp+30h] [rbp-338h]
  double v328; // [rsp+30h] [rbp-338h]
  int v329; // [rsp+30h] [rbp-338h]
  int v330; // [rsp+30h] [rbp-338h]
  int v331; // [rsp+30h] [rbp-338h]
  int v332; // [rsp+30h] [rbp-338h]
  int v333; // [rsp+30h] [rbp-338h]
  CoinIndexedVector *v334; // [rsp+38h] [rbp-330h]
  int v335; // [rsp+38h] [rbp-330h]
  bool v336; // [rsp+38h] [rbp-330h]
  bool v337; // [rsp+38h] [rbp-330h]
  CoinIndexedVector *v338; // [rsp+38h] [rbp-330h]
  CoinIndexedVector *v339; // [rsp+38h] [rbp-330h]
  CoinIndexedVector *v340; // [rsp+38h] [rbp-330h]
  CoinIndexedVector *v341; // [rsp+38h] [rbp-330h]
  __int64 *s; // [rsp+40h] [rbp-328h]
  unsigned __int64 v343; // [rsp+48h] [rbp-320h]
  int v344; // [rsp+50h] [rbp-318h]
  int v345; // [rsp+54h] [rbp-314h]
  double v347; // [rsp+60h] [rbp-308h]
  double v348; // [rsp+80h] [rbp-2E8h]
  double v349; // [rsp+80h] [rbp-2E8h]
  double v350; // [rsp+80h] [rbp-2E8h]
  int v351; // [rsp+80h] [rbp-2E8h]
  double v352; // [rsp+88h] [rbp-2E0h]
  __int64 *v353; // [rsp+90h] [rbp-2D8h]
  double *v354; // [rsp+98h] [rbp-2D0h]
  int v355; // [rsp+A0h] [rbp-2C8h]
  int v356; // [rsp+A4h] [rbp-2C4h]
  int v357; // [rsp+A8h] [rbp-2C0h]
  int v358; // [rsp+ACh] [rbp-2BCh]
  signed int v359; // [rsp+B0h] [rbp-2B8h]
  int v360; // [rsp+B4h] [rbp-2B4h]
  _BYTE *v361; // [rsp+B8h] [rbp-2B0h]
  __int64 *v362; // [rsp+C0h] [rbp-2A8h]
  __int64 v363; // [rsp+C8h] [rbp-2A0h]
  int v364; // [rsp+D0h] [rbp-298h]
  int v365; // [rsp+D4h] [rbp-294h]
  __int64 n; // [rsp+E0h] [rbp-288h]
  char *v367; // [rsp+F0h] [rbp-278h]
  _QWORD *v368; // [rsp+F8h] [rbp-270h]
  bool v369; // [rsp+102h] [rbp-266h]
  int v370; // [rsp+104h] [rbp-264h]
  char *v371; // [rsp+108h] [rbp-260h]
  double *v372; // [rsp+110h] [rbp-258h]
  double *v373; // [rsp+118h] [rbp-250h]
  void *v374; // [rsp+120h] [rbp-248h]
  size_t v375; // [rsp+128h] [rbp-240h]
  __int64 *v376; // [rsp+130h] [rbp-238h]
  __int64 *v377; // [rsp+138h] [rbp-230h]
  bool v378; // [rsp+143h] [rbp-225h]
  int v379; // [rsp+144h] [rbp-224h]
  int v380; // [rsp+150h] [rbp-218h]
  unsigned int v381; // [rsp+154h] [rbp-214h]
  __int64 v382; // [rsp+168h] [rbp-200h]
  __int64 v383; // [rsp+170h] [rbp-1F8h]
  __int64 v384; // [rsp+178h] [rbp-1F0h]
  __int64 v385; // [rsp+180h] [rbp-1E8h]
  double v386; // [rsp+188h] [rbp-1E0h]
  bool v387; // [rsp+193h] [rbp-1D5h]
  unsigned int v388; // [rsp+194h] [rbp-1D4h]
  __int64 v389; // [rsp+198h] [rbp-1D0h]
  unsigned int v390; // [rsp+1A0h] [rbp-1C8h]
  unsigned int v391; // [rsp+1A4h] [rbp-1C4h]
  int v392; // [rsp+1B4h] [rbp-1B4h]
  unsigned int v393; // [rsp+1B8h] [rbp-1B0h]
  unsigned int v394; // [rsp+1BCh] [rbp-1ACh]
  unsigned __int64 v395; // [rsp+1C0h] [rbp-1A8h]
  unsigned __int64 v396; // [rsp+1C8h] [rbp-1A0h]
  double *v397; // [rsp+1D0h] [rbp-198h]
  char v398; // [rsp+1D8h] [rbp-190h]
  double *v399; // [rsp+1D8h] [rbp-190h]
  _BOOL4 v400; // [rsp+1E0h] [rbp-188h]
  int v401; // [rsp+1E4h] [rbp-184h]
  __int64 v402; // [rsp+1E8h] [rbp-180h]
  unsigned int v403; // [rsp+1F0h] [rbp-178h]
  unsigned int v404; // [rsp+1F4h] [rbp-174h]
  int v405; // [rsp+1F8h] [rbp-170h]
  double v406; // [rsp+1F8h] [rbp-170h]
  __int64 v407; // [rsp+1F8h] [rbp-170h]
  double v408; // [rsp+200h] [rbp-168h]
  __int64 v409; // [rsp+200h] [rbp-168h]
  unsigned int v410; // [rsp+208h] [rbp-160h]
  unsigned int v411; // [rsp+20Ch] [rbp-15Ch]
  CoinIndexedVector *v412; // [rsp+210h] [rbp-158h]
  CoinIndexedVector *v413; // [rsp+218h] [rbp-150h]
  int v414; // [rsp+238h] [rbp-130h]
  int v415; // [rsp+23Ch] [rbp-12Ch]
  __int64 v416; // [rsp+240h] [rbp-128h]
  void *v417; // [rsp+248h] [rbp-120h]
  bool v418; // [rsp+253h] [rbp-115h]
  unsigned int v419; // [rsp+254h] [rbp-114h]
  double *v420; // [rsp+258h] [rbp-110h]
  int v421; // [rsp+264h] [rbp-104h]
  unsigned __int64 v422; // [rsp+268h] [rbp-100h]
  unsigned int v423; // [rsp+270h] [rbp-F8h]
  unsigned int v424; // [rsp+274h] [rbp-F4h]
  int v425; // [rsp+278h] [rbp-F0h]
  int v426; // [rsp+27Ch] [rbp-ECh]
  int v427; // [rsp+280h] [rbp-E8h]
  double v428; // [rsp+288h] [rbp-E0h]
  __int64 v429; // [rsp+298h] [rbp-D0h]
  double v430; // [rsp+2A8h] [rbp-C0h]
  _BYTE *v431; // [rsp+2B8h] [rbp-B0h]
  int v432; // [rsp+2C4h] [rbp-A4h] BYREF
  double v433; // [rsp+2C8h] [rbp-A0h] BYREF
  double v434; // [rsp+2D0h] [rbp-98h] BYREF
  double v435; // [rsp+2D8h] [rbp-90h] BYREF
  double v436; // [rsp+2E0h] [rbp-88h] BYREF
  double v437; // [rsp+2E8h] [rbp-80h] BYREF
  double v438; // [rsp+2F0h] [rbp-78h] BYREF
  double v439; // [rsp+2F8h] [rbp-70h] BYREF
  double v440; // [rsp+300h] [rbp-68h] BYREF
  double v441; // [rsp+308h] [rbp-60h] BYREF
  double v442; // [rsp+310h] [rbp-58h] BYREF
  double v443; // [rsp+318h] [rbp-50h]
  double v444; // [rsp+320h] [rbp-48h]

  v359 = a2;
  v386 = *(double *)this;
  if ( *(double *)this < 0.0 )
  {
    v386 = -1.0;
  }
  else if ( *(double *)this > 0.0 )
  {
    v386 = 1.0;
  }
  if ( *(int *)(*((_QWORD *)this + 20) + 16LL) <= 1 )
    return ClpSimplex::primal(this, 0, 0);
  v13 = *((_QWORD *)this + 15);
  v345 = *((_DWORD *)this + 26);
  v355 = *((_DWORD *)this + 27);
  v322 = *((_QWORD *)this + 22);
  v323 = *((_QWORD *)this + 23);
  v374 = (void *)operator new[](v355);
  memset(v374, 0, v355);
  v14 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 20) + 56LL))(*((_QWORD *)this + 20), v374);
  if ( !v14 )
  {
    operator delete[](v374);
    return ClpSimplex::primal(this, 0, 0);
  }
  if ( (unsigned __int64)v14 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_627;
  v15 = (int *)operator new[](4LL * v14);
  if ( v355 <= 0 )
  {
    v344 = 0;
  }
  else
  {
    v16 = 0;
    v17 = 0;
    do
    {
      if ( *((_BYTE *)v374 + v17) )
      {
        v18 = v16++;
        v15[v18] = v17;
      }
      ++v17;
    }
    while ( v17 != (unsigned int)(v355 - 1) + 1LL );
    v344 = v16;
  }
  v326 = *((ClpObjective **)this + 20);
  v19 = (ClpLinearObjective *)operator new(0x28u);
  ClpLinearObjective::ClpLinearObjective(v19, nullptr, v355);
  *((_QWORD *)this + 20) = v19;
  v353 = (__int64 *)ClpLinearObjective::gradient(v19, nullptr, nullptr, &v442, 0, 2);
  if ( a2 < 0 || (v367 = nullptr, (a4 & 1) != 0) )
  {
    v359 = abs32(a2);
    v367 = (char *)operator new[](*((int *)this + 26));
    memset(v367, 0, *((int *)this + 26));
  }
  v379 = *((_DWORD *)this + 80);
  if ( v379 >= 0 && !*((_DWORD *)this + 308) )
  {
    if ( !v379 )
      goto LABEL_18;
LABEL_72:
    operator delete[](v15);
    return 0;
  }
  ClpSimplexNonlinear::primalDualCuts(this, v367, 1, 1);
  v379 = *((_DWORD *)this + 80);
  if ( v379 )
    goto LABEL_72;
LABEL_18:
  *((_DWORD *)this + 325) = 1;
  v20 = 8LL * v344;
  v21 = operator new[](v20);
  v324 = (double *)operator new[](v20);
  v22 = operator new[](v20);
  v325 = (double *)v22;
  if ( v344 )
  {
    v23 = 0;
    a7.m128d_f64[0] = 0.5;
    v24 = (unsigned int)(v344 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v25 = v15[v23];
        *(_QWORD *)(v21 + 8 * v23) = 0x3FE0000000000000LL;
        v26 = *(double *)(v322 + 8 * v25);
        v324[v23] = v26;
        v27 = *(double *)(v323 + 8 * v25);
        v28 = (unsigned __int64 *)(v13 + 8 * v25);
        *(double *)(v22 + 8 * v23) = v27;
        *(_QWORD *)&a6.m128d_f64[0] = *v28;
        if ( v26 <= *(double *)v28 )
          break;
        *(double *)v28 = v26;
LABEL_21:
        if ( ++v23 == v24 )
          goto LABEL_25;
      }
      if ( a6.m128d_f64[0] <= v27 )
        goto LABEL_21;
      ++v23;
      *(double *)v28 = v27;
    }
    while ( v23 != v24 );
  }
LABEL_25:
  v356 = *(_DWORD *)(*((_QWORD *)this + 43) + 104LL);
  if ( (unsigned __int64)v355 > 0xFFFFFFFFFFFFFFFLL
    || (v375 = 8LL * v355, v29 = (double *)operator new[](v375), (unsigned __int64)v345 > 0xFFFFFFFFFFFFFFFLL) )
  {
LABEL_627:
    __cxa_throw_bad_array_new_length();
  }
  s = (__int64 *)operator new[](8LL * v345);
  memset(s, 0, 8LL * v345);
  v30 = 0;
  v354 = (double *)operator new[](8LL * v345);
  v376 = (__int64 *)operator new[](v375);
  v365 = v355 + v345;
  v361 = (_BYTE *)operator new[](v355 + v345);
  v352 = *((double *)this + 5);
  v334 = (CoinIndexedVector *)(unsigned int)(v344 - 1);
  v371 = (char *)v334 + 1;
  n = 4LL * ((_QWORD)v334 + 1);
  do
  {
    v31 = (void *)operator new[](4LL * v344);
    *((_QWORD *)&v442 + v30) = v31;
    if ( v344 )
      memset(v31, 0, n);
    ++v30;
  }
  while ( v30 != 3 );
  v417 = (void *)operator new[](v355);
  v343 = operator new[](v375);
  v433 = 0.0;
  v434 = 0.0;
  v369 = v355 == 0 || v29 == (double *)v13;
  if ( !v359 )
  {
    v93 = *((__int64 **)this + 14);
    v95 = s == v93 || v345 == 0;
    goto LABEL_204;
  }
  v360 = v345 >> 3;
  v370 = v365 >> 3;
  v364 = v345 % 8;
  v380 = v365 % 8;
  v357 = v355 >> 3;
  v358 = v355 % 8;
  v378 = v376 == (__int64 *)v13 || v355 == 0;
  v33 = v13 >= (unsigned __int64)(v29 + 2) || (unsigned __int64)v29 >= v13 + 16;
  v387 = v33 && (unsigned int)v355 > 0x1C && (v343 >= v13 + 16 || v13 >= v343 + 16);
  v34 = (v343 & 8) != 0;
  v381 = v355 - 1;
  v392 = v355 - v34;
  v390 = v34 + 1;
  v394 = (v355 - v34) & 0xFFFFFFFE;
  v393 = (unsigned int)(v355 - v34) >> 1;
  v35 = 8LL * ((v343 & 8) != 0);
  v410 = v394 + v34;
  v395 = v35 + v343;
  v396 = v13 + v35;
  v397 = &v29[(unsigned __int64)v35 / 8];
  v426 = (v345 >> 3) - 1;
  v385 = (unsigned int)(v355 - 1) + 1LL;
  v363 = ((unsigned int)v426 + 1LL) << 6;
  v416 = 8 * v385;
  v362 = (__int64 *)((char *)s + v363);
  v384 = 8LL * (unsigned int)(v345 - 1) + 8;
  v418 = v33 && (unsigned int)v355 > 7;
  v36 = (v13 >> 3) & 1;
  v421 = v355 - v36;
  v419 = 2 - (v36 == 0);
  v423 = (unsigned int)(v355 - v36) >> 1;
  v424 = (v355 - v36) & 0xFFFFFFFE;
  v37 = (v13 >> 3) & 1;
  v425 = v424 + v36;
  v420 = &v29[v37];
  v388 = (unsigned int)(v365 >> 3) >> 1;
  v372 = (double *)((char *)v354 + v363);
  v422 = v13 + v37 * 8;
  v391 = (v365 >> 3) & 0xFFFFFFFE;
  v389 = 8LL * v391;
  v427 = (v355 >> 3) - 1;
  v382 = 8LL * (unsigned int)((v365 >> 3) - 1) + 8;
  v38 = &v361[v389];
  v39 = ((unsigned int)v427 + 1LL) << 6;
  v40 = 1;
  v41 = (v21 & 8) != 0;
  v400 = v41;
  if ( v344 > 0 )
    v40 = v344;
  v401 = v40 - v41;
  v404 = (unsigned int)(v40 - v41) >> 1;
  v403 = (v40 - v41) & 0xFFFFFFFE;
  v411 = v403 + v41;
  v402 = v21 + 8LL * ((v21 & 8) != 0);
  v42.m128d_f64[0] = 1.0e31;
  v319 = 0;
  v327 = -2;
  v347 = 1.0e31;
  v377 = (__int64 *)((char *)v376 + v39);
  v383 = (__int64)&v15[(_QWORD)v334 + 1];
  v368 = (_QWORD *)(v13 + v39);
  v373 = (double *)((char *)v29 + v39);
  while ( 2 )
  {
    v43 = -v352;
    v433 = 0.0;
    v434 = -v352;
    v44 = *(void (__fastcall **)(ClpObjective *))(*(_QWORD *)v326 + 64LL);
    if ( v44 != ClpObjective::newXValues )
      v44(v326);
    if ( !v319 )
    {
      if ( v355 > 0 )
      {
        if ( v387 )
        {
          if ( v381 < v390 )
          {
            v127 = 0;
          }
          else
          {
            if ( (v343 & 8) != 0 )
            {
              *(_QWORD *)v343 = 0;
              *v29 = *(double *)v13;
            }
            v125 = 0;
            v126 = 0;
            do
            {
              *(_OWORD *)(v395 + v125 * 8) = 0;
              ++v126;
              *(_OWORD *)&v397[v125] = *(_OWORD *)(v396 + v125 * 8);
              v125 += 2;
            }
            while ( v393 > v126 );
            if ( v392 == v394 )
              goto LABEL_230;
            v127 = v410;
          }
          v128 = v127;
          v129 = v127 + 1;
          *(_QWORD *)(v343 + 8 * v128) = 0;
          v29[v128] = *(double *)(v13 + 8 * v128);
          if ( v129 < v355 )
          {
            *(_QWORD *)(v343 + 8LL * v129) = 0;
            v29[v129] = *(double *)(v13 + 8LL * v129);
          }
        }
        else
        {
          v174 = 0;
          do
          {
            *(_QWORD *)(v343 + v174) = 0;
            v29[v174 / 8] = *(double *)(v13 + v174);
            v174 += 8LL;
          }
          while ( v174 != v416 );
        }
      }
LABEL_230:
      v130 = *((__int64 **)this + 14);
      if ( !v345 || (v131 = s, v130 == s) )
      {
LABEL_244:
        v47 = 1.797693134862316e308;
      }
      else
      {
        if ( v360 > 0 )
        {
          v132 = *((__int64 **)this + 14);
          do
          {
            v133 = *v132;
            v131 += 8;
            v132 += 8;
            *(v131 - 8) = v133;
            *(v131 - 7) = *(v132 - 7);
            *(v131 - 6) = *(v132 - 6);
            *(v131 - 5) = *(v132 - 5);
            *(v131 - 4) = *(v132 - 4);
            *(v131 - 3) = *(v132 - 3);
            *(v131 - 2) = *(v132 - 2);
            *(v131 - 1) = *(v132 - 1);
          }
          while ( v131 != v362 );
          v130 = (__int64 *)((char *)v130 + v363);
          v131 = (__int64 *)((char *)s + v363);
        }
        switch ( v364 )
        {
          case 1:
            goto LABEL_243;
          case 2:
            goto LABEL_242;
          case 3:
            goto LABEL_241;
          case 4:
            goto LABEL_240;
          case 5:
            goto LABEL_239;
          case 6:
            goto LABEL_238;
          case 7:
            v131[6] = v130[6];
LABEL_238:
            v131[5] = v130[5];
LABEL_239:
            v131[4] = v130[4];
LABEL_240:
            v131[3] = v130[3];
LABEL_241:
            v131[2] = v130[2];
LABEL_242:
            v131[1] = v130[1];
LABEL_243:
            v47 = 1.797693134862316e308;
            *v131 = *v130;
            break;
          default:
            goto LABEL_244;
        }
      }
      goto LABEL_58;
    }
    if ( v355 <= 0 )
    {
      v47 = 1.797693134862316e308;
    }
    else
    {
      v45 = 0;
      v46 = 0;
      v47 = 1.797693134862316e308;
      a7.m128d_f64[0] = -1.0e-15;
      v42.m128d_f64[0] = 1.0e-15;
      do
      {
        while ( 1 )
        {
          v48 = *((_BYTE *)v374 + v46) == 0;
          a6.m128d_f64[0] = v29[v46];
          v49 = *(double *)(v13 + 8 * v46) - a6.m128d_f64[0];
          *(double *)(v343 + 8 * v46) = v49;
          if ( v48 )
            break;
          if ( v49 >= -1.0e-15 )
          {
            if ( v49 > 1.0e-15 )
            {
              v62 = v325[v45] - a6.m128d_f64[0];
              a6.m128d_f64[0] = v62;
              a11 = 0.0;
              if ( v62 - v49 * v47 < 0.0 )
              {
                a6.m128d_f64[0] = v62 / v49;
                a11 = fmax(0.0, v62 / v49);
                v47 = a11;
              }
            }
          }
          else
          {
            a11 = 0.0;
            a6.m128d_f64[0] = a6.m128d_f64[0] - v324[v45];
            if ( v49 * v47 + a6.m128d_f64[0] < 0.0 )
            {
              a6.m128d_f64[0] = a6.m128d_f64[0] / -v49;
              a11 = fmax(0.0, a6.m128d_f64[0]);
              v47 = a11;
            }
          }
          ++v46;
          ++v45;
          if ( v46 == v385 )
            goto LABEL_49;
        }
        if ( v49 >= -1.0e-15 )
        {
          if ( v49 > 1.0e-15 )
          {
            v63 = *(double *)(v323 + 8 * v46) - a6.m128d_f64[0];
            a6.m128d_f64[0] = v63;
            a11 = 0.0;
            if ( v63 - v49 * v47 < 0.0 )
            {
              a6.m128d_f64[0] = v63 / v49;
              a11 = fmax(0.0, v63 / v49);
              v47 = a11;
            }
          }
        }
        else
        {
          a11 = 0.0;
          a6.m128d_f64[0] = a6.m128d_f64[0] - *(double *)(v322 + 8 * v46);
          if ( v49 * v47 + a6.m128d_f64[0] < 0.0 )
          {
            a6.m128d_f64[0] = a6.m128d_f64[0] / -v49;
            a11 = fmax(0.0, a6.m128d_f64[0]);
            v47 = a11;
          }
        }
        ++v46;
      }
      while ( v46 != v385 );
    }
LABEL_49:
    memset(*((void **)this + 14), 0, 8LL * *((int *)this + 26));
    ClpModel::times(this, 1.0, (const double *)v13, *((double **)this + 14));
    memset(s, 0, 8LL * *((int *)this + 26));
    ClpModel::times(this, 1.0, v29, (double *)s);
    if ( v345 > 0 )
    {
      v50 = 0;
      a7.m128d_f64[0] = -1.0e-15;
      v43 = 1.0e-15;
      while ( 1 )
      {
        *(_QWORD *)&a6.m128d_f64[0] = s[v50 / 8];
        v51 = *(double *)(*((_QWORD *)this + 14) + v50) - a6.m128d_f64[0];
        if ( v51 < -1.0e-15 )
          break;
        if ( v51 <= 1.0e-15
          || (v42.m128d_f64[0] = 0.0,
              a6.m128d_f64[0] = *(double *)(*((_QWORD *)this + 19) + v50) - a6.m128d_f64[0],
              v32 = v51 * v47,
              a11 = a6.m128d_f64[0] - v51 * v47,
              a11 >= 0.0) )
        {
LABEL_53:
          v50 += 8LL;
          if ( v50 == v384 )
            goto LABEL_58;
        }
        else
        {
          a6.m128d_f64[0] = a6.m128d_f64[0] / v51;
          v50 += 8LL;
          v42.m128d_f64[0] = fmax(0.0, a6.m128d_f64[0]);
          v47 = v42.m128d_f64[0];
          if ( v50 == v384 )
            goto LABEL_58;
        }
      }
      v42.m128d_f64[0] = 0.0;
      a6.m128d_f64[0] = a6.m128d_f64[0] - *(double *)(*((_QWORD *)this + 18) + v50);
      v32 = v51 * v47 + a6.m128d_f64[0];
      if ( v32 < 0.0 )
      {
        a6.m128d_f64[0] = a6.m128d_f64[0] / -v51;
        v42.m128d_f64[0] = fmax(0.0, a6.m128d_f64[0]);
        v47 = v42.m128d_f64[0];
      }
      goto LABEL_53;
    }
LABEL_58:
    v52 = (*(double (__fastcall **)(ClpObjective *, ClpSimplexNonlinear *, double *, unsigned __int64, double *, double *, double, double, double, double, double, double, double, double *))(*(_QWORD *)v326 + 16LL))(
            v326,
            this,
            v29,
            v343,
            &v434,
            &v435,
            2.0,
            v47,
            a6.m128d_f64[0],
            a7.m128d_f64[0],
            v32,
            v43,
            v42.m128d_f64[0],
            &v436);
    v53 = v52;
    if ( v327 < 0 )
    {
      v56 = v327;
      v55 = -1.0;
      goto LABEL_62;
    }
    v54.m128d_f64[1] = 0.0;
    v54.m128d_f64[0] = fmin(v52, v47);
    v55 = v54.m128d_f64[0];
    if ( v54.m128d_f64[0] <= 0.0 )
      goto LABEL_61;
    v42.m128d_f64[0] = 1.0;
    if ( v54.m128d_f64[0] > 1.0 )
      goto LABEL_61;
    a7.m128d_f64[1] = 0.0;
    a7.m128d_f64[0] = 1.0 - v54.m128d_f64[0];
    if ( v355 > 0 )
    {
      if ( v418 )
      {
        if ( v419 > v381 )
        {
          v167 = 1;
          *(double *)v13 = *v29 * a7.m128d_f64[0] + *(double *)v13 * v54.m128d_f64[0];
LABEL_344:
          v168 = (double *)(v13 + 8LL * v167);
          a6.m128d_f64[0] = *v168 * v55;
          *v168 = v29[v167] * a7.m128d_f64[0] + a6.m128d_f64[0];
          goto LABEL_345;
        }
        if ( ((v13 >> 3) & 1) != 0 )
          *(double *)v13 = *v29 * a7.m128d_f64[0] + *(double *)v13 * v54.m128d_f64[0];
        v163 = 0;
        v164 = 0;
        v42 = _mm_unpacklo_pd(a7, a7);
        v165 = _mm_unpacklo_pd(v54, v54);
        do
        {
          ++v164;
          a6 = _mm_mul_pd(*(__m128d *)(v422 + v163 * 8), v165);
          *(__m128d *)(v422 + v163 * 8) = _mm_add_pd(_mm_mul_pd(*(__m128d *)&v420[v163], v42), a6);
          v163 += 2;
        }
        while ( v423 > v164 );
        if ( v421 != v424 )
        {
          v166 = (double *)(v13 + 8LL * v425);
          a6.m128d_f64[0] = *v166 * v55;
          *v166 = v29[v425] * a7.m128d_f64[0] + a6.m128d_f64[0];
          v167 = v425 + 1;
          if ( v355 > v425 + 1 )
            goto LABEL_344;
        }
      }
      else
      {
        v267 = 0;
        do
        {
          a6.m128d_f64[0] = v29[v267 / 8] * a7.m128d_f64[0];
          *(double *)(v13 + v267) = *(double *)(v13 + v267) * v54.m128d_f64[0] + a6.m128d_f64[0];
          v267 += 8LL;
        }
        while ( v267 != v416 );
      }
    }
LABEL_345:
    v348 = v52;
    memset(*((void **)this + 14), 0, 8LL * *((int *)this + 26));
    ClpModel::times(this, 1.0, (const double *)v13, *((double **)this + 14));
    if ( a7.m128d_f64[0] > 0.999 )
    {
      v255 = *((double **)this + 16);
      if ( v345 )
      {
        v256 = v354;
        if ( v354 != v255 )
        {
          if ( v360 > 0 )
          {
            v257 = *((_QWORD *)this + 16);
            do
            {
              v258 = *(_QWORD *)v256;
              v256 += 8;
              v257 += 64;
              *(_QWORD *)(v257 - 64) = v258;
              *(double *)(v257 - 56) = *(v256 - 7);
              *(double *)(v257 - 48) = *(v256 - 6);
              *(double *)(v257 - 40) = *(v256 - 5);
              *(double *)(v257 - 32) = *(v256 - 4);
              *(double *)(v257 - 24) = *(v256 - 3);
              *(double *)(v257 - 16) = *(v256 - 2);
              *(double *)(v257 - 8) = *(v256 - 1);
            }
            while ( v256 != v372 );
            v255 = (double *)((char *)v255 + v363);
            v256 = &v354[8 * (unsigned int)((v345 >> 3) - 1) + 8];
          }
          switch ( v364 )
          {
            case 1:
              goto LABEL_488;
            case 2:
              goto LABEL_487;
            case 3:
              goto LABEL_486;
            case 4:
              goto LABEL_485;
            case 5:
              goto LABEL_484;
            case 6:
              goto LABEL_483;
            case 7:
              v255[6] = v256[6];
LABEL_483:
              v255[5] = v256[5];
LABEL_484:
              v255[4] = v256[4];
LABEL_485:
              v255[3] = v256[3];
LABEL_486:
              v255[2] = v256[2];
LABEL_487:
              v255[1] = v256[1];
LABEL_488:
              *v255 = *v256;
              break;
            default:
              break;
          }
        }
      }
      v259 = *((_BYTE **)this + 33);
      if ( v365 && v259 != v361 )
      {
        if ( v370 <= 0 )
        {
          v264 = v361;
        }
        else
        {
          if ( (v361 >= v259 + 16 || v259 >= v361 + 16) && (unsigned int)v370 > 1 )
          {
            v260 = 0;
            v261 = 0;
            do
            {
              ++v261;
              *(__m128i *)&v259[v260] = _mm_loadu_si128((const __m128i *)&v361[v260]);
              v260 += 16;
            }
            while ( v261 < v388 );
            v262 = &v259[v389];
            v263 = &v259[v382];
            if ( v391 != v370 )
            {
              *v262 = *v38;
              v262[1] = v38[1];
              v262[2] = v38[2];
              v262[3] = v38[3];
              v262[4] = v38[4];
              v262[5] = v38[5];
              v262[6] = v38[6];
              v262[7] = v38[7];
            }
          }
          else
          {
            v309 = v361;
            v263 = &v259[v382];
            do
            {
              v310 = *v309;
              v259 += 8;
              v309 += 8;
              *(v259 - 8) = v310;
              *(v259 - 7) = *(v309 - 7);
              *(v259 - 6) = *(v309 - 6);
              *(v259 - 5) = *(v309 - 5);
              *(v259 - 4) = *(v309 - 4);
              *(v259 - 3) = *(v309 - 3);
              *(v259 - 2) = *(v309 - 2);
              *(v259 - 1) = *(v309 - 1);
            }
            while ( v263 != v259 );
          }
          v264 = &v361[v382];
          v259 = v263;
        }
        switch ( v380 )
        {
          case 1:
            goto LABEL_599;
          case 2:
            goto LABEL_598;
          case 3:
            goto LABEL_597;
          case 4:
            goto LABEL_596;
          case 5:
            goto LABEL_595;
          case 6:
            goto LABEL_594;
          case 7:
            v259[6] = v264[6];
LABEL_594:
            v259[5] = v264[5];
LABEL_595:
            v259[4] = v264[4];
LABEL_596:
            v259[3] = v264[3];
LABEL_597:
            v259[2] = v264[2];
LABEL_598:
            v259[1] = v264[1];
LABEL_599:
            *v259 = *v264;
            break;
          default:
            break;
        }
      }
    }
    v415 = *((_DWORD *)this + 64);
    ClpModel::scaling(this, 0);
    v169 = *((_DWORD *)this + 327);
    *((_DWORD *)this + 327) = 100;
    v170 = v348;
    v414 = v169;
    if ( v356 == 1 )
    {
      CoinMessageHandler::setLogLevel(*((CoinMessageHandler **)this + 43), 0);
      v170 = v348;
    }
    v349 = v170;
    v405 = ClpSimplex::startup(this, 1, 0);
    v398 = 0;
    v171 = v349;
    if ( v405 )
      goto LABEL_349;
    v203 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    v408 = v349;
    v399 = v29;
    v204 = (ClpSimplexNonlinear *)((char *)this + 1056);
    v351 = v203;
    while ( 1 )
    {
      v205 = *(CoinIndexedVector **)v204;
      v206 = *(_DWORD *)(*(_QWORD *)v204 + 20LL);
      if ( v203 >= v206 )
        v206 = v203;
      v204 = (ClpSimplexNonlinear *)((char *)v204 + 8);
      CoinIndexedVector::reserve(v205, v206);
      if ( v204 == (ClpSimplexNonlinear *)((char *)this + 1088) )
        break;
      v203 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    }
    v412 = *((CoinIndexedVector **)this + 132);
    v341 = *((CoinIndexedVector **)this + 135);
    v207 = *((_QWORD *)v341 + 1);
    v413 = *((CoinIndexedVector **)this + 133);
    if ( v344 )
    {
      v208 = nullptr;
      do
      {
        v209 = v15[(_QWORD)v208];
        v210 = v324[(_QWORD)v208];
        v211 = (double *)(8 * v209 + *((_QWORD *)this + 123));
        v324[(_QWORD)v208] = *v211;
        *v211 = v210;
        v212 = (unsigned __int64 *)(*((_QWORD *)this + 126) + 8 * v209);
        v213 = v325[(_QWORD)v208];
        *(_QWORD *)&a6.m128d_f64[0] = *v212;
        *(_QWORD *)&v325[(_QWORD)v208] = *v212;
        *(double *)v212 = v213;
        v214 = (_BYTE *)(v209 + *((_QWORD *)this + 33));
        v215 = *v214 & 7;
        if ( v215 <= 5u && ((1LL << v215) & 0x2C) != 0 )
        {
          v216 = *((double *)this + 110);
          v217 = *v214 & 0xF8;
          v218 = v213 - v216;
          a6.m128d_f64[0] = v216 + *v211;
          a7.m128d_f64[0] = *(double *)(*((_QWORD *)this + 150) + 8 * v209);
          if ( a7.m128d_f64[0] <= a6.m128d_f64[0] )
          {
            v265 = v217 | 3;
            v266 = v217 | 5;
            if ( v218 > a7.m128d_f64[0] )
              v266 = v265;
            *v214 = v266;
          }
          else
          {
            v219 = v217 | 4;
            v220 = v217 | 2;
            if ( v218 > a7.m128d_f64[0] )
              v220 = v219;
            *v214 = v220;
          }
        }
        ++v208;
      }
      while ( v208 != v371 );
    }
    v429 = v21;
    v221 = 0;
    v428 = v55;
    v430 = v408;
    v431 = v38;
    v222 = 8 * ((unsigned int)(v351 - 1) + 1LL);
    v223 = v207;
    do
    {
      (*(void (__fastcall **)(ClpObjective *, ClpSimplexNonlinear *, _QWORD, __int64))(*(_QWORD *)v326 + 8LL))(
        v326,
        this,
        *((_QWORD *)this + 147),
        1);
      CoinIndexedVector::clear(v341);
      v437 = 0.0;
      v438 = 0.0;
      v432 = 0;
      ClpSimplexNonlinear::directionVector(this, v341, v413, v412, 0, &v437, &v438, &v432);
      if ( v437 + v438 < 0.00000001 || !v432 )
      {
        v55 = v428;
        v21 = v429;
        v29 = v399;
        v171 = v430;
        v38 = v431;
        v398 = 1;
        goto LABEL_467;
      }
      v224 = *((_QWORD *)this + 150);
      v225 = *(double (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, double, _QWORD))(*(_QWORD *)v326 + 16LL);
      if ( v351 > 0 )
      {
        v226 = 0;
        v227 = 1.0e30;
        a7.m128d_f64[0] = -1.0e-15;
        while ( 1 )
        {
          v229 = *(double *)(v223 + v226);
          v230 = *(double *)(v224 + v226);
          if ( v229 < -1.0e-15 )
          {
            v42.m128d_f64[0] = 0.0;
            v228 = v230 - *(double *)(*((_QWORD *)this + 123) + v226);
            a6.m128d_f64[0] = v229 * v227 + v228;
            if ( a6.m128d_f64[0] >= 0.0 )
              goto LABEL_444;
            v229 = -v229;
LABEL_448:
            v226 += 8;
            v227 = fmax(0.0, v228 / v229);
            if ( v222 == v226 )
            {
LABEL_449:
              v409 = *((_QWORD *)this + 129);
              *((_QWORD *)this + 129) = 0;
              v406 = v227;
              v231 = v225(v326, this, v224, v223, &v439, &v440, v227, &v441);
              *((_QWORD *)this + 129) = v409;
              v232 = v406;
              if ( v406 > v231 )
                goto LABEL_450;
LABEL_451:
              v233 = v439;
              v434 = v439;
              if ( v232 > 0.000000001 )
                goto LABEL_452;
              goto LABEL_466;
            }
          }
          else
          {
            if ( v229 > 1.0e-15 )
            {
              v228 = *(double *)(*((_QWORD *)this + 126) + v226) - v230;
              a6.m128d_f64[0] = v228 - v229 * v227;
              v42.m128d_f64[0] = 0.0;
              if ( a6.m128d_f64[0] < 0.0 )
                goto LABEL_448;
            }
LABEL_444:
            v226 += 8;
            if ( v222 == v226 )
              goto LABEL_449;
          }
        }
      }
      v407 = *((_QWORD *)this + 129);
      *((_QWORD *)this + 129) = 0;
      v231 = v225(v326, this, v224, v223, &v439, &v440, 1.0e30, &v441);
      *((_QWORD *)this + 129) = v407;
      if ( v231 < 1.0e30 )
      {
LABEL_450:
        v232 = v231;
        v441 = v440;
        goto LABEL_451;
      }
      v233 = v439;
      v232 = 1.0e30;
      v434 = v439;
LABEL_452:
      v42.m128d_f64[0] = 0.00000001;
      a6.m128d_f64[0] = v233 - v441;
      v234 = -0.00000001;
      v235 = fabs(v233) * 1.0e-15;
      if ( v235 >= 0.00000001 )
        v234 = -v235;
      if ( v234 <= a6.m128d_f64[0] && v221 > 4 )
        break;
      if ( v351 > 0 )
      {
        v236 = 0;
        do
        {
          v42.m128d_f64[0] = 0.0;
          v237 = *(double *)(v223 + 8 * v236);
          if ( v237 != 0.0 )
          {
            v238 = (double *)(8 * v236 + *((_QWORD *)this + 150));
            v239 = v237 * v232 + *v238;
            *v238 = v239;
            v240 = (_BYTE *)(v236 + *((_QWORD *)this + 33));
            if ( (unsigned __int8)((*v240 & 7) - 2) <= 2u )
            {
              v241 = *((double *)this + 110);
              v242 = *v240 & 0xF8;
              a6.m128d_f64[0] = *(double *)(*((_QWORD *)this + 126) + 8 * v236) - v241;
              if ( v239 <= v241 + *(double *)(*((_QWORD *)this + 123) + 8 * v236) )
              {
                v253 = v242 | 3;
                v254 = v242 | 5;
                if ( a6.m128d_f64[0] > v239 )
                  v254 = v253;
                *v240 = v254;
              }
              else
              {
                v243 = v242 | 4;
                v244 = v242 | 2;
                if ( a6.m128d_f64[0] > v239 )
                  v244 = v243;
                *v240 = v244;
              }
            }
          }
          ++v236;
        }
        while ( v236 != (unsigned int)(v351 - 1) + 1LL );
      }
      ++v221;
    }
    while ( v221 != 100 );
LABEL_466:
    v21 = v429;
    v29 = v399;
    v38 = v431;
    v55 = v428;
    v171 = v430;
    v398 = 0;
LABEL_467:
    if ( v344 )
    {
      v245 = *((_QWORD *)this + 123);
      v246 = *((_QWORD *)this + 126);
      v247 = nullptr;
      do
      {
        v248 = v324[(_QWORD)v247];
        v249 = 8LL * v15[(_QWORD)v247];
        v250 = (double *)(v245 + v249);
        v251 = (unsigned __int64 *)(v246 + v249);
        v324[(_QWORD)v247] = *v250;
        *v250 = v248;
        *(_QWORD *)&a6.m128d_f64[0] = *v251;
        v252 = *(_QWORD *)&v325[(_QWORD)v247];
        *(_QWORD *)&v325[(_QWORD)v247++] = *v251;
        *v251 = v252;
      }
      while ( v247 != v371 );
    }
LABEL_349:
    *((_DWORD *)this + 80) = 0;
    v350 = v171;
    ClpSimplex::finish(this, 0);
    ClpModel::scaling(this, v415);
    v172 = *((CoinMessageHandler **)this + 43);
    *((_DWORD *)this + 327) = v414;
    CoinMessageHandler::setLogLevel(v172, v356);
    memset(*((void **)this + 14), 0, 8LL * *((int *)this + 26));
    v52 = 1.0;
    ClpModel::times(this, 1.0, (const double *)v13, *((double **)this + 14));
    if ( v55 <= 0.99999 || (v52 = 1.9, v53 = v350, v350 >= 1.9) || v398 )
    {
LABEL_61:
      v56 = v327;
      goto LABEL_62;
    }
    v173 = -1;
    v42.m128d_f64[0] = 0.5;
    v53 = v350 * v350 - v350 * 0.5 * 4.0;
    a6.m128d_f64[0] = (v435 - v434 - (v436 - v434) * (v350 * 0.5)) / v53;
    a7.m128d_f64[0] = 4.0 * a6.m128d_f64[0];
    v52 = fabs((v436 - v434 - 4.0 * a6.m128d_f64[0]) * 0.5 + a6.m128d_f64[0]);
    if ( v52 <= 0.01 )
      v173 = v327;
    v56 = v173;
LABEL_62:
    v335 = v56;
    v57 = (__int64 *)(**(__int64 (__fastcall ***)(ClpObjective *, ClpSimplexNonlinear *, unsigned __int64, double *, __int64, __int64, double, double, double, double, double))v326)(
                       v326,
                       this,
                       v13,
                       &v433,
                       1,
                       2,
                       v52,
                       v55,
                       a6.m128d_f64[0],
                       a7.m128d_f64[0],
                       v53);
    v58 = v353;
    if ( v57 != v353 && v355 )
    {
      if ( v357 > 0 )
      {
        v59 = &v57[8 * (unsigned int)((v355 >> 3) - 1) + 8];
        do
        {
          v60 = *v57;
          v57 += 8;
          v58 += 8;
          *(v58 - 8) = v60;
          *(v58 - 7) = *(v57 - 7);
          *(v58 - 6) = *(v57 - 6);
          *(v58 - 5) = *(v57 - 5);
          *(v58 - 4) = *(v57 - 4);
          *(v58 - 3) = *(v57 - 3);
          *(v58 - 2) = *(v57 - 2);
          *(v58 - 1) = *(v57 - 1);
        }
        while ( v59 != v57 );
        v58 = &v353[8 * (unsigned int)((v355 >> 3) - 1) + 8];
        v57 = v59;
      }
      switch ( v358 )
      {
        case 1:
          goto LABEL_86;
        case 2:
          goto LABEL_85;
        case 3:
          goto LABEL_84;
        case 4:
          goto LABEL_83;
        case 5:
          goto LABEL_82;
        case 6:
          goto LABEL_81;
        case 7:
          v58[6] = v57[6];
LABEL_81:
          v58[5] = v57[5];
LABEL_82:
          v58[4] = v57[4];
LABEL_83:
          v58[3] = v57[3];
LABEL_84:
          v58[2] = v57[2];
LABEL_85:
          v58[1] = v57[1];
LABEL_86:
          *v58 = *v57;
          break;
        default:
          break;
      }
    }
    (*(void (__fastcall **)(ClpObjective *, ClpSimplexNonlinear *, unsigned __int64, unsigned __int64, double *, double *, double, double *))(*(_QWORD *)v326 + 16LL))(
      v326,
      this,
      v13,
      v343,
      &v434,
      &v435,
      0.0,
      &v436);
    v64.m128d_f64[0] = v352 + v433;
    ClpModel::setDblParam(this, 4);
    v67 = v444;
    v68 = v443;
    v69 = v442;
    v70 = v335;
    v71 = v327 == -1;
    v444 = v443;
    v443 = v442;
    v442 = v67;
    if ( v344 )
    {
      v72 = 0;
      v65 = NAN;
      a7.m128d_f64[0] = -0.00001;
      while ( 1 )
      {
        while ( 1 )
        {
          v73 = *(double *)(v13 + 8LL * v15[v72 / 4]) - v29[v15[v72 / 4]];
          if ( v73 >= -0.00001 )
            break;
          *(_DWORD *)(*(_QWORD *)&v67 + v72) = (fabs(v73 + *(double *)(v21 + 2 * v72)) < 0.00001) - 2;
LABEL_90:
          v72 += 4LL;
          if ( v72 == n )
            goto LABEL_94;
        }
        if ( v73 <= 0.00001 )
        {
          *(_DWORD *)(*(_QWORD *)&v67 + v72) = 0;
          goto LABEL_90;
        }
        *(_DWORD *)(*(_QWORD *)&v67 + v72) = (fabs(v73 - *(double *)(v21 + 2 * v72)) >= 0.00001) + 1;
        v72 += 4LL;
        if ( v72 == n )
        {
LABEL_94:
          if ( v335 >= 0 )
            goto LABEL_95;
          a6.m128d_f64[0] = 1.0e10;
          v336 = v71 && v335 == -1;
          goto LABEL_97;
        }
      }
    }
    if ( v335 < 0 )
    {
      a6.m128d_f64[0] = 1.0e10;
      v179 = v71 && v335 == -1;
      v74 = 0;
      v336 = v179;
      goto LABEL_106;
    }
    v65 = NAN;
LABEL_95:
    v64.m128d_f64[0] = v434 - v347;
    a11 = fabs(v347);
    v70 = 1.0e-15 * a11 >= v434 - v347;
    if ( !v344 )
    {
      v74 = 0;
      v336 = 0;
      a6.m128d_f64[0] = 0.0;
      goto LABEL_106;
    }
    a6.m128d_f64[0] = 0.0;
    v336 = 0;
LABEL_97:
    v74 = 0;
    v75 = 0;
    v66 = 10.0;
    a11 = 0.2;
    v42.m128d_f64[0] = 0.5;
    do
    {
      while ( 1 )
      {
        v64.m128d_f64[0] = fabs(*(double *)(v13 + 8LL * v15[v75]) - v29[v15[v75]]);
        a6.m128d_f64[0] = fmax(a6.m128d_f64[0], v64.m128d_f64[0]);
        if ( v70 == 1 )
        {
          v76 = *(_DWORD *)(*(_QWORD *)&v67 + 4 * v75);
          v77 = *(_DWORD *)(*(_QWORD *)&v69 + 4 * v75);
          if ( v77 * v76 < 0 )
          {
            v64.m128d_f64[0] = *(double *)(v21 + 8 * v75) * 0.5;
            *(double *)(v21 + 8 * v75) = v64.m128d_f64[0];
          }
          else if ( v76 == v77 && v76 == *(_DWORD *)(*(_QWORD *)&v68 + 4 * v75) )
          {
            v64.m128d_f64[0] = fmin(1.5 * *(double *)(v21 + 8 * v75), 1000000.0);
            *(double *)(v21 + 8 * v75) = v64.m128d_f64[0];
          }
          goto LABEL_100;
        }
        if ( v70 != -2 )
        {
          v64.m128d_f64[0] = *(double *)(v21 + 8 * v75);
          a7.m128d_f64[0] = a3 * 10.0;
          if ( v64.m128d_f64[0] > a3 * 10.0 )
            break;
        }
LABEL_100:
        if ( v344 <= (int)++v75 )
          goto LABEL_105;
      }
      v64.m128d_f64[0] = v64.m128d_f64[0] * 0.2;
      ++v74;
      *(double *)(v21 + 8 * v75++) = v64.m128d_f64[0];
    }
    while ( v344 > (int)v75 );
LABEL_105:
    if ( v319 <= 10000 )
      goto LABEL_106;
    if ( v344 <= 2 )
    {
      v159 = 0;
      goto LABEL_326;
    }
    if ( v400 )
      *(double *)v21 = 0.0001 * *(double *)v21;
    v157 = 0;
    v158 = 0;
    do
    {
      ++v158;
      v64 = _mm_mul_pd((__m128d)xmmword_291BA0, *(__m128d *)(v402 + v157));
      *(__m128d *)(v402 + v157) = v64;
      v157 += 16;
    }
    while ( v158 < v404 );
    if ( v401 != v403 )
    {
      v159 = v411;
LABEL_326:
      v64.m128d_f64[0] = 0.0001;
      v160 = (double *)(v21 + 8LL * v159);
      v161 = v159 + 1;
      a7.m128d_f64[0] = *v160 * 0.0001;
      *v160 = a7.m128d_f64[0];
      if ( v161 < v344 )
      {
        v162 = (double *)(v21 + 8LL * v161);
        v64.m128d_f64[0] = 0.0001 * *v162;
        *v162 = v64.m128d_f64[0];
      }
    }
LABEL_106:
    if ( v70 == 1 || v336 )
    {
      a11 = v347 - v434;
      v328 = v347 - v434;
      v78 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)this + 43),
                                    83,
                                    (ClpSimplexNonlinear *)((char *)this + 416));
      v79 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v78);
      v80 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v79);
      v81 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v80);
      v64.m128d_f64[0] = a6.m128d_f64[0];
      v82 = CoinMessageHandler::operator<<(v81);
      CoinMessageHandler::operator<<(v82, 0, a6.m128d_f64[0]);
      v66 = a3;
      if ( v319 > 20 )
      {
        v64.m128d_f64[0] = fabs(v434) * 1.0e-12;
        if ( v64.m128d_f64[0] > v328 )
        {
          if ( a3 > a6.m128d_f64[0] )
            goto LABEL_111;
          v83 = *((double **)this + 17);
          v70 = 1;
LABEL_246:
          if ( !v344 )
          {
            v123 = *((_QWORD *)this + 24);
            if ( !v123 )
            {
              v333 = v70;
              CoinPackedMatrix::transposeTimes(nullptr, v354, v83);
              v88 = 0.0;
              v89 = v333;
              goto LABEL_121;
            }
            goto LABEL_248;
          }
          goto LABEL_116;
        }
      }
      if ( a3 > a6.m128d_f64[0] )
      {
        v64.m128d_f64[0] = 0.0001;
        if ( v328 < 0.0001 )
        {
LABEL_111:
          v64.m128d_f64[0] = 0.99999;
          if ( v55 >= 0.99999 )
            goto LABEL_112;
          if ( *(int *)(*((_QWORD *)this + 43) + 104LL) > 1 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            v302 = *(_QWORD *)(std::cout - 24LL);
            v303 = *(_QWORD *)((char *)&std::cout + v302 + 240);
            if ( v303 )
            {
              if ( *(_BYTE *)(v303 + 56) )
              {
                v304 = *(_BYTE *)(v303 + 67);
              }
              else
              {
                v321 = *(_QWORD *)((char *)&std::cout + v302 + 240);
                std::ctype<char>::_M_widen_init();
                v304 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, double, double, double, double, double, double, double))(*(_QWORD *)v321 + 48LL))(
                         v321,
                         10,
                         0.99999,
                         v55,
                         a6.m128d_f64[0],
                         a7.m128d_f64[0],
                         v317,
                         v318,
                         v42.m128d_f64[0]);
              }
LABEL_607:
              v305 = v304;
              goto LABEL_608;
            }
LABEL_628:
            std::__throw_bad_cast();
          }
          goto LABEL_331;
        }
      }
LABEL_112:
      v70 = 1;
    }
    else if ( !v74 && v319 > 1 )
    {
      if ( *(int *)(*((_QWORD *)this + 43) + 104LL) > 1 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v307 = *(_QWORD *)(std::cout - 24LL);
        v308 = *(_QWORD *)((char *)&std::cout + v307 + 240);
        if ( !v308 )
          goto LABEL_628;
        if ( *(_BYTE *)(v308 + 56) )
        {
          v305 = *(_BYTE *)(v308 + 67);
        }
        else
        {
          v320 = *(_QWORD *)((char *)&std::cout + v307 + 240);
          std::ctype<char>::_M_widen_init();
          v305 = 10;
          v316 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v320 + 48LL);
          if ( v316 != std::ctype<char>::do_widen )
          {
            v304 = ((__int64 (__fastcall *)(unsigned __int64, __int64, double, double, double, double, double, double, double, double))v316)(
                     v320,
                     10,
                     v64.m128d_f64[0],
                     v55,
                     a6.m128d_f64[0],
                     a7.m128d_f64[0],
                     v314,
                     v315,
                     v42.m128d_f64[0],
                     a11);
            goto LABEL_607;
          }
        }
LABEL_608:
        v306 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v305);
        std::ostream::flush(v306);
      }
LABEL_331:
      v93 = *((__int64 **)this + 14);
      v95 = s == v93 || v345 == 0;
      goto LABEL_204;
    }
    v83 = *((double **)this + 17);
    if ( v319 )
      goto LABEL_246;
    if ( !v344 )
    {
      memset(v83, 0, v375);
      v88 = 0.0;
      break;
    }
    v70 = 1;
LABEL_116:
    v84 = 0;
    while ( 2 )
    {
      while ( 2 )
      {
        v85 = 8LL * v15[v84];
        v86 = (double *)(v13 + v85);
        *(double *)(v322 + v85) = fmax(*(double *)(v13 + v85) - *(double *)(v21 + 8 * v84), v324[v84]);
        v87 = (double *)(v323 + v85);
        v55 = v325[v84];
        v64.m128d_f64[0] = *(double *)(v21 + 8 * v84) + *v86;
        if ( v55 <= v64.m128d_f64[0] )
        {
          ++v84;
          *v87 = v55;
          if ( v344 > (int)v84 )
            continue;
          if ( v319 )
            goto LABEL_212;
          goto LABEL_120;
        }
        break;
      }
      ++v84;
      *v87 = v64.m128d_f64[0];
      if ( v344 > (int)v84 )
        continue;
      break;
    }
    if ( !v319 )
    {
LABEL_120:
      v329 = v70;
      memset(v83, 0, v375);
      v88 = 0.0;
      v89 = v329;
      goto LABEL_121;
    }
LABEL_212:
    v123 = *((_QWORD *)this + 24);
    if ( !v123 )
    {
      v338 = (CoinIndexedVector *)v83;
      v330 = v70;
      CoinPackedMatrix::transposeTimes(nullptr, v354, *((double **)this + 17));
      v89 = v330;
      v124 = v338;
LABEL_251:
      v32 = *((double *)this + 109);
      v136 = v15;
      v88 = 0.0;
      a7.m128d_f64[0] = -v32;
      do
      {
        v137 = *v136;
        v138 = (double *)((char *)v124 + 8 * v137);
        v139 = *(double *)&v353[v137] - *v138;
        *v138 = v139;
        if ( a7.m128d_f64[0] > v139 )
        {
          a6.m128d_f64[0] = *(double *)(v323 + 8 * v137) - *(double *)(v13 + 8 * v137);
          v88 = v88 - v139 * a6.m128d_f64[0];
        }
        else if ( v139 > v32 )
        {
          a6.m128d_f64[0] = *(double *)(v322 + 8 * v137) - *(double *)(v13 + 8 * v137);
          v88 = v88 - v139 * a6.m128d_f64[0];
        }
        ++v136;
      }
      while ( (int *)v383 != v136 );
      goto LABEL_121;
    }
LABEL_248:
    v134 = **(__int64 (__fastcall ***)(double, double, double, double, double, double, double))v123;
    if ( (char *)v134 == (char *)ClpPackedMatrix::getPackedMatrix )
    {
      v135 = *(CoinPackedMatrix **)(v123 + 88);
    }
    else
    {
      v340 = (CoinIndexedVector *)v83;
      v332 = v70;
      v175 = v134(v64.m128d_f64[0], v55, a6.m128d_f64[0], a7.m128d_f64[0], v65, v66, v42.m128d_f64[0]);
      v83 = (double *)v340;
      v135 = (CoinPackedMatrix *)v175;
      v70 = v332;
    }
    v339 = (CoinIndexedVector *)v83;
    v331 = v70;
    CoinPackedMatrix::transposeTimes(v135, v354, *((double **)this + 17));
    v89 = v331;
    v124 = v339;
    if ( v344 )
      goto LABEL_251;
    v88 = 0.0;
LABEL_121:
    if ( v89 != 1 )
    {
      if ( !v369 )
      {
        v140 = (_QWORD *)v13;
        v141 = v29;
        if ( v357 > 0 )
        {
          do
          {
            v142 = *(_QWORD *)v141;
            v140 += 8;
            v141 += 8;
            *(v140 - 8) = v142;
            *(v140 - 7) = *((_QWORD *)v141 - 7);
            *(v140 - 6) = *((_QWORD *)v141 - 6);
            *(v140 - 5) = *((_QWORD *)v141 - 5);
            *(v140 - 4) = *((_QWORD *)v141 - 4);
            *(v140 - 3) = *((_QWORD *)v141 - 3);
            *(v140 - 2) = *((_QWORD *)v141 - 2);
            *(v140 - 1) = *((_QWORD *)v141 - 1);
          }
          while ( v368 != v140 );
          v140 = v368;
          v141 = v373;
        }
        switch ( v358 )
        {
          case 1:
            goto LABEL_269;
          case 2:
            goto LABEL_268;
          case 3:
            goto LABEL_267;
          case 4:
            goto LABEL_266;
          case 5:
            goto LABEL_265;
          case 6:
            goto LABEL_264;
          case 7:
            v140[6] = *((_QWORD *)v141 + 6);
LABEL_264:
            v140[5] = *((_QWORD *)v141 + 5);
LABEL_265:
            v140[4] = *((_QWORD *)v141 + 4);
LABEL_266:
            v140[3] = *((_QWORD *)v141 + 3);
LABEL_267:
            v140[2] = *((_QWORD *)v141 + 2);
LABEL_268:
            v140[1] = *((_QWORD *)v141 + 1);
LABEL_269:
            *v140 = *(_QWORD *)v141;
            break;
          default:
            break;
        }
      }
      v143 = *((__int64 **)this + 14);
      v144 = s;
      v337 = v345 == 0;
      if ( v143 != s && v345 )
      {
        if ( v360 > 0 )
        {
          v145 = (__int64 *)((char *)v143 + v363);
          do
          {
            v146 = *v144;
            v143 += 8;
            v144 += 8;
            *(v143 - 8) = v146;
            *(v143 - 7) = *(v144 - 7);
            *(v143 - 6) = *(v144 - 6);
            *(v143 - 5) = *(v144 - 5);
            *(v143 - 4) = *(v144 - 4);
            *(v143 - 3) = *(v144 - 3);
            *(v143 - 2) = *(v144 - 2);
            *(v143 - 1) = *(v144 - 1);
          }
          while ( v145 != v143 );
          v144 = (__int64 *)((char *)s + v363);
          v143 = v145;
        }
        switch ( v364 )
        {
          case 1:
            goto LABEL_283;
          case 2:
            goto LABEL_282;
          case 3:
            goto LABEL_281;
          case 4:
            goto LABEL_280;
          case 5:
            goto LABEL_279;
          case 6:
            goto LABEL_278;
          case 7:
            v143[6] = v144[6];
LABEL_278:
            v143[5] = v144[5];
LABEL_279:
            v143[4] = v144[4];
LABEL_280:
            v143[3] = v144[3];
LABEL_281:
            v143[2] = v144[2];
LABEL_282:
            v143[1] = v144[1];
LABEL_283:
            *v143 = *v144;
            break;
          default:
            break;
        }
      }
      v147 = *((double **)this + 16);
      v148 = v354;
      if ( v354 != v147 && v345 )
      {
        if ( v360 > 0 )
        {
          v149 = (double *)((char *)v147 + v363);
          do
          {
            v150 = *(_QWORD *)v148;
            v147 += 8;
            v148 += 8;
            *((_QWORD *)v147 - 8) = v150;
            *(v147 - 7) = *(v148 - 7);
            *(v147 - 6) = *(v148 - 6);
            *(v147 - 5) = *(v148 - 5);
            *(v147 - 4) = *(v148 - 4);
            *(v147 - 3) = *(v148 - 3);
            *(v147 - 2) = *(v148 - 2);
            *(v147 - 1) = *(v148 - 1);
          }
          while ( v149 != v147 );
          v148 = &v354[8 * (unsigned int)((v345 >> 3) - 1) + 8];
          v147 = v149;
        }
        switch ( v364 )
        {
          case 1:
            goto LABEL_297;
          case 2:
            goto LABEL_296;
          case 3:
            goto LABEL_295;
          case 4:
            goto LABEL_294;
          case 5:
            goto LABEL_293;
          case 6:
            goto LABEL_292;
          case 7:
            v147[6] = v148[6];
LABEL_292:
            v147[5] = v148[5];
LABEL_293:
            v147[4] = v148[4];
LABEL_294:
            v147[3] = v148[3];
LABEL_295:
            v147[2] = v148[2];
LABEL_296:
            v147[1] = v148[1];
LABEL_297:
            *v147 = *v148;
            break;
          default:
            break;
        }
      }
      v151 = *((_BYTE **)this + 33);
      if ( v365 && v151 != v361 )
      {
        if ( v370 <= 0 )
        {
          v156 = v361;
        }
        else
        {
          if ( (v361 >= v151 + 16 || v151 >= v361 + 16) && (unsigned int)v370 > 1 )
          {
            v152 = 0;
            v153 = 0;
            do
            {
              ++v153;
              *(__m128i *)&v151[v152] = _mm_loadu_si128((const __m128i *)&v361[v152]);
              v152 += 16;
            }
            while ( v153 < v388 );
            v154 = &v151[v389];
            v155 = &v151[v382];
            if ( v391 != v370 )
            {
              *v154 = *v38;
              v154[1] = v38[1];
              v154[2] = v38[2];
              v154[3] = v38[3];
              v154[4] = v38[4];
              v154[5] = v38[5];
              v154[6] = v38[6];
              v154[7] = v38[7];
            }
          }
          else
          {
            v201 = v361;
            v155 = &v151[v382];
            do
            {
              v202 = *v201;
              v151 += 8;
              v201 += 8;
              *(v151 - 8) = v202;
              *(v151 - 7) = *(v201 - 7);
              *(v151 - 6) = *(v201 - 6);
              *(v151 - 5) = *(v201 - 5);
              *(v151 - 4) = *(v201 - 4);
              *(v151 - 3) = *(v201 - 3);
              *(v151 - 2) = *(v201 - 2);
              *(v151 - 1) = *(v201 - 1);
            }
            while ( v155 != v151 );
          }
          v156 = &v361[v382];
          v151 = v155;
        }
        switch ( v380 )
        {
          case 1:
            goto LABEL_315;
          case 2:
            goto LABEL_314;
          case 3:
            goto LABEL_313;
          case 4:
            goto LABEL_312;
          case 5:
            goto LABEL_311;
          case 6:
            goto LABEL_310;
          case 7:
            v151[6] = v156[6];
LABEL_310:
            v151[5] = v156[5];
LABEL_311:
            v151[4] = v156[4];
LABEL_312:
            v151[3] = v156[3];
LABEL_313:
            v151[2] = v156[2];
LABEL_314:
            v151[1] = v156[1];
LABEL_315:
            *v151 = *v156;
            break;
          default:
            break;
        }
      }
      --v319;
      v327 = -1;
LABEL_202:
      if ( v359 <= ++v319 )
      {
LABEL_203:
        v93 = *((__int64 **)this + 14);
        v95 = v337 || s == v93;
        goto LABEL_204;
      }
      continue;
    }
    break;
  }
  if ( !v369 )
  {
    v90 = v29;
    v91 = (double *)v13;
    if ( v357 > 0 )
    {
      do
      {
        v92 = *v91;
        v90 += 8;
        v91 += 8;
        *(v90 - 8) = v92;
        *(v90 - 7) = *(v91 - 7);
        *(v90 - 6) = *(v91 - 6);
        *(v90 - 5) = *(v91 - 5);
        *(v90 - 4) = *(v91 - 4);
        *(v90 - 3) = *(v91 - 3);
        *(v90 - 2) = *(v91 - 2);
        *(v90 - 1) = *(v91 - 1);
      }
      while ( v90 != v373 );
      v90 = v373;
      v91 = (double *)v368;
    }
    switch ( v358 )
    {
      case 1:
        goto LABEL_135;
      case 2:
        goto LABEL_134;
      case 3:
        goto LABEL_133;
      case 4:
        goto LABEL_132;
      case 5:
        goto LABEL_131;
      case 6:
        goto LABEL_130;
      case 7:
        v90[6] = v91[6];
LABEL_130:
        v90[5] = v91[5];
LABEL_131:
        v90[4] = v91[4];
LABEL_132:
        v90[3] = v91[3];
LABEL_133:
        v90[2] = v91[2];
LABEL_134:
        v90[1] = v91[1];
LABEL_135:
        *v90 = *v91;
        break;
      default:
        break;
    }
  }
  v93 = *((__int64 **)this + 14);
  v94 = s;
  v337 = v345 == 0;
  v95 = v345 == 0 || v93 == s;
  if ( !v95 )
  {
    v96 = *((__int64 **)this + 14);
    if ( v360 > 0 )
    {
      do
      {
        v97 = *v96;
        v94 += 8;
        v96 += 8;
        *(v94 - 8) = v97;
        *(v94 - 7) = *(v96 - 7);
        *(v94 - 6) = *(v96 - 6);
        *(v94 - 5) = *(v96 - 5);
        *(v94 - 4) = *(v96 - 4);
        *(v94 - 3) = *(v96 - 3);
        *(v94 - 2) = *(v96 - 2);
        *(v94 - 1) = *(v96 - 1);
      }
      while ( v94 != v362 );
      v96 = (__int64 *)((char *)v93 + v363);
      v94 = (__int64 *)((char *)s + v363);
    }
    switch ( v364 )
    {
      case 1:
        goto LABEL_147;
      case 2:
        goto LABEL_146;
      case 3:
        goto LABEL_145;
      case 4:
        goto LABEL_144;
      case 5:
        goto LABEL_143;
      case 6:
        goto LABEL_142;
      case 7:
        v94[6] = v96[6];
LABEL_142:
        v94[5] = v96[5];
LABEL_143:
        v94[4] = v96[4];
LABEL_144:
        v94[3] = v96[3];
LABEL_145:
        v94[2] = v96[2];
LABEL_146:
        v94[1] = v96[1];
LABEL_147:
        *v94 = *v96;
        break;
      default:
        break;
    }
  }
  v98 = *((double **)this + 16);
  v99 = v354;
  if ( v354 != v98 && v345 )
  {
    if ( v360 > 0 )
    {
      v100 = *((double **)this + 16);
      do
      {
        v101 = *v100;
        v99 += 8;
        v100 += 8;
        *(v99 - 8) = v101;
        *(v99 - 7) = *(v100 - 7);
        *(v99 - 6) = *(v100 - 6);
        *(v99 - 5) = *(v100 - 5);
        *(v99 - 4) = *(v100 - 4);
        *(v99 - 3) = *(v100 - 3);
        *(v99 - 2) = *(v100 - 2);
        *(v99 - 1) = *(v100 - 1);
      }
      while ( v99 != v372 );
      v98 = (double *)((char *)v98 + v363);
      v99 = &v354[8 * (unsigned int)((v345 >> 3) - 1) + 8];
    }
    switch ( v364 )
    {
      case 1:
        goto LABEL_161;
      case 2:
        goto LABEL_160;
      case 3:
        goto LABEL_159;
      case 4:
        goto LABEL_158;
      case 5:
        goto LABEL_157;
      case 6:
        goto LABEL_156;
      case 7:
        v99[6] = v98[6];
LABEL_156:
        v99[5] = v98[5];
LABEL_157:
        v99[4] = v98[4];
LABEL_158:
        v99[3] = v98[3];
LABEL_159:
        v99[2] = v98[2];
LABEL_160:
        v99[1] = v98[1];
LABEL_161:
        *v99 = *v98;
        break;
      default:
        break;
    }
  }
  v102 = *((_BYTE **)this + 33);
  if ( v102 != v361 && v365 )
  {
    if ( v370 <= 0 )
    {
      v106 = v361;
    }
    else
    {
      if ( (v361 >= v102 + 16 || v102 >= v361 + 16) && (unsigned int)v370 > 1 )
      {
        v103 = 0;
        v104 = 0;
        do
        {
          ++v104;
          *(__m128i *)&v361[v103] = _mm_loadu_si128((const __m128i *)&v102[v103]);
          v103 += 16;
        }
        while ( v104 < v388 );
        v105 = &v102[v389];
        if ( v391 != v370 )
        {
          *v38 = *v105;
          v38[1] = v105[1];
          v38[2] = v105[2];
          v38[3] = v105[3];
          v38[4] = v105[4];
          v38[5] = v105[5];
          v38[6] = v105[6];
          v38[7] = v105[7];
        }
      }
      else
      {
        v176 = v361;
        v177 = *((char **)this + 33);
        do
        {
          v178 = *v177;
          v176 += 8;
          v177 += 8;
          *(v176 - 8) = v178;
          *(v176 - 7) = *(v177 - 7);
          *(v176 - 6) = *(v177 - 6);
          *(v176 - 5) = *(v177 - 5);
          *(v176 - 4) = *(v177 - 4);
          *(v176 - 3) = *(v177 - 3);
          *(v176 - 2) = *(v177 - 2);
          *(v176 - 1) = *(v177 - 1);
        }
        while ( &v361[v382] != v176 );
      }
      v102 += v382;
      v106 = &v361[v382];
    }
    switch ( v380 )
    {
      case 1:
        goto LABEL_179;
      case 2:
        goto LABEL_178;
      case 3:
        goto LABEL_177;
      case 4:
        goto LABEL_176;
      case 5:
        goto LABEL_175;
      case 6:
        goto LABEL_174;
      case 7:
        v106[6] = v102[6];
LABEL_174:
        v106[5] = v102[5];
LABEL_175:
        v106[4] = v102[4];
LABEL_176:
        v106[3] = v102[3];
LABEL_177:
        v106[2] = v102[2];
LABEL_178:
        v106[1] = v102[1];
LABEL_179:
        *v106 = *v102;
        break;
      default:
        break;
    }
  }
  v42.m128d_f64[0] = v434;
  a6.m128d_f64[0] = 0.000001;
  v347 = v434;
  v107 = fabs(v434) * 0.000001;
  if ( v107 > 0.000001 )
    v108 = 0.000001;
  else
    v108 = fmax(0.00000001, v107);
  if ( v108 > v88 && v319 > 3 )
  {
    if ( *(int *)(*((_QWORD *)this + 43) + 104LL) > 1 )
    {
      printf("Exiting on target drop %g\n", v88);
      v93 = *((__int64 **)this + 14);
      v95 = v337 || s == v93;
    }
  }
  else
  {
    ClpModel::scaling(this, 0);
    if ( v356 == 1 )
      CoinMessageHandler::setLogLevel(*((CoinMessageHandler **)this + 43), 0);
    ClpSimplexNonlinear::primalDualCuts(this, v367, 1, 1);
    v109 = *((CoinMessageHandler **)this + 43);
    *((_DWORD *)this + 325) = 1;
    CoinMessageHandler::setLogLevel(v109, v356);
    v110 = *((_DWORD *)this + 80);
    if ( v110 != 1 )
    {
      if ( !v378 )
      {
        if ( v357 <= 0 )
        {
          v114 = v376;
          v115 = (__int64 *)v13;
        }
        else
        {
          v111 = v376;
          v112 = (__int64 *)v13;
          do
          {
            v113 = *v112;
            v111 += 8;
            v112 += 8;
            *(v111 - 8) = v113;
            *(v111 - 7) = *(v112 - 7);
            *(v111 - 6) = *(v112 - 6);
            *(v111 - 5) = *(v112 - 5);
            *(v111 - 4) = *(v112 - 4);
            *(v111 - 3) = *(v112 - 3);
            *(v111 - 2) = *(v112 - 2);
            *(v111 - 1) = *(v112 - 1);
          }
          while ( v111 != v377 );
          v114 = v377;
          v115 = v368;
        }
        switch ( v358 )
        {
          case 1:
            goto LABEL_199;
          case 2:
            goto LABEL_198;
          case 3:
            goto LABEL_197;
          case 4:
            goto LABEL_196;
          case 5:
            goto LABEL_195;
          case 6:
            goto LABEL_194;
          case 7:
            v114[6] = v115[6];
LABEL_194:
            v114[5] = v115[5];
LABEL_195:
            v114[4] = v115[4];
LABEL_196:
            v114[3] = v115[3];
LABEL_197:
            v114[2] = v115[2];
LABEL_198:
            v114[1] = v115[1];
LABEL_199:
            *v114 = *v115;
            break;
          default:
            break;
        }
      }
      if ( v110 != 3 )
      {
        v327 = 1;
        goto LABEL_202;
      }
      goto LABEL_203;
    }
    if ( !v378 )
    {
      if ( v357 <= 0 )
      {
        v273 = (_QWORD *)v13;
        v272 = v376;
      }
      else
      {
        v268 = v376;
        v269 = v13;
        do
        {
          v270 = *v268;
          v268 += 8;
          v269 += 64LL;
          *(_QWORD *)(v269 - 64) = v270;
          *(_QWORD *)(v269 - 56) = *(v268 - 7);
          *(_QWORD *)(v269 - 48) = *(v268 - 6);
          *(_QWORD *)(v269 - 40) = *(v268 - 5);
          *(_QWORD *)(v269 - 32) = *(v268 - 4);
          *(_QWORD *)(v269 - 24) = *(v268 - 3);
          *(_QWORD *)(v269 - 16) = *(v268 - 2);
          *(_QWORD *)(v269 - 8) = *(v268 - 1);
        }
        while ( v268 != v377 );
        v271 = (v427 + 1LL) << 6;
        v272 = (__int64 *)((char *)v376 + v271);
        v273 = (_QWORD *)(v13 + v271);
      }
      switch ( v358 )
      {
        case 1:
          goto LABEL_524;
        case 2:
          goto LABEL_523;
        case 3:
          goto LABEL_522;
        case 4:
          goto LABEL_521;
        case 5:
          goto LABEL_520;
        case 6:
          goto LABEL_519;
        case 7:
          v273[6] = v272[6];
LABEL_519:
          v273[5] = v272[5];
LABEL_520:
          v273[4] = v272[4];
LABEL_521:
          v273[3] = v272[3];
LABEL_522:
          v273[2] = v272[2];
LABEL_523:
          v273[1] = v272[1];
LABEL_524:
          *v273 = *v272;
          break;
        default:
          break;
      }
    }
    if ( !v369 )
    {
      if ( v357 <= 0 )
      {
        v279 = v29;
        v278 = (double *)v13;
      }
      else
      {
        v274 = v29;
        v275 = (double *)v13;
        do
        {
          v276 = *v275;
          v274 += 8;
          v275 += 8;
          *(v274 - 8) = v276;
          *(v274 - 7) = *(v275 - 7);
          *(v274 - 6) = *(v275 - 6);
          *(v274 - 5) = *(v275 - 5);
          *(v274 - 4) = *(v275 - 4);
          *(v274 - 3) = *(v275 - 3);
          *(v274 - 2) = *(v275 - 2);
          *(v274 - 1) = *(v275 - 1);
        }
        while ( v373 != v274 );
        v277 = (v427 + 1LL) << 6;
        v278 = (double *)(v13 + v277);
        v279 = (double *)((char *)v29 + v277);
      }
      switch ( v358 )
      {
        case 1:
          goto LABEL_537;
        case 2:
          goto LABEL_536;
        case 3:
          goto LABEL_535;
        case 4:
          goto LABEL_534;
        case 5:
          goto LABEL_533;
        case 6:
          goto LABEL_532;
        case 7:
          v279[6] = v278[6];
LABEL_532:
          v279[5] = v278[5];
LABEL_533:
          v279[4] = v278[4];
LABEL_534:
          v279[3] = v278[3];
LABEL_535:
          v279[2] = v278[2];
LABEL_536:
          v279[1] = v278[1];
LABEL_537:
          *v279 = *v278;
          break;
        default:
          break;
      }
    }
    memset(*((void **)this + 14), 0, 8LL * *((int *)this + 26));
    ClpModel::times(this, 1.0, (const double *)v13, *((double **)this + 14));
    v93 = *((__int64 **)this + 14);
    v280 = s;
    v95 = v337 || v93 == s;
    if ( !v95 )
    {
      v281 = *((__int64 **)this + 14);
      if ( v360 > 0 )
      {
        do
        {
          v282 = *v281;
          v280 += 8;
          v281 += 8;
          *(v280 - 8) = v282;
          *(v280 - 7) = *(v281 - 7);
          *(v280 - 6) = *(v281 - 6);
          *(v280 - 5) = *(v281 - 5);
          *(v280 - 4) = *(v281 - 4);
          *(v280 - 3) = *(v281 - 3);
          *(v280 - 2) = *(v281 - 2);
          *(v280 - 1) = *(v281 - 1);
        }
        while ( v280 != v362 );
        v283 = (v426 + 1LL) << 6;
        v281 = (__int64 *)((char *)v93 + v283);
        v280 = (__int64 *)((char *)s + v283);
      }
      switch ( v364 )
      {
        case 1:
          goto LABEL_549;
        case 2:
          goto LABEL_548;
        case 3:
          goto LABEL_547;
        case 4:
          goto LABEL_546;
        case 5:
          goto LABEL_545;
        case 6:
          goto LABEL_544;
        case 7:
          v280[6] = v281[6];
LABEL_544:
          v280[5] = v281[5];
LABEL_545:
          v280[4] = v281[4];
LABEL_546:
          v280[3] = v281[3];
LABEL_547:
          v280[2] = v281[2];
LABEL_548:
          v280[1] = v281[1];
LABEL_549:
          *v280 = *v281;
          break;
        default:
          break;
      }
    }
    v284 = *((double **)this + 16);
    v285 = v354;
    if ( v354 != v284 && v345 )
    {
      if ( v360 <= 0 )
      {
        v289 = v354;
      }
      else
      {
        v286 = *((_QWORD **)this + 16);
        do
        {
          v287 = *(_QWORD *)v285;
          v286 += 8;
          v285 += 8;
          *(v286 - 8) = v287;
          *(v286 - 7) = *((_QWORD *)v285 - 7);
          *(v286 - 6) = *((_QWORD *)v285 - 6);
          *(v286 - 5) = *((_QWORD *)v285 - 5);
          *(v286 - 4) = *((_QWORD *)v285 - 4);
          *(v286 - 3) = *((_QWORD *)v285 - 3);
          *(v286 - 2) = *((_QWORD *)v285 - 2);
          *(v286 - 1) = *((_QWORD *)v285 - 1);
        }
        while ( (_QWORD *)((char *)v284 + v363) != v286 );
        v288 = (v426 + 1LL) << 6;
        v289 = (double *)((char *)v354 + v288);
        v284 = (double *)((char *)v284 + v288);
      }
      switch ( v364 )
      {
        case 1:
          goto LABEL_563;
        case 2:
          goto LABEL_562;
        case 3:
          goto LABEL_561;
        case 4:
          goto LABEL_560;
        case 5:
          goto LABEL_559;
        case 6:
          goto LABEL_558;
        case 7:
          v284[6] = v289[6];
LABEL_558:
          v284[5] = v289[5];
LABEL_559:
          v284[4] = v289[4];
LABEL_560:
          v284[3] = v289[3];
LABEL_561:
          v284[2] = v289[2];
LABEL_562:
          v284[1] = v289[1];
LABEL_563:
          *v284 = *v289;
          break;
        default:
          break;
      }
    }
    v290 = *((_BYTE **)this + 33);
    if ( v290 != v361 && v365 )
    {
      if ( v370 <= 0 )
      {
        v295 = v361;
      }
      else
      {
        if ( (v361 >= v290 + 16 || v290 >= v361 + 16) && (unsigned int)v370 > 1 )
        {
          v291 = 0;
          v292 = 0;
          do
          {
            ++v292;
            *(__m128i *)&v290[v291] = _mm_loadu_si128((const __m128i *)&v361[v291]);
            v291 += 16;
          }
          while ( v292 < v388 );
          v293 = &v290[v389];
          if ( v391 != v370 )
          {
            *v293 = *v38;
            v293[1] = v38[1];
            v293[2] = v38[2];
            v293[3] = v38[3];
            v293[4] = v38[4];
            v293[5] = v38[5];
            v293[6] = v38[6];
            v293[7] = v38[7];
          }
        }
        else
        {
          v311 = v361;
          v312 = *((_BYTE **)this + 33);
          do
          {
            v313 = *v311;
            v312 += 8;
            v311 += 8;
            *(v312 - 8) = v313;
            *(v312 - 7) = *(v311 - 7);
            *(v312 - 6) = *(v311 - 6);
            *(v312 - 5) = *(v311 - 5);
            *(v312 - 4) = *(v311 - 4);
            *(v312 - 3) = *(v311 - 3);
            *(v312 - 2) = *(v311 - 2);
            *(v312 - 1) = *(v311 - 1);
          }
          while ( &v290[v382] != v312 );
        }
        v294 = 8LL * ((v365 >> 3) - 1) + 8;
        v295 = &v361[v294];
        v290 += v294;
      }
      switch ( v380 )
      {
        case 1:
          goto LABEL_581;
        case 2:
          goto LABEL_580;
        case 3:
          goto LABEL_579;
        case 4:
          goto LABEL_578;
        case 5:
          goto LABEL_577;
        case 6:
          goto LABEL_576;
        case 7:
          v290[6] = v295[6];
LABEL_576:
          v290[5] = v295[5];
LABEL_577:
          v290[4] = v295[4];
LABEL_578:
          v290[3] = v295[3];
LABEL_579:
          v290[2] = v295[2];
LABEL_580:
          v290[1] = v295[1];
LABEL_581:
          *v290 = *v295;
          break;
        default:
          break;
      }
      v93 = *((__int64 **)this + 14);
      v95 = v337 || s == v93;
    }
    if ( v344 )
    {
      v296 = nullptr;
      do
      {
        while ( 1 )
        {
          v297 = 8LL * v15[(_QWORD)v296];
          v298 = (double *)(v13 + v297);
          *(double *)(v322 + v297) = fmax(
                                       *(double *)(v13 + v297) - *(double *)(v21 + 8LL * (_QWORD)v296),
                                       v324[(_QWORD)v296]);
          v299 = (double *)(v323 + v297);
          v300 = v325[(_QWORD)v296];
          v301 = *(double *)(v21 + 8LL * (_QWORD)v296) + *v298;
          if ( v300 > v301 )
            break;
          ++v296;
          *v299 = v300;
          if ( v296 == v371 )
            goto LABEL_204;
        }
        ++v296;
        *v299 = v301;
      }
      while ( v296 != v371 );
    }
  }
LABEL_204:
  if ( !v369 )
  {
    if ( v355 >> 3 <= 0 )
    {
      v122 = (_QWORD *)v13;
      v121 = v29;
    }
    else
    {
      v116 = v13;
      v117 = v29;
      v118 = (unsigned int)((v355 >> 3) - 1);
      do
      {
        v119 = *(_QWORD *)v117;
        v116 += 64LL;
        v117 += 8;
        *(_QWORD *)(v116 - 64) = v119;
        *(double *)(v116 - 56) = *(v117 - 7);
        *(double *)(v116 - 48) = *(v117 - 6);
        *(double *)(v116 - 40) = *(v117 - 5);
        *(double *)(v116 - 32) = *(v117 - 4);
        *(double *)(v116 - 24) = *(v117 - 3);
        *(double *)(v116 - 16) = *(v117 - 2);
        *(double *)(v116 - 8) = *(v117 - 1);
      }
      while ( v13 + ((v118 + 1) << 6) != v116 );
      v120 = ((int)v118 + 1LL) << 6;
      v121 = (double *)((char *)v29 + v120);
      v122 = (_QWORD *)(v13 + v120);
    }
    switch ( v355 % 8 )
    {
      case 1:
        goto LABEL_374;
      case 2:
        goto LABEL_373;
      case 3:
        goto LABEL_372;
      case 4:
        goto LABEL_371;
      case 5:
        goto LABEL_370;
      case 6:
        goto LABEL_369;
      case 7:
        v122[6] = *((_QWORD *)v121 + 6);
LABEL_369:
        v122[5] = *((_QWORD *)v121 + 5);
LABEL_370:
        v122[4] = *((_QWORD *)v121 + 4);
LABEL_371:
        v122[3] = *((_QWORD *)v121 + 3);
LABEL_372:
        v122[2] = *((_QWORD *)v121 + 2);
LABEL_373:
        v122[1] = *((_QWORD *)v121 + 1);
LABEL_374:
        *v122 = *(_QWORD *)v121;
        break;
      default:
        break;
    }
  }
  if ( !v95 )
  {
    if ( v345 >> 3 <= 0 )
    {
      v184 = s;
    }
    else
    {
      v180 = s;
      v181 = v93;
      do
      {
        v182 = *v180;
        v181 += 8;
        v180 += 8;
        *(v181 - 8) = v182;
        *(v181 - 7) = *(v180 - 7);
        *(v181 - 6) = *(v180 - 6);
        *(v181 - 5) = *(v180 - 5);
        *(v181 - 4) = *(v180 - 4);
        *(v181 - 3) = *(v180 - 3);
        *(v181 - 2) = *(v180 - 2);
        *(v181 - 1) = *(v180 - 1);
      }
      while ( &v93[8 * (unsigned int)((v345 >> 3) - 1) + 8] != v181 );
      v183 = ((v345 >> 3) - 1 + 1LL) << 6;
      v184 = (__int64 *)((char *)s + v183);
      v93 = (__int64 *)((char *)v93 + v183);
    }
    switch ( v345 % 8 )
    {
      case 1:
        goto LABEL_387;
      case 2:
        goto LABEL_386;
      case 3:
        goto LABEL_385;
      case 4:
        goto LABEL_384;
      case 5:
        goto LABEL_383;
      case 6:
        goto LABEL_382;
      case 7:
        v93[6] = v184[6];
LABEL_382:
        v93[5] = v184[5];
LABEL_383:
        v93[4] = v184[4];
LABEL_384:
        v93[3] = v184[3];
LABEL_385:
        v93[2] = v184[2];
LABEL_386:
        v93[1] = v184[1];
LABEL_387:
        *v93 = *v184;
        break;
      default:
        break;
    }
  }
  if ( v344 )
  {
    v185 = nullptr;
    do
    {
      while ( 1 )
      {
        v186 = 8LL * v15[(_QWORD)v185];
        v187 = (double *)(v13 + v186);
        *(double *)(v322 + v186) = fmax(*(double *)(v13 + v186), v324[(_QWORD)v185]);
        v188 = (double *)(v323 + v186);
        v189 = v325[(_QWORD)v185];
        if ( v189 > *v187 )
          break;
        ++v185;
        *v188 = v189;
        if ( v185 == v371 )
          goto LABEL_392;
      }
      ++v185;
      *v188 = *v187;
    }
    while ( v371 != v185 );
  }
LABEL_392:
  operator delete[](v374);
  operator delete[](v417);
  operator delete[](v354);
  operator delete[](v361);
  v190 = (__int64 *)(**(__int64 (__fastcall ***)(ClpObjective *, ClpSimplexNonlinear *, unsigned __int64, double *, __int64, __int64))v326)(
                      v326,
                      this,
                      v13,
                      &v433,
                      1,
                      2);
  v191 = v353;
  if ( v353 != v190 && v355 )
  {
    if ( v355 >> 3 > 0 )
    {
      v192 = v190;
      do
      {
        v193 = *v192;
        v192 += 8;
        v191 += 8;
        *(v191 - 8) = v193;
        *(v191 - 7) = *(v192 - 7);
        *(v191 - 6) = *(v192 - 6);
        *(v191 - 5) = *(v192 - 5);
        *(v191 - 4) = *(v192 - 4);
        *(v191 - 3) = *(v192 - 3);
        *(v191 - 2) = *(v192 - 2);
        *(v191 - 1) = *(v192 - 1);
      }
      while ( &v190[8 * (unsigned int)((v355 >> 3) - 1) + 8] != v192 );
      v194 = ((v355 >> 3) - 1 + 1LL) << 6;
      v353 = (__int64 *)((char *)v353 + v194);
      v190 = (__int64 *)((char *)v190 + v194);
    }
    switch ( v355 % 8 )
    {
      case 1:
        goto LABEL_405;
      case 2:
        goto LABEL_404;
      case 3:
        goto LABEL_403;
      case 4:
        goto LABEL_402;
      case 5:
        goto LABEL_401;
      case 6:
        goto LABEL_400;
      case 7:
        v353[6] = v190[6];
LABEL_400:
        v353[5] = v190[5];
LABEL_401:
        v353[4] = v190[4];
LABEL_402:
        v353[3] = v190[3];
LABEL_403:
        v353[2] = v190[2];
LABEL_404:
        v353[1] = v190[1];
LABEL_405:
        *v353 = *v190;
        break;
      default:
        break;
    }
  }
  ClpSimplexNonlinear::primalDualCuts(this, v367, 1, 1);
  v195 = *((_QWORD *)this + 20);
  if ( v195 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v195 + 80LL))(v195);
  if ( v367 )
    operator delete[](v367);
  *((_QWORD *)this + 20) = v326;
  ClpModel::setDblParam(this, 4);
  *((double *)this + 9) = v386 * v433 + *((double *)this + 9);
  if ( v344 )
  {
    v196 = nullptr;
    do
    {
      v197 = v15[(_QWORD)v196];
      *(double *)(v322 + 8 * v197) = v324[(_QWORD)v196];
      v198 = v325[(_QWORD)v196++];
      *(double *)(v323 + 8 * v197) = v198;
    }
    while ( v196 != v371 );
  }
  v199 = 0;
  operator delete[](v29);
  operator delete[](v376);
  operator delete[](s);
  do
  {
    v200 = *((void **)&v442 + v199);
    if ( v200 )
      operator delete[](v200);
    ++v199;
  }
  while ( v199 != 3 );
  operator delete[]((void *)v21);
  operator delete[](v325);
  operator delete[](v324);
  operator delete[](v15);
  operator delete[]((void *)v343);
  return (unsigned int)v379;
}

