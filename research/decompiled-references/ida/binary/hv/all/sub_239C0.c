__int64 __fastcall sub_239C0(
        __int64 a1,
        _QWORD *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  __int128 v12; // xmm0
  char *v13; // r12
  char *v14; // r12
  __int64 v15; // rax
  size_t v16; // r15
  void *v17; // rax
  __int64 v18; // r12
  char *v19; // rbx
  char **v20; // rax
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  __m128i v24; // xmm1
  unsigned int v25; // r15d
  void **p_dest; // rdi
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // r14d
  char *v34; // rdi
  __int64 v35; // r12
  __int64 v36; // rbx
  char *v37; // rax
  void *v38; // rdi
  char *v39; // r15
  void *v40; // rdi
  char *v42; // r13
  char *v43; // r10
  char *v44; // r8
  __int64 v45; // rcx
  int v46; // edx
  void **v47; // rsi
  char *v48; // rdx
  __int64 v49; // rbx
  unsigned __int64 v50; // r15
  char *v51; // rax
  void *v52; // rdi
  size_t v53; // rax
  size_t v54; // r14
  int v55; // eax
  char *v56; // r8
  int v57; // eax
  size_t v58; // rax
  const void *v59; // r8
  size_t v60; // r13
  size_t v61; // r13
  size_t v62; // r13
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rax
  void *v66; // rdx
  __m128i v67; // xmm0
  unsigned int v68; // r14d
  char *v69; // rdx
  __int64 v70; // rbx
  __int64 v71; // r15
  char *v72; // rax
  void *v73; // rdi
  int v74; // edx
  int v75; // ecx
  int v76; // r8d
  int v77; // r9d
  _QWORD *v78; // r8
  unsigned __int64 v79; // r14
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // r14
  size_t v83; // r9
  unsigned int v84; // edx
  __int64 *v85; // rdi
  __int64 v86; // rax
  unsigned int v87; // eax
  size_t v88; // rax
  size_t v89; // r14
  size_t v90; // rax
  const void *v91; // r10
  size_t v92; // r14
  size_t v93; // rax
  __int64 v94; // rcx
  const void *v95; // r8
  size_t v96; // r14
  bool v97; // r15
  __int64 v98; // r14
  void (*v99)(); // rax
  char *v100; // rdi
  size_t v101; // rax
  size_t v102; // r14
  size_t v103; // rax
  char *v104; // r10
  size_t v105; // r13
  void *v106; // rax
  unsigned __int64 v107; // r14
  const char *v108; // rdi
  char *v109; // r14
  char *v110; // rdi
  char *v111; // rdx
  __int64 v112; // r14
  __int64 v113; // r15
  __int64 v114; // r13
  char *v115; // rax
  void *v116; // rdi
  __int64 v117; // r10
  __int64 v118; // r13
  __int64 v119; // r14
  const char *v120; // r15
  const char *v121; // r9
  const char *v122; // r8
  int v123; // eax
  const char *v124; // rsi
  const char *v125; // rdx
  const char *v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rdi
  char *v129; // rdi
  __int64 v130; // rax
  __int64 v131; // rsi
  __int64 v132; // rbx
  __int64 v133; // r12
  __int64 v134; // r15
  char *v135; // r13
  void *v136; // rdi
  void *v137; // rdi
  __int64 v138; // rax
  __int64 v139; // rdi
  size_t v140; // r9
  _BYTE *v141; // rsi
  unsigned __int64 v142; // r14
  unsigned __int64 v143; // r15
  unsigned __int64 v144; // rcx
  char *v145; // r8
  unsigned __int64 v146; // rdx
  __int64 v147; // r10
  __int64 v148; // rdx
  unsigned __int64 v149; // r8
  void (__fastcall *v150)(char *, __int64, _QWORD, __int64); // r15
  size_t v151; // r14
  int v152; // eax
  __int64 v153; // rdi
  unsigned int v154; // eax
  char *v155; // r15
  const char *v156; // rcx
  const char *v157; // rdx
  const char *v158; // rsi
  __int64 v159; // rsi
  char *v160; // r12
  __int64 v161; // rbx
  char *v162; // r13
  void *v163; // rdi
  void *v164; // rdi
  void *v165; // rdi
  const char *v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r13
  __int64 v169; // r14
  const char *v170; // rdx
  const char *v171; // rdx
  size_t v172; // r14
  __int64 v173; // rax
  unsigned __int64 v174; // rsi
  unsigned __int64 v175; // rdx
  __int64 v176; // rcx
  unsigned __int64 v177; // rdi
  void *v178; // r13
  __m128i v179; // xmm0
  __int64 v180; // r14
  unsigned __int64 v181; // rax
  void *v182; // rdi
  __int64 v183; // rdi
  const char *v184; // rdx
  __int64 v185; // rdi
  void *v186; // rdi
  __int64 v187; // r14
  __int64 (__fastcall *v188)(__int64, char *, char *); // r8
  char *v189; // rsi
  __m128 v190; // xmm0
  __int64 v191; // r14
  size_t v192; // r13
  void *v193; // rsi
  __int64 v194; // rdx
  __int64 v195; // rcx
  int v196; // r8d
  int v197; // r9d
  char *v198; // rdi
  __int64 v199; // r14
  __int64 v200; // r15
  __int64 v201; // r13
  char *v202; // rdx
  void *v203; // rax
  char *v204; // rdi
  __int64 v205; // rax
  __int64 v206; // rbx
  char *v207; // r12
  char *v208; // rdx
  __int64 v209; // r15
  __int64 v210; // r14
  char *v211; // rax
  void *v212; // rdi
  char *v213; // rdi
  __int64 v214; // r15
  __int64 v215; // rsi
  char *v216; // r12
  __int64 v217; // rbx
  char *v218; // r13
  void *v219; // rdi
  void *v220; // rdi
  void *v221; // rdi
  void *v222; // rdi
  __int64 v223; // rdi
  unsigned int v224; // eax
  char *v225; // r14
  char *v226; // r13
  __int64 v227; // r13
  __int64 v228; // r15
  char *v229; // rbx
  char *v230; // rcx
  __int64 v231; // r14
  char *v232; // rdx
  void *v233; // rdi
  void *v234; // rdi
  __int64 v235; // rdi
  int v236; // ecx
  int v237; // r8d
  int v238; // r9d
  const char *v239; // rdi
  __int64 v240; // r9
  int v241; // eax
  size_t v242; // rax
  __int64 v243; // r15
  size_t v244; // r14
  __int64 v245; // rax
  char *v246; // rax
  void *v247; // rdx
  char *v248; // rdi
  const char **v249; // r13
  const char *v250; // rdx
  const char *v251; // rdx
  const char *v252; // rdx
  __int64 *v253; // rdi
  __int64 v254; // rax
  __int64 v255; // rdx
  __int64 v256; // rcx
  int v257; // r8d
  int v258; // r9d
  __int64 v259; // r15
  char *v260; // rdi
  __int64 v261; // r13
  char *v262; // rdx
  void *v263; // rax
  __int64 v264; // r13
  __int64 v265; // r15
  char *v266; // rdi
  char *v267; // rbx
  char *v268; // rcx
  __int64 v269; // r12
  char *v270; // rdx
  void *v271; // rdi
  int v272; // r8d
  void *v273; // rdx
  void *v274; // rcx
  __int64 v275; // rdi
  unsigned int v276; // eax
  unsigned __int8 *v277; // r15
  const char *v278; // r13
  const char *v279; // r14
  __int64 v280; // rdi
  const char *v281; // rax
  int v282; // eax
  size_t v283; // rax
  __int64 v284; // r15
  size_t v285; // r14
  char *v286; // rdx
  __int64 v287; // rax
  char *v288; // rax
  void *v289; // rdx
  unsigned int v290; // eax
  char *v291; // rdx
  __int64 v292; // r13
  __int64 v293; // rbx
  char *v294; // rax
  void *v295; // rdi
  char *v296; // rdx
  __int64 v297; // r15
  __int64 v298; // r13
  char *v299; // rax
  void *v300; // rdi
  __int64 *v301; // rdi
  __int64 v302; // rax
  void *v303; // rdi
  __int64 v304; // r15
  __int64 v305; // r13
  char *v306; // rdx
  char *v307; // rax
  void *v308; // rdi
  __int64 *v309; // rdi
  __int64 v310; // rax
  char *v311; // rdx
  __int64 v312; // r15
  __int64 v313; // r13
  char *v314; // rax
  void *v315; // rdi
  __int64 v316; // rdi
  double v317; // xmm4_8
  double v318; // xmm5_8
  const char *v319; // rsi
  __int64 v320; // rcx
  int v321; // r8d
  int v322; // r9d
  __int64 v323; // rdx
  const char *v324; // r14
  const char *v325; // r13
  __int64 v326; // r14
  char *v327; // rdi
  __int64 v328; // r15
  __int64 v329; // r13
  char *v330; // rdx
  void *v331; // rax
  __int64 v332; // r14
  __int64 v333; // r15
  char *v334; // rdi
  char *v335; // rbx
  char *v336; // rdx
  __int64 v337; // r13
  char *v338; // rax
  void *v339; // rdi
  __int64 v340; // r14
  __int64 v341; // r15
  char *v342; // r13
  void *v343; // rdi
  void *v344; // rdi
  void *v345; // rdi
  void *v346; // rdi
  void *v347; // rdi
  char *v348; // rcx
  int v349; // r8d
  __int64 v350; // rdi
  unsigned int v351; // eax
  char *v352; // rdi
  char *v353; // r13
  unsigned __int64 v354; // r14
  char *v355; // r9
  size_t v356; // r8
  __int64 v357; // r10
  _BYTE *v358; // rsi
  size_t v359; // rax
  __int64 v360; // r14
  const char *v361; // rcx
  size_t v362; // r14
  size_t v363; // r14
  unsigned __int64 v364; // rdx
  char *v365; // r9
  const char *v366; // rcx
  const void *v367; // r10
  void *v368; // rax
  int v369; // eax
  int v370; // eax
  void *v371; // rdi
  __int64 v372; // r14
  __int64 v373; // rdx
  _BYTE *v374; // rsi
  __int64 v375; // rdi
  char *v376; // rdx
  char *v377; // rdx
  char *v378; // rsi
  __int64 v379; // r14
  char *v380; // r12
  char *v381; // rbx
  unsigned int v382; // edi
  char *v383; // r8
  __int64 v384; // rax
  size_t v385; // r14
  int v386; // eax
  int v387; // eax
  __int64 v388; // rsi
  __int64 v389; // r15
  __int64 v390; // rax
  unsigned __int64 v391; // r14
  size_t v392; // r8
  void *v393; // rsi
  __m128i v394; // xmm0
  unsigned __int64 v395; // rax
  __int64 v396; // rdx
  __int64 v397; // r15
  __int64 v398; // r13
  char *v399; // rdx
  char *v400; // rax
  void *v401; // rdi
  __int64 v402; // r15
  __int64 v403; // rsi
  __int64 v404; // r14
  char *v405; // r12
  __int64 v406; // rbx
  char *v407; // r13
  void *v408; // rdi
  void *v409; // rdi
  void *v410; // rdi
  __int64 v411; // r15
  __int64 v412; // rsi
  char *v413; // r12
  __int64 v414; // rbx
  char *v415; // r13
  void *v416; // rdi
  void *v417; // rdi
  void *v418; // rdi
  __int64 v419; // rax
  char *v420; // r14
  char *v421; // rax
  __int64 v422; // rax
  char *v423; // r12
  __int64 v424; // rbx
  char *v425; // r13
  void *v426; // rdi
  void *v427; // rdi
  void *v428; // rdi
  void *v429; // rdi
  void *v430; // rdi
  double v431; // xmm4_8
  double v432; // xmm5_8
  __int64 v433; // rax
  int v434; // ecx
  int v435; // r8d
  int v436; // r9d
  const char *v437; // rdx
  const char *v438; // rdx
  __int64 v439; // r8
  __int64 v440; // r9
  void *v441; // rsi
  __int64 v442; // r13
  __int64 v443; // r15
  char *v444; // rbx
  void *v445; // rdi
  void *v446; // rdi
  void *v447; // rdi
  void *v448; // rdi
  __int64 v449; // rsi
  char *v450; // r12
  __int64 v451; // rbx
  char *v452; // r15
  void *v453; // rdi
  void *v454; // rdi
  void *v455; // rdi
  __int64 v456; // r13
  __int64 v457; // r15
  char *v458; // rbx
  char *v459; // rcx
  __int64 v460; // r12
  char *v461; // rdx
  void *v462; // rdi
  void *v463; // rdi
  __int64 v464; // rsi
  char *v465; // r12
  __int64 v466; // rbx
  char *v467; // r15
  void *v468; // rdi
  void *v469; // rdi
  void *v470; // rdi
  char v471; // al
  __int64 v472; // rax
  __int64 v473; // rdx
  size_t v474; // rax
  size_t v475; // r14
  __int64 v476; // rax
  void *v477; // r14
  __m128i v478; // xmm0
  __int64 v479; // r15
  char *v480; // rax
  __int64 v481; // rdi
  _BYTE *v482; // r15
  __int64 v483; // r14
  __int64 v484; // rdx
  size_t v485; // r15
  const char *v486; // rax
  const void *v487; // r13
  const void *v488; // r13
  size_t v489; // r15
  __int64 v490; // rax
  __int64 v491; // rsi
  void *v492; // rax
  __int64 v493; // rdx
  char *v494; // r8
  __int64 *v495; // rdi
  __int64 v496; // rax
  int v497; // r14d
  __int64 v498; // rax
  void *v499; // r14
  __m128i v500; // xmm0
  __m128i v501; // xmm1
  char *v502; // rax
  const void *v503; // r14
  void *v504; // rax
  __m128i v505; // [rsp+10h] [rbp-8C0h] BYREF
  size_t v506; // [rsp+20h] [rbp-8B0h]
  size_t n; // [rsp+28h] [rbp-8A8h]
  char *s; // [rsp+30h] [rbp-8A0h]
  __m128i src; // [rsp+38h] [rbp-898h] BYREF
  __int64 v510; // [rsp+48h] [rbp-888h]
  unsigned int v511; // [rsp+5Ch] [rbp-874h] BYREF
  void *v512; // [rsp+60h] [rbp-870h] BYREF
  unsigned __int64 v513; // [rsp+68h] [rbp-868h]
  unsigned __int64 v514; // [rsp+70h] [rbp-860h]
  void *ptr; // [rsp+80h] [rbp-850h] BYREF
  __int128 v516; // [rsp+88h] [rbp-848h]
  void *v517; // [rsp+A0h] [rbp-830h] BYREF
  __int128 v518; // [rsp+A8h] [rbp-828h]
  void *v519; // [rsp+C0h] [rbp-810h] BYREF
  __int128 v520; // [rsp+C8h] [rbp-808h]
  void *v521; // [rsp+E0h] [rbp-7F0h] BYREF
  __int128 v522; // [rsp+E8h] [rbp-7E8h]
  void *v523; // [rsp+100h] [rbp-7D0h] BYREF
  __int128 v524; // [rsp+108h] [rbp-7C8h]
  void *v525; // [rsp+120h] [rbp-7B0h] BYREF
  size_t v526[2]; // [rsp+128h] [rbp-7A8h]
  void *v527; // [rsp+138h] [rbp-798h] BYREF
  size_t v528[2]; // [rsp+140h] [rbp-790h]
  int v529; // [rsp+150h] [rbp-780h]
  void *v530; // [rsp+160h] [rbp-770h] BYREF
  __int128 v531; // [rsp+168h] [rbp-768h]
  void *dest; // [rsp+178h] [rbp-758h] BYREF
  __int128 v533; // [rsp+180h] [rbp-750h]
  __int64 v534; // [rsp+190h] [rbp-740h]
  unsigned __int64 v535; // [rsp+198h] [rbp-738h]
  int v536; // [rsp+1A0h] [rbp-730h]
  void *v537; // [rsp+1B0h] [rbp-720h] BYREF
  __int128 v538; // [rsp+1B8h] [rbp-718h]
  void *v539; // [rsp+1C8h] [rbp-708h]
  __int128 v540; // [rsp+1D0h] [rbp-700h]
  __int64 v541; // [rsp+1E0h] [rbp-6F0h]
  unsigned __int64 v542; // [rsp+1E8h] [rbp-6E8h]
  int v543; // [rsp+1F0h] [rbp-6E0h]
  void *v544; // [rsp+200h] [rbp-6D0h] BYREF
  __int128 v545; // [rsp+208h] [rbp-6C8h]
  void *v546; // [rsp+218h] [rbp-6B8h] BYREF
  __int128 v547; // [rsp+220h] [rbp-6B0h]
  void *v548; // [rsp+230h] [rbp-6A0h] BYREF
  __int128 v549; // [rsp+238h] [rbp-698h]
  void *v550; // [rsp+248h] [rbp-688h] BYREF
  __int128 v551; // [rsp+250h] [rbp-680h]
  __int64 v552; // [rsp+260h] [rbp-670h]
  void *v553; // [rsp+270h] [rbp-660h] BYREF
  __int128 v554; // [rsp+278h] [rbp-658h]
  __m128i v555; // [rsp+288h] [rbp-648h]
  char **v556; // [rsp+298h] [rbp-638h]
  __int64 v557; // [rsp+2A0h] [rbp-630h]
  __int128 v558; // [rsp+2A8h] [rbp-628h]
  void *v559; // [rsp+2B8h] [rbp-618h]
  __int128 v560; // [rsp+2C0h] [rbp-610h]
  void *v561; // [rsp+2D0h] [rbp-600h]
  __int128 v562; // [rsp+2D8h] [rbp-5F8h]
  __int64 v563; // [rsp+2E8h] [rbp-5E8h]
  void *v564; // [rsp+2F0h] [rbp-5E0h] BYREF
  __int128 v565; // [rsp+2F8h] [rbp-5D8h]
  void *v566; // [rsp+308h] [rbp-5C8h]
  __int128 v567; // [rsp+310h] [rbp-5C0h]
  __int128 v568; // [rsp+320h] [rbp-5B0h]
  __m128i si128; // [rsp+330h] [rbp-5A0h]
  int v570; // [rsp+340h] [rbp-590h]
  char v571; // [rsp+344h] [rbp-58Ch]
  void *v572; // [rsp+350h] [rbp-580h] BYREF
  __m128i v573; // [rsp+358h] [rbp-578h] BYREF
  void *v574; // [rsp+368h] [rbp-568h] BYREF
  __m128i v575; // [rsp+370h] [rbp-560h] BYREF
  void *v576; // [rsp+380h] [rbp-550h] BYREF
  __int128 v577; // [rsp+388h] [rbp-548h]
  void *v578[3]; // [rsp+398h] [rbp-538h] BYREF
  void *v579; // [rsp+3B0h] [rbp-520h]
  __int128 v580; // [rsp+3B8h] [rbp-518h]
  void *v581; // [rsp+3C8h] [rbp-508h]
  __int128 v582; // [rsp+3D0h] [rbp-500h]
  void *v583; // [rsp+3E0h] [rbp-4F0h]
  __int128 v584; // [rsp+3E8h] [rbp-4E8h]
  void *v585; // [rsp+3F8h] [rbp-4D8h]
  __int128 v586; // [rsp+400h] [rbp-4D0h]
  __int64 v587; // [rsp+410h] [rbp-4C0h]
  void *v588; // [rsp+418h] [rbp-4B8h]
  __int128 v589; // [rsp+420h] [rbp-4B0h]
  void *v590; // [rsp+430h] [rbp-4A0h]
  __int128 v591; // [rsp+438h] [rbp-498h]
  void *v592; // [rsp+448h] [rbp-488h]
  __int128 v593; // [rsp+450h] [rbp-480h]
  __int128 v594; // [rsp+460h] [rbp-470h]
  char v595; // [rsp+470h] [rbp-460h] BYREF
  _BYTE v596[1032]; // [rsp+490h] [rbp-440h] BYREF
  unsigned __int64 v597; // [rsp+898h] [rbp-38h]

  v597 = __readfsqword(0x28u);
  v10 = a2[1];
  if ( !v10 )
    return 58;
  v513 = 0;
  v11 = 0;
  src.m128i_i64[1] = a1;
  v12 = 0;
  v512 = (void *)sub_96030(24 * v10);
  v13 = (char *)v512;
  v514 = v10;
  while ( 1 )
  {
    v14 = &v13[24 * v11];
    v15 = *a2 + 24 * v11;
    *(_QWORD *)v14 = 0;
    *(_OWORD *)(v14 + 8) = v12;
    v16 = *(_QWORD *)(v15 + 8);
    v510 = v15;
    if ( v16 )
      break;
    if ( v10 == ++v11 )
      goto LABEL_7;
LABEL_4:
    v13 = (char *)v512;
  }
  ++v11;
  v17 = (void *)sub_96030(v16);
  *((_QWORD *)v14 + 2) = v16;
  *(_QWORD *)v14 = v17;
  memcpy(v17, *(const void **)v510, v16);
  *((_QWORD *)v14 + 1) = v16;
  v12 = 0;
  if ( v10 != v11 )
    goto LABEL_4;
LABEL_7:
  v18 = (__int64)&v512;
  v513 = v10;
  v19 = (char *)src.m128i_i64[1];
  ptr = nullptr;
  v516 = 0;
  v20 = sub_23450((__int64)&ptr, (void ***)&v512, (__int64)&off_15F2A0, qword_165638);
  v510 = (__int64)v20;
  if ( !v20 )
  {
    v33 = 58;
    goto LABEL_65;
  }
  v556 = v20;
  v24 = _mm_loadu_si128((const __m128i *)(src.m128i_i64[1] + 8));
  v558 = 0;
  v557 = 0x7FFFFFFF00000000LL;
  v560 = 0;
  v562 = 0;
  v565 = 0;
  v567 = 0;
  v554 = 0;
  v568 = 0;
  v563 = 0xFFFFFFFFLL;
  v559 = nullptr;
  v561 = nullptr;
  v564 = nullptr;
  v566 = nullptr;
  v570 = 0;
  v571 = 1;
  v555 = v24;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1301C0);
  v25 = *((_DWORD *)v20 + 7);
  v553 = nullptr;
  if ( !v24.m128i_i64[0] )
  {
    if ( v25 == 35 || v25 == 47 )
    {
      p_dest = &v553;
      src.m128i_i64[1] = (__int64)&v553;
      v27 = sub_1D720((_QWORD **)&v553, (unsigned __int64 *)&v512);
      if ( !v27 )
        goto LABEL_77;
    }
    else if ( v25 - 48 <= 1 || v25 - 50 <= 1 )
    {
      src.m128i_i64[1] = (__int64)&v553;
      v27 = sub_1D720((_QWORD **)&v553, (unsigned __int64 *)&v512);
      if ( !v27 )
        goto LABEL_13;
    }
    else
    {
      if ( v25 - 52 <= 1 || v25 - 54 <= 1 || v25 - 56 <= 1 || v25 - 58 <= 1 || v25 - 60 <= 1 )
      {
        src.m128i_i64[1] = (__int64)&v553;
      }
      else
      {
        src.m128i_i64[1] = (__int64)&v553;
        if ( v25 - 65 > 1 )
        {
          sub_708D0((unsigned int)"not logged in\n", (unsigned int)&v512, v21, (_DWORD)v20, v22, v23);
          v33 = 58;
          goto LABEL_15;
        }
      }
      p_dest = &v553;
      v27 = sub_1D720((_QWORD **)&v553, (unsigned __int64 *)&v512);
      if ( !v27 )
        goto LABEL_45;
    }
LABEL_75:
    v32 = sub_1A8D0(v19, v27, v510, (__int64)&v512);
    goto LABEL_14;
  }
  p_dest = &v553;
  src.m128i_i64[1] = (__int64)&v553;
  v27 = sub_1D720((_QWORD **)&v553, (unsigned __int64 *)&v512);
  if ( v27 )
    goto LABEL_75;
  if ( v25 == 4 )
    goto LABEL_13;
  v30 = v25 - 10;
  if ( (unsigned int)v30 <= 0x3E )
  {
    v28 = 0x5000001E00C60143LL;
    if ( _bittest64(&v28, v30) )
      goto LABEL_13;
LABEL_77:
    if ( v25 - 47 <= 4 )
    {
LABEL_13:
      v31 = sub_21280((__int64 *)src.m128i_i64[1], (__int64 *)&v512);
      v32 = sub_1A8D0(v19, v31, v510, (__int64)&v512);
LABEL_14:
      v33 = v32;
      goto LABEL_15;
    }
  }
