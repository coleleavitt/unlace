__int64 __fastcall sub_822E60(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 *v3; // r10
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int16 v12; // si
  unsigned int *v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 *v22; // r14
  __int64 *v23; // rax
  __int64 i18; // rcx
  __int64 v25; // r12
  __int64 v26; // rsi
  char v27; // al
  __int64 *v28; // r15
  __int64 v29; // rax
  __int64 *v30; // r13
  __int64 v31; // rcx
  _DWORD *v32; // rax
  __int64 v33; // r14
  char v34; // al
  unsigned int v35; // edx
  unsigned int v36; // eax
  __int64 v37; // rax
  _QWORD *v38; // rdi
  __int64 v39; // rax
  char v40; // al
  __int16 v41; // dx
  __int64 v42; // rdi
  _DWORD *v43; // rcx
  __int64 v44; // rdx
  _DWORD *v45; // rax
  _DWORD *v46; // rax
  __int64 v47; // r12
  __int64 *v48; // rax
  __int64 *i26; // rcx
  __int64 v50; // rdx
  __int64 *v51; // rax
  __int64 *i27; // rcx
  __int64 v53; // r14
  char v54; // al
  unsigned int v55; // edx
  unsigned int v56; // eax
  __int64 v57; // rcx
  _DWORD *v58; // rdx
  __int64 *v59; // rax
  __int64 *i28; // rcx
  __int64 v61; // rdx
  __int64 *v62; // rax
  __int64 v63; // rdx
  __int64 *i29; // rcx
  __int64 v65; // rdx
  __int64 *v66; // r14
  __int64 v67; // rax
  __int64 *v68; // r13
  __int64 v69; // r15
  _DWORD *v70; // rax
  __int64 v71; // r12
  char v72; // al
  unsigned int v73; // eax
  unsigned int v74; // ecx
  _QWORD *v75; // rdi
  int v76; // ecx
  __int64 v77; // rsi
  __int64 v78; // rcx
  _DWORD *v79; // rax
  __int64 v80; // r15
  char v81; // al
  unsigned int v82; // edx
  unsigned int v83; // r13d
  __int64 v84; // r13
  __int64 v85; // rax
  _QWORD *v86; // rdi
  __int64 v87; // rax
  unsigned int *v88; // rax
  __int64 v89; // r12
  __int64 v90; // rcx
  _DWORD *v91; // rax
  __int64 v92; // r15
  char v93; // al
  unsigned int v94; // edx
  unsigned int v95; // r13d
  __int64 v96; // r13
  __int64 v97; // rax
  _QWORD *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rsi
  __int64 v103; // rdx
  _DWORD *v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rax
  _DWORD *v109; // rcx
  __int64 *v110; // rdx
  __int64 *i34; // rsi
  __int64 v112; // rcx
  __int64 *v113; // rdx
  __int64 v114; // rcx
  __int64 *i35; // rsi
  __int64 v116; // rcx
  __int64 v117; // r15
  char v118; // al
  unsigned int v119; // ecx
  unsigned int v120; // r13d
  __int64 v121; // rsi
  __int64 v122; // r15
  char v123; // al
  unsigned int v124; // ecx
  unsigned int v125; // r13d
  __int64 v126; // rsi
  __int64 v127; // r13
  char v128; // al
  __int64 *v129; // r15
  __int64 v130; // rax
  __int64 *v131; // rsi
  __int64 v132; // rcx
  _QWORD *v133; // rax
  __int64 v134; // r14
  char v135; // al
  unsigned int v136; // edx
  unsigned int v137; // r12d
  __int64 v138; // r12
  __int64 v139; // rax
  __int64 v140; // rax
  char v141; // al
  _DWORD *v142; // rdx
  _QWORD *v143; // rax
  __int64 *v144; // rax
  __int64 *n; // rcx
  __int64 v146; // rdx
  __int64 *v147; // rax
  __int64 *ii; // rcx
  __int64 v149; // r12
  char v150; // al
  unsigned int v151; // edx
  unsigned int v152; // eax
  __int64 v153; // r14
  __int64 v154; // r12
  __int64 *v155; // r15
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 *v158; // r13
  __int64 v159; // r9
  _DWORD *v160; // rax
  __int64 v161; // r14
  char v162; // al
  unsigned int v163; // esi
  unsigned int v164; // r12d
  __int64 v165; // r12
  __int64 v166; // rax
  __int64 v167; // rax
  _DWORD *v168; // rax
  __int64 *v169; // rax
  __int64 *i5; // rcx
  __int64 v171; // rdx
  __int64 *v172; // rax
  __int64 v173; // rdx
  __int64 *i6; // rcx
  __int64 v175; // rdx
  __int64 v176; // rsi
  char v177; // al
  unsigned int v178; // edx
  unsigned int v179; // r12d
  __int64 v180; // r9
  __int64 *v181; // rax
  __int64 *i3; // rcx
  __int64 v183; // rdx
  __int64 *v184; // rax
  __int64 v185; // rdx
  __int64 *i4; // rcx
  __int64 v187; // rdx
  __int64 v188; // r12
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 *v192; // rax
  __int64 *i30; // rcx
  __int64 v194; // rdx
  __int64 *v195; // rax
  __int64 v196; // rdx
  __int64 *i31; // rcx
  __int64 v198; // rdx
  __int64 v199; // rax
  int v200; // esi
  __int64 v201; // rdx
  __int64 v202; // rcx
  char v203; // dl
  _DWORD *v204; // r8
  unsigned __int8 v205; // dl
  __int64 *v206; // rdx
  __int64 *k; // rsi
  __int64 v208; // rcx
  __int64 *v209; // rdx
  __int64 v210; // rcx
  __int64 *m; // rsi
  __int64 v212; // rcx
  __int64 v213; // r12
  __int64 *v214; // r15
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 *v217; // r13
  __int64 v218; // rcx
  _DWORD *v219; // rax
  __int64 v220; // r14
  char v221; // al
  unsigned int v222; // edx
  unsigned int v223; // eax
  __int64 v224; // rax
  _QWORD *v225; // rdi
  __int64 v226; // rax
  char v227; // al
  __int64 v228; // rdx
  _DWORD *v229; // rdx
  __int64 v230; // rax
  __int64 *v231; // rax
  __int64 *i1; // rcx
  __int64 v233; // rdx
  __int64 *v234; // rax
  __int64 *i2; // rcx
  __int64 v236; // r14
  char v237; // al
  unsigned int v238; // edx
  unsigned int v239; // eax
  __int64 v240; // rcx
  __int64 v241; // rcx
  char v242; // al
  unsigned int v243; // eax
  unsigned int v244; // r12d
  __int64 v245; // r15
  __int64 v246; // rcx
  __int64 *v247; // rax
  __int64 *v248; // rcx
  __int64 v249; // rdx
  __int64 *v250; // rax
  __int64 *i11; // rcx
  __int64 v252; // rax
  __int64 v253; // rax
  __int64 v254; // rax
  _QWORD *v255; // rdi
  __int64 v256; // rax
  __int64 v257; // rdx
  __int64 *v258; // rax
  __int64 *mm; // rcx
  __int64 v260; // rdx
  __int64 *v261; // rax
  __int64 v262; // rdx
  __int64 *nn; // rcx
  __int64 v264; // rdx
  __int64 v265; // r12
  __int64 v266; // rax
  _QWORD *v267; // rdi
  __int64 v268; // rax
  __int64 v269; // rax
  __int64 i24; // rax
  __int64 jj; // rax
  __int64 v272; // r13
  __int64 v273; // rax
  _QWORD *v274; // rdi
  __int64 v275; // rax
  __int64 v276; // r13
  __int64 v277; // rax
  _QWORD *v278; // rdi
  __int64 v279; // rax
  __int64 v280; // rax
  __int64 v281; // rax
  __int64 *v282; // r13
  _QWORD *v283; // rax
  __int64 v284; // r14
  char v285; // al
  unsigned int v286; // eax
  unsigned int v287; // r12d
  __int64 v288; // r12
  _QWORD *v289; // rdi
  __int64 v290; // rsi
  char v291; // al
  __int64 v292; // r12
  char v293; // al
  __int64 i32; // rax
  __int64 v295; // r12
  _QWORD *v296; // rdi
  __int64 v297; // rsi
  __int64 *v298; // rax
  __int64 *i9; // rcx
  __int64 v300; // rdx
  __int64 *v301; // rax
  __int64 v302; // rdx
  __int64 *i10; // rcx
  __int64 v304; // rdx
  __int64 i; // rax
  __int64 *v306; // r15
  __int64 v307; // rax
  _QWORD *v308; // rax
  __int64 v309; // r14
  char v310; // al
  unsigned int v311; // edx
  unsigned int v312; // eax
  __int64 v313; // rax
  __int64 v314; // rax
  __int64 v315; // rdx
  char v316; // al
  unsigned int v317; // eax
  unsigned int v318; // esi
  __int64 v319; // r14
  char v320; // al
  _DWORD *v321; // rax
  __int64 *v322; // rax
  __int64 *i17; // rcx
  __int64 v324; // rdx
  __int64 *v325; // rax
  __int64 *v326; // r14
  __int64 v327; // rax
  __int64 v328; // rax
  _QWORD *v329; // rax
  __int64 v330; // r12
  char v331; // al
  unsigned int v332; // edx
  unsigned int v333; // eax
  __int64 v334; // rax
  __int64 v335; // rax
  _QWORD *v336; // rax
  char v337; // al
  __int64 *v338; // rax
  __int64 *i22; // rcx
  __int64 v340; // rdx
  __int64 *v341; // rax
  __int64 *i23; // rcx
  char v343; // al
  unsigned int v344; // eax
  unsigned int v345; // esi
  __int64 v346; // r12
  __int64 i7; // rsi
  __int64 i25; // rax
  __int64 v349; // rax
  __int64 v350; // rax
  __int64 kk; // rax
  __int64 v352; // rax
  __int64 *v353; // r12
  __int64 v354; // r15
  __int64 v355; // r14
  char v356; // al
  unsigned int v357; // eax
  unsigned int v358; // ebp
  __int64 v359; // rbp
  _QWORD *v360; // rdi
  __int64 v361; // rdx
  __int64 v362; // rdx
  __int64 v363; // rax
  __int64 v364; // rsi
  __int64 *v365; // rdx
  __int64 *i14; // rsi
  __int64 v367; // rcx
  __int64 *v368; // rdx
  __int64 v369; // rcx
  __int64 *i15; // rsi
  __int64 v371; // rcx
  __int64 *v372; // r12
  __int64 v373; // r15
  char v374; // al
  unsigned int v375; // eax
  unsigned int v376; // edx
  _QWORD *v377; // rdi
  __int64 v378; // rdx
  __int64 *v379; // rax
  __int64 v380; // r14
  char v381; // al
  unsigned int v382; // eax
  unsigned int v383; // r12d
  __int64 v384; // rax
  __int64 v385; // r8
  char v386; // al
  _QWORD *v387; // rdi
  unsigned __int8 v388; // al
  __int64 *v389; // r14
  __int64 v390; // rax
  __int64 v391; // rax
  __int64 v392; // rax
  _QWORD *v393; // rax
  __int64 v394; // r12
  char v395; // al
  unsigned int v396; // edx
  unsigned int v397; // eax
  __int64 v398; // rax
  __int64 v399; // rax
  _QWORD *v400; // rax
  __int64 *v401; // rax
  __int64 *i19; // rcx
  __int64 v403; // rdx
  __int64 *v404; // rax
  __int64 v405; // rdx
  __int64 v406; // rdx
  char v407; // al
  unsigned int v408; // edx
  unsigned int v409; // eax
  __int64 v410; // r12
  __int64 v411; // rax
  __int64 v412; // rax
  __int64 v413; // rax
  __int64 v414; // rax
  __int64 i33; // rax
  _DWORD *v416; // rax
  _QWORD *v417; // rdi
  __int64 v418; // rsi
  __int64 j; // rax
  __int64 v420; // rsi
  __int64 i8; // rsi
  __int64 i20; // rsi
  __int64 v423; // rax
  __int64 v424; // rax
  __int64 i12; // rdx
  __int64 i13; // rdx
  __int64 v427; // rax
  __int64 v428; // r12
  __int64 v429; // rdx
  _QWORD *v430; // rdi
  __int64 v431; // rcx
  __int64 i21; // rcx
  __int64 v433; // rsi
  __int64 i16; // rsi
  __int64 *v435; // [rsp+0h] [rbp-C8h]
  __int64 v437; // [rsp+8h] [rbp-C0h]
  __int64 v438; // [rsp+8h] [rbp-C0h]
  __int64 v439; // [rsp+10h] [rbp-B8h]
  __int64 *v440; // [rsp+10h] [rbp-B8h]
  int v441; // [rsp+10h] [rbp-B8h]
  __int64 *v442; // [rsp+10h] [rbp-B8h]
  __int64 *v443; // [rsp+10h] [rbp-B8h]
  __int64 *v444; // [rsp+10h] [rbp-B8h]
  __int64 *v445; // [rsp+10h] [rbp-B8h]
  __int64 *v446; // [rsp+10h] [rbp-B8h]
  __int64 v447; // [rsp+10h] [rbp-B8h]
  int v448; // [rsp+10h] [rbp-B8h]
  __int64 v449; // [rsp+10h] [rbp-B8h]
  __int64 *v450; // [rsp+10h] [rbp-B8h]
  __int64 *v451; // [rsp+10h] [rbp-B8h]
  __int64 *v452; // [rsp+10h] [rbp-B8h]
  __int64 *v453; // [rsp+10h] [rbp-B8h]
  __int64 *v454; // [rsp+10h] [rbp-B8h]
  int v455; // [rsp+10h] [rbp-B8h]
  __int64 v456; // [rsp+10h] [rbp-B8h]
  __int64 *v457; // [rsp+10h] [rbp-B8h]
  __int64 v458; // [rsp+10h] [rbp-B8h]
  __int64 v459; // [rsp+18h] [rbp-B0h]
  __int64 *v460; // [rsp+18h] [rbp-B0h]
  int v461; // [rsp+18h] [rbp-B0h]
  __int64 v462; // [rsp+18h] [rbp-B0h]
  int v463; // [rsp+18h] [rbp-B0h]
  int v464; // [rsp+18h] [rbp-B0h]
  __int64 v465; // [rsp+18h] [rbp-B0h]
  __int64 v466; // [rsp+18h] [rbp-B0h]
  __int64 v467; // [rsp+18h] [rbp-B0h]
  int v468; // [rsp+18h] [rbp-B0h]
  int v469; // [rsp+18h] [rbp-B0h]
  __int64 *v470; // [rsp+20h] [rbp-A8h]
  int v471; // [rsp+20h] [rbp-A8h]
  __int64 v472; // [rsp+20h] [rbp-A8h]
  __int64 *v473; // [rsp+20h] [rbp-A8h]
  __int64 *v474; // [rsp+20h] [rbp-A8h]
  int v475; // [rsp+20h] [rbp-A8h]
  __int64 *v476; // [rsp+20h] [rbp-A8h]
  __int64 v477; // [rsp+20h] [rbp-A8h]
  int v478; // [rsp+20h] [rbp-A8h]
  __int64 *v479; // [rsp+20h] [rbp-A8h]
  __int64 *v480; // [rsp+20h] [rbp-A8h]
  unsigned int v481; // [rsp+20h] [rbp-A8h]
  __int64 *v482; // [rsp+28h] [rbp-A0h]
  __int64 v483; // [rsp+28h] [rbp-A0h]
  __int64 *v484; // [rsp+28h] [rbp-A0h]
  __int64 v485; // [rsp+28h] [rbp-A0h]
  int v486; // [rsp+28h] [rbp-A0h]
  __int64 *v487; // [rsp+28h] [rbp-A0h]
  int v488; // [rsp+28h] [rbp-A0h]
  __int64 v489; // [rsp+30h] [rbp-98h]
  __int64 v490; // [rsp+30h] [rbp-98h]
  __int64 v491; // [rsp+30h] [rbp-98h]
  __int64 *v492; // [rsp+30h] [rbp-98h]
  __int64 *v493; // [rsp+30h] [rbp-98h]
  __int64 v494; // [rsp+38h] [rbp-90h]
  __int64 v495; // [rsp+38h] [rbp-90h]
  __int64 v496; // [rsp+38h] [rbp-90h]
  __int64 v497; // [rsp+38h] [rbp-90h]
  __int64 *v498; // [rsp+38h] [rbp-90h]
  __int64 v499; // [rsp+38h] [rbp-90h]
  __int64 v500; // [rsp+38h] [rbp-90h]
  __int64 *v501; // [rsp+38h] [rbp-90h]
  __int64 v502; // [rsp+40h] [rbp-88h]
  __int64 v503; // [rsp+40h] [rbp-88h]
  __int64 v504; // [rsp+40h] [rbp-88h]
  __int64 v505; // [rsp+40h] [rbp-88h]
  __int64 v506; // [rsp+40h] [rbp-88h]
  __int64 v507; // [rsp+40h] [rbp-88h]
  __int64 v508; // [rsp+48h] [rbp-80h]
  _QWORD v509[2]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v510[88]; // [rsp+70h] [rbp-58h] BYREF

  v3 = (__int64 *)(a2 + 32);
  v4 = 8LL * *(unsigned int *)(a2 + 24);
  v5 = a2 + 32 + v4;
  if ( !v4 )
    return 0;
  v435 = (__int64 *)(a2 + 32);
  v7 = (__int64 *)(a2 + 32);
  v8 = 0;
  v9 = 0;
  do
  {
    while ( 1 )
    {
      v11 = *v7;
      v12 = *(_WORD *)(*v7 + 4);
      if ( v12 )
      {
        v10 = 1;
        if ( v12 == 2 )
          v10 = *(_DWORD *)(v11 + 40);
        if ( (unsigned int)v8 < v10 )
        {
          v8 = v10;
          goto LABEL_11;
        }
      }
      else
      {
        v10 = *(unsigned __int16 *)(v11 + 28);
        if ( (unsigned int)v8 < v10 )
        {
          v9 = *v7;
          v8 = *(unsigned __int16 *)(v11 + 28);
          goto LABEL_25;
        }
      }
      if ( (_DWORD)v8 != v10 || *(_WORD *)(v9 + 4) )
        goto LABEL_5;
LABEL_25:
      v16 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
      if ( v16 )
      {
        if ( !*v16 && v16[1] == 8 )
          break;
      }
LABEL_5:
      if ( ++v7 == (__int64 *)v5 )
        goto LABEL_12;
    }
    if ( !v12 )
    {
      v17 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
      if ( v17 )
      {
        if ( !*v17 && v17[1] == 8 && *(_DWORD *)(v11 + 24) == 1 )
        {
          v18 = *(_QWORD *)(v11 + 32);
          if ( *(_DWORD *)(v9 + 24) == 1 && !*(_WORD *)(v18 + 4) )
          {
            v19 = *(_QWORD *)(v9 + 32);
            if ( !*(_WORD *)(v19 + 4) )
            {
              if ( *(_DWORD *)(v18 + 24) >= *(_DWORD *)(v19 + 24) )
                v9 = *v7;
              goto LABEL_5;
            }
          }
        }
      }
    }
LABEL_11:
    ++v7;
    v9 = v11;
  }
  while ( v7 != (__int64 *)v5 );
LABEL_12:
  if ( !v9 )
    return 0;
  if ( *(_WORD *)(v9 + 4) )
    return 0;
  v13 = *(unsigned int **)(*(_QWORD *)(v9 + 16) + 24LL);
  if ( !v13 )
    return 0;
  if ( *v13 )
    goto LABEL_16;
  v11 = v13[1];
  if ( (_DWORD)v11 == 5 )
  {
    v509[0] = a1;
    do
    {
      v92 = *v435;
      v93 = *(_BYTE *)(*v435 + 6);
      if ( (v93 & 1) == 0 )
      {
        *(_BYTE *)(v92 + 6) = v93 | 1;
        v94 = *(_DWORD *)(a1 + 24);
        v95 = *(_DWORD *)(a1 + 28);
        if ( v94 < v95 )
        {
          v90 = *(_QWORD *)(a1 + 16);
        }
        else
        {
          v96 = 2 * v95;
          v97 = sub_186B270(8 * v96);
          v94 = *(_DWORD *)(a1 + 24);
          v98 = *(_QWORD **)(a1 + 16);
          v90 = v97;
          if ( v94 )
          {
            if ( v94 - 1 <= 2 || (_QWORD *)v97 == v98 + 1 )
            {
              for ( i = 0; i != v94; ++i )
                *(_QWORD *)(v90 + i * 8) = v98[i];
            }
            else
            {
              v99 = 0;
              do
              {
                *(__m128i *)(v90 + v99 * 8) = _mm_loadu_si128((const __m128i *)&v98[v99]);
                v99 += 2;
              }
              while ( v99 != 2LL * (v94 >> 1) );
              if ( (v94 & 1) != 0 )
                *(_QWORD *)(v90 + 8LL * (v94 & 0xFFFFFFFE)) = v98[v94 & 0xFFFFFFFE];
            }
          }
          if ( v98 != (_QWORD *)(a1 + 32) && v98 )
          {
            v438 = v90;
            sub_186B220(v98);
            v94 = *(_DWORD *)(a1 + 24);
            v90 = v438;
          }
          *(_QWORD *)(a1 + 16) = v90;
          *(_DWORD *)(a1 + 28) = v96;
        }
        *(_QWORD *)(v90 + 8LL * v94) = v92;
        *(_DWORD *)(a1 + 24) = v94 + 1;
      }
      if ( !*(_WORD *)(v92 + 4) )
      {
        v91 = *(_DWORD **)(*(_QWORD *)(v92 + 16) + 24LL);
        if ( v91 )
        {
          if ( !*v91 && v91[1] == 8 && *(_DWORD *)(v92 + 24) == 1 )
          {
            v117 = *(_QWORD *)(v92 + 32);
            v118 = *(_BYTE *)(v117 + 6);
            if ( (v118 & 2) == 0 )
            {
              *(_BYTE *)(v117 + 6) = v118 | 2;
              v119 = *(_DWORD *)(a1 + 168);
              v120 = *(_DWORD *)(a1 + 172);
              if ( v119 >= v120 )
              {
                v272 = 2 * v120;
                v273 = sub_186B270(8 * v272);
                v119 = *(_DWORD *)(a1 + 168);
                v274 = *(_QWORD **)(a1 + 160);
                v121 = v273;
                if ( v119 )
                {
                  if ( v119 - 1 <= 2 || (_QWORD *)v273 == v274 + 1 )
                  {
                    for ( j = 0; j != v119; ++j )
                      *(_QWORD *)(v121 + j * 8) = v274[j];
                  }
                  else
                  {
                    v275 = 0;
                    do
                    {
                      *(__m128i *)(v121 + v275 * 8) = _mm_loadu_si128((const __m128i *)&v274[v275]);
                      v275 += 2;
                    }
                    while ( v275 != 2LL * (v119 >> 1) );
                    if ( (v119 & 1) != 0 )
                      *(_QWORD *)(v121 + 8LL * (v119 & 0xFFFFFFFE)) = v274[v119 & 0xFFFFFFFE];
                  }
                }
                if ( v274 != (_QWORD *)(a1 + 176) && v274 )
                {
                  sub_186B220(v274);
                  v119 = *(_DWORD *)(a1 + 168);
                }
                *(_QWORD *)(a1 + 160) = v121;
                *(_DWORD *)(a1 + 172) = v272;
              }
              else
              {
                v121 = *(_QWORD *)(a1 + 160);
              }
              *(_QWORD *)(v121 + 8LL * v119) = v117;
              *(_DWORD *)(a1 + 168) = v119 + 1;
            }
          }
        }
      }
      ++v435;
    }
    while ( (__int64 *)v5 != v435 );
    v100 = v9 + 32;
    v101 = 8LL * *(unsigned int *)(v9 + 24);
    v102 = v9 + 32 + v101;
    if ( !v101 )
    {
LABEL_365:
      result = 1;
LABEL_366:
      v206 = *(__int64 **)(a1 + 16);
      for ( k = &v206[*(unsigned int *)(a1 + 24)]; v206 != k; *(_BYTE *)(v208 + 6) &= ~1u )
        v208 = *v206++;
      v209 = *(__int64 **)(a1 + 160);
      v210 = *(unsigned int *)(a1 + 168);
      *(_DWORD *)(a1 + 24) = 0;
      for ( m = &v209[v210]; m != v209; *(_BYTE *)(v212 + 6) &= ~2u )
        v212 = *v209++;
      goto LABEL_220;
    }
    while ( 1 )
    {
      v103 = *(_QWORD *)v100;
      if ( !*(_WORD *)(*(_QWORD *)v100 + 4LL)
        && (v104 = *(_DWORD **)(*(_QWORD *)(v103 + 16) + 24LL)) != nullptr
        && !*v104
        && v104[1] == 8
        && *(_DWORD *)(v103 + 24) == 1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v103 + 32) + 6LL) & 1) != 0 )
          goto LABEL_198;
      }
      else if ( (*(_BYTE *)(v103 + 6) & 2) != 0 )
      {
        goto LABEL_198;
      }
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL) != v103 )
      {
        result = 0;
        goto LABEL_366;
      }
