__int64 __fastcall sub_BA46A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char **exception; // rbx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  _DWORD *v13; // rbp
  unsigned __int64 *v14; // rax
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // esi
  unsigned int v20; // eax
  unsigned int v21; // esi
  unsigned int v22; // edi
  unsigned int ii; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // r12
  __int64 v27; // rax
  _BYTE **v29; // rdi
  _BYTE **v30; // rax
  _BYTE *v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  _BYTE *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rax
  _BYTE *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rax
  _BYTE *v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rcx
  __int64 v61; // rax
  _BYTE *v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rcx
  __int64 v70; // rax
  _BYTE *v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rax
  _BYTE *v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rcx
  __int64 v88; // rax
  _BYTE *v89; // rax
  unsigned int v90; // edi
  unsigned int v91; // esi
  unsigned int n; // eax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rax
  unsigned int v96; // eax
  __int64 v97; // rdx
  int v98; // ecx
  __int64 v99; // rcx
  __int64 v100; // rax
  _QWORD *v101; // rsi
  unsigned int v102; // eax
  __int64 v103; // rdi
  unsigned int v104; // edx
  unsigned int v105; // eax
  __int64 v106; // rax
  _QWORD *v107; // rsi
  unsigned int v108; // eax
  __int64 v109; // rdi
  unsigned int v110; // edx
  unsigned int v111; // eax
  unsigned int v112; // edi
  __int64 v113; // r8
  __int64 v114; // rsi
  unsigned int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  unsigned int v118; // eax
  __int64 v119; // rdi
  unsigned int v120; // edx
  unsigned int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rcx
  unsigned __int64 v124; // rax
  __int64 v125; // rdx
  unsigned int v126; // r14d
  unsigned int v127; // eax
  int *v128; // r10
  __int64 v129; // rdi
  __int64 v130; // rdx
  int v131; // esi
  __int64 v132; // rcx
  unsigned __int64 v133; // rdx
  __int64 v134; // rdx
  __int64 v135; // rdx
  unsigned __int64 v136; // rdx
  __int64 v137; // rsi
  __int64 v138; // rdx
  __int64 v139; // rax
  bool v140; // zf
  __int64 v141; // rsi
  _QWORD *v142; // rax
  unsigned int v143; // eax
  __int64 v144; // rax
  __int64 v145; // rdx
  unsigned int v146; // r14d
  __int64 v147; // rdx
  __int64 v148; // rax
  __int64 v149; // rsi
  _QWORD *v150; // rax
  unsigned int v151; // eax
  __int64 v152; // rax
  unsigned int v153; // r14d
  __int64 v154; // rdx
  __int64 v155; // rax
  __int64 v156; // rsi
  _QWORD *v157; // rax
  unsigned int v158; // eax
  __int64 v159; // rax
  unsigned int v160; // r14d
  __int64 v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rsi
  _QWORD *v164; // rax
  unsigned int v165; // eax
  __int64 v166; // rax
  unsigned int v167; // r14d
  __int64 v168; // rdx
  __int64 v169; // rax
  _QWORD *v170; // rax
  unsigned int v171; // eax
  __int64 v172; // rax
  unsigned int v173; // r14d
  __int64 v174; // rdx
  __int64 v175; // rax
  __int64 v176; // rsi
  _QWORD *v177; // rax
  unsigned int v178; // eax
  __int64 v179; // rax
  unsigned int v180; // r14d
  __int64 v181; // rdx
  __int64 *v182; // rdx
  __int64 v183; // rax
  __int64 *v184; // rdx
  __int64 v185; // rax
  __int64 *v186; // rdx
  __int64 v187; // rax
  __int64 *v188; // rax
  __int64 v189; // rdx
  __int64 *v190; // rsi
  __int64 v191; // rax
  __int64 v192; // rdi
  __int64 i; // rax
  __int64 v194; // rcx
  int v195; // eax
  __int64 v196; // rax
  int v197; // eax
  _BYTE *v198; // rax
  unsigned int v199; // edx
  __int64 v200; // rsi
  __int64 v201; // rcx
  int v202; // edi
  int v203; // edi
  __int64 v204; // rcx
  int v205; // eax
  __int64 v206; // rax
  int v207; // eax
  _BYTE *v208; // rax
  unsigned int v209; // edx
  __int64 v210; // rsi
  __int64 v211; // rcx
  int v212; // edi
  int v213; // edi
  __int64 v214; // rdi
  __int64 v215; // rcx
  __int64 v216; // rax
  __int64 v217; // rdx
  __int64 v218; // rcx
  int v219; // eax
  __int64 v220; // rax
  int v221; // eax
  _BYTE *v222; // rax
  unsigned int v223; // edx
  __int64 v224; // rsi
  __int64 v225; // rcx
  int v226; // edi
  int v227; // edi
  __int64 v228; // rdi
  __int64 v229; // rcx
  __int64 v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rcx
  int v233; // eax
  __int64 v234; // rax
  int v235; // eax
  _BYTE *v236; // rax
  unsigned int v237; // edx
  __int64 v238; // rsi
  __int64 v239; // rcx
  int v240; // edi
  int v241; // edi
  __int64 v242; // rdi
  __int64 v243; // rcx
  __int64 v244; // rax
  __int64 v245; // rdx
  __int64 v246; // rcx
  int v247; // eax
  __int64 v248; // rax
  int v249; // eax
  _BYTE *v250; // rax
  unsigned int v251; // edx
  __int64 v252; // rsi
  __int64 v253; // rcx
  int v254; // edi
  int v255; // edi
  __int64 v256; // rdi
  __int64 v257; // rcx
  __int64 v258; // rax
  __int64 v259; // rdx
  __int64 v260; // rcx
  int v261; // eax
  __int64 v262; // rax
  int v263; // eax
  _BYTE *v264; // rax
  unsigned int v265; // edx
  __int64 v266; // rsi
  __int64 v267; // rcx
  int v268; // edi
  int v269; // edi
  __int64 v270; // rdi
  __int64 v271; // rcx
  __int64 v272; // rax
  __int64 v273; // rdx
  __int64 v274; // rcx
  int v275; // eax
  __int64 v276; // rax
  int v277; // eax
  _BYTE *v278; // rax
  unsigned __int64 v279; // xmm0_8
  int v280; // edx
  __int64 *v281; // rsi
  int v282; // esi
  unsigned int v283; // edi
  unsigned int j; // eax
  __int64 v285; // rdx
  _QWORD *v286; // rsi
  unsigned int v287; // eax
  __int64 v288; // rdi
  unsigned int v289; // edx
  unsigned int v290; // eax
  __int64 v291; // rax
  _QWORD *v292; // rsi
  unsigned int v293; // eax
  __int64 v294; // rdi
  unsigned int v295; // edx
  unsigned int v296; // eax
  __int64 v297; // rax
  _QWORD *v298; // rsi
  unsigned int v299; // eax
  __int64 v300; // rdi
  unsigned int v301; // edx
  unsigned int v302; // eax
  __int64 v303; // rax
  _QWORD *v304; // rsi
  unsigned int v305; // eax
  __int64 v306; // rdi
  unsigned int v307; // edx
  unsigned int v308; // eax
  __int64 v309; // rax
  __int64 v310; // r14
  unsigned int *v311; // r12
  __int64 *v312; // rdx
  __int64 v313; // rsi
  __int64 v314; // rdi
  __int64 v315; // rsi
  __int64 v316; // rax
  unsigned int *v317; // rbp
  unsigned int v318; // eax
  _QWORD *v319; // rax
  unsigned int v320; // edx
  unsigned int v321; // edx
  __int64 *v322; // rdx
  __int64 v323; // rax
  __int64 *v324; // rdx
  __int64 v325; // rax
  __int64 v326; // rsi
  __int64 v327; // r8
  __int64 v328; // rdi
  unsigned __int64 v329; // rax
  _QWORD *v330; // rax
  unsigned int v331; // eax
  __int64 v332; // rax
  unsigned int v333; // r14d
  __int64 v334; // rdx
  unsigned __int64 v335; // rdx
  __int64 *v336; // rax
  __m128i v337; // xmm0
  int m; // eax
  __int64 v339; // rdx
  __int64 v340; // rdx
  __int64 v341; // rdx
  __int64 v342; // rax
  __int64 v343; // rdx
  __int64 v344; // rsi
  __int64 v345; // rsi
  __int64 v346; // rsi
  __int64 v347; // rsi
  __int64 v348; // rax
  __int64 v349; // rdx
  __int64 v350; // rsi
  __int64 v351; // rsi
  __int64 v352; // rsi
  __int64 v353; // rax
  __int64 v354; // rdx
  __int64 v355; // rsi
  __int64 v356; // rsi
  __int64 v357; // rax
  __int64 v358; // rdx
  __int64 v359; // rsi
  __int64 v360; // rax
  __int64 v361; // rdx
  __int64 v362; // rsi
  __int64 v363; // rcx
  unsigned int *v364; // rax
  unsigned int v365; // edx
  __int64 v366; // rax
  int v367; // esi
  unsigned int v368; // edx
  __m128i *v369; // rdx
  __int32 v370; // eax
  __int64 v371; // rax
  __int64 v372; // rax
  __int64 v373; // rsi
  __int64 v374; // rax
  __int64 v375; // rcx
  _BYTE **v376; // rax
  _QWORD *v377; // r12
  __int64 v378; // rdi
  __int64 v379; // rax
  __int64 v380; // rsi
  __int64 v381; // r13
  unsigned __int64 v382; // rcx
  unsigned int v383; // esi
  __int64 v384; // rax
  unsigned __int64 v385; // rax
  _QWORD *v386; // r11
  __int64 v387; // rax
  unsigned int v388; // edx
  _QWORD *v389; // rdi
  __int64 v390; // rax
  __int32 v391; // eax
  __m128i *v392; // rbp
  _BYTE *v393; // rax
  int v394; // edx
  unsigned __int64 *v395; // rax
  unsigned __int64 v396; // rax
  unsigned int v397; // ecx
  __int64 v398; // rax
  int v399; // esi
  __int64 v400; // rdi
  unsigned int k; // eax
  __int64 v402; // rdx
  unsigned __int64 v403; // rcx
  _QWORD **v404; // rdx
  __int64 v405; // rdi
  int v406; // eax
  __int64 v407; // rax
  __int64 **v408; // r14
  unsigned __int64 v409; // r13
  __int64 **v410; // rbp
  __int64 *v411; // r12
  __int64 v412; // rsi
  __int64 v413; // rax
  __int64 v414; // rdx
  __int64 **v415; // r12
  __int64 v416; // rax
  _QWORD *v417; // rbp
  __int64 v418; // rbx
  __int64 *v419; // rdx
  __int64 v420; // rsi
  _QWORD *v421; // rax
  unsigned int v422; // r14d
  unsigned int v423; // eax
  __int64 v424; // rax
  __int64 *v425; // rcx
  _DWORD *v426; // rsi
  __int64 v427; // rdx
  __int64 *v428; // rdx
  __int64 *v429; // rdi
  _QWORD *v430; // r8
  __int64 v431; // r9
  _QWORD *v432; // rax
  __int64 v433; // [rsp-10h] [rbp-E8h]
  __int64 v434; // [rsp-10h] [rbp-E8h]
  __int64 v435; // [rsp-10h] [rbp-E8h]
  __int64 v436; // [rsp-8h] [rbp-E0h]
  __int64 v437; // [rsp+8h] [rbp-D0h]
  unsigned int v438; // [rsp+8h] [rbp-D0h]
  unsigned int v439; // [rsp+8h] [rbp-D0h]
  _QWORD *v440; // [rsp+8h] [rbp-D0h]
  _QWORD *v441; // [rsp+10h] [rbp-C8h]
  unsigned int v442; // [rsp+18h] [rbp-C0h]
  int *v443; // [rsp+20h] [rbp-B8h]
  __int64 v444; // [rsp+28h] [rbp-B0h]
  _QWORD *v445; // [rsp+38h] [rbp-A0h]
  _QWORD *v446; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v447; // [rsp+38h] [rbp-A0h]
  __int64 **v448; // [rsp+40h] [rbp-98h]
  _QWORD *v449; // [rsp+48h] [rbp-90h]
  __int64 v450; // [rsp+50h] [rbp-88h]
  unsigned int v451; // [rsp+58h] [rbp-80h]
  unsigned int v452; // [rsp+5Ch] [rbp-7Ch]
  _DWORD *v453; // [rsp+60h] [rbp-78h]
  __int64 **v454; // [rsp+68h] [rbp-70h]
  __int64 *v455; // [rsp+70h] [rbp-68h]
  unsigned __int64 v456; // [rsp+78h] [rbp-60h] BYREF
  _OWORD v457[5]; // [rsp+80h] [rbp-58h] BYREF

  v4 = (_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 144);
  v456 = a3;
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  v7 = *(_QWORD *)(a1 + 160);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  v441 = (_QWORD *)(a1 + 144);
  sub_B9CC80((_QWORD *)(a1 + 144), &v456);
  v11 = v456;
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(v456 + 36);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 912LL) )
  {
    v12 = *(_QWORD *)(a1 + 128);
    if ( v12 )
      *(_DWORD *)(v12 - 4) = 0;
    v457[0] = v11;
    sub_B9BD60((__int64 **)(a1 + 128), (__int64 *)v457);
  }
  v13 = *(_DWORD **)(a2 + 32);
  v14 = *(unsigned __int64 **)(a1 + 32);
  v15 = 0;
  *(_QWORD *)(a1 + 72) = v13;
  *v14 = v11;
  *(_DWORD *)(a1 + 64) = 0;
  while ( 2 )
  {
    if ( !v13 )
      goto LABEL_27;
LABEL_13:
    switch ( *v13 )
    {
      case 0:
        v322 = (__int64 *)v4[4];
        v323 = *v322;
        v4[14] = *v322;
        if ( (*(_BYTE *)(v323 + 44) & 8) != 0 )
          goto LABEL_27;
        v8 = *(_QWORD *)v323;
        if ( *(_DWORD *)(*(_QWORD *)v323 + 24LL) != 1 )
          goto LABEL_27;
        v13 = *((_DWORD **)v13 + 1);
        v322[1] = *(_QWORD *)(v323 + 112);
        v4[9] = v13;
        continue;
      case 1:
        v324 = (__int64 *)v4[4];
        v325 = *v324;
        v4[14] = *v324;
        if ( (*(_BYTE *)(v325 + 44) & 8) != 0 )
          goto LABEL_27;
        v8 = *(_QWORD *)v325;
        if ( *(_DWORD *)(*(_QWORD *)v325 + 24LL) != 2 )
          goto LABEL_27;
        v13 = *((_DWORD **)v13 + 1);
        v324[1] = *(_QWORD *)(v325 + 112);
        v324[2] = *(_QWORD *)(v4[14] + 120LL);
        v4[9] = v13;
        continue;
      case 2:
        v182 = (__int64 *)v4[4];
        v183 = *v182;
        v4[14] = *v182;
        if ( (*(_BYTE *)(v183 + 44) & 8) != 0 )
          goto LABEL_27;
        v8 = *(_QWORD *)v183;
        if ( *(_DWORD *)(*(_QWORD *)v183 + 24LL) != 3 )
          goto LABEL_27;
        v13 = *((_DWORD **)v13 + 1);
        v182[1] = *(_QWORD *)(v183 + 112);
        v182[2] = *(_QWORD *)(v4[14] + 120LL);
        v182[3] = *(_QWORD *)(v4[14] + 128LL);
        v4[9] = v13;
        continue;
      case 3:
        v184 = (__int64 *)v4[4];
        v185 = *v184;
        v4[14] = *v184;
        if ( (*(_BYTE *)(v185 + 44) & 8) != 0 )
          goto LABEL_27;
        v8 = *(_QWORD *)v185;
        if ( *(_DWORD *)(*(_QWORD *)v185 + 24LL) != 4 )
          goto LABEL_27;
        v13 = *((_DWORD **)v13 + 1);
        v184[1] = *(_QWORD *)(v185 + 112);
        v184[2] = *(_QWORD *)(v4[14] + 120LL);
        v184[3] = *(_QWORD *)(v4[14] + 128LL);
        v184[4] = *(_QWORD *)(v4[14] + 136LL);
        v4[9] = v13;
        continue;
      case 4:
        v186 = (__int64 *)v4[4];
        v187 = *v186;
        v4[14] = *v186;
        if ( (*(_BYTE *)(v187 + 44) & 8) != 0 )
          goto LABEL_27;
        v8 = *(_QWORD *)v187;
        if ( *(_DWORD *)(*(_QWORD *)v187 + 24LL) != 5 )
          goto LABEL_27;
        v13 = *((_DWORD **)v13 + 1);
        v186[1] = *(_QWORD *)(v187 + 112);
        v186[2] = *(_QWORD *)(v4[14] + 120LL);
        v186[3] = *(_QWORD *)(v4[14] + 128LL);
        v186[4] = *(_QWORD *)(v4[14] + 136LL);
        v186[5] = *(_QWORD *)(v4[14] + 144LL);
        v4[9] = v13;
        continue;
      case 5:
        v188 = (__int64 *)v4[4];
        v189 = *v188;
        v4[14] = *v188;
        if ( (*(_BYTE *)(v189 + 44) & 8) != 0 )
          goto LABEL_27;
        v8 = *(_QWORD *)v189;
        if ( *(_DWORD *)(*(_QWORD *)v189 + 24LL) != 6 )
          goto LABEL_27;
        v13 = *((_DWORD **)v13 + 1);
        v188[1] = *(_QWORD *)(v189 + 112);
        v188[2] = *(_QWORD *)(v4[14] + 120LL);
        v188[3] = *(_QWORD *)(v4[14] + 128LL);
        v188[4] = *(_QWORD *)(v4[14] + 136LL);
        v188[5] = *(_QWORD *)(v4[14] + 144LL);
        v188[6] = *(_QWORD *)(v4[14] + 152LL);
        v4[9] = v13;
        continue;
      case 6:
        v190 = (__int64 *)v4[4];
        v191 = *v190;
        v4[14] = *v190;
        if ( (*(_BYTE *)(v191 + 44) & 8) != 0 )
        {
          v9 = (unsigned int)v13[4];
          *((_DWORD *)v4 + 22) = 0;
          if ( !(_DWORD)v9 )
            goto LABEL_26;
        }
        else
        {
          v192 = *(unsigned int *)(*(_QWORD *)v191 + 24LL);
          *((_DWORD *)v4 + 22) = v192;
          if ( v13[4] == (_DWORD)v192 )
          {
            if ( (_DWORD)v192 )
            {
              v190[1] = *(_QWORD *)(v191 + 112);
              if ( (_DWORD)v192 != 1 )
              {
                for ( i = 1; i != v192; ++i )
                {
                  v8 = (unsigned int)i;
                  v190[i + 1] = *(_QWORD *)(v4[14] + 8LL * (unsigned int)i + 112);
                }
              }
            }
            goto LABEL_26;
          }
        }
        goto LABEL_27;
      case 7:
        v194 = *(_QWORD *)(v4[4] + 8LL * (unsigned int)v13[7]);
        *((_DWORD *)v4 + 23) = v13[8];
        v195 = *((_DWORD *)v4 + 20);
        v4[12] = v194;
        *((_DWORD *)v4 + 21) = v195;
        v196 = v4[16];
        if ( v196 )
          v197 = *(_DWORD *)(v196 - 4);
        else
          v197 = 0;
        *((_DWORD *)v4 + 34) = v197;
        v198 = sub_B9BEB0((__int64)v4, *((_QWORD *)v13 + 2), *((unsigned __int16 *)v13 + 12), v194);
        v199 = *((_DWORD *)v4 + 16);
        v4[14] = v198;
        if ( !v198 )
          goto LABEL_27;
        v200 = v4[9];
        v201 = v4[7] + 40LL * v199;
        v202 = *((_DWORD *)v4 + 21);
        *(_QWORD *)v201 = v200;
        v13 = *(_DWORD **)(v200 + 8);
        *(_DWORD *)(v201 + 8) = v202;
        v203 = *((_DWORD *)v4 + 34);
        *(_QWORD *)(v201 + 16) = v198;
        *(_DWORD *)(v201 + 12) = v203;
        v8 = *((_QWORD *)v198 + 14);
        *((_DWORD *)v4 + 16) = v199 + 1;
        *(_QWORD *)(v4[4] + 8LL * *((unsigned int *)v4 + 23)) = v8;
        v4[9] = v13;
        continue;
      case 8:
        v204 = *(_QWORD *)(v4[4] + 8LL * (unsigned int)v13[7]);
        *((_DWORD *)v4 + 23) = v13[8];
        v205 = *((_DWORD *)v4 + 20);
        v4[12] = v204;
        *((_DWORD *)v4 + 21) = v205;
        v206 = v4[16];
        if ( v206 )
          v207 = *(_DWORD *)(v206 - 4);
        else
          v207 = 0;
        *((_DWORD *)v4 + 34) = v207;
        v208 = sub_B9BEB0((__int64)v4, *((_QWORD *)v13 + 2), *((unsigned __int16 *)v13 + 12), v204);
        v209 = *((_DWORD *)v4 + 16);
        v4[14] = v208;
        if ( !v208 )
          goto LABEL_27;
        v210 = v4[9];
        v211 = v4[7] + 40LL * v209;
        v212 = *((_DWORD *)v4 + 21);
        *(_QWORD *)v211 = v210;
        v13 = *(_DWORD **)(v210 + 8);
        *(_DWORD *)(v211 + 8) = v212;
        v213 = *((_DWORD *)v4 + 34);
        *(_QWORD *)(v211 + 16) = v208;
        *(_DWORD *)(v211 + 12) = v213;
        v214 = *((_QWORD *)v208 + 14);
        v215 = *((unsigned int *)v4 + 23);
        v216 = v4[4];
        *((_DWORD *)v4 + 16) = v209 + 1;
        *(_QWORD *)(v216 + 8 * v215) = v214;
        v217 = (unsigned int)(v215 + 1);
        v8 = *(_QWORD *)(v4[14] + 120LL);
        *(_QWORD *)(v216 + 8 * v217) = v8;
        v4[9] = v13;
        continue;
      case 9:
        v218 = *(_QWORD *)(v4[4] + 8LL * (unsigned int)v13[7]);
        *((_DWORD *)v4 + 23) = v13[8];
        v219 = *((_DWORD *)v4 + 20);
        v4[12] = v218;
        *((_DWORD *)v4 + 21) = v219;
        v220 = v4[16];
        if ( v220 )
          v221 = *(_DWORD *)(v220 - 4);
        else
          v221 = 0;
        *((_DWORD *)v4 + 34) = v221;
        v222 = sub_B9BEB0((__int64)v4, *((_QWORD *)v13 + 2), *((unsigned __int16 *)v13 + 12), v218);
        v223 = *((_DWORD *)v4 + 16);
        v4[14] = v222;
        if ( !v222 )
          goto LABEL_27;
        v224 = v4[9];
        v225 = v4[7] + 40LL * v223;
        v226 = *((_DWORD *)v4 + 21);
        *(_QWORD *)v225 = v224;
        v13 = *(_DWORD **)(v224 + 8);
        *(_DWORD *)(v225 + 8) = v226;
        v227 = *((_DWORD *)v4 + 34);
        *(_QWORD *)(v225 + 16) = v222;
        *(_DWORD *)(v225 + 12) = v227;
        v228 = *((_QWORD *)v222 + 14);
        v229 = *((unsigned int *)v4 + 23);
        v230 = v4[4];
        *((_DWORD *)v4 + 16) = v223 + 1;
        *(_QWORD *)(v230 + 8 * v229) = v228;
        v231 = (unsigned int)(v229 + 2);
        *(_QWORD *)(v230 + 8LL * (unsigned int)(v229 + 1)) = *(_QWORD *)(v4[14] + 120LL);
        v8 = *(_QWORD *)(v4[14] + 128LL);
        *(_QWORD *)(v230 + 8 * v231) = v8;
        v4[9] = v13;
        continue;
      case 0xA:
        v232 = *(_QWORD *)(v4[4] + 8LL * (unsigned int)v13[7]);
        *((_DWORD *)v4 + 23) = v13[8];
        v233 = *((_DWORD *)v4 + 20);
        v4[12] = v232;
        *((_DWORD *)v4 + 21) = v233;
        v234 = v4[16];
        if ( v234 )
          v235 = *(_DWORD *)(v234 - 4);
        else
          v235 = 0;
        *((_DWORD *)v4 + 34) = v235;
        v236 = sub_B9BEB0((__int64)v4, *((_QWORD *)v13 + 2), *((unsigned __int16 *)v13 + 12), v232);
        v237 = *((_DWORD *)v4 + 16);
        v4[14] = v236;
        if ( !v236 )
          goto LABEL_27;
        v238 = v4[9];
        v239 = v4[7] + 40LL * v237;
        v240 = *((_DWORD *)v4 + 21);
        *(_QWORD *)v239 = v238;
        v13 = *(_DWORD **)(v238 + 8);
        *(_DWORD *)(v239 + 8) = v240;
        v241 = *((_DWORD *)v4 + 34);
        *(_QWORD *)(v239 + 16) = v236;
        *(_DWORD *)(v239 + 12) = v241;
        v242 = *((_QWORD *)v236 + 14);
        v243 = *((unsigned int *)v4 + 23);
        v244 = v4[4];
        *((_DWORD *)v4 + 16) = v237 + 1;
        *(_QWORD *)(v244 + 8 * v243) = v242;
        *(_QWORD *)(v244 + 8LL * (unsigned int)(v243 + 1)) = *(_QWORD *)(v4[14] + 120LL);
        v245 = (unsigned int)(v243 + 3);
        *(_QWORD *)(v244 + 8LL * (unsigned int)(v243 + 2)) = *(_QWORD *)(v4[14] + 128LL);
        v8 = *(_QWORD *)(v4[14] + 136LL);
        *(_QWORD *)(v244 + 8 * v245) = v8;
        v4[9] = v13;
        continue;
      case 0xB:
        v246 = *(_QWORD *)(v4[4] + 8LL * (unsigned int)v13[7]);
        *((_DWORD *)v4 + 23) = v13[8];
        v247 = *((_DWORD *)v4 + 20);
        v4[12] = v246;
        *((_DWORD *)v4 + 21) = v247;
        v248 = v4[16];
        if ( v248 )
          v249 = *(_DWORD *)(v248 - 4);
        else
          v249 = 0;
        *((_DWORD *)v4 + 34) = v249;
        v250 = sub_B9BEB0((__int64)v4, *((_QWORD *)v13 + 2), *((unsigned __int16 *)v13 + 12), v246);
        v251 = *((_DWORD *)v4 + 16);
        v4[14] = v250;
        if ( !v250 )
          goto LABEL_27;
        v252 = v4[9];
        v253 = v4[7] + 40LL * v251;
        v254 = *((_DWORD *)v4 + 21);
        *(_QWORD *)v253 = v252;
        v13 = *(_DWORD **)(v252 + 8);
        *(_DWORD *)(v253 + 8) = v254;
        v255 = *((_DWORD *)v4 + 34);
        *(_QWORD *)(v253 + 16) = v250;
        *(_DWORD *)(v253 + 12) = v255;
        v256 = *((_QWORD *)v250 + 14);
        v257 = *((unsigned int *)v4 + 23);
        v258 = v4[4];
        *((_DWORD *)v4 + 16) = v251 + 1;
        *(_QWORD *)(v258 + 8 * v257) = v256;
        *(_QWORD *)(v258 + 8LL * (unsigned int)(v257 + 1)) = *(_QWORD *)(v4[14] + 120LL);
        *(_QWORD *)(v258 + 8LL * (unsigned int)(v257 + 2)) = *(_QWORD *)(v4[14] + 128LL);
        v259 = (unsigned int)(v257 + 4);
        *(_QWORD *)(v258 + 8LL * (unsigned int)(v257 + 3)) = *(_QWORD *)(v4[14] + 136LL);
        v8 = *(_QWORD *)(v4[14] + 144LL);
        *(_QWORD *)(v258 + 8 * v259) = v8;
        v4[9] = v13;
        continue;
      case 0xC:
        v260 = *(_QWORD *)(v4[4] + 8LL * (unsigned int)v13[7]);
        *((_DWORD *)v4 + 23) = v13[8];
        v261 = *((_DWORD *)v4 + 20);
        v4[12] = v260;
        *((_DWORD *)v4 + 21) = v261;
        v262 = v4[16];
        if ( v262 )
          v263 = *(_DWORD *)(v262 - 4);
        else
          v263 = 0;
        *((_DWORD *)v4 + 34) = v263;
        v264 = sub_B9BEB0((__int64)v4, *((_QWORD *)v13 + 2), *((unsigned __int16 *)v13 + 12), v260);
        v265 = *((_DWORD *)v4 + 16);
        v4[14] = v264;
        if ( !v264 )
          goto LABEL_27;
        v266 = v4[9];
        v267 = v4[7] + 40LL * v265;
        v268 = *((_DWORD *)v4 + 21);
        *(_QWORD *)v267 = v266;
        v13 = *(_DWORD **)(v266 + 8);
        *(_DWORD *)(v267 + 8) = v268;
        v269 = *((_DWORD *)v4 + 34);
        *(_QWORD *)(v267 + 16) = v264;
        *(_DWORD *)(v267 + 12) = v269;
        v270 = *((_QWORD *)v264 + 14);
        v271 = *((unsigned int *)v4 + 23);
        v272 = v4[4];
        *((_DWORD *)v4 + 16) = v265 + 1;
        *(_QWORD *)(v272 + 8 * v271) = v270;
        *(_QWORD *)(v272 + 8LL * (unsigned int)(v271 + 1)) = *(_QWORD *)(v4[14] + 120LL);
        *(_QWORD *)(v272 + 8LL * (unsigned int)(v271 + 2)) = *(_QWORD *)(v4[14] + 128LL);
        *(_QWORD *)(v272 + 8LL * (unsigned int)(v271 + 3)) = *(_QWORD *)(v4[14] + 136LL);
        v273 = (unsigned int)(v271 + 5);
        *(_QWORD *)(v272 + 8LL * (unsigned int)(v271 + 4)) = *(_QWORD *)(v4[14] + 144LL);
        v8 = *(_QWORD *)(v4[14] + 152LL);
        *(_QWORD *)(v272 + 8 * v273) = v8;
        v4[9] = v13;
        continue;
      case 0xD:
        v274 = *(_QWORD *)(v4[4] + 8LL * (unsigned int)v13[7]);
        *((_DWORD *)v4 + 23) = v13[8];
        v275 = *((_DWORD *)v4 + 20);
        v4[12] = v274;
        *((_DWORD *)v4 + 21) = v275;
        v276 = v4[16];
        if ( v276 )
          v277 = *(_DWORD *)(v276 - 4);
        else
          v277 = 0;
        *((_DWORD *)v4 + 34) = v277;
        v278 = sub_B9BEB0((__int64)v4, *((_QWORD *)v13 + 2), *((unsigned __int16 *)v13 + 12), v274);
        v4[14] = v278;
        if ( !v278 )
          goto LABEL_27;
        v8 = v4[9];
        v279 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD *)v4 + 21)), _mm_cvtsi32_si128(*((_DWORD *)v4 + 34))).m128i_u64[0];
        v280 = *((_DWORD *)v4 + 16) + 1;
        v281 = (__int64 *)(v4[7] + 40LL * *((unsigned int *)v4 + 16));
        *v281 = v8;
        v281[2] = (__int64)v278;
        v281[1] = v279;
        v282 = *(unsigned __int16 *)(v8 + 24);
        *((_DWORD *)v4 + 16) = v280;
        *((_DWORD *)v4 + 22) = v282;
        if ( v282 )
        {
          v283 = *((_DWORD *)v4 + 23);
          v9 = v4[4];
          *(_QWORD *)(v9 + 8LL * v283) = *((_QWORD *)v278 + 14);
          if ( v282 != 1 )
          {
            for ( j = 1; j != v282; ++j )
            {
              v10 = *(_QWORD *)(v4[14] + 8LL * j + 112);
              v285 = v283 + j;
              *(_QWORD *)(v9 + 8 * v285) = v10;
            }
          }
        }
