__int64 __fastcall ClpSimplexNonlinear::primalSLP(
        ClpSimplexNonlinear *this,
        int a2,
        ClpConstraint **a3,
        int a4,
        __m128i a5,
        __m128i a6)
{
  __int64 v7; // rdi
  const CoinPackedMatrix *v8; // r15
  __int64 (*v9)(void); // rax
  int v10; // r14d
  int v11; // r15d
  unsigned int v12; // r13d
  ClpConstraint **v13; // rax
  int v14; // r12d
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  ClpLinearObjective *v18; // r12
  __int64 v19; // rdi
  int v20; // eax
  int *v21; // r12
  int *v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  double *v25; // rcx
  __int64 v26; // r11
  __int64 v27; // r10
  ClpConstraint **v28; // rax
  int v29; // esi
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // rdi
  __int64 v33; // r9
  int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // edi
  const double *v38; // r8
  unsigned __int64 v39; // rax
  void *v40; // r15
  __int64 v41; // rdx
  ClpConstraint **v42; // rcx
  ClpConstraint **v43; // r13
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // r9
  __int64 v49; // rax
  unsigned int v50; // r8d
  int v51; // edi
  unsigned int v52; // edi
  __m128i *v53; // rdx
  __m128i si128; // xmm5
  unsigned int v55; // eax
  __m128i v56; // xmm4
  __m128i v57; // xmm3
  __m128i v58; // xmm2
  __m128i v59; // xmm2
  int v60; // eax
  __int64 v61; // rdi
  __int64 (__fastcall *v62)(ClpPackedMatrix *); // rax
  const CoinPackedMatrix *v63; // rax
  int v64; // r14d
  int *v65; // r13
  int *v66; // r12
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  int v69; // eax
  int v70; // r14d
  __int64 v71; // rax
  __int64 v72; // r14
  int v73; // ecx
  __int64 v74; // rsi
  double v75; // xmm0_8
  _BOOL4 v76; // eax
  int v77; // edx
  int v78; // eax
  __int64 v79; // rsi
  int v80; // r10d
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // r9
  int *v84; // r8
  double *v85; // rsi
  double v86; // xmm0_8
  int v87; // ecx
  int v88; // edx
  int v89; // eax
  __int64 *v90; // r14
  unsigned __int64 v91; // r13
  __int64 v92; // r10
  __int64 v93; // rdx
  double v94; // xmm2_8
  __int64 v95; // rax
  double *v96; // rcx
  double *v97; // r13
  double *v98; // rax
  int v99; // edi
  __int64 v100; // rdx
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // r9
  int *v105; // r8
  __int64 v106; // rdi
  double *v107; // rsi
  double v108; // xmm0_8
  int v109; // ecx
  int v110; // edx
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rcx
  int v115; // r9d
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // r9
  int *v120; // r8
  __int64 v121; // rdi
  double *v122; // rsi
  double v123; // xmm0_8
  int v124; // ecx
  int v125; // edx
  unsigned __int64 v126; // r15
  __int64 v127; // r15
  __int64 v128; // r13
  void *v129; // rax
  unsigned __int64 v130; // rax
  char *v131; // r15
  __int64 v132; // rax
  _BOOL4 v133; // esi
  __int64 v134; // r13
  double v135; // xmm0_8
  double *v136; // r10
  double v137; // xmm1_8
  double *v138; // rcx
  double v139; // xmm0_8
  double *v140; // rax
  double v141; // xmm0_8
  double v142; // xmm0_8
  double v143; // xmm2_8
  __int64 v144; // rsi
  __int64 v145; // rax
  double *v146; // rdx
  double v147; // xmm3_8
  void (*v148)(void); // rax
  int v149; // r12d
  __int64 *v150; // rax
  unsigned __int64 v151; // rdx
  __int64 *v152; // rcx
  __int64 v153; // xmm0_8
  __int64 v154; // rdx
  _QWORD *v155; // rdx
  ClpConstraint **v156; // r13
  ClpConstraint *v157; // r12
  int v158; // eax
  __int64 v159; // rdx
  __int64 v160; // rdi
  int v161; // eax
  __int64 v162; // rcx
  __int64 v163; // rdi
  __int64 v164; // rsi
  __int64 v165; // rax
  char *v166; // rdx
  double v167; // xmm0_8
  double v168; // xmm0_8
  CoinPackedMatrix *v169; // r13
  ClpPackedMatrix *v170; // r12
  int v171; // edx
  double v172; // xmm2_8
  double *v173; // rax
  int v174; // esi
  unsigned __int64 v175; // rdx
  double v176; // xmm0_8
  void (*v177)(void); // rax
  double v178; // xmm4_8
  ClpConstraint **v179; // r13
  double v180; // xmm3_8
  double *v181; // r12
  double v182; // xmm0_8
  double v183; // xmm2_8
  double v184; // xmm1_8
  double *v185; // rax
  double v186; // xmm1_8
  double v187; // xmm6_8
  double *v188; // rcx
  double *v189; // rsi
  double *v190; // rdx
  double v191; // xmm3_8
  double v192; // xmm1_8
  double v193; // xmm4_8
  double v194; // xmm3_8
  double v195; // xmm1_8
  double v196; // xmm3_8
  double v197; // xmm1_8
  double v198; // xmm7_8
  double v199; // xmm3_8
  double v200; // xmm1_8
  double v201; // xmm7_8
  double v202; // xmm5_8
  double v203; // xmm6_8
  double v204; // xmm0_8
  double v205; // xmm4_8
  double *v206; // rdx
  double *v207; // rcx
  double *v208; // rax
  double v209; // xmm2_8
  double v210; // xmm1_8
  double v211; // xmm2_8
  double v212; // xmm3_8
  double v213; // xmm1_8
  double v214; // xmm3_8
  double v215; // xmm0_8
  double v216; // xmm3_8
  double v217; // xmm6_8
  double v218; // xmm0_8
  double v219; // xmm3_8
  double v220; // xmm3_8
  double v221; // xmm6_8
  double v222; // xmm1_8
  double v223; // xmm2_8
  unsigned __int64 v224; // rdx
  std::ostream *v225; // r12
  __int64 v226; // rax
  __int64 v227; // r13
  char v228; // si
  std::ostream *v229; // rax
  __int64 v230; // r13
  int v231; // ecx
  __int64 v232; // rax
  unsigned __int64 v233; // rax
  double v234; // xmm0_8
  __int64 v235; // rax
  double v236; // xmm0_8
  __int64 v237; // r12
  double v238; // xmm0_8
  int v239; // edx
  int v240; // eax
  double v241; // xmm0_8
  unsigned int v242; // ecx
  __m128d v243; // xmm1
  __m128d v244; // xmm0
  signed int v245; // edx
  __int64 v246; // rcx
  double *v247; // rax
  double v248; // xmm0_8
  double *v249; // rcx
  double *v250; // rax
  double v251; // xmm0_8
  unsigned __int64 v252; // kr08_8
  unsigned __int8 *v253; // rcx
  __int64 v254; // rax
  unsigned __int8 *v255; // rax
  _BYTE *v256; // rax
  double *v257; // r12
  __int64 (__fastcall *v258)(ClpPackedMatrix *); // rax
  CoinPackedMatrix *v259; // rdi
  int v260; // edi
  double *v261; // r12
  int v262; // ecx
  unsigned __int64 v263; // rax
  unsigned int v264; // r9d
  int v265; // r8d
  __int64 v266; // rdx
  unsigned int v267; // esi
  unsigned __int64 v268; // r10
  double *v269; // rdx
  __int64 v270; // rax
  signed int v271; // ecx
  __int64 v272; // rdx
  int v273; // ecx
  __int64 v274; // r13
  double v275; // xmm2_8
  double v276; // xmm0_8
  __int64 v277; // rax
  double v278; // xmm0_8
  int v279; // esi
  double v280; // xmm2_8
  double v281; // xmm0_8
  double v282; // xmm0_8
  std::ostream *v283; // r12
  __int64 v284; // rax
  __int64 v285; // r13
  char v286; // si
  std::ostream *v287; // rax
  __int64 i; // r13
  void *v289; // rdi
  __int64 v290; // rax
  __int64 v291; // rdx
  double v292; // xmm0_8
  __int64 *v293; // rax
  __int64 *v294; // rdx
  __int64 v295; // rcx
  __int64 v296; // xmm0_8
  __int64 v297; // rax
  __int64 *v298; // rdx
  int v299; // eax
  char *v300; // r12
  __int64 v301; // rsi
  __int64 v302; // rcx
  unsigned __int64 v303; // rax
  double v304; // xmm0_8
  double v305; // xmm1_8
  std::ostream *v306; // r12
  __int64 v307; // rax
  __int64 v308; // r13
  char v309; // si
  std::ostream *v310; // rax
  __int64 *v311; // rax
  __int64 *v312; // rdx
  __int64 v313; // xmm0_8
  int v314; // edi
  __int64 (__fastcall *v315)(__int64, unsigned int); // rax
  __int64 (__fastcall *v316)(__int64, unsigned int); // rax
  __int64 (__fastcall *v317)(__int64, unsigned int); // rax
  __int64 *v318; // rax
  _QWORD *v319; // rcx
  __int64 *v320; // rdx
  __int64 v321; // xmm0_8
  __int64 v322; // rcx
  int v323; // edi
  int v324; // esi
  __int64 v325; // rax
  unsigned int v326; // edx
  __int128 v327; // xmm0
  int v328; // eax
  __int64 v329; // rdx
  int v330; // eax
  unsigned __int64 v331; // rax
  __int64 *v332; // rax
  __int64 *v333; // rdx
  __int64 v334; // xmm0_8
  char *v335; // rax
  __int64 *v336; // rdx
  char *v337; // rcx
  __int64 v338; // xmm0_8
  _BYTE *v339; // rax
  __int64 v340; // rdx
  unsigned int v341; // ecx
  unsigned __int8 *v342; // rdx
  _BYTE *v343; // rcx
  _BYTE *v344; // rdx
  double *v345; // rax
  double v346; // xmm0_8
  double *v347; // rax
  double v348; // xmm0_8
  char *v349; // rax
  char v350; // si
  int v351; // r8d
  __int64 *v352; // rsi
  __int64 *v353; // rdi
  __int64 *v354; // rax
  __int64 *v355; // rdx
  __int64 v356; // rcx
  __int64 v357; // xmm0_8
  __int64 v358; // rdx
  __int64 *v359; // rdx
  unsigned __int64 v360; // rax
  int v361; // edi
  __int64 v362; // rdx
  int v363; // esi
  int v364; // r8d
  double *v365; // r10
  unsigned int v366; // ecx
  unsigned int v367; // r9d
  __int64 v368; // rdx
  unsigned int v369; // r9d
  __int128 v370; // xmm0
  unsigned int v371; // edx
  double *v372; // rcx
  int v373; // edx
  int v374; // esi
  int v375; // eax
  __int64 v376; // rdx
  unsigned int v377; // r9d
  unsigned int v378; // edi
  __int64 v379; // rdx
  double *v380; // r10
  double *v381; // rdx
  __int64 v382; // rcx
  __m128d v383; // xmm0
  __m128d v384; // xmm1
  __m128d v385; // xmm0
  signed int v386; // eax
  __int64 v387; // rdx
  int v388; // eax
  __int64 v389; // rax
  __int64 v390; // rax
  __int64 v391; // r12
  char v392; // al
  std::ostream *v393; // rax
  void *v394; // rdi
  double v395; // xmm0_8
  double *v396; // rax
  _QWORD *v397; // rax
  __int64 v398; // rcx
  _QWORD *v399; // rcx
  char *v400; // rdx
  char v401; // si
  double *v402; // rax
  double *v403; // rdx
  __int64 v404; // rcx
  __int64 (__fastcall *v405)(__int64, unsigned int); // rdx
  int v406; // [rsp+8h] [rbp-AB8h]
  unsigned int v407; // [rsp+Ch] [rbp-AB4h]
  unsigned int v408; // [rsp+10h] [rbp-AB0h]
  unsigned int v409; // [rsp+14h] [rbp-AACh]
  double *v410; // [rsp+18h] [rbp-AA8h]
  unsigned int v411; // [rsp+28h] [rbp-A98h]
  unsigned __int64 v412; // [rsp+30h] [rbp-A90h]
  __int64 v413; // [rsp+40h] [rbp-A80h]
  __int64 v414; // [rsp+48h] [rbp-A78h]
  unsigned int v415; // [rsp+58h] [rbp-A68h]
  unsigned int v416; // [rsp+5Ch] [rbp-A64h]
  __int64 v417; // [rsp+60h] [rbp-A60h]
  int v418; // [rsp+68h] [rbp-A58h]
  unsigned int v419; // [rsp+6Ch] [rbp-A54h]
  __int64 v420; // [rsp+70h] [rbp-A50h]
  __int64 v421; // [rsp+78h] [rbp-A48h]
  int v422; // [rsp+84h] [rbp-A3Ch]
  unsigned int v423; // [rsp+90h] [rbp-A30h]
  int v424; // [rsp+94h] [rbp-A2Ch]
  __int64 v425; // [rsp+98h] [rbp-A28h]
  unsigned int v426; // [rsp+A8h] [rbp-A18h]
  int v427; // [rsp+ACh] [rbp-A14h]
  char v428; // [rsp+C3h] [rbp-9FDh]
  int v429; // [rsp+C4h] [rbp-9FCh]
  __int64 n; // [rsp+C8h] [rbp-9F8h]
  char *v431; // [rsp+D0h] [rbp-9F0h]
  double v432; // [rsp+D8h] [rbp-9E8h]
  double v433; // [rsp+E0h] [rbp-9E0h]
  _BYTE *v434; // [rsp+E8h] [rbp-9D8h]
  int v435; // [rsp+F8h] [rbp-9C8h]
  int v437; // [rsp+100h] [rbp-9C0h]
  int v438; // [rsp+104h] [rbp-9BCh]
  __int64 *v439; // [rsp+108h] [rbp-9B8h]
  double v440; // [rsp+110h] [rbp-9B0h]
  unsigned __int8 *v441; // [rsp+118h] [rbp-9A8h]
  _BYTE v442[24]; // [rsp+120h] [rbp-9A0h]
  double v443; // [rsp+140h] [rbp-980h]
  __int64 v444; // [rsp+140h] [rbp-980h]
  double v445; // [rsp+148h] [rbp-978h]
  double v446; // [rsp+150h] [rbp-970h]
  double v447; // [rsp+158h] [rbp-968h]
  bool v448; // [rsp+161h] [rbp-95Fh]
  bool v449; // [rsp+162h] [rbp-95Eh]
  bool v450; // [rsp+163h] [rbp-95Dh]
  int v451; // [rsp+164h] [rbp-95Ch]
  bool v452; // [rsp+16Bh] [rbp-955h]
  __int64 v454; // [rsp+178h] [rbp-948h]
  __int64 v455; // [rsp+180h] [rbp-940h]
  __int64 v456; // [rsp+188h] [rbp-938h]
  unsigned __int64 v457; // [rsp+190h] [rbp-930h]
  double v458; // [rsp+198h] [rbp-928h]
  int *v459; // [rsp+1A0h] [rbp-920h]
  double v461; // [rsp+1B0h] [rbp-910h]
  __int64 v462; // [rsp+1B0h] [rbp-910h]
  double v463; // [rsp+1B8h] [rbp-908h]
  __int64 *v464; // [rsp+1C0h] [rbp-900h]
  __int64 v465; // [rsp+1C8h] [rbp-8F8h]
  double v466; // [rsp+1C8h] [rbp-8F8h]
  double v467; // [rsp+1C8h] [rbp-8F8h]
  __int64 v468; // [rsp+1D0h] [rbp-8F0h]
  double v469; // [rsp+1D0h] [rbp-8F0h]
  double *v470; // [rsp+1E8h] [rbp-8D8h]
  int v471; // [rsp+1F0h] [rbp-8D0h]
  int v472; // [rsp+1F4h] [rbp-8CCh]
  __int64 v473; // [rsp+1F8h] [rbp-8C8h]
  double v474; // [rsp+200h] [rbp-8C0h]
  double v475; // [rsp+200h] [rbp-8C0h]
  ClpConstraint *v476; // [rsp+208h] [rbp-8B8h]
  ClpConstraint **v477; // [rsp+208h] [rbp-8B8h]
  __int64 v478; // [rsp+210h] [rbp-8B0h]
  int v479; // [rsp+210h] [rbp-8B0h]
  double v480; // [rsp+210h] [rbp-8B0h]
  __int64 v481; // [rsp+218h] [rbp-8A8h]
  __int64 v482; // [rsp+218h] [rbp-8A8h]
  int v483; // [rsp+218h] [rbp-8A8h]
  double v484; // [rsp+218h] [rbp-8A8h]
  double v485; // [rsp+218h] [rbp-8A8h]
  double *v486; // [rsp+220h] [rbp-8A0h]
  double *v487; // [rsp+220h] [rbp-8A0h]
  int *v488; // [rsp+228h] [rbp-898h]
  double *v489; // [rsp+228h] [rbp-898h]
  double *v490; // [rsp+230h] [rbp-890h]
  double *v491; // [rsp+230h] [rbp-890h]
  double *v492; // [rsp+238h] [rbp-888h]
  int *v493; // [rsp+238h] [rbp-888h]
  double *v494; // [rsp+238h] [rbp-888h]
  _DWORD *s; // [rsp+240h] [rbp-880h]
  double *sa; // [rsp+240h] [rbp-880h]
  int *sb; // [rsp+240h] [rbp-880h]
  double *sc; // [rsp+240h] [rbp-880h]
  double sd; // [rsp+240h] [rbp-880h]
  ClpConstraint **v500; // [rsp+248h] [rbp-878h]
  unsigned __int64 v501; // [rsp+248h] [rbp-878h]
  void *v502; // [rsp+248h] [rbp-878h]
  int v503; // [rsp+248h] [rbp-878h]
  int v504; // [rsp+248h] [rbp-878h]
  double v505; // [rsp+248h] [rbp-878h]
  double v506; // [rsp+248h] [rbp-878h]
  double v507; // [rsp+248h] [rbp-878h]
  void *v508; // [rsp+248h] [rbp-878h]
  void *v509; // [rsp+248h] [rbp-878h]
  double v510; // [rsp+250h] [rbp-870h] BYREF
  char v511[8]; // [rsp+258h] [rbp-868h] BYREF
  __int64 v512; // [rsp+260h] [rbp-860h]
  __int64 v513; // [rsp+268h] [rbp-858h]
  __int64 v514; // [rsp+270h] [rbp-850h]
  _BYTE v515[32]; // [rsp+280h] [rbp-840h] BYREF
  __int64 v516; // [rsp+2A0h] [rbp-820h]
  __int64 v517; // [rsp+2A8h] [rbp-818h]
  int *v518; // [rsp+2B0h] [rbp-810h]
  _DWORD *v519; // [rsp+2B8h] [rbp-808h]
  int v520; // [rsp+2C8h] [rbp-7F8h]
  _BYTE v521[96]; // [rsp+2E0h] [rbp-7E0h] BYREF
  _BYTE v522[32]; // [rsp+340h] [rbp-780h] BYREF
  __int64 v523; // [rsp+360h] [rbp-760h]
  __int64 v524; // [rsp+368h] [rbp-758h]
  __int64 v525; // [rsp+370h] [rbp-750h]
  double v526[13]; // [rsp+3A0h] [rbp-720h] BYREF
  int v527; // [rsp+408h] [rbp-6B8h]
  char *v528; // [rsp+410h] [rbp-6B0h]
  __int64 *v529; // [rsp+418h] [rbp-6A8h]
  double *v530; // [rsp+420h] [rbp-6A0h]
  double *v531; // [rsp+428h] [rbp-698h]
  __int64 v532; // [rsp+430h] [rbp-690h]
  __int64 v533; // [rsp+438h] [rbp-688h]
  __int64 (__fastcall ***v534)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+440h] [rbp-680h]
  double *v535; // [rsp+450h] [rbp-670h]
  unsigned __int64 v536; // [rsp+458h] [rbp-668h]
  __int64 v537; // [rsp+460h] [rbp-660h]
  unsigned __int64 v538; // [rsp+4A8h] [rbp-618h]
  int v539; // [rsp+4D4h] [rbp-5ECh]
  int v540; // [rsp+4E0h] [rbp-5E0h]
  int v541; // [rsp+4E4h] [rbp-5DCh]

  v432 = *(double *)a5.m128i_i64;
  if ( !a2 )
    return (unsigned int)ClpSimplexNonlinear::primalSLP(this, a4, *(double *)a5.m128i_i64, 0);
  v446 = *(double *)this;
  if ( *(double *)this < 0.0 )
  {
    v446 = -1.0;
  }
  else if ( *(double *)this > 0.0 )
  {
    v446 = 1.0;
  }
  v7 = *((_QWORD *)this + 24);
  v8 = nullptr;
  if ( v7 )
  {
    v9 = **(__int64 (***)(void))v7;
    if ( (char *)v9 == (char *)ClpPackedMatrix::getPackedMatrix )
      v8 = *(const CoinPackedMatrix **)(v7 + 88);
    else
      v8 = (const CoinPackedMatrix *)v9();
  }
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v515);
  CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v515, v8);
  s = v519;
  if ( a2 <= 0 )
  {
    v11 = 0;
    v10 = 0;
  }
  else
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v500 = a3;
    v13 = a3;
    do
    {
      v14 = *((_DWORD *)*v13 + 9);
      v15 = (*(__int64 (**)(void))(*(_QWORD *)*v13 + 80LL))();
      v16 = s[v14];
      v17 = v15 - v16;
      v10 += v17;
      if ( *((_DWORD *)this + 26) <= v14 )
      {
        ++v12;
      }
      else if ( v17 )
      {
        v12 -= (v16 == 0) - 1;
      }
      a5.m128i_i64[0] = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * v14);
      ++v500;
      v11 += (*(double *)(*((_QWORD *)this + 19) + 8LL * v14) < 1.0e20) + (*(double *)a5.m128i_i64 > -1.0e20);
      v13 = v500;
    }
    while ( v500 != &a3[(unsigned int)(a2 - 1) + 1] );
    if ( v12 )
      goto LABEL_102;
  }
  v459 = *((int **)this + 20);
  if ( v459[4] <= 1 )
  {
    ClpSimplex::ClpSimplex((ClpSimplex *)v526, this, -1);
    v459 = nullptr;
  }
  else
  {
    v18 = (ClpLinearObjective *)operator new(0x28u);
    ClpLinearObjective::ClpLinearObjective(v18, nullptr, *((_DWORD *)this + 27));
    *((_QWORD *)this + 20) = v18;
    ClpSimplex::ClpSimplex((ClpSimplex *)v526, this, -1);
    v19 = *((_QWORD *)this + 20);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 80LL))(v19);
    *((_QWORD *)this + 20) = v459;
  }
  v20 = *((_DWORD *)this + 27);
  v451 = v20;
  if ( v11 )
  {
    v451 = 3 * v11 + v20;
    v21 = (int *)operator new[](4LL * (3 * v11 + 1));
    v501 = 3 * v11;
    v22 = (int *)operator new[](4 * v501);
    v501 *= 8LL;
    sa = (double *)operator new[](v501);
    v23 = operator new[](v501);
    *v21 = 0;
    v492 = (double *)v23;
    v24 = operator new[](v501);
    v25 = (double *)v24;
    v502 = (void *)v24;
    if ( a2 <= 0 )
    {
      v29 = 0;
      v38 = (const double *)v24;
    }
    else
    {
      v26 = *((_QWORD *)this + 18);
      v27 = *((_QWORD *)this + 19);
      v28 = a3;
      a6.m128i_i64[0] = 0x4415AF1D78B58C40LL;
      v29 = 0;
      v490 = v25;
      do
      {
        v30 = *((int *)*v28 + 9);
        a5.m128i_i64[0] = *(_QWORD *)(v26 + 8 * v30);
        v31 = *((_DWORD *)*v28 + 9);
        if ( *(double *)a5.m128i_i64 > -1.0e20 )
        {
          v32 = v29;
          v33 = v29;
          v22[v33] = v30;
          sa[v32] = 1.0;
          v490[v32] = 10000000.0;
          v22[v33 + 1] = v30;
          v22[v33 + 2] = v30;
          v492[v32] = 0.01;
          sa[v32 + 1] = 1.0;
          v21[v33 + 1] = v29 + 1;
          v34 = v29 + 2;
          v490[v32 + 1] = 100000000.0;
          v29 += 3;
          v492[v32 + 1] = 100.0;
          sa[v32 + 2] = 1.0;
          v21[v33 + 2] = v34;
          v490[v32 + 2] = 1000000000.0;
          v21[v33 + 3] = v29;
          v492[v32 + 2] = 1.797693134862316e308;
        }
        if ( *(double *)(v27 + 8 * v30) < 1.0e20 )
        {
          v35 = v29;
          v36 = v29;
          v22[v36] = v31;
          sa[v35] = -1.0;
          v490[v35] = 10000000.0;
          v22[v36 + 1] = v31;
          v22[v36 + 2] = v31;
          v492[v35] = 0.01;
          sa[v35 + 1] = -1.0;
          v21[v36 + 1] = v29 + 1;
          sa[v35 + 2] = -1.0;
          v490[v35 + 1] = 100000000.0;
          v492[v35 + 1] = 100.0;
          v37 = v29 + 2;
          v29 += 3;
          v21[v36 + 3] = v29;
          v21[v36 + 2] = v37;
          v490[v35 + 2] = 1000000000.0;
          v492[v35 + 2] = 1.797693134862316e308;
        }
        ++v28;
      }
      while ( &a3[(unsigned int)(a2 - 1) + 1] != v28 );
      v502 = v490;
      v38 = v490;
    }
    ClpModel::addColumns((ClpModel *)v526, v29, nullptr, v492, v38, v21, v22, sa);
    operator delete[](v21);
    operator delete[](v22);
    operator delete[](sa);
    operator delete[](v492);
    operator delete[](v502);
    v20 = *((_DWORD *)this + 27);
  }
  v39 = v11 + v20;
  if ( v39 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v491 = (double *)operator new[](4 * v39);
  v40 = (void *)operator new[](*((int *)this + 27));
  memset(v40, 0, *((int *)this + 27));
  if ( a2 > 0 )
  {
    v42 = a3;
    do
    {
      v43 = v42;
      (*(void (__fastcall **)(ClpConstraint *, void *))(*(_QWORD *)*v42 + 40LL))(*v42, v40);
      v42 = v43 + 1;
    }
    while ( &a3[(unsigned int)(a2 - 1) + 1] != v43 + 1 );
  }
  if ( v459 )
    (*(void (__fastcall **)(int *, void *, __int64, ClpConstraint **))(*(_QWORD *)v459 + 56LL))(v459, v40, v41, v42);
  v44 = *((unsigned int *)this + 27);
  if ( (int)v44 <= 0 )
  {
    v46 = 0;
  }
  else
  {
    v45 = 0;
    v46 = 0;
    v41 = (unsigned int)(v44 - 1) + 1LL;
    do
    {
      if ( *((_BYTE *)v40 + v45) )
      {
        v47 = (int)v46;
        v46 = (unsigned int)(v46 + 1);
        *((_DWORD *)v491 + v47) = v45;
      }
      ++v45;
    }
    while ( v41 != v45 );
  }
  if ( v451 <= (int)v44 )
  {
    v471 = v46;
    goto LABEL_59;
  }
  v48 = (int)v46;
  v49 = -(int)(((unsigned __int64)v491 + 4 * (int)v46) >> 2) & 3;
  if ( (unsigned int)(v451 + ~(_DWORD)v44) > 0x14 )
  {
    v50 = v44;
    if ( (_DWORD)v49 )
    {
      v50 = v44 + 3;
      *((_DWORD *)v491 + (int)v46) = v44;
      if ( (_DWORD)v49 == 1 )
      {
        LODWORD(v46) = v46 + 1;
      }
      else
      {
        v51 = v46 + 2;
        *((_DWORD *)v491 + (int)v46 + 1) = v50;
        v50 = v44 + 6;
        if ( (_DWORD)v49 == 2 )
        {
          LODWORD(v46) = v46 + 2;
        }
        else
        {
          LODWORD(v46) = v46 + 3;
          *((_DWORD *)v491 + v51) = v50;
          v50 = v44 + 9;
        }
      }
    }
    v52 = (v451 + ~(_DWORD)v44) / 3u + 1 - v49;
    v53 = (__m128i *)((char *)v491 + 4 * v48 + 4 * v49);
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v55 = 0;
    a6 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v50), 0), (__m128i)xmmword_291BB0);
    v56 = _mm_load_si128((const __m128i *)&xmmword_291BC0);
    a5 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v46), 0), (__m128i)xmmword_289BB0);
    v57 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    do
    {
      v58 = a5;
      ++v55;
      ++v53;
      v53[-1] = a6;
      a5 = _mm_add_epi32(a5, si128);
      a6 = _mm_add_epi32(a6, v56);
      v59 = _mm_add_epi32(v58, v57);
    }
    while ( v52 >> 2 > v55 );
    v41 = v52 & 0xFFFFFFFC;
    v46 = (unsigned int)(v41 + v46);
    v471 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v59, 255));
    v44 = 3 * (_DWORD)v41 + v50;
    if ( (_DWORD)v41 == v52 )
    {
LABEL_59:
      v61 = v537;
      if ( v537 )
        goto LABEL_60;
LABEL_534:
      v63 = nullptr;
      goto LABEL_62;
    }
    v48 = (int)v46;
  }
  v41 = (unsigned int)(v44 + 3);
  v471 = v46 + 1;
  *((_DWORD *)v491 + v48) = v44;
  if ( v451 <= (int)v41 )
    goto LABEL_59;
  v60 = v46 + 2;
  *((_DWORD *)v491 + (int)v46 + 1) = v41;
  v41 = (unsigned int)(v44 + 6);
  if ( (int)v41 < v451 )
  {
    *((_DWORD *)v491 + v60) = v41;
    v41 = (unsigned int)(v44 + 9);
    v471 = v46 + 3;
    if ( v451 <= (int)v41 )
      goto LABEL_59;
    v60 = v46 + 4;
    *((_DWORD *)v491 + (int)v46 + 3) = v41;
    v41 = (unsigned int)(v44 + 12);
    if ( v451 > (int)v41 )
    {
      *((_DWORD *)v491 + v60) = v41;
      v471 = v46 + 5;
      if ( v451 > (int)v44 + 15 )
      {
        v41 = (unsigned int)(v46 + 6);
        *((_DWORD *)v491 + (int)v46 + 5) = v44 + 15;
        if ( v451 <= (int)v44 + 18 )
        {
          v471 = v46 + 6;
        }
        else
        {
          v46 = (unsigned int)(v46 + 7);
          v41 = (int)v41;
          v471 = v46;
          *((_DWORD *)v491 + (int)v41) = v44 + 18;
        }
      }
      goto LABEL_59;
    }
  }
  v61 = v537;
  v471 = v60;
  if ( !v537 )
    goto LABEL_534;
