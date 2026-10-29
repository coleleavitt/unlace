__int64 __fastcall sub_997020(_QWORD *a1, _DWORD **a2, __int64 *a3, __int64 a4)
{
  _DWORD *v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  _DWORD *v8; // rdx
  _DWORD *v9; // rax
  unsigned int v10; // esi
  _DWORD *v11; // rax
  int v12; // ecx
  _DWORD *v13; // rax
  char *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  _DWORD *v18; // rax
  _DWORD *v19; // rdx
  __int64 v20; // rax
  _DWORD *v21; // rbx
  __int64 *v22; // r13
  unsigned __int32 v23; // eax
  unsigned __int32 v24; // edx
  unsigned __int64 v25; // r15
  __int64 v26; // r14
  unsigned __int32 v27; // edx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbp
  unsigned int v30; // eax
  unsigned int v31; // edx
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // r14
  unsigned int v34; // eax
  __int32 *v35; // rbp
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rax
  __int32 *v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r12
  __int64 v48; // rbp
  __int64 v49; // rdi
  _DWORD *v50; // rdi
  bool v51; // zf
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 *v54; // rcx
  __int64 v55; // rdi
  __int64 *v56; // r8
  unsigned __int64 v57; // r9
  __int64 v58; // r12
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  char v61; // al
  int v62; // r14d
  unsigned int v63; // r14d
  unsigned int v64; // esi
  __int64 v65; // rdi
  unsigned int v66; // eax
  _QWORD *v67; // rbp
  int v68; // edx
  __int64 v69; // r13
  __int64 *v70; // rax
  __int64 v71; // rdx
  unsigned __int32 v72; // edx
  unsigned __int64 v73; // r14
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  unsigned int v76; // esi
  unsigned int v77; // edi
  unsigned __int64 v78; // r14
  unsigned __int64 v79; // r15
  unsigned int v80; // edx
  __int32 *v81; // rbp
  unsigned __int64 v82; // rax
  unsigned int v83; // esi
  unsigned __int64 v84; // r14
  unsigned __int64 v85; // r15
  unsigned int v86; // edx
  unsigned __int64 v87; // r14
  unsigned __int64 v88; // rax
  __int32 *v89; // rdx
  unsigned __int64 v90; // rax
  unsigned int v91; // eax
  unsigned __int64 v92; // r14
  unsigned __int64 v93; // r8
  unsigned int v94; // eax
  __int32 *v95; // r15
  __int64 v96; // rcx
  __int64 v97; // rbp
  int v98; // r14d
  int v99; // eax
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // r9
  int v106; // r8d
  int v107; // eax
  int v108; // r10d
  __int64 v109; // r14
  int v110; // r9d
  int v111; // eax
  __int64 v112; // rcx
  int v113; // r9d
  _DWORD *v114; // rax
  _QWORD *v116; // r10
  int v117; // eax
  __int64 v118; // r8
  int v119; // r9d
  int v120; // eax
  int v121; // r10d
  __int64 v122; // r8
  int v123; // r9d
  int v124; // eax
  int v125; // r10d
  __int64 v126; // r8
  int v127; // eax
  __int64 v128; // r9
  int v129; // r11d
  __int64 v130; // r9
  int v131; // r10d
  int v132; // eax
  int v133; // r11d
  __int64 v134; // r10
  int v135; // r9d
  int v136; // eax
  __int64 v137; // r8
  int v138; // r10d
  __int64 v139; // r11
  int v140; // eax
  __int64 v141; // r10
  int v142; // eax
  int v143; // r10d
  __int64 v144; // r11
  int v145; // r10d
  int v146; // eax
  __int64 v147; // r9
  int v148; // r11d
  __int64 v149; // r10
  int v150; // r12d
  int v151; // eax
  __int64 v152; // r8
  __int64 v153; // r9
  int v154; // r10d
  int v155; // eax
  __int64 v156; // r8
  int v157; // r10d
  __int64 v158; // r8
  int v159; // r10d
  int v160; // eax
  int v161; // r8d
  __int64 v162; // r8
  int v163; // r10d
  int v164; // eax
  int v165; // r8d
  __int64 v166; // r12
  int v167; // edx
  int v168; // eax
  __int64 v169; // r11
  int v170; // r9d
  __int64 v171; // rax
  int v172; // r8d
  int v173; // eax
  int v174; // eax
  __int64 v175; // r12
  __int64 v176; // r11
  int v177; // r10d
  int v178; // eax
  __int64 v179; // r11
  __int64 v180; // r8
  int v181; // eax
  __int64 v182; // rax
  int v183; // r8d
  int v184; // eax
  int v185; // eax
  __int64 v186; // r10
  __int64 v187; // r11
  int v188; // edx
  int v189; // eax
  __int64 v190; // r11
  int v191; // eax
  __int64 v192; // r12
  __int64 v193; // r11
  int v194; // r10d
  int v195; // eax
  __int64 v196; // r11
  __int64 v197; // r9
  int v198; // eax
  __int64 v199; // r10
  int v200; // edx
  int v201; // eax
  int v202; // eax
  __int64 v203; // r9
  int v204; // r12d
  int v205; // eax
  __int64 v206; // r10
  int v207; // eax
  __int64 v208; // r12
  int v209; // edx
  int v210; // eax
  int v211; // r10d
  int v212; // r12d
  __int64 v213; // rax
  int v214; // eax
  __int64 v215; // r11
  int v216; // eax
  __int64 v217; // r12
  __int64 v218; // r11
  int v219; // r10d
  int v220; // eax
  __int64 v221; // r11
  __int64 v222; // r8
  int v223; // eax
  __int64 v224; // r12
  __int64 v225; // r11
  int v226; // edx
  int v227; // eax
  __int64 v228; // r11
  __int64 v229; // r10
  int v230; // eax
  __int64 v231; // r12
  __int64 v232; // r11
  int v233; // edx
  int v234; // eax
  __int64 v235; // r10
  __int64 v236; // r11
  int v237; // eax
  __int64 v238; // r11
  int v239; // edx
  int v240; // eax
  int v241; // eax
  __int64 v242; // r10
  __int64 v243; // r11
  int v244; // edx
  int v245; // eax
  __int64 v246; // r11
  int v247; // eax
  __int64 v248; // r9
  unsigned int v249; // edx
  int v250; // eax
  int v251; // eax
  __int64 v252; // rsi
  __int64 v253; // rdi
  _DWORD *v254; // rdx
  __int64 v255; // rsi
  __int64 v256; // rdi
  _DWORD *v257; // rdx
  int v258; // eax
  __int64 v259; // r12
  __int64 v260; // r10
  int v261; // edx
  int v262; // eax
  __int64 v263; // r10
  int v264; // eax
  __int64 v265; // r8
  __int64 v266; // r11
  int v267; // edx
  int v268; // eax
  __int64 v269; // r11
  int v270; // eax
  __int64 v271; // r9
  int v272; // edx
  int v273; // eax
  int v274; // eax
  int v275; // eax
  __int64 v276; // rsi
  __int64 v277; // rdi
  _DWORD *v278; // rdx
  int v279; // eax
  __int64 v280; // rsi
  __int64 v281; // rdi
  _DWORD *v282; // rdx
  __int64 v283; // r12
  __int64 v284; // r11
  int v285; // edx
  int v286; // eax
  __int64 v287; // r11
  __int64 v288; // r9
  int v289; // eax
  __int64 v290; // rsi
  __int64 v291; // rdi
  _DWORD *v292; // rdx
  int v293; // eax
  __int64 v294; // r8
  __int64 v295; // r11
  int v296; // edx
  int v297; // eax
  __int64 v298; // r11
  int v299; // eax
  int v300; // eax
  __int64 v301; // rsi
  __int64 v302; // rdi
  _DWORD *v303; // rdx
  __int64 v304; // r10
  __int64 v305; // r11
  int v306; // edx
  int v307; // eax
  __int64 v308; // r11
  int v309; // eax
  int v310; // eax
  __int64 v311; // rsi
  __int64 v312; // rdi
  _DWORD *v313; // rdx
  int v314; // eax
  __int64 v315; // rsi
  __int64 v316; // rdi
  _DWORD *v317; // rdx
  __int64 v318; // rsi
  __int64 v319; // rdi
  _DWORD *v320; // rdx
  int v321; // eax
  __int64 v322; // rsi
  __int64 v323; // rdi
  _DWORD *v324; // rdx
  __int64 v325; // rsi
  __int64 v326; // rdi
  _DWORD *v327; // rdx
  int v328; // eax
  __int64 v329; // rsi
  __int64 v330; // rdi
  _DWORD *v331; // rdx
  __int64 v332; // [rsp+8h] [rbp-730h]
  int v333; // [rsp+10h] [rbp-728h]
  _DWORD *v334; // [rsp+20h] [rbp-718h]
  unsigned int v335; // [rsp+3Ch] [rbp-6FCh]
  unsigned __int64 v336; // [rsp+48h] [rbp-6F0h]
  unsigned __int64 v337; // [rsp+48h] [rbp-6F0h]
  unsigned __int64 v338; // [rsp+48h] [rbp-6F0h]
  unsigned __int64 v339; // [rsp+48h] [rbp-6F0h]
  unsigned __int64 v340; // [rsp+48h] [rbp-6F0h]
  unsigned __int64 v341; // [rsp+48h] [rbp-6F0h]
  __int32 *v342; // [rsp+48h] [rbp-6F0h]
  __int64 v343; // [rsp+48h] [rbp-6F0h]
  unsigned int v344; // [rsp+48h] [rbp-6F0h]
  __int64 v345; // [rsp+48h] [rbp-6F0h]
  __int64 v346; // [rsp+48h] [rbp-6F0h]
  unsigned __int64 v348; // [rsp+58h] [rbp-6E0h]
  unsigned __int64 v349; // [rsp+58h] [rbp-6E0h]
  int v350; // [rsp+58h] [rbp-6E0h]
  __int64 v351; // [rsp+58h] [rbp-6E0h]
  __int64 v352; // [rsp+58h] [rbp-6E0h]
  __int64 v353; // [rsp+58h] [rbp-6E0h]
  __int64 v354; // [rsp+58h] [rbp-6E0h]
  int v355; // [rsp+58h] [rbp-6E0h]
  __int64 v356; // [rsp+58h] [rbp-6E0h]
  __int64 v357; // [rsp+58h] [rbp-6E0h]
  __int64 v358; // [rsp+58h] [rbp-6E0h]
  int v359; // [rsp+58h] [rbp-6E0h]
  __int64 v360; // [rsp+58h] [rbp-6E0h]
  __int64 v361; // [rsp+58h] [rbp-6E0h]
  __int64 v362; // [rsp+58h] [rbp-6E0h]
  __int64 v363; // [rsp+58h] [rbp-6E0h]
  __int64 v364; // [rsp+58h] [rbp-6E0h]
  __int64 v365; // [rsp+58h] [rbp-6E0h]
  int v367; // [rsp+70h] [rbp-6C8h]
  __int64 v368; // [rsp+70h] [rbp-6C8h]
  int v369; // [rsp+70h] [rbp-6C8h]
  __int64 v370; // [rsp+70h] [rbp-6C8h]
  int v371; // [rsp+70h] [rbp-6C8h]
  __int64 v372; // [rsp+70h] [rbp-6C8h]
  int v373; // [rsp+70h] [rbp-6C8h]
  __int64 v374; // [rsp+70h] [rbp-6C8h]
  int v375; // [rsp+70h] [rbp-6C8h]
  __int64 v376; // [rsp+78h] [rbp-6C0h]
  __int64 v377; // [rsp+78h] [rbp-6C0h]
  int v378; // [rsp+78h] [rbp-6C0h]
  int v379; // [rsp+78h] [rbp-6C0h]
  __int64 v380; // [rsp+78h] [rbp-6C0h]
  __int64 v381; // [rsp+78h] [rbp-6C0h]
  __int64 v382; // [rsp+78h] [rbp-6C0h]
  int v383; // [rsp+78h] [rbp-6C0h]
  int v384; // [rsp+78h] [rbp-6C0h]
  __int64 v385; // [rsp+78h] [rbp-6C0h]
  __int64 v386; // [rsp+78h] [rbp-6C0h]
  __int64 v387; // [rsp+78h] [rbp-6C0h]
  __int64 v388; // [rsp+78h] [rbp-6C0h]
  __int64 v389; // [rsp+78h] [rbp-6C0h]
  __int64 v390; // [rsp+78h] [rbp-6C0h]
  __int64 v391; // [rsp+78h] [rbp-6C0h]
  __int64 v392; // [rsp+78h] [rbp-6C0h]
  __int64 v393; // [rsp+78h] [rbp-6C0h]
  __int64 v394; // [rsp+78h] [rbp-6C0h]
  __int64 v395; // [rsp+78h] [rbp-6C0h]
  __int64 v396; // [rsp+78h] [rbp-6C0h]
  __int64 v397; // [rsp+78h] [rbp-6C0h]
  __int64 v398; // [rsp+78h] [rbp-6C0h]
  __int64 v399; // [rsp+78h] [rbp-6C0h]
  __int64 v400; // [rsp+78h] [rbp-6C0h]
  __int64 v401; // [rsp+78h] [rbp-6C0h]
  __int64 v402; // [rsp+78h] [rbp-6C0h]
  int v403; // [rsp+78h] [rbp-6C0h]
  int v404; // [rsp+78h] [rbp-6C0h]
  __int64 v405; // [rsp+78h] [rbp-6C0h]
  __int64 v406; // [rsp+78h] [rbp-6C0h]
  __int64 v407; // [rsp+78h] [rbp-6C0h]
  int v408; // [rsp+78h] [rbp-6C0h]
  __int64 v409; // [rsp+78h] [rbp-6C0h]
  __int64 v410; // [rsp+78h] [rbp-6C0h]
  __int64 v411; // [rsp+78h] [rbp-6C0h]
  __int64 v412; // [rsp+78h] [rbp-6C0h]
  __int64 v413; // [rsp+78h] [rbp-6C0h]
  __int64 v414; // [rsp+78h] [rbp-6C0h]
  __int64 v415; // [rsp+78h] [rbp-6C0h]
  __int64 v416; // [rsp+78h] [rbp-6C0h]
  __int64 v417; // [rsp+78h] [rbp-6C0h]
  __int64 v418; // [rsp+78h] [rbp-6C0h]
  int v419; // [rsp+80h] [rbp-6B8h]
  int v420; // [rsp+80h] [rbp-6B8h]
  __int64 v421; // [rsp+80h] [rbp-6B8h]
  int v422; // [rsp+80h] [rbp-6B8h]
  __int64 v423; // [rsp+80h] [rbp-6B8h]
  int v424; // [rsp+80h] [rbp-6B8h]
  int v425; // [rsp+80h] [rbp-6B8h]
  int v426; // [rsp+80h] [rbp-6B8h]
  __int64 v427; // [rsp+80h] [rbp-6B8h]
  int v428; // [rsp+80h] [rbp-6B8h]
  int v429; // [rsp+80h] [rbp-6B8h]
  int v430; // [rsp+80h] [rbp-6B8h]
  __int64 v431; // [rsp+80h] [rbp-6B8h]
  __int64 v432; // [rsp+80h] [rbp-6B8h]
  __int64 v433; // [rsp+80h] [rbp-6B8h]
  int v434; // [rsp+80h] [rbp-6B8h]
  __int64 v435; // [rsp+80h] [rbp-6B8h]
  int v436; // [rsp+80h] [rbp-6B8h]
  __int64 v437; // [rsp+80h] [rbp-6B8h]
  int v438; // [rsp+80h] [rbp-6B8h]
  int v439; // [rsp+80h] [rbp-6B8h]
  __int64 v440; // [rsp+80h] [rbp-6B8h]
  __int64 v441; // [rsp+80h] [rbp-6B8h]
  __int64 v442; // [rsp+80h] [rbp-6B8h]
  __int64 v443; // [rsp+80h] [rbp-6B8h]
  __int64 v444; // [rsp+80h] [rbp-6B8h]
  __int64 v445; // [rsp+80h] [rbp-6B8h]
  __int64 v446; // [rsp+80h] [rbp-6B8h]
  __int64 v447; // [rsp+80h] [rbp-6B8h]
  __int64 v448; // [rsp+80h] [rbp-6B8h]
  __int64 v449; // [rsp+80h] [rbp-6B8h]
  __int64 v450; // [rsp+80h] [rbp-6B8h]
  __int64 v451; // [rsp+80h] [rbp-6B8h]
  __int64 v452; // [rsp+80h] [rbp-6B8h]
  __int64 v453; // [rsp+80h] [rbp-6B8h]
  __int64 v454; // [rsp+80h] [rbp-6B8h]
  __int64 v455; // [rsp+80h] [rbp-6B8h]
  __int64 v456; // [rsp+80h] [rbp-6B8h]
  int v457; // [rsp+80h] [rbp-6B8h]
  __int64 v458; // [rsp+80h] [rbp-6B8h]
  __int64 v459; // [rsp+80h] [rbp-6B8h]
  __int64 v460; // [rsp+80h] [rbp-6B8h]
  __int64 v461; // [rsp+80h] [rbp-6B8h]
  int v462; // [rsp+80h] [rbp-6B8h]
  __int64 v463; // [rsp+80h] [rbp-6B8h]
  int v464; // [rsp+80h] [rbp-6B8h]
  __int64 v465; // [rsp+80h] [rbp-6B8h]
  __int64 v466; // [rsp+80h] [rbp-6B8h]
  __int64 v467; // [rsp+80h] [rbp-6B8h]
  __int64 v468; // [rsp+80h] [rbp-6B8h]
  __int64 v469; // [rsp+80h] [rbp-6B8h]
  __int64 v470; // [rsp+80h] [rbp-6B8h]
  __int64 v471; // [rsp+80h] [rbp-6B8h]
  int v472; // [rsp+80h] [rbp-6B8h]
  __int64 v473; // [rsp+80h] [rbp-6B8h]
  __int64 v474; // [rsp+80h] [rbp-6B8h]
  __int64 v475; // [rsp+80h] [rbp-6B8h]
  __int64 v476; // [rsp+80h] [rbp-6B8h]
  __int64 v477; // [rsp+80h] [rbp-6B8h]
  int v478; // [rsp+88h] [rbp-6B0h]
  int v479; // [rsp+88h] [rbp-6B0h]
  int v480; // [rsp+88h] [rbp-6B0h]
  __int64 v481; // [rsp+88h] [rbp-6B0h]
  int v482; // [rsp+88h] [rbp-6B0h]
  int v483; // [rsp+88h] [rbp-6B0h]
  __int64 v484; // [rsp+88h] [rbp-6B0h]
  int v485; // [rsp+88h] [rbp-6B0h]
  __int64 v486; // [rsp+88h] [rbp-6B0h]
  int v487; // [rsp+88h] [rbp-6B0h]
  int v488; // [rsp+88h] [rbp-6B0h]
  int v489; // [rsp+88h] [rbp-6B0h]
  int v490; // [rsp+88h] [rbp-6B0h]
  int v491; // [rsp+88h] [rbp-6B0h]
  __int64 v492; // [rsp+88h] [rbp-6B0h]
  int v493; // [rsp+88h] [rbp-6B0h]
  __int64 v494; // [rsp+88h] [rbp-6B0h]
  __int64 v495; // [rsp+88h] [rbp-6B0h]
  int v496; // [rsp+88h] [rbp-6B0h]
  __int64 v497; // [rsp+88h] [rbp-6B0h]
  int v498; // [rsp+88h] [rbp-6B0h]
  __int64 v499; // [rsp+88h] [rbp-6B0h]
  __int64 v500; // [rsp+88h] [rbp-6B0h]
  int v501; // [rsp+88h] [rbp-6B0h]
  int v502; // [rsp+88h] [rbp-6B0h]
  int v503; // [rsp+88h] [rbp-6B0h]
  __int64 v504; // [rsp+88h] [rbp-6B0h]
  __int64 v505; // [rsp+88h] [rbp-6B0h]
  __int64 v506; // [rsp+88h] [rbp-6B0h]
  int v507; // [rsp+88h] [rbp-6B0h]
  __int64 v508; // [rsp+88h] [rbp-6B0h]
  __int64 v509; // [rsp+88h] [rbp-6B0h]
  int v510; // [rsp+88h] [rbp-6B0h]
  int v511; // [rsp+88h] [rbp-6B0h]
  __int64 v512; // [rsp+88h] [rbp-6B0h]
  __int64 v513; // [rsp+88h] [rbp-6B0h]
  int v514; // [rsp+88h] [rbp-6B0h]
  __int64 v515; // [rsp+88h] [rbp-6B0h]
  __int64 v516; // [rsp+88h] [rbp-6B0h]
  __int64 v517; // [rsp+88h] [rbp-6B0h]
  __int64 v518; // [rsp+88h] [rbp-6B0h]
  __int64 v519; // [rsp+88h] [rbp-6B0h]
  int v520; // [rsp+88h] [rbp-6B0h]
  int v521; // [rsp+88h] [rbp-6B0h]
  int v522; // [rsp+88h] [rbp-6B0h]
  int v523; // [rsp+88h] [rbp-6B0h]
  int v524; // [rsp+88h] [rbp-6B0h]
  __int64 v525; // [rsp+88h] [rbp-6B0h]
  __int64 v526; // [rsp+88h] [rbp-6B0h]
  __int64 v527; // [rsp+88h] [rbp-6B0h]
  __int64 v528; // [rsp+88h] [rbp-6B0h]
  int v529; // [rsp+88h] [rbp-6B0h]
  int v530; // [rsp+88h] [rbp-6B0h]
  __int64 v531; // [rsp+88h] [rbp-6B0h]
  int v532; // [rsp+88h] [rbp-6B0h]
  __int64 v533; // [rsp+88h] [rbp-6B0h]
  __int64 v534; // [rsp+88h] [rbp-6B0h]
  __int64 v535; // [rsp+88h] [rbp-6B0h]
  __int64 v536; // [rsp+88h] [rbp-6B0h]
  __int64 v537; // [rsp+88h] [rbp-6B0h]
  __int64 v538; // [rsp+88h] [rbp-6B0h]
  __int64 v539; // [rsp+88h] [rbp-6B0h]
  int v540; // [rsp+88h] [rbp-6B0h]
  __int64 v541; // [rsp+88h] [rbp-6B0h]
  int v542; // [rsp+88h] [rbp-6B0h]
  __int64 v543; // [rsp+88h] [rbp-6B0h]
  int v544; // [rsp+88h] [rbp-6B0h]
  int v545; // [rsp+88h] [rbp-6B0h]
  __int64 v546; // [rsp+88h] [rbp-6B0h]
  __int64 v547; // [rsp+88h] [rbp-6B0h]
  int v548; // [rsp+90h] [rbp-6A8h]
  int v549; // [rsp+90h] [rbp-6A8h]
  __int64 v550; // [rsp+90h] [rbp-6A8h]
  int v551; // [rsp+90h] [rbp-6A8h]
  int v552; // [rsp+90h] [rbp-6A8h]
  __int64 v553; // [rsp+90h] [rbp-6A8h]
  int v554; // [rsp+90h] [rbp-6A8h]
  int v555; // [rsp+90h] [rbp-6A8h]
  int v556; // [rsp+90h] [rbp-6A8h]
  int v557; // [rsp+90h] [rbp-6A8h]
  __int64 v558; // [rsp+90h] [rbp-6A8h]
  int v559; // [rsp+90h] [rbp-6A8h]
  int v560; // [rsp+90h] [rbp-6A8h]
  __int64 v561; // [rsp+90h] [rbp-6A8h]
  int v562; // [rsp+90h] [rbp-6A8h]
  __int64 v563; // [rsp+90h] [rbp-6A8h]
  int v564; // [rsp+90h] [rbp-6A8h]
  int v565; // [rsp+90h] [rbp-6A8h]
  int v566; // [rsp+90h] [rbp-6A8h]
  __int64 v567; // [rsp+90h] [rbp-6A8h]
  int v568; // [rsp+90h] [rbp-6A8h]
  __int64 v569; // [rsp+90h] [rbp-6A8h]
  __int64 v570; // [rsp+90h] [rbp-6A8h]
  __int64 v571; // [rsp+90h] [rbp-6A8h]
  int v572; // [rsp+90h] [rbp-6A8h]
  int v573; // [rsp+90h] [rbp-6A8h]
  __int64 v574; // [rsp+90h] [rbp-6A8h]
  __int64 v575; // [rsp+90h] [rbp-6A8h]
  int v576; // [rsp+90h] [rbp-6A8h]
  __int64 v577; // [rsp+90h] [rbp-6A8h]
  int v578; // [rsp+90h] [rbp-6A8h]
  int v579; // [rsp+90h] [rbp-6A8h]
  __int64 v580; // [rsp+90h] [rbp-6A8h]
  int v581; // [rsp+90h] [rbp-6A8h]
  int v582; // [rsp+90h] [rbp-6A8h]
  int v583; // [rsp+90h] [rbp-6A8h]
  int v584; // [rsp+90h] [rbp-6A8h]
  int v585; // [rsp+90h] [rbp-6A8h]
  __int64 v586; // [rsp+90h] [rbp-6A8h]
  int v587; // [rsp+90h] [rbp-6A8h]
  __int64 v588; // [rsp+90h] [rbp-6A8h]
  __int64 v589; // [rsp+90h] [rbp-6A8h]
  __int64 v590; // [rsp+90h] [rbp-6A8h]
  __int64 v591; // [rsp+90h] [rbp-6A8h]
  __int64 v592; // [rsp+90h] [rbp-6A8h]
  __int64 v593; // [rsp+90h] [rbp-6A8h]
  int v594; // [rsp+90h] [rbp-6A8h]
  __int64 v595; // [rsp+90h] [rbp-6A8h]
  int v596; // [rsp+90h] [rbp-6A8h]
  __int64 v597; // [rsp+90h] [rbp-6A8h]
  __int64 v598; // [rsp+90h] [rbp-6A8h]
  __int64 v599; // [rsp+90h] [rbp-6A8h]
  __int64 v600; // [rsp+90h] [rbp-6A8h]
  __int64 v601; // [rsp+90h] [rbp-6A8h]
  int v602; // [rsp+90h] [rbp-6A8h]
  __int64 v603; // [rsp+90h] [rbp-6A8h]
  int v604; // [rsp+90h] [rbp-6A8h]
  __int64 v605; // [rsp+90h] [rbp-6A8h]
  __int64 v606; // [rsp+90h] [rbp-6A8h]
  __int64 v607; // [rsp+90h] [rbp-6A8h]
  __int64 v608; // [rsp+90h] [rbp-6A8h]
  __int64 v609; // [rsp+90h] [rbp-6A8h]
  __int64 v610; // [rsp+90h] [rbp-6A8h]
  __int64 v611; // [rsp+90h] [rbp-6A8h]
  __int64 v612; // [rsp+90h] [rbp-6A8h]
  __int64 v613; // [rsp+90h] [rbp-6A8h]
  int v614; // [rsp+90h] [rbp-6A8h]
  __int64 v615; // [rsp+90h] [rbp-6A8h]
  __int64 v616; // [rsp+90h] [rbp-6A8h]
  __int64 v617; // [rsp+90h] [rbp-6A8h]
  int v618; // [rsp+98h] [rbp-6A0h]
  __int64 v619; // [rsp+98h] [rbp-6A0h]
  int v620; // [rsp+98h] [rbp-6A0h]
  int v621; // [rsp+98h] [rbp-6A0h]
  __int64 v622; // [rsp+98h] [rbp-6A0h]
  int v623; // [rsp+98h] [rbp-6A0h]
  int v624; // [rsp+98h] [rbp-6A0h]
  int v625; // [rsp+98h] [rbp-6A0h]
  int v626; // [rsp+98h] [rbp-6A0h]
  int v627; // [rsp+98h] [rbp-6A0h]
  int v628; // [rsp+98h] [rbp-6A0h]
  int v629; // [rsp+98h] [rbp-6A0h]
  __int64 v630; // [rsp+98h] [rbp-6A0h]
  __int64 v631; // [rsp+98h] [rbp-6A0h]
  __int64 v632; // [rsp+98h] [rbp-6A0h]
  int v633; // [rsp+98h] [rbp-6A0h]
  int v634; // [rsp+98h] [rbp-6A0h]
  __int64 v635; // [rsp+98h] [rbp-6A0h]
  int v636; // [rsp+98h] [rbp-6A0h]
  int v637; // [rsp+98h] [rbp-6A0h]
  int v638; // [rsp+98h] [rbp-6A0h]
  int v639; // [rsp+98h] [rbp-6A0h]
  unsigned int v640; // [rsp+98h] [rbp-6A0h]
  int v641; // [rsp+98h] [rbp-6A0h]
  int v642; // [rsp+98h] [rbp-6A0h]
  __int64 v643; // [rsp+98h] [rbp-6A0h]
  __int64 v644; // [rsp+98h] [rbp-6A0h]
  __int64 v645; // [rsp+98h] [rbp-6A0h]
  __int64 v646; // [rsp+98h] [rbp-6A0h]
  int v647; // [rsp+98h] [rbp-6A0h]
  int v648; // [rsp+98h] [rbp-6A0h]
  int v649; // [rsp+98h] [rbp-6A0h]
  int v650; // [rsp+98h] [rbp-6A0h]
  int v651; // [rsp+98h] [rbp-6A0h]
  __int64 v652; // [rsp+98h] [rbp-6A0h]
  __int64 v653; // [rsp+98h] [rbp-6A0h]
  __int64 v654; // [rsp+98h] [rbp-6A0h]
  int v655; // [rsp+98h] [rbp-6A0h]
  __int64 v656; // [rsp+98h] [rbp-6A0h]
  __int64 v657; // [rsp+98h] [rbp-6A0h]
  int v658; // [rsp+98h] [rbp-6A0h]
  int v659; // [rsp+98h] [rbp-6A0h]
  int v660; // [rsp+98h] [rbp-6A0h]
  __int64 v661; // [rsp+98h] [rbp-6A0h]
  int v662; // [rsp+98h] [rbp-6A0h]
  int v663; // [rsp+98h] [rbp-6A0h]
  __int64 v664; // [rsp+98h] [rbp-6A0h]
  __int64 v665; // [rsp+98h] [rbp-6A0h]
  __int64 v666; // [rsp+98h] [rbp-6A0h]
  __int64 v667; // [rsp+98h] [rbp-6A0h]
  __int64 v668; // [rsp+98h] [rbp-6A0h]
  int v669; // [rsp+98h] [rbp-6A0h]
  int v670; // [rsp+98h] [rbp-6A0h]
  __int64 v671; // [rsp+98h] [rbp-6A0h]
  __int64 v672; // [rsp+98h] [rbp-6A0h]
  __int64 v673; // [rsp+98h] [rbp-6A0h]
  __int64 v674; // [rsp+98h] [rbp-6A0h]
  __int64 v675; // [rsp+98h] [rbp-6A0h]
  __int64 v676; // [rsp+98h] [rbp-6A0h]
  __int64 v677; // [rsp+98h] [rbp-6A0h]
  __int64 v678; // [rsp+98h] [rbp-6A0h]
  __int64 v679; // [rsp+98h] [rbp-6A0h]
  __int64 v680; // [rsp+98h] [rbp-6A0h]
  int v681; // [rsp+A0h] [rbp-698h]
  int v682; // [rsp+A0h] [rbp-698h]
  int v683; // [rsp+A0h] [rbp-698h]
  int v684; // [rsp+A0h] [rbp-698h]
  int v685; // [rsp+A0h] [rbp-698h]
  __int64 v686; // [rsp+A0h] [rbp-698h]
  int v687; // [rsp+A0h] [rbp-698h]
  __int64 v688; // [rsp+A0h] [rbp-698h]
  unsigned int v689; // [rsp+A0h] [rbp-698h]
  int v690; // [rsp+A0h] [rbp-698h]
  int v691; // [rsp+A0h] [rbp-698h]
  int v692; // [rsp+A0h] [rbp-698h]
  __int64 v693; // [rsp+A0h] [rbp-698h]
  int v694; // [rsp+A0h] [rbp-698h]
  int v695; // [rsp+A0h] [rbp-698h]
  int v696; // [rsp+A0h] [rbp-698h]
  int v697; // [rsp+A0h] [rbp-698h]
  __int64 v698; // [rsp+A0h] [rbp-698h]
  int v699; // [rsp+A0h] [rbp-698h]
  __int64 v700; // [rsp+A0h] [rbp-698h]
  int v701; // [rsp+A0h] [rbp-698h]
  int v702; // [rsp+A0h] [rbp-698h]
  int v703; // [rsp+A0h] [rbp-698h]
  int v704; // [rsp+A0h] [rbp-698h]
  __int64 v705; // [rsp+A0h] [rbp-698h]
  __int64 v706; // [rsp+A0h] [rbp-698h]
  __int64 v707; // [rsp+A0h] [rbp-698h]
  int v708; // [rsp+A0h] [rbp-698h]
  __int64 v709; // [rsp+A0h] [rbp-698h]
  __int64 v710; // [rsp+A0h] [rbp-698h]
  int v711; // [rsp+A0h] [rbp-698h]
  int v712; // [rsp+A0h] [rbp-698h]
  __int64 v713; // [rsp+A0h] [rbp-698h]
  __int64 v714; // [rsp+A0h] [rbp-698h]
  int v715; // [rsp+A0h] [rbp-698h]
  int v716; // [rsp+A0h] [rbp-698h]
  int v717; // [rsp+A0h] [rbp-698h]
  __int64 v718; // [rsp+A0h] [rbp-698h]
  __int64 v719; // [rsp+A0h] [rbp-698h]
  int v720; // [rsp+A8h] [rbp-690h]
  __int64 v721; // [rsp+A8h] [rbp-690h]
  int v722; // [rsp+A8h] [rbp-690h]
  __int64 v723; // [rsp+A8h] [rbp-690h]
  int v724; // [rsp+A8h] [rbp-690h]
  int v725; // [rsp+A8h] [rbp-690h]
  __int64 v726; // [rsp+A8h] [rbp-690h]
  int v727; // [rsp+A8h] [rbp-690h]
  __int64 v728; // [rsp+A8h] [rbp-690h]
  int v729; // [rsp+A8h] [rbp-690h]
  __int64 v730; // [rsp+A8h] [rbp-690h]
  __int64 v731; // [rsp+A8h] [rbp-690h]
  int v732; // [rsp+A8h] [rbp-690h]
  int v733; // [rsp+A8h] [rbp-690h]
  int v734; // [rsp+A8h] [rbp-690h]
  int v735; // [rsp+A8h] [rbp-690h]
  int v736; // [rsp+A8h] [rbp-690h]
  int v737; // [rsp+B0h] [rbp-688h]
  int v738; // [rsp+B0h] [rbp-688h]
  int v739; // [rsp+B0h] [rbp-688h]
  int v740; // [rsp+B0h] [rbp-688h]
  int v741; // [rsp+B0h] [rbp-688h]
  __int64 v742; // [rsp+B0h] [rbp-688h]
  int v743; // [rsp+B0h] [rbp-688h]
  __int64 v744; // [rsp+B0h] [rbp-688h]
  __int64 v745; // [rsp+B0h] [rbp-688h]
  int v746; // [rsp+B0h] [rbp-688h]
  __int64 v747; // [rsp+B0h] [rbp-688h]
  int v748; // [rsp+B0h] [rbp-688h]
  unsigned __int32 v749; // [rsp+CCh] [rbp-66Ch] BYREF
  _DWORD *v750; // [rsp+D0h] [rbp-668h] BYREF
  _DWORD *v751; // [rsp+D8h] [rbp-660h] BYREF
  _DWORD *v752; // [rsp+E0h] [rbp-658h] BYREF
  _DWORD *v753; // [rsp+E8h] [rbp-650h] BYREF
  void *v754[2]; // [rsp+F0h] [rbp-648h] BYREF
  void *v755[16]; // [rsp+100h] [rbp-638h] BYREF
  void *v756; // [rsp+180h] [rbp-5B8h] BYREF
  __int64 v757; // [rsp+188h] [rbp-5B0h]
  _BYTE v758[160]; // [rsp+190h] [rbp-5A8h] BYREF
  _QWORD v759[22]; // [rsp+230h] [rbp-508h] BYREF
  void *s1; // [rsp+2E0h] [rbp-458h] BYREF
  __int64 v761; // [rsp+2E8h] [rbp-450h]
  _BYTE v762[160]; // [rsp+2F0h] [rbp-448h] BYREF
  void *s2; // [rsp+390h] [rbp-3A8h]
  _DWORD v764[42]; // [rsp+398h] [rbp-3A0h] BYREF
  void *v765; // [rsp+440h] [rbp-2F8h] BYREF
  __int64 v766; // [rsp+448h] [rbp-2F0h]
  _QWORD v767[20]; // [rsp+450h] [rbp-2E8h] BYREF
  void *v768; // [rsp+4F0h] [rbp-248h] BYREF
  __int64 v769; // [rsp+4F8h] [rbp-240h]
  _BYTE v770[160]; // [rsp+500h] [rbp-238h] BYREF
  void *v771; // [rsp+5A0h] [rbp-198h] BYREF
  __int64 v772; // [rsp+5A8h] [rbp-190h]
  _QWORD v773[20]; // [rsp+5B0h] [rbp-188h] BYREF
  void *ptr; // [rsp+650h] [rbp-E8h] BYREF
  __int64 v775; // [rsp+658h] [rbp-E0h]
  _QWORD v776[27]; // [rsp+660h] [rbp-D8h] BYREF

  v5 = *a2;
  if ( *a2 )
  {
    v6 = *a3;
    if ( *a3 )
    {
      if ( (v5[10] & 0xFFFFFFFu) >= (*(_DWORD *)(v6 + 40) & 0xFFFFFFFu) )
      {
        ++v5[17];
        v750 = v5;
LABEL_5:
        ptr = v776;
        v775 = 0x1400000000LL;
        sub_995F50((__int64)&ptr, v6);
        sub_992C00((__int64 *)&ptr);
        v756 = v758;
        v757 = 0x1400000000LL;
        if ( (_DWORD)v775 )
          sub_994930((char ***)&v756, (char ***)&ptr);
        if ( ptr != v776 )
          free(ptr);
        goto LABEL_9;
      }
      goto LABEL_232;
    }
    ++v5[17];
    v750 = v5;
  }
  else
  {
    v6 = *a3;
    if ( *a3 )
    {
      if ( (*(_DWORD *)(v6 + 40) & 0xFFFFFFF) == 0 )
      {
        v750 = nullptr;
        goto LABEL_5;
      }
LABEL_232:
      sub_997020(a1, a3, a2, a4);
      return (__int64)a1;
    }
    v750 = nullptr;
  }
  ptr = v776;
  v756 = v758;
  v757 = 0x1400000000LL;
LABEL_9:
  v332 = a4;
  memset(&v759[1], 0, 0xA8u);
  HIDWORD(v759[1]) = 20;
  v759[0] = &v759[2];
  while ( 1 )
  {
    if ( sub_995FA0((__int64)&v756, (__int64)v759) )
    {
      if ( v756 != v758 )
        free(v756);
      v114 = v750;
      *a1 = v750;
      if ( v114 )
        ++v114[17];
      sub_9946C0(&v750);
      return (__int64)a1;
    }
    v334 = nullptr;
    v7 = *((_QWORD *)v756 + (unsigned int)v757 - 1) & 0xFFFFFFFFFFFFFFFCLL;
    v8 = *(_DWORD **)(v7 + 56);
    v335 = *(_DWORD *)(v7 + 48);
    v751 = v8;
    if ( v8 )
    {
      v8[13] += 2;
      v334 = v8;
    }
    v9 = *a2;
    if ( *a2 )
    {
      while ( v9[12] != v335 )
      {
        if ( v9[12] > v335 )
        {
          v9 = *((_DWORD **)v9 + 1);
          if ( !v9 )
            goto LABEL_19;
        }
        else
        {
          v9 = *((_DWORD **)v9 + 2);
          if ( !v9 )
            goto LABEL_19;
        }
      }
      v11 = *((_DWORD **)v9 + 7);
      v752 = v11;
      if ( v11 )
      {
        v12 = v11[13] + 1;
        v11[13] = v12;
        if ( v8 )
        {
          v10 = v11[10] & 0xFFFFFFF;
LABEL_27:
          if ( v10 < (v8[10] & 0xFFFFFFFu) )
          {
            v752 = v8;
            v771 = v11;
            ptr = nullptr;
            sub_994020((_DWORD **)&ptr);
            v13 = v771;
            v771 = nullptr;
            v334 = v13;
            ptr = nullptr;
            sub_994020((_DWORD **)&ptr);
            sub_994020((_DWORD **)&v771);
            v11 = v752;
          }
          v753 = v11;
          if ( !v11 )
            goto LABEL_32;
          v12 = v11[13];
        }
        else
        {
          v753 = v11;
        }
        v11[13] = v12 + 1;
        goto LABEL_32;
      }
    }
    else
    {
LABEL_19:
      v752 = nullptr;
    }
    v10 = 0;
    v11 = nullptr;
    if ( v8 )
      goto LABEL_27;
    v753 = nullptr;
LABEL_32:
    v775 = 0x1400000000LL;
    ptr = v776;
    if ( v334 )
    {
      LODWORD(v775) = 1;
      v776[0] = v334;
      sub_992AC0((__int64 *)&ptr);
      s1 = v762;
      v761 = 0x1400000000LL;
      if ( (_DWORD)v775 )
        sub_994930((char ***)&s1, (char ***)&ptr);
      if ( ptr != v776 )
        free(ptr);
    }
    else
    {
      v761 = 0x1400000000LL;
      s1 = v762;
    }
    v14 = (char *)s1;
    memset(v764, 0, sizeof(v764));
    v15 = (unsigned int)v761;
    v764[1] = 20;
    s2 = &v764[2];
    v16 = 0;
LABEL_38:
    v17 = 8 * v15;
    if ( v15 != v16 || v17 && memcmp(v14, s2, 8 * v15) )
      break;
    if ( v14 != v762 )
      free(v14);
    v768 = v750;
    if ( v750 )
      ++v750[17];
    sub_996EE0((__int64 *)&v771, v332, (__int64 *)&v768, v335, &v753);
    v18 = v771;
    v771 = nullptr;
    v19 = v750;
    v750 = v18;
    ptr = v19;
    sub_9946C0((_DWORD **)&ptr);
    sub_9946C0((_DWORD **)&v771);
    sub_9946C0((_DWORD **)&v768);
    sub_994020(&v753);
    sub_994020(&v752);
    if ( v334 )
    {
      v333 = v334[13];
      v334[13] = v333 - 1;
      if ( v333 == 1 )
        sub_993690(v334);
    }
    sub_994020(&v751);
    sub_992C00((__int64 *)&v756);
  }
  v20 = *(_QWORD *)&v14[v17 - 8];
  v21 = v753;
  v22 = (__int64 *)(v332 + 88);
  v23 = *(_DWORD *)((v20 & 0xFFFFFFFFFFFFFFFCLL) + 44);
  v749 = v23;
  if ( !v753 )
  {
    v41 = sub_994E90((_QWORD *)(v332 + 88), 0, (__int32 *)&v749, 0);
    goto LABEL_65;
  }
  v24 = v753[11];
  ++v753[13];
  v25 = *((_QWORD *)v21 + 2);
  if ( v23 == v24 )
  {
    v41 = sub_994E90(v22, *((_QWORD *)v21 + 1), (__int32 *)&v749, *((_QWORD *)v21 + 2));
    goto LABEL_65;
  }
  if ( v23 < v24 )
  {
    v26 = *((_QWORD *)v21 + 1);
    if ( v26 )
    {
      v27 = *(_DWORD *)(v26 + 44);
      if ( v23 != v27 )
      {
        if ( v23 < v27 )
        {
          v336 = *(_QWORD *)(v26 + 16);
          v28 = sub_9951E0(v22, (__int32 *)&v749, *(_QWORD *)(v26 + 8));
          v29 = sub_995010(v22, v28, (__int32 *)(v26 + 44), v336);
          goto LABEL_56;
        }
        v90 = sub_9951E0(v22, (__int32 *)&v749, *(_QWORD *)(v26 + 16));
        v29 = sub_995010(v22, *(_QWORD *)(v26 + 8), (__int32 *)(v26 + 44), v90);
        if ( !v29 )
        {
LABEL_158:
          if ( v25 )
          {
            v91 = 2;
            v31 = *(_DWORD *)(v25 + 40) & 0xFFFFFFF;
            goto LABEL_160;
          }
          goto LABEL_184;
        }
LABEL_57:
        v30 = *(_DWORD *)(v29 + 40) & 0xFFFFFFF;
        if ( v25 )
        {
          v31 = *(_DWORD *)(v25 + 40) & 0xFFFFFFF;
          if ( v30 > v31 + 2 )
            goto LABEL_59;
          v91 = v30 + 2;
LABEL_160:
          if ( v31 > v91 )
          {
            v92 = *(_QWORD *)(v25 + 16);
            v93 = *(_QWORD *)(v25 + 8);
            v94 = 0;
            if ( v92 )
              v94 = *(_DWORD *)(v92 + 40) & 0xFFFFFFF;
            v95 = (__int32 *)(v25 + 44);
            if ( v93 && (*(_DWORD *)(v93 + 40) & 0xFFFFFFFu) > v94 )
            {
              v349 = v93;
              v340 = *(_QWORD *)(v93 + 8);
              v87 = sub_994E90(v22, *(_QWORD *)(v93 + 16), v95, v92);
              v88 = sub_994E90(v22, v29, v21 + 11, v340);
              v89 = (__int32 *)(v349 + 44);
LABEL_156:
              v41 = sub_994E90(v22, v88, v89, v87);
            }
            else
            {
              v103 = sub_994E90(v22, v29, v21 + 11, v93);
              v41 = sub_994E90(v22, v103, v95, v92);
            }
            goto LABEL_65;
          }
LABEL_184:
          v102 = v25;
LABEL_182:
          v41 = sub_994E90(v22, v29, v21 + 11, v102);
          goto LABEL_65;
        }
        if ( v30 <= 2 )
          goto LABEL_184;
LABEL_59:
        v32 = *(_QWORD *)(v29 + 8);
        v33 = *(_QWORD *)(v29 + 16);
        v34 = 0;
        if ( v32 )
          v34 = *(_DWORD *)(v32 + 40) & 0xFFFFFFF;
        v35 = (__int32 *)(v29 + 44);
        if ( !v33 || (*(_DWORD *)(v33 + 40) & 0xFFFFFFFu) <= v34 )
        {
          v341 = v32;
          v100 = sub_994E90(v22, v33, v21 + 11, v25);
          v41 = sub_994E90(v22, v341, v35, v100);
          goto LABEL_65;
        }
        v348 = v32;
        v337 = *(_QWORD *)(v33 + 8);
        v36 = sub_994E90(v22, *(_QWORD *)(v33 + 16), v21 + 11, v25);
        v37 = sub_994E90(v22, v348, v35, v337);
        v38 = (__int32 *)(v33 + 44);
LABEL_64:
        v41 = sub_994E90(v22, v37, v38, v36);
        goto LABEL_65;
      }
      v29 = sub_994E90(v22, *(_QWORD *)(v26 + 8), (__int32 *)&v749, *(_QWORD *)(v26 + 16));
    }
    else
    {
      v29 = sub_994E90(v22, 0, (__int32 *)&v749, 0);
    }
LABEL_56:
    if ( !v29 )
      goto LABEL_158;
    goto LABEL_57;
  }
  if ( !v25 )
  {
    v75 = sub_994E90(v22, 0, (__int32 *)&v749, 0);
    goto LABEL_137;
  }
  v72 = *(_DWORD *)(v25 + 44);
  v73 = *(_QWORD *)(v25 + 16);
  if ( v23 == v72 )
  {
    v75 = sub_994E90(v22, *(_QWORD *)(v25 + 8), (__int32 *)&v749, *(_QWORD *)(v25 + 16));
LABEL_137:
    v29 = *((_QWORD *)v21 + 1);
    if ( !v29 )
      goto LABEL_148;
    goto LABEL_138;
  }
  if ( v23 < v72 )
  {
    v74 = sub_9951E0(v22, (__int32 *)&v749, *(_QWORD *)(v25 + 8));
    v75 = sub_995010(v22, v74, (__int32 *)(v25 + 44), v73);
    goto LABEL_137;
  }
  v82 = sub_9951E0(v22, (__int32 *)&v749, *(_QWORD *)(v25 + 16));
  v75 = sub_995010(v22, *(_QWORD *)(v25 + 8), (__int32 *)(v25 + 44), v82);
  v29 = *((_QWORD *)v21 + 1);
  if ( !v29 )
  {
LABEL_148:
    if ( v75 )
    {
      v83 = 2;
      v77 = *(_DWORD *)(v75 + 40) & 0xFFFFFFF;
      goto LABEL_150;
    }
    goto LABEL_181;
  }
LABEL_138:
  v76 = *(_DWORD *)(v29 + 40) & 0xFFFFFFF;
  if ( !v75 )
  {
    if ( v76 <= 2 )
      goto LABEL_181;
LABEL_140:
    v78 = *(_QWORD *)(v29 + 8);
    v79 = *(_QWORD *)(v29 + 16);
    v80 = 0;
    if ( v78 )
      v80 = *(_DWORD *)(v78 + 40) & 0xFFFFFFF;
    v81 = (__int32 *)(v29 + 44);
    if ( !v79 || (*(_DWORD *)(v79 + 40) & 0xFFFFFFFu) <= v80 )
    {
      v101 = sub_994E90(v22, v79, v21 + 11, v75);
      v41 = sub_994E90(v22, v78, v81, v101);
      goto LABEL_65;
    }
    v338 = *(_QWORD *)(v79 + 8);
    v36 = sub_994E90(v22, *(_QWORD *)(v79 + 16), v21 + 11, v75);
    v37 = sub_994E90(v22, v78, v81, v338);
    v38 = (__int32 *)(v79 + 44);
    goto LABEL_64;
  }
  v77 = *(_DWORD *)(v75 + 40) & 0xFFFFFFF;
  if ( v76 > v77 + 2 )
    goto LABEL_140;
  v83 = v76 + 2;
LABEL_150:
  if ( v83 >= v77 )
  {
LABEL_181:
    v102 = v75;
    goto LABEL_182;
  }
  v84 = *(_QWORD *)(v75 + 16);
  v85 = *(_QWORD *)(v75 + 8);
  v86 = 0;
  if ( v84 )
    v86 = *(_DWORD *)(v84 + 40) & 0xFFFFFFF;
  if ( v85 && (*(_DWORD *)(v85 + 40) & 0xFFFFFFFu) > v86 )
  {
    v339 = *(_QWORD *)(v85 + 8);
    v87 = sub_994E90(v22, *(_QWORD *)(v85 + 16), (__int32 *)(v75 + 44), v84);
    v88 = sub_994E90(v22, v29, v21 + 11, v339);
    v89 = (__int32 *)(v85 + 44);
    goto LABEL_156;
  }
  v342 = (__int32 *)(v75 + 44);
  v104 = sub_994E90(v22, v29, v21 + 11, v85);
  v41 = sub_994E90(v22, v104, v342, v84);
LABEL_65:
  if ( v41 && (*(_BYTE *)(v41 + 43) & 0x10) != 0 )
  {
    v42 = v41;
    do
    {
      *(_BYTE *)(v42 + 43) &= ~0x10u;
      v42 = *(_QWORD *)(sub_991950((__int64)v22, *(_QWORD *)(v42 + 8)) + 16);
    }
    while ( v42 && (*(_BYTE *)(v42 + 43) & 0x10) != 0 );
  }
  v43 = v332;
  v44 = *(_QWORD *)(v332 + 128);
  v45 = *(_QWORD *)(v332 + 120);
  v46 = (v44 - v45) >> 3;
  if ( (_DWORD)v46 )
  {
    v46 = (unsigned int)(v46 - 1);
    v47 = 0;
    v48 = 8 * v46 + 8;
    do
    {
      while ( 1 )
      {
        v49 = *(_QWORD *)(v45 + v47);
        if ( (*(_BYTE *)(v49 + 43) & 0x10) != 0 && !*(_DWORD *)(v49 + 52) )
          break;
        v47 += 8;
        if ( v48 == v47 )
          goto LABEL_76;
      }
      sub_993690((void *)v49);
      v47 += 8;
      v45 = *(_QWORD *)(v332 + 120);
    }
    while ( v48 != v47 );
LABEL_76:
    v43 = v332;
    v44 = *(_QWORD *)(v332 + 128);
  }
  if ( v44 != v45 )
    *(_QWORD *)(v332 + 128) = v45;
  if ( !*(_BYTE *)(v332 + 168) )
  {
    if ( v41 )
      goto LABEL_81;
    goto LABEL_82;
  }
  if ( !v41 )
    goto LABEL_82;
  v61 = *(_BYTE *)(v41 + 43);
  if ( (v61 & 0x40) != 0 )
    goto LABEL_81;
  if ( (v61 & 0x20) != 0 )
  {
    v62 = *(_DWORD *)(v41 + 48);
  }
  else
  {
    v96 = *(_QWORD *)(v41 + 8);
    v97 = *(_QWORD *)(v41 + 16);
    v98 = 0;
    if ( v96 )
    {
      if ( (*(_BYTE *)(v96 + 43) & 0x20) != 0 )
      {
        v98 = *(_DWORD *)(v96 + 48);
      }
      else
      {
        v109 = *(_QWORD *)(v96 + 8);
        v110 = 0;
        v345 = *(_QWORD *)(v96 + 16);
        if ( v109 )
        {
          if ( (*(_BYTE *)(v109 + 43) & 0x20) != 0 )
          {
            v110 = *(_DWORD *)(v109 + 48);
          }
          else
          {
            v122 = *(_QWORD *)(v109 + 8);
            v123 = 0;
            v370 = *(_QWORD *)(v109 + 16);
            if ( v122 )
            {
              if ( (*(_BYTE *)(v122 + 43) & 0x20) != 0 )
              {
                v123 = *(_DWORD *)(v122 + 48);
              }
              else
              {
                v153 = *(_QWORD *)(v122 + 8);
                v154 = 0;
                v360 = *(_QWORD *)(v122 + 16);
                if ( v153 )
                {
                  if ( (*(_BYTE *)(v153 + 43) & 0x20) != 0 )
                  {
                    v154 = *(_DWORD *)(v153 + 48);
                  }
                  else
                  {
                    v192 = *(_QWORD *)(v153 + 8);
                    v193 = *(_QWORD *)(v153 + 16);
                    v194 = 0;
                    if ( v192 )
                    {
                      if ( (*(_BYTE *)(v192 + 43) & 0x20) != 0 )
                      {
                        v194 = *(_DWORD *)(v192 + 48);
                      }
                      else
                      {
                        v597 = *(_QWORD *)(v153 + 16);
                        v534 = *(_QWORD *)(v122 + 8);
                        v467 = *(_QWORD *)(v109 + 8);
                        v414 = *(_QWORD *)(v41 + 8);
                        v279 = sub_9935B0(*(_QWORD *)(v192 + 8), *(_QWORD *)(v192 + 16), (_DWORD *)(v192 + 44));
                        *(_BYTE *)(v192 + 43) |= 0x20u;
                        v96 = v414;
                        v194 = v279;
                        *(_DWORD *)(v192 + 48) = v279;
                        v193 = v597;
                        v153 = v534;
                        v122 = v467;
                      }
                    }
                    v627 = v194;
                    v563 = v193;
                    v504 = v122;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v448 = v96;
                    v396 = v153;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v153 + 44));
                    v195 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v196 = v563;
                    v197 = v396;
                    v96 = v448;
                    v154 = v195 + v627;
                    v122 = v504;
                    if ( v563 )
                    {
                      if ( (*(_BYTE *)(v563 + 43) & 0x20) != 0 )
                      {
                        v198 = *(_DWORD *)(v563 + 48);
                      }
                      else
                      {
                        v280 = *(_QWORD *)(v563 + 16);
                        v281 = *(_QWORD *)(v563 + 8);
                        v282 = (_DWORD *)(v563 + 44);
                        v655 = v195 + v627;
                        v598 = v396;
                        v415 = v196;
                        v198 = sub_9935B0(v281, v280, v282);
                        *(_BYTE *)(v415 + 43) |= 0x20u;
                        v154 = v655;
                        *(_DWORD *)(v415 + 48) = v198;
                        v197 = v598;
                        v122 = v504;
                        v96 = v448;
                      }
                      v154 += v198;
                    }
                    if ( ptr != v776 )
                    {
                      v564 = v154;
                      v505 = v197;
                      v449 = v122;
                      v397 = v96;
                      free(ptr);
                      v154 = v564;
                      v96 = v397;
                      v197 = v505;
                      v122 = v449;
                    }
                    *(_DWORD *)(v197 + 48) = v154;
                    *(_BYTE *)(v197 + 43) |= 0x20u;
                  }
                }
                v487 = v154;
                v388 = v122;
                v771 = v773;
                v772 = 0x2000000000LL;
                v433 = v96;
                sub_993300((__int64)&v771, *(_DWORD *)(v122 + 44));
                v155 = sub_961DD0(v771, (__int64)v771 + 4 * (unsigned int)v772);
                v156 = v388;
                v96 = v433;
                v123 = v487 + v155;
                if ( v360 )
                {
                  if ( (*(_BYTE *)(v360 + 43) & 0x20) != 0 )
                  {
                    v157 = *(_DWORD *)(v360 + 48);
                  }
                  else
                  {
                    v186 = *(_QWORD *)(v360 + 8);
                    v187 = *(_QWORD *)(v360 + 16);
                    v188 = 0;
                    if ( v186 )
                    {
                      if ( (*(_BYTE *)(v186 + 43) & 0x20) != 0 )
                      {
                        v188 = *(_DWORD *)(v186 + 48);
                      }
                      else
                      {
                        v654 = *(_QWORD *)(v360 + 16);
                        v596 = v487 + v155;
                        v533 = v388;
                        v413 = *(_QWORD *)(v360 + 8);
                        v188 = sub_9935B0(*(_QWORD *)(v186 + 8), *(_QWORD *)(v186 + 16), (_DWORD *)(v186 + 44));
                        *(_BYTE *)(v413 + 43) |= 0x20u;
                        v187 = v654;
                        *(_DWORD *)(v413 + 48) = v188;
                        v123 = v596;
                        v156 = v533;
                        v96 = v433;
                      }
                    }
                    v626 = v188;
                    v561 = v187;
                    v502 = v123;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v446 = v156;
                    v394 = v96;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v360 + 44));
                    v189 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v190 = v561;
                    v96 = v394;
                    v156 = v446;
                    v157 = v626 + v189;
                    v123 = v502;
                    if ( v561 )
                    {
                      if ( (*(_BYTE *)(v561 + 43) & 0x20) != 0 )
                      {
                        v191 = *(_DWORD *)(v561 + 48);
                      }
                      else
                      {
                        v290 = *(_QWORD *)(v561 + 16);
                        v291 = *(_QWORD *)(v561 + 8);
                        v292 = (_DWORD *)(v561 + 44);
                        v659 = v626 + v189;
                        v602 = v502;
                        v538 = v446;
                        v471 = v394;
                        v416 = v190;
                        v191 = sub_9935B0(v291, v290, v292);
                        *(_BYTE *)(v416 + 43) |= 0x20u;
                        v157 = v659;
                        *(_DWORD *)(v416 + 48) = v191;
                        v123 = v602;
                        v156 = v538;
                        v96 = v471;
                      }
                      v157 += v191;
                    }
                    if ( ptr != v776 )
                    {
                      v562 = v157;
                      v503 = v123;
                      v447 = v156;
                      v395 = v96;
                      free(ptr);
                      v157 = v562;
                      v96 = v395;
                      v123 = v503;
                      v156 = v447;
                    }
                    *(_DWORD *)(v360 + 48) = v157;
                    *(_BYTE *)(v360 + 43) |= 0x20u;
                  }
                  v123 += v157;
                }
                if ( v771 != v773 )
                {
                  v434 = v123;
                  v389 = v156;
                  v361 = v96;
                  free(v771);
                  v156 = v389;
                  v96 = v361;
                  v123 = v434;
                }
                *(_DWORD *)(v156 + 48) = v123;
                *(_BYTE *)(v156 + 43) |= 0x20u;
              }
            }
            v420 = v123;
            v377 = v96;
            v768 = v770;
            v769 = 0x2000000000LL;
            sub_993300((__int64)&v768, *(_DWORD *)(v109 + 44));
            v124 = sub_961DD0(v768, (__int64)v768 + 4 * (unsigned int)v769);
            v96 = v377;
            v110 = v124 + v420;
            if ( v370 )
            {
              if ( (*(_BYTE *)(v370 + 43) & 0x20) != 0 )
              {
                v125 = *(_DWORD *)(v370 + 48);
              }
              else
              {
                v158 = *(_QWORD *)(v370 + 8);
                v159 = 0;
                v390 = *(_QWORD *)(v370 + 16);
                if ( v158 )
                {
                  if ( (*(_BYTE *)(v158 + 43) & 0x20) != 0 )
                  {
                    v159 = *(_DWORD *)(v158 + 48);
                  }
                  else
                  {
                    v217 = *(_QWORD *)(v158 + 8);
                    v218 = *(_QWORD *)(v158 + 16);
                    v219 = 0;
                    if ( v217 )
                    {
                      if ( (*(_BYTE *)(v217 + 43) & 0x20) != 0 )
                      {
                        v219 = *(_DWORD *)(v217 + 48);
                      }
                      else
                      {
                        v667 = *(_QWORD *)(v158 + 16);
                        v608 = *(_QWORD *)(v370 + 8);
                        v542 = v124 + v420;
                        v473 = v96;
                        v310 = sub_9935B0(*(_QWORD *)(v217 + 8), *(_QWORD *)(v217 + 16), (_DWORD *)(v217 + 44));
                        *(_BYTE *)(v217 + 43) |= 0x20u;
                        v218 = v667;
                        v219 = v310;
                        *(_DWORD *)(v217 + 48) = v310;
                        v158 = v608;
                        v110 = v542;
                        v96 = v473;
                      }
                    }
                    v687 = v219;
                    v632 = v218;
                    v573 = v110;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v513 = v96;
                    v455 = v158;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v158 + 44));
                    v220 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v221 = v632;
                    v222 = v455;
                    v96 = v513;
                    v159 = v220 + v687;
                    v110 = v573;
                    if ( v632 )
                    {
                      if ( (*(_BYTE *)(v632 + 43) & 0x20) != 0 )
                      {
                        v223 = *(_DWORD *)(v632 + 48);
                      }
                      else
                      {
                        v311 = *(_QWORD *)(v632 + 16);
                        v312 = *(_QWORD *)(v632 + 8);
                        v313 = (_DWORD *)(v632 + 44);
                        v708 = v220 + v687;
                        v668 = v455;
                        v474 = v221;
                        v223 = sub_9935B0(v312, v311, v313);
                        *(_BYTE *)(v474 + 43) |= 0x20u;
                        v159 = v708;
                        *(_DWORD *)(v474 + 48) = v223;
                        v222 = v668;
                        v110 = v573;
                        v96 = v513;
                      }
                      v159 += v223;
                    }
                    if ( ptr != v776 )
                    {
                      v633 = v159;
                      v574 = v222;
                      v514 = v110;
                      v456 = v96;
                      free(ptr);
                      v159 = v633;
                      v222 = v574;
                      v110 = v514;
                      v96 = v456;
                    }
                    *(_DWORD *)(v222 + 48) = v159;
                    *(_BYTE *)(v222 + 43) |= 0x20u;
                  }
                }
                v551 = v159;
                v488 = v110;
                v771 = v773;
                v772 = 0x2000000000LL;
                v435 = v96;
                sub_993300((__int64)&v771, *(_DWORD *)(v370 + 44));
                v160 = sub_961DD0(v771, (__int64)v771 + 4 * (unsigned int)v772);
                v96 = v435;
                v110 = v488;
                v125 = v160 + v551;
                if ( v390 )
                {
                  if ( (*(_BYTE *)(v390 + 43) & 0x20) != 0 )
                  {
                    v161 = *(_DWORD *)(v390 + 48);
                  }
                  else
                  {
                    v182 = *(_QWORD *)(v390 + 8);
                    v183 = 0;
                    v444 = *(_QWORD *)(v390 + 16);
                    v499 = v182;
                    if ( v182 )
                    {
                      if ( (*(_BYTE *)(v182 + 43) & 0x20) != 0 )
                      {
                        v183 = *(_DWORD *)(v182 + 48);
                      }
                      else
                      {
                        v265 = *(_QWORD *)(v182 + 8);
                        v266 = *(_QWORD *)(v182 + 16);
                        v267 = 0;
                        if ( v265 )
                        {
                          if ( (*(_BYTE *)(v265 + 43) & 0x20) != 0 )
                          {
                            v267 = *(_DWORD *)(v265 + 48);
                          }
                          else
                          {
                            v745 = *(_QWORD *)(v182 + 16);
                            v734 = v125;
                            v715 = v110;
                            v677 = v96;
                            v615 = *(_QWORD *)(v182 + 8);
                            v267 = sub_9935B0(*(_QWORD *)(v265 + 8), *(_QWORD *)(v265 + 16), (_DWORD *)(v265 + 44));
                            *(_BYTE *)(v615 + 43) |= 0x20u;
                            v266 = v745;
                            *(_DWORD *)(v615 + 48) = v267;
                            v125 = v734;
                            v110 = v715;
                            v96 = v677;
                          }
                        }
                        v591 = v96;
                        v737 = v267;
                        v721 = v266;
                        v694 = v125;
                        LODWORD(v776[0]) = *(_DWORD *)(v499 + 44);
                        v648 = v110;
                        ptr = v776;
                        v775 = 0x2000000001LL;
                        v268 = sub_961DD0(v776, (__int64)v776 + 4);
                        v269 = v721;
                        v96 = v591;
                        v110 = v648;
                        v183 = v737 + v268;
                        v125 = v694;
                        if ( v721 )
                        {
                          if ( (*(_BYTE *)(v721 + 43) & 0x20) != 0 )
                          {
                            v270 = *(_DWORD *)(v721 + 48);
                          }
                          else
                          {
                            v325 = *(_QWORD *)(v721 + 16);
                            v326 = *(_QWORD *)(v721 + 8);
                            v327 = (_DWORD *)(v721 + 44);
                            v746 = v737 + v268;
                            v735 = v694;
                            v716 = v648;
                            v678 = v591;
                            v616 = v269;
                            v270 = sub_9935B0(v326, v325, v327);
                            *(_BYTE *)(v616 + 43) |= 0x20u;
                            v183 = v746;
                            *(_DWORD *)(v616 + 48) = v270;
                            v125 = v735;
                            v110 = v716;
                            v96 = v678;
                          }
                          v183 += v270;
                        }
                        if ( ptr != v776 )
                        {
                          v722 = v183;
                          v695 = v125;
                          v649 = v110;
                          v592 = v96;
                          free(ptr);
                          v183 = v722;
                          v125 = v695;
                          v110 = v649;
                          v96 = v592;
                        }
                        *(_DWORD *)(v499 + 48) = v183;
                        *(_BYTE *)(v499 + 43) |= 0x20u;
                      }
                    }
                    v684 = v183;
                    v624 = v125;
                    v559 = v110;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v500 = v96;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v390 + 44));
                    v184 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v96 = v500;
                    v110 = v559;
                    v125 = v624;
                    v161 = v184 + v684;
                    if ( v444 )
                    {
                      if ( (*(_BYTE *)(v444 + 43) & 0x20) != 0 )
                      {
                        v185 = *(_DWORD *)(v444 + 48);
                      }
                      else
                      {
                        v696 = v184 + v684;
                        v185 = sub_9935B0(*(_QWORD *)(v444 + 8), *(_QWORD *)(v444 + 16), (_DWORD *)(v444 + 44));
                        *(_BYTE *)(v444 + 43) |= 0x20u;
                        v161 = v696;
                        *(_DWORD *)(v444 + 48) = v185;
                        v125 = v624;
                        v110 = v559;
                        v96 = v500;
                      }
                      v161 += v185;
                    }
                    if ( ptr != v776 )
                    {
                      v625 = v161;
                      v560 = v125;
                      v501 = v110;
                      v445 = v96;
                      free(ptr);
                      v161 = v625;
                      v125 = v560;
                      v110 = v501;
                      v96 = v445;
                    }
                    *(_DWORD *)(v390 + 48) = v161;
                    *(_BYTE *)(v390 + 43) |= 0x20u;
                  }
                  v125 += v161;
                }
                if ( v771 != v773 )
                {
                  v489 = v125;
                  v436 = v110;
                  v391 = v96;
                  free(v771);
                  v125 = v489;
                  v96 = v391;
                  v110 = v436;
                }
                *(_DWORD *)(v370 + 48) = v125;
                *(_BYTE *)(v370 + 43) |= 0x20u;
              }
              v110 += v125;
            }
            if ( v768 != v770 )
            {
              v371 = v110;
              v353 = v96;
              free(v768);
              v110 = v371;
              v96 = v353;
            }
            *(_DWORD *)(v109 + 48) = v110;
            *(_BYTE *)(v109 + 43) |= 0x20u;
          }
        }
        v367 = v110;
        v351 = v96;
        LODWORD(v767[0]) = *(_DWORD *)(v96 + 44);
        v766 = 0x2000000001LL;
        v765 = v767;
        v111 = sub_961DD0(v767, (__int64)v767 + 4);
        v112 = v351;
        v98 = v367 + v111;
        if ( v345 )
        {
          if ( (*(_BYTE *)(v345 + 43) & 0x20) != 0 )
          {
            v113 = *(_DWORD *)(v345 + 48);
          }
          else
          {
            v118 = *(_QWORD *)(v345 + 8);
            v119 = 0;
            v368 = *(_QWORD *)(v345 + 16);
            if ( v118 )
            {
              if ( (*(_BYTE *)(v118 + 43) & 0x20) != 0 )
              {
                v119 = *(_DWORD *)(v118 + 48);
              }
              else
              {
                v134 = *(_QWORD *)(v118 + 8);
                v135 = 0;
                v356 = *(_QWORD *)(v118 + 16);
                if ( v134 )
                {
                  if ( (*(_BYTE *)(v134 + 43) & 0x20) != 0 )
                  {
                    v135 = *(_DWORD *)(v134 + 48);
                  }
                  else
                  {
                    v203 = *(_QWORD *)(v134 + 8);
                    v204 = 0;
                    v400 = *(_QWORD *)(v134 + 16);
                    if ( v203 )
                    {
                      if ( (*(_BYTE *)(v203 + 43) & 0x20) != 0 )
                      {
                        v204 = *(_DWORD *)(v203 + 48);
                      }
                      else
                      {
                        v283 = *(_QWORD *)(v203 + 8);
                        v284 = *(_QWORD *)(v203 + 16);
                        v285 = 0;
                        if ( v283 )
                        {
                          if ( (*(_BYTE *)(v283 + 43) & 0x20) != 0 )
                          {
                            v285 = *(_DWORD *)(v283 + 48);
                          }
                          else
                          {
                            v718 = *(_QWORD *)(v203 + 16);
                            v680 = *(_QWORD *)(v134 + 8);
                            v617 = *(_QWORD *)(v118 + 8);
                            v547 = *(_QWORD *)(v345 + 8);
                            v476 = v112;
                            v328 = sub_9935B0(*(_QWORD *)(v283 + 8), *(_QWORD *)(v283 + 16), (_DWORD *)(v283 + 44));
                            *(_BYTE *)(v283 + 43) |= 0x20u;
                            v284 = v718;
                            v285 = v328;
                            *(_DWORD *)(v283 + 48) = v328;
                            v203 = v680;
                            v134 = v617;
                            v118 = v547;
                            v112 = v476;
                          }
                        }
                        v535 = v112;
                        v725 = v285;
                        LODWORD(v776[0]) = *(_DWORD *)(v203 + 44);
                        v700 = v284;
                        v656 = v134;
                        v599 = v118;
                        v468 = v203;
                        ptr = v776;
                        v775 = 0x2000000001LL;
                        v286 = sub_961DD0(v776, (__int64)v776 + 4);
                        v287 = v700;
                        v288 = v468;
                        v112 = v535;
                        v204 = v725 + v286;
                        v118 = v599;
                        v134 = v656;
                        if ( v700 )
                        {
                          if ( (*(_BYTE *)(v700 + 43) & 0x20) != 0 )
                          {
                            v289 = *(_DWORD *)(v700 + 48);
                          }
                          else
                          {
                            v329 = *(_QWORD *)(v700 + 16);
                            v330 = *(_QWORD *)(v700 + 8);
                            v331 = (_DWORD *)(v700 + 44);
                            v719 = v468;
                            v477 = v287;
                            v289 = sub_9935B0(v330, v329, v331);
                            *(_BYTE *)(v477 + 43) |= 0x20u;
                            v288 = v719;
                            *(_DWORD *)(v477 + 48) = v289;
                            v134 = v656;
                            v118 = v599;
                            v112 = v535;
                          }
                          v204 += v289;
                        }
                        if ( ptr != v776 )
                        {
                          v657 = v288;
                          v600 = v134;
                          v536 = v118;
                          v469 = v112;
                          free(ptr);
                          v288 = v657;
                          v134 = v600;
                          v118 = v536;
                          v112 = v469;
                        }
                        *(_DWORD *)(v288 + 48) = v204;
                        *(_BYTE *)(v288 + 43) |= 0x20u;
                      }
                    }
                    v567 = v118;
                    v508 = v112;
                    v450 = v134;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v134 + 44));
                    v205 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v206 = v450;
                    v112 = v508;
                    v135 = v204 + v205;
                    v118 = v567;
                    if ( v400 )
                    {
                      if ( (*(_BYTE *)(v400 + 43) & 0x20) != 0 )
                      {
                        v207 = *(_DWORD *)(v400 + 48);
                      }
                      else
                      {
                        v658 = v204 + v205;
                        v601 = v450;
                        v537 = v118;
                        v470 = v112;
                        v207 = sub_9935B0(*(_QWORD *)(v400 + 8), *(_QWORD *)(v400 + 16), (_DWORD *)(v400 + 44));
                        *(_BYTE *)(v400 + 43) |= 0x20u;
                        v135 = v658;
                        *(_DWORD *)(v400 + 48) = v207;
                        v206 = v601;
                        v118 = v537;
                        v112 = v470;
                      }
                      v135 += v207;
                    }
                    if ( ptr != v776 )
                    {
                      v568 = v135;
                      v509 = v206;
                      v451 = v118;
                      v401 = v112;
                      free(ptr);
                      v135 = v568;
                      v112 = v401;
                      v206 = v509;
                      v118 = v451;
                    }
                    *(_DWORD *)(v206 + 48) = v135;
                    *(_BYTE *)(v206 + 43) |= 0x20u;
                  }
                }
                v478 = v135;
                v380 = v118;
                v771 = v773;
                v772 = 0x2000000000LL;
                v423 = v112;
                sub_993300((__int64)&v771, *(_DWORD *)(v118 + 44));
                v136 = sub_961DD0(v771, (__int64)v771 + 4 * (unsigned int)v772);
                v137 = v380;
                v112 = v423;
                v119 = v136 + v478;
                if ( v356 )
                {
                  if ( (*(_BYTE *)(v356 + 43) & 0x20) != 0 )
                  {
                    v138 = *(_DWORD *)(v356 + 48);
                  }
                  else
                  {
                    v242 = *(_QWORD *)(v356 + 8);
                    v243 = *(_QWORD *)(v356 + 16);
                    v244 = 0;
                    if ( v242 )
                    {
                      if ( (*(_BYTE *)(v242 + 43) & 0x20) != 0 )
                      {
                        v244 = *(_DWORD *)(v242 + 48);
                      }
                      else
                      {
                        v643 = *(_QWORD *)(v356 + 16);
                        v587 = v136 + v478;
                        v527 = v380;
                        v412 = *(_QWORD *)(v356 + 8);
                        v244 = sub_9935B0(*(_QWORD *)(v242 + 8), *(_QWORD *)(v242 + 16), (_DWORD *)(v242 + 44));
                        *(_BYTE *)(v412 + 43) |= 0x20u;
                        v243 = v643;
                        *(_DWORD *)(v412 + 48) = v244;
                        v119 = v587;
                        v137 = v527;
                        v112 = v423;
                      }
                    }
                    v638 = v244;
                    v580 = v243;
                    v521 = v119;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v459 = v137;
                    v409 = v112;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v356 + 44));
                    v245 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v246 = v580;
                    v112 = v409;
                    v137 = v459;
                    v138 = v638 + v245;
                    v119 = v521;
                    if ( v580 )
                    {
                      if ( (*(_BYTE *)(v580 + 43) & 0x20) != 0 )
                      {
                        v247 = *(_DWORD *)(v580 + 48);
                      }
                      else
                      {
                        v252 = *(_QWORD *)(v580 + 16);
                        v253 = *(_QWORD *)(v580 + 8);
                        v254 = (_DWORD *)(v580 + 44);
                        v642 = v638 + v245;
                        v585 = v521;
                        v526 = v459;
                        v463 = v409;
                        v411 = v246;
                        v247 = sub_9935B0(v253, v252, v254);
                        *(_BYTE *)(v411 + 43) |= 0x20u;
                        v138 = v642;
                        *(_DWORD *)(v411 + 48) = v247;
                        v119 = v585;
                        v137 = v526;
                        v112 = v463;
                      }
                      v138 += v247;
                    }
                    if ( ptr != v776 )
                    {
                      v581 = v138;
                      v522 = v119;
                      v460 = v137;
                      v410 = v112;
                      free(ptr);
                      v138 = v581;
                      v112 = v410;
                      v119 = v522;
                      v137 = v460;
                    }
                    *(_DWORD *)(v356 + 48) = v138;
                    *(_BYTE *)(v356 + 43) |= 0x20u;
                  }
                  v119 += v138;
                }
                if ( v771 != v773 )
                {
                  v424 = v119;
                  v381 = v137;
                  v357 = v112;
                  free(v771);
                  v137 = v381;
                  v112 = v357;
                  v119 = v424;
                }
                *(_DWORD *)(v137 + 48) = v119;
                *(_BYTE *)(v137 + 43) |= 0x20u;
              }
            }
            v419 = v119;
            v376 = v112;
            v768 = v770;
            v769 = 0x2000000000LL;
            sub_993300((__int64)&v768, *(_DWORD *)(v345 + 44));
            v120 = sub_961DD0(v768, (__int64)v768 + 4 * (unsigned int)v769);
            v112 = v376;
            v113 = v120 + v419;
            if ( v368 )
            {
              if ( (*(_BYTE *)(v368 + 43) & 0x20) != 0 )
              {
                v121 = *(_DWORD *)(v368 + 48);
              }
              else
              {
                v162 = *(_QWORD *)(v368 + 8);
                v163 = 0;
                v392 = *(_QWORD *)(v368 + 16);
                if ( v162 )
                {
                  if ( (*(_BYTE *)(v162 + 43) & 0x20) != 0 )
                  {
                    v163 = *(_DWORD *)(v162 + 48);
                  }
                  else
                  {
                    v175 = *(_QWORD *)(v162 + 8);
                    v176 = *(_QWORD *)(v162 + 16);
                    v177 = 0;
                    if ( v175 )
                    {
                      if ( (*(_BYTE *)(v175 + 43) & 0x20) != 0 )
                      {
                        v177 = *(_DWORD *)(v175 + 48);
                      }
                      else
                      {
                        v652 = *(_QWORD *)(v162 + 16);
                        v595 = *(_QWORD *)(v368 + 8);
                        v532 = v120 + v419;
                        v465 = v112;
                        v275 = sub_9935B0(*(_QWORD *)(v175 + 8), *(_QWORD *)(v175 + 16), (_DWORD *)(v175 + 44));
                        *(_BYTE *)(v175 + 43) |= 0x20u;
                        v176 = v652;
                        v177 = v275;
                        *(_DWORD *)(v175 + 48) = v275;
                        v162 = v595;
                        v113 = v532;
                        v112 = v465;
                      }
                    }
                    v683 = v177;
                    v622 = v176;
                    v557 = v113;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v497 = v112;
                    v442 = v162;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v162 + 44));
                    v178 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v179 = v622;
                    v180 = v442;
                    v112 = v497;
                    v163 = v178 + v683;
                    v113 = v557;
                    if ( v622 )
                    {
                      if ( (*(_BYTE *)(v622 + 43) & 0x20) != 0 )
                      {
                        v181 = *(_DWORD *)(v622 + 48);
                      }
                      else
                      {
                        v276 = *(_QWORD *)(v622 + 16);
                        v277 = *(_QWORD *)(v622 + 8);
                        v278 = (_DWORD *)(v622 + 44);
                        v699 = v178 + v683;
                        v653 = v442;
                        v466 = v179;
                        v181 = sub_9935B0(v277, v276, v278);
                        *(_BYTE *)(v466 + 43) |= 0x20u;
                        v163 = v699;
                        *(_DWORD *)(v466 + 48) = v181;
                        v180 = v653;
                        v113 = v557;
                        v112 = v497;
                      }
                      v163 += v181;
                    }
                    if ( ptr != v776 )
                    {
                      v623 = v163;
                      v558 = v180;
                      v498 = v113;
                      v443 = v112;
                      free(ptr);
                      v163 = v623;
                      v180 = v558;
                      v113 = v498;
                      v112 = v443;
                    }
                    *(_DWORD *)(v180 + 48) = v163;
                    *(_BYTE *)(v180 + 43) |= 0x20u;
                  }
                }
                v552 = v163;
                v490 = v113;
                v771 = v773;
                v772 = 0x2000000000LL;
                v437 = v112;
                sub_993300((__int64)&v771, *(_DWORD *)(v368 + 44));
                v164 = sub_961DD0(v771, (__int64)v771 + 4 * (unsigned int)v772);
                v112 = v437;
                v113 = v490;
                v121 = v164 + v552;
                if ( v392 )
                {
                  if ( (*(_BYTE *)(v392 + 43) & 0x20) != 0 )
                  {
                    v165 = *(_DWORD *)(v392 + 48);
                  }
                  else
                  {
                    v171 = *(_QWORD *)(v392 + 8);
                    v172 = 0;
                    v440 = *(_QWORD *)(v392 + 16);
                    v494 = v171;
                    if ( v171 )
                    {
                      if ( (*(_BYTE *)(v171 + 43) & 0x20) != 0 )
                      {
                        v172 = *(_DWORD *)(v171 + 48);
                      }
                      else
                      {
                        v294 = *(_QWORD *)(v171 + 8);
                        v295 = *(_QWORD *)(v171 + 16);
                        v296 = 0;
                        if ( v294 )
                        {
                          if ( (*(_BYTE *)(v294 + 43) & 0x20) != 0 )
                          {
                            v296 = *(_DWORD *)(v294 + 48);
                          }
                          else
                          {
                            v744 = *(_QWORD *)(v171 + 16);
                            v733 = v121;
                            v712 = v113;
                            v674 = v112;
                            v612 = *(_QWORD *)(v171 + 8);
                            v296 = sub_9935B0(*(_QWORD *)(v294 + 8), *(_QWORD *)(v294 + 16), (_DWORD *)(v294 + 44));
                            *(_BYTE *)(v612 + 43) |= 0x20u;
                            v295 = v744;
                            *(_DWORD *)(v612 + 48) = v296;
                            v121 = v733;
                            v113 = v712;
                            v112 = v674;
                          }
                        }
                        v605 = v112;
                        v739 = v296;
                        v726 = v295;
                        v702 = v121;
                        LODWORD(v776[0]) = *(_DWORD *)(v494 + 44);
                        v662 = v113;
                        ptr = v776;
                        v775 = 0x2000000001LL;
                        v297 = sub_961DD0(v776, (__int64)v776 + 4);
                        v298 = v726;
                        v112 = v605;
                        v113 = v662;
                        v172 = v739 + v297;
                        v121 = v702;
                        if ( v726 )
                        {
                          if ( (*(_BYTE *)(v726 + 43) & 0x20) != 0 )
                          {
                            v299 = *(_DWORD *)(v726 + 48);
                          }
                          else
                          {
                            v318 = *(_QWORD *)(v726 + 16);
                            v319 = *(_QWORD *)(v726 + 8);
                            v320 = (_DWORD *)(v726 + 44);
                            v743 = v739 + v297;
                            v732 = v702;
                            v711 = v662;
                            v673 = v605;
                            v611 = v298;
                            v299 = sub_9935B0(v319, v318, v320);
                            *(_BYTE *)(v611 + 43) |= 0x20u;
                            v172 = v743;
                            *(_DWORD *)(v611 + 48) = v299;
                            v121 = v732;
                            v113 = v711;
                            v112 = v673;
                          }
                          v172 += v299;
                        }
                        if ( ptr != v776 )
                        {
                          v727 = v172;
                          v703 = v121;
                          v663 = v113;
                          v606 = v112;
                          free(ptr);
                          v172 = v727;
                          v121 = v703;
                          v113 = v663;
                          v112 = v606;
                        }
                        *(_DWORD *)(v494 + 48) = v172;
                        *(_BYTE *)(v494 + 43) |= 0x20u;
                      }
                    }
                    v682 = v172;
                    v620 = v121;
                    v555 = v113;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v495 = v112;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v392 + 44));
                    v173 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v112 = v495;
                    v113 = v555;
                    v121 = v620;
                    v165 = v173 + v682;
                    if ( v440 )
                    {
                      if ( (*(_BYTE *)(v440 + 43) & 0x20) != 0 )
                      {
                        v174 = *(_DWORD *)(v440 + 48);
                      }
                      else
                      {
                        v704 = v173 + v682;
                        v174 = sub_9935B0(*(_QWORD *)(v440 + 8), *(_QWORD *)(v440 + 16), (_DWORD *)(v440 + 44));
                        *(_BYTE *)(v440 + 43) |= 0x20u;
                        v165 = v704;
                        *(_DWORD *)(v440 + 48) = v174;
                        v121 = v620;
                        v113 = v555;
                        v112 = v495;
                      }
                      v165 += v174;
                    }
                    if ( ptr != v776 )
                    {
                      v621 = v165;
                      v556 = v121;
                      v496 = v113;
                      v441 = v112;
                      free(ptr);
                      v165 = v621;
                      v121 = v556;
                      v113 = v496;
                      v112 = v441;
                    }
                    *(_DWORD *)(v392 + 48) = v165;
                    *(_BYTE *)(v392 + 43) |= 0x20u;
                  }
                  v121 += v165;
                }
                if ( v771 != v773 )
                {
                  v491 = v121;
                  v438 = v113;
                  v393 = v112;
                  free(v771);
                  v121 = v491;
                  v112 = v393;
                  v113 = v438;
                }
                *(_DWORD *)(v368 + 48) = v121;
                *(_BYTE *)(v368 + 43) |= 0x20u;
              }
              v113 += v121;
            }
            if ( v768 != v770 )
            {
              v369 = v113;
              v352 = v112;
              free(v768);
              v113 = v369;
              v112 = v352;
            }
            *(_DWORD *)(v345 + 48) = v113;
            *(_BYTE *)(v345 + 43) |= 0x20u;
          }
          v98 += v113;
        }
        if ( v765 != v767 )
        {
          v346 = v112;
          free(v765);
          v112 = v346;
        }
        *(_DWORD *)(v112 + 48) = v98;
        *(_BYTE *)(v112 + 43) |= 0x20u;
      }
    }
    LODWORD(v755[0]) = *(_DWORD *)(v41 + 44);
    v754[0] = v755;
    v754[1] = (void *)0x2000000001LL;
    v99 = sub_961DD0(v755, (__int64)v755 + 4);
    v43 = (__int64)v754;
    v62 = v99 + v98;
    if ( v97 )
    {
      if ( (*(_BYTE *)(v97 + 43) & 0x20) != 0 )
      {
        v39 = *(unsigned int *)(v97 + 48);
      }
      else
      {
        v105 = *(_QWORD *)(v97 + 8);
        v106 = 0;
        v343 = *(_QWORD *)(v97 + 16);
        if ( v105 )
        {
          if ( (*(_BYTE *)(v105 + 43) & 0x20) != 0 )
          {
            v106 = *(_DWORD *)(v105 + 48);
          }
          else
          {
            v126 = *(_QWORD *)(v105 + 8);
            v372 = *(_QWORD *)(v105 + 16);
            if ( v126 )
            {
              if ( (*(_BYTE *)(v126 + 43) & 0x20) != 0 )
              {
                v378 = *(_DWORD *)(v126 + 48);
              }
              else
              {
                v149 = *(_QWORD *)(v126 + 8);
                v150 = 0;
                v431 = *(_QWORD *)(v126 + 16);
                if ( v149 )
                {
                  if ( (*(_BYTE *)(v149 + 43) & 0x20) != 0 )
                  {
                    v150 = *(_DWORD *)(v149 + 48);
                  }
                  else
                  {
                    v231 = *(_QWORD *)(v149 + 8);
                    v232 = *(_QWORD *)(v149 + 16);
                    v233 = 0;
                    if ( v231 )
                    {
                      if ( (*(_BYTE *)(v231 + 43) & 0x20) != 0 )
                      {
                        v233 = *(_DWORD *)(v231 + 48);
                      }
                      else
                      {
                        v609 = *(_QWORD *)(v149 + 16);
                        v543 = *(_QWORD *)(v126 + 8);
                        v418 = *(_QWORD *)(v105 + 8);
                        v365 = *(_QWORD *)(v97 + 8);
                        v314 = sub_9935B0(*(_QWORD *)(v231 + 8), *(_QWORD *)(v231 + 16), (_DWORD *)(v231 + 44));
                        *(_BYTE *)(v231 + 43) |= 0x20u;
                        v126 = v418;
                        v233 = v314;
                        *(_DWORD *)(v231 + 48) = v314;
                        v232 = v609;
                        v149 = v543;
                        v105 = v365;
                      }
                    }
                    v636 = v233;
                    v577 = v232;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v517 = v126;
                    v405 = v105;
                    v362 = v149;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v149 + 44));
                    v234 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v235 = v362;
                    v105 = v405;
                    v236 = v577;
                    v126 = v517;
                    v150 = v636 + v234;
                    if ( v577 )
                    {
                      if ( (*(_BYTE *)(v577 + 43) & 0x20) != 0 )
                      {
                        v237 = *(_DWORD *)(v577 + 48);
                      }
                      else
                      {
                        v255 = *(_QWORD *)(v577 + 16);
                        v256 = *(_QWORD *)(v577 + 8);
                        v257 = (_DWORD *)(v577 + 44);
                        v586 = v362;
                        v364 = v236;
                        v237 = sub_9935B0(v256, v255, v257);
                        *(_BYTE *)(v364 + 43) |= 0x20u;
                        *(_DWORD *)(v364 + 48) = v237;
                        v235 = v586;
                        v126 = v517;
                        v105 = v405;
                      }
                      v150 += v237;
                    }
                    if ( ptr != v776 )
                    {
                      v518 = v235;
                      v406 = v126;
                      v363 = v105;
                      free(ptr);
                      v126 = v406;
                      v105 = v363;
                      v235 = v518;
                    }
                    *(_DWORD *)(v235 + 48) = v150;
                    *(_BYTE *)(v235 + 43) |= 0x20u;
                  }
                }
                v550 = v105;
                v768 = v770;
                v769 = 0x2000000000LL;
                v484 = v126;
                sub_993300((__int64)&v768, *(_DWORD *)(v126 + 44));
                v151 = sub_961DD0(v768, (__int64)v768 + 4 * (unsigned int)v769);
                v152 = v484;
                v105 = v550;
                v378 = v150 + v151;
                if ( v431 )
                {
                  if ( (*(_BYTE *)(v431 + 43) & 0x20) != 0 )
                  {
                    v485 = *(_DWORD *)(v431 + 48);
                  }
                  else
                  {
                    v208 = *(_QWORD *)(v431 + 8);
                    v209 = 0;
                    v569 = *(_QWORD *)(v431 + 16);
                    if ( v208 )
                    {
                      if ( (*(_BYTE *)(v208 + 43) & 0x20) != 0 )
                      {
                        v209 = *(_DWORD *)(v208 + 48);
                      }
                      else
                      {
                        v644 = v484;
                        v528 = v105;
                        v258 = sub_9935B0(*(_QWORD *)(v208 + 8), *(_QWORD *)(v208 + 16), (_DWORD *)(v208 + 44));
                        *(_BYTE *)(v208 + 43) |= 0x20u;
                        v209 = v258;
                        *(_DWORD *)(v208 + 48) = v258;
                        v152 = v644;
                        v105 = v528;
                      }
                    }
                    v510 = v209;
                    v771 = v773;
                    v772 = 0x2000000000LL;
                    v686 = v152;
                    v630 = v105;
                    sub_993300((__int64)&v771, *(_DWORD *)(v431 + 44));
                    v210 = sub_961DD0(v771, (__int64)v771 + 4 * (unsigned int)v772);
                    v105 = v630;
                    v152 = v686;
                    v485 = v510 + v210;
                    if ( v569 )
                    {
                      if ( (*(_BYTE *)(v569 + 43) & 0x20) != 0 )
                      {
                        v211 = *(_DWORD *)(v569 + 48);
                      }
                      else
                      {
                        v304 = *(_QWORD *)(v569 + 8);
                        v305 = *(_QWORD *)(v569 + 16);
                        v306 = 0;
                        if ( v304 )
                        {
                          if ( (*(_BYTE *)(v304 + 43) & 0x20) != 0 )
                          {
                            v306 = *(_DWORD *)(v304 + 48);
                          }
                          else
                          {
                            v742 = *(_QWORD *)(v569 + 16);
                            v731 = v686;
                            v710 = v630;
                            v672 = *(_QWORD *)(v569 + 8);
                            v306 = sub_9935B0(*(_QWORD *)(v304 + 8), *(_QWORD *)(v304 + 16), (_DWORD *)(v304 + 44));
                            *(_BYTE *)(v672 + 43) |= 0x20u;
                            *(_DWORD *)(v672 + 48) = v306;
                            v305 = v742;
                            v152 = v731;
                            v105 = v710;
                          }
                        }
                        v740 = v306;
                        v728 = v305;
                        v706 = v152;
                        LODWORD(v776[0]) = *(_DWORD *)(v569 + 44);
                        v665 = v105;
                        ptr = v776;
                        v775 = 0x2000000001LL;
                        v307 = sub_961DD0(v776, (__int64)v776 + 4);
                        v308 = v728;
                        v105 = v665;
                        v152 = v706;
                        v211 = v740 + v307;
                        if ( v728 )
                        {
                          if ( (*(_BYTE *)(v728 + 43) & 0x20) != 0 )
                          {
                            v309 = *(_DWORD *)(v728 + 48);
                          }
                          else
                          {
                            v315 = *(_QWORD *)(v728 + 16);
                            v316 = *(_QWORD *)(v728 + 8);
                            v317 = (_DWORD *)(v728 + 44);
                            v741 = v740 + v307;
                            v730 = v706;
                            v709 = v665;
                            v671 = v308;
                            v309 = sub_9935B0(v316, v315, v317);
                            *(_BYTE *)(v671 + 43) |= 0x20u;
                            *(_DWORD *)(v671 + 48) = v309;
                            v211 = v741;
                            v152 = v730;
                            v105 = v709;
                          }
                          v211 += v309;
                        }
                        if ( ptr != v776 )
                        {
                          v729 = v211;
                          v707 = v152;
                          v666 = v105;
                          free(ptr);
                          v211 = v729;
                          v152 = v707;
                          v105 = v666;
                        }
                        *(_DWORD *)(v569 + 48) = v211;
                        *(_BYTE *)(v569 + 43) |= 0x20u;
                      }
                      v485 += v211;
                    }
                    if ( v771 != v773 )
                    {
                      v631 = v152;
                      v570 = v105;
                      free(v771);
                      v152 = v631;
                      v105 = v570;
                    }
                    *(_BYTE *)(v431 + 43) |= 0x20u;
                    *(_DWORD *)(v431 + 48) = v485;
                  }
                  v378 += v485;
                }
                if ( v768 != v770 )
                {
                  v486 = v152;
                  v432 = v105;
                  free(v768);
                  v152 = v486;
                  v105 = v432;
                }
                *(_BYTE *)(v152 + 43) |= 0x20u;
                *(_DWORD *)(v152 + 48) = v378;
              }
            }
            else
            {
              v378 = 0;
            }
            v421 = v105;
            v768 = v770;
            v769 = 0x2000000000LL;
            sub_993300((__int64)&v768, *(_DWORD *)(v105 + 44));
            v127 = sub_961DD0(v768, (__int64)v768 + 4 * (unsigned int)v769);
            v128 = v421;
            v106 = v127 + v378;
            if ( v372 )
            {
              if ( (*(_BYTE *)(v372 + 43) & 0x20) != 0 )
              {
                v129 = *(_DWORD *)(v372 + 48);
              }
              else
              {
                v141 = *(_QWORD *)(v372 + 8);
                v384 = 0;
                v427 = *(_QWORD *)(v372 + 16);
                if ( v141 )
                {
                  if ( (*(_BYTE *)(v141 + 43) & 0x20) != 0 )
                  {
                    v384 = *(_DWORD *)(v141 + 48);
                  }
                  else
                  {
                    v224 = *(_QWORD *)(v141 + 8);
                    v225 = *(_QWORD *)(v141 + 16);
                    v226 = 0;
                    if ( v224 )
                    {
                      if ( (*(_BYTE *)(v224 + 43) & 0x20) != 0 )
                      {
                        v226 = *(_DWORD *)(v224 + 48);
                      }
                      else
                      {
                        v664 = *(_QWORD *)(v141 + 16);
                        v607 = *(_QWORD *)(v372 + 8);
                        v540 = v106;
                        v417 = v128;
                        v300 = sub_9935B0(*(_QWORD *)(v224 + 8), *(_QWORD *)(v224 + 16), (_DWORD *)(v224 + 44));
                        *(_BYTE *)(v224 + 43) |= 0x20u;
                        v128 = v417;
                        v226 = v300;
                        *(_DWORD *)(v224 + 48) = v300;
                        v225 = v664;
                        v141 = v607;
                        v106 = v540;
                      }
                    }
                    v404 = v226;
                    v688 = v225;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v634 = v106;
                    v575 = v128;
                    v515 = v141;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v141 + 44));
                    v227 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v228 = v688;
                    v229 = v515;
                    v128 = v575;
                    v106 = v634;
                    v384 = v404 + v227;
                    if ( v688 )
                    {
                      if ( (*(_BYTE *)(v688 + 43) & 0x20) != 0 )
                      {
                        v230 = *(_DWORD *)(v688 + 48);
                      }
                      else
                      {
                        v301 = *(_QWORD *)(v688 + 16);
                        v302 = *(_QWORD *)(v688 + 8);
                        v303 = (_DWORD *)(v688 + 44);
                        v705 = v515;
                        v541 = v228;
                        v230 = sub_9935B0(v302, v301, v303);
                        *(_BYTE *)(v541 + 43) |= 0x20u;
                        *(_DWORD *)(v541 + 48) = v230;
                        v229 = v705;
                        v106 = v634;
                        v128 = v575;
                      }
                      v384 += v230;
                    }
                    if ( ptr != v776 )
                    {
                      v635 = v229;
                      v576 = v106;
                      v516 = v128;
                      free(ptr);
                      v229 = v635;
                      v106 = v576;
                      v128 = v516;
                    }
                    *(_BYTE *)(v229 + 43) |= 0x20u;
                    *(_DWORD *)(v229 + 48) = v384;
                  }
                }
                v549 = v106;
                v771 = v773;
                v772 = 0x2000000000LL;
                v481 = v128;
                sub_993300((__int64)&v771, *(_DWORD *)(v372 + 44));
                v142 = sub_961DD0(v771, (__int64)v771 + 4 * (unsigned int)v772);
                v128 = v481;
                v106 = v549;
                v129 = v142 + v384;
                if ( v427 )
                {
                  if ( (*(_BYTE *)(v427 + 43) & 0x20) != 0 )
                  {
                    v143 = *(_DWORD *)(v427 + 48);
                  }
                  else
                  {
                    v199 = *(_QWORD *)(v427 + 8);
                    v200 = 0;
                    v398 = *(_QWORD *)(v427 + 16);
                    if ( v199 )
                    {
                      if ( (*(_BYTE *)(v199 + 43) & 0x20) != 0 )
                      {
                        v200 = *(_DWORD *)(v199 + 48);
                      }
                      else
                      {
                        v701 = v129;
                        v660 = v549;
                        v603 = v481;
                        v539 = *(_QWORD *)(v427 + 8);
                        v200 = sub_9935B0(*(_QWORD *)(v199 + 8), *(_QWORD *)(v199 + 16), (_DWORD *)(v199 + 44));
                        *(_BYTE *)(v539 + 43) |= 0x20u;
                        *(_DWORD *)(v539 + 48) = v200;
                        v129 = v701;
                        v106 = v660;
                        v128 = v603;
                      }
                    }
                    v685 = v200;
                    v628 = v129;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v565 = v106;
                    v506 = v128;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v427 + 44));
                    v201 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v128 = v506;
                    v106 = v565;
                    v129 = v628;
                    v143 = v685 + v201;
                    if ( v398 )
                    {
                      if ( (*(_BYTE *)(v398 + 43) & 0x20) != 0 )
                      {
                        v202 = *(_DWORD *)(v398 + 48);
                      }
                      else
                      {
                        v692 = v685 + v201;
                        v202 = sub_9935B0(*(_QWORD *)(v398 + 8), *(_QWORD *)(v398 + 16), (_DWORD *)(v398 + 44));
                        *(_BYTE *)(v398 + 43) |= 0x20u;
                        v143 = v692;
                        *(_DWORD *)(v398 + 48) = v202;
                        v129 = v628;
                        v106 = v565;
                        v128 = v506;
                      }
                      v143 += v202;
                    }
                    if ( ptr != v776 )
                    {
                      v629 = v143;
                      v566 = v129;
                      v507 = v106;
                      v399 = v128;
                      free(ptr);
                      v143 = v629;
                      v129 = v566;
                      v106 = v507;
                      v128 = v399;
                    }
                    *(_DWORD *)(v427 + 48) = v143;
                    *(_BYTE *)(v427 + 43) |= 0x20u;
                  }
                  v129 += v143;
                }
                if ( v771 != v773 )
                {
                  v482 = v129;
                  v428 = v106;
                  v385 = v128;
                  free(v771);
                  v128 = v385;
                  v129 = v482;
                  v106 = v428;
                }
                *(_DWORD *)(v372 + 48) = v129;
                *(_BYTE *)(v372 + 43) |= 0x20u;
              }
              v106 += v129;
            }
            if ( v768 != v770 )
            {
              v373 = v106;
              v354 = v128;
              free(v768);
              v106 = v373;
              v128 = v354;
            }
            *(_DWORD *)(v128 + 48) = v106;
            *(_BYTE *)(v128 + 43) |= 0x20u;
          }
        }
        v350 = v106;
        LODWORD(v767[0]) = *(_DWORD *)(v97 + 44);
        v766 = 0x2000000001LL;
        v765 = v767;
        v107 = sub_961DD0(v767, (__int64)v767 + 4);
        v43 = (__int64)v754;
        v39 = (unsigned int)(v107 + v350);
        if ( v343 )
        {
          if ( (*(_BYTE *)(v343 + 43) & 0x20) != 0 )
          {
            v108 = *(_DWORD *)(v343 + 48);
          }
          else
          {
            v130 = *(_QWORD *)(v343 + 8);
            v131 = 0;
            v374 = *(_QWORD *)(v343 + 16);
            if ( v130 )
            {
              if ( (*(_BYTE *)(v130 + 43) & 0x20) != 0 )
              {
                v131 = *(_DWORD *)(v130 + 48);
              }
              else
              {
                v144 = *(_QWORD *)(v130 + 8);
                v145 = 0;
                v358 = *(_QWORD *)(v130 + 16);
                if ( v144 )
                {
                  if ( (*(_BYTE *)(v144 + 43) & 0x20) != 0 )
                  {
                    v145 = *(_DWORD *)(v144 + 48);
                  }
                  else
                  {
                    v212 = 0;
                    v402 = *(_QWORD *)(v144 + 16);
                    v213 = *(_QWORD *)(v144 + 8);
                    v452 = v213;
                    if ( v213 )
                    {
                      if ( (*(_BYTE *)(v213 + 43) & 0x20) != 0 )
                      {
                        v212 = *(_DWORD *)(v213 + 48);
                      }
                      else
                      {
                        v259 = *(_QWORD *)(v213 + 8);
                        v260 = *(_QWORD *)(v213 + 16);
                        v261 = 0;
                        if ( v259 )
                        {
                          if ( (*(_BYTE *)(v259 + 43) & 0x20) != 0 )
                          {
                            v261 = *(_DWORD *)(v259 + 48);
                          }
                          else
                          {
                            v713 = *(_QWORD *)(v213 + 16);
                            v675 = *(_QWORD *)(v130 + 8);
                            v613 = *(_QWORD *)(v343 + 8);
                            v545 = v39;
                            v321 = sub_9935B0(*(_QWORD *)(v259 + 8), *(_QWORD *)(v259 + 16), (_DWORD *)(v259 + 44));
                            *(_BYTE *)(v259 + 43) |= 0x20u;
                            v261 = v321;
                            *(_DWORD *)(v259 + 48) = v321;
                            v260 = v713;
                            v144 = v675;
                            v130 = v613;
                            LODWORD(v39) = v545;
                          }
                        }
                        v720 = v261;
                        v693 = v260;
                        v645 = v144;
                        LODWORD(v776[0]) = *(_DWORD *)(v452 + 44);
                        v588 = v130;
                        v529 = v39;
                        ptr = v776;
                        v775 = 0x2000000001LL;
                        v262 = sub_961DD0(v776, (__int64)v776 + 4);
                        v263 = v693;
                        LODWORD(v39) = v529;
                        v130 = v588;
                        v212 = v720 + v262;
                        v144 = v645;
                        if ( v693 )
                        {
                          if ( (*(_BYTE *)(v693 + 43) & 0x20) != 0 )
                          {
                            v264 = *(_DWORD *)(v693 + 48);
                          }
                          else
                          {
                            v322 = *(_QWORD *)(v693 + 16);
                            v323 = *(_QWORD *)(v693 + 8);
                            v324 = (_DWORD *)(v693 + 44);
                            v714 = v645;
                            v676 = v588;
                            v614 = v529;
                            v546 = v263;
                            v264 = sub_9935B0(v323, v322, v324);
                            *(_BYTE *)(v546 + 43) |= 0x20u;
                            *(_DWORD *)(v546 + 48) = v264;
                            v144 = v714;
                            v130 = v676;
                            LODWORD(v39) = v614;
                          }
                          v212 += v264;
                        }
                        if ( ptr != v776 )
                        {
                          v646 = v144;
                          v589 = v130;
                          v530 = v39;
                          free(ptr);
                          v144 = v646;
                          v130 = v589;
                          LODWORD(v39) = v530;
                        }
                        *(_DWORD *)(v452 + 48) = v212;
                        *(_BYTE *)(v452 + 43) |= 0x20u;
                      }
                    }
                    v571 = v130;
                    v511 = v39;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v453 = v144;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v144 + 44));
                    v214 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v215 = v453;
                    LODWORD(v39) = v511;
                    v145 = v212 + v214;
                    v130 = v571;
                    if ( v402 )
                    {
                      if ( (*(_BYTE *)(v402 + 43) & 0x20) != 0 )
                      {
                        v216 = *(_DWORD *)(v402 + 48);
                      }
                      else
                      {
                        v647 = v212 + v214;
                        v590 = v453;
                        v531 = v130;
                        v464 = v39;
                        v216 = sub_9935B0(*(_QWORD *)(v402 + 8), *(_QWORD *)(v402 + 16), (_DWORD *)(v402 + 44));
                        *(_BYTE *)(v402 + 43) |= 0x20u;
                        *(_DWORD *)(v402 + 48) = v216;
                        v145 = v647;
                        v215 = v590;
                        v130 = v531;
                        LODWORD(v39) = v464;
                      }
                      v145 += v216;
                    }
                    if ( ptr != v776 )
                    {
                      v572 = v145;
                      v512 = v215;
                      v454 = v130;
                      v403 = v39;
                      free(ptr);
                      v145 = v572;
                      v215 = v512;
                      v130 = v454;
                      LODWORD(v39) = v403;
                    }
                    *(_DWORD *)(v215 + 48) = v145;
                    *(_BYTE *)(v215 + 43) |= 0x20u;
                  }
                }
                v483 = v145;
                v771 = v773;
                v772 = 0x2000000000LL;
                v429 = v39;
                v386 = v130;
                sub_993300((__int64)&v771, *(_DWORD *)(v130 + 44));
                v146 = sub_961DD0(v771, (__int64)v771 + 4 * (unsigned int)v772);
                v147 = v386;
                LODWORD(v39) = v429;
                v131 = v146 + v483;
                if ( v358 )
                {
                  if ( (*(_BYTE *)(v358 + 43) & 0x20) != 0 )
                  {
                    v148 = *(_DWORD *)(v358 + 48);
                  }
                  else
                  {
                    v238 = *(_QWORD *)(v358 + 8);
                    v239 = 0;
                    v407 = *(_QWORD *)(v358 + 16);
                    if ( v238 )
                    {
                      if ( (*(_BYTE *)(v238 + 43) & 0x20) != 0 )
                      {
                        v239 = *(_DWORD *)(v238 + 48);
                      }
                      else
                      {
                        v669 = v146 + v483;
                        v610 = v147;
                        v544 = v429;
                        v475 = *(_QWORD *)(v358 + 8);
                        v239 = sub_9935B0(*(_QWORD *)(v238 + 8), *(_QWORD *)(v238 + 16), (_DWORD *)(v238 + 44));
                        *(_BYTE *)(v475 + 43) |= 0x20u;
                        *(_DWORD *)(v475 + 48) = v239;
                        v131 = v669;
                        v147 = v610;
                        LODWORD(v39) = v544;
                      }
                    }
                    v637 = v239;
                    v578 = v131;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v519 = v147;
                    v457 = v39;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v358 + 44));
                    v240 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    LODWORD(v39) = v457;
                    v147 = v519;
                    v131 = v578;
                    v148 = v637 + v240;
                    if ( v407 )
                    {
                      if ( (*(_BYTE *)(v407 + 43) & 0x20) != 0 )
                      {
                        v241 = *(_DWORD *)(v407 + 48);
                      }
                      else
                      {
                        v670 = v637 + v240;
                        v241 = sub_9935B0(*(_QWORD *)(v407 + 8), *(_QWORD *)(v407 + 16), (_DWORD *)(v407 + 44));
                        *(_BYTE *)(v407 + 43) |= 0x20u;
                        v148 = v670;
                        *(_DWORD *)(v407 + 48) = v241;
                        v131 = v578;
                        v147 = v519;
                        LODWORD(v39) = v457;
                      }
                      v148 += v241;
                    }
                    if ( ptr != v776 )
                    {
                      v579 = v148;
                      v520 = v131;
                      v458 = v147;
                      v408 = v39;
                      free(ptr);
                      v148 = v579;
                      v131 = v520;
                      v147 = v458;
                      LODWORD(v39) = v408;
                    }
                    *(_DWORD *)(v358 + 48) = v148;
                    *(_BYTE *)(v358 + 43) |= 0x20u;
                  }
                  v131 += v148;
                }
                if ( v771 != v773 )
                {
                  v430 = v131;
                  v387 = v147;
                  v359 = v39;
                  free(v771);
                  v147 = v387;
                  LODWORD(v39) = v359;
                  v131 = v430;
                }
                *(_DWORD *)(v147 + 48) = v131;
                *(_BYTE *)(v147 + 43) |= 0x20u;
              }
            }
            v422 = v131;
            v768 = v770;
            v769 = 0x2000000000LL;
            v379 = v39;
            sub_993300((__int64)&v768, *(_DWORD *)(v343 + 44));
            v132 = sub_961DD0(v768, (__int64)v768 + 4 * (unsigned int)v769);
            LODWORD(v39) = v379;
            v43 = (__int64)v754;
            v108 = v132 + v422;
            if ( v374 )
            {
              if ( (*(_BYTE *)(v374 + 43) & 0x20) != 0 )
              {
                v133 = *(_DWORD *)(v374 + 48);
              }
              else
              {
                v139 = *(_QWORD *)(v374 + 8);
                v382 = *(_QWORD *)(v374 + 16);
                if ( v139 )
                {
                  if ( (*(_BYTE *)(v139 + 43) & 0x20) != 0 )
                  {
                    v425 = *(_DWORD *)(v139 + 48);
                  }
                  else
                  {
                    v166 = *(_QWORD *)(v139 + 8);
                    v167 = 0;
                    v492 = *(_QWORD *)(v139 + 16);
                    if ( v166 )
                    {
                      if ( (*(_BYTE *)(v166 + 43) & 0x20) != 0 )
                      {
                        v167 = *(_DWORD *)(v166 + 48);
                      }
                      else
                      {
                        v661 = *(_QWORD *)(v374 + 8);
                        v604 = v132 + v422;
                        v472 = v39;
                        v293 = sub_9935B0(*(_QWORD *)(v166 + 8), *(_QWORD *)(v166 + 16), (_DWORD *)(v166 + 44));
                        *(_BYTE *)(v166 + 43) |= 0x20u;
                        v167 = v293;
                        *(_DWORD *)(v166 + 48) = v293;
                        v139 = v661;
                        v108 = v604;
                        LODWORD(v39) = v472;
                      }
                    }
                    v439 = v167;
                    v771 = v773;
                    v772 = 0x2000000000LL;
                    v681 = v108;
                    v618 = v39;
                    v553 = v139;
                    sub_993300((__int64)&v771, *(_DWORD *)(v139 + 44));
                    v168 = sub_961DD0(v771, (__int64)v771 + 4 * (unsigned int)v772);
                    v169 = v553;
                    LODWORD(v39) = v618;
                    v108 = v681;
                    v425 = v439 + v168;
                    if ( v492 )
                    {
                      if ( (*(_BYTE *)(v492 + 43) & 0x20) != 0 )
                      {
                        v170 = *(_DWORD *)(v492 + 48);
                      }
                      else
                      {
                        v271 = *(_QWORD *)(v492 + 8);
                        v272 = 0;
                        v593 = *(_QWORD *)(v492 + 16);
                        if ( v271 )
                        {
                          if ( (*(_BYTE *)(v271 + 43) & 0x20) != 0 )
                          {
                            v272 = *(_DWORD *)(v271 + 48);
                          }
                          else
                          {
                            v747 = v169;
                            v736 = v681;
                            v717 = v618;
                            v679 = *(_QWORD *)(v492 + 8);
                            v272 = sub_9935B0(*(_QWORD *)(v271 + 8), *(_QWORD *)(v271 + 16), (_DWORD *)(v271 + 44));
                            *(_BYTE *)(v679 + 43) |= 0x20u;
                            *(_DWORD *)(v679 + 48) = v272;
                            v169 = v747;
                            v108 = v736;
                            LODWORD(v39) = v717;
                          }
                        }
                        v738 = v272;
                        v723 = v169;
                        v697 = v108;
                        LODWORD(v776[0]) = *(_DWORD *)(v492 + 44);
                        v650 = v39;
                        ptr = v776;
                        v775 = 0x2000000001LL;
                        v273 = sub_961DD0(v776, (__int64)v776 + 4);
                        LODWORD(v39) = v650;
                        v108 = v697;
                        v169 = v723;
                        v170 = v738 + v273;
                        if ( v593 )
                        {
                          if ( (*(_BYTE *)(v593 + 43) & 0x20) != 0 )
                          {
                            v274 = *(_DWORD *)(v593 + 48);
                          }
                          else
                          {
                            v748 = v738 + v273;
                            v274 = sub_9935B0(*(_QWORD *)(v593 + 8), *(_QWORD *)(v593 + 16), (_DWORD *)(v593 + 44));
                            *(_BYTE *)(v593 + 43) |= 0x20u;
                            v170 = v748;
                            *(_DWORD *)(v593 + 48) = v274;
                            v169 = v723;
                            v108 = v697;
                            LODWORD(v39) = v650;
                          }
                          v170 += v274;
                        }
                        if ( ptr != v776 )
                        {
                          v724 = v170;
                          v698 = v169;
                          v651 = v108;
                          v594 = v39;
                          free(ptr);
                          v170 = v724;
                          v169 = v698;
                          v108 = v651;
                          LODWORD(v39) = v594;
                        }
                        *(_DWORD *)(v492 + 48) = v170;
                        *(_BYTE *)(v492 + 43) |= 0x20u;
                      }
                      v425 += v170;
                    }
                    if ( v771 != v773 )
                    {
                      v619 = v169;
                      v554 = v108;
                      v493 = v39;
                      free(v771);
                      v169 = v619;
                      v108 = v554;
                      LODWORD(v39) = v493;
                    }
                    *(_BYTE *)(v169 + 43) |= 0x20u;
                    *(_DWORD *)(v169 + 48) = v425;
                  }
                }
                else
                {
                  v425 = 0;
                }
                v771 = v773;
                v772 = 0x2000000000LL;
                v548 = v108;
                v479 = v39;
                sub_993300((__int64)&v771, *(_DWORD *)(v374 + 44));
                v140 = sub_961DD0(v771, (__int64)v771 + 4 * (unsigned int)v772);
                LODWORD(v39) = v479;
                v108 = v548;
                v43 = (__int64)v754;
                v133 = v140 + v425;
                if ( v382 )
                {
                  if ( (*(_BYTE *)(v382 + 43) & 0x20) != 0 )
                  {
                    v40 = *(unsigned int *)(v382 + 48);
                  }
                  else
                  {
                    v248 = *(_QWORD *)(v382 + 8);
                    v249 = 0;
                    v461 = *(_QWORD *)(v382 + 16);
                    if ( v248 )
                    {
                      if ( (*(_BYTE *)(v248 + 43) & 0x20) != 0 )
                      {
                        v249 = *(_DWORD *)(v248 + 48);
                      }
                      else
                      {
                        v690 = v133;
                        v641 = v548;
                        v584 = v479;
                        v525 = *(_QWORD *)(v382 + 8);
                        v249 = sub_9935B0(*(_QWORD *)(v248 + 8), *(_QWORD *)(v248 + 16), (_DWORD *)(v248 + 44));
                        *(_BYTE *)(v525 + 43) |= 0x20u;
                        *(_DWORD *)(v525 + 48) = v249;
                        v133 = v690;
                        v108 = v641;
                        LODWORD(v39) = v584;
                      }
                    }
                    v689 = v249;
                    v639 = v133;
                    ptr = v776;
                    v775 = 0x2000000000LL;
                    v582 = v108;
                    v523 = v39;
                    sub_993300((__int64)&ptr, *(_DWORD *)(v382 + 44));
                    v250 = sub_961DD0(ptr, (__int64)ptr + 4 * (unsigned int)v775);
                    v46 = v689;
                    LODWORD(v39) = v523;
                    v108 = v582;
                    v133 = v639;
                    v40 = v689 + v250;
                    v43 = (__int64)v754;
                    if ( v461 )
                    {
                      if ( (*(_BYTE *)(v461 + 43) & 0x20) != 0 )
                      {
                        v251 = *(_DWORD *)(v461 + 48);
                      }
                      else
                      {
                        v691 = v689 + v250;
                        v251 = sub_9935B0(*(_QWORD *)(v461 + 8), *(_QWORD *)(v461 + 16), (_DWORD *)(v461 + 44));
                        *(_BYTE *)(v461 + 43) |= 0x20u;
                        LODWORD(v40) = v691;
                        *(_DWORD *)(v461 + 48) = v251;
                        v133 = v639;
                        v43 = (__int64)v754;
                        v108 = v582;
                        LODWORD(v39) = v523;
                      }
                      v40 = (unsigned int)(v251 + v40);
                    }
                    if ( ptr != v776 )
                    {
                      v640 = v40;
                      v583 = v133;
                      v524 = v108;
                      v462 = v39;
                      free(ptr);
                      v43 = (__int64)v754;
                      v40 = v640;
                      v133 = v583;
                      v108 = v524;
                      LODWORD(v39) = v462;
                    }
                    *(_DWORD *)(v382 + 48) = v40;
                    *(_BYTE *)(v382 + 43) |= 0x20u;
                  }
                  v133 += v40;
                }
                if ( v771 != v773 )
                {
                  v480 = v133;
                  v426 = v108;
                  v383 = v39;
                  free(v771);
                  v43 = (__int64)v754;
                  LODWORD(v39) = v383;
                  v133 = v480;
                  v108 = v426;
                }
                *(_DWORD *)(v374 + 48) = v133;
                *(_BYTE *)(v374 + 43) |= 0x20u;
              }
              v108 += v133;
            }
            if ( v768 != v770 )
            {
              v375 = v108;
              v355 = v39;
              free(v768);
              v43 = (__int64)v754;
              v108 = v375;
              LODWORD(v39) = v355;
            }
            *(_DWORD *)(v343 + 48) = v108;
            *(_BYTE *)(v343 + 43) |= 0x20u;
          }
          v39 = (unsigned int)(v108 + v39);
        }
        if ( v765 != v767 )
        {
          v344 = v39;
          free(v765);
          v43 = (__int64)v754;
          v39 = v344;
        }
        *(_DWORD *)(v97 + 48) = v39;
        *(_BYTE *)(v97 + 43) |= 0x20u;
      }
      v62 += v39;
    }
    if ( v754[0] != v755 )
      free(v754[0]);
    *(_DWORD *)(v41 + 48) = v62;
    *(_BYTE *)(v41 + 43) |= 0x20u;
  }
  v63 = v62 & 0xFFFFFFFD;
  LODWORD(v771) = v63;
  v64 = *(_DWORD *)(v332 + 104);
  if ( !v64 )
  {
    ptr = nullptr;
    goto LABEL_228;
  }
  v65 = *(_QWORD *)(v332 + 88);
  v39 = v64 - 1;
  v66 = v39 & (37 * v63);
  v67 = (_QWORD *)(v65 + 16LL * v66);
  v68 = *(_DWORD *)v67;
  if ( v63 != *(_DWORD *)v67 )
  {
    v40 = 1;
    v116 = nullptr;
    if ( v68 != -1 )
    {
      while ( 1 )
      {
        if ( v68 == -2 && !v116 )
          v116 = v67;
        v43 = (unsigned int)(v40 + 1);
        v66 = v39 & (v40 + v66);
        v67 = (_QWORD *)(v65 + 16LL * v66);
        v68 = *(_DWORD *)v67;
        if ( v63 == *(_DWORD *)v67 )
          goto LABEL_114;
        if ( v68 == -1 )
          break;
        v40 = (unsigned int)v43;
      }
      if ( v116 )
        v67 = v116;
    }
    v46 = 3 * v64;
    ptr = v67;
    v117 = *(_DWORD *)(v332 + 96) + 1;
    if ( 4 * v117 < (unsigned int)v46 )
    {
      v43 = v332;
      v46 = v64 - *(_DWORD *)(v332 + 100) - v117;
      if ( (unsigned int)v46 > v64 >> 3 )
      {
LABEL_224:
        *(_DWORD *)(v332 + 96) = v117;
        if ( *(_DWORD *)v67 != -1 )
          --*(_DWORD *)(v332 + 100);
        v70 = v67 + 1;
        *(_DWORD *)v67 = v63;
        v67[1] = 0;
        goto LABEL_132;
      }
LABEL_229:
      sub_992320((__int64)v22, v64, v46, v43, v39, v40);
      sub_9919F0(v22, (int *)&v771, &ptr);
      v63 = (unsigned int)v771;
      v67 = ptr;
      v117 = *(_DWORD *)(v332 + 96) + 1;
      goto LABEL_224;
    }
LABEL_228:
    v64 *= 2;
    goto LABEL_229;
  }
