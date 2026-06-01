// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall sub_EDE580(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // sf
  char *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  _QWORD *v14; // rbx
  unsigned __int8 *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r8
  char *v21; // rax
  char *v22; // rbx
  char *v23; // r14
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbp
  unsigned __int64 v38; // r13
  char v39; // bl
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rbx
  unsigned __int64 v59; // rax
  bool v60; // r12
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rbp
  unsigned __int64 v64; // rbx
  void *v65; // rcx
  __int64 v66; // r9
  unsigned int v67; // edx
  void **v68; // rax
  void *v69; // rdi
  __int64 v70; // r12
  unsigned __int64 v71; // rax
  __int64 v72; // r9
  __int64 v73; // r14
  __int64 *v74; // rax
  char v75; // dl
  __int64 v76; // rdx
  __int64 v77; // r8
  int v78; // esi
  __int64 v79; // rax
  __int64 v80; // rdx
  unsigned __int64 *v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  unsigned __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rbx
  unsigned __int64 v102; // rbp
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rsi
  __int64 v106; // r12
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  unsigned __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // r12
  unsigned __int64 v117; // r15
  unsigned __int8 v118; // bl
  unsigned __int64 v119; // rax
  __m128i *v120; // rdi
  int v121; // eax
  int v122; // esi
  __int64 *v123; // rax
  __int64 v124; // rbp
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  unsigned __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rbx
  unsigned __int64 v132; // rbp
  unsigned int v133; // ecx
  __int64 *v134; // rdx
  __int64 v135; // r9
  __int64 v136; // rsi
  unsigned __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rcx
  unsigned __int64 v147; // rax
  __int64 v148; // r15
  __int64 v149; // rsi
  unsigned __int64 v150; // rax
  __int64 v151; // r14
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r9
  __int64 v155; // rbp
  __int64 v156; // r13
  __int64 v157; // r12
  __int64 v158; // rsi
  _QWORD *v159; // rbp
  __int64 v160; // r12
  __int64 v161; // rdi
  void **v162; // rdi
  void **v163; // r13
  void **v164; // rdi
  char *v165; // rbx
  __int64 v166; // rdx
  unsigned __int64 *v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  unsigned __int64 v174; // rax
  __int64 v175; // r12
  __int64 v176; // r15
  unsigned __int64 v177; // rax
  void *v178; // r13
  __int64 v179; // r14
  __int64 v180; // rbp
  __int64 v181; // r9
  unsigned __int8 *v182; // rax
  __int64 v183; // rcx
  __int64 v184; // rdx
  int v185; // esi
  __int64 v186; // r8
  char *v187; // rdx
  __int64 v188; // rdi
  char v189; // bp
  __int64 v190; // rax
  unsigned __int8 *v191; // rbx
  _BOOL8 v192; // rsi
  unsigned __int64 v193; // rdx
  unsigned __int64 v194; // rtt
  __int64 v195; // r8
  __int64 v196; // r9
  unsigned int v197; // eax
  void *v198; // rax
  __int64 v199; // rbp
  void *v200; // r15
  void *v201; // r13
  __int64 v202; // r14
  __int64 v203; // r12
  __int64 v204; // rax
  char *v205; // rax
  signed __int64 v206; // rdx
  __int64 v207; // rdx
  unsigned __int64 v208; // r8
  _BOOL8 v209; // r9
  char v210; // si
  unsigned __int64 v211; // rcx
  unsigned __int64 v212; // rdi
  _BOOL8 v213; // rbp
  __int64 v214; // rbp
  char *v215; // r12
  char *v216; // rbx
  unsigned __int64 v217; // rbx
  unsigned __int64 v218; // rdx
  unsigned __int64 v219; // r12
  unsigned __int64 v220; // rsi
  __int64 v221; // rax
  __int64 *v222; // rax
  __int64 v223; // rsi
  unsigned __int8 *v224; // rbx
  unsigned int v225; // eax
  void *v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // r9
  char v231; // r12
  __int64 v232; // rbp
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // r9
  __int64 v237; // rdi
  __int64 v238; // rbx
  __int64 v239; // rsi
  __int64 v240; // rbx
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  __int64 v249; // rdi
  __int64 v250; // r13
  unsigned __int64 v251; // rax
  void *v252; // rax
  __int64 v253; // rdx
  __int64 v254; // rcx
  __int64 v255; // r8
  __int64 v256; // r9
  unsigned __int64 v257; // rax
  __int64 v258; // rdx
  __int64 v259; // rcx
  char *v260; // r8
  __int64 v261; // r9
  unsigned __int64 v262; // rbx
  unsigned __int64 v263; // rax
  __int64 v264; // rax
  __int64 v265; // r14
  unsigned __int64 v266; // r13
  unsigned __int64 v267; // r15
  _QWORD *v268; // rdx
  unsigned __int64 v269; // r12
  __int64 v270; // rax
  __int64 *v271; // rax
  __int64 v272; // rsi
  char *v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rdx
  __int64 v278; // rcx
  __int64 v279; // r8
  __int64 v280; // r9
  __int64 v281; // rdi
  __int64 v282; // rbx
  __int64 **v283; // r15
  __int64 v284; // rdx
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  __int64 v288; // rdi
  __int64 **v289; // rbx
  __int64 v290; // r12
  unsigned __int64 v291; // rax
  __int64 v292; // rsi
  unsigned __int64 v293; // r15
  __int64 v294; // rcx
  __int64 v295; // rbp
  __int64 v296; // r8
  __int64 v297; // r9
  _QWORD *v298; // rax
  char *v299; // rdx
  __int64 v300; // rax
  char v301; // r12
  unsigned __int64 v302; // rdx
  __int64 v303; // rcx
  __int64 v304; // r8
  unsigned __int64 v305; // r13
  _BOOL8 v306; // r9
  unsigned __int64 v307; // rax
  unsigned __int64 v308; // rdx
  __int64 v309; // r9
  __int64 v310; // r13
  __int64 v311; // rax
  __int64 *v312; // rdi
  __int64 v313; // rdx
  __int64 *v314; // rsi
  __int64 v315; // rcx
  __int64 v316; // rbp
  void *v317; // r15
  __int64 v318; // r12
  void *v319; // r13
  __int64 v320; // r14
  __int64 v321; // rsi
  _QWORD *v322; // rbp
  _QWORD *v323; // r12
  __int64 v324; // rdi
  void **v325; // rdi
  void **v326; // r13
  void **v327; // rdi
  __int64 v328; // r14
  int v329; // edx
  int v330; // r9d
  __int64 v331; // rsi
  __int64 v332; // rbx
  __int64 *v333; // rax
  unsigned __int64 v334; // rdi
  _BOOL8 v335; // rbp
  __int64 v336; // rsi
  char *v337; // rdx
  __int64 v338; // rcx
  char *v339; // rax
  char *v340; // rdx
  char *v341; // rax
  unsigned int v342; // ecx
  __int64 *v343; // rsi
  __int64 v344; // r8
  unsigned __int64 v345; // r13
  __int64 v346; // rdx
  __int64 v347; // rax
  char v348; // al
  __int64 v349; // rax
  __int64 v350; // rax
  int v351; // esi
  int v352; // r8d
  __int64 v353; // r9
  int v354; // r12d
  __m128i v355; // xmm1
  unsigned __int64 v356; // rax
  __int64 v357; // rax
  __int64 v358; // rcx
  __int64 v359; // r8
  __int64 v360; // r9
  __int64 v361; // rbx
  unsigned __int64 v362; // rax
  __int64 v363; // rdx
  unsigned __int64 v364; // rdx
  unsigned __int64 v365; // r15
  unsigned __int64 *v366; // rax
  __int64 v367; // rax
  char v368; // di
  __int64 *v369; // rdx
  __int64 *v370; // rbx
  __int64 *v371; // rbp
  __int64 v372; // rsi
  unsigned __int64 v373; // rdx
  __int64 v374; // rcx
  _QWORD *v375; // rdi
  _QWORD *v376; // rax
  unsigned __int64 v377; // rdx
  _QWORD *v378; // rax
  _QWORD *v379; // rcx
  int v380; // edi
  __int64 *v381; // rax
  unsigned __int64 v382; // rax
  char *v383; // rbx
  unsigned __int64 v384; // r12
  unsigned __int64 v385; // rax
  __int64 v386; // rax
  __int64 v387; // r13
  _QWORD *v388; // rax
  unsigned __int64 v389; // rax
  bool v390; // di
  __int64 v391; // rdx
  unsigned __int64 v392; // rdx
  _QWORD *v393; // rax
  __int64 *v394; // rbx
  __int64 v395; // rbp
  __int64 v396; // rax
  bool v397; // zf
  __int64 v398; // rax
  char *v399; // r13
  __int64 v400; // rbx
  char *v401; // r12
  unsigned __int64 v402; // r12
  unsigned __int64 v403; // rdx
  unsigned __int64 v404; // r13
  unsigned __int64 v405; // rax
  __int64 v406; // rcx
  int v407; // esi
  int v408; // r10d
  void **v409; // r11
  int v410; // eax
  __int64 *v411; // rdx
  _QWORD *v412; // rax
  unsigned __int64 v413; // rdx
  __int64 v414; // rdx
  __int64 v415; // rcx
  __int64 v416; // r8
  __int64 v417; // r9
  __int64 v418; // rdx
  __int64 v419; // rcx
  __int64 v420; // r8
  __int64 v421; // r9
  __int64 v422; // rdx
  __int64 v423; // rcx
  __int64 v424; // r8
  __int64 v425; // r9
  __int64 v426; // rbp
  unsigned __int64 v427; // rbx
  signed __int64 v428; // rax
  __int64 v429; // r12
  unsigned __int64 v430; // rax
  __int64 v431; // rax
  unsigned __int64 v432; // rax
  unsigned __int64 v433; // rax
  char *v434; // rbx
  unsigned __int64 i; // rbp
  unsigned __int64 v436; // rax
  __int64 v437; // r14
  __int64 v438; // rax
  __int64 v439; // rdx
  __int64 v440; // rcx
  __int64 v441; // r8
  __int64 v442; // r9
  char *v444; // [rsp+10h] [rbp-538h]
  char v445; // [rsp+10h] [rbp-538h]
  __int64 v446; // [rsp+10h] [rbp-538h]
  __int64 v447; // [rsp+10h] [rbp-538h]
  __int64 *v448; // [rsp+28h] [rbp-520h]
  __int64 v449; // [rsp+38h] [rbp-510h] BYREF
  void *src; // [rsp+40h] [rbp-508h]
  __int64 v451; // [rsp+48h] [rbp-500h]
  __int64 v452; // [rsp+50h] [rbp-4F8h]
  int v453[2]; // [rsp+58h] [rbp-4F0h]
  __int64 v454; // [rsp+60h] [rbp-4E8h]
  char *v455; // [rsp+68h] [rbp-4E0h] BYREF
  __m128 v456[2]; // [rsp+70h] [rbp-4D8h] BYREF
  void *v457; // [rsp+90h] [rbp-4B8h] BYREF
  __int64 v458; // [rsp+98h] [rbp-4B0h]
  int v459; // [rsp+A0h] [rbp-4A8h]
  char v460; // [rsp+A4h] [rbp-4A4h]
  char v461; // [rsp+A8h] [rbp-4A0h] BYREF
  void *v462[2]; // [rsp+C0h] [rbp-488h] BYREF
  int v463; // [rsp+D0h] [rbp-478h]
  char v464; // [rsp+D4h] [rbp-474h]
  char v465; // [rsp+D8h] [rbp-470h] BYREF
  __m128 v466; // [rsp+F0h] [rbp-458h] BYREF
  char *v467; // [rsp+100h] [rbp-448h]
  _QWORD *v468; // [rsp+108h] [rbp-440h]
  __int64 v469; // [rsp+110h] [rbp-438h]
  unsigned int v470; // [rsp+118h] [rbp-430h]
  __int128 v471; // [rsp+120h] [rbp-428h]
  __m128 ptr; // [rsp+130h] [rbp-418h] BYREF
  char *v473; // [rsp+140h] [rbp-408h]
  _QWORD v474[2]; // [rsp+148h] [rbp-400h] BYREF
  unsigned int v475; // [rsp+158h] [rbp-3F0h]
  __int64 v476[2]; // [rsp+160h] [rbp-3E8h]
  unsigned __int8 *v477; // [rsp+190h] [rbp-3B8h] BYREF
  __m128 *v478; // [rsp+198h] [rbp-3B0h]
  __int64 v479; // [rsp+1A0h] [rbp-3A8h]
  __int64 v480; // [rsp+1A8h] [rbp-3A0h]
  int v481[2]; // [rsp+1B0h] [rbp-398h]
  __int64 v482; // [rsp+1B8h] [rbp-390h]
  int v483[2]; // [rsp+1C0h] [rbp-388h]
  void *v484; // [rsp+1C8h] [rbp-380h]
  __int64 v485; // [rsp+1D0h] [rbp-378h]
  __int64 v486; // [rsp+1D8h] [rbp-370h]
  __int64 v487; // [rsp+1E0h] [rbp-368h]
  unsigned __int64 v488; // [rsp+1E8h] [rbp-360h]
  unsigned __int64 v489; // [rsp+1F0h] [rbp-358h]
  __int64 v490; // [rsp+1F8h] [rbp-350h]
  __int64 v491; // [rsp+200h] [rbp-348h] BYREF
  void *v492; // [rsp+208h] [rbp-340h]
  __int64 v493; // [rsp+210h] [rbp-338h]
  _BYTE v494[64]; // [rsp+218h] [rbp-330h] BYREF
  char v495; // [rsp+258h] [rbp-2F0h]
  __int64 v496; // [rsp+260h] [rbp-2E8h]
  unsigned __int64 v497; // [rsp+268h] [rbp-2E0h]
  __int64 v498; // [rsp+270h] [rbp-2D8h]
  __int64 v499; // [rsp+278h] [rbp-2D0h]
  __int64 v500; // [rsp+280h] [rbp-2C8h]
  __int64 v501; // [rsp+290h] [rbp-2B8h]
  _QWORD *v502; // [rsp+298h] [rbp-2B0h] BYREF
  __int64 v503; // [rsp+2A0h] [rbp-2A8h] BYREF
  unsigned int v504; // [rsp+2A8h] [rbp-2A0h]
  __int64 *v505; // [rsp+2B0h] [rbp-298h] BYREF
  __int64 v506; // [rsp+2B8h] [rbp-290h] BYREF
  unsigned int v507; // [rsp+2C0h] [rbp-288h]
  int v508; // [rsp+2C8h] [rbp-280h]
  char v509; // [rsp+2CCh] [rbp-27Ch]
  __int128 v510; // [rsp+2D0h] [rbp-278h] BYREF
  __int64 v511; // [rsp+2E0h] [rbp-268h]
  __int64 v512; // [rsp+2E8h] [rbp-260h]
  int v513; // [rsp+2F0h] [rbp-258h]
  __int64 v514; // [rsp+2F8h] [rbp-250h]
  __int64 v515; // [rsp+300h] [rbp-248h]
  int v516; // [rsp+308h] [rbp-240h]
  __int64 v517; // [rsp+310h] [rbp-238h] BYREF
  __int64 v518; // [rsp+318h] [rbp-230h]
  unsigned int v519; // [rsp+320h] [rbp-228h]
  __int64 v520; // [rsp+3E8h] [rbp-160h]
  __int64 v521; // [rsp+3F0h] [rbp-158h] BYREF
  __int64 v522[3]; // [rsp+4E0h] [rbp-68h] BYREF
  __int64 v523; // [rsp+4F8h] [rbp-50h] BYREF
  int v524; // [rsp+500h] [rbp-48h]
  int v525; // [rsp+504h] [rbp-44h]
  unsigned int v526; // [rsp+508h] [rbp-40h]

  v6 = a2[72] < 0;
  v7 = a2;
  v455 = a2;
  if ( v6 )
  {
    if ( !sub_B7E870((__int64)a2, (__int64)a2, a3, a4, a5, a6) )
      (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 18360) + 160LL))(*(_QWORD *)(a1 + 18360), v455);
    v7 = v455;
  }
  v8 = *((_QWORD *)v7 + 13);
  sub_7052B0((__int64 *)(v8 + 96), v8, a3, a4, a5, a6);
  v455 = (char *)sub_B7E870((__int64)v455, v8, v9, v10, v11, v12);
  v448 = (__int64 *)(a1 + 1072);
  if ( !(unsigned __int8)sub_ED8540((__int64 *)(a1 + 1072), (__int64 *)&v455, &ptr) )
  {
    v16 = (unsigned __int8 *)ptr.m128_u64[0];
    v17 = *(_DWORD *)(a1 + 1080);
    v18 = *(unsigned int *)(a1 + 1088);
    v477 = (unsigned __int8 *)ptr.m128_u64[0];
    v19 = v17 + 1;
    v20 = (unsigned int)(4 * v19);
    if ( (unsigned int)v20 >= 3 * (int)v18 )
    {
      v394 = (__int64 *)(a1 + 1072);
      sub_EDBE50((__int64)v448, 2 * v18, ptr.m128_i64[0], v18, v20, v13);
    }
    else
    {
      if ( (int)v18 - *(_DWORD *)(a1 + 1084) - v19 > (unsigned int)v18 >> 3 )
      {
LABEL_7:
        v397 = *(_QWORD *)v16 == -4096;
        *(_DWORD *)(a1 + 1080) = v19;
        if ( !v397 )
          --*(_DWORD *)(a1 + 1084);
        v21 = v455;
        *((_QWORD *)v16 + 1) = 0;
        *(_QWORD *)v16 = v21;
        goto LABEL_10;
      }
      v394 = (__int64 *)(a1 + 1072);
      sub_EDBE50((__int64)v448, v18, ptr.m128_i64[0], v18, v20, v13);
    }
    sub_ED8540(v394, (__int64 *)&v455, &v477);
    v16 = v477;
    v19 = *(_DWORD *)(a1 + 1080) + 1;
    goto LABEL_7;
  }
  v14 = *(_QWORD **)(ptr.m128_u64[0] + 8);
  if ( v14 )
    return v14;
