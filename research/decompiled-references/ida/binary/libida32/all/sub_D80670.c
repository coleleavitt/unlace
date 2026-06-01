__int64 __fastcall sub_D80670(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // rbx
  _QWORD *v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebp
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  _DWORD *v23; // rax
  __int64 v24; // rdi
  int v25; // edx
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rax
  unsigned __int8 **v37; // rbx
  unsigned __int8 *v38; // r12
  __int64 v39; // r15
  unsigned __int8 *v40; // rdx
  __int64 v41; // rax
  unsigned __int8 *v42; // r12
  unsigned __int8 *v43; // rdx
  __int64 v44; // rax
  unsigned __int8 *v45; // r12
  unsigned __int8 *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int8 *v49; // r12
  __int64 v50; // r14
  unsigned __int8 *v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // r15
  __int64 v56; // r13
  void *v57; // rdi
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  __int64 v61; // r13
  __int64 v62; // rax
  unsigned __int8 *v63; // r12
  __int64 v64; // r15
  unsigned __int8 *v65; // rdx
  __int64 v66; // rax
  unsigned __int8 *v67; // r12
  unsigned __int8 *v68; // rdx
  __int64 v69; // rax
  unsigned __int8 *v70; // r12
  unsigned __int8 *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v76; // r13
  __int64 v77; // rax
  unsigned __int8 **v78; // rbx
  unsigned __int8 *v79; // rbp
  unsigned __int8 *v80; // rdx
  __int64 v81; // rax
  unsigned __int8 *v82; // rbp
  unsigned __int8 *v83; // rdx
  __int64 v84; // rax
  unsigned __int8 *v85; // rbp
  unsigned __int8 *v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned __int8 *v89; // rbp
  __int64 v90; // r13
  __int64 v91; // rax
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // r13
  __int64 v96; // rax
  unsigned __int8 *v97; // r12
  __int64 v98; // r15
  unsigned __int8 *v99; // rdx
  __int64 v100; // rax
  unsigned __int8 *v101; // r12
  unsigned __int8 *v102; // rdx
  __int64 v103; // rax
  unsigned __int8 *v104; // r12
  unsigned __int8 *v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rax
  unsigned __int8 *v108; // rdx
  int v109; // eax
  __int64 v110; // rax
  __int64 v111; // r13
  __int64 v112; // r15
  __int64 v113; // r13
  void *v114; // rdi
  __int64 v115; // r13
  __int64 v116; // rax
  unsigned __int8 **v117; // rbx
  unsigned __int8 *v118; // r12
  __int64 v119; // r15
  unsigned __int8 *v120; // rdx
  __int64 v121; // rax
  unsigned __int8 *v122; // r12
  unsigned __int8 *v123; // rdx
  __int64 v124; // rax
  unsigned __int8 *v125; // r12
  unsigned __int8 *v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // r14
  unsigned __int64 v130; // rcx
  char v131; // al
  unsigned __int64 v132; // rax
  _QWORD **v133; // rdi
  __int64 (__fastcall *v134)(__int64); // rax
  __int64 v135; // rax
  unsigned __int64 v136; // rax
  __int64 *v137; // rbx
  __int64 v138; // r13
  _QWORD **v139; // rdi
  __int64 (__fastcall *v140)(__int64); // rax
  _QWORD *v141; // rbx
  unsigned int v142; // r15d
  _QWORD *v143; // rdi
  __int64 v144; // r9
  unsigned __int64 v145; // rdx
  __int64 v146; // rax
  unsigned __int64 v147; // rdx
  unsigned __int64 v148; // rax
  unsigned __int8 *v149; // rdx
  int v150; // eax
  __int64 v151; // rdx
  int v152; // eax
  unsigned __int8 *v153; // rdx
  int v154; // eax
  __int64 v155; // rax
  __int64 v156; // r10
  unsigned __int64 v157; // rdx
  __int64 v158; // rax
  unsigned __int64 v159; // rdx
  unsigned __int64 v160; // rax
  _DWORD *v161; // rsi
  __int64 v162; // rdi
  int v163; // eax
  __int64 v164; // rdi
  int v165; // eax
  unsigned __int8 *v166; // rdx
  int v167; // eax
  unsigned __int8 *v168; // rdx
  int v169; // eax
  unsigned __int8 *v170; // rdx
  int v171; // eax
  __int64 v172; // rax
  __int64 v173; // rdx
  int v174; // eax
  unsigned __int8 *v175; // rdx
  int v176; // eax
  unsigned __int8 *v177; // rdx
  int v178; // eax
  __int64 v179; // rax
  __int64 v180; // r13
  __int64 v181; // r15
  __int64 v182; // r13
  void *v183; // rdi
  __int64 v184; // rdx
  int v185; // eax
  unsigned __int8 *v186; // rdx
  int v187; // eax
  unsigned int v188; // r14d
  unsigned __int64 v189; // rax
  unsigned __int64 v190; // r15
  __int64 v191; // rax
  unsigned __int8 **v192; // rbp
  unsigned __int8 *v193; // r12
  unsigned __int8 *v194; // rdx
  __int64 v195; // rax
  unsigned __int8 *v196; // r12
  unsigned __int8 *v197; // rdx
  __int64 v198; // rax
  unsigned __int64 v199; // r12
  unsigned __int8 *v200; // rbx
  unsigned __int8 *v201; // rax
  __int64 v202; // rdx
  unsigned __int8 *v203; // rbx
  __int64 v204; // rax
  unsigned __int64 v205; // rcx
  unsigned __int64 v206; // rdx
  __int64 v207; // rax
  __int64 v208; // rax
  unsigned __int64 v209; // rsi
  __int64 v210; // rax
  unsigned __int64 v211; // rsi
  unsigned __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // r12
  __int64 v215; // r15
  __int64 v216; // r12
  void *v217; // rdi
  __int64 v218; // rax
  __int64 v219; // r12
  __int64 v220; // r14
  __int64 v221; // r12
  void *v222; // rdi
  __int64 v223; // rax
  __int64 v224; // r12
  __int64 v225; // r14
  __int64 v226; // r12
  void *v227; // rdi
  __int64 v228; // rax
  __int64 v229; // r12
  __int64 v230; // r14
  __int64 v231; // r12
  void *v232; // rdi
  __int64 v233; // rax
  __int64 v234; // r14
  __int64 v235; // r15
  __int64 v236; // r14
  void *v237; // rdi
  __int64 v238; // rax
  __int64 v239; // r14
  __int64 v240; // r15
  __int64 v241; // r14
  void *v242; // rdi
  __int64 v243; // rax
  __int64 v244; // r14
  __int64 v245; // rdx
  __int64 v246; // r14
  void *v247; // rdi
  unsigned __int8 *v248; // rdx
  int v249; // eax
  __int64 v250; // rax
  unsigned __int8 *v251; // rdx
  int v252; // eax
  unsigned __int8 *v253; // rdx
  int v254; // eax
  __int64 v255; // rdx
  int v256; // eax
  __int64 v257; // rax
  __int64 v258; // r13
  __int64 v259; // r15
  __int64 v260; // r13
  void *v261; // rdi
  __int64 v262; // rax
  __int64 v263; // r14
  __int64 v264; // r15
  __int64 v265; // r14
  void *v266; // rdi
  __int64 v267; // rax
  __int64 v268; // r14
  __int64 v269; // r15
  __int64 v270; // r14
  void *v271; // rdi
  __int64 v272; // rax
  __int64 v273; // r14
  __int64 v274; // rdx
  __int64 v275; // r14
  void *v276; // rdi
  __int64 v277; // rax
  __int64 v278; // rax
  unsigned __int8 **v279; // r14
  unsigned __int8 *v280; // r12
  unsigned __int8 *v281; // rdx
  __int64 v282; // rax
  __int64 v283; // rcx
  unsigned __int8 *v284; // r12
  unsigned __int8 *v285; // rdx
  __int64 v286; // rax
  unsigned __int8 *v287; // r12
  unsigned __int8 *v288; // rdx
  __int64 v289; // rax
  __int64 v290; // rax
  unsigned __int8 *v291; // rbx
  __int64 v292; // r13
  unsigned __int8 *v293; // rdx
  __int64 v294; // rax
  __int64 v295; // rax
  __int64 v296; // r14
  __int64 v297; // rdx
  __int64 v298; // r14
  void *v299; // rdi
  __int64 v300; // rax
  __int64 v301; // r14
  __int64 v302; // r15
  __int64 v303; // r14
  void *v304; // rdi
  __int64 v305; // rax
  __int64 v306; // r14
  __int64 v307; // r15
  __int64 v308; // r14
  void *v309; // rdi
  __int64 v310; // rdx
  int v311; // eax
  unsigned __int8 *v312; // rdx
  int v313; // eax
  unsigned __int8 *v314; // rdx
  int v315; // eax
  __int64 v316; // rbx
  __int64 v317; // rax
  unsigned __int8 **v318; // rax
  unsigned __int8 *v319; // rdx
  int v320; // eax
  __int64 v321; // rdx
  int v322; // eax
  unsigned __int8 *v323; // rdx
  int v324; // eax
  __int64 v325; // rax
  unsigned __int8 *v326; // rdx
  int v327; // eax
  __int64 v328; // rax
  __int64 v329; // r14
  __int64 v330; // r15
  __int64 v331; // r14
  void *v332; // rdi
  __int64 v333; // rax
  __int64 v334; // r14
  __int64 v335; // rdx
  __int64 v336; // r14
  void *v337; // rdi
  __int64 v338; // rax
  __int64 v339; // r14
  __int64 v340; // r15
  __int64 v341; // r14
  void *v342; // rdi
  __int64 v343; // r13
  __int64 v344; // r14
  __int64 *v345; // rax
  __int64 *v346; // r12
  _BYTE *v347; // rdx
  __int64 v348; // rax
  _BYTE *v349; // rdx
  __int64 v350; // rax
  __int64 v351; // r15
  unsigned __int64 v352; // r15
  _BYTE *v353; // rdx
  __int64 v354; // rax
  _BYTE *v355; // rbx
  __int64 v356; // rax
  __int64 v357; // rax
  __int64 v358; // rax
  __int64 v359; // r13
  __int64 v360; // r15
  __int64 v361; // r13
  void *v362; // rdi
  __int64 v363; // rax
  __int64 v364; // r13
  __int64 v365; // rdx
  __int64 v366; // r13
  void *v367; // rdi
  __int64 v368; // rax
  __int64 v369; // r12
  __int64 v370; // r13
  __int64 v371; // r12
  void *v372; // rdi
  __int64 v373; // rax
  __int64 v374; // r13
  __int64 v375; // r15
  __int64 v376; // r13
  void *v377; // rdi
  unsigned __int8 *v378; // rdx
  int v379; // eax
  __int64 v380; // rdx
  int v381; // eax
  unsigned __int8 *v382; // rdx
  int v383; // eax
  unsigned __int8 *v384; // rdx
  int v385; // eax
  __int64 v386; // rax
  __int64 v387; // r12
  __int64 v388; // r15
  __int64 v389; // r12
  void *v390; // rdi
  __int64 v391; // rax
  __int64 v392; // r15
  __int64 v393; // rax
  __int64 v394; // r15
  void *v395; // rdi
  __int64 v396; // rax
  __int64 v397; // r15
  __int64 v398; // rax
  __int64 v399; // r15
  void *v400; // rdi
  __int64 v401; // rax
  __int64 v402; // r15
  __int64 v403; // rax
  __int64 v404; // r15
  void *v405; // rdi
  unsigned __int8 *v406; // rdx
  int v407; // eax
  __int64 v408; // rbx
  __int64 v409; // rax
  __int64 v410; // rcx
  unsigned __int8 *v411; // rdx
  int v412; // eax
  __int64 v413; // r14
  __int64 v414; // rax
  __int64 v415; // rcx
  __int64 v416; // rdx
  int v417; // eax
  __int64 v418; // r15
  __int64 v419; // rax
  __int64 v420; // rcx
  unsigned __int8 *v421; // rdx
  int v422; // eax
  __int64 v423; // rbx
  __int64 v424; // rax
  __int64 v425; // rcx
  __int64 v426; // rax
  __int64 v427; // r14
  __int64 v428; // r15
  __int64 v429; // r14
  void *v430; // rdi
  __int64 v431; // rax
  __int64 v432; // rax
  __int64 v433; // rdx
  __int64 v434; // rax
  void *v435; // rdi
  __int64 v436; // rax
  __int64 v437; // r15
  __int64 v438; // rax
  __int64 v439; // r15
  void *v440; // rdi
  __int64 v441; // rax
  __int64 v442; // r14
  __int64 v443; // rax
  __int64 v444; // r14
  void *v445; // rdi
  __int64 v447; // [rsp+8h] [rbp-70h]
  __int64 v448; // [rsp+8h] [rbp-70h]
  __int64 v449; // [rsp+8h] [rbp-70h]
  __int64 v450; // [rsp+8h] [rbp-70h]
  __int64 v451; // [rsp+8h] [rbp-70h]
  __int64 v452; // [rsp+8h] [rbp-70h]
  __int64 v453; // [rsp+8h] [rbp-70h]
  __int64 v454; // [rsp+8h] [rbp-70h]
  __int64 v455; // [rsp+8h] [rbp-70h]
  __int64 v456; // [rsp+8h] [rbp-70h]
  __int64 v457; // [rsp+8h] [rbp-70h]
  __int64 v458; // [rsp+8h] [rbp-70h]
  __int64 v459; // [rsp+10h] [rbp-68h]
  _QWORD *v460; // [rsp+10h] [rbp-68h]
  unsigned int v461; // [rsp+10h] [rbp-68h]
  __int64 v462; // [rsp+10h] [rbp-68h]
  __int64 v463; // [rsp+10h] [rbp-68h]
  __int64 v464; // [rsp+10h] [rbp-68h]
  __int64 v465; // [rsp+10h] [rbp-68h]
  __int64 v466; // [rsp+10h] [rbp-68h]
  __int64 v467; // [rsp+10h] [rbp-68h]
  __int64 v468; // [rsp+10h] [rbp-68h]
  __int64 v469; // [rsp+18h] [rbp-60h]
  unsigned int v470; // [rsp+18h] [rbp-60h]
  unsigned __int64 v471; // [rsp+20h] [rbp-58h]
  __int64 v472; // [rsp+20h] [rbp-58h]
  __int64 v473; // [rsp+20h] [rbp-58h]
  __int64 v474; // [rsp+28h] [rbp-50h]
  __int64 v475; // [rsp+28h] [rbp-50h]
  __int64 v476; // [rsp+34h] [rbp-44h]
  __int64 v477; // [rsp+34h] [rbp-44h]
  int v478; // [rsp+3Ch] [rbp-3Ch]

  v5 = a2;
  v7 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
     | ((unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a3) & 7;
  v8 = (_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v9 = sub_F3D6E0(*v8);
  if ( (_BYTE)v9 )
  {
    v76 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v77 = sub_E0FED0(a1, v76, 2387, 0);
    v78 = (unsigned __int8 **)v77;
    if ( v77 )
    {
      v79 = *(unsigned __int8 **)v77;
      if ( !*(_QWORD *)v77 )
      {
        v173 = *(_QWORD *)(v77 + 8);
        v174 = *(_DWORD *)(v173 + 14976);
        if ( v174 )
        {
          v213 = (unsigned int)(v174 - 1);
          *(_DWORD *)(v173 + 14976) = v213;
          v79 = *(unsigned __int8 **)(v173 + 8 * v213 + 14848);
          v214 = *((unsigned int *)v79 + 134);
          *v79 = 0;
          v215 = *((_QWORD *)v79 + 66);
          *((_DWORD *)v79 + 106) = 0;
          v216 = v215 + (v214 << 6);
          while ( v215 != v216 )
          {
            while ( 1 )
            {
              v216 -= 64;
              v217 = *(void **)(v216 + 24);
              if ( v217 == (void *)(v216 + 40) )
                break;
              operator delete(v217);
              if ( v215 == v216 )
                goto LABEL_193;
            }
          }
LABEL_193:
          *((_DWORD *)v79 + 134) = 0;
        }
        else
        {
          v79 = (unsigned __int8 *)operator new(0x3A0u);
          *v79 = 0;
          *((_QWORD *)v79 + 12) = v79 + 112;
          *((_QWORD *)v79 + 16) = v79 + 144;
          *((_QWORD *)v79 + 20) = v79 + 176;
          *((_QWORD *)v79 + 24) = v79 + 208;
          *((_QWORD *)v79 + 28) = v79 + 240;
          *((_QWORD *)v79 + 32) = v79 + 272;
          *((_QWORD *)v79 + 36) = v79 + 304;
          *((_QWORD *)v79 + 40) = v79 + 336;
          *((_QWORD *)v79 + 44) = v79 + 368;
          *((_QWORD *)v79 + 48) = v79 + 400;
          *((_QWORD *)v79 + 52) = v79 + 432;
          *((_QWORD *)v79 + 13) = 0;
          v79[112] = 0;
          *((_QWORD *)v79 + 17) = 0;
          v79[144] = 0;
          *((_QWORD *)v79 + 21) = 0;
          v79[176] = 0;
          *((_QWORD *)v79 + 25) = 0;
          v79[208] = 0;
          *((_QWORD *)v79 + 29) = 0;
          v79[240] = 0;
          *((_QWORD *)v79 + 33) = 0;
          v79[272] = 0;
          *((_QWORD *)v79 + 37) = 0;
          v79[304] = 0;
          *((_QWORD *)v79 + 41) = 0;
          v79[336] = 0;
          *((_QWORD *)v79 + 45) = 0;
          v79[368] = 0;
          *((_QWORD *)v79 + 49) = 0;
          v79[400] = 0;
          *((_QWORD *)v79 + 53) = 0x800000000LL;
          *((_QWORD *)v79 + 66) = v79 + 544;
          *((_QWORD *)v79 + 67) = 0x600000000LL;
        }
        *v78 = v79;
      }
      v79[*v79 + 1] = 2;
      v80 = *v78;
      v81 = **v78;
      *v80 = v81 + 1;
      *(_QWORD *)&v80[8 * v81 + 16] = a4;
      v82 = *v78;
      if ( !*v78 )
      {
        v168 = v78[1];
        v169 = *((_DWORD *)v168 + 3744);
        if ( v169 )
        {
          v218 = (unsigned int)(v169 - 1);
          *((_DWORD *)v168 + 3744) = v218;
          v82 = *(unsigned __int8 **)&v168[8 * v218 + 14848];
          v219 = *((unsigned int *)v82 + 134);
          *v82 = 0;
          v220 = *((_QWORD *)v82 + 66);
          *((_DWORD *)v82 + 106) = 0;
          v221 = v220 + (v219 << 6);
          while ( v220 != v221 )
          {
            while ( 1 )
            {
              v221 -= 64;
              v222 = *(void **)(v221 + 24);
              if ( v222 == (void *)(v221 + 40) )
                break;
              operator delete(v222);
              if ( v220 == v221 )
                goto LABEL_198;
            }
          }
LABEL_198:
          *((_DWORD *)v82 + 134) = 0;
        }
        else
        {
          v82 = (unsigned __int8 *)operator new(0x3A0u);
          *v82 = 0;
          *((_QWORD *)v82 + 12) = v82 + 112;
          *((_QWORD *)v82 + 16) = v82 + 144;
          *((_QWORD *)v82 + 20) = v82 + 176;
          *((_QWORD *)v82 + 24) = v82 + 208;
          *((_QWORD *)v82 + 28) = v82 + 240;
          *((_QWORD *)v82 + 32) = v82 + 272;
          *((_QWORD *)v82 + 36) = v82 + 304;
          *((_QWORD *)v82 + 40) = v82 + 336;
          *((_QWORD *)v82 + 44) = v82 + 368;
          *((_QWORD *)v82 + 48) = v82 + 400;
          *((_QWORD *)v82 + 52) = v82 + 432;
          *((_QWORD *)v82 + 13) = 0;
          v82[112] = 0;
          *((_QWORD *)v82 + 17) = 0;
          v82[144] = 0;
          *((_QWORD *)v82 + 21) = 0;
          v82[176] = 0;
          *((_QWORD *)v82 + 25) = 0;
          v82[208] = 0;
          *((_QWORD *)v82 + 29) = 0;
          v82[240] = 0;
          *((_QWORD *)v82 + 33) = 0;
          v82[272] = 0;
          *((_QWORD *)v82 + 37) = 0;
          v82[304] = 0;
          *((_QWORD *)v82 + 41) = 0;
          v82[336] = 0;
          *((_QWORD *)v82 + 45) = 0;
          v82[368] = 0;
          *((_QWORD *)v82 + 49) = 0;
          v82[400] = 0;
          *((_QWORD *)v82 + 53) = 0x800000000LL;
          *((_QWORD *)v82 + 66) = v82 + 544;
          *((_QWORD *)v82 + 67) = 0x600000000LL;
        }
        *v78 = v82;
      }
      v82[*v82 + 1] = 2;
      v83 = *v78;
      v84 = **v78;
      *v83 = v84 + 1;
      *(_QWORD *)&v83[8 * v84 + 16] = 0;
      v85 = *v78;
      if ( !*v78 )
      {
        v166 = v78[1];
        v167 = *((_DWORD *)v166 + 3744);
        if ( v167 )
        {
          v223 = (unsigned int)(v167 - 1);
          *((_DWORD *)v166 + 3744) = v223;
          v85 = *(unsigned __int8 **)&v166[8 * v223 + 14848];
          v224 = *((unsigned int *)v85 + 134);
          *v85 = 0;
          v225 = *((_QWORD *)v85 + 66);
          *((_DWORD *)v85 + 106) = 0;
          v226 = v225 + (v224 << 6);
          while ( v225 != v226 )
          {
            while ( 1 )
            {
              v226 -= 64;
              v227 = *(void **)(v226 + 24);
              if ( v227 == (void *)(v226 + 40) )
                break;
              operator delete(v227);
              if ( v225 == v226 )
                goto LABEL_203;
            }
          }
LABEL_203:
          *((_DWORD *)v85 + 134) = 0;
        }
        else
        {
          v85 = (unsigned __int8 *)operator new(0x3A0u);
          *v85 = 0;
          *((_QWORD *)v85 + 12) = v85 + 112;
          *((_QWORD *)v85 + 16) = v85 + 144;
          *((_QWORD *)v85 + 20) = v85 + 176;
          *((_QWORD *)v85 + 24) = v85 + 208;
          *((_QWORD *)v85 + 28) = v85 + 240;
          *((_QWORD *)v85 + 32) = v85 + 272;
          *((_QWORD *)v85 + 36) = v85 + 304;
          *((_QWORD *)v85 + 40) = v85 + 336;
          *((_QWORD *)v85 + 44) = v85 + 368;
          *((_QWORD *)v85 + 48) = v85 + 400;
          *((_QWORD *)v85 + 52) = v85 + 432;
          *((_QWORD *)v85 + 13) = 0;
          v85[112] = 0;
          *((_QWORD *)v85 + 17) = 0;
          v85[144] = 0;
          *((_QWORD *)v85 + 21) = 0;
          v85[176] = 0;
          *((_QWORD *)v85 + 25) = 0;
          v85[208] = 0;
          *((_QWORD *)v85 + 29) = 0;
          v85[240] = 0;
          *((_QWORD *)v85 + 33) = 0;
          v85[272] = 0;
          *((_QWORD *)v85 + 37) = 0;
          v85[304] = 0;
          *((_QWORD *)v85 + 41) = 0;
          v85[336] = 0;
          *((_QWORD *)v85 + 45) = 0;
          v85[368] = 0;
          *((_QWORD *)v85 + 49) = 0;
          v85[400] = 0;
          *((_QWORD *)v85 + 53) = 0x800000000LL;
          *((_QWORD *)v85 + 66) = v85 + 544;
          *((_QWORD *)v85 + 67) = 0x600000000LL;
        }
        *v78 = v85;
      }
      v85[*v85 + 1] = 2;
      v86 = *v78;
      v87 = **v78;
      *v86 = v87 + 1;
      *(_QWORD *)&v86[8 * v87 + 16] = 0;
      v88 = sub_EC8B80(v76);
      v89 = *v78;
      v90 = v88;
      if ( *v78 )
      {
        v91 = *((unsigned int *)v89 + 106);
        v92 = *((unsigned int *)v89 + 107);
        v93 = v91 + 1;
      }
      else
      {
        v170 = v78[1];
        v171 = *((_DWORD *)v170 + 3744);
        if ( v171 )
        {
          v228 = (unsigned int)(v171 - 1);
          *((_DWORD *)v170 + 3744) = v228;
          v89 = *(unsigned __int8 **)&v170[8 * v228 + 14848];
          v229 = *((unsigned int *)v89 + 134);
          *v89 = 0;
          v230 = *((_QWORD *)v89 + 66);
          *((_DWORD *)v89 + 106) = 0;
          v231 = v230 + (v229 << 6);
          if ( v230 == v231 )
          {
            v93 = 1;
            v91 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v231 -= 64;
                v232 = *(void **)(v231 + 24);
                if ( v232 == (void *)(v231 + 40) )
                  break;
                operator delete(v232);
                if ( v230 == v231 )
                  goto LABEL_207;
              }
            }
            while ( v230 != v231 );
LABEL_207:
            v91 = *((unsigned int *)v89 + 106);
            v93 = v91 + 1;
          }
          *((_DWORD *)v89 + 134) = 0;
          v92 = *((unsigned int *)v89 + 107);
        }
        else
        {
          v172 = operator new(0x3A0u);
          v92 = 8;
          v93 = 1;
          v89 = (unsigned __int8 *)v172;
          *(_BYTE *)v172 = 0;
          *(_QWORD *)(v172 + 96) = v172 + 112;
          *(_QWORD *)(v172 + 128) = v172 + 144;
          *(_QWORD *)(v172 + 160) = v172 + 176;
          *(_QWORD *)(v172 + 192) = v172 + 208;
          *(_QWORD *)(v172 + 224) = v172 + 240;
          *(_QWORD *)(v172 + 256) = v172 + 272;
          *(_QWORD *)(v172 + 288) = v172 + 304;
          *(_QWORD *)(v172 + 320) = v172 + 336;
          *(_QWORD *)(v172 + 352) = v172 + 368;
          *(_QWORD *)(v172 + 384) = v172 + 400;
          *(_QWORD *)(v172 + 416) = v172 + 432;
          *(_QWORD *)(v172 + 104) = 0;
          *(_BYTE *)(v172 + 112) = 0;
          *(_QWORD *)(v172 + 136) = 0;
          *(_BYTE *)(v172 + 144) = 0;
          *(_QWORD *)(v172 + 168) = 0;
          *(_BYTE *)(v172 + 176) = 0;
          *(_QWORD *)(v172 + 200) = 0;
          *(_BYTE *)(v172 + 208) = 0;
          *(_QWORD *)(v172 + 232) = 0;
          *(_BYTE *)(v172 + 240) = 0;
          *(_QWORD *)(v172 + 264) = 0;
          *(_BYTE *)(v172 + 272) = 0;
          *(_QWORD *)(v172 + 296) = 0;
          *(_BYTE *)(v172 + 304) = 0;
          *(_QWORD *)(v172 + 328) = 0;
          *(_BYTE *)(v172 + 336) = 0;
          *(_QWORD *)(v172 + 360) = 0;
          *(_BYTE *)(v172 + 368) = 0;
          *(_QWORD *)(v172 + 392) = 0;
          *(_BYTE *)(v172 + 400) = 0;
          *(_QWORD *)(v172 + 424) = 0x800000000LL;
          *(_QWORD *)(v172 + 528) = v172 + 544;
          *(_QWORD *)(v172 + 536) = 0x600000000LL;
          v91 = 0;
        }
        *v78 = v89;
      }
      LOBYTE(v478) = 1;
      if ( v92 < v93 )
      {
        sub_22134E0(v89 + 416, v89 + 432, v93, 12);
        v91 = *((unsigned int *)v89 + 106);
      }
      v94 = *((_QWORD *)v89 + 52) + 12 * v91;
      *(_QWORD *)v94 = v90;
      *(_DWORD *)(v94 + 8) = v478;
      ++*((_DWORD *)v89 + 106);
    }
    return 0;
  }
  v13 = v9;
  v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v14 == 42 )
  {
    v115 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v116 = sub_E0FED0(a1, v115, 2387, 0);
    v117 = (unsigned __int8 **)v116;
    if ( !v116 )
      return v13;
    v118 = *(unsigned __int8 **)v116;
    v119 = a4;
    if ( !*(_QWORD *)v116 )
    {
      v255 = *(_QWORD *)(v116 + 8);
      v256 = *(_DWORD *)(v255 + 14976);
      if ( v256 )
      {
        v272 = (unsigned int)(v256 - 1);
        *(_DWORD *)(v255 + 14976) = v272;
        v118 = *(unsigned __int8 **)(v255 + 8 * v272 + 14848);
        v273 = *((unsigned int *)v118 + 134);
        v274 = *((_QWORD *)v118 + 66);
        *v118 = 0;
        *((_DWORD *)v118 + 106) = 0;
        v275 = v274 + (v273 << 6);
        while ( v274 != v275 )
        {
          while ( 1 )
          {
            v275 -= 64;
            v276 = *(void **)(v275 + 24);
            if ( v276 == (void *)(v275 + 40) )
              break;
            v449 = v274;
            operator delete(v276);
            v274 = v449;
            if ( v449 == v275 )
              goto LABEL_263;
          }
        }
LABEL_263:
        *((_DWORD *)v118 + 134) = 0;
      }
      else
      {
        v118 = (unsigned __int8 *)operator new(0x3A0u);
        *v118 = 0;
        *((_QWORD *)v118 + 12) = v118 + 112;
        *((_QWORD *)v118 + 16) = v118 + 144;
        *((_QWORD *)v118 + 20) = v118 + 176;
        *((_QWORD *)v118 + 24) = v118 + 208;
        *((_QWORD *)v118 + 28) = v118 + 240;
        *((_QWORD *)v118 + 32) = v118 + 272;
        *((_QWORD *)v118 + 36) = v118 + 304;
        *((_QWORD *)v118 + 40) = v118 + 336;
        *((_QWORD *)v118 + 44) = v118 + 368;
        *((_QWORD *)v118 + 48) = v118 + 400;
        *((_QWORD *)v118 + 52) = v118 + 432;
        *((_QWORD *)v118 + 13) = 0;
        v118[112] = 0;
        *((_QWORD *)v118 + 17) = 0;
        v118[144] = 0;
        *((_QWORD *)v118 + 21) = 0;
        v118[176] = 0;
        *((_QWORD *)v118 + 25) = 0;
        v118[208] = 0;
        *((_QWORD *)v118 + 29) = 0;
        v118[240] = 0;
        *((_QWORD *)v118 + 33) = 0;
        v118[272] = 0;
        *((_QWORD *)v118 + 37) = 0;
        v118[304] = 0;
        *((_QWORD *)v118 + 41) = 0;
        v118[336] = 0;
        *((_QWORD *)v118 + 45) = 0;
        v118[368] = 0;
        *((_QWORD *)v118 + 49) = 0;
        v118[400] = 0;
        *((_QWORD *)v118 + 53) = 0x800000000LL;
        *((_QWORD *)v118 + 66) = v118 + 544;
        *((_QWORD *)v118 + 67) = 0x600000000LL;
      }
      *v117 = v118;
    }
    v118[*v118 + 1] = 2;
    v120 = *v117;
    v121 = **v117;
    *v120 = v121 + 1;
    *(_QWORD *)&v120[8 * v121 + 16] = v119;
    v122 = *v117;
    if ( !*v117 )
    {
      v253 = v117[1];
      v254 = *((_DWORD *)v253 + 3744);
      if ( v254 )
      {
        v267 = (unsigned int)(v254 - 1);
        *((_DWORD *)v253 + 3744) = v267;
        v122 = *(unsigned __int8 **)&v253[8 * v267 + 14848];
        v268 = *((unsigned int *)v122 + 134);
        v269 = *((_QWORD *)v122 + 66);
        *v122 = 0;
        *((_DWORD *)v122 + 106) = 0;
        v270 = v269 + (v268 << 6);
        while ( v269 != v270 )
        {
          while ( 1 )
          {
            v270 -= 64;
            v271 = *(void **)(v270 + 24);
            if ( v271 == (void *)(v270 + 40) )
              break;
            operator delete(v271);
            if ( v269 == v270 )
              goto LABEL_258;
          }
        }
LABEL_258:
        *((_DWORD *)v122 + 134) = 0;
      }
      else
      {
        v122 = (unsigned __int8 *)operator new(0x3A0u);
        *v122 = 0;
        *((_QWORD *)v122 + 12) = v122 + 112;
        *((_QWORD *)v122 + 16) = v122 + 144;
        *((_QWORD *)v122 + 20) = v122 + 176;
        *((_QWORD *)v122 + 24) = v122 + 208;
        *((_QWORD *)v122 + 28) = v122 + 240;
        *((_QWORD *)v122 + 32) = v122 + 272;
        *((_QWORD *)v122 + 36) = v122 + 304;
        *((_QWORD *)v122 + 40) = v122 + 336;
        *((_QWORD *)v122 + 44) = v122 + 368;
        *((_QWORD *)v122 + 48) = v122 + 400;
        *((_QWORD *)v122 + 52) = v122 + 432;
        *((_QWORD *)v122 + 13) = 0;
        v122[112] = 0;
        *((_QWORD *)v122 + 17) = 0;
        v122[144] = 0;
        *((_QWORD *)v122 + 21) = 0;
        v122[176] = 0;
        *((_QWORD *)v122 + 25) = 0;
        v122[208] = 0;
        *((_QWORD *)v122 + 29) = 0;
        v122[240] = 0;
        *((_QWORD *)v122 + 33) = 0;
        v122[272] = 0;
        *((_QWORD *)v122 + 37) = 0;
        v122[304] = 0;
        *((_QWORD *)v122 + 41) = 0;
        v122[336] = 0;
        *((_QWORD *)v122 + 45) = 0;
        v122[368] = 0;
        *((_QWORD *)v122 + 49) = 0;
        v122[400] = 0;
        *((_QWORD *)v122 + 53) = 0x800000000LL;
        *((_QWORD *)v122 + 66) = v122 + 544;
        *((_QWORD *)v122 + 67) = 0x600000000LL;
      }
      *v117 = v122;
    }
    v122[*v122 + 1] = 2;
    v123 = *v117;
    v124 = **v117;
    *v123 = v124 + 1;
    *(_QWORD *)&v123[8 * v124 + 16] = 0;
    v125 = *v117;
    if ( !*v117 )
    {
      v251 = v117[1];
      v252 = *((_DWORD *)v251 + 3744);
      if ( v252 )
      {
        v262 = (unsigned int)(v252 - 1);
        *((_DWORD *)v251 + 3744) = v262;
        v125 = *(unsigned __int8 **)&v251[8 * v262 + 14848];
        v263 = *((unsigned int *)v125 + 134);
        v264 = *((_QWORD *)v125 + 66);
        *v125 = 0;
        *((_DWORD *)v125 + 106) = 0;
        v265 = v264 + (v263 << 6);
        while ( v264 != v265 )
        {
          while ( 1 )
          {
            v265 -= 64;
            v266 = *(void **)(v265 + 24);
            if ( v266 == (void *)(v265 + 40) )
              break;
            operator delete(v266);
            if ( v264 == v265 )
              goto LABEL_253;
          }
        }
LABEL_253:
        *((_DWORD *)v125 + 134) = 0;
      }
      else
      {
        v125 = (unsigned __int8 *)operator new(0x3A0u);
        *v125 = 0;
        *((_QWORD *)v125 + 12) = v125 + 112;
        *((_QWORD *)v125 + 16) = v125 + 144;
        *((_QWORD *)v125 + 20) = v125 + 176;
        *((_QWORD *)v125 + 24) = v125 + 208;
        *((_QWORD *)v125 + 28) = v125 + 240;
        *((_QWORD *)v125 + 32) = v125 + 272;
        *((_QWORD *)v125 + 36) = v125 + 304;
        *((_QWORD *)v125 + 40) = v125 + 336;
        *((_QWORD *)v125 + 44) = v125 + 368;
        *((_QWORD *)v125 + 48) = v125 + 400;
        *((_QWORD *)v125 + 52) = v125 + 432;
        *((_QWORD *)v125 + 13) = 0;
        v125[112] = 0;
        *((_QWORD *)v125 + 17) = 0;
        v125[144] = 0;
        *((_QWORD *)v125 + 21) = 0;
        v125[176] = 0;
        *((_QWORD *)v125 + 25) = 0;
        v125[208] = 0;
        *((_QWORD *)v125 + 29) = 0;
        v125[240] = 0;
        *((_QWORD *)v125 + 33) = 0;
        v125[272] = 0;
        *((_QWORD *)v125 + 37) = 0;
        v125[304] = 0;
        *((_QWORD *)v125 + 41) = 0;
        v125[336] = 0;
        *((_QWORD *)v125 + 45) = 0;
        v125[368] = 0;
        *((_QWORD *)v125 + 49) = 0;
        v125[400] = 0;
        *((_QWORD *)v125 + 53) = 0x800000000LL;
        *((_QWORD *)v125 + 66) = v125 + 544;
        *((_QWORD *)v125 + 67) = 0x600000000LL;
      }
      *v117 = v125;
    }
    v125[*v125 + 1] = 2;
    v126 = *v117;
    v127 = **v117;
    *v126 = v127 + 1;
    *(_QWORD *)&v126[8 * v127 + 16] = 1;
    v128 = sub_EC8B80(v115);
    v49 = *v117;
    v129 = v128;
    if ( *v117 )
    {
      v58 = *((unsigned int *)v49 + 106);
      v130 = *((unsigned int *)v49 + 107);
      v60 = v58 + 1;
    }
    else
    {
      v248 = v117[1];
      v249 = *((_DWORD *)v248 + 3744);
      if ( v249 )
      {
        v257 = (unsigned int)(v249 - 1);
        *((_DWORD *)v248 + 3744) = v257;
        v49 = *(unsigned __int8 **)&v248[8 * v257 + 14848];
        v258 = *((unsigned int *)v49 + 134);
        v259 = *((_QWORD *)v49 + 66);
        *v49 = 0;
        *((_DWORD *)v49 + 106) = 0;
        v260 = v259 + (v258 << 6);
        while ( v259 != v260 )
        {
          while ( 1 )
          {
            v260 -= 64;
            v261 = *(void **)(v260 + 24);
            if ( v261 == (void *)(v260 + 40) )
              break;
            operator delete(v261);
            if ( v259 == v260 )
              goto LABEL_248;
          }
        }
LABEL_248:
        v58 = *((unsigned int *)v49 + 106);
        v130 = *((unsigned int *)v49 + 107);
        *((_DWORD *)v49 + 134) = 0;
        v60 = v58 + 1;
      }
      else
      {
        v250 = operator new(0x3A0u);
        v130 = 8;
        v60 = 1;
        v49 = (unsigned __int8 *)v250;
        *(_BYTE *)v250 = 0;
        *(_QWORD *)(v250 + 96) = v250 + 112;
        *(_QWORD *)(v250 + 128) = v250 + 144;
        *(_QWORD *)(v250 + 160) = v250 + 176;
        *(_QWORD *)(v250 + 192) = v250 + 208;
        *(_QWORD *)(v250 + 224) = v250 + 240;
        *(_QWORD *)(v250 + 256) = v250 + 272;
        *(_QWORD *)(v250 + 288) = v250 + 304;
        *(_QWORD *)(v250 + 320) = v250 + 336;
        *(_QWORD *)(v250 + 352) = v250 + 368;
        *(_QWORD *)(v250 + 384) = v250 + 400;
        *(_QWORD *)(v250 + 416) = v250 + 432;
        *(_QWORD *)(v250 + 104) = 0;
        *(_BYTE *)(v250 + 112) = 0;
        *(_QWORD *)(v250 + 136) = 0;
        *(_BYTE *)(v250 + 144) = 0;
        *(_QWORD *)(v250 + 168) = 0;
        *(_BYTE *)(v250 + 176) = 0;
        *(_QWORD *)(v250 + 200) = 0;
        *(_BYTE *)(v250 + 208) = 0;
        *(_QWORD *)(v250 + 232) = 0;
        *(_BYTE *)(v250 + 240) = 0;
        *(_QWORD *)(v250 + 264) = 0;
        *(_BYTE *)(v250 + 272) = 0;
        *(_QWORD *)(v250 + 296) = 0;
        *(_BYTE *)(v250 + 304) = 0;
        *(_QWORD *)(v250 + 328) = 0;
        *(_BYTE *)(v250 + 336) = 0;
        *(_QWORD *)(v250 + 360) = 0;
        *(_BYTE *)(v250 + 368) = 0;
        *(_QWORD *)(v250 + 392) = 0;
        *(_BYTE *)(v250 + 400) = 0;
        *(_QWORD *)(v250 + 424) = 0x800000000LL;
        *(_QWORD *)(v250 + 528) = v250 + 544;
        *(_QWORD *)(v250 + 536) = 0x600000000LL;
        v58 = 0;
      }
      *v117 = v49;
    }
    v476 = v129;
    LOBYTE(v478) = 1;
    if ( v130 >= v60 )
      goto LABEL_49;
    goto LABEL_79;
  }
  if ( v14 == 33 )
  {
    v95 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v96 = sub_E0FED0(a1, v95, 2387, 0);
    v37 = (unsigned __int8 **)v96;
    if ( !v96 )
      return v13;
    v97 = *(unsigned __int8 **)v96;
    v98 = a4;
    if ( !*(_QWORD *)v96 )
    {
      v151 = *(_QWORD *)(v96 + 8);
      v152 = *(_DWORD *)(v151 + 14976);
      if ( v152 )
      {
        v295 = (unsigned int)(v152 - 1);
        *(_DWORD *)(v151 + 14976) = v295;
        v97 = *(unsigned __int8 **)(v151 + 8 * v295 + 14848);
        v296 = *((unsigned int *)v97 + 134);
        v297 = *((_QWORD *)v97 + 66);
        *v97 = 0;
        *((_DWORD *)v97 + 106) = 0;
        v298 = v297 + (v296 << 6);
        while ( v297 != v298 )
        {
          while ( 1 )
          {
            v298 -= 64;
            v299 = *(void **)(v298 + 24);
            if ( v299 == (void *)(v298 + 40) )
              break;
            v450 = v297;
            operator delete(v299);
            v297 = v450;
            if ( v450 == v298 )
              goto LABEL_274;
          }
        }
LABEL_274:
        *((_DWORD *)v97 + 134) = 0;
      }
      else
      {
        v97 = (unsigned __int8 *)operator new(0x3A0u);
        *v97 = 0;
        *((_QWORD *)v97 + 12) = v97 + 112;
        *((_QWORD *)v97 + 16) = v97 + 144;
        *((_QWORD *)v97 + 20) = v97 + 176;
        *((_QWORD *)v97 + 24) = v97 + 208;
        *((_QWORD *)v97 + 28) = v97 + 240;
        *((_QWORD *)v97 + 32) = v97 + 272;
        *((_QWORD *)v97 + 36) = v97 + 304;
        *((_QWORD *)v97 + 40) = v97 + 336;
        *((_QWORD *)v97 + 44) = v97 + 368;
        *((_QWORD *)v97 + 48) = v97 + 400;
        *((_QWORD *)v97 + 52) = v97 + 432;
        *((_QWORD *)v97 + 13) = 0;
        v97[112] = 0;
        *((_QWORD *)v97 + 17) = 0;
        v97[144] = 0;
        *((_QWORD *)v97 + 21) = 0;
        v97[176] = 0;
        *((_QWORD *)v97 + 25) = 0;
        v97[208] = 0;
        *((_QWORD *)v97 + 29) = 0;
        v97[240] = 0;
        *((_QWORD *)v97 + 33) = 0;
        v97[272] = 0;
        *((_QWORD *)v97 + 37) = 0;
        v97[304] = 0;
        *((_QWORD *)v97 + 41) = 0;
        v97[336] = 0;
        *((_QWORD *)v97 + 45) = 0;
        v97[368] = 0;
        *((_QWORD *)v97 + 49) = 0;
        v97[400] = 0;
        *((_QWORD *)v97 + 53) = 0x800000000LL;
        *((_QWORD *)v97 + 66) = v97 + 544;
        *((_QWORD *)v97 + 67) = 0x600000000LL;
      }
      *v37 = v97;
    }
    v97[*v97 + 1] = 2;
    v99 = *v37;
    v100 = **v37;
    *v99 = v100 + 1;
    *(_QWORD *)&v99[8 * v100 + 16] = v98;
    v101 = *v37;
    if ( !*v37 )
    {
      v153 = v37[1];
      v154 = *((_DWORD *)v153 + 3744);
      if ( v154 )
      {
        v305 = (unsigned int)(v154 - 1);
        *((_DWORD *)v153 + 3744) = v305;
        v101 = *(unsigned __int8 **)&v153[8 * v305 + 14848];
        v306 = *((unsigned int *)v101 + 134);
        v307 = *((_QWORD *)v101 + 66);
        *v101 = 0;
        *((_DWORD *)v101 + 106) = 0;
        v308 = v307 + (v306 << 6);
        while ( v307 != v308 )
        {
          while ( 1 )
          {
            v308 -= 64;
            v309 = *(void **)(v308 + 24);
            if ( v309 == (void *)(v308 + 40) )
              break;
            operator delete(v309);
            if ( v307 == v308 )
              goto LABEL_284;
          }
        }
LABEL_284:
        *((_DWORD *)v101 + 134) = 0;
      }
      else
      {
        v101 = (unsigned __int8 *)operator new(0x3A0u);
        *v101 = 0;
        *((_QWORD *)v101 + 12) = v101 + 112;
        *((_QWORD *)v101 + 16) = v101 + 144;
        *((_QWORD *)v101 + 20) = v101 + 176;
        *((_QWORD *)v101 + 24) = v101 + 208;
        *((_QWORD *)v101 + 28) = v101 + 240;
        *((_QWORD *)v101 + 32) = v101 + 272;
        *((_QWORD *)v101 + 36) = v101 + 304;
        *((_QWORD *)v101 + 40) = v101 + 336;
        *((_QWORD *)v101 + 44) = v101 + 368;
        *((_QWORD *)v101 + 48) = v101 + 400;
        *((_QWORD *)v101 + 52) = v101 + 432;
        *((_QWORD *)v101 + 13) = 0;
        v101[112] = 0;
        *((_QWORD *)v101 + 17) = 0;
        v101[144] = 0;
        *((_QWORD *)v101 + 21) = 0;
        v101[176] = 0;
        *((_QWORD *)v101 + 25) = 0;
        v101[208] = 0;
        *((_QWORD *)v101 + 29) = 0;
        v101[240] = 0;
        *((_QWORD *)v101 + 33) = 0;
        v101[272] = 0;
        *((_QWORD *)v101 + 37) = 0;
        v101[304] = 0;
        *((_QWORD *)v101 + 41) = 0;
        v101[336] = 0;
        *((_QWORD *)v101 + 45) = 0;
        v101[368] = 0;
        *((_QWORD *)v101 + 49) = 0;
        v101[400] = 0;
        *((_QWORD *)v101 + 53) = 0x800000000LL;
        *((_QWORD *)v101 + 66) = v101 + 544;
        *((_QWORD *)v101 + 67) = 0x600000000LL;
      }
      *v37 = v101;
    }
    v101[*v101 + 1] = 2;
    v102 = *v37;
    v103 = **v37;
    *v102 = v103 + 1;
    *(_QWORD *)&v102[8 * v103 + 16] = 0;
    v104 = *v37;
    if ( !*v37 )
    {
      v149 = v37[1];
      v150 = *((_DWORD *)v149 + 3744);
      if ( v150 )
      {
        v300 = (unsigned int)(v150 - 1);
        *((_DWORD *)v149 + 3744) = v300;
        v104 = *(unsigned __int8 **)&v149[8 * v300 + 14848];
        v301 = *((unsigned int *)v104 + 134);
        v302 = *((_QWORD *)v104 + 66);
        *v104 = 0;
        *((_DWORD *)v104 + 106) = 0;
        v303 = v302 + (v301 << 6);
        while ( v302 != v303 )
        {
          while ( 1 )
          {
            v303 -= 64;
            v304 = *(void **)(v303 + 24);
            if ( v304 == (void *)(v303 + 40) )
              break;
            operator delete(v304);
            if ( v302 == v303 )
              goto LABEL_279;
          }
        }
LABEL_279:
        *((_DWORD *)v104 + 134) = 0;
      }
      else
      {
        v104 = (unsigned __int8 *)operator new(0x3A0u);
        *v104 = 0;
        *((_QWORD *)v104 + 12) = v104 + 112;
        *((_QWORD *)v104 + 16) = v104 + 144;
        *((_QWORD *)v104 + 20) = v104 + 176;
        *((_QWORD *)v104 + 24) = v104 + 208;
        *((_QWORD *)v104 + 28) = v104 + 240;
        *((_QWORD *)v104 + 32) = v104 + 272;
        *((_QWORD *)v104 + 36) = v104 + 304;
        *((_QWORD *)v104 + 40) = v104 + 336;
        *((_QWORD *)v104 + 44) = v104 + 368;
        *((_QWORD *)v104 + 48) = v104 + 400;
        *((_QWORD *)v104 + 52) = v104 + 432;
        *((_QWORD *)v104 + 13) = 0;
        v104[112] = 0;
        *((_QWORD *)v104 + 17) = 0;
        v104[144] = 0;
        *((_QWORD *)v104 + 21) = 0;
        v104[176] = 0;
        *((_QWORD *)v104 + 25) = 0;
        v104[208] = 0;
        *((_QWORD *)v104 + 29) = 0;
        v104[240] = 0;
        *((_QWORD *)v104 + 33) = 0;
        v104[272] = 0;
        *((_QWORD *)v104 + 37) = 0;
        v104[304] = 0;
        *((_QWORD *)v104 + 41) = 0;
        v104[336] = 0;
        *((_QWORD *)v104 + 45) = 0;
        v104[368] = 0;
        *((_QWORD *)v104 + 49) = 0;
        v104[400] = 0;
        *((_QWORD *)v104 + 53) = 0x800000000LL;
        *((_QWORD *)v104 + 66) = v104 + 544;
        *((_QWORD *)v104 + 67) = 0x600000000LL;
      }
      *v37 = v104;
    }
    v104[*v104 + 1] = 2;
    v105 = *v37;
    v106 = **v37;
    *v105 = v106 + 1;
    *(_QWORD *)&v105[8 * v106 + 16] = 2;
    v107 = sub_EC8B80(v95);
    v49 = *v37;
    v50 = v107;
    if ( !*v37 )
    {
      v108 = v37[1];
      v109 = *((_DWORD *)v108 + 3744);
      if ( v109 )
      {
        v110 = (unsigned int)(v109 - 1);
        *((_DWORD *)v108 + 3744) = v110;
        v49 = *(unsigned __int8 **)&v108[8 * v110 + 14848];
        v111 = *((unsigned int *)v49 + 134);
        v112 = *((_QWORD *)v49 + 66);
        *v49 = 0;
        *((_DWORD *)v49 + 106) = 0;
        v113 = v112 + (v111 << 6);
        while ( v112 != v113 )
        {
          while ( 1 )
          {
            v113 -= 64;
            v114 = *(void **)(v113 + 24);
            if ( v114 == (void *)(v113 + 40) )
              break;
            operator delete(v114);
            if ( v112 == v113 )
              goto LABEL_40;
          }
        }
        goto LABEL_40;
      }
LABEL_176:
      v208 = operator new(0x3A0u);
      v59 = 8;
      v60 = 1;
      v49 = (unsigned __int8 *)v208;
      *(_BYTE *)v208 = 0;
      *(_QWORD *)(v208 + 96) = v208 + 112;
      *(_QWORD *)(v208 + 128) = v208 + 144;
      *(_QWORD *)(v208 + 160) = v208 + 176;
      *(_QWORD *)(v208 + 192) = v208 + 208;
      *(_QWORD *)(v208 + 224) = v208 + 240;
      *(_QWORD *)(v208 + 256) = v208 + 272;
      *(_QWORD *)(v208 + 288) = v208 + 304;
      *(_QWORD *)(v208 + 320) = v208 + 336;
      *(_QWORD *)(v208 + 352) = v208 + 368;
      *(_QWORD *)(v208 + 384) = v208 + 400;
      *(_QWORD *)(v208 + 416) = v208 + 432;
      *(_QWORD *)(v208 + 104) = 0;
      *(_BYTE *)(v208 + 112) = 0;
      *(_QWORD *)(v208 + 136) = 0;
      *(_BYTE *)(v208 + 144) = 0;
      *(_QWORD *)(v208 + 168) = 0;
      *(_BYTE *)(v208 + 176) = 0;
      *(_QWORD *)(v208 + 200) = 0;
      *(_BYTE *)(v208 + 208) = 0;
      *(_QWORD *)(v208 + 232) = 0;
      *(_BYTE *)(v208 + 240) = 0;
      *(_QWORD *)(v208 + 264) = 0;
      *(_BYTE *)(v208 + 272) = 0;
      *(_QWORD *)(v208 + 296) = 0;
      *(_BYTE *)(v208 + 304) = 0;
      *(_QWORD *)(v208 + 328) = 0;
      *(_BYTE *)(v208 + 336) = 0;
      *(_QWORD *)(v208 + 360) = 0;
      *(_BYTE *)(v208 + 368) = 0;
      *(_QWORD *)(v208 + 392) = 0;
      *(_BYTE *)(v208 + 400) = 0;
      *(_QWORD *)(v208 + 424) = 0x800000000LL;
      *(_QWORD *)(v208 + 528) = v208 + 544;
      *(_QWORD *)(v208 + 536) = 0x600000000LL;
      v58 = 0;
      goto LABEL_41;
    }
LABEL_47:
    v58 = *((unsigned int *)v49 + 106);
    v59 = *((unsigned int *)v49 + 107);
    v60 = v58 + 1;
LABEL_48:
    v476 = v50;
    LOBYTE(v478) = 1;
    if ( v60 <= v59 )
    {
LABEL_49:
      v74 = *((_QWORD *)v49 + 52) + 12 * v58;
      *(_QWORD *)v74 = v476;
      *(_DWORD *)(v74 + 8) = v478;
      ++*((_DWORD *)v49 + 106);
      return v13;
    }
LABEL_79:
    sub_22134E0(v49 + 416, v49 + 432, v60, 12);
    v58 = *((unsigned int *)v49 + 106);
    goto LABEL_49;
  }
  if ( (v7 & 4) != 0 || (byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
  {
    v61 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v62 = sub_E0FED0(a1, v61, 2387, 0);
    v37 = (unsigned __int8 **)v62;
    if ( !v62 )
      return v13;
    v63 = *(unsigned __int8 **)v62;
    v64 = a4;
    if ( !*(_QWORD *)v62 )
    {
      v184 = *(_QWORD *)(v62 + 8);
      v185 = *(_DWORD *)(v184 + 14976);
      if ( v185 )
      {
        v243 = (unsigned int)(v185 - 1);
        *(_DWORD *)(v184 + 14976) = v243;
        v63 = *(unsigned __int8 **)(v184 + 8 * v243 + 14848);
        v244 = *((unsigned int *)v63 + 134);
        v245 = *((_QWORD *)v63 + 66);
        *v63 = 0;
        *((_DWORD *)v63 + 106) = 0;
        v246 = v245 + (v244 << 6);
        while ( v245 != v246 )
        {
          while ( 1 )
          {
            v246 -= 64;
            v247 = *(void **)(v246 + 24);
            if ( v247 == (void *)(v246 + 40) )
              break;
            v448 = v245;
            operator delete(v247);
            v245 = v448;
            if ( v448 == v246 )
              goto LABEL_225;
          }
        }
LABEL_225:
        *((_DWORD *)v63 + 134) = 0;
      }
      else
      {
        v63 = (unsigned __int8 *)operator new(0x3A0u);
        *v63 = 0;
        *((_QWORD *)v63 + 12) = v63 + 112;
        *((_QWORD *)v63 + 16) = v63 + 144;
        *((_QWORD *)v63 + 20) = v63 + 176;
        *((_QWORD *)v63 + 24) = v63 + 208;
        *((_QWORD *)v63 + 28) = v63 + 240;
        *((_QWORD *)v63 + 32) = v63 + 272;
        *((_QWORD *)v63 + 36) = v63 + 304;
        *((_QWORD *)v63 + 40) = v63 + 336;
        *((_QWORD *)v63 + 44) = v63 + 368;
        *((_QWORD *)v63 + 48) = v63 + 400;
        *((_QWORD *)v63 + 52) = v63 + 432;
        *((_QWORD *)v63 + 13) = 0;
        v63[112] = 0;
        *((_QWORD *)v63 + 17) = 0;
        v63[144] = 0;
        *((_QWORD *)v63 + 21) = 0;
        v63[176] = 0;
        *((_QWORD *)v63 + 25) = 0;
        v63[208] = 0;
        *((_QWORD *)v63 + 29) = 0;
        v63[240] = 0;
        *((_QWORD *)v63 + 33) = 0;
        v63[272] = 0;
        *((_QWORD *)v63 + 37) = 0;
        v63[304] = 0;
        *((_QWORD *)v63 + 41) = 0;
        v63[336] = 0;
        *((_QWORD *)v63 + 45) = 0;
        v63[368] = 0;
        *((_QWORD *)v63 + 49) = 0;
        v63[400] = 0;
        *((_QWORD *)v63 + 53) = 0x800000000LL;
        *((_QWORD *)v63 + 66) = v63 + 544;
        *((_QWORD *)v63 + 67) = 0x600000000LL;
      }
      *v37 = v63;
    }
    v63[*v63 + 1] = 2;
    v65 = *v37;
    v66 = **v37;
    *v65 = v66 + 1;
    *(_QWORD *)&v65[8 * v66 + 16] = v64;
    v67 = *v37;
    if ( !*v37 )
    {
      v175 = v37[1];
      v176 = *((_DWORD *)v175 + 3744);
      if ( v176 )
      {
        v238 = (unsigned int)(v176 - 1);
        *((_DWORD *)v175 + 3744) = v238;
        v67 = *(unsigned __int8 **)&v175[8 * v238 + 14848];
        v239 = *((unsigned int *)v67 + 134);
        v240 = *((_QWORD *)v67 + 66);
        *v67 = 0;
        *((_DWORD *)v67 + 106) = 0;
        v241 = v240 + (v239 << 6);
        while ( v240 != v241 )
        {
          while ( 1 )
          {
            v241 -= 64;
            v242 = *(void **)(v241 + 24);
            if ( v242 == (void *)(v241 + 40) )
              break;
            operator delete(v242);
            if ( v240 == v241 )
              goto LABEL_220;
          }
        }
LABEL_220:
        *((_DWORD *)v67 + 134) = 0;
      }
      else
      {
        v67 = (unsigned __int8 *)operator new(0x3A0u);
        *v67 = 0;
        *((_QWORD *)v67 + 12) = v67 + 112;
        *((_QWORD *)v67 + 16) = v67 + 144;
        *((_QWORD *)v67 + 20) = v67 + 176;
        *((_QWORD *)v67 + 24) = v67 + 208;
        *((_QWORD *)v67 + 28) = v67 + 240;
        *((_QWORD *)v67 + 32) = v67 + 272;
        *((_QWORD *)v67 + 36) = v67 + 304;
        *((_QWORD *)v67 + 40) = v67 + 336;
        *((_QWORD *)v67 + 44) = v67 + 368;
        *((_QWORD *)v67 + 48) = v67 + 400;
        *((_QWORD *)v67 + 52) = v67 + 432;
        *((_QWORD *)v67 + 13) = 0;
        v67[112] = 0;
        *((_QWORD *)v67 + 17) = 0;
        v67[144] = 0;
        *((_QWORD *)v67 + 21) = 0;
        v67[176] = 0;
        *((_QWORD *)v67 + 25) = 0;
        v67[208] = 0;
        *((_QWORD *)v67 + 29) = 0;
        v67[240] = 0;
        *((_QWORD *)v67 + 33) = 0;
        v67[272] = 0;
        *((_QWORD *)v67 + 37) = 0;
        v67[304] = 0;
        *((_QWORD *)v67 + 41) = 0;
        v67[336] = 0;
        *((_QWORD *)v67 + 45) = 0;
        v67[368] = 0;
        *((_QWORD *)v67 + 49) = 0;
        v67[400] = 0;
        *((_QWORD *)v67 + 53) = 0x800000000LL;
        *((_QWORD *)v67 + 66) = v67 + 544;
        *((_QWORD *)v67 + 67) = 0x600000000LL;
      }
      *v37 = v67;
    }
    v67[*v67 + 1] = 2;
    v68 = *v37;
    v69 = **v37;
    *v68 = v69 + 1;
    *(_QWORD *)&v68[8 * v69 + 16] = 0;
    v70 = *v37;
    if ( !*v37 )
    {
      v186 = v37[1];
      v187 = *((_DWORD *)v186 + 3744);
      if ( v187 )
      {
        v233 = (unsigned int)(v187 - 1);
        *((_DWORD *)v186 + 3744) = v233;
        v70 = *(unsigned __int8 **)&v186[8 * v233 + 14848];
        v234 = *((unsigned int *)v70 + 134);
        v235 = *((_QWORD *)v70 + 66);
        *v70 = 0;
        *((_DWORD *)v70 + 106) = 0;
        v236 = v235 + (v234 << 6);
        while ( v235 != v236 )
        {
          while ( 1 )
          {
            v236 -= 64;
            v237 = *(void **)(v236 + 24);
            if ( v237 == (void *)(v236 + 40) )
              break;
            operator delete(v237);
            if ( v235 == v236 )
              goto LABEL_215;
          }
        }
LABEL_215:
        *((_DWORD *)v70 + 134) = 0;
      }
      else
      {
        v70 = (unsigned __int8 *)operator new(0x3A0u);
        *v70 = 0;
        *((_QWORD *)v70 + 12) = v70 + 112;
        *((_QWORD *)v70 + 16) = v70 + 144;
        *((_QWORD *)v70 + 20) = v70 + 176;
        *((_QWORD *)v70 + 24) = v70 + 208;
        *((_QWORD *)v70 + 28) = v70 + 240;
        *((_QWORD *)v70 + 32) = v70 + 272;
        *((_QWORD *)v70 + 36) = v70 + 304;
        *((_QWORD *)v70 + 40) = v70 + 336;
        *((_QWORD *)v70 + 44) = v70 + 368;
        *((_QWORD *)v70 + 48) = v70 + 400;
        *((_QWORD *)v70 + 52) = v70 + 432;
        *((_QWORD *)v70 + 13) = 0;
        v70[112] = 0;
        *((_QWORD *)v70 + 17) = 0;
        v70[144] = 0;
        *((_QWORD *)v70 + 21) = 0;
        v70[176] = 0;
        *((_QWORD *)v70 + 25) = 0;
        v70[208] = 0;
        *((_QWORD *)v70 + 29) = 0;
        v70[240] = 0;
        *((_QWORD *)v70 + 33) = 0;
        v70[272] = 0;
        *((_QWORD *)v70 + 37) = 0;
        v70[304] = 0;
        *((_QWORD *)v70 + 41) = 0;
        v70[336] = 0;
        *((_QWORD *)v70 + 45) = 0;
        v70[368] = 0;
        *((_QWORD *)v70 + 49) = 0;
        v70[400] = 0;
        *((_QWORD *)v70 + 53) = 0x800000000LL;
        *((_QWORD *)v70 + 66) = v70 + 544;
        *((_QWORD *)v70 + 67) = 0x600000000LL;
      }
      *v37 = v70;
    }
    v70[*v70 + 1] = 2;
    v71 = *v37;
    v72 = **v37;
    *v71 = v72 + 1;
    *(_QWORD *)&v71[8 * v72 + 16] = 3;
    v73 = sub_EC8B80(v61);
    v49 = *v37;
    v50 = v73;
    if ( !*v37 )
    {
      v177 = v37[1];
      v178 = *((_DWORD *)v177 + 3744);
      if ( v178 )
      {
        v179 = (unsigned int)(v178 - 1);
        *((_DWORD *)v177 + 3744) = v179;
        v49 = *(unsigned __int8 **)&v177[8 * v179 + 14848];
        v180 = *((unsigned int *)v49 + 134);
        v181 = *((_QWORD *)v49 + 66);
        *v49 = 0;
        *((_DWORD *)v49 + 106) = 0;
        v182 = v181 + (v180 << 6);
        if ( v181 == v182 )
        {
          v60 = 1;
          v58 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v182 -= 64;
              v183 = *(void **)(v182 + 24);
              if ( v183 == (void *)(v182 + 40) )
                break;
              operator delete(v183);
              if ( v181 == v182 )
                goto LABEL_151;
            }
          }
          while ( v181 != v182 );
LABEL_151:
          v58 = *((unsigned int *)v49 + 106);
          v60 = v58 + 1;
        }
        *((_DWORD *)v49 + 134) = 0;
        v59 = *((unsigned int *)v49 + 107);
        goto LABEL_41;
      }
      goto LABEL_176;
    }
    goto LABEL_47;
  }
  v15 = sub_F3F500(*v8, a2, v10, v11, v12);
  v469 = v15;
  if ( !v15 )
  {
LABEL_84:
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
    {
      v133 = *(_QWORD ***)(a1 + 24);
      v134 = (__int64 (__fastcall *)(__int64))(*v133)[13];
      v135 = v134 == sub_D66930
           ? (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, __int64 (__fastcall *)(__int64), _QWORD *, __int64))(*v133[3] + 104LL))(
               v133[3],
               a2,
               sub_D66930,
               v17,
               v18)
           : ((__int64 (__fastcall *)(_QWORD **, unsigned __int64, __int64 (__fastcall *)(__int64), _QWORD *, __int64))v134)(
               v133,
               a2,
               sub_D66930,
               v17,
               v18);
      v136 = sub_A4D710(v135, v7);
      a2 = v5;
      if ( !(unsigned __int8)sub_D80670(a1, v5, v136, a4) )
        return v13;
    }
    v137 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
    v138 = *v137;
    if ( (unsigned int)*(unsigned __int8 *)(*v137 + 16) - 57 <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v138 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1
      && (v138 = sub_F3F310(*v137, a2, v16, v17)) != 0 )
    {
      v139 = *(_QWORD ***)(a1 + 24);
      v140 = (__int64 (__fastcall *)(__int64))(*v139)[13];
      if ( v140 == sub_D66930 )
        v141 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, __int64 (__fastcall *)(__int64), _QWORD *, __int64))(*v139[3] + 104LL))(
                           v139[3],
                           a2,
                           sub_D66930,
                           v17,
                           v18);
      else
        v141 = (_QWORD *)((__int64 (__fastcall *)(_QWORD **, unsigned __int64, __int64 (__fastcall *)(__int64), _QWORD *, __int64))v140)(
                           v139,
                           a2,
                           sub_D66930,
                           v17,
                           v18);
      v447 = *(_QWORD *)(v138 + 32);
      v142 = *(_DWORD *)(v138 + 20);
      v470 = v142;
      v461 = 1;
      if ( !(unsigned __int8)sub_F33C90(v138, v141) )
      {
        v461 = sub_A73FE0((__int64)v141, *(_QWORD *)(v447 & 0xFFFFFFFFFFFFFFF0LL));
        v142 *= v461;
      }
      if ( v142 % (unsigned __int64)sub_A73FE0((__int64)v141, *(_QWORD *)(v141[2331] & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        v277 = sub_DFB220(*(_QWORD *)(a1 + 400));
        v278 = sub_E0FED0(a1, v277, 2388, 0);
        v279 = (unsigned __int8 **)v278;
        if ( v278 )
        {
          v280 = *(unsigned __int8 **)v278;
          if ( !*(_QWORD *)v278 )
          {
            v380 = *(_QWORD *)(v278 + 8);
            v381 = *(_DWORD *)(v380 + 14976);
            if ( v381 )
            {
              v391 = (unsigned int)(v381 - 1);
              *(_DWORD *)(v380 + 14976) = v391;
              v280 = *(unsigned __int8 **)(v380 + 8 * v391 + 14848);
              v392 = *((unsigned int *)v280 + 134);
              v393 = *((_QWORD *)v280 + 66);
              *v280 = 0;
              *((_DWORD *)v280 + 106) = 0;
              v394 = v393 + (v392 << 6);
              while ( v393 != v394 )
              {
                while ( 1 )
                {
                  v394 -= 64;
                  v395 = *(void **)(v394 + 24);
                  if ( v395 == (void *)(v394 + 40) )
                    break;
                  v453 = v393;
                  operator delete(v395);
                  v393 = v453;
                  if ( v453 == v394 )
                    goto LABEL_385;
                }
              }
LABEL_385:
              *((_DWORD *)v280 + 134) = 0;
            }
            else
            {
              v280 = (unsigned __int8 *)operator new(0x3A0u);
              *v280 = 0;
              *((_QWORD *)v280 + 12) = v280 + 112;
              *((_QWORD *)v280 + 16) = v280 + 144;
              *((_QWORD *)v280 + 20) = v280 + 176;
              *((_QWORD *)v280 + 24) = v280 + 208;
              *((_QWORD *)v280 + 28) = v280 + 240;
              *((_QWORD *)v280 + 32) = v280 + 272;
              *((_QWORD *)v280 + 36) = v280 + 304;
              *((_QWORD *)v280 + 40) = v280 + 336;
              *((_QWORD *)v280 + 44) = v280 + 368;
              *((_QWORD *)v280 + 48) = v280 + 400;
              *((_QWORD *)v280 + 52) = v280 + 432;
              *((_QWORD *)v280 + 13) = 0;
              v280[112] = 0;
              *((_QWORD *)v280 + 17) = 0;
              v280[144] = 0;
              *((_QWORD *)v280 + 21) = 0;
              v280[176] = 0;
              *((_QWORD *)v280 + 25) = 0;
              v280[208] = 0;
              *((_QWORD *)v280 + 29) = 0;
              v280[240] = 0;
              *((_QWORD *)v280 + 33) = 0;
              v280[272] = 0;
              *((_QWORD *)v280 + 37) = 0;
              v280[304] = 0;
              *((_QWORD *)v280 + 41) = 0;
              v280[336] = 0;
              *((_QWORD *)v280 + 45) = 0;
              v280[368] = 0;
              *((_QWORD *)v280 + 49) = 0;
              v280[400] = 0;
              *((_QWORD *)v280 + 53) = 0x800000000LL;
              *((_QWORD *)v280 + 66) = v280 + 544;
              *((_QWORD *)v280 + 67) = 0x600000000LL;
            }
            *v279 = v280;
          }
          v280[*v280 + 1] = 8;
          v281 = *v279;
          v282 = **v279;
          *v281 = v282 + 1;
          v283 = v461;
          *(_QWORD *)&v281[8 * v282 + 16] = v138 & 0xFFFFFFFFFFFFFFF0LL;
          v284 = *v279;
          if ( !*v279 )
          {
            v384 = v279[1];
            v385 = *((_DWORD *)v384 + 3744);
            if ( v385 )
            {
              v401 = (unsigned int)(v385 - 1);
              *((_DWORD *)v384 + 3744) = v401;
              v284 = *(unsigned __int8 **)&v384[8 * v401 + 14848];
              v402 = *((unsigned int *)v284 + 134);
              v403 = *((_QWORD *)v284 + 66);
              *v284 = 0;
              *((_DWORD *)v284 + 106) = 0;
              v404 = v403 + (v402 << 6);
              while ( v403 != v404 )
              {
                while ( 1 )
                {
                  v404 -= 64;
                  v405 = *(void **)(v404 + 24);
                  if ( v405 == (void *)(v404 + 40) )
                    break;
                  v467 = v403;
                  v455 = v283;
                  operator delete(v405);
                  v403 = v467;
                  v283 = v455;
                  if ( v467 == v404 )
                    goto LABEL_395;
                }
              }
LABEL_395:
              *((_DWORD *)v284 + 134) = 0;
            }
            else
            {
              v284 = (unsigned __int8 *)operator new(0x3A0u);
              *v284 = 0;
              *((_QWORD *)v284 + 12) = v284 + 112;
              *((_QWORD *)v284 + 16) = v284 + 144;
              *((_QWORD *)v284 + 20) = v284 + 176;
              *((_QWORD *)v284 + 24) = v284 + 208;
              *((_QWORD *)v284 + 28) = v284 + 240;
              *((_QWORD *)v284 + 32) = v284 + 272;
              *((_QWORD *)v284 + 36) = v284 + 304;
              *((_QWORD *)v284 + 40) = v284 + 336;
              *((_QWORD *)v284 + 44) = v284 + 368;
              *((_QWORD *)v284 + 48) = v284 + 400;
              *((_QWORD *)v284 + 52) = v284 + 432;
              *((_QWORD *)v284 + 13) = 0;
              v284[112] = 0;
              *((_QWORD *)v284 + 17) = 0;
              v284[144] = 0;
              *((_QWORD *)v284 + 21) = 0;
              v284[176] = 0;
              *((_QWORD *)v284 + 25) = 0;
              v284[208] = 0;
              *((_QWORD *)v284 + 29) = 0;
              v284[240] = 0;
              *((_QWORD *)v284 + 33) = 0;
              v284[272] = 0;
              *((_QWORD *)v284 + 37) = 0;
              v284[304] = 0;
              *((_QWORD *)v284 + 41) = 0;
              v284[336] = 0;
              *((_QWORD *)v284 + 45) = 0;
              v284[368] = 0;
              *((_QWORD *)v284 + 49) = 0;
              v284[400] = 0;
              *((_QWORD *)v284 + 53) = 0x800000000LL;
              v283 = v461;
              *((_QWORD *)v284 + 66) = v284 + 544;
              *((_QWORD *)v284 + 67) = 0x600000000LL;
            }
            *v279 = v284;
          }
          v284[*v284 + 1] = 3;
          v285 = *v279;
          v286 = **v279;
          *v285 = v286 + 1;
          *(_QWORD *)&v285[8 * v286 + 16] = v283;
          v287 = *v279;
          if ( !*v279 )
          {
            v382 = v279[1];
            v383 = *((_DWORD *)v382 + 3744);
            if ( v383 )
            {
              v396 = (unsigned int)(v383 - 1);
              *((_DWORD *)v382 + 3744) = v396;
              v287 = *(unsigned __int8 **)&v382[8 * v396 + 14848];
              v397 = *((unsigned int *)v287 + 134);
              v398 = *((_QWORD *)v287 + 66);
              *v287 = 0;
              *((_DWORD *)v287 + 106) = 0;
              v399 = v398 + (v397 << 6);
              while ( v398 != v399 )
              {
                while ( 1 )
                {
                  v399 -= 64;
                  v400 = *(void **)(v399 + 24);
                  if ( v400 == (void *)(v399 + 40) )
                    break;
                  v454 = v398;
                  operator delete(v400);
                  v398 = v454;
                  if ( v454 == v399 )
                    goto LABEL_390;
                }
              }
LABEL_390:
              *((_DWORD *)v287 + 134) = 0;
            }
            else
            {
              v287 = (unsigned __int8 *)operator new(0x3A0u);
              *v287 = 0;
              *((_QWORD *)v287 + 12) = v287 + 112;
              *((_QWORD *)v287 + 16) = v287 + 144;
              *((_QWORD *)v287 + 20) = v287 + 176;
              *((_QWORD *)v287 + 24) = v287 + 208;
              *((_QWORD *)v287 + 28) = v287 + 240;
              *((_QWORD *)v287 + 32) = v287 + 272;
              *((_QWORD *)v287 + 36) = v287 + 304;
              *((_QWORD *)v287 + 40) = v287 + 336;
              *((_QWORD *)v287 + 44) = v287 + 368;
              *((_QWORD *)v287 + 48) = v287 + 400;
              *((_QWORD *)v287 + 52) = v287 + 432;
              *((_QWORD *)v287 + 13) = 0;
              v287[112] = 0;
              *((_QWORD *)v287 + 17) = 0;
              v287[144] = 0;
              *((_QWORD *)v287 + 21) = 0;
              v287[176] = 0;
              *((_QWORD *)v287 + 25) = 0;
              v287[208] = 0;
              *((_QWORD *)v287 + 29) = 0;
              v287[240] = 0;
              *((_QWORD *)v287 + 33) = 0;
              v287[272] = 0;
              *((_QWORD *)v287 + 37) = 0;
              v287[304] = 0;
              *((_QWORD *)v287 + 41) = 0;
              v287[336] = 0;
              *((_QWORD *)v287 + 45) = 0;
              v287[368] = 0;
              *((_QWORD *)v287 + 49) = 0;
              v287[400] = 0;
              *((_QWORD *)v287 + 53) = 0x800000000LL;
              *((_QWORD *)v287 + 66) = v287 + 544;
              *((_QWORD *)v287 + 67) = 0x600000000LL;
            }
            *v279 = v287;
          }
          v287[*v287 + 1] = 3;
          v288 = *v279;
          v289 = **v279;
          *v288 = v289 + 1;
          *(_QWORD *)&v288[8 * v289 + 16] = v470;
          v290 = sub_A73FE0((__int64)v141, *(_QWORD *)(v141[2331] & 0xFFFFFFFFFFFFFFF0LL));
          v291 = *v279;
          v292 = v290;
          if ( !*v279 )
          {
            v378 = v279[1];
            v379 = *((_DWORD *)v378 + 3744);
            if ( v379 )
            {
              v386 = (unsigned int)(v379 - 1);
              *((_DWORD *)v378 + 3744) = v386;
              v291 = *(unsigned __int8 **)&v378[8 * v386 + 14848];
              v387 = *((unsigned int *)v291 + 134);
              *v291 = 0;
              v388 = *((_QWORD *)v291 + 66);
              *((_DWORD *)v291 + 106) = 0;
              v389 = v388 + (v387 << 6);
              while ( v388 != v389 )
              {
                while ( 1 )
                {
                  v389 -= 64;
                  v390 = *(void **)(v389 + 24);
                  if ( v390 == (void *)(v389 + 40) )
                    break;
                  operator delete(v390);
                  if ( v388 == v389 )
                    goto LABEL_380;
                }
              }
LABEL_380:
              *((_DWORD *)v291 + 134) = 0;
            }
            else
            {
              v291 = (unsigned __int8 *)operator new(0x3A0u);
              *v291 = 0;
              *((_QWORD *)v291 + 12) = v291 + 112;
              *((_QWORD *)v291 + 16) = v291 + 144;
              *((_QWORD *)v291 + 20) = v291 + 176;
              *((_QWORD *)v291 + 24) = v291 + 208;
              *((_QWORD *)v291 + 28) = v291 + 240;
              *((_QWORD *)v291 + 32) = v291 + 272;
              *((_QWORD *)v291 + 36) = v291 + 304;
              *((_QWORD *)v291 + 40) = v291 + 336;
              *((_QWORD *)v291 + 44) = v291 + 368;
              *((_QWORD *)v291 + 48) = v291 + 400;
              *((_QWORD *)v291 + 52) = v291 + 432;
              v291[112] = 0;
              *((_QWORD *)v291 + 13) = 0;
              *((_QWORD *)v291 + 17) = 0;
              v291[144] = 0;
              *((_QWORD *)v291 + 21) = 0;
              v291[176] = 0;
              *((_QWORD *)v291 + 25) = 0;
              v291[208] = 0;
              *((_QWORD *)v291 + 29) = 0;
              v291[240] = 0;
              *((_QWORD *)v291 + 33) = 0;
              v291[272] = 0;
              *((_QWORD *)v291 + 37) = 0;
              v291[304] = 0;
              *((_QWORD *)v291 + 41) = 0;
              v291[336] = 0;
              *((_QWORD *)v291 + 45) = 0;
              v291[368] = 0;
              *((_QWORD *)v291 + 49) = 0;
              v291[400] = 0;
              *((_QWORD *)v291 + 53) = 0x800000000LL;
              *((_QWORD *)v291 + 66) = v291 + 544;
              *((_QWORD *)v291 + 67) = 0x600000000LL;
            }
            *v279 = v291;
          }
          v291[*v291 + 1] = 3;
          v293 = *v279;
          v294 = **v279;
          *v293 = v294 + 1;
          *(_QWORD *)&v293[8 * v294 + 16] = v292;
        }
        else
        {
          sub_A73FE0((__int64)v141, *(_QWORD *)(v141[2331] & 0xFFFFFFFFFFFFFFF0LL));
        }
        return v13;
      }
      if ( (unsigned __int8)sub_F343C0(*(_QWORD *)(v447 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        v316 = sub_A3EFE0(v141, v447);
        if ( v316 == sub_21D53A0() )
        {
          v317 = sub_DFB220(*(_QWORD *)(a1 + 400));
          v318 = (unsigned __int8 **)sub_E0FED0(a1, v317, 2391, 0);
          if ( v318 )
            sub_AC60B0(v318, v447, 8u);
          return v13;
        }
      }
    }
    return 1;
  }
  a2 = v15;
  if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 59 > 2 )
  {
LABEL_28:
    v34 = sub_B5ABC0(v469, a2, v16, (__int64)v17, v18, v19);
    v18 = v34;
    if ( v34 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 <= 1 )
      {
LABEL_30:
        v35 = sub_DFB220(*(_QWORD *)(a1 + 400));
        v36 = sub_E0FED0(a1, v35, 2387, 0);
        v37 = (unsigned __int8 **)v36;
        if ( !v36 )
          return v13;
        v38 = *(unsigned __int8 **)v36;
        v39 = a4;
        if ( !*(_QWORD *)v36 )
        {
          v310 = *(_QWORD *)(v36 + 8);
          v311 = *(_DWORD *)(v310 + 14976);
          if ( v311 )
          {
            v333 = (unsigned int)(v311 - 1);
            *(_DWORD *)(v310 + 14976) = v333;
            v38 = *(unsigned __int8 **)(v310 + 8 * v333 + 14848);
            v334 = *((unsigned int *)v38 + 134);
            v335 = *((_QWORD *)v38 + 66);
            *v38 = 0;
            *((_DWORD *)v38 + 106) = 0;
            v336 = v335 + (v334 << 6);
            while ( v335 != v336 )
            {
              while ( 1 )
              {
                v336 -= 64;
                v337 = *(void **)(v336 + 24);
                if ( v337 == (void *)(v336 + 40) )
                  break;
                v451 = v335;
                operator delete(v337);
                v335 = v451;
                if ( v451 == v336 )
                  goto LABEL_323;
              }
            }
LABEL_323:
            *((_DWORD *)v38 + 134) = 0;
          }
          else
          {
            v38 = (unsigned __int8 *)operator new(0x3A0u);
            *v38 = 0;
            *((_QWORD *)v38 + 12) = v38 + 112;
            *((_QWORD *)v38 + 16) = v38 + 144;
            *((_QWORD *)v38 + 20) = v38 + 176;
            *((_QWORD *)v38 + 24) = v38 + 208;
            *((_QWORD *)v38 + 28) = v38 + 240;
            *((_QWORD *)v38 + 32) = v38 + 272;
            *((_QWORD *)v38 + 36) = v38 + 304;
            *((_QWORD *)v38 + 40) = v38 + 336;
            *((_QWORD *)v38 + 44) = v38 + 368;
            *((_QWORD *)v38 + 48) = v38 + 400;
            *((_QWORD *)v38 + 52) = v38 + 432;
            *((_QWORD *)v38 + 13) = 0;
            v38[112] = 0;
            *((_QWORD *)v38 + 17) = 0;
            v38[144] = 0;
            *((_QWORD *)v38 + 21) = 0;
            v38[176] = 0;
            *((_QWORD *)v38 + 25) = 0;
            v38[208] = 0;
            *((_QWORD *)v38 + 29) = 0;
            v38[240] = 0;
            *((_QWORD *)v38 + 33) = 0;
            v38[272] = 0;
            *((_QWORD *)v38 + 37) = 0;
            v38[304] = 0;
            *((_QWORD *)v38 + 41) = 0;
            v38[336] = 0;
            *((_QWORD *)v38 + 45) = 0;
            v38[368] = 0;
            *((_QWORD *)v38 + 49) = 0;
            v38[400] = 0;
            *((_QWORD *)v38 + 53) = 0x800000000LL;
            *((_QWORD *)v38 + 66) = v38 + 544;
            *((_QWORD *)v38 + 67) = 0x600000000LL;
          }
          *v37 = v38;
        }
        v38[*v38 + 1] = 2;
        v40 = *v37;
        v41 = **v37;
        *v40 = v41 + 1;
        *(_QWORD *)&v40[8 * v41 + 16] = v39;
        v42 = *v37;
        if ( !*v37 )
        {
          v314 = v37[1];
          v315 = *((_DWORD *)v314 + 3744);
          if ( v315 )
          {
            v328 = (unsigned int)(v315 - 1);
            *((_DWORD *)v314 + 3744) = v328;
            v42 = *(unsigned __int8 **)&v314[8 * v328 + 14848];
            v329 = *((unsigned int *)v42 + 134);
            v330 = *((_QWORD *)v42 + 66);
            *v42 = 0;
            *((_DWORD *)v42 + 106) = 0;
            v331 = v330 + (v329 << 6);
            while ( v330 != v331 )
            {
              while ( 1 )
              {
                v331 -= 64;
                v332 = *(void **)(v331 + 24);
                if ( v332 == (void *)(v331 + 40) )
                  break;
                operator delete(v332);
                if ( v330 == v331 )
                  goto LABEL_318;
              }
            }
LABEL_318:
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
          *v37 = v42;
        }
        v42[*v42 + 1] = 2;
        v43 = *v37;
        v44 = **v37;
        *v43 = v44 + 1;
        *(_QWORD *)&v43[8 * v44 + 16] = 1;
        v45 = *v37;
        if ( !*v37 )
        {
          v312 = v37[1];
          v313 = *((_DWORD *)v312 + 3744);
          if ( v313 )
          {
            v338 = (unsigned int)(v313 - 1);
            *((_DWORD *)v312 + 3744) = v338;
            v45 = *(unsigned __int8 **)&v312[8 * v338 + 14848];
            v339 = *((unsigned int *)v45 + 134);
            v340 = *((_QWORD *)v45 + 66);
            *v45 = 0;
            *((_DWORD *)v45 + 106) = 0;
            v341 = v340 + (v339 << 6);
            while ( v340 != v341 )
            {
              while ( 1 )
              {
                v341 -= 64;
                v342 = *(void **)(v341 + 24);
                if ( v342 == (void *)(v341 + 40) )
                  break;
                operator delete(v342);
                if ( v340 == v341 )
                  goto LABEL_328;
              }
            }
LABEL_328:
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
          *v37 = v45;
        }
        v45[*v45 + 1] = 2;
        v46 = *v37;
        v47 = **v37;
        *v46 = v47 + 1;
        *(_QWORD *)&v46[8 * v47 + 16] = 4;
        v48 = sub_EC8B80(v35);
        v49 = *v37;
        v50 = v48;
        if ( !*v37 )
        {
          v51 = v37[1];
          v52 = *((_DWORD *)v51 + 3744);
          if ( v52 )
          {
            v53 = (unsigned int)(v52 - 1);
            *((_DWORD *)v51 + 3744) = v53;
            v49 = *(unsigned __int8 **)&v51[8 * v53 + 14848];
            v54 = *((unsigned int *)v49 + 134);
            v55 = *((_QWORD *)v49 + 66);
            *v49 = 0;
            *((_DWORD *)v49 + 106) = 0;
            v56 = v55 + (v54 << 6);
            while ( v55 != v56 )
            {
              while ( 1 )
              {
                v56 -= 64;
                v57 = *(void **)(v56 + 24);
                if ( v57 == (void *)(v56 + 40) )
                  break;
                operator delete(v57);
                if ( v55 == v56 )
                  goto LABEL_40;
              }
            }
LABEL_40:
            v58 = *((unsigned int *)v49 + 106);
            v59 = *((unsigned int *)v49 + 107);
            *((_DWORD *)v49 + 134) = 0;
            v60 = v58 + 1;
LABEL_41:
            *v37 = v49;
            goto LABEL_48;
          }
          goto LABEL_176;
        }
        goto LABEL_47;
      }
LABEL_80:
      a2 = v5;
      v460 = (_QWORD *)v18;
      v131 = sub_D80670(a1, v5, *(_QWORD *)(v18 + 48), a4);
      v18 = (__int64)v460;
      if ( !v131 )
      {
        v343 = (*(__int64 (__fastcall **)(_QWORD *))(*v460 + 16LL))(v460);
        v344 = v460[6];
        v345 = (__int64 *)sub_E10070(a1, (unsigned int)v343, 2386);
        v346 = v345;
        if ( v345 )
        {
          if ( !*v345 )
          {
            v416 = v345[1];
            v417 = *(_DWORD *)(v416 + 14976);
            if ( v417 )
            {
              v431 = (unsigned int)(v417 - 1);
              *(_DWORD *)(v416 + 14976) = v431;
              v418 = *(_QWORD *)(v416 + 8 * v431 + 14848);
              v432 = *(unsigned int *)(v418 + 536);
              *(_BYTE *)v418 = 0;
              v433 = *(_QWORD *)(v418 + 528);
              *(_DWORD *)(v418 + 424) = 0;
              v434 = v433 + (v432 << 6);
              while ( v433 != v434 )
              {
                v434 -= 64;
                v435 = *(void **)(v434 + 24);
                if ( v435 != (void *)(v434 + 40) )
                {
                  v468 = v434;
                  v456 = v433;
                  operator delete(v435);
                  v433 = v456;
                  v434 = v468;
                }
              }
              *(_DWORD *)(v418 + 536) = 0;
            }
            else
            {
              v418 = operator new(0x3A0u);
              *(_BYTE *)v418 = 0;
              v419 = v418 + 96;
              do
              {
                v420 = v419 + 16;
                *(_QWORD *)(v419 + 8) = 0;
                v419 += 32;
                *(_QWORD *)(v419 - 32) = v420;
                *(_BYTE *)(v419 - 16) = 0;
              }
              while ( v418 + 416 != v419 );
              *(_QWORD *)(v418 + 416) = v418 + 432;
              *(_QWORD *)(v418 + 424) = 0x800000000LL;
              *(_QWORD *)(v418 + 528) = v418 + 544;
              *(_QWORD *)(v418 + 536) = 0x600000000LL;
            }
            *v346 = v418;
          }
          *(_BYTE *)(*v346 + *(unsigned __int8 *)*v346 + 1) = 8;
          v347 = (_BYTE *)*v346;
          v348 = *(unsigned __int8 *)*v346;
          *v347 = v348 + 1;
          *(_QWORD *)&v347[8 * v348 + 16] = v344;
          if ( !*v346 )
          {
            v411 = (unsigned __int8 *)v346[1];
            v412 = *((_DWORD *)v411 + 3744);
            if ( v412 )
            {
              v436 = (unsigned int)(v412 - 1);
              *((_DWORD *)v411 + 3744) = v436;
              v413 = *(_QWORD *)&v411[8 * v436 + 14848];
              v437 = *(unsigned int *)(v413 + 536);
              *(_BYTE *)v413 = 0;
              v438 = *(_QWORD *)(v413 + 528);
              *(_DWORD *)(v413 + 424) = 0;
              v439 = v438 + (v437 << 6);
              while ( v438 != v439 )
              {
                v439 -= 64;
                v440 = *(void **)(v439 + 24);
                if ( v440 != (void *)(v439 + 40) )
                {
                  v457 = v438;
                  operator delete(v440);
                  v438 = v457;
                }
              }
              *(_DWORD *)(v413 + 536) = 0;
            }
            else
            {
              v413 = operator new(0x3A0u);
              *(_BYTE *)v413 = 0;
              v414 = v413 + 96;
              do
              {
                v415 = v414 + 16;
                *(_QWORD *)(v414 + 8) = 0;
                v414 += 32;
                *(_QWORD *)(v414 - 32) = v415;
                *(_BYTE *)(v414 - 16) = 0;
              }
              while ( v413 + 416 != v414 );
              *(_QWORD *)(v413 + 416) = v413 + 432;
              *(_QWORD *)(v413 + 424) = 0x800000000LL;
              *(_QWORD *)(v413 + 528) = v413 + 544;
              *(_QWORD *)(v413 + 536) = 0x600000000LL;
            }
            *v346 = v413;
          }
          *(_BYTE *)(*v346 + *(unsigned __int8 *)*v346 + 1) = 2;
          v349 = (_BYTE *)*v346;
          v350 = *(unsigned __int8 *)*v346;
          *v349 = v350 + 1;
          *(_QWORD *)&v349[8 * v350 + 16] = 0;
        }
        v351 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_QWORD *)(v351 + 8) & 7LL | (*(__int64 *)(v351 + 8) >> 3) & 1 )
          v352 = sub_F411C0(v7) & 0xFFFFFFFFFFFFFFF0LL;
        else
          v352 = v351 & 0xFFFFFFFFFFFFFFF0LL;
        if ( v346 )
        {
          if ( !*v346 )
          {
            v406 = (unsigned __int8 *)v346[1];
            v407 = *((_DWORD *)v406 + 3744);
            if ( v407 )
            {
              v441 = (unsigned int)(v407 - 1);
              *((_DWORD *)v406 + 3744) = v441;
              v408 = *(_QWORD *)&v406[8 * v441 + 14848];
              v442 = *(unsigned int *)(v408 + 536);
              *(_BYTE *)v408 = 0;
              v443 = *(_QWORD *)(v408 + 528);
              *(_DWORD *)(v408 + 424) = 0;
              v444 = v443 + (v442 << 6);
              while ( v443 != v444 )
              {
                v444 -= 64;
                v445 = *(void **)(v444 + 24);
                if ( v445 != (void *)(v444 + 40) )
                {
                  v458 = v443;
                  operator delete(v445);
                  v443 = v458;
                }
              }
              *(_DWORD *)(v408 + 536) = 0;
            }
            else
            {
              v408 = operator new(0x3A0u);
              *(_BYTE *)v408 = 0;
              v409 = v408 + 96;
              do
              {
                v410 = v409 + 16;
                *(_QWORD *)(v409 + 8) = 0;
                v409 += 32;
                *(_QWORD *)(v409 - 32) = v410;
                *(_BYTE *)(v409 - 16) = 0;
              }
              while ( v409 != v408 + 416 );
              *(_QWORD *)(v408 + 416) = v408 + 432;
              *(_QWORD *)(v408 + 424) = 0x800000000LL;
              *(_QWORD *)(v408 + 528) = v408 + 544;
              *(_QWORD *)(v408 + 536) = 0x600000000LL;
            }
            *v346 = v408;
          }
          *(_BYTE *)(*v346 + *(unsigned __int8 *)*v346 + 1) = 8;
          v353 = (_BYTE *)*v346;
          v354 = *(unsigned __int8 *)*v346;
          *v353 = v354 + 1;
          *(_QWORD *)&v353[8 * v354 + 16] = v352;
          if ( !*v346 )
          {
            v421 = (unsigned __int8 *)v346[1];
            v422 = *((_DWORD *)v421 + 3744);
            if ( v422 )
            {
              v426 = (unsigned int)(v422 - 1);
              *((_DWORD *)v421 + 3744) = v426;
              v423 = *(_QWORD *)&v421[8 * v426 + 14848];
              v427 = *(unsigned int *)(v423 + 536);
              *(_BYTE *)v423 = 0;
              v428 = *(_QWORD *)(v423 + 528);
              *(_DWORD *)(v423 + 424) = 0;
              v429 = v428 + (v427 << 6);
              while ( v428 != v429 )
              {
                v429 -= 64;
                v430 = *(void **)(v429 + 24);
                if ( v430 != (void *)(v429 + 40) )
                  operator delete(v430);
              }
              *(_DWORD *)(v423 + 536) = 0;
            }
            else
            {
              v423 = operator new(0x3A0u);
              *(_BYTE *)v423 = 0;
              v424 = v423 + 96;
              do
              {
                v425 = v424 + 16;
                *(_QWORD *)(v424 + 8) = 0;
                v424 += 32;
                *(_QWORD *)(v424 - 32) = v425;
                *(_BYTE *)(v424 - 16) = 0;
              }
              while ( v423 + 416 != v424 );
              *(_QWORD *)(v423 + 416) = v423 + 432;
              *(_QWORD *)(v423 + 424) = 0x800000000LL;
              *(_QWORD *)(v423 + 528) = v423 + 544;
              *(_QWORD *)(v423 + 536) = 0x600000000LL;
            }
            *v346 = v423;
          }
          v355 = (_BYTE *)*v346;
          LOBYTE(v478) = 1;
          v356 = *(unsigned int *)(*v346 + 424);
          if ( v356 + 1 > (unsigned __int64)*(unsigned int *)(*v346 + 428) )
          {
            sub_22134E0(v355 + 416, v355 + 432, v356 + 1, 12);
            v356 = *((unsigned int *)v355 + 106);
          }
          v357 = *((_QWORD *)v355 + 52) + 12 * v356;
          *(_QWORD *)v357 = v343;
          *(_DWORD *)(v357 + 8) = v478;
          ++*((_DWORD *)v355 + 106);
        }
        return v13;
      }
      while ( 1 )
      {
        v132 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v18 = v132;
        if ( !v132 )
          break;
        if ( (*(_BYTE *)(v132 + 28) & 0x7Fu) - 49 <= 2 )
        {
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v132 + 48)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 43 <= 1 )
            goto LABEL_30;
          goto LABEL_80;
        }
      }
    }
    goto LABEL_84;
  }
  v20 = *(_QWORD *)(v15 + 104);
  v21 = *(_QWORD *)(v20 + 96);
  v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v21 & 1) == 0 )
  {
    v143 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v21 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v21 & 2) == 0 )
        goto LABEL_14;
      v144 = v143[2295];
      v145 = v20 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v144 )
      {
        v146 = v143[294];
        v143[304] += 24LL;
        v147 = (v146 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v17 = (_QWORD *)(v147 + 24);
        if ( v143[295] >= v147 + 24 && v146 )
        {
          v143[294] = v17;
          v148 = (v146 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v473 = v144;
          v466 = v20;
          v148 = sub_962430((__int64)(v143 + 294), 24, 24, 3, v20, v144);
          v144 = v473;
          v20 = v466;
          v147 = v148 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v148 = v144;
        v145 = v147 | 4;
        *(_DWORD *)(v148 + 8) = 0;
        *(_QWORD *)(v148 + 16) = v20;
      }
      v22 = v145 & 0xFFFFFFFFFFFFFFFELL;
      v21 = v22 | 1;
      *(_QWORD *)(v20 + 96) = v22 | 1;
    }
  }
  if ( v22 )
  {
    if ( (v22 & 4) != 0 )
    {
      v23 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v23 )
      {
        v24 = *(_QWORD *)v23;
        v25 = *(_DWORD *)(*(_QWORD *)v23 + 12LL);
        if ( v23[2] != v25 )
        {
          v23[2] = v25;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 152LL))(v24, v20);
        }
      }
    }
  }