LABEL_60:
  v62 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v61;
  if ( v62 == ClpPackedMatrix::getPackedMatrix )
    v63 = *(const CoinPackedMatrix **)(v61 + 88);
  else
    v63 = (const CoinPackedMatrix *)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, double, double))v62)(
                                      v61,
                                      v44,
                                      v41,
                                      v46,
                                      *(double *)a5.m128i_i64,
                                      *(double *)a6.m128i_i64);
LABEL_62:
  CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v515, v63);
  v64 = v520 + v10;
  v65 = v518;
  v66 = v519;
  v478 = v517;
  v481 = v516;
  v67 = *((_DWORD *)this + 26) + 1;
  if ( v67 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v493 = (int *)operator new[](4 * v67);
  if ( (unsigned __int64)v64 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v488 = (int *)operator new[](4LL * v64);
  v486 = (double *)operator new[](8LL * v64);
  *v493 = 0;
  v68 = *((int *)this + 26);
  if ( v68 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  sb = (int *)operator new[](4 * v68);
  v69 = *((_DWORD *)this + 26);
  v70 = v69;
  if ( v69 <= 0 )
  {
    if ( a2 <= 0 )
      goto LABEL_589;
  }
  else
  {
    memset(sb, 255, 4LL * (unsigned int)(v69 - 1) + 4);
    if ( a2 <= 0 )
    {
LABEL_70:
      v72 = 1;
      v503 = 0;
      while ( 1 )
      {
        v73 = *v66;
        v74 = sb[v72 - 1];
        if ( (int)v74 < 0 )
        {
          v102 = *v65;
          if ( (int)v102 + v73 <= (int)v102 )
            goto LABEL_79;
          v103 = (int)v102 + 1;
          v80 = v503;
          v104 = v478 + -4 * v103 + 4 * v102;
          v105 = &v488[v503 - v103];
          v106 = v481 + -8 * v103 + 8 * v102;
          v107 = &v486[v503 - v103];
          do
          {
            v108 = *(double *)(v106 + 8 * v103);
            ++v80;
            v109 = v103;
            v105[v103] = *(_DWORD *)(v104 + 4 * v103);
            v110 = *v66;
            v107[v103++] = v108;
          }
          while ( *v65 + v110 > v109 );
          goto LABEL_78;
        }
        v75 = *(double *)(*((_QWORD *)this + 18) + 8 * v72 - 8);
        v76 = v75 > -1.0e20;
        v77 = 3 * v76 + 3;
        v78 = 3 * v76;
        if ( *(double *)(*((_QWORD *)this + 19) + 8 * v72 - 8) >= 1.0e20 )
          v77 = v78;
        if ( v77 == v73 )
          break;
        v79 = *v65;
        if ( (int)v79 < (int)v79 + v73 )
        {
          v80 = v503;
          v81 = (int)v79 + 1;
          v82 = v481 + -8 * v81 + 8 * v79;
          v83 = v478 + -4 * v81 + 4 * v79;
          v84 = &v488[v503 - v81];
          v85 = &v486[v503 - v81];
          do
          {
            v86 = *(double *)(v82 + 8 * v81);
            ++v80;
            v87 = v81;
            v84[v81] = *(_DWORD *)(v83 + 4 * v81);
            v88 = *v66;
            v85[v81++] = v86;
          }
          while ( *v65 + v88 > v87 );
LABEL_78:
          v503 = v80;
        }
LABEL_79:
        ++v66;
        ++v65;
        v493[v72] = v503;
        v89 = v72++;
        if ( *((_DWORD *)this + 26) <= v89 )
          goto LABEL_80;
      }
      v476 = a3[v74];
      memset(v40, 0, *((int *)this + 27));
      (*(void (__fastcall **)(ClpConstraint *, void *, double, double))(*(_QWORD *)v476 + 48LL))(
        v476,
        v40,
        v75,
        *(double *)a6.m128i_i64);
      v111 = *((_DWORD *)this + 27);
      if ( v111 > 0 )
      {
        v112 = (unsigned int)(v111 - 1);
        v113 = 0;
        v114 = v112 + 1;
        v115 = v503;
        do
        {
          if ( *((_BYTE *)v40 + v113) )
          {
            v116 = v115;
            v488[v115++] = v113;
            v486[v116] = 1.0;
          }
          ++v113;
        }
        while ( v114 != v113 );
        v503 = v115;
      }
      v117 = *v65;
      if ( (int)v117 + *v66 <= (int)v117 )
        goto LABEL_79;
      v118 = (int)v117 + 1;
      v80 = v503;
      v119 = v478 + -4 * v118 + 4 * v117;
      v120 = &v488[v503 - v118];
      v121 = v481 + -8 * v118 + 8 * v117;
      v122 = &v486[v503 - v118];
      do
      {
        v123 = *(double *)(v121 + 8 * v118);
        ++v80;
        v124 = v118;
        v120[v118] = *(_DWORD *)(v119 + 4 * v118);
        v125 = *v66;
        v122[v118++] = v123;
      }
      while ( *v65 + v125 > v124 );
      goto LABEL_78;
    }
  }
  v71 = 0;
  do
  {
    sb[*((int *)a3[v71] + 9)] = v71;
    ++v71;
  }
  while ( a2 > (int)v71 );
  if ( v70 > 0 )
    goto LABEL_70;
LABEL_589:
  v503 = 0;
LABEL_80:
  operator delete[](sb);
  CoinPackedMatrix::CoinPackedMatrix(
    (CoinPackedMatrix *)v521,
    0,
    v451,
    *((_DWORD *)this + 26),
    v503,
    v486,
    0.0,
    0.0,
    v488,
    v493,
    nullptr);
  operator delete[](v493);
  operator delete[](v488);
  operator delete[](v486);
  operator delete[](v40);
  if ( v446 < 0.0 )
  {
    ClpModel::setOptimizationDirection((ClpModel *)v526, 1.0);
    v360 = v534 ? (**v534)(v534, 0, 0, &v510, 0, 2) : 0LL;
    v361 = *((_DWORD *)this + 27);
    if ( v361 > 0 )
    {
      v362 = (v360 >> 3) & 1;
      if ( 2 - (unsigned int)((_DWORD)v362 == 0) > v361 - 1 )
      {
        v371 = 0;
LABEL_546:
        v372 = (double *)(v360 + 8LL * (int)v371);
        v373 = v371 + 1;
        *v372 = -*v372;
        if ( v373 < v361 )
          *(double *)(v360 + 8LL * v373) = -*(double *)(v360 + 8LL * v373);
        goto LABEL_81;
      }
      v363 = 0;
      if ( (_DWORD)v362 )
      {
        v363 = 1;
        *(double *)v360 = -*(double *)v360;
      }
      v364 = v361 - v362;
      v365 = (double *)(v360 + 8 * v362);
      v366 = 0;
      v367 = v361 - v362;
      v368 = 0;
      v369 = v367 >> 1;
      do
      {
        ++v366;
        *(double *)&v370 = -v365[v368];
        *((double *)&v370 + 1) = -v365[v368 + 1];
        *(_OWORD *)&v365[v368] = v370;
        v368 += 2;
      }
      while ( v369 > v366 );
      v371 = (v364 & 0xFFFFFFFE) + v363;
      if ( (v364 & 0xFFFFFFFE) != v364 )
        goto LABEL_546;
    }
  }
LABEL_81:
  ClpSimplex::primal((ClpSimplex *)v526, 1, 0);
  if ( v540 == 1 )
  {
    operator delete[](v491);
    goto LABEL_101;
  }
  v487 = v535;
  v489 = (double *)v536;
  if ( v540 == 2 )
  {
    v374 = *((_DWORD *)this + 27);
    if ( v374 > 0 )
    {
      if ( (v536 >= (unsigned __int64)(v535 + 2) || (unsigned __int64)v535 >= v536 + 16) && (unsigned int)v374 > 5 )
      {
        v375 = 0;
        v376 = ((unsigned __int64)v535 >> 3) & 1;
        if ( (((unsigned __int64)v535 >> 3) & 1) != 0 )
        {
          v375 = 1;
          *v535 = fmax(-100000000.0, *v535);
          *v489 = fmin(100000000.0, *v489);
        }
        v377 = 0;
        v378 = v374 - v376;
        v379 = (unsigned int)v376;
        v380 = &v487[v379];
        v381 = &v489[v379];
        v382 = 0;
        do
        {
          ++v377;
          v383 = _mm_cmplt_pd(*(__m128d *)&v380[v382], (__m128d)xmmword_291BD0);
          *(__m128d *)&v380[v382] = _mm_or_pd(
                                      _mm_andn_pd(v383, *(__m128d *)&v380[v382]),
                                      _mm_and_pd((__m128d)xmmword_291BD0, v383));
          v384 = *(__m128d *)&v381[v382];
          v385 = _mm_cmplt_pd((__m128d)xmmword_291BE0, v384);
          *(__m128d *)&v381[v382] = _mm_or_pd(_mm_andn_pd(v385, v384), _mm_and_pd((__m128d)xmmword_291BE0, v385));
          v382 += 2;
        }
        while ( v378 >> 1 > v377 );
        v386 = (v378 & 0xFFFFFFFE) + v375;
        if ( (v378 & 0xFFFFFFFE) != v378 )
        {
          v387 = v386;
          v388 = v386 + 1;
          v387 *= 8;
          *(double *)((char *)v487 + v387) = fmax(-100000000.0, *(double *)((char *)v487 + v387));
          *(double *)((char *)v489 + v387) = fmin(100000000.0, *(double *)((char *)v489 + v387));
          if ( v388 < v374 )
          {
            v389 = v388;
            v487[v389] = fmax(-100000000.0, v487[v389]);
            v489[v389] = fmin(100000000.0, v489[v389]);
          }
        }
      }
      else
      {
        v402 = v535;
        v403 = (double *)v536;
        v404 = (__int64)&v535[(unsigned int)(v374 - 1) + 1];
        do
        {
          while ( 1 )
          {
            *v402 = fmax(-100000000.0, *v402);
            if ( *v403 <= 100000000.0 )
              break;
            ++v402;
            *v403++ = 100000000.0;
            if ( v402 == (double *)v404 )
              goto LABEL_559;
          }
          ++v402;
          ++v403;
        }
        while ( (double *)v404 != v402 );
      }
    }
LABEL_559:
    ClpSimplex::primal((ClpSimplex *)v526, 1, 0);
    v487 = v535;
    v489 = (double *)v536;
  }
  v437 = v527;
  if ( v534 )
    v457 = (**v534)(v534, 0, 0, v522, 0, 2);
  else
    v457 = 0;
  v90 = v529;
  v455 = v532;
  v454 = v533;
  v91 = 8LL * v471;
  v494 = (double *)operator new[](v91);
  sc = (double *)operator new[](v91);
  v92 = operator new[](v91);
  v470 = (double *)v92;
  v433 = v446 * *((double *)this + 5);
  if ( v471 )
  {
    v93 = 0;
    do
    {
      v95 = *((int *)v491 + v93);
      v96 = &v487[v95];
      v97 = &v489[v95];
      v98 = (double *)&v90[v95];
      v94 = *v96;
      if ( *v96 > *v98 || (v94 = *v97, *v98 > *v97) )
        *v98 = v94;
      else
        v94 = *v98;
      v494[v93] = (v94 + 0.5 + 1.0 - (v94 - 0.5)) * 0.05;
      sc[v93] = *v96;
      *(double *)(v92 + 8 * v93++) = *v97;
    }
    while ( (unsigned int)(v471 - 1) + 1LL != v93 );
  }
  v126 = v437 + v451;
  v435 = v437 + v451;
  if ( v126 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v464 = (__int64 *)operator new[](8 * v126);
  v434 = (_BYTE *)operator new[](v126);
  v127 = 0;
  v128 = (unsigned int)(v471 - 1);
  v473 = v128 + 1;
  n = 4 * (v128 + 1);
  do
  {
    v129 = (void *)operator new[](4LL * v471);
    *(&v512 + v127) = (__int64)v129;
    if ( v471 )
      memset(v129, 0, n);
    ++v127;
  }
  while ( v127 != 3 );
  v130 = *((int *)this + 27);
  if ( v130 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v131 = (char *)operator new[](8 * v130);
  if ( a4 <= 0 )
  {
    v439 = nullptr;
    v447 = 1.0e31;
    goto LABEL_356;
  }
  v427 = v451 >> 3;
  v414 = v451;
  v426 = v451 % 8;
  v431 = (char *)&v464[v414];
  v448 = v451 == 0 || v464 == v90;
  v424 = v437 >> 3;
  v423 = v437 % 8;
  v429 = v435 >> 3;
  v422 = v435 % 8;
  v132 = (v457 >> 3) & 1;
  v418 = (v457 >> 3) & 1;
  v412 = v457 + 8 * v132;
  v415 = 2 - ((_DWORD)v132 == 0);
  v477 = &a3[(unsigned int)(a2 - 1) + 1];
  v425 = (__int64)&v494[v128 + 1];
  v413 = ((unsigned int)((v451 >> 3) - 1) + 1LL) << 6;
  v133 = ((unsigned __int8)v494 & 8) != 0;
  v406 = v471 - v133;
  v407 = v133 + 1;
  v408 = (unsigned int)(v471 - v133) >> 1;
  v411 = ((v471 - v133) & 0xFFFFFFFE) + v133;
  v409 = (v471 - v133) & 0xFFFFFFFE;
  v410 = &v494[((unsigned __int8)v494 & 8) != 0];
  v419 = (unsigned int)(v435 >> 3) >> 1;
  v416 = (v435 >> 3) & 0xFFFFFFFE;
  v458 = 100000000.0;
  v420 = ((unsigned int)((v437 >> 3) - 1) + 1LL) << 6;
  v417 = 8LL * v416;
  v428 = 0;
  v449 = 0;
  v441 = &v434[v417];
  v438 = 0;
  v439 = nullptr;
  v472 = 0;
  v452 = 0;
  v421 = 8LL * (unsigned int)((v435 >> 3) - 1) + 8;
  *(_QWORD *)v442 = 0x7FEFFFFFFFFFFFFFLL;
  *(_QWORD *)&v442[8] = 0x7FEFFFFFFFFFFFFFLL;
  *(_QWORD *)&v442[16] = 0x7FEFFFFFFFFFFFFFLL;
  v440 = 1.797693134862316e308;
  v445 = 10000000.0;
  v447 = 1.0e31;
  v463 = 1.0e31;
  while ( 2 )
  {
    if ( v471 )
    {
      v134 = 0;
      do
      {
        v143 = sc[v134];
        v144 = *((int *)v491 + v134);
        v145 = v144;
        v146 = (double *)&v90[v144];
        v135 = *v146;
        if ( v143 > *v146 )
        {
          *v146 = v143;
          v135 = v143;
          v136 = sc;
          v137 = sc[v134];
        }
        else
        {
          v147 = v470[v134];
          if ( v135 > v147 )
          {
            *v146 = v147;
            v135 = v147;
          }
          v137 = sc[v134];
          v136 = sc;
        }
        v138 = &v487[v145];
        v139 = fmax(v135 - v494[v134], v137);
        v487[v145] = v139;
        if ( v136[v134] == 0.0 && v139 < 0.0 )
          *v138 = 0.0;
        v140 = &v489[v145];
        v141 = fmin(*v146 + v494[v134], v470[v134]);
        *v140 = v141;
        if ( sc[v134] == 0.0 )
        {
          v142 = fmax(v141, *v138 + 0.0);
          *v140 = v142;
          if ( sc[v134] == 0.0 && v452 && *v138 == 0.0 && v142 < 0.0 )
          {
            *v138 = 0.0;
            *v146 = 0.0;
            *v140 = 0.0;
            printf("fixing %d\n", v144);
          }
        }
        ++v134;
      }
      while ( v134 != v473 );
    }
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v522, (const CoinPackedMatrix *)v521);
    v468 = v524;
    v482 = v525;
    v148 = *(void (**)(void))(*(_QWORD *)*a3 + 88LL);
    if ( (char *)v148 != (char *)ClpConstraint::newXValues )
      v148();
    v465 = v523;
    v149 = *((_DWORD *)this + 27);
    if ( v459 )
    {
      v150 = (__int64 *)(**(__int64 (__fastcall ***)(int *, ClpSimplexNonlinear *, __int64 *, double *, __int64, __int64))v459)(
                          v459,
                          this,
                          v90,
                          &v510,
                          1,
                          2);
      if ( v149 && v150 != (__int64 *)v457 )
      {
        if ( v149 >> 3 <= 0 )
        {
          v155 = (_QWORD *)v457;
        }
        else
        {
          v151 = v457;
          v152 = v150;
          do
          {
            v153 = *v152;
            v151 += 64LL;
            v152 += 8;
            *(_QWORD *)(v151 - 64) = v153;
            *(_QWORD *)(v151 - 56) = *(v152 - 7);
            *(_QWORD *)(v151 - 48) = *(v152 - 6);
            *(_QWORD *)(v151 - 40) = *(v152 - 5);
            *(_QWORD *)(v151 - 32) = *(v152 - 4);
            *(_QWORD *)(v151 - 24) = *(v152 - 3);
            *(_QWORD *)(v151 - 16) = *(v152 - 2);
            *(_QWORD *)(v151 - 8) = *(v152 - 1);
          }
          while ( v457 + (((unsigned int)((v149 >> 3) - 1) + 1LL) << 6) != v151 );
          v154 = ((v149 >> 3) - 1 + 1LL) << 6;
          v150 = (__int64 *)((char *)v150 + v154);
          v155 = (_QWORD *)(v457 + v154);
        }
        switch ( v149 % 8 )
        {
          case 1:
            goto LABEL_160;
          case 2:
            goto LABEL_159;
          case 3:
            goto LABEL_158;
          case 4:
            goto LABEL_157;
          case 5:
            goto LABEL_156;
          case 6:
            goto LABEL_155;
          case 7:
            v155[6] = v150[6];
LABEL_155:
            v155[5] = v150[5];
LABEL_156:
            v155[4] = v150[4];
LABEL_157:
            v155[3] = v150[3];
LABEL_158:
            v155[2] = v150[2];
LABEL_159:
            v155[1] = v150[1];
LABEL_160:
            *v155 = *v150;
            break;
          default:
            break;
        }
      }
    }
    else
    {
      v318 = (__int64 *)(***((__int64 (__fastcall ****)(_QWORD, ClpSimplexNonlinear *, __int64 *, double *, __int64, __int64))this
                           + 20))(
                          *((_QWORD *)this + 20),
                          this,
                          v90,
                          &v510,
                          1,
                          2);
      if ( v149 )
      {
        v319 = (_QWORD *)v457;
        if ( v318 != (__int64 *)v457 )
        {
          if ( v149 >> 3 > 0 )
          {
            v320 = v318;
            do
            {
              v321 = *v320;
              v320 += 8;
              v319 += 8;
              *(v319 - 8) = v321;
              *(v319 - 7) = *(v320 - 7);
              *(v319 - 6) = *(v320 - 6);
              *(v319 - 5) = *(v320 - 5);
              *(v319 - 4) = *(v320 - 4);
              *(v319 - 3) = *(v320 - 3);
              *(v319 - 2) = *(v320 - 2);
              *(v319 - 1) = *(v320 - 1);
            }
            while ( &v318[8 * (unsigned int)((v149 >> 3) - 1) + 8] != v320 );
            v322 = ((v149 >> 3) - 1 + 1LL) << 6;
            v318 = (__int64 *)((char *)v318 + v322);
            v319 = (_QWORD *)(v457 + v322);
          }
          switch ( v149 % 8 )
          {
            case 1:
              goto LABEL_435;
            case 2:
              goto LABEL_434;
            case 3:
              goto LABEL_433;
            case 4:
              goto LABEL_432;
            case 5:
              goto LABEL_431;
            case 6:
              goto LABEL_430;
            case 7:
              v319[6] = v318[6];
LABEL_430:
              v319[5] = v318[5];
LABEL_431:
              v319[4] = v318[4];
LABEL_432:
              v319[3] = v318[3];
LABEL_433:
              v319[2] = v318[2];
LABEL_434:
              v319[1] = v318[1];
LABEL_435:
              *v319 = *v318;
              if ( v446 < 0.0 )
                goto LABEL_436;
              goto LABEL_162;
            default:
              break;
          }
        }
      }
    }
    if ( v446 < 0.0 )
    {
LABEL_436:
      v323 = *((_DWORD *)this + 27);
      if ( v323 <= 0 )
        goto LABEL_162;
      if ( v415 > v323 - 1 )
      {
        v328 = 0;
      }
      else
      {
        if ( v418 )
          *(double *)v457 = -*(double *)v457;
        v324 = v323 - v418;
        v325 = 0;
        v326 = 0;
        do
        {
          v327 = *(_OWORD *)(v412 + v325);
          ++v326;
          *(double *)&v327 = -*(double *)&v327;
          *((double *)&v327 + 1) = -*((double *)&v327 + 1);
          *(_OWORD *)(v412 + v325) = v327;
          v325 += 16;
        }
        while ( (unsigned int)(v323 - v418) >> 1 > v326 );
        v328 = (v324 & 0xFFFFFFFE) + ((v457 >> 3) & 1);
        if ( (v324 & 0xFFFFFFFE) == v324 )
          goto LABEL_162;
      }
      v329 = v328;
      v330 = v328 + 1;
      *(double *)(v457 + 8 * v329) = -*(double *)(v457 + 8 * v329);
      if ( v330 < v323 )
        *(double *)(v457 + 8LL * v330) = -*(double *)(v457 + 8LL * v330);
    }
LABEL_162:
    if ( a2 > 0 )
    {
      v156 = a3;
      do
      {
        while ( 1 )
        {
          v157 = *v156;
          v504 = *((_DWORD *)*v156 + 9);
          (**(void (__fastcall ***)(ClpConstraint *, double *, __int64 *, void *, char *, double *, _QWORD, __int64))v157)(
            v157,
            v526,
            v90,
            v131,
            v511,
            &v510,
            0,
            1);
          v158 = (*(__int64 (__fastcall **)(ClpConstraint *))(*(_QWORD *)v157 + 80LL))(v157);
          v159 = *(int *)(v482 + 4LL * v504);
          v160 = v504;
          v161 = v159 + v158;
          if ( (int)v159 < v161 )
          {
            v162 = (unsigned int)(v161 + ~(_DWORD)v159) + 1LL;
            v163 = v468 + 4 * v159;
            v164 = v465 + 8 * v159;
            v165 = 0;
            do
            {
              v166 = &v131[8 * *(int *)(v163 + 4 * v165)];
              *(_QWORD *)(v164 + 8 * v165++) = *(_QWORD *)v166;
              *(_QWORD *)v166 = 0;
            }
            while ( v162 != v165 );
            v160 = v504;
          }
          v167 = *(double *)(*((_QWORD *)this + 18) + 8 * v160);
          if ( v167 > -1.0e20 )
            *(double *)(v455 + 8 * v160) = v167 - v510;
          v168 = *(double *)(*((_QWORD *)this + 19) + 8 * v160);
          if ( v168 >= 1.0e20 )
            break;
          ++v156;
          *(double *)(v454 + 8 * v160) = v168 - v510;
          if ( v477 == v156 )
            goto LABEL_172;
        }
        ++v156;
      }
      while ( v477 != v156 );
    }
LABEL_172:
    v169 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v169);
    CoinPackedMatrix::reverseOrderedCopyOf(v169, (const CoinPackedMatrix *)v522);
    v170 = (ClpPackedMatrix *)operator new(0x78u);
    ClpPackedMatrix::ClpPackedMatrix(v170, v169);
    ClpModel::replaceMatrix((ClpModel *)v526, v170, 1);
    ClpSimplex::primal((ClpSimplex *)v526, 1, 0);
    if ( v540 == 1 )
    {
      ClpSimplex::allSlackBasis((ClpSimplex *)v526, 0);
      ClpSimplex::primal((ClpSimplex *)v526, 0, 0);
      ClpModel::writeMps((ClpModel *)v526, "infeas.mps", 0, 2, 0.0);
      v171 = *((_DWORD *)this + 27);
      if ( v451 > v171 )
      {
LABEL_174:
        v172 = 0.0;
        v173 = (double *)&v90[v171];
        v174 = 0;
        v175 = (unsigned __int64)&v90[v171 + 1 + (unsigned __int64)(unsigned int)(v451 + ~v171)];
        do
        {
          if ( *v173 > 0.00000001 )
          {
            v172 = v172 + *v173;
            ++v174;
          }
          ++v173;
        }
        while ( (double *)v175 != v173 );
        v505 = v172;
        v176 = v172;
        goto LABEL_179;
      }
    }
    else
    {
      v171 = *((_DWORD *)this + 27);
      if ( v451 > v171 )
        goto LABEL_174;
    }
    v505 = 0.0;
    v174 = 0;
    v176 = 0.0;
LABEL_179:
    printf("%d artificial infeasibilities - summing to %g\n", v174, v176);
    if ( v505 <= 0.01 )
    {
      v440 = *(double *)&v442[16];
      *(_OWORD *)&v442[8] = *(_OWORD *)v442;
      *(double *)v442 = v505;
    }
    else if ( 1.1 * v505 <= v440 )
    {
      v440 = *(double *)&v442[16];
      *(_OWORD *)&v442[8] = *(_OWORD *)v442;
      *(double *)v442 = v505;
    }
    else if ( v458 < 10000000.0 )
    {
      v458 = v458 * 1.5;
      if ( v471 )
      {
        v347 = v494;
        do
        {
          while ( 1 )
          {
            v348 = *v347;
            if ( *v347 <= 0.1 )
              break;
            *v347++ = v348 + v348;
            if ( v347 == (double *)v425 )
              goto LABEL_513;
          }
          *v347++ = 0.1;
        }
        while ( (double *)v425 != v347 );
      }
LABEL_513:
      *(_QWORD *)v442 = 0x7FEFFFFFFFFFFFFFLL;
      *(_QWORD *)&v442[8] = 0x7FEFFFFFFFFFFFFFLL;
      *(_QWORD *)&v442[16] = 0x7FEFFFFFFFFFFFFFLL;
      v440 = 1.797693134862316e308;
      v463 = 1.797693134862316e308;
    }
    else
    {
      v440 = *(double *)&v442[16];
      *(_OWORD *)&v442[8] = *(_OWORD *)v442;
      *(double *)v442 = v505;
    }
    if ( v505 < 0.001 && !v428 )
    {
      puts("Got feasible");
      v428 = 1;
      v458 = 1000000.0;
      v445 = 0.001;
    }
    v177 = *(void (**)(void))(*(_QWORD *)*a3 + 88LL);
    if ( (char *)v177 != (char *)ClpConstraint::newXValues )
      v177();
    if ( v459 )
    {
      v506 = (*(double (__fastcall **)(int *, ClpSimplexNonlinear *, __int64 *))(*(_QWORD *)v459 + 24LL))(
               v459,
               this,
               v90);
      printf("objective offset %g\n", v510);
      v461 = v433 + v510;
      ClpModel::setObjectiveOffset((ClpModel *)v526, v433 + v510);
      v178 = v506;
    }
    else
    {
      v461 = v433;
      v178 = (*(double (__fastcall **)(_QWORD, ClpSimplexNonlinear *, __int64 *))(**((_QWORD **)this + 20) + 24LL))(
               *((_QWORD *)this + 20),
               this,
               v90);
    }
    v443 = v178 * v446;
    if ( v534 )
      v456 = (**v534)(v534, 0, 0, v511, 0, 2);
    else
      v456 = 0;
    v479 = *((_DWORD *)this + 27);
    if ( a2 <= 0 )
    {
      v507 = 0.0;
      v474 = 0.0;
      v484 = v463 + 0.0;
      goto LABEL_222;
    }
    v179 = a3;
    v466 = 0.0;
    v507 = 0.0;
    v474 = 0.0;
    v469 = 0.0;
    do
    {
      v181 = (double *)*v179;
      v483 = *((_DWORD *)*v179 + 9);
      v182 = (*(double (__fastcall **)(double *, ClpSimplexNonlinear *, __int64 *, _QWORD, __int64))(*(_QWORD *)v181 + 8LL))(
               v181,
               this,
               v90,
               0,
               1);
      v183 = v530[v483];
      v507 = fabs((*(double *)&v528[8 * v483] + v181[3] - v182) * v183) + v507;
      v184 = *(double *)(*((_QWORD *)this + 18) + 8LL * v483);
      v185 = (double *)(*((_QWORD *)this + 19) + 8LL * v483);
      if ( v184 > -1.0e20 )
      {
        if ( v184 - 0.00001 > v182 )
        {
          v186 = v184 - v182;
          v187 = 0.001;
          v469 = v469 + v186;
          if ( v183 <= 0.0 )
            v183 = 0.0;
          else
            v187 = v183 + 0.001;
          v188 = (double *)(v456 + 8LL * v479);
          v189 = v188 + 1;
          v190 = v188 + 2;
          if ( v186 <= 0.0 )
          {
            v193 = 0.0;
          }
          else
          {
            v191 = fmin(v186, 0.01);
            v192 = v186 - v191;
            v193 = *v188 * v191 + 0.0;
            if ( v192 > 0.0 )
            {
              v194 = fmin(v192, 100.0);
              v195 = v192 - v194;
              v193 = v193 + *v189 * v194;
              if ( v195 > 0.0 )
                v193 = v193 + fmin(v195, 1.797693134862316e308) * *v190;
            }
          }
          v196 = v182 - *v185;
          v197 = fmax(v445, v187);
          *v188 = v197;
          v198 = fmin(v196, 0.01);
          v199 = v196 - v198;
          v200 = v197 * v198;
          v201 = fmin(v199, 100.0);
          v202 = fmax(v458, v187);
          *v189 = v202;
          v203 = fmax(1000000000.0, v187);
          *v190 = v203;
          v474 = v474 + v193;
          v466 = v466 + fmax(0.0, fmin(v199 - v201, 1.797693134862316e308) * v203 + v202 * v201 + v200 + 0.0 - v193);
        }
        v479 += 3;
      }
      v180 = *v185;
      if ( *v185 < 1.0e20 )
      {
        if ( v182 <= v180 + 0.00001 )
        {
LABEL_197:
          v479 += 3;
          goto LABEL_198;
        }
        v204 = v182 - v180;
        v205 = 0.001;
        v469 = v469 + v204;
        if ( v183 < 0.0 )
          v205 = 0.001 - v183;
        v206 = (double *)(v456 + 8LL * v479);
        v207 = v206 + 1;
        v208 = v206 + 2;
        if ( v204 <= 0.0 )
        {
          v211 = 0.0;
        }
        else
        {
          v209 = *v206;
          if ( v204 < 0.01 )
          {
            v210 = v204 - v204;
            v211 = v209 * v204 + 0.0;
            if ( v204 - v204 <= 0.0 )
            {
LABEL_219:
              v214 = fmax(v445, v205);
              v215 = v204 * v214;
              *v206 = v214;
              v216 = fmax(v458, v205);
              v217 = fmin(v210, 100.0);
              *v207 = v216;
              v474 = v474 + v211;
              v218 = v215 + 0.0 + v216 * v217;
              v219 = fmax(1000000000.0, v205);
              *v208 = v219;
              v466 = v466 + fmax(0.0, v218 + fmin(v210 - v217, 1.797693134862316e308) * v219 - v211);
              goto LABEL_197;
            }
            goto LABEL_215;
          }
          v210 = v204 - 0.01;
          v211 = v209 * 0.01 + 0.0;
          if ( v204 - 0.01 > 0.0 )
          {
LABEL_215:
            v212 = fmin(v210, 100.0);
            v213 = v210 - v212;
            v211 = v211 + *v207 * v212;
            if ( v213 > 0.0 )
              v211 = v211 + fmin(v213, 1.797693134862316e308) * *v208;
          }
        }
        if ( v204 >= 0.01 )
        {
          v210 = v204 - 0.01;
          v204 = 0.01;
        }
        else
        {
          v210 = v204 - v204;
        }
        goto LABEL_219;
      }
LABEL_198:
      ++v179;
    }
    while ( v477 != v179 );
    v484 = v463 + v466;
    if ( v469 != 0.0 )
      printf("Sum infeasibilities %g - penalty %g ", v469, v474);
LABEL_222:
    if ( v461 != 0.0 )
      printf("offset2 %g ", v461);
    v220 = v507;
    v221 = v461 + v443 - v461;
    v222 = v221;
    v223 = v474 + v221;
    v463 = v474 + v221;
    printf("True objective %g or maybe %g (with penalty %g) -pen2 %g %g\n", v443 - v461, v221, v474 + v221, v507, v458);
    v475 = v474 + v507;
    if ( !v472 )
      goto LABEL_276;
    std::__ostream_insert<char,std::char_traits<char>>();
    v225 = (std::ostream *)std::ostream::_M_insert<double>();
    v226 = *(_QWORD *)((char *)v225 + *(_QWORD *)(*(_QWORD *)v225 - 24LL) + 240);
    v227 = v226;
    if ( !v226 )
      std::__throw_bad_cast();
    if ( *(_BYTE *)(v226 + 56) )
    {
      v228 = *(_BYTE *)(v226 + 67);
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v228 = 10;
      v315 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v227 + 48LL);
      if ( v315 != std::ctype<char>::do_widen )
        v228 = ((__int64 (__fastcall *)(__int64, __int64, double))v315)(v227, 10, v484 - v463);
    }
    v229 = (std::ostream *)std::ostream::put(v225, v228);
    std::ostream::flush(v229);
    if ( fabs(v463) * -0.05 - 0.0001 > v484 - v463 )
    {
      if ( !v448 )
      {
        v332 = v90;
        v333 = v464;
        if ( v427 > 0 )
        {
          do
          {
            v334 = *v333;
            v332 += 8;
            v333 += 8;
            *(v332 - 8) = v334;
            *(v332 - 7) = *(v333 - 7);
            *(v332 - 6) = *(v333 - 6);
            *(v332 - 5) = *(v333 - 5);
            *(v332 - 4) = *(v333 - 4);
            *(v332 - 3) = *(v333 - 3);
            *(v332 - 2) = *(v333 - 2);
            *(v332 - 1) = *(v333 - 1);
          }
          while ( v332 != (__int64 *)((char *)v90 + v413) );
          v332 = (__int64 *)((char *)v90 + v413);
          v333 = (__int64 *)((char *)v464 + v413);
        }
        switch ( v426 )
        {
          case 1u:
            goto LABEL_468;
          case 2u:
            goto LABEL_467;
          case 3u:
            goto LABEL_466;
          case 4u:
            goto LABEL_465;
          case 5u:
            goto LABEL_464;
          case 6u:
            goto LABEL_463;
          case 7u:
            v332[6] = v333[6];
LABEL_463:
            v332[5] = v333[5];
LABEL_464:
            v332[4] = v333[4];
LABEL_465:
            v332[3] = v333[3];
LABEL_466:
            v332[2] = v333[2];
LABEL_467:
            v332[1] = v333[1];
LABEL_468:
            *v332 = *v333;
            break;
          default:
            break;
        }
      }
      v335 = v528;
      if ( v437 )
      {
        v336 = &v464[v414];
        if ( v431 != v528 )
        {
          if ( v424 > 0 )
          {
            v337 = &v528[v420];
            do
            {
              v338 = *v336;
              v335 += 64;
              v336 += 8;
              *((_QWORD *)v335 - 8) = v338;
              *((_QWORD *)v335 - 7) = *(v336 - 7);
              *((_QWORD *)v335 - 6) = *(v336 - 6);
              *((_QWORD *)v335 - 5) = *(v336 - 5);
              *((_QWORD *)v335 - 4) = *(v336 - 4);
              *((_QWORD *)v335 - 3) = *(v336 - 3);
              *((_QWORD *)v335 - 2) = *(v336 - 2);
              *((_QWORD *)v335 - 1) = *(v336 - 1);
            }
            while ( v337 != v335 );
            v336 = &v464[8 * (unsigned int)((v437 >> 3) - 1) + 8 + v414];
            v335 = v337;
          }
          switch ( v423 )
          {
            case 1u:
              goto LABEL_482;
            case 2u:
              goto LABEL_481;
            case 3u:
              goto LABEL_480;
            case 4u:
              goto LABEL_479;
            case 5u:
              goto LABEL_478;
            case 6u:
              goto LABEL_477;
            case 7u:
              *((_QWORD *)v335 + 6) = v336[6];
LABEL_477:
              *((_QWORD *)v335 + 5) = v336[5];
LABEL_478:
              *((_QWORD *)v335 + 4) = v336[4];
LABEL_479:
              *((_QWORD *)v335 + 3) = v336[3];
LABEL_480:
              *((_QWORD *)v335 + 2) = v336[2];
LABEL_481:
              *((_QWORD *)v335 + 1) = v336[1];
LABEL_482:
              *(_QWORD *)v335 = *v336;
              break;
            default:
              break;
          }
        }
      }
      v339 = (_BYTE *)v538;
      if ( v435 && v434 != (_BYTE *)v538 )
      {
        if ( v429 <= 0 )
        {
          v344 = v434;
        }
        else
        {
          if ( (v538 >= (unsigned __int64)(v434 + 16) || (unsigned __int64)v434 >= v538 + 16) && (unsigned int)v429 > 1 )
          {
            v340 = 0;
            v341 = 0;
            do
            {
              ++v341;
              *(__m128i *)&v339[v340] = _mm_loadu_si128((const __m128i *)&v434[v340]);
              v340 += 16;
            }
            while ( v419 > v341 );
            v342 = &v339[v417];
            v343 = &v339[v421];
            if ( v416 != v429 )
            {
              *v342 = *v441;
              v342[1] = v441[1];
              v342[2] = v441[2];
              v342[3] = v441[3];
              v342[4] = v441[4];
              v342[5] = v441[5];
              v342[6] = v441[6];
              v342[7] = v441[7];
            }
          }
          else
          {
            v400 = v434;
            v343 = (_BYTE *)(v538 + v421);
            do
            {
              v401 = *v400;
              v339 += 8;
              v400 += 8;
              *(v339 - 8) = v401;
              *(v339 - 7) = *(v400 - 7);
              *(v339 - 6) = *(v400 - 6);
              *(v339 - 5) = *(v400 - 5);
              *(v339 - 4) = *(v400 - 4);
              *(v339 - 3) = *(v400 - 3);
              *(v339 - 2) = *(v400 - 2);
              *(v339 - 1) = *(v400 - 1);
            }
            while ( v339 != v343 );
          }
          v344 = &v434[8 * ((v435 >> 3) - 1) + 8];
          v339 = v343;
        }
        switch ( v422 )
        {
          case 1:
            goto LABEL_500;
          case 2:
            goto LABEL_499;
          case 3:
            goto LABEL_498;
          case 4:
            goto LABEL_497;
          case 5:
            goto LABEL_496;
          case 6:
            goto LABEL_495;
          case 7:
            v339[6] = v344[6];
LABEL_495:
            v339[5] = v344[5];
LABEL_496:
            v339[4] = v344[4];
LABEL_497:
            v339[3] = v344[3];
LABEL_498:
            v339[2] = v344[2];
LABEL_499:
            v339[1] = v344[1];
LABEL_500:
            *v339 = *v344;
            break;
          default:
            break;
        }
      }
      if ( v471 )
      {
        v345 = v494;
        do
        {
          while ( 1 )
          {
            v346 = *v345;
            if ( *v345 <= 0.1 )
              break;
            *v345++ = v346 * 0.5;
            if ( v345 == (double *)v425 )
              goto LABEL_506;
          }
          *v345++ = v346 * 0.9;
        }
        while ( v345 != (double *)v425 );
      }
LABEL_506:
      puts("** Halving trust");
      CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v522);
      v463 = v484;
LABEL_355:
      if ( a4 == ++v472 )
        goto LABEL_356;
      continue;
    }
    break;
  }
  v230 = v514;
  v231 = *((_DWORD *)this + 27);
  v444 = v513;
  v514 = v513;
  v232 = v512;
  v512 = v230;
  v462 = v232;
  v513 = v232;
  if ( !v471 )
  {
    if ( v231 > 0 )
      goto LABEL_237;
    v450 = 0;
    v485 = 0.0;
    v467 = 1.0e31;
    goto LABEL_392;
  }
  v220 = NAN;
  v233 = 0;
  v223 = -0.00001;
  while ( 2 )
  {
    while ( 2 )
    {
      v234 = *(double *)&v90[*(int *)((char *)v491 + v233)] - *(double *)&v464[*(int *)((char *)v491 + v233)];
      if ( v234 < -0.00001 )
      {
        *(_DWORD *)(v230 + v233) = (fabs(v234 + v494[v233 / 4]) < 0.00001) - 2;
        goto LABEL_232;
      }
      if ( v234 <= 0.00001 )
      {
        *(_DWORD *)(v230 + v233) = 0;
LABEL_232:
        v233 += 4LL;
        if ( n == v233 )
          goto LABEL_236;
        continue;
      }
      break;
    }
    *(_DWORD *)(v230 + v233) = (fabs(v234 - v494[v233 / 4]) >= 0.00001) + 1;
    v233 += 4LL;
    if ( n != v233 )
      continue;
    break;
  }
LABEL_236:
  if ( v231 <= 0 )
    goto LABEL_242;
LABEL_237:
  v235 = 0;
  v222 = 1.0e31;
  do
  {
    v236 = v489[v235] - v487[v235];
    if ( v236 != 0.0 )
      v222 = fmin(v222, v236);
    ++v235;
  }
  while ( v231 > (int)v235 );
  if ( v471 )
  {
LABEL_242:
    v508 = nullptr;
    v450 = 0;
    v485 = 0.0;
    v467 = 1.0e31;
    v480 = 1.0e31;
    do
    {
      v237 = *((int *)v491 + (_QWORD)v508);
      v222 = v489[v237];
      v238 = v487[v237];
      v223 = v222 - v238;
      if ( v222 - v238 != 0.0 )
      {
        v467 = fmin(v467, v223);
        if ( v472 == 1 && v223 < 0.0000001 )
          printf("Small gap %d %d %g %g %g\n", (_DWORD)v508, *((_DWORD *)v491 + (_QWORD)v508), v238, v222, v223);
      }
      v239 = *(_DWORD *)(v462 + 4LL * (_QWORD)v508);
      v240 = *(_DWORD *)(v230 + 4LL * (_QWORD)v508);
      v241 = v494[(_QWORD)v508];
      v485 = fmax(v485, fabs(*(double *)&v90[v237] - *(double *)&v464[v237]));
      if ( v239 * v240 >= 0 )
      {
        if ( v240 == v239 && v240 != 0 && *(_DWORD *)(v444 + 4LL * (_QWORD)v508) == v240 )
        {
          v241 = v241 * 1.8;
          v450 = v240 != 0 && *(_DWORD *)(v444 + 4LL * (_QWORD)v508) == v240;
          v494[(_QWORD)v508] = v241;
        }
      }
      else
      {
        if ( v241 <= 1.0 )
          v241 = v241 * 0.7;
        else
          v241 = v241 * 0.5;
        v494[(_QWORD)v508] = v241;
      }
      v508 = (char *)v508 + 1;
      v480 = fmin(v480, v241);
    }
    while ( v471 > (int)v508 );
  }
  else
  {
    v450 = 0;
    v485 = 0.0;
    v467 = 1.0e31;
  }
LABEL_392:
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<double>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<double>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<double>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v306 = (std::ostream *)std::ostream::_M_insert<double>();
  v307 = *(_QWORD *)((char *)v306 + *(_QWORD *)(*(_QWORD *)v306 - 24LL) + 240);
  v308 = v307;
  if ( !v307 )
    std::__throw_bad_cast();
  if ( *(_BYTE *)(v307 + 56) )
  {
    v309 = *(_BYTE *)(v307 + 67);
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v309 = 10;
    v317 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v308 + 48LL);
    if ( v317 != std::ctype<char>::do_widen )
      v309 = ((__int64 (__fastcall *)(__int64, __int64, double, double, double, double))v317)(
               v308,
               10,
               v467,
               v222,
               v223,
               v220);
  }
  v310 = (std::ostream *)std::ostream::put(v306, v309);
  std::ostream::flush(v310);
  if ( v472 <= 200 )
    goto LABEL_261;
  if ( v463 + 0.0001 > v447 && v472 > 250 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    v390 = *(_QWORD *)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
    v391 = v390;
    if ( !v390 )
      std::__throw_bad_cast();
    if ( *(_BYTE *)(v390 + 56) )
    {
      v392 = *(_BYTE *)(v390 + 67);
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v405 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v391 + 48LL);
      v392 = 10;
      if ( v405 != std::ctype<char>::do_widen )
        v392 = ((__int64 (__fastcall *)(__int64, __int64, double, double, double, double))v405)(
                 v391,
                 10,
                 v463 + 0.0001,
                 v222,
                 v223,
                 v220);
    }
    v393 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v392);
    std::ostream::flush(v393);
    goto LABEL_564;
  }
  if ( v447 > v463 )
  {
    if ( !v439 )
    {
      if ( (unsigned __int64)v451 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v439 = (__int64 *)operator new[](v414 * 8);
    }
    v311 = v439;
    if ( v439 == v90 || !v451 )
    {
      v447 = v463;
    }
    else
    {
      if ( v427 > 0 )
      {
        v312 = v90;
        do
        {
          v313 = *v312;
          v311 += 8;
          v312 += 8;
          *(v311 - 8) = v313;
          *(v311 - 7) = *(v312 - 7);
          *(v311 - 6) = *(v312 - 6);
          *(v311 - 5) = *(v312 - 5);
          *(v311 - 4) = *(v312 - 4);
          *(v311 - 3) = *(v312 - 3);
          *(v311 - 2) = *(v312 - 2);
          *(v311 - 1) = *(v312 - 1);
        }
        while ( v311 != (__int64 *)((char *)v439 + v413) );
        v314 = v451 % 8;
        v224 = (unsigned __int64)v90 + v413;
        goto LABEL_406;
      }
      v314 = v451 % 8;
      v224 = (unsigned __int64)v90;
      if ( v426 <= 7 )
      {
LABEL_406:
        switch ( v314 )
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
            v311[6] = *(_QWORD *)(v224 + 48);
LABEL_255:
            v311[5] = *(_QWORD *)(v224 + 40);
LABEL_256:
            v311[4] = *(_QWORD *)(v224 + 32);
LABEL_257:
            v311[3] = *(_QWORD *)(v224 + 24);
LABEL_258:
            v311[2] = *(_QWORD *)(v224 + 16);
LABEL_259:
            v311[1] = *(_QWORD *)(v224 + 8);
LABEL_260:
            *v311 = *(_QWORD *)v224;
            v447 = v463;
            break;
          default:
            goto LABEL_531;
        }
      }
      else
      {
LABEL_531:
        v447 = v463;
      }
    }
  }