LABEL_68:
        v13 = *(_DWORD **)(v8 + 8);
        v4[9] = v13;
        continue;
      case 0xE:
        v286 = (_QWORD *)v4[5];
        *v286 = *(_QWORD *)(v4[4] + 8LL * (unsigned int)v13[9]);
        v287 = sub_B397A0(1u, (__int64)v286);
        v288 = *v4;
        v289 = v287;
        v290 = *((_DWORD *)v4 + 20);
        if ( v290 < v289 )
          v290 = v289;
        *((_DWORD *)v4 + 20) = v290;
        if ( (unsigned __int8)sub_8E6FA0(v288) )
          return 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v4[2] + 96LL))(
          v4[2],
          *(_QWORD *)(v4[9] + 16LL),
          *(_QWORD *)(v4[9] + 24LL),
          1,
          v4[5],
          *((unsigned int *)v4 + 20),
          v4 + 16);
        v8 = v435;
        goto LABEL_27;
      case 0xF:
        v291 = v4[4];
        v292 = (_QWORD *)v4[5];
        *v292 = *(_QWORD *)(v291 + 8LL * (unsigned int)v13[10]);
        v292[1] = *(_QWORD *)(v291 + 8LL * (unsigned int)v13[9]);
        v293 = sub_B397A0(2u, (__int64)v292);
        v294 = *v4;
        v295 = v293;
        v296 = *((_DWORD *)v4 + 20);
        if ( v296 < v295 )
          v296 = v295;
        *((_DWORD *)v4 + 20) = v296;
        if ( (unsigned __int8)sub_8E6FA0(v294) )
          return 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v4[2] + 96LL))(
          v4[2],
          *(_QWORD *)(v4[9] + 16LL),
          *(_QWORD *)(v4[9] + 24LL),
          2,
          v4[5],
          *((unsigned int *)v4 + 20),
          v4 + 16);
        goto LABEL_27;
      case 0x10:
        v297 = v4[4];
        v298 = (_QWORD *)v4[5];
        *v298 = *(_QWORD *)(v297 + 8LL * (unsigned int)v13[11]);
        v298[1] = *(_QWORD *)(v297 + 8LL * (unsigned int)v13[10]);
        v298[2] = *(_QWORD *)(v297 + 8LL * (unsigned int)v13[9]);
        v299 = sub_B397A0(3u, (__int64)v298);
        v300 = *v4;
        v301 = v299;
        v302 = *((_DWORD *)v4 + 20);
        if ( v302 < v301 )
          v302 = v301;
        *((_DWORD *)v4 + 20) = v302;
        if ( (unsigned __int8)sub_8E6FA0(v300) )
          return 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v4[2] + 96LL))(
          v4[2],
          *(_QWORD *)(v4[9] + 16LL),
          *(_QWORD *)(v4[9] + 24LL),
          3,
          v4[5],
          *((unsigned int *)v4 + 20),
          v4 + 16);
        goto LABEL_27;
      case 0x11:
        v303 = v4[4];
        v304 = (_QWORD *)v4[5];
        *v304 = *(_QWORD *)(v303 + 8LL * (unsigned int)v13[12]);
        v304[1] = *(_QWORD *)(v303 + 8LL * (unsigned int)v13[11]);
        v304[2] = *(_QWORD *)(v303 + 8LL * (unsigned int)v13[10]);
        v304[3] = *(_QWORD *)(v303 + 8LL * (unsigned int)v13[9]);
        v305 = sub_B397A0(4u, (__int64)v304);
        v306 = *v4;
        v307 = v305;
        v308 = *((_DWORD *)v4 + 20);
        if ( v308 < v307 )
          v308 = v307;
        *((_DWORD *)v4 + 20) = v308;
        if ( (unsigned __int8)sub_8E6FA0(v306) )
          return 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v4[2] + 96LL))(
          v4[2],
          *(_QWORD *)(v4[9] + 16LL),
          *(_QWORD *)(v4[9] + 24LL),
          4,
          v4[5],
          *((unsigned int *)v4 + 20),
          v4 + 16);
        goto LABEL_27;
      case 0x12:
        v100 = v4[4];
        v101 = (_QWORD *)v4[5];
        *v101 = *(_QWORD *)(v100 + 8LL * (unsigned int)v13[13]);
        v101[1] = *(_QWORD *)(v100 + 8LL * (unsigned int)v13[12]);
        v101[2] = *(_QWORD *)(v100 + 8LL * (unsigned int)v13[11]);
        v101[3] = *(_QWORD *)(v100 + 8LL * (unsigned int)v13[10]);
        v101[4] = *(_QWORD *)(v100 + 8LL * (unsigned int)v13[9]);
        v102 = sub_B397A0(5u, (__int64)v101);
        v103 = *v4;
        v104 = v102;
        v105 = *((_DWORD *)v4 + 20);
        if ( v105 < v104 )
          v105 = v104;
        *((_DWORD *)v4 + 20) = v105;
        if ( (unsigned __int8)sub_8E6FA0(v103) )
          return 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v4[2] + 96LL))(
          v4[2],
          *(_QWORD *)(v4[9] + 16LL),
          *(_QWORD *)(v4[9] + 24LL),
          5,
          v4[5],
          *((unsigned int *)v4 + 20),
          v4 + 16);
        v10 = v433;
        goto LABEL_27;
      case 0x13:
        v106 = v4[4];
        v107 = (_QWORD *)v4[5];
        *v107 = *(_QWORD *)(v106 + 8LL * (unsigned int)v13[14]);
        v107[1] = *(_QWORD *)(v106 + 8LL * (unsigned int)v13[13]);
        v107[2] = *(_QWORD *)(v106 + 8LL * (unsigned int)v13[12]);
        v107[3] = *(_QWORD *)(v106 + 8LL * (unsigned int)v13[11]);
        v107[4] = *(_QWORD *)(v106 + 8LL * (unsigned int)v13[10]);
        v107[5] = *(_QWORD *)(v106 + 8LL * (unsigned int)v13[9]);
        v108 = sub_B397A0(6u, (__int64)v107);
        v109 = *v4;
        v110 = v108;
        v111 = *((_DWORD *)v4 + 20);
        if ( v111 < v110 )
          v111 = v110;
        *((_DWORD *)v4 + 20) = v111;
        if ( (unsigned __int8)sub_8E6FA0(v109) )
          return 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v4[2] + 96LL))(
          v4[2],
          *(_QWORD *)(v4[9] + 16LL),
          *(_QWORD *)(v4[9] + 24LL),
          6,
          v4[5],
          *((unsigned int *)v4 + 20),
          v4 + 16);
        v9 = v436;
        goto LABEL_27;
      case 0x14:
        v112 = *((unsigned __int16 *)v13 + 16);
        v113 = v4[5];
        *((_DWORD *)v4 + 22) = v112;
        if ( v112 )
        {
          v114 = v4[4];
          v115 = v112 - 1;
          v116 = v113;
          do
          {
            v117 = v115--;
            v116 += 8;
            *(_QWORD *)(v116 - 8) = *(_QWORD *)(v114 + 8LL * (unsigned int)v13[v117 + 9]);
          }
          while ( v115 != -1 );
        }
        v118 = sub_B397A0(v112, v113);
        v119 = *v4;
        v120 = v118;
        v121 = *((_DWORD *)v4 + 20);
        if ( v121 < v120 )
          v121 = v120;
        *((_DWORD *)v4 + 20) = v121;
        if ( (unsigned __int8)sub_8E6FA0(v119) )
          return 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v4[2] + 96LL))(
          v4[2],
          *(_QWORD *)(v4[9] + 16LL),
          *(_QWORD *)(v4[9] + 24LL),
          *((unsigned int *)v4 + 22),
          v4[5],
          *((unsigned int *)v4 + 20),
          v4 + 16);
        v8 = v434;
        goto LABEL_27;
      case 0x15:
        v122 = v4[4];
        v123 = (unsigned int)v13[5];
        v124 = *(_QWORD *)(v122 + 8LL * (unsigned int)v13[4]);
        v4[12] = v124;
        v125 = *(_QWORD *)(v122 + 8 * v123);
        v8 = *(_QWORD *)(v124 + 8);
        v4[13] = v125;
        if ( v8 != *(_QWORD *)(v125 + 8) )
          goto LABEL_27;
        if ( *(_QWORD *)(v4[1] + 912LL) )
        {
          v457[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)v124);
          sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
          v457[0] = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)(v4[13] + 8LL)),
                      (__m128i)(unsigned __int64)v4[13]);
          sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
          v13 = (_DWORD *)v4[9];
        }
        goto LABEL_26;
      case 0x16:
        v335 = *(_QWORD *)(v4[4] + 8LL * (unsigned int)v13[4]);
        v336 = *((__int64 **)v13 + 3);
        *((__m128i *)v4 + 6) = _mm_unpacklo_epi64((__m128i)v335, (__m128i)(unsigned __int64)v336);
        if ( *(_QWORD *)(v335 + 8) != v336[1] )
        {
          v8 = *v336;
          if ( *(_WORD *)(*v336 + 4) )
            goto LABEL_27;
          v8 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 24LL);
          if ( !v8 || *(_DWORD *)v8 || *(_DWORD *)(v8 + 4) != 4 )
            goto LABEL_27;
        }
        v8 = v4[1];
        if ( !*(_QWORD *)(v8 + 912) )
          goto LABEL_26;
        v337 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v336, (__m128i)v335);
        goto LABEL_305;
      case 0x17:
      case 0x18:
        v94 = *(_QWORD *)(*(_QWORD *)(v4[4] + 8LL * (unsigned int)v13[4]) + 8LL);
        v4[12] = v94;
        if ( (*((_QWORD *)v13 + 3) & *(_QWORD *)(v94 + 96)) == 0 )
          goto LABEL_27;
        goto LABEL_26;
      case 0x19:
        v95 = *(_QWORD *)(*(_QWORD *)(v4[4] + 8LL * (unsigned int)v13[4]) + 8LL);
        v4[12] = v95;
        if ( (*((_QWORD *)v13 + 3) & *(_QWORD *)(v95 + 104)) == 0 )
          goto LABEL_27;
        goto LABEL_26;
      case 0x1A:
        v96 = *((_DWORD *)v4 + 16);
        v97 = v4[7] + 40LL * v96;
        v98 = *((_DWORD *)v4 + 20);
        *(_QWORD *)v97 = v13;
        *(_DWORD *)(v97 + 8) = v98;
        v99 = v4[16];
        if ( v99 )
          v8 = *(unsigned int *)(v99 - 4);
        else
          v8 = 0;
        v13 = *((_DWORD **)v13 + 1);
        *(_DWORD *)(v97 + 12) = v8;
        *((_DWORD *)v4 + 16) = v96 + 1;
        v4[9] = v13;
        continue;
      case 0x1B:
        goto LABEL_26;
      case 0x1C:
        v126 = *((unsigned __int16 *)v13 + 12);
        v127 = 0;
        v128 = *((int **)v13 + 2);
        v129 = *v4;
        v130 = *(_QWORD *)(*v4 + 8696LL);
        v4[11] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v126), _mm_cvtsi32_si128(v13[7])).m128i_u64[0];
        v131 = *v128;
        v132 = *v128 + 0x80000000;
        if ( v130 )
        {
          if ( (unsigned int)v132 < *(_DWORD *)(v130 - 4) )
          {
            v361 = *(_QWORD *)(v130 + 8 * v132);
            if ( v361 )
              v127 = *(_DWORD *)(v361 - 4);
          }
        }
        if ( !v126 )
        {
          v369 = (__m128i *)(v4[7] + 40LL * *((unsigned int *)v4 + 16));
          v370 = *((_DWORD *)v4 + 20);
          v369->m128i_i64[0] = (__int64)v13;
          v369->m128i_i32[2] = v370;
          v371 = v4[16];
          if ( v371 )
            v369->m128i_i32[3] = *(_DWORD *)(v371 - 4);
          else
            v369->m128i_i32[3] = 0;
          goto LABEL_373;
        }
        v8 = (__int64)(v13 + 10);
        do
        {
          v136 = *(_QWORD *)v8;
          v137 = *(_QWORD *)v8 & 7LL;
          if ( v137 == 1 )
          {
            v133 = v136 & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            if ( (v136 & 6) == 0 )
              goto LABEL_107;
            if ( v137 != 2 )
            {
              if ( v137 != 3 )
                BUG();
              goto LABEL_107;
            }
            v133 = *(_QWORD *)(v4[4] + 8LL * (unsigned int)(v136 >> 3));
          }
          v134 = *(_QWORD *)(v133 + 8);
          if ( *((_BYTE *)v4 + 24) && (*((_QWORD *)v13 + 4) & *(_QWORD *)(v134 + 104)) == 0 )
            goto LABEL_379;
          v135 = *(_QWORD *)(v134 + 56);
          if ( !v135 || !*(_DWORD *)(v135 - 4) )
            goto LABEL_379;
LABEL_107:
          v8 += 8;
        }
        while ( (_DWORD *)v8 != &v13[2 * v126 + 10] );
        v443 = v128;
        v9 = 0;
        v377 = nullptr;
        v442 = v127;
        v438 = v15;
        v381 = 0;
        do
        {
          v382 = *(_QWORD *)&v13[2 * v381 + 10];
          v383 = v381;
          v384 = v382 & 7;
          if ( v384 == 2 )
          {
            v385 = *(_QWORD *)(v4[4] + 8LL * (unsigned int)(v382 >> 3));
LABEL_396:
            v386 = sub_B9CD40(v4, v385, (__int64)v443, v381);
            v387 = *v386;
            goto LABEL_397;
          }
          if ( v384 != 3 )
          {
            if ( v384 != 1 )
              goto LABEL_405;
            v385 = v382 & 0xFFFFFFFFFFFFFFF8LL;
            goto LABEL_396;
          }
          v403 = v382 & 0xFFFFFFFFFFFFFFF8LL;
          v404 = *(_QWORD ***)(*(_QWORD *)(*(_QWORD *)(v4[4] + 8LL * *(unsigned int *)(v403 + 12)) + 8LL) + 56LL);
          v444 = *(_QWORD *)(*(_QWORD *)(v4[4] + 8LL * *(unsigned int *)(v403 + 12)) + 8LL);
          if ( !v404 || !*((_DWORD *)v404 - 1) )
            goto LABEL_405;
          v405 = v4[21];
          if ( v405 && (v406 = *(_DWORD *)(v405 - 4)) != 0 )
          {
            v10 = (unsigned int)(v406 - 1);
            v386 = *(_QWORD **)(v405 + 8 * v10);
            *(_DWORD *)(v405 - 4) = v10;
            if ( *v386 )
              *(_DWORD *)(*v386 - 4LL) = 0;
          }
          else
          {
            v447 = v403;
            v421 = (_QWORD *)sub_186B270(8u);
            v403 = v447;
            v383 = v381;
            *v421 = 0;
            v386 = v421;
            v404 = *(_QWORD ***)(v444 + 56);
            if ( !v404 )
            {
LABEL_457:
              if ( !v442 )
                goto LABEL_426;
              if ( !v377 )
              {
LABEL_463:
                v15 = v438;
                v389 = v4 + 21;
LABEL_464:
                *(_QWORD *)&v457[0] = v386;
                sub_B9B550(v389, v457);
                v4[14] = 0;
                goto LABEL_27;
              }
              v388 = 0;
LABEL_400:
              if ( !*v377 || v388 >= *(_DWORD *)(*v377 - 4LL) )
              {
LABEL_426:
                *(_QWORD *)&v457[0] = v386;
                sub_B9B550(v4 + 21, v457);
                goto LABEL_405;
              }
              *(_QWORD *)&v457[0] = v377;
              v445 = v386;
              sub_B9B550(v4 + 21, v457);
              v386 = v445;
              v389 = v4 + 21;
              v387 = *v445;
              if ( !*v445 )
              {
                v15 = v438;
                goto LABEL_464;
              }
              goto LABEL_403;
            }
          }
          v407 = *((unsigned int *)v404 - 1);
          if ( v404 != &v404[v407] )
          {
            v451 = v126;
            v408 = &v404[v407];
            v450 = v381;
            v409 = v403;
            v453 = v13;
            v410 = v404;
            v449 = v377;
            v446 = v386;
            v452 = v383;
            do
            {
              v411 = *v410;
              v412 = **v410;
              if ( *(_QWORD *)(v412 + 16) == *(_QWORD *)v409 )
              {
                if ( (unsigned __int8)sub_BA8170(*v4, v412) )
                {
                  if ( (*((_BYTE *)v411 + 44) & 8) == 0 )
                  {
                    v413 = *(unsigned int *)(v409 + 8);
                    if ( (unsigned int)v413 < *(_DWORD *)(*v411 + 24)
                      && v411 == (__int64 *)v411[3]
                      && v444 == *(_QWORD *)(v411[v413 + 14] + 8) )
                    {
                      v414 = v411[1];
                      v415 = *(__int64 ***)(v414 + 56);
                      if ( v415 )
                        v416 = *((unsigned int *)v415 - 1);
                      else
                        v416 = 0;
                      v454 = v410;
                      v417 = v4;
                      v418 = v414;
                      v448 = &v415[v416];
                      while ( v448 != v415 )
                      {
                        v419 = *v415;
                        v420 = **v415;
                        *(_QWORD *)&v457[0] = *v415;
                        if ( v443 == *(int **)(v420 + 16) )
                        {
                          v455 = v419;
                          if ( (unsigned __int8)sub_BA8170(*v417, v420) )
                          {
                            if ( v455 == (__int64 *)v455[3]
                              && (*((_BYTE *)v455 + 44) & 8) == 0
                              && v452 < *(_DWORD *)(*v455 + 24)
                              && v418 == *(_QWORD *)(v455[v452 + 14] + 8) )
                            {
                              sub_B9CC80(v446, v457);
                            }
                          }
                        }
                        ++v415;
                      }
                      v4 = v417;
                      v410 = v454;
                    }
                  }
                }
              }
              ++v410;
            }
            while ( v408 != v410 );
            v377 = v449;
            v126 = v451;
            v386 = v446;
            v381 = v450;
            v13 = v453;
          }
          v387 = *v386;
LABEL_397:
          if ( !v387 )
            goto LABEL_457;
          v388 = *(_DWORD *)(v387 - 4);
          if ( v388 >= v442 )
            goto LABEL_426;
          if ( v377 )
            goto LABEL_400;
LABEL_403:
          if ( !*(_DWORD *)(v387 - 4) )
            goto LABEL_463;
          v377 = v386;
LABEL_405:
          ++v381;
        }
        while ( (unsigned int)v381 < v126 );
        v15 = v438;
        v369 = (__m128i *)(v4[7] + 40LL * *((unsigned int *)v4 + 16));
        v369->m128i_i32[2] = *((_DWORD *)v4 + 20);
        v390 = v4[16];
        v369->m128i_i64[0] = (__int64)v13;
        if ( v390 )
          v391 = *(_DWORD *)(v390 - 4);
        else
          v391 = 0;
        v369->m128i_i32[3] = v391;
        if ( v377 )
        {
          v376 = (_BYTE **)*v377;
          v369[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v377, (__m128i)(unsigned __int64)*v377);
          if ( !v376 )
          {
            v369[2].m128i_i64[0] = 0;
            goto LABEL_468;
          }
          v8 = (__int64)&v376[*((unsigned int *)v376 - 1)];
          v369[2].m128i_i64[0] = v8;
          if ( (_BYTE **)v8 == v376 )
          {
LABEL_468:
            v369[1].m128i_i64[0] = 0;
            *(_QWORD *)&v457[0] = v377;
            sub_B9B550(v4 + 21, v457);
            v4[14] = 0;
            goto LABEL_27;
          }
          goto LABEL_411;
        }
        v129 = *v4;
        v131 = *v443;