LABEL_14:
  v26 = *(_QWORD *)(v469 + 128);
  if ( (*(_BYTE *)(v26 + 24) & 1) != 0 )
    v19 = sub_B72C40(v26);
  else
    v19 = *(_QWORD *)(v26 + 24);
  v27 = *(_QWORD *)(v469 + 104);
  v28 = *(_QWORD *)(v27 + 96);
  v29 = v28;
  v30 = v28 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v28 & 1) != 0 )
    goto LABEL_120;
  v17 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v28 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_120;
  if ( (v28 & 2) != 0 )
  {
    v156 = v17[2295];
    v157 = v27 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v156 )
    {
      v158 = v17[294];
      v17[304] += 24LL;
      v159 = (v158 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v17[295] >= v159 + 24 && v158 )
      {
        v17[294] = v159 + 24;
        v160 = (v158 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v475 = v156;
        v472 = v19;
        v465 = v27;
        v160 = sub_962430((__int64)(v17 + 294), 24, 24, 3, v27, v19);
        v156 = v475;
        v19 = v472;
        v27 = v465;
        v159 = v160 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v160 = v156;
      v157 = v159 | 4;
      *(_DWORD *)(v160 + 8) = 0;
      *(_QWORD *)(v160 + 16) = v27;
    }
    v30 = v157 & 0xFFFFFFFFFFFFFFFELL;
    v29 = v30 | 1;
    *(_QWORD *)(v27 + 96) = v30 | 1;
LABEL_120:
    if ( v30 )
    {
      if ( (v30 & 4) != 0 )
      {
        v161 = (_DWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v161 )
        {
          v162 = *(_QWORD *)v161;
          v163 = *(_DWORD *)(*(_QWORD *)v161 + 12LL);
          if ( v161[2] != v163 )
          {
            v161[2] = v163;
            v463 = v19;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v162 + 152LL))(v162, v27);
            v19 = v463;
          }
        }
      }
    }
    v31 = *(_QWORD *)(v469 + 128);
    v27 = *(_QWORD *)(v469 + 104);
    v16 = *(_QWORD *)(v27 + 96);
    a2 = v16 & 0xFFFFFFFFFFFFFFFELL;
    v471 = v19 + 24LL * *(unsigned int *)(v31 + 16);
    LOBYTE(v28) = v16;
    if ( (v16 & 1) != 0 )
      goto LABEL_126;
    v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_126;
    goto LABEL_20;
  }
  v31 = *(_QWORD *)(v469 + 128);
  v16 = 3LL * *(unsigned int *)(v31 + 16);
  a2 = v19 + 24LL * *(unsigned int *)(v31 + 16);
  v471 = a2;
