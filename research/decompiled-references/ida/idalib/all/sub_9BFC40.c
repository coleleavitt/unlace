__int64 __fastcall sub_9BFC40(__int64 *a1)
{
  __int64 *v1; // r13
  size_t v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // r14d
  void *v7; // r12
  unsigned int v8; // ebx
  __int64 *v9; // rax
  __int64 v10; // rax
  void **v11; // rax
  void *v12; // rdx
  unsigned __int64 v13; // r9
  __int64 *i; // rbp
  unsigned int v15; // edx
  __int64 *v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  _BYTE *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rbx
  int v23; // ecx
  __int64 v24; // rsi
  int v25; // ecx
  unsigned int v26; // edx
  __int64 *v27; // rax
  __int64 v28; // rdi
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 **v37; // rax
  _QWORD *v38; // r14
  __int64 v39; // rdx
  char v40; // al
  __int64 v41; // rcx
  __int64 v42; // rsi
  int v43; // edi
  __int64 *v44; // rax
  unsigned int v45; // ecx
  unsigned int v46; // edx
  _DWORD *v47; // rax
  __int64 *v48; // rbx
  void *v49; // rdi
  bool v50; // zf
  __int64 v51; // r9
  _QWORD *v52; // rax
  int v53; // esi
  __int64 v54; // rcx
  __int64 v55; // rdx
  int v56; // esi
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 *v59; // rdx
  void **v60; // rax
  bool v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rbx
  unsigned int v65; // ecx
  __int64 *v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rdx
  _DWORD *v69; // rdi
  unsigned int v70; // edx
  unsigned __int64 v71; // rax
  __int64 *v72; // rcx
  __int64 v73; // rdx
  void *v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rcx
  unsigned int v78; // edx
  _QWORD *v79; // rbx
  __int64 v80; // rax
  _QWORD *v81; // rsi
  unsigned int v82; // eax
  __int64 v83; // rdx
  int v84; // r11d
  int v85; // r15d
  unsigned __int64 v86; // r10
  __int64 v87; // rsi
  __int64 v88; // r14
  __int64 v89; // rsi
  __int64 *v90; // r10
  __int64 v91; // r15
  unsigned __int64 v92; // rdx
  __int64 v93; // rdx
  unsigned int v94; // eax
  __int64 *v95; // r10
  unsigned __int64 v96; // rdx
  __int64 *v97; // rsi
  unsigned int v98; // esi
  unsigned __int64 v99; // rdx
  unsigned __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // r10
  __int64 v103; // r15
  __int64 v104; // r15
  unsigned __int64 v105; // rdx
  __int64 *v106; // rsi
  __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 k; // rax
  __int64 v111; // rax
  unsigned __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // rbx
  __int64 *v115; // r12
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // r15
  __int64 v121; // rbp
  __int64 v122; // rbx
  __int64 v123; // rdi
  void *v124; // rdi
  __int64 result; // rax
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rbx
  __int64 v131; // rax
  __int64 v132; // r12
  __int64 v133; // rbp
  char *v134; // r13
  char *v135; // r15
  char v136; // al
  char *v137; // rdx
  char v138; // al
  int v139; // ecx
  __int64 v140; // r9
  bool v141; // al
  _QWORD *v142; // r13
  __int64 **v143; // rax
  int v144; // r10d
  __int64 *v145; // r12
  int v146; // ebx
  __int64 v147; // rdx
  int v148; // eax
  int v149; // r8d
  __int64 v150; // rdi
  __int64 v151; // rcx
  unsigned int v152; // esi
  _QWORD *v153; // r8
  int v154; // edi
  __int64 v155; // rcx
  __int64 v156; // rdx
  int v157; // eax
  char *v158; // rdx
  __int64 v159; // r8
  __int64 v160; // rcx
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rax
  __int64 v165; // rsi
  __int64 *v166; // rdx
  __int64 v167; // rax
  unsigned int v168; // edx
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rsi
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rax
  __int64 v177; // rcx
  unsigned int v178; // eax
  __int64 v179; // rdx
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // r15
  int v183; // eax
  __int64 v184; // rcx
  __int64 v185; // rax
  int v186; // eax
  int j; // r8d
  int v188; // ecx
  __int64 v189; // rsi
  __int64 v190; // rax
  int v191; // eax
  __int64 v192; // r10
  int v193; // r8d
  int v194; // eax
  int v195; // r8d
  __int64 v196; // r10
  int v197; // r8d
  int v198; // eax
  int v199; // r8d
  __int64 v200; // r10
  int v201; // r8d
  int v202; // eax
  int v203; // r8d
  __int64 v204; // r10
  __int64 v205; // r11
  int v206; // r8d
  int v207; // eax
  __int64 v208; // r11
  int v209; // eax
  __int64 v210; // r11
  __int64 v211; // r10
  int v212; // r8d
  int v213; // eax
  __int64 v214; // r10
  int v215; // eax
  __int64 v216; // r8
  int v217; // edx
  int v218; // eax
  int v219; // r8d
  __int64 v220; // r10
  __int64 v221; // r11
  int v222; // r8d
  int v223; // eax
  __int64 v224; // r11
  int v225; // eax
  __int64 v226; // r8
  __int64 v227; // r11
  int v228; // edx
  int v229; // eax
  __int64 v230; // r10
  __int64 v231; // r11
  int v232; // eax
  __int64 v233; // r8
  __int64 v234; // r11
  int v235; // edx
  int v236; // eax
  __int64 v237; // r11
  __int64 v238; // r10
  int v239; // eax
  __int64 v240; // r8
  int v241; // edx
  int v242; // eax
  int v243; // r8d
  __int64 v244; // r8
  __int64 v245; // r11
  int v246; // edx
  int v247; // eax
  __int64 v248; // r10
  __int64 v249; // r11
  int v250; // eax
  __int64 v251; // rsi
  __int64 v252; // rdi
  _DWORD *v253; // rdx
  __int64 v254; // r10
  __int64 v255; // r11
  int v256; // r8d
  int v257; // eax
  int v258; // eax
  __int64 v259; // r11
  int v260; // eax
  __int64 v261; // rsi
  __int64 v262; // rdi
  _DWORD *v263; // rdx
  __int64 v264; // rsi
  __int64 v265; // rdi
  _DWORD *v266; // rdx
  __int64 v267; // rsi
  __int64 v268; // rdi
  _DWORD *v269; // rdx
  __int64 v270; // rsi
  __int64 v271; // rdi
  _DWORD *v272; // rdx
  __int64 v273; // rsi
  __int64 v274; // rdi
  _DWORD *v275; // rdx
  __int64 v276; // r10
  __int64 v277; // r11
  int v278; // r8d
  int v279; // eax
  int v280; // eax
  __int64 v281; // r11
  int v282; // eax
  __int64 v283; // rsi
  __int64 v284; // rdi
  _DWORD *v285; // rdx
  __int64 v286; // rsi
  __int64 v287; // rdi
  _DWORD *v288; // rdx
  __int64 **v289; // [rsp+10h] [rbp-788h]
  __int64 *v290; // [rsp+18h] [rbp-780h]
  _DWORD *v291; // [rsp+20h] [rbp-778h]
  __int64 *v292; // [rsp+28h] [rbp-770h]
  __int64 *v293; // [rsp+30h] [rbp-768h]
  int v294; // [rsp+30h] [rbp-768h]
  int v295; // [rsp+30h] [rbp-768h]
  int v296; // [rsp+30h] [rbp-768h]
  int v297; // [rsp+30h] [rbp-768h]
  int v298; // [rsp+30h] [rbp-768h]
  int v299; // [rsp+30h] [rbp-768h]
  __int64 v300; // [rsp+30h] [rbp-768h]
  __int64 v301; // [rsp+30h] [rbp-768h]
  int v302; // [rsp+30h] [rbp-768h]
  __int64 v303; // [rsp+30h] [rbp-768h]
  __int64 v304; // [rsp+30h] [rbp-768h]
  __int64 v305; // [rsp+30h] [rbp-768h]
  __int64 *v306; // [rsp+38h] [rbp-760h]
  __int64 v307; // [rsp+38h] [rbp-760h]
  __int64 v308; // [rsp+38h] [rbp-760h]
  __int64 v309; // [rsp+38h] [rbp-760h]
  int v310; // [rsp+38h] [rbp-760h]
  __int64 *v311; // [rsp+50h] [rbp-748h]
  __int64 v312; // [rsp+50h] [rbp-748h]
  int v313; // [rsp+50h] [rbp-748h]
  __int64 v314; // [rsp+50h] [rbp-748h]
  int v315; // [rsp+50h] [rbp-748h]
  int v316; // [rsp+50h] [rbp-748h]
  int v317; // [rsp+50h] [rbp-748h]
  __int64 v318; // [rsp+50h] [rbp-748h]
  __int64 v319; // [rsp+50h] [rbp-748h]
  int v320; // [rsp+50h] [rbp-748h]
  __int64 v321; // [rsp+50h] [rbp-748h]
  int v322; // [rsp+50h] [rbp-748h]
  __int64 v323; // [rsp+50h] [rbp-748h]
  __int64 v324; // [rsp+50h] [rbp-748h]
  __int64 v325; // [rsp+50h] [rbp-748h]
  __int64 v326; // [rsp+50h] [rbp-748h]
  __int64 v327; // [rsp+50h] [rbp-748h]
  __int64 v328; // [rsp+50h] [rbp-748h]
  __int64 v329; // [rsp+58h] [rbp-740h]
  __int64 *v330; // [rsp+58h] [rbp-740h]
  _QWORD *v331; // [rsp+58h] [rbp-740h]
  __int64 v332; // [rsp+58h] [rbp-740h]
  __int64 v333; // [rsp+58h] [rbp-740h]
  int v334; // [rsp+58h] [rbp-740h]
  __int64 v335; // [rsp+58h] [rbp-740h]
  int v336; // [rsp+58h] [rbp-740h]
  __int64 v337; // [rsp+58h] [rbp-740h]
  __int64 v338; // [rsp+58h] [rbp-740h]
  __int64 v339; // [rsp+58h] [rbp-740h]
  __int64 v340; // [rsp+58h] [rbp-740h]
  __int64 v341; // [rsp+58h] [rbp-740h]
  __int64 v342; // [rsp+58h] [rbp-740h]
  __int64 v343; // [rsp+58h] [rbp-740h]
  __int64 v344; // [rsp+58h] [rbp-740h]
  __int64 v345; // [rsp+58h] [rbp-740h]
  __int64 v346; // [rsp+58h] [rbp-740h]
  __int64 *v347; // [rsp+68h] [rbp-730h]
  __int64 v348; // [rsp+70h] [rbp-728h]
  int v349; // [rsp+78h] [rbp-720h]
  int v350; // [rsp+78h] [rbp-720h]
  int v351; // [rsp+78h] [rbp-720h]
  __int64 v352; // [rsp+78h] [rbp-720h]
  __int64 v353; // [rsp+78h] [rbp-720h]
  int v354; // [rsp+78h] [rbp-720h]
  int v355; // [rsp+78h] [rbp-720h]
  int v356; // [rsp+78h] [rbp-720h]
  int v357; // [rsp+78h] [rbp-720h]
  __int64 v358; // [rsp+78h] [rbp-720h]
  __int64 v359; // [rsp+78h] [rbp-720h]
  int v360; // [rsp+78h] [rbp-720h]
  __int64 v361; // [rsp+78h] [rbp-720h]
  __int64 v362; // [rsp+78h] [rbp-720h]
  int v363; // [rsp+78h] [rbp-720h]
  __int64 v364; // [rsp+78h] [rbp-720h]
  int v365; // [rsp+78h] [rbp-720h]
  __int64 v366; // [rsp+78h] [rbp-720h]
  __int64 v367; // [rsp+78h] [rbp-720h]
  __int64 v368; // [rsp+78h] [rbp-720h]
  __int64 v369; // [rsp+78h] [rbp-720h]
  __int64 v370; // [rsp+78h] [rbp-720h]
  __int64 v371; // [rsp+78h] [rbp-720h]
  int v372; // [rsp+78h] [rbp-720h]
  __int64 v373; // [rsp+78h] [rbp-720h]
  __int64 v374; // [rsp+78h] [rbp-720h]
  __int64 v375; // [rsp+78h] [rbp-720h]
  __int64 v376; // [rsp+78h] [rbp-720h]
  __int64 v377; // [rsp+78h] [rbp-720h]
  __int64 v378; // [rsp+78h] [rbp-720h]
  __int64 v379; // [rsp+80h] [rbp-718h]
  int v380; // [rsp+80h] [rbp-718h]
  __int64 v381; // [rsp+80h] [rbp-718h]
  int v382; // [rsp+80h] [rbp-718h]
  __int64 v383; // [rsp+80h] [rbp-718h]
  int v384; // [rsp+80h] [rbp-718h]
  __int64 v385; // [rsp+80h] [rbp-718h]
  int v386; // [rsp+80h] [rbp-718h]
  __int64 v387; // [rsp+80h] [rbp-718h]
  int v388; // [rsp+80h] [rbp-718h]
  int v389; // [rsp+80h] [rbp-718h]
  __int64 v390; // [rsp+80h] [rbp-718h]
  int v391; // [rsp+80h] [rbp-718h]
  __int64 v392; // [rsp+80h] [rbp-718h]
  __int64 v393; // [rsp+80h] [rbp-718h]
  __int64 v394; // [rsp+80h] [rbp-718h]
  __int64 v395; // [rsp+80h] [rbp-718h]
  int v396; // [rsp+80h] [rbp-718h]
  __int64 v397; // [rsp+80h] [rbp-718h]
  __int64 v398; // [rsp+80h] [rbp-718h]
  __int64 v399; // [rsp+80h] [rbp-718h]
  __int64 v400; // [rsp+80h] [rbp-718h]
  int v401; // [rsp+80h] [rbp-718h]
  int v402; // [rsp+80h] [rbp-718h]
  int v403; // [rsp+80h] [rbp-718h]
  int v404; // [rsp+88h] [rbp-710h]
  int v405; // [rsp+88h] [rbp-710h]
  int v406; // [rsp+88h] [rbp-710h]
  int v407; // [rsp+88h] [rbp-710h]
  int v408; // [rsp+88h] [rbp-710h]
  int v409; // [rsp+88h] [rbp-710h]
  int v410; // [rsp+88h] [rbp-710h]
  __int64 v411; // [rsp+88h] [rbp-710h]
  int v412; // [rsp+88h] [rbp-710h]
  int v413; // [rsp+88h] [rbp-710h]
  int v414; // [rsp+88h] [rbp-710h]
  __int64 v415; // [rsp+88h] [rbp-710h]
  __int64 v416; // [rsp+88h] [rbp-710h]
  int v417; // [rsp+88h] [rbp-710h]
  int v418; // [rsp+88h] [rbp-710h]
  int v419; // [rsp+88h] [rbp-710h]
  __int64 v420; // [rsp+88h] [rbp-710h]
  int v421; // [rsp+88h] [rbp-710h]
  int v422; // [rsp+88h] [rbp-710h]
  int v423; // [rsp+88h] [rbp-710h]
  __int64 v424; // [rsp+88h] [rbp-710h]
  __int64 v425; // [rsp+88h] [rbp-710h]
  __int64 v426; // [rsp+88h] [rbp-710h]
  __int64 v427; // [rsp+88h] [rbp-710h]
  __int64 v428; // [rsp+90h] [rbp-708h]
  int v429; // [rsp+90h] [rbp-708h]
  __int64 v430; // [rsp+90h] [rbp-708h]
  int v431; // [rsp+90h] [rbp-708h]
  int v432; // [rsp+90h] [rbp-708h]
  int v433; // [rsp+90h] [rbp-708h]
  int v434; // [rsp+90h] [rbp-708h]
  int v435; // [rsp+90h] [rbp-708h]
  int v436; // [rsp+98h] [rbp-700h]
  int v437; // [rsp+98h] [rbp-700h]
  __int64 v438; // [rsp+98h] [rbp-700h]
  int v439; // [rsp+98h] [rbp-700h]
  __int64 v440; // [rsp+98h] [rbp-700h]
  int v441; // [rsp+98h] [rbp-700h]
  __int64 v442; // [rsp+A0h] [rbp-6F8h] BYREF
  __int64 v443; // [rsp+A8h] [rbp-6F0h] BYREF
  _DWORD *v444; // [rsp+B0h] [rbp-6E8h] BYREF
  __int64 *v445; // [rsp+B8h] [rbp-6E0h] BYREF
  _DWORD *v446; // [rsp+C0h] [rbp-6D8h] BYREF
  __int64 v447; // [rsp+C8h] [rbp-6D0h] BYREF
  __int64 v448; // [rsp+D0h] [rbp-6C8h] BYREF
  __int64 v449; // [rsp+D8h] [rbp-6C0h] BYREF
  void *v450; // [rsp+E0h] [rbp-6B8h] BYREF
  __int64 v451; // [rsp+E8h] [rbp-6B0h]
  _QWORD v452[22]; // [rsp+F0h] [rbp-6A8h] BYREF
  char v453; // [rsp+1A0h] [rbp-5F8h] BYREF
  void *ptr; // [rsp+240h] [rbp-558h] BYREF
  __int64 v455; // [rsp+248h] [rbp-550h]
  _QWORD v456[20]; // [rsp+250h] [rbp-548h] BYREF
  _DWORD *v457[2]; // [rsp+2F0h] [rbp-4A8h] BYREF
  char v458; // [rsp+300h] [rbp-498h] BYREF
  void *v459; // [rsp+3A0h] [rbp-3F8h] BYREF
  __int64 v460; // [rsp+3A8h] [rbp-3F0h]
  _QWORD v461[20]; // [rsp+3B0h] [rbp-3E8h] BYREF
  void *v462; // [rsp+450h] [rbp-348h] BYREF
  __int64 v463; // [rsp+458h] [rbp-340h]
  _BYTE v464[160]; // [rsp+460h] [rbp-338h] BYREF
  void *v465; // [rsp+500h] [rbp-298h] BYREF
  __int64 v466; // [rsp+508h] [rbp-290h]
  _QWORD v467[20]; // [rsp+510h] [rbp-288h] BYREF
  void *v468; // [rsp+5B0h] [rbp-1E8h] BYREF
  __int64 v469; // [rsp+5B8h] [rbp-1E0h]
  void *v470[20]; // [rsp+5C0h] [rbp-1D8h] BYREF
  void *s; // [rsp+660h] [rbp-138h] BYREF
  __int64 v472; // [rsp+668h] [rbp-130h]
  _BYTE v473[48]; // [rsp+670h] [rbp-128h] BYREF
  int v474; // [rsp+6A0h] [rbp-F8h]
  void *v475; // [rsp+6A8h] [rbp-F0h] BYREF
  __int64 v476; // [rsp+6B0h] [rbp-E8h]
  _BYTE v477[160]; // [rsp+6B8h] [rbp-E0h] BYREF
  void *v478; // [rsp+758h] [rbp-40h]

  v1 = a1;
  v2 = j__strlen("Lifetime Dataflow");
  v3 = sub_224A990("Lifetime Dataflow", v2, 0, 0);
  v4 = *a1;
  v348 = v3;
  v5 = sub_9B7180(a1[1]);
  v6 = *(_DWORD *)(v4 + 24);
  v7 = (void *)v5;
  s = v473;
  v8 = (unsigned int)(v6 + 63) >> 6;
  v472 = 0x600000000LL;
  if ( v8 > 6 )
  {
    sub_2237220(&s, v473, v8, 8);
    memset(s, 0, 8LL * v8);
    LODWORD(v472) = (unsigned int)(v6 + 63) >> 6;
  }
  else
  {
    if ( v8 )
    {
      v178 = 0;
      do
      {
        v179 = v178;
        v178 += 8;
        *(_QWORD *)&v473[v179] = 0;
      }
      while ( v178 < 8 * v8 );
    }
    LODWORD(v472) = (unsigned int)(v6 + 63) >> 6;
  }
  v474 = v6;
  v478 = v7;
  v476 = 0x1400000000LL;
  v9 = (__int64 *)*a1;
  v475 = v477;
  v10 = *v9;
  v465 = nullptr;
  v442 = v10;
  v347 = a1 + 26;
  v11 = (void **)sub_9B85B0((__int64)(a1 + 26), &v442);
  v12 = v465;
  v465 = nullptr;
  v468 = *v11;
  *v11 = v12;
  sub_9B8400((_DWORD **)&v468);
  sub_9B8400((_DWORD **)&v465);
  i = (__int64 *)v442;
  if ( v442 )
  {
    v15 = *(_DWORD *)(v442 + 48);
    v16 = (__int64 *)((char *)s + 8 * (v15 >> 6));
    v17 = v15 & 0x3F;
    v18 = (unsigned int)v476;
    v19 = *v16;
    if ( _bittest64(&v19, v17) )
      goto LABEL_6;
    v174 = v19 | (1LL << v17);
    v175 = (unsigned int)v476 + 1LL;
    *v16 = v174;
    if ( v18 + 1 > (unsigned __int64)HIDWORD(v476) )
    {
      sub_2237220(&v475, v477, v175, 8);
      v18 = (unsigned int)v476;
    }
    *((_QWORD *)v475 + v18) = i;
    LODWORD(v476) = v476 + 1;
    v176 = 8LL * (unsigned int)v476;
    v177 = *(_QWORD *)((char *)v475 + v176 - 8);
    v468 = v478;
    sub_9B9BE0((__int64)v475, (v176 >> 3) - 1, 0, v177, (__int64)&v468);
  }
  LODWORD(v18) = v476;
LABEL_6:
  if ( (_DWORD)v18 )
  {
    while ( 1 )
    {
      v20 = v475;
      v21 = 8LL * (unsigned int)v18;
      v22 = *(_QWORD *)v475;
      if ( v21 != 8 )
      {
        v158 = (char *)v475 + v21;
        v159 = (__int64)v478;
        v160 = *((_QWORD *)v158 - 1);
        *((_QWORD *)v158 - 1) = v22;
        sub_9BFAA0((__int64)v20, 0, (v158 - 8 - v20) >> 3, v160, v159);
        LODWORD(v18) = v476;
      }
      LODWORD(v476) = v18 - 1;
      v23 = *((_DWORD *)v1 + 56);
      *((_QWORD *)s + (*(_DWORD *)(v22 + 48) >> 6)) &= ~(1LL << *(_DWORD *)(v22 + 48));
      v24 = v1[26];
      v443 = v22;
      if ( !v23 )
        break;
      v25 = v23 - 1;
      v26 = v25 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      v27 = (__int64 *)(v24 + 16LL * v26);
      v28 = *v27;
      if ( v22 != *v27 )
      {
        v148 = 1;
        if ( v28 == -4096 )
          break;
        while ( 1 )
        {
          v149 = v148 + 1;
          v26 = v25 & (v148 + v26);
          v27 = (__int64 *)(v24 + 16LL * v26);
          v150 = *v27;
          if ( v22 == *v27 )
            break;
          v148 = v149;
          if ( v150 == -4096 )
            goto LABEL_292;
        }
      }
      v29 = (_DWORD *)v27[1];
      v444 = v29;
      if ( v29 )
      {
        ++v29[17];
        v29[17] += 2;
        v446 = v29;
        v445 = (__int64 *)v29;
        goto LABEL_13;
      }
      v446 = nullptr;
LABEL_293:
      v445 = nullptr;
LABEL_13:
      v30 = v1[24];
      v31 = *(_QWORD *)(v30 + 192);
      v32 = *(unsigned int *)(v30 + 208);
      if ( !(_DWORD)v32 )
        goto LABEL_46;
      v33 = (unsigned int)(v32 - 1);
      v34 = v33 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      v35 = v31 + 72LL * v34;
      v36 = *(_QWORD *)v35;
      if ( v22 != *(_QWORD *)v35 )
      {
        v188 = 1;
        if ( v36 == -4096 )
          goto LABEL_46;
        while ( 1 )
        {
          v13 = (unsigned int)(v188 + 1);
          v34 = v33 & (v188 + v34);
          v35 = v31 + 72LL * v34;
          v36 = *(_QWORD *)v35;
          if ( v22 == *(_QWORD *)v35 )
            break;
          v188 = v13;
          if ( v36 == -4096 )
            goto LABEL_46;
        }
      }
      if ( v35 != v31 + 72 * v32 )
      {
        v37 = *(__int64 ***)(v35 + 8);
        v289 = &v37[*(unsigned int *)(v35 + 16)];
        if ( v289 != v37 )
        {
          v290 = v1;
          v38 = *(_QWORD **)(v35 + 8);
          while ( 1 )
          {
            v39 = *v38;
            v1 = v445;
            v40 = *(_BYTE *)(*v38 + 8LL);
            if ( v445 )
              break;
            if ( v40 != 1 )
            {
              if ( !v40 )
              {
                v457[0] = nullptr;
                goto LABEL_198;
              }
              if ( v40 == 2 )
                goto LABEL_22;
            }
LABEL_44:
            if ( v289 == ++v38 )
            {
              v1 = v290;
              goto LABEL_46;
            }
          }
          v41 = *((unsigned int *)v445 + 17);
          *((_DWORD *)v445 + 17) = v41 + 1;
          if ( v40 == 1 )
          {
LABEL_41:
            if ( v1 )
            {
              v50 = (*((_DWORD *)v1 + 17))-- == 1;
              if ( v50 )
              {
                v33 = (__int64)v1;
                sub_9B7D80(v1);
              }
            }
            goto LABEL_44;
          }
          if ( v40 )
          {
            if ( v40 != 2 )
            {
              if ( v40 != 3 )
              {
LABEL_143:
                v61 = v33 == (_QWORD)v38;
                goto LABEL_61;
              }
              goto LABEL_41;
            }
LABEL_22:
            v459 = v1;
            v42 = v290[25];
            if ( v1 )
            {
              v43 = *((_DWORD *)v1 + 17) + 1;
              v44 = v1;
              *((_DWORD *)v1 + 17) = v43;
              v45 = *(_DWORD *)(v39 + 12);
              v46 = *(_DWORD *)(v39 + 16);
              while ( *((_DWORD *)v44 + 12) != v46 )
              {
                if ( *((_DWORD *)v44 + 12) > v46 )
                {
                  v44 = (__int64 *)v44[1];
                  if ( !v44 )
                    goto LABEL_28;
                }
                else
                {
                  v44 = (__int64 *)v44[2];
                  if ( !v44 )
                  {
LABEL_28:
                    v462 = nullptr;
                    goto LABEL_31;
                  }
                }
              }
              v47 = (_DWORD *)v44[7];
              v462 = v47;
              if ( v47 )
              {
                ++v47[13];
                v43 = *((_DWORD *)v1 + 17);
              }
LABEL_31:
              v468 = v1;
              *((_DWORD *)v1 + 17) = v43 + 1;
            }
            else
            {
              v45 = *(_DWORD *)(v39 + 12);
              v462 = nullptr;
              v468 = nullptr;
            }
            sub_9BAC20((__int64 *)&v465, v42, (__int64 *)&v468, v45, (_DWORD **)&v462);
            v48 = (__int64 *)v465;
            if ( v465 )
              ++*((_DWORD *)v465 + 17);
            sub_9B8400((_DWORD **)&v465);
            sub_9B8400((_DWORD **)&v468);
            v49 = v462;
            if ( v462 )
            {
              v50 = (*((_DWORD *)v462 + 13))-- == 1;
              if ( v50 )
                sub_9B73D0(v49);
            }
            sub_9B8400((_DWORD **)&v459);
            goto LABEL_38;
          }
          v457[0] = v1;
          *((_DWORD *)v1 + 17) = v41 + 2;
LABEL_198:
          v114 = v290[25];
          v115 = (__int64 *)(v114 + 88);
          LODWORD(v291) = *(_DWORD *)(v39 + 16);
          LODWORD(ptr) = *(_DWORD *)(v39 + 12);
          v116 = sub_9B8BD0((_QWORD *)(v114 + 88), 0, (__int32 *)&ptr, 0);
          for ( i = (__int64 *)v116;
                v116 && (*(_BYTE *)(v116 + 43) & 0x10) != 0;
                v116 = *(_QWORD *)(sub_9B5690(v114 + 88, *(_QWORD *)(v116 + 8)) + 16) )
          {
            *(_BYTE *)(v116 + 43) &= ~0x10u;
          }
          v117 = *(_QWORD *)(v114 + 128);
          v118 = *(_QWORD *)(v114 + 120);
          v119 = (v117 - v118) >> 3;
          if ( (_DWORD)v119 )
          {
            v292 = i;
            v120 = 0;
            v121 = v114;
            v122 = 8LL * (unsigned int)(v119 - 1) + 8;
            do
            {
              while ( 1 )
              {
                v123 = *(_QWORD *)(v118 + v120);
                if ( (*(_BYTE *)(v123 + 43) & 0x10) != 0 && !*(_DWORD *)(v123 + 52) )
                  break;
                v120 += 8;
                if ( v120 == v122 )
                  goto LABEL_208;
              }
              sub_9B73D0((void *)v123);
              v120 += 8;
              v118 = *(_QWORD *)(v121 + 120);
            }
            while ( v120 != v122 );
LABEL_208:
            v114 = v121;
            i = v292;
            v117 = *(_QWORD *)(v114 + 128);
          }
          if ( v118 != v117 )
            *(_QWORD *)(v114 + 128) = v118;
          if ( !*(_BYTE *)(v114 + 168) )
          {
            v465 = i;
            if ( !i )
            {
LABEL_214:
              v468 = v457[0];
              if ( v457[0] )
                ++v457[0][17];
              sub_9BAC20((__int64 *)&v462, v114, (__int64 *)&v468, (unsigned int)v291, (_DWORD **)&v465);
              v48 = (__int64 *)v462;
              if ( v462 )
                ++*((_DWORD *)v462 + 17);
              sub_9B8400((_DWORD **)&v462);
              sub_9B8400((_DWORD **)&v468);
              v124 = v465;
              if ( v465 )
              {
                v50 = (*((_DWORD *)v465 + 13))-- == 1;
                if ( v50 )
                  sub_9B73D0(v124);
              }
              sub_9B8400(v457);
LABEL_38:
              v33 = (__int64)v445;
              v445 = v48;
              if ( v33 )
              {
                v50 = (*(_DWORD *)(v33 + 68))-- == 1;
                if ( v50 )
                  sub_9B7D80((void *)v33);
              }
              goto LABEL_41;
            }
LABEL_213:
            ++*((_DWORD *)i + 13);
            goto LABEL_214;
          }
          if ( !i )
          {
            v465 = nullptr;
            goto LABEL_214;
          }
          v138 = *((_BYTE *)i + 43);
          if ( (v138 & 0x40) != 0 )
          {
LABEL_269:
            v465 = i;
            goto LABEL_213;
          }
          if ( (v138 & 0x20) != 0 )
          {
            v139 = *((_DWORD *)i + 12);
          }
          else
          {
            v151 = i[1];
            v292 = (__int64 *)i[2];
            if ( v151 )
            {
              if ( (*(_BYTE *)(v151 + 43) & 0x20) != 0 )
              {
                v294 = *(_DWORD *)(v151 + 48);
              }
              else
              {
                v182 = *(_QWORD *)(v151 + 8);
                v296 = 0;
                v307 = *(_QWORD *)(v151 + 16);
                if ( v182 )
                {
                  if ( (*(_BYTE *)(v182 + 43) & 0x20) != 0 )
                  {
                    v296 = *(_DWORD *)(v182 + 48);
                  }
                  else
                  {
                    v196 = *(_QWORD *)(v182 + 8);
                    v197 = 0;
                    v318 = *(_QWORD *)(v182 + 16);
                    if ( v196 )
                    {
                      if ( (*(_BYTE *)(v196 + 43) & 0x20) != 0 )
                      {
                        v197 = *(_DWORD *)(v196 + 48);
                      }
                      else
                      {
                        v233 = *(_QWORD *)(v196 + 8);
                        v234 = *(_QWORD *)(v196 + 16);
                        v235 = 0;
                        if ( v233 )
                        {
                          if ( (*(_BYTE *)(v233 + 43) & 0x20) != 0 )
                          {
                            v235 = *(_DWORD *)(v233 + 48);
                          }
                          else
                          {
                            v395 = *(_QWORD *)(v196 + 16);
                            v370 = *(_QWORD *)(v182 + 8);
                            v344 = i[1];
                            v304 = *(_QWORD *)(v196 + 8);
                            v235 = sub_9B72F0(*(_QWORD *)(v233 + 8), *(_QWORD *)(v233 + 16), (_DWORD *)(v233 + 44));
                            *(_BYTE *)(v304 + 43) |= 0x20u;
                            v234 = v395;
                            v196 = v370;
                            v151 = v344;
                            *(_DWORD *)(v304 + 48) = v235;
                          }
                        }
                        v389 = v235;
                        v362 = v234;
                        v342 = v151;
                        v468 = v470;
                        v469 = 0x2000000000LL;
                        v300 = v196;
                        sub_9B7040((__int64)&v468, *(_DWORD *)(v196 + 44));
                        v236 = sub_985B10(v468, (__int64)v468 + 4 * (unsigned int)v469);
                        v237 = v362;
                        v238 = v300;
                        v151 = v342;
                        v197 = v389 + v236;
                        if ( v362 )
                        {
                          if ( (*(_BYTE *)(v362 + 43) & 0x20) != 0 )
                          {
                            v239 = *(_DWORD *)(v362 + 48);
                          }
                          else
                          {
                            v261 = *(_QWORD *)(v362 + 16);
                            v262 = *(_QWORD *)(v362 + 8);
                            v263 = (_DWORD *)(v362 + 44);
                            v396 = v389 + v236;
                            v371 = v300;
                            v305 = v237;
                            v239 = sub_9B72F0(v262, v261, v263);
                            *(_BYTE *)(v305 + 43) |= 0x20u;
                            v197 = v396;
                            v238 = v371;
                            v151 = v342;
                            *(_DWORD *)(v305 + 48) = v239;
                          }
                          v197 += v239;
                        }
                        if ( v468 != v470 )
                        {
                          v363 = v197;
                          v343 = v238;
                          v301 = v151;
                          free(v468);
                          v197 = v363;
                          v238 = v343;
                          v151 = v301;
                        }
                        *(_DWORD *)(v238 + 48) = v197;
                        *(_BYTE *)(v238 + 43) |= 0x20u;
                      }
                    }
                    v299 = v197;
                    v337 = v151;
                    v465 = v467;
                    v466 = 0x2000000000LL;
                    sub_9B7040((__int64)&v465, *(_DWORD *)(v182 + 44));
                    v198 = sub_985B10(v465, (__int64)v465 + 4 * (unsigned int)v466);
                    v151 = v337;
                    v296 = v299 + v198;
                    if ( v318 )
                    {
                      if ( (*(_BYTE *)(v318 + 43) & 0x20) != 0 )
                      {
                        v199 = *(_DWORD *)(v318 + 48);
                      }
                      else
                      {
                        v204 = *(_QWORD *)(v318 + 8);
                        v205 = *(_QWORD *)(v318 + 16);
                        v206 = 0;
                        if ( v204 )
                        {
                          if ( (*(_BYTE *)(v204 + 43) & 0x20) != 0 )
                          {
                            v206 = *(_DWORD *)(v204 + 48);
                          }
                          else
                          {
                            v400 = *(_QWORD *)(v318 + 16);
                            v374 = v337;
                            v345 = *(_QWORD *)(v318 + 8);
                            v206 = sub_9B72F0(*(_QWORD *)(v204 + 8), *(_QWORD *)(v204 + 16), (_DWORD *)(v204 + 44));
                            *(_BYTE *)(v345 + 43) |= 0x20u;
                            v205 = v400;
                            *(_DWORD *)(v345 + 48) = v206;
                            v151 = v374;
                          }
                        }
                        v380 = v206;
                        v353 = v205;
                        v340 = v151;
                        v468 = v470;
                        v469 = 0x2000000000LL;
                        sub_9B7040((__int64)&v468, *(_DWORD *)(v318 + 44));
                        v207 = sub_985B10(v468, (__int64)v468 + 4 * (unsigned int)v469);
                        v208 = v353;
                        v151 = v340;
                        v199 = v207 + v380;
                        if ( v353 )
                        {
                          if ( (*(_BYTE *)(v353 + 43) & 0x20) != 0 )
                          {
                            v209 = *(_DWORD *)(v353 + 48);
                          }
                          else
                          {
                            v270 = *(_QWORD *)(v353 + 16);
                            v271 = *(_QWORD *)(v353 + 8);
                            v272 = (_DWORD *)(v353 + 44);
                            v401 = v207 + v380;
                            v375 = v340;
                            v346 = v208;
                            v209 = sub_9B72F0(v271, v270, v272);
                            *(_BYTE *)(v346 + 43) |= 0x20u;
                            v199 = v401;
                            *(_DWORD *)(v346 + 48) = v209;
                            v151 = v375;
                          }
                          v199 += v209;
                        }
                        if ( v468 != v470 )
                        {
                          v354 = v199;
                          v341 = v151;
                          free(v468);
                          v199 = v354;
                          v151 = v341;
                        }
                        *(_DWORD *)(v318 + 48) = v199;
                        *(_BYTE *)(v318 + 43) |= 0x20u;
                      }
                      v296 += v199;
                    }
                    if ( v465 != v467 )
                    {
                      v319 = v151;
                      free(v465);
                      v151 = v319;
                    }
                    *(_BYTE *)(v182 + 43) |= 0x20u;
                    *(_DWORD *)(v182 + 48) = v296;
                  }
                }
                v312 = v151;
                v462 = v464;
                v463 = 0x2000000000LL;
                sub_9B7040((__int64)&v462, *(_DWORD *)(v151 + 44));
                v183 = sub_985B10(v462, (__int64)v462 + 4 * (unsigned int)v463);
                v184 = v312;
                v294 = v296 + v183;
                if ( v307 )
                {
                  if ( (*(_BYTE *)(v307 + 43) & 0x20) != 0 )
                  {
                    v313 = *(_DWORD *)(v307 + 48);
                  }
                  else
                  {
                    v200 = *(_QWORD *)(v307 + 8);
                    v201 = 0;
                    v338 = *(_QWORD *)(v307 + 16);
                    if ( v200 )
                    {
                      if ( (*(_BYTE *)(v200 + 43) & 0x20) != 0 )
                      {
                        v201 = *(_DWORD *)(v200 + 48);
                      }
                      else
                      {
                        v244 = *(_QWORD *)(v200 + 8);
                        v245 = *(_QWORD *)(v200 + 16);
                        v246 = 0;
                        if ( v244 )
                        {
                          if ( (*(_BYTE *)(v244 + 43) & 0x20) != 0 )
                          {
                            v246 = *(_DWORD *)(v244 + 48);
                          }
                          else
                          {
                            v411 = *(_QWORD *)(v200 + 16);
                            v392 = *(_QWORD *)(v307 + 8);
                            v368 = v312;
                            v325 = *(_QWORD *)(v200 + 8);
                            v246 = sub_9B72F0(*(_QWORD *)(v244 + 8), *(_QWORD *)(v244 + 16), (_DWORD *)(v244 + 44));
                            *(_BYTE *)(v325 + 43) |= 0x20u;
                            v245 = v411;
                            *(_DWORD *)(v325 + 48) = v246;
                            v200 = v392;
                            v184 = v368;
                          }
                        }
                        v409 = v246;
                        v390 = v245;
                        v366 = v184;
                        v468 = v470;
                        v469 = 0x2000000000LL;
                        v323 = v200;
                        sub_9B7040((__int64)&v468, *(_DWORD *)(v200 + 44));
                        v247 = sub_985B10(v468, (__int64)v468 + 4 * (unsigned int)v469);
                        v248 = v323;
                        v184 = v366;
                        v249 = v390;
                        v201 = v409 + v247;
                        if ( v390 )
                        {
                          if ( (*(_BYTE *)(v390 + 43) & 0x20) != 0 )
                          {
                            v250 = *(_DWORD *)(v390 + 48);
                          }
                          else
                          {
                            v251 = *(_QWORD *)(v390 + 16);
                            v252 = *(_QWORD *)(v390 + 8);
                            v253 = (_DWORD *)(v390 + 44);
                            v412 = v409 + v247;
                            v393 = v323;
                            v326 = v249;
                            v250 = sub_9B72F0(v252, v251, v253);
                            *(_BYTE *)(v326 + 43) |= 0x20u;
                            v201 = v412;
                            *(_DWORD *)(v326 + 48) = v250;
                            v248 = v393;
                            v184 = v366;
                          }
                          v201 += v250;
                        }
                        if ( v468 != v470 )
                        {
                          v391 = v201;
                          v367 = v248;
                          v324 = v184;
                          free(v468);
                          v248 = v367;
                          v184 = v324;
                          v201 = v391;
                        }
                        *(_DWORD *)(v248 + 48) = v201;
                        *(_BYTE *)(v248 + 43) |= 0x20u;
                      }
                    }
                    v320 = v201;
                    v352 = v184;
                    v465 = v467;
                    v466 = 0x2000000000LL;
                    sub_9B7040((__int64)&v465, *(_DWORD *)(v307 + 44));
                    v202 = sub_985B10(v465, (__int64)v465 + 4 * (unsigned int)v466);
                    v184 = v352;
                    v313 = v320 + v202;
                    if ( v338 )
                    {
                      if ( (*(_BYTE *)(v338 + 43) & 0x20) != 0 )
                      {
                        v203 = *(_DWORD *)(v338 + 48);
                      }
                      else
                      {
                        v220 = *(_QWORD *)(v338 + 8);
                        v221 = *(_QWORD *)(v338 + 16);
                        v222 = 0;
                        if ( v220 )
                        {
                          if ( (*(_BYTE *)(v220 + 43) & 0x20) != 0 )
                          {
                            v222 = *(_DWORD *)(v220 + 48);
                          }
                          else
                          {
                            v415 = *(_QWORD *)(v338 + 16);
                            v394 = v352;
                            v369 = *(_QWORD *)(v338 + 8);
                            v222 = sub_9B72F0(*(_QWORD *)(v220 + 8), *(_QWORD *)(v220 + 16), (_DWORD *)(v220 + 44));
                            *(_BYTE *)(v369 + 43) |= 0x20u;
                            v221 = v415;
                            *(_DWORD *)(v369 + 48) = v222;
                            v184 = v394;
                          }
                        }
                        v406 = v222;
                        v385 = v221;
                        v358 = v184;
                        v468 = v470;
                        v469 = 0x2000000000LL;
                        sub_9B7040((__int64)&v468, *(_DWORD *)(v338 + 44));
                        v223 = sub_985B10(v468, (__int64)v468 + 4 * (unsigned int)v469);
                        v184 = v358;
                        v224 = v385;
                        v203 = v223 + v406;
                        if ( v385 )
                        {
                          if ( (*(_BYTE *)(v385 + 43) & 0x20) != 0 )
                          {
                            v225 = *(_DWORD *)(v385 + 48);
                          }
                          else
                          {
                            v267 = *(_QWORD *)(v385 + 16);
                            v268 = *(_QWORD *)(v385 + 8);
                            v269 = (_DWORD *)(v385 + 44);
                            v418 = v223 + v406;
                            v399 = v358;
                            v373 = v224;
                            v225 = sub_9B72F0(v268, v267, v269);
                            *(_BYTE *)(v373 + 43) |= 0x20u;
                            v203 = v418;
                            *(_DWORD *)(v373 + 48) = v225;
                            v184 = v399;
                          }
                          v203 += v225;
                        }
                        if ( v468 != v470 )
                        {
                          v386 = v203;
                          v359 = v184;
                          free(v468);
                          v203 = v386;
                          v184 = v359;
                        }
                        *(_DWORD *)(v338 + 48) = v203;
                        *(_BYTE *)(v338 + 43) |= 0x20u;
                      }
                      v313 += v203;
                    }
                    if ( v465 != v467 )
                    {
                      v339 = v184;
                      free(v465);
                      v184 = v339;
                    }
                    *(_BYTE *)(v307 + 43) |= 0x20u;
                    *(_DWORD *)(v307 + 48) = v313;
                  }
                  v294 += v313;
                }
                if ( v462 != v464 )
                {
                  v308 = v184;
                  free(v462);
                  v184 = v308;
                }
                *(_BYTE *)(v184 + 43) |= 0x20u;
                *(_DWORD *)(v184 + 48) = v294;
              }
            }
            else
            {
              v294 = 0;
            }
            LODWORD(v461[0]) = *((_DWORD *)i + 11);
            v460 = 0x2000000001LL;
            v459 = v461;
            v139 = sub_985B10(v461, (__int64)v461 + 4) + v294;
            if ( v292 )
            {
              if ( (*((_BYTE *)v292 + 43) & 0x20) != 0 )
              {
                v295 = *((_DWORD *)v292 + 12);
              }
              else
              {
                v185 = v292[1];
                v297 = 0;
                v309 = v292[2];
                v314 = v185;
                if ( v185 )
                {
                  if ( (*(_BYTE *)(v185 + 43) & 0x20) != 0 )
                  {
                    v297 = *(_DWORD *)(v185 + 48);
                  }
                  else
                  {
                    v189 = *(_QWORD *)(v185 + 16);
                    v190 = *(_QWORD *)(v185 + 8);
                    v298 = 0;
                    v333 = v189;
                    v379 = v190;
                    if ( v190 )
                    {
                      if ( (*(_BYTE *)(v190 + 43) & 0x20) != 0 )
                      {
                        v298 = *(_DWORD *)(v190 + 48);
                      }
                      else
                      {
                        v240 = *(_QWORD *)(v190 + 8);
                        v241 = 0;
                        v364 = *(_QWORD *)(v190 + 16);
                        if ( v240 )
                        {
                          if ( (*(_BYTE *)(v240 + 43) & 0x20) != 0 )
                          {
                            v241 = *(_DWORD *)(v240 + 48);
                          }
                          else
                          {
                            v410 = v139;
                            v303 = *(_QWORD *)(v190 + 8);
                            v241 = sub_9B72F0(*(_QWORD *)(v240 + 8), *(_QWORD *)(v240 + 16), (_DWORD *)(v240 + 44));
                            *(_BYTE *)(v303 + 43) |= 0x20u;
                            v139 = v410;
                            *(_DWORD *)(v303 + 48) = v241;
                          }
                        }
                        v302 = v241;
                        v408 = v139;
                        v465 = v467;
                        v466 = 0x2000000000LL;
                        sub_9B7040((__int64)&v465, *(_DWORD *)(v379 + 44));
                        v242 = sub_985B10(v465, (__int64)v465 + 4 * (unsigned int)v466);
                        v139 = v408;
                        v298 = v302 + v242;
                        if ( v364 )
                        {
                          if ( (*(_BYTE *)(v364 + 43) & 0x20) != 0 )
                          {
                            v243 = *(_DWORD *)(v364 + 48);
                          }
                          else
                          {
                            v254 = *(_QWORD *)(v364 + 8);
                            v255 = *(_QWORD *)(v364 + 16);
                            v256 = 0;
                            if ( v254 )
                            {
                              if ( (*(_BYTE *)(v254 + 43) & 0x20) != 0 )
                              {
                                v256 = *(_DWORD *)(v254 + 48);
                              }
                              else
                              {
                                v438 = *(_QWORD *)(v364 + 16);
                                v432 = v408;
                                v424 = *(_QWORD *)(v364 + 8);
                                v256 = sub_9B72F0(*(_QWORD *)(v254 + 8), *(_QWORD *)(v254 + 16), (_DWORD *)(v254 + 44));
                                *(_BYTE *)(v424 + 43) |= 0x20u;
                                v255 = v438;
                                *(_DWORD *)(v424 + 48) = v256;
                                v139 = v432;
                              }
                            }
                            v436 = v256;
                            v428 = v255;
                            v257 = *(_DWORD *)(v364 + 44);
                            v413 = v139;
                            v468 = v470;
                            LODWORD(v470[0]) = v257;
                            v469 = 0x2000000001LL;
                            v258 = sub_985B10(v470, (__int64)v470 + 4);
                            v259 = v428;
                            v139 = v413;
                            v243 = v258 + v436;
                            if ( v428 )
                            {
                              if ( (*(_BYTE *)(v428 + 43) & 0x20) != 0 )
                              {
                                v260 = *(_DWORD *)(v428 + 48);
                              }
                              else
                              {
                                v283 = *(_QWORD *)(v428 + 16);
                                v284 = *(_QWORD *)(v428 + 8);
                                v285 = (_DWORD *)(v428 + 44);
                                v439 = v258 + v436;
                                v433 = v413;
                                v425 = v259;
                                v260 = sub_9B72F0(v284, v283, v285);
                                *(_BYTE *)(v425 + 43) |= 0x20u;
                                v243 = v439;
                                *(_DWORD *)(v425 + 48) = v260;
                                v139 = v433;
                              }
                              v243 += v260;
                            }
                            if ( v468 != v470 )
                            {
                              v429 = v243;
                              v414 = v139;
                              free(v468);
                              v243 = v429;
                              v139 = v414;
                            }
                            *(_DWORD *)(v364 + 48) = v243;
                            *(_BYTE *)(v364 + 43) |= 0x20u;
                          }
                          v298 += v243;
                        }
                        if ( v465 != v467 )
                        {
                          v365 = v139;
                          free(v465);
                          v139 = v365;
                        }
                        *(_BYTE *)(v379 + 43) |= 0x20u;
                        *(_DWORD *)(v379 + 48) = v298;
                      }
                    }
                    v349 = v139;
                    v462 = v464;
                    v463 = 0x2000000000LL;
                    sub_9B7040((__int64)&v462, *(_DWORD *)(v314 + 44));
                    v191 = sub_985B10(v462, (__int64)v462 + 4 * (unsigned int)v463);
                    v139 = v349;
                    v297 = v298 + v191;
                    if ( v333 )
                    {
                      if ( (*(_BYTE *)(v333 + 43) & 0x20) != 0 )
                      {
                        v350 = *(_DWORD *)(v333 + 48);
                      }
                      else
                      {
                        v216 = *(_QWORD *)(v333 + 8);
                        v217 = 0;
                        v383 = *(_QWORD *)(v333 + 16);
                        if ( v216 )
                        {
                          if ( (*(_BYTE *)(v216 + 43) & 0x20) != 0 )
                          {
                            v217 = *(_DWORD *)(v216 + 48);
                          }
                          else
                          {
                            v421 = v349;
                            v378 = *(_QWORD *)(v333 + 8);
                            v217 = sub_9B72F0(*(_QWORD *)(v216 + 8), *(_QWORD *)(v216 + 16), (_DWORD *)(v216 + 44));
                            *(_BYTE *)(v378 + 43) |= 0x20u;
                            v139 = v421;
                            *(_DWORD *)(v378 + 48) = v217;
                          }
                        }
                        v357 = v217;
                        v405 = v139;
                        v465 = v467;
                        v466 = 0x2000000000LL;
                        sub_9B7040((__int64)&v465, *(_DWORD *)(v333 + 44));
                        v218 = sub_985B10(v465, (__int64)v465 + 4 * (unsigned int)v466);
                        v139 = v405;
                        v350 = v357 + v218;
                        if ( v383 )
                        {
                          if ( (*(_BYTE *)(v383 + 43) & 0x20) != 0 )
                          {
                            v219 = *(_DWORD *)(v383 + 48);
                          }
                          else
                          {
                            v276 = *(_QWORD *)(v383 + 8);
                            v277 = *(_QWORD *)(v383 + 16);
                            v278 = 0;
                            if ( v276 )
                            {
                              if ( (*(_BYTE *)(v276 + 43) & 0x20) != 0 )
                              {
                                v278 = *(_DWORD *)(v276 + 48);
                              }
                              else
                              {
                                v440 = *(_QWORD *)(v383 + 16);
                                v434 = v405;
                                v426 = *(_QWORD *)(v383 + 8);
                                v278 = sub_9B72F0(*(_QWORD *)(v276 + 8), *(_QWORD *)(v276 + 16), (_DWORD *)(v276 + 44));
                                *(_BYTE *)(v426 + 43) |= 0x20u;
                                v277 = v440;
                                *(_DWORD *)(v426 + 48) = v278;
                                v139 = v434;
                              }
                            }
                            v437 = v278;
                            v430 = v277;
                            v279 = *(_DWORD *)(v383 + 44);
                            v422 = v139;
                            v468 = v470;
                            LODWORD(v470[0]) = v279;
                            v469 = 0x2000000001LL;
                            v280 = sub_985B10(v470, (__int64)v470 + 4);
                            v281 = v430;
                            v139 = v422;
                            v219 = v280 + v437;
                            if ( v430 )
                            {
                              if ( (*(_BYTE *)(v430 + 43) & 0x20) != 0 )
                              {
                                v282 = *(_DWORD *)(v430 + 48);
                              }
                              else
                              {
                                v286 = *(_QWORD *)(v430 + 16);
                                v287 = *(_QWORD *)(v430 + 8);
                                v288 = (_DWORD *)(v430 + 44);
                                v441 = v280 + v437;
                                v435 = v422;
                                v427 = v281;
                                v282 = sub_9B72F0(v287, v286, v288);
                                *(_BYTE *)(v427 + 43) |= 0x20u;
                                v219 = v441;
                                *(_DWORD *)(v427 + 48) = v282;
                                v139 = v435;
                              }
                              v219 += v282;
                            }
                            if ( v468 != v470 )
                            {
                              v431 = v219;
                              v423 = v139;
                              free(v468);
                              v219 = v431;
                              v139 = v423;
                            }
                            *(_DWORD *)(v383 + 48) = v219;
                            *(_BYTE *)(v383 + 43) |= 0x20u;
                          }
                          v350 += v219;
                        }
                        if ( v465 != v467 )
                        {
                          v384 = v139;
                          free(v465);
                          v139 = v384;
                        }
                        *(_BYTE *)(v333 + 43) |= 0x20u;
                        *(_DWORD *)(v333 + 48) = v350;
                      }
                      v297 += v350;
                    }
                    if ( v462 != v464 )
                    {
                      v334 = v139;
                      free(v462);
                      v139 = v334;
                    }
                    *(_BYTE *)(v314 + 43) |= 0x20u;
                    *(_DWORD *)(v314 + 48) = v297;
                  }
                }
                v315 = v139;
                v462 = v464;
                v463 = 0x2000000000LL;
                sub_9B7040((__int64)&v462, *((_DWORD *)v292 + 11));
                v186 = sub_985B10(v462, (__int64)v462 + 4 * (unsigned int)v463);
                v139 = v315;
                v295 = v297 + v186;
                if ( v309 )
                {
                  if ( (*(_BYTE *)(v309 + 43) & 0x20) != 0 )
                  {
                    v316 = *(_DWORD *)(v309 + 48);
                  }
                  else
                  {
                    v192 = *(_QWORD *)(v309 + 8);
                    v193 = 0;
                    v335 = *(_QWORD *)(v309 + 16);
                    if ( v192 )
                    {
                      if ( (*(_BYTE *)(v192 + 43) & 0x20) != 0 )
                      {
                        v193 = *(_DWORD *)(v192 + 48);
                      }
                      else
                      {
                        v226 = *(_QWORD *)(v192 + 8);
                        v227 = *(_QWORD *)(v192 + 16);
                        v228 = 0;
                        if ( v226 )
                        {
                          if ( (*(_BYTE *)(v226 + 43) & 0x20) != 0 )
                          {
                            v228 = *(_DWORD *)(v226 + 48);
                          }
                          else
                          {
                            v372 = v315;
                            v416 = *(_QWORD *)(v192 + 16);
                            v397 = *(_QWORD *)(v309 + 8);
                            v327 = *(_QWORD *)(v192 + 8);
                            v228 = sub_9B72F0(*(_QWORD *)(v226 + 8), *(_QWORD *)(v226 + 16), (_DWORD *)(v226 + 44));
                            *(_BYTE *)(v327 + 43) |= 0x20u;
                            v227 = v416;
                            v192 = v397;
                            v139 = v372;
                            *(_DWORD *)(v327 + 48) = v228;
                          }
                        }
                        v407 = v228;
                        v387 = v227;
                        v360 = v139;
                        v468 = v470;
                        v469 = 0x2000000000LL;
                        v321 = v192;
                        sub_9B7040((__int64)&v468, *(_DWORD *)(v192 + 44));
                        v229 = sub_985B10(v468, (__int64)v468 + 4 * (unsigned int)v469);
                        v230 = v321;
                        v231 = v387;
                        v139 = v360;
                        v193 = v407 + v229;
                        if ( v387 )
                        {
                          if ( (*(_BYTE *)(v387 + 43) & 0x20) != 0 )
                          {
                            v232 = *(_DWORD *)(v387 + 48);
                          }
                          else
                          {
                            v264 = *(_QWORD *)(v387 + 16);
                            v265 = *(_QWORD *)(v387 + 8);
                            v266 = (_DWORD *)(v387 + 44);
                            v417 = v407 + v229;
                            v398 = v321;
                            v328 = v231;
                            v232 = sub_9B72F0(v265, v264, v266);
                            *(_BYTE *)(v328 + 43) |= 0x20u;
                            v193 = v417;
                            v230 = v398;
                            v139 = v360;
                            *(_DWORD *)(v328 + 48) = v232;
                          }
                          v193 += v232;
                        }
                        if ( v468 != v470 )
                        {
                          v388 = v193;
                          v361 = v230;
                          v322 = v139;
                          free(v468);
                          v230 = v361;
                          v139 = v322;
                          v193 = v388;
                        }
                        *(_DWORD *)(v230 + 48) = v193;
                        *(_BYTE *)(v230 + 43) |= 0x20u;
                      }
                    }
                    v317 = v193;
                    v351 = v139;
                    v465 = v467;
                    v466 = 0x2000000000LL;
                    sub_9B7040((__int64)&v465, *(_DWORD *)(v309 + 44));
                    v194 = sub_985B10(v465, (__int64)v465 + 4 * (unsigned int)v466);
                    v139 = v351;
                    v316 = v317 + v194;
                    if ( v335 )
                    {
                      if ( (*(_BYTE *)(v335 + 43) & 0x20) != 0 )
                      {
                        v195 = *(_DWORD *)(v335 + 48);
                      }
                      else
                      {
                        v210 = *(_QWORD *)(v335 + 8);
                        v211 = *(_QWORD *)(v335 + 16);
                        v212 = 0;
                        if ( v210 )
                        {
                          if ( (*(_BYTE *)(v210 + 43) & 0x20) != 0 )
                          {
                            v212 = *(_DWORD *)(v210 + 48);
                          }
                          else
                          {
                            v420 = *(_QWORD *)(v335 + 16);
                            v403 = v351;
                            v377 = *(_QWORD *)(v335 + 8);
                            v212 = sub_9B72F0(*(_QWORD *)(v210 + 8), *(_QWORD *)(v210 + 16), (_DWORD *)(v210 + 44));
                            *(_BYTE *)(v377 + 43) |= 0x20u;
                            v211 = v420;
                            *(_DWORD *)(v377 + 48) = v212;
                            v139 = v403;
                          }
                        }
                        v404 = v212;
                        v381 = v211;
                        v355 = v139;
                        v468 = v470;
                        v469 = 0x2000000000LL;
                        sub_9B7040((__int64)&v468, *(_DWORD *)(v335 + 44));
                        v213 = sub_985B10(v468, (__int64)v468 + 4 * (unsigned int)v469);
                        v139 = v355;
                        v214 = v381;
                        v195 = v213 + v404;
                        if ( v381 )
                        {
                          if ( (*(_BYTE *)(v381 + 43) & 0x20) != 0 )
                          {
                            v215 = *(_DWORD *)(v381 + 48);
                          }
                          else
                          {
                            v273 = *(_QWORD *)(v381 + 16);
                            v274 = *(_QWORD *)(v381 + 8);
                            v275 = (_DWORD *)(v381 + 44);
                            v419 = v213 + v404;
                            v402 = v355;
                            v376 = v214;
                            v215 = sub_9B72F0(v274, v273, v275);
                            *(_BYTE *)(v376 + 43) |= 0x20u;
                            v195 = v419;
                            *(_DWORD *)(v376 + 48) = v215;
                            v139 = v402;
                          }
                          v195 += v215;
                        }
                        if ( v468 != v470 )
                        {
                          v382 = v195;
                          v356 = v139;
                          free(v468);
                          v195 = v382;
                          v139 = v356;
                        }
                        *(_DWORD *)(v335 + 48) = v195;
                        *(_BYTE *)(v335 + 43) |= 0x20u;
                      }
                      v316 += v195;
                    }
                    if ( v465 != v467 )
                    {
                      v336 = v139;
                      free(v465);
                      v139 = v336;
                    }
                    *(_BYTE *)(v309 + 43) |= 0x20u;
                    *(_DWORD *)(v309 + 48) = v316;
                  }
                  v295 += v316;
                }
                if ( v462 != v464 )
                {
                  v310 = v139;
                  free(v462);
                  v139 = v310;
                }
                *((_BYTE *)v292 + 43) |= 0x20u;
                *((_DWORD *)v292 + 12) = v295;
              }
              v139 += v295;
            }
            if ( v459 != v461 )
            {
              LODWORD(v292) = v139;
              free(v459);
              v139 = (int)v292;
            }
            *((_DWORD *)i + 12) = v139;
            *((_BYTE *)i + 43) |= 0x20u;
          }
          LODWORD(v462) = v139 & 0xFFFFFFFD;
          if ( (unsigned __int8)sub_9B5730(v115, (int *)&v462, &v465) )
          {
            v331 = v465;
            v293 = (__int64 *)((char *)v465 + 8);
            v292 = *((__int64 **)v465 + 1);
            if ( v292 )
            {
              v306 = v1;
LABEL_256:
              v460 = 0x1400000000LL;
              v459 = v461;
              sub_9B9C90((__int64)&v459, (__int64)v292);
              sub_9B6800((__int64 *)&v459);
              v462 = v464;
              v465 = v467;
              v463 = 0x1400000000LL;
              v466 = 0x1400000000LL;
              sub_9B9C90((__int64)&v465, (__int64)i);
              sub_9B6800((__int64 *)&v465);
              v469 = 0x1400000000LL;
              v468 = v470;
              while ( 1 )
              {
                v141 = sub_9B9CE0((__int64)&v465, (__int64)&v468);
                v142 = v465;
                if ( v141 )
                  break;
                if ( sub_9B9CE0((__int64)&v459, (__int64)&v462)
                  || *(_DWORD *)((v142[(unsigned int)v466 - 1] & 0xFFFFFFFFFFFFFFFCLL) + 44) != *(_DWORD *)((*((_QWORD *)v459 + (unsigned int)v460 - 1) & 0xFFFFFFFFFFFFFFFCLL) + 44) )
                {
                  if ( v142 != v467 )
                    free(v142);
LABEL_273:
                  if ( v459 != v461 )
                    free(v459);
                  v292 = (__int64 *)v292[4];
                  if ( !v292 )
                  {
                    v1 = v306;
                    *(_QWORD *)(v331[1] + 24LL) = i;
                    i[4] = v331[1];
                    v143 = (__int64 **)v293;
                    goto LABEL_302;
                  }
                  goto LABEL_256;
                }
                sub_9B6800((__int64 *)&v465);
                sub_9B6800((__int64 *)&v459);
              }
              if ( v465 != v467 )
                free(v465);
              if ( !sub_9B9CE0((__int64)&v459, (__int64)&v462) )
                goto LABEL_273;
              v1 = v306;
              if ( !*((_DWORD *)i + 13) )
                sub_9B73D0(i);
              if ( v459 != v461 )
                free(v459);
              i = v292;
              goto LABEL_269;
            }
            v143 = (__int64 **)((char *)v465 + 8);
LABEL_302:
            *v143 = i;
            *((_BYTE *)i + 43) |= 0x40u;
            v465 = i;
            goto LABEL_213;
          }
          v152 = *(_DWORD *)(v114 + 104);
          v153 = v465;
          v154 = *(_DWORD *)(v114 + 96) + 1;
          v155 = (unsigned int)(4 * v154);
          v156 = 3 * v152;
          v468 = v465;
          if ( (unsigned int)v155 >= (unsigned int)v156 )
          {
            v152 *= 2;
          }
          else
          {
            v156 = v152 >> 3;
            if ( v152 - *(_DWORD *)(v114 + 100) - v154 > (unsigned int)v156 )
            {
LABEL_299:
              *(_DWORD *)(v114 + 96) = v154;
              if ( *(_DWORD *)v153 != -1 )
                --*(_DWORD *)(v114 + 100);
              v157 = (int)v462;
              v153[1] = 0;
              *(_DWORD *)v153 = v157;
              v143 = (__int64 **)(v153 + 1);
              v293 = v153 + 1;
              goto LABEL_302;
            }
          }
          sub_9B6060((__int64)v115, v152, v156, v155, (__int64)v465, v140);
          sub_9B5730(v115, (int *)&v462, &v468);
          v153 = v468;
          v154 = *(_DWORD *)(v114 + 96) + 1;
          goto LABEL_299;
        }
      }
LABEL_46:
      sub_9B8400(&v446);
      i = &v443;
      v50 = (unsigned __int8)sub_9B55D0(v1 + 29, &v443, &v465) == 0;
      v52 = v465;
      if ( !v50 )
        goto LABEL_52;
      v53 = *((_DWORD *)v1 + 60);
      v54 = *((unsigned int *)v1 + 62);
      v468 = v465;
      v55 = (unsigned int)(v53 + 1);
      v56 = 2 * v54;
      v57 = (unsigned int)(4 * v55);
      if ( (unsigned int)v57 >= 3 * (int)v54 )
        goto LABEL_385;
      if ( (int)v54 - *((_DWORD *)v1 + 61) - (int)v55 <= (unsigned int)v54 >> 3 )
      {
        v56 = v54;
LABEL_385:
        sub_9B8420((__int64)(v1 + 29), v56, v55, v54, v57, v51);
        sub_9B55D0(v1 + 29, &v443, &v468);
        LODWORD(v55) = *((_DWORD *)v1 + 60) + 1;
        v52 = v468;
      }
      v50 = *v52 == -4096;
      *((_DWORD *)v1 + 60) = v55;
      if ( !v50 )
        --*((_DWORD *)v1 + 61);
      v58 = v443;
      v52[1] = 0;
      *v52 = v58;
LABEL_52:
      v59 = v445;
      v60 = (void **)(v52 + 1);
      v468 = v445;
      if ( v445 )
        ++*((_DWORD *)v445 + 17);
      v468 = *v60;
      *v60 = v59;
      sub_9B8400((_DWORD **)&v468);
      v290 = *(__int64 **)(v443 + 88);
      if ( v290 != *(__int64 **)(v443 + 80) )
      {
        i = *(__int64 **)(v443 + 80);
        v291 = v1 + 2;
        v289 = &v445;
        v293 = &v449;
        v292 = &v448;
        while ( 1 )
        {
          v75 = *i;
          v76 = *((unsigned int *)v1 + 56);
          v77 = v1[26];
          v447 = *i;
          if ( !(_DWORD)v76 )
            break;
          v78 = (v76 - 1) & (((unsigned int)v75 >> 9) ^ ((unsigned int)v75 >> 4));
          v79 = (_QWORD *)(v77 + 16LL * v78);
          if ( v75 != *v79 )
          {
            if ( *v79 == -4096 )
              break;
            for ( j = 1; ; ++j )
            {
              v78 = (v76 - 1) & (j + v78);
              v79 = (_QWORD *)(v77 + 16LL * v78);
              if ( v75 == *v79 )
                break;
              if ( *v79 == -4096 )
                goto LABEL_156;
            }
          }
          if ( v79 == (_QWORD *)(v77 + 16 * v76) )
            goto LABEL_157;
          v80 = v79[1];
          v448 = v80;
          if ( v80 )
            ++*(_DWORD *)(v80 + 68);
LABEL_82:
          sub_9BAD60(v293, v292, v289, v291);
          v62 = v1[26];
          v63 = *((unsigned int *)v1 + 56);
          if ( v79 == (_QWORD *)(v62 + 16 * v63) )
          {
LABEL_63:
            if ( !(_DWORD)v63 )
            {
              v468 = nullptr;
              goto LABEL_287;
            }
            v64 = v447;
            v36 = (unsigned int)(v63 - 1);
            v13 = v447;
            v65 = v36 & (((unsigned int)v447 >> 9) ^ ((unsigned int)v447 >> 4));
            v66 = (__int64 *)(v62 + 16LL * v65);
            v67 = *v66;
            if ( v447 == *v66 )
              goto LABEL_65;
            v144 = 1;
            v145 = nullptr;
            if ( v67 == -4096 )
            {
LABEL_280:
              v146 = *((_DWORD *)v1 + 54);
              v41 = (unsigned int)(3 * v63);
              v468 = v66;
              v62 = (unsigned int)(v146 + 1);
              if ( 4 * (int)v62 < (unsigned int)v41 )
              {
                v41 = (unsigned int)v63 >> 3;
                if ( (int)v63 - ((int)v62 + *((_DWORD *)v1 + 55)) > (unsigned int)v41 )
                  goto LABEL_282;
                goto LABEL_288;
              }
LABEL_287:
              LODWORD(v63) = 2 * v63;
LABEL_288:
              sub_9B8420((__int64)v347, v63, v62, v41, v36, v13);
              sub_9B55D0(v347, &v447, &v468);
              v13 = v447;
              LODWORD(v62) = *((_DWORD *)v1 + 54) + 1;
              v66 = (__int64 *)v468;
LABEL_282:
              v50 = *v66 == -4096;
              *((_DWORD *)v1 + 54) = v62;
              if ( !v50 )
                --*((_DWORD *)v1 + 55);
              v147 = v449;
              *v66 = v13;
              v66[1] = 0;
              if ( v147 )
              {
                ++*(_DWORD *)(v147 + 68);
                v64 = v447;
                v66[1] = v147;
                goto LABEL_69;
              }
LABEL_246:
              v64 = v447;
            }
            else
            {
              while ( 1 )
              {
                if ( v67 == -8192 && !v145 )
                  v145 = v66;
                v65 = v36 & (v144 + v65);
                v66 = (__int64 *)(v62 + 16LL * v65);
                v67 = *v66;
                if ( v447 == *v66 )
                  break;
                if ( v67 == -4096 )
                {
                  if ( v145 )
                    v66 = v145;
                  goto LABEL_280;
                }
                ++v144;
              }
LABEL_65:
              v68 = v449;
              v69 = (_DWORD *)v66[1];
              if ( v449 )
                ++*(_DWORD *)(v449 + 68);
              v66[1] = v68;
              if ( v69 )
              {
                v50 = v69[17]-- == 1;
                if ( v50 )
                {
                  sub_9B7D80(v69);
                  goto LABEL_246;
                }
              }
            }
LABEL_69:
            if ( v64 )
            {
              v70 = *(_DWORD *)(v64 + 48);
              v71 = v70 & 0x3F;
              v72 = (__int64 *)((char *)s + 8 * (v70 >> 6));
              v73 = *v72;
              if ( !_bittest64(&v73, v71) )
              {
                v127 = v73 | (1LL << v71);
                v128 = (unsigned int)v476;
                *v72 = v127;
                if ( v128 + 1 > (unsigned __int64)HIDWORD(v476) )
                {
                  sub_2237220(&v475, v477, v128 + 1, 8);
                  v128 = (unsigned int)v476;
                }
                *((_QWORD *)v475 + v128) = v64;
                LODWORD(v476) = v476 + 1;
                v129 = 8LL * (unsigned int)v476;
                v130 = *(_QWORD *)((char *)v475 + v129 - 8);
                v131 = v129 >> 3;
                v468 = v478;
                v132 = (v131 - 2) / 2;
                if ( v131 - 1 <= 0 )
                {
                  v137 = (char *)v475 + 8 * v131 - 8;
                }
                else
                {
                  v311 = i;
                  v133 = v131 - 1;
                  v330 = v1;
                  v134 = (char *)v475;
                  while ( 1 )
                  {
                    v135 = &v134[8 * v132];
                    v136 = sub_9C5DA0(&v468, v130, *(_QWORD *)v135);
                    v137 = &v134[8 * v133];
                    if ( !v136 )
                    {
                      i = v311;
                      v1 = v330;
                      goto LABEL_244;
                    }
                    v133 = v132;
                    *(_QWORD *)v137 = *(_QWORD *)v135;
                    if ( v132 <= 0 )
                      break;
                    v132 = (v132 - 1) / 2;
                  }
                  i = v311;
                  v1 = v330;
                  v137 = v135;
                }
LABEL_244:
                *(_QWORD *)v137 = v130;
              }
            }
            goto LABEL_71;
          }
          v33 = v449;
          v38 = (_QWORD *)v448;
          if ( !v449 || !v448 )
            goto LABEL_143;
          if ( v449 == v448 )
            goto LABEL_72;
          v452[0] = v449;
          v450 = v452;
          v451 = 0x1400000001LL;
          sub_9B6940((__int64 *)&v450);
          v456[0] = v38;
          v452[20] = &v453;
          ptr = v456;
          v452[21] = 0x1400000000LL;
          v455 = 0x1400000001LL;
          sub_9B6940((__int64 *)&ptr);
          v81 = ptr;
          v457[1] = (_DWORD *)0x1400000000LL;
          v38 = ptr;
          v457[0] = &v458;
          v82 = v451;
          while ( 1 )
          {
LABEL_87:
            v83 = v82;
            if ( !v82 )
            {
              v61 = sub_9B9CE0((__int64)&ptr, (__int64)v457);
              goto LABEL_57;
            }
            v13 = (unsigned int)v455;
            v84 = v455;
            v85 = v455;
            if ( !(_DWORD)v455 )
            {
LABEL_141:
              v61 = 0;
              goto LABEL_57;
            }
            v36 = (__int64)v450;
            v41 = *((_QWORD *)v450 + v82 - 1);
            v13 = v81[(unsigned int)v455 - 1] & 0xFFFFFFFFFFFFFFFCLL;
            v33 = (__int64)v450;
            v86 = v41 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (v41 & 0xFFFFFFFFFFFFFFFCLL) != v13 )
              break;
            LODWORD(v451) = --v82;
            if ( v82 )
            {
              v101 = v82;
              v102 = 8LL * v82;
              v13 = (unsigned __int64)v450 + v102 - 8;
              v41 = *(_QWORD *)v13;
              v38 = (_QWORD *)(*(_QWORD *)v13 & 3LL);
              if ( (*(_QWORD *)v13 & 3) != 0 )
              {
                if ( v38 != (_QWORD *)((char *)&dword_0 + 1) )
                  goto LABEL_143;
                v41 |= 3uLL;
                *(_QWORD *)v13 = v41;
              }
              else
              {
                v41 |= 1uLL;
                *(_QWORD *)v13 = v41;
              }
              v38 = v452;
              v103 = v41 & 3;
              if ( v103 != 1 )
              {
                do
                {
                  if ( v103 )
                  {
                    if ( v103 != 3 )
                      goto LABEL_143;
                    LODWORD(v451) = --v82;
                    if ( !v82 )
                    {
LABEL_177:
                      v81 = ptr;
                      v85 = v455;
                      v82 = 0;
                      v38 = ptr;
                      goto LABEL_178;
                    }
                    v101 = v82;
                    v106 = (__int64 *)(v36 + 8LL * v82 - 8);
                    v41 = *v106;
                    v33 = *v106 & 3;
                    if ( (*v106 & 3) != 0 )
                    {
                      if ( v33 != 1 )
                        goto LABEL_143;
                      *v106 = v41 | 3;
                    }
                    else
                    {
                      *v106 = v41 | 1;
                    }
                  }
                  else
                  {
                    v104 = *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFFCLL) + 8);
                    if ( v104 )
                    {
                      v105 = v101 + 1;
                      if ( v105 > HIDWORD(v451) )
                      {
                        sub_2237220(&v450, v452, v105, 8);
                        v33 = (__int64)v450;
                        v102 = 8LL * (unsigned int)v451;
                      }
                      *(_QWORD *)(v33 + v102) = v104;
                      v82 = v451 + 1;
                      LODWORD(v451) = v82;
                      if ( !v82 )
                        goto LABEL_177;
                      v36 = (__int64)v450;
                      v101 = v82;
                    }
                    else
                    {
                      *(_QWORD *)v13 = v41 | 1;
                    }
                  }
                  v102 = 8 * v101;
                  v33 = v36;
                  v13 = v36 + 8 * v101 - 8;
                  v41 = *(_QWORD *)v13;
                  v103 = *(_QWORD *)v13 & 3LL;
                }
                while ( v103 != 1 );
                v81 = ptr;
                v84 = v455;
              }
              v85 = v84;
              v38 = v81;
            }
LABEL_178:
            v41 = (unsigned int)(v85 - 1);
            LODWORD(v455) = v85 - 1;
            if ( v85 != 1 )
            {
              v107 = (unsigned int)v41;
              v13 = 8LL * (unsigned int)v41;
              v36 = (__int64)v81 + v13 - 8;
              v108 = *(_QWORD *)v36;
              v33 = *(_QWORD *)v36 & 3LL;
              if ( (*(_QWORD *)v36 & 3) != 0 )
              {
                if ( v33 != 1 )
                  goto LABEL_143;
                v126 = v108 | 3;
                *(_QWORD *)v36 = v126;
                v33 = v126;
              }
              else
              {
                v109 = v108 | 1;
                *(_QWORD *)v36 = v109;
                v33 = v109;
              }
              for ( k = v33 & 3; k != 1; k = *(_QWORD *)v36 & 3LL )
              {
                if ( k )
                {
                  if ( k != 3 )
                    goto LABEL_143;
                  v41 = (unsigned int)(v41 - 1);
                  LODWORD(v455) = v41;
                  if ( !(_DWORD)v41 )
                    break;
                  v107 = (unsigned int)v41;
                  v33 = (__int64)&v81[(unsigned int)v41 - 1];
                  v113 = *(_QWORD *)v33;
                  v36 = *(_QWORD *)v33 & 3LL;
                  if ( (*(_QWORD *)v33 & 3) != 0 )
                  {
                    if ( v36 != 1 )
                      goto LABEL_143;
                    *(_QWORD *)v33 = v113 | 3;
                  }
                  else
                  {
                    *(_QWORD *)v33 = v113 | 1;
                  }
                }
                else
                {
                  v111 = *(_QWORD *)((v33 & 0xFFFFFFFFFFFFFFFCLL) + 8);
                  if ( v111 )
                  {
                    v112 = v107 + 1;
                    if ( v112 > HIDWORD(v455) )
                    {
                      v332 = *(_QWORD *)((v33 & 0xFFFFFFFFFFFFFFFCLL) + 8);
                      sub_2237220(&ptr, v456, v112, 8);
                      v111 = v332;
                      v38 = ptr;
                      v13 = 8LL * (unsigned int)v455;
                    }
                    *(_QWORD *)((char *)v38 + v13) = v111;
                    v38 = ptr;
                    v41 = (unsigned int)(v455 + 1);
                    LODWORD(v455) = v41;
                    v81 = ptr;
                    if ( !(_DWORD)v41 )
                      break;
                    v107 = (unsigned int)v41;
                  }
                  else
                  {
                    *(_QWORD *)v36 = v33 | 1;
                  }
                }
                v13 = 8 * v107;
                v36 = (__int64)&v81[v107 - 1];
                v33 = *(_QWORD *)v36;
              }
LABEL_122:
              v82 = v451;
            }
          }
          if ( *(_DWORD *)(v86 + 48) != *(_DWORD *)(v13 + 48) )
            goto LABEL_141;
          v87 = *(_QWORD *)(v86 + 56);
          v88 = *(_QWORD *)(v13 + 56);
          if ( !v87 || !v88 )
          {
            v61 = v88 == v87;
            if ( v88 != v87 )
              goto LABEL_145;
LABEL_103:
            v83 = (unsigned int)v451;
            v33 = (__int64)v450;
            v41 = *((_QWORD *)v450 + (unsigned int)v451 - 1);
            v82 = v451;
LABEL_104:
            v38 = v452;
            while ( 2 )
            {
              while ( 1 )
              {
                v89 = 8 * v83;
                v36 = v41 & 3;
                v90 = (__int64 *)(v33 + 8 * v83 - 8);
                v13 = v41 & 0xFFFFFFFFFFFFFFFCLL;
                if ( v36 == 1 )
                  break;
                if ( (v41 & 3) == 0 )
                {
                  v91 = *(_QWORD *)(v13 + 8);
                  if ( v91 )
                    goto LABEL_108;
                  *v90 = v41 | 1;
                  goto LABEL_111;
                }
                if ( v36 != 3 )
                  goto LABEL_143;
                LODWORD(v451) = --v82;
                if ( !v82 )
                  goto LABEL_113;
                v83 = v82;
                v97 = (__int64 *)(v33 + 8LL * v82 - 8);
                v41 = *v97;
                v36 = *v97 & 3;
                if ( (*v97 & 3) == 0 )
                {
                  *v97 = v41 | 1;
LABEL_113:
                  v81 = ptr;
                  v93 = (unsigned int)v455;
                  v41 = *((_QWORD *)ptr + (unsigned int)v455 - 1);
                  v38 = ptr;
                  v94 = v455;
                  while ( 2 )
                  {
                    while ( 2 )
                    {
                      v13 = 8 * v93;
                      v33 = v41 & 3;
                      v95 = &v81[v93 - 1];
                      v36 = v41 & 0xFFFFFFFFFFFFFFFCLL;
                      if ( v33 == 1 )
                      {
                        v36 = *(_QWORD *)(v36 + 16);
                        if ( v36 )
                        {
LABEL_117:
                          v96 = v93 + 1;
                          if ( v96 > HIDWORD(v455) )
                          {
                            v329 = v36;
                            sub_2237220(&ptr, v456, v96, 8);
                            v36 = v329;
                            v38 = ptr;
                            v13 = 8LL * (unsigned int)v455;
                          }
                          *(_QWORD *)((char *)v38 + v13) = v36;
                          v38 = ptr;
                          v94 = v455 + 1;
                          LODWORD(v455) = v455 + 1;
                          v81 = ptr;
                        }
                        else
                        {
                          v41 |= 3uLL;
                          *v95 = v41;
                        }
LABEL_120:
                        if ( !v94 )
                          goto LABEL_122;
                        v93 = v94;
                        v41 = v81[v94 - 1];
                        if ( (v41 & 3) == 1 )
                          goto LABEL_122;
                        continue;
                      }
                      break;
                    }
                    if ( (v41 & 3) == 0 )
                    {
                      v36 = *(_QWORD *)(v36 + 8);
                      if ( v36 )
                        goto LABEL_117;
                      v41 |= 1uLL;
                      *v95 = v41;
                      goto LABEL_120;
                    }
                    if ( v33 != 3 )
                      goto LABEL_143;
                    LODWORD(v455) = --v94;
                    if ( !v94 )
                      goto LABEL_122;
                    v93 = v94;
                    v33 = (__int64)&v81[v94 - 1];
                    v41 = *(_QWORD *)v33;
                    v36 = *(_QWORD *)v33 & 3LL;
                    if ( (*(_QWORD *)v33 & 3) != 0 )
                    {
                      if ( v36 != 1 )
                        goto LABEL_143;
                      v41 |= 3uLL;
                      *(_QWORD *)v33 = v41;
                      continue;
                    }
                    break;
                  }
                  v41 |= 1uLL;
                  v82 = v451;
                  *(_QWORD *)v33 = v41;
                  goto LABEL_87;
                }
                if ( v36 != 1 )
                  goto LABEL_143;
                v41 |= 3uLL;
                *v97 = v41;
              }
              v91 = *(_QWORD *)(v13 + 16);
              if ( v91 )
              {
LABEL_108:
                v92 = v83 + 1;
                if ( v92 > HIDWORD(v451) )
                {
                  sub_2237220(&v450, v452, v92, 8);
                  v33 = (__int64)v450;
                  v89 = 8LL * (unsigned int)v451;
                }
                *(_QWORD *)(v33 + v89) = v91;
                v82 = v451 + 1;
                LODWORD(v451) = v451 + 1;
              }
              else
              {
                *v90 = v41 | 3;
              }
LABEL_111:
              if ( !v82 )
                goto LABEL_113;
              v33 = (__int64)v450;
              v83 = v82;
              v41 = *((_QWORD *)v450 + v82 - 1);
              if ( (v41 & 3) == 1 )
                goto LABEL_113;
              continue;
            }
          }
          if ( v88 == v87 )
            goto LABEL_104;
          v461[0] = *(_QWORD *)(v86 + 56);
          v460 = 0x1400000001LL;
          v459 = v461;
          sub_9B6800((__int64 *)&v459);
          v467[0] = v88;
          v462 = v464;
          v466 = 0x1400000001LL;
          v463 = 0x1400000000LL;
          v465 = v467;
          sub_9B6800((__int64 *)&v465);
          v38 = v465;
          v468 = v470;
          v469 = 0x1400000000LL;
LABEL_95:
          v41 = (unsigned int)v460;
          while ( 1 )
          {
            if ( !(_DWORD)v41 )
            {
              v61 = sub_9B9CE0((__int64)&v465, (__int64)&v468);
              goto LABEL_98;
            }
            v36 = (unsigned int)v466;
            v98 = v466;
            v13 = (unsigned int)v466;
            if ( !(_DWORD)v466 )
              break;
            v33 = (__int64)v459;
            v99 = *((_QWORD *)v459 + (unsigned int)v41 - 1) & 0xFFFFFFFFFFFFFFFCLL;
            v100 = v38[(unsigned int)v466 - 1] & 0xFFFFFFFFFFFFFFFCLL;
            if ( v99 == v100 )
            {
              v41 = (unsigned int)(v41 - 1);
              LODWORD(v460) = v41;
              if ( (_DWORD)v41 )
              {
                v13 = (unsigned int)v41;
                v36 = (__int64)v459 + 8 * (unsigned int)v41 - 8;
                v161 = *(_QWORD *)v36;
                if ( (*(_QWORD *)v36 & 3) != 0 )
                {
                  if ( (*(_QWORD *)v36 & 3LL) != 1 )
                    goto LABEL_143;
                  v162 = v161 | 3;
                  *(_QWORD *)v36 = v162;
                  v163 = v162;
                }
                else
                {
                  v181 = v161 | 1;
                  *(_QWORD *)v36 = v181;
                  v163 = v181;
                }
                v164 = v163 & 3;
                if ( v164 != 1 )
                {
                  v38 = &v459;
                  do
                  {
                    if ( v164 )
                    {
                      if ( v164 != 3 )
                        goto LABEL_143;
                      v41 = (unsigned int)(v41 - 1);
                      LODWORD(v460) = v41;
                      if ( !(_DWORD)v41 )
                      {
LABEL_321:
                        v13 = (unsigned int)v466;
                        v38 = v465;
                        v41 = 0;
                        goto LABEL_322;
                      }
                      v13 = (unsigned int)v41;
                      v166 = (__int64 *)(v33 + 8LL * (unsigned int)v41 - 8);
                      v167 = *v166;
                      if ( (*v166 & 3) != 0 )
                      {
                        if ( (*v166 & 3) != 1 )
                          goto LABEL_143;
                        *v166 = v167 | 3;
                      }
                      else
                      {
                        *v166 = v167 | 1;
                      }
                    }
                    else
                    {
                      v165 = *(_QWORD *)((v163 & 0xFFFFFFFFFFFFFFFCLL) + 8);
                      if ( v165 )
                      {
                        sub_9B9C90((__int64)&v459, v165);
                        v41 = (unsigned int)v460;
                        if ( !(_DWORD)v460 )
                          goto LABEL_321;
                        v33 = (__int64)v459;
                        v13 = (unsigned int)v460;
                      }
                      else
                      {
                        *(_QWORD *)v36 = v163 | 1;
                      }
                    }
                    v36 = v33 + 8 * v13 - 8;
                    v163 = *(_QWORD *)v36;
                    v164 = *(_QWORD *)v36 & 3LL;
                  }
                  while ( v164 != 1 );
                  v38 = v465;
                  v98 = v466;
                }
                v13 = v98;
              }
LABEL_322:
              v168 = v13 - 1;
              LODWORD(v466) = v13 - 1;
              if ( (_DWORD)v13 != 1 )
              {
                v36 = v168;
                v33 = (__int64)&v38[v168 - 1];
                v169 = *(_QWORD *)v33;
                v41 = *(_QWORD *)v33 & 3LL;
                if ( (*(_QWORD *)v33 & 3) != 0 )
                {
                  if ( v41 != 1 )
                    goto LABEL_143;
                  v170 = v169 | 3;
                  *(_QWORD *)v33 = v170;
                  v41 = v170;
                }
                else
                {
                  v180 = v169 | 1;
                  *(_QWORD *)v33 = v180;
                  v41 = v180;
                }
                v171 = v41 & 3;
                if ( v171 != 1 )
                {
                  while ( 1 )
                  {
                    if ( v171 )
                    {
                      if ( v171 != 3 )
                        goto LABEL_143;
                      LODWORD(v466) = --v168;
                      if ( !v168 )
                        goto LABEL_95;
                      v36 = v168;
                      v41 = (__int64)&v38[v168 - 1];
                      v173 = *(_QWORD *)v41;
                      if ( (*(_QWORD *)v41 & 3) != 0 )
                      {
                        if ( (*(_QWORD *)v41 & 3LL) != 1 )
                          goto LABEL_143;
                        *(_QWORD *)v41 = v173 | 3;
                      }
                      else
                      {
                        *(_QWORD *)v41 = v173 | 1;
                      }
                    }
                    else
                    {
                      v172 = *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFFCLL) + 8);
                      if ( v172 )
                      {
                        sub_9B9C90((__int64)&v465, v172);
                        v168 = v466;
                        v38 = v465;
                        if ( !(_DWORD)v466 )
                          goto LABEL_95;
                        v36 = (unsigned int)v466;
                      }
                      else
                      {
                        *(_QWORD *)v33 = v41 | 1;
                      }
                    }
                    v33 = (__int64)&v38[v36 - 1];
                    v41 = *(_QWORD *)v33;
                    v171 = *(_QWORD *)v33 & 3LL;
                    if ( v171 == 1 )
                      goto LABEL_95;
                  }
                }
                goto LABEL_95;
              }
            }
            else
            {
              if ( *(_DWORD *)(v99 + 44) != *(_DWORD *)(v100 + 44) )
                break;
              sub_9B6800((__int64 *)&v459);
              sub_9B6800((__int64 *)&v465);
              v38 = v465;
              v41 = (unsigned int)v460;
            }
          }
          v61 = 0;