LABEL_373:
        v372 = *(_QWORD *)(v129 + 8696);
        v373 = v131 + 0x80000000;
        v369[1].m128i_i64[0] = 0;
        if ( v372 && (unsigned int)v373 < *(_DWORD *)(v372 - 4) )
        {
          v374 = *(_QWORD *)(v372 + 8 * v373);
          v369[1].m128i_i64[1] = v374;
          if ( v374 )
            v375 = *(unsigned int *)(v374 - 4);
          else
            v375 = 0;
          v8 = v374 + 8 * v375;
        }
        else
        {
          v10 = 0;
          v8 = 0;
          v369[1].m128i_i64[1] = 0;
        }
        v376 = (_BYTE **)v369[1].m128i_i64[1];
        v369[2].m128i_i64[0] = v8;
        v377 = nullptr;
        if ( (_BYTE **)v8 == v376 )
          goto LABEL_379;
LABEL_411:
        v392 = v369;
        while ( 1 )
        {
          v393 = *v376;
          v394 = 0;
          if ( (v393[44] & 8) == 0 )
            v394 = *(_DWORD *)(*(_QWORD *)v393 + 24LL);
          if ( v126 == v394 && (unsigned __int8)sub_BA8170(*v4, *(_QWORD *)v393) )
            break;
          v376 = (_BYTE **)(v392[1].m128i_i64[1] + 8);
          v392[1].m128i_i64[1] = (__int64)v376;
          if ( v376 == (_BYTE **)v392[2].m128i_i64[0] )
          {
            v369 = v392;
LABEL_467:
            if ( v377 )
              goto LABEL_468;
LABEL_379:
            v4[14] = 0;
            goto LABEL_27;
          }
        }
        v395 = (unsigned __int64 *)v392[1].m128i_i64[1];
        v369 = v392;
        if ( v395 == (unsigned __int64 *)v392[2].m128i_i64[0] )
          goto LABEL_467;
        v396 = *v395;
        v397 = *((_DWORD *)v4 + 20);
        ++*((_DWORD *)v4 + 16);
        if ( v397 < *(_DWORD *)(v396 + 36) )
          v397 = *(_DWORD *)(v396 + 36);
        *((_DWORD *)v4 + 20) = v397;
        if ( *(_QWORD *)(v4[1] + 912LL) )
        {
          v457[0] = v396;
          sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
          v398 = *(_QWORD *)v392[1].m128i_i64[1];
          v4[14] = v398;
          if ( !v398 )
            goto LABEL_27;
        }
        else
        {
          v4[14] = v396;
        }
        sub_B9CC80(v441, v4 + 14);
        v399 = *((_DWORD *)v4 + 22);
        if ( v399 )
        {
          v9 = *((unsigned int *)v4 + 23);
          v400 = v4[4];
          for ( k = 0; k != v399; ++k )
          {
            v8 = *(_QWORD *)(v4[14] + 8LL * k + 112);
            v402 = (unsigned int)v9 + k;
            *(_QWORD *)(v400 + 8 * v402) = v8;
          }
        }
        v13 = *(_DWORD **)(v4[9] + 8LL);
        v4[9] = v13;
        continue;
      case 0x1D:
        v8 = *((_QWORD *)v13 + 3);
        v138 = (unsigned int)v13[4];
        v13 = *((_DWORD **)v13 + 1);
        *(_QWORD *)(v4[4] + 8 * v138) = v8;
        v4[9] = v13;
        continue;
      case 0x1E:
        v8 = v4[6];
        v140 = *((_BYTE *)v4 + 24) == 0;
        v169 = *(_QWORD *)(v4[4] + 8LL * (unsigned int)v13[10]);
        *(_QWORD *)v8 = v169;
        if ( !v140 && (*((_QWORD *)v13 + 3) & *(_QWORD *)(*(_QWORD *)(v169 + 8) + 104LL)) == 0 )
          goto LABEL_27;
        v170 = (_QWORD *)sub_8E7DB0(*v4);
        v4[12] = v170;
        if ( !v170 || !(unsigned __int8)sub_BA8170(*v4, *v170) )
          goto LABEL_27;
        v8 = v4[12];
        v171 = *((_DWORD *)v4 + 20);
        if ( v171 < *(_DWORD *)(v8 + 36) )
          v171 = *(_DWORD *)(v8 + 36);
        *((_DWORD *)v4 + 20) = v171;
        if ( !*(_QWORD *)(v4[1] + 912LL) )
          goto LABEL_355;
        v457[0] = (unsigned __int64)v8;
        sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
        v172 = v4[12];
        v145 = v4[9];
        v8 = v172;
        if ( !*(_QWORD *)(v4[1] + 912LL) || !*(_WORD *)(v145 + 32) )
          goto LABEL_124;
        v173 = 0;
        while ( 1 )
        {
          v174 = v173++;
          v457[0] = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v172 + 8 * v174 + 112) + 8LL)),
                      (__m128i)*(unsigned __int64 *)(v172 + 8 * v174 + 112));
          sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
          v145 = v4[9];
          if ( v173 >= *(unsigned __int16 *)(v145 + 32) )
            break;
          v172 = v4[12];
        }
        goto LABEL_123;
      case 0x1F:
        v175 = v4[4];
        v8 = v4[6];
        v140 = *((_BYTE *)v4 + 24) == 0;
        v176 = *(_QWORD *)(v175 + 8LL * (unsigned int)v13[10]);
        *(_QWORD *)v8 = v176;
        if ( v140 )
        {
          *(_QWORD *)(v8 + 8) = *(_QWORD *)(v175 + 8LL * (unsigned int)v13[11]);
        }
        else
        {
          v341 = *((_QWORD *)v13 + 3);
          if ( (*(_QWORD *)(*(_QWORD *)(v176 + 8) + 104LL) & v341) == 0 )
            goto LABEL_27;
          v342 = *(_QWORD *)(v175 + 8LL * (unsigned int)v13[11]);
          *(_QWORD *)(v8 + 8) = v342;
          if ( (*(_QWORD *)(*(_QWORD *)(v342 + 8) + 104LL) & v341) == 0 )
            goto LABEL_27;
        }
        v177 = (_QWORD *)sub_8E7DB0(*v4);
        v4[12] = v177;
        if ( !v177 || !(unsigned __int8)sub_BA8170(*v4, *v177) )
          goto LABEL_27;
        v8 = v4[12];
        v178 = *((_DWORD *)v4 + 20);
        if ( v178 < *(_DWORD *)(v8 + 36) )
          v178 = *(_DWORD *)(v8 + 36);
        *((_DWORD *)v4 + 20) = v178;
        if ( !*(_QWORD *)(v4[1] + 912LL) )
          goto LABEL_355;
        v457[0] = (unsigned __int64)v8;
        sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
        v179 = v4[12];
        v145 = v4[9];
        v8 = v179;
        if ( !*(_QWORD *)(v4[1] + 912LL) || !*(_WORD *)(v145 + 32) )
          goto LABEL_124;
        v180 = 0;
        while ( 1 )
        {
          v181 = v180++;
          v457[0] = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v179 + 8 * v181 + 112) + 8LL)),
                      (__m128i)*(unsigned __int64 *)(v179 + 8 * v181 + 112));
          sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
          v145 = v4[9];
          if ( v180 >= *(unsigned __int16 *)(v145 + 32) )
            break;
          v179 = v4[12];
        }
        goto LABEL_123;
      case 0x20:
        v139 = v4[4];
        v8 = v4[6];
        v140 = *((_BYTE *)v4 + 24) == 0;
        v141 = *(_QWORD *)(v139 + 8LL * (unsigned int)v13[10]);
        *(_QWORD *)v8 = v141;
        if ( v140 )
        {
          *(_QWORD *)(v8 + 8) = *(_QWORD *)(v139 + 8LL * (unsigned int)v13[11]);
          *(_QWORD *)(v8 + 16) = *(_QWORD *)(v139 + 8LL * (unsigned int)v13[12]);
        }
        else
        {
          v358 = *((_QWORD *)v13 + 3);
          if ( (*(_QWORD *)(*(_QWORD *)(v141 + 8) + 104LL) & v358) == 0 )
            goto LABEL_27;
          v359 = *(_QWORD *)(v139 + 8LL * (unsigned int)v13[11]);
          *(_QWORD *)(v8 + 8) = v359;
          if ( (*(_QWORD *)(*(_QWORD *)(v359 + 8) + 104LL) & v358) == 0 )
            goto LABEL_27;
          v360 = *(_QWORD *)(v139 + 8LL * (unsigned int)v13[12]);
          *(_QWORD *)(v8 + 16) = v360;
          if ( (*(_QWORD *)(*(_QWORD *)(v360 + 8) + 104LL) & v358) == 0 )
            goto LABEL_27;
        }
        v142 = (_QWORD *)sub_8E7DB0(*v4);
        v4[12] = v142;
        if ( !v142 || !(unsigned __int8)sub_BA8170(*v4, *v142) )
          goto LABEL_27;
        v8 = v4[12];
        v143 = *((_DWORD *)v4 + 20);
        if ( v143 < *(_DWORD *)(v8 + 36) )
          v143 = *(_DWORD *)(v8 + 36);
        *((_DWORD *)v4 + 20) = v143;
        if ( !*(_QWORD *)(v4[1] + 912LL) )
          goto LABEL_355;
        v457[0] = (unsigned __int64)v8;
        sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
        v144 = v4[12];
        v145 = v4[9];
        v8 = v144;
        if ( !*(_QWORD *)(v4[1] + 912LL) || !*(_WORD *)(v145 + 32) )
          goto LABEL_124;
        v146 = 0;
        while ( 1 )
        {
          v147 = v146++;
          v457[0] = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v144 + 8 * v147 + 112) + 8LL)),
                      (__m128i)*(unsigned __int64 *)(v144 + 8 * v147 + 112));
          sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
          v145 = v4[9];
          if ( v146 >= *(unsigned __int16 *)(v145 + 32) )
            break;
          v144 = v4[12];
        }
        goto LABEL_123;
      case 0x21:
        v148 = v4[4];
        v8 = v4[6];
        v140 = *((_BYTE *)v4 + 24) == 0;
        v149 = *(_QWORD *)(v148 + 8LL * (unsigned int)v13[10]);
        *(_QWORD *)v8 = v149;
        if ( v140 )
        {
          *(_QWORD *)(v8 + 8) = *(_QWORD *)(v148 + 8LL * (unsigned int)v13[11]);
          *(_QWORD *)(v8 + 16) = *(_QWORD *)(v148 + 8LL * (unsigned int)v13[12]);
          *(_QWORD *)(v8 + 24) = *(_QWORD *)(v148 + 8LL * (unsigned int)v13[13]);
        }
        else
        {
          v354 = *((_QWORD *)v13 + 3);
          if ( (*(_QWORD *)(*(_QWORD *)(v149 + 8) + 104LL) & v354) == 0 )
            goto LABEL_27;
          v355 = *(_QWORD *)(v148 + 8LL * (unsigned int)v13[11]);
          *(_QWORD *)(v8 + 8) = v355;
          if ( (*(_QWORD *)(*(_QWORD *)(v355 + 8) + 104LL) & v354) == 0 )
            goto LABEL_27;
          v356 = *(_QWORD *)(v148 + 8LL * (unsigned int)v13[12]);
          *(_QWORD *)(v8 + 16) = v356;
          if ( (*(_QWORD *)(*(_QWORD *)(v356 + 8) + 104LL) & v354) == 0 )
            goto LABEL_27;
          v357 = *(_QWORD *)(v148 + 8LL * (unsigned int)v13[13]);
          *(_QWORD *)(v8 + 24) = v357;
          if ( (*(_QWORD *)(*(_QWORD *)(v357 + 8) + 104LL) & v354) == 0 )
            goto LABEL_27;
        }
        v150 = (_QWORD *)sub_8E7DB0(*v4);
        v4[12] = v150;
        if ( !v150 || !(unsigned __int8)sub_BA8170(*v4, *v150) )
          goto LABEL_27;
        v8 = v4[12];
        v151 = *((_DWORD *)v4 + 20);
        if ( v151 < *(_DWORD *)(v8 + 36) )
          v151 = *(_DWORD *)(v8 + 36);
        *((_DWORD *)v4 + 20) = v151;
        if ( !*(_QWORD *)(v4[1] + 912LL) )
          goto LABEL_355;
        v457[0] = (unsigned __int64)v8;
        sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
        v152 = v4[12];
        v145 = v4[9];
        v8 = v152;
        if ( !*(_QWORD *)(v4[1] + 912LL) || !*(_WORD *)(v145 + 32) )
          goto LABEL_124;
        v153 = 0;
        while ( 1 )
        {
          v154 = v153++;
          v457[0] = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v152 + 8 * v154 + 112) + 8LL)),
                      (__m128i)*(unsigned __int64 *)(v152 + 8 * v154 + 112));
          sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
          v145 = v4[9];
          if ( v153 >= *(unsigned __int16 *)(v145 + 32) )
            break;
          v152 = v4[12];
        }
        goto LABEL_123;
      case 0x22:
        v155 = v4[4];
        v8 = v4[6];
        v140 = *((_BYTE *)v4 + 24) == 0;
        v156 = *(_QWORD *)(v155 + 8LL * (unsigned int)v13[10]);
        *(_QWORD *)v8 = v156;
        if ( v140 )
        {
          *(_QWORD *)(v8 + 8) = *(_QWORD *)(v155 + 8LL * (unsigned int)v13[11]);
          *(_QWORD *)(v8 + 16) = *(_QWORD *)(v155 + 8LL * (unsigned int)v13[12]);
          *(_QWORD *)(v8 + 24) = *(_QWORD *)(v155 + 8LL * (unsigned int)v13[13]);
          *(_QWORD *)(v8 + 32) = *(_QWORD *)(v155 + 8LL * (unsigned int)v13[14]);
        }
        else
        {
          v349 = *((_QWORD *)v13 + 3);
          if ( (*(_QWORD *)(*(_QWORD *)(v156 + 8) + 104LL) & v349) == 0 )
            goto LABEL_27;
          v350 = *(_QWORD *)(v155 + 8LL * (unsigned int)v13[11]);
          *(_QWORD *)(v8 + 8) = v350;
          if ( (*(_QWORD *)(*(_QWORD *)(v350 + 8) + 104LL) & v349) == 0 )
            goto LABEL_27;
          v351 = *(_QWORD *)(v155 + 8LL * (unsigned int)v13[12]);
          *(_QWORD *)(v8 + 16) = v351;
          if ( (*(_QWORD *)(*(_QWORD *)(v351 + 8) + 104LL) & v349) == 0 )
            goto LABEL_27;
          v352 = *(_QWORD *)(v155 + 8LL * (unsigned int)v13[13]);
          *(_QWORD *)(v8 + 24) = v352;
          if ( (*(_QWORD *)(*(_QWORD *)(v352 + 8) + 104LL) & v349) == 0 )
            goto LABEL_27;
          v353 = *(_QWORD *)(v155 + 8LL * (unsigned int)v13[14]);
          *(_QWORD *)(v8 + 32) = v353;
          if ( (*(_QWORD *)(*(_QWORD *)(v353 + 8) + 104LL) & v349) == 0 )
            goto LABEL_27;
        }
        v157 = (_QWORD *)sub_8E7DB0(*v4);
        v4[12] = v157;
        if ( !v157 || !(unsigned __int8)sub_BA8170(*v4, *v157) )
          goto LABEL_27;
        v8 = v4[12];
        v158 = *((_DWORD *)v4 + 20);
        if ( v158 < *(_DWORD *)(v8 + 36) )
          v158 = *(_DWORD *)(v8 + 36);
        *((_DWORD *)v4 + 20) = v158;
        if ( !*(_QWORD *)(v4[1] + 912LL) )
          goto LABEL_355;
        v457[0] = (unsigned __int64)v8;
        sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
        v159 = v4[12];
        v145 = v4[9];
        v8 = v159;
        if ( !*(_QWORD *)(v4[1] + 912LL) || !*(_WORD *)(v145 + 32) )
          goto LABEL_124;
        v160 = 0;
        while ( 1 )
        {
          v161 = v160++;
          v457[0] = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v159 + 8 * v161 + 112) + 8LL)),
                      (__m128i)*(unsigned __int64 *)(v159 + 8 * v161 + 112));
          sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
          v145 = v4[9];
          if ( v160 >= *(unsigned __int16 *)(v145 + 32) )
            break;
          v159 = v4[12];
        }
        goto LABEL_123;
      case 0x23:
        v162 = v4[4];
        v8 = v4[6];
        v140 = *((_BYTE *)v4 + 24) == 0;
        v163 = *(_QWORD *)(v162 + 8LL * (unsigned int)v13[10]);
        *(_QWORD *)v8 = v163;
        if ( v140 )
        {
          *(_QWORD *)(v8 + 8) = *(_QWORD *)(v162 + 8LL * (unsigned int)v13[11]);
          *(_QWORD *)(v8 + 16) = *(_QWORD *)(v162 + 8LL * (unsigned int)v13[12]);
          *(_QWORD *)(v8 + 24) = *(_QWORD *)(v162 + 8LL * (unsigned int)v13[13]);
          *(_QWORD *)(v8 + 32) = *(_QWORD *)(v162 + 8LL * (unsigned int)v13[14]);
          *(_QWORD *)(v8 + 40) = *(_QWORD *)(v162 + 8LL * (unsigned int)v13[15]);
          goto LABEL_153;
        }
        v343 = *((_QWORD *)v13 + 3);
        if ( (*(_QWORD *)(*(_QWORD *)(v163 + 8) + 104LL) & v343) != 0 )
        {
          v344 = *(_QWORD *)(v162 + 8LL * (unsigned int)v13[11]);
          *(_QWORD *)(v8 + 8) = v344;
          if ( (*(_QWORD *)(*(_QWORD *)(v344 + 8) + 104LL) & v343) != 0 )
          {
            v345 = *(_QWORD *)(v162 + 8LL * (unsigned int)v13[12]);
            *(_QWORD *)(v8 + 16) = v345;
            if ( (*(_QWORD *)(*(_QWORD *)(v345 + 8) + 104LL) & v343) != 0 )
            {
              v346 = *(_QWORD *)(v162 + 8LL * (unsigned int)v13[13]);
              *(_QWORD *)(v8 + 24) = v346;
              if ( (*(_QWORD *)(*(_QWORD *)(v346 + 8) + 104LL) & v343) != 0 )
              {
                v347 = *(_QWORD *)(v162 + 8LL * (unsigned int)v13[14]);
                *(_QWORD *)(v8 + 32) = v347;
                if ( (*(_QWORD *)(*(_QWORD *)(v347 + 8) + 104LL) & v343) != 0 )
                {
                  v348 = *(_QWORD *)(v162 + 8LL * (unsigned int)v13[15]);
                  *(_QWORD *)(v8 + 40) = v348;
                  if ( (*(_QWORD *)(*(_QWORD *)(v348 + 8) + 104LL) & v343) != 0 )
                  {
LABEL_153:
                    v164 = (_QWORD *)sub_8E7DB0(*v4);
                    v4[12] = v164;
                    if ( !v164 || !(unsigned __int8)sub_BA8170(*v4, *v164) )
                      goto LABEL_27;
                    v8 = v4[12];
                    v165 = *((_DWORD *)v4 + 20);
                    if ( v165 < *(_DWORD *)(v8 + 36) )
                      v165 = *(_DWORD *)(v8 + 36);
                    *((_DWORD *)v4 + 20) = v165;
                    if ( *(_QWORD *)(v4[1] + 912LL) )
                    {
                      v457[0] = (unsigned __int64)v8;
                      sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
                      v166 = v4[12];
                      v145 = v4[9];
                      v8 = v166;
                      if ( *(_QWORD *)(v4[1] + 912LL) && *(_WORD *)(v145 + 32) )
                      {
                        v167 = 0;
                        while ( 1 )
                        {
                          v168 = v167++;
                          v457[0] = _mm_unpacklo_epi64(
                                      _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v166 + 8 * v168 + 112) + 8LL)),
                                      (__m128i)*(unsigned __int64 *)(v166 + 8 * v168 + 112));
                          sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
                          v145 = v4[9];
                          if ( v167 >= *(unsigned __int16 *)(v145 + 32) )
                            break;
                          v166 = v4[12];
                        }
LABEL_123:
                        v8 = v4[12];
                      }
                    }
                    else
                    {
LABEL_355:
                      v145 = v4[9];
                    }
LABEL_124:
                    v13 = *(_DWORD **)(v145 + 8);
                    *(_QWORD *)(v4[4] + 8LL * *(unsigned int *)(v145 + 36)) = v8;
                    v4[9] = v13;
                    continue;
                  }
                }
              }
            }
          }
        }