LABEL_261:
  if ( v432 <= v485 || (LOBYTE(v224) = v472 > 100, v472 <= 100 || v450) )
  {
    v438 = 0;
    goto LABEL_276;
  }
  if ( ++v438 != 3 )
    goto LABEL_276;
  if ( v452 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::endl<char,std::char_traits<char>>();
    goto LABEL_564;
  }
  if ( v471 )
  {
    if ( v407 > v471 - 1 )
    {
      v245 = 0;
      goto LABEL_273;
    }
    if ( ((unsigned __int8)v494 & 8) != 0 )
      *v494 = fmax(*v494, 0.1);
    v224 = 0;
    v242 = 0;
    do
    {
      ++v242;
      v243 = *(__m128d *)((char *)v410 + v224);
      v244 = _mm_cmplt_pd((__m128d)xmmword_291BF0, v243);
      *(__m128d *)((char *)v410 + v224) = _mm_or_pd(_mm_andn_pd(v244, (__m128d)xmmword_291BF0), _mm_and_pd(v243, v244));
      v224 += 16LL;
    }
    while ( v408 > v242 );
    if ( v409 != v406 )
    {
      v245 = v411;
LABEL_273:
      v246 = v245;
      v224 = (unsigned int)(v245 + 1);
      v494[v246] = fmax(v494[v246], 0.1);
      if ( (int)v224 < v471 )
      {
        v224 = (unsigned __int64)&v494[(int)v224];
        *(double *)v224 = fmax(*(double *)v224, 0.1);
      }
    }
    v452 = v472 > 100 && !v450;
    v438 = 0;
  }
  else
  {
    v438 = 0;
    v452 = v472 > 100 && !v450;
  }
