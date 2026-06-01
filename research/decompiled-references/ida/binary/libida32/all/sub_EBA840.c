// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall sub_EBA840(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  _QWORD *v158; // rbp
  __int64 v159; // r12
  __int64 v160; // rdi
  void **v161; // rdi
  void **v162; // r13
  void **v163; // rdi
  char *v164; // rbx
  __int64 v165; // rdx
  unsigned __int64 *v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  unsigned __int64 v173; // rax
  __int64 v174; // r12
  __int64 v175; // r15
  unsigned __int64 v176; // rax
  void *v177; // r13
  __int64 v178; // r14
  __int64 v179; // rbp
  __int64 v180; // r9
  unsigned __int8 *v181; // rax
  __int64 v182; // rcx
  __int64 v183; // rdx
  int v184; // esi
  __int64 v185; // r8
  char *v186; // rdx
  __int64 v187; // rdi
  char v188; // bp
  __int64 v189; // rax
  unsigned __int8 *v190; // rbx
  _BOOL8 v191; // rsi
  unsigned __int64 v192; // rdx
  unsigned __int64 v193; // rtt
  __int64 v194; // r8
  __int64 v195; // r9
  unsigned int v196; // eax
  void *v197; // rax
  __int64 v198; // rbp
  void *v199; // r15
  void *v200; // r13
  __int64 v201; // r14
  __int64 v202; // r12
  __int64 v203; // rax
  char *v204; // rax
  signed __int64 v205; // rdx
  __int64 v206; // rdx
  unsigned __int64 v207; // r8
  _BOOL8 v208; // r9
  char v209; // si
  unsigned __int64 v210; // rcx
  unsigned __int64 v211; // rdi
  _BOOL8 v212; // rbp
  __int64 v213; // rbp
  char *v214; // r12
  char *v215; // rbx
  unsigned __int64 v216; // rbx
  unsigned __int64 v217; // rdx
  unsigned __int64 v218; // r12
  unsigned __int64 v219; // rsi
  __int64 v220; // rax
  __int64 *v221; // rax
  __int64 v222; // rsi
  unsigned __int8 *v223; // rbx
  unsigned int v224; // eax
  void *v225; // rax
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  char v230; // r12
  __int64 v231; // rbp
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // rdi
  __int64 v237; // rbx
  __int64 v238; // rsi
  __int64 v239; // rbx
  __int64 v240; // rdx
  __int64 v241; // rcx
  __int64 v242; // r8
  __int64 v243; // r9
  __int64 v244; // rdx
  __int64 v245; // rcx
  __int64 v246; // r8
  __int64 v247; // r9
  __int64 v248; // rdi
  __int64 v249; // r13
  unsigned __int64 v250; // rax
  void *v251; // rax
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  unsigned __int64 v256; // rax
  __int64 v257; // rdx
  __int64 v258; // rcx
  char *v259; // r8
  __int64 v260; // r9
  unsigned __int64 v261; // rbx
  unsigned __int64 v262; // rax
  __int64 v263; // rax
  __int64 v264; // r14
  unsigned __int64 v265; // r13
  unsigned __int64 v266; // r15
  _QWORD *v267; // rdx
  unsigned __int64 v268; // r12
  __int64 v269; // rax
  __int64 *v270; // rax
  __int64 v271; // rsi
  char *v272; // rdx
  __int64 v273; // rcx
  __int64 v274; // r8
  __int64 v275; // r9
  __int64 v276; // rdx
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // r9
  __int64 v280; // rdi
  __int64 v281; // rbx
  __int64 **v282; // r15
  __int64 v283; // rdx
  __int64 v284; // rcx
  __int64 v285; // r8
  __int64 v286; // r9
  __int64 v287; // rdi
  __int64 **v288; // rbx
  __int64 v289; // r12
  unsigned __int64 v290; // rax
  __int64 v291; // rsi
  unsigned __int64 v292; // r15
  __int64 v293; // rcx
  __int64 v294; // rbp
  __int64 v295; // r8
  __int64 v296; // r9
  _QWORD *v297; // rax
  char *v298; // rdx
  __int64 v299; // rax
  char v300; // r12
  unsigned __int64 v301; // rdx
  __int64 v302; // rcx
  __int64 v303; // r8
  unsigned __int64 v304; // r13
  _BOOL8 v305; // r9
  unsigned __int64 v306; // rax
  unsigned __int64 v307; // rdx
  __int64 v308; // r9
  __int64 v309; // r13
  __int64 v310; // rax
  __int64 *v311; // rdi
  __int64 v312; // rdx
  __int64 *v313; // rsi
  __int64 v314; // rcx
  __int64 v315; // rbp
  void *v316; // r15
  __int64 v317; // r12
  void *v318; // r13
  __int64 v319; // r14
  _QWORD *v320; // rbp
  _QWORD *v321; // r12
  __int64 v322; // rdi
  void **v323; // rdi
  void **v324; // r13
  void **v325; // rdi
  __int64 v326; // r14
  int v327; // edx
  int v328; // r9d
  __int64 v329; // rsi
  __int64 v330; // rbx
  __int64 *v331; // rax
  unsigned __int64 v332; // rdi
  _BOOL8 v333; // rbp
  __int64 v334; // rsi
  char *v335; // rdx
  __int64 v336; // rcx
  char *v337; // rax
  char *v338; // rdx
  char *v339; // rax
  unsigned int v340; // ecx
  __int64 *v341; // rsi
  __int64 v342; // r8
  unsigned __int64 v343; // r13
  __int64 v344; // rdx
  __int64 v345; // rax
  char v346; // al
  __int64 v347; // rax
  __int64 v348; // rax
  int v349; // esi
  int v350; // r8d
  __int64 v351; // r9
  int v352; // r12d
  __m128i v353; // xmm1
  unsigned __int64 v354; // rax
  __int64 v355; // rax
  __int64 v356; // rcx
  __int64 v357; // r8
  __int64 v358; // r9
  __int64 v359; // rbx
  unsigned __int64 v360; // rax
  __int64 v361; // rdx
  unsigned __int64 v362; // rdx
  unsigned __int64 v363; // r15
  unsigned __int64 *v364; // rax
  __int64 v365; // rax
  char v366; // di
  __int64 *v367; // rdx
  __int64 *v368; // rbx
  __int64 *v369; // rbp
  __int64 v370; // rsi
  unsigned __int64 v371; // rdx
  __int64 v372; // rcx
  _QWORD *v373; // rdi
  _QWORD *v374; // rax
  unsigned __int64 v375; // rdx
  _QWORD *v376; // rax
  _QWORD *v377; // rcx
  int v378; // edi
  __int64 *v379; // rax
  unsigned __int64 v380; // rax
  char *v381; // rbx
  unsigned __int64 v382; // r12
  unsigned __int64 v383; // rax
  __int64 v384; // rax
  __int64 v385; // r13
  _QWORD *v386; // rax
  unsigned __int64 v387; // rax
  bool v388; // di
  __int64 v389; // rdx
  unsigned __int64 v390; // rdx
  _QWORD *v391; // rax
  __int64 *v392; // rbx
  __int64 v393; // rbp
  __int64 v394; // rax
  bool v395; // zf
  __int64 v396; // rax
  char *v397; // r13
  __int64 v398; // rbx
  char *v399; // r12
  unsigned __int64 v400; // r12
  unsigned __int64 v401; // rdx
  unsigned __int64 v402; // r13
  unsigned __int64 v403; // rax
  __int64 v404; // rcx
  int v405; // esi
  int v406; // r10d
  void **v407; // r11
  int v408; // eax
  __int64 *v409; // rdx
  _QWORD *v410; // rax
  unsigned __int64 v411; // rdx
  __int64 v412; // rdx
  __int64 v413; // rcx
  __int64 v414; // r8
  __int64 v415; // r9
  __int64 v416; // rdx
  __int64 v417; // rcx
  __int64 v418; // r8
  __int64 v419; // r9
  __int64 v420; // rdx
  __int64 v421; // rcx
  __int64 v422; // r8
  __int64 v423; // r9
  __int64 v424; // rbp
  unsigned __int64 v425; // rbx
  signed __int64 v426; // rax
  __int64 v427; // r12
  unsigned __int64 v428; // rax
  __int64 v429; // rax
  unsigned __int64 v430; // rax
  unsigned __int64 v431; // rax
  char *v432; // rbx
  unsigned __int64 i; // rbp
  unsigned __int64 v434; // rax
  __int64 v435; // r14
  __int64 v436; // rax
  __int64 v437; // rdx
  __int64 v438; // rcx
  __int64 v439; // r8
  __int64 v440; // r9
  char *v442; // [rsp+10h] [rbp-538h]
  char v443; // [rsp+10h] [rbp-538h]
  __int64 v444; // [rsp+10h] [rbp-538h]
  __int64 v445; // [rsp+10h] [rbp-538h]
  __int64 *v446; // [rsp+28h] [rbp-520h]
  __int64 v447; // [rsp+38h] [rbp-510h] BYREF
  void *src; // [rsp+40h] [rbp-508h]
  __int64 v449; // [rsp+48h] [rbp-500h]
  __int64 v450; // [rsp+50h] [rbp-4F8h]
  int v451[2]; // [rsp+58h] [rbp-4F0h]
  __int64 v452; // [rsp+60h] [rbp-4E8h]
  char *v453; // [rsp+68h] [rbp-4E0h] BYREF
  __m128 v454[2]; // [rsp+70h] [rbp-4D8h] BYREF
  void *v455; // [rsp+90h] [rbp-4B8h] BYREF
  __int64 v456; // [rsp+98h] [rbp-4B0h]
  int v457; // [rsp+A0h] [rbp-4A8h]
  char v458; // [rsp+A4h] [rbp-4A4h]
  char v459; // [rsp+A8h] [rbp-4A0h] BYREF
  void *v460[2]; // [rsp+C0h] [rbp-488h] BYREF
  int v461; // [rsp+D0h] [rbp-478h]
  char v462; // [rsp+D4h] [rbp-474h]
  char v463; // [rsp+D8h] [rbp-470h] BYREF
  __m128 v464; // [rsp+F0h] [rbp-458h] BYREF
  char *v465; // [rsp+100h] [rbp-448h]
  _QWORD *v466; // [rsp+108h] [rbp-440h]
  __int64 v467; // [rsp+110h] [rbp-438h]
  unsigned int v468; // [rsp+118h] [rbp-430h]
  __int128 v469; // [rsp+120h] [rbp-428h]
  __m128 ptr; // [rsp+130h] [rbp-418h] BYREF
  char *v471; // [rsp+140h] [rbp-408h]
  _QWORD v472[2]; // [rsp+148h] [rbp-400h] BYREF
  unsigned int v473; // [rsp+158h] [rbp-3F0h]
  __int64 v474[2]; // [rsp+160h] [rbp-3E8h]
  unsigned __int8 *v475; // [rsp+190h] [rbp-3B8h] BYREF
  __m128 *v476; // [rsp+198h] [rbp-3B0h]
  __int64 v477; // [rsp+1A0h] [rbp-3A8h]
  __int64 v478; // [rsp+1A8h] [rbp-3A0h]
  int v479[2]; // [rsp+1B0h] [rbp-398h]
  __int64 v480; // [rsp+1B8h] [rbp-390h]
  int v481[2]; // [rsp+1C0h] [rbp-388h]
  void *v482; // [rsp+1C8h] [rbp-380h]
  __int64 v483; // [rsp+1D0h] [rbp-378h]
  __int64 v484; // [rsp+1D8h] [rbp-370h]
  __int64 v485; // [rsp+1E0h] [rbp-368h]
  unsigned __int64 v486; // [rsp+1E8h] [rbp-360h]
  unsigned __int64 v487; // [rsp+1F0h] [rbp-358h]
  __int64 v488; // [rsp+1F8h] [rbp-350h]
  __int64 v489; // [rsp+200h] [rbp-348h] BYREF
  void *v490; // [rsp+208h] [rbp-340h]
  __int64 v491; // [rsp+210h] [rbp-338h]
  _BYTE v492[64]; // [rsp+218h] [rbp-330h] BYREF
  char v493; // [rsp+258h] [rbp-2F0h]
  __int64 v494; // [rsp+260h] [rbp-2E8h]
  unsigned __int64 v495; // [rsp+268h] [rbp-2E0h]
  __int64 v496; // [rsp+270h] [rbp-2D8h]
  __int64 v497; // [rsp+278h] [rbp-2D0h]
  __int64 v498; // [rsp+280h] [rbp-2C8h]
  __int64 v499; // [rsp+290h] [rbp-2B8h]
  _QWORD *v500; // [rsp+298h] [rbp-2B0h] BYREF
  __int64 v501; // [rsp+2A0h] [rbp-2A8h] BYREF
  unsigned int v502; // [rsp+2A8h] [rbp-2A0h]
  __int64 *v503; // [rsp+2B0h] [rbp-298h] BYREF
  __int64 v504; // [rsp+2B8h] [rbp-290h] BYREF
  unsigned int v505; // [rsp+2C0h] [rbp-288h]
  int v506; // [rsp+2C8h] [rbp-280h]
  char v507; // [rsp+2CCh] [rbp-27Ch]
  __int128 v508; // [rsp+2D0h] [rbp-278h] BYREF
  __int64 v509; // [rsp+2E0h] [rbp-268h]
  __int64 v510; // [rsp+2E8h] [rbp-260h]
  int v511; // [rsp+2F0h] [rbp-258h]
  __int64 v512; // [rsp+2F8h] [rbp-250h]
  __int64 v513; // [rsp+300h] [rbp-248h]
  int v514; // [rsp+308h] [rbp-240h]
  __int64 v515; // [rsp+310h] [rbp-238h] BYREF
  __int64 v516; // [rsp+318h] [rbp-230h]
  unsigned int v517; // [rsp+320h] [rbp-228h]
  __int64 v518; // [rsp+3E8h] [rbp-160h]
  __int64 v519; // [rsp+3F0h] [rbp-158h] BYREF
  __int64 v520[3]; // [rsp+4E0h] [rbp-68h] BYREF
  __int64 v521; // [rsp+4F8h] [rbp-50h] BYREF
  int v522; // [rsp+500h] [rbp-48h]
  int v523; // [rsp+504h] [rbp-44h]
  unsigned int v524; // [rsp+508h] [rbp-40h]

  v6 = a2[72] < 0;
  v7 = a2;
  v453 = a2;
  if ( v6 )
  {
    if ( !sub_B5AB30((__int64)a2, (__int64)a2, a3, a4, a5, a6) )
      (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 18360) + 160LL))(*(_QWORD *)(a1 + 18360), v453);
    v7 = v453;
  }
  v8 = *((_QWORD *)v7 + 13);
  sub_6E4DB0((__int64 *)(v8 + 96), v8, a3, a4, a5, a6);
  v453 = (char *)sub_B5AB30((__int64)v453, v8, v9, v10, v11, v12);
  v446 = (__int64 *)(a1 + 1072);
  if ( !(unsigned __int8)sub_EB4800((__int64 *)(a1 + 1072), (__int64 *)&v453, &ptr) )
  {
    v16 = (unsigned __int8 *)ptr.m128_u64[0];
    v17 = *(_DWORD *)(a1 + 1080);
    v18 = *(unsigned int *)(a1 + 1088);
    v475 = (unsigned __int8 *)ptr.m128_u64[0];
    v19 = v17 + 1;
    v20 = (unsigned int)(4 * v19);
    if ( (unsigned int)v20 >= 3 * (int)v18 )
    {
      v392 = (__int64 *)(a1 + 1072);
      sub_EB8110((__int64)v446, 2 * v18, ptr.m128_i64[0], v18, v20, v13);
    }
    else
    {
      if ( (int)v18 - *(_DWORD *)(a1 + 1084) - v19 > (unsigned int)v18 >> 3 )
      {
LABEL_7:
        v395 = *(_QWORD *)v16 == -4096;
        *(_DWORD *)(a1 + 1080) = v19;
        if ( !v395 )
          --*(_DWORD *)(a1 + 1084);
        v21 = v453;
        *((_QWORD *)v16 + 1) = 0;
        *(_QWORD *)v16 = v21;
        goto LABEL_10;
      }
      v392 = (__int64 *)(a1 + 1072);
      sub_EB8110((__int64)v446, v18, ptr.m128_i64[0], v18, v20, v13);
    }
    sub_EB4800(v392, (__int64 *)&v453, &v475);
    v16 = v475;
    v19 = *(_DWORD *)(a1 + 1080) + 1;
    goto LABEL_7;
  }
  v14 = *(_QWORD **)(ptr.m128_u64[0] + 8);
  if ( v14 )
    return v14;
