__int64 __fastcall sub_76B2E0(_QWORD *a1, _QWORD *a2, unsigned int a3, _QWORD *a4, __int64 *a5, int a6)
{
  char **v6; // rbx
  char **v7; // r14
  char **v8; // rbx
  char **v9; // r14
  char **v10; // rbx
  char **exception; // rbx
  char **v12; // r14
  char **v13; // rbx
  char **v14; // rbx
  char **v15; // r15
  char **v16; // r14
  char **v17; // r14
  int *v20; // rax
  int v21; // edx
  __int64 result; // rax
  int v23; // r8d
  int v24; // r9d
  _DWORD *v25; // rax
  int v26; // eax
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // r12
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rdi
  bool v38; // zf
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // edx
  __int64 v42; // rsi
  unsigned int v43; // eax
  _BYTE *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rsi
  _QWORD *v48; // r15
  int v49; // r12d
  __int64 v50; // rax
  void *v51; // r13
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  int v55; // edx
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // r13
  __int64 v59; // r15
  __int64 v60; // rax
  __int64 v61; // r12
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // rbx
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rax
  int v74; // r8d
  int v75; // r9d
  __int64 v76; // rbx
  void *v77; // rax
  void *v78; // rdi
  int v79; // r8d
  int v80; // r9d
  __int64 v81; // rax
  __int64 v82; // rax
  int v83; // r8d
  int v84; // r9d
  _QWORD *v85; // rdx
  unsigned int v86; // eax
  __int64 v87; // rcx
  int v88; // eax
  __int64 *v89; // rcx
  void *v90; // rax
  int v91; // r13d
  __int64 v92; // rax
  __int64 v93; // r13
  _QWORD *v94; // rdx
  unsigned int v95; // eax
  __int64 v96; // rcx
  int v97; // eax
  __int64 *v98; // rcx
  char v99; // al
  __int64 v100; // r12
  __int64 v101; // rsi
  __int64 v102; // rdi
  __int64 v103; // rax
  __int64 v104; // rcx
  unsigned int v105; // edx
  __int64 v106; // rsi
  unsigned int v107; // eax
  _BYTE *v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // r12
  __int64 v112; // r13
  __int64 v113; // rbx
  __int64 v114; // rsi
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rcx
  unsigned int v118; // edx
  __int64 v119; // rsi
  unsigned int v120; // eax
  _BYTE *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 *v124; // rax
  __int64 v125; // rax
  _QWORD *v126; // r15
  _QWORD *v127; // r13
  __int64 v128; // rdx
  int v129; // eax
  _QWORD *v130; // rdx
  __int64 v131; // r12
  int v132; // eax
  int v133; // eax
  unsigned int v134; // eax
  unsigned int v135; // edx
  size_t v136; // rsi
  unsigned int *v137; // rax
  unsigned int v138; // ecx
  size_t v139; // rsi
  unsigned int *v140; // rax
  unsigned int v141; // ecx
  size_t v142; // rsi
  unsigned int *v143; // rax
  char v144; // al
  __int64 v145; // rbx
  __int64 v146; // rsi
  __int64 v147; // rdi
  __int64 v148; // rax
  __int64 v149; // rbx
  __int64 v150; // rsi
  __int64 v151; // rdi
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rdx
  __int64 v155; // rax
  int v156; // r8d
  int v157; // r9d
  __int64 v158; // rbx
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  _QWORD *v162; // rdx
  unsigned int v163; // eax
  __int64 v164; // rcx
  int v165; // eax
  _QWORD *v166; // rcx
  __int64 v167; // rax
  int v168; // r8d
  int v169; // r9d
  __int64 v170; // r12
  __int64 v171; // rax
  int v172; // r8d
  int v173; // r9d
  void *v174; // rdi
  __int64 v175; // rax
  int v176; // r8d
  int v177; // r9d
  void *v178; // rdi
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // r15
  int v182; // r8d
  int v183; // r9d
  __int64 v184; // r13
  __int64 v185; // rdi
  void *v186; // rbx
  __int64 v187; // rax
  __int64 v188; // rbx
  __int64 v189; // rax
  _QWORD *v190; // rdx
  unsigned int v191; // eax
  __int64 v192; // rcx
  int v193; // eax
  __int64 *v194; // rcx
  __int64 v195; // rdi
  __int64 v196; // r13
  __int64 v197; // rsi
  __int64 v198; // rdi
  __int64 v199; // rax
  __int64 v200; // rcx
  unsigned int v201; // edx
  __int64 v202; // rsi
  unsigned int v203; // eax
  _BYTE *v204; // rax
  __int64 v205; // rax
  __int64 v206; // rax
  __int64 v207; // rdx
  __int64 v208; // rdx
  __int64 v209; // rax
  int v210; // r8d
  int v211; // r9d
  __int64 v212; // r12
  _QWORD *v213; // rbx
  __int64 v214; // rdx
  int v215; // eax
  __int64 *v216; // rdx
  __int64 v217; // rsi
  __int64 v218; // rax
  __int64 v219; // r12
  unsigned int v220; // eax
  unsigned int v221; // edx
  size_t v222; // rsi
  unsigned int *v223; // rax
  __int64 v224; // rdi
  int v225; // r8d
  int v226; // r9d
  __int64 v227; // rax
  __int64 v228; // r15
  __int64 v229; // rax
  _QWORD *v230; // rdx
  unsigned int v231; // eax
  __int64 v232; // rcx
  int v233; // eax
  _QWORD *v234; // rcx
  __int64 v235; // rdi
  __int64 v236; // r14
  __int64 v237; // rsi
  __int64 v238; // rdi
  unsigned __int64 v239; // r12
  __int64 *v240; // r15
  __int64 v241; // rsi
  __int64 *v242; // rbx
  unsigned __int64 v243; // r14
  __int64 v244; // rsi
  __int64 v245; // r13
  __int64 v246; // r12
  __int64 v247; // rax
  __int64 v248; // rcx
  unsigned int v249; // edx
  __int64 v250; // rsi
  unsigned int v251; // eax
  _BYTE *v252; // rax
  __int64 v253; // rax
  __int64 v254; // rax
  __int64 v255; // rdx
  __int64 v256; // rdx
  __int64 v257; // rax
  int v258; // r8d
  int v259; // r9d
  __int64 v260; // rbx
  __int64 v261; // r15
  __int64 v262; // rdi
  int v263; // r8d
  int v264; // r9d
  __int64 v265; // rax
  __int64 v266; // rax
  __int64 v267; // r14
  __int64 v268; // rsi
  __int64 v269; // rdi
  _QWORD *v270; // rax
  _QWORD *v271; // rbx
  _QWORD *v272; // rdx
  _QWORD *v273; // rdx
  unsigned int v274; // r8d
  unsigned int v275; // ecx
  unsigned int *v276; // rax
  __int64 v277; // rcx
  unsigned int v278; // r15d
  unsigned int v279; // ecx
  unsigned int *v280; // rax
  __int64 v281; // rcx
  __int64 v282; // rax
  __int64 v283; // rdx
  __int64 v284; // rdx
  unsigned int v285; // r8d
  unsigned int v286; // ecx
  unsigned int *v287; // rax
  __int64 v288; // rcx
  _QWORD *v289; // rdx
  _QWORD *v290; // rdx
  _QWORD *v291; // rdx
  int v292; // [rsp+0h] [rbp-100h]
  int v293; // [rsp+0h] [rbp-100h]
  int v294; // [rsp+0h] [rbp-100h]
  int v295; // [rsp+0h] [rbp-100h]
  int v296; // [rsp+0h] [rbp-100h]
  int v297; // [rsp+0h] [rbp-100h]
  int v298; // [rsp+0h] [rbp-100h]
  int v299; // [rsp+0h] [rbp-100h]
  __int64 v300; // [rsp+0h] [rbp-100h]
  int v301; // [rsp+0h] [rbp-100h]
  __int64 v302; // [rsp+0h] [rbp-100h]
  int v303; // [rsp+0h] [rbp-100h]
  unsigned int v304; // [rsp+0h] [rbp-100h]
  int v305; // [rsp+8h] [rbp-F8h]
  int v306; // [rsp+8h] [rbp-F8h]
  int v307; // [rsp+8h] [rbp-F8h]
  int v308; // [rsp+8h] [rbp-F8h]
  int v309; // [rsp+8h] [rbp-F8h]
  __int64 v310; // [rsp+8h] [rbp-F8h]
  int v311; // [rsp+8h] [rbp-F8h]
  int v312; // [rsp+8h] [rbp-F8h]
  void *v313; // [rsp+8h] [rbp-F8h]
  __int64 v314; // [rsp+8h] [rbp-F8h]
  int v315; // [rsp+8h] [rbp-F8h]
  __int64 v316; // [rsp+8h] [rbp-F8h]
  int v317; // [rsp+8h] [rbp-F8h]
  int v318; // [rsp+10h] [rbp-F0h]
  int v319; // [rsp+10h] [rbp-F0h]
  int v320; // [rsp+10h] [rbp-F0h]
  int v321; // [rsp+10h] [rbp-F0h]
  int v322; // [rsp+10h] [rbp-F0h]
  int v323; // [rsp+10h] [rbp-F0h]
  void *v324; // [rsp+10h] [rbp-F0h]
  int v325; // [rsp+10h] [rbp-F0h]
  int v326; // [rsp+10h] [rbp-F0h]
  int v327; // [rsp+10h] [rbp-F0h]
  __int64 v328; // [rsp+10h] [rbp-F0h]
  int v329; // [rsp+10h] [rbp-F0h]
  __int64 v330; // [rsp+10h] [rbp-F0h]
  int v331; // [rsp+10h] [rbp-F0h]
  __int64 v332; // [rsp+18h] [rbp-E8h]
  int v333; // [rsp+18h] [rbp-E8h]
  int v334; // [rsp+18h] [rbp-E8h]
  int v335; // [rsp+18h] [rbp-E8h]
  void *v336; // [rsp+18h] [rbp-E8h]
  int v337; // [rsp+18h] [rbp-E8h]
  int v338; // [rsp+18h] [rbp-E8h]
  int v339; // [rsp+18h] [rbp-E8h]
  int v340; // [rsp+18h] [rbp-E8h]
  __int64 v341; // [rsp+18h] [rbp-E8h]
  __int64 v342; // [rsp+18h] [rbp-E8h]
  int v343; // [rsp+18h] [rbp-E8h]
  __int64 v344; // [rsp+18h] [rbp-E8h]
  int v345; // [rsp+18h] [rbp-E8h]
  int v346; // [rsp+20h] [rbp-E0h]
  int v347; // [rsp+20h] [rbp-E0h]
  int v348; // [rsp+20h] [rbp-E0h]
  int v349[2]; // [rsp+20h] [rbp-E0h]
  int v350; // [rsp+20h] [rbp-E0h]
  int v351; // [rsp+20h] [rbp-E0h]
  unsigned int v352; // [rsp+20h] [rbp-E0h]
  int v353; // [rsp+20h] [rbp-E0h]
  int v354; // [rsp+20h] [rbp-E0h]
  int v355[2]; // [rsp+20h] [rbp-E0h]
  int v356; // [rsp+20h] [rbp-E0h]
  int v357[2]; // [rsp+20h] [rbp-E0h]
  int v358; // [rsp+20h] [rbp-E0h]
  int v359; // [rsp+28h] [rbp-D8h]
  char v360; // [rsp+28h] [rbp-D8h]
  char v361; // [rsp+28h] [rbp-D8h]
  void *v362; // [rsp+28h] [rbp-D8h]
  __int64 v363; // [rsp+28h] [rbp-D8h]
  void *v364; // [rsp+28h] [rbp-D8h]
  char v365; // [rsp+28h] [rbp-D8h]
  char v366; // [rsp+28h] [rbp-D8h]
  char v367; // [rsp+28h] [rbp-D8h]
  char v368; // [rsp+28h] [rbp-D8h]
  char v369; // [rsp+28h] [rbp-D8h]
  __int64 v370; // [rsp+28h] [rbp-D8h]
  char v371; // [rsp+28h] [rbp-D8h]
  __int64 v372; // [rsp+28h] [rbp-D8h]
  char v373; // [rsp+28h] [rbp-D8h]
  int v374; // [rsp+30h] [rbp-D0h]
  void *v375; // [rsp+30h] [rbp-D0h]
  int v376; // [rsp+30h] [rbp-D0h]
  int v377; // [rsp+30h] [rbp-D0h]
  __int64 v378; // [rsp+30h] [rbp-D0h]
  int v379; // [rsp+30h] [rbp-D0h]
  __int64 v380; // [rsp+30h] [rbp-D0h]
  int v381; // [rsp+30h] [rbp-D0h]
  int v382; // [rsp+30h] [rbp-D0h]
  int v383; // [rsp+30h] [rbp-D0h]
  __int64 v384; // [rsp+30h] [rbp-D0h]
  int v385; // [rsp+30h] [rbp-D0h]
  __int64 v386; // [rsp+30h] [rbp-D0h]
  int v387; // [rsp+30h] [rbp-D0h]
  int v388; // [rsp+38h] [rbp-C8h]
  int v389[2]; // [rsp+38h] [rbp-C8h]
  int v390; // [rsp+38h] [rbp-C8h]
  int v391; // [rsp+38h] [rbp-C8h]
  int v392[2]; // [rsp+38h] [rbp-C8h]
  int v393; // [rsp+38h] [rbp-C8h]
  int v394; // [rsp+38h] [rbp-C8h]
  int v395; // [rsp+38h] [rbp-C8h]
  int v396; // [rsp+38h] [rbp-C8h]
  int v397[2]; // [rsp+38h] [rbp-C8h]
  int v398; // [rsp+38h] [rbp-C8h]
  int v399[2]; // [rsp+38h] [rbp-C8h]
  int v400; // [rsp+38h] [rbp-C8h]
  int v401; // [rsp+40h] [rbp-C0h]
  void *v402; // [rsp+40h] [rbp-C0h]
  int v403; // [rsp+40h] [rbp-C0h]
  int v404; // [rsp+40h] [rbp-C0h]
  __int64 v405; // [rsp+40h] [rbp-C0h]
  __int64 v406; // [rsp+40h] [rbp-C0h]
  int v407; // [rsp+40h] [rbp-C0h]
  unsigned int v408; // [rsp+40h] [rbp-C0h]
  __int64 v409; // [rsp+40h] [rbp-C0h]
  int v410; // [rsp+40h] [rbp-C0h]
  int v411; // [rsp+40h] [rbp-C0h]
  int v412; // [rsp+40h] [rbp-C0h]
  __int64 v413; // [rsp+40h] [rbp-C0h]
  int v414; // [rsp+40h] [rbp-C0h]
  int v415; // [rsp+40h] [rbp-C0h]
  void *v416; // [rsp+48h] [rbp-B8h]
  void *v417; // [rsp+48h] [rbp-B8h]
  void *v418; // [rsp+48h] [rbp-B8h]
  void *v419; // [rsp+48h] [rbp-B8h]
  int v420[2]; // [rsp+48h] [rbp-B8h]
  void *v421; // [rsp+48h] [rbp-B8h]
  int *v422; // [rsp+48h] [rbp-B8h]
  void *v423; // [rsp+48h] [rbp-B8h]
  int v424[2]; // [rsp+48h] [rbp-B8h]
  void *v425; // [rsp+48h] [rbp-B8h]
  void *v426; // [rsp+48h] [rbp-B8h]
  void *v427; // [rsp+48h] [rbp-B8h]
  int v428[2]; // [rsp+48h] [rbp-B8h]
  void *v429; // [rsp+48h] [rbp-B8h]
  void *v430; // [rsp+48h] [rbp-B8h]
  int v431[2]; // [rsp+48h] [rbp-B8h]
  int v432; // [rsp+50h] [rbp-B0h]
  int v433[2]; // [rsp+50h] [rbp-B0h]
  int v434[2]; // [rsp+50h] [rbp-B0h]
  unsigned int v435; // [rsp+50h] [rbp-B0h]
  int v436[2]; // [rsp+50h] [rbp-B0h]
  int v437[2]; // [rsp+50h] [rbp-B0h]
  void *v438; // [rsp+58h] [rbp-A8h]
  __int64 v439; // [rsp+58h] [rbp-A8h]
  __int64 v440; // [rsp+58h] [rbp-A8h]
  __int64 i; // [rsp+58h] [rbp-A8h]
  __int64 v442; // [rsp+58h] [rbp-A8h]
  __int64 v443; // [rsp+58h] [rbp-A8h]
  unsigned int v444; // [rsp+58h] [rbp-A8h]
  int v445; // [rsp+60h] [rbp-A0h]
  int v446; // [rsp+60h] [rbp-A0h]
  int v447; // [rsp+60h] [rbp-A0h]
  unsigned int v448; // [rsp+60h] [rbp-A0h]
  int v449; // [rsp+60h] [rbp-A0h]
  int v451[2]; // [rsp+68h] [rbp-98h]
  __int64 *v452; // [rsp+68h] [rbp-98h]
  int v453[2]; // [rsp+68h] [rbp-98h]
  int v454; // [rsp+68h] [rbp-98h]
  int v455; // [rsp+68h] [rbp-98h]
  int v456; // [rsp+68h] [rbp-98h]
  int v457; // [rsp+68h] [rbp-98h]
  int v458; // [rsp+68h] [rbp-98h]
  int v460[2]; // [rsp+70h] [rbp-90h]
  int v461; // [rsp+70h] [rbp-90h]
  int v462[2]; // [rsp+70h] [rbp-90h]
  int v463[2]; // [rsp+70h] [rbp-90h]
  int v464[2]; // [rsp+70h] [rbp-90h]
  int v465[2]; // [rsp+70h] [rbp-90h]
  unsigned int v467; // [rsp+78h] [rbp-88h]
  int v468[2]; // [rsp+78h] [rbp-88h]
  int v469; // [rsp+78h] [rbp-88h]
  int v470[2]; // [rsp+78h] [rbp-88h]
  int v471[2]; // [rsp+78h] [rbp-88h]
  int v472[2]; // [rsp+78h] [rbp-88h]
  int v473; // [rsp+78h] [rbp-88h]
  int v474; // [rsp+78h] [rbp-88h]
  int v475; // [rsp+78h] [rbp-88h]
  int v476; // [rsp+78h] [rbp-88h]
  int v477; // [rsp+78h] [rbp-88h]
  __int64 *v478; // [rsp+78h] [rbp-88h]
  int v479[2]; // [rsp+78h] [rbp-88h]
  int v480; // [rsp+78h] [rbp-88h]
  int v481; // [rsp+78h] [rbp-88h]
  int v482; // [rsp+78h] [rbp-88h]
  int v483; // [rsp+78h] [rbp-88h]
  int v484[2]; // [rsp+78h] [rbp-88h]
  __int64 v485; // [rsp+88h] [rbp-78h] BYREF
  __int64 v486; // [rsp+90h] [rbp-70h] BYREF
  int v487[2]; // [rsp+98h] [rbp-68h] BYREF
  int v488[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v489[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v490; // [rsp+B8h] [rbp-48h]

  v20 = (int *)a2[3];
  if ( !v20 )
    goto LABEL_46;
  v21 = *v20;
  if ( *v20 )
    goto LABEL_3;
  if ( v20[1] == 2 )
  {
    if ( (unsigned __int8)sub_76A4E0((__int64)a1, a2[6]) )
    {
      v144 = sub_15D2760(*a1, *a4, a4[1]);
      *(_QWORD *)v462 = *a1;
      if ( v144 )
      {
        v145 = *(_QWORD *)(*a1 + 856LL);
        if ( v145 )
          ++*(_DWORD *)(v145 + 8);
        v146 = *a5;
        if ( *a5 )
        {
          v147 = a5[1];
          v38 = (*(_DWORD *)(v146 + 8))-- == 1;
          if ( v38 )
            sub_15D7BC0(v147, v146);
        }
        *a5 = v145;
      }
      else
      {
        sub_76A730(v489, a1, *a4);
        v245 = *(_QWORD *)v489;
        if ( *(_QWORD *)v489 && !*(_DWORD *)(*(_QWORD *)v489 + 8LL) )
          sub_15D7BC0(v490, *(_QWORD *)v489);
        v443 = *a1;
        sub_76A730(v489, a1, a4[1]);
        v246 = *(_QWORD *)v489;
        if ( *(_QWORD *)v489 && !*(_DWORD *)(*(_QWORD *)v489 + 8LL) )
          sub_15D7BC0(v490, *(_QWORD *)v489);
        v247 = *(_QWORD *)(sub_15D1F10(*a4) + 24);
        if ( v247 )
        {
          v248 = *(_QWORD *)(v247 + 8);
          v249 = 0;
          v250 = 0;
          while ( 1 )
          {
            v251 = v248 ? *(_DWORD *)(v248 - 4) - 1 : -1;
            if ( v249 >= v251 )
              break;
            v252 = (_BYTE *)(v248 + 16LL * v249);
            if ( v252[8] != 1 )
              goto LABEL_465;
            v253 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v252 + 24LL) + 8LL);
            if ( *(_BYTE *)(v253 + 8) )
              goto LABEL_457;
            v250 = (unsigned int)(*(_DWORD *)v253 + v250);
            ++v249;
          }
        }
        else
        {
          v254 = 0;
          LODWORD(v250) = 0;
          do
          {
            v255 = v254;
            if ( *(_BYTE *)(v254 + 8) != 1 )
LABEL_465:
              sub_DBF6E(0);
            v254 += 16;
            v256 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v255 + 24LL) + 8LL);
            if ( *(_BYTE *)(v256 + 8) )
LABEL_457:
              sub_DBF6E(0);
            v250 = (unsigned int)(*(_DWORD *)v256 + v250);
          }
          while ( v254 != 0xFFFFFFFF0LL );
        }
        v486 = sub_1674700(a1 + 5, v250);
        sub_180C5A0(v487, "x");
        *(_QWORD *)v437 = *a1;
        v257 = sub_15DB5C0(*a1, 0, v486);
        v260 = v257;
        if ( v257 )
          ++*(_DWORD *)(v257 + 8);
        v261 = *a1;
        *(_QWORD *)v488 = v257;
        sub_15DC610(v261, v246, 1, (int)v488, v258, v259, v292, v305, v318, v332, v346, v359, v374, v388, v401, v487);
        v262 = *a1;
        *(_QWORD *)v489 = v260;
        sub_15DC610(v262, v245, 1, (int)v489, v263, v264, v303, v317, v331, v345, v358, v373, v387, v400, v415, v430);
        v265 = sub_15E1B70(v261);
        *(_QWORD *)v484 = v265;
        if ( v265 )
          ++*(_DWORD *)(v265 + 8);
        v266 = sub_15DB6A0(*a1, 0, 1, &v486, *(_QWORD *)v431, v265, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
        v267 = v266;
        if ( v266 )
          ++*(_DWORD *)(v266 + 8);
        v268 = *a5;
        if ( *a5 )
        {
          v269 = a5[1];
          v38 = (*(_DWORD *)(v268 + 8))-- == 1;
          if ( v38 )
            sub_15D7BC0(v269, v268);
        }
        *a5 = v267;
        if ( *(_QWORD *)v484 )
        {
          v458 = *(_DWORD *)(*(_QWORD *)v484 + 8LL);
          *(_DWORD *)(*(_QWORD *)v484 + 8LL) = v458 - 1;
          if ( v458 == 1 )
            sub_15D7BC0(v261, *(_QWORD *)v484);
        }
        if ( v260 )
        {
          v38 = (*(_DWORD *)(v260 + 8))-- == 1;
          if ( v38 )
            sub_15D7BC0(*(_QWORD *)v437, v260);
        }
        if ( v246 )
        {
          v38 = (*(_DWORD *)(v246 + 8))-- == 1;
          if ( v38 )
            sub_15D7BC0(v443, v246);
        }
        if ( v245 )
        {
          v38 = (*(_DWORD *)(v245 + 8))-- == 1;
          if ( v38 )
            sub_15D7BC0(*(_QWORD *)v462, v245);
        }
      }
      return 4;
    }
    v20 = (int *)a2[3];
    if ( !v20 )
      goto LABEL_46;
    v21 = *v20;
    if ( *v20 )
      goto LABEL_3;
    if ( v20[1] != 3 )
      goto LABEL_40;
  }
  else if ( v20[1] != 3 )
  {
LABEL_40:
    v46 = *a1;
    goto LABEL_41;
  }
  v99 = sub_76A4E0((__int64)a1, a2[6]);
  v46 = *a1;
  v438 = (void *)*a1;
  if ( v99 )
  {
    v148 = sub_15DDD30(v46, v292, v305, v318, v332, v346, v359, v374, v388, v401, (int)v416, v432, (int)v438, v445, a5);
    v149 = v148;
    if ( v148 )
      ++*(_DWORD *)(v148 + 8);
    v150 = *v452;
    if ( *v452 )
    {
      v151 = v452[1];
      v38 = (*(_DWORD *)(v150 + 8))-- == 1;
      if ( v38 )
        sub_15D7BC0(v151, v150);
    }
    *v452 = v149;
    return 0;
  }
  v20 = (int *)a2[3];
  if ( v20 )
  {
    v21 = *v20;
    if ( *v20 )
      goto LABEL_3;
LABEL_41:
    if ( v20[1] != 4 )
    {
LABEL_42:
      v47 = a2[5];
      goto LABEL_43;
    }
    v47 = a2[5];
    if ( v47 == *(_QWORD *)(v46 + 840) )
    {
LABEL_43:
      if ( (unsigned __int8)sub_76A4E0((__int64)a1, v47) )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_76A180((__int64 *)v489, "not handled by bvarray2uf");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v489);
        sub_233E40((__int64)v489);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = (int *)a2[3];
      if ( v20 )
      {
        v21 = *v20;
        if ( *v20 != -1 )
        {
LABEL_4:
          if ( *((_DWORD *)a1 + 16) != v21 )
            return 5;
          if ( v20[1] == 1 )
          {
            v58 = *a4;
            v59 = a4[1];
            v60 = sub_15D1F10(*a4);
            if ( !(unsigned __int8)sub_76A4E0((__int64)a1, v60) )
            {
              v13 = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180((__int64 *)v489, "not handled by bvarray2uf");
              *v13 = (char *)off_1C63128;
              sub_2333C0(v13 + 1, v489);
              sub_233E40((__int64)v489);
              __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v61 = *a1;
            sub_76A730(v489, a1, v58);
            v64 = *(_QWORD *)v489;
            if ( *(_QWORD *)v489 && !*(_DWORD *)(*(_QWORD *)v489 + 8LL) )
              sub_15D7BC0(v490, *(_QWORD *)v489);
            v65 = *a1;
            *(_QWORD *)v489 = v59;
            v66 = sub_15DC610(
                    v65,
                    v64,
                    1,
                    (int)v489,
                    v62,
                    v63,
                    v292,
                    v305,
                    v318,
                    v332,
                    v346,
                    v359,
                    v374,
                    v388,
                    v401,
                    v416);
            v67 = v66;
            if ( v66 )
              ++*(_DWORD *)(v66 + 8);
            v68 = *a5;
            if ( *a5 )
            {
              v69 = a5[1];
              v38 = (*(_DWORD *)(v68 + 8))-- == 1;
              if ( v38 )
                sub_15D7BC0(v69, v68);
            }
            *a5 = v67;
            if ( v64 )
            {
              v38 = (*(_DWORD *)(v64 + 8))-- == 1;
              if ( v38 )
                sub_15D7BC0(v61, v64);
            }
          }
          else
          {
            if ( !(unsigned __int8)sub_76A4E0((__int64)a1, a2[5]) )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180((__int64 *)v489, "not handled by bvarray2uf");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v489);
              sub_233E40((__int64)v489);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v25 = (_DWORD *)a2[3];
            if ( !v25 || *((_DWORD *)a1 + 16) != *v25 )
              goto LABEL_462;
            v26 = v25[1];
            switch ( v26 )
            {
              case 2:
                v440 = *a1;
                v110 = sub_15DC610(
                         *a1,
                         (int)a2,
                         a3,
                         (int)a4,
                         v23,
                         v24,
                         v292,
                         v305,
                         v318,
                         v332,
                         v346,
                         v359,
                         v374,
                         v388,
                         v401,
                         v416);
                v111 = v110;
                if ( v110 )
                  ++*(_DWORD *)(v110 + 8);
                *(_QWORD *)v434 = *a1;
                sub_76A730(v489, a1, v110);
                v112 = *(_QWORD *)v489;
                if ( *(_QWORD *)v489 && !*(_DWORD *)(*(_QWORD *)v489 + 8LL) )
                  sub_15D7BC0(v490, *(_QWORD *)v489);
                *(_QWORD *)v489 = v112;
                LOBYTE(v490) = 1;
                v113 = sub_15DCAD0(a1[9], 0, 0);
                sub_15D0DF0(v489);
                if ( v113 )
                  ++*(_DWORD *)(v113 + 8);
                v114 = *a5;
                if ( *a5 )
                {
                  v115 = a5[1];
                  v38 = (*(_DWORD *)(v114 + 8))-- == 1;
                  if ( v38 )
                    sub_15D7BC0(v115, v114);
                }
                *a5 = v113;
                v116 = *(_QWORD *)(a2[5] + 24LL);
                if ( v116 )
                {
                  v117 = *(_QWORD *)(v116 + 8);
                  v118 = 0;
                  v119 = 0;
                  while ( 1 )
                  {
                    v120 = v117 ? *(_DWORD *)(v117 - 4) - 1 : -1;
                    if ( v118 >= v120 )
                      break;
                    v121 = (_BYTE *)(v117 + 16LL * v118);
                    if ( v121[8] != 1 )
                      goto LABEL_464;
                    v122 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v121 + 24LL) + 8LL);
                    if ( *(_BYTE *)(v122 + 8) )
                      goto LABEL_463;
                    v119 = (unsigned int)(*(_DWORD *)v122 + v119);
                    ++v118;
                  }
                }
                else
                {
                  v152 = 0;
                  LODWORD(v119) = 0;
                  do
                  {
                    v153 = v152;
                    if ( *(_BYTE *)(v152 + 8) != 1 )
LABEL_464:
                      sub_DBF6E(0);
                    v152 += 16;
                    v154 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v153 + 24LL) + 8LL);
                    if ( *(_BYTE *)(v154 + 8) )
LABEL_463:
                      sub_DBF6E(0);
                    v119 = (unsigned int)(*(_DWORD *)v154 + v119);
                  }
                  while ( v152 != 0xFFFFFFFF0LL );
                }
                *(_QWORD *)v487 = sub_1674700(a1 + 5, v119);
                sub_180C5A0(v488, "x");
                v423 = (void *)*a1;
                v155 = sub_15DB5C0(*a1, 0, *(_QWORD *)v487);
                v158 = v155;
                if ( v155 )
                  ++*(_DWORD *)(v155 + 8);
                v159 = *a1;
                *(_QWORD *)v489 = v158;
                *(_QWORD *)v463 = v159;
                sub_15DC610(
                  v159,
                  v112,
                  1,
                  (int)v489,
                  v156,
                  v157,
                  v296,
                  v309,
                  v322,
                  v337,
                  v350,
                  v365,
                  v379,
                  v393,
                  v407,
                  v423);
                v160 = sub_15E1B70(v463[0]);
                *(_QWORD *)v471 = v160;
                if ( v160 )
                  ++*(_DWORD *)(v160 + 8);
                v409 = *a1;
                v161 = sub_15DB6A0(*a1, 0, 1, v487, v488, v160, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
                *(_QWORD *)v453 = v161;
                if ( v161 )
                  *(_DWORD *)(v161 + 8) += 2;
                v162 = (_QWORD *)a1[15];
                if ( v162 )
                {
                  v163 = *((_DWORD *)v162 - 1);
                  if ( v163 == *((_DWORD *)v162 - 2) )
                  {
                    v278 = (3 * v163 + 1) >> 1;
                    v279 = 8 * v278 + 8;
                    if ( 8 * v163 + 8 >= v279 || v163 >= v278 )
                    {
                      v15 = (char **)__cxa_allocate_exception(0x28u);
                      sub_76A180((__int64 *)v489, "Overflow encountered when expanding vector");
                      *v15 = (char *)off_1C63128;
                      sub_2333C0(v15 + 1, v489);
                      sub_233E40((__int64)v489);
                      __cxa_throw(
                        v15,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v280 = (unsigned int *)sub_186B300(v162 - 1, v279);
                    v281 = v280[1];
                    v162 = v280 + 2;
                    *v280 = v278;
                    a1[15] = v280 + 2;
                    LODWORD(v280) = v281;
                    v166 = &v162[v281];
                    v165 = (_DWORD)v280 + 1;
                  }
                  else
                  {
                    v164 = v163;
                    v165 = v163 + 1;
                    v166 = &v162[v164];
                  }
                }
                else
                {
                  v290 = (_QWORD *)sub_186B270(0x18u);
                  *v290 = 2;
                  v165 = 1;
                  v162 = v290 + 1;
                  a1[15] = v162;
                  v166 = v162;
                }
                *v166 = *(_QWORD *)v453;
                *((_DWORD *)v162 - 1) = v165;
                if ( *(_QWORD *)v453 )
                {
                  v449 = *(_DWORD *)(*(_QWORD *)v453 + 8LL);
                  *(_DWORD *)(*(_QWORD *)v453 + 8LL) = v449 - 1;
                  if ( v449 == 1 )
                    sub_15D7BC0(v409, *(_QWORD *)v453);
                }
                if ( *(_QWORD *)v471 )
                {
                  v454 = *(_DWORD *)(*(_QWORD *)v471 + 8LL);
                  *(_DWORD *)(*(_QWORD *)v471 + 8LL) = v454 - 1;
                  if ( v454 == 1 )
                    sub_15D7BC0(*(_QWORD *)v463, *(_QWORD *)v471);
                }
                if ( v158 )
                {
                  v38 = (*(_DWORD *)(v158 + 8))-- == 1;
                  if ( v38 )
                    sub_15D7BC0(*(_QWORD *)v424, v158);
                }
                if ( v112 )
                {
                  v38 = (*(_DWORD *)(v112 + 8))-- == 1;
                  if ( v38 )
                    sub_15D7BC0(*(_QWORD *)v434, v112);
                }
                if ( v111 )
                {
                  v38 = (*(_DWORD *)(v111 + 8))-- == 1;
                  if ( v38 )
                    sub_15D7BC0(v440, v111);
                }
                return 4;
              case 13:
                return 5;
              case 5:
                v123 = sub_15DC610(
                         *a1,
                         (int)a2,
                         a3,
                         (int)a4,
                         v23,
                         v24,
                         v292,
                         v305,
                         *a1,
                         v332,
                         v346,
                         v359,
                         v374,
                         v388,
                         v401,
                         v416);
                v366 = v123;
                if ( v123 )
                  ++*(_DWORD *)(v123 + 8);
                v310 = *a1;
                sub_76A730(v489, a1, v123);
                v394 = v489[0];
                if ( *(_QWORD *)v489 && !*(_DWORD *)(*(_QWORD *)v489 + 8LL) )
                  sub_15D7BC0(v490, *(_QWORD *)v489);
                v380 = *a1;
                v124 = *(__int64 **)(a2[3] + 8LL);
                if ( *((_BYTE *)v124 + 8) != 1 )
                  sub_DBF6E(0);
                v125 = *v124;
                v351 = v125;
                if ( v125 )
                  ++*(_DWORD *)(v125 + 8);
                if ( a3 )
                {
                  v126 = &a4[a3];
                  v127 = nullptr;
                  for ( i = v380; ; i = *a1 )
                  {
                    sub_76A730(v489, a1, *a4);
                    v131 = *(_QWORD *)v489;
                    if ( *(_QWORD *)v489 )
                    {
                      v132 = *(_DWORD *)(*(_QWORD *)v489 + 8LL);
                      if ( v132 )
                      {
                        v133 = v132 + 1;
                      }
                      else
                      {
                        sub_15D7BC0(v490, *(_QWORD *)v489);
                        v133 = *(_DWORD *)(v131 + 8) + 1;
                      }
                      *(_DWORD *)(v131 + 8) = v133;
                    }
                    if ( v127 )
                    {
                      v134 = *((_DWORD *)v127 - 1);
                      if ( v134 == *((_DWORD *)v127 - 2) )
                      {
                        v135 = (3 * v134 + 1) >> 1;
                        v136 = 8 * v135 + 8;
                        if ( 8 * v134 + 8 >= (unsigned int)v136 || v134 >= v135 )
                        {
                          v14 = (char **)__cxa_allocate_exception(0x28u);
                          sub_76A180((__int64 *)v489, "Overflow encountered when expanding vector");
                          *v14 = (char *)off_1C63128;
                          sub_2333C0(v14 + 1, v489);
                          sub_233E40((__int64)v489);
                          __cxa_throw(
                            v14,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v435 = (3 * v134 + 1) >> 1;
                        v137 = (unsigned int *)sub_186B300(v127 - 1, v136);
                        v127 = v137 + 2;
                        *v137 = v435;
                        LODWORD(v137) = v137[1];
                        v130 = &v127[(unsigned int)v137];
                        v129 = (_DWORD)v137 + 1;
                      }
                      else
                      {
                        v128 = v134;
                        v129 = v134 + 1;
                        v130 = &v127[v128];
                      }
                    }
                    else
                    {
                      v270 = (_QWORD *)sub_186B270(0x18u);
                      v127 = v270 + 1;
                      *v270 = 2;
                      v129 = 1;
                      v130 = v127;
                    }
                    *v130 = v131;
                    *((_DWORD *)v127 - 1) = v129;
                    if ( v131 )
                    {
                      v38 = (*(_DWORD *)(v131 + 8))-- == 1;
                      if ( v38 )
                        sub_15D7BC0(i, v131);
                    }
                    if ( ++a4 == v126 )
                      break;
                  }
                }
                else
                {
                  v127 = nullptr;
                }
                v199 = *(_QWORD *)(a2[5] + 24LL);
                if ( v199 )
                {
                  v200 = *(_QWORD *)(v199 + 8);
                  v201 = 0;
                  v202 = 0;
                  while ( 1 )
                  {
                    v203 = v200 ? *(_DWORD *)(v200 - 4) - 1 : -1;
                    if ( v201 >= v203 )
                      break;
                    v204 = (_BYTE *)(v200 + 16LL * v201);
                    if ( v204[8] != 1 )
                      goto LABEL_459;
                    v205 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v204 + 24LL) + 8LL);
                    if ( *(_BYTE *)(v205 + 8) )
                      goto LABEL_458;
                    v202 = (unsigned int)(*(_DWORD *)v205 + v202);
                    ++v201;
                  }
                }
                else
                {
                  LODWORD(v202) = 0;
                  v206 = 0;
                  do
                  {
                    v207 = v206;
                    if ( *(_BYTE *)(v206 + 8) != 1 )
LABEL_459:
                      sub_DBF6E(0);
                    v206 += 16;
                    v208 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v207 + 24LL) + 8LL);
                    if ( *(_BYTE *)(v208 + 8) )
LABEL_458:
                      sub_DBF6E(0);
                    v202 = (unsigned int)(*(_DWORD *)v208 + v202);
                  }
                  while ( v206 != 0xFFFFFFFF0LL );
                }
                v485 = sub_1674700(a1 + 5, v202);
                sub_180C5A0(&v486, "x");
                v300 = *a1;
                v209 = sub_15DB5C0(*a1, 0, v485);
                *(_QWORD *)v436 = v209;
                if ( v209 )
                  ++*(_DWORD *)(v209 + 8);
                v212 = *a1;
                v342 = *a1;
                *(_QWORD *)v488 = *a1;
                if ( a3 )
                {
                  v478 = v127;
                  v213 = nullptr;
                  v422 = v487;
                  do
                  {
                    v217 = *v478;
                    *(_QWORD *)v487 = *(_QWORD *)v436;
                    v218 = sub_15DC610(
                             v212,
                             v217,
                             1,
                             (int)v422,
                             v210,
                             v211,
                             v300,
                             v310,
                             v323,
                             v342,
                             v351,
                             v366,
                             v380,
                             v394,
                             v408,
                             v422);
                    v219 = v218;
                    if ( v218 )
                      ++*(_DWORD *)(v218 + 8);
                    if ( v213 )
                    {
                      v220 = *((_DWORD *)v213 - 1);
                      if ( v220 == *((_DWORD *)v213 - 2) )
                      {
                        v221 = (3 * v220 + 1) >> 1;
                        v222 = 8 * v221 + 8;
                        if ( 8 * v220 + 8 >= (unsigned int)v222 || v220 >= v221 )
                        {
                          v7 = (char **)__cxa_allocate_exception(0x28u);
                          sub_76A180((__int64 *)v489, "Overflow encountered when expanding vector");
                          *v7 = (char *)off_1C63128;
                          sub_2333C0(v7 + 1, v489);
                          sub_233E40((__int64)v489);
                          __cxa_throw(
                            v7,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v408 = (3 * v220 + 1) >> 1;
                        v223 = (unsigned int *)sub_186B300(v213 - 1, v222);
                        v213 = v223 + 2;
                        *v223 = v408;
                        LODWORD(v223) = v223[1];
                        v216 = &v213[(unsigned int)v223];
                        v215 = (_DWORD)v223 + 1;
                      }
                      else
                      {
                        v214 = v220;
                        v215 = v220 + 1;
                        v216 = &v213[v214];
                      }
                    }
                    else
                    {
                      v271 = (_QWORD *)sub_186B270(0x18u);
                      *v271 = 2;
                      v215 = 1;
                      v213 = v271 + 1;
                      v216 = v213;
                    }
                    *v216 = v219;
                    v212 = *a1;
                    ++v478;
                    *((_DWORD *)v213 - 1) = v215;
                  }
                  while ( v478 != &v127[a3] );
                }
                else
                {
                  v213 = nullptr;
                }
                sub_15DC610(
                  v212,
                  v351,
                  a3,
                  (int)v213,
                  v210,
                  v211,
                  v300,
                  v310,
                  v323,
                  v342,
                  v351,
                  v366,
                  v380,
                  v394,
                  v408,
                  v422);
                v224 = *a1;
                *(_QWORD *)v489 = *(_QWORD *)v436;
                sub_15DC610(
                  v224,
                  v398,
                  1,
                  (int)v489,
                  v225,
                  v226,
                  v301,
                  v315,
                  v329,
                  v343,
                  v356,
                  v371,
                  v385,
                  v398,
                  v414,
                  v429);
                v227 = sub_15E1B70(v212);
                v228 = v227;
                if ( v227 )
                  ++*(_DWORD *)(v227 + 8);
                *(_QWORD *)v465 = *a1;
                v229 = sub_15DB6A0(*a1, 0, 1, &v485, &v486, v227, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
                *(_QWORD *)v479 = v229;
                if ( v229 )
                  *(_DWORD *)(v229 + 8) += 2;
                v230 = (_QWORD *)a1[15];
                if ( v230 )
                {
                  v231 = *((_DWORD *)v230 - 1);
                  if ( v231 == *((_DWORD *)v230 - 2) )
                  {
                    v285 = (3 * v231 + 1) >> 1;
                    v286 = 8 * v285 + 8;
                    if ( 8 * v231 + 8 >= v286 || v231 >= v285 )
                    {
                      v17 = (char **)__cxa_allocate_exception(0x28u);
                      sub_76A180((__int64 *)v489, "Overflow encountered when expanding vector");
                      *v17 = (char *)off_1C63128;
                      sub_2333C0(v17 + 1, v489);
                      sub_233E40((__int64)v489);
                      __cxa_throw(
                        v17,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v444 = (3 * v231 + 1) >> 1;
                    v287 = (unsigned int *)sub_186B300(v230 - 1, v286);
                    v288 = v287[1];
                    v230 = v287 + 2;
                    a1[15] = v287 + 2;
                    *v287 = v444;
                    LODWORD(v287) = v288;
                    v234 = &v230[v288];
                    v233 = (_DWORD)v287 + 1;
                  }
                  else
                  {
                    v232 = v231;
                    v233 = v231 + 1;
                    v234 = &v230[v232];
                  }
                }
                else
                {
                  v291 = (_QWORD *)sub_186B270(0x18u);
                  *v291 = 2;
                  v233 = 1;
                  v230 = v291 + 1;
                  a1[15] = v230;
                  v234 = v230;
                }
                *v234 = *(_QWORD *)v479;
                v235 = a1[9];
                *((_DWORD *)v230 - 1) = v233;
                LOBYTE(v490) = 1;
                *(_QWORD *)v489 = *(_QWORD *)v399;
                v236 = sub_15DCAD0(v235, 0, 0);
                sub_15D0DF0(v489);
                if ( v236 )
                  ++*(_DWORD *)(v236 + 8);
                v237 = *a5;
                if ( *a5 )
                {
                  v238 = a5[1];
                  v38 = (*(_DWORD *)(v237 + 8))-- == 1;
                  if ( v38 )
                    sub_15D7BC0(v238, v237);
                }
                *a5 = v236;
                if ( *(_QWORD *)v479 )
                {
                  v457 = *(_DWORD *)(*(_QWORD *)v479 + 8LL);
                  *(_DWORD *)(*(_QWORD *)v479 + 8LL) = v457 - 1;
                  if ( v457 == 1 )
                    sub_15D7BC0(*(_QWORD *)v465, *(_QWORD *)v479);
                }
                if ( v228 )
                {
                  v38 = (*(_DWORD *)(v228 + 8))-- == 1;
                  if ( v38 )
                    sub_15D7BC0(v212, v228);
                }
                if ( v213 )
                {
                  v239 = (unsigned __int64)&v213[*((unsigned int *)v213 - 1)];
                  if ( (unsigned __int64)v213 < v239 )
                  {
                    v240 = v213;
                    do
                    {
                      v241 = *v240;
                      if ( *v240 )
                      {
                        v38 = (*(_DWORD *)(v241 + 8))-- == 1;
                        if ( v38 )
                          sub_15D7BC0(v344, v241);
                      }
                      ++v240;
                    }
                    while ( (unsigned __int64)v240 < v239 );
                  }
                  sub_186B220(v213 - 1);
                }
                if ( *(_QWORD *)v436 )
                {
                  v480 = *(_DWORD *)(*(_QWORD *)v436 + 8LL);
                  *(_DWORD *)(*(_QWORD *)v436 + 8LL) = v480 - 1;
                  if ( v480 == 1 )
                    sub_15D7BC0(v302, *(_QWORD *)v436);
                }
                if ( v127 )
                {
                  v242 = v127;
                  v243 = (unsigned __int64)&v127[*((unsigned int *)v127 - 1)];
                  if ( (unsigned __int64)v127 < v243 )
                  {
                    do
                    {
                      v244 = *v242;
                      if ( *v242 )
                      {
                        v38 = (*(_DWORD *)(v244 + 8))-- == 1;
                        if ( v38 )
                          sub_15D7BC0(v386, v244);
                      }
                      ++v242;
                    }
                    while ( (unsigned __int64)v242 < v243 );
                  }
                  sub_186B220(v127 - 1);
                }
                if ( *(_QWORD *)v357 )
                {
                  v481 = *(_DWORD *)(*(_QWORD *)v357 + 8LL);
                  *(_DWORD *)(*(_QWORD *)v357 + 8LL) = v481 - 1;
                  if ( v481 == 1 )
                    sub_15D7BC0(v386, *(_QWORD *)v357);
                }
                if ( *(_QWORD *)v399 )
                {
                  v482 = *(_DWORD *)(*(_QWORD *)v399 + 8LL);
                  *(_DWORD *)(*(_QWORD *)v399 + 8LL) = v482 - 1;
                  if ( v482 == 1 )
                    sub_15D7BC0(v316, *(_QWORD *)v399);
                }
                if ( v372 )
                {
                  v483 = *(_DWORD *)(v372 + 8);
                  *(_DWORD *)(v372 + 8) = v483 - 1;
                  if ( v483 == 1 )
                    sub_15D7BC0(v330, v372);
                }
                return 4;
            }
            if ( v26 )
            {
LABEL_462:
              v10 = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180((__int64 *)v489, "not handled by bvarray2uf");
              *v10 = (char *)off_1C63128;
              sub_2333C0(v10 + 1, v489);
              sub_233E40((__int64)v489);
              __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v27 = *a4;
            v28 = a4[1];
            v29 = sub_15D1F10(*a4);
            if ( !(unsigned __int8)sub_76A4E0((__int64)a1, v29) )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180((__int64 *)v489, "not handled by bvarray2uf");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v489);
              sub_233E40((__int64)v489);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v32 = sub_15DC610(
                    *a1,
                    (int)a2,
                    a3,
                    (int)a4,
                    v30,
                    v31,
                    v292,
                    v305,
                    v318,
                    v332,
                    v346,
                    v359,
                    v374,
                    v388,
                    v401,
                    (void *)*a1);
            v33 = v32;
            if ( v32 )
              ++*(_DWORD *)(v32 + 8);
            v402 = (void *)*a1;
            sub_76A730(v489, a1, v27);
            *(_QWORD *)v460 = *(_QWORD *)v489;
            if ( *(_QWORD *)v489 && !*(_DWORD *)(*(_QWORD *)v489 + 8LL) )
              sub_15D7BC0(v490, *(_QWORD *)v489);
            *(_QWORD *)v389 = *a1;
            sub_76A730(v489, a1, v33);
            v34 = *(_QWORD *)v489;
            if ( *(_QWORD *)v489 && !*(_DWORD *)(*(_QWORD *)v489 + 8LL) )
              sub_15D7BC0(v490, *(_QWORD *)v489);
            *(_QWORD *)v489 = v34;
            LOBYTE(v490) = 1;
            v35 = sub_15DCAD0(a1[9], 0, 0);
            sub_15D0DF0(v489);
            if ( v35 )
              ++*(_DWORD *)(v35 + 8);
            v36 = *a5;
            if ( *a5 )
            {
              v37 = a5[1];
              v38 = (*(_DWORD *)(v36 + 8))-- == 1;
              if ( v38 )
                sub_15D7BC0(v37, v36);
            }
            *a5 = v35;
            v39 = *(_QWORD *)(a2[5] + 24LL);
            if ( v39 )
            {
              v40 = *(_QWORD *)(v39 + 8);
              v41 = 0;
              v42 = 0;
              while ( 1 )
              {
                v43 = v40 ? *(_DWORD *)(v40 - 4) - 1 : -1;
                if ( v41 >= v43 )
                  break;
                v44 = (_BYTE *)(v40 + 16LL * v41);
                if ( v44[8] != 1 )
                  goto LABEL_469;
                v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44 + 24LL) + 8LL);
                if ( *(_BYTE *)(v45 + 8) )
                  goto LABEL_477;
                v42 = (unsigned int)(*(_DWORD *)v45 + v42);
                ++v41;
              }
            }
            else
            {
              LODWORD(v42) = 0;
              v70 = 0;
              do
              {
                v71 = v70;
                if ( *(_BYTE *)(v70 + 8) != 1 )
LABEL_469:
                  sub_DBF6E(0);
                v70 += 16;
                v72 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v71 + 24LL) + 8LL);
                if ( *(_BYTE *)(v72 + 8) )
LABEL_477:
                  sub_DBF6E(0);
                v42 = (unsigned int)(*(_DWORD *)v72 + v42);
              }
              while ( v70 != 0xFFFFFFFF0LL );
            }
            v485 = sub_1674700(a1 + 5, v42);
            sub_180C5A0(&v486, "x");
            v375 = (void *)*a1;
            v73 = sub_15DB5C0(*a1, 0, v485);
            v76 = v73;
            if ( v73 )
              ++*(_DWORD *)(v73 + 8);
            v77 = (void *)*a1;
            *(_QWORD *)v487 = v76;
            *(_QWORD *)v451 = v77;
            sub_15DC610(
              (int)v77,
              v460[0],
              1,
              (int)v487,
              v74,
              v75,
              v293,
              v306,
              v319,
              v333,
              v347,
              v360,
              (int)v375,
              v389[0],
              (int)v402,
              v417);
            v78 = (void *)*a1;
            *(_QWORD *)v488 = v76;
            sub_15DC610(
              (int)v78,
              v34,
              1,
              (int)v488,
              v79,
              v80,
              v294,
              v307,
              v320,
              v334,
              v348,
              v361,
              v376,
              v390,
              v403,
              v418);
            sub_15E1B70(v451[0]);
            sub_15E1B70(*a1);
            v81 = sub_15E1B70(v451[0]);
            *(_QWORD *)v468 = v81;
            if ( v81 )
              ++*(_DWORD *)(v81 + 8);
            v362 = (void *)*a1;
            v82 = sub_15DB6A0(*a1, 0, 1, &v485, &v486, v81, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
            v439 = v82;
            if ( v82 )
              *(_DWORD *)(v82 + 8) += 2;
            v85 = (_QWORD *)a1[15];
            if ( v85 )
            {
              v86 = *((_DWORD *)v85 - 1);
              if ( v86 == *((_DWORD *)v85 - 2) )
              {
                v141 = (3 * v86 + 1) >> 1;
                v142 = 8 * v141 + 8;
                if ( 8 * v86 + 8 >= (unsigned int)v142 || v86 >= v141 )
                {
                  v9 = (char **)__cxa_allocate_exception(0x28u);
                  sub_76A180((__int64 *)v489, "Overflow encountered when expanding vector");
                  *v9 = (char *)off_1C63128;
                  sub_2333C0(v9 + 1, v489);
                  sub_233E40((__int64)v489);
                  __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v352 = (3 * v86 + 1) >> 1;
                v143 = (unsigned int *)sub_186B300(v85 - 1, v142);
                v85 = v143 + 2;
                a1[15] = v143 + 2;
                *v143 = v352;
                LODWORD(v143) = v143[1];
                v89 = &v85[(unsigned int)v143];
                v88 = (_DWORD)v143 + 1;
              }
              else
              {
                v87 = v86;
                v88 = v86 + 1;
                v89 = &v85[v87];
              }
            }
            else
            {
              v273 = (_QWORD *)sub_186B270(0x18u);
              *v273 = 2;
              v88 = 1;
              v85 = v273 + 1;
              a1[15] = v85;
              v89 = v85;
            }
            *v89 = v439;
            *((_DWORD *)v85 - 1) = v88;
            v90 = (void *)*a1;
            *(_QWORD *)v489 = v28;
            v91 = (int)v90;
            sub_15DC610(
              (int)v90,
              v34,
              1,
              (int)v489,
              v83,
              v84,
              v295,
              v308,
              v321,
              v335,
              (int)v90,
              (char)v362,
              v377,
              v391,
              v404,
              v419);
            v92 = sub_15E1B70(v91);
            v93 = v92;
            if ( v92 )
              *(_DWORD *)(v92 + 8) += 2;
            v94 = (_QWORD *)a1[15];
            if ( v94 )
            {
              v95 = *((_DWORD *)v94 - 1);
              if ( v95 == *((_DWORD *)v94 - 2) )
              {
                v138 = (3 * v95 + 1) >> 1;
                v139 = 8 * v138 + 8;
                if ( 8 * v95 + 8 >= (unsigned int)v139 || v95 >= v138 )
                {
                  v16 = (char **)__cxa_allocate_exception(0x28u);
                  sub_76A180((__int64 *)v489, "Overflow encountered when expanding vector");
                  *v16 = (char *)off_1C63128;
                  sub_2333C0(v16 + 1, v489);
                  sub_233E40((__int64)v489);
                  __cxa_throw(v16, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v448 = (3 * v95 + 1) >> 1;
                v140 = (unsigned int *)sub_186B300(v94 - 1, v139);
                v94 = v140 + 2;
                a1[15] = v140 + 2;
                *v140 = v448;
                LODWORD(v140) = v140[1];
                v98 = &v94[(unsigned int)v140];
                v97 = (_DWORD)v140 + 1;
              }
              else
              {
                v96 = v95;
                v97 = v95 + 1;
                v98 = &v94[v96];
              }
            }
            else
            {
              v272 = (_QWORD *)sub_186B270(0x18u);
              *v272 = 2;
              v97 = 1;
              v94 = v272 + 1;
              a1[15] = v94;
              v98 = v94;
            }
            *v98 = v93;
            *((_DWORD *)v94 - 1) = v97;
            if ( v93 )
            {
              v38 = (*(_DWORD *)(v93 + 8))-- == 1;
              if ( v38 )
                sub_15D7BC0(*(_QWORD *)v349, v93);
            }
            if ( v439 )
            {
              v446 = *(_DWORD *)(v439 + 8);
              *(_DWORD *)(v439 + 8) = v446 - 1;
              if ( v446 == 1 )
                sub_15D7BC0(v363, v439);
            }
            if ( *(_QWORD *)v468 )
            {
              v447 = *(_DWORD *)(*(_QWORD *)v468 + 8LL);
              *(_DWORD *)(*(_QWORD *)v468 + 8LL) = v447 - 1;
              if ( v447 == 1 )
                sub_15D7BC0(*(_QWORD *)v451, *(_QWORD *)v468);
            }
            if ( v76 )
            {
              v38 = (*(_DWORD *)(v76 + 8))-- == 1;
              if ( v38 )
                sub_15D7BC0(v378, v76);
            }
            if ( v34 )
            {
              v38 = (*(_DWORD *)(v34 + 8))-- == 1;
              if ( v38 )
                sub_15D7BC0(*(_QWORD *)v392, v34);
            }
            if ( *(_QWORD *)v460 )
            {
              v469 = *(_DWORD *)(*(_QWORD *)v460 + 8LL);
              *(_DWORD *)(*(_QWORD *)v460 + 8LL) = v469 - 1;
              if ( v469 == 1 )
                sub_15D7BC0(v405, *(_QWORD *)v460);
            }
            if ( v33 )
            {
              v38 = (*(_DWORD *)(v33 + 8))-- == 1;
              if ( v38 )
                sub_15D7BC0(*(_QWORD *)v420, v33);
            }
          }
          return 4;
        }
      }
      goto LABEL_46;
    }
    if ( (unsigned __int8)sub_76A4E0((__int64)a1, v47) )
    {
      v364 = (void *)*a1;
      v406 = *a4;
      if ( *a4 )
        ++*(_DWORD *)(*a4 + 8LL);
      sub_76A730(v489, a1, a4[1]);
      v421 = *(void **)v489;
      if ( *(_QWORD *)v489 && !*(_DWORD *)(*(_QWORD *)v489 + 8LL) )
        sub_15D7BC0(v490, *(_QWORD *)v489);
      v336 = (void *)*a1;
      sub_76A730(v489, a1, a4[2]);
      *(_QWORD *)v433 = *(_QWORD *)v489;
      if ( *(_QWORD *)v489 && !*(_DWORD *)(*(_QWORD *)v489 + 8LL) )
        sub_15D7BC0(v490, *(_QWORD *)v489);
      v103 = *(_QWORD *)(sub_15D1F10(a4[1]) + 24);
      if ( v103 )
      {
        v104 = *(_QWORD *)(v103 + 8);
        v105 = 0;
        v106 = 0;
        while ( 1 )
        {
          v107 = v104 ? *(_DWORD *)(v104 - 4) - 1 : -1;
          if ( v105 >= v107 )
            break;
          v108 = (_BYTE *)(v104 + 16LL * v105);
          if ( v108[8] != 1 )
            goto LABEL_470;
          v109 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v108 + 24LL) + 8LL);
          if ( *(_BYTE *)(v109 + 8) )
            goto LABEL_471;
          v106 = (unsigned int)(*(_DWORD *)v109 + v106);
          ++v105;
        }
      }
      else
      {
        LODWORD(v106) = 0;
        v282 = 0;
        do
        {
          v283 = v282;
          if ( *(_BYTE *)(v282 + 8) != 1 )
LABEL_470:
            sub_DBF6E(0);
          v282 += 16;
          v284 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v283 + 24LL) + 8LL);
          if ( *(_BYTE *)(v284 + 8) )
LABEL_471:
            sub_DBF6E(0);
          v106 = (unsigned int)(*(_DWORD *)v284 + v106);
        }
        while ( v282 != 0xFFFFFFFF0LL );
      }
      v485 = sub_1674700(a1 + 5, v106);
      sub_180C5A0(&v486, "x");
      v324 = (void *)*a1;
      v167 = sub_15DB5C0(*a1, 0, v485);
      v170 = v167;
      if ( v167 )
        ++*(_DWORD *)(v167 + 8);
      v171 = sub_15DC610(
               *a1,
               (int)a2,
               a3,
               (int)a4,
               v168,
               v169,
               v292,
               v305,
               (int)v324,
               (int)v336,
               v346,
               (char)v364,
               *a1,
               v388,
               v406,
               v421);
      if ( v171 )
        ++*(_DWORD *)(v171 + 8);
      v174 = (void *)*a1;
      *(_QWORD *)v487 = v170;
      v175 = sub_15DC610(
               (int)v174,
               (int)v425,
               1,
               (int)v487,
               v172,
               v173,
               v297,
               v311,
               v325,
               v338,
               v353,
               v367,
               v381,
               v171,
               v410,
               v425);
      *(_QWORD *)v464 = v175;
      if ( v175 )
        ++*(_DWORD *)(v175 + 8);
      v178 = (void *)*a1;
      *(_QWORD *)v488 = v170;
      v179 = sub_15DC610(
               (int)v178,
               v433[0],
               1,
               (int)v488,
               v176,
               v177,
               v298,
               v312,
               v326,
               v339,
               v354,
               v368,
               v382,
               v395,
               v411,
               v426);
      *(_QWORD *)v472 = v179;
      if ( v179 )
        ++*(_DWORD *)(v179 + 8);
      v313 = (void *)*a1;
      v180 = sub_15E1BF0(*a1);
      v181 = v180;
      if ( v180 )
        ++*(_DWORD *)(v180 + 8);
      sub_76A730(v489, a1, v180);
      v184 = *(_QWORD *)v489;
      if ( *(_QWORD *)v489 )
      {
        v185 = v490;
        v38 = (*(_DWORD *)(*(_QWORD *)v489 + 8LL))-- == 1;
        if ( v38 )
          sub_15D7BC0(v185, v184);
      }
      v186 = (void *)*a1;
      *(_QWORD *)v489 = v170;
      sub_15DC610(
        (int)v186,
        v184,
        1,
        (int)v489,
        v182,
        v183,
        v299,
        (int)v313,
        v327,
        v340,
        (int)v186,
        v369,
        v383,
        v396,
        v412,
        v427);
      v187 = sub_15E1B70((int)v186);
      v188 = v187;
      if ( v187 )
        ++*(_DWORD *)(v187 + 8);
      v189 = sub_15DB6A0(*a1, 0, 1, &v485, &v486, v187, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
      v442 = v189;
      if ( v189 )
        *(_DWORD *)(v189 + 8) += 2;
      v190 = (_QWORD *)a1[15];
      if ( v190 )
      {
        v191 = *((_DWORD *)v190 - 1);
        if ( v191 == *((_DWORD *)v190 - 2) )
        {
          v274 = (3 * v191 + 1) >> 1;
          v275 = 8 * v274 + 8;
          if ( 8 * v191 + 8 >= v275 || v191 >= v274 )
          {
            v12 = (char **)__cxa_allocate_exception(0x28u);
            sub_76A180((__int64 *)v489, "Overflow encountered when expanding vector");
            *v12 = (char *)off_1C63128;
            sub_2333C0(v12 + 1, v489);
            sub_233E40((__int64)v489);
            __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v304 = (3 * v191 + 1) >> 1;
          v276 = (unsigned int *)sub_186B300(v190 - 1, v275);
          v277 = v276[1];
          v190 = v276 + 2;
          a1[15] = v276 + 2;
          *v276 = v304;
          LODWORD(v276) = v277;
          v194 = &v190[v277];
          v193 = (_DWORD)v276 + 1;
        }
        else
        {
          v192 = v191;
          v193 = v191 + 1;
          v194 = &v190[v192];
        }
      }
      else
      {
        v289 = (_QWORD *)sub_186B270(0x18u);
        *v289 = 2;
        v193 = 1;
        v190 = v289 + 1;
        a1[15] = v190;
        v194 = v190;
      }
      *v194 = v442;
      v195 = a1[9];
      *((_DWORD *)v190 - 1) = v193;
      *(_QWORD *)v489 = v184;
      LOBYTE(v490) = 1;
      v196 = sub_15DCAD0(v195, 0, 0);
      sub_15D0DF0(v489);
      if ( v196 )
        ++*(_DWORD *)(v196 + 8);
      v197 = *a5;
      if ( *a5 )
      {
        v198 = a5[1];
        v38 = (*(_DWORD *)(v197 + 8))-- == 1;
        if ( v38 )
          sub_15D7BC0(v198, v197);
      }
      *a5 = v196;
      if ( v188 )
      {
        v38 = (*(_DWORD *)(v188 + 8))-- == 1;
        if ( v38 )
          sub_15D7BC0(*(_QWORD *)v355, v188);
      }
      if ( v442 )
      {
        v455 = *(_DWORD *)(v442 + 8);
        *(_DWORD *)(v442 + 8) = v455 - 1;
        if ( v455 == 1 )
          sub_15D7BC0(*(_QWORD *)v355, v442);
      }
      if ( v181 )
      {
        v38 = (*(_DWORD *)(v181 + 8))-- == 1;
        if ( v38 )
          sub_15D7BC0(v314, v181);
      }
      if ( *(_QWORD *)v472 )
      {
        v456 = *(_DWORD *)(*(_QWORD *)v472 + 8LL);
        *(_DWORD *)(*(_QWORD *)v472 + 8LL) = v456 - 1;
        if ( v456 == 1 )
          sub_15D7BC0(v384, *(_QWORD *)v472);
      }
      if ( *(_QWORD *)v464 )
      {
        v473 = *(_DWORD *)(*(_QWORD *)v464 + 8LL);
        *(_DWORD *)(*(_QWORD *)v464 + 8LL) = v473 - 1;
        if ( v473 == 1 )
          sub_15D7BC0(v384, *(_QWORD *)v464);
      }
      if ( *(_QWORD *)v397 )
      {
        v474 = *(_DWORD *)(*(_QWORD *)v397 + 8LL);
        *(_DWORD *)(*(_QWORD *)v397 + 8LL) = v474 - 1;
        if ( v474 == 1 )
          sub_15D7BC0(v384, *(_QWORD *)v397);
      }
      if ( v170 )
      {
        v38 = (*(_DWORD *)(v170 + 8))-- == 1;
        if ( v38 )
          sub_15D7BC0(v328, v170);
      }
      if ( *(_QWORD *)v433 )
      {
        v475 = *(_DWORD *)(*(_QWORD *)v433 + 8LL);
        *(_DWORD *)(*(_QWORD *)v433 + 8LL) = v475 - 1;
        if ( v475 == 1 )
          sub_15D7BC0(v341, *(_QWORD *)v433);
      }
      if ( *(_QWORD *)v428 )
      {
        v476 = *(_DWORD *)(*(_QWORD *)v428 + 8LL);
        *(_DWORD *)(*(_QWORD *)v428 + 8LL) = v476 - 1;
        if ( v476 == 1 )
          sub_15D7BC0(v370, *(_QWORD *)v428);
      }
      if ( v413 )
      {
        v477 = *(_DWORD *)(v413 + 8);
        *(_DWORD *)(v413 + 8) = v477 - 1;
        if ( v477 == 1 )
          sub_15D7BC0(v370, v413);
      }
      return 4;
    }
    v20 = (int *)a2[3];
    if ( v20 )
    {
      v21 = *v20;
      if ( !*v20 )
        goto LABEL_42;
LABEL_3:
      if ( v21 != -1 )
        goto LABEL_4;
    }
LABEL_46:
    v438 = (void *)*a1;
  }
  if ( a3 )
  {
    v48 = a4;
    v49 = 0;
    do
    {
      v50 = sub_15D1F10(*v48++);
      v49 |= sub_76A4E0((__int64)a1, v50);
    }
    while ( v48 != &a4[a3] );
    v51 = (void *)*a1;
  }
  else
  {
    v51 = v438;
    LOBYTE(v49) = 0;
  }
  v52 = sub_15DC610(
          (int)v51,
          (int)a2,
          a3,
          (int)a4,
          (int)a5,
          a6,
          v292,
          v305,
          v318,
          v332,
          v346,
          v359,
          v374,
          v388,
          v401,
          v416);
  v53 = v52;
  if ( v52 )
    ++*(_DWORD *)(v52 + 8);
  v54 = sub_15D1F10(v52);
  if ( (unsigned __int8)sub_76A4E0((__int64)a1, v54) )
  {
    sub_76A730(v489, a1, v53);
    LOBYTE(v490) = 1;
    *(_QWORD *)v470 = *(_QWORD *)v489;
    v100 = sub_15DCAD0(a1[9], 0, 0);
    sub_15D0DF0(v489);
    if ( v100 )
      ++*(_DWORD *)(v100 + 8);
    v101 = *a5;
    if ( *a5 )
    {
      v102 = a5[1];
      v38 = (*(_DWORD *)(v101 + 8))-- == 1;
      if ( v38 )
        sub_15D7BC0(v102, v101);
    }
    *a5 = v100;
    v38 = (*(_DWORD *)(v53 + 8))-- == 1;
    if ( v38 )
      sub_15D7BC0(v51, v53);
    if ( *(_QWORD *)v470 )
    {
      v461 = *(_DWORD *)(*(_QWORD *)v470 + 8LL);
      *(_DWORD *)(*(_QWORD *)v470 + 8LL) = v461 - 1;
      if ( v461 == 1 )
        sub_15D7BC0(v438, *(_QWORD *)v470);
    }
    return 4;
  }
  if ( (_BYTE)v49 )
  {
    v56 = *a5;
    if ( v53 == *a5 )
    {
      v55 = *(_DWORD *)(v53 + 8) - 1;
      result = 4;
    }
    else
    {
      if ( v56 )
      {
        v57 = a5[1];
        v38 = (*(_DWORD *)(v56 + 8))-- == 1;
        if ( v38 )
          sub_15D7BC0(v57, v56);
      }
      v55 = *(_DWORD *)(v53 + 8);
      *a5 = v53;
      result = 4;
    }
  }
  else
  {
    v55 = *(_DWORD *)(v53 + 8) - 1;
    result = 5;
  }
  *(_DWORD *)(v53 + 8) = v55;
  if ( !v55 )
  {
    v467 = result;
    sub_15D7BC0(v51, v53);
    return v467;
  }
  return result;
}