LABEL_10:
  v22 = v455;
  v444 = v455;
  v23 = v455;
  v24 = (v455[28] & 0x7F) - 59;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 17448) + 472LL) )
  {
    if ( v24 > 2 )
    {
      sub_ED6F60((__int64)&v477, a1, 0);
      v165 = v455;
      sub_ED6B50((__int64)&v477, (__int64)v455, v166, v167, v168, v169);
      sub_EE3AF0(&v477, v165);
      sub_ED8780((__int64)&v477, (__int64)v165, v170, v171, v172, v173);
      v174 = sub_A97FF0((__int64)v477, v479);
      v175 = *(_QWORD *)v481;
      v446 = v174;
      v449 = v480;
      v176 = *(_QWORD *)v483;
      v177 = sub_A97FF0((__int64)v477, v479);
      v178 = v484;
      v179 = (unsigned int)v485;
      v180 = v177;
      v14 = (_QWORD *)sub_9C3B30((__int64 *)(a1 + 2352), 80, 3u);
      sub_ED6260(v14, (_QWORD *)a1, v446, v449, v175, v176, v449, v180, v178, v179);
      sub_ED72B0((__int64)&v477);
      goto LABEL_100;
    }
    v79 = *(_QWORD *)(a1 + 18648);
    ptr.m128_u64[0] = a1;
    v449 = v79;
    ptr.m128_u64[1] = sub_A97D20(a1, *(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFF0LL));
    *(_OWORD *)v476 = 0;
    v473 = v444;
    v474[0] = 0;
    v474[1] = 0;
    v475 = 0;
    sub_EE18A0(&ptr);
    sub_ED6F60((__int64)&v477, a1, (__int64)&ptr);
    sub_ED6B50((__int64)&v477, (__int64)v444, v80, v81, v82, v83);
    sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v84, v85, v86, v87);
    if ( (*(_BYTE *)(*((_QWORD *)v444 + 16) + 1LL) & 4) != 0
      || (v105 = *((_QWORD *)v444 + 13),
          sub_7052B0((__int64 *)(v105 + 96), v105, v88, v89, v90, v91),
          v98 = *(unsigned int *)(*((_QWORD *)v444 + 16) + 20LL),
          (_DWORD)v98) )
    {
      sub_B67C30((__int64)v444, &v510);
      v96 = sub_A7A590((__int64)v444, (__int64)&v510, v92, v93, v94, v95);
      v101 = v97;
      v102 = v96;
      if ( v96 == v97 )
      {
LABEL_115:
        v105 = *((_QWORD *)v444 + 13);
        sub_7052B0((__int64 *)(v105 + 96), v105, v97, v98, v99, v100);
        v97 = *(unsigned int *)(*((_QWORD *)v444 + 16) + 20LL);
        if ( !(_DWORD)v97
          || (v105 = (__int64)v444, sub_ED8E30((__int64)&v477, (__int64)v444, v97, v98, v99, v100), !v501) )
        {
          if ( v520 )
          {
            v501 = v520;
            LOBYTE(v502) = 1;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v102 + 12) & 1) == 0 )
          {
            v103 = sub_ED6580(*(__int64 **)(v102 + 16));
            v104 = sub_F63270(*(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFF0LL));
            v105 = *(_QWORD *)(v104 + 104);
            v106 = v104;
            sub_7052B0((__int64 *)(v105 + 96), v105, v107, v108, v109, v110);
            if ( (*(_BYTE *)(*(_QWORD *)(v106 + 128) + 1LL) & 4) != 0 )
              break;
            v105 = *(_QWORD *)(v106 + 104);
            sub_7052B0((__int64 *)(v105 + 96), v105, v97, v98, v99, v100);
            if ( *(_DWORD *)(*(_QWORD *)(v106 + 128) + 20LL) )
              break;
          }
          v102 += 24LL;
          if ( v101 == v102 )
            goto LABEL_115;
        }
        v501 = v106;
        LOBYTE(v502) = 0;
      }
    }
    v111 = sub_A7A590((__int64)v444, v105, v97, v98, v99, v100);
    v116 = v112;
    v117 = v111;
    if ( v111 != v112 )
    {
      *(_QWORD *)v453 = &v457;
      src = &v466;
      v454 = (__int64)v462;
      while ( 1 )
      {
        while ( 1 )
        {
          v118 = *(_BYTE *)(v117 + 12);
          v119 = sub_ED6580(*(__int64 **)(v117 + 16));
          v118 &= 1u;
          v105 = sub_F63270(*(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFF0LL));
          v449 = sub_EE5AB0(&v477, v105, v118);
          if ( !v118 )
          {
            v452 = v105;
            v105 = (__int64)src;
            v466 = _mm_loadh_ps((const double *)&v449);
            if ( !(unsigned __int8)sub_ED63D0(&v523, (__int64 *)src, *(_QWORD **)v453) )
              break;
          }
          v117 += 24LL;
          if ( v116 == v117 )
            goto LABEL_70;
        }
        v112 = v526;
        v120 = (__m128i *)v457;
        v121 = v524 + 1;
        v122 = 2 * v526;
        v115 = (unsigned int)(4 * (v524 + 1));
        v114 = 3 * v526;
        v462[0] = v457;
        if ( (unsigned int)v115 >= (unsigned int)v114 )
          goto LABEL_475;
        v105 = v526 - v525 - v121;
        v114 = v526 >> 3;
        if ( (unsigned int)v105 <= (unsigned int)v114 )
          break;
LABEL_67:
        v397 = v120->m128i_i64[0] == -4096;
        v524 = v121;
        if ( !v397 )
          --v525;
        v117 += 24LL;
        *v120 = _mm_load_si128((const __m128i *)&v466);
        if ( v116 == v117 )
          goto LABEL_70;
      }
      v122 = v526;
LABEL_475:
      sub_ED7940((__int64)&v523, v122, v526, v113, v114, v115);
      v105 = (__int64)src;
      sub_ED63D0(&v523, (__int64 *)src, (_QWORD *)v454);
      v120 = (__m128i *)v462[0];
      v121 = v524 + 1;
      goto LABEL_67;
    }