LABEL_10:
  v22 = v453;
  v442 = v453;
  v23 = v453;
  v24 = (v453[28] & 0x7F) - 59;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 17448) + 472LL) )
  {
    if ( v24 > 2 )
    {
      sub_EB3220((__int64)&v475, a1, 0);
      v164 = v453;
      sub_EB2E10((__int64)&v475, (__int64)v453, v165, v166, v167, v168);
      sub_EBFDB0(&v475, v164);
      sub_EB4A40((__int64)&v475, (__int64)v164, v169, v170, v171, v172);
      v173 = sub_A742B0((__int64)v475, v477);
      v174 = *(_QWORD *)v479;
      v444 = v173;
      v447 = v478;
      v175 = *(_QWORD *)v481;
      v176 = sub_A742B0((__int64)v475, v477);
      v177 = v482;
      v178 = (unsigned int)v483;
      v179 = v176;
      v14 = (_QWORD *)sub_99FDF0((__int64 *)(a1 + 2352), 80, 3u);
      sub_EB2520(v14, (_QWORD *)a1, v444, v447, v174, v175, v447, v179, v177, v178);
      sub_EB3570((__int64)&v475);
      goto LABEL_100;
    }
    v79 = *(_QWORD *)(a1 + 18648);
    ptr.m128_u64[0] = a1;
    v447 = v79;
    ptr.m128_u64[1] = sub_A73FE0(a1, *(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFF0LL));
    *(_OWORD *)v474 = 0;
    v471 = v442;
    v472[0] = 0;
    v472[1] = 0;
    v473 = 0;
    sub_EBDB60(&ptr);
    sub_EB3220((__int64)&v475, a1, (__int64)&ptr);
    sub_EB2E10((__int64)&v475, (__int64)v442, v80, v81, v82, v83);
    sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v84, v85, v86, v87);
    if ( (*(_BYTE *)(*((_QWORD *)v442 + 16) + 1LL) & 4) != 0
      || (v105 = *((_QWORD *)v442 + 13),
          sub_6E4DB0((__int64 *)(v105 + 96), v105, v88, v89, v90, v91),
          v98 = *(unsigned int *)(*((_QWORD *)v442 + 16) + 20LL),
          (_DWORD)v98) )
    {
      sub_B43EF0((__int64)v442, &v508);
      v96 = sub_A56850((__int64)v442, (__int64)&v508, v92, v93, v94, v95);
      v101 = v97;
      v102 = v96;
      if ( v96 == v97 )
      {
LABEL_115:
        v105 = *((_QWORD *)v442 + 13);
        sub_6E4DB0((__int64 *)(v105 + 96), v105, v97, v98, v99, v100);
        v97 = *(unsigned int *)(*((_QWORD *)v442 + 16) + 20LL);
        if ( !(_DWORD)v97
          || (v105 = (__int64)v442, sub_EB50F0((__int64)&v475, (__int64)v442, v97, v98, v99, v100), !v499) )
        {
          if ( v518 )
          {
            v499 = v518;
            LOBYTE(v500) = 1;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v102 + 12) & 1) == 0 )
          {
            v103 = sub_EB2840(*(__int64 **)(v102 + 16));
            v104 = sub_F3F530(*(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFF0LL));
            v105 = *(_QWORD *)(v104 + 104);
            v106 = v104;
            sub_6E4DB0((__int64 *)(v105 + 96), v105, v107, v108, v109, v110);
            if ( (*(_BYTE *)(*(_QWORD *)(v106 + 128) + 1LL) & 4) != 0 )
              break;
            v105 = *(_QWORD *)(v106 + 104);
            sub_6E4DB0((__int64 *)(v105 + 96), v105, v97, v98, v99, v100);
            if ( *(_DWORD *)(*(_QWORD *)(v106 + 128) + 20LL) )
              break;
          }
          v102 += 24LL;
          if ( v101 == v102 )
            goto LABEL_115;
        }
        v499 = v106;
        LOBYTE(v500) = 0;
      }
    }
    v111 = sub_A56850((__int64)v442, v105, v97, v98, v99, v100);
    v116 = v112;
    v117 = v111;
    if ( v111 != v112 )
    {
      *(_QWORD *)v451 = &v455;
      src = &v464;
      v452 = (__int64)v460;
      while ( 1 )
      {
        while ( 1 )
        {
          v118 = *(_BYTE *)(v117 + 12);
          v119 = sub_EB2840(*(__int64 **)(v117 + 16));
          v118 &= 1u;
          v105 = sub_F3F530(*(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFF0LL));
          v447 = sub_EC1D70(&v475, v105, v118);
          if ( !v118 )
          {
            v450 = v105;
            v105 = (__int64)src;
            v464 = _mm_loadh_ps((const double *)&v447);
            if ( !(unsigned __int8)sub_EB2690(&v521, (__int64 *)src, *(_QWORD **)v451) )
              break;
          }
          v117 += 24LL;
          if ( v116 == v117 )
            goto LABEL_70;
        }
        v112 = v524;
        v120 = (__m128i *)v455;
        v121 = v522 + 1;
        v122 = 2 * v524;
        v115 = (unsigned int)(4 * (v522 + 1));
        v114 = 3 * v524;
        v460[0] = v455;
        if ( (unsigned int)v115 >= (unsigned int)v114 )
          goto LABEL_473;
        v105 = v524 - v523 - v121;
        v114 = v524 >> 3;
        if ( (unsigned int)v105 <= (unsigned int)v114 )
          break;
LABEL_67:
        v395 = v120->m128i_i64[0] == -4096;
        v522 = v121;
        if ( !v395 )
          --v523;
        v117 += 24LL;
        *v120 = _mm_load_si128((const __m128i *)&v464);
        if ( v116 == v117 )
          goto LABEL_70;
      }
      v122 = v524;
LABEL_473:
      sub_EB3C00((__int64)&v521, v122, v524, v113, v114, v115);
      v105 = (__int64)src;
      sub_EB2690(&v521, (__int64 *)src, (_QWORD *)v452);
      v120 = (__m128i *)v460[0];
      v121 = v522 + 1;
      goto LABEL_67;
    }
