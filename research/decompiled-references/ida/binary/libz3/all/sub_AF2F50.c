__int64 __fastcall sub_AF2F50(__int64 a1, _QWORD *a2, int a3)
{
  char **exception; // r12
  __int64 v4; // rdx
  __int64 *v5; // r15
  __int64 *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rbx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int8 *v19; // rax
  int v20; // edx
  __m128i *v21; // rdx
  __m128i *v22; // rsi
  char *v23; // rax
  _BYTE *v24; // rdi
  size_t v25; // rax
  __int64 *v26; // rdi
  size_t v27; // r12
  size_t v28; // r14
  unsigned __int64 v29; // rdi
  __int64 v30; // r15
  char *v31; // rsi
  char *v32; // r13
  void *v33; // rdi
  char *v34; // r13
  unsigned __int64 v35; // rax
  _BYTE *v36; // rdi
  __m128i *v37; // rax
  __m128i *v38; // rdx
  __m128i *v39; // rsi
  __m128i v40; // xmm0
  __int64 v41; // rcx
  __int64 *v42; // rdi
  size_t v43; // r12
  size_t v44; // r13
  unsigned __int64 v45; // rdi
  __int64 v46; // r15
  char *v47; // rsi
  char *v48; // r14
  void *v49; // rdi
  char *v50; // r13
  unsigned __int64 v51; // rax
  _BYTE *v52; // rdi
  __m128i *v53; // rax
  __m128i *v54; // rdx
  __m128i *v55; // rdi
  char *v56; // rax
  _BYTE *v57; // rsi
  __int64 v58; // rax
  __int64 *v59; // rdi
  size_t v60; // r12
  size_t v61; // r14
  unsigned __int64 v62; // rdi
  __int64 v63; // r15
  char *v64; // rsi
  char *v65; // r13
  void *v66; // rdi
  char *v67; // r13
  unsigned __int64 v68; // rax
  _BYTE *v69; // rdi
  __m128i *v70; // rax
  __m128i *v71; // rdx
  __m128i *v72; // rdi
  char *v73; // rax
  _BYTE *v74; // rsi
  __int64 v75; // rax
  __int64 *v76; // r15
  __int64 v77; // r14
  __int64 v78; // rax
  void *v79; // r12
  _DWORD *v80; // rax
  int v81; // r8d
  int v82; // r9d
  __int64 v83; // rax
  int v84; // r8d
  int v85; // r9d
  int v86; // r8d
  int v87; // r9d
  int v88; // r8d
  int v89; // r9d
  __int64 v90; // rax
  __int64 v91; // r13
  void *v92; // r14
  __int64 v93; // r15
  __m128i v94; // xmm1
  __m128i v95; // xmm0
  __m128i v96; // xmm1
  int v97; // r15d
  _DWORD *v98; // rax
  _DWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // r13
  __int64 v102; // rax
  __int64 v103; // r14
  __int64 v104; // rax
  int v105; // r8d
  int v106; // r9d
  __int64 v107; // r12
  int v108; // r8d
  int v109; // r9d
  __int64 v110; // r15
  int v111; // r8d
  int v112; // r9d
  int v113; // r8d
  int v114; // r9d
  int v115; // r8d
  int v116; // r9d
  int v117; // r8d
  int v118; // r9d
  int v119; // r8d
  int v120; // r9d
  __int64 v121; // rax
  __int64 v122; // r15
  int v123; // r15d
  __int64 v124; // r14
  __int64 v125; // r13
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // r12
  _DWORD *v129; // rax
  int v130; // r8d
  int v131; // r9d
  _DWORD *v132; // rax
  int v133; // r8d
  int v134; // r9d
  __int64 v135; // r14
  __int64 i; // r13
  __m128 v137; // xmm0
  __int64 v138; // rax
  void *v139; // r15
  void *v140; // rdx
  bool v141; // zf
  __int64 v142; // rax
  int v143; // r8d
  int v144; // r9d
  void *v145; // r13
  __int64 v146; // rax
  int v147; // r8d
  int v148; // r9d
  __int64 v149; // r14
  int v150; // r8d
  int v151; // r9d
  __int64 v152; // rax
  __int64 v153; // r15
  __int64 v154; // rax
  __int64 v155; // r13
  __int64 v156; // rax
  void *v157; // r14
  __int64 v158; // r15
  int v159; // r8d
  int v160; // r9d
  _DWORD *v161; // rax
  int v162; // r8d
  int v163; // r9d
  __int64 v164; // r12
  __int64 v165; // rax
  int v166; // edx
  int v167; // ecx
  int v168; // r8d
  int v169; // r9d
  _DWORD *v170; // rax
  __int64 v171; // rdx
  char *v173; // rsi
  char *v174; // rsi
  int v175; // esi
  int v176; // eax
  unsigned int v177; // r12d
  int v178; // esi
  unsigned int v179; // ecx
  int v180; // r11d
  int v181; // eax
  unsigned __int64 v182; // r14
  __int64 *v183; // rcx
  unsigned __int64 v184; // rdi
  __int64 *v185; // rax
  __m128i *v186; // r9
  __int64 v187; // rdx
  int v188; // eax
  __int8 *v189; // rdx
  int v190; // eax
  int v191; // edi
  unsigned int v192; // eax
  unsigned int v193; // ecx
  __int64 v194; // rax
  __int64 v195; // rsi
  __int8 v196; // r12
  __int64 *v197; // rax
  __int64 *v198; // rsi
  __int64 v199; // rdx
  __int64 v200; // rdi
  __int64 v201; // rdx
  __m128i v202; // xmm0
  _BYTE *v203; // rcx
  _BYTE *v204; // rax
  __m128i v205; // xmm0
  __m128i *v206; // rax
  __int64 v207; // r12
  __m128i v208; // xmm0
  __m128i *v209; // rax
  __m128i v210; // xmm0
  __m128i v211; // xmm0
  __int64 *v212; // rax
  __int64 v213; // rdi
  unsigned __int64 v214; // rcx
  __int8 *v215; // rsi
  __int64 v216; // rdi
  unsigned int v217; // edx
  unsigned int v218; // eax
  __int64 v219; // rsi
  __int64 v220; // rsi
  unsigned __int64 v221; // rcx
  unsigned int v222; // edx
  unsigned __int64 v223; // rdi
  unsigned int v224; // edx
  unsigned int v225; // eax
  __int64 v226; // rsi
  __int64 v227; // rsi
  unsigned __int64 v228; // rcx
  unsigned int v229; // edx
  unsigned __int64 v230; // rdi
  unsigned int v231; // edx
  unsigned int v232; // eax
  __int64 v233; // rsi
  __int64 v234; // rdi
  unsigned __int64 v235; // rcx
  __int8 *v236; // rsi
  __int64 v237; // rdi
  unsigned int v238; // edx
  unsigned int v239; // eax
  __int64 v240; // rsi
  unsigned __int64 v241; // rcx
  __int8 *v242; // r8
  unsigned int v243; // eax
  unsigned int v244; // edx
  __int64 v245; // rsi
  int v246; // [rsp-8h] [rbp-478h]
  int v247; // [rsp+0h] [rbp-470h]
  int v248; // [rsp+0h] [rbp-470h]
  int v249; // [rsp+0h] [rbp-470h]
  int v250; // [rsp+0h] [rbp-470h]
  int v251; // [rsp+0h] [rbp-470h]
  __int64 v252; // [rsp+0h] [rbp-470h]
  int v253; // [rsp+0h] [rbp-470h]
  int v254; // [rsp+0h] [rbp-470h]
  int v255; // [rsp+0h] [rbp-470h]
  int v256; // [rsp+0h] [rbp-470h]
  int v257; // [rsp+0h] [rbp-470h]
  int v258; // [rsp+0h] [rbp-470h]
  int v259; // [rsp+0h] [rbp-470h]
  int v260; // [rsp+0h] [rbp-470h]
  int v261; // [rsp+0h] [rbp-470h]
  int v262; // [rsp+0h] [rbp-470h]
  int v263; // [rsp+0h] [rbp-470h]
  int v264; // [rsp+0h] [rbp-470h]
  int v265; // [rsp+0h] [rbp-470h]
  int v266; // [rsp+0h] [rbp-470h]
  char v267; // [rsp+4h] [rbp-46Ch]
  void *v269; // [rsp+8h] [rbp-468h]
  int v270; // [rsp+8h] [rbp-468h]
  int v271; // [rsp+8h] [rbp-468h]
  int v272; // [rsp+8h] [rbp-468h]
  int v273; // [rsp+8h] [rbp-468h]
  int v274; // [rsp+8h] [rbp-468h]
  int v275; // [rsp+8h] [rbp-468h]
  int v276; // [rsp+8h] [rbp-468h]
  int v277; // [rsp+8h] [rbp-468h]
  int v278; // [rsp+8h] [rbp-468h]
  int v279; // [rsp+8h] [rbp-468h]
  int v280; // [rsp+8h] [rbp-468h]
  int v281; // [rsp+8h] [rbp-468h]
  int v282; // [rsp+8h] [rbp-468h]
  int v283; // [rsp+8h] [rbp-468h]
  int v284; // [rsp+8h] [rbp-468h]
  int v285; // [rsp+8h] [rbp-468h]
  int v286; // [rsp+8h] [rbp-468h]
  int v287; // [rsp+8h] [rbp-468h]
  __int64 v288; // [rsp+8h] [rbp-468h]
  int v289; // [rsp+10h] [rbp-460h]
  int v290; // [rsp+10h] [rbp-460h]
  int v291; // [rsp+10h] [rbp-460h]
  int v292; // [rsp+10h] [rbp-460h]
  int v293; // [rsp+10h] [rbp-460h]
  int v294; // [rsp+10h] [rbp-460h]
  int v295; // [rsp+10h] [rbp-460h]
  int v296; // [rsp+10h] [rbp-460h]
  int v297; // [rsp+10h] [rbp-460h]
  int v298; // [rsp+10h] [rbp-460h]
  int v299; // [rsp+10h] [rbp-460h]
  int v300; // [rsp+10h] [rbp-460h]
  int v301; // [rsp+10h] [rbp-460h]
  int v302; // [rsp+10h] [rbp-460h]
  int v303; // [rsp+10h] [rbp-460h]
  int v304; // [rsp+10h] [rbp-460h]
  int v305; // [rsp+10h] [rbp-460h]
  int v306; // [rsp+10h] [rbp-460h]
  int v307; // [rsp+10h] [rbp-460h]
  int v308; // [rsp+18h] [rbp-458h]
  __int64 v309; // [rsp+18h] [rbp-458h]
  int v310; // [rsp+18h] [rbp-458h]
  int v311; // [rsp+18h] [rbp-458h]
  int v312; // [rsp+18h] [rbp-458h]
  int v313; // [rsp+18h] [rbp-458h]
  int v314; // [rsp+18h] [rbp-458h]
  int v315; // [rsp+18h] [rbp-458h]
  int v316; // [rsp+18h] [rbp-458h]
  int v317; // [rsp+18h] [rbp-458h]
  int v318; // [rsp+18h] [rbp-458h]
  int v319; // [rsp+18h] [rbp-458h]
  int v320; // [rsp+18h] [rbp-458h]
  int v321; // [rsp+18h] [rbp-458h]
  int v322; // [rsp+18h] [rbp-458h]
  int v323; // [rsp+18h] [rbp-458h]
  int v324; // [rsp+18h] [rbp-458h]
  int v325; // [rsp+18h] [rbp-458h]
  int v326; // [rsp+18h] [rbp-458h]
  int v327; // [rsp+20h] [rbp-450h]
  int v328; // [rsp+20h] [rbp-450h]
  int v329; // [rsp+20h] [rbp-450h]
  int v330; // [rsp+20h] [rbp-450h]
  int v331; // [rsp+20h] [rbp-450h]
  int v332; // [rsp+20h] [rbp-450h]
  int v333; // [rsp+20h] [rbp-450h]
  int v334; // [rsp+20h] [rbp-450h]
  int v335; // [rsp+20h] [rbp-450h]
  int v336; // [rsp+20h] [rbp-450h]
  int v337; // [rsp+20h] [rbp-450h]
  int v338; // [rsp+20h] [rbp-450h]
  __int64 v339; // [rsp+20h] [rbp-450h]
  int v340; // [rsp+20h] [rbp-450h]
  int v341; // [rsp+20h] [rbp-450h]
  int v342; // [rsp+20h] [rbp-450h]
  int v343; // [rsp+20h] [rbp-450h]
  __int64 v344; // [rsp+20h] [rbp-450h]
  int v345; // [rsp+20h] [rbp-450h]
  char v346; // [rsp+28h] [rbp-448h]
  int v347; // [rsp+28h] [rbp-448h]
  char v348; // [rsp+28h] [rbp-448h]
  char v349; // [rsp+28h] [rbp-448h]
  char v350; // [rsp+28h] [rbp-448h]
  char v351; // [rsp+28h] [rbp-448h]
  char v352; // [rsp+28h] [rbp-448h]
  char v353; // [rsp+28h] [rbp-448h]
  char v354; // [rsp+28h] [rbp-448h]
  char v355; // [rsp+28h] [rbp-448h]
  char v356; // [rsp+28h] [rbp-448h]
  char v357; // [rsp+28h] [rbp-448h]
  int v358[2]; // [rsp+28h] [rbp-448h]
  char v359; // [rsp+28h] [rbp-448h]
  char v360; // [rsp+28h] [rbp-448h]
  int v361; // [rsp+28h] [rbp-448h]
  char v362; // [rsp+28h] [rbp-448h]
  char v363; // [rsp+28h] [rbp-448h]
  int v364; // [rsp+28h] [rbp-448h]
  int v365; // [rsp+30h] [rbp-440h]
  int v366; // [rsp+30h] [rbp-440h]
  int v367; // [rsp+30h] [rbp-440h]
  int v368; // [rsp+30h] [rbp-440h]
  int v369; // [rsp+30h] [rbp-440h]
  int v370; // [rsp+30h] [rbp-440h]
  int v371; // [rsp+30h] [rbp-440h]
  int v372; // [rsp+30h] [rbp-440h]
  int v373; // [rsp+30h] [rbp-440h]
  int v374; // [rsp+30h] [rbp-440h]
  int v375; // [rsp+30h] [rbp-440h]
  int v376; // [rsp+30h] [rbp-440h]
  int v377; // [rsp+30h] [rbp-440h]
  int v378; // [rsp+30h] [rbp-440h]
  int v379; // [rsp+30h] [rbp-440h]
  int v380; // [rsp+30h] [rbp-440h]
  int v381; // [rsp+30h] [rbp-440h]
  int v382; // [rsp+30h] [rbp-440h]
  int v383; // [rsp+30h] [rbp-440h]
  int v384; // [rsp+38h] [rbp-438h]
  int v385; // [rsp+38h] [rbp-438h]
  int v386; // [rsp+38h] [rbp-438h]
  int v387; // [rsp+38h] [rbp-438h]
  int v388; // [rsp+38h] [rbp-438h]
  int v389; // [rsp+38h] [rbp-438h]
  int v390; // [rsp+38h] [rbp-438h]
  int v391; // [rsp+38h] [rbp-438h]
  int v392; // [rsp+38h] [rbp-438h]
  int v393; // [rsp+38h] [rbp-438h]
  int v394; // [rsp+38h] [rbp-438h]
  int v395; // [rsp+38h] [rbp-438h]
  int v396; // [rsp+38h] [rbp-438h]
  int v397; // [rsp+38h] [rbp-438h]
  int v398; // [rsp+38h] [rbp-438h]
  int v399; // [rsp+38h] [rbp-438h]
  int v400; // [rsp+38h] [rbp-438h]
  int v401; // [rsp+38h] [rbp-438h]
  int v402; // [rsp+38h] [rbp-438h]
  int v403; // [rsp+40h] [rbp-430h]
  int v404; // [rsp+40h] [rbp-430h]
  int v405; // [rsp+40h] [rbp-430h]
  int v406; // [rsp+40h] [rbp-430h]
  int v407; // [rsp+40h] [rbp-430h]
  int v408; // [rsp+40h] [rbp-430h]
  int v409; // [rsp+40h] [rbp-430h]
  int v410; // [rsp+40h] [rbp-430h]
  int v411; // [rsp+40h] [rbp-430h]
  int v412; // [rsp+40h] [rbp-430h]
  int v413; // [rsp+40h] [rbp-430h]
  int v414; // [rsp+40h] [rbp-430h]
  int v415; // [rsp+40h] [rbp-430h]
  int v416; // [rsp+40h] [rbp-430h]
  int v417; // [rsp+40h] [rbp-430h]
  int v418; // [rsp+40h] [rbp-430h]
  int v419; // [rsp+40h] [rbp-430h]
  __int64 v420; // [rsp+40h] [rbp-430h]
  int v421; // [rsp+40h] [rbp-430h]
  _QWORD *v422; // [rsp+48h] [rbp-428h]
  void *v423; // [rsp+48h] [rbp-428h]
  void *v424; // [rsp+48h] [rbp-428h]
  void *v425; // [rsp+48h] [rbp-428h]
  void *v426; // [rsp+48h] [rbp-428h]
  void *v427; // [rsp+48h] [rbp-428h]
  void *v428; // [rsp+48h] [rbp-428h]
  void *v429; // [rsp+48h] [rbp-428h]
  void *v430; // [rsp+48h] [rbp-428h]
  void *v431; // [rsp+48h] [rbp-428h]
  void *v432; // [rsp+48h] [rbp-428h]
  void *v433; // [rsp+48h] [rbp-428h]
  _QWORD *v434; // [rsp+48h] [rbp-428h]
  void *v435; // [rsp+48h] [rbp-428h]
  void *v436; // [rsp+48h] [rbp-428h]
  void *v437; // [rsp+48h] [rbp-428h]
  void *v438; // [rsp+48h] [rbp-428h]
  void *v439; // [rsp+48h] [rbp-428h]
  __int64 v440; // [rsp+48h] [rbp-428h]
  int v441; // [rsp+50h] [rbp-420h]
  _DWORD *v442; // [rsp+50h] [rbp-420h]
  void **v443; // [rsp+58h] [rbp-418h]
  int v444; // [rsp+60h] [rbp-410h]
  int v445[2]; // [rsp+60h] [rbp-410h]
  __m128i *v446; // [rsp+60h] [rbp-410h]
  int v447; // [rsp+68h] [rbp-408h]
  int v448[2]; // [rsp+68h] [rbp-408h]
  __int64 v449; // [rsp+68h] [rbp-408h]
  void *src[2]; // [rsp+70h] [rbp-400h] BYREF
  int v451[4]; // [rsp+80h] [rbp-3F0h] BYREF
  int v452[2]; // [rsp+90h] [rbp-3E0h]
  __int64 v453; // [rsp+98h] [rbp-3D8h]
  void *v454[2]; // [rsp+A0h] [rbp-3D0h] BYREF
  __int64 v455; // [rsp+B0h] [rbp-3C0h]
  __int64 v456; // [rsp+B8h] [rbp-3B8h]
  __m128i v457; // [rsp+C0h] [rbp-3B0h] BYREF
  void *v458[2]; // [rsp+D0h] [rbp-3A0h] BYREF
  __m128i *p_si128; // [rsp+E0h] [rbp-390h]
  int v460[2]; // [rsp+E8h] [rbp-388h]
  int v461[2]; // [rsp+F8h] [rbp-378h] BYREF
  int v462[2]; // [rsp+100h] [rbp-370h] BYREF
  int v463[2]; // [rsp+108h] [rbp-368h] BYREF
  int v464[2]; // [rsp+110h] [rbp-360h] BYREF
  int v465[2]; // [rsp+118h] [rbp-358h] BYREF
  int v466[2]; // [rsp+120h] [rbp-350h] BYREF
  int v467[2]; // [rsp+128h] [rbp-348h] BYREF
  int v468[2]; // [rsp+130h] [rbp-340h] BYREF
  _QWORD *v469; // [rsp+138h] [rbp-338h]
  int v470[2]; // [rsp+140h] [rbp-330h] BYREF
  _QWORD *v471; // [rsp+148h] [rbp-328h]
  int v472[2]; // [rsp+150h] [rbp-320h] BYREF
  _QWORD *v473; // [rsp+158h] [rbp-318h]
  __int64 v474; // [rsp+160h] [rbp-310h] BYREF
  _QWORD *v475; // [rsp+168h] [rbp-308h]
  int v476[2]; // [rsp+170h] [rbp-300h] BYREF
  _QWORD *v477; // [rsp+178h] [rbp-2F8h]
  int v478[2]; // [rsp+180h] [rbp-2F0h] BYREF
  _QWORD *v479; // [rsp+188h] [rbp-2E8h]
  int v480[2]; // [rsp+190h] [rbp-2E0h] BYREF
  _QWORD *v481; // [rsp+198h] [rbp-2D8h]
  int v482[2]; // [rsp+1A0h] [rbp-2D0h] BYREF
  _QWORD *v483; // [rsp+1A8h] [rbp-2C8h]
  int v484[2]; // [rsp+1B0h] [rbp-2C0h] BYREF
  _QWORD *v485; // [rsp+1B8h] [rbp-2B8h]
  int v486[2]; // [rsp+1C0h] [rbp-2B0h] BYREF
  __int64 v487; // [rsp+1C8h] [rbp-2A8h]
  int v488[2]; // [rsp+1D0h] [rbp-2A0h] BYREF
  __int64 v489; // [rsp+1D8h] [rbp-298h]
  int v490[2]; // [rsp+1E0h] [rbp-290h] BYREF
  __int64 v491; // [rsp+1E8h] [rbp-288h]
  int v492[2]; // [rsp+1F0h] [rbp-280h] BYREF
  __int64 v493; // [rsp+1F8h] [rbp-278h]
  int v494[2]; // [rsp+200h] [rbp-270h] BYREF
  __int64 v495; // [rsp+208h] [rbp-268h]
  int v496[2]; // [rsp+210h] [rbp-260h] BYREF
  void *v497; // [rsp+218h] [rbp-258h]
  __int64 v498; // [rsp+220h] [rbp-250h] BYREF
  _QWORD *v499; // [rsp+228h] [rbp-248h]
  _BYTE v500[32]; // [rsp+230h] [rbp-240h] BYREF
  char v501[16]; // [rsp+250h] [rbp-220h] BYREF
  __int64 v502; // [rsp+260h] [rbp-210h]
  __m128i v503; // [rsp+270h] [rbp-200h] BYREF
  __int64 v504; // [rsp+280h] [rbp-1F0h]
  __m128i *v505; // [rsp+290h] [rbp-1E0h] BYREF
  __m128i v506; // [rsp+298h] [rbp-1D8h] BYREF
  __m128i *v507; // [rsp+2B0h] [rbp-1C0h] BYREF
  __m128 v508; // [rsp+2B8h] [rbp-1B8h] BYREF
  __m128i *v509; // [rsp+2D0h] [rbp-1A0h] BYREF
  __m128 v510; // [rsp+2D8h] [rbp-198h] BYREF
  size_t *v511; // [rsp+2F0h] [rbp-180h] BYREF
  __m128 n; // [rsp+2F8h] [rbp-178h] BYREF
  __m128i v513; // [rsp+310h] [rbp-160h] BYREF
  __m128i v514; // [rsp+320h] [rbp-150h]
  _DWORD *v515; // [rsp+330h] [rbp-140h]
  void *v516; // [rsp+340h] [rbp-130h] BYREF
  __m128i v517; // [rsp+348h] [rbp-128h] BYREF
  __int64 v518; // [rsp+358h] [rbp-118h]
  __int64 v519; // [rsp+360h] [rbp-110h]
  void *v520[2]; // [rsp+370h] [rbp-100h] BYREF
  __m128i si128; // [rsp+380h] [rbp-F0h] BYREF
  unsigned __int128 v522; // [rsp+390h] [rbp-E0h]
  __m128i v523; // [rsp+3A0h] [rbp-D0h]
  __m128i v524; // [rsp+3B0h] [rbp-C0h]
  __m128i v525; // [rsp+3C0h] [rbp-B0h]
  __m128i v526; // [rsp+3D0h] [rbp-A0h]
  __m128i v527; // [rsp+3E0h] [rbp-90h]
  __m128i v528; // [rsp+3F0h] [rbp-80h]
  _OWORD v529[2]; // [rsp+400h] [rbp-70h] BYREF
  __m128i v530[5]; // [rsp+420h] [rbp-50h]

  v7 = a2[4];
  v8 = *(_QWORD **)(a1 + 24);
  v455 = a1;
  v457.m128i_i64[0] = *(_QWORD *)(v7 + 48);
  *(_QWORD *)v452 = v500;
  sub_15F01E0(v500, v8);
  sub_162A710(v501, v8);
  *(_QWORD *)v468 = 0;
  v456 = v502;
  v469 = v8;
  *(_QWORD *)v470 = 0;
  v471 = v8;
  *(_QWORD *)v472 = 0;
  v473 = v8;
  v474 = 0;
  v475 = v8;
  *(_QWORD *)v476 = 0;
  v477 = v8;
  *(_QWORD *)v478 = 0;
  v479 = v8;
  v443 = &v516;
  sub_180C5A0(&v516, "List");
  *(_QWORD *)v460 = v520;
  sub_15FBF30(
    (unsigned int)v520,
    (unsigned int)v500,
    v457.m128i_i32[0],
    (unsigned int)&v516,
    (unsigned int)v472,
    (unsigned int)&v474,
    (__int64)v476,
    (__int64)v478,
    (__int64)v468,
    (__int64)v470);
  v457.m128i_i64[1] = (__int64)v520[0];
  if ( v520[0] )
  {
    v9 = *((_DWORD *)v520[0] + 2);
    if ( !v9 )
      sub_15D7BC0(v520[1], v520[0]);
  }
  *(_QWORD *)v480 = 0;
  v481 = v8;
  *(_QWORD *)v482 = 0;
  v483 = v8;
  *(_QWORD *)v484 = 0;
  v485 = v8;
  v11 = sub_15DC610((int)v8, v468[0], 0, 0, v9, v10, v247, a3, v289, v308, v327, v346, v365, v384, v403, a2);
  v453 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v15 = v8[107];
  v506.m128i_i8[8] = 0;
  v508.m128_i8[8] = 0;
  v385 = v15;
  v16 = v8[108];
  v510.m128_i8[8] = 0;
  v366 = v16;
  v458[0] = &v506.m128i_u64[1];
  v505 = (__m128i *)&v506.m128i_u64[1];
  v454[0] = &v508.m128_u16[4];
  v507 = (__m128i *)&v508.m128_u16[4];
  *(_QWORD *)v451 = &v510.m128_u64[1];
  v509 = (__m128i *)&v510.m128_u16[4];
  n.m128_i8[8] = 0;
  v17 = v422[4];
  v506.m128i_i64[0] = 0;
  v508.m128_u64[0] = 0;
  v18 = *(_QWORD *)(v17 + 24);
  v511 = &n.m128_u64[1];
  v510.m128_u64[0] = 0;
  n.m128_u64[0] = 0;
  v19 = *(unsigned __int8 **)(v18 + 8);
  v20 = v19[8];
  if ( (_BYTE)v20 )
  {
    if ( (_BYTE)v20 != 1 || *(_WORD *)(*(_QWORD *)v19 + 4LL) != 4 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_140FB4(*(__int64 **)v460, "expected an integer or function declaration", v4);
      v5 = *(__int64 **)v460;
      v6 = *(__int64 **)v460;
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v6);
      sub_233E40((__int64)v5);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    sub_180CE20(
      v460[0],
      *(_QWORD *)v19 + 16,
      v20,
      v12,
      v13,
      v14,
      v248,
      v269,
      v290,
      v309,
      v328,
      v347,
      v366,
      v385,
      v404,
      (int)v422,
      v441,
      (int)&v516,
      v444,
      v447,
      (int)src[0],
      (int)src[1],
      v451[0],
      v451[2],
      v452[0],
      v453,
      (int)v454[0],
      v454[1],
      v455,
      v456);
    v21 = (__m128i *)v511;
    v22 = (__m128i *)v511;
    if ( v511 == (size_t *)&n.m128_u16[4] )
    {
      p_si128 = &si128;
      if ( v520[0] != &si128 )
      {
        v210 = _mm_loadu_si128((const __m128i *)&v520[1]);
        v511 = (size_t *)v520[0];
        n = (__m128)v210;
        goto LABEL_243;
      }
      v23 = (char *)v520[1];
      v24 = v520[1];
    }
    else
    {
      v23 = (char *)v520[1];
      p_si128 = &si128;
      v24 = v520[1];
      if ( v520[0] != &si128 )
      {
        v511 = (size_t *)v520[0];
        v25 = n.m128_u64[1];
        n = _mm_loadh_ps((const double *)si128.m128i_i64);
        if ( v21 )
        {
          v520[0] = v21;
          si128.m128i_i64[0] = v25;
LABEL_13:
          v520[1] = nullptr;
          v26 = *(__int64 **)v460;
          v21->m128i_i8[0] = 0;
          sub_233E40((__int64)v26);
          goto LABEL_14;
        }
LABEL_243:
        v520[0] = &si128;
        p_si128 = &si128;
        v21 = &si128;
        goto LABEL_13;
      }
    }
    if ( !v23 )
    {
LABEL_197:
      n.m128_u64[0] = (unsigned __int64)v24;
      v24[(_QWORD)v21] = 0;
      v21 = (__m128i *)v520[0];
      goto LABEL_13;
    }
    if ( v23 == (_BYTE *)&dword_0 + 1 )
    {
      *(_BYTE *)v511 = si128.m128i_i8[0];
      v24 = v520[1];
      v21 = (__m128i *)v511;
      goto LABEL_197;
    }
    if ( (unsigned int)v23 >= 8 )
    {
      *v511 = si128.m128i_i64[0];
      v234 = (__int64)p_si128;
      *(__int64 *)((char *)&v22->m128i_i64[-1] + (unsigned int)v23) = *(__int64 *)((char *)&p_si128->m128i_i64[-1]
                                                                                 + (unsigned int)v23);
      v235 = (unsigned __int64)&v22->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
      v236 = &v22->m128i_i8[-v235];
      v237 = v234 - (_QWORD)v236;
      if ( (((_DWORD)v23 + (_DWORD)v236) & 0xFFFFFFF8) >= 8 )
      {
        v238 = ((_DWORD)v23 + (_DWORD)v236) & 0xFFFFFFF8;
        v239 = 0;
        do
        {
          v240 = v239;
          v239 += 8;
          *(_QWORD *)(v235 + v240) = *(_QWORD *)(v237 + v240);
        }
        while ( v239 < v238 );
      }
    }
    else
    {
      if ( ((unsigned __int8)v23 & 4) != 0 )
      {
        *(_DWORD *)v511 = si128.m128i_i32[0];
        *(__int32 *)((char *)&v22->m128i_i32[-1] + (unsigned int)v23) = *(__int32 *)((char *)&p_si128->m128i_i32[-1]
                                                                                   + (unsigned int)v23);
        v22 = (__m128i *)v511;
        v23 = (char *)v520[1];
        goto LABEL_196;
      }
      if ( !(_DWORD)v23 )
      {
LABEL_196:
        v24 = v23;
        v21 = v22;
        goto LABEL_197;
      }
      *(_BYTE *)v511 = si128.m128i_i8[0];
      if ( ((unsigned __int8)v23 & 2) != 0 )
      {
        *(__int16 *)((char *)&v22->m128i_i16[-1] + (unsigned int)v23) = *(__int16 *)((char *)&p_si128->m128i_i16[-1]
                                                                                   + (unsigned int)v23);
        v22 = (__m128i *)v511;
        v23 = (char *)v520[1];
        goto LABEL_196;
      }
    }
    v22 = (__m128i *)v511;
    v23 = (char *)v520[1];
    goto LABEL_196;
  }
  v175 = *(_DWORD *)v19;
  v176 = *(_DWORD *)v19 >> 31;
  v177 = -v175;
  if ( v175 > 0 )
    v177 = v175;
  LODWORD(src[0]) = v176;
  v178 = v176;
  if ( v177 <= 9 )
  {
    v517.m128i_i8[8] = 45;
    v182 = (unsigned int)(v176 + 1);
    v516 = &v517.m128i_u64[1];
    v189 = &v517.m128i_i8[LOBYTE(src[0]) + 8];
LABEL_172:
    v196 = v177 + 48;
    goto LABEL_173;
  }
  v179 = v177;
  v180 = 1;
  while ( 1 )
  {
    if ( v179 <= 0x63 )
    {
      v181 = v180 + 1;
      LODWORD(p_si128) = v180 + 1;
      goto LABEL_161;
    }
    if ( v179 <= 0x3E7 )
    {
      v181 = v180 + 2;
      LODWORD(p_si128) = v180 + 2;
      goto LABEL_161;
    }
    if ( v179 <= 0x270F )
    {
      v181 = v180 + 3;
      LODWORD(p_si128) = v180 + 3;
      goto LABEL_161;
    }
    v181 = v180 + 4;
    v180 += 4;
    if ( v179 <= 0x1869F )
      break;
    v179 /= 0x2710u;
  }
  LODWORD(p_si128) = v181;
LABEL_161:
  v182 = (unsigned int)(v178 + v181);
  v517.m128i_i64[0] = 0;
  v516 = &v517.m128i_u64[1];
  v183 = &v517.m128i_i64[1];
  v517.m128i_i8[8] = 0;
  if ( v182 > 0xF )
  {
    if ( v182 <= 0x1D )
    {
      v449 = 30;
      v184 = 31;
    }
    else
    {
      v449 = (unsigned int)(v178 + v181);
      v184 = v182 + 1;
    }
    v185 = (__int64 *)operator new(v184);
    v186 = (__m128i *)v516;
    v183 = v185;
    if ( v517.m128i_i64[0] )
    {
      if ( v517.m128i_i64[0] != -1 )
      {
        v446 = (__m128i *)v516;
        v212 = (__int64 *)memcpy(v185, v516, v517.m128i_i64[0] + 1);
        v186 = v446;
        v183 = v212;
        if ( v446 == (__m128i *)&v517.m128i_u64[1] )
          goto LABEL_167;
      }
    }
    else
    {
      *(_BYTE *)v185 = *(_BYTE *)v516;
      if ( v186 == (__m128i *)&v517.m128i_u64[1] )
        goto LABEL_167;
    }
    *(_QWORD *)v445 = v183;
    operator delete(v186, v517.m128i_i64[1] + 1);
    v183 = *(__int64 **)v445;
LABEL_167:
    v516 = v183;
    v517.m128i_i64[1] = v449;
  }
  v187 = LOBYTE(src[0]);
  v188 = (int)p_si128;
  *(_BYTE *)v183 = 45;
  v189 = (char *)v183 + v187;
  v190 = v188 - 1;
  *(__m128i *)v520 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
  v522 = (unsigned __int128)_mm_load_si128((const __m128i *)&xmmword_18B63F0);
  v523 = _mm_load_si128((const __m128i *)&xmmword_18B6400);
  v524 = _mm_load_si128((const __m128i *)&xmmword_18B6410);
  v525 = _mm_load_si128((const __m128i *)&xmmword_18B6420);
  v526 = _mm_load_si128((const __m128i *)&xmmword_18B6430);
  v527 = _mm_load_si128((const __m128i *)&xmmword_18B6440);
  v528 = _mm_load_si128((const __m128i *)&xmmword_18B6450);
  v529[0] = _mm_load_si128((const __m128i *)&xmmword_18B6460);
  v529[1] = _mm_load_si128((const __m128i *)&xmmword_18B6470);
  v530[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
  *(__m128i *)((char *)v530 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
  if ( v177 > 0x63 )
  {
    v191 = v190;
    do
    {
      v192 = v177 % 0x64;
      v193 = v177;
      v177 /= 0x64u;
      v194 = 2 * v192;
      v189[v191] = *((_BYTE *)v520 + (unsigned int)(v194 + 1));
      v195 = (unsigned int)(v191 - 1);
      v191 -= 2;
      v189[v195] = *((_BYTE *)v520 + v194);
    }
    while ( v193 > 0x270F );
    if ( v193 <= 0x3E7 )
      goto LABEL_172;
  }
  v207 = 2 * v177;
  v189[1] = *((_BYTE *)v520 + (unsigned int)(v207 + 1));
  v196 = *((_BYTE *)v520 + v207);
LABEL_173:
  *v189 = v196;
  v517.m128i_i64[0] = v182;
  *((_BYTE *)v516 + v182) = 0;
  v197 = (__int64 *)v511;
  v198 = (__int64 *)v511;
  if ( v511 == (size_t *)&n.m128_u16[4] )
  {
    if ( v516 != &v517.m128i_u64[1] )
    {
      v211 = _mm_loadu_si128(&v517);
      v511 = (size_t *)v516;
      n = (__m128)v211;
      goto LABEL_252;
    }
    v199 = v517.m128i_i64[0];
    v200 = v517.m128i_i64[0];
LABEL_256:
    if ( !v199 )
    {
LABEL_264:
      n.m128_u64[0] = v200;
      *((_BYTE *)v197 + v200) = 0;
      v197 = (__int64 *)v516;
      goto LABEL_177;
    }
    if ( v199 == 1 )
    {
      *(_BYTE *)v511 = v517.m128i_i8[8];
      v200 = v517.m128i_i64[0];
      v197 = (__int64 *)v511;
      goto LABEL_264;
    }
    if ( (unsigned int)v199 >= 8 )
    {
      *v511 = v517.m128i_u64[1];
      *(__int64 *)((char *)v198 + (unsigned int)v199 - 8) = *(__int64 *)((char *)v517.m128i_i64 + (unsigned int)v199);
      v241 = (unsigned __int64)(v198 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v242 = (__int8 *)((char *)&v517.m128i_u64[1] - ((char *)v198 - v241));
      if ( (((_DWORD)v199 + (_DWORD)v198 - (_DWORD)v241) & 0xFFFFFFF8) >= 8 )
      {
        v243 = (v199 + (_DWORD)v198 - v241) & 0xFFFFFFF8;
        v244 = 0;
        do
        {
          v245 = v244;
          v244 += 8;
          *(_QWORD *)(v241 + v245) = *(_QWORD *)&v242[v245];
        }
        while ( v244 < v243 );
      }
    }
    else
    {
      if ( (v199 & 4) != 0 )
      {
        *(_DWORD *)v511 = v517.m128i_i32[2];
        *(_DWORD *)((char *)v198 + (unsigned int)v199 - 4) = *(__int32 *)((char *)&v517.m128i_i32[1] + (unsigned int)v199);
        v199 = v517.m128i_i64[0];
        v198 = (__int64 *)v511;
        goto LABEL_263;
      }
      if ( !(_DWORD)v199 )
      {
LABEL_263:
        v200 = v199;
        v197 = v198;
        goto LABEL_264;
      }
      *(_BYTE *)v511 = v517.m128i_i8[8];
      if ( (v199 & 2) != 0 )
      {
        *(_WORD *)((char *)v198 + (unsigned int)v199 - 2) = *(__int16 *)((char *)&v517.m128i_i16[3] + (unsigned int)v199);
        v199 = v517.m128i_i64[0];
        v198 = (__int64 *)v511;
        goto LABEL_263;
      }
    }
    v199 = v517.m128i_i64[0];
    v198 = (__int64 *)v511;
    goto LABEL_263;
  }
  v199 = v517.m128i_i64[0];
  v200 = v517.m128i_i64[0];
  if ( v516 == &v517.m128i_u64[1] )
    goto LABEL_256;
  v511 = (size_t *)v516;
  v201 = n.m128_i64[1];
  n = _mm_loadh_ps((const double *)&v517.m128i_i64[1]);
  if ( !v197 )
  {
LABEL_252:
    v516 = &v517.m128i_u64[1];
    v197 = &v517.m128i_i64[1];
    goto LABEL_177;
  }
  v516 = v197;
  v517.m128i_i64[1] = v201;
LABEL_177:
  v517.m128i_i64[0] = 0;
  *(_BYTE *)v197 = 0;
  sub_233E40((__int64)&v516);
  p_si128 = &si128;
LABEL_14:
  v27 = n.m128_u64[0];
  v520[1] = nullptr;
  si128.m128i_i8[0] = 0;
  src[0] = v511;
  v28 = n.m128_u64[0] + 6;
  v520[0] = p_si128;
  if ( n.m128_u64[0] + 6 <= 0xF )
  {
    v30 = (__int64)p_si128;
    v31 = nullptr;
    v32 = &byte_6;
  }
  else
  {
    if ( (v28 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v28 <= 0x1D )
    {
      v28 = 30;
      v29 = 31;
    }
    else
    {
      v29 = n.m128_u64[0] + 7;
      if ( (signed __int64)(n.m128_u64[0] + 7) < 0 )
        std::__throw_bad_alloc();
    }
    v30 = operator new(v29);
    if ( v520[1] )
    {
      if ( v520[1] != (void *)-1LL )
        memcpy((void *)v30, v520[0], (size_t)v520[1] + 1);
    }
    else
    {
      *(_BYTE *)v30 = *(_BYTE *)v520[0];
    }
    sub_233E40(*(__int64 *)v460);
    v31 = (char *)v520[1];
    v520[0] = (void *)v30;
    si128.m128i_i64[0] = v28;
    if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v520[1] <= 5 )
      std::__throw_length_error("basic_string::append");
    v32 = (char *)v520[1] + 6;
    if ( (void *)v28 < (char *)v520[1] + 6 )
    {
      sub_23A830(*(_QWORD **)v460, (size_t)v520[1], 0, "member", 6u);
      goto LABEL_24;
    }
  }
  v173 = &v31[v30];
  *(_DWORD *)v173 = 1651336557;
  *((_WORD *)v173 + 2) = 29285;
LABEL_24:
  v520[1] = v32;
  *((_BYTE *)v520[0] + (unsigned __int64)v32) = 0;
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v520[1] < v27 )
    std::__throw_length_error("basic_string::append");
  v33 = v520[0];
  v34 = (char *)v520[1] + v27;
  if ( v520[0] == p_si128 )
    v35 = 15;
  else
    v35 = si128.m128i_i64[0];
  if ( v35 < (unsigned __int64)v34 )
  {
    sub_23A830(*(_QWORD **)v460, (size_t)v520[1], 0, (char *)src[0], v27);
    v33 = v520[0];
  }
  else if ( v27 )
  {
    v36 = (char *)v520[1] + (unsigned __int64)v520[0];
    if ( v27 == 1 )
      *v36 = *(_BYTE *)src[0];
    else
      memcpy(v36, src[0], v27);
    v33 = v520[0];
  }
  v520[1] = v34;
  v37 = (__m128i *)v458[0];
  v34[(_QWORD)v33] = 0;
  v38 = v505;
  v39 = v505;
  if ( v505 == v37 )
  {
    if ( v520[0] != p_si128 )
    {
      v202 = _mm_loadu_si128((const __m128i *)&v520[1]);
      v505 = (__m128i *)v520[0];
      v506 = v202;
LABEL_183:
      v520[0] = p_si128;
      p_si128 = &si128;
      v38 = &si128;
      goto LABEL_36;
    }
  }
  else if ( v520[0] != p_si128 )
  {
    v40 = _mm_loadu_si128((const __m128i *)&v520[1]);
    v41 = v506.m128i_i64[1];
    v505 = (__m128i *)v520[0];
    v506 = v40;
    if ( v38 )
    {
      v520[0] = v38;
      si128.m128i_i64[0] = v41;
      goto LABEL_36;
    }
    goto LABEL_183;
  }
  v203 = v520[1];
  v204 = v520[1];
  if ( v520[1] )
  {
    if ( v520[1] == (char *)&dword_0 + 1 )
    {
      v505->m128i_i8[0] = si128.m128i_i8[0];
      v203 = v520[1];
      v38 = v505;
      goto LABEL_208;
    }
    if ( LODWORD(v520[1]) >= 8 )
    {
      v505->m128i_i64[0] = si128.m128i_i64[0];
      v213 = (__int64)p_si128;
      *(__int64 *)((char *)&v39->m128i_i64[-1] + (unsigned int)v203) = *(__int64 *)((char *)&p_si128->m128i_i64[-1]
                                                                                  + (unsigned int)v203);
      v214 = (unsigned __int64)&v39->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
      v215 = &v39->m128i_i8[-v214];
      v216 = v213 - (_QWORD)v215;
      if ( (((_DWORD)v204 + (_DWORD)v215) & 0xFFFFFFF8) >= 8 )
      {
        v217 = ((_DWORD)v204 + (_DWORD)v215) & 0xFFFFFFF8;
        v218 = 0;
        do
        {
          v219 = v218;
          v218 += 8;
          *(_QWORD *)(v214 + v219) = *(_QWORD *)(v216 + v219);
        }
        while ( v218 < v217 );
      }
    }
    else
    {
      if ( ((__int64)v520[1] & 4) != 0 )
      {
        v505->m128i_i32[0] = si128.m128i_i32[0];
        *(__int32 *)((char *)&v39->m128i_i32[-1] + (unsigned int)v203) = *(__int32 *)((char *)&p_si128->m128i_i32[-1]
                                                                                    + (unsigned int)v203);
        v204 = v520[1];
        v39 = v505;
        goto LABEL_207;
      }
      if ( !LODWORD(v520[1]) )
      {
LABEL_207:
        v203 = v204;
        v38 = v39;
        goto LABEL_208;
      }
      v505->m128i_i8[0] = si128.m128i_i8[0];
      if ( ((unsigned __int8)v203 & 2) != 0 )
      {
        *(__int16 *)((char *)&v39->m128i_i16[-1] + (unsigned int)v203) = *(__int16 *)((char *)&p_si128->m128i_i16[-1]
                                                                                    + (unsigned int)v203);
        v204 = v520[1];
        v39 = v505;
        goto LABEL_207;
      }
    }
    v204 = v520[1];
    v39 = v505;
    goto LABEL_207;
  }
LABEL_208:
  v506.m128i_i64[0] = (__int64)v203;
  v203[(_QWORD)v38] = 0;
  v38 = (__m128i *)v520[0];
LABEL_36:
  v520[1] = nullptr;
  v42 = *(__int64 **)v460;
  v38->m128i_i8[0] = 0;
  sub_233E40((__int64)v42);
  v43 = n.m128_u64[0];
  v520[1] = nullptr;
  si128.m128i_i8[0] = 0;
  v458[0] = v511;
  v44 = n.m128_u64[0] + 4;
  v520[0] = p_si128;
  if ( n.m128_u64[0] + 4 <= 0xF )
  {
    v46 = (__int64)p_si128;
    v47 = nullptr;
    v48 = byte_4;
  }
  else
  {
    if ( (v44 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v44 <= 0x1D )
    {
      v44 = 30;
      v45 = 31;
    }
    else
    {
      v45 = n.m128_u64[0] + 5;
      if ( (signed __int64)(n.m128_u64[0] + 5) < 0 )
        std::__throw_bad_alloc();
    }
    v46 = operator new(v45);
    if ( v520[1] )
    {
      if ( v520[1] != (void *)-1LL )
        memcpy((void *)v46, v520[0], (size_t)v520[1] + 1);
    }
    else
    {
      *(_BYTE *)v46 = *(_BYTE *)v520[0];
    }
    sub_233E40(*(__int64 *)v460);
    v47 = (char *)v520[1];
    v520[0] = (void *)v46;
    si128.m128i_i64[0] = v44;
    if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v520[1] <= 3 )
      std::__throw_length_error("basic_string::append");
    v48 = (char *)v520[1] + 4;
    if ( (void *)v44 < (char *)v520[1] + 4 )
    {
      sub_23A830(*(_QWORD **)v460, (size_t)v520[1], 0, "next", 4u);
      goto LABEL_46;
    }
  }
  *(_DWORD *)&v47[v46] = 1954047342;
LABEL_46:
  v520[1] = v48;
  *((_BYTE *)v520[0] + (unsigned __int64)v48) = 0;
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v520[1] < v43 )
    std::__throw_length_error("basic_string::append");
  v49 = v520[0];
  v50 = (char *)v520[1] + v43;
  if ( v520[0] == p_si128 )
    v51 = 15;
  else
    v51 = si128.m128i_i64[0];
  if ( v51 < (unsigned __int64)v50 )
  {
    sub_23A830(*(_QWORD **)v460, (size_t)v520[1], 0, (char *)v458[0], v43);
    v49 = v520[0];
  }
  else if ( v43 )
  {
    v52 = (char *)v520[1] + (unsigned __int64)v520[0];
    if ( v43 == 1 )
      *v52 = *(_BYTE *)v458[0];
    else
      memcpy(v52, v458[0], v43);
    v49 = v520[0];
  }
  v520[1] = v50;
  v53 = (__m128i *)v454[0];
  v50[(_QWORD)v49] = 0;
  v54 = v507;
  v55 = v507;
  if ( v507 == v53 )
  {
    if ( v520[0] != p_si128 )
    {
      v205 = _mm_loadu_si128((const __m128i *)&v520[1]);
      v507 = (__m128i *)v520[0];
      v206 = p_si128;
      v508 = (__m128)v205;
LABEL_212:
      v520[0] = v206;
      p_si128 = &si128;
      v54 = &si128;
      goto LABEL_58;
    }
    v56 = (char *)v520[1];
    v57 = v520[1];
  }
  else
  {
    v56 = (char *)v520[1];
    v57 = v520[1];
    if ( v520[0] != p_si128 )
    {
      v507 = (__m128i *)v520[0];
      v58 = v508.m128_i64[1];
      v508 = _mm_loadh_ps((const double *)si128.m128i_i64);
      if ( v54 )
      {
        v520[0] = v54;
        si128.m128i_i64[0] = v58;
        goto LABEL_58;
      }
      v206 = p_si128;
      goto LABEL_212;
    }
  }
  if ( v56 )
  {
    if ( v56 == (_BYTE *)&dword_0 + 1 )
    {
      v507->m128i_i8[0] = si128.m128i_i8[0];
      v57 = v520[1];
      v54 = v507;
      goto LABEL_222;
    }
    if ( (unsigned int)v56 >= 8 )
    {
      v507->m128i_i64[0] = si128.m128i_i64[0];
      v220 = (__int64)p_si128;
      *(__int64 *)((char *)&v55->m128i_i64[-1] + (unsigned int)v56) = *(__int64 *)((char *)&p_si128->m128i_i64[-1]
                                                                                 + (unsigned int)v56);
      v221 = (unsigned __int64)&v55->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
      v222 = ((_DWORD)v56 + (_DWORD)v55 - v221) & 0xFFFFFFF8;
      v223 = v220 - ((_QWORD)v55 - v221);
      if ( v222 >= 8 )
      {
        v224 = v222 & 0xFFFFFFF8;
        v225 = 0;
        do
        {
          v226 = v225;
          v225 += 8;
          *(_QWORD *)(v221 + v226) = *(_QWORD *)(v223 + v226);
        }
        while ( v225 < v224 );
      }
    }
    else
    {
      if ( ((unsigned __int8)v56 & 4) != 0 )
      {
        v507->m128i_i32[0] = si128.m128i_i32[0];
        *(__int32 *)((char *)&v55->m128i_i32[-1] + (unsigned int)v56) = *(__int32 *)((char *)&p_si128->m128i_i32[-1]
                                                                                   + (unsigned int)v56);
        v56 = (char *)v520[1];
        v55 = v507;
        goto LABEL_221;
      }
      if ( !(_DWORD)v56 )
      {
LABEL_221:
        v57 = v56;
        v54 = v55;
        goto LABEL_222;
      }
      v507->m128i_i8[0] = si128.m128i_i8[0];
      if ( ((unsigned __int8)v56 & 2) != 0 )
      {
        *(__int16 *)((char *)&v55->m128i_i16[-1] + (unsigned int)v56) = *(__int16 *)((char *)&p_si128->m128i_i16[-1]
                                                                                   + (unsigned int)v56);
        v56 = (char *)v520[1];
        v55 = v507;
        goto LABEL_221;
      }
    }
    v56 = (char *)v520[1];
    v55 = v507;
    goto LABEL_221;
  }
LABEL_222:
  v508.m128_u64[0] = (unsigned __int64)v57;
  v57[(_QWORD)v54] = 0;
  v54 = (__m128i *)v520[0];
LABEL_58:
  v520[1] = nullptr;
  v59 = *(__int64 **)v460;
  v54->m128i_i8[0] = 0;
  sub_233E40((__int64)v59);
  v60 = n.m128_u64[0];
  v520[1] = nullptr;
  si128.m128i_i8[0] = 0;
  v454[0] = v511;
  v61 = n.m128_u64[0] + 9;
  v520[0] = p_si128;
  if ( n.m128_u64[0] + 9 <= 0xF )
  {
    v63 = (__int64)p_si128;
    v64 = nullptr;
    v65 = byte_9;
    *(__m128 *)v458 = _mm_loadh_ps((const double *)&v457.m128i_i64[1]);
  }
  else
  {
    if ( (v61 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v61 <= 0x1D )
    {
      v61 = 30;
      v62 = 31;
    }
    else
    {
      v62 = n.m128_u64[0] + 10;
      if ( (signed __int64)(n.m128_u64[0] + 10) < 0 )
        std::__throw_bad_alloc();
    }
    v63 = operator new(v62);
    if ( v520[1] )
    {
      if ( v520[1] != (void *)-1LL )
        memcpy((void *)v63, v520[0], (size_t)v520[1] + 1);
    }
    else
    {
      *(_BYTE *)v63 = *(_BYTE *)v520[0];
    }
    sub_233E40(*(__int64 *)v460);
    v64 = (char *)v520[1];
    v520[0] = (void *)v63;
    si128.m128i_i64[0] = v61;
    if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v520[1] <= 8 )
      std::__throw_length_error("basic_string::append");
    v65 = (char *)v520[1] + 9;
    *(__m128 *)v458 = _mm_loadh_ps((const double *)&v457.m128i_i64[1]);
    if ( (void *)v61 < (char *)v520[1] + 9 )
    {
      sub_23A830(*(_QWORD **)v460, (size_t)v520[1], 0, "connected", 9u);
      goto LABEL_68;
    }
  }
  v174 = &v64[v63];
  *(_QWORD *)v174 = 0x657463656E6E6F63LL;
  v174[8] = 100;
LABEL_68:
  v520[1] = v65;
  *((_BYTE *)v520[0] + (unsigned __int64)v65) = 0;
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v520[1] < v60 )
    std::__throw_length_error("basic_string::append");
  v66 = v520[0];
  v67 = (char *)v520[1] + v60;
  if ( v520[0] == p_si128 )
    v68 = 15;
  else
    v68 = si128.m128i_i64[0];
  if ( v68 < (unsigned __int64)v67 )
  {
    sub_23A830(*(_QWORD **)v460, (size_t)v520[1], 0, (char *)v454[0], v60);
    v66 = v520[0];
  }
  else if ( v60 )
  {
    v69 = (char *)v520[1] + (unsigned __int64)v520[0];
    if ( v60 == 1 )
      *v69 = *(_BYTE *)v454[0];
    else
      memcpy(v69, v454[0], v60);
    v66 = v520[0];
  }
  v520[1] = v67;
  v70 = *(__m128i **)v451;
  v67[(_QWORD)v66] = 0;
  v71 = v509;
  v72 = v509;
  if ( v509 != v70 )
  {
    v73 = (char *)v520[1];
    v74 = v520[1];
    if ( v520[0] != p_si128 )
    {
      v509 = (__m128i *)v520[0];
      v75 = v510.m128_i64[1];
      v510 = _mm_loadh_ps((const double *)si128.m128i_i64);
      if ( v71 )
      {
        v520[0] = v71;
        si128.m128i_i64[0] = v75;
        goto LABEL_80;
      }
      v209 = p_si128;
      goto LABEL_236;
    }
LABEL_225:
    if ( !v73 )
    {
LABEL_233:
      v510.m128_u64[0] = (unsigned __int64)v74;
      v74[(_QWORD)v71] = 0;
      v71 = (__m128i *)v520[0];
      goto LABEL_80;
    }
    if ( v73 == (_BYTE *)&dword_0 + 1 )
    {
      v509->m128i_i8[0] = si128.m128i_i8[0];
      v74 = v520[1];
      v71 = v509;
      goto LABEL_233;
    }
    if ( (unsigned int)v73 >= 8 )
    {
      v509->m128i_i64[0] = si128.m128i_i64[0];
      v227 = (__int64)p_si128;
      *(__int64 *)((char *)&v72->m128i_i64[-1] + (unsigned int)v73) = *(__int64 *)((char *)&p_si128->m128i_i64[-1]
                                                                                 + (unsigned int)v73);
      v228 = (unsigned __int64)&v72->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
      v229 = ((_DWORD)v73 + (_DWORD)v72 - v228) & 0xFFFFFFF8;
      v230 = v227 - ((_QWORD)v72 - v228);
      if ( v229 >= 8 )
      {
        v231 = v229 & 0xFFFFFFF8;
        v232 = 0;
        do
        {
          v233 = v232;
          v232 += 8;
          *(_QWORD *)(v228 + v233) = *(_QWORD *)(v230 + v233);
        }
        while ( v232 < v231 );
      }
    }
    else
    {
      if ( ((unsigned __int8)v73 & 4) != 0 )
      {
        v509->m128i_i32[0] = si128.m128i_i32[0];
        *(__int32 *)((char *)&v72->m128i_i32[-1] + (unsigned int)v73) = *(__int32 *)((char *)&p_si128->m128i_i32[-1]
                                                                                   + (unsigned int)v73);
        v73 = (char *)v520[1];
        v72 = v509;
        goto LABEL_232;
      }
      if ( !(_DWORD)v73 )
      {
LABEL_232:
        v74 = v73;
        v71 = v72;
        goto LABEL_233;
      }
      v509->m128i_i8[0] = si128.m128i_i8[0];
      if ( ((unsigned __int8)v73 & 2) != 0 )
      {
        *(__int16 *)((char *)&v72->m128i_i16[-1] + (unsigned int)v73) = *(__int16 *)((char *)&p_si128->m128i_i16[-1]
                                                                                   + (unsigned int)v73);
        v73 = (char *)v520[1];
        v72 = v509;
        goto LABEL_232;
      }
    }
    v73 = (char *)v520[1];
    v72 = v509;
    goto LABEL_232;
  }
  if ( v520[0] == p_si128 )
  {
    v73 = (char *)v520[1];
    v74 = v520[1];
    goto LABEL_225;
  }
  v208 = _mm_loadu_si128((const __m128i *)&v520[1]);
  v509 = (__m128i *)v520[0];
  v209 = p_si128;
  v510 = (__m128)v208;
LABEL_236:
  v520[0] = v209;
  p_si128 = &si128;
  v71 = &si128;
LABEL_80:
  v76 = *(__int64 **)v460;
  v520[1] = nullptr;
  v71->m128i_i8[0] = 0;
  sub_233E40((__int64)v76);
  v503 = _mm_load_si128((const __m128i *)v458);
  v77 = v8[105];
  sub_180C5A0(v76, v505);
  *(_QWORD *)v451 = &v503;
  sub_16307A0((unsigned int)&v513, v456, (_DWORD)v76, 2, (unsigned int)&v503, v77, 1);
  *(_QWORD *)v448 = *(_QWORD *)(v513.m128i_i64[1] + 72);
  v78 = sub_15DB5C0(v8, 1, v457.m128i_i64[0]);
  v79 = (void *)v78;
  if ( v78 )
    ++*(_DWORD *)(v78 + 8);
  v80 = (_DWORD *)sub_15DB5C0(v8, 0, v457.m128i_i64[1]);
  v458[0] = v80;
  if ( v80 )
    ++v80[2];
  *(void **)v461 = v458[0];
  v83 = sub_15DC610(
          (int)v8,
          v478[0],
          1,
          (int)v461,
          v81,
          v82,
          v248,
          (int)v269,
          v290,
          v309,
          v328,
          v347,
          v366,
          v385,
          v404,
          v422);
  *(_QWORD *)v486 = v79;
  v487 = v83;
  sub_15DC610((int)v8, v448[0], 2, (int)v486, v84, v85, v249, v270, v291, v310, v329, v348, v367, v386, v405, v423);
  *(void **)v462 = v458[0];
  sub_15DC610((int)v8, v476[0], 1, (int)v462, v86, v87, v250, v271, v292, v311, v330, v349, v368, v387, v406, v424);
  sub_15E1B70((int)v8);
  sub_15E1BF0((int)v8);
  *(void **)v463 = v458[0];
  sub_15DC610((int)v8, v470[0], 1, (int)v463, v88, v89, v251, v272, v293, v312, v331, v350, v369, v388, v407, v425);
  v90 = sub_15E1BF0((int)v8);
  v91 = v90;
  if ( v90 )
    ++*(_DWORD *)(v90 + 8);
  v92 = v458[0];
  v520[1] = v8;
  v520[0] = &off_1C4CAA0;
  si128.m128i_i64[0] = (__int64)v8;
  si128.m128i_i64[1] = (__int64)v8;
  v522 = __PAIR128__((unsigned __int64)v8, 0);
  v523 = 0u;
  v524 = 0u;
  v525 = (__m128i)(unsigned __int64)v8;
  v526.m128i_i64[0] = (__int64)v529;
  v526.m128i_i64[1] = 1;
  v527 = 0u;
  v528.m128i_i32[0] = 1065353216;
  v528.m128i_i64[1] = 0;
  *(_QWORD *)&v529[0] = 0;
  v516 = v79;
  v517.m128i_i64[0] = (__int64)v458[0];
  sub_1631DC0(v456, v460[0], (unsigned int)&v513, 0, 2, (_DWORD)v443, v90);
  v520[0] = &off_1C4CAA0;
  sub_268600((__int64)p_si128);
  sub_AEDAF0(v91, (__int64)v8);
  sub_AEDAB0((__int64)v92, (__int64)v8);
  sub_AEDAB0((__int64)v79, (__int64)v8);
  v93 = v457.m128i_i64[1];
  sub_15FC2E0(
    v460[0],
    v452[0],
    v457.m128i_i32[2],
    v457.m128i_i32[2],
    (unsigned int)v480,
    (unsigned int)v482,
    (__int64)v484,
    v246,
    v252,
    v273,
    v294,
    v313,
    (__int64)v529);
  v94 = _mm_loadl_epi64(&v457);
  v95 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v93, (__m128i)(unsigned __int64)v93);
  v96 = _mm_unpacklo_epi64(v94, v94);
  v442 = v520[0];
  if ( v520[0] && !*((_DWORD *)v520[0] + 2) )
  {
    *(__m128i *)v454 = v95;
    *(__m128i *)v458 = v96;
    sub_15D7BC0(v520[1], v520[0]);
    v95 = _mm_load_si128((const __m128i *)v454);
    v96 = _mm_load_si128((const __m128i *)v458);
  }
  v97 = v460[0];
  v513 = v96;
  v514 = v95;
  v515 = v442;
  sub_180C5A0(*(_QWORD *)v460, v507);
  sub_16307A0((unsigned int)&v498, v456, v97, 5, (unsigned int)&v513, (_DWORD)v442, 1);
  *(_QWORD *)v452 = v499[9];
  v98 = (_DWORD *)sub_15DB5C0(v8, 4, v457.m128i_i64[0]);
  v454[0] = v98;
  if ( v98 )
    ++v98[2];
  v99 = (_DWORD *)sub_15DB5C0(v8, 3, v457.m128i_i64[0]);
  v458[0] = v99;
  if ( v99 )
    ++v99[2];
  v100 = sub_15DB5C0(v8, 2, v457.m128i_i64[1]);
  v101 = v100;
  if ( v100 )
    ++*(_DWORD *)(v100 + 8);
  v102 = sub_15DB5C0(v8, 1, v457.m128i_i64[1]);
  v103 = v102;
  if ( v102 )
    ++*(_DWORD *)(v102 + 8);
  v104 = sub_15DB5C0(v8, 0, v442);
  v107 = v104;
  if ( v104 )
    ++*(_DWORD *)(v104 + 8);
  *(_QWORD *)v464 = v104;
  v489 = sub_15DC610(
           (int)v8,
           v482[0],
           1,
           (int)v464,
           v105,
           v106,
           v253,
           v274,
           (int)&v498,
           v314,
           v332,
           v351,
           v370,
           v389,
           v408,
           v426);
  *(void **)v488 = v458[0];
  v110 = sub_15DC610(
           (int)v8,
           v472[0],
           2,
           (int)v488,
           v108,
           v109,
           v254,
           v275,
           v295,
           v315,
           v333,
           v352,
           v371,
           v390,
           v409,
           v427);
  *(_QWORD *)v465 = v107;
  v491 = sub_15DC610(
           (int)v8,
           v480[0],
           1,
           (int)v465,
           v111,
           v112,
           v255,
           v276,
           v296,
           v316,
           v334,
           v353,
           v372,
           v391,
           v410,
           v428);
  *(void **)v490 = v458[0];
  *(_QWORD *)v492 = sub_15DC610(
                      (int)v8,
                      v472[0],
                      2,
                      (int)v490,
                      v113,
                      v114,
                      v256,
                      v277,
                      v297,
                      v317,
                      v335,
                      v354,
                      v373,
                      v392,
                      v411,
                      v429);
  v493 = v110;
  sub_15DC610((int)v8, v484[0], 2, (int)v492, v115, v116, v257, v278, v298, v318, v336, v355, v374, v393, v412, v430);
  v495 = v103;
  *(void **)v494 = v458[0];
  sub_15DC610(
    (int)v8,
    v448[0],
    2,
    (int)v494,
    v117,
    v118,
    v258,
    v279,
    v299,
    (int)v494,
    v337,
    v356,
    v375,
    v394,
    v413,
    v431);
  sub_15E1A70((int)v8);
  v503.m128i_i64[1] = v101;
  v503.m128i_i64[0] = (__int64)v454[0];
  sub_15DC610((int)v8, v448[0], 2, v451[0], v119, v120, v259, v280, v300, v319, v338, v357, v376, v395, v414, v432);
  sub_15E1B70((int)v8);
  v121 = sub_15E1BF0((int)v8);
  v122 = v121;
  *(__m128 *)src = _mm_loadh_ps((const double *)v457.m128i_i64);
  if ( v121 )
    ++*(_DWORD *)(v121 + 8);
  v520[0] = &off_1C4CAA0;
  v526.m128i_i64[0] = v339;
  v516 = v454[0];
  v517.m128i_i64[0] = (__int64)v458[0];
  v520[1] = v8;
  si128.m128i_i64[0] = (__int64)v8;
  si128.m128i_i64[1] = (__int64)v8;
  v522 = __PAIR128__((unsigned __int64)v8, 0);
  v523 = 0u;
  v524 = 0u;
  v525 = (__m128i)(unsigned __int64)v8;
  v526.m128i_i64[1] = 1;
  v527 = 0u;
  v528.m128i_i32[0] = 1065353216;
  v528.m128i_i64[1] = 0;
  *(_QWORD *)&v529[0] = 0;
  v517.m128i_i64[1] = v101;
  v518 = v103;
  v519 = v107;
  sub_1631DC0(v456, v460[0], v301, 0, 5, (_DWORD)v443, v121);
  v520[0] = &off_1C4CAA0;
  sub_268600((__int64)p_si128);
  sub_AEDAB0(v107, (__int64)v8);
  sub_AEDAB0(v103, (__int64)v8);
  sub_AEDAB0(v101, (__int64)v8);
  sub_AEDAB0((__int64)v458[0], (__int64)v8);
  sub_AEDAB0((__int64)v454[0], (__int64)v8);
  sub_AEDAF0(v122, (__int64)v8);
  v123 = v460[0];
  v124 = v457.m128i_i64[1];
  v503 = _mm_load_si128((const __m128i *)src);
  v504 = v457.m128i_i64[1];
  v125 = v8[105];
  sub_180C5A0(*(_QWORD *)v460, v509);
  sub_16307A0(v320, v456, v123, 3, v451[0], v125, 1);
  *(_QWORD *)v358 = *(_QWORD *)(v495 + 72);
  v126 = sub_15DB5C0(v8, 2, v124);
  v415 = v126;
  if ( v126 )
    ++*(_DWORD *)(v126 + 8);
  v127 = sub_15DB5C0(v8, 1, v457.m128i_i64[0]);
  v128 = v127;
  if ( v127 )
    ++*(_DWORD *)(v127 + 8);
  v129 = (_DWORD *)sub_15DB5C0(v8, 0, v457.m128i_i64[1]);
  src[0] = v129;
  if ( v129 )
    ++v129[2];
  *(_QWORD *)v496 = v453;
  v497 = src[0];
  v132 = (_DWORD *)sub_15DC610(
                     (int)v8,
                     v484[0],
                     2,
                     (int)v496,
                     v130,
                     v131,
                     v260,
                     v281,
                     v301,
                     v320,
                     v339,
                     v358[0],
                     v377,
                     v396,
                     v415,
                     v433);
  v458[0] = v132;
  *(__m128 *)v451 = _mm_loadh_ps((const double *)src);
  if ( v132 )
    ++v132[2];
  v135 = v434[5];
  if ( v135 )
  {
    for ( i = v135 + 8LL * *(unsigned int *)(v135 - 4); i != v135; v135 += 8 )
    {
      if ( *(_BYTE *)(*(_QWORD *)v135 + 16LL) )
      {
        v137 = _mm_loadh_ps((const double *)*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v455 + 32)
                                                                  + 8LL * *(unsigned int *)(*(_QWORD *)v135 + 24LL))
                                                      + 8LL));
        si128 = _mm_load_si128((const __m128i *)v451);
        *(__m128 *)v520 = v137;
        *(void **)&v522 = v458[0];
        v138 = sub_15DC610(
                 (int)v8,
                 v452[0],
                 5,
                 v460[0],
                 v133,
                 v134,
                 v261,
                 v282,
                 v302,
                 v321,
                 v340,
                 v359,
                 v378,
                 v397,
                 v416,
                 v434);
        v139 = (void *)v138;
        if ( v138 )
          ++*(_DWORD *)(v138 + 8);
        v140 = v458[0];
        if ( v458[0] )
        {
          LODWORD(v454[0]) = *((_DWORD *)v458[0] + 2);
          v141 = LODWORD(v454[0]) == 1;
          *((_DWORD *)v458[0] + 2) = LODWORD(v454[0]) - 1;
          if ( v141 )
            sub_15D7BC0(v8, v140);
        }
        v458[0] = v139;
      }
    }
  }
  *(void **)v466 = v458[0];
  v142 = sub_15DC610(
           (int)v8,
           v480[0],
           1,
           (int)v466,
           v133,
           v134,
           v261,
           v282,
           v302,
           v321,
           v340,
           v359,
           v378,
           v397,
           v416,
           v434);
  v145 = (void *)v142;
  if ( v142 )
    ++*(_DWORD *)(v142 + 8);
  *(void **)v467 = v458[0];
  v146 = sub_15DC610(
           (int)v8,
           v482[0],
           1,
           (int)v467,
           v143,
           v144,
           v262,
           v283,
           v303,
           v322,
           v341,
           v360,
           v379,
           v398,
           v417,
           v435);
  v149 = v146;
  if ( v146 )
    ++*(_DWORD *)(v146 + 8);
  v516 = v145;
  v517.m128i_i64[0] = v128;
  v517.m128i_i64[1] = v146;
  sub_15DC610((int)v8, v361, 3, (int)v443, v147, v148, v263, v284, v304, v323, v342, v361, v380, v399, v418, v436);
  v498 = v128;
  v499 = v145;
  sub_15DC610((int)v8, v448[0], 2, v305, v150, v151, v264, v285, v305, v324, v343, v362, v381, v400, v419, v437);
  sub_15E1BF0((int)v8);
  sub_15E1B70((int)v8);
  v152 = sub_15E1BF0((int)v8);
  v153 = v152;
  if ( v152 )
    ++*(_DWORD *)(v152 + 8);
  sub_AEDAF0((__int64)v458[0], (__int64)v8);
  v520[0] = &off_1C4CAA0;
  v526.m128i_i64[0] = v344;
  v514.m128i_i64[0] = (__int64)src[0];
  v513.m128i_i64[0] = v420;
  v520[1] = v8;
  si128.m128i_i64[0] = (__int64)v8;
  si128.m128i_i64[1] = (__int64)v8;
  v522 = __PAIR128__((unsigned __int64)v8, 0);
  v523 = 0u;
  v524 = 0u;
  v525 = (__m128i)(unsigned __int64)v8;
  v526.m128i_i64[1] = 1;
  v527 = 0u;
  v528.m128i_i32[0] = 1065353216;
  v528.m128i_i64[1] = 0;
  *(_QWORD *)&v529[0] = 0;
  v513.m128i_i64[1] = v128;
  sub_1631DC0(v456, v460[0], v325, 0, 3, (unsigned int)&v513, v153);
  v520[0] = &off_1C4CAA0;
  sub_268600((__int64)p_si128);
  sub_AEDAF0(v149, (__int64)v8);
  sub_AEDAF0((__int64)v145, (__int64)v8);
  sub_AEDAF0(v153, (__int64)v8);
  sub_AEDAB0((__int64)src[0], (__int64)v8);
  sub_AEDAB0(v128, (__int64)v8);
  sub_AEDAB0(v420, (__int64)v8);
  v154 = sub_15DB5C0(v8, 0, v457.m128i_i64[0]);
  v155 = v154;
  if ( v154 )
    ++*(_DWORD *)(v154 + 8);
  v156 = sub_15DB5C0(v8, 1, v457.m128i_i64[0]);
  v157 = (void *)v156;
  if ( v156 )
    ++*(_DWORD *)(v156 + 8);
  v158 = sub_186B270(0x38u);
  sub_13478B0(v158, v8, 2);
  v513.m128i_i64[0] = v155;
  v513.m128i_i64[1] = v453;
  v161 = (_DWORD *)sub_15DC610(
                     (int)v8,
                     v472[0],
                     2,
                     (int)&v513,
                     v159,
                     v160,
                     v265,
                     v286,
                     v306,
                     v325,
                     v344,
                     v363,
                     v382,
                     v401,
                     v420,
                     v438);
  v164 = (__int64)v161;
  if ( v161 )
    ++v161[2];
  v520[0] = v161;
  v520[1] = v157;
  si128.m128i_i64[0] = (__int64)v161;
  v165 = sub_15DC610((int)v8, v364, 3, v460[0], v162, v163, v266, v287, v307, v326, v345, v364, v383, v402, v421, v439);
  *(_QWORD *)v460 = v165;
  if ( v165 )
    ++*(_DWORD *)(v165 + 8);
  if ( v267 )
  {
    sub_15E1B70((int)v8);
    v170 = (_DWORD *)sub_15E1B70((int)v8);
    if ( v170 )
      ++v170[2];
    v458[0] = v170;
    sub_AEDAF0(*(__int64 *)v460, (__int64)v8);
    *(void **)v460 = v458[0];
  }
  sub_1349280(v158, v460[0], v166, v167, v168, v169);
  sub_135F980(*(_QWORD *)(v288 + 72), *(_QWORD *)(v440 + 32), v158);
  sub_AEDAF0(*(__int64 *)v460, (__int64)v8);
  sub_AEDAF0(v164, (__int64)v8);
  sub_AEDAB0((__int64)v157, (__int64)v8);
  sub_AEDAB0(v155, (__int64)v8);
  if ( v442 )
  {
    v460[0] = v442[2];
    v141 = v460[0] == 1;
    v442[2] = v460[0] - 1;
    if ( v141 )
      sub_15D7BC0(v8, v442);
  }
  sub_233E40((__int64)&v511);
  sub_233E40((__int64)&v509);
  sub_233E40((__int64)&v507);
  sub_233E40((__int64)&v505);
  sub_AEDAF0(v453, (__int64)v8);
  sub_AEDAD0(*(__int64 *)v484, (__int64)v485);
  sub_AEDAD0(*(__int64 *)v482, (__int64)v483);
  sub_AEDAD0(*(__int64 *)v480, (__int64)v481);
  v171 = v457.m128i_i64[1];
  if ( v457.m128i_i64[1] )
  {
    v460[0] = *(_DWORD *)(v457.m128i_i64[1] + 8);
    v141 = v460[0] == 1;
    *(_DWORD *)(v457.m128i_i64[1] + 8) = v460[0] - 1;
    if ( v141 )
      sub_15D7BC0(v8, v171);
  }
  sub_AEDAD0(*(__int64 *)v478, (__int64)v479);
  sub_AEDAD0(*(__int64 *)v476, (__int64)v477);
  sub_AEDAD0(v474, (__int64)v475);
  sub_AEDAD0(*(__int64 *)v472, (__int64)v473);
  sub_AEDAD0(*(__int64 *)v470, (__int64)v471);
  return sub_AEDAD0(*(__int64 *)v468, (__int64)v469);
}

