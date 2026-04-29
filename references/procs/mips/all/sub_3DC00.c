__int64 __fastcall sub_3DC00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7)
{
  unsigned int v9; // eax
  unsigned __int8 v10; // al
  __int64 v11; // rdi
  const char *v12; // rsi
  bool v13; // zf
  void *v14; // rax
  __int64 result; // rax
  _QWORD *v16; // rsi
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // r12
  __int64 *v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r10
  __int64 v28; // rcx
  unsigned int v29; // r11d
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 (__fastcall *v33)(_BYTE *, __int64); // r9
  __int64 *v34; // rax
  unsigned int v35; // eax
  _QWORD *v36; // rdx
  unsigned int v37; // eax
  _DWORD *v38; // rdx
  unsigned int v39; // eax
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 *v42; // rdx
  unsigned int v43; // eax
  const char **v44; // rdx
  const char *v45; // rbp
  unsigned int v46; // eax
  __int64 v47; // rcx
  _QWORD **v48; // rdx
  unsigned int v49; // eax
  _QWORD *v50; // rdx
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rsi
  _QWORD *v57; // rax
  unsigned int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // rsi
  _QWORD *v64; // rax
  unsigned int v65; // edx
  __int64 v66; // rax
  __int64 v67; // rcx
  _QWORD *v68; // rbx
  _QWORD *v69; // rax
  unsigned int v70; // edx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdi
  _QWORD *v74; // rax
  unsigned int v75; // edx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdi
  _QWORD *v79; // rax
  unsigned int v80; // edx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rsi
  _QWORD *v84; // rax
  unsigned int v85; // eax
  _QWORD *v86; // rdx
  unsigned int v87; // edx
  unsigned int v88; // edx
  __int64 v89; // rax
  __int64 v90; // rsi
  _DWORD *v91; // r12
  __int64 v92; // rcx
  __int64 v93; // rsi
  _QWORD **v94; // rax
  unsigned int v95; // edx
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rsi
  int *v99; // rax
  unsigned int v100; // ecx
  int v101; // edx
  unsigned __int64 v102; // rax
  unsigned int v103; // edx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 *v106; // r12
  __int64 *v107; // rax
  __int64 v108; // rbp
  unsigned int v109; // edx
  __int64 v110; // rax
  __int64 v111; // rsi
  int *v112; // r8
  __int64 v113; // rcx
  int *v114; // rax
  unsigned int v115; // edx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rsi
  __int64 v119; // rdi
  __int64 v120; // rcx
  int *v121; // rax
  unsigned int v122; // eax
  __int64 *v123; // rdx
  unsigned int v124; // edx
  __int64 v125; // rax
  __int64 v126; // rsi
  int *v127; // rdi
  _QWORD *v128; // rsi
  __int64 first_seg; // rdx
  unsigned int v130; // edx
  __int64 v131; // rax
  __int64 v132; // rcx
  int *v133; // rsi
  unsigned int *v134; // rax
  unsigned int v135; // eax
  __int64 v136; // rsi
  __int64 v137; // rdx
  __int64 *v138; // rbx
  char **v139; // rbp
  const char *v140; // r13
  size_t v141; // rax
  size_t v142; // r15
  size_t v143; // r12
  int v144; // r13d
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rsi
  __int64 v148; // rax
  __int64 v149; // r12
  char *v150; // rax
  size_t v151; // r15
  void *v152; // r12
  unsigned int v153; // eax
  _QWORD *v154; // rdx
  __int64 v155; // rax
  int v156; // ecx
  int v157; // r8d
  int v158; // r9d
  unsigned int v159; // edx
  __int64 v160; // rax
  __int64 v161; // rcx
  __int64 *v162; // r12
  __int64 *v163; // rax
  unsigned int v164; // edx
  __int64 v165; // rax
  __int64 v166; // rcx
  __m128i *v167; // rdi
  unsigned __int8 **v168; // rax
  unsigned int v169; // eax
  __int64 *v170; // rdx
  __int64 v171; // rdx
  unsigned int v172; // edx
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 *v175; // rsi
  __int64 *v176; // rax
  unsigned int v177; // eax
  __int64 *v178; // rdx
  unsigned int v179; // eax
  __int64 *v180; // rdx
  unsigned int v181; // edx
  __int64 v182; // rax
  __int64 v183; // rsi
  __int64 *v184; // rdi
  __int64 v185; // rcx
  _QWORD *v186; // rsi
  __int64 *v187; // rax
  unsigned int v188; // edx
  __int64 v189; // rax
  __int64 v190; // rcx
  __int64 v191; // rsi
  __int64 *v192; // rax
  unsigned int v193; // edx
  __int64 v194; // rax
  __int64 v195; // rsi
  unsigned __int64 *v196; // r12
  _BYTE *v197; // r13
  _BYTE **v198; // rax
  _BYTE *v199; // rbp
  char *v200; // rax
  unsigned __int8 v201; // r14
  unsigned __int64 v202; // rsi
  unsigned __int8 v203; // al
  unsigned __int64 v204; // rsi
  unsigned __int8 v205; // bl
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  unsigned int v210; // edx
  __int64 v211; // rax
  __int64 v212; // rsi
  _DWORD *v213; // r12
  __int64 v214; // rcx
  __int64 v215; // r13
  __int64 *v216; // rax
  __int64 v217; // rbx
  __int64 v218; // rax
  int v219; // ecx
  __int64 v220; // rdx
  int v221; // eax
  int v222; // eax
  int v223; // edx
  unsigned int v224; // edx
  __int64 v225; // rax
  __int64 v226; // rcx
  _DWORD *v227; // rsi
  _DWORD **v228; // rax
  _WORD *v229; // rdx
  unsigned __int16 v230; // ax
  unsigned int v231; // edx
  __int64 v232; // rax
  __int64 v233; // rsi
  __int64 v234; // r8
  __int64 v235; // rcx
  __int64 v236; // rdi
  unsigned int *v237; // rax
  unsigned int v238; // edx
  __int64 v239; // rax
  __int64 v240; // rcx
  __int64 v241; // rsi
  _QWORD *v242; // rax
  __int64 v243; // rdi
  __int64 v244; // r14
  _QWORD *v245; // rbp
  __int64 v246; // rdi
  __int64 v247; // r12
  __int64 i; // r15
  __int64 *v249; // r13
  __int64 v250; // rdi
  __int64 v251; // rdi
  __int64 v252; // rdi
  __int64 v253; // rdi
  unsigned int v254; // edx
  __int64 v255; // rax
  __int64 v256; // rcx
  __int64 v257; // r10
  __int64 v258; // rsi
  int v259; // ecx
  __int64 v260; // rdi
  __int64 v261; // r8
  __int64 v262; // rsi
  __int64 v263; // r9
  __int64 v264; // rdi
  int v265; // esi
  __int64 **v266; // rax
  unsigned int v267; // eax
  _QWORD *v268; // rdx
  unsigned int v269; // eax
  __int64 v270; // rdx
  unsigned int v271; // edx
  unsigned int v272; // eax
  const char **v273; // rdx
  unsigned int v274; // edx
  __int64 v275; // rax
  __int64 v276; // rcx
  __int64 *v277; // rsi
  __int64 **v278; // rax
  unsigned int v279; // edx
  __int64 v280; // rax
  __int64 v281; // rsi
  const char *v282; // rdi
  __int64 v283; // rcx
  unsigned int v284; // r9d
  __int64 v285; // rsi
  __int64 *v286; // r10
  __int64 v287; // rcx
  __int64 *v288; // r12
  _DWORD *v289; // rax
  __int64 v290; // rax
  unsigned int v291; // eax
  __m128i **v292; // rdx
  __m128i *v293; // rbp
  unsigned int v294; // eax
  __int64 *v295; // rdx
  unsigned int v296; // edx
  __int64 v297; // rax
  __int64 v298; // rcx
  __int64 v299; // rsi
  int *v300; // rax
  unsigned int v301; // eax
  __int64 *v302; // rdx
  unsigned int v303; // edx
  __int64 v304; // rax
  __int64 v305; // rcx
  __int64 v306; // rsi
  __int64 *v307; // rax
  unsigned int v308; // eax
  __int64 *v309; // rdx
  unsigned int v310; // eax
  _DWORD *v311; // rdx
  unsigned int v312; // eax
  _DWORD *v313; // rdx
  void *v314; // rax
  unsigned int v315; // eax
  unsigned __int64 **v316; // rdx
  unsigned int v317; // eax
  __int64 *v318; // rdx
  __int64 v319; // rbx
  char v320; // dl
  __int16 v321; // cx
  __int64 v322; // rdx
  unsigned int v323; // eax
  __int64 **v324; // rdx
  unsigned int v325; // eax
  __int64 *v326; // rdx
  unsigned int v327; // eax
  _QWORD *v328; // rdx
  __int64 v329; // rbp
  unsigned int v330; // eax
  __int64 v331; // r12
  unsigned __int8 v332; // al
  unsigned int v333; // edx
  __int64 v334; // rax
  __int64 v335; // rcx
  __int64 v336; // r12
  int *v337; // rax
  int v338; // r13d
  unsigned __int16 v339; // ax
  unsigned int v340; // ebp
  unsigned int v341; // eax
  __int64 *v342; // rdx
  unsigned int v343; // eax
  _DWORD **v344; // rdx
  unsigned int v345; // eax
  unsigned int *v346; // rdx
  unsigned int v347; // edx
  __int64 v348; // rax
  __int64 v349; // rcx
  unsigned __int64 v350; // r12
  _DWORD *v351; // rax
  bool v352; // bp
  __int64 v353; // rax
  size_t v354; // r13
  void *v355; // r12
  __int64 v356; // rdx
  __int64 v357; // rsi
  __int64 v358; // rax
  void *v359; // rdi
  __int64 v360; // rax
  unsigned int v361; // edx
  __int64 v362; // rax
  __int64 v363; // rsi
  _QWORD *v364; // rdi
  __int64 v365; // rcx
  _WORD *v366; // rsi
  const char **v367; // rax
  unsigned int v368; // edx
  __int64 v369; // rax
  __int64 v370; // rsi
  __int64 *v371; // r12
  __int64 v372; // rcx
  unsigned __int64 v373; // rdi
  __int64 v374; // rsi
  __int64 v375; // r9
  __int64 v376; // rcx
  __int64 (__fastcall *v377)(const char *, __int64); // rsi
  __int64 *v378; // rax
  __int64 *v379; // rdx
  _DWORD *v380; // rax
  __int64 *v381; // rdx
  __int64 *v382; // rax
  _DWORD *v383; // rdx
  const char **v384; // rax
  unsigned int *v385; // rdx
  __int64 **v386; // rax
  _QWORD **v387; // rdx
  _QWORD *v388; // rdx
  _QWORD **v389; // rdx
  _QWORD **v390; // rdx
  _QWORD *v391; // rdx
  _QWORD **v392; // rdx
  __int64 *v393; // rax
  __int64 *v394; // rdx
  __int64 v395; // rdx
  __int64 v396; // rax
  __int64 *v397; // rdx
  __int64 *v398; // rax
  unsigned int *v399; // rdx
  unsigned int *v400; // rax
  __int64 (__fastcall **v401)(_BYTE *, __int64); // rdx
  _DWORD **v402; // rax
  __int64 *v403; // rdx
  __int64 **v404; // rdx
  int **v405; // rax
  _QWORD **v406; // rdx
  _QWORD **v407; // rax
  int **v408; // rdx
  _DWORD **v409; // rax
  __int64 *v410; // rdx
  __m128i **v411; // rdx
  __int64 *v412; // rdx
  unsigned __int64 **v413; // rax
  _BYTE **v414; // rdx
  __int64 *v415; // rax
  __int64 *v416; // rdx
  __int64 *v417; // rax
  int **v418; // rax
  _QWORD **v419; // rdx
  __int64 **v420; // rax
  __int64 **v421; // rdx
  _QWORD **v422; // rax
  __int64 *v423; // rax
  _QWORD *v424; // rdx
  _DWORD **v425; // rdx
  __int64 *v426; // rdx
  __int64 *v427; // rdx
  __int64 *v428; // rax
  __int64 *v429; // rdx
  __int64 *v430; // rdx
  __int64 **v431; // rdx
  __int64 *v432; // rdx
  _QWORD *v433; // rdx
  __int64 *v434; // rdx
  __int64 **v435; // rdx
  __int64 **v436; // rax
  _QWORD **v437; // rdx
  __int64 *v438; // rdx
  __int64 v439; // rax
  _QWORD **v440; // rax
  unsigned __int64 *v441; // rdx
  unsigned int *v442; // rax
  __int64 (__fastcall **v443)(const char *, __int64); // rdx
  __int64 func; // rax
  int v445; // eax
  __int64 v446; // rdx
  _QWORD *j; // rbp
  unsigned __int8 v448; // al
  unsigned __int8 v449; // al
  unsigned __int8 v450; // al
  unsigned __int8 v451; // al
  unsigned __int8 v452; // al
  unsigned __int16 v453; // ax
  char v454; // r14
  unsigned int v455; // r12d
  _QWORD **v456; // rax
  _WORD **v457; // rdx
  __int64 *v458; // [rsp+0h] [rbp-1F8h]
  __int64 v459; // [rsp+0h] [rbp-1F8h]
  __int64 v460; // [rsp+8h] [rbp-1F0h]
  void *v461; // [rsp+10h] [rbp-1E8h] BYREF
  size_t v462[3]; // [rsp+18h] [rbp-1E0h]
  void *src; // [rsp+30h] [rbp-1C8h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-1C0h]
  __int128 v465; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v466; // [rsp+60h] [rbp-198h]
  __int64 v467; // [rsp+68h] [rbp-190h]
  __int64 v468; // [rsp+70h] [rbp-188h]
  char v469; // [rsp+78h] [rbp-180h] BYREF
  _QWORD v470[8]; // [rsp+1B8h] [rbp-40h] BYREF

  v470[0] = __readfsqword(0x28u);
  if ( a2 <= 100 )
  {
    if ( a2 >= 0 )
    {
      switch ( a2 )
      {
        case 0LL:
          hook_event_listener(3, a1 + 128, &LPH, 0);
          netnode_check(a1 + 152, "$ mips", 0, 1);
          sub_46B80(a1);
          *(_QWORD *)(a1 + 624) = sub_48600(a1);
          return 0;
        case 1LL:
          *(_QWORD *)(a1 + 328) = 0;
          v243 = *(_QWORD *)(a1 + 160);
          if ( v243 )
          {
            v459 = 0;
            v244 = 0;
            v460 = *(_QWORD *)(a1 + 168);
            if ( v460 )
            {
              do
              {
                v245 = (_QWORD *)(v243 + v244);
                v246 = *(_QWORD *)(v243 + v244 + 56);
                if ( v246 )
                {
                  v247 = v245[8];
                  if ( v247 )
                  {
                    for ( i = 0; i != v247; ++i )
                    {
                      v249 = (__int64 *)(v246 + 48 * i);
                      v250 = v249[3];
                      if ( v250 )
                      {
                        v249[4] = 0;
                        qfree(v250);
                      }
                      v251 = *v249;
                      if ( *v249 )
                      {
                        v249[1] = 0;
                        qfree(v251);
                      }
                      v246 = v245[7];
                    }
                  }
                  v245[8] = 0;
                  qfree(v246);
                }
                v252 = v245[4];
                if ( v252 )
                {
                  v245[5] = 0;
                  qfree(v252);
                }
                v253 = v245[1];
                if ( v253 )
                {
                  v245[2] = 0;
                  qfree(v253);
                }
                ++v459;
                v243 = *(_QWORD *)(a1 + 160);
                v244 += 88;
              }
              while ( v460 != v459 );
            }
            *(_QWORD *)(a1 + 168) = 0;
            qfree(v243);
            *(_QWORD *)(a1 + 160) = 0;
            *(_QWORD *)(a1 + 176) = 0;
          }
          sub_46DF0(a1);
          unhook_event_listener(3, a1 + 128);
          clr_module_data((unsigned int)dword_75804);
          sub_48710(*(_QWORD *)(a1 + 624));
          return 0;
        case 2LL:
          v310 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v311 = *(_DWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v311 + 2;
          }
          else
          {
            v311 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v310);
            *(_DWORD *)a3 = v310 + 8;
          }
          *(_DWORD *)(a1 + 184) = *v311;
          v312 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v313 = *(_DWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v313 + 2;
          }
          else
          {
            v313 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v312);
            *(_DWORD *)a3 = v312 + 8;
          }
          if ( !*v313 )
          {
            v451 = sub_3A3B0(*(_DWORD *)(a1 + 184), a2);
            setinf_flag(3, 32, v451);
          }
          sub_1C6C0(a1);
          v13 = (unsigned __int8)getinf_flag(3, 32) == 0;
          v314 = &unk_73A40;
          if ( !v13 )
            v314 = &unk_739E0;
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL) = v314;
          return 0;
        case 3LL:
          sub_3BFE0(a1);
          v345 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v346 = *(unsigned int **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v346 + 2;
          }
          else
          {
            v346 = (unsigned int *)(*(_QWORD *)(a3 + 16) + v345);
            *(_DWORD *)a3 = v345 + 8;
          }
          sub_3B640(a1, *v346, 0);
          return 0;
        case 4LL:
          if ( *(_DWORD *)a3 > 0x2Fu )
            *(_QWORD *)(a3 + 8) += 8LL;
          else
            *(_DWORD *)a3 += 8;
          v329 = *(_QWORD *)(a1 + 16);
          v330 = getinf(5);
          v331 = v330;
          if ( v330 == 2 && get_last_seg() && (*(_BYTE *)(v329 + 9) & 0x20) != 0 )
          {
            if ( (unsigned int)sub_3ADC0(
                                 1u,
                                 (__int64)"HIDECANCEL\n"
                                          "The loaded binary file can be disassembled in two modes:\n"
                                          " 1. 64-bit mode\n"
                                          " 2. 32-bit mode\n"
                                          "Do you want to disassemble it as 64-bit code?") != 1 )
              v331 = 1;
            setinf_flag(3, 4, (_DWORD)v331 == 2);
            for ( j = (_QWORD *)get_first_seg(3, 4, v446); j; j = (_QWORD *)get_next_seg(*j) )
              set_segm_addressing(j, v331);
          }
          sub_3B380(a1);
          if ( *(_BYTE *)(a1 + 388) || (unsigned int)getinf(5) == 2 || (unsigned int)getinf(5) == 5 )
            sub_3AAC0((__int64)&unk_4D620);
          set_default_sreg_value(0, 68, *(_QWORD *)(a1 + 352));
          sub_3B820((_QWORD *)a1);
          sub_3D3E0(a1, 1);
          if ( !*(_BYTE *)(a1 + 388) )
            sub_3A640((int *)(a1 + 260));
          v332 = getinf(8);
          sub_3B640(a1, v332, 1);
          return 0;
        case 5LL:
          goto LABEL_5;
        case 8LL:
          v279 = *(_DWORD *)a3;
          if ( v279 > 0x2F )
          {
            v384 = *(const char ***)(a3 + 8);
            v385 = (unsigned int *)(v384 + 1);
            *(_QWORD *)(a3 + 8) = v384 + 1;
            v282 = *v384;
          }
          else
          {
            v280 = *(_QWORD *)(a3 + 16);
            v281 = v279 + 8;
            *(_DWORD *)a3 = v281;
            v282 = *(const char **)(v280 + v279);
            if ( (unsigned int)v281 <= 0x2F )
            {
              v283 = v279 + 16;
              *(_DWORD *)a3 = v283;
              v284 = *(_DWORD *)(v280 + v281);
              if ( (unsigned int)v283 <= 0x2F )
              {
                v285 = v279 + 24;
                *(_DWORD *)a3 = v285;
                v286 = *(__int64 **)(v280 + v283);
                if ( (unsigned int)v285 <= 0x2F )
                {
                  v287 = v279 + 32;
                  *(_DWORD *)a3 = v287;
                  v288 = *(__int64 **)(v280 + v285);
                  if ( (unsigned int)v287 <= 0x2F )
                  {
                    v289 = (_DWORD *)(v287 + v280);
                    *(_DWORD *)a3 = v279 + 40;
                    goto LABEL_302;
                  }
                  v289 = *(_DWORD **)(a3 + 8);
LABEL_428:
                  *(_QWORD *)(a3 + 8) = v289 + 2;
LABEL_302:
                  v290 = sub_3C510((_QWORD *)a1, v282, v284, v286, *v289 != 0);
                  if ( v290 )
                  {
                    if ( v288 )
                      *v288 = v290;
                    return -1;
                  }
                  return 1;
                }
                v387 = *(_QWORD ***)(a3 + 8);
LABEL_427:
                v289 = v387 + 1;
                *(_QWORD *)(a3 + 8) = v387 + 1;
                v288 = *v387;
                goto LABEL_428;
              }
              v386 = *(__int64 ***)(a3 + 8);
LABEL_426:
              v387 = v386 + 1;
              *(_QWORD *)(a3 + 8) = v386 + 1;
              v286 = *v386;
              goto LABEL_427;
            }
            v385 = *(unsigned int **)(a3 + 8);
          }
          v386 = (__int64 **)(v385 + 2);
          *(_QWORD *)(a3 + 8) = v385 + 2;
          v284 = *v385;
          goto LABEL_426;
        case 10LL:
          v291 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v292 = *(__m128i ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v292 + 1;
          }
          else
          {
            v292 = (__m128i **)(*(_QWORD *)(a3 + 16) + v291);
            *(_DWORD *)a3 = v291 + 8;
          }
          v293 = *v292;
          if ( (unsigned __int8)sub_3BFE0(a1) )
          {
            v450 = getinf(8);
            sub_3B640(a1, v450, 0);
          }
          return (int)sub_27090(a1, v293, 0, a7);
        case 11LL:
          v177 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v178 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v178 + 1;
          }
          else
          {
            v178 = (__int64 *)(*(_QWORD *)(a3 + 16) + v177);
            *(_DWORD *)a3 = v177 + 8;
          }
          if ( !(unsigned int)sub_2E8B0(a1, *v178) )
            return -1;
          return 1;
        case 12LL:
          v179 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v180 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v180 + 1;
          }
          else
          {
            v180 = (__int64 *)(*(_QWORD *)(a3 + 16) + v179);
            *(_DWORD *)a3 = v179 + 8;
          }
          sub_39D60(*v180);
          return 1;
        case 13LL:
          v301 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v302 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v302 + 1;
          }
          else
          {
            v302 = (__int64 *)(*(_QWORD *)(a3 + 16) + v301);
            *(_DWORD *)a3 = v301 + 8;
          }
          sub_39E20(a1, *v302);
          return 1;
        case 14LL:
          v303 = *(_DWORD *)a3;
          if ( v303 > 0x2F )
          {
            v438 = *(__int64 **)(a3 + 8);
            v307 = v438 + 1;
            *(_QWORD *)(a3 + 8) = v438 + 1;
            v306 = *v438;
          }
          else
          {
            v304 = *(_QWORD *)(a3 + 16);
            v305 = v303 + 8;
            *(_DWORD *)a3 = v305;
            v306 = *(_QWORD *)(v304 + v303);
            if ( (unsigned int)v305 <= 0x2F )
            {
              v307 = (__int64 *)(v305 + v304);
              *(_DWORD *)a3 = v303 + 16;
              goto LABEL_324;
            }
            v307 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v307 + 1;
LABEL_324:
          sub_39960(a1, v306, *v307);
          return 1;
        case 15LL:
          v271 = *(_DWORD *)a3;
          if ( v271 > 0x2F )
          {
            v439 = *(_QWORD *)(a3 + 8) + 8LL;
            *(_QWORD *)(a3 + 8) = v439;
          }
          else
          {
            *(_DWORD *)a3 = v271 + 8;
            if ( v271 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v271 + 16;
              goto LABEL_288;
            }
            v439 = *(_QWORD *)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v439 + 8;
LABEL_288:
          nullsub_4();
          return 1;
        case 16LL:
          v341 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v342 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v342 + 1;
          }
          else
          {
            v342 = (__int64 *)(*(_QWORD *)(a3 + 16) + v341);
            *(_DWORD *)a3 = v341 + 8;
          }
          sub_39B60(a1, *v342);
          return 1;
        case 17LL:
          v323 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v324 = *(__int64 ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v324 + 1;
          }
          else
          {
            v324 = (__int64 **)(*(_QWORD *)(a3 + 16) + v323);
            *(_DWORD *)a3 = v323 + 8;
          }
          sub_39950(*v324);
          return 1;
        case 18LL:
          v325 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v326 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v326 + 1;
          }
          else
          {
            v326 = (__int64 *)(*(_QWORD *)(a3 + 16) + v325);
            *(_DWORD *)a3 = v325 + 8;
          }
          sub_39350(*v326);
          return 1;
        case 19LL:
          v164 = *(_DWORD *)a3;
          if ( v164 > 0x2F )
          {
            v411 = *(__m128i ***)(a3 + 8);
            v168 = (unsigned __int8 **)(v411 + 1);
            *(_QWORD *)(a3 + 8) = v411 + 1;
            v167 = *v411;
          }
          else
          {
            v165 = *(_QWORD *)(a3 + 16);
            v166 = v164 + 8;
            *(_DWORD *)a3 = v166;
            v167 = *(__m128i **)(v165 + v164);
            if ( (unsigned int)v166 <= 0x2F )
            {
              v168 = (unsigned __int8 **)(v166 + v165);
              *(_DWORD *)a3 = v164 + 16;
              goto LABEL_175;
            }
            v168 = *(unsigned __int8 ***)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v168 + 1;
LABEL_175:
          if ( !(unsigned __int8)sub_3A3A0(v167, *v168, a7) )
            return -1;
          return 1;
        case 25LL:
          v169 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v170 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v170 + 1;
          }
          else
          {
            v170 = (__int64 *)(*(_QWORD *)(a3 + 16) + v169);
            *(_DWORD *)a3 = v169 + 8;
          }
          v171 = *v170;
          *(_QWORD *)(v171 + 8LL * (67 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = 0;
          *(_QWORD *)(v171 + 8LL * (68 - *(_DWORD *)(*(_QWORD *)(a1 + 16) + 68LL)) + 56) = -1;
          set_selector(*(_QWORD *)(v171 + 48), 0);
          return 0;
        case 28LL:
          v294 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v295 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v295 + 1;
          }
          else
          {
            v295 = (__int64 *)(*(_QWORD *)(a3 + 16) + v294);
            *(_DWORD *)a3 = v294 + 8;
          }
          sub_344B0(a1, *v295);
          return 1;
        case 32LL:
          v296 = *(_DWORD *)a3;
          if ( v296 > 0x2F )
          {
            v432 = *(__int64 **)(a3 + 8);
            v300 = (int *)(v432 + 1);
            *(_QWORD *)(a3 + 8) = v432 + 1;
            v299 = *v432;
          }
          else
          {
            v297 = *(_QWORD *)(a3 + 16);
            v298 = v296 + 8;
            *(_DWORD *)a3 = v298;
            v299 = *(_QWORD *)(v297 + v296);
            if ( (unsigned int)v298 <= 0x2F )
            {
              v300 = (int *)(v298 + v297);
              *(_DWORD *)a3 = v296 + 16;
              goto LABEL_316;
            }
            v300 = *(int **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v300 + 2;
LABEL_316:
          if ( !sub_2E180(a1, v299, *v300) )
            return -1;
          return 1;
        case 33LL:
          v269 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v270 = *(_QWORD *)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v270 + 8;
          }
          else
          {
            v270 = *(_QWORD *)(a3 + 16) + v269;
            *(_DWORD *)a3 = v269 + 8;
          }
          if ( !sub_2D2C0(*(unsigned __int16 *)(*(_QWORD *)v270 + 24LL)) )
            return -1;
          return 1;
        case 34LL:
          v317 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v318 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v318 + 1;
          }
          else
          {
            v318 = (__int64 *)(*(_QWORD *)(a3 + 16) + v317);
            *(_DWORD *)a3 = v317 + 8;
          }
          v319 = *v318;
          v320 = has_insn_feature(*(unsigned __int16 *)(*v318 + 24), 2);
          result = -1;
          if ( !v320 )
            return result;
          v321 = *(_WORD *)(v319 + 24);
          v322 = *(_QWORD *)(v319 + 8) + ((*(_BYTE *)(v319 + 33) & 4) == 0 ? 8LL : 6LL);
          if ( v321 == 203 )
          {
            if ( v322 == *(_QWORD *)(v319 + 56) )
              return result;
            return 1;
          }
          result = 1;
          if ( (v321 & 0xFFF7) != 0x63
            || *(_BYTE *)(v319 + 41) != 1
            || *(_WORD *)(v319 + 46)
            || v322 != *(_QWORD *)(v319 + 96) )
          {
            return result;
          }
          return -1;
        case 36LL:
          v315 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v316 = *(unsigned __int64 ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v316 + 1;
          }
          else
          {
            v316 = (unsigned __int64 **)(*(_QWORD *)(a3 + 16) + v315);
            *(_DWORD *)a3 = v315 + 8;
          }
          return (int)sub_2CF90(a1, *v316, a7);
        case 37LL:
          v333 = *(_DWORD *)a3;
          if ( v333 > 0x2F )
          {
            v433 = *(_QWORD **)(a3 + 8);
            v337 = (int *)(v433 + 1);
            *(_QWORD *)(a3 + 8) = v433 + 1;
            v336 = *v433;
          }
          else
          {
            v334 = *(_QWORD *)(a3 + 16);
            v335 = v333 + 8;
            *(_DWORD *)a3 = v335;
            v336 = *(_QWORD *)(v334 + v333);
            if ( (unsigned int)v335 <= 0x2F )
            {
              v337 = (int *)(v335 + v334);
              *(_DWORD *)a3 = v333 + 16;
              goto LABEL_370;
            }
            v337 = *(int **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v337 + 2;
LABEL_370:
          v338 = *v337;
          v339 = sub_1F160(a1, &src, *(_QWORD *)(v336 + 16), nullptr);
          v340 = v339;
          if ( (unsigned __int8)sub_1E660(a1, v339, (unsigned __int8)src) )
            return 1;
          if ( v338 )
          {
            if ( sub_1E5E0(a1, v340, (char)src) )
              return 1;
            if ( !(unsigned __int8)sub_1E660(a1, *(_WORD *)(v336 + 24), (*(_BYTE *)(v336 + 33) & 4) != 0)
              && !sub_1E5E0(a1, *(unsigned __int16 *)(v336 + 24), (*(_BYTE *)(v336 + 33) & 4) != 0) )
            {
              return 0;
            }
          }
          else if ( !(unsigned __int8)sub_1E660(a1, *(_WORD *)(v336 + 24), (*(_BYTE *)(v336 + 33) & 4) != 0) )
          {
            return 0;
          }
          return -1;
        case 40LL:
          v188 = *(_DWORD *)a3;
          if ( v188 > 0x2F )
          {
            v412 = *(__int64 **)(a3 + 8);
            v192 = v412 + 1;
            *(_QWORD *)(a3 + 8) = v412 + 1;
            v191 = *v412;
          }
          else
          {
            v189 = *(_QWORD *)(a3 + 16);
            v190 = v188 + 8;
            *(_DWORD *)a3 = v190;
            v191 = *(_QWORD *)(v189 + v188);
            if ( (unsigned int)v190 <= 0x2F )
            {
              v192 = (__int64 *)(v190 + v189);
              *(_DWORD *)a3 = v188 + 16;
              goto LABEL_200;
            }
            v192 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v192 + 1;
LABEL_200:
          if ( !(unsigned __int8)sub_32BC0(a1, v191, *v192) )
            return -1;
          return 1;
        case 43LL:
          v308 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v309 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v309 + 1;
          }
          else
          {
            v309 = (__int64 *)(*(_QWORD *)(a3 + 16) + v308);
            *(_DWORD *)a3 = v308 + 8;
          }
          return (int)sub_2E400(a1, *v309);
        case 45LL:
          v193 = *(_DWORD *)a3;
          if ( v193 > 0x2F )
          {
            v413 = *(unsigned __int64 ***)(a3 + 8);
            v414 = (_BYTE **)(v413 + 1);
            *(_QWORD *)(a3 + 8) = v413 + 1;
            v196 = *v413;
          }
          else
          {
            v194 = *(_QWORD *)(a3 + 16);
            v195 = v193 + 8;
            a4 = v193;
            *(_DWORD *)a3 = v195;
            v196 = *(unsigned __int64 **)(v194 + v193);
            if ( (unsigned int)v195 <= 0x2F )
            {
              a4 = v193 + 16;
              *(_DWORD *)a3 = a4;
              v197 = *(_BYTE **)(v194 + v195);
              if ( (unsigned int)a4 <= 0x2F )
              {
                v198 = (_BYTE **)(a4 + v194);
                *(_DWORD *)a3 = v193 + 24;
                goto LABEL_206;
              }
              v198 = *(_BYTE ***)(a3 + 8);
LABEL_484:
              *(_QWORD *)(a3 + 8) = v198 + 1;
LABEL_206:
              v199 = *v198;
              v200 = &v469;
              v466 = -1;
              v465 = -1;
              v467 = 0;
              v468 = 0;
              do
              {
                *(_WORD *)v200 = 0;
                v200 += 40;
                *((_WORD *)v200 - 19) = 0;
                *((_WORD *)v200 - 18) = 0;
                *((_DWORD *)v200 - 2) = 0;
                *((_WORD *)v200 - 17) = 0;
                *((_OWORD *)v200 - 2) = 0;
                *((_QWORD *)v200 - 2) = 0;
              }
              while ( v470 != (_QWORD *)v200 );
              if ( !(unsigned int)decode_insn(&v465, *v196, v470, a4, a5, 0, 0.0) )
                return -1;
              v201 = (v468 & 0x400) != 0;
              v202 = (unsigned __int16)v467;
              if ( (unsigned __int8)sub_1E660(a1, v467, v201) || sub_1E5E0(a1, v202, v201) )
              {
                v203 = sub_1E730(a1, (unsigned __int16)v467, (v468 & 0x400) != 0);
                v204 = v466 + WORD1(v467);
                *v196 = v204;
                v205 = v203;
                if ( !(unsigned int)decode_insn(&v465, v204, v206, v207, v208, v209, 0.0)
                  || sub_2D360((unsigned __int16)v467) )
                {
                  *v196 = -1;
                }
              }
              else
              {
                v453 = sub_1F160(a1, &src, *v196, nullptr);
                v454 = (char)src;
                v455 = v453;
                if ( !(unsigned __int8)sub_1E660(a1, v453, (unsigned __int8)src) && !sub_1E5E0(a1, v455, v454) )
                  return -1;
                v205 = sub_1E730(a1, v455, (char)src);
              }
              *v197 = 1;
              *v199 = v205 ^ 1;
              return 1;
            }
            v414 = *(_BYTE ***)(a3 + 8);
          }
          v198 = v414 + 1;
          *(_QWORD *)(a3 + 8) = v414 + 1;
          v197 = *v414;
          goto LABEL_484;
        case 46LL:
          v210 = *(_DWORD *)a3;
          if ( v210 > 0x2F )
          {
            v409 = *(_DWORD ***)(a3 + 8);
            v410 = (__int64 *)(v409 + 1);
            *(_QWORD *)(a3 + 8) = v409 + 1;
            v213 = *v409;
          }
          else
          {
            v211 = *(_QWORD *)(a3 + 16);
            v212 = v210 + 8;
            *(_DWORD *)a3 = v212;
            v213 = *(_DWORD **)(v211 + v210);
            if ( (unsigned int)v212 <= 0x2F )
            {
              v214 = v210 + 16;
              *(_DWORD *)a3 = v214;
              v215 = *(_QWORD *)(v211 + v212);
              if ( (unsigned int)v214 <= 0x2F )
              {
                v216 = (__int64 *)(v214 + v211);
                *(_DWORD *)a3 = v210 + 24;
                goto LABEL_217;
              }
              v216 = *(__int64 **)(a3 + 8);
LABEL_476:
              *(_QWORD *)(a3 + 8) = v216 + 1;
LABEL_217:
              v217 = *v216;
              *v213 = 0;
              if ( *(_BYTE *)(v217 + 1) == 4 )
              {
                if ( *(_WORD *)(v217 + 6) != 29 )
                {
                  func = get_func(*(_QWORD *)(v215 + 16));
                  if ( !func || (*(_BYTE *)(func + 16) & 0x10) == 0 )
                    return 1;
                  v445 = 30;
                  if ( (*(_BYTE *)(v215 + 33) & 4) != 0 )
                    v445 = 17;
                  if ( *(unsigned __int16 *)(v217 + 6) != v445 )
                    return 1;
LABEL_232:
                  *v213 = 0;
                  return 1;
                }
              }
              else
              {
                if ( *(_WORD *)v217 != 1282 )
                  return 1;
                if ( !sub_2AAC0(*(_WORD *)(v215 + 24)) )
                  return 1;
                v218 = get_func(*(_QWORD *)(v215 + 16));
                v219 = *(unsigned __int16 *)(v215 + 46);
                if ( v219 == 29 )
                  return 1;
                if ( v218 )
                {
                  v220 = *(_QWORD *)(v218 + 16);
                  if ( (v220 & 0x10) != 0 )
                  {
                    v221 = 30;
                    if ( (*(_BYTE *)(v215 + 33) & 4) != 0 )
                      v221 = 17;
                    if ( v219 == v221 )
                      return 1;
                  }
                  if ( *(_BYTE *)(v215 + 81) != 1 )
                  {
                    v222 = *(unsigned __int16 *)(v215 + 86);
LABEL_228:
                    if ( (v220 & 0x10) == 0 )
                      return 1;
                    v223 = 30;
                    if ( (*(_BYTE *)(v215 + 33) & 4) != 0 )
                      v223 = 17;
                    if ( v223 != v222 )
                      return 1;
                    goto LABEL_232;
                  }
                  v222 = *(unsigned __int16 *)(v215 + 86);
                  if ( (_WORD)v222 != 29 )
                    goto LABEL_228;
                }
                else if ( *(_BYTE *)(v215 + 81) != 1 || *(_WORD *)(v215 + 86) != 29 )
                {
                  return 1;
                }
              }
              *v213 = 1;
              return 1;
            }
            v410 = *(__int64 **)(a3 + 8);
          }
          v216 = v410 + 1;
          *(_QWORD *)(a3 + 8) = v410 + 1;
          v215 = *v410;
          goto LABEL_476;
        case 52LL:
          v272 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v273 = *(const char ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v273 + 1;
          }
          else
          {
            v273 = (const char **)(*(_QWORD *)(a3 + 16) + v272);
            *(_DWORD *)a3 = v272 + 8;
          }
          return (int)(sub_2FF30(a1, *v273) + 1);
        case 55LL:
          v274 = *(_DWORD *)a3;
          if ( v274 > 0x2F )
          {
            v435 = *(__int64 ***)(a3 + 8);
            v278 = v435 + 1;
            *(_QWORD *)(a3 + 8) = v435 + 1;
            v277 = *v435;
          }
          else
          {
            v275 = *(_QWORD *)(a3 + 16);
            v276 = v274 + 8;
            *(_DWORD *)a3 = v276;
            v277 = *(__int64 **)(v275 + v274);
            if ( (unsigned int)v276 <= 0x2F )
            {
              v278 = (__int64 **)(v276 + v275);
              *(_DWORD *)a3 = v274 + 16;
              return (unsigned __int8)sub_2CE00(a1, v277, *v278);
            }
            v278 = *(__int64 ***)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v278 + 1;
          return (unsigned __int8)sub_2CE00(a1, v277, *v278);
        case 59LL:
          v327 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v328 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v328 + 1;
          }
          else
          {
            v328 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v327);
            *(_DWORD *)a3 = v327 + 8;
          }
          sub_45950(a1, *v328, 0, a4, a5, a6);
          return 1;
        case 60LL:
          v343 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v344 = *(_DWORD ***)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v344 + 1;
          }
          else
          {
            v344 = (_DWORD **)(*(_QWORD *)(a3 + 16) + v343);
            *(_DWORD *)a3 = v343 + 8;
          }
          **v344 = 0;
          return 1;
        case 63LL:
          v231 = *(_DWORD *)a3;
          if ( v231 > 0x2F )
          {
            v423 = *(__int64 **)(a3 + 8);
            v424 = v423 + 1;
            *(_QWORD *)(a3 + 8) = v423 + 1;
            v234 = *v423;
          }
          else
          {
            v232 = *(_QWORD *)(a3 + 16);
            v233 = v231 + 8;
            *(_DWORD *)a3 = v233;
            v234 = *(_QWORD *)(v232 + v231);
            if ( (unsigned int)v233 <= 0x2F )
            {
              v235 = v231 + 16;
              *(_DWORD *)a3 = v235;
              v236 = *(_QWORD *)(v232 + v233);
              if ( (unsigned int)v235 <= 0x2F )
              {
                v237 = (unsigned int *)(v235 + v232);
                *(_DWORD *)a3 = v231 + 24;
                goto LABEL_245;
              }
              v237 = *(unsigned int **)(a3 + 8);
LABEL_503:
              *(_QWORD *)(a3 + 8) = v237 + 2;
LABEL_245:
              invalidate_regfinder_cache(v236, v234, *v237);
              return 0;
            }
            v424 = *(_QWORD **)(a3 + 8);
          }
          v237 = (unsigned int *)(v424 + 1);
          *(_QWORD *)(a3 + 8) = v424 + 1;
          v236 = *v424;
          goto LABEL_503;
        case 65LL:
          v238 = *(_DWORD *)a3;
          if ( v238 > 0x2F )
          {
            v434 = *(__int64 **)(a3 + 8);
            v242 = v434 + 1;
            *(_QWORD *)(a3 + 8) = v434 + 1;
            v241 = *v434;
          }
          else
          {
            v239 = *(_QWORD *)(a3 + 16);
            v240 = v238 + 8;
            *(_DWORD *)a3 = v240;
            v241 = *(_QWORD *)(v239 + v238);
            if ( (unsigned int)v240 <= 0x2F )
            {
              v242 = (_QWORD *)(v240 + v239);
              *(_DWORD *)a3 = v238 + 16;
              goto LABEL_249;
            }
            v242 = *(_QWORD **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v242 + 1;
LABEL_249:
          invalidate_regfinder_cache(*v242, v241, 0);
          return 0;
        case 80LL:
          v153 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v154 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v154 + 1;
          }
          else
          {
            v154 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v153);
            *(_DWORD *)a3 = v153 + 8;
          }
          v155 = get_func(*v154);
          if ( v155 )
            sub_45950(a1, v155, 1, v156, v157, v158);
          return 1;
        case 81LL:
          v159 = *(_DWORD *)a3;
          if ( v159 > 0x2F )
          {
            v390 = *(_QWORD ***)(a3 + 8);
            v163 = (__int64 *)(v390 + 1);
            *(_QWORD *)(a3 + 8) = v390 + 1;
            v162 = *v390;
          }
          else
          {
            v160 = *(_QWORD *)(a3 + 16);
            v161 = v159 + 8;
            *(_DWORD *)a3 = v161;
            v162 = *(__int64 **)(v160 + v159);
            if ( (unsigned int)v161 <= 0x2F )
            {
              v163 = (__int64 *)(v161 + v160);
              *(_DWORD *)a3 = v159 + 16;
              goto LABEL_171;
            }
            v163 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v163 + 1;
LABEL_171:
          *v162 = sub_2C600(a1, *v163);
          return 1;
        case 82LL:
          v181 = *(_DWORD *)a3;
          if ( v181 > 0x2F )
          {
            v436 = *(__int64 ***)(a3 + 8);
            v437 = v436 + 1;
            *(_QWORD *)(a3 + 8) = v436 + 1;
            v184 = *v436;
          }
          else
          {
            v182 = *(_QWORD *)(a3 + 16);
            v183 = v181 + 8;
            *(_DWORD *)a3 = v183;
            v184 = *(__int64 **)(v182 + v181);
            if ( (unsigned int)v183 <= 0x2F )
            {
              v185 = v181 + 16;
              *(_DWORD *)a3 = v185;
              v186 = *(_QWORD **)(v182 + v183);
              if ( (unsigned int)v185 <= 0x2F )
              {
                v187 = (__int64 *)(v185 + v182);
                *(_DWORD *)a3 = v181 + 24;
                return sub_28700(v184, v186, *v187);
              }
              v187 = *(__int64 **)(a3 + 8);
LABEL_536:
              *(_QWORD *)(a3 + 8) = v187 + 1;
              return sub_28700(v184, v186, *v187);
            }
            v437 = *(_QWORD ***)(a3 + 8);
          }
          v187 = (__int64 *)(v437 + 1);
          *(_QWORD *)(a3 + 8) = v437 + 1;
          v186 = *v437;
          goto LABEL_536;
        case 86LL:
          v9 = sub_3AFA0(*(_QWORD *)(a1 + 16));
          *(_DWORD *)(a1 + 184) = v9;
          v10 = sub_3A3B0(v9, a2);
          setinf_flag(3, 32, v10);
          sub_1C6C0(a1);
          invalidate_regfinder_cache(-1, -1, 0);
LABEL_5:
          sub_3D7E0(a1);
          v11 = *(_QWORD *)(a1 + 152);
          *(_QWORD *)(a1 + 328) = 0;
          netnode_qsupstr(v11, a1 + 320, -1, 83);
          v12 = byte_51ACD;
          if ( *(_QWORD *)(a1 + 328) )
            v12 = *(const char **)(a1 + 320);
          sub_3B130(a1, v12);
          v13 = (unsigned __int8)getinf_flag(3, 32) == 0;
          v14 = &unk_73A40;
          if ( !v13 )
            v14 = &unk_739E0;
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL) = v14;
          sub_3B820((_QWORD *)a1);
          return 0;
        case 87LL:
          v347 = *(_DWORD *)a3;
          if ( v347 > 0x2F )
          {
            v388 = *(_QWORD **)(a3 + 8);
            v351 = v388 + 1;
            *(_QWORD *)(a3 + 8) = v388 + 1;
            v350 = *v388 & 0xFFFFFFFFFFFFFFFELL;
          }
          else
          {
            v348 = *(_QWORD *)(a3 + 16);
            v349 = v347 + 8;
            *(_DWORD *)a3 = v349;
            v350 = *(_QWORD *)(v348 + v347) & 0xFFFFFFFFFFFFFFFELL;
            if ( (unsigned int)v349 <= 0x2F )
            {
              v351 = (_DWORD *)(v349 + v348);
              *(_DWORD *)a3 = v347 + 16;
              goto LABEL_388;
            }
            v351 = *(_DWORD **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v351 + 2;
LABEL_388:
          v352 = *v351 != 0;
          if ( *v351 && !*(_BYTE *)(a1 + 388) )
          {
            *(_BYTE *)(a1 + 388) = 1;
            sub_3A640((int *)(a1 + 260));
            v452 = getinf(8);
            sub_3B640(a1, v452, 1);
          }
          split_sreg_range(v350, 67, v352, 2, 0);
          return 0;
        case 88LL:
          goto LABEL_41;
        case 91LL:
          v172 = *(_DWORD *)a3;
          if ( v172 > 0x2F )
          {
            v431 = *(__int64 ***)(a3 + 8);
            v176 = (__int64 *)(v431 + 1);
            *(_QWORD *)(a3 + 8) = v431 + 1;
            v175 = *v431;
          }
          else
          {
            v173 = *(_QWORD *)(a3 + 16);
            v174 = v172 + 8;
            *(_DWORD *)a3 = v174;
            v175 = *(__int64 **)(v173 + v172);
            if ( (unsigned int)v174 <= 0x2F )
            {
              v176 = (__int64 *)(v174 + v173);
              *(_DWORD *)a3 = v172 + 16;
              goto LABEL_183;
            }
            v176 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v176 + 1;
LABEL_183:
          if ( !v175 )
            return -1;
          sub_34870(a1, v175, *v176);
          return 1;
        case 94LL:
          v267 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v268 = *(_QWORD **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v268 + 1;
          }
          else
          {
            v268 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v267);
            *(_DWORD *)a3 = v267 + 8;
          }
          sub_49260(*v268, a2, (_DWORD)v268, a4, a5, a6);
          return 0;
        case 95LL:
          netnode_check(a1 + 152, "$ mips", 0, 1);
          return 0;
        case 96LL:
          v254 = *(_DWORD *)a3;
          if ( v254 > 0x2F )
          {
            v379 = *(__int64 **)(a3 + 8);
            v380 = v379 + 1;
            *(_QWORD *)(a3 + 8) = v379 + 1;
            v257 = *v379;
          }
          else
          {
            v255 = *(_QWORD *)(a3 + 16);
            v256 = v254 + 8;
            *(_DWORD *)a3 = v256;
            v257 = *(_QWORD *)(v255 + v254);
            if ( (unsigned int)v256 <= 0x2F )
            {
              v258 = v254 + 16;
              *(_DWORD *)a3 = v258;
              v259 = *(_DWORD *)(v255 + v256);
              if ( (unsigned int)v258 <= 0x2F )
              {
                v260 = v254 + 24;
                *(_DWORD *)a3 = v260;
                v261 = *(_QWORD *)(v255 + v258);
                if ( (unsigned int)v260 <= 0x2F )
                {
                  v262 = v254 + 32;
                  *(_DWORD *)a3 = v262;
                  v263 = *(_QWORD *)(v255 + v260);
                  if ( (unsigned int)v262 <= 0x2F )
                  {
                    v264 = v254 + 40;
                    *(_DWORD *)a3 = v264;
                    v265 = *(_DWORD *)(v255 + v262);
                    if ( (unsigned int)v264 <= 0x2F )
                    {
                      v266 = (__int64 **)(v264 + v255);
                      *(_DWORD *)a3 = v254 + 48;
                      return (int)sub_1AEA0(a1, *v266, v257, v259, v261, a7, v263, v265);
                    }
                    v266 = *(__int64 ***)(a3 + 8);
LABEL_421:
                    *(_QWORD *)(a3 + 8) = v266 + 1;
                    return (int)sub_1AEA0(a1, *v266, v257, v259, v261, a7, v263, v265);
                  }
                  v383 = *(_DWORD **)(a3 + 8);
LABEL_420:
                  v266 = (__int64 **)(v383 + 2);
                  *(_QWORD *)(a3 + 8) = v383 + 2;
                  v265 = *v383;
                  goto LABEL_421;
                }
                v382 = *(__int64 **)(a3 + 8);
LABEL_419:
                v383 = v382 + 1;
                *(_QWORD *)(a3 + 8) = v382 + 1;
                v263 = *v382;
                goto LABEL_420;
              }
              v381 = *(__int64 **)(a3 + 8);
LABEL_418:
              v382 = v381 + 1;
              *(_QWORD *)(a3 + 8) = v381 + 1;
              v261 = *v381;
              goto LABEL_419;
            }
            v380 = *(_DWORD **)(a3 + 8);
          }
          v381 = (__int64 *)(v380 + 2);
          *(_QWORD *)(a3 + 8) = v380 + 2;
          v259 = *v380;
          goto LABEL_418;
        case 98LL:
          return *(_QWORD *)(a1 + 624);
        case 100LL:
          v224 = *(_DWORD *)a3;
          if ( v224 > 0x2F )
          {
            v425 = *(_DWORD ***)(a3 + 8);
            v228 = v425 + 1;
            *(_QWORD *)(a3 + 8) = v425 + 1;
            v227 = *v425;
          }
          else
          {
            v225 = *(_QWORD *)(a3 + 16);
            v226 = v224 + 8;
            *(_DWORD *)a3 = v226;
            v227 = *(_DWORD **)(v225 + v224);
            if ( (unsigned int)v226 <= 0x2F )
            {
              v228 = (_DWORD **)(v226 + v225);
              *(_DWORD *)a3 = v224 + 16;
              goto LABEL_237;
            }
            v228 = *(_DWORD ***)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v228 + 1;
LABEL_237:
          v229 = *v228;
          v230 = *((_WORD *)*v228 + 12);
          if ( v230 <= 0x21u )
          {
            if ( v230 <= 0x1Du )
              return 0;
            *v227 = 0;
            if ( *((_BYTE *)v229 + 121) == 5 )
              return 3;
            return 2LL * (*((_BYTE *)v229 + 81) == 5);
          }
          if ( v230 == 204 )
          {
            *v227 = 1;
            return 2LL * (*((_BYTE *)v229 + 81) == 5);
          }
          break;
        default:
          return 0;
      }
    }
    return 0;
  }
  if ( a2 > 3017 )
    return 0;
  if ( a2 <= 2999 )
  {
    if ( a2 > 2020 )
      return 0;
    if ( a2 > 2000 )
    {
      v16 = (_QWORD *)(a2 - 2001);
      switch ( (unsigned __int64)v16 )
      {
        case 0uLL:
          v135 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v420 = *(__int64 ***)(a3 + 8);
            v421 = v420 + 1;
            *(_QWORD *)(a3 + 8) = v420 + 1;
            v458 = *v420;
          }
          else
          {
            v136 = *(_QWORD *)(a3 + 16);
            v137 = v135 + 8;
            *(_DWORD *)a3 = v137;
            v458 = *(__int64 **)(v136 + v135);
            if ( (unsigned int)v137 <= 0x2F )
            {
              *(_DWORD *)a3 = v135 + 16;
              v138 = *(__int64 **)(v136 + v137);
              if ( v135 + 16 <= 0x2F )
              {
                *(_DWORD *)a3 = v135 + 24;
                goto LABEL_152;
              }
              v422 = *(_QWORD ***)(a3 + 8);
LABEL_495:
              *(_QWORD *)(a3 + 8) = v422 + 1;
LABEL_152:
              v139 = &off_73540;
              do
              {
                v140 = *v139;
                v461 = nullptr;
                *(_OWORD *)v462 = 0;
                if ( v140 )
                {
                  v141 = strlen(v140);
                  v142 = v141 + 1;
                  v143 = v141;
                  v461 = (void *)qvector_reserve(&v461, 0, v141 + 1, 1);
                  v462[0] = v142;
                  memmove(v461, v140, v143);
                  *((_BYTE *)v461 + v143) = 0;
                }
                v144 = 0;
                v145 = 0;
                if ( v139[3] )
                {
                  do
                  {
                    v149 = 24 * v145;
                    sub_3D1F0((__int64 *)&v461, (__int64)"-%s", *(const char **)&v139[2][24 * v145]);
                    v150 = v139[2];
                    src = nullptr;
                    *(_OWORD *)n = 0;
                    sub_1ADE0(
                      (__int64 *)&src,
                      (__int64)"%s:%s",
                      *(const char **)&v150[v149],
                      *(const char **)&v150[v149 + 16]);
                    v151 = n[0];
                    v152 = nullptr;
                    if ( n[0] )
                    {
                      v152 = (void *)qalloc_or_throw(n[0]);
                      memcpy(v152, src, v151);
                    }
                    v146 = v138[1];
                    v147 = *v138;
                    if ( v138[2] < (unsigned __int64)(v146 + 1) )
                    {
                      v353 = qvector_reserve(v138, v147, v146 + 1, 24);
                      *v138 = v353;
                      v146 = v138[1];
                      v147 = v353;
                    }
                    v148 = v147 + 24 * v146;
                    *(_QWORD *)v148 = v152;
                    *(__m128i *)(v148 + 8) = _mm_unpacklo_epi64((__m128i)v151, (__m128i)v151);
                    ++v138[1];
                    if ( src )
                    {
                      n[0] = 0;
                      qfree(src);
                    }
                    v145 = ++v144;
                  }
                  while ( v144 < (unsigned __int64)v139[3] );
                }
                v354 = v462[0];
                v355 = nullptr;
                if ( v462[0] )
                {
                  v355 = (void *)qalloc_or_throw(v462[0]);
                  memcpy(v355, v461, v354);
                }
                v356 = v458[1];
                v357 = *v458;
                if ( v458[2] < (unsigned __int64)(v356 + 1) )
                {
                  v360 = qvector_reserve(v458, v357, v356 + 1, 24);
                  *v458 = v360;
                  v356 = v458[1];
                  v357 = v360;
                }
                v358 = v357 + 24 * v356;
                *(_QWORD *)v358 = v355;
                v359 = v461;
                *(__m128i *)(v358 + 8) = _mm_unpacklo_epi64((__m128i)v354, (__m128i)v354);
                ++v458[1];
                if ( v359 )
                {
                  v462[0] = 0;
                  qfree(v359);
                }
                v139 += 4;
              }
              while ( &off_73600 != v139 );
              return 1;
            }
            v421 = *(__int64 ***)(a3 + 8);
          }
          v422 = v421 + 1;
          *(_QWORD *)(a3 + 8) = v421 + 1;
          v138 = *v421;
          goto LABEL_495;
        case 1uLL:
          first_seg = get_first_seg(a1, v16, a3);
          if ( !first_seg )
          {
            sub_3A620(a1, v16, 0);
            goto LABEL_639;
          }
          result = 4;
          if ( *(_BYTE *)(first_seg + 43) == 2 )
            return 8;
          return result;
        case 3uLL:
          v130 = *(_DWORD *)a3;
          if ( v130 > 0x2F )
          {
            v408 = *(int ***)(a3 + 8);
            v134 = (unsigned int *)(v408 + 1);
            *(_QWORD *)(a3 + 8) = v408 + 1;
            v133 = *v408;
          }
          else
          {
            v131 = *(_QWORD *)(a3 + 16);
            v132 = v130 + 8;
            *(_DWORD *)a3 = v132;
            v133 = *(int **)(v131 + v130);
            if ( (unsigned int)v132 <= 0x2F )
            {
              v134 = (unsigned int *)(v132 + v131);
              *(_DWORD *)a3 = v130 + 16;
              return sub_34520(a1, v133, *v134);
            }
            v134 = *(unsigned int **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v134 + 2;
          return sub_34520(a1, v133, *v134);
        case 7uLL:
          v124 = *(_DWORD *)a3;
          if ( v124 > 0x2F )
          {
            v405 = *(int ***)(a3 + 8);
            v406 = (_QWORD **)(v405 + 1);
            *(_QWORD *)(a3 + 8) = v405 + 1;
            v127 = *v405;
          }
          else
          {
            v125 = *(_QWORD *)(a3 + 16);
            v126 = v124 + 8;
            *(_DWORD *)a3 = v126;
            v127 = *(int **)(v125 + v124);
            if ( (unsigned int)v126 <= 0x2F )
            {
              *(_DWORD *)a3 = v124 + 16;
              v128 = *(_QWORD **)(v125 + v126);
              if ( v124 + 16 <= 0x2F )
              {
                *(_DWORD *)a3 = v124 + 24;
                goto LABEL_139;
              }
              v407 = *(_QWORD ***)(a3 + 8);
LABEL_471:
              *(_QWORD *)(a3 + 8) = v407 + 1;
LABEL_139:
              if ( !sub_367C0(a1, v127, v128) )
                return -1;
              return 1;
            }
            v406 = *(_QWORD ***)(a3 + 8);
          }
          v407 = v406 + 1;
          *(_QWORD *)(a3 + 8) = v406 + 1;
          v128 = *v406;
          goto LABEL_471;
        case 8uLL:
          v122 = *(_DWORD *)a3;
          if ( *(_DWORD *)a3 > 0x2Fu )
          {
            v123 = *(__int64 **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v123 + 1;
          }
          else
          {
            v123 = (__int64 *)(*(_QWORD *)(a3 + 16) + v122);
            *(_DWORD *)a3 = v122 + 8;
          }
          if ( !sub_37DB0(a1, *v123) )
            return -1;
          return 1;
        case 9uLL:
          v115 = *(_DWORD *)a3;
          if ( v115 > 0x2F )
          {
            v415 = *(__int64 **)(a3 + 8);
            v416 = v415 + 1;
            *(_QWORD *)(a3 + 8) = v415 + 1;
            v118 = *v415;
          }
          else
          {
            v116 = *(_QWORD *)(a3 + 16);
            v117 = v115 + 8;
            *(_DWORD *)a3 = v117;
            v118 = *(_QWORD *)(v116 + v115);
            if ( (unsigned int)v117 <= 0x2F )
            {
              *(_DWORD *)a3 = v115 + 16;
              v119 = *(_QWORD *)(v116 + v117);
              if ( v115 + 16 <= 0x2F )
              {
                v120 = v115 + 24;
                *(_DWORD *)a3 = v120;
                if ( (unsigned int)v120 <= 0x2F )
                {
                  v121 = (int *)(v120 + v116);
                  *(_DWORD *)a3 = v115 + 32;
                  goto LABEL_129;
                }
                v121 = *(int **)(a3 + 8);
LABEL_488:
                *(_QWORD *)(a3 + 8) = v121 + 2;
LABEL_129:
                if ( !sub_37DC0(a1, v118, v119, *v121) )
                  return -1;
                return 1;
              }
              v417 = *(__int64 **)(a3 + 8);
LABEL_487:
              v121 = (int *)(v417 + 1);
              goto LABEL_488;
            }
            v416 = *(__int64 **)(a3 + 8);
          }
          v417 = v416 + 1;
          *(_QWORD *)(a3 + 8) = v416 + 1;
          v119 = *v416;
          goto LABEL_487;
        case 0xAuLL:
          v109 = *(_DWORD *)a3;
          if ( v109 > 0x2F )
          {
            v418 = *(int ***)(a3 + 8);
            v419 = (_QWORD **)(v418 + 1);
            *(_QWORD *)(a3 + 8) = v418 + 1;
            v112 = *v418;
          }
          else
          {
            v110 = *(_QWORD *)(a3 + 16);
            v111 = v109 + 8;
            *(_DWORD *)a3 = v111;
            v112 = *(int **)(v110 + v109);
            if ( (unsigned int)v111 <= 0x2F )
            {
              v113 = v109 + 16;
              *(_DWORD *)a3 = v113;
              v16 = *(_QWORD **)(v110 + v111);
              if ( (unsigned int)v113 <= 0x2F )
              {
                v114 = (int *)(v113 + v110);
                *(_DWORD *)a3 = v109 + 24;
                goto LABEL_122;
              }
LABEL_639:
              v114 = *(int **)(a3 + 8);
LABEL_491:
              *(_QWORD *)(a3 + 8) = v114 + 2;
LABEL_122:
              if ( !(unsigned __int8)sub_32C00((int *)(a1 + 120), v112, v16, *v114) )
                return -1;
              return 1;
            }
            v419 = *(_QWORD ***)(a3 + 8);
          }
          v114 = (int *)(v419 + 1);
          *(_QWORD *)(a3 + 8) = v419 + 1;
          v16 = *v419;
          goto LABEL_491;
        case 0xBuLL:
          v103 = *(_DWORD *)a3;
          if ( v103 > 0x2F )
          {
            v404 = *(__int64 ***)(a3 + 8);
            v107 = (__int64 *)(v404 + 1);
            *(_QWORD *)(a3 + 8) = v404 + 1;
            v106 = *v404;
          }
          else
          {
            v104 = *(_QWORD *)(a3 + 16);
            v105 = v103 + 8;
            *(_DWORD *)a3 = v105;
            v106 = *(__int64 **)(v104 + v103);
            if ( (unsigned int)v105 <= 0x2F )
            {
              v107 = (__int64 *)(v105 + v104);
              *(_DWORD *)a3 = v103 + 16;
              goto LABEL_115;
            }
            v107 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v107 + 1;
LABEL_115:
          v108 = *v107;
          if ( (unsigned __int8)sub_3BFE0(a1) )
          {
            v449 = getinf(8);
            sub_3B640(a1, v449, 0);
          }
          sub_376C0(a1, v106, v108);
          return 1;
        case 0xEuLL:
          v88 = *(_DWORD *)a3;
          if ( v88 > 0x2F )
          {
            v402 = *(_DWORD ***)(a3 + 8);
            v403 = (__int64 *)(v402 + 1);
            *(_QWORD *)(a3 + 8) = v402 + 1;
            v91 = *v402;
          }
          else
          {
            v89 = *(_QWORD *)(a3 + 16);
            v90 = v88 + 8;
            *(_DWORD *)a3 = v90;
            v91 = *(_DWORD **)(v89 + v88);
            if ( (unsigned int)v90 <= 0x2F )
            {
              v92 = v88 + 16;
              *(_DWORD *)a3 = v92;
              v93 = *(_QWORD *)(v89 + v90);
              if ( (unsigned int)v92 <= 0x2F )
              {
                v94 = (_QWORD **)(v92 + v89);
                *(_DWORD *)a3 = v88 + 24;
                goto LABEL_99;
              }
              v94 = *(_QWORD ***)(a3 + 8);
LABEL_465:
              *(_QWORD *)(a3 + 8) = v94 + 1;
LABEL_99:
              *v91 = sub_34140(a1, v93, *v94);
              return 1;
            }
            v403 = *(__int64 **)(a3 + 8);
          }
          v94 = (_QWORD **)(v403 + 1);
          *(_QWORD *)(a3 + 8) = v403 + 1;
          v93 = *v403;
          goto LABEL_465;
        case 0xFuLL:
          v87 = *(_DWORD *)a3;
          if ( v87 > 0x2F )
          {
            v395 = *(_QWORD *)(a3 + 8) + 8LL;
            *(_QWORD *)(a3 + 8) = v395;
          }
          else
          {
            *(_DWORD *)a3 = v87 + 8;
            if ( v87 + 8 <= 0x2F )
            {
              *(_DWORD *)a3 = v87 + 16;
              if ( v87 + 16 <= 0x2F )
              {
                *(_DWORD *)a3 = v87 + 24;
                goto LABEL_94;
              }
              v396 = *(_QWORD *)(a3 + 8);
LABEL_456:
              *(_QWORD *)(a3 + 8) = v396 + 8;
LABEL_94:
              sub_340C0(a1);
              return 1;
            }
            v395 = *(_QWORD *)(a3 + 8);
          }
          v396 = v395 + 8;
          *(_QWORD *)(a3 + 8) = v395 + 8;
          goto LABEL_456;
        case 0x13uLL:
          v95 = *(_DWORD *)a3;
          if ( v95 > 0x2F )
          {
            v391 = *(_QWORD **)(a3 + 8);
            v99 = (int *)(v391 + 1);
            *(_QWORD *)(a3 + 8) = v391 + 1;
            v98 = *v391;
            goto LABEL_445;
          }
          v96 = *(_QWORD *)(a3 + 16);
          v97 = v95 + 8;
          *(_DWORD *)a3 = v97;
          v98 = *(_QWORD *)(v96 + v95);
          if ( (unsigned int)v97 <= 0x2F )
          {
            v99 = (int *)(v97 + v96);
            *(_DWORD *)a3 = v95 + 16;
            goto LABEL_103;
          }
          while ( 2 )
          {
            v99 = *(int **)(a3 + 8);
LABEL_445:
            *(_QWORD *)(a3 + 8) = v99 + 2;
LABEL_103:
            v100 = *(_DWORD *)(a1 + 120);
            v101 = *v99;
            if ( v100 > 5 )
              goto LABEL_602;
            if ( ((1LL << v100) & 0x29) != 0 )
            {
              v102 = 4;
            }
            else
            {
              if ( ((1LL << v100) & 0x16) == 0 )
              {
LABEL_602:
                if ( under_debugger )
                  BUG();
                interr(10339);
                continue;
              }
              v102 = 8;
            }
            break;
          }
          if ( v101 == 176 || v101 == 256 )
            goto LABEL_111;
          if ( (v100 & 0xFFFFFFFB) == 0 )
          {
            v102 = (-(__int64)(v100 < 3) & 0xFFFFFFFFFFFFFFF0LL) + 32;
LABEL_111:
            *(_QWORD *)(v98 + 8) = v102;
          }
          return 1;
        default:
          return 0;
      }
    }
    if ( a2 != 1007 )
    {
      if ( a2 <= 1007 )
      {
        if ( a2 != 1000 )
        {
          if ( a2 != 1001 )
            return 0;
          v17 = *(_DWORD *)a3;
          if ( v17 > 0x2F )
          {
            v389 = *(_QWORD ***)(a3 + 8);
            v21 = (__int64 *)(v389 + 1);
            *(_QWORD *)(a3 + 8) = v389 + 1;
            v20 = *v389;
          }
          else
          {
            v18 = *(_QWORD *)(a3 + 16);
            v19 = v17 + 8;
            *(_DWORD *)a3 = v19;
            v20 = *(__int64 **)(v18 + v17);
            if ( (unsigned int)v19 <= 0x2F )
            {
              v21 = (__int64 *)(v19 + v18);
              *(_DWORD *)a3 = v17 + 16;
LABEL_25:
              *v20 = sub_2FA00(a1, *v21);
              return 1;
            }
            v21 = *(__int64 **)(a3 + 8);
          }
          *(_QWORD *)(a3 + 8) = v21 + 1;
          goto LABEL_25;
        }
        v368 = *(_DWORD *)a3;
        if ( v368 > 0x2F )
        {
          v440 = *(_QWORD ***)(a3 + 8);
          v441 = (unsigned __int64 *)(v440 + 1);
          *(_QWORD *)(a3 + 8) = v440 + 1;
          v371 = *v440;
        }
        else
        {
          v369 = *(_QWORD *)(a3 + 16);
          v370 = v368 + 8;
          *(_DWORD *)a3 = v370;
          v371 = *(__int64 **)(v369 + v368);
          if ( (unsigned int)v370 <= 0x2F )
          {
            v372 = v368 + 16;
            *(_DWORD *)a3 = v372;
            v373 = *(_QWORD *)(v369 + v370);
            if ( (unsigned int)v372 <= 0x2F )
            {
              v374 = v368 + 24;
              *(_DWORD *)a3 = v374;
              v375 = *(unsigned int *)(v369 + v372);
              if ( (unsigned int)v374 <= 0x2F )
              {
                v376 = v368 + 32;
                *(_DWORD *)a3 = v376;
                v377 = *(__int64 (__fastcall **)(const char *, __int64))(v369 + v374);
                if ( (unsigned int)v376 <= 0x2F )
                {
                  v378 = (__int64 *)(v376 + v369);
                  *(_DWORD *)a3 = v368 + 40;
LABEL_414:
                  *v371 = sub_2F440(a1, v373, v375, v377, *v378, v375);
                  return 1;
                }
                v378 = *(__int64 **)(a3 + 8);
LABEL_548:
                *(_QWORD *)(a3 + 8) = v378 + 1;
                goto LABEL_414;
              }
              v443 = *(__int64 (__fastcall ***)(const char *, __int64))(a3 + 8);
LABEL_547:
              v378 = (__int64 *)(v443 + 1);
              *(_QWORD *)(a3 + 8) = v443 + 1;
              v377 = *v443;
              goto LABEL_548;
            }
            v442 = *(unsigned int **)(a3 + 8);
LABEL_546:
            v443 = (__int64 (__fastcall **)(const char *, __int64))(v442 + 2);
            *(_QWORD *)(a3 + 8) = v442 + 2;
            v375 = *v442;
            goto LABEL_547;
          }
          v441 = *(unsigned __int64 **)(a3 + 8);
        }
        v442 = (unsigned int *)(v441 + 1);
        *(_QWORD *)(a3 + 8) = v441 + 1;
        v373 = *v441;
        goto LABEL_546;
      }
      if ( a2 != 1008 || (unsigned int)(*(_DWORD *)(a1 + 120) - 1) > 1 )
        return 0;
      v361 = *(_DWORD *)a3;
      if ( v361 > 0x2F )
      {
        v456 = *(_QWORD ***)(a3 + 8);
        v457 = (_WORD **)(v456 + 1);
        *(_QWORD *)(a3 + 8) = v456 + 1;
        v364 = *v456;
      }
      else
      {
        v362 = *(_QWORD *)(a3 + 16);
        v363 = v361 + 8;
        *(_DWORD *)a3 = v363;
        v364 = *(_QWORD **)(v362 + v361);
        if ( (unsigned int)v363 <= 0x2F )
        {
          v365 = v361 + 16;
          *(_DWORD *)a3 = v365;
          v366 = *(_WORD **)(v362 + v363);
          if ( (unsigned int)v365 <= 0x2F )
          {
            v367 = (const char **)(v365 + v362);
            *(_DWORD *)a3 = v361 + 24;
            goto LABEL_406;
          }
          v367 = *(const char ***)(a3 + 8);
LABEL_573:
          *(_QWORD *)(a3 + 8) = v367 + 1;
LABEL_406:
          if ( (unsigned __int8)sub_2FFD0(a1, v364, v366, *v367) )
            return 1;
          return -1;
        }
        v457 = *(_WORD ***)(a3 + 8);
      }
      v367 = (const char **)(v457 + 1);
      *(_QWORD *)(a3 + 8) = v457 + 1;
      v366 = *v457;
      goto LABEL_573;
    }
    v22 = *(_DWORD *)a3;
    if ( v22 > 0x2F )
    {
      v397 = *(__int64 **)(a3 + 8);
      v398 = v397 + 1;
      *(_QWORD *)(a3 + 8) = v397 + 1;
      v25 = *v397;
    }
    else
    {
      v23 = *(_QWORD *)(a3 + 16);
      v24 = v22 + 8;
      *(_DWORD *)a3 = v24;
      v25 = *(_QWORD *)(v23 + v22);
      if ( (unsigned int)v24 <= 0x2F )
      {
        v26 = v22 + 16;
        *(_DWORD *)a3 = v26;
        v27 = *(_QWORD *)(v23 + v24);
        if ( (unsigned int)v26 <= 0x2F )
        {
          v28 = v22 + 24;
          *(_DWORD *)a3 = v28;
          v29 = *(_DWORD *)(v23 + v26);
          if ( (unsigned int)v28 <= 0x2F )
          {
            v30 = v22 + 32;
            *(_DWORD *)a3 = v30;
            v31 = *(unsigned int *)(v23 + v28);
            if ( (unsigned int)v30 <= 0x2F )
            {
              v32 = v22 + 40;
              *(_DWORD *)a3 = v32;
              v33 = *(__int64 (__fastcall **)(_BYTE *, __int64))(v23 + v30);
              if ( (unsigned int)v32 <= 0x2F )
              {
                v34 = (__int64 *)(v32 + v23);
                *(_DWORD *)a3 = v22 + 48;
                return (unsigned __int8)sub_2FC00(a1, v25, v27, v29, v31, v33, *v34);
              }
              v34 = *(__int64 **)(a3 + 8);
LABEL_462:
              *(_QWORD *)(a3 + 8) = v34 + 1;
              return (unsigned __int8)sub_2FC00(a1, v25, v27, v29, v31, v33, *v34);
            }
            v401 = *(__int64 (__fastcall ***)(_BYTE *, __int64))(a3 + 8);
LABEL_461:
            v34 = (__int64 *)(v401 + 1);
            *(_QWORD *)(a3 + 8) = v401 + 1;
            v33 = *v401;
            goto LABEL_462;
          }
          v400 = *(unsigned int **)(a3 + 8);
LABEL_460:
          v401 = (__int64 (__fastcall **)(_BYTE *, __int64))(v400 + 2);
          *(_QWORD *)(a3 + 8) = v400 + 2;
          v31 = *v400;
          goto LABEL_461;
        }
        v399 = *(unsigned int **)(a3 + 8);
LABEL_459:
        v400 = v399 + 2;
        *(_QWORD *)(a3 + 8) = v399 + 2;
        v29 = *v399;
        goto LABEL_460;
      }
      v398 = *(__int64 **)(a3 + 8);
    }
    v399 = (unsigned int *)(v398 + 1);
    *(_QWORD *)(a3 + 8) = v398 + 1;
    v27 = *v398;
    goto LABEL_459;
  }
  switch ( a2 )
  {
    case 3000LL:
      v43 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v44 = *(const char ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v44 + 1;
      }
      else
      {
        v44 = (const char **)(*(_QWORD *)(a3 + 16) + v43);
        *(_DWORD *)a3 = v43 + 8;
      }
      v45 = *v44;
      netnode_supset(*(_QWORD *)(a1 + 152), -1, *v44, 0, 83);
      sub_3B130(a1, v45);
      return 0;
    case 3001LL:
      if ( !*(_BYTE *)(a1 + 388) )
      {
        *(_BYTE *)(a1 + 388) = 1;
        sub_3A640((int *)(a1 + 260));
        v448 = getinf(8);
        sub_3B640(a1, v448, 1);
      }
      v49 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v50 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v50 + 1;
      }
      else
      {
        v50 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v49);
        *(_DWORD *)a3 = v49 + 8;
      }
      split_sreg_range(*v50 & 0xFFFFFFFFFFFFFFFELL, 67, 1, 2, 0);
      return 0;
    case 3002LL:
      v41 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v42 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v42 + 1;
      }
      else
      {
        v42 = (__int64 *)(*(_QWORD *)(a3 + 16) + v41);
        *(_DWORD *)a3 = v41 + 8;
      }
      sub_3B440((_QWORD *)a1, *v42, 1);
      return 1;
    case 3003LL:
      v85 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v86 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v86 + 1;
      }
      else
      {
        v86 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v85);
        *(_DWORD *)a3 = v85 + 8;
      }
      split_sreg_range(*v86 & 0xFFFFFFFFFFFFFFFELL, 67, 0, 2, 0);
      return 0;
    case 3004LL:
