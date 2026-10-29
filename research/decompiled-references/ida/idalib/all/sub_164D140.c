void __fastcall sub_164D140(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __m128i *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // r15
  unsigned int v24; // ebp
  unsigned __int64 v25; // rsi
  unsigned int v26; // ecx
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v30; // r13
  unsigned __int8 *v31; // rbp
  _BYTE *v32; // rdx
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int8 *v39; // rbp
  unsigned __int8 *v40; // rdx
  __int64 v41; // rax
  unsigned __int8 *v42; // rbp
  unsigned __int8 *v43; // rdx
  __int64 v44; // rax
  unsigned __int8 *v45; // rbp
  unsigned __int8 *v46; // rdx
  __int64 v47; // rax
  unsigned __int8 *v48; // rbp
  unsigned __int8 *v49; // rdx
  __int64 v50; // rax
  _BOOL8 v51; // rbp
  _BOOL8 v52; // r13
  unsigned __int8 *v53; // rbp
  unsigned __int8 *v54; // rdx
  __int64 v55; // rax
  unsigned __int8 *v56; // rbp
  unsigned __int8 *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 *v60; // r8
  __int64 v61; // r9
  __int64 v62; // r14
  __int64 v63; // r15
  __int64 *v64; // rcx
  unsigned int v65; // ebp
  unsigned __int64 v66; // rsi
  unsigned int v67; // edx
  __int64 v68; // rax
  __int64 v69; // r13
  __int64 v70; // r13
  unsigned __int8 *v71; // rbp
  _BYTE *v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 *v75; // r8
  __int64 v76; // r9
  __int64 v77; // r14
  __int64 v78; // r15
  __int64 *v79; // rcx
  unsigned int v80; // ebp
  unsigned __int64 v81; // rsi
  unsigned int v82; // edx
  __int64 v83; // rax
  __int64 v84; // r13
  __int64 v85; // r13
  unsigned __int8 *v86; // rbp
  _BYTE *v87; // rdx
  __int64 v88; // rax
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  _QWORD *v91; // rax
  _QWORD *k; // rdx
  __int64 *v93; // r13
  __int64 v94; // rcx
  int v95; // eax
  int v96; // esi
  unsigned int v97; // edx
  _QWORD *v98; // rax
  __int64 v99; // r8
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  _QWORD *v105; // rdi
  _QWORD *v106; // r14
  _QWORD *v107; // rbp
  unsigned __int64 v108; // rbx
  unsigned __int64 v109; // rax
  _QWORD *v110; // r15
  _QWORD *v111; // r12
  _QWORD *v112; // rdi
  void *v113; // rdi
  void **v114; // r15
  void **v115; // r12
  int v116; // edx
  int v117; // eax
  int v118; // r10d
  unsigned int v119; // esi
  __int64 v120; // rdx
  unsigned __int64 v121; // rax
  __int64 v122; // rax
  _QWORD *v123; // rax
  _QWORD *jj; // rdx
  __int64 *v125; // r13
  __int64 v126; // rcx
  int v127; // eax
  int v128; // esi
  unsigned int v129; // edx
  _QWORD *v130; // rax
  __int64 v131; // r8
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rdx
  _QWORD *v137; // rdi
  _QWORD *v138; // r14
  _QWORD *v139; // rbp
  unsigned __int64 v140; // rbx
  unsigned __int64 v141; // rax
  _QWORD *v142; // r15
  _QWORD *v143; // r12
  _QWORD *v144; // rdi
  void *v145; // rdi
  void **v146; // r15
  void **v147; // r12
  int v148; // edx
  int v149; // eax
  int v150; // r10d
  unsigned int v151; // esi
  __int64 v152; // rdx
  unsigned __int64 v153; // rax
  __int64 v154; // rax
  _QWORD *v155; // rax
  _QWORD *i1; // rdx
  __int64 *v157; // r13
  __int64 v158; // rcx
  int v159; // eax
  int v160; // esi
  unsigned int v161; // edx
  _QWORD *v162; // rax
  __int64 v163; // r8
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rdx
  _QWORD *v169; // rdi
  _QWORD *v170; // r14
  _QWORD *v171; // rbp
  unsigned __int64 v172; // rbx
  unsigned __int64 v173; // rax
  _QWORD *v174; // r15
  _QWORD *v175; // r12
  _QWORD *v176; // rdi
  void *v177; // rdi
  void **v178; // r15
  void **v179; // r12
  int v180; // eax
  int v181; // r10d
  unsigned int v182; // esi
  __int64 v183; // rdx
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rbp
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rax
  _QWORD *v190; // rax
  __int64 v191; // r12
  unsigned __int8 *v192; // rbp
  _BYTE *v193; // rdx
  __int64 v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // r12
  __int64 v200; // rax
  _QWORD *v201; // rax
  __int64 v202; // r13
  unsigned __int8 *v203; // r12
  _BYTE *v204; // rdx
  __int64 v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rbp
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rax
  _QWORD *v212; // rax
  __int64 v213; // r13
  unsigned __int8 *v214; // rbp
  _BYTE *v215; // rdx
  __int64 v216; // rax
  __int64 v217; // rdx
  int v218; // eax
  __int64 v219; // rdx
  int v220; // eax
  __int64 v221; // rdx
  int v222; // eax
  __int64 v223; // rdx
  __int64 v224; // rdx
  __int64 v225; // rdx
  __int64 v226; // rdx
  int v227; // eax
  __int64 v228; // rdx
  int v229; // eax
  __int64 v230; // rdx
  int v231; // eax
  __int64 v232; // rdx
  int v233; // eax
  __int64 v234; // rdx
  int v235; // eax
  __int64 v236; // rdx
  int v237; // eax
  __int64 v238; // rdx
  int v239; // eax
  __int64 v240; // rdx
  int v241; // eax
  __int64 v242; // rdx
  int v243; // eax
  __int64 v244; // rax
  __int64 v245; // r12
  __int64 v246; // r13
  __int64 v247; // r12
  void *v248; // rdi
  __int64 v249; // rax
  __int64 v250; // r12
  __int64 v251; // r13
  __int64 v252; // r12
  void *v253; // rdi
  __int64 v254; // rax
  __int64 v255; // r12
  __int64 v256; // r13
  __int64 v257; // r12
  void *v258; // rdi
  __int64 v259; // rax
  __int64 v260; // r12
  __int64 v261; // r13
  __int64 v262; // r12
  void *v263; // rdi
  __int64 v264; // rax
  __int64 v265; // r12
  __int64 v266; // r14
  __int64 v267; // r12
  void *v268; // rdi
  __int64 v269; // rax
  __int64 v270; // r13
  __int64 v271; // r14
  __int64 v272; // r13
  void *v273; // rdi
  __int64 v274; // rax
  __int64 v275; // r12
  __int64 v276; // r14
  __int64 v277; // r12
  void *v278; // rdi
  __int64 v279; // rax
  __int64 v280; // r12
  __int64 v281; // r14
  __int64 v282; // r12
  void *v283; // rdi
  __int64 v284; // rax
  __int64 v285; // r12
  __int64 v286; // r14
  __int64 v287; // r12
  void *v288; // rdi
  __int64 v289; // rax
  __int64 v290; // r14
  __int64 v291; // r15
  __int64 v292; // r14
  void *v293; // rdi
  __int64 v294; // rax
  __int64 v295; // r13
  __int64 v296; // r14
  __int64 v297; // r13
  void *v298; // rdi
  __int64 v299; // rax
  __int64 v300; // r14
  __int64 v301; // r15
  __int64 v302; // r14
  void *v303; // rdi
  int v304; // edi
  int v305; // edi
  int v306; // edi
  unsigned __int64 v307; // rax
  unsigned __int64 v308; // rax
  __int64 v309; // rax
  _QWORD *v310; // rax
  _QWORD *mm; // rdx
  __int64 *v312; // r13
  __int64 v313; // rcx
  int v314; // eax
  int v315; // esi
  unsigned int v316; // edx
  _QWORD *v317; // rax
  __int64 v318; // r8
  __int64 v319; // rdx
  __int64 v320; // rcx
  __int64 v321; // rdx
  __int64 v322; // rcx
  __int64 v323; // rdx
  _QWORD *v324; // rdi
  _QWORD *v325; // r14
  _QWORD *v326; // rbp
  unsigned __int64 v327; // r12
  unsigned __int64 v328; // rax
  _QWORD *v329; // r15
  _QWORD *v330; // rbx
  _QWORD *v331; // rdi
  void *v332; // rdi
  void **v333; // rbx
  void **v334; // r15
  int v335; // eax
  int v336; // r8d
  unsigned int v337; // r10d
  int v338; // edi
  __int64 *v339; // rsi
  __int64 v340; // rdx
  unsigned __int64 v341; // rax
  unsigned __int64 v342; // rax
  __int64 v343; // rax
  _QWORD *v344; // rax
  _QWORD *i; // rdx
  __int64 *v346; // r13
  __int64 v347; // rcx
  int v348; // eax
  int v349; // esi
  unsigned int v350; // edx
  _QWORD *v351; // rax
  __int64 v352; // r8
  __int64 v353; // rdx
  __int64 v354; // rcx
  __int64 v355; // rdx
  __int64 v356; // rcx
  __int64 v357; // rdx
  _QWORD *v358; // rdi
  _QWORD *v359; // r14
  _QWORD *v360; // rbp
  unsigned __int64 v361; // r12
  unsigned __int64 v362; // rax
  _QWORD *v363; // r15
  _QWORD *v364; // rbx
  _QWORD *v365; // rdi
  void *v366; // rdi
  void **v367; // rbx
  void **v368; // r15
  int v369; // edx
  int v370; // r8d
  unsigned int v371; // r10d
  __int64 v372; // rdx
  unsigned __int64 v373; // rax
  unsigned __int64 v374; // rax
  __int64 v375; // rax
  _QWORD *v376; // rax
  _QWORD *n; // rdx
  __int64 *v378; // r13
  __int64 v379; // rcx
  int v380; // eax
  int v381; // esi
  unsigned int v382; // edx
  _QWORD *v383; // rax
  __int64 v384; // r8
  __int64 v385; // rdx
  __int64 v386; // rcx
  __int64 v387; // rdx
  __int64 v388; // rcx
  __int64 v389; // rdx
  _QWORD *v390; // rdi
  _QWORD *v391; // r14
  _QWORD *v392; // rbp
  unsigned __int64 v393; // r12
  unsigned __int64 v394; // rax
  _QWORD *v395; // r15
  _QWORD *v396; // rbx
  _QWORD *v397; // rdi
  void *v398; // rdi
  void **v399; // rbx
  void **v400; // r15
  int v401; // edx
  int v402; // r8d
  unsigned int v403; // r10d
  int v404; // edi
  __int64 *v405; // rsi
  __int64 v406; // rdx
  __int64 v407; // rdx
  _QWORD *m; // rdx
  __int64 v409; // rdx
  _QWORD *i2; // rdx
  __int64 v411; // rdx
  _QWORD *kk; // rdx
  __int64 v413; // rdx
  _QWORD *j; // rdx
  __int64 v415; // rdx
  _QWORD *nn; // rdx
  __int64 v417; // rdx
  _QWORD *ii; // rdx
  int v419; // r10d
  _QWORD *v420; // r9
  int v421; // r10d
  _QWORD *v422; // r9
  int v423; // r10d
  _QWORD *v424; // r9
  int v425; // r10d
  _QWORD *v426; // r9
  int v427; // r10d
  _QWORD *v428; // r9
  int v429; // r10d
  _QWORD *v430; // r9
  int v431; // r8d
  __int64 *v432; // rdi
  int v433; // r8d
  __int64 *v434; // rdi
  int v435; // r8d
  __int64 *v436; // rdi
  int v437; // edi
  __int64 *v438; // rsi
  __int64 *v439; // [rsp+8h] [rbp-110h]
  __int64 *v440; // [rsp+8h] [rbp-110h]
  __int64 *v441; // [rsp+8h] [rbp-110h]
  unsigned int v442; // [rsp+10h] [rbp-108h]
  unsigned int v443; // [rsp+10h] [rbp-108h]
  unsigned int v444; // [rsp+10h] [rbp-108h]
  __int64 *v445; // [rsp+10h] [rbp-108h]
  __int64 *v446; // [rsp+10h] [rbp-108h]
  __int64 *v447; // [rsp+10h] [rbp-108h]
  __int64 v448; // [rsp+18h] [rbp-100h]
  __int64 v449; // [rsp+18h] [rbp-100h]
  __int64 v450; // [rsp+18h] [rbp-100h]
  __int64 v451; // [rsp+20h] [rbp-F8h]
  __int64 v452; // [rsp+20h] [rbp-F8h]
  __int64 v453; // [rsp+20h] [rbp-F8h]
  __int64 v454; // [rsp+20h] [rbp-F8h]
  __int64 v455; // [rsp+20h] [rbp-F8h]
  __int64 v456; // [rsp+20h] [rbp-F8h]
  __int64 v457; // [rsp+28h] [rbp-F0h]
  __int64 v458; // [rsp+28h] [rbp-F0h]
  __int64 v459; // [rsp+28h] [rbp-F0h]
  __int64 v460; // [rsp+28h] [rbp-F0h]
  __int64 v461; // [rsp+28h] [rbp-F0h]
  __int64 v462; // [rsp+28h] [rbp-F0h]
  __int64 v463; // [rsp+30h] [rbp-E8h]
  __int64 v464; // [rsp+30h] [rbp-E8h]
  __int64 v465; // [rsp+30h] [rbp-E8h]
  int v466; // [rsp+40h] [rbp-D8h] BYREF
  int v467; // [rsp+44h] [rbp-D4h] BYREF
  __int64 v468; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v469[16]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v470; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v471; // [rsp+70h] [rbp-A8h]
  __int64 v472; // [rsp+78h] [rbp-A0h]
  char v473; // [rsp+C8h] [rbp-50h]
  unsigned int v474; // [rsp+D0h] [rbp-48h]
  char v475; // [rsp+D4h] [rbp-44h]

  if ( !sub_B8DC30(a2, 1) && (*(_BYTE *)(a2 + 28) & 0x7F) != 0x12 )
  {
    sub_168B9F0(v469, a1, *(unsigned int *)(a2 + 24), 6598, 0);
    if ( v473 )
    {
      v48 = v471;
      if ( !v471 )
      {
        v228 = v472;
        v229 = *(_DWORD *)(v472 + 14976);
        if ( v229 )
        {
          v269 = (unsigned int)(v229 - 1);
          *(_DWORD *)(v472 + 14976) = v269;
          v48 = *(unsigned __int8 **)(v228 + 8 * v269 + 14848);
          v270 = *((unsigned int *)v48 + 134);
          *v48 = 0;
          v271 = *((_QWORD *)v48 + 66);
          *((_DWORD *)v48 + 106) = 0;
          v272 = v271 + (v270 << 6);
          while ( v271 != v272 )
          {
            while ( 1 )
            {
              v272 -= 64;
              v273 = *(void **)(v272 + 24);
              if ( v273 == (void *)(v272 + 40) )
                break;
              operator delete(v273);
              if ( v271 == v272 )
                goto LABEL_284;
            }
          }
LABEL_284:
          *((_DWORD *)v48 + 134) = 0;
        }
        else
        {
          v48 = (unsigned __int8 *)operator new(0x3A0u);
          *v48 = 0;
          *((_QWORD *)v48 + 12) = v48 + 112;
          *((_QWORD *)v48 + 16) = v48 + 144;
          *((_QWORD *)v48 + 20) = v48 + 176;
          *((_QWORD *)v48 + 24) = v48 + 208;
          *((_QWORD *)v48 + 28) = v48 + 240;
          *((_QWORD *)v48 + 32) = v48 + 272;
          *((_QWORD *)v48 + 36) = v48 + 304;
          *((_QWORD *)v48 + 40) = v48 + 336;
          *((_QWORD *)v48 + 44) = v48 + 368;
          *((_QWORD *)v48 + 48) = v48 + 400;
          *((_QWORD *)v48 + 52) = v48 + 432;
          *((_QWORD *)v48 + 13) = 0;
          v48[112] = 0;
          *((_QWORD *)v48 + 17) = 0;
          v48[144] = 0;
          *((_QWORD *)v48 + 21) = 0;
          v48[176] = 0;
          *((_QWORD *)v48 + 25) = 0;
          v48[208] = 0;
          *((_QWORD *)v48 + 29) = 0;
          v48[240] = 0;
          *((_QWORD *)v48 + 33) = 0;
          v48[272] = 0;
          *((_QWORD *)v48 + 37) = 0;
          v48[304] = 0;
          *((_QWORD *)v48 + 41) = 0;
          v48[336] = 0;
          *((_QWORD *)v48 + 45) = 0;
          v48[368] = 0;
          *((_QWORD *)v48 + 49) = 0;
          v48[400] = 0;
          *((_QWORD *)v48 + 53) = 0x800000000LL;
          *((_QWORD *)v48 + 66) = v48 + 544;
          *((_QWORD *)v48 + 67) = 0x600000000LL;
        }
        v471 = v48;
      }
      v48[*v48 + 1] = 16;
      v49 = v471;
      v50 = *v471;
      *v471 = v50 + 1;
      *(_QWORD *)&v49[8 * v50 + 16] = a3;
    }
    else
    {
      if ( !v475 )
        goto LABEL_25;
      v208 = sub_168B9E0(v469);
      v211 = v470;
      if ( v470 )
        v211 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v470 + 32LL))(v470);
      v468 = v211;
      v212 = sub_1587BC0(v208, &v468, v206, v207, v209, v210);
      v213 = *v212 + 32LL * v474;
      v214 = *(unsigned __int8 **)(v213 + 8);
      if ( !v214 )
      {
        v240 = *(_QWORD *)(v213 + 16);
        v241 = *(_DWORD *)(v240 + 14976);
        if ( v241 )
        {
          v299 = (unsigned int)(v241 - 1);
          *(_DWORD *)(v240 + 14976) = v299;
          v214 = *(unsigned __int8 **)(v240 + 8 * v299 + 14848);
          v300 = *((unsigned int *)v214 + 134);
          *v214 = 0;
          v301 = *((_QWORD *)v214 + 66);
          *((_DWORD *)v214 + 106) = 0;
          v302 = v301 + (v300 << 6);
          while ( v301 != v302 )
          {
            while ( 1 )
            {
              v302 -= 64;
              v303 = *(void **)(v302 + 24);
              if ( v303 == (void *)(v302 + 40) )
                break;
              operator delete(v303);
              if ( v301 == v302 )
                goto LABEL_314;
            }
          }
LABEL_314:
          *((_DWORD *)v214 + 134) = 0;
        }
        else
        {
          v214 = (unsigned __int8 *)operator new(0x3A0u);
          *v214 = 0;
          *((_QWORD *)v214 + 12) = v214 + 112;
          *((_QWORD *)v214 + 16) = v214 + 144;
          *((_QWORD *)v214 + 20) = v214 + 176;
          *((_QWORD *)v214 + 24) = v214 + 208;
          *((_QWORD *)v214 + 28) = v214 + 240;
          *((_QWORD *)v214 + 32) = v214 + 272;
          *((_QWORD *)v214 + 36) = v214 + 304;
          *((_QWORD *)v214 + 40) = v214 + 336;
          *((_QWORD *)v214 + 44) = v214 + 368;
          *((_QWORD *)v214 + 48) = v214 + 400;
          *((_QWORD *)v214 + 52) = v214 + 432;
          *((_QWORD *)v214 + 13) = 0;
          v214[112] = 0;
          *((_QWORD *)v214 + 17) = 0;
          v214[144] = 0;
          *((_QWORD *)v214 + 21) = 0;
          v214[176] = 0;
          *((_QWORD *)v214 + 25) = 0;
          v214[208] = 0;
          *((_QWORD *)v214 + 29) = 0;
          v214[240] = 0;
          *((_QWORD *)v214 + 33) = 0;
          v214[272] = 0;
          *((_QWORD *)v214 + 37) = 0;
          v214[304] = 0;
          *((_QWORD *)v214 + 41) = 0;
          v214[336] = 0;
          *((_QWORD *)v214 + 45) = 0;
          v214[368] = 0;
          *((_QWORD *)v214 + 49) = 0;
          v214[400] = 0;
          *((_QWORD *)v214 + 53) = 0x800000000LL;
          *((_QWORD *)v214 + 66) = v214 + 544;
          *((_QWORD *)v214 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v213 + 8) = v214;
      }
      v214[*v214 + 1] = 16;
      v215 = *(_BYTE **)(v213 + 8);
      v216 = (unsigned __int8)*v215;
      *v215 = v216 + 1;
      *(_QWORD *)&v215[8 * v216 + 16] = a3;
    }
    v51 = (a3[2].m128i_i8[3] & 2) != 0;
    if ( v473 )
    {
      v52 = v51;
      v53 = v471;
      if ( !v471 )
      {
        v230 = v472;
        v231 = *(_DWORD *)(v472 + 14976);
        if ( v231 )
        {
          v264 = (unsigned int)(v231 - 1);
          *(_DWORD *)(v472 + 14976) = v264;
          v53 = *(unsigned __int8 **)(v230 + 8 * v264 + 14848);
          v265 = *((unsigned int *)v53 + 134);
          *v53 = 0;
          v266 = *((_QWORD *)v53 + 66);
          *((_DWORD *)v53 + 106) = 0;
          v267 = v266 + (v265 << 6);
          while ( v266 != v267 )
          {
            while ( 1 )
            {
              v267 -= 64;
              v268 = *(void **)(v267 + 24);
              if ( v268 == (void *)(v267 + 40) )
                break;
              operator delete(v268);
              if ( v266 == v267 )
                goto LABEL_279;
            }
          }
LABEL_279:
          *((_DWORD *)v53 + 134) = 0;
        }
        else
        {
          v53 = (unsigned __int8 *)operator new(0x3A0u);
          *v53 = 0;
          *((_QWORD *)v53 + 12) = v53 + 112;
          *((_QWORD *)v53 + 16) = v53 + 144;
          *((_QWORD *)v53 + 20) = v53 + 176;
          *((_QWORD *)v53 + 24) = v53 + 208;
          *((_QWORD *)v53 + 28) = v53 + 240;
          *((_QWORD *)v53 + 32) = v53 + 272;
          *((_QWORD *)v53 + 36) = v53 + 304;
          *((_QWORD *)v53 + 40) = v53 + 336;
          *((_QWORD *)v53 + 44) = v53 + 368;
          *((_QWORD *)v53 + 48) = v53 + 400;
          *((_QWORD *)v53 + 52) = v53 + 432;
          *((_QWORD *)v53 + 13) = 0;
          v53[112] = 0;
          *((_QWORD *)v53 + 17) = 0;
          v53[144] = 0;
          *((_QWORD *)v53 + 21) = 0;
          v53[176] = 0;
          *((_QWORD *)v53 + 25) = 0;
          v53[208] = 0;
          *((_QWORD *)v53 + 29) = 0;
          v53[240] = 0;
          *((_QWORD *)v53 + 33) = 0;
          v53[272] = 0;
          *((_QWORD *)v53 + 37) = 0;
          v53[304] = 0;
          *((_QWORD *)v53 + 41) = 0;
          v53[336] = 0;
          *((_QWORD *)v53 + 45) = 0;
          v53[368] = 0;
          *((_QWORD *)v53 + 49) = 0;
          v53[400] = 0;
          *((_QWORD *)v53 + 53) = 0x800000000LL;
          *((_QWORD *)v53 + 66) = v53 + 544;
          *((_QWORD *)v53 + 67) = 0x600000000LL;
        }
        v471 = v53;
      }
      v53[*v53 + 1] = 2;
      v54 = v471;
      v55 = *v471;
      *v471 = v55 + 1;
      *(_QWORD *)&v54[8 * v55 + 16] = v52;
    }
    else
    {
      if ( !v475 )
        goto LABEL_25;
      v199 = sub_168B9E0(v469);
      v200 = v470;
      if ( v470 )
        v200 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v470 + 32LL))(v470);
      v468 = v200;
      v201 = sub_1587BC0(v199, &v468, v195, v196, v197, v198);
      v202 = *v201 + 32LL * v474;
      v203 = *(unsigned __int8 **)(v202 + 8);
      if ( !v203 )
      {
        v238 = *(_QWORD *)(v202 + 16);
        v239 = *(_DWORD *)(v238 + 14976);
        if ( v239 )
        {
          v289 = (unsigned int)(v239 - 1);
          *(_DWORD *)(v238 + 14976) = v289;
          v203 = *(unsigned __int8 **)(v238 + 8 * v289 + 14848);
          v290 = *((unsigned int *)v203 + 134);
          v291 = *((_QWORD *)v203 + 66);
          *v203 = 0;
          *((_DWORD *)v203 + 106) = 0;
          v292 = v291 + (v290 << 6);
          while ( v291 != v292 )
          {
            while ( 1 )
            {
              v292 -= 64;
              v293 = *(void **)(v292 + 24);
              if ( v293 == (void *)(v292 + 40) )
                break;
              operator delete(v293);
              if ( v291 == v292 )
                goto LABEL_304;
            }
          }
LABEL_304:
          *((_DWORD *)v203 + 134) = 0;
        }
        else
        {
          v203 = (unsigned __int8 *)operator new(0x3A0u);
          *v203 = 0;
          *((_QWORD *)v203 + 12) = v203 + 112;
          *((_QWORD *)v203 + 16) = v203 + 144;
          *((_QWORD *)v203 + 20) = v203 + 176;
          *((_QWORD *)v203 + 24) = v203 + 208;
          *((_QWORD *)v203 + 28) = v203 + 240;
          *((_QWORD *)v203 + 32) = v203 + 272;
          *((_QWORD *)v203 + 36) = v203 + 304;
          *((_QWORD *)v203 + 40) = v203 + 336;
          *((_QWORD *)v203 + 44) = v203 + 368;
          *((_QWORD *)v203 + 48) = v203 + 400;
          *((_QWORD *)v203 + 52) = v203 + 432;
          *((_QWORD *)v203 + 13) = 0;
          v203[112] = 0;
          *((_QWORD *)v203 + 17) = 0;
          v203[144] = 0;
          *((_QWORD *)v203 + 21) = 0;
          v203[176] = 0;
          *((_QWORD *)v203 + 25) = 0;
          v203[208] = 0;
          *((_QWORD *)v203 + 29) = 0;
          v203[240] = 0;
          *((_QWORD *)v203 + 33) = 0;
          v203[272] = 0;
          *((_QWORD *)v203 + 37) = 0;
          v203[304] = 0;
          *((_QWORD *)v203 + 41) = 0;
          v203[336] = 0;
          *((_QWORD *)v203 + 45) = 0;
          v203[368] = 0;
          *((_QWORD *)v203 + 49) = 0;
          v203[400] = 0;
          *((_QWORD *)v203 + 53) = 0x800000000LL;
          *((_QWORD *)v203 + 66) = v203 + 544;
          *((_QWORD *)v203 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v202 + 8) = v203;
      }
      v203[*v203 + 1] = 2;
      v204 = *(_BYTE **)(v202 + 8);
      v205 = (unsigned __int8)*v204;
      *v204 = v205 + 1;
      *(_QWORD *)&v204[8 * v205 + 16] = v51;
    }
    if ( v473 )
    {
      v56 = v471;
      if ( !v471 )
      {
        v226 = v472;
        v227 = *(_DWORD *)(v472 + 14976);
        if ( v227 )
        {
          v259 = (unsigned int)(v227 - 1);
          *(_DWORD *)(v472 + 14976) = v259;
          v56 = *(unsigned __int8 **)(v226 + 8 * v259 + 14848);
          v260 = *((unsigned int *)v56 + 134);
          *v56 = 0;
          v261 = *((_QWORD *)v56 + 66);
          *((_DWORD *)v56 + 106) = 0;
          v262 = v261 + (v260 << 6);
          while ( v261 != v262 )
          {
            while ( 1 )
            {
              v262 -= 64;
              v263 = *(void **)(v262 + 24);
              if ( v263 == (void *)(v262 + 40) )
                break;
              operator delete(v263);
              if ( v261 == v262 )
                goto LABEL_274;
            }
          }
LABEL_274:
          *((_DWORD *)v56 + 134) = 0;
        }
        else
        {
          v56 = (unsigned __int8 *)operator new(0x3A0u);
          *v56 = 0;
          *((_QWORD *)v56 + 12) = v56 + 112;
          *((_QWORD *)v56 + 16) = v56 + 144;
          *((_QWORD *)v56 + 20) = v56 + 176;
          *((_QWORD *)v56 + 24) = v56 + 208;
          *((_QWORD *)v56 + 28) = v56 + 240;
          *((_QWORD *)v56 + 32) = v56 + 272;
          *((_QWORD *)v56 + 36) = v56 + 304;
          *((_QWORD *)v56 + 40) = v56 + 336;
          *((_QWORD *)v56 + 44) = v56 + 368;
          *((_QWORD *)v56 + 48) = v56 + 400;
          *((_QWORD *)v56 + 52) = v56 + 432;
          *((_QWORD *)v56 + 13) = 0;
          v56[112] = 0;
          *((_QWORD *)v56 + 17) = 0;
          v56[144] = 0;
          *((_QWORD *)v56 + 21) = 0;
          v56[176] = 0;
          *((_QWORD *)v56 + 25) = 0;
          v56[208] = 0;
          *((_QWORD *)v56 + 29) = 0;
          v56[240] = 0;
          *((_QWORD *)v56 + 33) = 0;
          v56[272] = 0;
          *((_QWORD *)v56 + 37) = 0;
          v56[304] = 0;
          *((_QWORD *)v56 + 41) = 0;
          v56[336] = 0;
          *((_QWORD *)v56 + 45) = 0;
          v56[368] = 0;
          *((_QWORD *)v56 + 49) = 0;
          v56[400] = 0;
          *((_QWORD *)v56 + 53) = 0x800000000LL;
          *((_QWORD *)v56 + 66) = v56 + 544;
          *((_QWORD *)v56 + 67) = 0x600000000LL;
        }
        v471 = v56;
      }
      v56[*v56 + 1] = 2;
      v57 = v471;
      v58 = *v471;
      *v471 = v58 + 1;
      *(_QWORD *)&v57[8 * v58 + 16] = 0;
    }
    else if ( v475 )
    {
      v186 = sub_168B9E0(v469);
      v189 = v470;
      if ( v470 )
        v189 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v470 + 32LL))(v470);
      v468 = v189;
      v190 = sub_1587BC0(v186, &v468, v184, v185, v187, v188);
      v191 = *v190 + 32LL * v474;
      v192 = *(unsigned __int8 **)(v191 + 8);
      if ( !v192 )
      {
        v242 = *(_QWORD *)(v191 + 16);
        v243 = *(_DWORD *)(v242 + 14976);
        if ( v243 )
        {
          v294 = (unsigned int)(v243 - 1);
          *(_DWORD *)(v242 + 14976) = v294;
          v192 = *(unsigned __int8 **)(v242 + 8 * v294 + 14848);
          v295 = *((unsigned int *)v192 + 134);
          *v192 = 0;
          v296 = *((_QWORD *)v192 + 66);
          *((_DWORD *)v192 + 106) = 0;
          v297 = v296 + (v295 << 6);
          while ( v296 != v297 )
          {
            while ( 1 )
            {
              v297 -= 64;
              v298 = *(void **)(v297 + 24);
              if ( v298 == (void *)(v297 + 40) )
                break;
              operator delete(v298);
              if ( v296 == v297 )
                goto LABEL_309;
            }
          }
LABEL_309:
          *((_DWORD *)v192 + 134) = 0;
        }
        else
        {
          v192 = (unsigned __int8 *)operator new(0x3A0u);
          *v192 = 0;
          *((_QWORD *)v192 + 12) = v192 + 112;
          *((_QWORD *)v192 + 16) = v192 + 144;
          *((_QWORD *)v192 + 20) = v192 + 176;
          *((_QWORD *)v192 + 24) = v192 + 208;
          *((_QWORD *)v192 + 28) = v192 + 240;
          *((_QWORD *)v192 + 32) = v192 + 272;
          *((_QWORD *)v192 + 36) = v192 + 304;
          *((_QWORD *)v192 + 40) = v192 + 336;
          *((_QWORD *)v192 + 44) = v192 + 368;
          *((_QWORD *)v192 + 48) = v192 + 400;
          *((_QWORD *)v192 + 52) = v192 + 432;
          *((_QWORD *)v192 + 13) = 0;
          v192[112] = 0;
          *((_QWORD *)v192 + 17) = 0;
          v192[144] = 0;
          *((_QWORD *)v192 + 21) = 0;
          v192[176] = 0;
          *((_QWORD *)v192 + 25) = 0;
          v192[208] = 0;
          *((_QWORD *)v192 + 29) = 0;
          v192[240] = 0;
          *((_QWORD *)v192 + 33) = 0;
          v192[272] = 0;
          *((_QWORD *)v192 + 37) = 0;
          v192[304] = 0;
          *((_QWORD *)v192 + 41) = 0;
          v192[336] = 0;
          *((_QWORD *)v192 + 45) = 0;
          v192[368] = 0;
          *((_QWORD *)v192 + 49) = 0;
          v192[400] = 0;
          *((_QWORD *)v192 + 53) = 0x800000000LL;
          *((_QWORD *)v192 + 66) = v192 + 544;
          *((_QWORD *)v192 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v191 + 8) = v192;
      }
      v192[*v192 + 1] = 2;
      v193 = *(_BYTE **)(v191 + 8);
      v194 = (unsigned __int8)*v193;
      *v193 = v194 + 1;
      *(_QWORD *)&v193[8 * v194 + 16] = 0;
    }
    goto LABEL_25;
  }
  if ( !(unsigned __int8)sub_15EB880((__int64)a3, *a1, 0) )
    return;
  v4 = sub_B8DC30(a2, 1);
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 16) != 26 )
      goto LABEL_5;
  }
  else
  {
    v34 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( v34 != 8 && v34 != 18 )
      goto LABEL_5;
  }
  v35 = sub_B8DC30(a2, 1);
  if ( v35 )
  {
    v36 = *(unsigned __int16 *)(v35 + 22);
  }
  else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
  {
    v36 = *(_DWORD *)(a2 + 80);
  }
  else
  {
    v36 = *(_DWORD *)(a2 + 104);
  }
  if ( v36 )
  {
    sub_168B9F0(v469, a1, *(unsigned int *)(a2 + 24), 7060, 0);
    v466 = 3;
    v37 = sub_1587D10((__int64)v469, &v466);
    v467 = 1;
    v38 = sub_1587D10(v37, &v467);
    LODWORD(v468) = 0;
    sub_1587D10(v38, (int *)&v468);
    sub_15F7200(v469);
    return;
  }