LABEL_198:
      v100 += 8;
      if ( v102 == v100 )
        goto LABEL_365;
    }
  }
  if ( (_DWORD)v11 != 6 )
  {
    if ( v13[1] != 2 )
      goto LABEL_42;
    if ( *(_DWORD *)(v9 + 24) != 2 )
      goto LABEL_18;
    v127 = *(_QWORD *)(v9 + 32);
    v443 = v3;
    v8 = *(_QWORD *)(a1 + 8);
    v462 = *(_QWORD *)(v9 + 40);
    v128 = sub_15D2CB0(v8, v127);
    v3 = v443;
    if ( !v128 )
      goto LABEL_235;
    v8 = a1 + 32;
    v509[0] = a1;
    v129 = v443;
    v130 = *(unsigned int *)(a2 + 24);
    v131 = &v443[v130];
    if ( v130 * 8 )
    {
      do
      {
        v134 = *v129;
        v135 = *(_BYTE *)(*v129 + 6);
        if ( (v135 & 1) == 0 )
        {
          *(_BYTE *)(v134 + 6) = v135 | 1;
          v136 = *(_DWORD *)(a1 + 24);
          v137 = *(_DWORD *)(a1 + 28);
          if ( v136 < v137 )
          {
            v132 = *(_QWORD *)(a1 + 16);
          }
          else
          {
            v138 = 2 * v137;
            v444 = v3;
            v139 = sub_186B270(8 * v138);
            v136 = *(_DWORD *)(a1 + 24);
            v8 = *(_QWORD *)(a1 + 16);
            v132 = v139;
            v3 = v444;
            if ( v136 )
            {
              if ( v136 - 1 <= 2 || v139 == v8 + 8 )
              {
                v269 = 0;
                do
                {
                  *(_QWORD *)(v132 + v269) = *(_QWORD *)(v8 + v269);
                  v269 += 8;
                }
                while ( v269 != 8LL * v136 );
              }
              else
              {
                v140 = 0;
                do
                {
                  a3 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + v140));
                  *(__m128 *)(v132 + v140) = a3;
                  v140 += 16;
                }
                while ( v140 != 16LL * (v136 >> 1) );
                if ( (v136 & 1) != 0 )
                  *(_QWORD *)(v132 + 8LL * (v136 & 0xFFFFFFFE)) = *(_QWORD *)(v8 + 8LL * (v136 & 0xFFFFFFFE));
              }
            }
            if ( v8 != a1 + 32 && v8 )
            {
              v489 = v132;
              sub_186B220((void *)v8);
              v136 = *(_DWORD *)(a1 + 24);
              v132 = v489;
              v3 = v444;
            }
            *(_QWORD *)(a1 + 16) = v132;
            *(_DWORD *)(a1 + 28) = v138;
          }
          *(_QWORD *)(v132 + 8LL * v136) = v134;
          *(_DWORD *)(a1 + 24) = v136 + 1;
        }
        if ( !*(_WORD *)(v134 + 4) )
        {
          v133 = *(_QWORD **)(*(_QWORD *)(v134 + 16) + 24LL);
          if ( v133 )
          {
            if ( *v133 == 0x800000000LL && *(_DWORD *)(v134 + 24) == 1 )
            {
              v149 = *(_QWORD *)(v134 + 32);
              v150 = *(_BYTE *)(v149 + 6);
              if ( (v150 & 2) == 0 )
              {
                *(_BYTE *)(v149 + 6) = v150 | 2;
                v151 = *(_DWORD *)(a1 + 168);
                v152 = *(_DWORD *)(a1 + 172);
                if ( v151 >= v152 )
                {
                  v448 = 2 * v152;
                  v474 = v3;
                  v252 = sub_186B270(16LL * v152);
                  v151 = *(_DWORD *)(a1 + 168);
                  v8 = *(_QWORD *)(a1 + 160);
                  v153 = v252;
                  v3 = v474;
                  if ( v151 )
                  {
                    if ( v151 - 1 <= 2 || v252 == v8 + 8 )
                    {
                      v349 = 0;
                      do
                      {
                        *(_QWORD *)(v153 + v349) = *(_QWORD *)(v8 + v349);
                        v349 += 8;
                      }
                      while ( v349 != 8LL * v151 );
                    }
                    else
                    {
                      v253 = 0;
                      do
                      {
                        a3 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + v253));
                        *(__m128 *)(v153 + v253) = a3;
                        v253 += 16;
                      }
                      while ( v253 != 16LL * (v151 >> 1) );
                      if ( (v151 & 1) != 0 )
                        *(_QWORD *)(v153 + 8LL * (v151 & 0xFFFFFFFE)) = *(_QWORD *)(v8 + 8LL * (v151 & 0xFFFFFFFE));
                    }
                  }
                  if ( v8 != a1 + 176 && v8 )
                  {
                    sub_186B220((void *)v8);
                    v151 = *(_DWORD *)(a1 + 168);
                    v3 = v474;
                  }
                  *(_QWORD *)(a1 + 160) = v153;
                  *(_DWORD *)(a1 + 172) = v448;
                }
                else
                {
                  v153 = *(_QWORD *)(a1 + 160);
                }
                *(_QWORD *)(v153 + 8LL * v151) = v149;
                *(_DWORD *)(a1 + 168) = v151 + 1;
              }
            }
          }
        }
        ++v129;
      }
      while ( v131 != v129 );
    }
    v141 = *(_BYTE *)(v127 + 6);
    if ( (v141 & 1) == 0 || (v8 = v462, (*(_BYTE *)(v462 + 6) & 1) == 0) )
    {
      if ( !*(_WORD *)(v127 + 4) )
      {
        v142 = *(_DWORD **)(*(_QWORD *)(v127 + 16) + 24LL);
        if ( v142 )
        {
          if ( !*v142 && v142[1] == 8 && *(_DWORD *)(v127 + 24) == 1 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v127 + 32) + 6LL) & 1) != 0 )
              goto LABEL_265;