LABEL_98:
          if ( v38 != v467 )
            free(v38);
          if ( v459 != v461 )
            free(v459);
          if ( v61 )
            goto LABEL_103;
LABEL_145:
          v38 = ptr;
LABEL_57:
          if ( v38 != v456 )
            free(v38);
          if ( v450 != v452 )
            free(v450);
LABEL_61:
          if ( !v61 )
          {
            v62 = v1[26];
            LODWORD(v63) = *((_DWORD *)v1 + 56);
            goto LABEL_63;
          }
LABEL_71:
          v33 = v449;
          if ( v449 )
          {
LABEL_72:
            v50 = (*(_DWORD *)(v33 + 68))-- == 1;
            if ( v50 )
              sub_9B7D80((void *)v33);
          }
          v74 = (void *)v448;
          if ( v448 && (v50 = *(_DWORD *)(v448 + 68) == 1, --*(_DWORD *)(v448 + 68), v50) )
          {
            sub_9B7D80(v74);
            i += 2;
            if ( v290 == i )
            {
LABEL_223:
              sub_9B8400((_DWORD **)v289);
              goto LABEL_224;
            }
          }
          else
          {
            i += 2;
            if ( v290 == i )
              goto LABEL_223;
          }
        }
LABEL_156:
        v79 = (_QWORD *)(v77 + 16 * v76);
LABEL_157:
        v448 = 0;
        goto LABEL_82;
      }
      sub_9B8400((_DWORD **)&v445);
LABEL_224:
      sub_9B8400(&v444);
      LODWORD(v18) = v476;
      if ( !(_DWORD)v476 )
        goto LABEL_225;
    }
LABEL_292:
    v444 = nullptr;
    v446 = nullptr;
    goto LABEL_293;
  }
LABEL_225:
  if ( v475 != v477 )
    free(v475);
  if ( s != v473 )
    free(s);
  result = v348;
  if ( v348 )
    return sub_224D6D0(v348);
  return result;
}