LABEL_27:
        v25 = *((_DWORD *)v4 + 16);
        if ( !v25 )
          return 1;
LABEL_28:
        v26 = v4[7] + 40LL * (unsigned int)(v25 - 1);
        *((_DWORD *)v4 + 20) = *(_DWORD *)(v26 + 8);
        if ( *(_QWORD *)(v4[1] + 912LL) )
        {
          v27 = v4[16];
          if ( v27 )
            *(_DWORD *)(v27 - 4) = *(_DWORD *)(v26 + 12);
        }
        if ( v15 > 0x64 )
        {
          if ( (unsigned __int8)sub_8EAFC0(*v4) )
          {
            for ( m = *((_DWORD *)v4 + 16); m; *((_DWORD *)v4 + 16) = m )
            {
              v339 = v4[7] + 40LL * (unsigned int)--m;
              if ( **(_DWORD **)v339 == 28 )
              {
                v340 = *(_QWORD *)(v339 + 16);
                if ( v340 )
                {
                  *(_QWORD *)&v457[0] = v340;
                  sub_B9B550(v4 + 21, v457);
                  m = *((_DWORD *)v4 + 16) - 1;
                }
              }
            }
            return 0;
          }
          v15 = 0;
        }
        else
        {
          ++v15;
        }
        v13 = *(_DWORD **)v26;
        switch ( **(_DWORD **)v26 )
        {
          case 7:
            v57 = (unsigned int)v13[7];
            v58 = v4[4];
            v4[15] = v13;
            v59 = *((_QWORD *)v13 + 2);
            v60 = *(_QWORD *)(v58 + 8 * v57);
            v61 = *(_QWORD *)(v26 + 16);
            LODWORD(v57) = *((unsigned __int16 *)v13 + 12);
            v4[12] = v60;
            v62 = sub_B9BF50((__int64)v4, v59, v57, v60, *(_BYTE **)(v61 + 16));
            v4[14] = v62;
            if ( !v62 )
              goto LABEL_51;
            v8 = v4[15];
            v63 = *((_QWORD *)v62 + 14);
            *(_QWORD *)(v26 + 16) = v62;
            v64 = v4[4];
            v65 = *(unsigned int *)(v8 + 32);
            v13 = *(_DWORD **)(v8 + 8);
            *((_DWORD *)v4 + 23) = v65;
            *(_QWORD *)(v64 + 8 * v65) = v63;
            v4[9] = v13;
            continue;
          case 8:
            v48 = (unsigned int)v13[7];
            v49 = v4[4];
            v4[15] = v13;
            v50 = *((_QWORD *)v13 + 2);
            v51 = *(_QWORD *)(v49 + 8 * v48);
            v52 = *(_QWORD *)(v26 + 16);
            LODWORD(v48) = *((unsigned __int16 *)v13 + 12);
            v4[12] = v51;
            v53 = sub_B9BF50((__int64)v4, v50, v48, v51, *(_BYTE **)(v52 + 16));
            v4[14] = v53;
            if ( !v53 )
              goto LABEL_51;
            v8 = v4[15];
            v54 = *((_QWORD *)v53 + 14);
            *(_QWORD *)(v26 + 16) = v53;
            v55 = v4[4];
            v56 = *(unsigned int *)(v8 + 32);
            v13 = *(_DWORD **)(v8 + 8);
            *((_DWORD *)v4 + 23) = v56;
            *(_QWORD *)(v55 + 8 * v56) = v54;
            *(_QWORD *)(v55 + 8LL * (unsigned int)(v56 + 1)) = *(_QWORD *)(v4[14] + 120LL);
            v4[9] = v13;
            continue;
          case 9:
            v39 = (unsigned int)v13[7];
            v40 = v4[4];
            v4[15] = v13;
            v41 = *((_QWORD *)v13 + 2);
            v42 = *(_QWORD *)(v40 + 8 * v39);
            v43 = *(_QWORD *)(v26 + 16);
            LODWORD(v39) = *((unsigned __int16 *)v13 + 12);
            v4[12] = v42;
            v44 = sub_B9BF50((__int64)v4, v41, v39, v42, *(_BYTE **)(v43 + 16));
            v4[14] = v44;
            if ( !v44 )
              goto LABEL_51;
            v8 = v4[15];
            v45 = *((_QWORD *)v44 + 14);
            *(_QWORD *)(v26 + 16) = v44;
            v46 = v4[4];
            v47 = *(unsigned int *)(v8 + 32);
            v13 = *(_DWORD **)(v8 + 8);
            *((_DWORD *)v4 + 23) = v47;
            *(_QWORD *)(v46 + 8 * v47) = v45;
            *(_QWORD *)(v46 + 8LL * (unsigned int)(v47 + 1)) = *(_QWORD *)(v4[14] + 120LL);
            *(_QWORD *)(v46 + 8LL * (unsigned int)(v47 + 2)) = *(_QWORD *)(v4[14] + 128LL);
            v4[9] = v13;
            continue;
          case 0xA:
            v33 = (unsigned int)v13[7];
            v34 = v4[4];
            v4[15] = v13;
            v35 = *((_QWORD *)v13 + 2);
            v36 = *(_QWORD *)(v34 + 8 * v33);
            v37 = *(_QWORD *)(v26 + 16);
            LODWORD(v33) = *((unsigned __int16 *)v13 + 12);
            v4[12] = v36;
            v38 = sub_B9BF50((__int64)v4, v35, v33, v36, *(_BYTE **)(v37 + 16));
            v4[14] = v38;
            if ( !v38 )
              goto LABEL_51;
            v8 = v4[15];
            v378 = *((_QWORD *)v38 + 14);
            *(_QWORD *)(v26 + 16) = v38;
            v379 = v4[4];
            v380 = *(unsigned int *)(v8 + 32);
            v13 = *(_DWORD **)(v8 + 8);
            *((_DWORD *)v4 + 23) = v380;
            *(_QWORD *)(v379 + 8 * v380) = v378;
            *(_QWORD *)(v379 + 8LL * (unsigned int)(v380 + 1)) = *(_QWORD *)(v4[14] + 120LL);
            *(_QWORD *)(v379 + 8LL * (unsigned int)(v380 + 2)) = *(_QWORD *)(v4[14] + 128LL);
            *(_QWORD *)(v379 + 8LL * (unsigned int)(v380 + 3)) = *(_QWORD *)(v4[14] + 136LL);
            v4[9] = v13;
            continue;
          case 0xB:
            v75 = (unsigned int)v13[7];
            v76 = v4[4];
            v4[15] = v13;
            v77 = *((_QWORD *)v13 + 2);
            v78 = *(_QWORD *)(v76 + 8 * v75);
            v79 = *(_QWORD *)(v26 + 16);
            LODWORD(v75) = *((unsigned __int16 *)v13 + 12);
            v4[12] = v78;
            v80 = sub_B9BF50((__int64)v4, v77, v75, v78, *(_BYTE **)(v79 + 16));
            v4[14] = v80;
            if ( !v80 )
              goto LABEL_51;
            v8 = v4[15];
            v81 = *((_QWORD *)v80 + 14);
            *(_QWORD *)(v26 + 16) = v80;
            v82 = v4[4];
            v83 = *(unsigned int *)(v8 + 32);
            v13 = *(_DWORD **)(v8 + 8);
            *((_DWORD *)v4 + 23) = v83;
            *(_QWORD *)(v82 + 8 * v83) = v81;
            *(_QWORD *)(v82 + 8LL * (unsigned int)(v83 + 1)) = *(_QWORD *)(v4[14] + 120LL);
            *(_QWORD *)(v82 + 8LL * (unsigned int)(v83 + 2)) = *(_QWORD *)(v4[14] + 128LL);
            *(_QWORD *)(v82 + 8LL * (unsigned int)(v83 + 3)) = *(_QWORD *)(v4[14] + 136LL);
            *(_QWORD *)(v82 + 8LL * (unsigned int)(v83 + 4)) = *(_QWORD *)(v4[14] + 144LL);
            v4[9] = v13;
            continue;
          case 0xC:
            v66 = (unsigned int)v13[7];
            v67 = v4[4];
            v4[15] = v13;
            v68 = *((_QWORD *)v13 + 2);
            v69 = *(_QWORD *)(v67 + 8 * v66);
            v70 = *(_QWORD *)(v26 + 16);
            LODWORD(v66) = *((unsigned __int16 *)v13 + 12);
            v4[12] = v69;
            v71 = sub_B9BF50((__int64)v4, v68, v66, v69, *(_BYTE **)(v70 + 16));
            v4[14] = v71;
            if ( !v71 )
              goto LABEL_51;
            v8 = v4[15];
            v72 = *((_QWORD *)v71 + 14);
            *(_QWORD *)(v26 + 16) = v71;
            v73 = v4[4];
            v74 = *(unsigned int *)(v8 + 32);
            v13 = *(_DWORD **)(v8 + 8);
            *((_DWORD *)v4 + 23) = v74;
            *(_QWORD *)(v73 + 8 * v74) = v72;
            *(_QWORD *)(v73 + 8LL * (unsigned int)(v74 + 1)) = *(_QWORD *)(v4[14] + 120LL);
            *(_QWORD *)(v73 + 8LL * (unsigned int)(v74 + 2)) = *(_QWORD *)(v4[14] + 128LL);
            *(_QWORD *)(v73 + 8LL * (unsigned int)(v74 + 3)) = *(_QWORD *)(v4[14] + 136LL);
            *(_QWORD *)(v73 + 8LL * (unsigned int)(v74 + 4)) = *(_QWORD *)(v4[14] + 144LL);
            *(_QWORD *)(v73 + 8LL * (unsigned int)(v74 + 5)) = *(_QWORD *)(v4[14] + 152LL);
            v4[9] = v13;
            continue;
          case 0xD:
            v84 = (unsigned int)v13[7];
            v85 = v4[4];
            v4[15] = v13;
            v86 = *((_QWORD *)v13 + 2);
            v87 = *(_QWORD *)(v85 + 8 * v84);
            v88 = *(_QWORD *)(v26 + 16);
            LODWORD(v84) = *((unsigned __int16 *)v13 + 12);
            v4[12] = v87;
            v89 = sub_B9BF50((__int64)v4, v86, v84, v87, *(_BYTE **)(v88 + 16));
            v4[14] = v89;
            if ( !v89 )
              goto LABEL_51;
            v8 = v4[15];
            *(_QWORD *)(v26 + 16) = v89;
            v90 = *(_DWORD *)(v8 + 32);
            v91 = *(unsigned __int16 *)(v8 + 24);
            v4[11] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v91), _mm_cvtsi32_si128(v90)).m128i_u64[0];
            if ( v91 )
            {
              v9 = v4[4];
              *(_QWORD *)(v9 + 8LL * v90) = *((_QWORD *)v89 + 14);
              if ( v91 != 1 )
              {
                for ( n = 1; n != v91; ++n )
                {
                  v10 = *(_QWORD *)(v4[14] + 8LL * n + 112);
                  v93 = v90 + n;
                  *(_QWORD *)(v9 + 8 * v93) = v10;
                }
              }
            }
            goto LABEL_68;
          case 0x1A:
            v13 = *((_DWORD **)v13 + 2);
            --*((_DWORD *)v4 + 16);
            v4[9] = v13;
            continue;
          case 0x1C:
            v29 = *(_BYTE ***)(v26 + 32);
            v30 = (_BYTE **)(*(_QWORD *)(v26 + 24) + 8LL);
            *(_QWORD *)(v26 + 24) = v30;
            if ( v30 == v29 )
              goto LABEL_46;
            break;
          default:
            sub_1872CE0("");
            sub_1873130(114, 2841);
        }
        while ( 2 )
        {
          v31 = *v30;
          v8 = 0;
          v4[14] = *v30;
          if ( (v31[44] & 8) == 0 )
            v8 = *(unsigned int *)(*(_QWORD *)v31 + 24LL);
          if ( *((unsigned __int16 *)v13 + 12) != (_DWORD)v8 )
          {
            *(_QWORD *)(v26 + 24) = ++v30;
            if ( v30 == v29 )
              goto LABEL_46;
LABEL_39:
            v13 = *(_DWORD **)v26;
            continue;
          }
          break;
        }
        v32 = *v4;
        v437 = *(_QWORD *)v31;
        if ( !(unsigned int)sub_8E7030(*v4)
          || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v32 + 7488) + 56LL))(
               *(_QWORD *)(v32 + 7488),
               v437) )
        {
          v16 = v4[18];
          v17 = v4[20];
          if ( v16 )
          {
            v18 = *(_DWORD *)(v16 - 4);
            if ( v17 )
              goto LABEL_16;
            v19 = 0;
          }
          else
          {
            if ( !v17 )
              BUG();
            v18 = 0;
LABEL_16:
            v19 = *(_DWORD *)(v17 - 4);
          }
          if ( v19 == v18 )
          {
            --*(_DWORD *)(v17 - 4);
            --*(_DWORD *)(v4[19] - 4LL);
          }
          --*(_DWORD *)(v16 - 4);
          sub_B9CC80(v441, v4 + 14);
          v8 = v4[14];
          v20 = *((_DWORD *)v4 + 20);
          if ( v20 < *(_DWORD *)(v8 + 36) )
            v20 = *(_DWORD *)(v8 + 36);
          *((_DWORD *)v4 + 20) = v20;
          if ( *(_QWORD *)(v4[1] + 912LL) )
          {
            v457[0] = (unsigned __int64)v8;
            sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
          }
          v21 = *((unsigned __int16 *)v13 + 12);
          v22 = v13[7];
          v4[11] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v22)).m128i_u64[0];
          if ( v21 )
          {
            v9 = v4[4];
            for ( ii = 0; ii != v21; ++ii )
            {
              v8 = *(_QWORD *)(v4[14] + 8LL * ii + 112);
              v24 = v22 + ii;
              *(_QWORD *)(v9 + 8 * v24) = v8;
            }
          }