LABEL_269:
            v144 = *(__int64 **)(a1 + 16);
            for ( n = &v144[*(unsigned int *)(a1 + 24)]; v144 != n; *(_BYTE *)(v146 + 6) &= ~1u )
              v146 = *v144++;
            v147 = *(__int64 **)(a1 + 160);
            v11 = *(unsigned int *)(a1 + 168);
            *(_DWORD *)(a1 + 24) = 0;
            for ( ii = &v147[v11]; ii != v147; *(_BYTE *)(v11 + 6) &= ~2u )
              v11 = *v147++;
            *(_DWORD *)(a1 + 168) = 0;
LABEL_235:
            if ( *(_WORD *)(v9 + 4) )
              return 0;
            v13 = *(unsigned int **)(*(_QWORD *)(v9 + 16) + 24LL);
            if ( !v13 )
              return 0;
LABEL_16:
            if ( *v13 )
              return 0;
            if ( v13[1] != 2 )
              goto LABEL_42;
LABEL_18:
            if ( *(_DWORD *)(v9 + 24) == 2 )
            {
              v14 = *(_QWORD *)(v9 + 32);
              if ( !*(_WORD *)(v14 + 4) )
              {
                v11 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 24LL);
                if ( !v11 || (v8 = *(unsigned int *)v11, *(_QWORD *)v11 != 0x400000000LL) )
                {
LABEL_22:
                  if ( !*v13 )
                    goto LABEL_42;
                  return 0;
                }
                v213 = *(_QWORD *)(v9 + 40);
                v214 = v3;
                v447 = *(_QWORD *)(v14 + 32);
                v496 = *(_QWORD *)(v14 + 40);
                v215 = *(_QWORD *)(v14 + 48);
                v509[0] = a1;
                v491 = v215;
                v216 = *(unsigned int *)(a2 + 24);
                v217 = &v3[v216];
                if ( v216 * 8 )
                {
                  do
                  {
                    v220 = *v214;
                    v221 = *(_BYTE *)(*v214 + 6);
                    if ( (v221 & 1) == 0 )
                    {
                      *(_BYTE *)(v220 + 6) = v221 | 1;
                      v222 = *(_DWORD *)(a1 + 24);
                      v223 = *(_DWORD *)(a1 + 28);
                      if ( v222 < v223 )
                      {
                        v218 = *(_QWORD *)(a1 + 16);
                      }
                      else
                      {
                        v473 = v3;
                        v463 = 2 * v223;
                        v224 = sub_186B270(16LL * v223);
                        v222 = *(_DWORD *)(a1 + 24);
                        v225 = *(_QWORD **)(a1 + 16);
                        v218 = v224;
                        v3 = v473;
                        if ( v222 )
                        {
                          if ( v222 - 1 <= 2 || (_QWORD *)v224 == v225 + 1 )
                          {
                            for ( jj = 0; jj != v222; ++jj )
                              *(_QWORD *)(v218 + jj * 8) = v225[jj];
                          }
                          else
                          {
                            v226 = 0;
                            do
                            {
                              a3 = (__m128)_mm_loadu_si128((const __m128i *)&v225[v226]);
                              *(__m128 *)(v218 + v226 * 8) = a3;
                              v226 += 2;
                            }
                            while ( 2LL * (v222 >> 1) != v226 );
                            if ( (v222 & 1) != 0 )
                              *(_QWORD *)(v218 + 8LL * (v222 & 0xFFFFFFFE)) = v225[v222 & 0xFFFFFFFE];
                          }
                        }
                        if ( v225 != (_QWORD *)(a1 + 32) && v225 )
                        {
                          v502 = v218;
                          sub_186B220(v225);
                          v222 = *(_DWORD *)(a1 + 24);
                          v218 = v502;
                          v3 = v473;
                        }
                        *(_QWORD *)(a1 + 16) = v218;
                        *(_DWORD *)(a1 + 28) = v463;
                      }
                      *(_QWORD *)(v218 + 8LL * v222) = v220;
                      *(_DWORD *)(a1 + 24) = v222 + 1;
                    }
                    if ( !*(_WORD *)(v220 + 4) )
                    {
                      v219 = *(_DWORD **)(*(_QWORD *)(v220 + 16) + 24LL);
                      if ( v219 )
                      {
                        if ( !*v219 && v219[1] == 8 && *(_DWORD *)(v220 + 24) == 1 )
                        {
                          v236 = *(_QWORD *)(v220 + 32);
                          v237 = *(_BYTE *)(v236 + 6);
                          if ( (v237 & 2) == 0 )
                          {
                            *(_BYTE *)(v236 + 6) = v237 | 2;
                            v238 = *(_DWORD *)(a1 + 168);
                            v239 = *(_DWORD *)(a1 + 172);
                            if ( v238 >= v239 )
                            {
                              v476 = v3;
                              v464 = 2 * v239;
                              v266 = sub_186B270(16LL * v239);
                              v238 = *(_DWORD *)(a1 + 168);
                              v267 = *(_QWORD **)(a1 + 160);
                              v240 = v266;
                              v3 = v476;
                              if ( v238 )
                              {
                                if ( v238 - 1 <= 2 || (_QWORD *)v266 == v267 + 1 )
                                {
                                  for ( kk = 0; kk != v238; ++kk )
                                    *(_QWORD *)(v240 + kk * 8) = v267[kk];
                                }
                                else
                                {
                                  v268 = 0;
                                  do
                                  {
                                    a3 = (__m128)_mm_loadu_si128((const __m128i *)&v267[v268]);
                                    *(__m128 *)(v240 + v268 * 8) = a3;
                                    v268 += 2;
                                  }
                                  while ( 2LL * (v238 >> 1) != v268 );
                                  if ( (v238 & 1) != 0 )
                                    *(_QWORD *)(v240 + 8LL * (v238 & 0xFFFFFFFE)) = v267[v238 & 0xFFFFFFFE];
                                }
                              }
                              if ( v267 != (_QWORD *)(a1 + 176) && v267 )
                              {
                                v503 = v240;
                                sub_186B220(v267);
                                v238 = *(_DWORD *)(a1 + 168);
                                v240 = v503;
                                v3 = v476;
                              }
                              *(_QWORD *)(a1 + 160) = v240;
                              *(_DWORD *)(a1 + 172) = v464;
                            }
                            else
                            {
                              v240 = *(_QWORD *)(a1 + 160);
                            }
                            *(_QWORD *)(v240 + 8LL * v238) = v236;
                            *(_DWORD *)(a1 + 168) = v238 + 1;
                          }
                        }
                      }
                    }
                    ++v214;
                  }
                  while ( v217 != v214 );
                }
                v227 = *(_BYTE *)(v447 + 6);
                if ( (v227 & 1) != 0 )
                {
                  if ( v213 == v491
                    || !*(_WORD *)(v213 + 4)
                    && !*(_WORD *)(v491 + 4)
                    && (v228 = *(_QWORD *)(v213 + 16), v228 == *(_QWORD *)(v491 + 16))
                    && (v257 = *(_QWORD *)(v228 + 24)) != 0
                    && (*(_BYTE *)(v257 + 17) & 8) != 0
                    && *(_DWORD *)(v213 + 24) == 2
                    && *(_QWORD *)(v213 + 32) == *(_QWORD *)(v491 + 40)
                    && *(_QWORD *)(v213 + 40) == *(_QWORD *)(v491 + 32) )
                  {
LABEL_461:
                    v258 = *(__int64 **)(a1 + 16);
                    for ( mm = &v258[*(unsigned int *)(a1 + 24)]; mm != v258; *(_BYTE *)(v260 + 6) &= ~1u )
                      v260 = *v258++;
                    v261 = *(__int64 **)(a1 + 160);
                    v262 = *(unsigned int *)(a1 + 168);
                    *(_DWORD *)(a1 + 24) = 0;
                    for ( nn = &v261[v262]; v261 != nn; *(_BYTE *)(v264 + 6) &= ~2u )
                      v264 = *v261++;
                    goto LABEL_123;
                  }
                }
                v8 = v447;
                if ( !*(_WORD *)(v447 + 4)
                  && (v229 = *(_DWORD **)(*(_QWORD *)(v447 + 16) + 24LL)) != nullptr
                  && !*v229
                  && v229[1] == 8
                  && *(_DWORD *)(v447 + 24) == 1 )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(v447 + 32) + 6LL) & 1) == 0 )
                    goto LABEL_405;
                }
                else if ( (v227 & 2) == 0 )
                {
                  goto LABEL_405;
                }
                v8 = v496;
                if ( v213 == v496 )
                  goto LABEL_461;
                if ( !*(_WORD *)(v213 + 4) && !*(_WORD *)(v496 + 4) )
                {
                  v230 = *(_QWORD *)(v213 + 16);
                  if ( v230 == *(_QWORD *)(v496 + 16) )
                  {
                    v350 = *(_QWORD *)(v230 + 24);
                    if ( v350 )
                    {
                      if ( (*(_BYTE *)(v350 + 17) & 8) != 0
                        && *(_DWORD *)(v213 + 24) == 2
                        && *(_QWORD *)(v213 + 32) == *(_QWORD *)(v496 + 40)
                        && *(_QWORD *)(v213 + 40) == *(_QWORD *)(v496 + 32) )
                      {
                        goto LABEL_461;
                      }
                    }
                  }
                }
LABEL_405:
                v231 = *(__int64 **)(a1 + 16);
                for ( i1 = &v231[*(unsigned int *)(a1 + 24)]; v231 != i1; *(_BYTE *)(v233 + 6) &= ~1u )
                  v233 = *v231++;
                v234 = *(__int64 **)(a1 + 160);
                v11 = *(unsigned int *)(a1 + 168);
                *(_DWORD *)(a1 + 24) = 0;
                for ( i2 = &v234[v11]; i2 != v234; *(_BYTE *)(v11 + 6) &= ~2u )
                  v11 = *v234++;
                *(_DWORD *)(a1 + 168) = 0;
                if ( *(_WORD *)(v9 + 4) )
                  return 0;
                v13 = *(unsigned int **)(*(_QWORD *)(v9 + 16) + 24LL);
                if ( !v13 )
                  return 0;
                goto LABEL_22;
              }
            }