LABEL_20:
  if ( (v28 & 2) == 0 )
    goto LABEL_21;
  v19 = v17[2295];
  v209 = v27 & 0xFFFFFFFFFFFFFFFBLL;
  if ( v19 )
  {
    v210 = v17[294];
    v17[304] += 24LL;
    v211 = (v210 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v17[295] >= v211 + 24 && v210 )
    {
      v17[294] = v211 + 24;
      v212 = (v210 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v474 = v19;
      v464 = v27;
      v212 = sub_962430((__int64)(v17 + 294), 24, 24, 3, v27, v19);
      v19 = v474;
      v27 = v464;
      v211 = v212 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)v212 = v19;
    v209 = v211 | 4;
    *(_DWORD *)(v212 + 8) = 0;
    *(_QWORD *)(v212 + 16) = v27;
  }
  a2 = v209 & 0xFFFFFFFFFFFFFFFELL;
  v16 = a2 | 1;
  *(_QWORD *)(v27 + 96) = a2 | 1;
LABEL_126:
  if ( a2 )
  {
    a2 &= 4u;
    if ( (_DWORD)a2 )
    {
      v16 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v16 )
      {
        v164 = *(_QWORD *)v16;
        v165 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
        if ( *(_DWORD *)(v16 + 8) != v165 )
        {
          *(_DWORD *)(v16 + 8) = v165;
          a2 = v27;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v164 + 152LL))(v164, v27);
        }
      }
    }
  }
  v31 = *(_QWORD *)(v469 + 128);