LABEL_26:
          v13 = *((_DWORD **)v13 + 1);
          v4[9] = v13;
          if ( v13 )
            goto LABEL_13;
          goto LABEL_27;
        }
        v29 = *(_BYTE ***)(v26 + 32);
        v30 = (_BYTE **)(*(_QWORD *)(v26 + 24) + 8LL);
        *(_QWORD *)(v26 + 24) = v30;
        if ( v30 != v29 )
          goto LABEL_39;
LABEL_46:
        if ( *(_QWORD *)(v26 + 16) )
        {
          *(_QWORD *)&v457[0] = *(_QWORD *)(v26 + 16);
          sub_B9B550(v4 + 21, v457);
          v25 = *((_DWORD *)v4 + 16) - 1;
          *((_DWORD *)v4 + 16) = v25;
          if ( !v25 )
            return 1;
          goto LABEL_28;
        }
LABEL_51:
        v25 = *((_DWORD *)v4 + 16) - 1;
        *((_DWORD *)v4 + 16) = v25;
        if ( v25 )
          goto LABEL_28;
        return 1;
      case 0x24:
        v326 = *((unsigned __int16 *)v13 + 16);
        v327 = v4[6];
        *((_DWORD *)v4 + 22) = v326;
        if ( v327 )
        {
          v10 = (unsigned int)v326;
          if ( *(_DWORD *)(v327 - 4) >= (unsigned int)v326 )
            goto LABEL_284;
        }
        else if ( !(_DWORD)v326 )
        {
          goto LABEL_287;
        }
        sub_BA8300(v4 + 6, v326, 0, v8, v327, v10);
        v13 = (_DWORD *)v4[9];
        LODWORD(v326) = *((_DWORD *)v4 + 22);
        v327 = v4[6];