LABEL_114:
  v69 = v67[1];
  v70 = v67 + 1;
  if ( !v69 )
  {
LABEL_132:
    *v70 = v41;
    *(_BYTE *)(v41 + 43) |= 0x40u;
    goto LABEL_81;
  }
  while ( 1 )
  {
    v767[0] = v69;
    v765 = v767;
    v766 = 0x1400000001LL;
    sub_992AC0((__int64 *)&v765);
    v771 = v773;
    v769 = 0x1400000000LL;
    v768 = v770;
    v773[0] = v41;
    v772 = 0x1400000001LL;
    sub_992AC0((__int64 *)&v771);
    v71 = (unsigned int)v772;
    v775 = 0x1400000000LL;
    ptr = v776;
    if ( (_DWORD)v772 )
    {
      while ( (_DWORD)v766
           && *(_DWORD *)((*((_QWORD *)v771 + v71 - 1) & 0xFFFFFFFFFFFFFFFCLL) + 44) == *(_DWORD *)((*((_QWORD *)v765 + (unsigned int)v766 - 1) & 0xFFFFFFFFFFFFFFFCLL)
                                                                                                  + 44) )
      {
        sub_992AC0((__int64 *)&v771);
        sub_992AC0((__int64 *)&v765);
        v71 = (unsigned int)v772;
        if ( !(_DWORD)v772 )
          goto LABEL_116;
      }
      if ( v771 != v773 )
        free(v771);
      goto LABEL_129;
    }
LABEL_116:
    if ( v771 != v773 )
      free(v771);
    if ( !(_DWORD)v766 )
      break;
LABEL_129:
    if ( v765 == v767 )
    {
      v69 = *(_QWORD *)(v69 + 32);
      if ( !v69 )
      {
LABEL_131:
        *(_QWORD *)(v67[1] + 24LL) = v41;
        *(_QWORD *)(v41 + 32) = v67[1];
        v70 = v67 + 1;
        goto LABEL_132;
      }
    }
    else
    {
      free(v765);
      v69 = *(_QWORD *)(v69 + 32);
      if ( !v69 )
        goto LABEL_131;
    }
  }
  if ( !*(_DWORD *)(v41 + 52) )
    sub_993690((void *)v41);
  if ( v765 != v767 )
    free(v765);
  v41 = v69;