LABEL_5:
  v5 = sub_B8DC30(a2, 1);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 24);
  else
    v6 = *(_QWORD *)(a2 + 80);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) != 13 || ((*(_WORD *)(v7 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    sub_168B9F0(v469, a1, *(unsigned int *)(a2 + 24), 7060, 0);
    if ( v473 )
    {
      v39 = v471;
      if ( !v471 )
      {
        v221 = v472;
        v222 = *(_DWORD *)(v472 + 14976);
        if ( v222 )
        {
          v254 = (unsigned int)(v222 - 1);
          *(_DWORD *)(v472 + 14976) = v254;
          v39 = *(unsigned __int8 **)(v221 + 8 * v254 + 14848);
          v255 = *((unsigned int *)v39 + 134);
          *v39 = 0;
          v256 = *((_QWORD *)v39 + 66);
          *((_DWORD *)v39 + 106) = 0;
          v257 = v256 + (v255 << 6);
          while ( v256 != v257 )
          {
            while ( 1 )
            {
              v257 -= 64;
              v258 = *(void **)(v257 + 24);
              if ( v258 == (void *)(v257 + 40) )
                break;
              operator delete(v258);
              if ( v256 == v257 )
                goto LABEL_269;
            }
          }
LABEL_269:
          *((_DWORD *)v39 + 134) = 0;
        }
        else
        {
          v39 = (unsigned __int8 *)operator new(0x3A0u);
          *v39 = 0;
          *((_QWORD *)v39 + 12) = v39 + 112;
          *((_QWORD *)v39 + 16) = v39 + 144;
          *((_QWORD *)v39 + 20) = v39 + 176;
          *((_QWORD *)v39 + 24) = v39 + 208;
          *((_QWORD *)v39 + 28) = v39 + 240;
          *((_QWORD *)v39 + 32) = v39 + 272;
          *((_QWORD *)v39 + 36) = v39 + 304;
          *((_QWORD *)v39 + 40) = v39 + 336;
          *((_QWORD *)v39 + 44) = v39 + 368;
          *((_QWORD *)v39 + 48) = v39 + 400;
          *((_QWORD *)v39 + 52) = v39 + 432;
          *((_QWORD *)v39 + 13) = 0;
          v39[112] = 0;
          *((_QWORD *)v39 + 17) = 0;
          v39[144] = 0;
          *((_QWORD *)v39 + 21) = 0;
          v39[176] = 0;
          *((_QWORD *)v39 + 25) = 0;
          v39[208] = 0;
          *((_QWORD *)v39 + 29) = 0;
          v39[240] = 0;
          *((_QWORD *)v39 + 33) = 0;
          v39[272] = 0;
          *((_QWORD *)v39 + 37) = 0;
          v39[304] = 0;
          *((_QWORD *)v39 + 41) = 0;
          v39[336] = 0;
          *((_QWORD *)v39 + 45) = 0;
          v39[368] = 0;
          *((_QWORD *)v39 + 49) = 0;
          v39[400] = 0;
          *((_QWORD *)v39 + 53) = 0x800000000LL;
          *((_QWORD *)v39 + 66) = v39 + 544;
          *((_QWORD *)v39 + 67) = 0x600000000LL;
        }
        v471 = v39;
      }
      v39[*v39 + 1] = 2;
      v40 = v471;
      v41 = *v471;
      *v471 = v41 + 1;
      *(_QWORD *)&v40[8 * v41 + 16] = 3;
      goto LABEL_34;
    }
    if ( !v475 )
      goto LABEL_25;
    v18 = sub_168B9E0(v469);
    v22 = v470;
    v23 = v18;
    if ( v470 )
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v470 + 32LL))(v470);
    v24 = *(_DWORD *)(v23 + 16);
    v439 = *(__int64 **)v23;
    if ( !v24 )
      goto LABEL_147;
    v25 = v24 - 1;
    v442 = ((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4);
    v26 = v25 & v442;
    v27 = (__int64 *)(*(_QWORD *)v23 + 32LL * ((unsigned int)v25 & v442));
    v28 = *v27;
    if ( v22 == *v27 )
    {
LABEL_19:
      v29 = v27[1];
LABEL_20:
      v30 = 32LL * v474 + v29;
      v31 = *(unsigned __int8 **)(v30 + 8);
      if ( !v31 )
      {
        v234 = *(_QWORD *)(v30 + 16);
        v235 = *(_DWORD *)(v234 + 14976);
        if ( v235 )
        {
          v274 = (unsigned int)(v235 - 1);
          *(_DWORD *)(v234 + 14976) = v274;
          v31 = *(unsigned __int8 **)(v234 + 8 * v274 + 14848);
          v275 = *((unsigned int *)v31 + 134);
          *v31 = 0;
          v276 = *((_QWORD *)v31 + 66);
          *((_DWORD *)v31 + 106) = 0;
          v277 = v276 + (v275 << 6);
          while ( v276 != v277 )
          {
            while ( 1 )
            {
              v277 -= 64;
              v278 = *(void **)(v277 + 24);
              if ( v278 == (void *)(v277 + 40) )
                break;
              operator delete(v278);
              if ( v276 == v277 )
                goto LABEL_289;
            }
          }
LABEL_289:
          *((_DWORD *)v31 + 134) = 0;
        }
        else
        {
          v31 = (unsigned __int8 *)operator new(0x3A0u);
          *v31 = 0;
          *((_QWORD *)v31 + 12) = v31 + 112;
          *((_QWORD *)v31 + 16) = v31 + 144;
          *((_QWORD *)v31 + 20) = v31 + 176;
          *((_QWORD *)v31 + 24) = v31 + 208;
          *((_QWORD *)v31 + 28) = v31 + 240;
          *((_QWORD *)v31 + 32) = v31 + 272;
          *((_QWORD *)v31 + 36) = v31 + 304;
          *((_QWORD *)v31 + 40) = v31 + 336;
          *((_QWORD *)v31 + 44) = v31 + 368;
          *((_QWORD *)v31 + 48) = v31 + 400;
          *((_QWORD *)v31 + 52) = v31 + 432;
          *((_QWORD *)v31 + 13) = 0;
          v31[112] = 0;
          *((_QWORD *)v31 + 17) = 0;
          v31[144] = 0;
          *((_QWORD *)v31 + 21) = 0;
          v31[176] = 0;
          *((_QWORD *)v31 + 25) = 0;
          v31[208] = 0;
          *((_QWORD *)v31 + 29) = 0;
          v31[240] = 0;
          *((_QWORD *)v31 + 33) = 0;
          v31[272] = 0;
          *((_QWORD *)v31 + 37) = 0;
          v31[304] = 0;
          *((_QWORD *)v31 + 41) = 0;
          v31[336] = 0;
          *((_QWORD *)v31 + 45) = 0;
          v31[368] = 0;
          *((_QWORD *)v31 + 49) = 0;
          v31[400] = 0;
          *((_QWORD *)v31 + 53) = 0x800000000LL;
          *((_QWORD *)v31 + 66) = v31 + 544;
          *((_QWORD *)v31 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v30 + 8) = v31;
      }
      v31[*v31 + 1] = 2;
      v32 = *(_BYTE **)(v30 + 8);
      v33 = (unsigned __int8)*v32;
      *v32 = v33 + 1;
      *(_QWORD *)&v32[8 * v33 + 16] = 3;
LABEL_34:
      if ( v473 )
      {
        v42 = v471;
        if ( !v471 )
        {
          v219 = v472;
          v220 = *(_DWORD *)(v472 + 14976);
          if ( v220 )
          {
            v249 = (unsigned int)(v220 - 1);
            *(_DWORD *)(v472 + 14976) = v249;
            v42 = *(unsigned __int8 **)(v219 + 8 * v249 + 14848);
            v250 = *((unsigned int *)v42 + 134);
            *v42 = 0;
            v251 = *((_QWORD *)v42 + 66);
            *((_DWORD *)v42 + 106) = 0;
            v252 = v251 + (v250 << 6);
            while ( v251 != v252 )
            {
              while ( 1 )
              {
                v252 -= 64;
                v253 = *(void **)(v252 + 24);
                if ( v253 == (void *)(v252 + 40) )
                  break;
                operator delete(v253);
                if ( v251 == v252 )
                  goto LABEL_264;
              }
            }
LABEL_264:
            *((_DWORD *)v42 + 134) = 0;
          }
          else
          {
            v42 = (unsigned __int8 *)operator new(0x3A0u);
            *v42 = 0;
            *((_QWORD *)v42 + 12) = v42 + 112;
            *((_QWORD *)v42 + 16) = v42 + 144;
            *((_QWORD *)v42 + 20) = v42 + 176;
            *((_QWORD *)v42 + 24) = v42 + 208;
            *((_QWORD *)v42 + 28) = v42 + 240;
            *((_QWORD *)v42 + 32) = v42 + 272;
            *((_QWORD *)v42 + 36) = v42 + 304;
            *((_QWORD *)v42 + 40) = v42 + 336;
            *((_QWORD *)v42 + 44) = v42 + 368;
            *((_QWORD *)v42 + 48) = v42 + 400;
            *((_QWORD *)v42 + 52) = v42 + 432;
            *((_QWORD *)v42 + 13) = 0;
            v42[112] = 0;
            *((_QWORD *)v42 + 17) = 0;
            v42[144] = 0;
            *((_QWORD *)v42 + 21) = 0;
            v42[176] = 0;
            *((_QWORD *)v42 + 25) = 0;
            v42[208] = 0;
            *((_QWORD *)v42 + 29) = 0;
            v42[240] = 0;
            *((_QWORD *)v42 + 33) = 0;
            v42[272] = 0;
            *((_QWORD *)v42 + 37) = 0;
            v42[304] = 0;
            *((_QWORD *)v42 + 41) = 0;
            v42[336] = 0;
            *((_QWORD *)v42 + 45) = 0;
            v42[368] = 0;
            *((_QWORD *)v42 + 49) = 0;
            v42[400] = 0;
            *((_QWORD *)v42 + 53) = 0x800000000LL;
            *((_QWORD *)v42 + 66) = v42 + 544;
            *((_QWORD *)v42 + 67) = 0x600000000LL;
          }
          v471 = v42;
        }
        v42[*v42 + 1] = 2;
        v43 = v471;
        v44 = *v471;
        *v471 = v44 + 1;
        *(_QWORD *)&v43[8 * v44 + 16] = 1;
        goto LABEL_37;
      }
      if ( !v475 )
        goto LABEL_25;
      v74 = sub_168B9E0(v469);
      v77 = v470;
      v78 = v74;
      if ( v470 )
        v77 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v470 + 32LL))(v470);
      v79 = *(__int64 **)v78;
      v80 = *(_DWORD *)(v78 + 16);
      v441 = *(__int64 **)v78;
      if ( !v80 )
        goto LABEL_107;
      v81 = v80 - 1;
      v444 = ((unsigned int)v77 >> 9) ^ ((unsigned int)v77 >> 4);
      v82 = v81 & v444;
      v79 += 4 * ((unsigned int)v81 & v444);
      v83 = *v79;
      if ( *v79 == v77 )
      {
LABEL_64:
        v84 = v79[1];
LABEL_65:
        v85 = 32LL * v474 + v84;
        v86 = *(unsigned __int8 **)(v85 + 8);
        if ( !v86 )
        {
          v236 = *(_QWORD *)(v85 + 16);
          v237 = *(_DWORD *)(v236 + 14976);
          if ( v237 )
          {
            v279 = (unsigned int)(v237 - 1);
            *(_DWORD *)(v236 + 14976) = v279;
            v86 = *(unsigned __int8 **)(v236 + 8 * v279 + 14848);
            v280 = *((unsigned int *)v86 + 134);
            *v86 = 0;
            v281 = *((_QWORD *)v86 + 66);
            *((_DWORD *)v86 + 106) = 0;
            v282 = v281 + (v280 << 6);
            while ( v281 != v282 )
            {
              while ( 1 )
              {
                v282 -= 64;
                v283 = *(void **)(v282 + 24);
                if ( v283 == (void *)(v282 + 40) )
                  break;
                operator delete(v283);
                if ( v281 == v282 )
                  goto LABEL_294;
              }
            }
LABEL_294:
            *((_DWORD *)v86 + 134) = 0;
          }
          else
          {
            v86 = (unsigned __int8 *)operator new(0x3A0u);
            *v86 = 0;
            *((_QWORD *)v86 + 12) = v86 + 112;
            *((_QWORD *)v86 + 16) = v86 + 144;
            *((_QWORD *)v86 + 20) = v86 + 176;
            *((_QWORD *)v86 + 24) = v86 + 208;
            *((_QWORD *)v86 + 28) = v86 + 240;
            *((_QWORD *)v86 + 32) = v86 + 272;
            *((_QWORD *)v86 + 36) = v86 + 304;
            *((_QWORD *)v86 + 40) = v86 + 336;
            *((_QWORD *)v86 + 44) = v86 + 368;
            *((_QWORD *)v86 + 48) = v86 + 400;
            *((_QWORD *)v86 + 52) = v86 + 432;
            *((_QWORD *)v86 + 13) = 0;
            v86[112] = 0;
            *((_QWORD *)v86 + 17) = 0;
            v86[144] = 0;
            *((_QWORD *)v86 + 21) = 0;
            v86[176] = 0;
            *((_QWORD *)v86 + 25) = 0;
            v86[208] = 0;
            *((_QWORD *)v86 + 29) = 0;
            v86[240] = 0;
            *((_QWORD *)v86 + 33) = 0;
            v86[272] = 0;
            *((_QWORD *)v86 + 37) = 0;
            v86[304] = 0;
            *((_QWORD *)v86 + 41) = 0;
            v86[336] = 0;
            *((_QWORD *)v86 + 45) = 0;
            v86[368] = 0;
            *((_QWORD *)v86 + 49) = 0;
            v86[400] = 0;
            *((_QWORD *)v86 + 53) = 0x800000000LL;
            *((_QWORD *)v86 + 66) = v86 + 544;
            *((_QWORD *)v86 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v85 + 8) = v86;
        }
        v86[*v86 + 1] = 2;
        v87 = *(_BYTE **)(v85 + 8);
        v88 = (unsigned __int8)*v87;
        *v87 = v88 + 1;
        *(_QWORD *)&v87[8 * v88 + 16] = 1;
LABEL_37:
        if ( v473 )
        {
          v45 = v471;
          if ( !v471 )
          {
            v217 = v472;
            v218 = *(_DWORD *)(v472 + 14976);
            if ( v218 )
            {
              v244 = (unsigned int)(v218 - 1);
              *(_DWORD *)(v472 + 14976) = v244;
              v45 = *(unsigned __int8 **)(v217 + 8 * v244 + 14848);
              v245 = *((unsigned int *)v45 + 134);
              *v45 = 0;
              v246 = *((_QWORD *)v45 + 66);
              *((_DWORD *)v45 + 106) = 0;
              v247 = v246 + (v245 << 6);
              while ( v246 != v247 )
              {
                while ( 1 )
                {
                  v247 -= 64;
                  v248 = *(void **)(v247 + 24);
                  if ( v248 == (void *)(v247 + 40) )
                    break;
                  operator delete(v248);
                  if ( v246 == v247 )
                    goto LABEL_259;
                }
              }
LABEL_259:
              *((_DWORD *)v45 + 134) = 0;
            }
            else
            {
              v45 = (unsigned __int8 *)operator new(0x3A0u);
              *v45 = 0;
              *((_QWORD *)v45 + 12) = v45 + 112;
              *((_QWORD *)v45 + 16) = v45 + 144;
              *((_QWORD *)v45 + 20) = v45 + 176;
              *((_QWORD *)v45 + 24) = v45 + 208;
              *((_QWORD *)v45 + 28) = v45 + 240;
              *((_QWORD *)v45 + 32) = v45 + 272;
              *((_QWORD *)v45 + 36) = v45 + 304;
              *((_QWORD *)v45 + 40) = v45 + 336;
              *((_QWORD *)v45 + 44) = v45 + 368;
              *((_QWORD *)v45 + 48) = v45 + 400;
              *((_QWORD *)v45 + 52) = v45 + 432;
              *((_QWORD *)v45 + 13) = 0;
              v45[112] = 0;
              *((_QWORD *)v45 + 17) = 0;
              v45[144] = 0;
              *((_QWORD *)v45 + 21) = 0;
              v45[176] = 0;
              *((_QWORD *)v45 + 25) = 0;
              v45[208] = 0;
              *((_QWORD *)v45 + 29) = 0;
              v45[240] = 0;
              *((_QWORD *)v45 + 33) = 0;
              v45[272] = 0;
              *((_QWORD *)v45 + 37) = 0;
              v45[304] = 0;
              *((_QWORD *)v45 + 41) = 0;
              v45[336] = 0;
              *((_QWORD *)v45 + 45) = 0;
              v45[368] = 0;
              *((_QWORD *)v45 + 49) = 0;
              v45[400] = 0;
              *((_QWORD *)v45 + 53) = 0x800000000LL;
              *((_QWORD *)v45 + 66) = v45 + 544;
              *((_QWORD *)v45 + 67) = 0x600000000LL;
            }
            v471 = v45;
          }
          v45[*v45 + 1] = 2;
          v46 = v471;
          v47 = *v471;
          *v471 = v47 + 1;
          *(_QWORD *)&v46[8 * v47 + 16] = 1;
          goto LABEL_25;
        }
        if ( v475 )
        {
          v59 = sub_168B9E0(v469);
          v62 = v470;
          v63 = v59;
          if ( v470 )
            v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v470 + 32LL))(v470);
          v64 = *(__int64 **)v63;
          v65 = *(_DWORD *)(v63 + 16);
          v440 = *(__int64 **)v63;
          if ( !v65 )
            goto LABEL_68;
          v66 = v65 - 1;
          v443 = ((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4);
          v67 = v66 & v443;
          v64 += 4 * ((unsigned int)v66 & v443);
          v68 = *v64;
          if ( *v64 == v62 )
          {
LABEL_56:
            v69 = v64[1];
LABEL_57:
            v70 = 32LL * v474 + v69;
            v71 = *(unsigned __int8 **)(v70 + 8);
            if ( !v71 )
            {
              v232 = *(_QWORD *)(v70 + 16);
              v233 = *(_DWORD *)(v232 + 14976);
              if ( v233 )
              {
                v284 = (unsigned int)(v233 - 1);
                *(_DWORD *)(v232 + 14976) = v284;
                v71 = *(unsigned __int8 **)(v232 + 8 * v284 + 14848);
                v285 = *((unsigned int *)v71 + 134);
                *v71 = 0;
                v286 = *((_QWORD *)v71 + 66);
                *((_DWORD *)v71 + 106) = 0;
                v287 = v286 + (v285 << 6);
                while ( v286 != v287 )
                {
                  while ( 1 )
                  {
                    v287 -= 64;
                    v288 = *(void **)(v287 + 24);
                    if ( v288 == (void *)(v287 + 40) )
                      break;
                    operator delete(v288);
                    if ( v286 == v287 )
                      goto LABEL_299;
                  }
                }
LABEL_299:
                *((_DWORD *)v71 + 134) = 0;
              }
              else
              {
                v71 = (unsigned __int8 *)operator new(0x3A0u);
                *v71 = 0;
                *((_QWORD *)v71 + 12) = v71 + 112;
                *((_QWORD *)v71 + 16) = v71 + 144;
                *((_QWORD *)v71 + 20) = v71 + 176;
                *((_QWORD *)v71 + 24) = v71 + 208;
                *((_QWORD *)v71 + 28) = v71 + 240;
                *((_QWORD *)v71 + 32) = v71 + 272;
                *((_QWORD *)v71 + 36) = v71 + 304;
                *((_QWORD *)v71 + 40) = v71 + 336;
                *((_QWORD *)v71 + 44) = v71 + 368;
                *((_QWORD *)v71 + 48) = v71 + 400;
                *((_QWORD *)v71 + 52) = v71 + 432;
                *((_QWORD *)v71 + 13) = 0;
                v71[112] = 0;
                *((_QWORD *)v71 + 17) = 0;
                v71[144] = 0;
                *((_QWORD *)v71 + 21) = 0;
                v71[176] = 0;
                *((_QWORD *)v71 + 25) = 0;
                v71[208] = 0;
                *((_QWORD *)v71 + 29) = 0;
                v71[240] = 0;
                *((_QWORD *)v71 + 33) = 0;
                v71[272] = 0;
                *((_QWORD *)v71 + 37) = 0;
                v71[304] = 0;
                *((_QWORD *)v71 + 41) = 0;
                v71[336] = 0;
                *((_QWORD *)v71 + 45) = 0;
                v71[368] = 0;
                *((_QWORD *)v71 + 49) = 0;
                v71[400] = 0;
                *((_QWORD *)v71 + 53) = 0x800000000LL;
                *((_QWORD *)v71 + 66) = v71 + 544;
                *((_QWORD *)v71 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v70 + 8) = v71;
            }
            v71[*v71 + 1] = 2;
            v72 = *(_BYTE **)(v70 + 8);
            v73 = (unsigned __int8)*v72;
            *v72 = v73 + 1;
            *(_QWORD *)&v72[8 * v73 + 16] = 1;
            goto LABEL_25;
          }
          v306 = 1;
          v60 = nullptr;
          if ( v68 != -4096 )
          {
            while ( 1 )
            {
              if ( v68 == -8192 && !v60 )
                v60 = v64;
              v61 = (unsigned int)(v306 + 1);
              v67 = v66 & (v306 + v67);
              v64 = &v440[4 * v67];
              v68 = *v64;
              if ( v62 == *v64 )
                goto LABEL_56;
              if ( v68 == -4096 )
                break;
              ++v306;
            }
            if ( v60 )
              v64 = v60;
          }
          v117 = *(_DWORD *)(v63 + 8) + 1;
          if ( 4 * v117 < 3 * v65 )
          {
            if ( v65 - *(_DWORD *)(v63 + 12) - v117 > v65 >> 3 )
            {
              v120 = *v64;
              goto LABEL_104;
            }
            v341 = (v66 >> 1) | v66 | (((v66 >> 1) | v66) >> 2);
            v342 = (((v341 >> 4) | v341) >> 8) | (v341 >> 4) | v341;
            v343 = ((v342 >> 16) | v342) + 1;
            if ( (unsigned int)v343 < 0x40 )
              LODWORD(v343) = 64;
            *(_DWORD *)(v63 + 16) = v343;
            v344 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v343, 8, 64, v64, v60, v61);
            *(_QWORD *)v63 = v344;
            if ( v440 )
            {
              *(_QWORD *)(v63 + 8) = 0;
              v461 = 4LL * v65;
              for ( i = &v344[4 * *(unsigned int *)(v63 + 16)]; i != v344; v344 += 4 )
                *v344 = -4096;
              v455 = v63;
              v346 = v440;
              v464 = v62;
              do
              {
                v347 = *v346;
                if ( *v346 != -4096 && v347 != -8192 )
                {
                  v348 = *(_DWORD *)(v455 + 16);
                  if ( !v348 )
                  {
                    *(_QWORD *)&dword_0 = *v346;
                    BUG();
                  }
                  v349 = v348 - 1;
                  v350 = (v348 - 1) & (((unsigned int)v347 >> 9) ^ ((unsigned int)v347 >> 4));
                  v351 = (_QWORD *)(*(_QWORD *)v455 + 32LL * v350);
                  v352 = *v351;
                  if ( *v351 != v347 )
                  {
                    v429 = 1;
                    v430 = nullptr;
                    if ( v352 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( v352 == -8192 && !v430 )
                          v430 = v351;
                        v350 = v349 & (v429 + v350);
                        v351 = (_QWORD *)(*(_QWORD *)v455 + 32LL * v350);
                        v352 = *v351;
                        if ( v347 == *v351 )
                          break;
                        if ( v352 == -4096 )
                        {
                          if ( v430 )
                            v351 = v430;
                          break;
                        }
                        ++v429;
                      }
                    }
                  }
                  v353 = *v346;
                  v351[1] = 0;
                  v351[2] = 0;
                  v351[3] = 0;
                  *v351 = v353;
                  v351[1] = v346[1];
                  v354 = v346[2];
                  v346[1] = 0;
                  v355 = v351[2];
                  v351[2] = v354;
                  v356 = v346[3];
                  v346[2] = v355;
                  v357 = v351[3];
                  v351[3] = v356;
                  v358 = (_QWORD *)v346[1];
                  v359 = (_QWORD *)v346[2];
                  v346[3] = v357;
                  ++*(_DWORD *)(v455 + 8);
                  v360 = v358;
                  if ( v359 != v358 )
                  {
                    do
                    {
                      v361 = v360[1];
                      if ( v361 )
                      {
                        v362 = v360[2];
                        if ( v362 )
                        {
                          if ( v361 < v362 || v361 > v362 + 14848 )
                          {
                            v363 = *(_QWORD **)(v361 + 528);
                            v364 = &v363[8 * (unsigned __int64)*(unsigned int *)(v361 + 536)];
                            if ( v363 != v364 )
                            {
                              do
                              {
                                while ( 1 )
                                {
                                  v364 -= 8;
                                  v365 = (_QWORD *)v364[3];
                                  if ( v365 == v364 + 5 )
                                    break;
                                  operator delete(v365);
                                  if ( v363 == v364 )
                                    goto LABEL_386;
                                }
                              }
                              while ( v363 != v364 );
LABEL_386:
                              v364 = *(_QWORD **)(v361 + 528);
                            }
                            if ( v364 != (_QWORD *)(v361 + 544) )
                              free(v364);
                            v366 = *(void **)(v361 + 416);
                            if ( v366 != (void *)(v361 + 432) )
                              free(v366);
                            v367 = (void **)(v361 + 384);
                            v368 = (void **)(v361 + 64);
                            do
                            {
                              while ( *v367 != v367 + 2 )
                              {
                                operator delete(*v367);
                                v367 -= 4;
                                if ( v367 == v368 )
                                  goto LABEL_394;
                              }
                              v367 -= 4;
                            }
                            while ( v368 != v367 );
LABEL_394:
                            operator delete((void *)v361, 0x3A0u);
                          }
                          else
                          {
                            v372 = *(unsigned int *)(v362 + 14976);
                            *(_DWORD *)(v362 + 14976) = v372 + 1;
                            *(_QWORD *)(v362 + 8 * v372 + 14848) = v361;
                          }
                        }
                      }
                      v360 += 4;
                    }
                    while ( v359 != v360 );
                    v358 = (_QWORD *)v346[1];
                  }
                  if ( v358 )
                    operator delete(v358);
                }
                v346 += 4;
              }
              while ( &v440[v461] != v346 );
              v63 = v455;
              v62 = v464;
              operator delete(v440, v461 * 8, 8);
            }
            else
            {
              v413 = *(unsigned int *)(v63 + 16);
              *(_QWORD *)(v63 + 8) = 0;
              for ( j = &v344[4 * v413]; j != v344; v344 += 4 )
                *v344 = -4096;
            }
            v369 = *(_DWORD *)(v63 + 16);
            v117 = *(_DWORD *)(v63 + 8) + 1;
            if ( v369 )
            {
              v370 = v369 - 1;
              v371 = (v369 - 1) & v443;
              v64 = (__int64 *)(*(_QWORD *)v63 + 32LL * v371);
              v120 = *v64;
              if ( *v64 == v62 )
              {
                v120 = v62;
LABEL_104:
                *(_DWORD *)(v63 + 8) = v117;
                if ( v120 != -4096 )
                  --*(_DWORD *)(v63 + 12);
                goto LABEL_106;
              }
              v437 = 1;
              v438 = nullptr;
              if ( v120 != -4096 )
              {
                while ( 1 )
                {
                  if ( v120 == -8192 && !v438 )
                    v438 = v64;
                  v371 = v370 & (v437 + v371);
                  v64 = (__int64 *)(*(_QWORD *)v63 + 32LL * v371);
                  v120 = *v64;
                  if ( v62 == *v64 )
                    goto LABEL_104;
                  if ( v120 == -4096 )
                  {
                    if ( !v438 )
                      break;
                    v120 = *v438;
                    v64 = v438;
                    goto LABEL_104;
                  }
                  ++v437;
                }
              }
LABEL_568:
              *(_DWORD *)(v63 + 8) = v117;
LABEL_106:
              *v64 = v62;
              v69 = 0;
              v64[1] = 0;
              v64[2] = 0;
              v64[3] = 0;
              goto LABEL_57;
            }
          }
          else
          {
LABEL_68:
            v89 = (((((((2 * v65 - 1) | ((unsigned __int64)(2 * v65 - 1) >> 1)) >> 2)
                    | (2 * v65 - 1)
                    | ((unsigned __int64)(2 * v65 - 1) >> 1)) >> 4)
                  | (((2 * v65 - 1) | ((unsigned __int64)(2 * v65 - 1) >> 1)) >> 2)
                  | (2 * v65 - 1)
                  | ((unsigned __int64)(2 * v65 - 1) >> 1)) >> 8)
                | (((((2 * v65 - 1) | ((unsigned __int64)(2 * v65 - 1) >> 1)) >> 2)
                  | (2 * v65 - 1)
                  | ((unsigned __int64)(2 * v65 - 1) >> 1)) >> 4)
                | (((2 * v65 - 1) | ((unsigned __int64)(2 * v65 - 1) >> 1)) >> 2)
                | (2 * v65 - 1)
                | ((unsigned __int64)(2 * v65 - 1) >> 1);
            v90 = ((v89 >> 16) | v89) + 1;
            if ( (unsigned int)v90 < 0x40 )
              LODWORD(v90) = 64;
            *(_DWORD *)(v63 + 16) = v90;
            v91 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v90, 8, 64, v64, v60, v61);
            *(_QWORD *)v63 = v91;
            if ( v440 )
            {
              *(_QWORD *)(v63 + 8) = 0;
              v451 = 4LL * v65;
              v445 = &v440[v451];
              for ( k = &v91[4 * *(unsigned int *)(v63 + 16)]; k != v91; v91 += 4 )
                *v91 = -4096;
              if ( v440 != v445 )
              {
                v448 = v63;
                v93 = v440;
                v457 = v62;
                do
                {
                  v94 = *v93;
                  if ( *v93 != -4096 && v94 != -8192 )
                  {
                    v95 = *(_DWORD *)(v448 + 16);
                    if ( !v95 )
                    {
                      *(_QWORD *)&dword_0 = *v93;
                      BUG();
                    }
                    v96 = v95 - 1;
                    v97 = (v95 - 1) & (((unsigned int)v94 >> 9) ^ ((unsigned int)v94 >> 4));
                    v98 = (_QWORD *)(*(_QWORD *)v448 + 32LL * v97);
                    v99 = *v98;
                    if ( *v98 != v94 )
                    {
                      v423 = 1;
                      v424 = nullptr;
                      if ( v99 != -4096 )
                      {
                        while ( 1 )
                        {
                          if ( !v424 && v99 == -8192 )
                            v424 = v98;
                          v97 = v96 & (v423 + v97);
                          v98 = (_QWORD *)(*(_QWORD *)v448 + 32LL * v97);
                          v99 = *v98;
                          if ( v94 == *v98 )
                            break;
                          if ( v99 == -4096 )
                          {
                            if ( v424 )
                              v98 = v424;
                            break;
                          }
                          ++v423;
                        }
                      }
                    }
                    v100 = *v93;
                    v98[1] = 0;
                    v98[2] = 0;
                    v98[3] = 0;
                    *v98 = v100;
                    v98[1] = v93[1];
                    v101 = v93[2];
                    v93[1] = 0;
                    v102 = v98[2];
                    v98[2] = v101;
                    v103 = v93[3];
                    v93[2] = v102;
                    v104 = v98[3];
                    v98[3] = v103;
                    v105 = (_QWORD *)v93[1];
                    v106 = (_QWORD *)v93[2];
                    v93[3] = v104;
                    ++*(_DWORD *)(v448 + 8);
                    v107 = v105;
                    if ( v106 != v105 )
                    {
                      do
                      {
                        v108 = v107[1];
                        if ( v108 )
                        {
                          v109 = v107[2];
                          if ( v109 )
                          {
                            if ( v108 < v109 || v108 > v109 + 14848 )
                            {
                              v110 = *(_QWORD **)(v108 + 528);
                              v111 = &v110[8 * (unsigned __int64)*(unsigned int *)(v108 + 536)];
                              if ( v110 != v111 )
                              {
                                do
                                {
                                  while ( 1 )
                                  {
                                    v111 -= 8;
                                    v112 = (_QWORD *)v111[3];
                                    if ( v112 == v111 + 5 )
                                      break;
                                    operator delete(v112);
                                    if ( v110 == v111 )
                                      goto LABEL_86;
                                  }
                                }
                                while ( v110 != v111 );
LABEL_86:
                                v111 = *(_QWORD **)(v108 + 528);
                              }
                              if ( v111 != (_QWORD *)(v108 + 544) )
                                free(v111);
                              v113 = *(void **)(v108 + 416);
                              if ( v113 != (void *)(v108 + 432) )
                                free(v113);
                              v114 = (void **)(v108 + 384);
                              v115 = (void **)(v108 + 64);
                              do
                              {
                                while ( *v114 != v114 + 2 )
                                {
                                  operator delete(*v114);
                                  v114 -= 4;
                                  if ( v114 == v115 )
                                    goto LABEL_94;
                                }
                                v114 -= 4;
                              }
                              while ( v115 != v114 );
LABEL_94:
                              operator delete((void *)v108, 0x3A0u);
                            }
                            else
                            {
                              v223 = *(unsigned int *)(v109 + 14976);
                              *(_DWORD *)(v109 + 14976) = v223 + 1;
                              *(_QWORD *)(v109 + 8 * v223 + 14848) = v108;
                            }
                          }
                        }
                        v107 += 4;
                      }
                      while ( v106 != v107 );
                      v105 = (_QWORD *)v93[1];
                    }
                    if ( v105 )
                      operator delete(v105);
                  }
                  v93 += 4;
                }
                while ( v445 != v93 );
                v63 = v448;
                v62 = v457;
              }
              operator delete(v440, v451 * 8, 8);
            }
            else
            {
              v407 = *(unsigned int *)(v63 + 16);
              *(_QWORD *)(v63 + 8) = 0;
              for ( m = &v91[4 * v407]; m != v91; v91 += 4 )
                *v91 = -4096;
            }
            v116 = *(_DWORD *)(v63 + 16);
            v117 = *(_DWORD *)(v63 + 8) + 1;
            if ( v116 )
            {
              v118 = v116 - 1;
              v119 = (v116 - 1) & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4));
              v64 = (__int64 *)(*(_QWORD *)v63 + 32LL * v119);
              v120 = *v64;
              if ( v62 == *v64 )
                goto LABEL_104;
              v435 = 1;
              v436 = nullptr;
              if ( v120 != -4096 )
              {
                while ( 1 )
                {
                  if ( v120 == -8192 && !v436 )
                    v436 = v64;
                  v119 = v118 & (v435 + v119);
                  v64 = (__int64 *)(*(_QWORD *)v63 + 32LL * v119);
                  v120 = *v64;
                  if ( v62 == *v64 )
                    goto LABEL_104;
                  if ( v120 == -4096 )
                  {
                    if ( !v436 )
                      goto LABEL_568;
                    v120 = *v436;
                    v64 = v436;
                    goto LABEL_104;
                  }
                  ++v435;
                }
              }
              goto LABEL_568;
            }
          }
          ++*(_DWORD *)(v63 + 8);
          BUG();
        }