LABEL_42:
            if ( v13[1] != 4 )
            {
LABEL_43:
              if ( v13[1] == 9 && *(_DWORD *)(v9 + 24) == 2 )
              {
                v8 = a1 + 32;
                v155 = v3;
                v472 = *(_QWORD *)(v9 + 32);
                v156 = *(_QWORD *)(v9 + 40);
                v509[0] = a1;
                v483 = v156;
                v157 = *(unsigned int *)(a2 + 24);
                v158 = &v3[v157];
                if ( v157 * 8 )
                {
                  do
                  {
                    v161 = *v155;
                    v162 = *(_BYTE *)(*v155 + 6);
                    if ( (v162 & 1) == 0 )
                    {
                      *(_BYTE *)(v161 + 6) = v162 | 1;
                      v163 = *(_DWORD *)(a1 + 24);
                      v164 = *(_DWORD *)(a1 + 28);
                      if ( v163 < v164 )
                      {
                        v159 = *(_QWORD *)(a1 + 16);
                      }
                      else
                      {
                        v445 = v3;
                        v165 = 2 * v164;
                        v166 = sub_186B270(8 * v165);
                        v163 = *(_DWORD *)(a1 + 24);
                        v8 = *(_QWORD *)(a1 + 16);
                        v159 = v166;
                        v3 = v445;
                        if ( v163 )
                        {
                          if ( v163 - 1 <= 2 || v166 == v8 + 8 )
                          {
                            v191 = 0;
                            do
                            {
                              *(_QWORD *)(v159 + v191) = *(_QWORD *)(v8 + v191);
                              v191 += 8;
                            }
                            while ( v191 != 8LL * v163 );
                          }
                          else
                          {
                            v167 = 0;
                            do
                            {
                              a3 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + v167));
                              *(__m128 *)(v159 + v167) = a3;
                              v167 += 16;
                            }
                            while ( 16LL * (v163 >> 1) != v167 );
                            if ( (v163 & 1) != 0 )
                              *(_QWORD *)(v159 + 8LL * (v163 & 0xFFFFFFFE)) = *(_QWORD *)(v8 + 8LL * (v163 & 0xFFFFFFFE));
                          }
                        }
                        if ( v8 != a1 + 32 && v8 )
                        {
                          v490 = v159;
                          sub_186B220((void *)v8);
                          v163 = *(_DWORD *)(a1 + 24);
                          v159 = v490;
                          v3 = v445;
                        }
                        *(_QWORD *)(a1 + 16) = v159;
                        *(_DWORD *)(a1 + 28) = v165;
                      }
                      *(_QWORD *)(v159 + 8LL * v163) = v161;
                      *(_DWORD *)(a1 + 24) = v163 + 1;
                    }
                    if ( !*(_WORD *)(v161 + 4) )
                    {
                      v160 = *(_DWORD **)(*(_QWORD *)(v161 + 16) + 24LL);
                      if ( v160 )
                      {
                        if ( !*v160 && v160[1] == 8 && *(_DWORD *)(v161 + 24) == 1 )
                        {
                          v176 = *(_QWORD *)(v161 + 32);
                          v177 = *(_BYTE *)(v176 + 6);
                          if ( (v177 & 2) == 0 )
                          {
                            *(_BYTE *)(v176 + 6) = v177 | 2;
                            v178 = *(_DWORD *)(a1 + 168);
                            v179 = *(_DWORD *)(a1 + 172);
                            if ( v178 >= v179 )
                            {
                              v188 = 2 * v179;
                              v446 = v3;
                              v189 = sub_186B270(8 * v188);
                              v178 = *(_DWORD *)(a1 + 168);
                              v8 = *(_QWORD *)(a1 + 160);
                              v180 = v189;
                              v3 = v446;
                              if ( v178 )
                              {
                                if ( v178 - 1 <= 2 || v189 == v8 + 8 )
                                {
                                  v280 = 0;
                                  do
                                  {
                                    *(_QWORD *)(v180 + v280) = *(_QWORD *)(v8 + v280);
                                    v280 += 8;
                                  }
                                  while ( 8LL * v178 != v280 );
                                }
                                else
                                {
                                  v190 = 0;
                                  do
                                  {
                                    a3 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + v190));
                                    *(__m128 *)(v180 + v190) = a3;
                                    v190 += 16;
                                  }
                                  while ( 16LL * (v178 >> 1) != v190 );
                                  if ( (v178 & 1) != 0 )
                                    *(_QWORD *)(v180 + 8LL * (v178 & 0xFFFFFFFE)) = *(_QWORD *)(v8
                                                                                              + 8LL
                                                                                              * (v178 & 0xFFFFFFFE));
                                }
                              }
                              if ( v8 && v8 != a1 + 176 )
                              {
                                v495 = v180;
                                sub_186B220((void *)v8);
                                v178 = *(_DWORD *)(a1 + 168);
                                v180 = v495;
                                v3 = v446;
                              }
                              *(_QWORD *)(a1 + 160) = v180;
                              *(_DWORD *)(a1 + 172) = v188;
                            }
                            else
                            {
                              v180 = *(_QWORD *)(a1 + 160);
                            }
                            *(_QWORD *)(v180 + 8LL * v178) = v176;
                            *(_DWORD *)(a1 + 168) = v178 + 1;
                          }
                        }
                      }
                    }
                    ++v155;
                  }
                  while ( v158 != v155 );
                }
                if ( (*(_BYTE *)(v472 + 6) & 1) != 0 )
                  goto LABEL_324;
                if ( !*(_WORD *)(v483 + 4)
                  && (v168 = *(_DWORD **)(*(_QWORD *)(v483 + 16) + 24LL)) != nullptr
                  && !*v168
                  && v168[1] == 8
                  && *(_DWORD *)(v483 + 24) == 1 )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(v483 + 32) + 6LL) & 1) != 0 )
                    goto LABEL_324;
                }
                else if ( (*(_BYTE *)(v483 + 6) & 2) != 0 )
                {
LABEL_324:
                  v181 = *(__int64 **)(a1 + 16);
                  for ( i3 = &v181[*(unsigned int *)(a1 + 24)]; v181 != i3; *(_BYTE *)(v183 + 6) &= ~1u )
                    v183 = *v181++;
                  v184 = *(__int64 **)(a1 + 160);
                  v185 = *(unsigned int *)(a1 + 168);
                  *(_DWORD *)(a1 + 24) = 0;
                  for ( i4 = &v184[v185]; i4 != v184; *(_BYTE *)(v187 + 6) &= ~2u )
                    v187 = *v184++;
                  goto LABEL_123;
                }
                v169 = *(__int64 **)(a1 + 16);
                for ( i5 = &v169[*(unsigned int *)(a1 + 24)]; i5 != v169; *(_BYTE *)(v171 + 6) &= ~1u )
                  v171 = *v169++;
                v172 = *(__int64 **)(a1 + 160);
                v173 = *(unsigned int *)(a1 + 168);
                *(_DWORD *)(a1 + 24) = 0;
                for ( i6 = &v172[v173]; i6 != v172; *(_BYTE *)(v175 + 6) &= ~2u )
                  v175 = *v172++;
                *(_DWORD *)(a1 + 168) = 0;
                if ( *(_WORD *)(v9 + 4) )
                  return 0;
                v13 = *(unsigned int **)(*(_QWORD *)(v9 + 16) + 24LL);
                if ( !v13 )
                  return 0;
                v11 = *v13;
                if ( (_DWORD)v11 )
                  return 0;
              }
              if ( v13[1] == 7 )
              {
                v509[0] = a1;
                v66 = v3;
                v67 = *(unsigned int *)(a2 + 24);
                v68 = &v3[v67];
                if ( v67 * 8 )
                {
                  do
                  {
                    v71 = *v66;
                    v72 = *(_BYTE *)(*v66 + 6);
                    if ( (v72 & 1) == 0 )
                    {
                      *(_BYTE *)(v71 + 6) = v72 | 1;
                      v73 = *(_DWORD *)(a1 + 24);
                      v74 = *(_DWORD *)(a1 + 28);
                      if ( v73 < v74 )
                      {
                        v69 = *(_QWORD *)(a1 + 16);
                      }
                      else
                      {
                        v460 = v3;
                        v441 = 2 * v74;
                        v69 = sub_186B270(16LL * v74);
                        v73 = *(_DWORD *)(a1 + 24);
                        v75 = *(_QWORD **)(a1 + 16);
                        v76 = v441;
                        v3 = v460;
                        if ( v73 )
                        {
                          if ( v73 - 1 <= 2 || (_QWORD *)v69 == v75 + 1 )
                          {
                            for ( i7 = 0; i7 != v73; ++i7 )
                              *(_QWORD *)(v69 + i7 * 8) = v75[i7];
                          }
                          else
                          {
                            v77 = 0;
                            do
                            {
                              a3 = (__m128)_mm_loadu_si128((const __m128i *)&v75[v77]);
                              *(__m128 *)(v69 + v77 * 8) = a3;
                              v77 += 2;
                            }
                            while ( v77 != 2LL * (v73 >> 1) );
                            if ( (v73 & 1) != 0 )
                              *(_QWORD *)(v69 + 8LL * (v73 & 0xFFFFFFFE)) = v75[v73 & 0xFFFFFFFE];
                          }
                        }
                        if ( v75 != (_QWORD *)(a1 + 32) && v75 )
                        {
                          v461 = v441;
                          v442 = v3;
                          sub_186B220(v75);
                          v73 = *(_DWORD *)(a1 + 24);
                          v76 = v461;
                          v3 = v442;
                        }
                        *(_QWORD *)(a1 + 16) = v69;
                        *(_DWORD *)(a1 + 28) = v76;
                      }
                      *(_QWORD *)(v69 + 8LL * v73) = v71;
                      *(_DWORD *)(a1 + 24) = v73 + 1;
                    }
                    if ( !*(_WORD *)(v71 + 4) )
                    {
                      v70 = *(_DWORD **)(*(_QWORD *)(v71 + 16) + 24LL);
                      if ( v70 )
                      {
                        if ( !*v70 && v70[1] == 8 && *(_DWORD *)(v71 + 24) == 1 )
                        {
                          v241 = *(_QWORD *)(v71 + 32);
                          v242 = *(_BYTE *)(v241 + 6);
                          if ( (v242 & 2) == 0 )
                          {
                            *(_BYTE *)(v241 + 6) = v242 | 2;
                            v243 = *(_DWORD *)(a1 + 168);
                            v244 = *(_DWORD *)(a1 + 172);
                            if ( v243 >= v244 )
                            {
                              v467 = v241;
                              v295 = 2 * v244;
                              v452 = v3;
                              v245 = sub_186B270(8 * v295);
                              v243 = *(_DWORD *)(a1 + 168);
                              v3 = v452;
                              v296 = *(_QWORD **)(a1 + 160);
                              v241 = v467;
                              if ( v243 )
                              {
                                if ( v243 - 1 <= 2 || (_QWORD *)v245 == v296 + 1 )
                                {
                                  for ( i8 = 0; i8 != v243; ++i8 )
                                    *(_QWORD *)(v245 + i8 * 8) = v296[i8];
                                }
                                else
                                {
                                  v297 = 0;
                                  do
                                  {
                                    a3 = (__m128)_mm_loadu_si128((const __m128i *)&v296[v297]);
                                    *(__m128 *)(v245 + v297 * 8) = a3;
                                    v297 += 2;
                                  }
                                  while ( v297 != 2LL * (v243 >> 1) );
                                  if ( (v243 & 1) != 0 )
                                    *(_QWORD *)(v245 + 8LL * (v243 & 0xFFFFFFFE)) = v296[v243 & 0xFFFFFFFE];
                                }
                              }
                              if ( v296 != (_QWORD *)(a1 + 176) && v296 )
                              {
                                sub_186B220(v296);
                                v243 = *(_DWORD *)(a1 + 168);
                                v241 = v467;
                                v3 = v452;
                              }
                              *(_QWORD *)(a1 + 160) = v245;
                              *(_DWORD *)(a1 + 172) = v295;
                            }
                            else
                            {
                              v245 = *(_QWORD *)(a1 + 160);
                            }
                            *(_QWORD *)(v245 + 8LL * v243) = v241;
                            *(_DWORD *)(a1 + 168) = v243 + 1;
                          }
                        }
                      }
                    }
                    ++v66;
                  }
                  while ( v68 != v66 );
                }
                v199 = v9 + 32;
                v200 = 0;
                v201 = 8LL * *(unsigned int *)(v9 + 24);
                v8 = v9 + 32 + v201;
                if ( !v201 )
                  goto LABEL_568;
                do
                {
                  v202 = *(_QWORD *)v199;
                  v203 = *(_BYTE *)(*(_QWORD *)v199 + 6LL);
                  if ( (v203 & 1) != 0 )
                  {
                    ++v200;
                  }
                  else
                  {
                    if ( !*(_WORD *)(v202 + 4)
                      && (v204 = *(_DWORD **)(*(_QWORD *)(v202 + 16) + 24LL)) != nullptr
                      && !*v204
                      && v204[1] == 8
                      && *(_DWORD *)(v202 + 24) == 1 )
                    {
                      v205 = *(_BYTE *)(*(_QWORD *)(v202 + 32) + 6LL) & 1;
                    }
                    else
                    {
                      v205 = (v203 & 2) != 0;
                    }
                    v200 -= v205;
                  }
                  v199 += 8;
                }
                while ( v199 != v8 );
                if ( (v200 & 1) == 0 )
                {
LABEL_568:
                  v298 = *(__int64 **)(a1 + 16);
                  for ( i9 = &v298[*(unsigned int *)(a1 + 24)]; i9 != v298; *(_BYTE *)(v300 + 6) &= ~1u )
                    v300 = *v298++;
                  v301 = *(__int64 **)(a1 + 160);
                  v302 = *(unsigned int *)(a1 + 168);
                  *(_DWORD *)(a1 + 24) = 0;
                  for ( i10 = &v301[v302]; i10 != v301; *(_BYTE *)(v304 + 6) &= ~2u )
                    v304 = *v301++;
                  goto LABEL_123;
                }
                v246 = *(unsigned int *)(a1 + 24);
                if ( v246 * 8 )
                {
                  v247 = *(__int64 **)(a1 + 16);
                  v248 = &v247[v246];
                  do
                  {
                    v249 = *v247++;
                    *(_BYTE *)(v249 + 6) &= ~1u;
                  }
                  while ( v248 != v247 );
                }
                v250 = *(__int64 **)(a1 + 160);
                v11 = *(unsigned int *)(a1 + 168);
                *(_DWORD *)(a1 + 24) = 0;
                for ( i11 = &v250[v11]; v250 != i11; *(_BYTE *)(v11 + 6) &= ~2u )
                  v11 = *v250++;
                *(_DWORD *)(a1 + 168) = 0;
                if ( *(_WORD *)(v9 + 4) )
                  return 0;
                v13 = *(unsigned int **)(*(_QWORD *)(v9 + 16) + 24LL);
                if ( !v13 || *v13 )
                  return 0;
              }
              if ( v13[1] != 8 || *(_DWORD *)(v9 + 24) != 1 )
                return 0;
              v20 = *(_QWORD *)(v9 + 32);
              v21 = 8LL * *(unsigned int *)(a2 + 24);
              v22 = (__int64 *)((char *)v3 + v21);
              if ( v21 )
              {
                v23 = v3;
                while ( 1 )
                {
                  v11 = *v23;
                  if ( v20 == *v23 )
                    return 1;
                  i18 = *(unsigned __int16 *)(v20 + 4);
                  if ( !(_WORD)i18 && !*(_WORD *)(v11 + 4) )
                  {
                    v8 = *(_QWORD *)(v20 + 16);
                    if ( *(_QWORD *)(v11 + 16) == v8 )
                    {
                      v8 = *(_QWORD *)(v8 + 24);
                      if ( v8 )
                      {
                        if ( (*(_BYTE *)(v8 + 17) & 8) != 0 && *(_DWORD *)(v20 + 24) == 2 )
                        {
                          v8 = *(_QWORD *)(v20 + 32);
                          if ( *(_QWORD *)(v11 + 40) == v8 )
                          {
                            v8 = *(_QWORD *)(v20 + 40);
                            if ( *(_QWORD *)(v11 + 32) == v8 )
                              return 1;
                          }
                        }
                      }
                    }
                  }
                  if ( v22 == ++v23 )
                    goto LABEL_167;
                }
              }
              i18 = *(unsigned __int16 *)(v20 + 4);