LABEL_41:
      v39 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v40 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v40 + 1;
      }
      else
      {
        v40 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v39);
        *(_DWORD *)a3 = v39 + 8;
      }
      return get_sreg(*v40 & 0xFFFFFFFFFFFFFFFELL, 67) != 0;
    case 3005LL:
      v75 = *(_DWORD *)a3;
      if ( v75 > 0x2F )
      {
        v427 = *(__int64 **)(a3 + 8);
        v79 = v427 + 1;
        *(_QWORD *)(a3 + 8) = v427 + 1;
        v78 = *v427;
      }
      else
      {
        v76 = *(_QWORD *)(a3 + 16);
        v77 = v75 + 8;
        *(_DWORD *)a3 = v77;
        v78 = *(_QWORD *)(v76 + v75);
        if ( (unsigned int)v77 <= 0x2F )
        {
          v79 = (_QWORD *)(v77 + v76);
          *(_DWORD *)a3 = v75 + 16;
          return (unsigned __int8)sub_43930(v78, a1, *v79);
        }
        v79 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v79 + 1;
      return (unsigned __int8)sub_43930(v78, a1, *v79);
    case 3006LL:
      v80 = *(_DWORD *)a3;
      if ( v80 > 0x2F )
      {
        v430 = *(__int64 **)(a3 + 8);
        v84 = v430 + 1;
        *(_QWORD *)(a3 + 8) = v430 + 1;
        v83 = *v430;
      }
      else
      {
        v81 = *(_QWORD *)(a3 + 16);
        v82 = v80 + 8;
        *(_DWORD *)a3 = v82;
        v83 = *(_QWORD *)(v81 + v80);
        if ( (unsigned int)v82 <= 0x2F )
        {
          v84 = (_QWORD *)(v82 + v81);
          *(_DWORD *)a3 = v80 + 16;
          goto LABEL_83;
        }
        v84 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v84 + 1;
LABEL_83:
      sub_438A0(*v84, a1, v83);
      return 1;
    case 3007LL:
      v51 = *(_DWORD *)a3;
      if ( v51 > 0x2F )
      {
        v393 = *(__int64 **)(a3 + 8);
        v394 = v393 + 1;
        *(_QWORD *)(a3 + 8) = v393 + 1;
        v54 = *v393;
      }
      else
      {
        v52 = *(_QWORD *)(a3 + 16);
        v53 = v51 + 8;
        *(_DWORD *)a3 = v53;
        v54 = *(_QWORD *)(v52 + v51);
        if ( (unsigned int)v53 <= 0x2F )
        {
          v55 = v51 + 16;
          *(_DWORD *)a3 = v55;
          v56 = *(_QWORD *)(v52 + v53);
          if ( (unsigned int)v55 <= 0x2F )
          {
            v57 = (_QWORD *)(v55 + v52);
            *(_DWORD *)a3 = v51 + 24;
            goto LABEL_62;
          }
          v57 = *(_QWORD **)(a3 + 8);
LABEL_452:
          *(_QWORD *)(a3 + 8) = v57 + 1;
LABEL_62:
          sub_43550(*v57, v54, v56);
          return 1;
        }
        v394 = *(__int64 **)(a3 + 8);
      }
      v57 = v394 + 1;
      *(_QWORD *)(a3 + 8) = v394 + 1;
      v56 = *v394;
      goto LABEL_452;
    case 3008LL:
      v58 = *(_DWORD *)a3;
      if ( v58 > 0x2F )
      {
        v428 = *(__int64 **)(a3 + 8);
        v429 = v428 + 1;
        *(_QWORD *)(a3 + 8) = v428 + 1;
        v61 = *v428;
LABEL_515:
        v64 = v429 + 1;
        *(_QWORD *)(a3 + 8) = v429 + 1;
        v63 = *v429;
        goto LABEL_516;
      }
      v59 = *(_QWORD *)(a3 + 16);
      v60 = v58 + 8;
      *(_DWORD *)a3 = v60;
      v61 = *(_QWORD *)(v59 + v58);
      if ( (unsigned int)v60 > 0x2F )
      {
        v429 = *(__int64 **)(a3 + 8);
        goto LABEL_515;
      }
      v62 = v58 + 16;
      *(_DWORD *)a3 = v62;
      v63 = *(_QWORD *)(v59 + v60);
      if ( (unsigned int)v62 <= 0x2F )
      {
        v64 = (_QWORD *)(v62 + v59);
        *(_DWORD *)a3 = v58 + 24;
        return (unsigned __int8)sub_43700(v61, v63, *v64);
      }
      v64 = *(_QWORD **)(a3 + 8);
LABEL_516:
      *(_QWORD *)(a3 + 8) = v64 + 1;
      return (unsigned __int8)sub_43700(v61, v63, *v64);
    case 3009LL:
      return *(unsigned int *)(a1 + 120);
    case 3010LL:
      return *(_DWORD *)(a1 + 256) & 1;
    case 3012LL:
      v46 = *(_DWORD *)a3;
      v47 = *(_QWORD *)(a1 + 352);
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v48 = *(_QWORD ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v48 + 1;
      }
      else
      {
        v48 = (_QWORD **)(*(_QWORD *)(a3 + 16) + v46);
        *(_DWORD *)a3 = v46 + 8;
      }
      **v48 = v47;
      return 1;
    case 3013LL:
      v70 = *(_DWORD *)a3;
      if ( v70 > 0x2F )
      {
        v426 = *(__int64 **)(a3 + 8);
        v74 = v426 + 1;
        *(_QWORD *)(a3 + 8) = v426 + 1;
        v73 = *v426;
      }
      else
      {
        v71 = *(_QWORD *)(a3 + 16);
        v72 = v70 + 8;
        *(_DWORD *)a3 = v72;
        v73 = *(_QWORD *)(v71 + v70);
        if ( (unsigned int)v72 <= 0x2F )
        {
          v74 = (_QWORD *)(v72 + v71);
          *(_DWORD *)a3 = v70 + 16;
          goto LABEL_75;
        }
        v74 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v74 + 1;
LABEL_75:
      split_sreg_range(v73, 68, *v74, 3, 0);
      return 1;
    case 3014LL:
      v65 = *(_DWORD *)a3;
      if ( v65 > 0x2F )
      {
        v392 = *(_QWORD ***)(a3 + 8);
        v69 = v392 + 1;
        *(_QWORD *)(a3 + 8) = v392 + 1;
        v68 = *v392;
      }
      else
      {
        v66 = *(_QWORD *)(a3 + 16);
        v67 = v65 + 8;
        *(_DWORD *)a3 = v67;
        v68 = *(_QWORD **)(v66 + v65);
        if ( (unsigned int)v67 <= 0x2F )
        {
          v69 = (_QWORD *)(v67 + v66);
          *(_DWORD *)a3 = v65 + 16;
          goto LABEL_71;
        }
        v69 = *(_QWORD **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v69 + 1;
LABEL_71:
      *v68 = get_sreg(*v69, 68);
      return 1;
    case 3015LL:
      return *(unsigned int *)(a1 + 260);
    case 3016LL:
      v35 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v36 = *(_QWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v36 + 1;
      }
      else
      {
        v36 = (_QWORD *)(*(_QWORD *)(a3 + 16) + v35);
        *(_DWORD *)a3 = v35 + 8;
      }
      *(_QWORD *)(a1 + 376) = *v36;
      return 1;
    case 3017LL:
      v37 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v38 = *(_DWORD **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v38 + 2;
      }
      else
      {
        v38 = (_DWORD *)(*(_QWORD *)(a3 + 16) + v37);
        *(_DWORD *)a3 = v37 + 8;
      }
      *(_DWORD *)(a1 + 384) = *v38;
      return 1;
    default:
      return 0;
  }
}