LABEL_70:
    if ( v501 )
    {
      v466.m128_u64[0] = v501;
      if ( (_BYTE)v502 )
      {
        v123 = sub_ED6490(v522, (__int64 *)&v466);
        if ( !v123 )
        {
          qword_48 = 0;
          BUG();
        }
        v124 = v123[1];
        *(_QWORD *)(v124 + 72) = 0;
        sub_ED82B0(&v466, (__int64)&v510, v501);
        sub_ED82B0(&v466, (__int64)&v521, v501);
        v105 = v124;
        sub_EE48A0(&v477, v124);
      }
      else
      {
        v333 = sub_ED6490(&v523, (__int64 *)&v466);
        if ( v333 )
          v333 = (__int64 *)v333[1];
        v105 = (__int64)v333;
        sub_EE4900(&v477, v333);
      }
    }
    else if ( sub_ED8AE0((__int64)v444, v105, v112, v113, v114, v115) )
    {
      v426 = 1;
      v427 = sub_A97FF0((__int64)v477, *(unsigned __int8 *)(*((_QWORD *)v477 + 2181) + 8LL));
      v428 = sub_A97FF0((__int64)v477, *(unsigned __int8 *)(*((_QWORD *)v477 + 2181) + 9LL));
      v429 = v428;
      if ( (v495 & 4) == 0 )
        v426 = v428;
      if ( v496 )
      {
        if ( v426 > v496 )
          v426 = v496;
        if ( v428 > v496 )
          v429 = v496;
      }
      v430 = sub_A97FF0((__int64)v477, v479);
      v431 = sub_A98060((__int64)v477, v426 * ((v430 - (v430 != 0)) / v426 + (v430 != 0)));
      v479 = v431;
      if ( (v495 & 0x10) == 0 && (v495 & 3) != 1 )
      {
        if ( v426 > v480 )
          v480 = v426;
        if ( v482 < v429 )
          v482 = v429;
        if ( v426 > *(__int64 *)v481 )
          *(_QWORD *)v481 = v426;
      }
      BYTE1(v502) = 1;
      BYTE3(v502) = 1;
      v432 = sub_A97FF0((__int64)v477, v431);
      v479 = sub_A98060((__int64)v477, v432 + v427);
      v105 = sub_A97FF0((__int64)v477, v479);
      v497 = sub_A98060((__int64)v477, v105);
    }
    v129 = sub_A7A590((__int64)v444, v105, v125, v126, v127, v128);
    v131 = v130;
    v132 = v129;
    if ( v129 == v130 )
    {
LABEL_85:
      sub_EE3AF0(&v477, v444);
      v498 = sub_A97FF0((__int64)v477, 8 * ((v479 != 0) + ((v479 - (unsigned __int64)(v479 != 0)) >> 3)));
      v499 = v480;
      v500 = *(_QWORD *)v481;
      sub_EE4B00(&v477, v444, v444);
      sub_ED8780((__int64)&v477, (__int64)v444, v139, v140, v141, v142);
      v146 = *(unsigned int *)(*(_QWORD *)(a1 + 17448) + 340LL);
      if ( ((1LL << v146) & 0x267) != 0 )
      {
        sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v143, v146, v144, v145);
        if ( (*(_BYTE *)(*((_QWORD *)v444 + 16) + 1LL) & 1) != 0 )
        {
LABEL_231:
          v148 = sub_A97FF0((__int64)v477, v479);
          v454 = v148;
          goto LABEL_88;
        }
      }
      else if ( ((1LL << v146) & 0x198) != 0 && sub_B9E190((__int64)v444, (__int64)v444, v143, v146, v144, v145) )
      {
        if ( (sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v414, v415, v416, v417),
              (*(_BYTE *)(*((_QWORD *)v444 + 16) + 9LL) & 1) != 0)
          || (sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v418, v419, v420, v421),
              (**((_BYTE **)v444 + 16) & 1) == 0)
          && (sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v418, v419, v420, v421),
              v438 = *((_QWORD *)v444 + 16),
              (*(_BYTE *)(v438 + 9) & 1) == 0)
          && ((*(_BYTE *)(v438 + 10) & 0x20) == 0 || (unsigned __int8)sub_B96D80((__int64)v444))
          || (sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v418, v419, v420, v421),
              (*(_BYTE *)(*((_QWORD *)v444 + 16) + 3LL) & 8) != 0)
          && (sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v439, v440, v441, v442),
              (*(_BYTE *)(*((_QWORD *)v444 + 16) + 9LL) & 1) == 0) )
        {
          sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v418, v419, v420, v421);
          if ( *(char *)(*((_QWORD *)v444 + 16) + 4LL) < 0 )
          {
            sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v422, v423, v424, v425);
            if ( (*(_BYTE *)(*((_QWORD *)v444 + 16) + 1LL) & 0x20) != 0 )
              goto LABEL_231;
          }
        }
      }
      v147 = sub_A97FF0((__int64)v477, v497);
      v148 = v498;
      v454 = v147;