LABEL_45:
  v530 = nullptr;
  dest = nullptr;
  v534 = 0;
  v535 = 0xFFFFFFFC00000000LL;
  v536 = 0;
  v531 = 0;
  v533 = 0;
  if ( !(_QWORD)v554 )
    goto LABEL_46;
  v78 = v553;
  if ( v553 != &v530 )
  {
    v79 = *((_QWORD *)v553 + 1);
    if ( v79 >= 2 )
    {
      v80 = *(_QWORD *)v553;
      v81 = *((_QWORD *)v553 + 1);
      n = v79 - 1;
      s = (char *)v553;
      src.m128i_i64[0] = v80;
      v530 = (void *)sub_96080(&v530, 0, v81, 1);
      *(_QWORD *)&v531 = v79;
      memmove(v530, (const void *)src.m128i_i64[0], v79 - 1);
      v78 = s;
      *((char *)v530 + v79 - 1) = 0;
    }
  }
  p_dest = &dest;
  if ( &dest != v78 + 3 )
  {
    v82 = v78[4];
    if ( v82 && (v83 = v82 - 1, v82 != 1) )
    {
      v367 = (const void *)v78[3];
      v368 = dest;
      if ( *((_QWORD *)&v533 + 1) < v82 )
      {
        v396 = v78[4];
        n = v78[3];
        s = (char *)(v82 - 1);
        src.m128i_i64[0] = (__int64)v78;
        v368 = (void *)sub_96080(&dest, dest, v396, 1);
        dest = v368;
        v367 = (const void *)n;
        v83 = v82 - 1;
        v78 = (_QWORD *)src.m128i_i64[0];
      }
      p_dest = (void **)v368;
      src.m128i_i64[0] = (__int64)v78;
      *(_QWORD *)&v533 = v82;
      memmove(v368, v367, v83);
      v78 = (_QWORD *)src.m128i_i64[0];
      *((char *)dest + v82 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v533 = 0;
    }
  }
  v534 = v78[6];
  v535 = v78[7];
  v536 = *((_DWORD *)v78 + 16);
  if ( (unsigned __int64)v531 > 1 )
    v42 = (char *)v530;
  else
LABEL_46:
    v42 = nullptr;
  v537 = nullptr;
  v542 = 0xFFFFFFFC00000000LL;
  v539 = nullptr;
  v541 = 0;
  v543 = 0;
  v538 = 0;
  v540 = 0;
  if ( v513 <= 2 )
  {
    v43 = nullptr;
    v44 = nullptr;
  }
  else
  {
    v28 = (__int64)v512;
    v43 = (char *)haystack;
    if ( *((_QWORD *)v512 + 7) )
      v43 = *((char **)v512 + 6);
    v44 = nullptr;
    if ( v513 != 3 )
    {
      v44 = (char *)haystack;
      if ( *((_QWORD *)v512 + 10) )
        v44 = *((char **)v512 + 9);
    }
  }
  v525 = nullptr;
  v527 = nullptr;
  v529 = 0;
  v511 = 0;
  *(_OWORD *)v526 = 0;
  *(_OWORD *)v528 = 0;
  if ( v25 > 0x35 )
  {
    if ( v25 != 71 )
      goto LABEL_61;
    goto LABEL_121;
  }
  if ( v25 > 0x33 )
  {
LABEL_121:
    if ( !*((_QWORD *)v19 + 2) )
    {
      sub_8F890(0, 0);
      sub_708D0(
        (unsigned int)"please specify a valid site with -s or with the VAULT_SITE envvar\n",
        0,
        v74,
        v75,
        v76,
        v77);
      v33 = 12;
      goto LABEL_107;
    }
    goto LABEL_61;
  }
  if ( v25 == 31 || v25 - 39 <= 2 )
  {
    v45 = *((_QWORD *)v19 + 2);
    p_dest = &v537;
    src.m128i_i64[0] = (__int64)v44;
    v46 = *(_DWORD *)(v510 + 36);
    s = v43;
    v33 = sub_1AAE0((__int64 *)&v537, v43, v46, v45);
    if ( v33 )
      goto LABEL_107;
    v44 = (char *)src.m128i_i64[0];
    if ( v25 - 40 <= 1 && HIDWORD(v535) != -4 && HIDWORD(v535) != -1 )
    {
      v366 = "file revision";
      if ( v536 != 2 )
      {
        v366 = "commit id";
        if ( !v536 )
          v366 = "worklist id";
      }
      sub_19CE0(src.m128i_i64[1], (__int64)"%s: %s cannot be specified for 'move'\n", s, v366);
      v33 = 58;
      goto LABEL_107;
    }
    v43 = nullptr;
    if ( (unsigned __int64)v538 > 1 )
      v43 = (char *)v537;
  }
LABEL_61:
  v47 = &v517;
  v517 = nullptr;
  if ( HIBYTE(v570) )
    v47 = nullptr;
  v518 = 0;
  switch ( v25 )
  {
    case 0u:
    case 0xCu:
      v572 = nullptr;
      v574 = nullptr;
      v576 = nullptr;
      memset(v578, 0, sizeof(v578));
      v579 = nullptr;
      v581 = nullptr;
      LOBYTE(v582) = 0;
      v573 = 0;
      v575 = 0;
      v577 = 0;
      v580 = 0;
      if ( v42 )
      {
        s = v43;
        v101 = strlen(v42);
        v43 = s;
        v102 = v101;
        src.m128i_i64[0] = (__int64)&v572;
        if ( v101 )
        {
          n = (size_t)s;
          s = (char *)(v101 + 1);
          v572 = (void *)sub_96080(&v572, 0, v101 + 1, 1);
          v573.m128i_i64[0] = v102 + 1;
          memmove(v572, v42, v102);
          v43 = (char *)n;
          *((_BYTE *)v572 + v102) = 0;
        }
      }
      else
      {
        src.m128i_i64[0] = (__int64)&v572;
      }
      if ( v43 && (s = v43, v103 = strlen(v43), v104 = s, (v105 = v103) != 0) )
      {
        v483 = v103 + 1;
        if ( v575.m128i_i64[1] < v103 + 1 )
        {
          v574 = (void *)sub_96080(&v574, v574, v103 + 1, 1);
          v104 = s;
        }
        v575.m128i_i64[0] = v483;
        memmove(v574, v104, v105);
        *((_BYTE *)v574 + v105) = 0;
      }
      else
      {
        v575.m128i_i64[0] = 0;
      }
      v106 = v512;
      if ( &v576 != (void **)((char *)v512 + 72) )
      {
        v107 = *((_QWORD *)v512 + 10);
        if ( v107 && (s = (char *)(v107 - 1), v107 != 1) )
        {
          v488 = *((const void **)v512 + 9);
          if ( *((_QWORD *)&v577 + 1) < v107 )
            v576 = (void *)sub_96080(&v576, v576, v107, 1);
          *(_QWORD *)&v577 = v107;
          memmove(v576, v488, (size_t)s);
          *((char *)v576 + v107 - 1) = 0;
          v106 = v512;
        }
        else
        {
          *(_QWORD *)&v577 = 0;
        }
      }
      v108 = haystack;
      if ( *((_QWORD *)v106 + 13) )
        v108 = *((const char **)v106 + 12);
      LOBYTE(v582) = (unsigned int)strtol(v108, nullptr, 10) != 0;
      if ( v578 != (void **)((char *)v512 + 120) )
      {
        v109 = *((char **)v512 + 16);
        if ( v109 && (s = v109 - 1, v109 != (_BYTE *)&dword_0 + 1) )
        {
          v487 = *((const void **)v512 + 15);
          if ( v578[2] < v109 )
            v578[0] = (void *)sub_96080(v578, v578[0], v109, 1);
          v578[1] = v109;
          memmove(v578[0], v487, (size_t)s);
          *((_BYTE *)v578[0] + (unsigned __int64)v109 - 1) = 0;
        }
        else
        {
          v578[1] = nullptr;
        }
      }
      v68 = (*(__int64 (__fastcall **)(_QWORD, __int64, bool))(**((_QWORD **)v19 + 1) + 16LL))(
              *((_QWORD *)v19 + 1),
              src.m128i_i64[0],
              v25 == 12);
      if ( v579 )
      {
        *(_QWORD *)&v580 = 0;
        j__free(v579);
      }
      if ( v578[0] )
      {
        v578[1] = nullptr;
        j__free(v578[0]);
      }
      if ( v576 )
      {
        *(_QWORD *)&v577 = 0;
        j__free(v576);
      }
      if ( v574 )
      {
        v575.m128i_i64[0] = 0;
        j__free(v574);
      }
      v110 = (char *)v572;
      if ( !v572 )
        goto LABEL_99;
      goto LABEL_859;
    case 1u:
      src.m128i_i64[0] = (__int64)v43;
      v152 = strtol(v44, nullptr, 10);
      v87 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, bool, double))(**((_QWORD **)v19 + 1) + 40LL))(
              *((_QWORD *)v19 + 1),
              v42,
              src.m128i_i64[0],
              v152 != 0,
              0.0);
      goto LABEL_137;
    case 2u:
    case 0xEu:
      v544 = nullptr;
      v546 = nullptr;
      v548 = nullptr;
      v550 = nullptr;
      v552 = 0;
      v545 = 0;
      v547 = 0;
      v549 = 0;
      v551 = 0;
      if ( v42 )
      {
        n = (size_t)v44;
        src.m128i_i64[0] = (__int64)v43;
        v88 = strlen(v42);
        v43 = (char *)src.m128i_i64[0];
        v44 = (char *)n;
        v89 = v88;
        s = (char *)&v544;
        if ( v88 )
        {
          v506 = n;
          n = src.m128i_i64[0];
          src.m128i_i64[0] = v88 + 1;
          v544 = (void *)sub_96080(&v544, 0, v88 + 1, 1);
          *(_QWORD *)&v545 = v89 + 1;
          memmove(v544, v42, v89);
          v44 = (char *)v506;
          v43 = (char *)n;
          *((_BYTE *)v544 + v89) = 0;
        }
      }
      else
      {
        s = (char *)&v544;
      }
      if ( v43
        && (n = (size_t)v44,
            src.m128i_i64[0] = (__int64)v43,
            v90 = strlen(v43),
            v91 = (const void *)src.m128i_i64[0],
            v44 = (char *)n,
            (v92 = v90) != 0) )
      {
        v473 = v90 + 1;
        if ( *((_QWORD *)&v549 + 1) < v90 + 1 )
        {
          v506 = n;
          n = src.m128i_i64[0];
          src.m128i_i64[0] = v90 + 1;
          v548 = (void *)sub_96080(&v548, v548, v473, 1);
          v44 = (char *)v506;
          v91 = (const void *)n;
          v473 = src.m128i_i64[0];
        }
        *(_QWORD *)&v549 = v473;
        src.m128i_i64[0] = (__int64)v44;
        memmove(v548, v91, v92);
        v44 = (char *)src.m128i_i64[0];
        *((_BYTE *)v548 + v92) = 0;
      }
      else
      {
        *(_QWORD *)&v549 = 0;
      }
      if ( v44 )
      {
        src.m128i_i64[0] = (__int64)v44;
        v93 = strlen(v44);
        v95 = (const void *)src.m128i_i64[0];
        v96 = v93;
        if ( v93 )
        {
          v484 = v93 + 1;
          if ( *((_QWORD *)&v551 + 1) < v93 + 1 )
          {
            n = src.m128i_i64[0];
            src.m128i_i64[0] = v93 + 1;
            v550 = (void *)sub_96080(&v550, v550, v484, 1);
            v95 = (const void *)n;
            v484 = src.m128i_i64[0];
          }
          *(_QWORD *)&v551 = v484;
          memmove(v550, v95, v96);
          v97 = v25 == 14;
          *((_BYTE *)v550 + v96) = 0;
        }
        else
        {
          *(_QWORD *)&v551 = 0;
          v97 = v25 == 14;
        }
        goto LABEL_147;
      }
      *(_QWORD *)&v551 = 0;
      if ( v25 != 14 )
      {
        v481 = *((_QWORD *)v19 + 1);
        v576 = nullptr;
        memset(v578, 0, sizeof(v578));
        v579 = nullptr;
        v572 = nullptr;
        v574 = nullptr;
        src.m128i_i64[0] = (__int64)&v572;
        v573 = 0;
        v575 = 0;
        v577 = 0;
        if ( !(*(unsigned int (__fastcall **)(__int64, void **, char *))(*(_QWORD *)v481 + 152LL))(v481, &v572, v42) )
        {
          v482 = v578[1];
          if ( v578[1] && (n = (size_t)v578[1] - 1, v578[1] != (char *)&dword_0 + 1) )
          {
            v503 = v578[0];
            if ( (void *)*((_QWORD *)&v551 + 1) < v578[1] )
              v550 = (void *)sub_96080(&v550, v550, v578[1], 1);
            *(_QWORD *)&v551 = v482;
            memmove(v550, v503, n);
            v482[(_QWORD)v550 - 1] = 0;
          }
          else
          {
            *(_QWORD *)&v551 = 0;
          }
        }
        v97 = 0;
        sub_1A780(src.m128i_i64[0]);
LABEL_147:
        v98 = v565;
        if ( (_QWORD)v565 && (src.m128i_i64[0] = v565 - 1, (_QWORD)v565 != 1) )
        {
          n = (size_t)v564;
          if ( *((_QWORD *)&v547 + 1) < (unsigned __int64)v565 )
            v546 = (void *)sub_96080(&v546, v546, v565, 1);
          *(_QWORD *)&v547 = v98;
          memmove(v546, (const void *)n, src.m128i_u64[0]);
          *((char *)v546 + v98 - 1) = 0;
        }
        else
        {
          *(_QWORD *)&v547 = 0;
        }
        v68 = (*(__int64 (__fastcall **)(_QWORD, char *, bool, __int64, const void *))(**((_QWORD **)v19 + 1) + 128LL))(
                *((_QWORD *)v19 + 1),
                s,
                v97,
                v94,
                v95);
        if ( !v68 )
        {
          v99 = *(void (**)())(*(_QWORD *)v19 + 40LL);
          if ( v99 != nullsub_4 )
            ((void (__fastcall *)(char *, char *))v99)(v19, v42);
        }
        if ( v550 )
        {
          *(_QWORD *)&v551 = 0;
          j__free(v550);
        }
        if ( v548 )
        {
          *(_QWORD *)&v549 = 0;
          j__free(v548);
        }
        if ( v546 )
        {
          *(_QWORD *)&v547 = 0;
          j__free(v546);
        }
        v100 = (char *)v544;
        if ( v544 )
        {
LABEL_795:
          *(_QWORD *)&v545 = 0;
          j__free(v100);
        }
        goto LABEL_99;
      }
      if ( (unsigned __int64)v565 <= 1 )
        goto LABEL_886;
      v581 = nullptr;
      v495 = *((__int64 **)v19 + 1);
      v572 = nullptr;
      v576 = nullptr;
      v579 = nullptr;
      v574 = nullptr;
      memset(v578, 0, sizeof(v578));
      LOBYTE(v582) = 0;
      v573 = 0;
      v575 = 0;
      v577 = 0;
      v580 = 0;
      v496 = *v495;
      src.m128i_i64[0] = (__int64)&v572;
      if ( (*(unsigned int (__fastcall **)(__int64 *, void **, _QWORD))(v496 + 104))(v495, &v572, 0) )
      {
        sub_1A680(src.m128i_i64[0]);
      }
      else
      {
        v497 = sub_1CBC0((__int64)&v572, (__int64)&v564);
        sub_1A680((__int64)&v572);
        if ( !v497 )
LABEL_886:
          sub_19C20((__int64)v19, (__int64 *)&v550);
      }
      v97 = 1;
      goto LABEL_147;
    case 3u:
      v87 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, __int64, char *, double))(**((_QWORD **)v19 + 1) + 240LL))(
              *((_QWORD *)v19 + 1),
              HIDWORD(v535),
              v43,
              v29,
              v44,
              0.0);
      goto LABEL_137;
    case 5u:
      v87 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, __int64, char *, double))(**((_QWORD **)v19 + 1) + 192LL))(
              *((_QWORD *)v19 + 1),
              HIDWORD(v535),
              v43,
              v29,
              v44,
              0.0);
      goto LABEL_137;
    case 6u:
      v87 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, __int64, char *, double))(**((_QWORD **)v19 + 1) + 24LL))(
              *((_QWORD *)v19 + 1),
              v42,
              si128.m128i_u32[2],
              v29,
              v44,
              0.0);
      goto LABEL_137;
    case 7u:
      v87 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, __int64, char *, double))(**((_QWORD **)v19 + 1) + 48LL))(
              *((_QWORD *)v19 + 1),
              v42,
              v28,
              v29,
              v44,
              0.0);
      goto LABEL_137;
    case 8u:
      v87 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, __int64, char *, double))(**((_QWORD **)v19 + 1) + 136LL))(
              *((_QWORD *)v19 + 1),
              v42,
              BYTE2(v570),
              v29,
              v44,
              0.0);
      goto LABEL_137;
    case 9u:
      v87 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, char *, double))(**((_QWORD **)v19 + 1) + 232LL))(
              *((_QWORD *)v19 + 1),
              HIDWORD(v535),
              v28,
              v29,
              v44,
              0.0);
      goto LABEL_137;
    case 0xDu:
      v87 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, __int64, char *, double))(**((_QWORD **)v19 + 1) + 32LL))(
              *((_QWORD *)v19 + 1),
              v42,
              v28,
              v29,
              v44,
              0.0);
      goto LABEL_137;
    case 0xFu:
      v68 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, char *, __int64, char *, double))(**((_QWORD **)v19 + 1)
                                                                                               + 224LL))(
              *((_QWORD *)v19 + 1),
              &v511,
              v42,
              v29,
              v44,
              0.0);
      if ( v68 )
        goto LABEL_99;
      sub_19CE0(src.m128i_i64[1], (__int64)"added worklist %d\n", v511);
      (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v19 + 48LL))(v19, v511);
      goto LABEL_98;
    case 0x11u:
      v153 = *((_QWORD *)v19 + 1);
      v572 = nullptr;
      src.m128i_i64[0] = (__int64)&v572;
      v573 = 0;
      v154 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64, char *))(*(_QWORD *)v153 + 80LL))(
               v153,
               &v572,
               v28,
               v29,
               v44);
      v110 = (char *)v572;
      v68 = v154;
      if ( !v154 )
      {
        v506 = (size_t)v572 + 96 * v573.m128i_i64[0];
        if ( (void *)v506 != v572 )
        {
          v155 = (char *)v572;
          s = &v595;
          do
          {
            sub_65BE0(s, 20, "%F", 0.0);
            n = (size_t)v596;
            sub_65BE0(v596, 20, "%F", 0.0);
            v156 = haystack;
            if ( *((_QWORD *)v155 + 7) )
              v156 = *((const char **)v155 + 6);
            v157 = haystack;
            if ( *((_QWORD *)v155 + 1) )
              v157 = *(const char **)v155;
            v158 = haystack;
            if ( *((_QWORD *)v155 + 4) )
              v158 = *((const char **)v155 + 3);
            sub_708D0(
              (unsigned int)"%-12s %-12s %-12s LOGIN=%s LAST=%s%s%s\n",
              (_DWORD)v158,
              (_DWORD)v157,
              (_DWORD)v156,
              (_DWORD)s,
              (unsigned int)v596);
            v155 += 96;
          }
          while ( (char *)v506 != v155 );
          v110 = (char *)v572;
        }
      }
      if ( !v110 )
        goto LABEL_99;
      if ( v573.m128i_i64[0] )
      {
        v159 = v510;
        v510 = 0;
        v160 = v19;
        v161 = v573.m128i_i64[0];
        src.m128i_i64[0] = v159;
        do
        {
          v162 = &v110[96 * v510];
          v163 = *((void **)v162 + 6);
          if ( v163 )
          {
            *((_QWORD *)v162 + 7) = 0;
            j__free(v163);
          }
          v164 = *((void **)v162 + 3);
          if ( v164 )
          {
            *((_QWORD *)v162 + 4) = 0;
            j__free(v164);
          }
          v165 = *(void **)v162;
          if ( *(_QWORD *)v162 )
          {
            *((_QWORD *)v162 + 1) = 0;
            j__free(v165);
          }
          ++v510;
          v110 = (char *)v572;
        }
        while ( v161 != v510 );
        v19 = v160;
        v18 = (__int64)&v512;
        v510 = src.m128i_i64[0];
      }
      goto LABEL_859;
    case 0x13u:
      v348 = nullptr;
      v519 = nullptr;
      v520 = 0;
      if ( v43 )
      {
        if ( *v43 != 42 || v43[1] )
          v348 = nullptr;
        else
          v348 = "*";
      }
      if ( (unsigned __int64)v531 > 1 || (v349 = -1, HIDWORD(v535) != -4) )
        v349 = HIDWORD(v535);
      v350 = *((_QWORD *)v19 + 1);
      v511 = v349;
      v351 = (*(__int64 (__fastcall **)(__int64, void **, char *, char *))(*(_QWORD *)v350 + 264LL))(
               v350,
               &v519,
               v43,
               v348);
      v352 = (char *)v519;
      v68 = v351;
      if ( v351 )
      {
        if ( v519 )
        {
          if ( (_QWORD)v520 )
          {
            v464 = v510;
            v510 = 0;
            v465 = v19;
            v466 = v520;
            src.m128i_i64[0] = v464;
            while ( 1 )
            {
              v467 = &v352[88 * v510];
              v468 = *((void **)v467 + 6);
              if ( v468 )
              {
                *((_QWORD *)v467 + 7) = 0;
                j__free(v468);
              }
              v469 = *((void **)v467 + 3);
              if ( v469 )
              {
                *((_QWORD *)v467 + 4) = 0;
                j__free(v469);
              }
              v470 = *(void **)v467;
              if ( *(_QWORD *)v467 )
              {
                *((_QWORD *)v467 + 1) = 0;
                j__free(v470);
              }
              if ( v466 == ++v510 )
                break;
              v352 = (char *)v519;
            }
            v352 = (char *)v519;
            v19 = v465;
            v18 = (__int64)&v512;
            v510 = src.m128i_i64[0];
          }
          *(_QWORD *)&v520 = 0;
          j__free(v352);
        }
        goto LABEL_99;
      }
      v353 = (char *)v519;
      v506 = (size_t)v519 + 88 * v520;
      if ( v519 == (void *)v506 )
      {
LABEL_701:
        if ( v352 )
        {
          v402 = 0;
          if ( (_QWORD)v520 )
          {
            v403 = v510;
            v510 = 0;
            v404 = v18;
            v405 = v19;
            v406 = v520;
            src.m128i_i64[0] = v403;
            do
            {
              v407 = &v352[v402];
              v408 = *(void **)&v352[v402 + 48];
              if ( v408 )
              {
                *((_QWORD *)v407 + 7) = 0;
                j__free(v408);
              }
              v409 = *((void **)v407 + 3);
              if ( v409 )
              {
                *((_QWORD *)v407 + 4) = 0;
                j__free(v409);
              }
              v410 = *(void **)v407;
              if ( *(_QWORD *)v407 )
              {
                *((_QWORD *)v407 + 1) = 0;
                j__free(v410);
              }
              ++v510;
              v402 += 88;
              v352 = (char *)v519;
            }
            while ( v406 != v510 );
            v19 = v405;
            v18 = v404;
            v510 = src.m128i_i64[0];
          }
          *(_QWORD *)&v520 = 0;
          j__free(v352);
        }
        goto LABEL_98;
      }
      while ( 1 )
      {
        v521 = nullptr;
        v522 = 0;
        v362 = *((_QWORD *)v353 + 7);
        if ( v362 )
        {
          v521 = (void *)sub_96030(*((_QWORD *)v353 + 7));
          *((_QWORD *)&v522 + 1) = v362;
          memcpy(v521, *((const void **)v353 + 6), v362);
          *(_QWORD *)&v522 = v362;
          if ( v362 != 1 )
          {
            v371 = v521;
            if ( v362 - 1 > 0x28 )
            {
              *(_QWORD *)&v522 = 41;
              *((_BYTE *)v521 + 40) = 0;
            }
            sub_97680(v371, 10, 32);
            src.m128i_i64[0] = (__int64)&v521;
            sub_19270((__int64 *)&v521, 32);
            v372 = v522;
            if ( (unsigned __int64)v522 > 1 )
            {
              v373 = v522 + 1;
              v374 = v521;
              s = (char *)(v522 - 1);
              v375 = src.m128i_i64[0];
              if ( *((_QWORD *)&v522 + 1) < (unsigned __int64)(v522 + 1) )
              {
                src.m128i_i64[0] = v522 + 1;
                v521 = (void *)sub_96080(v375, v521, v373, 1);
                v373 = v372 + 1;
                v374 = v521;
              }
              *(_QWORD *)&v522 = v373;
              v376 = s;
              v374[v372] = 0;
              memmove((char *)v521 + 1, v521, (size_t)v376);
              *(_BYTE *)v521 = 32;
            }
          }
        }
        if ( *((_QWORD *)v353 + 9) )
          sub_65BE0(v596, 1025, "%F %T");
        else
          v596[0] = 0;
        v545 = 0;
        v544 = nullptr;
        v544 = (void *)sub_96080(&v544, 0, 2, 1);
        *(_QWORD *)&v545 = 2;
        *(_BYTE *)v544 = 64;
        *((_BYTE *)v544 + 1) = 0;
        v572 = nullptr;
        v573 = 0;
        v363 = *((_QWORD *)v353 + 1);
        if ( v363 )
        {
          v572 = (void *)sub_96030(*((_QWORD *)v353 + 1));
          v573.m128i_i64[1] = v363;
          memcpy(v572, *(const void **)v353, v363);
          v573.m128i_i64[0] = v363;
          if ( !(_QWORD)v545 || (v392 = v545 - 1, (_QWORD)v545 == 1) )
          {
            v523 = nullptr;
            v524 = 0;
LABEL_633:
            v523 = (void *)sub_96030(v363);
            *((_QWORD *)&v524 + 1) = v363;
            memcpy(v523, v572, v363);
            *(_QWORD *)&v524 = v363;
            goto LABEL_614;
          }
          --v363;
          v365 = (char *)(v392 + v363);
          v364 = v545 + v363;
        }
        else
        {
          v364 = v545;
          if ( !(_QWORD)v545 )
          {
            v523 = nullptr;
            v524 = 0;
            v354 = *((_QWORD *)v353 + 4);
            if ( !v354 )
              goto LABEL_595;
LABEL_587:
            v355 = (char *)(v354 - 1);
            if ( v354 != 1 )
            {
              v356 = v524;
              v357 = v354 - 1;
              if ( (_QWORD)v524 )
              {
                v356 = v524 - 1;
                v357 = (__int64)&v355[v524 - 1];
                v354 += v524 - 1;
              }
              v358 = v523;
              if ( *((_QWORD *)&v524 + 1) < v354 )
              {
                n = v356;
                s = v355;
                src.m128i_i64[0] = v357;
                v523 = (void *)sub_96080(&v523, v523, v354, 1);
                v356 = n;
                v358 = v523;
                v355 = s;
                v357 = src.m128i_i64[0];
              }
              *(_QWORD *)&v524 = v354;
              v358[v357] = 0;
              memcpy((char *)v523 + v356, *((const void **)v353 + 3), (size_t)v355);
            }
            goto LABEL_593;
          }
          v365 = (char *)(v545 - 1);
          if ( (_QWORD)v545 == 1 )
          {
            v524 = 0;
            v523 = nullptr;
            goto LABEL_614;
          }
          v392 = v545 - 1;
        }
        v393 = v572;
        if ( v573.m128i_i64[1] < v364 )
        {
          n = v392;
          s = v365;
          src.m128i_i64[0] = v364;
          v572 = (void *)sub_96080(&v572, v572, v364, 1);
          v392 = n;
          v393 = v572;
          v365 = s;
          v364 = src.m128i_i64[0];
        }
        v573.m128i_i64[0] = v364;
        v365[(_QWORD)v393] = 0;
        memcpy((char *)v572 + v363, v544, v392);
        v363 = v573.m128i_i64[0];
        v523 = nullptr;
        v524 = 0;
        if ( v573.m128i_i64[0] )
          goto LABEL_633;
LABEL_614:
        v354 = *((_QWORD *)v353 + 4);
        if ( v354 )
          goto LABEL_587;
LABEL_593:
        if ( v572 )
        {
          v573.m128i_i64[0] = 0;
          j__free(v572);
        }
LABEL_595:
        if ( v544 )
        {
          *(_QWORD *)&v545 = 0;
          j__free(v544);
        }
        v572 = nullptr;
        v573 = 0;
        src.m128i_i64[0] = (__int64)&v572;
        sub_17D80((char **)&v572);
        v359 = v522;
        if ( (unsigned __int64)v522 <= 1 )
        {
          v360 = (__int64)v572;
          v505.m128i_i64[1] = v573.m128i_i64[0];
          if ( v573.m128i_i64[0] > 1uLL )
          {
            v505.m128i_i64[0] = (__int64)v572;
            v377 = (char *)v572 + v505.m128i_i64[1] - 1;
            if ( v572 < v377 )
            {
              v378 = (char *)v510;
              n = v522;
              v510 = (__int64)v572;
              v379 = v18;
              v380 = v19;
              v381 = (char *)v572 + v505.m128i_i64[1] - 1;
              s = v378;
              while ( 1 )
              {
                v382 = *(v381 - 1);
                if ( v382 > 0x7F || !isspace(v382) )
                  break;
                if ( (char *)v510 == --v381 )
                {
                  v19 = v380;
                  v18 = v379;
                  v360 = v510;
                  v359 = n;
                  v510 = (__int64)s;
                  goto LABEL_658;
                }
              }
              v377 = v381;
              v19 = v380;
              v18 = v379;
              v360 = v510;
              v359 = n;
              v510 = (__int64)s;
            }
            s = &v377[-v360];
            if ( v377 == (char *)v360 )
            {
LABEL_658:
              if ( v360 )
              {
                v573.m128i_i64[0] = 0;
                j__free((void *)v360);
                v359 = v522;
                v360 = 0;
                v572 = nullptr;
                v573.m128i_i64[1] = 0;
              }
            }
            else
            {
              v383 = s + 1;
              if ( v505.m128i_i64[1] < (unsigned __int64)(s + 1) )
              {
                if ( v573.m128i_i64[1] < (unsigned __int64)v383 )
                {
                  n = (size_t)(s + 1);
                  v505.m128i_i64[0] = sub_96080(src.m128i_i64[0], v360, s + 1, 1);
                  v383 = s + 1;
                  v572 = (void *)v505.m128i_i64[0];
                  v505.m128i_i64[1] = v573.m128i_i64[0];
                }
                src.m128i_i64[0] = (__int64)v383;
                memset((void *)(v505.m128i_i64[1] + v505.m128i_i64[0]), 0, (size_t)&v383[-v505.m128i_i64[1]]);
                v360 = (__int64)v572;
                v573.m128i_i64[0] = src.m128i_i64[0];
              }
              else if ( (char *)v505.m128i_i64[1] != s + 1 )
              {
                v573.m128i_i64[0] = (__int64)(s + 1);
              }
              s[v360] = 0;
              v359 = v522;
              v360 = (__int64)v572;
            }
          }
          if ( !v359 )
          {
            v361 = haystack;
            goto LABEL_600;
          }
        }
        else
        {
          v360 = (__int64)v572;
        }
        v361 = (const char *)v521;
LABEL_600:
        sub_19CE0(src.m128i_i64[1], (__int64)"%s%s\n", (const char *)v360, v361);
        if ( v572 )
        {
          v573.m128i_i64[0] = 0;
          j__free(v572);
        }
        if ( v523 )
        {
          *(_QWORD *)&v524 = 0;
          j__free(v523);
        }
        if ( v521 )
        {
          *(_QWORD *)&v522 = 0;
          j__free(v521);
        }
        v353 += 88;
        if ( (char *)v506 == v353 )
        {
          v352 = (char *)v519;
          goto LABEL_701;
        }
      }
    case 0x14u:
      v309 = *((__int64 **)v19 + 1);
      v572 = nullptr;
      v573 = 0;
      v310 = *v309;
      src.m128i_i64[0] = (__int64)&v572;
      v68 = (*(__int64 (__fastcall **)(__int64 *, void **, _QWORD, __int64, char *))(v310 + 200))(
              v309,
              &v572,
              HIDWORD(v535),
              v29,
              v44);
      if ( !v68 )
        sub_19E20(src.m128i_i64[1], (__int64 *)&v572, 0);
      v311 = (char *)v572;
      if ( v572 )
      {
        v312 = v573.m128i_i64[0];
        if ( v573.m128i_i64[0] )
        {
          v313 = 0;
          do
          {
            v314 = &v311[80 * v313];
            v315 = *(void **)v314;
            if ( *(_QWORD *)v314 )
            {
              *((_QWORD *)v314 + 1) = 0;
              j__free(v315);
              v311 = (char *)v572;
            }
            ++v313;
          }
          while ( v312 != v313 );
        }
        v573.m128i_i64[0] = 0;
        j__free(v311);
      }
      goto LABEL_99;
    case 0x15u:
      v544 = nullptr;
      v545 = 0;
      if ( (unsigned __int64)v531 > 1 || (v272 = -1, HIDWORD(v535) != -4) )
        v272 = HIDWORD(v535);
      v273 = nullptr;
      v511 = v272;
      if ( (unsigned __int64)v565 > 1 )
        v273 = v564;
      v274 = nullptr;
      if ( (unsigned __int64)v567 > 1 )
        v274 = v566;
      v275 = *((_QWORD *)v19 + 1);
      s = (char *)&v544;
      v276 = (*(__int64 (__fastcall **)(__int64, void **, void *, void *))(*(_QWORD *)v275 + 272LL))(
               v275,
               &v544,
               v273,
               v274);
      v100 = (char *)v544;
      v68 = v276;
      if ( !v276 )
      {
        v277 = (unsigned __int8 *)v544;
        n = (size_t)v544 + 88 * v545;
        if ( v544 != (void *)n )
        {
          do
          {
            v572 = nullptr;
            v573 = 0;
            if ( *((_DWORD *)v277 + 18) != *((_DWORD *)v277 + 19) )
              sub_17D80((char **)&v572);
            if ( *((_QWORD *)v277 + 1) > 1u )
              sub_21D30((__int64 *)&v572);
            if ( *((_QWORD *)v277 + 4) > 1u )
              sub_21D30((__int64 *)&v572);
            v278 = haystack;
            if ( v573.m128i_i64[0] )
              v278 = (const char *)v572;
            v279 = haystack;
            if ( *((_QWORD *)v277 + 7) )
              v279 = *((const char **)v277 + 6);
            v280 = v277[84];
            src.m128i_i32[0] = *((_DWORD *)v277 + 18);
            v281 = (const char *)sub_64080(v280);
            sub_19CE0(
              src.m128i_i64[1],
              (__int64)"WL %d %-4s %s#%d%s\n",
              *((_DWORD *)v277 + 20),
              v281,
              v279,
              src.m128i_i32[0],
              v278);
            if ( v572 )
            {
              v573.m128i_i64[0] = 0;
              j__free(v572);
            }
            v277 += 88;
          }
          while ( (unsigned __int8 *)n != v277 );
          v100 = (char *)v544;
        }
        if ( v100 )
        {
          v411 = 0;
          if ( (_QWORD)v545 )
          {
            v412 = v510;
            v510 = 0;
            v413 = v19;
            v414 = v545;
            src.m128i_i64[0] = v412;
            do
            {
              v415 = &v100[v411];
              v416 = *(void **)&v100[v411 + 48];
              if ( v416 )
              {
                *((_QWORD *)v415 + 7) = 0;
                j__free(v416);
              }
              v417 = *((void **)v415 + 3);
              if ( v417 )
              {
                *((_QWORD *)v415 + 4) = 0;
                j__free(v417);
              }
              v418 = *(void **)v415;
              if ( *(_QWORD *)v415 )
              {
                *((_QWORD *)v415 + 1) = 0;
                j__free(v418);
              }
              ++v510;
              v411 += 88;
              v100 = (char *)v544;
            }
            while ( v414 != v510 );
            v19 = v413;
            v18 = (__int64)&v512;
            v510 = src.m128i_i64[0];
          }
          *(_QWORD *)&v545 = 0;
          j__free(v100);
        }
        goto LABEL_98;
      }
      if ( !v544 )
        goto LABEL_99;
      if ( (_QWORD)v545 )
      {
        v449 = v510;
        v510 = 0;
        v450 = v19;
        v451 = v545;
        src.m128i_i64[0] = v449;
        while ( 1 )
        {
          v452 = &v100[88 * v510];
          v453 = *((void **)v452 + 6);
          if ( v453 )
          {
            *((_QWORD *)v452 + 7) = 0;
            j__free(v453);
          }
          v454 = *((void **)v452 + 3);
          if ( v454 )
          {
            *((_QWORD *)v452 + 4) = 0;
            j__free(v454);
          }
          v455 = *(void **)v452;
          if ( *(_QWORD *)v452 )
          {
            *((_QWORD *)v452 + 1) = 0;
            j__free(v455);
          }
          if ( v451 == ++v510 )
            break;
          v100 = (char *)v544;
        }
        v100 = (char *)v544;
        v19 = v450;
        v18 = (__int64)&v512;
        v510 = src.m128i_i64[0];
      }
      goto LABEL_795;
    case 0x16u:
      v253 = *((__int64 **)v19 + 1);
      v572 = nullptr;
      v574 = nullptr;
      v576 = nullptr;
      memset(v578, 0, sizeof(v578));
      v579 = nullptr;
      v581 = nullptr;
      LOBYTE(v582) = 0;
      v573 = 0;
      v575 = 0;
      v577 = 0;
      v580 = 0;
      v254 = *v253;
      src.m128i_i64[0] = (__int64)&v572;
      v68 = (*(__int64 (__fastcall **)(__int64 *, void **, char *, __int64, char *))(v254 + 104))(
              v253,
              &v572,
              v42,
              v29,
              v44);
      if ( !v68 )
      {
        v544 = nullptr;
        s = (char *)&v544;
        v546 = nullptr;
        v545 = 0;
        v547 = 0;
        sub_21E00((__int64 *)&v544, (__int64)&v572, 0.0);
        sub_199C0((__int64 *)&v544, (__int64)&v572, v255, v256, v257, v258);
        if ( v546 )
        {
          v259 = v547;
          if ( (_QWORD)v547 )
          {
            v260 = (char *)v546;
            v261 = 0;
            do
            {
              v262 = &v260[24 * v261];
              v263 = *(void **)v262;
              if ( *(_QWORD *)v262 )
              {
                *((_QWORD *)v262 + 1) = 0;
                j__free(v263);
                v260 = (char *)v546;
              }
              ++v261;
            }
            while ( v259 != v261 );
          }
          else
          {
            v260 = (char *)v546;
          }
          *(_QWORD *)&v547 = 0;
          j__free(v260);
        }
        if ( v544 )
        {
          if ( (_QWORD)v545 )
          {
            v264 = 0;
            v265 = v545;
            s = v19;
            n = (size_t)&v512;
            v266 = (char *)v544;
            src.m128i_i64[0] = v510;
            do
            {
              v267 = &v266[24 * v264];
              v268 = *(char **)v267;
              if ( *(_QWORD *)v267 )
              {
                v269 = 0;
                v510 = *((_QWORD *)v267 + 1);
                if ( v510 )
                {
                  do
                  {
                    v270 = &v268[24 * v269];
                    v271 = *(void **)v270;
                    if ( *(_QWORD *)v270 )
                    {
                      *((_QWORD *)v270 + 1) = 0;
                      j__free(v271);
                      v268 = *(char **)v267;
                    }
                    ++v269;
                  }
                  while ( v510 != v269 );
                }
                *((_QWORD *)v267 + 1) = 0;
                j__free(v268);
                v266 = (char *)v544;
              }
              ++v264;
            }
            while ( v265 != v264 );
            v19 = s;
            v18 = n;
            v510 = src.m128i_i64[0];
          }
          else
          {
            v266 = (char *)v544;
          }
          *(_QWORD *)&v545 = 0;
          j__free(v266);
        }
      }
      if ( v579 )
      {
        *(_QWORD *)&v580 = 0;
        j__free(v579);
      }
      if ( v578[0] )
      {
        v578[1] = nullptr;
        j__free(v578[0]);
      }
      if ( v576 )
      {
        *(_QWORD *)&v577 = 0;
        j__free(v576);
      }
      if ( v574 )
      {
        v575.m128i_i64[0] = 0;
        j__free(v574);
      }
      v110 = (char *)v572;
      if ( v572 )
        goto LABEL_859;
      goto LABEL_99;
    case 0x17u:
      v316 = *((_QWORD *)v19 + 1);
      v544 = nullptr;
      s = (char *)&v544;
      v545 = 0;
      v68 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64, char *))(*(_QWORD *)v316 + 96LL))(
              v316,
              &v544,
              v28,
              v29,
              v44);
      if ( !v68 )
      {
        v572 = nullptr;
        v573 = 0;
        src.m128i_i64[0] = (__int64)&v572;
        v575 = 0;
        v319 = "LastActive";
        v574 = nullptr;
        sub_1BB80(
          (__int64 *)&v572,
          "LastActive",
          0.0,
          *(double *)v24.m128i_i64,
          a5,
          a6,
          v317,
          v318,
          a9,
          a10,
          "Adm",
          "Login",
          "RealName/Email",
          "Notes",
          0);
        v323 = v545;
        v324 = (const char *)v544;
        v325 = (char *)v544 + 136 * v545;
        if ( v544 != v325 )
        {
          do
          {
            v319 = v324;
            sub_21E00((__int64 *)src.m128i_i64[0], (__int64)v324, 0.0);
            v324 += 136;
          }
          while ( v325 != v324 );
        }
        sub_199C0((__int64 *)src.m128i_i64[0], (__int64)v319, v323, v320, v321, v322);
        if ( v574 )
        {
          v326 = v575.m128i_i64[0];
          if ( v575.m128i_i64[0] )
          {
            v327 = (char *)v574;
            v328 = v510;
            v329 = 0;
            do
            {
              v330 = &v327[24 * v329];
              v331 = *(void **)v330;
              if ( *(_QWORD *)v330 )
              {
                *((_QWORD *)v330 + 1) = 0;
                j__free(v331);
                v327 = (char *)v574;
              }
              ++v329;
            }
            while ( v326 != v329 );
            v510 = v328;
          }
          else
          {
            v327 = (char *)v574;
          }
          v575.m128i_i64[0] = 0;
          j__free(v327);
        }
        if ( v572 )
        {
          if ( v573.m128i_i64[0] )
          {
            s = v19;
            v332 = 0;
            v333 = v573.m128i_i64[0];
            v334 = (char *)v572;
            src.m128i_i64[0] = v510;
            do
            {
              v335 = &v334[24 * v332];
              v336 = *(char **)v335;
              if ( *(_QWORD *)v335 )
              {
                v337 = 0;
                v510 = *((_QWORD *)v335 + 1);
                if ( v510 )
                {
                  do
                  {
                    v338 = &v336[24 * v337];
                    v339 = *(void **)v338;
                    if ( *(_QWORD *)v338 )
                    {
                      *((_QWORD *)v338 + 1) = 0;
                      j__free(v339);
                      v336 = *(char **)v335;
                    }
                    ++v337;
                  }
                  while ( v510 != v337 );
                }
                *((_QWORD *)v335 + 1) = 0;
                j__free(v336);
                v334 = (char *)v572;
              }
              ++v332;
            }
            while ( v333 != v332 );
            v19 = s;
            v510 = src.m128i_i64[0];
          }
          else
          {
            v334 = (char *)v572;
          }
          v573.m128i_i64[0] = 0;
          j__free(v334);
        }
        if ( v544 )
        {
          v340 = v545;
          v341 = 0;
          if ( (_QWORD)v545 )
          {
            do
            {
              v342 = (char *)v544 + 136 * v341;
              v343 = *((void **)v342 + 12);
              if ( v343 )
              {
                *((_QWORD *)v342 + 13) = 0;
                j__free(v343);
              }
              v344 = *((void **)v342 + 9);
              if ( v344 )
              {
                *((_QWORD *)v342 + 10) = 0;
                j__free(v344);
              }
              v345 = *((void **)v342 + 6);
              if ( v345 )
              {
                *((_QWORD *)v342 + 7) = 0;
                j__free(v345);
              }
              v346 = *((void **)v342 + 3);
              if ( v346 )
              {
                *((_QWORD *)v342 + 4) = 0;
                j__free(v346);
              }
              v347 = *(void **)v342;
              if ( *(_QWORD *)v342 )
              {
                *((_QWORD *)v342 + 1) = 0;
                j__free(v347);
              }
              ++v341;
            }
            while ( v340 != v341 );
          }
          *(_QWORD *)&v545 = 0;
          j__free(v544);
        }
        goto LABEL_98;
      }
      if ( v544 )
      {
        if ( (_QWORD)v545 )
        {
          v422 = v510;
          v510 = 0;
          v423 = v19;
          v424 = v545;
          src.m128i_i64[0] = v422;
          do
          {
            v425 = (char *)v544 + 136 * v510;
            v426 = *((void **)v425 + 12);
            if ( v426 )
            {
              *((_QWORD *)v425 + 13) = 0;
              j__free(v426);
            }
            v427 = *((void **)v425 + 9);
            if ( v427 )
            {
              *((_QWORD *)v425 + 10) = 0;
              j__free(v427);
            }
            v428 = *((void **)v425 + 6);
            if ( v428 )
            {
              *((_QWORD *)v425 + 7) = 0;
              j__free(v428);
            }
            v429 = *((void **)v425 + 3);
            if ( v429 )
            {
              *((_QWORD *)v425 + 4) = 0;
              j__free(v429);
            }
            v430 = *(void **)v425;
            if ( *(_QWORD *)v425 )
            {
              *((_QWORD *)v425 + 1) = 0;
              j__free(v430);
            }
            ++v510;
          }
          while ( v424 != v510 );
          v19 = v423;
          v18 = (__int64)&v512;
          v510 = src.m128i_i64[0];
        }
        *(_QWORD *)&v545 = 0;
        j__free(v544);
      }
      goto LABEL_99;
    case 0x18u:
      v301 = *((__int64 **)v19 + 1);
      v572 = nullptr;
      v573 = 0;
      v574 = nullptr;
      v575 = 0;
      v302 = *v301;
      src.m128i_i64[0] = (__int64)&v572;
      v68 = (*(__int64 (__fastcall **)(__int64 *, void **, char *, __int64, char *))(v302 + 120))(
              v301,
              &v572,
              v42,
              v29,
              v44);
      if ( !v68 )
        sub_18CF0((__int64)&v572);
      v303 = v574;
      if ( v574 )
      {
        v304 = v575.m128i_i64[0];
        v305 = 0;
        v306 = (char *)v574;
        if ( v575.m128i_i64[0] )
        {
          do
          {
            v307 = &v306[24 * v305];
            v308 = *(void **)v307;
            if ( *(_QWORD *)v307 )
            {
              *((_QWORD *)v307 + 1) = 0;
              j__free(v308);
              v306 = (char *)v574;
            }
            ++v305;
          }
          while ( v304 != v305 );
          v303 = v306;
        }
        v575.m128i_i64[0] = 0;
        j__free(v303);
      }
      v110 = (char *)v572;
      if ( v572 )
        goto LABEL_859;
      goto LABEL_99;
    case 0x19u:
      v223 = *((_QWORD *)v19 + 1);
      v572 = nullptr;
      src.m128i_i64[0] = (__int64)&v572;
      v573 = 0;
      v224 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64, char *))(*(_QWORD *)v223 + 112LL))(
               v223,
               &v572,
               v28,
               v29,
               v44);
      v110 = (char *)v572;
      v68 = v224;
      if ( v224 )
      {
        if ( v572 )
        {
          v456 = 0;
          if ( v573.m128i_i64[0] )
          {
            s = v19;
            v457 = v573.m128i_i64[0];
            n = (size_t)&v512;
            src.m128i_i64[0] = v510;
            while ( 1 )
            {
              v458 = &v110[48 * v456];
              v459 = *((char **)v458 + 3);
              if ( v459 )
              {
                v460 = 0;
                v510 = *((_QWORD *)v458 + 4);
                if ( v510 )
                {
                  do
                  {
                    v461 = &v459[24 * v460];
                    v462 = *(void **)v461;
                    if ( *(_QWORD *)v461 )
                    {
                      *((_QWORD *)v461 + 1) = 0;
                      j__free(v462);
                      v459 = *((char **)v458 + 3);
                    }
                    ++v460;
                  }
                  while ( v510 != v460 );
                }
                *((_QWORD *)v458 + 4) = 0;
                j__free(v459);
              }
              v463 = *(void **)v458;
              if ( *(_QWORD *)v458 )
              {
                *((_QWORD *)v458 + 1) = 0;
                j__free(v463);
              }
              if ( v457 == ++v456 )
                break;
              v110 = (char *)v572;
            }
            v19 = s;
            v18 = n;
            v110 = (char *)v572;
            v510 = src.m128i_i64[0];
          }
LABEL_859:
          v573.m128i_i64[0] = 0;
          j__free(v110);
        }
        goto LABEL_99;
      }
      v225 = (char *)v572;
      v226 = (char *)v572 + 48 * v573.m128i_i64[0];
      if ( v226 != v572 )
      {
        do
        {
          sub_18CF0((__int64)v225);
          v225 += 48;
        }
        while ( v226 != v225 );
        v110 = (char *)v572;
      }
      if ( v110 )
      {
        v227 = 0;
        if ( v573.m128i_i64[0] )
        {
          s = v19;
          v228 = v573.m128i_i64[0];
          src.m128i_i64[0] = v510;
          do
          {
            v229 = &v110[48 * v227];
            v230 = *((char **)v229 + 3);
            if ( v230 )
            {
              v510 = 0;
              v231 = *((_QWORD *)v229 + 4);
              if ( v231 )
              {
                do
                {
                  v232 = &v230[24 * v510];
                  v233 = *(void **)v232;
                  if ( *(_QWORD *)v232 )
                  {
                    *((_QWORD *)v232 + 1) = 0;
                    j__free(v233);
                    v230 = *((char **)v229 + 3);
                  }
                  ++v510;
                }
                while ( v231 != v510 );
              }
              *((_QWORD *)v229 + 4) = 0;
              j__free(v230);
            }
            v234 = *(void **)v229;
            if ( *(_QWORD *)v229 )
            {
              *((_QWORD *)v229 + 1) = 0;
              j__free(v234);
            }
            ++v227;
            v110 = (char *)v572;
          }
          while ( v228 != v227 );
          v19 = s;
          v510 = src.m128i_i64[0];
        }
        goto LABEL_836;
      }
      goto LABEL_98;
    case 0x1Au:
      v187 = *((_QWORD *)v19 + 1);
      if ( (unsigned __int64)v531 <= 1 && HIDWORD(v535) == -4 )
      {
        v523 = nullptr;
        v524 = 0;
        v68 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, __int64, char *))(*(_QWORD *)v187 + 144LL))(
                v187,
                &v523,
                0,
                v29,
                v44);
        if ( !v68 )
        {
          v190 = 0;
          v572 = nullptr;
          src.m128i_i64[0] = (__int64)&v572;
          v573 = 0;
          v575 = 0;
          v574 = nullptr;
          sub_1BB80(
            (__int64 *)&v572,
            "Site name",
            0.0,
            *(double *)v24.m128i_i64,
            a5,
            a6,
            v431,
            v432,
            a9,
            a10,
            "User",
            "Host",
            "Last Used",
            "Rootdir",
            "Cur",
            0);
          goto LABEL_329;
        }
      }
      else
      {
        v524 = 0;
        v523 = nullptr;
        src.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)v187 + 152LL);
        v523 = (void *)sub_96080(&v523, 0, 1, 104);
        v188 = (__int64 (__fastcall *)(__int64, char *, char *))src.m128i_i64[0];
        v189 = (char *)v523 + 104 * v524;
        *(_QWORD *)v189 = 0;
        *((_QWORD *)v189 + 3) = 0;
        *((_QWORD *)v189 + 6) = 0;
        *((_QWORD *)v189 + 9) = 0;
        *((_QWORD *)v189 + 12) = 0;
        *(_OWORD *)(v189 + 8) = 0;
        *((_OWORD *)v189 + 2) = 0;
        *(_OWORD *)(v189 + 56) = 0;
        *((_OWORD *)v189 + 5) = 0;
        *(_QWORD *)&v524 = v524 + 1;
        v68 = v188(v187, v189, v42);
        if ( !v68 )
        {
          v190 = 0;
          v572 = nullptr;
          v574 = nullptr;
          src.m128i_i64[0] = (__int64)&v572;
          v573 = 0;
          v575 = 0;
LABEL_329:
          v191 = *((_QWORD *)v19 + 2);
          if ( v191 )
          {
            v190 = 0;
            v544 = nullptr;
            v545 = 0;
            v192 = *(_QWORD *)(v191 + 16);
            s = (char *)&v544;
            if ( v192 )
            {
              v544 = (void *)sub_96030(v192);
              *((_QWORD *)&v545 + 1) = v192;
              memcpy(v544, *(const void **)(v191 + 8), v192);
              *(_QWORD *)&v545 = v192;
              s = (char *)&v544;
            }
          }
          else
          {
            s = (char *)&v544;
            sub_17260((__int64)&v544, "");
          }
          v193 = v523;
          sub_1C1C0((__int64 *)src.m128i_i64[0], (const char **)v523, v524, (__int64)s, v190);
          if ( v544 )
          {
            *(_QWORD *)&v545 = 0;
            j__free(v544);
          }
          sub_199C0((__int64 *)src.m128i_i64[0], (__int64)v193, v194, v195, v196, v197);
          v198 = (char *)v574;
          if ( v574 )
          {
            v199 = v575.m128i_i64[0];
            v200 = v510;
            v201 = 0;
            if ( v575.m128i_i64[0] )
            {
              do
              {
                v202 = &v198[24 * v201];
                v203 = *(void **)v202;
                if ( *(_QWORD *)v202 )
                {
                  *((_QWORD *)v202 + 1) = 0;
                  j__free(v203);
                  v198 = (char *)v574;
                }
                ++v201;
              }
              while ( v199 != v201 );
              v510 = v200;
            }
            v575.m128i_i64[0] = 0;
            j__free(v198);
          }
          v204 = (char *)v572;
          if ( v572 )
          {
            if ( v573.m128i_i64[0] )
            {
              v205 = v510;
              s = v19;
              v206 = v573.m128i_i64[0];
              v510 = 0;
              src.m128i_i64[0] = v205;
              do
              {
                v207 = &v204[24 * v510];
                v208 = *(char **)v207;
                if ( *(_QWORD *)v207 )
                {
                  v209 = *((_QWORD *)v207 + 1);
                  v210 = 0;
                  if ( v209 )
                  {
                    do
                    {
                      v211 = &v208[24 * v210];
                      v212 = *(void **)v211;
                      if ( *(_QWORD *)v211 )
                      {
                        *((_QWORD *)v211 + 1) = 0;
                        j__free(v212);
                        v208 = *(char **)v207;
                      }
                      ++v210;
                    }
                    while ( v209 != v210 );
                  }
                  *((_QWORD *)v207 + 1) = 0;
                  j__free(v208);
                  v204 = (char *)v572;
                }
                ++v510;
              }
              while ( v206 != v510 );
              v19 = s;
              v18 = (__int64)&v512;
              v510 = src.m128i_i64[0];
            }
            v573.m128i_i64[0] = 0;
            j__free(v204);
          }
          v213 = (char *)v523;
          if ( v523 )
          {
            v214 = 0;
            if ( (_QWORD)v524 )
            {
              v215 = v510;
              v510 = 0;
              v216 = v19;
              v217 = v524;
              src.m128i_i64[0] = v215;
              do
              {
                v218 = &v213[v214];
                v219 = *(void **)&v213[v214 + 72];
                if ( v219 )
                {
                  *((_QWORD *)v218 + 10) = 0;
                  j__free(v219);
                }
                v220 = *((void **)v218 + 6);
                if ( v220 )
                {
                  *((_QWORD *)v218 + 7) = 0;
                  j__free(v220);
                }
                v221 = *((void **)v218 + 3);
                if ( v221 )
                {
                  *((_QWORD *)v218 + 4) = 0;
                  j__free(v221);
                }
                v222 = *(void **)v218;
                if ( *(_QWORD *)v218 )
                {
                  *((_QWORD *)v218 + 1) = 0;
                  j__free(v222);
                }
                ++v510;
                v214 += 104;
                v213 = (char *)v523;
              }
              while ( v217 != v510 );
              v19 = v216;
              v18 = (__int64)&v512;
              v510 = src.m128i_i64[0];
            }
            *(_QWORD *)&v524 = 0;
            j__free(v213);
          }
          goto LABEL_98;
        }
      }
      if ( v523 )
      {
        v442 = 0;
        if ( (_QWORD)v524 )
        {
          src.m128i_i64[0] = (__int64)v19;
          v443 = v524;
          do
          {
            v444 = (char *)v523 + 104 * v442;
            v445 = *((void **)v444 + 9);
            if ( v445 )
            {
              *((_QWORD *)v444 + 10) = 0;
              j__free(v445);
            }
            v446 = *((void **)v444 + 6);
            if ( v446 )
            {
              *((_QWORD *)v444 + 7) = 0;
              j__free(v446);
            }
            v447 = *((void **)v444 + 3);
            if ( v447 )
            {
              *((_QWORD *)v444 + 4) = 0;
              j__free(v447);
            }
            v448 = *(void **)v444;
            if ( *(_QWORD *)v444 )
            {
              *((_QWORD *)v444 + 1) = 0;
              j__free(v448);
            }
            ++v442;
          }
          while ( v443 != v442 );
          v19 = (char *)src.m128i_i64[0];
        }
        *(_QWORD *)&v524 = 0;
        j__free(v523);
      }
      goto LABEL_99;
    case 0x1Du:
      v282 = -3;
      v523 = nullptr;
      v544 = nullptr;
      v524 = 0;
      if ( HIDWORD(v535) != -4 )
        v282 = HIDWORD(v535);
      v545 = 0;
      v572 = nullptr;
      LODWORD(n) = v282;
      v573 = 0;
      LODWORD(v506) = DWORD1(v568);
      v505.m128i_i64[1] = *((_QWORD *)v19 + 1);
      if ( v42
        && (v283 = strlen(v42),
            v284 = v283 + 1,
            v285 = v283,
            src.m128i_i64[0] = (__int64)&v572,
            v572 = (void *)sub_96080(&v572, 0, v283 + 1, 1),
            v573.m128i_i64[0] = v284,
            memmove(v572, v42, v285),
            *((_BYTE *)v572 + v285) = 0,
            v286 = (char *)v544,
            v42 = (char *)v544,
            src.m128i_i64[0] >= (unsigned __int64)v544)
        && src.m128i_i64[0] < (unsigned __int64)v544 + 24 * *((_QWORD *)&v545 + 1) )
      {
        v498 = v545;
        v499 = v572;
        v500 = _mm_loadl_epi64(&v573);
        v572 = nullptr;
        v501 = _mm_loadl_epi64((const __m128i *)&v573.m128i_u64[1]);
        v573 = 0;
        s = (char *)&v544;
        if ( *((_QWORD *)&v545 + 1) < (unsigned __int64)(v545 + 1) )
        {
          v505.m128i_i64[0] = v501.m128i_i64[0];
          src.m128i_i64[0] = v500.m128i_i64[0];
          v544 = (void *)sub_96080(&v544, v544, v545 + 1, 24);
          v286 = (char *)v544;
          v501 = _mm_loadl_epi64(&v505);
          v500 = _mm_loadl_epi64(&src);
          v498 = v545;
        }
        v502 = &v286[24 * v498];
        *(_QWORD *)v502 = v499;
        *(__m128i *)(v502 + 8) = _mm_unpacklo_epi64(v500, v501);
        *(_QWORD *)&v545 = v545 + 1;
        if ( v572 )
        {
          v573.m128i_i64[0] = 0;
          j__free(v572);
        }
      }
      else
      {
        v287 = v545;
        s = (char *)&v544;
        if ( *((_QWORD *)&v545 + 1) < (unsigned __int64)(v545 + 1) )
        {
          v544 = (void *)sub_96080(&v544, v42, v545 + 1, 24);
          v287 = v545;
        }
        v288 = (char *)v544 + 24 * v287;
        v289 = v572;
        *(__m128i *)(v288 + 8) = _mm_loadu_si128(&v573);
        *(_QWORD *)v288 = v289;
        *(_QWORD *)&v545 = v545 + 1;
      }
      v290 = (*(__int64 (__fastcall **)(__int64, void **, void **, char *, _QWORD, size_t))(*(_QWORD *)v505.m128i_i64[1]
                                                                                          + 208LL))(
               v505.m128i_i64[1],
               &v517,
               &v523,
               s,
               (unsigned int)n,
               v506 & 1 | 0x10);
      v291 = (char *)v544;
      v68 = v290;
      if ( v544 )
      {
        v292 = 0;
        if ( (_QWORD)v545 )
        {
          src.m128i_i64[0] = (__int64)v19;
          v293 = v545;
          do
          {
            v294 = &v291[24 * v292];
            v295 = *(void **)v294;
            if ( *(_QWORD *)v294 )
            {
              *((_QWORD *)v294 + 1) = 0;
              j__free(v295);
              v291 = (char *)v544;
            }
            ++v292;
          }
          while ( v293 != v292 );
          v19 = (char *)src.m128i_i64[0];
        }
        *(_QWORD *)&v545 = 0;
        j__free(v291);
      }
      if ( !v68 )
        sub_19E20(src.m128i_i64[1], (__int64 *)&v523, 1);
      v296 = (char *)v523;
      if ( v523 )
      {
        v297 = v524;
        if ( (_QWORD)v524 )
        {
          v298 = 0;
          do
          {
            v299 = &v296[80 * v298];
            v300 = *(void **)v299;
            if ( *(_QWORD *)v299 )
            {
              *((_QWORD *)v299 + 1) = 0;
              j__free(v300);
              v296 = (char *)v523;
            }
            ++v298;
          }
          while ( v297 != v298 );
        }
        *(_QWORD *)&v524 = 0;
        j__free(v296);
      }
      goto LABEL_99;
    case 0x1Eu:
      v241 = -3;
      v524 = 0;
      v523 = nullptr;
      if ( HIDWORD(v535) != -4 )
        v241 = HIDWORD(v535);
      LODWORD(n) = v241;
      if ( !(unsigned __int8)sub_64130(v42) )
      {
        v419 = v524;
        if ( *((_QWORD *)&v524 + 1) < (unsigned __int64)(v524 + 1) )
        {
          v523 = (void *)sub_96080(&v523, v523, v524 + 1, 80);
          v419 = v524;
        }
        v420 = (char *)v523 + 80 * v419;
        *(_OWORD *)(v420 + 8) = 0;
        *(_OWORD *)(v420 + 24) = 0;
        *(_QWORD *)v420 = 0;
        *((_QWORD *)v420 + 5) = 0;
        *((_QWORD *)v420 + 6) = 0;
        v420[72] = 0;
        *(_OWORD *)(v420 + 56) = 0;
        *(_QWORD *)&v524 = v524 + 1;
        if ( v42 && (v421 = (char *)strlen(v42)) != nullptr )
        {
          v491 = *(_QWORD *)v420;
          s = v421;
          src.m128i_i64[0] = (__int64)(v421 + 1);
          v492 = (void *)sub_96080(v420, v491, v421 + 1, 1);
          v493 = src.m128i_i64[0];
          *(_QWORD *)v420 = v492;
          v494 = s;
          *((_QWORD *)v420 + 1) = v493;
          src.m128i_i64[0] = (__int64)v494;
          memmove(v492, v42, (size_t)v494);
          *(_BYTE *)(*(_QWORD *)v420 + src.m128i_i64[0]) = 0;
        }
        else
        {
          *((_QWORD *)v420 + 1) = 0;
        }
        goto LABEL_424;
      }
      v544 = nullptr;
      v572 = nullptr;
      v545 = 0;
      v573 = 0;
      if ( v42 )
      {
        v242 = strlen(v42);
        v243 = v242 + 1;
        v244 = v242;
        src.m128i_i64[0] = (__int64)&v572;
        v572 = (void *)sub_96080(&v572, 0, v242 + 1, 1);
        v573.m128i_i64[0] = v243;
        memmove(v572, v42, v244);
        *((_BYTE *)v572 + v244) = 0;
        v42 = (char *)v544;
        if ( src.m128i_i64[0] < (unsigned __int64)v544 )
        {
LABEL_419:
          v245 = v545;
          s = (char *)&v544;
          if ( *((_QWORD *)&v545 + 1) < (unsigned __int64)(v545 + 1) )
          {
            v544 = (void *)sub_96080(&v544, v42, v545 + 1, 24);
            v245 = v545;
          }
          v246 = (char *)v544 + 24 * v245;
          v247 = v572;
          *(__m128i *)(v246 + 8) = _mm_loadu_si128(&v573);
          *(_QWORD *)v246 = v247;
          *(_QWORD *)&v545 = v545 + 1;
          goto LABEL_422;
        }
      }
      else
      {
        src.m128i_i64[0] = (__int64)&v572;
      }
      if ( src.m128i_i64[0] >= (unsigned __int64)&v42[24 * *((_QWORD *)&v545 + 1)] )
        goto LABEL_419;
      v476 = v545;
      v477 = v572;
      v478 = _mm_loadl_epi64(&v573);
      v479 = v573.m128i_i64[1];
      v572 = nullptr;
      v573 = 0;
      if ( *((_QWORD *)&v545 + 1) < (unsigned __int64)(v545 + 1) )
      {
        src.m128i_i64[0] = v478.m128i_i64[0];
        s = (char *)&v544;
        v504 = (void *)sub_96080(&v544, v42, v545 + 1, 24);
        v478 = _mm_loadl_epi64(&src);
        v544 = v504;
        v476 = v545;
      }
      else
      {
        s = (char *)&v544;
      }
      v480 = (char *)v544 + 24 * v476;
      *(_QWORD *)v480 = v477;
      *(__m128i *)(v480 + 8) = _mm_unpacklo_epi64(v478, (__m128i)(unsigned __int64)v479);
      *(_QWORD *)&v545 = v545 + 1;
      if ( v572 )
      {
        v573.m128i_i64[0] = 0;
        j__free(v572);
      }