LABEL_70:
    if ( v499 )
    {
      v464.m128_u64[0] = v499;
      if ( (_BYTE)v500 )
      {
        v123 = sub_EB2750(v520, (__int64 *)&v464);
        if ( !v123 )
        {
          qword_48 = 0;
          BUG();
        }
        v124 = v123[1];
        *(_QWORD *)(v124 + 72) = 0;
        sub_EB4570(&v464, (__int64)&v508, v499);
        sub_EB4570(&v464, (__int64)&v519, v499);
        v105 = v124;
        sub_EC0B60(&v475, v124);
      }
      else
      {
        v331 = sub_EB2750(&v521, (__int64 *)&v464);
        if ( v331 )
          v331 = (__int64 *)v331[1];
        v105 = (__int64)v331;
        sub_EC0BC0(&v475, v331);
      }
    }
    else if ( sub_EB4DA0((__int64)v442, v105, v112, v113, v114, v115) )
    {
      v424 = 1;
      v425 = sub_A742B0((__int64)v475, *(unsigned __int8 *)(*((_QWORD *)v475 + 2181) + 8LL));
      v426 = sub_A742B0((__int64)v475, *(unsigned __int8 *)(*((_QWORD *)v475 + 2181) + 9LL));
      v427 = v426;
      if ( (v493 & 4) == 0 )
        v424 = v426;
      if ( v494 )
      {
        if ( v424 > v494 )
          v424 = v494;
        if ( v426 > v494 )
          v427 = v494;
      }
      v428 = sub_A742B0((__int64)v475, v477);
      v429 = sub_A74320((__int64)v475, v424 * ((v428 - (v428 != 0)) / v424 + (v428 != 0)));
      v477 = v429;
      if ( (v493 & 0x10) == 0 && (v493 & 3) != 1 )
      {
        if ( v424 > v478 )
          v478 = v424;
        if ( v480 < v427 )
          v480 = v427;
        if ( v424 > *(__int64 *)v479 )
          *(_QWORD *)v479 = v424;
      }
      BYTE1(v500) = 1;
      BYTE3(v500) = 1;
      v430 = sub_A742B0((__int64)v475, v429);
      v477 = sub_A74320((__int64)v475, v430 + v425);
      v105 = sub_A742B0((__int64)v475, v477);
      v495 = sub_A74320((__int64)v475, v105);
    }
    v129 = sub_A56850((__int64)v442, v105, v125, v126, v127, v128);
    v131 = v130;
    v132 = v129;
    if ( v129 == v130 )
    {
LABEL_85:
      sub_EBFDB0(&v475, v442);
      v496 = sub_A742B0((__int64)v475, 8 * ((v477 != 0) + ((v477 - (unsigned __int64)(v477 != 0)) >> 3)));
      v497 = v478;
      v498 = *(_QWORD *)v479;
      sub_EC0DC0(&v475, v442, v442);
      sub_EB4A40((__int64)&v475, (__int64)v442, v139, v140, v141, v142);
      v146 = *(unsigned int *)(*(_QWORD *)(a1 + 17448) + 340LL);
      if ( ((1LL << v146) & 0x267) != 0 )
      {
        sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v143, v146, v144, v145);
        if ( (*(_BYTE *)(*((_QWORD *)v442 + 16) + 1LL) & 1) != 0 )
        {
LABEL_230:
          v148 = sub_A742B0((__int64)v475, v477);
          v452 = v148;
          goto LABEL_88;
        }
      }
      else if ( ((1LL << v146) & 0x198) != 0 && sub_B7A450((__int64)v442, (__int64)v442, v143, v146, v144, v145) )
      {
        if ( (sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v412, v413, v414, v415),
              (*(_BYTE *)(*((_QWORD *)v442 + 16) + 9LL) & 1) != 0)
          || (sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v416, v417, v418, v419),
              (**((_BYTE **)v442 + 16) & 1) == 0)
          && (sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v416, v417, v418, v419),
              v436 = *((_QWORD *)v442 + 16),
              (*(_BYTE *)(v436 + 9) & 1) == 0)
          && ((*(_BYTE *)(v436 + 10) & 0x20) == 0 || (unsigned __int8)sub_B73040((__int64)v442))
          || (sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v416, v417, v418, v419),
              (*(_BYTE *)(*((_QWORD *)v442 + 16) + 3LL) & 8) != 0)
          && (sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v437, v438, v439, v440),
              (*(_BYTE *)(*((_QWORD *)v442 + 16) + 9LL) & 1) == 0) )
        {
          sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v416, v417, v418, v419);
          if ( *(char *)(*((_QWORD *)v442 + 16) + 4LL) < 0 )
          {
            sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v420, v421, v422, v423);
            if ( (*(_BYTE *)(*((_QWORD *)v442 + 16) + 1LL) & 0x20) != 0 )
              goto LABEL_230;
          }
        }
      }
      v147 = sub_A742B0((__int64)v475, v495);
      v148 = v496;
      v452 = v147;
LABEL_88:
      v149 = v477;
      v150 = sub_A742B0((__int64)v475, v477);
      v151 = v478;
      v447 = v150;
      *(_QWORD *)v451 = *(_QWORD *)v479;
      v450 = *(_QWORD *)v481;
      v443 = sub_EB4DA0((__int64)v442, v149, v152, v153, *(__int64 *)v479, v154);
      v155 = v498;
      src = v482;
      v449 = (unsigned int)v483;
      v156 = v497;
      v157 = v474[1];
      v14 = (_QWORD *)sub_99FDF0((__int64 *)(a1 + 2352), 80, 3u);
      sub_EB2110(
        v14,
        (_QWORD *)a1,
        v447,
        v151,
        *(__int64 *)v451,
        v450,
        v151,
        SBYTE1(v500),
        v443,
        -1,
        v452,
        src,
        v449,
        v148,
        v156,
        v155,
        v157,
        v499,
        (unsigned __int8)v500,
        0,
        0,
        0,
        (__int64)&v501,
        (__int64)&v504);
      sub_EB3570((__int64)&v475);
      if ( v473 )
      {
        v158 = (_QWORD *)v472[0];
        v159 = v472[0] + 16LL * v473;
        do
        {
          if ( (unsigned __int64)(*v158 - 0x7FFFFFFFFFFFFFFELL) > 1 )
          {
            v160 = v158[1];
            if ( v160 )
            {
              if ( (v160 & 4) != 0 )
              {
                v161 = (void **)(v160 & 0xFFFFFFFFFFFFFFF8LL);
                v162 = v161;
                if ( v161 )
                {
                  v163 = (void **)*v161;
                  if ( v163 != v162 + 2 )
                    free(v163);
                  operator delete(v162, 0x30u);
                }
              }
            }
          }
          v158 += 2;
        }
        while ( (_QWORD *)v159 != v158 );
      }
      operator delete();
      goto LABEL_100;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v132 + 12) & 1) != 0 )
          goto LABEL_80;
        v137 = sub_EB2840(*(__int64 **)(v132 + 16));
        v138 = sub_F3F530(*(_QWORD *)(v137 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v138 != v499 || (_BYTE)v500 )
          break;
        v132 += 24LL;
        if ( v131 == v132 )
          goto LABEL_85;
      }
      if ( !v524 )
      {
LABEL_226:
        v136 = 0;
        goto LABEL_79;
      }
      v133 = (v524 - 1) & (((unsigned int)v138 >> 9) ^ ((unsigned int)v138 >> 4));
      v134 = (__int64 *)(v521 + 16LL * v133);
      v135 = *v134;
      if ( *v134 != v138 )
      {
        v136 = 0;
        v327 = 1;
        if ( v135 == -4096 )
          goto LABEL_79;
        while ( 1 )
        {
          v328 = v327 + 1;
          v133 = (v524 - 1) & (v327 + v133);
          v134 = (__int64 *)(v521 + 16LL * v133);
          v329 = *v134;
          if ( v138 == *v134 )
            break;
          v327 = v328;
          if ( v329 == -4096 )
            goto LABEL_226;
        }
      }
      v136 = v134[1];