LABEL_88:
      v149 = v479;
      v150 = sub_A97FF0((__int64)v477, v479);
      v151 = v480;
      v449 = v150;
      *(_QWORD *)v453 = *(_QWORD *)v481;
      v452 = *(_QWORD *)v483;
      v445 = sub_ED8AE0((__int64)v444, v149, v152, v153, *(__int64 *)v481, v154);
      v155 = v500;
      src = v484;
      v451 = (unsigned int)v485;
      v156 = v499;
      v157 = v476[1];
      v14 = (_QWORD *)sub_9C3B30((__int64 *)(a1 + 2352), 80, 3u);
      sub_ED5E50(
        v14,
        (_QWORD *)a1,
        v449,
        v151,
        *(__int64 *)v453,
        v452,
        v151,
        SBYTE1(v502),
        v445,
        -1,
        v454,
        src,
        v451,
        v148,
        v156,
        v155,
        v157,
        v501,
        (unsigned __int8)v502,
        0,
        0,
        0,
        (__int64)&v503,
        (__int64)&v506);
      sub_ED72B0((__int64)&v477);
      v158 = v475;
      if ( v475 )
      {
        v159 = (_QWORD *)v474[0];
        v160 = v474[0] + 16LL * v475;
        do
        {
          if ( (unsigned __int64)(*v159 - 0x7FFFFFFFFFFFFFFELL) > 1 )
          {
            v161 = v159[1];
            if ( v161 )
            {
              if ( (v161 & 4) != 0 )
              {
                v162 = (void **)(v161 & 0xFFFFFFFFFFFFFFF8LL);
                v163 = v162;
                if ( v162 )
                {
                  v164 = (void **)*v162;
                  if ( v164 != v163 + 2 )
                    free(v164);
                  operator delete(v163, 0x30u);
                }
              }
            }
          }
          v159 += 2;
        }
        while ( (_QWORD *)v160 != v159 );
        v158 = v475;
      }
      operator delete(v474[0], 16 * v158, 8);
      goto LABEL_100;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v132 + 12) & 1) != 0 )
          goto LABEL_80;
        v137 = sub_ED6580(*(__int64 **)(v132 + 16));
        v138 = sub_F63270(*(_QWORD *)(v137 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v138 != v501 || (_BYTE)v502 )
          break;
        v132 += 24LL;
        if ( v131 == v132 )
          goto LABEL_85;
      }
      if ( !v526 )
      {
LABEL_227:
        v136 = 0;
        goto LABEL_79;
      }
      v133 = (v526 - 1) & (((unsigned int)v138 >> 9) ^ ((unsigned int)v138 >> 4));
      v134 = (__int64 *)(v523 + 16LL * v133);
      v135 = *v134;
      if ( *v134 != v138 )
      {
        v136 = 0;
        v329 = 1;
        if ( v135 == -4096 )
          goto LABEL_79;
        while ( 1 )
        {
          v330 = v329 + 1;
          v133 = (v526 - 1) & (v329 + v133);
          v134 = (__int64 *)(v523 + 16LL * v133);
          v331 = *v134;
          if ( v138 == *v134 )
            break;
          v329 = v330;
          if ( v331 == -4096 )
            goto LABEL_227;
        }
      }
      v136 = v134[1];
LABEL_79:
      sub_EE4900(&v477, v136);