LABEL_422:
      v68 = (*(__int64 (__fastcall **)(_QWORD, void **, void **, char *, _QWORD, __int64))(**((_QWORD **)v19 + 1) + 208LL))(
              *((_QWORD *)v19 + 1),
              &v517,
              &v523,
              s,
              (unsigned int)n,
              2);
      if ( v68 )
      {
        sub_172F0((char **)s);
        sub_1F2D0((char **)&v523);
        goto LABEL_99;
      }
      sub_172F0((char **)s);
LABEL_424:
      v248 = (char *)v523;
      v506 = (size_t)v523 + 80 * v524;
      if ( (void *)v506 == v523 )
      {
        v68 = 0;
        goto LABEL_692;
      }
      v249 = (const char **)v523;
      s = (char *)&v544;
      src.m128i_i64[0] = (__int64)&v523;
      break;
    case 0x1Fu:
      if ( (unsigned __int64)v538 > 1 || (v240 = 4294967293LL, HIDWORD(v542) != -4) )
        v240 = HIDWORD(v542);
      v68 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, _QWORD, char *, __int64, double, _QWORD, _QWORD))(**((_QWORD **)v19 + 1) + 432LL))(
              *((_QWORD *)v19 + 1),
              *((_QWORD *)v19 + 2),
              v42,
              HIDWORD(v535),
              v43,
              v240,
              0.0,
              0,
              0);
      goto LABEL_99;
    case 0x22u:
      v572 = nullptr;
      v235 = *((_QWORD *)v19 + 1);
      v574 = nullptr;
      v576 = nullptr;
      v579 = nullptr;
      v581 = nullptr;
      v583 = nullptr;
      v585 = nullptr;
      v587 = 0;
      v588 = nullptr;
      v590 = nullptr;
      v592 = nullptr;
      src.m128i_i64[0] = (__int64)&v572;
      v573 = 0;
      v575 = 0;
      v577 = 0;
      memset(v578, 0, 18);
      v580 = 0;
      v582 = 0;
      v584 = 0;
      v586 = 0;
      v589 = 0;
      v591 = 0;
      v593 = 0;
      v594 = 0;
      v68 = (*(__int64 (__fastcall **)(__int64, void **, __int64, __int64, char *))(*(_QWORD *)v235 + 368LL))(
              v235,
              &v572,
              v28,
              v29,
              v44);
      if ( !v68 )
      {
        v239 = haystack;
        if ( *((_QWORD *)v19 + 5) )
          v239 = *((const char **)v19 + 4);
        sub_1CBF0(v239, *((_DWORD *)v19 + 33), src.m128i_i64[0], v236, v237, v238, 0.0);
      }
      if ( v592 )
      {
        *(_QWORD *)&v593 = 0;
        j__free(v592);
      }
      if ( v590 )
      {
        *(_QWORD *)&v591 = 0;
        j__free(v590);
      }
      if ( v588 )
      {
        *(_QWORD *)&v589 = 0;
        j__free(v588);
      }
      if ( v585 )
      {
        *(_QWORD *)&v586 = 0;
        j__free(v585);
      }
      if ( v583 )
      {
        *(_QWORD *)&v584 = 0;
        j__free(v583);
      }
      if ( v581 )
      {
        *(_QWORD *)&v582 = 0;
        j__free(v581);
      }
      if ( v579 )
      {
        *(_QWORD *)&v580 = 0;
        j__free(v579);
      }
      if ( v576 )
      {
        *(_QWORD *)&v577 = 0;
        j__free(v576);
      }
      if ( v574 )
      {
        v575.m128i_i64[0] = 0;
        j__free(v574);
      }
      v110 = (char *)v572;
      if ( v572 )
        goto LABEL_859;
      goto LABEL_99;
    case 0x23u:
      if ( *((_QWORD *)v19 + 1) )
      {
        sub_19CE0(src.m128i_i64[1], (__int64)"%s: already logged in\n", v42);
      }
      else
      {
        src.m128i_i64[0] = (__int64)v43;
        v572 = nullptr;
        v573 = 0;
        v433 = sub_31EC0(p_dest, v47, v28, v29, v44);
        if ( (*(unsigned __int8 (__fastcall **)(char *, void **, __int64, char *, __int64))(*(_QWORD *)v19 + 32LL))(
               v19,
               &v572,
               v433,
               v42,
               src.m128i_i64[0]) )
        {
          if ( v42 && (v474 = strlen(v42), (v475 = v474) != 0) )
          {
            v489 = v474 + 1;
            if ( *((_QWORD *)v19 + 9) < v474 + 1 )
              *((_QWORD *)v19 + 7) = sub_96080(v19 + 56, *((_QWORD *)v19 + 7), v474 + 1, 1);
            *((_QWORD *)v19 + 8) = v489;
            memmove(*((void **)v19 + 7), v42, v475);
            *(_BYTE *)(*((_QWORD *)v19 + 7) + v475) = 0;
          }
          else
          {
            *((_QWORD *)v19 + 8) = 0;
          }
          v110 = (char *)v572;
          if ( v572 )
          {
LABEL_836:
            v573.m128i_i64[0] = 0;
            j__free(v110);
          }
LABEL_98:
          v68 = 0;
          goto LABEL_99;
        }
        v437 = haystack;
        if ( v573.m128i_i64[0] )
          LODWORD(v437) = (_DWORD)v572;
        sub_708D0((unsigned int)"%s: %s\n", (_DWORD)v42, (_DWORD)v437, v434, v435, v436);
        if ( v572 )
        {
          v573.m128i_i64[0] = 0;
          j__free(v572);
        }
      }
      v33 = 58;
      goto LABEL_100;
    case 0x24u:
      v185 = *((_QWORD *)v19 + 1);
      if ( v185 )
        (*(void (__fastcall **)(__int64, void **, __int64, __int64, char *, double))(*(_QWORD *)v185 + 8LL))(
          v185,
          v47,
          v28,
          v29,
          v44,
          0.0);
      v186 = *((void **)v19 + 7);
      *((_QWORD *)v19 + 1) = 0;
      if ( v186 )
      {
        *((_QWORD *)v19 + 8) = 0;
        j__free(v186);
        *((_QWORD *)v19 + 7) = 0;
        *((_QWORD *)v19 + 9) = 0;
      }
      goto LABEL_98;
    case 0x25u:
      v87 = (*(__int64 (__fastcall **)(_QWORD, char *, char *, __int64, char *, double))(**((_QWORD **)v19 + 1) + 88LL))(
              *((_QWORD *)v19 + 1),
              v42,
              v43,
              v29,
              v44,
              0.0);
      goto LABEL_137;
    case 0x26u:
      v544 = nullptr;
      v545 = 0;
      if ( !v43 && !byte_165A11 )
      {
        src.m128i_i64[0] = 0;
        v471 = sub_19C20((__int64)v19, (__int64 *)&v544);
        v43 = nullptr;
        if ( v471 )
        {
          v43 = (char *)haystack;
          if ( (_QWORD)v545 )
            v43 = (char *)v544;
        }
      }
      v183 = *((_QWORD *)v19 + 1);
      v572 = nullptr;
      v574 = nullptr;
      v576 = nullptr;
      memset(v578, 0, sizeof(v578));
      v579 = nullptr;
      src.m128i_i64[0] = (__int64)&v572;
      v573 = 0;
      v575 = 0;
      v577 = 0;
      v68 = (*(__int64 (__fastcall **)(__int64, void **, char *, char *, char *))(*(_QWORD *)v183 + 160LL))(
              v183,
              &v572,
              v42,
              v43,
              v44);
      if ( !v68 )
      {
        v184 = haystack;
        if ( (_QWORD)v577 )
          v184 = (const char *)v576;
        (*(void (__fastcall **)(char *, __int64, const char *, _QWORD))(*(_QWORD *)v19 + 16LL))(
          v19,
          src.m128i_i64[0],
          v184,
          0);
      }
      if ( v578[0] )
      {
        v578[1] = nullptr;
        j__free(v578[0]);
      }
      if ( v576 )
      {
        *(_QWORD *)&v577 = 0;
        j__free(v576);
      }
      if ( v574 )
      {
        v575.m128i_i64[0] = 0;
        j__free(v574);
      }
      if ( v572 )
      {
        v573.m128i_i64[0] = 0;
        j__free(v572);
      }
      v100 = (char *)v544;
      if ( v544 )
        goto LABEL_795;
      goto LABEL_99;
    case 0x27u:
    case 0x28u:
    case 0x29u:
      v84 = HIDWORD(v535);
      v85 = *((__int64 **)v19 + 1);
      if ( HIDWORD(v535) == -4 )
        v84 = -3;
      v86 = *v85;
      if ( v25 == 39 )
      {
        v87 = (*(__int64 (__fastcall **)(__int64 *, void **, char *, char *, _QWORD, _QWORD, double))(v86 + 304))(
                v85,
                v47,
                v42,
                v43,
                v84,
                si128.m128i_u32[3],
                0.0);
      }
      else if ( v25 == 40 )
      {
        v87 = (*(__int64 (__fastcall **)(__int64 *, void **, char *, char *, _QWORD, double))(v86 + 312))(
                v85,
                v47,
                v42,
                v43,
                si128.m128i_u32[3],
                0.0);
      }
      else
      {
        v87 = (*(__int64 (__fastcall **)(__int64 *, void **, char *, char *, _QWORD, double))(v86 + 320))(
                v85,
                v47,
                v42,
                v43,
                si128.m128i_u32[3],
                0.0);
      }
      goto LABEL_137;
    case 0x2Au:
      v87 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned int *, char *, _QWORD, _QWORD, double))(**((_QWORD **)v19 + 1) + 248LL))(
              *((_QWORD *)v19 + 1),
              v47,
              &v511,
              v43,
              HIDWORD(v535),
              si128.m128i_u32[1],
              0.0);
      goto LABEL_137;
    case 0x34u:
      v127 = *((_QWORD *)v19 + 2);
      v573 = 0;
      v572 = nullptr;
      v128 = *(_QWORD *)(v127 + 56);
      s = v43;
      src.m128i_i64[0] = (__int64)&v572;
      v68 = sub_5A6F0(v128, &v572, v42, 0, v44);
      if ( !v68 )
      {
        v68 = sub_1AAE0((__int64 *)&v537, s, *(_DWORD *)(v510 + 36), *((_QWORD *)v19 + 2));
        if ( !v68 )
        {
          if ( (unsigned __int64)v538 <= 1 )
            v441 = nullptr;
          else
            v441 = v537;
          v68 = sub_5B080(*(_QWORD *)(*((_QWORD *)v19 + 2) + 56LL), v441, src.m128i_i64[0], 1, v439, v440);
        }
      }
      v110 = (char *)v572;
      if ( v572 )
        goto LABEL_859;
      goto LABEL_99;
    case 0x35u:
      v87 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, __int64, char *, double))(**(_QWORD **)(*((_QWORD *)v19 + 2) + 56LL)
                                                                                        + 24LL))(
              *(_QWORD *)(*((_QWORD *)v19 + 2) + 56LL),
              v42,
              v28,
              v29,
              v44,
              0.0);
      goto LABEL_137;
    case 0x36u:
      v150 = *(void (__fastcall **)(char *, __int64, _QWORD, __int64))(*(_QWORD *)v19 + 16LL);
      v573 = 0;
      v572 = nullptr;
      src.m128i_i64[0] = (__int64)&v572;
      if ( v42 )
      {
        v151 = strlen(v42);
        s = (char *)(v151 + 1);
        v572 = (void *)sub_96080(&v572, 0, v151 + 1, 1);
        v573.m128i_i64[0] = v151 + 1;
        memmove(v572, v42, v151);
        *((_BYTE *)v572 + v151) = 0;
      }
      v150(v19, src.m128i_i64[0], 0, 1);
      v110 = (char *)v572;
      if ( v572 )
        goto LABEL_836;
      goto LABEL_98;
    case 0x37u:
      v68 = 33;
      if ( (unsigned __int8)sub_98C70(v42, v43) )
        goto LABEL_98;
      goto LABEL_99;
    case 0x38u:
      v138 = *((_QWORD *)v19 + 2);
      v545 = 0;
      v544 = nullptr;
      v139 = *(_QWORD *)(v138 + 56);
      s = (char *)&v544;
      sub_5A6F0(v139, &v544, v42, 0, v44);
      v141 = nullptr;
      v142 = 0;
      v143 = 2;
      v573 = 0;
      v572 = nullptr;
      if ( v513 <= 2 )
        goto LABEL_768;
      v144 = 0;
      v142 = 0;
      src.m128i_i64[0] = (__int64)&v572;
      while ( 1 )
      {
        v145 = (char *)v512 + 24 * v143;
        v146 = *((_QWORD *)v145 + 1);
        if ( v146 )
        {
          v140 = v146 - 1;
          if ( v146 != 1 )
          {
            v147 = v146 - 1;
            if ( v142 )
            {
              --v142;
              v147 = v140 + v142;
              v146 += v142;
            }
            if ( v144 < v146 )
            {
              v505.m128i_i64[0] = v147;
              v505.m128i_i64[1] = v140;
              v506 = (size_t)v512 + 24 * v143;
              n = v146;
              v572 = (void *)sub_96080(&v572, v141, v146, 1);
              v147 = v505.m128i_i64[0];
              v141 = v572;
              v140 = v505.m128i_u64[1];
              v145 = (char *)v506;
              v146 = n;
            }
            v573.m128i_i64[0] = v146;
            v141[v147] = 0;
            memcpy((char *)v572 + v142, *(const void **)v145, v140);
            v144 = v573.m128i_u64[1];
            v142 = v573.m128i_i64[0];
            v141 = v572;
          }
        }
        if ( ++v143 >= v513 )
          break;
        if ( v142 > 1 )
        {
          v148 = v142 + 1;
          v149 = v142 - 1;
          if ( v144 < v142 + 1 )
          {
            v506 = v142 - 1;
            n = v142 + 1;
            v572 = (void *)sub_96080(src.m128i_i64[0], v141, v148, 1);
            v149 = v142 - 1;
            v141 = v572;
            v148 = v142 + 1;
          }
          v573.m128i_i64[0] = v148;
          v141[v149] = 32;
          *((_BYTE *)v572 + v142) = 0;
          v144 = v573.m128i_u64[1];
          v142 = v573.m128i_i64[0];
          v141 = v572;
        }
      }
      v143 = 2;
      if ( v142 )
        v143 = v142-- + 1;
      if ( v144 < v143 )
      {
LABEL_768:
        v572 = (void *)sub_96080(&v572, v141, v143, 1);
        v141 = v572;
      }
      v573.m128i_i64[0] = v143;
      v141[v142] = 10;
      *((_BYTE *)v572 + v142 + 1) = 0;
      if ( !v573.m128i_i64[0] )
        goto LABEL_677;
      v388 = v573.m128i_i64[0] - 1;
      n = v573.m128i_i64[0] - 1;
      if ( v573.m128i_i64[0] == 1 )
        goto LABEL_677;
      v389 = v545;
      src.m128i_i64[0] = (__int64)v572;
      v390 = v545;
      v391 = v545 + v388;
      if ( !__CFADD__((_QWORD)v545, v388) )
        goto LABEL_673;
      if ( (unsigned __int64)v545 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v391 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_673:
        if ( *((_QWORD *)&v545 + 1) < v391 )
        {
          v544 = (void *)sub_96080(s, v544, v391, 1);
          v390 = v545;
        }
        memset((char *)v544 + v390, 0, v391 - v390);
        *(_QWORD *)&v545 = v391;
      }
      else if ( (_QWORD)v545 != 0x7FFFFFFFFFFFFFFFLL )
      {
        *(_QWORD *)&v545 = 0x7FFFFFFFFFFFFFFFLL;
      }
      memcpy((char *)v544 + v389, (const void *)src.m128i_i64[0], n);