LABEL_276:
  if ( !v448 )
  {
    v247 = (double *)v464;
    v224 = (unsigned __int64)v90;
    if ( v427 > 0 )
    {
      do
      {
        v248 = *(double *)v224;
        v247 += 8;
        v224 += 64LL;
        *(v247 - 8) = v248;
        *(v247 - 7) = *(double *)(v224 - 56);
        *(v247 - 6) = *(double *)(v224 - 48);
        *(v247 - 5) = *(double *)(v224 - 40);
        *(v247 - 4) = *(double *)(v224 - 32);
        *(v247 - 3) = *(double *)(v224 - 24);
        *(v247 - 2) = *(double *)(v224 - 16);
        *(v247 - 1) = *(double *)(v224 - 8);
      }
      while ( v247 != (double *)((char *)v464 + v413) );
      v247 = (double *)((char *)v464 + v413);
      v224 = (unsigned __int64)v90 + v413;
    }
    switch ( v426 )
    {
      case 1u:
        goto LABEL_287;
      case 2u:
        goto LABEL_286;
      case 3u:
        goto LABEL_285;
      case 4u:
        goto LABEL_284;
      case 5u:
        goto LABEL_283;
      case 6u:
        goto LABEL_282;
      case 7u:
        v247[6] = *(double *)(v224 + 48);
LABEL_282:
        v247[5] = *(double *)(v224 + 40);
LABEL_283:
        v247[4] = *(double *)(v224 + 32);
LABEL_284:
        v247[3] = *(double *)(v224 + 24);
LABEL_285:
        v247[2] = *(double *)(v224 + 16);
LABEL_286:
        v247[1] = *(double *)(v224 + 8);
LABEL_287:
        *v247 = *(double *)v224;
        break;
      default:
        break;
    }
  }
  v249 = (double *)v528;
  if ( v437 )
  {
    v250 = (double *)&v464[v414];
    if ( v431 != v528 )
    {
      if ( v424 > 0 )
      {
        v224 = (unsigned __int64)v528;
        do
        {
          v251 = *(double *)v224;
          v250 += 8;
          v224 += 64LL;
          *(v250 - 8) = v251;
          *(v250 - 7) = *(double *)(v224 - 56);
          *(v250 - 6) = *(double *)(v224 - 48);
          *(v250 - 5) = *(double *)(v224 - 40);
          *(v250 - 4) = *(double *)(v224 - 32);
          *(v250 - 3) = *(double *)(v224 - 24);
          *(v250 - 2) = *(double *)(v224 - 16);
          *(v250 - 1) = *(double *)(v224 - 8);
        }
        while ( v250 != (double *)&v464[8 * (unsigned int)((v437 >> 3) - 1) + 8 + v414] );
        v249 = (double *)((char *)v249 + v420);
        v250 = (double *)&v464[8 * (unsigned int)((v437 >> 3) - 1) + 8 + v414];
      }
      v252 = v224;
      v224 = v423;
      switch ( v423 )
      {
        case 1u:
          goto LABEL_301;
        case 2u:
          goto LABEL_300;
        case 3u:
          goto LABEL_299;
        case 4u:
          goto LABEL_298;
        case 5u:
          goto LABEL_297;
        case 6u:
          goto LABEL_296;
        case 7u:
          v250[6] = v249[6];
LABEL_296:
          v250[5] = v249[5];
LABEL_297:
          v250[4] = v249[4];
LABEL_298:
          v250[3] = v249[3];
LABEL_299:
          v250[2] = v249[2];
LABEL_300:
          v250[1] = v249[1];
LABEL_301:
          *v250 = *v249;
          break;
        default:
          v224 = v252;
          break;
      }
    }
  }
  v253 = (unsigned __int8 *)v538;
  if ( v435 && v434 != (_BYTE *)v538 )
  {
    if ( v429 <= 0 )
    {
      v256 = v434;
    }
    else
    {
      if ( (v538 >= (unsigned __int64)(v434 + 16) || (unsigned __int64)v434 >= v538 + 16) && (unsigned int)v429 > 1 )
      {
        v254 = 0;
        LODWORD(v224) = 0;
        do
        {
          v224 = (unsigned int)(v224 + 1);
          *(__m128i *)&v434[v254] = _mm_loadu_si128((const __m128i *)&v253[v254]);
          v254 += 16;
        }
        while ( v419 > (unsigned int)v224 );
        v255 = &v253[v417];
        if ( v416 != v429 )
        {
          *v441 = *v255;
          v441[1] = v255[1];
          v441[2] = v255[2];
          v441[3] = v255[3];
          v441[4] = v255[4];
          v441[5] = v255[5];
          v224 = v255[6];
          v441[6] = v224;
          v441[7] = v255[7];
        }
      }
      else
      {
        v349 = v434;
        v224 = v538;
        do
        {
          v350 = *(_BYTE *)v224;
          v349 += 8;
          v224 += 8LL;
          *(v349 - 8) = v350;
          *(v349 - 7) = *(_BYTE *)(v224 - 7);
          *(v349 - 6) = *(_BYTE *)(v224 - 6);
          *(v349 - 5) = *(_BYTE *)(v224 - 5);
          *(v349 - 4) = *(_BYTE *)(v224 - 4);
          *(v349 - 3) = *(_BYTE *)(v224 - 3);
          *(v349 - 2) = *(_BYTE *)(v224 - 2);
          *(v349 - 1) = *(_BYTE *)(v224 - 1);
        }
        while ( v349 != &v434[8 * ((v435 >> 3) - 1) + 8] );
      }
      v253 += v421;
      v256 = &v434[8 * ((v435 >> 3) - 1) + 8];
    }
    switch ( v422 )
    {
      case 1:
        goto LABEL_319;
      case 2:
        goto LABEL_318;
      case 3:
        goto LABEL_317;
      case 4:
        goto LABEL_316;
      case 5:
        goto LABEL_315;
      case 6:
        goto LABEL_314;
      case 7:
        v256[6] = v253[6];
LABEL_314:
        v256[5] = v253[5];
LABEL_315:
        v256[4] = v253[4];
LABEL_316:
        v256[3] = v253[3];
LABEL_317:
        v256[2] = v253[2];
LABEL_318:
        v256[1] = v253[1];
LABEL_319:
        v224 = *v253;
        *v256 = v224;
        break;
      default:
        break;
    }
  }
  if ( v472 )
  {
    v257 = v530;
    if ( v537 )
    {
      v258 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v537;
      if ( v258 == ClpPackedMatrix::getPackedMatrix )
        v259 = *(CoinPackedMatrix **)(v537 + 88);
      else
        v259 = (CoinPackedMatrix *)((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64, unsigned __int8 *))v258)(
                                     v537,
                                     (unsigned int)v472,
                                     v224,
                                     v253);
    }
    else
    {
      v259 = nullptr;
    }
    CoinPackedMatrix::transposeTimes(v259, v257, v531);
    v260 = *((_DWORD *)this + 27);
    v261 = v531;
    if ( v260 > 0 )
    {
      if ( ((unsigned __int64)v531 >= v457 + 16 || v457 >= (unsigned __int64)(v531 + 2)) && (unsigned int)v260 > 9 )
      {
        v262 = 0;
        v263 = ((unsigned __int64)v531 >> 3) & 1;
        if ( (((unsigned __int64)v531 >> 3) & 1) != 0 )
        {
          v262 = 1;
          *v531 = *(double *)v457 - *v531;
        }
        v264 = 0;
        v265 = v260 - v263;
        v266 = (unsigned int)v263;
        v267 = (unsigned int)(v260 - v263) >> 1;
        v268 = v457 + v266 * 8;
        v269 = &v261[v266];
        v270 = 0;
        do
        {
          ++v264;
          *(__m128d *)&v269[v270] = _mm_sub_pd(*(__m128d *)(v268 + v270 * 8), *(__m128d *)&v269[v270]);
          v270 += 2;
        }
        while ( v264 < v267 );
        v271 = (v265 & 0xFFFFFFFE) + v262;
        if ( (v265 & 0xFFFFFFFE) != v265 )
        {
          v272 = v271;
          v273 = v271 + 1;
          v261[v272] = *(double *)(v457 + 8 * v272) - v261[v272];
          if ( v260 > v273 )
            v261[v273] = *(double *)(v457 + 8LL * v273) - v261[v273];
        }
      }
      else
      {
        v331 = 0;
        do
        {
          v261[v331 / 8] = *(double *)(v457 + v331) - v261[v331 / 8];
          v331 += 8LL;
        }
        while ( 8LL * (unsigned int)(v260 - 1) + 8 != v331 );
      }
    }
    if ( v471 )
    {
      v274 = 0;
      do
      {
        v277 = *((int *)v491 + v274);
        v278 = v261[v277];
        v279 = *((_DWORD *)v491 + v274);
        if ( v278 < -0.000001 )
        {
          v275 = *(double *)&v90[v277];
          v475 = v475 - (v489[v277] - v275) * v278;
          if ( v278 < -0.1 )
          {
            v276 = v494[v274];
            if ( v276 < 0.001 && v470[v274] - v275 > 0.01 )
              v494[v274] = v276 * 1.5;
          }
        }
        else if ( v278 > 0.000001 )
        {
          v280 = *(double *)&v90[v277];
          v475 = v475 - (v487[v277] - v280) * v278;
          if ( v278 > 0.1 )
          {
            v281 = v494[v274];
            if ( v281 < 0.001 && v280 - sc[v274] > 0.01 )
            {
              v282 = v281 * 1.5;
              v494[v274] = v282;
              printf("Increasing trust on %d to %g\n", v279, v282);
            }
          }
        }
        ++v274;
      }
      while ( v274 != v473 );
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  v283 = (std::ostream *)std::ostream::_M_insert<double>();
  v284 = *(_QWORD *)((char *)v283 + *(_QWORD *)(*(_QWORD *)v283 - 24LL) + 240);
  v285 = v284;
  if ( !v284 )
    std::__throw_bad_cast();
  if ( *(_BYTE *)(v284 + 56) )
  {
    v286 = *(_BYTE *)(v284 + 67);
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v286 = 10;
    v316 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v285 + 48LL);
    if ( v316 != std::ctype<char>::do_widen )
      v286 = ((__int64 (__fastcall *)(__int64, __int64, double))v316)(v285, 10, v475);
  }
  v287 = (std::ostream *)std::ostream::put(v283, v286);
  std::ostream::flush(v287);
  if ( v472 <= 1 )
  {
    v449 = 0;
LABEL_354:
    CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v522);
    goto LABEL_355;
  }
  if ( v475 >= 0.00001 || !v449 )
  {
    v449 = v475 < 0.00001;
    goto LABEL_354;
  }