LABEL_81:
  ++*(_DWORD *)(v41 + 52);
LABEL_82:
  v50 = v753;
  v753 = (_DWORD *)v41;
  if ( v50 )
  {
    v51 = v50[13]-- == 1;
    if ( v51 )
      sub_993690(v50);
  }
  if ( v21 )
  {
    v51 = v21[13]-- == 1;
    if ( v51 )
      sub_993690(v21);
  }
  v15 = (unsigned int)v761;
  v14 = (char *)s1;
  v52 = *((_QWORD *)s1 + (unsigned int)v761 - 1);
  v53 = (unsigned int)v761;
  while ( 2 )
  {
    while ( 2 )
    {
      v54 = (__int64 *)(8 * v15);
      v55 = v52 & 3;
      v56 = (__int64 *)&v14[8 * v15 - 8];
      v57 = v52 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v55 == 1 )
      {
        v58 = *(_QWORD *)(v57 + 16);
        if ( v58 )
        {
LABEL_92:
          v59 = v15 + 1;
          if ( v59 > HIDWORD(v761) )
          {
            sub_22134E0(&s1, v762, v59, 8);
            v14 = (char *)s1;
            v54 = (__int64 *)(8LL * (unsigned int)v761);
          }
          *(__int64 *)((char *)v54 + (_QWORD)v14) = v58;
          v14 = (char *)s1;
          LODWORD(v761) = v761 + 1;
          v15 = (unsigned int)v761;
          v53 = (unsigned int)v761;
          v54 = (__int64 *)(8LL * (unsigned int)v761);
        }
        else
        {
          *v56 = v52 | 3;
        }
LABEL_95:
        if ( !(_DWORD)v53 )
          goto LABEL_97;
        v52 = *(__int64 *)((char *)v54 + (_QWORD)v14 - 8);
        if ( (v52 & 3) == 1 )
          goto LABEL_97;
        continue;
      }
      break;
    }
    if ( (v52 & 3) == 0 )
    {
      v58 = *(_QWORD *)(v57 + 8);
      if ( v58 )
        goto LABEL_92;
      *v56 = v52 | 1;
      goto LABEL_95;
    }
    if ( v55 != 3 )
      return sub_99BD60(v55, v53, v15, v54, v56, v57);
    v53 = (unsigned int)(v53 - 1);
    LODWORD(v761) = v53;
    if ( !(_DWORD)v53 )
    {
      v15 = 0;
LABEL_97:
      v16 = v764[0];
      goto LABEL_38;
    }
    v15 = (unsigned int)v53;
    v54 = (__int64 *)&v14[8 * (unsigned int)v53 - 8];
    v60 = *v54;
    v55 = *v54 & 3;
    if ( (*v54 & 3) == 0 )
    {
      *v54 = v60 | 1;
      v16 = v764[0];
      goto LABEL_38;
    }
    if ( v55 == 1 )
    {
      v52 = v60 | 3;
      *v54 = v52;
      continue;
    }
    return sub_99BD60(v55, v53, v15, v54, v56, v57);
  }
}