LABEL_677:
      v68 = sub_5B080(*(_QWORD *)(*((_QWORD *)v19 + 2) + 56LL), v42, s, 1, v145, v140);
      if ( v572 )
      {
        v573.m128i_i64[0] = 0;
        j__free(v572);
      }
      v100 = (char *)v544;
      if ( v544 )
        goto LABEL_795;
      goto LABEL_99;
    case 0x39u:
      v129 = *((char **)v19 + 10);
      if ( v129 )
      {
        v130 = *((_QWORD *)v19 + 11);
        if ( v130 )
        {
          v131 = v510;
          v510 = (__int64)v19;
          v132 = v130;
          v133 = 0;
          v134 = 0;
          src.m128i_i64[0] = v131;
          do
          {
            v135 = &v129[v133];
            v136 = *(void **)&v129[v133 + 24];
            if ( v136 )
            {
              *((_QWORD *)v135 + 4) = 0;
              j__free(v136);
            }
            v137 = *(void **)v135;
            if ( *(_QWORD *)v135 )
            {
              *((_QWORD *)v135 + 1) = 0;
              j__free(v137);
            }
            ++v134;
            v133 += 56;
            v129 = *(char **)(v510 + 80);
          }
          while ( v132 != v134 );
          v19 = (char *)v510;
          v18 = (__int64)&v512;
          v510 = src.m128i_i64[0];
        }
        *((_QWORD *)v19 + 11) = 0;
        j__free(v129);
        *((_QWORD *)v19 + 10) = 0;
        *((_QWORD *)v19 + 12) = 0;
      }
      goto LABEL_98;
    case 0x3Au:
      v529 = 16;
      goto LABEL_80;
    case 0x3Bu:
      goto LABEL_80;
    case 0x3Cu:
      v529 = 48;
      goto LABEL_80;
    case 0x3Du:
      v529 = 32;