LABEL_167:
              if ( (_WORD)i18 )
                goto LABEL_171;
              v88 = *(unsigned int **)(*(_QWORD *)(v20 + 16) + 24LL);
              if ( !v88 )
                goto LABEL_171;
              if ( *v88 )
                goto LABEL_170;
              if ( v88[1] == 5 )
              {
                v509[0] = a1;
                v372 = v3;
                if ( v21 )
                {
                  do
                  {
                    v21 = *v372;
                    v374 = *(_BYTE *)(*v372 + 6);
                    if ( (v374 & 1) == 0 )
                    {
                      *(_BYTE *)(v21 + 6) = v374 | 1;
                      v375 = *(_DWORD *)(a1 + 24);
                      v376 = *(_DWORD *)(a1 + 28);
                      if ( v375 < v376 )
                      {
                        v373 = *(_QWORD *)(a1 + 16);
                      }
                      else
                      {
                        v487 = v3;
                        v455 = 2 * v376;
                        v373 = sub_186B270(16LL * v376);
                        v375 = *(_DWORD *)(a1 + 24);
                        v377 = *(_QWORD **)(a1 + 16);
                        v3 = v487;
                        if ( v375 )
                        {
                          if ( v375 - 1 <= 2 || (_QWORD *)v373 == v377 + 1 )
                          {
                            for ( i12 = 0; i12 != v375; ++i12 )
                              *(_QWORD *)(v373 + i12 * 8) = v377[i12];
                          }
                          else
                          {
                            v378 = 0;
                            do
                            {
                              a3 = (__m128)_mm_loadu_si128((const __m128i *)&v377[v378]);
                              *(__m128 *)(v373 + v378 * 8) = a3;
                              v378 += 2;
                            }
                            while ( 2LL * (v375 >> 1) != v378 );
                            if ( (v375 & 1) != 0 )
                              *(_QWORD *)(v373 + 8LL * (v375 & 0xFFFFFFFE)) = v377[v375 & 0xFFFFFFFE];
                          }
                        }
                        if ( v377 != (_QWORD *)(a1 + 32) && v377 )
                        {
                          sub_186B220(v377);
                          v375 = *(_DWORD *)(a1 + 24);
                          v3 = v487;
                        }
                        *(_QWORD *)(a1 + 16) = v373;
                        *(_DWORD *)(a1 + 28) = v455;
                      }
                      *(_QWORD *)(v373 + 8LL * v375) = v21;
                      *(_DWORD *)(a1 + 24) = v375 + 1;
                    }
                    ++v372;
                  }
                  while ( v22 != v372 );
                }
                v379 = (__int64 *)(v20 + 32);
                v11 = 8LL * *(unsigned int *)(v20 + 24);
                i18 = v20 + 32 + v11;
                if ( v11 )
                {
                  do
                  {
                    v11 = *v379;
                    if ( (*(_BYTE *)(*v379 + 6) & 1) != 0 )
                      goto LABEL_655;
                    ++v379;
                  }
                  while ( (__int64 *)i18 != v379 );
                }
                v457 = v3;
                v8 = (__int64)v509;
                sub_826840(v509, v21, v11, i18);
                if ( *(_WORD *)(v20 + 4) )
                  goto LABEL_171;
                v88 = *(unsigned int **)(*(_QWORD *)(v20 + 16) + 24LL);
                if ( !v88 )
                  goto LABEL_171;
                v3 = v457;
                if ( !*v88 )
                  goto LABEL_547;
LABEL_170:
                if ( *v88 )
                  goto LABEL_171;
              }
              else
              {
LABEL_547:
                v11 = v88[1];
                if ( (_DWORD)v11 == 6 )
                {
                  v509[0] = a1;
                  v352 = *(unsigned int *)(a2 + 24);
                  v353 = &v3[v352];
                  if ( v352 * 8 )
                  {
                    do
                    {
                      v355 = *v435;
                      v356 = *(_BYTE *)(*v435 + 6);
                      if ( (v356 & 1) == 0 )
                      {
                        *(_BYTE *)(v355 + 6) = v356 | 1;
                        v357 = *(_DWORD *)(a1 + 24);
                        v358 = *(_DWORD *)(a1 + 28);
                        if ( v357 < v358 )
                        {
                          v354 = *(_QWORD *)(a1 + 16);
                        }
                        else
                        {
                          v359 = 2 * v358;
                          v354 = sub_186B270(8 * v359);
                          v357 = *(_DWORD *)(a1 + 24);
                          v360 = *(_QWORD **)(a1 + 16);
                          if ( v357 )
                          {
                            if ( v357 - 1 <= 2 || (_QWORD *)v354 == v360 + 1 )
                            {
                              for ( i13 = 0; i13 != v357; ++i13 )
                                *(_QWORD *)(v354 + i13 * 8) = v360[i13];
                            }
                            else
                            {
                              v361 = 0;
                              do
                              {
                                *(__m128i *)(v354 + v361 * 8) = _mm_loadu_si128((const __m128i *)&v360[v361]);
                                v361 += 2;
                              }
                              while ( v361 != 2LL * (v357 >> 1) );
                              if ( (v357 & 1) != 0 )
                                *(_QWORD *)(v354 + 8LL * (v357 & 0xFFFFFFFE)) = v360[v357 & 0xFFFFFFFE];
                            }
                          }
                          if ( v360 != (_QWORD *)(a1 + 32) && v360 )
                          {
                            sub_186B220(v360);
                            v357 = *(_DWORD *)(a1 + 24);
                          }
                          *(_QWORD *)(a1 + 16) = v354;
                          *(_DWORD *)(a1 + 28) = v359;
                        }
                        *(_QWORD *)(v354 + 8LL * v357) = v355;
                        *(_DWORD *)(a1 + 24) = v357 + 1;
                      }
                      ++v435;
                    }
                    while ( v353 != v435 );
                  }
                  v362 = v20 + 32;
                  v363 = 8LL * *(unsigned int *)(v20 + 24);
                  v364 = v20 + 32 + v363;
                  if ( v363 )
                  {
                    while ( 1 )
                    {
                      result = *(_BYTE *)(*(_QWORD *)v362 + 6LL) & 1;
                      if ( (*(_BYTE *)(*(_QWORD *)v362 + 6LL) & 1) == 0
                        && *(_QWORD *)v362 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL) )
                      {
                        break;
                      }
                      v362 += 8;
                      if ( v364 == v362 )
                        goto LABEL_720;
                    }
                  }
                  else
                  {
LABEL_720:
                    result = 1;
                  }
                  v365 = *(__int64 **)(a1 + 16);
                  for ( i14 = &v365[*(unsigned int *)(a1 + 24)]; i14 != v365; *(_BYTE *)(v367 + 6) &= ~1u )
                    v367 = *v365++;
                  v368 = *(__int64 **)(a1 + 160);
                  v369 = *(unsigned int *)(a1 + 168);
                  *(_DWORD *)(a1 + 24) = 0;
                  for ( i15 = &v368[v369]; i15 != v368; *(_BYTE *)(v371 + 6) &= ~2u )
                    v371 = *v368++;
                  goto LABEL_220;
                }
                if ( (_DWORD)v11 == 2 && *(_DWORD *)(v20 + 24) == 2 )
                {
                  v8 = *(_QWORD *)(a1 + 8);
                  v451 = v3;
                  v292 = *(_QWORD *)(v20 + 40);
                  v21 = *(_QWORD *)(v20 + 32);
                  v466 = v21;
                  v293 = sub_15D2CB0(v8, v21);
                  v3 = v451;
                  if ( !v293 )
                    goto LABEL_551;
                  v509[0] = a1;
                  v306 = v451;
                  v307 = *(unsigned int *)(a2 + 24);
                  v453 = &v451[v307];
                  v8 = a1 + 32;
                  if ( v307 * 8 )
                  {
                    do
                    {
                      v309 = *v306;
                      v310 = *(_BYTE *)(*v306 + 6);
                      if ( (v310 & 1) == 0 )
                      {
                        *(_BYTE *)(v309 + 6) = v310 | 1;
                        v311 = *(_DWORD *)(a1 + 24);
                        v312 = *(_DWORD *)(a1 + 28);
                        if ( v311 < v312 )
                        {
                          v21 = *(_QWORD *)(a1 + 16);
                        }
                        else
                        {
                          v492 = v3;
                          v478 = 2 * v312;
                          v313 = sub_186B270(16LL * v312);
                          v311 = *(_DWORD *)(a1 + 24);
                          v8 = *(_QWORD *)(a1 + 16);
                          v21 = v313;
                          v3 = v492;
                          if ( v311 )
                          {
                            if ( v311 - 1 <= 2 || v313 == v8 + 8 )
                            {
                              v423 = 0;
                              do
                              {
                                i18 = *(_QWORD *)(v8 + v423);
                                *(_QWORD *)(v21 + v423) = i18;
                                v423 += 8;
                              }
                              while ( 8LL * v311 != v423 );
                            }
                            else
                            {
                              v314 = 0;
                              do
                              {
                                a3 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + v314));
                                *(__m128 *)(v21 + v314) = a3;
                                v314 += 16;
                              }
                              while ( v314 != 16LL * (v311 >> 1) );
                              if ( (v311 & 1) != 0 )
                                *(_QWORD *)(v21 + 8LL * (v311 & 0xFFFFFFFE)) = *(_QWORD *)(v8 + 8LL
                                                                                              * (v311 & 0xFFFFFFFE));
                            }
                          }
                          if ( v8 && v8 != a1 + 32 )
                          {
                            sub_186B220((void *)v8);
                            v311 = *(_DWORD *)(a1 + 24);
                            v3 = v492;
                          }
                          *(_QWORD *)(a1 + 16) = v21;
                          *(_DWORD *)(a1 + 28) = v478;
                        }
                        *(_QWORD *)(v21 + 8LL * v311) = v309;
                        *(_DWORD *)(a1 + 24) = v311 + 1;
                      }
                      if ( !*(_WORD *)(v309 + 4) )
                      {
                        v308 = *(_QWORD **)(*(_QWORD *)(v309 + 16) + 24LL);
                        if ( v308 )
                        {
                          if ( *v308 == 0x800000000LL && *(_DWORD *)(v309 + 24) == 1 )
                          {
                            v315 = *(_QWORD *)(v309 + 32);
                            v316 = *(_BYTE *)(v315 + 6);
                            if ( (v316 & 2) == 0 )
                            {
                              *(_BYTE *)(v315 + 6) = v316 | 2;
                              v317 = *(_DWORD *)(a1 + 168);
                              v318 = *(_DWORD *)(a1 + 172);
                              if ( v317 >= v318 )
                              {
                                v500 = v315;
                                v481 = 2 * v318;
                                v493 = v3;
                                v319 = sub_186B270(16LL * v318);
                                v317 = *(_DWORD *)(a1 + 168);
                                v3 = v493;
                                v417 = *(_QWORD **)(a1 + 160);
                                v315 = v500;
                                if ( v317 )
                                {
                                  if ( v317 - 1 <= 2 || (_QWORD *)v319 == v417 + 1 )
                                  {
                                    for ( i16 = 0; i16 != v317; ++i16 )
                                    {
                                      i18 = v417[i16];
                                      *(_QWORD *)(v319 + i16 * 8) = i18;
                                    }
                                  }
                                  else
                                  {
                                    v418 = 0;
                                    do
                                    {
                                      a3 = (__m128)_mm_loadu_si128((const __m128i *)&v417[v418]);
                                      *(__m128 *)(v319 + v418 * 8) = a3;
                                      v418 += 2;
                                    }
                                    while ( 2LL * (v317 >> 1) != v418 );
                                    if ( (v317 & 1) != 0 )
                                      *(_QWORD *)(v319 + 8LL * (v317 & 0xFFFFFFFE)) = v417[v317 & 0xFFFFFFFE];
                                  }
                                }
                                if ( v417 != (_QWORD *)(a1 + 176) && v417 )
                                {
                                  sub_186B220(v417);
                                  v317 = *(_DWORD *)(a1 + 168);
                                  v315 = v500;
                                  v3 = v493;
                                }
                                v8 = v481;
                                *(_QWORD *)(a1 + 160) = v319;
                                *(_DWORD *)(a1 + 172) = v481;
                              }
                              else
                              {
                                v319 = *(_QWORD *)(a1 + 160);
                              }
                              v21 = v317;
                              *(_QWORD *)(v319 + 8LL * v317) = v315;
                              *(_DWORD *)(a1 + 168) = v317 + 1;
                            }
                          }
                        }
                      }
                      ++v306;
                    }
                    while ( v453 != v306 );
                  }
                  v11 = *(unsigned __int8 *)(v466 + 6);
                  if ( (v11 & 1) == 0 )
                  {
LABEL_606:
                    v320 = *(_BYTE *)(v292 + 6);
                    goto LABEL_607;
                  }
                  if ( !*(_WORD *)(v292 + 4) )
                  {
                    v416 = *(_DWORD **)(*(_QWORD *)(v292 + 16) + 24LL);
                    if ( v416 )
                    {
                      if ( !*v416 && v416[1] == 8 && *(_DWORD *)(v292 + 24) == 1 )
                      {
                        if ( (*(_BYTE *)(*(_QWORD *)(v292 + 32) + 6LL) & 1) == 0 )
                          goto LABEL_606;
LABEL_655:
                        sub_826840(v509, v21, v11, i18);
                        return 1;
                      }
                    }
                  }
                  v320 = *(_BYTE *)(v292 + 6);
                  if ( (v320 & 2) != 0 )
                    goto LABEL_655;