LABEL_25:
        sub_15F7200(v469);
        return;
      }
      v305 = 1;
      v75 = nullptr;
      if ( v83 != -4096 )
      {
        while ( 1 )
        {
          if ( !v75 && v83 == -8192 )
            v75 = v79;
          v76 = (unsigned int)(v305 + 1);
          v82 = v81 & (v305 + v82);
          v79 = &v441[4 * v82];
          v83 = *v79;
          if ( v77 == *v79 )
            goto LABEL_64;
          if ( v83 == -4096 )
            break;
          ++v305;
        }
        if ( v75 )
          v79 = v75;
      }
      v149 = *(_DWORD *)(v78 + 8) + 1;
      if ( 4 * v149 < 3 * v80 )
      {
        if ( v80 - *(_DWORD *)(v78 + 12) - v149 > v80 >> 3 )
        {
          v152 = *v79;
          goto LABEL_144;
        }
        v373 = (v81 >> 1) | v81 | (((v81 >> 1) | v81) >> 2);
        v374 = (((v373 >> 4) | v373) >> 8) | (v373 >> 4) | v373;
        v375 = ((v374 >> 16) | v374) + 1;
        if ( (unsigned int)v375 < 0x40 )
          LODWORD(v375) = 64;
        *(_DWORD *)(v78 + 16) = v375;
        v376 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v375, 8, 64, v79, v75, v76);
        *(_QWORD *)v78 = v376;
        if ( v441 )
        {
          *(_QWORD *)(v78 + 8) = 0;
          v462 = 4LL * v80;
          for ( n = &v376[4 * *(unsigned int *)(v78 + 16)]; n != v376; v376 += 4 )
            *v376 = -4096;
          v456 = v78;
          v378 = v441;
          v465 = v77;
          do
          {
            v379 = *v378;
            if ( *v378 != -8192 && v379 != -4096 )
            {
              v380 = *(_DWORD *)(v456 + 16);
              if ( !v380 )
              {
                *(_QWORD *)&dword_0 = *v378;
                BUG();
              }
              v381 = v380 - 1;
              v382 = (v380 - 1) & (((unsigned int)v379 >> 9) ^ ((unsigned int)v379 >> 4));
              v383 = (_QWORD *)(*(_QWORD *)v456 + 32LL * v382);
              v384 = *v383;
              if ( *v383 != v379 )
              {
                v427 = 1;
                v428 = nullptr;
                if ( v384 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( !v428 && v384 == -8192 )
                      v428 = v383;
                    v382 = v381 & (v427 + v382);
                    v383 = (_QWORD *)(*(_QWORD *)v456 + 32LL * v382);
                    v384 = *v383;
                    if ( v379 == *v383 )
                      break;
                    if ( v384 == -4096 )
                    {
                      if ( v428 )
                        v383 = v428;
                      break;
                    }
                    ++v427;
                  }
                }
              }
              v385 = *v378;
              v383[1] = 0;
              v383[2] = 0;
              v383[3] = 0;
              *v383 = v385;
              v383[1] = v378[1];
              v386 = v378[2];
              v378[1] = 0;
              v387 = v383[2];
              v383[2] = v386;
              v388 = v378[3];
              v378[2] = v387;
              v389 = v383[3];
              v383[3] = v388;
              v390 = (_QWORD *)v378[1];
              v391 = (_QWORD *)v378[2];
              v378[3] = v389;
              ++*(_DWORD *)(v456 + 8);
              v392 = v390;
              if ( v391 != v390 )
              {
                do
                {
                  v393 = v392[1];
                  if ( v393 )
                  {
                    v394 = v392[2];
                    if ( v394 )
                    {
                      if ( v393 < v394 || v393 > v394 + 14848 )
                      {
                        v395 = *(_QWORD **)(v393 + 528);
                        v396 = &v395[8 * (unsigned __int64)*(unsigned int *)(v393 + 536)];
                        if ( v395 != v396 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v396 -= 8;
                              v397 = (_QWORD *)v396[3];
                              if ( v397 == v396 + 5 )
                                break;
                              operator delete(v397);
                              if ( v395 == v396 )
                                goto LABEL_427;
                            }
                          }
                          while ( v395 != v396 );
LABEL_427:
                          v396 = *(_QWORD **)(v393 + 528);
                        }
                        if ( v396 != (_QWORD *)(v393 + 544) )
                          free(v396);
                        v398 = *(void **)(v393 + 416);
                        if ( v398 != (void *)(v393 + 432) )
                          free(v398);
                        v399 = (void **)(v393 + 384);
                        v400 = (void **)(v393 + 64);
                        do
                        {
                          while ( *v399 != v399 + 2 )
                          {
                            operator delete(*v399);
                            v399 -= 4;
                            if ( v400 == v399 )
                              goto LABEL_435;
                          }
                          v399 -= 4;
                        }
                        while ( v399 != v400 );
LABEL_435:
                        operator delete((void *)v393, 0x3A0u);
                      }
                      else
                      {
                        v406 = *(unsigned int *)(v394 + 14976);
                        *(_DWORD *)(v394 + 14976) = v406 + 1;
                        *(_QWORD *)(v394 + 8 * v406 + 14848) = v393;
                      }
                    }
                  }
                  v392 += 4;
                }
                while ( v391 != v392 );
                v390 = (_QWORD *)v378[1];
              }
              if ( v390 )
                operator delete(v390);
            }
            v378 += 4;
          }
          while ( &v441[v462] != v378 );
          v78 = v456;
          v77 = v465;
          operator delete(v441, v462 * 8, 8);
        }
        else
        {
          v417 = *(unsigned int *)(v78 + 16);
          *(_QWORD *)(v78 + 8) = 0;
          for ( ii = &v376[4 * v417]; ii != v376; v376 += 4 )
            *v376 = -4096;
        }
        v401 = *(_DWORD *)(v78 + 16);
        v149 = *(_DWORD *)(v78 + 8) + 1;
        if ( v401 )
        {
          v402 = v401 - 1;
          v403 = (v401 - 1) & v444;
          v79 = (__int64 *)(*(_QWORD *)v78 + 32LL * v403);
          v152 = *v79;
          if ( v77 == *v79 )
          {
LABEL_144:
            *(_DWORD *)(v78 + 8) = v149;
            if ( v152 != -4096 )
              --*(_DWORD *)(v78 + 12);
            goto LABEL_146;
          }
          v404 = 1;
          v405 = nullptr;
          if ( v152 != -4096 )
          {
            while ( 1 )
            {
              if ( !v405 && v152 == -8192 )
                v405 = v79;
              v403 = v402 & (v404 + v403);
              v79 = (__int64 *)(*(_QWORD *)v78 + 32LL * v403);
              v152 = *v79;
              if ( v77 == *v79 )
                goto LABEL_144;
              if ( v152 == -4096 )
              {
                if ( !v405 )
                  break;
                v152 = *v405;
                v79 = v405;
                goto LABEL_144;
              }
              ++v404;
            }
          }
LABEL_445:
          *(_DWORD *)(v78 + 8) = v149;
LABEL_146:
          *v79 = v77;
          v84 = 0;
          v79[1] = 0;
          v79[2] = 0;
          v79[3] = 0;
          goto LABEL_65;
        }
      }
      else
      {
LABEL_107:
        v121 = (((((((2 * v80 - 1) | ((unsigned __int64)(2 * v80 - 1) >> 1)) >> 2)
                 | (2 * v80 - 1)
                 | ((unsigned __int64)(2 * v80 - 1) >> 1)) >> 4)
               | (((2 * v80 - 1) | ((unsigned __int64)(2 * v80 - 1) >> 1)) >> 2)
               | (2 * v80 - 1)
               | ((unsigned __int64)(2 * v80 - 1) >> 1)) >> 8)
             | (((((2 * v80 - 1) | ((unsigned __int64)(2 * v80 - 1) >> 1)) >> 2)
               | (2 * v80 - 1)
               | ((unsigned __int64)(2 * v80 - 1) >> 1)) >> 4)
             | (((2 * v80 - 1) | ((unsigned __int64)(2 * v80 - 1) >> 1)) >> 2)
             | (2 * v80 - 1)
             | ((unsigned __int64)(2 * v80 - 1) >> 1);
        v122 = ((v121 >> 16) | v121) + 1;
        if ( (unsigned int)v122 < 0x40 )
          LODWORD(v122) = 64;
        *(_DWORD *)(v78 + 16) = v122;
        v123 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v122, 8, 64, v79, v75, v76);
        *(_QWORD *)v78 = v123;
        if ( v441 )
        {
          *(_QWORD *)(v78 + 8) = 0;
          v452 = 4LL * v80;
          v446 = &v441[v452];
          for ( jj = &v123[4 * *(unsigned int *)(v78 + 16)]; jj != v123; v123 += 4 )
            *v123 = -4096;
          if ( v441 != v446 )
          {
            v449 = v78;
            v125 = v441;
            v458 = v77;
            do
            {
              v126 = *v125;
              if ( *v125 != -4096 && v126 != -8192 )
              {
                v127 = *(_DWORD *)(v449 + 16);
                if ( !v127 )
                {
                  *(_QWORD *)&dword_0 = *v125;
                  BUG();
                }
                v128 = v127 - 1;
                v129 = (v127 - 1) & (((unsigned int)v126 >> 9) ^ ((unsigned int)v126 >> 4));
                v130 = (_QWORD *)(*(_QWORD *)v449 + 32LL * v129);
                v131 = *v130;
                if ( v126 != *v130 )
                {
                  v421 = 1;
                  v422 = nullptr;
                  if ( v131 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( !v422 && v131 == -8192 )
                        v422 = v130;
                      v129 = v128 & (v421 + v129);
                      v130 = (_QWORD *)(*(_QWORD *)v449 + 32LL * v129);
                      v131 = *v130;
                      if ( v126 == *v130 )
                        break;
                      if ( v131 == -4096 )
                      {
                        if ( v422 )
                          v130 = v422;
                        break;
                      }
                      ++v421;
                    }
                  }
                }
                v132 = *v125;
                v130[1] = 0;
                v130[2] = 0;
                v130[3] = 0;
                *v130 = v132;
                v130[1] = v125[1];
                v133 = v125[2];
                v125[1] = 0;
                v134 = v130[2];
                v130[2] = v133;
                v135 = v125[3];
                v125[2] = v134;
                v136 = v130[3];
                v130[3] = v135;
                v137 = (_QWORD *)v125[1];
                v138 = (_QWORD *)v125[2];
                v125[3] = v136;
                ++*(_DWORD *)(v449 + 8);
                v139 = v137;
                if ( v138 != v137 )
                {
                  do
                  {
                    v140 = v139[1];
                    if ( v140 )
                    {
                      v141 = v139[2];
                      if ( v141 )
                      {
                        if ( v140 < v141 || v140 > v141 + 14848 )
                        {
                          v142 = *(_QWORD **)(v140 + 528);
                          v143 = &v142[8 * (unsigned __int64)*(unsigned int *)(v140 + 536)];
                          if ( v142 != v143 )
                          {
                            do
                            {
                              while ( 1 )
                              {
                                v143 -= 8;
                                v144 = (_QWORD *)v143[3];
                                if ( v144 == v143 + 5 )
                                  break;
                                operator delete(v144);
                                if ( v142 == v143 )
                                  goto LABEL_125;
                              }
                            }
                            while ( v142 != v143 );
LABEL_125:
                            v143 = *(_QWORD **)(v140 + 528);
                          }
                          if ( v143 != (_QWORD *)(v140 + 544) )
                            free(v143);
                          v145 = *(void **)(v140 + 416);
                          if ( v145 != (void *)(v140 + 432) )
                            free(v145);
                          v146 = (void **)(v140 + 384);
                          v147 = (void **)(v140 + 64);
                          do
                          {
                            while ( *v146 != v146 + 2 )
                            {
                              operator delete(*v146);
                              v146 -= 4;
                              if ( v146 == v147 )
                                goto LABEL_133;
                            }
                            v146 -= 4;
                          }
                          while ( v146 != v147 );
LABEL_133:
                          operator delete((void *)v140, 0x3A0u);
                        }
                        else
                        {
                          v225 = *(unsigned int *)(v141 + 14976);
                          *(_DWORD *)(v141 + 14976) = v225 + 1;
                          *(_QWORD *)(v141 + 8 * v225 + 14848) = v140;
                        }
                      }
                    }
                    v139 += 4;
                  }
                  while ( v138 != v139 );
                  v137 = (_QWORD *)v125[1];
                }
                if ( v137 )
                  operator delete(v137);
              }
              v125 += 4;
            }
            while ( v446 != v125 );
            v78 = v449;
            v77 = v458;
          }
          operator delete(v441, v452 * 8, 8);
        }
        else
        {
          v411 = *(unsigned int *)(v78 + 16);
          *(_QWORD *)(v78 + 8) = 0;
          for ( kk = &v123[4 * v411]; kk != v123; v123 += 4 )
            *v123 = -4096;
        }
        v148 = *(_DWORD *)(v78 + 16);
        v149 = *(_DWORD *)(v78 + 8) + 1;
        if ( v148 )
        {
          v150 = v148 - 1;
          v151 = (v148 - 1) & (((unsigned int)v77 >> 9) ^ ((unsigned int)v77 >> 4));
          v79 = (__int64 *)(*(_QWORD *)v78 + 32LL * v151);
          v152 = *v79;
          if ( *v79 == v77 )
          {
            v152 = v77;
            goto LABEL_144;
          }
          v431 = 1;
          v432 = nullptr;
          if ( v152 != -4096 )
          {
            while ( 1 )
            {
              if ( !v432 && v152 == -8192 )
                v432 = v79;
              v151 = v150 & (v431 + v151);
              v79 = (__int64 *)(*(_QWORD *)v78 + 32LL * v151);
              v152 = *v79;
              if ( v77 == *v79 )
                goto LABEL_144;
              if ( v152 == -4096 )
              {
                if ( !v432 )
                  goto LABEL_445;
                v152 = *v432;
                v79 = v432;
                goto LABEL_144;
              }
              ++v431;
            }
          }
          goto LABEL_445;
        }
      }
      ++*(_DWORD *)(v78 + 8);
      BUG();
    }
    v304 = 1;
    v20 = nullptr;
    if ( v28 != -4096 )
    {
      while ( 1 )
      {
        if ( !v20 && v28 == -8192 )
          v20 = v27;
        v21 = (unsigned int)(v304 + 1);
        v26 = v25 & (v304 + v26);
        v27 = &v439[4 * v26];
        v28 = *v27;
        if ( v22 == *v27 )
          goto LABEL_19;
        if ( v28 == -4096 )
          break;
        ++v304;
      }
      if ( v20 )
        v27 = v20;
    }
    v19 = (unsigned int)(*(_DWORD *)(v23 + 8) + 1);
    if ( 4 * (int)v19 < 3 * v24 )
    {
      if ( v24 - *(_DWORD *)(v23 + 12) - (unsigned int)v19 > v24 >> 3 )
      {
        v183 = *v27;
        goto LABEL_183;
      }
      v307 = (v25 >> 1) | v25 | (((v25 >> 1) | v25) >> 2);
      v308 = (((v307 >> 4) | v307) >> 8) | (v307 >> 4) | v307;
      v309 = ((v308 >> 16) | v308) + 1;
      if ( (unsigned int)v309 < 0x40 )
        LODWORD(v309) = 64;
      *(_DWORD *)(v23 + 16) = v309;
      v310 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v309, 8, 64, v19, v20, v21);
      *(_QWORD *)v23 = v310;
      if ( v439 )
      {
        *(_QWORD *)(v23 + 8) = 0;
        v460 = 4LL * v24;
        for ( mm = &v310[4 * *(unsigned int *)(v23 + 16)]; mm != v310; v310 += 4 )
          *v310 = -4096;
        v454 = v23;
        v312 = v439;
        v463 = v22;
        do
        {
          v313 = *v312;
          if ( *v312 != -8192 && v313 != -4096 )
          {
            v314 = *(_DWORD *)(v454 + 16);
            if ( !v314 )
            {
              *(_QWORD *)&dword_0 = *v312;
              BUG();
            }
            v315 = v314 - 1;
            v316 = (v314 - 1) & (((unsigned int)v313 >> 9) ^ ((unsigned int)v313 >> 4));
            v317 = (_QWORD *)(*(_QWORD *)v454 + 32LL * v316);
            v318 = *v317;
            if ( v313 != *v317 )
            {
              v425 = 1;
              v426 = nullptr;
              if ( v318 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v426 && v318 == -8192 )
                    v426 = v317;
                  v316 = v315 & (v425 + v316);
                  v317 = (_QWORD *)(*(_QWORD *)v454 + 32LL * v316);
                  v318 = *v317;
                  if ( v313 == *v317 )
                    break;
                  if ( v318 == -4096 )
                  {
                    if ( v426 )
                      v317 = v426;
                    break;
                  }
                  ++v425;
                }
              }
            }
            v319 = *v312;
            v317[1] = 0;
            v317[2] = 0;
            v317[3] = 0;
            *v317 = v319;
            v317[1] = v312[1];
            v320 = v312[2];
            v312[1] = 0;
            v321 = v317[2];
            v317[2] = v320;
            v322 = v312[3];
            v312[2] = v321;
            v323 = v317[3];
            v317[3] = v322;
            v324 = (_QWORD *)v312[1];
            v325 = (_QWORD *)v312[2];
            v312[3] = v323;
            ++*(_DWORD *)(v454 + 8);
            v326 = v324;
            if ( v325 != v324 )
            {
              do
              {
                v327 = v326[1];
                if ( v327 )
                {
                  v328 = v326[2];
                  if ( v328 )
                  {
                    if ( v327 < v328 || v327 > v328 + 14848 )
                    {
                      v329 = *(_QWORD **)(v327 + 528);
                      v330 = &v329[8 * (unsigned __int64)*(unsigned int *)(v327 + 536)];
                      if ( v329 != v330 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v330 -= 8;
                            v331 = (_QWORD *)v330[3];
                            if ( v331 == v330 + 5 )
                              break;
                            operator delete(v331);
                            if ( v329 == v330 )
                              goto LABEL_344;
                          }
                        }
                        while ( v329 != v330 );
LABEL_344:
                        v330 = *(_QWORD **)(v327 + 528);
                      }
                      if ( v330 != (_QWORD *)(v327 + 544) )
                        free(v330);
                      v332 = *(void **)(v327 + 416);
                      if ( v332 != (void *)(v327 + 432) )
                        free(v332);
                      v333 = (void **)(v327 + 384);
                      v334 = (void **)(v327 + 64);
                      do
                      {
                        while ( *v333 != v333 + 2 )
                        {
                          operator delete(*v333);
                          v333 -= 4;
                          if ( v334 == v333 )
                            goto LABEL_352;
                        }
                        v333 -= 4;
                      }
                      while ( v333 != v334 );
LABEL_352:
                      operator delete((void *)v327, 0x3A0u);
                    }
                    else
                    {
                      v340 = *(unsigned int *)(v328 + 14976);
                      *(_DWORD *)(v328 + 14976) = v340 + 1;
                      *(_QWORD *)(v328 + 8 * v340 + 14848) = v327;
                    }
                  }
                }
                v326 += 4;
              }
              while ( v325 != v326 );
              v324 = (_QWORD *)v312[1];
            }
            if ( v324 )
              operator delete(v324);
          }
          v312 += 4;
        }
        while ( &v439[v460] != v312 );
        v23 = v454;
        v22 = v463;
        operator delete(v439, v460 * 8, 8);
      }
      else
      {
        v415 = *(unsigned int *)(v23 + 16);
        *(_QWORD *)(v23 + 8) = 0;
        for ( nn = &v310[4 * v415]; nn != v310; v310 += 4 )
          *v310 = -4096;
      }
      v335 = *(_DWORD *)(v23 + 16);
      LODWORD(v19) = *(_DWORD *)(v23 + 8) + 1;
      if ( v335 )
      {
        v336 = v335 - 1;
        v337 = (v335 - 1) & v442;
        v27 = (__int64 *)(*(_QWORD *)v23 + 32LL * v337);
        v183 = *v27;
        if ( v22 == *v27 )
        {
LABEL_183:
          *(_DWORD *)(v23 + 8) = v19;
          if ( v183 != -4096 )
            --*(_DWORD *)(v23 + 12);
          goto LABEL_185;
        }
        v338 = 1;
        v339 = nullptr;
        if ( v183 != -4096 )
        {
          while ( 1 )
          {
            if ( v183 == -8192 && !v339 )
              v339 = v27;
            v337 = v336 & (v338 + v337);
            v27 = (__int64 *)(*(_QWORD *)v23 + 32LL * v337);
            v183 = *v27;
            if ( v22 == *v27 )
              goto LABEL_183;
            if ( v183 == -4096 )
            {
              if ( !v339 )
                break;
              v183 = *v339;
              v27 = v339;
              goto LABEL_183;
            }
            ++v338;
          }
        }
LABEL_362:
        *(_DWORD *)(v23 + 8) = v19;
LABEL_185:
        *v27 = v22;
        v29 = 0;
        v27[1] = 0;
        v27[2] = 0;
        v27[3] = 0;
        goto LABEL_20;
      }
    }
    else
    {
LABEL_147:
      v153 = (((((((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
               | (2 * v24 - 1)
               | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 4)
             | (((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
             | (2 * v24 - 1)
             | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 8)
           | (((((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
             | (2 * v24 - 1)
             | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 4)
           | (((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
           | (2 * v24 - 1)
           | ((unsigned __int64)(2 * v24 - 1) >> 1);
      v154 = ((v153 >> 16) | v153) + 1;
      if ( (unsigned int)v154 < 0x40 )
        LODWORD(v154) = 64;
      *(_DWORD *)(v23 + 16) = v154;
      v155 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v154, 8, 64, v19, v20, v21);
      *(_QWORD *)v23 = v155;
      if ( v439 )
      {
        *(_QWORD *)(v23 + 8) = 0;
        v453 = 4LL * v24;
        v447 = &v439[v453];
        for ( i1 = &v155[4 * *(unsigned int *)(v23 + 16)]; i1 != v155; v155 += 4 )
          *v155 = -4096;
        if ( v439 != v447 )
        {
          v450 = v23;
          v157 = v439;
          v459 = v22;
          do
          {
            v158 = *v157;
            if ( *v157 != -8192 && v158 != -4096 )
            {
              v159 = *(_DWORD *)(v450 + 16);
              if ( !v159 )
              {
                *(_QWORD *)&dword_0 = *v157;
                BUG();
              }
              v160 = v159 - 1;
              v161 = (v159 - 1) & (((unsigned int)v158 >> 9) ^ ((unsigned int)v158 >> 4));
              v162 = (_QWORD *)(*(_QWORD *)v450 + 32LL * v161);
              v163 = *v162;
              if ( v158 != *v162 )
              {
                v419 = 1;
                v420 = nullptr;
                if ( v163 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( v163 == -8192 && !v420 )
                      v420 = v162;
                    v161 = v160 & (v419 + v161);
                    v162 = (_QWORD *)(*(_QWORD *)v450 + 32LL * v161);
                    v163 = *v162;
                    if ( v158 == *v162 )
                      break;
                    if ( v163 == -4096 )
                    {
                      if ( v420 )
                        v162 = v420;
                      break;
                    }
                    ++v419;
                  }
                }
              }
              v164 = *v157;
              v162[1] = 0;
              v162[2] = 0;
              v162[3] = 0;
              *v162 = v164;
              v162[1] = v157[1];
              v165 = v157[2];
              v157[1] = 0;
              v166 = v162[2];
              v162[2] = v165;
              v167 = v157[3];
              v157[2] = v166;
              v168 = v162[3];
              v162[3] = v167;
              v169 = (_QWORD *)v157[1];
              v170 = (_QWORD *)v157[2];
              v157[3] = v168;
              ++*(_DWORD *)(v450 + 8);
              v171 = v169;
              if ( v170 != v169 )
              {
                do
                {
                  v172 = v171[1];
                  if ( v172 )
                  {
                    v173 = v171[2];
                    if ( v173 )
                    {
                      if ( v172 < v173 || v172 > v173 + 14848 )
                      {
                        v174 = *(_QWORD **)(v172 + 528);
                        v175 = &v174[8 * (unsigned __int64)*(unsigned int *)(v172 + 536)];
                        if ( v174 != v175 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v175 -= 8;
                              v176 = (_QWORD *)v175[3];
                              if ( v176 == v175 + 5 )
                                break;
                              operator delete(v176);
                              if ( v174 == v175 )
                                goto LABEL_165;
                            }
                          }
                          while ( v174 != v175 );
LABEL_165:
                          v175 = *(_QWORD **)(v172 + 528);
                        }
                        if ( v175 != (_QWORD *)(v172 + 544) )
                          free(v175);
                        v177 = *(void **)(v172 + 416);
                        if ( v177 != (void *)(v172 + 432) )
                          free(v177);
                        v178 = (void **)(v172 + 384);
                        v179 = (void **)(v172 + 64);
                        do
                        {
                          while ( *v178 != v178 + 2 )
                          {
                            operator delete(*v178);
                            v178 -= 4;
                            if ( v179 == v178 )
                              goto LABEL_173;
                          }
                          v178 -= 4;
                        }
                        while ( v178 != v179 );
LABEL_173:
                        operator delete((void *)v172, 0x3A0u);
                      }
                      else
                      {
                        v224 = *(unsigned int *)(v173 + 14976);
                        *(_DWORD *)(v173 + 14976) = v224 + 1;
                        *(_QWORD *)(v173 + 8 * v224 + 14848) = v172;
                      }
                    }
                  }
                  v171 += 4;
                }
                while ( v170 != v171 );
                v169 = (_QWORD *)v157[1];
              }
              if ( v169 )
                operator delete(v169);
            }
            v157 += 4;
          }
          while ( v447 != v157 );
          v23 = v450;
          v22 = v459;
        }
        operator delete(v439, v453 * 8, 8);
      }
      else
      {
        v409 = *(unsigned int *)(v23 + 16);
        *(_QWORD *)(v23 + 8) = 0;
        for ( i2 = &v155[4 * v409]; i2 != v155; v155 += 4 )
          *v155 = -4096;
      }
      v180 = *(_DWORD *)(v23 + 16);
      LODWORD(v19) = *(_DWORD *)(v23 + 8) + 1;
      if ( v180 )
      {
        v181 = v180 - 1;
        v182 = (v180 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
        v27 = (__int64 *)(*(_QWORD *)v23 + 32LL * v182);
        v183 = *v27;
        if ( v22 == *v27 )
          goto LABEL_183;
        v433 = 1;
        v434 = nullptr;
        if ( v183 != -4096 )
        {
          while ( 1 )
          {
            if ( v183 == -8192 && !v434 )
              v434 = v27;
            v182 = v181 & (v433 + v182);
            v27 = (__int64 *)(*(_QWORD *)v23 + 32LL * v182);
            v183 = *v27;
            if ( v22 == *v27 )
              goto LABEL_183;
            if ( v183 == -4096 )
            {
              if ( !v434 )
                goto LABEL_362;
              v183 = *v434;
              v27 = v434;
              goto LABEL_183;
            }
            ++v433;
          }
        }
        goto LABEL_362;
      }
    }
    ++*(_DWORD *)(v23 + 8);
    BUG();
  }
  v8 = sub_168B6C0(a1);
  v9 = (_QWORD *)sub_168B6C0(a1);
  v12 = v9[294];
  v9[304] += 40LL;
  v13 = (__m128i *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v9[295] >= (unsigned __int64)&v13[2].m128i_u64[1] && v12 )
    v9[294] = (char *)v13 + 40;
  else
    v13 = (__m128i *)sub_986170((__int64)(v9 + 294), 40, 40, 3, v10, v11);
  sub_B079F0(v13, v8, a3);
  sub_B8CC60(a2, (__int64)v13, v14, v15, v16, v17);
}