LABEL_564:
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v522);
LABEL_356:
  operator delete[](v464);
  operator delete[](v434);
  for ( i = 0; i != 3; ++i )
  {
    v289 = (void *)*(&v512 + i);
    if ( v289 )
      operator delete[](v289);
  }
  if ( v471 )
  {
    v290 = 0;
    do
    {
      v291 = *((int *)v491 + v290);
      v487[v291] = sc[v290];
      v292 = v470[v290++];
      v489[v291] = v292;
    }
    while ( v290 != v473 );
  }
  operator delete[](v494);
  operator delete[](v470);
  operator delete[](sc);
  v293 = v439;
  *((double *)this + 9) = v526[9] * v526[0] - v526[5];
  if ( v439 )
  {
    if ( v451 && v439 != v90 )
    {
      if ( v451 >> 3 <= 0 )
      {
        v298 = v439;
        v299 = v451;
      }
      else
      {
        v294 = v90;
        v295 = (unsigned int)((v451 >> 3) - 1);
        do
        {
          v296 = *v293;
          v293 += 8;
          v294 += 8;
          *(v294 - 8) = v296;
          *(v294 - 7) = *(v293 - 7);
          *(v294 - 6) = *(v293 - 6);
          *(v294 - 5) = *(v293 - 5);
          *(v294 - 4) = *(v293 - 4);
          *(v294 - 3) = *(v293 - 3);
          *(v294 - 2) = *(v293 - 2);
          *(v294 - 1) = *(v293 - 1);
        }
        while ( v293 != &v439[8 * v295 + 8] );
        v297 = ((int)v295 + 1LL) << 6;
        v298 = (__int64 *)((char *)v439 + v297);
        v90 = (__int64 *)((char *)v90 + v297);
        v299 = v451;
      }
      switch ( v299 % 8 )
      {
        case 1:
          goto LABEL_377;
        case 2:
          goto LABEL_376;
        case 3:
          goto LABEL_375;
        case 4:
          goto LABEL_374;
        case 5:
          goto LABEL_373;
        case 6:
          goto LABEL_372;
        case 7:
          v90[6] = v298[6];
LABEL_372:
          v90[5] = v298[5];
LABEL_373:
          v90[4] = v298[4];
LABEL_374:
          v90[3] = v298[3];
LABEL_375:
          v90[2] = v298[2];
LABEL_376:
          v90[1] = v298[1];
LABEL_377:
          *v90 = *v298;
          break;
        default:
          break;
      }
    }
    operator delete[](v439);
    printf("restoring objective of %g\n", v447);
    *((double *)this + 9) = v447;
  }
  v300 = v528;
  if ( v437 > 0 )
  {
    if ( v437 <= 49 )
    {
      v509 = nullptr;
      do
      {
        v394 = v509;
        v395 = *(double *)(*((_QWORD *)this + 18) + 8LL * (_QWORD)v509);
        v396 = (double *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v509);
        if ( fabs(*v396) > fabs(v395) )
        {
          sd = v395 - *(double *)(v455 + 8LL * (_QWORD)v509);
        }
        else
        {
          v394 = v509;
          sd = *v396 - *(double *)(v454 + 8LL * (_QWORD)v509);
        }
        *(double *)(v455 + 8LL * (_QWORD)v394) = v395;
        *(double *)(v454 + 8LL * (_QWORD)v394) = *v396;
        if ( sd != 0.0 )
        {
          printf(
            "For row %d activity changes from %g to %g\n",
            (_DWORD)v509,
            *(double *)&v300[8 * (_QWORD)v509],
            sd + *(double *)&v300[8 * (_QWORD)v509]);
          *(double *)&v300[8 * (_QWORD)v509] = sd + *(double *)&v300[8 * (_QWORD)v509];
        }
        v509 = (char *)v509 + 1;
      }
      while ( v509 != (void *)((unsigned int)(v437 - 1) + 1LL) );
    }
    else
    {
      v301 = *((_QWORD *)this + 18);
      v302 = *((_QWORD *)this + 19);
      v303 = 0;
      do
      {
        v305 = *(double *)(v301 + v303);
        if ( fabs(*(double *)(v302 + v303)) <= fabs(v305) )
          v304 = *(double *)(v302 + v303) - *(double *)(v454 + v303);
        else
          v304 = v305 - *(double *)(v455 + v303);
        *(double *)(v455 + v303) = v305;
        *(_QWORD *)(v454 + v303) = *(_QWORD *)(v302 + v303);
        if ( v304 != 0.0 )
          *(double *)&v300[v303] = v304 + *(double *)&v300[v303];
        v303 += 8LL;
      }
      while ( 8LL * (unsigned int)(v437 - 1) + 8 != v303 );
    }
  }
  operator delete[](v491);
  operator delete[](v131);
  puts("solution still in newModel - do objective etc!");
  v351 = *((_DWORD *)this + 27);
  v352 = *((__int64 **)this + 15);
  v353 = v529;
  *((_DWORD *)this + 77) = v539;
  *((_DWORD *)this + 80) = v540;
  *((_DWORD *)this + 81) = v541;
  if ( v351 && v352 != v353 )
  {
    if ( v351 >> 3 <= 0 )
    {
      v359 = v352;
    }
    else
    {
      v354 = v352;
      v355 = v353;
      v356 = (unsigned int)((v351 >> 3) - 1);
      do
      {
        v357 = *v355;
        v354 += 8;
        v355 += 8;
        *(v354 - 8) = v357;
        *(v354 - 7) = *(v355 - 7);
        *(v354 - 6) = *(v355 - 6);
        *(v354 - 5) = *(v355 - 5);
        *(v354 - 4) = *(v355 - 4);
        *(v354 - 3) = *(v355 - 3);
        *(v354 - 2) = *(v355 - 2);
        *(v354 - 1) = *(v355 - 1);
      }
      while ( v354 != &v352[8 * v356 + 8] );
      v358 = ((int)v356 + 1LL) << 6;
      v353 = (__int64 *)((char *)v353 + v358);
      v359 = (__int64 *)((char *)v352 + v358);
    }
    switch ( v351 % 8 )
    {
      case 1:
        goto LABEL_98;
      case 2:
        goto LABEL_97;
      case 3:
        goto LABEL_96;
      case 4:
        goto LABEL_95;
      case 5:
        goto LABEL_94;
      case 6:
        goto LABEL_93;
      case 7:
        v359[6] = v353[6];
LABEL_93:
        v359[5] = v353[5];
LABEL_94:
        v359[4] = v353[4];
LABEL_95:
        v359[3] = v353[3];
LABEL_96:
        v359[2] = v353[2];
LABEL_97:
        v359[1] = v353[1];
LABEL_98:
        *v359 = *v353;
        break;
      default:
        break;
    }
  }
  v99 = *((_DWORD *)this + 26);
  v100 = *((_QWORD *)this + 14);
  if ( v99 )
  {
    if ( v99 / 8 <= 0 )
    {
      v399 = *((_QWORD **)this + 14);
    }
    else
    {
      v397 = *((_QWORD **)this + 14);
      v398 = (unsigned int)(v99 / 8 - 1);
      do
      {
        *v397 = 0;
        v397[1] = 0;
        v397 += 8;
        *(v397 - 6) = 0;
        *(v397 - 5) = 0;
        *(v397 - 4) = 0;
        *(v397 - 3) = 0;
        *(v397 - 2) = 0;
        *(v397 - 1) = 0;
      }
      while ( v397 != (_QWORD *)(v100 + ((v398 + 1) << 6)) );
      v399 = (_QWORD *)(v100 + (((int)v398 + 1LL) << 6));
    }
    switch ( v99 % 8 )
    {
      case 1:
        goto LABEL_585;
      case 2:
        goto LABEL_584;
      case 3:
        goto LABEL_583;
      case 4:
        goto LABEL_582;
      case 5:
        goto LABEL_581;
      case 6:
        goto LABEL_580;
      case 7:
        v399[6] = 0;
LABEL_580:
        v399[5] = 0;
LABEL_581:
        v399[4] = 0;
LABEL_582:
        v399[3] = 0;
LABEL_583:
        v399[2] = 0;
LABEL_584:
        v399[1] = 0;
LABEL_585:
        *v399 = 0;
        break;
      default:
        break;
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64, double))(**((_QWORD **)this + 24) + 360LL))(
    *((_QWORD *)this + 24),
    v352,
    v100,
    1.0);
LABEL_101:
  v12 = 0;
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v521);
  ClpSimplex::~ClpSimplex((ClpSimplex *)v526);
LABEL_102:
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v515);
  return v12;
}