LABEL_607:
                  if ( (v320 & 1) != 0 )
                  {
                    if ( !*(_WORD *)(v466 + 4)
                      && (v321 = *(_DWORD **)(*(_QWORD *)(v466 + 16) + 24LL)) != nullptr
                      && !*v321
                      && v321[1] == 8
                      && *(_DWORD *)(v466 + 24) == 1 )
                    {
                      if ( (*(_BYTE *)(*(_QWORD *)(v466 + 32) + 6LL) & 1) != 0 )
                        goto LABEL_655;
                    }
                    else
                    {
                      v11 &= 2u;
                      if ( (_DWORD)v11 )
                        goto LABEL_655;
                    }
                  }
                  v322 = *(__int64 **)(a1 + 16);
                  for ( i17 = &v322[*(unsigned int *)(a1 + 24)]; i17 != v322; *(_BYTE *)(v324 + 6) &= ~1u )
                    v324 = *v322++;
                  v325 = *(__int64 **)(a1 + 160);
                  v11 = *(unsigned int *)(a1 + 168);
                  *(_DWORD *)(a1 + 24) = 0;
                  for ( i18 = (__int64)&v325[v11]; (__int64 *)i18 != v325; *(_BYTE *)(v11 + 6) &= ~2u )
                    v11 = *v325++;
                  *(_DWORD *)(a1 + 168) = 0;
LABEL_551:
                  if ( *(_WORD *)(v20 + 4) || (v88 = *(unsigned int **)(*(_QWORD *)(v20 + 16) + 24LL)) == nullptr )
                  {
LABEL_171:
                    sub_180B130(v8);
                    if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
                    {
                      sub_186A4C0(*(double *)a3.m128_u64);
                      v89 = sub_180B150(v8, v21);
                      std::__ostream_insert<char,std::char_traits<char>>();
                      sub_1606360(v509, v9, *(_QWORD *)(a1 + 8), 0, 0, 0);
                      sub_160E8B0(v89, v509);
                      std::__ostream_insert<char,std::char_traits<char>>();
                      sub_18572D0(v510);
                      sub_186A500(v510, "\n");
                    }
                    else
                    {
                      v154 = sub_180B150(v8, v21);
                      std::__ostream_insert<char,std::char_traits<char>>();
                      sub_1606360(v509, v9, *(_QWORD *)(a1 + 8), 0, 0, 0);
                      sub_160E8B0(v154, v509);
                      std::__ostream_insert<char,std::char_traits<char>>();
                      sub_18572D0(v510);
                    }
                    return 0;
                  }
                  goto LABEL_170;
                }
              }
              if ( v88[1] != 4 )
              {
LABEL_518:
                if ( v88[1] == 9 && *(_DWORD *)(v20 + 24) == 2 )
                {
                  v8 = a1 + 32;
                  v389 = v3;
                  v456 = *(_QWORD *)(v20 + 32);
                  v390 = *(_QWORD *)(v20 + 40);
                  v509[0] = a1;
                  v499 = v390;
                  v391 = *(unsigned int *)(a2 + 24);
                  v21 = (__int64)&v3[v391];
                  if ( v391 * 8 )
                  {
                    do
                    {
                      v394 = *v389;
                      v395 = *(_BYTE *)(*v389 + 6);
                      if ( (v395 & 1) == 0 )
                      {
                        *(_BYTE *)(v394 + 6) = v395 | 1;
                        v396 = *(_DWORD *)(a1 + 24);
                        v397 = *(_DWORD *)(a1 + 28);
                        if ( v396 < v397 )
                        {
                          i18 = *(_QWORD *)(a1 + 16);
                        }
                        else
                        {
                          v468 = 2 * v397;
                          v479 = v3;
                          v398 = sub_186B270(16LL * v397);
                          v396 = *(_DWORD *)(a1 + 24);
                          v8 = *(_QWORD *)(a1 + 16);
                          i18 = v398;
                          v3 = v479;
                          if ( v396 )
                          {
                            if ( v396 - 1 <= 2 || v398 == v8 + 8 )
                            {
                              v414 = 0;
                              do
                              {
                                *(_QWORD *)(i18 + v414) = *(_QWORD *)(v8 + v414);
                                v414 += 8;
                              }
                              while ( 8LL * v396 != v414 );
                            }
                            else
                            {
                              v399 = 0;
                              do
                              {
                                a3 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + v399));
                                *(__m128 *)(i18 + v399) = a3;
                                v399 += 16;
                              }
                              while ( v399 != 16LL * (v396 >> 1) );
                              if ( (v396 & 1) != 0 )
                                *(_QWORD *)(i18 + 8LL * (v396 & 0xFFFFFFFE)) = *(_QWORD *)(v8 + 8LL
                                                                                              * (v396 & 0xFFFFFFFE));
                            }
                          }
                          if ( v8 != a1 + 32 && v8 )
                          {
                            v505 = i18;
                            sub_186B220((void *)v8);
                            v396 = *(_DWORD *)(a1 + 24);
                            i18 = v505;
                            v3 = v479;
                          }
                          *(_QWORD *)(a1 + 16) = i18;
                          *(_DWORD *)(a1 + 28) = v468;
                        }
                        v392 = v396;
                        v11 = v396 + 1;
                        *(_QWORD *)(i18 + 8 * v392) = v394;
                        *(_DWORD *)(a1 + 24) = v11;
                      }
                      if ( !*(_WORD *)(v394 + 4) )
                      {
                        v393 = *(_QWORD **)(*(_QWORD *)(v394 + 16) + 24LL);
                        if ( v393 )
                        {
                          v11 = *(unsigned int *)v393;
                          if ( *v393 == 0x800000000LL && *(_DWORD *)(v394 + 24) == 1 )
                          {
                            i18 = *(_QWORD *)(v394 + 32);
                            v407 = *(_BYTE *)(i18 + 6);
                            if ( (v407 & 2) == 0 )
                            {
                              *(_BYTE *)(i18 + 6) = v407 | 2;
                              v408 = *(_DWORD *)(a1 + 168);
                              v409 = *(_DWORD *)(a1 + 172);
                              if ( v408 >= v409 )
                              {
                                v506 = i18;
                                v469 = 2 * v409;
                                v480 = v3;
                                v412 = sub_186B270(16LL * v409);
                                v408 = *(_DWORD *)(a1 + 168);
                                v8 = *(_QWORD *)(a1 + 160);
                                v410 = v412;
                                v3 = v480;
                                i18 = v506;
                                if ( v408 )
                                {
                                  if ( v408 - 1 <= 2 || v412 == v8 + 8 )
                                  {
                                    v424 = 0;
                                    do
                                    {
                                      *(_QWORD *)(v410 + v424) = *(_QWORD *)(v8 + v424);
                                      v424 += 8;
                                    }
                                    while ( v424 != 8LL * v408 );
                                  }
                                  else
                                  {
                                    v413 = 0;
                                    do
                                    {
                                      a3 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + v413));
                                      *(__m128 *)(v410 + v413) = a3;
                                      v413 += 16;
                                    }
                                    while ( 16LL * (v408 >> 1) != v413 );
                                    if ( (v408 & 1) != 0 )
                                      *(_QWORD *)(v410 + 8LL * (v408 & 0xFFFFFFFE)) = *(_QWORD *)(v8
                                                                                                + 8LL
                                                                                                * (v408 & 0xFFFFFFFE));
                                  }
                                }
                                if ( v8 && v8 != a1 + 176 )
                                {
                                  sub_186B220((void *)v8);
                                  v408 = *(_DWORD *)(a1 + 168);
                                  i18 = v506;
                                  v3 = v480;
                                }
                                *(_QWORD *)(a1 + 160) = v410;
                                *(_DWORD *)(a1 + 172) = v469;
                              }
                              else
                              {
                                v410 = *(_QWORD *)(a1 + 160);
                              }
                              v411 = v408;
                              v11 = v408 + 1;
                              *(_QWORD *)(v410 + 8 * v411) = i18;
                              *(_DWORD *)(a1 + 168) = v11;
                            }
                          }
                        }
                      }
                      ++v389;
                    }
                    while ( (__int64 *)v21 != v389 );
                  }
                  if ( !*(_WORD *)(v456 + 4) )
                  {
                    v400 = *(_QWORD **)(*(_QWORD *)(v456 + 16) + 24LL);
                    if ( v400 )
                    {
                      if ( *v400 == 0x800000000LL && *(_DWORD *)(v456 + 24) == 1 )
                      {
                        if ( (*(_BYTE *)(*(_QWORD *)(v456 + 32) + 6LL) & 1) == 0 )
                          goto LABEL_790;
LABEL_789:
                        if ( (*(_BYTE *)(v499 + 6) & 1) != 0 )
                          goto LABEL_655;
                        goto LABEL_790;
                      }
                    }
                  }
                  if ( (*(_BYTE *)(v456 + 6) & 2) != 0 )
                    goto LABEL_789;