LABEL_80:
      if ( v42 && (*v42 != 42 || v42[1]) )
      {
        s = v44;
        src.m128i_i64[0] = (__int64)v43;
        v53 = strlen(v42);
        v43 = (char *)src.m128i_i64[0];
        v44 = s;
        v54 = v53;
        if ( v53 )
        {
          v485 = v53 + 1;
          if ( v526[1] < v53 + 1 )
          {
            v525 = (void *)sub_96080(&v525, v525, v53 + 1, 1);
            v44 = s;
            v43 = (char *)src.m128i_i64[0];
          }
          s = v44;
          src.m128i_i64[0] = (__int64)v43;
          v526[0] = v485;
          memmove(v525, v42, v54);
          v43 = (char *)src.m128i_i64[0];
          v44 = s;
          *((_BYTE *)v525 + v54) = 0;
        }
        else
        {
          v526[0] = 0;
        }
      }
      s = v44;
      src.m128i_i64[0] = (__int64)v43;
      v55 = strcmp(v43, "list");
      v56 = s;
      if ( v55 )
      {
        v369 = strcmp((const char *)src.m128i_i64[0], "read");
        v56 = s;
        if ( v369 )
        {
          v386 = strcmp((const char *)src.m128i_i64[0], "write");
          v56 = s;
          if ( v386 )
          {
            v438 = (const char *)src.m128i_i64[0];
            src.m128i_i64[0] = (__int64)s;
            sub_19CE0(src.m128i_i64[1], (__int64)"%s: wrong permission\n", v438);
            v56 = s;
          }
          else
          {
            v387 = v529 | 4;
            if ( (v529 & 0x20) == 0 )
              v387 = v529 | 7;
            v529 = v387;
          }
        }
        else
        {
          v370 = v529 | 6;
          if ( (v529 & 0x20) == 0 )
            v370 = v529 | 3;
          v529 = v370;
        }
      }
      else
      {
        v57 = v529 | 7;
        if ( (v529 & 0x20) == 0 )
          v57 = v529 | 1;
        v529 = v57;
      }
      if ( v56
        && (src.m128i_i64[0] = (__int64)v56, v58 = strlen(v56), v59 = (const void *)src.m128i_i64[0], (v60 = v58) != 0) )
      {
        v385 = v58 + 1;
        if ( v528[1] < v58 + 1 )
        {
          v527 = (void *)sub_96080(&v527, v527, v58 + 1, 1);
          v59 = (const void *)src.m128i_i64[0];
        }
        v528[0] = v385;
        memmove(v527, v59, v60);
        *((_BYTE *)v527 + v60) = 0;
      }
      else
      {
        v528[0] = 0;
      }
      v61 = v526[0];
      v572 = nullptr;
      v573 = 0;
      if ( v526[0] )
      {
        v572 = (void *)sub_96030(v526[0]);
        v573.m128i_i64[1] = v61;
        memcpy(v572, v525, v61);
        v573.m128i_i64[0] = v61;
      }
      v62 = v528[0];
      v574 = nullptr;
      v575 = 0;
      if ( v528[0] )
      {
        v574 = (void *)sub_96030(v528[0]);
        v575.m128i_i64[1] = v62;
        memcpy(v574, v527, v62);
        v575.m128i_i64[0] = v62;
      }
      v63 = *((_QWORD *)v19 + 10);
      LODWORD(v576) = v529;
      v64 = *((_QWORD *)v19 + 11);
      if ( *((_QWORD *)v19 + 12) < (unsigned __int64)(v64 + 1) )
      {
        v384 = sub_96080(v19 + 80, v63, v64 + 1, 56);
        *((_QWORD *)v19 + 10) = v384;
        v63 = v384;
        v64 = *((_QWORD *)v19 + 11);
      }
      v65 = v63 + 56 * v64;
      v66 = v572;
      *(__m128i *)(v65 + 8) = _mm_loadu_si128(&v573);
      *(_QWORD *)v65 = v66;
      v67 = _mm_load_si128(&v575);
      *(_QWORD *)(v65 + 24) = v574;
      *(__m128i *)(v65 + 32) = v67;
      *(_DWORD *)(v65 + 48) = (_DWORD)v576;
      ++*((_QWORD *)v19 + 11);
      goto LABEL_98;
    case 0x3Eu:
      v87 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, __int64, char *, double))(**((_QWORD **)v19 + 1) + 56LL))(
              *((_QWORD *)v19 + 1),
              v19 + 80,
              v28,
              v29,
              v44,
              0.0);
      goto LABEL_137;
    case 0x3Fu:
      v68 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, __int64, char *, double))(**((_QWORD **)v19 + 1) + 64LL))(
              *((_QWORD *)v19 + 1),
              v19 + 80,
              v28,
              v29,
              v44,
              0.0);
      if ( v68 )
        goto LABEL_99;
      if ( !byte_165A12 )
        sub_19CE0(
          src.m128i_i64[1],
          (__int64)"# The permission for each vault file is determined as the result of applying\n"
                   "# all matching lines, from the beginning of the permission table to the end.\n"
                   "# An empty permission table grants all access to everyone.\n"
                   "# A non-empty permission table starts by denying all access to everyone.\n"
                   "\n");
      v117 = *((_QWORD *)v19 + 10);
      v118 = v117 + 56LL * *((_QWORD *)v19 + 11);
      if ( v118 != v117 )
      {
        v119 = *((_QWORD *)v19 + 10);
        do
        {
          v120 = haystack;
          if ( *(_QWORD *)(v119 + 32) )
            v120 = *(const char **)(v119 + 24);
          v121 = (const char *)sub_65640(*(unsigned int *)(v119 + 48), (*(_DWORD *)(v119 + 48) & 0x20) == 0);
          v122 = "*";
          if ( *(_QWORD *)(v119 + 8) > 1u )
            v122 = *(const char **)v119;
          v123 = *(_DWORD *)(v119 + 48);
          v124 = "user";
          v125 = "deny";
          if ( (v123 & 0x10) == 0 )
            v124 = "group";
          if ( (v123 & 0x20) == 0 )
            v125 = "grant";
          sub_19CE0(src.m128i_i64[1], (__int64)"%s %s %s %s %s\n", v125, v124, v122, v121, v120);
          v119 += 56;
        }
        while ( v118 != v119 );
      }
      goto LABEL_98;
    case 0x40u:
      v87 = (*(__int64 (__fastcall **)(_QWORD, void **, char *, char *, char *, double))(**((_QWORD **)v19 + 1) + 72LL))(
              *((_QWORD *)v19 + 1),
              &v517,
              v42,
              v43,
              v44,
              0.0);
      goto LABEL_137;
    case 0x41u:
      v111 = *((char **)v19 + 13);
      if ( v111 )
      {
        v112 = *((_QWORD *)v19 + 14);
        v113 = v510;
        v114 = 0;
        if ( v112 )
        {
          do
          {
            v115 = &v111[24 * v114];
            v116 = *(void **)v115;
            if ( *(_QWORD *)v115 )
            {
              *((_QWORD *)v115 + 1) = 0;
              j__free(v116);
              v111 = *((char **)v19 + 13);
            }
            ++v114;
          }
          while ( v112 != v114 );
          v510 = v113;
        }
        *((_QWORD *)v19 + 14) = 0;
        j__free(v111);
        *((_QWORD *)v19 + 13) = 0;
        *((_QWORD *)v19 + 15) = 0;
      }
      goto LABEL_98;
    case 0x42u:
      v572 = nullptr;
      v573 = 0;
      src.m128i_i64[0] = (__int64)&v572;
      if ( v42 )
      {
        v172 = strlen(v42);
        s = (char *)(v172 + 1);
        v572 = (void *)sub_96080(&v572, 0, v172 + 1, 1);
        v573.m128i_i64[0] = v172 + 1;
        memmove(v572, v42, v172);
        *((_BYTE *)v572 + v172) = 0;
      }
      v173 = *((_QWORD *)v19 + 14);
      v174 = *((_QWORD *)v19 + 13);
      v175 = *((_QWORD *)v19 + 15);
      v176 = v173;
      v177 = v173 + 1;
      if ( src.m128i_i64[0] < v174 || src.m128i_i64[0] >= v174 + 24 * v175 )
      {
        if ( v175 < v177 )
        {
          v472 = sub_96080(v19 + 104, v174, v173 + 1, 24);
          *((_QWORD *)v19 + 13) = v472;
          v176 = *((_QWORD *)v19 + 14);
          v174 = v472;
        }
        v394 = _mm_loadu_si128(&v573);
        v395 = v174 + 24 * v176;
        *(_QWORD *)v395 = v572;
        *(__m128i *)(v395 + 8) = v394;
        ++*((_QWORD *)v19 + 14);
      }
      else
      {
        v178 = v572;
        v179 = _mm_loadl_epi64(&v573);
        v180 = v573.m128i_i64[1];
        v572 = nullptr;
        v573 = 0;
        if ( v175 < v177 )
        {
          src.m128i_i64[0] = v179.m128i_i64[0];
          v490 = sub_96080(v19 + 104, v174, v173 + 1, 24);
          v179 = _mm_loadl_epi64(&src);
          *((_QWORD *)v19 + 13) = v490;
          v174 = v490;
          v173 = *((_QWORD *)v19 + 14);
        }
        v181 = v174 + 24 * v173;
        *(_QWORD *)v181 = v178;
        *(__m128i *)(v181 + 8) = _mm_unpacklo_epi64(v179, (__m128i)(unsigned __int64)v180);
        v182 = v572;
        ++*((_QWORD *)v19 + 14);
        if ( v182 )
        {
          v573.m128i_i64[0] = 0;
          j__free(v182);
        }
      }
      goto LABEL_98;
    case 0x43u:
      v171 = haystack;
      if ( (_QWORD)v567 )
        v171 = (const char *)v566;
      v87 = (*(__int64 (__fastcall **)(_QWORD, char *, const char *, __int64, char *, double))(**((_QWORD **)v19 + 1)
                                                                                             + 168LL))(
              *((_QWORD *)v19 + 1),
              v19 + 104,
              v171,
              v29,
              v44,
              0.0);
      goto LABEL_137;
    case 0x44u:
      v166 = haystack;
      if ( (_QWORD)v567 )
        v166 = (const char *)v566;
      v68 = (*(__int64 (__fastcall **)(_QWORD, char *, const char *, __int64, char *, double))(**((_QWORD **)v19 + 1)
                                                                                             + 176LL))(
              *((_QWORD *)v19 + 1),
              v19 + 104,
              v166,
              v29,
              v44,
              0.0);
      if ( v68 )
        goto LABEL_99;
      if ( !byte_165A12 )
      {
        v486 = (const char *)sub_63D40();
        sub_19CE0(src.m128i_i64[1], (__int64)"%s", v486);
      }
      v167 = *((_QWORD *)v19 + 13);
      v168 = v167 + 24LL * *((_QWORD *)v19 + 14);
      if ( v168 != v167 )
      {
        v169 = *((_QWORD *)v19 + 13);
        do
        {
          v170 = haystack;
          if ( *(_QWORD *)(v169 + 8) )
            v170 = *(const char **)v169;
          sub_19CE0(src.m128i_i64[1], (__int64)"%s\n", v170);
          v169 += 24;
        }
        while ( v168 != v169 );
      }
      goto LABEL_98;
    case 0x45u:
      (*(void (__fastcall **)(_QWORD, void **, __int64, __int64, char *, double))(**((_QWORD **)v19 + 1) + 360LL))(
        *((_QWORD *)v19 + 1),
        v47,
        v28,
        v29,
        v44,
        0.0);
      sub_19CE0(src.m128i_i64[1], (__int64)"VERIFY OK\n");
      goto LABEL_98;
    case 0x47u:
      v68 = sub_1AAE0((__int64 *)&v537, v43, *(_DWORD *)(v510 + 36), *((_QWORD *)v19 + 2));
      if ( v68 )
        goto LABEL_99;
      if ( (unsigned __int64)v538 <= 1 )
      {
        v126 = nullptr;
        if ( HIDWORD(v542) == -4 )
          v126 = ".";
      }
      else
      {
        v126 = (const char *)v537;
      }
      v87 = (*(__int64 (__fastcall **)(_QWORD, void **, const char *, __int64, _QWORD, double))(**(_QWORD **)(*((_QWORD *)v19 + 2) + 56LL)
                                                                                              + 144LL))(
              *(_QWORD *)(*((_QWORD *)v19 + 2) + 56LL),
              &v517,
              v126,
              v534,
              HIDWORD(v568),
              0.0);