LABEL_21:
  if ( (*(_BYTE *)(v31 + 24) & 1) != 0 )
    v18 = sub_B72C40(v31);
  else
    v18 = *(_QWORD *)(v31 + 24);
  if ( v18 == v471 )
    goto LABEL_28;
  while ( 1 )
  {
    v32 = **(_QWORD **)(v18 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_BYTE *)(*(_QWORD *)v32 + 8LL) & 0xF) != 0 )
    {
      v462 = v18;
      v155 = sub_F411C0(**(_QWORD **)(v18 + 16));
      v18 = v462;
      v33 = v155 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v33 = *(_QWORD *)v32 & 0xFFFFFFFFFFFFFFF0LL;
    }
    a2 = v5;
    v459 = v18;
    if ( !(unsigned __int8)sub_D80670(a1, v5, v33, a4) )
      break;
    v18 = v459 + 24;
    if ( v459 + 24 == v471 )
      goto LABEL_28;
  }
  v188 = *(_DWORD *)v459;
  v189 = **(_QWORD **)(v459 + 16) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(*(_QWORD *)v189 + 8LL) & 7LL | (*(__int64 *)(*(_QWORD *)v189 + 8LL) >> 3) & 1 )
    v190 = sub_F411C0(**(_QWORD **)(v459 + 16)) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v190 = *(_QWORD *)v189 & 0xFFFFFFFFFFFFFFF0LL;
  v191 = sub_E10070(a1, v188, 2386);
  v192 = (unsigned __int8 **)v191;
  if ( v191 )
  {
    v193 = *(unsigned __int8 **)v191;
    if ( !*(_QWORD *)v191 )
    {
      v321 = *(_QWORD *)(v191 + 8);
      v322 = *(_DWORD *)(v321 + 14976);
      if ( v322 )
      {
        v363 = (unsigned int)(v322 - 1);
        *(_DWORD *)(v321 + 14976) = v363;
        v193 = *(unsigned __int8 **)(v321 + 8 * v363 + 14848);
        v364 = *((unsigned int *)v193 + 134);
        v365 = *((_QWORD *)v193 + 66);
        *v193 = 0;
        *((_DWORD *)v193 + 106) = 0;
        v366 = v365 + (v364 << 6);
        while ( v365 != v366 )
        {
          while ( 1 )
          {
            v366 -= 64;
            v367 = *(void **)(v366 + 24);
            if ( v367 == (void *)(v366 + 40) )
              break;
            v452 = v365;
            operator delete(v367);
            v365 = v452;
            if ( v452 == v366 )
              goto LABEL_352;
          }
        }
LABEL_352:
        *((_DWORD *)v193 + 134) = 0;
      }
      else
      {
        v193 = (unsigned __int8 *)operator new(0x3A0u);
        *v193 = 0;
        *((_QWORD *)v193 + 12) = v193 + 112;
        *((_QWORD *)v193 + 16) = v193 + 144;
        *((_QWORD *)v193 + 20) = v193 + 176;
        *((_QWORD *)v193 + 24) = v193 + 208;
        *((_QWORD *)v193 + 28) = v193 + 240;
        *((_QWORD *)v193 + 32) = v193 + 272;
        *((_QWORD *)v193 + 36) = v193 + 304;
        *((_QWORD *)v193 + 40) = v193 + 336;
        *((_QWORD *)v193 + 44) = v193 + 368;
        *((_QWORD *)v193 + 48) = v193 + 400;
        *((_QWORD *)v193 + 52) = v193 + 432;
        *((_QWORD *)v193 + 13) = 0;
        v193[112] = 0;
        *((_QWORD *)v193 + 17) = 0;
        v193[144] = 0;
        *((_QWORD *)v193 + 21) = 0;
        v193[176] = 0;
        *((_QWORD *)v193 + 25) = 0;
        v193[208] = 0;
        *((_QWORD *)v193 + 29) = 0;
        v193[240] = 0;
        *((_QWORD *)v193 + 33) = 0;
        v193[272] = 0;
        *((_QWORD *)v193 + 37) = 0;
        v193[304] = 0;
        *((_QWORD *)v193 + 41) = 0;
        v193[336] = 0;
        *((_QWORD *)v193 + 45) = 0;
        v193[368] = 0;
        *((_QWORD *)v193 + 49) = 0;
        v193[400] = 0;
        *((_QWORD *)v193 + 53) = 0x800000000LL;
        *((_QWORD *)v193 + 66) = v193 + 544;
        *((_QWORD *)v193 + 67) = 0x600000000LL;
      }
      *v192 = v193;
    }
    v193[*v193 + 1] = 8;
    v194 = *v192;
    v195 = **v192;
    *v194 = v195 + 1;
    *(_QWORD *)&v194[8 * v195 + 16] = v190;
    v196 = *v192;
    if ( !*v192 )
    {
      v319 = v192[1];
      v320 = *((_DWORD *)v319 + 3744);
      if ( v320 )
      {
        v373 = (unsigned int)(v320 - 1);
        *((_DWORD *)v319 + 3744) = v373;
        v196 = *(unsigned __int8 **)&v319[8 * v373 + 14848];
        v374 = *((unsigned int *)v196 + 134);
        v375 = *((_QWORD *)v196 + 66);
        *v196 = 0;
        *((_DWORD *)v196 + 106) = 0;
        v376 = v375 + (v374 << 6);
        while ( v375 != v376 )
        {
          while ( 1 )
          {
            v376 -= 64;
            v377 = *(void **)(v376 + 24);
            if ( v377 == (void *)(v376 + 40) )
              break;
            operator delete(v377);
            if ( v375 == v376 )
              goto LABEL_362;
          }
        }
LABEL_362:
        *((_DWORD *)v196 + 134) = 0;
      }
      else
      {
        v196 = (unsigned __int8 *)operator new(0x3A0u);
        *v196 = 0;
        *((_QWORD *)v196 + 12) = v196 + 112;
        *((_QWORD *)v196 + 16) = v196 + 144;
        *((_QWORD *)v196 + 20) = v196 + 176;
        *((_QWORD *)v196 + 24) = v196 + 208;
        *((_QWORD *)v196 + 28) = v196 + 240;
        *((_QWORD *)v196 + 32) = v196 + 272;
        *((_QWORD *)v196 + 36) = v196 + 304;
        *((_QWORD *)v196 + 40) = v196 + 336;
        *((_QWORD *)v196 + 44) = v196 + 368;
        *((_QWORD *)v196 + 48) = v196 + 400;
        *((_QWORD *)v196 + 52) = v196 + 432;
        *((_QWORD *)v196 + 13) = 0;
        v196[112] = 0;
        *((_QWORD *)v196 + 17) = 0;
        v196[144] = 0;
        *((_QWORD *)v196 + 21) = 0;
        v196[176] = 0;
        *((_QWORD *)v196 + 25) = 0;
        v196[208] = 0;
        *((_QWORD *)v196 + 29) = 0;
        v196[240] = 0;
        *((_QWORD *)v196 + 33) = 0;
        v196[272] = 0;
        *((_QWORD *)v196 + 37) = 0;
        v196[304] = 0;
        *((_QWORD *)v196 + 41) = 0;
        v196[336] = 0;
        *((_QWORD *)v196 + 45) = 0;
        v196[368] = 0;
        *((_QWORD *)v196 + 49) = 0;
        v196[400] = 0;
        *((_QWORD *)v196 + 53) = 0x800000000LL;
        *((_QWORD *)v196 + 66) = v196 + 544;
        *((_QWORD *)v196 + 67) = 0x600000000LL;
      }
      *v192 = v196;
    }
    v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
    v196[*v196 + 1] = 2;
    v197 = *v192;
    v198 = **v192;
    *v197 = v198 + 1;
    *(_QWORD *)&v197[8 * v198 + 16] = 1;
  }
  if ( *(_QWORD *)(*v8 + 8LL) & 7LL | (*(__int64 *)(*v8 + 8LL) >> 3) & 1 )
    v199 = sub_F411C0(v7) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v199 = *v8 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v192 )
    return 0;
  v200 = *v192;
  if ( !*v192 )
  {
    v326 = v192[1];
    v327 = *((_DWORD *)v326 + 3744);
    if ( v327 )
    {
      v358 = (unsigned int)(v327 - 1);
      *((_DWORD *)v326 + 3744) = v358;
      v200 = *(unsigned __int8 **)&v326[8 * v358 + 14848];
      v359 = *((unsigned int *)v200 + 134);
      *v200 = 0;
      v360 = *((_QWORD *)v200 + 66);
      *((_DWORD *)v200 + 106) = 0;
      v361 = v360 + (v359 << 6);
      while ( v360 != v361 )
      {
        while ( 1 )
        {
          v361 -= 64;
          v362 = *(void **)(v361 + 24);
          if ( v362 == (void *)(v361 + 40) )
            break;
          operator delete(v362);
          if ( v360 == v361 )
            goto LABEL_347;
        }
      }
LABEL_347:
      *((_DWORD *)v200 + 134) = 0;
    }
    else
    {
      v200 = (unsigned __int8 *)operator new(0x3A0u);
      *v200 = 0;
      *((_QWORD *)v200 + 12) = v200 + 112;
      *((_QWORD *)v200 + 16) = v200 + 144;
      *((_QWORD *)v200 + 20) = v200 + 176;
      *((_QWORD *)v200 + 24) = v200 + 208;
      *((_QWORD *)v200 + 28) = v200 + 240;
      *((_QWORD *)v200 + 32) = v200 + 272;
      *((_QWORD *)v200 + 36) = v200 + 304;
      *((_QWORD *)v200 + 40) = v200 + 336;
      *((_QWORD *)v200 + 44) = v200 + 368;
      *((_QWORD *)v200 + 48) = v200 + 400;
      *((_QWORD *)v200 + 52) = v200 + 432;
      *((_QWORD *)v200 + 13) = 0;
      v200[112] = 0;
      *((_QWORD *)v200 + 17) = 0;
      v200[144] = 0;
      *((_QWORD *)v200 + 21) = 0;
      v200[176] = 0;
      *((_QWORD *)v200 + 25) = 0;
      v200[208] = 0;
      *((_QWORD *)v200 + 29) = 0;
      v200[240] = 0;
      *((_QWORD *)v200 + 33) = 0;
      v200[272] = 0;
      *((_QWORD *)v200 + 37) = 0;
      v200[304] = 0;
      *((_QWORD *)v200 + 41) = 0;
      v200[336] = 0;
      *((_QWORD *)v200 + 45) = 0;
      v200[368] = 0;
      *((_QWORD *)v200 + 49) = 0;
      v200[400] = 0;
      *((_QWORD *)v200 + 53) = 0x800000000LL;
      *((_QWORD *)v200 + 66) = v200 + 544;
      *((_QWORD *)v200 + 67) = 0x600000000LL;
    }
    *v192 = v200;
  }
  v200[*v200 + 1] = 8;
  v201 = *v192;
  v202 = **v192;
  *v201 = v202 + 1;
  *(_QWORD *)&v201[8 * v202 + 16] = v199;
  v203 = *v192;
  if ( *v192 )
  {
    v204 = *((unsigned int *)v203 + 106);
    v205 = *((unsigned int *)v203 + 107);
    v206 = v204 + 1;
  }
  else
  {
    v323 = v192[1];
    v324 = *((_DWORD *)v323 + 3744);
    if ( v324 )
    {
      v368 = (unsigned int)(v324 - 1);
      *((_DWORD *)v323 + 3744) = v368;
      v203 = *(unsigned __int8 **)&v323[8 * v368 + 14848];
      v369 = *((unsigned int *)v203 + 134);
      *v203 = 0;
      v370 = *((_QWORD *)v203 + 66);
      *((_DWORD *)v203 + 106) = 0;
      v371 = v370 + (v369 << 6);
      while ( v370 != v371 )
      {
        while ( 1 )
        {
          v371 -= 64;
          v372 = *(void **)(v371 + 24);
          if ( v372 == (void *)(v371 + 40) )
            break;
          operator delete(v372);
          if ( v370 == v371 )
            goto LABEL_357;
        }
      }
LABEL_357:
      v204 = *((unsigned int *)v203 + 106);
      v205 = *((unsigned int *)v203 + 107);
      *((_DWORD *)v203 + 134) = 0;
      v206 = v204 + 1;
    }
    else
    {
      v325 = operator new(0x3A0u);
      v205 = 8;
      v206 = 1;
      v203 = (unsigned __int8 *)v325;
      *(_BYTE *)v325 = 0;
      *(_QWORD *)(v325 + 96) = v325 + 112;
      *(_QWORD *)(v325 + 128) = v325 + 144;
      *(_QWORD *)(v325 + 160) = v325 + 176;
      *(_QWORD *)(v325 + 192) = v325 + 208;
      *(_QWORD *)(v325 + 224) = v325 + 240;
      *(_QWORD *)(v325 + 256) = v325 + 272;
      *(_QWORD *)(v325 + 288) = v325 + 304;
      *(_QWORD *)(v325 + 320) = v325 + 336;
      *(_QWORD *)(v325 + 352) = v325 + 368;
      *(_QWORD *)(v325 + 384) = v325 + 400;
      *(_QWORD *)(v325 + 416) = v325 + 432;
      *(_QWORD *)(v325 + 104) = 0;
      *(_BYTE *)(v325 + 112) = 0;
      *(_QWORD *)(v325 + 136) = 0;
      *(_BYTE *)(v325 + 144) = 0;
      *(_QWORD *)(v325 + 168) = 0;
      *(_BYTE *)(v325 + 176) = 0;
      *(_QWORD *)(v325 + 200) = 0;
      *(_BYTE *)(v325 + 208) = 0;
      *(_QWORD *)(v325 + 232) = 0;
      *(_BYTE *)(v325 + 240) = 0;
      *(_QWORD *)(v325 + 264) = 0;
      *(_BYTE *)(v325 + 272) = 0;
      *(_QWORD *)(v325 + 296) = 0;
      *(_BYTE *)(v325 + 304) = 0;
      *(_QWORD *)(v325 + 328) = 0;
      *(_BYTE *)(v325 + 336) = 0;
      *(_QWORD *)(v325 + 360) = 0;
      *(_BYTE *)(v325 + 368) = 0;
      *(_QWORD *)(v325 + 392) = 0;
      *(_BYTE *)(v325 + 400) = 0;
      *(_QWORD *)(v325 + 424) = 0x800000000LL;
      *(_QWORD *)(v325 + 528) = v325 + 544;
      *(_QWORD *)(v325 + 536) = 0x600000000LL;
      v204 = 0;
    }
    *v192 = v203;
  }
  LODWORD(v477) = v188;
  HIDWORD(v477) = v188;
  LOBYTE(v478) = 1;
  if ( v205 < v206 )
  {
    sub_22134E0(v203 + 416, v203 + 432, v206, 12);
    v204 = *((unsigned int *)v203 + 106);
  }
  v13 = 0;
  v207 = *((_QWORD *)v203 + 52) + 12 * v204;
  *(_QWORD *)v207 = v477;
  *(_DWORD *)(v207 + 8) = v478;
  ++*((_DWORD *)v203 + 106);
  return v13;
}