LABEL_284:
        if ( (_DWORD)v326 )
        {
          v328 = v4[4];
          v329 = 0;
          do
          {
            *(_QWORD *)(v327 + 2 * v329) = *(_QWORD *)(v328 + 8LL * (unsigned int)v13[v329 / 4 + 10]);
            v329 += 4LL;
          }
          while ( v329 != 4LL * (unsigned int)v326 );
        }
LABEL_287:
        v330 = (_QWORD *)sub_8E7DB0(*v4);
        v4[12] = v330;
        if ( !v330 || !(unsigned __int8)sub_BA8170(*v4, *v330) )
          goto LABEL_27;
        v8 = v4[12];
        v331 = *((_DWORD *)v4 + 20);
        if ( v331 < *(_DWORD *)(v8 + 36) )
          v331 = *(_DWORD *)(v8 + 36);
        *((_DWORD *)v4 + 20) = v331;
        if ( !*(_QWORD *)(v4[1] + 912LL) )
          goto LABEL_355;
        v457[0] = (unsigned __int64)v8;
        sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
        v332 = v4[12];
        v145 = v4[9];
        v8 = v332;
        if ( !*(_QWORD *)(v4[1] + 912LL) || !*(_WORD *)(v145 + 32) )
          goto LABEL_124;
        v333 = 0;
        while ( 1 )
        {
          v334 = v333++;
          v457[0] = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v332 + 8 * v334 + 112) + 8LL)),
                      (__m128i)*(unsigned __int64 *)(v332 + 8 * v334 + 112));
          sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
          v145 = v4[9];
          if ( v333 >= *(unsigned __int16 *)(v145 + 32) )
            break;
          v332 = v4[12];
        }
        goto LABEL_123;
      case 0x25:
        v309 = v4[4];
        v8 = *((unsigned __int16 *)v13 + 16);
        v310 = *((_QWORD *)v13 + 3);
        v311 = *(unsigned int **)(v309 + 8LL * (unsigned int)v13[4]);
        v312 = (__int64 *)v4[6];
        if ( (_WORD)v8 == 1 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(v309 + 8LL * (unsigned int)v13[9]) + 8LL);
          v364 = *(unsigned int **)(v309 + 8LL * (unsigned int)v13[4]);
          *v312 = v8;
          while ( v310 != *(_QWORD *)(*(_QWORD *)v364 + 16LL) || v8 != *(_QWORD *)(*((_QWORD *)v364 + 14) + 8LL) )
          {
            v364 = *((unsigned int **)v364 + 2);
            if ( v311 == v364 )
              goto LABEL_27;
          }
          v368 = *((_DWORD *)v4 + 20);
          v8 = v364[9];
          if ( v368 < (unsigned int)v8 )
            v368 = v364[9];
          *((_DWORD *)v4 + 20) = v368;
          if ( !*(_QWORD *)(v4[1] + 912LL) )
            goto LABEL_26;
        }
        else
        {
          if ( (_WORD)v8 != 2 )
          {
            v313 = (unsigned int)(v8 + 1);
            if ( !v312 || *((_DWORD *)v312 - 1) < (unsigned int)v313 )
            {
              v439 = *((unsigned __int16 *)v13 + 16);
              sub_BA8300(v4 + 6, v313, 0, v8, v9, v10);
              v8 = v439;
            }
            if ( (_DWORD)v8 )
            {
              v314 = v4[4];
              v315 = v4[6];
              v316 = 0;
              do
              {
                *(_QWORD *)(v315 + 8 * v316) = *(_QWORD *)(*(_QWORD *)(v314 + 8LL * (unsigned int)v13[v316 + 9]) + 8LL);
                ++v316;
              }
              while ( (unsigned int)v316 < (unsigned int)v8 );
            }
            v317 = v311;
            while ( 1 )
            {
              if ( v310 == *(_QWORD *)(*(_QWORD *)v317 + 16LL) )
              {
                if ( (v317[11] & 8) != 0 )
                {
                  if ( !(_DWORD)v8 )
                    goto LABEL_269;
                }
                else if ( (_DWORD)v8 == *(_DWORD *)(*(_QWORD *)v317 + 24LL) )
                {
                  if ( !(_DWORD)v8 )
                    goto LABEL_269;
                  v366 = 0;
                  do
                  {
                    v367 = v366;
                    if ( *(_QWORD *)(*(_QWORD *)&v317[2 * v366 + 28] + 8LL) != *(_QWORD *)(v4[6] + 8 * v366) )
                      goto LABEL_361;
                    ++v366;
                  }
                  while ( (unsigned int)v366 < (unsigned int)v8 );
                  ++v367;
LABEL_361:
                  if ( v367 == (_DWORD)v8 )
                  {
LABEL_269:
                    v318 = *((_DWORD *)v4 + 20);
                    if ( v318 < v317[9] )
                      v318 = v317[9];
                    *((_DWORD *)v4 + 20) = v318;
                    if ( *(_QWORD *)(v4[1] + 912LL) )
                    {
                      v319 = (_QWORD *)v4[16];
                      if ( v319 )
                      {
                        v320 = *((_DWORD *)v319 - 2);
                        if ( *((_DWORD *)v319 - 1) == v320 )
                        {
                          v422 = (3 * v320 + 1) >> 1;
                          v423 = 16 * v422 + 8;
                          if ( 16 * v320 + 8 >= v423 || v320 >= v422 )
                          {
                            exception = (char **)__cxa_allocate_exception(0x28u);
                            sub_151CF2((char **)v457);
                            *exception = (char *)off_1C63128;
                            sub_2333C0(exception + 1, v457);
                            sub_233E40((__int64)v457);
                            __cxa_throw(
                              exception,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v424 = sub_186B270(v423);
                          v425 = (__int64 *)v4[16];
                          v426 = (_DWORD *)v424;
                          v319 = (_QWORD *)(v424 + 8);
                          if ( v425 )
                          {
                            v427 = *((unsigned int *)v425 - 1);
                            v426[1] = v427;
                            v428 = &v425[2 * v427];
                            if ( v425 != v428 )
                            {
                              v429 = v425;
                              v430 = v319;
                              do
                              {
                                v431 = *v429;
                                v429 += 2;
                                v430 += 2;
                                *(v430 - 2) = v431;
                                *(v430 - 1) = *(v429 - 1);
                              }
                              while ( v429 != v428 );
                            }
                            v440 = v319;
                            sub_186B220(v425 - 1);
                            v319 = v440;
                          }
                          else
                          {
                            v426[1] = 0;
                          }
                          v4[16] = v319;
                          *v426 = v422;
                        }
                      }
                      else
                      {
                        v432 = (_QWORD *)sub_186B270(0x28u);
                        *v432 = 2;
                        v319 = v432 + 1;
                        v4[16] = v319;
                      }
                      v321 = *((_DWORD *)v319 - 1);
                      v8 = 16LL * v321;
                      *(__m128i *)((char *)v319 + v8) = _mm_unpacklo_epi64(
                                                          (__m128i)(unsigned __int64)v317,
                                                          (__m128i)(unsigned __int64)v311);
                      *((_DWORD *)v319 - 1) = v321 + 1;
                    }
                    v13 = (_DWORD *)v4[9];
                    goto LABEL_26;
                  }
                }
              }
              v317 = *((unsigned int **)v317 + 2);
              if ( v311 == v317 )
                goto LABEL_27;
            }
          }
          v362 = *(_QWORD *)(*(_QWORD *)(v309 + 8LL * (unsigned int)v13[9]) + 8LL);
          v363 = (unsigned int)v13[10];
          *v312 = v362;
          v8 = *(_QWORD *)(*(_QWORD *)(v309 + 8 * v363) + 8LL);
          v364 = v311;
          v312[1] = v8;
          while ( v310 != *(_QWORD *)(*(_QWORD *)v364 + 16LL)
               || v362 != *(_QWORD *)(*((_QWORD *)v364 + 14) + 8LL)
               || v8 != *(_QWORD *)(*((_QWORD *)v364 + 15) + 8LL) )
          {
            v364 = *((unsigned int **)v364 + 2);
            if ( v311 == v364 )
              goto LABEL_27;
          }
          v365 = *((_DWORD *)v4 + 20);
          v8 = v364[9];
          if ( v365 < (unsigned int)v8 )
            v365 = v364[9];
          *((_DWORD *)v4 + 20) = v365;
          if ( !*(_QWORD *)(v4[1] + 912LL) )
            goto LABEL_26;
        }
        v337 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v364, (__m128i)(unsigned __int64)v311);
LABEL_305:
        v457[0] = v337;
        sub_B9BD60((__int64 **)v4 + 16, (__int64 *)v457);
        v13 = (_DWORD *)v4[9];
        goto LABEL_26;
      default:
        goto LABEL_27;
    }
  }
}