LABEL_80:
      v132 += 24LL;
      if ( v131 == v132 )
        goto LABEL_85;
    }
  }
  if ( v24 <= 2 )
  {
    v25 = *(_QWORD *)(a1 + 18648);
    v466.m128_u64[0] = a1;
    v449 = v25;
    v26 = sub_A97D20(a1, *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL));
    v467 = v22;
    v466.m128_u64[1] = v26;
    v471 = 0;
    v468 = nullptr;
    v469 = 0;
    v470 = 0;
    sub_EE18A0(&v466);
    v510 = 0;
    v477 = (unsigned __int8 *)a1;
    v492 = v494;
    v493 = 0x1000000000LL;
    v478 = &v466;
    v479 = 0;
    v480 = 0;
    *(_QWORD *)v481 = 0;
    v482 = 0;
    *(_QWORD *)v483 = 0;
    v484 = nullptr;
    v485 = 0;
    v486 = 0;
    v488 = 0;
    v489 = 0;
    v502 = nullptr;
    v503 = 0;
    v504 = 0;
    v505 = nullptr;
    v506 = 0;
    v507 = 0;
    v508 = 0;
    v511 = 0;
    v512 = 0;
    v513 = 0;
    v514 = 0;
    v515 = 0;
    v516 = 0;
    v517 = 0;
    v518 = 0;
    v519 = 0;
    v487 = 1;
    sub_ED76F0((__int64)&v477, (__int64)v23);
    v509 &= 0xC3u;
    v490 = 0;
    v491 = 0;
    v488 = sub_A97FF0((__int64)v477, *(unsigned __int8 *)(*((_QWORD *)v477 + 2181) + 8LL));
    v27 = *(unsigned __int8 *)(*((_QWORD *)v477 + 2181) + 9LL);
    v489 = sub_A97FF0((__int64)v477, v27);
    if ( *(_QWORD *)v483 && *(__int64 *)v483 < (__int64)v489 )
      v489 = *(_QWORD *)v483;
    v457 = nullptr;
    v32 = sub_A7A590((__int64)v444, v27, v28, v29, v30, v31);
    v37 = v33;
    v38 = v32;
    if ( v32 == v33 )
    {
      v51 = *((_QWORD *)v444 + 13);
      sub_7052B0((__int64 *)(v51 + 96), v51, v33, v34, v35, v36);
      if ( (*(_BYTE *)(*((_QWORD *)v444 + 16) + 1LL) & 4) == 0 )
        goto LABEL_33;
      v56 = v490;
    }
    else
    {
      v39 = 0;
      do
      {
        while ( 1 )
        {
          v44 = sub_ED6580(*(__int64 **)(v38 + 16));
          v45 = sub_F63270(*(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF0LL));
          sub_7052B0((__int64 *)(*(_QWORD *)(v45 + 104) + 96LL), *(_QWORD *)(v45 + 104), v46, v47, v48, v49);
          v39 |= (*(_BYTE *)(*(_QWORD *)(v45 + 128) + 1LL) & 4) != 0;
          v50 = sub_EDE580(v477, v45);
          if ( (*(_BYTE *)(v38 + 12) & 1) == 0 )
            break;
          v38 += 24LL;
          v509 |= 8u;
          if ( v37 == v38 )
            goto LABEL_25;
        }
        v40 = *(_QWORD *)(v50 + 72);
        if ( !v491 && *(__int64 *)(v40 + 32) >= 0 )
        {
          v491 = v45;
          v509 |= 8u;
          v40 = *(_QWORD *)(v50 + 72);
        }
        if ( (*(_BYTE *)(v40 + 40) & 2) != 0 )
        {
          if ( !v490 )
          {
            v490 = v45;
            v509 = (4 * *(_BYTE *)(*(_QWORD *)(v50 + 72) + 40LL)) & 0x20 | v509 & 0xDF;
          }
          sub_ED9780((__int64)&v477, (__int64)v444, v45, v50, (__int64)&v457, v43);
        }
        v38 += 24LL;
      }
      while ( v37 != v38 );
LABEL_25:
      v51 = *((_QWORD *)v444 + 13);
      sub_7052B0((__int64 *)(v51 + 96), v51, v41, v40, v42, v43);
      v56 = v490;
      if ( (*(_BYTE *)(*((_QWORD *)v444 + 16) + 1LL) & 4) == 0 )
        goto LABEL_34;
      if ( v39 )
      {
        if ( v490 )
        {
LABEL_34:
          v60 = v56 == 0;
          v61 = sub_A7A590((__int64)v444, v51, v52, v53, v54, v55);
          v63 = v62;
          v64 = v61;
          if ( v61 != v62 )
          {
            v449 = (__int64)v462;
            while ( 1 )
            {
              if ( (*(_BYTE *)(v64 + 12) & 1) != 0 )
                goto LABEL_39;
              v71 = sub_ED6580(*(__int64 **)(v64 + 16));
              v462[0] = (void *)sub_F63270(*(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF0LL));
              v73 = sub_EDE580(v477, v462[0]);
              v74 = *(__int64 **)(v73 + 72);
              v75 = *((_BYTE *)v74 + 40);
              if ( (v75 & 2) != 0 )
              {
                v328 = *v74;
                v486 = *sub_EDB1E0((__int64)&v502, (__int64 *)v449) + v328;
                goto LABEL_39;
              }
              if ( v60 )
                v509 = v509 & 0xDF | (4 * v75) & 0x20;
              sub_ED9780((__int64)&v477, (__int64)v444, (__int64)v462[0], v73, (__int64)&v457, v72);
              v78 = v504;
              v70 = **(_QWORD **)(v73 + 72);
              if ( !v504 )
                break;
              v65 = v462[0];
              v66 = v504 - 1;
              v67 = v66 & ((LODWORD(v462[0]) >> 9) ^ (LODWORD(v462[0]) >> 4));
              v68 = (void **)&v502[2 * v67];
              v69 = *v68;
              if ( v462[0] != *v68 )
              {
                v408 = 1;
                v409 = nullptr;
                if ( v69 == (void *)-4096LL )
                {
LABEL_431:
                  ptr.m128_u64[0] = (unsigned __int64)v68;
                  v76 = (unsigned int)(v503 + 1);
                  v77 = (unsigned int)(4 * v76);
                  if ( (unsigned int)v77 < 3 * v504 )
                  {
                    v77 = v504 >> 3;
                    if ( v504 - HIDWORD(v503) - (unsigned int)v76 <= (unsigned int)v77 )
                    {
LABEL_47:
                      sub_7055A0((__int64)&v502, v78, v76, (__int64)v65, v77, v66);
                      sub_A6DD20((__int64 *)&v502, (__int64 *)v449, &ptr);
                      v65 = v462[0];
                      LODWORD(v76) = v503 + 1;
                      v68 = (void **)ptr.m128_u64[0];
                    }
                    v397 = (char *)*v68 + 4096 == nullptr;
                    LODWORD(v503) = v76;
                    if ( !v397 )
                      --HIDWORD(v503);
                    *v68 = v65;
                    v68[1] = nullptr;
                    goto LABEL_38;
                  }
LABEL_46:
                  v78 = 2 * v504;
                  goto LABEL_47;
                }
                while ( 1 )
                {
                  if ( v69 == (void *)-8192LL && !v409 )
                    v409 = v68;
                  v67 = v66 & (v408 + v67);
                  v68 = (void **)&v502[2 * v67];
                  v69 = *v68;
                  if ( v462[0] == *v68 )
                    break;
                  if ( v69 == (void *)-4096LL )
                  {
                    if ( v409 )
                      v68 = v409;
                    goto LABEL_431;
                  }
                  ++v408;
                }
              }
              v70 += (__int64)v68[1];
LABEL_38:
              v486 = v70;
              v60 = 0;
LABEL_39:
              v64 += 24LL;
              if ( v63 == v64 )
                goto LABEL_122;
            }
            ptr.m128_u64[0] = 0;
            goto LABEL_46;
          }
LABEL_122:
          if ( (v509 & 8) != 0 )
          {
            if ( v491 )
            {
              v332 = *(_QWORD *)(*(_QWORD *)(sub_EDE580(v477, v491) + 72) + 32LL);
              v486 = *sub_EDB1E0((__int64)&v502, &v491) + v332;
            }
          }
          else
          {
            v486 = -1;
          }
          sub_EE4ED0(&v477, v444);
          v210 = v509;
          v211 = v482;
          if ( (v509 & 8) == 0 )
          {
            if ( (v509 & 4) == 0 )
              goto LABEL_148;
            v334 = v482;
            v335 = v488 != 0;
            if ( (__int64)v484 >= v482 )
              v334 = (unsigned __int64)v484;
            v207 = (v488 - v335) % v334;
            v214 = v334 * ((v488 - v335) / v334 + v335);
            goto LABEL_131;
          }
          if ( v491 )
            goto LABEL_126;
          v395 = v486;
          v208 = v486 != 0;
          v207 = (v486 - v208) % v489;
          v486 = v489 * (v208 + (v486 - v208) / v489);
          v396 = v488 + v486;
          if ( (v509 & 0x40) != 0 )
          {
            if ( v396 > v479 )
              v479 = v488 + v486;
LABEL_126:
            if ( (v509 & 4) == 0 )
            {
LABEL_362:
              if ( !v491 )
              {
LABEL_146:
                if ( (__int64)v489 > (__int64)v211 )
                {
                  v211 = v489;
                  v482 = v489;
                }
                else
                {
                  v211 = v482;
                }
              }
LABEL_148:
              if ( *(_QWORD *)v483 && (__int64)v211 > *(__int64 *)v483 )
                v211 = *(_QWORD *)v483;
              v223 = v210 & 0x40;
              if ( !(_DWORD)v223 )
              {
                v223 = v479 != 0;
                v207 = (v479 - v223) % v211;
                v211 *= v223 + (v479 - v223) / v211;
                v479 = v211;
              }
              v224 = v477;
              v480 = v479;
              v225 = sub_B8C970((__int64)v444, v223, v207, v211, v208, v209);
              v226 = (void *)sub_A97FF0((__int64)v224, v225);
              if ( (__int64)v484 < (__int64)v226 )
                v484 = v226;
              v231 = (v509 & 8) != 0;
              if ( (v509 & 8) == 0 )
              {
LABEL_213:
                sub_ED8B30((__int64)&v477, (__int64)v444);
                v447 = v479;
                v316 = v482;
                v317 = v484;
                v452 = *(_QWORD *)v481;
                v318 = v486;
                v319 = v492;
                v449 = v480;
                v320 = (unsigned int)v493;
                v14 = (_QWORD *)sub_9C3B30((__int64 *)(a1 + 2352), 80, 3u);
                sub_ED5E50(
                  v14,
                  (_QWORD *)a1,
                  v447,
                  v316,
                  v316,
                  v316,
                  (__int64)v317,
                  (v509 & 4) != 0,
                  (v509 & 4) != 0 || v490 != 0,
                  v318,
                  v452,
                  v319,
                  v320,
                  v449,
                  v316,
                  v316,
                  0,
                  v490,
                  0,
                  v491,
                  (v509 & 0x10) != 0,
                  (v509 & 0x20) != 0,
                  (__int64)&v502,
                  (__int64)&v505);
                sub_ED7200((__int64)&v477);
                v321 = v470;
                if ( v470 )
                {
                  v322 = v468;
                  v323 = &v468[2 * v470];
                  do
                  {
                    if ( (unsigned __int64)(*v322 - 0x7FFFFFFFFFFFFFFELL) > 1 )
                    {
                      v324 = v322[1];
                      if ( v324 )
                      {
                        if ( (v324 & 4) != 0 )
                        {
                          v325 = (void **)(v324 & 0xFFFFFFFFFFFFFFF8LL);
                          v326 = v325;
                          if ( v325 )
                          {
                            v327 = (void **)*v325;
                            if ( v327 != v326 + 2 )
                              free(v327);
                            operator delete(v326, 0x30u);
                          }
                        }
                      }
                    }
                    v322 += 2;
                  }
                  while ( v323 != v322 );
                  v321 = v470;
                }
                operator delete(v468, 16 * v321, 8);
                goto LABEL_100;
              }
              v232 = *(_QWORD *)v483;
              if ( *(_QWORD *)v483 )
              {
                if ( *(__int64 *)v483 >= 4 )
                  v232 = 4;
              }
              else
              {
                v232 = 4;
              }
              sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v227, v228, v229, v230);
              v237 = *((_QWORD *)v444 + 16);
              if ( (*(_BYTE *)(v237 + 32) & 1) != 0 )
                v238 = sub_B969C0(v237);
              else
                v238 = *(_QWORD *)(v237 + 32);
              sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v233, v234, v235, v236);
              v239 = *((_QWORD *)v444 + 13);
              v240 = v238 + 24LL * *(unsigned int *)(*((_QWORD *)v444 + 16) + 20LL);
              sub_7052B0((__int64 *)(v239 + 96), v239, v241, v242, v243, v244);
              v249 = *((_QWORD *)v444 + 16);
              if ( (*(_BYTE *)(v249 + 32) & 1) != 0 )
                v250 = sub_B969C0(v249);
              else
                v250 = *(_QWORD *)(v249 + 32);
              for ( ; v250 != v240; v250 += 24 )
              {
                v251 = sub_ED6580(*(__int64 **)(v250 + 16));
                v239 = sub_F63270(*(_QWORD *)(v251 & 0xFFFFFFFFFFFFFFF0LL));
                v252 = *(void **)(sub_EDE580(v477, v239) + 40);
                if ( (__int64)v252 > (__int64)v484 )
                  v484 = v252;
              }
              if ( (__int64)v484 >= v232 )
                v232 = (__int64)v484;
              v458 = 2;
              v449 = (__int64)&v457;
              *(_QWORD *)v453 = v232;
              v457 = &v461;
              v459 = 0;
              v460 = 1;
              if ( (unsigned int)sub_E772E0((__int64)v444, v239, v245, v246, v247, v248) == 2 )
              {
                v433 = sub_A7A640((__int64)v444, v239, v253, v254, v255, v256);
                v434 = v273;
                for ( i = v433; v434 != (char *)i; i += 24LL )
                {
                  v436 = sub_ED6580(*(__int64 **)(i + 16));
                  v437 = sub_F63270(*(_QWORD *)(v436 & 0xFFFFFFFFFFFFFFF0LL));
                  if ( (*(_BYTE *)(*(_QWORD *)(sub_EDE580(v477, v437) + 72) + 40LL) & 2) != 0 )
                    sub_ED82B0(&ptr, v449, v437);
                }
                goto LABEL_189;
              }
              v257 = sub_A7A590((__int64)v444, v239, v253, v254, v255, v256);
              v452 = v258;
              v262 = v257;
              if ( v257 != v258 )
              {
                LOBYTE(src) = v231;
                do
                {
                  v263 = sub_ED6580(*(__int64 **)(v262 + 16));
                  v264 = sub_F63270(*(_QWORD *)(v263 & 0xFFFFFFFFFFFFFFF0LL));
                  v265 = *(_QWORD *)(sub_EDE580(v477, v264) + 72);
                  if ( *(_DWORD *)(v265 + 96) )
                    sub_ED9270(
                      &ptr,
                      *(_QWORD **)(v265 + 88),
                      (_QWORD *)(*(_QWORD *)(v265 + 88) + 24LL * *(unsigned int *)(v265 + 104)),
                      v265 + 88,
                      0);
                  else
                    sub_ED9270(
                      &ptr,
                      (_QWORD *)(*(_QWORD *)(v265 + 88) + 24LL * *(unsigned int *)(v265 + 104)),
                      (_QWORD *)(*(_QWORD *)(v265 + 88) + 24LL * *(unsigned int *)(v265 + 104)),
                      v265 + 88,
                      1);
                  v266 = ptr.m128_u64[1];
                  v267 = ptr.m128_u64[0];
                  v268 = (_QWORD *)(*(_QWORD *)(v265 + 88) + 24LL * *(unsigned int *)(v265 + 104));
                  sub_ED9270(&ptr, v268, v268, v265 + 88, 1);
                  v269 = ptr.m128_u64[0];
                  while ( v267 != v269 )
                  {
                    if ( !*(_BYTE *)(v267 + 16) )
                      goto LABEL_176;
                    v336 = *(_QWORD *)v267;
                    if ( !v460 )
                      goto LABEL_255;
                    v337 = (char *)v457;
                    v338 = 8LL * HIDWORD(v458);
                    v260 = (char *)v457 + v338;
                    if ( v457 != (char *)v457 + v338 )
                    {
                      v339 = (char *)v457;
                      if ( v336 == *(_QWORD *)v457 )
                        goto LABEL_248;
                      do
                      {
                        v339 += 8;
                        if ( v260 == v339 )
                          break;
                      }
                      while ( v336 != *(_QWORD *)v339 );
                    }
                    if ( HIDWORD(v458) < (unsigned int)v458 )
                    {
                      ++HIDWORD(v458);
                      *(_QWORD *)v260 = v336;
                      v337 = (char *)v457;
                      v339 = (char *)v457 + v338;
                    }
                    else
                    {
LABEL_255:
                      v339 = (char *)sub_2236760(v449, v336);
                      v337 = (char *)v457;
                      if ( !v460 )
                      {
                        v259 = (unsigned int)v458;
                        v340 = (char *)v457 + 8 * (unsigned int)v458;
                        goto LABEL_249;
                      }
                    }
LABEL_248:
                    v259 = HIDWORD(v458);
                    v340 = &v337[8 * HIDWORD(v458)];
LABEL_249:
                    if ( v340 != v339 && *(_QWORD *)v339 >= 0xFFFFFFFFFFFFFFFELL )
                    {
                      v341 = v339 + 8;
                      do
                      {
                        v259 = (__int64)v341;
                        if ( v340 == v341 )
                          break;
                        v341 += 8;
                      }
                      while ( *(_QWORD *)v259 >= 0xFFFFFFFFFFFFFFFELL );
                    }
LABEL_176:
                    v258 = v267 + 24;
                    if ( v267 + 24 != v266 )
                    {
                      v270 = *(_QWORD *)(v267 + 24);
                      if ( v270 != -8192 && v270 != -4096 )
                      {
                        v267 += 24LL;
                        continue;
                      }
                      v271 = (__int64 *)(v267 + 48);
                      while ( 1 )
                      {
                        v267 = (unsigned __int64)v271;
                        if ( v271 == (__int64 *)v266 )
                          break;
                        v258 = *v271;
                        v271 += 3;
                        if ( v258 != -4096 && v258 != -8192 )
                          goto LABEL_183;
                      }
                    }
                    v267 = v266;
LABEL_183:
                    ;
                  }
                  v262 += 24LL;
                }
                while ( v452 != v262 );
                v231 = (char)src;
              }
              v272 = *((_QWORD *)v444 + 13);
              sub_7052B0((__int64 *)(v272 + 96), v272, v258, v259, (__int64)v260, v261);
              if ( (**((_BYTE **)v444 + 16) & 1) == 0 )
              {
                v272 = *((_QWORD *)v444 + 13);
                sub_7052B0((__int64 *)(v272 + 96), v272, (__int64)v273, v274, v275, v276);
                if ( (**((_BYTE **)v444 + 16) & 0x40) == 0 )
                  goto LABEL_189;
              }
              if ( !(unsigned int)sub_E772E0((__int64)v444, v272, (__int64)v273, v274, v275, v276) )
                goto LABEL_189;
              BYTE4(v473) = 1;
              ptr.m128_u64[1] = 8;
              LODWORD(v473) = 0;
              ptr.m128_u64[0] = (unsigned __int64)v474;
              v452 = (__int64)v462;
              v462[0] = &v465;
              v462[1] = &dword_0 + 2;
              v464 = 1;
              v463 = 0;
              v357 = sub_B8E970((__int64)(v444 + 64));
              v361 = v357;
              if ( !v357 )
              {
LABEL_307:
                v363 = ptr.m128_u32[3];
                if ( ptr.m128_i32[3] != (_DWORD)v473 )
                {
                  src = v456;
                  while ( 1 )
                  {
                    if ( !BYTE4(v473) )
                      v363 = ptr.m128_u32[2];
                    v364 = ptr.m128_u64[0] + 8 * v363;
                    v365 = *(_QWORD *)ptr.m128_u64[0];
                    if ( ptr.m128_u64[0] != v364 && v365 >= 0xFFFFFFFFFFFFFFFELL )
                    {
                      v366 = (unsigned __int64 *)(ptr.m128_u64[0] + 8);
                      do
                      {
                        v365 = *v366;
                        if ( (unsigned __int64 *)v364 == v366 )
                          break;
                        ++v366;
                      }
                      while ( v365 >= 0xFFFFFFFFFFFFFFFELL );
                    }
                    v367 = sub_B98510(v365);
                    v368 = BYTE4(v473);
                    v370 = v369;
                    v371 = (__int64 *)v367;
                    if ( (__int64 *)v367 != v369 )
                      break;
                    v391 = *(_QWORD *)(sub_B8C1B0(v365 + 72) + 16);
                    if ( (v391 & 4) != 0 )
                      v392 = *(_QWORD *)(v391 & 0xFFFFFFFFFFFFFFF8LL);
                    else
                      v392 = v391 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( v392 )
                      v392 -= 64LL;
                    sub_ED82B0((__m128 *)src, v452, v392);
                    v368 = BYTE4(v473);
LABEL_332:
                    if ( v368 )
                    {
                      v363 = ptr.m128_u32[3];
                      v272 = ptr.m128_u64[0];
                      v380 = (int)v473;
                      v358 = ptr.m128_u64[0] + 8LL * ptr.m128_u32[3];
                      if ( ptr.m128_u64[0] != v358 )
                      {
                        v381 = (__int64 *)ptr.m128_u64[0];
                        if ( *(_QWORD *)ptr.m128_u64[0] == v365 )
                        {
LABEL_388:
                          v363 = (unsigned int)(ptr.m128_i32[3] - 1);
                          ptr.m128_i32[3] = v363;
                          v358 = *(_QWORD *)(ptr.m128_u64[0] + 8LL * (unsigned int)v363);
                          *v381 = v358;
                        }
                        else
                        {
                          while ( (__int64 *)v358 != ++v381 )
                          {
                            if ( *v381 == v365 )
                              goto LABEL_388;
                          }
                        }
                      }
                    }
                    else
                    {
                      v272 = v365;
                      v393 = (_QWORD *)sub_2236570(&ptr, v365);
                      if ( v393 )
                      {
                        *v393 = -2;
                        v363 = ptr.m128_u32[3];
                        v380 = (_DWORD)v473 + 1;
                        LODWORD(v473) = (_DWORD)v473 + 1;
                      }
                      else
                      {
                        v363 = ptr.m128_u32[3];
                        v380 = (int)v473;
                      }
                    }
                    if ( (_DWORD)v363 == v380 )
                      goto LABEL_339;
                  }
                  while ( 1 )
                  {
                    v372 = *v371;
                    if ( v368 )
                    {
                      v373 = ptr.m128_u64[0];
                      v359 = ptr.m128_u32[3];
                      v374 = 8LL * ptr.m128_u32[3];
                      v375 = (_QWORD *)(ptr.m128_u64[0] + v374);
                      if ( ptr.m128_u64[0] != ptr.m128_u64[0] + v374 )
                      {
                        v376 = (_QWORD *)ptr.m128_u64[0];
                        if ( v372 == *(_QWORD *)ptr.m128_u64[0] )
                          goto LABEL_325;
                        while ( v375 != ++v376 )
                        {
                          if ( v372 == *v376 )
                            goto LABEL_325;
                        }
                      }
                      if ( ptr.m128_i32[3] < (unsigned __int32)ptr.m128_i32[2] )
                        break;
                    }
                    v376 = (_QWORD *)sub_2236760(&ptr, v372);
                    v368 = BYTE4(v473);
                    v373 = ptr.m128_u64[0];
                    if ( BYTE4(v473) )
                      goto LABEL_325;
                    v377 = ptr.m128_u64[0] + 8LL * ptr.m128_u32[2];
LABEL_326:
                    if ( (_QWORD *)v377 != v376 && *v376 >= 0xFFFFFFFFFFFFFFFELL )
                    {
                      v378 = v376 + 1;
                      do
                      {
                        v379 = v378;
                        if ( (_QWORD *)v377 == v378 )
                          break;
                        ++v378;
                      }
                      while ( *v379 >= 0xFFFFFFFFFFFFFFFELL );
                    }
                    if ( v370 == ++v371 )
                      goto LABEL_332;
                  }
                  v359 = (unsigned int)++ptr.m128_i32[3];
                  *v375 = v372;
                  v373 = ptr.m128_u64[0];
                  v376 = (_QWORD *)(ptr.m128_u64[0] + v374);
LABEL_325:
                  v368 = v231;
                  v377 = v373 + 8LL * ptr.m128_u32[3];
                  goto LABEL_326;
                }
LABEL_339:
                v382 = sub_A7A640((__int64)v444, v272, v363, v358, v359, v360);
                v383 = v273;
                v384 = v382;
                if ( (char *)v382 != v273 )
                {
                  while ( 1 )
                  {
                    v385 = sub_ED6580(*(__int64 **)(v384 + 16));
                    v386 = sub_F63270(*(_QWORD *)(v385 & 0xFFFFFFFFFFFFFFF0LL));
                    v387 = v386;
                    if ( v460 )
                      break;
                    if ( !sub_2236570(v449, v386) )
                      goto LABEL_384;
LABEL_345:
                    v384 += 24LL;
                    if ( v383 == (char *)v384 )
                      goto LABEL_346;
                  }
                  v388 = v457;
                  v273 = (char *)v457 + 8 * HIDWORD(v458);
                  if ( v457 != v273 )
                  {
                    while ( v387 != *v388 )
                    {
                      if ( v273 == (char *)++v388 )
                        goto LABEL_384;
                    }
                    goto LABEL_345;
                  }
LABEL_384:
                  if ( (unsigned __int8)sub_ED8D80(v452, v387, (__int64)v273, v274, v275, v276) )
                    sub_ED82B0(v456, v449, v387);
                  goto LABEL_345;
                }
LABEL_346:
                if ( !v464 )
                  free(v462[0]);
                if ( !BYTE4(v473) )
                  free((void *)ptr.m128_u64[0]);
LABEL_189:
                sub_7052B0(
                  (__int64 *)(*((_QWORD *)v444 + 13) + 96LL),
                  *((_QWORD *)v444 + 13),
                  (__int64)v273,
                  v274,
                  v275,
                  v276);
                v281 = *((_QWORD *)v444 + 16);
                if ( (*(_BYTE *)(v281 + 32) & 1) != 0 )
                  v282 = sub_B969C0(v281);
                else
                  v282 = *(_QWORD *)(v281 + 32);
                sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v277, v278, v279, v280);
                v283 = (__int64 **)(v282 + 24LL * *(unsigned int *)(*((_QWORD *)v444 + 16) + 20LL));
                sub_7052B0((__int64 *)(*((_QWORD *)v444 + 13) + 96LL), *((_QWORD *)v444 + 13), v284, v285, v286, v287);
                v288 = *((_QWORD *)v444 + 16);
                if ( (*(_BYTE *)(v288 + 32) & 1) != 0 )
                  v289 = (__int64 **)sub_B969C0(v288);
                else
                  v289 = *(__int64 ***)(v288 + 32);
                v452 = (__int64)v462;
                if ( v289 != v283 )
                {
                  src = v283;
                  v290 = 0;
                  while ( 1 )
                  {
                    v291 = sub_ED6580(v289[2]);
                    v292 = sub_F63270(*(_QWORD *)(v291 & 0xFFFFFFFFFFFFFFF0LL));
                    v293 = v292;
                    v295 = sub_EDE580(v477, v292);
                    if ( v460 )
                      break;
                    LOBYTE(v346) = sub_2236570(v449, v292) != 0;
                    if ( v290 )
                    {
                      v347 = *(_QWORD *)(v290 + 72);
                      if ( v347 )
                      {
                        if ( (*(_BYTE *)(v347 + 40) & 4) != 0 && (*(_BYTE *)(*(_QWORD *)(v295 + 72) + 40LL) & 8) != 0 )
                          goto LABEL_272;
                      }
                    }
LABEL_267:
                    if ( (_BYTE)v346 )
                      goto LABEL_268;
LABEL_205:
                    v301 = 0;
LABEL_206:
                    sub_ED6340((__int64)&v477, (double *)v295);
                    v305 = v302;
                    if ( (v509 & 0x40) == 0 )
                    {
                      v306 = v479 != 0;
                      v307 = (v479 - v306) / v302;
                      v308 = (v479 - v306) % v302;
                      v309 = v307 + v306;
                      v310 = v309 * v305;
                      goto LABEL_208;
                    }
                    if ( v519 )
                    {
                      v342 = (v519 - 1) & (((unsigned int)v292 >> 9) ^ ((unsigned int)v292 >> 4));
                      v343 = (__int64 *)(v517 + 16LL * v342);
                      v344 = *v343;
                      if ( *v343 == v293 )
                        goto LABEL_260;
                      v351 = 1;
                      if ( v344 != -4096 )
                      {
                        while ( 1 )
                        {
                          v352 = v351 + 1;
                          v342 = (v519 - 1) & (v351 + v342);
                          v343 = (__int64 *)(v517 + 16LL * v342);
                          v353 = *v343;
                          if ( v293 == *v343 )
                            break;
                          v351 = v352;
                          if ( v353 == -4096 )
                            goto LABEL_287;
                        }
LABEL_260:
                        sub_ED8F30(&ptr, v343, (_QWORD *)(16LL * v519 + v517), (__int64)&v517, 1);
                        v345 = ptr.m128_u64[0];
                        goto LABEL_261;
                      }
                    }
LABEL_287:
                    sub_ED8F30(&ptr, (_QWORD *)(v517 + 16LL * v519), (_QWORD *)(v517 + 16LL * v519), (__int64)&v517, 1);
                    v345 = ptr.m128_u64[0];
LABEL_261:
                    sub_ED8F30(&ptr, (_QWORD *)(v517 + 16LL * v519), (_QWORD *)(v517 + 16LL * v519), (__int64)&v517, 1);
                    if ( ptr.m128_u64[0] == v345 )
                      v310 = v479;
                    else
                      v310 = *(_QWORD *)(v345 + 8);
LABEL_208:
                    v311 = v507;
                    ptr.m128_u64[0] = v293;
                    ptr.m128_u64[1] = v310;
                    LOBYTE(v473) = v301;
                    if ( !v507 )
                    {
                      v462[0] = nullptr;
                      goto LABEL_418;
                    }
                    v312 = v505;
                    LODWORD(v313) = (v507 - 1) & (((unsigned int)v293 >> 9) ^ ((unsigned int)v293 >> 4));
                    v314 = &v505[3 * (unsigned int)v313];
                    v315 = *v314;
                    if ( v293 != *v314 )
                    {
                      v354 = 1;
                      v309 = 0;
                      if ( v315 != -4096 )
                      {
                        while ( 1 )
                        {
                          if ( v315 == -8192 && !v309 )
                            v309 = (__int64)v314;
                          v313 = (v507 - 1) & ((_DWORD)v313 + v354);
                          v314 = &v505[3 * v313];
                          v315 = *v314;
                          if ( v293 == *v314 )
                            goto LABEL_210;
                          if ( v315 == -4096 )
                          {
                            if ( v309 )
                              v314 = (__int64 *)v309;
                            break;
                          }
                          ++v354;
                        }
                      }
                      v462[0] = v314;
                      v308 = (unsigned int)(v506 + 1);
                      v303 = 3 * v507;
                      v304 = (unsigned int)(4 * v308);
                      if ( (unsigned int)v304 < (unsigned int)v303 )
                      {
                        v303 = v507 - HIDWORD(v506) - (unsigned int)v308;
                        v304 = v507 >> 3;
                        if ( (unsigned int)v303 > (unsigned int)v304 )
                        {
LABEL_291:
                          v397 = *v314 == -4096;
                          LODWORD(v506) = v308;
                          if ( !v397 )
                            --HIDWORD(v506);
                          v355 = _mm_loadu_si128((const __m128i *)&ptr.m128_u16[4]);
                          *v314 = v293;
                          *(__m128i *)(v314 + 1) = v355;
                          goto LABEL_210;
                        }
                        v407 = v507;
LABEL_419:
                        sub_A921D0(&v505, v407, v308, v303, v304, v309);
                        sub_A6DDE0((__int64 *)&v505, (__int64 *)&ptr, (_QWORD *)v452);
                        v293 = ptr.m128_u64[0];
                        v312 = v505;
                        v311 = v507;
                        LODWORD(v308) = v506 + 1;
                        v314 = (__int64 *)v462[0];
                        goto LABEL_291;
                      }
LABEL_418:
                      v407 = 2 * v507;
                      goto LABEL_419;
                    }
LABEL_210:
                    v290 = v295;
                    v289 += 3;
                    sub_ED95C0((__m128 *)v452, v314, &v312[3 * v311], (__int64)&v505, 1);
                    v479 = v310 + **(_QWORD **)(v295 + 72);
                    if ( v289 == src )
                      goto LABEL_211;
                  }
                  v298 = v457;
                  v299 = (char *)v457 + 8 * HIDWORD(v458);
                  if ( v457 != v299 )
                  {
                    if ( *(_QWORD *)v457 == v292 )
                    {
LABEL_275:
                      if ( !v290
                        || (v349 = *(_QWORD *)(v290 + 72)) == 0
                        || (*(_BYTE *)(v349 + 40) & 4) == 0
                        || (v350 = *(_QWORD *)(v295 + 72),
                            v346 = (*(_BYTE *)(v350 + 40) & 8) != 0,
                            (*(_BYTE *)(v350 + 40) & 8) == 0) )
                      {
LABEL_268:
                        v301 = 1;
                        goto LABEL_269;
                      }
LABEL_272:
                      if ( (v444[28] & 0x7Fu) - 59 > 2
                        || (LOBYTE(v454) = v346,
                            v348 = sub_ED6660((__int64)v444, v292, v346, v294, v296, v297),
                            LOBYTE(v346) = v454,
                            !v348) )
                      {
                        v301 = v346;
LABEL_269:
                        v479 = *(_QWORD *)v453
                             * ((v479 != 0) + (v479 - (unsigned __int64)(v479 != 0)) / *(_QWORD *)v453)
                             + 4;
                        if ( v482 <= *(__int64 *)v453 )
                          v482 = *(_QWORD *)v453;
                        goto LABEL_206;
                      }
                      goto LABEL_267;
                    }
                    while ( v299 != (char *)++v298 )
                    {
                      if ( v292 == *v298 )
                        goto LABEL_275;
                    }
                  }
                  if ( !v290 )
                    goto LABEL_205;
                  v300 = *(_QWORD *)(v290 + 72);
                  if ( !v300 || (*(_BYTE *)(v300 + 40) & 4) == 0 || (*(_BYTE *)(*(_QWORD *)(v295 + 72) + 40LL) & 8) == 0 )
                    goto LABEL_205;
                  v346 = 0;
                  goto LABEL_272;
                }
LABEL_211:
                if ( !v460 )
                  free(v457);
                goto LABEL_213;
              }
              if ( (*(_BYTE *)(v357 + 28) & 0x7Fu) - 35 > 3 )
              {
                do
                {
                  v362 = *(_QWORD *)(v361 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  v361 = v362;
                  if ( !v362 )
                    goto LABEL_307;
                }
                while ( (*(_BYTE *)(v362 + 28) & 0x7Fu) - 35 > 3 );
              }
LABEL_350:
              if ( !(unsigned __int8)sub_F7D750(v361)
                || (*(_BYTE *)(v361 + 28) & 0x7F) == 0x24
                || (*(_BYTE *)(v361 + 82) & 8) != 0 )
              {
                goto LABEL_355;
              }
              if ( !BYTE4(v473) )
                goto LABEL_486;
              v358 = ptr.m128_u64[0];
              v272 = 8LL * ptr.m128_u32[3];
              v411 = (__int64 *)(ptr.m128_u64[0] + v272);
              if ( ptr.m128_u64[0] != ptr.m128_u64[0] + v272 )
              {
                v412 = (_QWORD *)ptr.m128_u64[0];
                if ( *(_QWORD *)ptr.m128_u64[0] == v361 )
                  goto LABEL_445;
                while ( v411 != ++v412 )
                {
                  if ( *v412 == v361 )
                    goto LABEL_445;
                }
              }
              if ( ptr.m128_i32[3] < (unsigned __int32)ptr.m128_i32[2] )
              {
                ++ptr.m128_i32[3];
                *v411 = v361;
                v358 = ptr.m128_u64[0];
                v412 = (_QWORD *)(ptr.m128_u64[0] + v272);
              }
              else
              {
LABEL_486:
                v272 = v361;
                v412 = (_QWORD *)sub_2236760(&ptr, v361);
                v358 = ptr.m128_u64[0];
                if ( !BYTE4(v473) )
                {
                  v413 = ptr.m128_u64[0] + 8LL * ptr.m128_u32[2];
LABEL_446:
                  if ( (_QWORD *)v413 != v412 )
                  {
                    v358 = *v412 + 2LL;
                    if ( *v412 == -2 || v358 == 1 )
                    {
                      do
                        ++v412;
                      while ( (_QWORD *)v413 != v412 && *v412 >= 0xFFFFFFFFFFFFFFFELL );
                    }
                  }
LABEL_355:
                  while ( 1 )
                  {
                    v389 = *(_QWORD *)(v361 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v361 = v389;
                    if ( !v389 )
                      goto LABEL_307;
                    if ( (*(_BYTE *)(v389 + 28) & 0x7Fu) - 35 <= 3 )
                      goto LABEL_350;
                  }
                }
              }
LABEL_445:
              v413 = v358 + 8LL * ptr.m128_u32[3];
              goto LABEL_446;
            }
            v212 = v482;
            v213 = v488 != 0;
            if ( (__int64)v484 >= v482 )
              v212 = (unsigned __int64)v484;
            v207 = (v488 - v213) % v212;
            v214 = v212 * ((v488 - v213) / v212 + v213);
            goto LABEL_130;
          }
          v397 = v396 == v395;
          v398 = v396 - v395;
          v399 = (char *)v492;
          if ( (__int64)v484 >= v482 )
            v211 = (unsigned __int64)v484;
          v400 = v211 * ((v398 - (unsigned __int64)!v397) / v211 + !v397);
          v401 = (char *)v492 + 8 * (unsigned int)v493;
          v479 += v400;
          if ( v492 != v401 )
          {
            do
            {
              *(_QWORD *)v399 += sub_A98060((__int64)v477, v400);
              v399 += 8;
            }
            while ( v401 != v399 );
          }
          if ( (_DWORD)v503 )
          {
            sub_ED8F30(&ptr, v502, &v502[2 * v504], (__int64)&v502, 0);
            v404 = ptr.m128_u64[1];
            v402 = ptr.m128_u64[0];
          }
          else
          {
            v402 = sub_ED8FA0((__int64)&v502);
            v404 = v403;
          }
          v405 = sub_ED8FA0((__int64)&v502);
          if ( v405 == v402 )
          {
LABEL_410:
            v210 = v509;
            v211 = v482;
            v390 = (v509 & 8) != 0;
            if ( (v509 & 4) == 0 )
              goto LABEL_361;
            v208 = v482;
            v209 = v488 != 0;
            if ( (__int64)v484 >= v482 )
              v208 = (unsigned __int64)v484;
            v207 = (v488 - v209) % v208;
            v214 = v208 * ((v488 - v209) / v208 + v209);
            if ( (v509 & 8) == 0 )
            {
LABEL_131:
              if ( (v210 & 0x40) != 0 )
              {
                if ( !v479 )
                  v479 = v214;
                goto LABEL_146;
              }
              v215 = (char *)v492;
              v479 += v214;
              v216 = (char *)v492 + 8 * (unsigned int)v493;
              if ( v492 != v216 )
              {
                do
                {
                  *(_QWORD *)v215 += sub_A98060((__int64)v477, v214);
                  v215 += 8;
                }
                while ( v216 != v215 );
              }
              if ( (_DWORD)v503 )
              {
                sub_ED8F30(&ptr, v502, &v502[2 * v504], (__int64)&v502, 0);
                v219 = ptr.m128_u64[1];
                v217 = ptr.m128_u64[0];
              }
              else
              {
                v217 = sub_ED8FA0((__int64)&v502);
                v219 = v218;
              }
              sub_ED8F30(&ptr, &v502[2 * v504], &v502[2 * v504], (__int64)&v502, 1);
              v220 = ptr.m128_u64[0];
              while ( v220 != v217 )
              {
                v207 = v217 + 16;
                *(_QWORD *)(v217 + 8) += v214;
                if ( v217 + 16 != v219 )
                {
                  v221 = *(_QWORD *)(v217 + 16);
                  if ( v221 != -4096 && v221 != -8192 )
                  {
                    v217 += 16LL;
                    continue;
                  }
                  v222 = (__int64 *)(v217 + 32);
                  while ( 1 )
                  {
                    v217 = (unsigned __int64)v222;
                    if ( v222 == (__int64 *)v219 )
                      break;
                    v207 = *v222;
                    v222 += 2;
                    if ( v207 != -8192 && v207 != -4096 )
                      goto LABEL_144;
                  }
                }
                v217 = v219;
LABEL_144:
                ;
              }
              v210 = v509;
              v211 = v482;
              if ( (v509 & 4) != 0 )
                goto LABEL_146;
              v390 = (v509 & 8) != 0;
LABEL_361:
              if ( !v390 )
                goto LABEL_148;
              goto LABEL_362;
            }
LABEL_130:
            v486 += v214;
            goto LABEL_131;
          }
          while ( 1 )
          {
            v207 = *(_QWORD *)(v402 + 8);
            if ( v395 <= v207 )
            {
              v207 += v400;
              *(_QWORD *)(v402 + 8) = v207;
            }
            if ( v402 + 16 != v404 )
            {
              v207 = *(_QWORD *)(v402 + 16);
              if ( v207 != -8192 && v207 != -4096 )
              {
                v402 += 16LL;
                goto LABEL_409;
              }
              v207 = v402 + 32;
              while ( 1 )
              {
                v402 = v207;
                if ( v207 == v404 )
                  break;
                v406 = *(_QWORD *)v207;
                v207 += 16;
                if ( v406 != -8192 && v406 != -4096 )
                  goto LABEL_409;
              }
            }
            v402 = v404;
LABEL_409:
            if ( v405 == v402 )
              goto LABEL_410;
          }
        }
        v57 = sub_B8E970((__int64)(v444 + 64));
        v58 = v57;
        if ( v57 )
        {
          if ( (*(_BYTE *)(v57 + 28) & 0x7Fu) - 35 > 3 )
          {
            while ( 1 )
            {
              v59 = *(_QWORD *)(v58 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v58 = v59;
              if ( !v59 )
                break;
              if ( (*(_BYTE *)(v59 + 28) & 0x7Fu) - 35 <= 3 )
                goto LABEL_297;
            }
          }
          else
          {
LABEL_297:
            if ( !(unsigned __int8)sub_F7D750(v58) || (v410 = sub_B984E0(v58)) != 0 )
            {
              while ( 1 )
              {
                v356 = *(_QWORD *)(v58 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v58 = v356;
                if ( !v356 )
                  break;
                if ( (*(_BYTE *)(v356 + 28) & 0x7Fu) - 35 <= 3 )
                  goto LABEL_297;
              }
            }
            else
            {
              v509 |= 4u;
            }
          }
        }
LABEL_33:
        v56 = v490;
        goto LABEL_34;
      }
    }
    v509 |= 4u;
    goto LABEL_34;
  }
  v477 = (unsigned __int8 *)a1;
  v510 = 0;
  v478 = nullptr;
  v492 = v494;
  v493 = 0x1000000000LL;
  v479 = 0;
  v480 = 0;
  *(_QWORD *)v481 = 0;
  v482 = 0;
  *(_QWORD *)v483 = 0;
  v484 = nullptr;
  v485 = 0;
  v486 = 0;
  v488 = 0;
  v489 = 0;
  v502 = nullptr;
  v503 = 0;
  v504 = 0;
  v505 = nullptr;
  v506 = 0;
  v507 = 0;
  v508 = 0;
  v511 = 0;
  v512 = 0;
  v513 = 0;
  v514 = 0;
  v515 = 0;
  v516 = 0;
  v517 = 0;
  v518 = 0;
  v519 = 0;
  v487 = 4;
  sub_ED76F0((__int64)&v477, (__int64)v455);
  sub_EE4ED0(&v477, v23);
  v191 = v477;
  v192 = v479 != 0;
  v194 = v479 - v192;
  v193 = (v479 - v192) % (unsigned __int64)v482;
  v479 = v482 * (v192 + (v479 - v192) / (unsigned __int64)v482);
  *(_QWORD *)v481 = v482 * (v192 + v194 / v482);
  v197 = sub_B8C970((__int64)v23, v192, v193, v482, v195, v196);
  v198 = (void *)sub_A97FF0((__int64)v191, v197);
  if ( (__int64)v484 < (__int64)v198 )
    v484 = v198;
  sub_ED8B30((__int64)&v477, (__int64)v444);
  v199 = v479;
  v200 = v484;
  v201 = v492;
  v202 = (unsigned int)v493;
  v203 = v482;
  v14 = (_QWORD *)sub_9C3B30((__int64 *)(a1 + 2352), 80, 3u);
  sub_ED6260(v14, (_QWORD *)a1, v199, v203, v203, v203, (__int64)v200, v199, v201, v202);
  sub_ED7200((__int64)&v477);