LABEL_137:
      v68 = v87;
      goto LABEL_99;
    default:
      goto LABEL_98;
  }
  while ( 2 )
  {
    v251 = haystack;
    if ( v249[1] )
      v251 = *v249;
    v68 = (*(__int64 (__fastcall **)(_QWORD, char *, const char *, _QWORD))(**((_QWORD **)v19 + 1) + 216LL))(
            *((_QWORD *)v19 + 1),
            s,
            v251,
            (unsigned int)n);
    if ( v68 )
    {
      if ( (unsigned __int64)v524 > 1 )
      {
        v572 = nullptr;
        v573 = 0;
        sub_65C40(&v572, v68, 0);
        v252 = haystack;
        if ( v573.m128i_i64[0] )
          v252 = (const char *)v572;
        sub_19CE0(src.m128i_i64[1], (__int64)"%s\n", v252);
        if ( v572 )
        {
          v573.m128i_i64[0] = 0;
          j__free(v572);
        }
        goto LABEL_431;
      }
    }
    else
    {
      if ( (unsigned __int64)v524 > 1 )
      {
        v250 = haystack;
        if ( v249[1] )
          v250 = *v249;
        sub_19CE0(src.m128i_i64[1], (__int64)"### %s\n", v250);
      }
      sub_18290((__int64 *)v544);
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v544 + 48LL))(v544, 1);
LABEL_431:
      v68 = 0;
    }
    v249 += 10;
    if ( (const char **)v506 != v249 )
      continue;
    break;
  }
  v248 = (char *)v523;