LABEL_790:
                  v401 = *(__int64 **)(a1 + 16);
                  for ( i19 = &v401[*(unsigned int *)(a1 + 24)]; v401 != i19; *(_BYTE *)(v403 + 6) &= ~1u )
                    v403 = *v401++;
                  v404 = *(__int64 **)(a1 + 160);
                  v405 = *(unsigned int *)(a1 + 168);
                  *(_DWORD *)(a1 + 24) = 0;
                  for ( i18 = (__int64)&v404[v405]; v404 != (__int64 *)i18; *(_BYTE *)(v406 + 6) &= ~2u )
                    v406 = *v404++;
                  *(_DWORD *)(a1 + 168) = 0;
                  if ( *(_WORD *)(v20 + 4) )
                    goto LABEL_171;
                  v88 = *(unsigned int **)(*(_QWORD *)(v20 + 16) + 24LL);
                  if ( !v88 || *v88 )
                    goto LABEL_171;
                }
                if ( v88[1] == 7 )
                {
                  v509[0] = a1;
                  v281 = *(unsigned int *)(a2 + 24);
                  v282 = &v3[v281];
                  if ( v281 * 8 )
                  {
                    do
                    {
                      v284 = *v435;
                      v285 = *(_BYTE *)(*v435 + 6);
                      if ( (v285 & 1) == 0 )
                      {
                        *(_BYTE *)(v284 + 6) = v285 | 1;
                        v286 = *(_DWORD *)(a1 + 24);
                        v287 = *(_DWORD *)(a1 + 28);
                        if ( v286 < v287 )
                        {
                          i18 = *(_QWORD *)(a1 + 16);
                        }
                        else
                        {
                          v288 = 2 * v287;
                          i18 = sub_186B270(8 * v288);
                          v286 = *(_DWORD *)(a1 + 24);
                          v289 = *(_QWORD **)(a1 + 16);
                          if ( v286 )
                          {
                            if ( v286 - 1 <= 2 || (_QWORD *)i18 == v289 + 1 )
                            {
                              for ( i20 = 0; i20 != v286; ++i20 )
                                *(_QWORD *)(i18 + i20 * 8) = v289[i20];
                            }
                            else
                            {
                              v290 = 0;
                              do
                              {
                                a3 = (__m128)_mm_loadu_si128((const __m128i *)&v289[v290]);
                                *(__m128 *)(i18 + v290 * 8) = a3;
                                v290 += 2;
                              }
                              while ( 2LL * (v286 >> 1) != v290 );
                              if ( (v286 & 1) != 0 )
                                *(_QWORD *)(i18 + 8LL * (v286 & 0xFFFFFFFE)) = v289[v286 & 0xFFFFFFFE];
                            }
                          }
                          if ( v289 != (_QWORD *)(a1 + 32) && v289 )
                          {
                            v449 = i18;
                            sub_186B220(v289);
                            v286 = *(_DWORD *)(a1 + 24);
                            i18 = v449;
                          }
                          *(_QWORD *)(a1 + 16) = i18;
                          *(_DWORD *)(a1 + 28) = v288;
                        }
                        *(_QWORD *)(i18 + 8LL * v286) = v284;
                        *(_DWORD *)(a1 + 24) = v286 + 1;
                      }
                      if ( !*(_WORD *)(v284 + 4) )
                      {
                        v283 = *(_QWORD **)(*(_QWORD *)(v284 + 16) + 24LL);
                        if ( v283 )
                        {
                          if ( *v283 == 0x800000000LL && *(_DWORD *)(v284 + 24) == 1 )
                          {
                            v380 = *(_QWORD *)(v284 + 32);
                            v381 = *(_BYTE *)(v380 + 6);
                            if ( (v381 & 2) == 0 )
                            {
                              *(_BYTE *)(v380 + 6) = v381 | 2;
                              v382 = *(_DWORD *)(a1 + 168);
                              v383 = *(_DWORD *)(a1 + 172);
                              if ( v382 >= v383 )
                              {
                                v428 = 2 * v383;
                                v429 = sub_186B270(8 * v428);
                                v382 = *(_DWORD *)(a1 + 168);
                                v430 = *(_QWORD **)(a1 + 160);
                                if ( v382 )
                                {
                                  if ( v382 - 1 <= 2 || (_QWORD *)v429 == v430 + 1 )
                                  {
                                    for ( i21 = 0; i21 != v382; ++i21 )
                                      *(_QWORD *)(v429 + i21 * 8) = v430[i21];
                                  }
                                  else
                                  {
                                    v431 = 0;
                                    do
                                    {
                                      a3 = (__m128)_mm_loadu_si128((const __m128i *)&v430[v431]);
                                      *(__m128 *)(v429 + v431 * 8) = a3;
                                      v431 += 2;
                                    }
                                    while ( v431 != 2LL * (v382 >> 1) );
                                    if ( (v382 & 1) != 0 )
                                      *(_QWORD *)(v429 + 8LL * (v382 & 0xFFFFFFFE)) = v430[v382 & 0xFFFFFFFE];
                                  }
                                }
                                if ( v430 != (_QWORD *)(a1 + 176) && v430 )
                                {
                                  v458 = v429;
                                  sub_186B220(v430);
                                  v382 = *(_DWORD *)(a1 + 168);
                                  v429 = v458;
                                }
                                *(_QWORD *)(a1 + 160) = v429;
                                *(_DWORD *)(a1 + 172) = v428;
                              }
                              i18 = v382;
                              *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL * v382) = v380;
                              *(_DWORD *)(a1 + 168) = v382 + 1;
                            }
                          }
                        }
                      }
                      ++v435;
                    }
                    while ( v282 != v435 );
                  }
                  v11 = v9 + 32;
                  v21 = 1;
                  v384 = 8LL * *(unsigned int *)(v9 + 24);
                  v385 = v9 + 32 + v384;
                  if ( v384 )
                  {
                    do
                    {
                      i18 = *(_QWORD *)v11;
                      v386 = *(_BYTE *)(*(_QWORD *)v11 + 6LL);
                      if ( (v386 & 1) != 0 )
                      {
                        LODWORD(v21) = v21 + 1;
                      }
                      else
                      {
                        if ( !*(_WORD *)(i18 + 4)
                          && (v387 = *(_QWORD **)(*(_QWORD *)(i18 + 16) + 24LL)) != nullptr
                          && *v387 == 0x800000000LL
                          && *(_DWORD *)(i18 + 24) == 1 )
                        {
                          v388 = *(_BYTE *)(*(_QWORD *)(i18 + 32) + 6LL) & 1;
                        }
                        else
                        {
                          v388 = (v386 & 2) != 0;
                        }
                        LODWORD(v21) = v21 - v388;
                      }
                      v11 += 8;
                    }
                    while ( v385 != v11 );
                    v21 &= 1u;
                    if ( !(_DWORD)v21 )
                      goto LABEL_655;
                  }
                  v8 = (__int64)v509;
                  sub_826840(v509, v21, v11, i18);
                }
                goto LABEL_171;
              }
              v450 = v3;
              v8 = *(_QWORD *)(a1 + 8);
              v465 = *(_QWORD *)(v20 + 40);
              v485 = *(_QWORD *)(v20 + 32);
              v21 = *(_QWORD *)(v20 + 48);
              v477 = v21;
              v291 = sub_15D2CB0(v8, v21);
              v3 = v450;
              if ( !v291 )
              {
LABEL_542:
                if ( *(_WORD *)(v20 + 4) )
                  goto LABEL_171;
                v88 = *(unsigned int **)(*(_QWORD *)(v20 + 16) + 24LL);
                if ( !v88 )
                  goto LABEL_171;
                i18 = *v88;
                if ( (_DWORD)i18 )
                  goto LABEL_171;
                goto LABEL_518;
              }
              v8 = a1 + 32;
              v509[0] = a1;
              v326 = v450;
              i18 = v485;
              v327 = *(unsigned int *)(a2 + 24);
              v21 = (__int64)&v450[v327];
              v454 = &v450[v327];
              if ( v327 * 8 )
              {
                do
                {
                  v330 = *v326;
                  v331 = *(_BYTE *)(*v326 + 6);
                  if ( (v331 & 1) == 0 )
                  {
                    *(_BYTE *)(v330 + 6) = v331 | 1;
                    v332 = *(_DWORD *)(a1 + 24);
                    v333 = *(_DWORD *)(a1 + 28);
                    if ( v332 < v333 )
                    {
                      v21 = *(_QWORD *)(a1 + 16);
                    }
                    else
                    {
                      v504 = i18;
                      v486 = 2 * v333;
                      v498 = v3;
                      v334 = sub_186B270(16LL * v333);
                      v332 = *(_DWORD *)(a1 + 24);
                      v8 = *(_QWORD *)(a1 + 16);
                      v21 = v334;
                      v3 = v498;
                      i18 = v504;
                      if ( v332 )
                      {
                        if ( v332 - 1 <= 2 || v334 == v8 + 8 )
                        {
                          v427 = 0;
                          do
                          {
                            *(_QWORD *)(v21 + v427) = *(_QWORD *)(v8 + v427);
                            v427 += 8;
                          }
                          while ( v427 != 8LL * v332 );
                        }
                        else
                        {
                          v335 = 0;
                          do
                          {
                            a3 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + v335));
                            *(__m128 *)(v21 + v335) = a3;
                            v335 += 16;
                          }
                          while ( 16LL * (v332 >> 1) != v335 );
                          if ( (v332 & 1) != 0 )
                            *(_QWORD *)(v21 + 8LL * (v332 & 0xFFFFFFFE)) = *(_QWORD *)(v8 + 8LL * (v332 & 0xFFFFFFFE));
                        }
                      }
                      if ( v8 != a1 + 32 && v8 )
                      {
                        sub_186B220((void *)v8);
                        v332 = *(_DWORD *)(a1 + 24);
                        i18 = v504;
                        v3 = v498;
                      }
                      *(_QWORD *)(a1 + 16) = v21;
                      *(_DWORD *)(a1 + 28) = v486;
                    }
                    v328 = v332;
                    v11 = v332 + 1;
                    *(_QWORD *)(v21 + 8 * v328) = v330;
                    *(_DWORD *)(a1 + 24) = v11;
                  }
                  if ( !*(_WORD *)(v330 + 4) )
                  {
                    v329 = *(_QWORD **)(*(_QWORD *)(v330 + 16) + 24LL);
                    if ( v329 )
                    {
                      v8 = *(unsigned int *)v329;
                      if ( *v329 == 0x800000000LL && *(_DWORD *)(v330 + 24) == 1 )
                      {
                        v11 = *(_QWORD *)(v330 + 32);
                        v343 = *(_BYTE *)(v11 + 6);
                        if ( (v343 & 2) == 0 )
                        {
                          *(_BYTE *)(v11 + 6) = v343 | 2;
                          v344 = *(_DWORD *)(a1 + 168);
                          v345 = *(_DWORD *)(a1 + 172);
                          if ( v344 >= v345 )
                          {
                            v508 = v11;
                            v488 = 2 * v345;
                            v507 = i18;
                            v501 = v3;
                            v346 = sub_186B270(16LL * v345);
                            v344 = *(_DWORD *)(a1 + 168);
                            v3 = v501;
                            v8 = *(_QWORD *)(a1 + 160);
                            i18 = v507;
                            v11 = v508;
                            if ( v344 )
                            {
                              if ( v344 - 1 <= 2 || v346 == v8 + 8 )
                              {
                                v433 = 0;
                                do
                                {
                                  *(_QWORD *)(v346 + v433) = *(_QWORD *)(v8 + v433);
                                  v433 += 8;
                                }
                                while ( v433 != 8LL * v344 );
                              }
                              else
                              {
                                v420 = 0;
                                do
                                {
                                  a3 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + v420));
                                  *(__m128 *)(v346 + v420) = a3;
                                  v420 += 16;
                                }
                                while ( v420 != 16LL * (v344 >> 1) );
                                if ( (v344 & 1) != 0 )
                                  *(_QWORD *)(v346 + 8LL * (v344 & 0xFFFFFFFE)) = *(_QWORD *)(v8
                                                                                            + 8LL * (v344 & 0xFFFFFFFE));
                              }
                            }
                            if ( v8 != a1 + 176 && v8 )
                            {
                              sub_186B220((void *)v8);
                              v344 = *(_DWORD *)(a1 + 168);
                              v11 = v508;
                              i18 = v507;
                              v3 = v501;
                            }
                            *(_QWORD *)(a1 + 160) = v346;
                            *(_DWORD *)(a1 + 172) = v488;
                          }
                          else
                          {
                            v346 = *(_QWORD *)(a1 + 160);
                          }
                          v21 = v344;
                          *(_QWORD *)(v346 + 8LL * v344) = v11;
                          *(_DWORD *)(a1 + 168) = v344 + 1;
                        }
                      }
                    }
                  }
                  ++v326;
                }
                while ( v454 != v326 );
              }
              if ( !*(_WORD *)(i18 + 4)
                && (v336 = *(_QWORD **)(*(_QWORD *)(i18 + 16) + 24LL)) != nullptr
                && (v21 = *(unsigned int *)v336, *v336 == 0x800000000LL)
                && *(_DWORD *)(i18 + 24) == 1 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(i18 + 32) + 6LL) & 1) == 0 )
                {
                  v337 = *(_BYTE *)(i18 + 6);
                  goto LABEL_820;
                }
LABEL_646:
                if ( (*(_BYTE *)(v465 + 6) & 1) != 0 )
                  goto LABEL_655;
                if ( (*(_BYTE *)(i18 + 6) & 1) != 0 )
                  goto LABEL_648;
              }
              else
              {
                v337 = *(_BYTE *)(i18 + 6);
                if ( (v337 & 2) != 0 )
                  goto LABEL_646;
LABEL_820:
                if ( (v337 & 1) != 0 || (*(_BYTE *)(v465 + 6) & 1) != 0 )
                {
LABEL_648:
                  if ( (*(_BYTE *)(v477 + 6) & 1) != 0 )
                    goto LABEL_655;
                }
              }
              v338 = *(__int64 **)(a1 + 16);
              for ( i22 = &v338[*(unsigned int *)(a1 + 24)]; i22 != v338; *(_BYTE *)(v340 + 6) &= ~1u )
                v340 = *v338++;
              v341 = *(__int64 **)(a1 + 160);
              v11 = *(unsigned int *)(a1 + 168);
              *(_DWORD *)(a1 + 24) = 0;
              for ( i23 = &v341[v11]; i23 != v341; *(_BYTE *)(v11 + 6) &= ~2u )
                v11 = *v341++;
              *(_DWORD *)(a1 + 168) = 0;
              goto LABEL_542;
            }
            v25 = *(_QWORD *)(v9 + 48);
            v470 = v3;
            v459 = *(_QWORD *)(v9 + 32);
            v26 = v25;
            v439 = *(_QWORD *)(v9 + 40);
            v27 = sub_15D2CB0(*(_QWORD *)(a1 + 8), v25);
            v3 = v470;
            if ( !v27 )
            {
LABEL_61:
              if ( *(_WORD *)(v9 + 4) )
                return 0;
              v13 = *(unsigned int **)(*(_QWORD *)(v9 + 16) + 24LL);
              if ( !v13 )
                return 0;
              v8 = *v13;
              if ( (_DWORD)v8 )
                return 0;
              goto LABEL_43;
            }
            v28 = v470;
            v29 = *(unsigned int *)(a2 + 24);
            v30 = &v470[v29];
            if ( v29 * 8 )
            {
              do
              {
                v33 = *v28;
                v34 = *(_BYTE *)(*v28 + 6);
                if ( (v34 & 1) == 0 )
                {
                  *(_BYTE *)(v33 + 6) = v34 | 1;
                  v35 = *(_DWORD *)(a1 + 24);
                  v36 = *(_DWORD *)(a1 + 28);
                  if ( v35 < v36 )
                  {
                    v31 = *(_QWORD *)(a1 + 16);
                  }
                  else
                  {
                    v482 = v3;
                    v471 = 2 * v36;
                    v37 = sub_186B270(16LL * v36);
                    v35 = *(_DWORD *)(a1 + 24);
                    v38 = *(_QWORD **)(a1 + 16);
                    v31 = v37;
                    v3 = v482;
                    if ( v35 )
                    {
                      if ( v35 - 1 <= 2 || (_QWORD *)v37 == v38 + 1 )
                      {
                        for ( i24 = 0; i24 != v35; ++i24 )
                        {
                          v26 = v38[i24];
                          *(_QWORD *)(v31 + i24 * 8) = v26;
                        }
                      }
                      else
                      {
                        v39 = 0;
                        do
                        {
                          a3 = (__m128)_mm_loadu_si128((const __m128i *)&v38[v39]);
                          *(__m128 *)(v31 + v39 * 8) = a3;
                          v39 += 2;
                        }
                        while ( v39 != 2LL * (v35 >> 1) );
                        if ( (v35 & 1) != 0 )
                          *(_QWORD *)(v31 + 8LL * (v35 & 0xFFFFFFFE)) = v38[v35 & 0xFFFFFFFE];
                      }
                    }
                    if ( v38 != (_QWORD *)(a1 + 32) && v38 )
                    {
                      v494 = v31;
                      sub_186B220(v38);
                      v35 = *(_DWORD *)(a1 + 24);
                      v31 = v494;
                      v3 = v482;
                    }
                    *(_QWORD *)(a1 + 16) = v31;
                    *(_DWORD *)(a1 + 28) = v471;
                  }
                  *(_QWORD *)(v31 + 8LL * v35) = v33;
                  *(_DWORD *)(a1 + 24) = v35 + 1;
                }
                if ( !*(_WORD *)(v33 + 4) )
                {
                  v32 = *(_DWORD **)(*(_QWORD *)(v33 + 16) + 24LL);
                  if ( v32 )
                  {
                    if ( !*v32 && v32[1] == 8 && *(_DWORD *)(v33 + 24) == 1 )
                    {
                      v53 = *(_QWORD *)(v33 + 32);
                      v54 = *(_BYTE *)(v53 + 6);
                      if ( (v54 & 2) == 0 )
                      {
                        *(_BYTE *)(v53 + 6) = v54 | 2;
                        v55 = *(_DWORD *)(a1 + 168);
                        v56 = *(_DWORD *)(a1 + 172);
                        if ( v55 >= v56 )
                        {
                          v484 = v3;
                          v475 = 2 * v56;
                          v254 = sub_186B270(16LL * v56);
                          v55 = *(_DWORD *)(a1 + 168);
                          v255 = *(_QWORD **)(a1 + 160);
                          v57 = v254;
                          v3 = v484;
                          if ( v55 )
                          {
                            if ( v55 - 1 <= 2 || (_QWORD *)v254 == v255 + 1 )
                            {
                              for ( i25 = 0; i25 != v55; ++i25 )
                              {
                                v26 = v255[i25];
                                *(_QWORD *)(v57 + i25 * 8) = v26;
                              }
                            }
                            else
                            {
                              v256 = 0;
                              do
                              {
                                a3 = (__m128)_mm_loadu_si128((const __m128i *)&v255[v256]);
                                *(__m128 *)(v57 + v256 * 8) = a3;
                                v256 += 2;
                              }
                              while ( v256 != 2LL * (v55 >> 1) );
                              if ( (v55 & 1) != 0 )
                                *(_QWORD *)(v57 + 8LL * (v55 & 0xFFFFFFFE)) = v255[v55 & 0xFFFFFFFE];
                            }
                          }
                          if ( v255 != (_QWORD *)(a1 + 176) && v255 )
                          {
                            v497 = v57;
                            sub_186B220(v255);
                            v55 = *(_DWORD *)(a1 + 168);
                            v57 = v497;
                            v3 = v484;
                          }
                          *(_QWORD *)(a1 + 160) = v57;
                          *(_DWORD *)(a1 + 172) = v475;
                        }
                        else
                        {
                          v57 = *(_QWORD *)(a1 + 160);
                        }
                        *(_QWORD *)(v57 + 8LL * v55) = v53;
                        *(_DWORD *)(a1 + 168) = v55 + 1;
                      }
                    }
                  }
                }
                ++v28;
              }
              while ( v30 != v28 );
            }
            v40 = *(_BYTE *)(v459 + 6);
            if ( (v40 & 1) != 0 )
            {
              if ( !*(_WORD *)(v25 + 4)
                && (v58 = *(_DWORD **)(*(_QWORD *)(v25 + 16) + 24LL)) != nullptr
                && !*v58
                && v58[1] == 8
                && *(_DWORD *)(v25 + 24) == 1 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v25 + 32) + 6LL) & 1) == 0 )
                  goto LABEL_87;
              }
              else if ( (*(_BYTE *)(v25 + 6) & 2) == 0 )
              {
                goto LABEL_87;
              }
              goto LABEL_119;
            }