LABEL_79:
      sub_EC0BC0(&v475, v136);
LABEL_80:
      v132 += 24LL;
      if ( v131 == v132 )
        goto LABEL_85;
    }
  }
  if ( v24 <= 2 )
  {
    v25 = *(_QWORD *)(a1 + 18648);
    v464.m128_u64[0] = a1;
    v447 = v25;
    v26 = sub_A73FE0(a1, *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL));
    v465 = v22;
    v464.m128_u64[1] = v26;
    v469 = 0;
    v466 = nullptr;
    v467 = 0;
    v468 = 0;
    sub_EBDB60(&v464);
    v508 = 0;
    v475 = (unsigned __int8 *)a1;
    v490 = v492;
    v491 = 0x1000000000LL;
    v476 = &v464;
    v477 = 0;
    v478 = 0;
    *(_QWORD *)v479 = 0;
    v480 = 0;
    *(_QWORD *)v481 = 0;
    v482 = nullptr;
    v483 = 0;
    v484 = 0;
    v486 = 0;
    v487 = 0;
    v500 = nullptr;
    v501 = 0;
    v502 = 0;
    v503 = nullptr;
    v504 = 0;
    v505 = 0;
    v506 = 0;
    v509 = 0;
    v510 = 0;
    v511 = 0;
    v512 = 0;
    v513 = 0;
    v514 = 0;
    v515 = 0;
    v516 = 0;
    v517 = 0;
    v485 = 1;
    sub_EB39B0((__int64)&v475, (__int64)v23);
    v507 &= 0xC3u;
    v488 = 0;
    v489 = 0;
    v486 = sub_A742B0((__int64)v475, *(unsigned __int8 *)(*((_QWORD *)v475 + 2181) + 8LL));
    v27 = *(unsigned __int8 *)(*((_QWORD *)v475 + 2181) + 9LL);
    v487 = sub_A742B0((__int64)v475, v27);
    if ( *(_QWORD *)v481 && *(__int64 *)v481 < (__int64)v487 )
      v487 = *(_QWORD *)v481;
    v455 = nullptr;
    v32 = sub_A56850((__int64)v442, v27, v28, v29, v30, v31);
    v37 = v33;
    v38 = v32;
    if ( v32 == v33 )
    {
      v51 = *((_QWORD *)v442 + 13);
      sub_6E4DB0((__int64 *)(v51 + 96), v51, v33, v34, v35, v36);
      if ( (*(_BYTE *)(*((_QWORD *)v442 + 16) + 1LL) & 4) == 0 )
        goto LABEL_33;
      v56 = v488;
    }
    else
    {
      v39 = 0;
      do
      {
        while ( 1 )
        {
          v44 = sub_EB2840(*(__int64 **)(v38 + 16));
          v45 = sub_F3F530(*(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF0LL));
          sub_6E4DB0((__int64 *)(*(_QWORD *)(v45 + 104) + 96LL), *(_QWORD *)(v45 + 104), v46, v47, v48, v49);
          v39 |= (*(_BYTE *)(*(_QWORD *)(v45 + 128) + 1LL) & 4) != 0;
          v50 = sub_EBA840(v475, v45);
          if ( (*(_BYTE *)(v38 + 12) & 1) == 0 )
            break;
          v38 += 24LL;
          v507 |= 8u;
          if ( v37 == v38 )
            goto LABEL_25;
        }
        v40 = *(_QWORD *)(v50 + 72);
        if ( !v489 && *(__int64 *)(v40 + 32) >= 0 )
        {
          v489 = v45;
          v507 |= 8u;
          v40 = *(_QWORD *)(v50 + 72);
        }
        if ( (*(_BYTE *)(v40 + 40) & 2) != 0 )
        {
          if ( !v488 )
          {
            v488 = v45;
            v507 = (4 * *(_BYTE *)(*(_QWORD *)(v50 + 72) + 40LL)) & 0x20 | v507 & 0xDF;
          }
          sub_EB5A40((__int64)&v475, (__int64)v442, v45, v50, (__int64)&v455, v43);
        }
        v38 += 24LL;
      }
      while ( v37 != v38 );
LABEL_25:
      v51 = *((_QWORD *)v442 + 13);
      sub_6E4DB0((__int64 *)(v51 + 96), v51, v41, v40, v42, v43);
      v56 = v488;
      if ( (*(_BYTE *)(*((_QWORD *)v442 + 16) + 1LL) & 4) == 0 )
        goto LABEL_34;
      if ( v39 )
      {
        if ( v488 )
        {
LABEL_34:
          v60 = v56 == 0;
          v61 = sub_A56850((__int64)v442, v51, v52, v53, v54, v55);
          v63 = v62;
          v64 = v61;
          if ( v61 != v62 )
          {
            v447 = (__int64)v460;
            while ( 1 )
            {
              if ( (*(_BYTE *)(v64 + 12) & 1) != 0 )
                goto LABEL_39;
              v71 = sub_EB2840(*(__int64 **)(v64 + 16));
              v460[0] = (void *)sub_F3F530(*(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF0LL));
              v73 = sub_EBA840(v475, v460[0]);
              v74 = *(__int64 **)(v73 + 72);
              v75 = *((_BYTE *)v74 + 40);
              if ( (v75 & 2) != 0 )
              {
                v326 = *v74;
                v484 = *sub_EB74A0((__int64)&v500, (__int64 *)v447) + v326;
                goto LABEL_39;
              }
              if ( v60 )
                v507 = v507 & 0xDF | (4 * v75) & 0x20;
              sub_EB5A40((__int64)&v475, (__int64)v442, (__int64)v460[0], v73, (__int64)&v455, v72);
              v78 = v502;
              v70 = **(_QWORD **)(v73 + 72);
              if ( !v502 )
                break;
              v65 = v460[0];
              v66 = v502 - 1;
              v67 = v66 & ((LODWORD(v460[0]) >> 9) ^ (LODWORD(v460[0]) >> 4));
              v68 = (void **)&v500[2 * v67];
              v69 = *v68;
              if ( v460[0] != *v68 )
              {
                v406 = 1;
                v407 = nullptr;
                if ( v69 == (void *)-4096LL )
                {
LABEL_429:
                  ptr.m128_u64[0] = (unsigned __int64)v68;
                  v76 = (unsigned int)(v501 + 1);
                  v77 = (unsigned int)(4 * v76);
                  if ( (unsigned int)v77 < 3 * v502 )
                  {
                    v77 = v502 >> 3;
                    if ( v502 - HIDWORD(v501) - (unsigned int)v76 <= (unsigned int)v77 )
                    {
LABEL_47:
                      sub_6E50A0((__int64)&v500, v78, v76, (__int64)v65, v77, v66);
                      sub_A49FE0((__int64 *)&v500, (__int64 *)v447, &ptr);
                      v65 = v460[0];
                      LODWORD(v76) = v501 + 1;
                      v68 = (void **)ptr.m128_u64[0];
                    }
                    v395 = (char *)*v68 + 4096 == nullptr;
                    LODWORD(v501) = v76;
                    if ( !v395 )
                      --HIDWORD(v501);
                    *v68 = v65;
                    v68[1] = nullptr;
                    goto LABEL_38;
                  }
LABEL_46:
                  v78 = 2 * v502;
                  goto LABEL_47;
                }
                while ( 1 )
                {
                  if ( v69 == (void *)-8192LL && !v407 )
                    v407 = v68;
                  v67 = v66 & (v406 + v67);
                  v68 = (void **)&v500[2 * v67];
                  v69 = *v68;
                  if ( v460[0] == *v68 )
                    break;
                  if ( v69 == (void *)-4096LL )
                  {
                    if ( v407 )
                      v68 = v407;
                    goto LABEL_429;
                  }
                  ++v406;
                }
              }
              v70 += (__int64)v68[1];
LABEL_38:
              v484 = v70;
              v60 = 0;
LABEL_39:
              v64 += 24LL;
              if ( v63 == v64 )
                goto LABEL_121;
            }
            ptr.m128_u64[0] = 0;
            goto LABEL_46;
          }
LABEL_121:
          if ( (v507 & 8) != 0 )
          {
            if ( v489 )
            {
              v330 = *(_QWORD *)(*(_QWORD *)(sub_EBA840(v475, v489) + 72) + 32LL);
              v484 = *sub_EB74A0((__int64)&v500, &v489) + v330;
            }
          }
          else
          {
            v484 = -1;
          }
          sub_EC1190(&v475, v442);
          v209 = v507;
          v210 = v480;
          if ( (v507 & 8) == 0 )
          {
            if ( (v507 & 4) == 0 )
              goto LABEL_147;
            v332 = v480;
            v333 = v486 != 0;
            if ( (__int64)v482 >= v480 )
              v332 = (unsigned __int64)v482;
            v206 = (v486 - v333) % v332;
            v213 = v332 * ((v486 - v333) / v332 + v333);
            goto LABEL_130;
          }
          if ( v489 )
            goto LABEL_125;
          v393 = v484;
          v207 = v484 != 0;
          v206 = (v484 - v207) % v487;
          v484 = v487 * (v207 + (v484 - v207) / v487);
          v394 = v486 + v484;
          if ( (v507 & 0x40) != 0 )
          {
            if ( v394 > v477 )
              v477 = v486 + v484;
LABEL_125:
            if ( (v507 & 4) == 0 )
            {
LABEL_360:
              if ( !v489 )
              {
LABEL_145:
                if ( (__int64)v487 > (__int64)v210 )
                {
                  v210 = v487;
                  v480 = v487;
                }
                else
                {
                  v210 = v480;
                }
              }
LABEL_147:
              if ( *(_QWORD *)v481 && (__int64)v210 > *(__int64 *)v481 )
                v210 = *(_QWORD *)v481;
              v222 = v209 & 0x40;
              if ( !(_DWORD)v222 )
              {
                v222 = v477 != 0;
                v206 = (v477 - v222) % v210;
                v210 *= v222 + (v477 - v222) / v210;
                v477 = v210;
              }
              v223 = v475;
              v478 = v477;
              v224 = sub_B68C30((__int64)v442, v222, v206, v210, v207, v208);
              v225 = (void *)sub_A742B0((__int64)v223, v224);
              if ( (__int64)v482 < (__int64)v225 )
                v482 = v225;
              v230 = (v507 & 8) != 0;
              if ( (v507 & 8) == 0 )
              {
LABEL_212:
                sub_EB4DF0((__int64)&v475, (__int64)v442);
                v445 = v477;
                v315 = v480;
                v316 = v482;
                v450 = *(_QWORD *)v479;
                v317 = v484;
                v318 = v490;
                v447 = v478;
                v319 = (unsigned int)v491;
                v14 = (_QWORD *)sub_99FDF0((__int64 *)(a1 + 2352), 80, 3u);
                sub_EB2110(
                  v14,
                  (_QWORD *)a1,
                  v445,
                  v315,
                  v315,
                  v315,
                  (__int64)v316,
                  (v507 & 4) != 0,
                  (v507 & 4) != 0 || v488 != 0,
                  v317,
                  v450,
                  v318,
                  v319,
                  v447,
                  v315,
                  v315,
                  0,
                  v488,
                  0,
                  v489,
                  (v507 & 0x10) != 0,
                  (v507 & 0x20) != 0,
                  (__int64)&v500,
                  (__int64)&v503);
                sub_EB34C0((__int64)&v475);
                if ( v468 )
                {
                  v320 = v466;
                  v321 = &v466[2 * v468];
                  do
                  {
                    if ( (unsigned __int64)(*v320 - 0x7FFFFFFFFFFFFFFELL) > 1 )
                    {
                      v322 = v320[1];
                      if ( v322 )
                      {
                        if ( (v322 & 4) != 0 )
                        {
                          v323 = (void **)(v322 & 0xFFFFFFFFFFFFFFF8LL);
                          v324 = v323;
                          if ( v323 )
                          {
                            v325 = (void **)*v323;
                            if ( v325 != v324 + 2 )
                              free(v325);
                            operator delete(v324, 0x30u);
                          }
                        }
                      }
                    }
                    v320 += 2;
                  }
                  while ( v321 != v320 );
                }
                operator delete();
                goto LABEL_100;
              }
              v231 = *(_QWORD *)v481;
              if ( *(_QWORD *)v481 )
              {
                if ( *(__int64 *)v481 >= 4 )
                  v231 = 4;
              }
              else
              {
                v231 = 4;
              }
              sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v226, v227, v228, v229);
              v236 = *((_QWORD *)v442 + 16);
              if ( (*(_BYTE *)(v236 + 32) & 1) != 0 )
                v237 = sub_B72C80(v236);
              else
                v237 = *(_QWORD *)(v236 + 32);
              sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v232, v233, v234, v235);
              v238 = *((_QWORD *)v442 + 13);
              v239 = v237 + 24LL * *(unsigned int *)(*((_QWORD *)v442 + 16) + 20LL);
              sub_6E4DB0((__int64 *)(v238 + 96), v238, v240, v241, v242, v243);
              v248 = *((_QWORD *)v442 + 16);
              if ( (*(_BYTE *)(v248 + 32) & 1) != 0 )
                v249 = sub_B72C80(v248);
              else
                v249 = *(_QWORD *)(v248 + 32);
              for ( ; v249 != v239; v249 += 24 )
              {
                v250 = sub_EB2840(*(__int64 **)(v249 + 16));
                v238 = sub_F3F530(*(_QWORD *)(v250 & 0xFFFFFFFFFFFFFFF0LL));
                v251 = *(void **)(sub_EBA840(v475, v238) + 40);
                if ( (__int64)v251 > (__int64)v482 )
                  v482 = v251;
              }
              if ( (__int64)v482 >= v231 )
                v231 = (__int64)v482;
              v456 = 2;
              v447 = (__int64)&v455;
              *(_QWORD *)v451 = v231;
              v455 = &v459;
              v457 = 0;
              v458 = 1;
              if ( (unsigned int)sub_E535A0((__int64)v442, v238, v244, v245, v246, v247) == 2 )
              {
                v431 = sub_A56900((__int64)v442, v238, v252, v253, v254, v255);
                v432 = v272;
                for ( i = v431; v432 != (char *)i; i += 24LL )
                {
                  v434 = sub_EB2840(*(__int64 **)(i + 16));
                  v435 = sub_F3F530(*(_QWORD *)(v434 & 0xFFFFFFFFFFFFFFF0LL));
                  if ( (*(_BYTE *)(*(_QWORD *)(sub_EBA840(v475, v435) + 72) + 40LL) & 2) != 0 )
                    sub_EB4570(&ptr, v447, v435);
                }
                goto LABEL_188;
              }
              v256 = sub_A56850((__int64)v442, v238, v252, v253, v254, v255);
              v450 = v257;
              v261 = v256;
              if ( v256 != v257 )
              {
                LOBYTE(src) = v230;
                do
                {
                  v262 = sub_EB2840(*(__int64 **)(v261 + 16));
                  v263 = sub_F3F530(*(_QWORD *)(v262 & 0xFFFFFFFFFFFFFFF0LL));
                  v264 = *(_QWORD *)(sub_EBA840(v475, v263) + 72);
                  if ( *(_DWORD *)(v264 + 96) )
                    sub_EB5530(
                      &ptr,
                      *(_QWORD **)(v264 + 88),
                      (_QWORD *)(*(_QWORD *)(v264 + 88) + 24LL * *(unsigned int *)(v264 + 104)),
                      v264 + 88,
                      0);
                  else
                    sub_EB5530(
                      &ptr,
                      (_QWORD *)(*(_QWORD *)(v264 + 88) + 24LL * *(unsigned int *)(v264 + 104)),
                      (_QWORD *)(*(_QWORD *)(v264 + 88) + 24LL * *(unsigned int *)(v264 + 104)),
                      v264 + 88,
                      1);
                  v265 = ptr.m128_u64[1];
                  v266 = ptr.m128_u64[0];
                  v267 = (_QWORD *)(*(_QWORD *)(v264 + 88) + 24LL * *(unsigned int *)(v264 + 104));
                  sub_EB5530(&ptr, v267, v267, v264 + 88, 1);
                  v268 = ptr.m128_u64[0];
                  while ( v266 != v268 )
                  {
                    if ( !*(_BYTE *)(v266 + 16) )
                      goto LABEL_175;
                    v334 = *(_QWORD *)v266;
                    if ( !v458 )
                      goto LABEL_254;
                    v335 = (char *)v455;
                    v336 = 8LL * HIDWORD(v456);
                    v259 = (char *)v455 + v336;
                    if ( v455 != (char *)v455 + v336 )
                    {
                      v337 = (char *)v455;
                      if ( v334 == *(_QWORD *)v455 )
                        goto LABEL_247;
                      do
                      {
                        v337 += 8;
                        if ( v259 == v337 )
                          break;
                      }
                      while ( v334 != *(_QWORD *)v337 );
                    }
                    if ( HIDWORD(v456) < (unsigned int)v456 )
                    {
                      ++HIDWORD(v456);
                      *(_QWORD *)v259 = v334;
                      v335 = (char *)v455;
                      v337 = (char *)v455 + v336;
                    }
                    else
                    {
LABEL_254:
                      v337 = (char *)sub_2212A20(v447, v334);
                      v335 = (char *)v455;
                      if ( !v458 )
                      {
                        v258 = (unsigned int)v456;
                        v338 = (char *)v455 + 8 * (unsigned int)v456;
                        goto LABEL_248;
                      }
                    }
LABEL_247:
                    v258 = HIDWORD(v456);
                    v338 = &v335[8 * HIDWORD(v456)];
LABEL_248:
                    if ( v338 != v337 && *(_QWORD *)v337 >= 0xFFFFFFFFFFFFFFFELL )
                    {
                      v339 = v337 + 8;
                      do
                      {
                        v258 = (__int64)v339;
                        if ( v338 == v339 )
                          break;
                        v339 += 8;
                      }
                      while ( *(_QWORD *)v258 >= 0xFFFFFFFFFFFFFFFELL );
                    }
LABEL_175:
                    v257 = v266 + 24;
                    if ( v266 + 24 != v265 )
                    {
                      v269 = *(_QWORD *)(v266 + 24);
                      if ( v269 != -8192 && v269 != -4096 )
                      {
                        v266 += 24LL;
                        continue;
                      }
                      v270 = (__int64 *)(v266 + 48);
                      while ( 1 )
                      {
                        v266 = (unsigned __int64)v270;
                        if ( v270 == (__int64 *)v265 )
                          break;
                        v257 = *v270;
                        v270 += 3;
                        if ( v257 != -4096 && v257 != -8192 )
                          goto LABEL_182;
                      }
                    }
                    v266 = v265;
LABEL_182:
                    ;
                  }
                  v261 += 24LL;
                }
                while ( v450 != v261 );
                v230 = (char)src;
              }
              v271 = *((_QWORD *)v442 + 13);
              sub_6E4DB0((__int64 *)(v271 + 96), v271, v257, v258, (__int64)v259, v260);
              if ( (**((_BYTE **)v442 + 16) & 1) == 0 )
              {
                v271 = *((_QWORD *)v442 + 13);
                sub_6E4DB0((__int64 *)(v271 + 96), v271, (__int64)v272, v273, v274, v275);
                if ( (**((_BYTE **)v442 + 16) & 0x40) == 0 )
                  goto LABEL_188;
              }
              if ( !(unsigned int)sub_E535A0((__int64)v442, v271, (__int64)v272, v273, v274, v275) )
                goto LABEL_188;
              BYTE4(v471) = 1;
              ptr.m128_u64[1] = 8;
              LODWORD(v471) = 0;
              ptr.m128_u64[0] = (unsigned __int64)v472;
              v450 = (__int64)v460;
              v460[0] = &v463;
              v460[1] = &dword_0 + 2;
              v462 = 1;
              v461 = 0;
              v355 = sub_B6AC30((__int64)(v442 + 64));
              v359 = v355;
              if ( !v355 )
              {
LABEL_305:
                v361 = ptr.m128_u32[3];
                if ( ptr.m128_i32[3] != (_DWORD)v471 )
                {
                  src = v454;
                  while ( 1 )
                  {
                    if ( !BYTE4(v471) )
                      v361 = ptr.m128_u32[2];
                    v362 = ptr.m128_u64[0] + 8 * v361;
                    v363 = *(_QWORD *)ptr.m128_u64[0];
                    if ( ptr.m128_u64[0] != v362 && v363 >= 0xFFFFFFFFFFFFFFFELL )
                    {
                      v364 = (unsigned __int64 *)(ptr.m128_u64[0] + 8);
                      do
                      {
                        v363 = *v364;
                        if ( (unsigned __int64 *)v362 == v364 )
                          break;
                        ++v364;
                      }
                      while ( v363 >= 0xFFFFFFFFFFFFFFFELL );
                    }
                    v365 = sub_B747D0(v363);
                    v366 = BYTE4(v471);
                    v368 = v367;
                    v369 = (__int64 *)v365;
                    if ( (__int64 *)v365 != v367 )
                      break;
                    v389 = *(_QWORD *)(sub_B68470(v363 + 72) + 16);
                    if ( (v389 & 4) != 0 )
                      v390 = *(_QWORD *)(v389 & 0xFFFFFFFFFFFFFFF8LL);
                    else
                      v390 = v389 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( v390 )
                      v390 -= 64LL;
                    sub_EB4570((__m128 *)src, v450, v390);
                    v366 = BYTE4(v471);
LABEL_330:
                    if ( v366 )
                    {
                      v361 = ptr.m128_u32[3];
                      v271 = ptr.m128_u64[0];
                      v378 = (int)v471;
                      v356 = ptr.m128_u64[0] + 8LL * ptr.m128_u32[3];
                      if ( ptr.m128_u64[0] != v356 )
                      {
                        v379 = (__int64 *)ptr.m128_u64[0];
                        if ( *(_QWORD *)ptr.m128_u64[0] == v363 )
                        {
LABEL_386:
                          v361 = (unsigned int)(ptr.m128_i32[3] - 1);
                          ptr.m128_i32[3] = v361;
                          v356 = *(_QWORD *)(ptr.m128_u64[0] + 8LL * (unsigned int)v361);
                          *v379 = v356;
                        }
                        else
                        {
                          while ( (__int64 *)v356 != ++v379 )
                          {
                            if ( *v379 == v363 )
                              goto LABEL_386;
                          }
                        }
                      }
                    }
                    else
                    {
                      v271 = v363;
                      v391 = (_QWORD *)sub_2212830(&ptr, v363);
                      if ( v391 )
                      {
                        *v391 = -2;
                        v361 = ptr.m128_u32[3];
                        v378 = (_DWORD)v471 + 1;
                        LODWORD(v471) = (_DWORD)v471 + 1;
                      }
                      else
                      {
                        v361 = ptr.m128_u32[3];
                        v378 = (int)v471;
                      }
                    }
                    if ( (_DWORD)v361 == v378 )
                      goto LABEL_337;
                  }
                  while ( 1 )
                  {
                    v370 = *v369;
                    if ( v366 )
                    {
                      v371 = ptr.m128_u64[0];
                      v357 = ptr.m128_u32[3];
                      v372 = 8LL * ptr.m128_u32[3];
                      v373 = (_QWORD *)(ptr.m128_u64[0] + v372);
                      if ( ptr.m128_u64[0] != ptr.m128_u64[0] + v372 )
                      {
                        v374 = (_QWORD *)ptr.m128_u64[0];
                        if ( v370 == *(_QWORD *)ptr.m128_u64[0] )
                          goto LABEL_323;
                        while ( v373 != ++v374 )
                        {
                          if ( v370 == *v374 )
                            goto LABEL_323;
                        }
                      }
                      if ( ptr.m128_i32[3] < (unsigned __int32)ptr.m128_i32[2] )
                        break;
                    }
                    v374 = (_QWORD *)sub_2212A20(&ptr, v370);
                    v366 = BYTE4(v471);
                    v371 = ptr.m128_u64[0];
                    if ( BYTE4(v471) )
                      goto LABEL_323;
                    v375 = ptr.m128_u64[0] + 8LL * ptr.m128_u32[2];
LABEL_324:
                    if ( (_QWORD *)v375 != v374 && *v374 >= 0xFFFFFFFFFFFFFFFELL )
                    {
                      v376 = v374 + 1;
                      do
                      {
                        v377 = v376;
                        if ( (_QWORD *)v375 == v376 )
                          break;
                        ++v376;
                      }
                      while ( *v377 >= 0xFFFFFFFFFFFFFFFELL );
                    }
                    if ( v368 == ++v369 )
                      goto LABEL_330;
                  }
                  v357 = (unsigned int)++ptr.m128_i32[3];
                  *v373 = v370;
                  v371 = ptr.m128_u64[0];
                  v374 = (_QWORD *)(ptr.m128_u64[0] + v372);
LABEL_323:
                  v366 = v230;
                  v375 = v371 + 8LL * ptr.m128_u32[3];
                  goto LABEL_324;
                }
LABEL_337:
                v380 = sub_A56900((__int64)v442, v271, v361, v356, v357, v358);
                v381 = v272;
                v382 = v380;
                if ( (char *)v380 != v272 )
                {
                  while ( 1 )
                  {
                    v383 = sub_EB2840(*(__int64 **)(v382 + 16));
                    v384 = sub_F3F530(*(_QWORD *)(v383 & 0xFFFFFFFFFFFFFFF0LL));
                    v385 = v384;
                    if ( v458 )
                      break;
                    if ( !sub_2212830(v447, v384) )
                      goto LABEL_382;
LABEL_343:
                    v382 += 24LL;
                    if ( v381 == (char *)v382 )
                      goto LABEL_344;
                  }
                  v386 = v455;
                  v272 = (char *)v455 + 8 * HIDWORD(v456);
                  if ( v455 != v272 )
                  {
                    while ( v385 != *v386 )
                    {
                      if ( v272 == (char *)++v386 )
                        goto LABEL_382;
                    }
                    goto LABEL_343;
                  }
LABEL_382:
                  if ( (unsigned __int8)sub_EB5040(v450, v385, (__int64)v272, v273, v274, v275) )
                    sub_EB4570(v454, v447, v385);
                  goto LABEL_343;
                }
LABEL_344:
                if ( !v462 )
                  free(v460[0]);
                if ( !BYTE4(v471) )
                  free((void *)ptr.m128_u64[0]);
LABEL_188:
                sub_6E4DB0(
                  (__int64 *)(*((_QWORD *)v442 + 13) + 96LL),
                  *((_QWORD *)v442 + 13),
                  (__int64)v272,
                  v273,
                  v274,
                  v275);
                v280 = *((_QWORD *)v442 + 16);
                if ( (*(_BYTE *)(v280 + 32) & 1) != 0 )
                  v281 = sub_B72C80(v280);
                else
                  v281 = *(_QWORD *)(v280 + 32);
                sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v276, v277, v278, v279);
                v282 = (__int64 **)(v281 + 24LL * *(unsigned int *)(*((_QWORD *)v442 + 16) + 20LL));
                sub_6E4DB0((__int64 *)(*((_QWORD *)v442 + 13) + 96LL), *((_QWORD *)v442 + 13), v283, v284, v285, v286);
                v287 = *((_QWORD *)v442 + 16);
                if ( (*(_BYTE *)(v287 + 32) & 1) != 0 )
                  v288 = (__int64 **)sub_B72C80(v287);
                else
                  v288 = *(__int64 ***)(v287 + 32);
                v450 = (__int64)v460;
                if ( v288 != v282 )
                {
                  src = v282;
                  v289 = 0;
                  while ( 1 )
                  {
                    v290 = sub_EB2840(v288[2]);
                    v291 = sub_F3F530(*(_QWORD *)(v290 & 0xFFFFFFFFFFFFFFF0LL));
                    v292 = v291;
                    v294 = sub_EBA840(v475, v291);
                    if ( v458 )
                      break;
                    LOBYTE(v344) = sub_2212830(v447, v291) != 0;
                    if ( v289 )
                    {
                      v345 = *(_QWORD *)(v289 + 72);
                      if ( v345 )
                      {
                        if ( (*(_BYTE *)(v345 + 40) & 4) != 0 && (*(_BYTE *)(*(_QWORD *)(v294 + 72) + 40LL) & 8) != 0 )
                          goto LABEL_271;
                      }
                    }
LABEL_266:
                    if ( (_BYTE)v344 )
                      goto LABEL_267;
LABEL_204:
                    v300 = 0;
LABEL_205:
                    sub_EB2600((__int64)&v475, (double *)v294);
                    v304 = v301;
                    if ( (v507 & 0x40) == 0 )
                    {
                      v305 = v477 != 0;
                      v306 = (v477 - v305) / v301;
                      v307 = (v477 - v305) % v301;
                      v308 = v306 + v305;
                      v309 = v308 * v304;
                      goto LABEL_207;
                    }
                    if ( v517 )
                    {
                      v340 = (v517 - 1) & (((unsigned int)v291 >> 9) ^ ((unsigned int)v291 >> 4));
                      v341 = (__int64 *)(v515 + 16LL * v340);
                      v342 = *v341;
                      if ( *v341 == v292 )
                        goto LABEL_259;
                      v349 = 1;
                      if ( v342 != -4096 )
                      {
                        while ( 1 )
                        {
                          v350 = v349 + 1;
                          v340 = (v517 - 1) & (v349 + v340);
                          v341 = (__int64 *)(v515 + 16LL * v340);
                          v351 = *v341;
                          if ( v292 == *v341 )
                            break;
                          v349 = v350;
                          if ( v351 == -4096 )
                            goto LABEL_285;
                        }
LABEL_259:
                        sub_EB51F0(&ptr, v341, (_QWORD *)(16LL * v517 + v515), (__int64)&v515, 1);
                        v343 = ptr.m128_u64[0];
                        goto LABEL_260;
                      }
                    }
LABEL_285:
                    sub_EB51F0(&ptr, (_QWORD *)(v515 + 16LL * v517), (_QWORD *)(v515 + 16LL * v517), (__int64)&v515, 1);
                    v343 = ptr.m128_u64[0];
LABEL_260:
                    sub_EB51F0(&ptr, (_QWORD *)(v515 + 16LL * v517), (_QWORD *)(v515 + 16LL * v517), (__int64)&v515, 1);
                    if ( ptr.m128_u64[0] == v343 )
                      v309 = v477;
                    else
                      v309 = *(_QWORD *)(v343 + 8);
LABEL_207:
                    v310 = v505;
                    ptr.m128_u64[0] = v292;
                    ptr.m128_u64[1] = v309;
                    LOBYTE(v471) = v300;
                    if ( !v505 )
                    {
                      v460[0] = nullptr;
                      goto LABEL_416;
                    }
                    v311 = v503;
                    LODWORD(v312) = (v505 - 1) & (((unsigned int)v292 >> 9) ^ ((unsigned int)v292 >> 4));
                    v313 = &v503[3 * (unsigned int)v312];
                    v314 = *v313;
                    if ( v292 != *v313 )
                    {
                      v352 = 1;
                      v308 = 0;
                      if ( v314 != -4096 )
                      {
                        while ( 1 )
                        {
                          if ( v314 == -8192 && !v308 )
                            v308 = (__int64)v313;
                          v312 = (v505 - 1) & ((_DWORD)v312 + v352);
                          v313 = &v503[3 * v312];
                          v314 = *v313;
                          if ( v292 == *v313 )
                            goto LABEL_209;
                          if ( v314 == -4096 )
                          {
                            if ( v308 )
                              v313 = (__int64 *)v308;
                            break;
                          }
                          ++v352;
                        }
                      }
                      v460[0] = v313;
                      v307 = (unsigned int)(v504 + 1);
                      v302 = 3 * v505;
                      v303 = (unsigned int)(4 * v307);
                      if ( (unsigned int)v303 < (unsigned int)v302 )
                      {
                        v302 = v505 - HIDWORD(v504) - (unsigned int)v307;
                        v303 = v505 >> 3;
                        if ( (unsigned int)v302 > (unsigned int)v303 )
                        {
LABEL_289:
                          v395 = *v313 == -4096;
                          LODWORD(v504) = v307;
                          if ( !v395 )
                            --HIDWORD(v504);
                          v353 = _mm_loadu_si128((const __m128i *)&ptr.m128_u16[4]);
                          *v313 = v292;
                          *(__m128i *)(v313 + 1) = v353;
                          goto LABEL_209;
                        }
                        v405 = v505;
LABEL_417:
                        sub_A6E490(&v503, v405, v307, v302, v303, v308);
                        sub_A4A0A0((__int64 *)&v503, (__int64 *)&ptr, (_QWORD *)v450);
                        v292 = ptr.m128_u64[0];
                        v311 = v503;
                        v310 = v505;
                        LODWORD(v307) = v504 + 1;
                        v313 = (__int64 *)v460[0];
                        goto LABEL_289;
                      }
LABEL_416:
                      v405 = 2 * v505;
                      goto LABEL_417;
                    }
LABEL_209:
                    v289 = v294;
                    v288 += 3;
                    sub_EB5880((__m128 *)v450, v313, &v311[3 * v310], (__int64)&v503, 1);
                    v477 = v309 + **(_QWORD **)(v294 + 72);
                    if ( v288 == src )
                      goto LABEL_210;
                  }
                  v297 = v455;
                  v298 = (char *)v455 + 8 * HIDWORD(v456);
                  if ( v455 != v298 )
                  {
                    if ( *(_QWORD *)v455 == v291 )
                    {
LABEL_274:
                      if ( !v289
                        || (v347 = *(_QWORD *)(v289 + 72)) == 0
                        || (*(_BYTE *)(v347 + 40) & 4) == 0
                        || (v348 = *(_QWORD *)(v294 + 72),
                            v344 = (*(_BYTE *)(v348 + 40) & 8) != 0,
                            (*(_BYTE *)(v348 + 40) & 8) == 0) )
                      {
LABEL_267:
                        v300 = 1;
                        goto LABEL_268;
                      }
LABEL_271:
                      if ( (v442[28] & 0x7Fu) - 59 > 2
                        || (LOBYTE(v452) = v344,
                            v346 = sub_EB2920((__int64)v442, v291, v344, v293, v295, v296),
                            LOBYTE(v344) = v452,
                            !v346) )
                      {
                        v300 = v344;
LABEL_268:
                        v477 = *(_QWORD *)v451
                             * ((v477 != 0) + (v477 - (unsigned __int64)(v477 != 0)) / *(_QWORD *)v451)
                             + 4;
                        if ( v480 <= *(__int64 *)v451 )
                          v480 = *(_QWORD *)v451;
                        goto LABEL_205;
                      }
                      goto LABEL_266;
                    }
                    while ( v298 != (char *)++v297 )
                    {
                      if ( v291 == *v297 )
                        goto LABEL_274;
                    }
                  }
                  if ( !v289 )
                    goto LABEL_204;
                  v299 = *(_QWORD *)(v289 + 72);
                  if ( !v299 || (*(_BYTE *)(v299 + 40) & 4) == 0 || (*(_BYTE *)(*(_QWORD *)(v294 + 72) + 40LL) & 8) == 0 )
                    goto LABEL_204;
                  v344 = 0;
                  goto LABEL_271;
                }
LABEL_210:
                if ( !v458 )
                  free(v455);
                goto LABEL_212;
              }
              if ( (*(_BYTE *)(v355 + 28) & 0x7Fu) - 35 > 3 )
              {
                do
                {
                  v360 = *(_QWORD *)(v359 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  v359 = v360;
                  if ( !v360 )
                    goto LABEL_305;
                }
                while ( (*(_BYTE *)(v360 + 28) & 0x7Fu) - 35 > 3 );
              }
LABEL_348:
              if ( !(unsigned __int8)sub_F59A10(v359)
                || (*(_BYTE *)(v359 + 28) & 0x7F) == 0x24
                || (*(_BYTE *)(v359 + 82) & 8) != 0 )
              {
                goto LABEL_353;
              }
              if ( !BYTE4(v471) )
                goto LABEL_484;
              v356 = ptr.m128_u64[0];
              v271 = 8LL * ptr.m128_u32[3];
              v409 = (__int64 *)(ptr.m128_u64[0] + v271);
              if ( ptr.m128_u64[0] != ptr.m128_u64[0] + v271 )
              {
                v410 = (_QWORD *)ptr.m128_u64[0];
                if ( *(_QWORD *)ptr.m128_u64[0] == v359 )
                  goto LABEL_443;
                while ( v409 != ++v410 )
                {
                  if ( *v410 == v359 )
                    goto LABEL_443;
                }
              }
              if ( ptr.m128_i32[3] < (unsigned __int32)ptr.m128_i32[2] )
              {
                ++ptr.m128_i32[3];
                *v409 = v359;
                v356 = ptr.m128_u64[0];
                v410 = (_QWORD *)(ptr.m128_u64[0] + v271);
              }
              else
              {
LABEL_484:
                v271 = v359;
                v410 = (_QWORD *)sub_2212A20(&ptr, v359);
                v356 = ptr.m128_u64[0];
                if ( !BYTE4(v471) )
                {
                  v411 = ptr.m128_u64[0] + 8LL * ptr.m128_u32[2];
LABEL_444:
                  if ( (_QWORD *)v411 != v410 )
                  {
                    v356 = *v410 + 2LL;
                    if ( *v410 == -2 || v356 == 1 )
                    {
                      do
                        ++v410;
                      while ( (_QWORD *)v411 != v410 && *v410 >= 0xFFFFFFFFFFFFFFFELL );
                    }
                  }
LABEL_353:
                  while ( 1 )
                  {
                    v387 = *(_QWORD *)(v359 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v359 = v387;
                    if ( !v387 )
                      goto LABEL_305;
                    if ( (*(_BYTE *)(v387 + 28) & 0x7Fu) - 35 <= 3 )
                      goto LABEL_348;
                  }
                }
              }
LABEL_443:
              v411 = v356 + 8LL * ptr.m128_u32[3];
              goto LABEL_444;
            }
            v211 = v480;
            v212 = v486 != 0;
            if ( (__int64)v482 >= v480 )
              v211 = (unsigned __int64)v482;
            v206 = (v486 - v212) % v211;
            v213 = v211 * ((v486 - v212) / v211 + v212);
            goto LABEL_129;
          }
          v395 = v394 == v393;
          v396 = v394 - v393;
          v397 = (char *)v490;
          if ( (__int64)v482 >= v480 )
            v210 = (unsigned __int64)v482;
          v398 = v210 * ((v396 - (unsigned __int64)!v395) / v210 + !v395);
          v399 = (char *)v490 + 8 * (unsigned int)v491;
          v477 += v398;
          if ( v490 != v399 )
          {
            do
            {
              *(_QWORD *)v397 += sub_A74320((__int64)v475, v398);
              v397 += 8;
            }
            while ( v399 != v397 );
          }
          if ( (_DWORD)v501 )
          {
            sub_EB51F0(&ptr, v500, &v500[2 * v502], (__int64)&v500, 0);
            v402 = ptr.m128_u64[1];
            v400 = ptr.m128_u64[0];
          }
          else
          {
            v400 = sub_EB5260((__int64)&v500);
            v402 = v401;
          }
          v403 = sub_EB5260((__int64)&v500);
          if ( v403 == v400 )
          {
LABEL_408:
            v209 = v507;
            v210 = v480;
            v388 = (v507 & 8) != 0;
            if ( (v507 & 4) == 0 )
              goto LABEL_359;
            v207 = v480;
            v208 = v486 != 0;
            if ( (__int64)v482 >= v480 )
              v207 = (unsigned __int64)v482;
            v206 = (v486 - v208) % v207;
            v213 = v207 * ((v486 - v208) / v207 + v208);
            if ( (v507 & 8) == 0 )
            {
LABEL_130:
              if ( (v209 & 0x40) != 0 )
              {
                if ( !v477 )
                  v477 = v213;
                goto LABEL_145;
              }
              v214 = (char *)v490;
              v477 += v213;
              v215 = (char *)v490 + 8 * (unsigned int)v491;
              if ( v490 != v215 )
              {
                do
                {
                  *(_QWORD *)v214 += sub_A74320((__int64)v475, v213);
                  v214 += 8;
                }
                while ( v215 != v214 );
              }
              if ( (_DWORD)v501 )
              {
                sub_EB51F0(&ptr, v500, &v500[2 * v502], (__int64)&v500, 0);
                v218 = ptr.m128_u64[1];
                v216 = ptr.m128_u64[0];
              }
              else
              {
                v216 = sub_EB5260((__int64)&v500);
                v218 = v217;
              }
              sub_EB51F0(&ptr, &v500[2 * v502], &v500[2 * v502], (__int64)&v500, 1);
              v219 = ptr.m128_u64[0];
              while ( v219 != v216 )
              {
                v206 = v216 + 16;
                *(_QWORD *)(v216 + 8) += v213;
                if ( v216 + 16 != v218 )
                {
                  v220 = *(_QWORD *)(v216 + 16);
                  if ( v220 != -4096 && v220 != -8192 )
                  {
                    v216 += 16LL;
                    continue;
                  }
                  v221 = (__int64 *)(v216 + 32);
                  while ( 1 )
                  {
                    v216 = (unsigned __int64)v221;
                    if ( v221 == (__int64 *)v218 )
                      break;
                    v206 = *v221;
                    v221 += 2;
                    if ( v206 != -8192 && v206 != -4096 )
                      goto LABEL_143;
                  }
                }
                v216 = v218;
LABEL_143:
                ;
              }
              v209 = v507;
              v210 = v480;
              if ( (v507 & 4) != 0 )
                goto LABEL_145;
              v388 = (v507 & 8) != 0;
LABEL_359:
              if ( !v388 )
                goto LABEL_147;
              goto LABEL_360;
            }
LABEL_129:
            v484 += v213;
            goto LABEL_130;
          }
          while ( 1 )
          {
            v206 = *(_QWORD *)(v400 + 8);
            if ( v393 <= v206 )
            {
              v206 += v398;
              *(_QWORD *)(v400 + 8) = v206;
            }
            if ( v400 + 16 != v402 )
            {
              v206 = *(_QWORD *)(v400 + 16);
              if ( v206 != -8192 && v206 != -4096 )
              {
                v400 += 16LL;
                goto LABEL_407;
              }
              v206 = v400 + 32;
              while ( 1 )
              {
                v400 = v206;
                if ( v206 == v402 )
                  break;
                v404 = *(_QWORD *)v206;
                v206 += 16;
                if ( v404 != -8192 && v404 != -4096 )
                  goto LABEL_407;
              }
            }
            v400 = v402;
LABEL_407:
            if ( v403 == v400 )
              goto LABEL_408;
          }
        }
        v57 = sub_B6AC30((__int64)(v442 + 64));
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
                goto LABEL_295;
            }
          }
          else
          {
LABEL_295:
            if ( !(unsigned __int8)sub_F59A10(v58) || (v408 = sub_B747A0(v58)) != 0 )
            {
              while ( 1 )
              {
                v354 = *(_QWORD *)(v58 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v58 = v354;
                if ( !v354 )
                  break;
                if ( (*(_BYTE *)(v354 + 28) & 0x7Fu) - 35 <= 3 )
                  goto LABEL_295;
              }
            }
            else
            {
              v507 |= 4u;
            }
          }
        }