LABEL_692:
  if ( v248 )
  {
    v397 = v524;
    if ( (_QWORD)v524 )
    {
      v398 = 0;
      v399 = v248;
      do
      {
        v400 = &v399[80 * v398];
        v401 = *(void **)v400;
        if ( *(_QWORD *)v400 )
        {
          *((_QWORD *)v400 + 1) = 0;
          j__free(v401);
          v399 = (char *)v523;
        }
        ++v398;
      }
      while ( v397 != v398 );
      v248 = v399;
    }
    *(_QWORD *)&v524 = 0;
    j__free(v248);
  }
LABEL_99:
  sub_1A410(src.m128i_i64[1], (unsigned int **)&v517);
  v33 = sub_1A8D0(v19, v68, v510, v18);
LABEL_100:
  v69 = (char *)v517;
  if ( v517 )
  {
    if ( (_QWORD)v518 )
    {
      v70 = 0;
      v71 = v518;
      do
      {
        v72 = &v69[32 * v70];
        v73 = *((void **)v72 + 1);
        if ( v73 )
        {
          *((_QWORD *)v72 + 2) = 0;
          j__free(v73);
          v69 = (char *)v517;
        }
        ++v70;
      }
      while ( v71 != v70 );
    }
    *(_QWORD *)&v518 = 0;
    j__free(v69);
  }