LABEL_87:
            v41 = *(_WORD *)(v439 + 4);
            v42 = v459;
            if ( !*(_WORD *)(v459 + 4)
              && (v43 = *(_DWORD **)(*(_QWORD *)(v459 + 16) + 24LL)) != nullptr
              && !*v43
              && v43[1] == 8
              && *(_DWORD *)(v459 + 24) == 1 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v459 + 32) + 6LL) & 1) == 0 )
              {
LABEL_346:
                if ( !v41 )
                {
                  v44 = *(_QWORD *)(v439 + 16);
                  goto LABEL_95;
                }
LABEL_97:
                if ( (*(_BYTE *)(v439 + 6) & 2) == 0 )
                  goto LABEL_102;
LABEL_98:
                if ( !*(_WORD *)(v25 + 4) )
                {
                  v46 = *(_DWORD **)(*(_QWORD *)(v25 + 16) + 24LL);
                  if ( v46 )
                  {
                    if ( !*v46 && v46[1] == 8 && *(_DWORD *)(v25 + 24) == 1 )
                    {
                      if ( (*(_BYTE *)(*(_QWORD *)(v25 + 32) + 6LL) & 1) != 0 )
                        goto LABEL_119;
LABEL_102:
                      v440 = v3;
                      sub_180B130(v42);
                      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
                      {
                        sub_186A4C0(*(double *)a3.m128_u64);
                        v47 = sub_180B150(v42, v26);
                        sub_1606360(v509, v9, *(_QWORD *)(a1 + 8), 0, 0, 0);
                        sub_160E8B0(v47, v509);
                        std::__ostream_insert<char,std::char_traits<char>>();
                        sub_18572D0(v510);
                        sub_186A500(v510, "\n");
                      }
                      else
                      {
                        v265 = sub_180B150(v42, v26);
                        sub_1606360(v509, v9, *(_QWORD *)(a1 + 8), 0, 0, 0);
                        sub_160E8B0(v265, v509);
                        std::__ostream_insert<char,std::char_traits<char>>();
                        sub_18572D0(v510);
                      }
                      v48 = *(__int64 **)(a1 + 16);
                      v3 = v440;
                      for ( i26 = &v48[*(unsigned int *)(a1 + 24)]; i26 != v48; *(_BYTE *)(v50 + 6) &= ~1u )
                        v50 = *v48++;
                      v51 = *(__int64 **)(a1 + 160);
                      v11 = *(unsigned int *)(a1 + 168);
                      *(_DWORD *)(a1 + 24) = 0;
                      for ( i27 = &v51[v11]; v51 != i27; *(_BYTE *)(v11 + 6) &= ~2u )
                        v11 = *v51++;
                      *(_DWORD *)(a1 + 168) = 0;
                      goto LABEL_61;
                    }
                  }
                }
                if ( (*(_BYTE *)(v25 + 6) & 2) == 0 )
                  goto LABEL_102;
                goto LABEL_119;
              }
            }
            else if ( (v40 & 2) == 0 )
            {
              goto LABEL_346;
            }
            if ( !v41 )
            {
              v44 = *(_QWORD *)(v439 + 16);
              v45 = *(_DWORD **)(v44 + 24);
              if ( v45 && !*v45 && v45[1] == 8 && (v42 = v439, *(_DWORD *)(v439 + 24) == 1) )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v439 + 32) + 6LL) & 1) != 0 )
                  goto LABEL_119;
              }
              else
              {
                if ( (*(_BYTE *)(v439 + 6) & 2) != 0 )
                  goto LABEL_119;
LABEL_95:
                v45 = *(_DWORD **)(v44 + 24);
                if ( !v45 || *v45 )
                  goto LABEL_97;
              }
              if ( v45[1] != 8 || *(_DWORD *)(v439 + 24) != 1 )
                goto LABEL_97;
              if ( (*(_BYTE *)(*(_QWORD *)(v439 + 32) + 6LL) & 1) != 0 )
                goto LABEL_98;
              goto LABEL_102;
            }
            if ( (*(_BYTE *)(v439 + 6) & 2) == 0 )
              goto LABEL_102;
LABEL_119:
            v59 = *(__int64 **)(a1 + 16);
            for ( i28 = &v59[*(unsigned int *)(a1 + 24)]; v59 != i28; *(_BYTE *)(v61 + 6) &= ~1u )
              v61 = *v59++;
            v62 = *(__int64 **)(a1 + 160);
            v63 = *(unsigned int *)(a1 + 168);
            *(_DWORD *)(a1 + 24) = 0;
            for ( i29 = &v62[v63]; v62 != i29; *(_BYTE *)(v65 + 6) &= ~2u )
              v65 = *v62++;
            goto LABEL_123;
          }
        }
      }
      if ( (v141 & 2) == 0 )
        goto LABEL_269;
LABEL_265:
      if ( !*(_WORD *)(v462 + 4)
        && (v143 = *(_QWORD **)(*(_QWORD *)(v462 + 16) + 24LL)) != nullptr
        && *v143 == 0x800000000LL
        && *(_DWORD *)(v462 + 24) == 1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v462 + 32) + 6LL) & 1) == 0 )
          goto LABEL_269;
      }
      else if ( (*(_BYTE *)(v462 + 6) & 2) == 0 )
      {
        goto LABEL_269;
      }
    }
    v192 = *(__int64 **)(a1 + 16);
    for ( i30 = &v192[*(unsigned int *)(a1 + 24)]; v192 != i30; *(_BYTE *)(v194 + 6) &= ~1u )
      v194 = *v192++;
    v195 = *(__int64 **)(a1 + 160);
    v196 = *(unsigned int *)(a1 + 168);
    *(_DWORD *)(a1 + 24) = 0;
    for ( i31 = &v195[v196]; v195 != i31; *(_BYTE *)(v198 + 6) &= ~2u )
      v198 = *v195++;
LABEL_123:
    *(_DWORD *)(a1 + 168) = 0;
    return 1;
  }
  v509[0] = a1;
  do
  {
    v80 = *v435;
    v81 = *(_BYTE *)(*v435 + 6);
    if ( (v81 & 1) == 0 )
    {
      *(_BYTE *)(v80 + 6) = v81 | 1;
      v82 = *(_DWORD *)(a1 + 24);
      v83 = *(_DWORD *)(a1 + 28);
      if ( v82 < v83 )
      {
        v78 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        v84 = 2 * v83;
        v85 = sub_186B270(8 * v84);
        v82 = *(_DWORD *)(a1 + 24);
        v86 = *(_QWORD **)(a1 + 16);
        v78 = v85;
        if ( v82 )
        {
          if ( v82 - 1 <= 2 || (_QWORD *)v85 == v86 + 1 )
          {
            for ( i32 = 0; i32 != v82; ++i32 )
              *(_QWORD *)(v78 + i32 * 8) = v86[i32];
          }
          else
          {
            v87 = 0;
            do
            {
              *(__m128i *)(v78 + v87 * 8) = _mm_loadu_si128((const __m128i *)&v86[v87]);
              v87 += 2;
            }
            while ( 2LL * (v82 >> 1) != v87 );
            if ( (v82 & 1) != 0 )
              *(_QWORD *)(v78 + 8LL * (v82 & 0xFFFFFFFE)) = v86[v82 & 0xFFFFFFFE];
          }
        }
        if ( v86 != (_QWORD *)(a1 + 32) && v86 )
        {
          v437 = v78;
          sub_186B220(v86);
          v82 = *(_DWORD *)(a1 + 24);
          v78 = v437;
        }
        *(_QWORD *)(a1 + 16) = v78;
        *(_DWORD *)(a1 + 28) = v84;
      }
      *(_QWORD *)(v78 + 8LL * v82) = v80;
      *(_DWORD *)(a1 + 24) = v82 + 1;
    }
    if ( !*(_WORD *)(v80 + 4) )
    {
      v79 = *(_DWORD **)(*(_QWORD *)(v80 + 16) + 24LL);
      if ( v79 )
      {
        if ( !*v79 && v79[1] == 8 && *(_DWORD *)(v80 + 24) == 1 )
        {
          v122 = *(_QWORD *)(v80 + 32);
          v123 = *(_BYTE *)(v122 + 6);
          if ( (v123 & 2) == 0 )
          {
            *(_BYTE *)(v122 + 6) = v123 | 2;
            v124 = *(_DWORD *)(a1 + 168);
            v125 = *(_DWORD *)(a1 + 172);
            if ( v124 >= v125 )
            {
              v276 = 2 * v125;
              v277 = sub_186B270(8 * v276);
              v124 = *(_DWORD *)(a1 + 168);
              v278 = *(_QWORD **)(a1 + 160);
              v126 = v277;
              if ( v124 )
              {
                if ( v124 - 1 <= 2 || (_QWORD *)v277 == v278 + 1 )
                {
                  for ( i33 = 0; i33 != v124; ++i33 )
                    *(_QWORD *)(v126 + i33 * 8) = v278[i33];
                }
                else
                {
                  v279 = 0;
                  do
                  {
                    *(__m128i *)(v126 + v279 * 8) = _mm_loadu_si128((const __m128i *)&v278[v279]);
                    v279 += 2;
                  }
                  while ( 2LL * (v124 >> 1) != v279 );
                  if ( (v124 & 1) != 0 )
                    *(_QWORD *)(v126 + 8LL * (v124 & 0xFFFFFFFE)) = v278[v124 & 0xFFFFFFFE];
                }
              }
              if ( v278 != (_QWORD *)(a1 + 176) && v278 )
              {
                sub_186B220(v278);
                v124 = *(_DWORD *)(a1 + 168);
              }
              *(_QWORD *)(a1 + 160) = v126;
              *(_DWORD *)(a1 + 172) = v276;
            }
            else
            {
              v126 = *(_QWORD *)(a1 + 160);
            }
            *(_QWORD *)(v126 + 8LL * v124) = v122;
            *(_DWORD *)(a1 + 168) = v124 + 1;
          }
        }
      }
    }
    ++v435;
  }
  while ( (__int64 *)v5 != v435 );
  v105 = v9 + 32;
  v106 = 8LL * *(unsigned int *)(v9 + 24);
  v107 = v9 + 32 + v106;
  if ( !v106 )
  {
LABEL_467:
    result = 0;
    goto LABEL_216;
  }
  while ( 2 )
  {
    v108 = *(_QWORD *)v105;
    if ( !*(_WORD *)(*(_QWORD *)v105 + 4LL) )
    {
      v109 = *(_DWORD **)(*(_QWORD *)(v108 + 16) + 24LL);
      if ( v109 )
      {
        if ( !*v109 && v109[1] == 8 && *(_DWORD *)(v108 + 24) == 1 )
        {
          result = *(_BYTE *)(*(_QWORD *)(v108 + 32) + 6LL) & 1;
          if ( (_DWORD)result )
            goto LABEL_216;
          goto LABEL_209;
        }
      }
    }
    if ( (*(_BYTE *)(v108 + 6) & 2) == 0 )
    {
LABEL_209:
      v105 += 8;
      if ( v107 == v105 )
        goto LABEL_467;
      continue;
    }
    break;
  }
  result = 1;
LABEL_216:
  v110 = *(__int64 **)(a1 + 16);
  for ( i34 = &v110[*(unsigned int *)(a1 + 24)]; i34 != v110; *(_BYTE *)(v112 + 6) &= ~1u )
    v112 = *v110++;
  v113 = *(__int64 **)(a1 + 160);
  v114 = *(unsigned int *)(a1 + 168);
  *(_DWORD *)(a1 + 24) = 0;
  for ( i35 = &v113[v114]; i35 != v113; *(_BYTE *)(v116 + 6) &= ~2u )
    v116 = *v113++;
LABEL_220:
  *(_DWORD *)(a1 + 168) = 0;
  return result;
}