LABEL_33:
        v56 = v488;
        goto LABEL_34;
      }
    }
    v507 |= 4u;
    goto LABEL_34;
  }
  v475 = (unsigned __int8 *)a1;
  v508 = 0;
  v476 = nullptr;
  v490 = v492;
  v491 = 0x1000000000LL;
  v477 = 0;
  v478 = 0;
  *(_QWORD *)v479 = 0;
  v480 = 0;
  *(_QWORD *)v481 = 0;
  v482 = nullptr;
  v483 = 0;
  v484 = 0;
  v486 = 0;
  v487 = 0;
  v500 = nullptr;
  v501 = 0;
  v502 = 0;
  v503 = nullptr;
  v504 = 0;
  v505 = 0;
  v506 = 0;
  v509 = 0;
  v510 = 0;
  v511 = 0;
  v512 = 0;
  v513 = 0;
  v514 = 0;
  v515 = 0;
  v516 = 0;
  v517 = 0;
  v485 = 4;
  sub_EB39B0((__int64)&v475, (__int64)v453);
  sub_EC1190(&v475, v23);
  v190 = v475;
  v191 = v477 != 0;
  v193 = v477 - v191;
  v192 = (v477 - v191) % (unsigned __int64)v480;
  v477 = v480 * (v191 + (v477 - v191) / (unsigned __int64)v480);
  *(_QWORD *)v479 = v480 * (v191 + v193 / v480);
  v196 = sub_B68C30((__int64)v23, v191, v192, v480, v194, v195);
  v197 = (void *)sub_A742B0((__int64)v190, v196);
  if ( (__int64)v482 < (__int64)v197 )
    v482 = v197;
  sub_EB4DF0((__int64)&v475, (__int64)v442);
  v198 = v477;
  v199 = v482;
  v200 = v490;
  v201 = (unsigned int)v491;
  v202 = v480;
  v14 = (_QWORD *)sub_99FDF0((__int64 *)(a1 + 2352), 80, 3u);
  sub_EB2520(v14, (_QWORD *)a1, v198, v202, v202, v202, (__int64)v199, v198, v200, v201);
  sub_EB34C0((__int64)&v475);