LABEL_100:
  v397 = (unsigned __int8)sub_ED8540(v448, (__int64 *)&v455, &ptr) == 0;
  v182 = (unsigned __int8 *)ptr.m128_u64[0];
  if ( v397 )
  {
    v477 = (unsigned __int8 *)ptr.m128_u64[0];
    v183 = *(unsigned int *)(a1 + 1088);
    v184 = (unsigned int)(*(_DWORD *)(a1 + 1080) + 1);
    v185 = 2 * v183;
    v186 = (unsigned int)(4 * v184);
    if ( (unsigned int)v186 < 3 * (int)v183 )
    {
      if ( (int)v183 - *(_DWORD *)(a1 + 1084) - (int)v184 > (unsigned int)v183 >> 3 )
      {
LABEL_103:
        v397 = *(_QWORD *)v182 == -4096;
        *(_DWORD *)(a1 + 1080) = v184;
        if ( !v397 )
          --*(_DWORD *)(a1 + 1084);
        v187 = v455;
        *((_QWORD *)v182 + 1) = 0;
        *(_QWORD *)v182 = v187;
        goto LABEL_106;
      }
      v185 = *(_DWORD *)(a1 + 1088);
    }
    sub_EDBE50((__int64)v448, v185, v184, v183, v186, v181);
    sub_ED8540(v448, (__int64 *)&v455, &v477);
    LODWORD(v184) = *(_DWORD *)(a1 + 1080) + 1;
    v182 = v477;
    goto LABEL_103;
  }
LABEL_106:
  *((_QWORD *)v182 + 1) = v14;
  if ( *v14 > 0xFFFFFFFFFFFFFFFuLL )
  {
    v204 = sub_A62AC0(a1);
    sub_FC70B0(&v477, v204, *((unsigned int *)v455 + 6), 2362);
    v205 = (char *)sub_995750((__int64)v455);
    sub_AEC220(&v477, v205, v206);
    sub_AE9DF0(&v477, 0x1000000000000000LL, 3u);
    sub_AEA040((__int64)&v477);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 104LL) & 8) != 0 )
  {
    v188 = sub_227D600();
    sub_995540(v188, "\n*** Dumping AST Record Layout\n");
    v189 = *(_BYTE *)(*(_QWORD *)(a1 + 2320) + 104LL);
    v190 = sub_227D600();
    sub_EDDF70(a1, (__int64)v455, v190, (v189 & 0x10) != 0);
  }
  return v14;
}