LABEL_107:
  if ( v527 )
  {
    v528[0] = 0;
    j__free(v527);
  }
  if ( v525 )
  {
    v526[0] = 0;
    j__free(v525);
  }
  if ( v539 )
  {
    *(_QWORD *)&v540 = 0;
    j__free(v539);
  }
  if ( v537 )
  {
    *(_QWORD *)&v538 = 0;
    j__free(v537);
  }
  if ( dest )
  {
    *(_QWORD *)&v533 = 0;
    j__free(dest);
  }
  if ( v530 )
  {
    *(_QWORD *)&v531 = 0;
    j__free(v530);
  }
LABEL_15:
  if ( v566 )
  {
    *(_QWORD *)&v567 = 0;
    j__free(v566);
  }
  if ( v564 )
  {
    *(_QWORD *)&v565 = 0;
    j__free(v564);
  }
  if ( v561 )
  {
    *(_QWORD *)&v562 = 0;
    j__free(v561);
  }
  if ( v559 )
  {
    *(_QWORD *)&v560 = 0;
    j__free(v559);
  }
  v34 = (char *)v553;
  if ( v553 )
  {
    v35 = v554;
    if ( (_QWORD)v554 )
    {
      v36 = 0;
      do
      {
        v37 = &v34[72 * v36];
        v38 = *((void **)v37 + 3);
        v39 = v37;
        if ( v38 )
        {
          *((_QWORD *)v37 + 4) = 0;
          j__free(v38);
        }
        v40 = *(void **)v39;
        if ( *(_QWORD *)v39 )
        {
          *((_QWORD *)v39 + 1) = 0;
          j__free(v40);
        }
        ++v36;
        v34 = (char *)v553;
      }
      while ( v35 != v36 );
    }
    *(_QWORD *)&v554 = 0;
    j__free(v34);
  }
LABEL_65:
  if ( ptr )
  {
    *(_QWORD *)&v516 = 0;
    j__free(ptr);
  }
  v48 = (char *)v512;
  if ( v512 )
  {
    if ( v513 )
    {
      v49 = 0;
      v50 = v513;
      do
      {
        v51 = &v48[24 * v49];
        v52 = *(void **)v51;
        if ( *(_QWORD *)v51 )
        {
          *((_QWORD *)v51 + 1) = 0;
          j__free(v52);
          v48 = (char *)v512;
        }
        ++v49;
      }
      while ( v50 != v49 );
    }
    v513 = 0;
    j__free(v48);
  }
  return v33;
}