LABEL_100:
  v395 = (unsigned __int8)sub_EB4800(v446, (__int64 *)&v453, &ptr) == 0;
  v181 = (unsigned __int8 *)ptr.m128_u64[0];
  if ( v395 )
  {
    v475 = (unsigned __int8 *)ptr.m128_u64[0];
    v182 = *(unsigned int *)(a1 + 1088);
    v183 = (unsigned int)(*(_DWORD *)(a1 + 1080) + 1);
    v184 = 2 * v182;
    v185 = (unsigned int)(4 * v183);
    if ( (unsigned int)v185 < 3 * (int)v182 )
    {
      if ( (int)v182 - *(_DWORD *)(a1 + 1084) - (int)v183 > (unsigned int)v182 >> 3 )
      {
LABEL_103:
        v395 = *(_QWORD *)v181 == -4096;
        *(_DWORD *)(a1 + 1080) = v183;
        if ( !v395 )
          --*(_DWORD *)(a1 + 1084);
        v186 = v453;
        *((_QWORD *)v181 + 1) = 0;
        *(_QWORD *)v181 = v186;
        goto LABEL_106;
      }
      v184 = *(_DWORD *)(a1 + 1088);
    }
    sub_EB8110((__int64)v446, v184, v183, v182, v185, v180);
    sub_EB4800(v446, (__int64 *)&v453, &v475);
    LODWORD(v183) = *(_DWORD *)(a1 + 1080) + 1;
    v181 = v475;
    goto LABEL_103;
  }
LABEL_106:
  *((_QWORD *)v181 + 1) = v14;
  if ( *v14 > 0xFFFFFFFFFFFFFFFuLL )
  {
    v203 = sub_A3ED80(a1);
    sub_FA3370(&v475, v203, *((unsigned int *)v453 + 6), 2362);
    v204 = (char *)sub_971A10((__int64)v453);
    sub_AC84E0(&v475, v204, v205);
    sub_AC60B0(&v475, 0x1000000000000000LL, 3u);
    sub_AC6300((__int64)&v475);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 104LL) & 8) != 0 )
  {
    v187 = sub_22598C0();
    sub_971800(v187, "\n*** Dumping AST Record Layout\n");
    v188 = *(_BYTE *)(*(_QWORD *)(a1 + 2320) + 104LL);
    v189 = sub_22598C0();
    sub_EBA230(a1, (__int64)v453, v189, (v188 & 0x10) != 0);
  }
  return v14;
}

