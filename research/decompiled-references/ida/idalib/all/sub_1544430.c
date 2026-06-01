__int64 __fastcall sub_1544430(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 *v4; // rdi
  bool v5; // zf
  unsigned __int16 v6; // si
  __int64 v7; // rbp
  unsigned int v8; // r13d
  int v9; // ebx
  _DWORD *v10; // rsi
  int v11; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r12d
  unsigned int v16; // r14d
  char v17; // r10
  __int64 v18; // r9
  __int16 v19; // ax
  int i; // ebx
  unsigned __int8 *v21; // rbp
  _QWORD *v22; // rdx
  __int64 v23; // rax
  void **v24; // r12
  __int64 v25; // rax
  void **v26; // r13
  void **v27; // rbp
  void **v28; // rdi
  void **v29; // rdi
  void **v30; // r13
  void **v31; // rbp
  unsigned __int8 *v32; // rbp
  _QWORD *v33; // rdx
  __int64 v34; // rax
  void **v35; // r13
  __int64 v36; // rax
  void **v37; // r12
  void **v38; // rbp
  void **v39; // rdi
  void **v40; // rdi
  void **v41; // r12
  void **v42; // rbp
  __int64 v43; // rbp
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rax
  char *v50; // rbp
  _BYTE *v51; // r14
  signed __int64 v52; // r13
  _QWORD *v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rax
  int v59; // r12d
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // r12
  void *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r13
  __int64 v69; // r12
  void *v70; // rdi
  unsigned __int8 *v71; // rbx
  _QWORD *v72; // rdx
  __int64 v73; // rax
  unsigned int v74; // ebx
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int8 *v77; // r14
  _BYTE *v78; // r13
  signed __int64 v79; // rdx
  signed __int64 v80; // r12
  _QWORD *v81; // rax
  _QWORD *v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  void **v86; // r12
  _BYTE *v87; // rdi
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // r13
  _DWORD *v91; // rsi
  __int16 v92; // ax
  __int64 v93; // rdi
  unsigned __int64 v94; // rax
  __int64 v95; // rax
  __int16 v96; // ax
  __int64 v97; // rdi
  unsigned __int64 v98; // rax
  __int64 v99; // rax
  int v100; // eax
  __m128i *v101; // r13
  unsigned int v102; // r12d
  unsigned __int64 v103; // rsi
  __int64 v104; // r8
  char v105; // r10
  __int64 v106; // rax
  __int64 v107; // rax
  char *v108; // r15
  void *v109; // rax
  __int64 v110; // rdi
  size_t v111; // rdx
  size_t v112; // r15
  unsigned __int64 v113; // rdx
  __int16 v114; // ax
  unsigned __int64 v115; // r8
  __int64 v116; // rax
  _QWORD *v117; // r9
  unsigned __int64 v118; // rdx
  __m128i *v119; // rax
  __int64 v120; // rdx
  unsigned __int64 v121; // rax
  size_t v122; // rdx
  char v123; // al
  __int64 v124; // rdx
  int v125; // eax
  unsigned __int8 *v126; // r12
  _BYTE *v127; // rsi
  __int64 v128; // r13
  _QWORD *v129; // rax
  _QWORD *v130; // rdx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  void **v134; // r13
  _BYTE *v135; // rdi
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  size_t *v140; // rbx
  size_t *v141; // r9
  size_t *v142; // rax
  __int64 v143; // r12
  size_t *v144; // rbp
  _BYTE *v145; // rsi
  signed __int64 v146; // r12
  __int64 (__fastcall *v147)(void **); // rbx
  _QWORD *v148; // rax
  void ***v149; // r12
  _BYTE *v150; // rsi
  signed __int64 v151; // rcx
  __int64 (__fastcall *v152)(void ***, void **, _BYTE *); // rbx
  _QWORD *v153; // rax
  __int64 (*v154)(void); // rax
  signed __int64 v155; // rcx
  __int64 (__fastcall *v156)(void **, __int64, __int64, void *, void *); // rbx
  __int64 v157; // rax
  _BYTE *v158; // rsi
  _QWORD *v159; // rax
  __int64 (__fastcall *v160)(void **, _QWORD, _QWORD); // r8
  __int64 v161; // rax
  void *v162; // rax
  __int64 (__fastcall *v163)(_QWORD *, __int64, void *, _BYTE *); // rax
  _BYTE *v164; // rsi
  signed __int64 v165; // rbx
  _QWORD *v166; // rax
  __int64 (__fastcall *v167)(void **, __int64, __int64, void *, void ***); // rax
  void (*v168)(); // rax
  __int64 v169; // rbp
  __int64 v170; // rax
  void **v171; // r15
  void **v172; // rbx
  __int64 v173; // rax
  void **v174; // r15
  void **v175; // rbx
  void **v176; // rbx
  void **v177; // r14
  char *v178; // rbx
  char *v179; // r14
  char *v180; // rdi
  void (__fastcall *v181)(_QWORD *); // rax
  _QWORD *v182; // rdi
  _QWORD *v183; // rdi
  _QWORD *v184; // rdi
  _QWORD *v185; // rdi
  void **v186; // rbx
  void **v187; // r14
  void **v188; // rbx
  void **v189; // r14
  void (__fastcall *v190)(void ***); // rax
  void **v191; // rbx
  void **v192; // r14
  __int64 v193; // rdx
  int v194; // eax
  unsigned __int16 v195; // dx
  __int16 v196; // r12
  __int64 *v197; // rdi
  char v198; // r10
  int v199; // eax
  __int64 v200; // rax
  char v201; // al
  __int64 v202; // rax
  __int64 v203; // rbp
  __int64 v204; // r12
  __int64 v205; // rbp
  void *v206; // rdi
  __int64 v207; // rax
  __int64 v208; // rbp
  __int64 v209; // rdx
  __int64 v210; // rbp
  __int64 v211; // rbx
  void *v212; // rdi
  size_t v213; // rdx
  _BYTE *v214; // rax
  _QWORD *v215; // rcx
  void *v216; // r8
  void *v217; // rax
  unsigned __int16 v218; // cx
  __int64 *v219; // rdi
  __int64 v220; // rax
  int v221; // r12d
  unsigned __int64 v222; // rdx
  signed __int64 v223; // r13
  unsigned __int64 v224; // rax
  int v225; // eax
  __int64 v226; // rdx
  int v227; // eax
  unsigned __int64 v228; // rsi
  __int64 v229; // rax
  unsigned __int64 v230; // rax
  __int64 *v231; // rdi
  __int64 v232; // rcx
  _DWORD *v233; // rax
  _DWORD *v234; // rdx
  __int64 v235; // rax
  __int64 v236; // rdx
  __int64 v237; // rax
  __int64 v238; // rdx
  unsigned __int8 *v239; // r15
  char *v240; // r12
  __int64 v241; // rbp
  __int64 v242; // rbx
  void *v243; // rdi
  unsigned int v244; // eax
  unsigned __int16 v245; // si
  _WORD *v246; // rdx
  unsigned int v247; // eax
  unsigned __int16 v248; // si
  _WORD *v249; // rcx
  __int64 v250; // rax
  int v251; // ebp
  unsigned __int64 v252; // r8
  char *v253; // rax
  char *j; // rdx
  __int64 v255; // rax
  char *v256; // rdi
  char *v257; // rax
  unsigned __int64 v258; // r8
  __int64 v259; // r11
  __int64 v260; // rbp
  void ***v261; // r13
  __int64 v262; // r12
  __int64 *v263; // rax
  __int64 v264; // rcx
  __int64 v265; // rdx
  _QWORD *v266; // rax
  __int64 v267; // rbx
  __int64 *v268; // rdi
  __int64 v269; // rcx
  _DWORD *v270; // rax
  _DWORD *v271; // rdx
  unsigned int v272; // [rsp+0h] [rbp-1288h]
  char *v273; // [rsp+0h] [rbp-1288h]
  size_t *v274; // [rsp+0h] [rbp-1288h]
  size_t *v275; // [rsp+0h] [rbp-1288h]
  _QWORD *v276; // [rsp+0h] [rbp-1288h]
  size_t *v277; // [rsp+0h] [rbp-1288h]
  _BYTE *v278; // [rsp+0h] [rbp-1288h]
  __int64 v279; // [rsp+0h] [rbp-1288h]
  unsigned __int16 v280; // [rsp+8h] [rbp-1280h]
  int v281; // [rsp+10h] [rbp-1278h]
  char v282; // [rsp+10h] [rbp-1278h]
  char v283; // [rsp+10h] [rbp-1278h]
  _QWORD *v284; // [rsp+10h] [rbp-1278h]
  char v285; // [rsp+28h] [rbp-1260h]
  _QWORD *v286; // [rsp+30h] [rbp-1258h]
  __int64 v287; // [rsp+30h] [rbp-1258h]
  unsigned int v288; // [rsp+38h] [rbp-1250h]
  unsigned __int64 v289; // [rsp+38h] [rbp-1250h]
  __int64 v290; // [rsp+38h] [rbp-1250h]
  unsigned __int8 v291; // [rsp+38h] [rbp-1250h]
  unsigned __int8 v292; // [rsp+38h] [rbp-1250h]
  unsigned __int8 v293; // [rsp+38h] [rbp-1250h]
  char v294; // [rsp+38h] [rbp-1250h]
  char v295; // [rsp+38h] [rbp-1250h]
  char v296; // [rsp+38h] [rbp-1250h]
  char v297; // [rsp+40h] [rbp-1248h]
  char v298; // [rsp+40h] [rbp-1248h]
  unsigned __int8 v299; // [rsp+40h] [rbp-1248h]
  _QWORD *v300; // [rsp+40h] [rbp-1248h]
  __int64 v301; // [rsp+40h] [rbp-1248h]
  unsigned __int8 v302; // [rsp+40h] [rbp-1248h]
  char v303; // [rsp+40h] [rbp-1248h]
  char v304; // [rsp+48h] [rbp-1240h]
  int v305; // [rsp+48h] [rbp-1240h]
  unsigned __int8 v306; // [rsp+48h] [rbp-1240h]
  __int64 v307; // [rsp+48h] [rbp-1240h]
  char v308; // [rsp+48h] [rbp-1240h]
  _QWORD *v309; // [rsp+48h] [rbp-1240h]
  char v310; // [rsp+48h] [rbp-1240h]
  char v311; // [rsp+50h] [rbp-1238h]
  char v312; // [rsp+50h] [rbp-1238h]
  char v313; // [rsp+50h] [rbp-1238h]
  char v314; // [rsp+50h] [rbp-1238h]
  char v315; // [rsp+50h] [rbp-1238h]
  unsigned __int64 v316; // [rsp+58h] [rbp-1230h]
  void *v317; // [rsp+58h] [rbp-1230h]
  int v318; // [rsp+58h] [rbp-1230h]
  void *v319; // [rsp+58h] [rbp-1230h]
  _QWORD *v320; // [rsp+58h] [rbp-1230h]
  size_t *v321; // [rsp+58h] [rbp-1230h]
  void *v322; // [rsp+58h] [rbp-1230h]
  void *v323; // [rsp+58h] [rbp-1230h]
  void *v324; // [rsp+58h] [rbp-1230h]
  int v325; // [rsp+60h] [rbp-1228h]
  void *v326; // [rsp+60h] [rbp-1228h]
  char v327; // [rsp+60h] [rbp-1228h]
  char v328; // [rsp+60h] [rbp-1228h]
  __int64 v329; // [rsp+68h] [rbp-1220h]
  char v330; // [rsp+68h] [rbp-1220h]
  char *v331; // [rsp+70h] [rbp-1218h]
  void *v332; // [rsp+70h] [rbp-1218h]
  _BYTE *v333; // [rsp+70h] [rbp-1218h]
  __int64 v334; // [rsp+78h] [rbp-1210h]
  char v335; // [rsp+80h] [rbp-1208h]
  unsigned __int64 v336; // [rsp+80h] [rbp-1208h]
  unsigned __int64 v337; // [rsp+80h] [rbp-1208h]
  __int64 v338; // [rsp+90h] [rbp-11F8h]
  void *v339; // [rsp+98h] [rbp-11F0h]
  signed __int64 v340; // [rsp+98h] [rbp-11F0h]
  signed __int64 v341; // [rsp+98h] [rbp-11F0h]
  __int64 v342; // [rsp+A0h] [rbp-11E8h]
  __int64 v343; // [rsp+A8h] [rbp-11E0h]
  unsigned int v344; // [rsp+BCh] [rbp-11CCh] BYREF
  int v345; // [rsp+C4h] [rbp-11C4h] BYREF
  void *v346; // [rsp+C8h] [rbp-11C0h] BYREF
  void *ptr; // [rsp+D0h] [rbp-11B8h] BYREF
  __int64 v348; // [rsp+D8h] [rbp-11B0h]
  _BYTE v349[16]; // [rsp+E0h] [rbp-11A8h] BYREF
  void *v350; // [rsp+F0h] [rbp-1198h] BYREF
  size_t v351; // [rsp+F8h] [rbp-1190h]
  _BYTE v352[16]; // [rsp+100h] [rbp-1188h] BYREF
  void *v353; // [rsp+110h] [rbp-1178h] BYREF
  void *v354; // [rsp+118h] [rbp-1170h]
  _QWORD v355[2]; // [rsp+120h] [rbp-1168h] BYREF
  void *src; // [rsp+130h] [rbp-1158h]
  size_t n; // [rsp+138h] [rbp-1150h]
  _QWORD v358[2]; // [rsp+140h] [rbp-1148h] BYREF
  void *v359; // [rsp+150h] [rbp-1138h] BYREF
  signed __int64 v360; // [rsp+158h] [rbp-1130h]
  _QWORD v361[2]; // [rsp+160h] [rbp-1128h] BYREF
  void *v362; // [rsp+170h] [rbp-1118h] BYREF
  size_t v363; // [rsp+178h] [rbp-1110h]
  _QWORD v364[2]; // [rsp+180h] [rbp-1108h] BYREF
  void *v365; // [rsp+190h] [rbp-10F8h] BYREF
  signed __int64 v366; // [rsp+198h] [rbp-10F0h]
  _QWORD dest[2]; // [rsp+1A0h] [rbp-10E8h] BYREF
  void *v368; // [rsp+1B0h] [rbp-10D8h] BYREF
  __int64 v369; // [rsp+1B8h] [rbp-10D0h]
  _QWORD v370[2]; // [rsp+1C0h] [rbp-10C8h] BYREF
  void *v371; // [rsp+1D0h] [rbp-10B8h] BYREF
  __int64 v372; // [rsp+1D8h] [rbp-10B0h]
  _BYTE v373[32]; // [rsp+1E0h] [rbp-10A8h] BYREF
  void *v374; // [rsp+200h] [rbp-1088h] BYREF
  __int64 v375; // [rsp+208h] [rbp-1080h]
  _BYTE v376[32]; // [rsp+210h] [rbp-1078h] BYREF
  void *v377; // [rsp+230h] [rbp-1058h] BYREF
  char *v378; // [rsp+238h] [rbp-1050h]
  char *v379; // [rsp+240h] [rbp-1048h]
  void *v380; // [rsp+248h] [rbp-1040h]
  void **v381; // [rsp+250h] [rbp-1038h]
  __int64 v382; // [rsp+258h] [rbp-1030h]
  void (__fastcall *v383)(_QWORD *, __int64); // [rsp+260h] [rbp-1028h]
  void **v384; // [rsp+268h] [rbp-1020h]
  __int64 v385; // [rsp+270h] [rbp-1018h] BYREF
  unsigned int *v386; // [rsp+278h] [rbp-1010h]
  void **p_ptr; // [rsp+280h] [rbp-1008h]
  void **v388; // [rsp+288h] [rbp-1000h]
  void **v389; // [rsp+290h] [rbp-FF8h]
  void **v390; // [rsp+298h] [rbp-FF0h]
  void **v391; // [rsp+2A0h] [rbp-FE8h]
  void **v392; // [rsp+2A8h] [rbp-FE0h]
  int *v393; // [rsp+2B0h] [rbp-FD8h]
  void *v394; // [rsp+2C0h] [rbp-FC8h] BYREF
  signed __int64 v395; // [rsp+2C8h] [rbp-FC0h]
  _QWORD v396[8]; // [rsp+2D0h] [rbp-FB8h] BYREF
  void *v397; // [rsp+310h] [rbp-F78h] BYREF
  __int64 v398; // [rsp+318h] [rbp-F70h]
  _BYTE v399[64]; // [rsp+320h] [rbp-F68h] BYREF
  void *v400; // [rsp+360h] [rbp-F28h] BYREF
  __int64 v401; // [rsp+368h] [rbp-F20h]
  _BYTE v402[64]; // [rsp+370h] [rbp-F18h] BYREF
  void *v403; // [rsp+3B0h] [rbp-ED8h] BYREF
  __int64 v404; // [rsp+3B8h] [rbp-ED0h]
  _QWORD v405[8]; // [rsp+3C0h] [rbp-EC8h] BYREF
  void *v406; // [rsp+400h] [rbp-E88h] BYREF
  __int64 v407; // [rsp+408h] [rbp-E80h]
  _BYTE v408[96]; // [rsp+410h] [rbp-E78h] BYREF
  void *v409; // [rsp+470h] [rbp-E18h] BYREF
  __int64 v410; // [rsp+478h] [rbp-E10h]
  _BYTE v411[128]; // [rsp+480h] [rbp-E08h] BYREF
  void *v412; // [rsp+500h] [rbp-D88h] BYREF
  __int64 v413; // [rsp+508h] [rbp-D80h]
  _QWORD v414[16]; // [rsp+510h] [rbp-D78h] BYREF
  _BYTE v415[32]; // [rsp+590h] [rbp-CF8h] BYREF
  void *v416; // [rsp+5B0h] [rbp-CD8h]
  __int64 v417; // [rsp+5C0h] [rbp-CC8h] BYREF
  void *v418; // [rsp+5D0h] [rbp-CB8h]
  __int64 v419; // [rsp+5E0h] [rbp-CA8h] BYREF
  void *v420; // [rsp+5F0h] [rbp-C98h]
  __int64 v421; // [rsp+600h] [rbp-C88h] BYREF
  void *v422; // [rsp+610h] [rbp-C78h]
  __int64 v423; // [rsp+620h] [rbp-C68h] BYREF
  void *v424; // [rsp+630h] [rbp-C58h]
  __int64 v425; // [rsp+640h] [rbp-C48h] BYREF
  void *v426; // [rsp+650h] [rbp-C38h]
  __int64 v427; // [rsp+660h] [rbp-C28h] BYREF
  void *v428; // [rsp+670h] [rbp-C18h]
  void **v429; // [rsp+678h] [rbp-C10h]
  void *v430; // [rsp+688h] [rbp-C00h]
  void **v431; // [rsp+690h] [rbp-BF8h]
  void *v432; // [rsp+6B0h] [rbp-BD8h] BYREF
  __m128i si128; // [rsp+6B8h] [rbp-BD0h]
  _BYTE v434[520]; // [rsp+6C8h] [rbp-BC0h] BYREF
  void *v435; // [rsp+8D0h] [rbp-9B8h] BYREF
  __m128i v436; // [rsp+8D8h] [rbp-9B0h] BYREF
  __int64 v437; // [rsp+8E8h] [rbp-9A0h] BYREF
  void *v438; // [rsp+8F0h] [rbp-998h]
  _BYTE v439[16]; // [rsp+900h] [rbp-988h] BYREF
  __int16 v440; // [rsp+910h] [rbp-978h]
  __int64 v441; // [rsp+978h] [rbp-910h]

  v2 = a1;
  v4 = *(__int64 **)(a1 + 8);
  v5 = *(_WORD *)(v2 + 32) == 24;
  v344 = a2;
  v345 = a2;
  v6 = *(_WORD *)(v2 + 92);
  v7 = v4[11];
  v406 = v408;
  v407 = 0x400000000LL;
  v280 = v6;
  ptr = v349;
  v348 = 0x400000000LL;
  if ( v5 )
  {
    *(_WORD *)(v2 + 92) = v6 + 1;
    *(_DWORD *)(v2 + 40) = *(_DWORD *)(v2 + 16);
    sub_14634E0(v4, (int *)(v2 + 16));
    v58 = (unsigned int)v348;
    v59 = *(_DWORD *)(v2 + 40);
    v60 = (unsigned int)v348 + 1LL;
    v345 = v59;
    if ( v60 > HIDWORD(v348) )
    {
      sub_2237220(&ptr, v349, v60, 4);
      v58 = (unsigned int)v348;
    }
    v285 = 1;
    v9 = 0;
    v14 = 0;
    v281 = 0;
    *((_DWORD *)ptr + v58) = v59;
    v272 = 1;
    LODWORD(v348) = v348 + 1;
    goto LABEL_13;
  }
  v8 = a2 & 0x7FFFFFFF;
  if ( (a2 & 0x7FFFFFFFu) < *(_DWORD *)(v7 + 476) || v8 >= *(_DWORD *)(v7 + 480) )
  {
    v45 = sub_101D590(v7, v8);
    LOBYTE(v435) = 0;
    v9 = v45;
    if ( (unsigned int)(v45 + 1) <= 1 )
      goto LABEL_67;
  }
  else
  {
    v9 = *(_DWORD *)(v7 + 472);
    LOBYTE(v435) = 0;
    if ( (unsigned int)(v9 + 1) <= 1 )
      goto LABEL_67;
  }
  if ( v9 >= 0 )
  {
    v10 = (_DWORD *)(*(_QWORD *)(v7 + 184) + 24LL * (unsigned int)v9);
    goto LABEL_7;
  }
  v115 = (unsigned int)(-2 - v9);
  v116 = *(_QWORD *)(*(_QWORD *)(v7 + 320) + 8LL * ((unsigned int)(-2 - v9) >> 6));
  if ( !_bittest64(&v116, v115) )
  {
    v10 = (_DWORD *)sub_101F930(v7, v115, &v435);
    v123 = (char)v435;
    goto LABEL_225;
  }
  v117 = (_QWORD *)(*(_QWORD *)(v7 + 272) + 8 * ((unsigned __int64)(int)v115 >> 5));
  if ( !*v117 )
  {
    v231 = (__int64 *)(*(_QWORD *)(v7 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v232 = *v231;
    v231[10] += 768;
    v233 = (_DWORD *)((v232 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v231[1] >= (unsigned __int64)(v233 + 192) && v232 )
    {
      *v231 = (__int64)(v233 + 192);
    }
    else
    {
      v284 = v117;
      v233 = (_DWORD *)sub_986170((__int64)v231, 768, 768, 3, v115, (__int64)v117);
      v117 = v284;
      LOBYTE(v115) = -2 - v9;
    }
    *v117 = v233;
    v234 = v233 + 192;
    do
    {
      *v233 = 0;
      v233 += 6;
      *((_OWORD *)v233 - 1) = 0;
      *((_QWORD *)v233 - 1) = 0;
    }
    while ( v233 != v234 );
    v123 = (char)v435;
    v10 = (_DWORD *)(*v117 + 24 * (v115 & 0x1F));
LABEL_225:
    if ( v123 )
      goto LABEL_67;
    goto LABEL_7;
  }
  v10 = (_DWORD *)(*v117 + 24LL * ((-2 - (_BYTE)v9) & 0x1F));
LABEL_7:
  if ( v10 )
  {
    if ( a2 < 0 )
    {
      v121 = sub_1021390(v7, v10);
      v9 = v121;
      v11 = HIDWORD(v121);
    }
    else
    {
      v11 = v8 - (*v10 & 0x7FFFFFFF);
    }
    goto LABEL_10;
  }
LABEL_67:
  v11 = 0;
  v9 = 0;
LABEL_10:
  v281 = sub_1022630(v7, v9, v11, nullptr);
  v12 = (unsigned int)v348;
  v13 = (unsigned int)v348 + 1LL;
  if ( v13 > HIDWORD(v348) )
  {
    sub_2237220(&ptr, v349, v13, 4);
    v12 = (unsigned int)v348;
  }
  v285 = 0;
  v14 = 1;
  v272 = 0;
  *((_DWORD *)ptr + v12) = 0;
  LODWORD(v348) = v348 + 1;
LABEL_13:
  v15 = *(_DWORD *)(v2 + 16);
  v16 = v272;
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    v19 = *(_WORD *)(v2 + 32);
    if ( v19 == 1 || v19 == 460 || (unsigned __int16)(v19 - 456) <= 2u )
      break;
    if ( (_BYTE)v18 )
      goto LABEL_146;
    if ( v19 == 24 )
    {
      v302 = v14;
      v294 = *(_BYTE *)(v2 + 34) & 1;
      sub_141B840((__int64)&v406, (const __m128i *)(v2 + 16));
      if ( *(_WORD *)(v2 + 32) == 24 )
      {
        ++*(_WORD *)(v2 + 92);
        goto LABEL_470;
      }
      v218 = *(_WORD *)(v2 + 92);
      if ( !v218 )
      {
LABEL_470:
        v219 = *(__int64 **)(v2 + 8);
        *(_DWORD *)(v2 + 40) = *(_DWORD *)(v2 + 16);
        sub_14634E0(v219, (int *)(v2 + 16));
        v220 = (unsigned int)v348;
        v221 = *(_DWORD *)(v2 + 40);
        ++v272;
        v222 = (unsigned int)v348 + 1LL;
        v14 = v302;
        v18 = 0;
        v345 = v221;
        v17 = v294;
        if ( v222 > HIDWORD(v348) )
        {
          sub_2237220(&ptr, v349, v222, 4);
          v220 = (unsigned int)v348;
          v17 = v294;
          v18 = 0;
          v14 = v302;
        }
        *((_DWORD *)ptr + v220) = v221;
        v15 = *(_DWORD *)(v2 + 16);
        LODWORD(v348) = v348 + 1;
        goto LABEL_206;
      }
      v244 = *(_DWORD *)(v2 + 2792);
      if ( !v244 )
      {
LABEL_535:
        *(_WORD *)(v2 + 92) = v218 - 1;
        goto LABEL_470;
      }
      v245 = *(_WORD *)(v2 + 88);
      v246 = (_WORD *)(*(_QWORD *)(v2 + 2784) + 24LL * v244 - 24);
      while ( 2 )
      {
        if ( v245 == v246[7] )
        {
          if ( *((_DWORD *)v246 + 4) != *(_DWORD *)(v2 + 90) )
          {
LABEL_533:
            if ( *(_WORD *)(v2 + 90) <= v246[8] && v218 <= v246[9] )
              goto LABEL_535;
          }
        }
        else if ( v245 <= v246[7] )
        {
          goto LABEL_533;
        }
        --v244;
        v246 -= 12;
        *(_DWORD *)(v2 + 2792) = v244;
        if ( !v244 )
          goto LABEL_535;
        continue;
      }
    }
    if ( v19 == 63 )
    {
      if ( (_BYTE)v14 )
        goto LABEL_414;
      v224 = sub_10214C0(v7, v15);
      v9 = v224;
      v225 = sub_1022630(v7, v224, SHIDWORD(v224), nullptr);
      v345 = v15;
      LOBYTE(v14) = 0;
      v281 = v225;
LABEL_415:
      v292 = v14;
      sub_14634E0(*(__int64 **)(v2 + 8), (int *)(v2 + 16));
      v18 = 1;
      v14 = v292;
LABEL_205:
      v15 = *(_DWORD *)(v2 + 16);
      v17 = 0;
      goto LABEL_206;
    }
    if ( (_BYTE)v14 )
    {
LABEL_146:
      v288 = v15 & 0x7FFFFFFF;
      if ( (v15 & 0x7FFFFFFFu) < *(_DWORD *)(v7 + 476) || (v15 & 0x7FFFFFFFu) >= *(_DWORD *)(v7 + 480) )
      {
        v312 = v17;
        v306 = v18;
        v299 = v14;
        v89 = sub_101D590(v7, v288);
        v17 = v312;
        v18 = v306;
        v14 = v299;
      }
      else
      {
        v89 = *(_DWORD *)(v7 + 472);
      }
      v90 = (unsigned int)v89;
      LOBYTE(v435) = 0;
      if ( (unsigned int)(v89 + 1) <= 1 )
        goto LABEL_427;
      if ( v89 >= 0 )
      {
        v91 = (_DWORD *)(*(_QWORD *)(v7 + 184) + 24LL * (unsigned int)v89);
        goto LABEL_152;
      }
      v228 = (unsigned int)(-2 - v89);
      v229 = *(_QWORD *)(*(_QWORD *)(v7 + 320) + 8LL * ((unsigned int)v228 >> 6));
      if ( _bittest64(&v229, v228) )
      {
        v309 = (_QWORD *)(*(_QWORD *)(v7 + 272) + 8 * ((unsigned __int64)(int)v228 >> 5));
        if ( *v309 )
        {
          v91 = (_DWORD *)(*v309 + 24LL * ((-2 - (_BYTE)v90) & 0x1F));
LABEL_152:
          if ( v91 )
          {
            if ( v15 < 0 )
            {
              v314 = v17;
              v310 = v18;
              v303 = v14;
              v230 = sub_1021390(v7, v91);
              v17 = v314;
              LOBYTE(v18) = v310;
              v90 = (unsigned int)v230;
              LOBYTE(v14) = v303;
              v289 = HIDWORD(v230);
            }
            else
            {
              LODWORD(v289) = v288 - (*v91 & 0x7FFFFFFF);
            }
LABEL_155:
            if ( v9 == (_DWORD)v90
              && (v311 = v17,
                  v304 = v18,
                  v297 = v14,
                  v316 = (unsigned int)v9 | v316 & 0xFFFFFFFF00000000LL,
                  v48 = sub_1022630(v7, v316, v289, nullptr),
                  LOBYTE(v14) = v297,
                  v17 = v311,
                  v48 == v281) )
            {
              if ( v304 )
                goto LABEL_414;
              if ( *(_WORD *)(v2 + 32) == 25 && !v272 )
                goto LABEL_84;
            }
            else
            {
              v92 = *(_WORD *)(v2 + 32);
              if ( (_BYTE)v14 )
              {
                if ( v92 != 126 )
                  break;
                v93 = *(_QWORD *)(v2 + 8);
                v94 = *(_QWORD *)(v93 + 2944);
                if ( *(unsigned int *)(v93 + 2912) <= v94 )
                {
                  v282 = v14;
                  v95 = sub_14180A0(v93, 1u);
                  LOBYTE(v14) = v282;
                }
                else
                {
                  v95 = *(_QWORD *)(v93 + 2904) + 24 * v94;
                }
                v96 = *(_WORD *)(v95 + 16);
                if ( v96 == 22 || v96 == 109 || v96 == 157 || v96 == 90 )
                  break;
              }
              else if ( v92 != 126 )
              {
                if ( *(_WORD *)(v2 + 32) == 63 )
                {
                  v9 = v90;
                  v199 = sub_1022630(v7, v90, v289, nullptr);
                  LOBYTE(v14) = 0;
                  v281 = v199;
LABEL_414:
                  v345 = v15;
                  goto LABEL_415;
                }
                goto LABEL_168;
              }
              v97 = *(_QWORD *)(v2 + 8);
              v98 = *(_QWORD *)(v97 + 2944);
              if ( *(unsigned int *)(v97 + 2912) <= v98 )
              {
                v283 = v14;
                v99 = sub_14180A0(v97, 1u);
                LOBYTE(v14) = v283;
              }
              else
              {
                v99 = *(_QWORD *)(v97 + 2904) + 24 * v98;
              }
              v298 = v14;
              if ( *(_WORD *)(v99 + 16) == 24 )
                break;
              v316 = v90 | v316 & 0xFFFFFFFF00000000LL;
              v100 = sub_1022630(v7, v90, v289, nullptr);
              LOBYTE(v14) = v298;
              v281 = v100;
              v17 = *(_BYTE *)(v2 + 34) & 1;
            }
LABEL_168:
            v101 = (__m128i *)(v2 + 16);
            if ( !v272 )
              goto LABEL_201;
            v19 = *(_WORD *)(v2 + 32);
            goto LABEL_200;
          }
LABEL_427:
          LODWORD(v289) = 0;
          v90 = 0;
          goto LABEL_155;
        }
        v268 = (__int64 *)(*(_QWORD *)(v7 + 288) & 0xFFFFFFFFFFFFFFF8LL);
        v269 = *v268;
        v268[10] += 768;
        v270 = (_DWORD *)((v269 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v268[1] >= (unsigned __int64)(v270 + 192) && v269 )
        {
          *v268 = (__int64)(v270 + 192);
        }
        else
        {
          v330 = v17;
          v328 = v18;
          v315 = v14;
          v270 = (_DWORD *)sub_986170((__int64)v268, 768, 768, 3, v14, v18);
          v17 = v330;
          LOBYTE(v18) = v328;
          LOBYTE(v14) = v315;
        }
        v271 = v270 + 192;
        *v309 = v270;
        do
        {
          *v270 = 0;
          v270 += 6;
          *((_OWORD *)v270 - 1) = 0;
          *((_QWORD *)v270 - 1) = 0;
        }
        while ( v270 != v271 );
        v201 = (char)v435;
        v91 = (_DWORD *)(*v309 + 24LL * ((-2 - (_BYTE)v90) & 0x1F));
      }
      else
      {
        v327 = v17;
        v313 = v18;
        v308 = v14;
        v200 = sub_101F930(v7, v228, &v435);
        LOBYTE(v14) = v308;
        LOBYTE(v18) = v313;
        v91 = (_DWORD *)v200;
        v17 = v327;
        v201 = (char)v435;
      }
      if ( !v201 )
        goto LABEL_152;
      goto LABEL_427;
    }
    v101 = (__m128i *)(v2 + 16);
    if ( !v272 )
      goto LABEL_201;
LABEL_200:
    if ( v19 != 25 || (v195 = *(_WORD *)(v2 + 92), v195 != v272 + v280) )
    {
LABEL_201:
      v345 = v15;
      if ( v17 )
        *(_WORD *)(v2 + 34) |= 1u;
      v118 = (unsigned int)v407 + 1LL;
      v119 = (__m128i *)((char *)v406 + 24 * (unsigned int)v407);
      if ( v118 > HIDWORD(v407) )
      {
        v295 = v14;
        if ( v406 > v101 || v119 <= v101 )
        {
          sub_2237220(&v406, v408, v118, 24);
          LOBYTE(v14) = v295;
          v119 = (__m128i *)((char *)v406 + 24 * (unsigned int)v407);
        }
        else
        {
          v223 = (char *)v101 - (_BYTE *)v406;
          sub_2237220(&v406, v408, v118, 24);
          LOBYTE(v14) = v295;
          v101 = (__m128i *)((char *)v406 + v223);
          v119 = (__m128i *)((char *)v406 + 24 * (unsigned int)v407);
        }
      }
      v291 = v14;
      *v119 = _mm_loadu_si128(v101);
      v120 = v101[1].m128i_i64[0];
      LODWORD(v407) = v407 + 1;
      v119[1].m128i_i64[0] = v120;
      sub_149F520(v2, 0);
      v14 = v291;
      v18 = 0;
      goto LABEL_205;
    }
    v196 = *(_WORD *)(v2 + 34);
    if ( (v272 > 1 || (_BYTE)v14)
      && (v296 = v14,
          *(_WORD *)(v2 + 34) = v196 & 0xFFFD,
          sub_141B840((__int64)&v406, v101),
          v195 = *(_WORD *)(v2 + 92),
          LOBYTE(v14) = v296,
          *(_WORD *)(v2 + 32) == 24) )
    {
      *(_WORD *)(v2 + 92) = v195 + 1;
    }
    else if ( v195 )
    {
      v247 = *(_DWORD *)(v2 + 2792);
      if ( !v247 )
      {
LABEL_551:
        *(_WORD *)(v2 + 92) = v195 - 1;
        goto LABEL_420;
      }
      v248 = *(_WORD *)(v2 + 88);
      v249 = (_WORD *)(*(_QWORD *)(v2 + 2784) + 24LL * v247 - 24);
      while ( 2 )
      {
        if ( v248 == v249[7] )
        {
          if ( *((_DWORD *)v249 + 4) != *(_DWORD *)(v2 + 90) )
          {
LABEL_549:
            if ( *(_WORD *)(v2 + 90) <= v249[8] && v249[9] >= v195 )
              goto LABEL_551;
          }
        }
        else if ( v248 <= v249[7] )
        {
          goto LABEL_549;
        }
        --v247;
        v249 -= 12;
        *(_DWORD *)(v2 + 2792) = v247;
        if ( !v247 )
          goto LABEL_551;
        continue;
      }
    }
LABEL_420:
    v197 = *(__int64 **)(v2 + 8);
    v293 = v14;
    *(_DWORD *)(v2 + 40) = *(_DWORD *)(v2 + 16);
    sub_14634E0(v197, v101->m128i_i32);
    v5 = v272-- == 1;
    v14 = v293;
    v345 = *(_DWORD *)(v2 + 40);
    LOBYTE(v18) = v285 & v5;
    if ( ((unsigned __int8)v285 & v5) != 0 )
      goto LABEL_84;
    v198 = v196;
    LODWORD(v348) = v348 - 1;
    v15 = *(_DWORD *)(v2 + 16);
    v17 = v198 & 1;
LABEL_206:
    ++v16;
  }
  if ( v272 && *(_WORD *)(v2 + 92) != v280 )
  {
    for ( i = 0; i != v272; ++i )
    {
      sub_1564840(&v435, v2, v2 + 16, 14);
      v21 = (unsigned __int8 *)v435;
      if ( !v435 )
      {
        v54 = v436.m128i_i64[0];
        v55 = *(_DWORD *)(v436.m128i_i64[0] + 14976);
        if ( v55 )
        {
          v61 = (unsigned int)(v55 - 1);
          *(_DWORD *)(v436.m128i_i64[0] + 14976) = v61;
          v21 = *(unsigned __int8 **)(v54 + 8 * v61 + 14848);
          v62 = *((unsigned int *)v21 + 134);
          *v21 = 0;
          v63 = *((_QWORD *)v21 + 66);
          *((_DWORD *)v21 + 106) = 0;
          v64 = v63 + (v62 << 6);
          while ( v63 != v64 )
          {
            while ( 1 )
            {
              v64 -= 64;
              v65 = *(void **)(v64 + 24);
              if ( v65 == (void *)(v64 + 40) )
                break;
              operator delete(v65);
              if ( v63 == v64 )
                goto LABEL_104;
            }
          }
LABEL_104:
          *((_DWORD *)v21 + 134) = 0;
        }
        else
        {
          v21 = (unsigned __int8 *)operator new(0x3A0u);
          *v21 = 0;
          *((_QWORD *)v21 + 12) = v21 + 112;
          *((_QWORD *)v21 + 16) = v21 + 144;
          *((_QWORD *)v21 + 20) = v21 + 176;
          *((_QWORD *)v21 + 24) = v21 + 208;
          *((_QWORD *)v21 + 28) = v21 + 240;
          *((_QWORD *)v21 + 32) = v21 + 272;
          *((_QWORD *)v21 + 36) = v21 + 304;
          *((_QWORD *)v21 + 40) = v21 + 336;
          *((_QWORD *)v21 + 44) = v21 + 368;
          *((_QWORD *)v21 + 48) = v21 + 400;
          *((_QWORD *)v21 + 52) = v21 + 432;
          *((_QWORD *)v21 + 13) = 0;
          v21[112] = 0;
          *((_QWORD *)v21 + 17) = 0;
          v21[144] = 0;
          *((_QWORD *)v21 + 21) = 0;
          v21[176] = 0;
          *((_QWORD *)v21 + 25) = 0;
          v21[208] = 0;
          *((_QWORD *)v21 + 29) = 0;
          v21[240] = 0;
          *((_QWORD *)v21 + 33) = 0;
          v21[272] = 0;
          *((_QWORD *)v21 + 37) = 0;
          v21[304] = 0;
          *((_QWORD *)v21 + 41) = 0;
          v21[336] = 0;
          *((_QWORD *)v21 + 45) = 0;
          v21[368] = 0;
          *((_QWORD *)v21 + 49) = 0;
          v21[400] = 0;
          *((_QWORD *)v21 + 53) = 0x800000000LL;
          *((_QWORD *)v21 + 66) = v21 + 544;
          *((_QWORD *)v21 + 67) = 0x600000000LL;
        }
        v435 = v21;
      }
      v21[*v21 + 1] = 4;
      v22 = v435;
      v23 = *(unsigned __int8 *)v435;
      *(_BYTE *)v435 = v23 + 1;
      v22[v23 + 2] = 25;
      if ( (_BYTE)v440 )
      {
        sub_FC7790(v436.m128i_i64[1], (__int64 *)&v435, SHIBYTE(v440));
        v436.m128i_i64[1] = 0;
        v440 = 0;
      }
      if ( v438 != v439 )
        operator delete(v438);
      v24 = (void **)v435;
      if ( v435 )
      {
        v25 = v436.m128i_i64[0];
        if ( v436.m128i_i64[0] )
        {
          if ( (unsigned __int64)v435 < v436.m128i_i64[0] || (unsigned __int64)v435 > v436.m128i_i64[0] + 14848 )
          {
            v26 = *((void ***)v435 + 66);
            v27 = &v26[8 * (unsigned __int64)*((unsigned int *)v435 + 134)];
            if ( v26 != v27 )
            {
              do
              {
                while ( 1 )
                {
                  v27 -= 8;
                  v28 = (void **)v27[3];
                  if ( v28 == v27 + 5 )
                    break;
                  operator delete(v28);
                  if ( v26 == v27 )
                    goto LABEL_30;
                }
              }
              while ( v26 != v27 );
LABEL_30:
              v27 = (void **)v24[66];
            }
            if ( v27 != v24 + 68 )
              free(v27);
            v29 = (void **)v24[52];
            v30 = v24 + 52;
            if ( v29 != v24 + 54 )
              free(v29);
            v31 = v24 + 12;
            do
            {
              while ( 1 )
              {
                v30 -= 4;
                if ( *v30 == v30 + 2 )
                  break;
                operator delete(*v30);
                if ( v30 == v31 )
                  goto LABEL_38;
              }
            }
            while ( v30 != v31 );
LABEL_38:
            operator delete(v24, 0x3A0u);
          }
          else
          {
            v47 = *(unsigned int *)(v436.m128i_i64[0] + 14976);
            *(_DWORD *)(v436.m128i_i64[0] + 14976) = v47 + 1;
            *(_QWORD *)(v25 + 8 * v47 + 14848) = v24;
          }
        }
      }
      sub_1564820(&v435, v2, *((unsigned int *)ptr + (unsigned int)v348 - 1), 109);
      v32 = (unsigned __int8 *)v435;
      if ( !v435 )
      {
        v56 = v436.m128i_i64[0];
        v57 = *(_DWORD *)(v436.m128i_i64[0] + 14976);
        if ( v57 )
        {
          v66 = (unsigned int)(v57 - 1);
          *(_DWORD *)(v436.m128i_i64[0] + 14976) = v66;
          v32 = *(unsigned __int8 **)(v56 + 8 * v66 + 14848);
          v67 = *((unsigned int *)v32 + 134);
          *v32 = 0;
          v68 = *((_QWORD *)v32 + 66);
          *((_DWORD *)v32 + 106) = 0;
          v69 = v68 + (v67 << 6);
          while ( v68 != v69 )
          {
            while ( 1 )
            {
              v69 -= 64;
              v70 = *(void **)(v69 + 24);
              if ( v70 == (void *)(v69 + 40) )
                break;
              operator delete(v70);
              if ( v68 == v69 )
                goto LABEL_109;
            }
          }
LABEL_109:
          *((_DWORD *)v32 + 134) = 0;
        }
        else
        {
          v32 = (unsigned __int8 *)operator new(0x3A0u);
          *v32 = 0;
          *((_QWORD *)v32 + 12) = v32 + 112;
          *((_QWORD *)v32 + 16) = v32 + 144;
          *((_QWORD *)v32 + 20) = v32 + 176;
          *((_QWORD *)v32 + 24) = v32 + 208;
          *((_QWORD *)v32 + 28) = v32 + 240;
          *((_QWORD *)v32 + 32) = v32 + 272;
          *((_QWORD *)v32 + 36) = v32 + 304;
          *((_QWORD *)v32 + 40) = v32 + 336;
          *((_QWORD *)v32 + 44) = v32 + 368;
          *((_QWORD *)v32 + 48) = v32 + 400;
          *((_QWORD *)v32 + 52) = v32 + 432;
          *((_QWORD *)v32 + 13) = 0;
          v32[112] = 0;
          *((_QWORD *)v32 + 17) = 0;
          v32[144] = 0;
          *((_QWORD *)v32 + 21) = 0;
          v32[176] = 0;
          *((_QWORD *)v32 + 25) = 0;
          v32[208] = 0;
          *((_QWORD *)v32 + 29) = 0;
          v32[240] = 0;
          *((_QWORD *)v32 + 33) = 0;
          v32[272] = 0;
          *((_QWORD *)v32 + 37) = 0;
          v32[304] = 0;
          *((_QWORD *)v32 + 41) = 0;
          v32[336] = 0;
          *((_QWORD *)v32 + 45) = 0;
          v32[368] = 0;
          *((_QWORD *)v32 + 49) = 0;
          v32[400] = 0;
          *((_QWORD *)v32 + 53) = 0x800000000LL;
          *((_QWORD *)v32 + 66) = v32 + 544;
          *((_QWORD *)v32 + 67) = 0x600000000LL;
        }
        v435 = v32;
      }
      v32[*v32 + 1] = 4;
      v33 = v435;
      v34 = *(unsigned __int8 *)v435;
      *(_BYTE *)v435 = v34 + 1;
      v33[v34 + 2] = 24;
      if ( (_BYTE)v440 )
      {
        sub_FC7790(v436.m128i_i64[1], (__int64 *)&v435, SHIBYTE(v440));
        v436.m128i_i64[1] = 0;
        v440 = 0;
      }
      if ( v438 != v439 )
        operator delete(v438);
      v35 = (void **)v435;
      if ( v435 )
      {
        v36 = v436.m128i_i64[0];
        if ( v436.m128i_i64[0] )
        {
          if ( (unsigned __int64)v435 < v436.m128i_i64[0] || (unsigned __int64)v435 > v436.m128i_i64[0] + 14848 )
          {
            v37 = *((void ***)v435 + 66);
            v38 = &v37[8 * (unsigned __int64)*((unsigned int *)v435 + 134)];
            if ( v37 != v38 )
            {
              do
              {
                while ( 1 )
                {
                  v38 -= 8;
                  v39 = (void **)v38[3];
                  if ( v39 == v38 + 5 )
                    break;
                  operator delete(v39);
                  if ( v37 == v38 )
                    goto LABEL_50;
                }
              }
              while ( v37 != v38 );
LABEL_50:
              v38 = (void **)v35[66];
            }
            if ( v38 != v35 + 68 )
              free(v38);
            v40 = (void **)v35[52];
            v41 = v35 + 52;
            if ( v40 != v35 + 54 )
              free(v40);
            v42 = v35 + 12;
            do
            {
              while ( 1 )
              {
                v41 -= 4;
                if ( *v41 == v41 + 2 )
                  break;
                operator delete(*v41);
                if ( v42 == v41 )
                  goto LABEL_58;
              }
            }
            while ( v42 != v41 );
LABEL_58:
            operator delete(v35, 0x3A0u);
          }
          else
          {
            v46 = *(unsigned int *)(v436.m128i_i64[0] + 14976);
            *(_DWORD *)(v436.m128i_i64[0] + 14976) = v46 + 1;
            *(_QWORD *)(v36 + 8 * v46 + 14848) = v35;
          }
        }
      }
      LODWORD(v348) = v348 - 1;
    }
    goto LABEL_60;
  }
LABEL_84:
  if ( !v16 )
  {
    sub_1564840(&v435, v2, v2 + 16, 14);
    v71 = (unsigned __int8 *)v435;
    if ( !v435 )
    {
      v124 = v436.m128i_i64[0];
      v125 = *(_DWORD *)(v436.m128i_i64[0] + 14976);
      if ( v125 )
      {
        v202 = (unsigned int)(v125 - 1);
        *(_DWORD *)(v436.m128i_i64[0] + 14976) = v202;
        v71 = *(unsigned __int8 **)(v124 + 8 * v202 + 14848);
        v203 = *((unsigned int *)v71 + 134);
        *v71 = 0;
        v204 = *((_QWORD *)v71 + 66);
        *((_DWORD *)v71 + 106) = 0;
        v205 = v204 + (v203 << 6);
        while ( v204 != v205 )
        {
          while ( 1 )
          {
            v205 -= 64;
            v206 = *(void **)(v205 + 24);
            if ( v206 == (void *)(v205 + 40) )
              break;
            operator delete(v206);
            if ( v204 == v205 )
              goto LABEL_436;
          }
        }
LABEL_436:
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
      v435 = v71;
    }
    v71[*v71 + 1] = 4;
    v72 = v435;
    v73 = *(unsigned __int8 *)v435;
    *(_BYTE *)v435 = v73 + 1;
    v72[v73 + 2] = 24;
    sub_AEA040((__int64)&v435);
LABEL_60:
    v43 = 1;
    goto LABEL_61;
  }
  v397 = v399;
  v398 = 0x400000000LL;
  v372 = 0x400000000LL;
  v401 = 0x400000000LL;
  v49 = *(_QWORD *)(v2 + 96);
  v371 = v373;
  v50 = *(char **)(*(_QWORD *)(v49 + 248) + 17448LL);
  v400 = v402;
  v305 = (_DWORD)v50 + 216;
  if ( (unsigned int)(*((_DWORD *)v50 + 62) - 37) > 1 )
  {
    sub_1564820(&v409, v2, v344, 1751);
    v76 = sub_22B7480(v50 + 216);
    v77 = (unsigned __int8 *)v409;
    v78 = (_BYTE *)v76;
    v80 = v79;
    if ( !v409 )
    {
      v193 = v410;
      v194 = *(_DWORD *)(v410 + 14976);
      if ( v194 )
      {
        v207 = (unsigned int)(v194 - 1);
        *(_DWORD *)(v410 + 14976) = v207;
        v77 = *(unsigned __int8 **)(v193 + 8 * v207 + 14848);
        v208 = *((unsigned int *)v77 + 134);
        *v77 = 0;
        v209 = *((_QWORD *)v77 + 66);
        *((_DWORD *)v77 + 106) = 0;
        v210 = v209 + (v208 << 6);
        if ( v209 != v210 )
        {
          v211 = v209;
          do
          {
            while ( 1 )
            {
              v210 -= 64;
              v212 = *(void **)(v210 + 24);
              if ( v212 == (void *)(v210 + 40) )
                break;
              operator delete(v212);
              if ( v211 == v210 )
                goto LABEL_441;
            }
          }
          while ( v211 != v210 );
        }
LABEL_441:
        *((_DWORD *)v77 + 134) = 0;
      }
      else
      {
        v77 = (unsigned __int8 *)operator new(0x3A0u);
        *v77 = 0;
        *((_QWORD *)v77 + 12) = v77 + 112;
        *((_QWORD *)v77 + 16) = v77 + 144;
        *((_QWORD *)v77 + 20) = v77 + 176;
        *((_QWORD *)v77 + 24) = v77 + 208;
        *((_QWORD *)v77 + 28) = v77 + 240;
        *((_QWORD *)v77 + 32) = v77 + 272;
        *((_QWORD *)v77 + 36) = v77 + 304;
        *((_QWORD *)v77 + 40) = v77 + 336;
        *((_QWORD *)v77 + 44) = v77 + 368;
        *((_QWORD *)v77 + 48) = v77 + 400;
        *((_QWORD *)v77 + 52) = v77 + 432;
        *((_QWORD *)v77 + 13) = 0;
        v77[112] = 0;
        *((_QWORD *)v77 + 17) = 0;
        v77[144] = 0;
        *((_QWORD *)v77 + 21) = 0;
        v77[176] = 0;
        *((_QWORD *)v77 + 25) = 0;
        v77[208] = 0;
        *((_QWORD *)v77 + 29) = 0;
        v77[240] = 0;
        *((_QWORD *)v77 + 33) = 0;
        v77[272] = 0;
        *((_QWORD *)v77 + 37) = 0;
        v77[304] = 0;
        *((_QWORD *)v77 + 41) = 0;
        v77[336] = 0;
        *((_QWORD *)v77 + 45) = 0;
        v77[368] = 0;
        *((_QWORD *)v77 + 49) = 0;
        v77[400] = 0;
        *((_QWORD *)v77 + 53) = 0x800000000LL;
        *((_QWORD *)v77 + 66) = v77 + 544;
        *((_QWORD *)v77 + 67) = 0x600000000LL;
      }
      v409 = v77;
    }
    v77[*v77 + 1] = 0;
    src = v358;
    if ( &v78[v80] && !v78 )
      goto LABEL_587;
    if ( (unsigned __int64)v80 > 0xF )
    {
      if ( v80 < 0 )
        goto LABEL_588;
      v81 = (_QWORD *)operator new(v80 + 1);
      v358[0] = v80;
      src = v81;
    }
    else
    {
      if ( v80 == 1 )
      {
        LOBYTE(v358[0]) = *v78;
        v81 = v358;
        goto LABEL_138;
      }
      v81 = v358;
      if ( !v80 )
      {
LABEL_138:
        n = v80;
        *((_BYTE *)v81 + v80) = 0;
        v82 = v409;
        v83 = *(unsigned __int8 *)v409;
        *(_BYTE *)v409 = v83 + 1;
        v84 = (unsigned __int8)v83;
        v85 = 4 * (v83 + 3);
        v86 = (void **)&v82[v85];
        v87 = (_BYTE *)v82[v85];
        if ( src == v358 )
        {
          v122 = n;
          if ( n )
          {
            if ( n == 1 )
              *v87 = v358[0];
            else
              memcpy(v87, src, n);
            v122 = n;
            v87 = *v86;
          }
          v86[1] = (void *)v122;
          v87[v122] = 0;
          v87 = src;
          goto LABEL_142;
        }
        if ( v87 == (_BYTE *)&v82[v85 + 2] )
        {
          *v86 = src;
          v86[1] = (void *)n;
          v86[2] = (void *)v358[0];
        }
        else
        {
          v88 = v82[4 * v84 + 14];
          *v86 = src;
          v86[1] = (void *)n;
          v86[2] = (void *)v358[0];
          if ( v87 )
          {
            src = v87;
            v358[0] = v88;
LABEL_142:
            n = 0;
            *v87 = 0;
            if ( src != v358 )
              operator delete(src);
            sub_AEA040((__int64)&v409);
            v385 = v2;
            v432 = v434;
            v386 = &v344;
            si128 = _mm_load_si128((const __m128i *)&xmmword_23A8EA0);
            p_ptr = &ptr;
            v389 = &v432;
            v388 = &v406;
            v390 = &v397;
            v391 = &v400;
            v392 = &v371;
            v393 = &v345;
            v75 = sub_1C54D50(
                    *(_QWORD *)(v2 + 96),
                    v344,
                    *(_DWORD *)ptr,
                    (_DWORD)v406,
                    v407,
                    0,
                    (__int64)v434,
                    0,
                    0,
                    (__int64)v397,
                    (unsigned int)v398,
                    (__int64)v400,
                    (unsigned int)v401,
                    (__int64)v371,
                    (unsigned int)v372,
                    v345);
            goto LABEL_123;
          }
        }
        v87 = v358;
        src = v358;
        goto LABEL_142;
      }
    }
    memcpy(v81, v78, v80);
    v81 = src;
    goto LABEL_138;
  }
  v51 = *((_BYTE **)v50 + 27);
  v351 = 0;
  v352[0] = 0;
  v52 = *((_QWORD *)v50 + 28);
  v350 = v352;
  v53 = v361;
  v359 = v361;
  if ( v51 )
  {
    if ( (unsigned __int64)v52 > 0xF )
    {
      if ( v52 < 0 )
        goto LABEL_588;
      v53 = (_QWORD *)operator new(v52 + 1);
      v361[0] = v52;
      v359 = v53;
    }
    else
    {
      if ( v52 == 1 )
      {
        LOBYTE(v361[0]) = *v51;
LABEL_90:
        v360 = v52;
        *((_BYTE *)v53 + v52) = 0;
        goto LABEL_113;
      }
      if ( !v52 )
        goto LABEL_90;
    }
    memcpy(v53, v51, v52);
    v53 = v359;
    goto LABEL_90;
  }
  v360 = 0;
  LOBYTE(v361[0]) = 0;
LABEL_113:
  sub_22B9ED0(&v435, &v359);
  if ( v359 != v361 )
    operator delete(v359);
  v286 = (_QWORD *)sub_2123940(&v435, &v350);
  if ( v435 != &v436.m128i_u64[1] )
    operator delete(v435);
  if ( v286 )
    goto LABEL_118;
  sub_1564820(&v412, v2, v344, 1750);
  v126 = (unsigned __int8 *)v412;
  v127 = v350;
  v128 = v351;
  if ( !v412 )
  {
    v226 = v413;
    v227 = *(_DWORD *)(v413 + 14976);
    if ( v227 )
    {
      v235 = (unsigned int)(v227 - 1);
      *(_DWORD *)(v413 + 14976) = v235;
      v126 = *(unsigned __int8 **)(v226 + 8 * v235 + 14848);
      v236 = *((unsigned int *)v126 + 134);
      v237 = *((_QWORD *)v126 + 66);
      *v126 = 0;
      *((_DWORD *)v126 + 106) = 0;
      v238 = v236 << 6;
      if ( v237 != v237 + v238 )
      {
        v279 = v2;
        v239 = v126;
        v240 = v50;
        v241 = v237;
        v242 = v237 + v238;
        do
        {
          while ( 1 )
          {
            v242 -= 64;
            v243 = *(void **)(v242 + 24);
            if ( v243 == (void *)(v242 + 40) )
              break;
            operator delete(v243);
            if ( v241 == v242 )
              goto LABEL_516;
          }
        }
        while ( v241 != v242 );
LABEL_516:
        v50 = v240;
        v126 = v239;
        v2 = v279;
      }
      *((_DWORD *)v126 + 134) = 0;
    }
    else
    {
      v278 = v350;
      v126 = (unsigned __int8 *)operator new(0x3A0u);
      *v126 = 0;
      *((_QWORD *)v126 + 12) = v126 + 112;
      *((_QWORD *)v126 + 16) = v126 + 144;
      *((_QWORD *)v126 + 20) = v126 + 176;
      *((_QWORD *)v126 + 24) = v126 + 208;
      *((_QWORD *)v126 + 28) = v126 + 240;
      *((_QWORD *)v126 + 32) = v126 + 272;
      *((_QWORD *)v126 + 36) = v126 + 304;
      *((_QWORD *)v126 + 40) = v126 + 336;
      *((_QWORD *)v126 + 44) = v126 + 368;
      *((_QWORD *)v126 + 48) = v126 + 400;
      *((_QWORD *)v126 + 52) = v126 + 432;
      *((_QWORD *)v126 + 13) = 0;
      v126[112] = 0;
      *((_QWORD *)v126 + 17) = 0;
      v126[144] = 0;
      *((_QWORD *)v126 + 21) = 0;
      v126[176] = 0;
      *((_QWORD *)v126 + 25) = 0;
      v126[208] = 0;
      *((_QWORD *)v126 + 29) = 0;
      v126[240] = 0;
      *((_QWORD *)v126 + 33) = 0;
      v126[272] = 0;
      *((_QWORD *)v126 + 37) = 0;
      v126[304] = 0;
      *((_QWORD *)v126 + 41) = 0;
      v126[336] = 0;
      *((_QWORD *)v126 + 45) = 0;
      v126[368] = 0;
      *((_QWORD *)v126 + 49) = 0;
      v126[400] = 0;
      *((_QWORD *)v126 + 53) = 0x800000000LL;
      v127 = v278;
      *((_QWORD *)v126 + 66) = v126 + 544;
      *((_QWORD *)v126 + 67) = 0x600000000LL;
    }
    v412 = v126;
  }
  v126[*v126 + 1] = 0;
  v362 = v364;
  if ( &v127[v128] && !v127 )
    goto LABEL_587;
  if ( (unsigned __int64)v128 > 0xF )
  {
    if ( v128 < 0 )
      goto LABEL_588;
    v129 = (_QWORD *)operator new(v128 + 1);
    v364[0] = v128;
    v362 = v129;
LABEL_446:
    memcpy(v129, v127, v128);
    v129 = v362;
    goto LABEL_241;
  }
  if ( v128 == 1 )
  {
    LOBYTE(v364[0]) = *v127;
    v129 = v364;
    goto LABEL_241;
  }
  v129 = v364;
  if ( v128 )
    goto LABEL_446;
LABEL_241:
  v363 = v128;
  *((_BYTE *)v129 + v128) = 0;
  v130 = v412;
  v131 = *(unsigned __int8 *)v412;
  *(_BYTE *)v412 = v131 + 1;
  v132 = (unsigned __int8)v131;
  v133 = 4 * (v131 + 3);
  v134 = (void **)&v130[v133];
  v135 = (_BYTE *)v130[v133];
  if ( v362 == v364 )
  {
    v213 = v363;
    if ( v363 )
    {
      if ( v363 == 1 )
        *v135 = v364[0];
      else
        memcpy(v135, v362, v363);
      v213 = v363;
      v135 = *v134;
    }
    v134[1] = (void *)v213;
    v135[v213] = 0;
    v135 = v362;
    goto LABEL_245;
  }
  if ( v135 == (_BYTE *)&v130[v133 + 2] )
  {
    *v134 = v362;
    v134[1] = (void *)v363;
    v134[2] = (void *)v364[0];
    goto LABEL_480;
  }
  v136 = v130[4 * v132 + 14];
  *v134 = v362;
  v134[1] = (void *)v363;
  v134[2] = (void *)v364[0];
  if ( !v135 )
  {
LABEL_480:
    v135 = v364;
    v362 = v364;
    goto LABEL_245;
  }
  v362 = v135;
  v364[0] = v136;
LABEL_245:
  v363 = 0;
  *v135 = 0;
  if ( v362 != v364 )
    operator delete(v362);
  sub_AEA040((__int64)&v412);
LABEL_118:
  if ( v350 != v352 )
    operator delete(v350);
  v385 = v2;
  v389 = &v432;
  v74 = v407;
  v432 = v434;
  v386 = &v344;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8EA0);
  p_ptr = &ptr;
  v388 = &v406;
  v390 = &v397;
  v391 = &v400;
  v392 = &v371;
  v393 = &v345;
  v273 = (char *)v406;
  if ( !v286 || !(_DWORD)v407 )
  {
    v75 = sub_1C54D50(
            *(_QWORD *)(v2 + 96),
            v344,
            *(_DWORD *)ptr,
            (_DWORD)v406,
            v407,
            0,
            (__int64)v434,
            0,
            0,
            (__int64)v397,
            (unsigned int)v398,
            (__int64)v400,
            (unsigned int)v401,
            (__int64)v371,
            (unsigned int)v372,
            v345);
LABEL_123:
    v43 = v75;
    goto LABEL_124;
  }
  v102 = 0;
  v103 = 8;
  LODWORD(v104) = 0;
  v105 = 1;
  v375 = 0x800000000LL;
  v106 = *(_QWORD *)(v2 + 8);
  v374 = v376;
  v290 = v106;
  v331 = v50;
  v325 = v344;
  v107 = 0;
  v334 = v2;
  v108 = (char *)v406;
  while ( 1 )
  {
    if ( v107 + 1 > v103 )
    {
      v335 = v105;
      v318 = v104;
      sub_2237220(&v374, v376, v107 + 1, 4);
      v107 = (unsigned int)v375;
      LODWORD(v104) = v318;
      v105 = v335;
    }
    ++v102;
    *((_DWORD *)v374 + v107) = v104;
    v107 = (unsigned int)(v375 + 1);
    v5 = *((_WORD *)v108 + 8) == 126;
    LODWORD(v375) = v375 + 1;
    if ( !v5 )
      break;
    if ( v102 == v74 )
    {
      v43 = 1;
      sub_FC70B0((__int64)&v435, *(_QWORD *)(v290 + 48), v325, 1545);
      sub_AEA040((__int64)&v435);
      goto LABEL_212;
    }
    if ( v102 >= v74 )
      goto LABEL_250;
    v104 = si128.m128i_i64[0];
    v108 = &v273[24 * v102];
    if ( !v105 )
      goto LABEL_186;
LABEL_174:
    v103 = HIDWORD(v375);
  }
  v435 = &v437;
  v415[0] = 0;
  v436 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  v109 = (void *)sub_145C740(v290, (__int64)v108, (__int64 *)&v435, v415);
  v110 = si128.m128i_i64[0];
  v112 = v111;
  v113 = v111 + si128.m128i_i64[0];
  if ( v113 > si128.m128i_i64[1] )
  {
    v317 = v109;
    sub_2236E10(&v432, v434, v113, 1);
    v110 = si128.m128i_i64[0];
    v109 = v317;
  }
  if ( v112 )
  {
    memcpy((char *)v432 + v110, v109, v112);
    v110 = si128.m128i_i64[0];
  }
  si128.m128i_i64[0] = v112 + v110;
  if ( v435 != &v437 )
    free(v435);
  if ( v102 < v74 )
  {
    v104 = si128.m128i_i64[0];
    v108 = &v273[24 * v102];
LABEL_186:
    if ( *((_WORD *)v108 + 8) == 126 || (v114 = *((_WORD *)v108 + 9), (v114 & 1) != 0) )
    {
      if ( (unsigned __int64)(v104 + 2) > si128.m128i_i64[1] )
      {
        sub_2236E10(&v432, v434, v104 + 2, 1);
        v104 = si128.m128i_i64[0];
      }
      v105 = 1;
      *(_WORD *)((char *)v432 + v104) = 2314;
      LODWORD(v104) = si128.m128i_i32[0] + 2;
      v107 = (unsigned int)v375;
      si128.m128i_i64[0] += 2;
    }
    else
    {
      if ( (v114 & 2) != 0 )
      {
        if ( (unsigned __int64)(v104 + 1) > si128.m128i_i64[1] )
        {
          sub_2236E10(&v432, v434, v104 + 1, 1);
          v104 = si128.m128i_i64[0];
        }
        *((_BYTE *)v432 + v104) = 32;
        LODWORD(v104) = si128.m128i_i32[0] + 1;
        ++si128.m128i_i64[0];
      }
      v107 = (unsigned int)v375;
      v105 = 0;
    }
    goto LABEL_174;
  }
LABEL_250:
  v137 = si128.m128i_i64[0];
  if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
  {
    sub_2236E10(&v432, v434, si128.m128i_i64[0] + 1, 1);
    v137 = si128.m128i_i64[0];
  }
  *((_BYTE *)v432 + v137) = 0;
  v138 = *(_QWORD *)(v334 + 96);
  v354 = nullptr;
  v139 = *(_QWORD *)(v138 + 248);
  LOBYTE(v355[0]) = 0;
  v300 = *(_QWORD **)(*(_QWORD *)(v139 + 17448) + 208LL);
  v140 = (size_t *)v300[33];
  v141 = (size_t *)v300[32];
  v353 = v355;
  if ( v140 == v141 )
    goto LABEL_262;
  v142 = v141;
  v143 = (((char *)v140 - (char *)v141) >> 5) - 1;
  do
  {
    v143 += v142[1];
    v142 += 4;
  }
  while ( v140 != v142 );
  if ( (unsigned __int64)v143 > 0xF )
  {
    v275 = v141;
    if ( v143 >= 0 )
    {
      if ( (unsigned __int64)v143 < 0x1E )
        v143 = 30;
      v214 = (_BYTE *)operator new(v143 + 1);
      v215 = v353;
      v141 = v275;
      v216 = v214;
      if ( v354 )
      {
        if ( v354 != (void *)-1LL )
        {
          v321 = v275;
          v276 = v353;
          v217 = memcpy(v214, v353, (size_t)v354 + 1);
          v141 = v321;
          v215 = v276;
          v216 = v217;
        }
      }
      else
      {
        *v214 = *(_BYTE *)v353;
      }
      if ( v215 != v355 )
      {
        v322 = v216;
        v277 = v141;
        operator delete(v215);
        v216 = v322;
        v141 = v277;
      }
      v353 = v216;
      v355[0] = v143;
      goto LABEL_256;
    }
    goto LABEL_588;
  }
LABEL_256:
  v274 = v141;
  sub_9EE560(&v353, (_BYTE *)*v141, v141[1]);
  if ( v140 != v274 + 4 )
  {
    if ( v354 == (void *)0x7FFFFFFFFFFFFFFFLL )
LABEL_586:
      std::__throw_length_error("basic_string::append");
    v144 = v274 + 4;
    while ( 1 )
    {
      v144 += 4;
      sub_9EE560(&v353, ",", 1u);
      sub_9EE560(&v353, (_BYTE *)*(v144 - 4), *(v144 - 3));
      if ( v140 == v144 )
        break;
      if ( v354 == (void *)0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_586;
    }
    v50 = v331;
  }
LABEL_262:
  v145 = *((_BYTE **)v50 + 27);
  v146 = *((_QWORD *)v50 + 28);
  v147 = (__int64 (__fastcall *)(void **))v286[10];
  if ( !v147 )
    goto LABEL_463;
  v148 = dest;
  v365 = dest;
  if ( !v145 )
  {
    v366 = 0;
    LOBYTE(dest[0]) = 0;
    goto LABEL_268;
  }
  if ( (unsigned __int64)v146 > 0xF )
  {
    if ( v146 >= 0 )
    {
      v148 = (_QWORD *)operator new(v146 + 1);
      dest[0] = v146;
      v365 = v148;
      goto LABEL_491;
    }
    goto LABEL_588;
  }
  if ( v146 == 1 )
  {
    LOBYTE(dest[0]) = *v145;
    goto LABEL_267;
  }
  if ( v146 )
  {
LABEL_491:
    memcpy(v148, v145, v146);
    v148 = v365;
  }
LABEL_267:
  v366 = v146;
  *((_BYTE *)v148 + v146) = 0;
LABEL_268:
  sub_22B9ED0(&v435, &v365);
  if ( v365 != dest )
    operator delete(v365);
  v149 = (void ***)v147(&v435);
  if ( v435 != &v436.m128i_u64[1] )
    operator delete(v435);
  if ( !v149 )
  {
LABEL_463:
    sub_1564820(&v435, v334, v344, 1750);
    sub_AE9DF0((unsigned __int8 **)&v435, (__int64)"target MC unavailable", 1u);
    sub_AEA040((__int64)&v435);
    v43 = sub_1541F50((__int64)&v385);
    goto LABEL_400;
  }
  sub_21237E0(v415);
  v150 = *((_BYTE **)v50 + 27);
  v151 = *((_QWORD *)v50 + 28);
  v152 = (__int64 (__fastcall *)(void ***, void **, _BYTE *))v286[6];
  if ( !v152 )
  {
    v329 = 0;
    goto LABEL_283;
  }
  v153 = v370;
  v368 = v370;
  if ( !v150 )
  {
    v369 = 0;
    LOBYTE(v370[0]) = 0;
    goto LABEL_279;
  }
  if ( (unsigned __int64)v151 > 0xF )
  {
    if ( v151 >= 0 )
    {
      v324 = (void *)v151;
      v153 = (_QWORD *)operator new(v151 + 1);
      v151 = (signed __int64)v324;
      v368 = v153;
      v370[0] = v324;
      goto LABEL_508;
    }
    goto LABEL_588;
  }
  if ( v151 == 1 )
  {
    LOBYTE(v370[0]) = *v150;
    goto LABEL_278;
  }
  if ( v151 )
  {
LABEL_508:
    v323 = (void *)v151;
    memcpy(v153, v150, v151);
    v153 = v368;
    v151 = (signed __int64)v323;
  }
LABEL_278:
  v369 = v151;
  *((_BYTE *)v153 + v151) = 0;
LABEL_279:
  sub_22B9ED0(&v435, &v368);
  if ( v368 != v370 )
    operator delete(v368);
  v329 = v152(v149, &v435, v415);
  if ( v435 != &v436.m128i_u64[1] )
    operator delete(v435);
LABEL_283:
  v154 = (__int64 (*)(void))v286[8];
  if ( v154 )
    v326 = (void *)v154();
  else
    v326 = nullptr;
  v155 = *((_QWORD *)v50 + 28);
  v319 = v353;
  v156 = (__int64 (__fastcall *)(void **, __int64, __int64, void *, void *))v286[11];
  v332 = v354;
  v157 = v300[8];
  v301 = v300[9];
  v158 = *((_BYTE **)v50 + 27);
  v338 = v157;
  if ( !v156 )
    goto LABEL_481;
  v159 = v396;
  v394 = v396;
  if ( !v158 )
  {
    v395 = 0;
    LOBYTE(v396[0]) = 0;
    goto LABEL_291;
  }
  if ( (unsigned __int64)v155 > 0xF )
  {
    if ( v155 >= 0 )
    {
      v341 = v155;
      v159 = (_QWORD *)operator new(v155 + 1);
      v155 = v341;
      v394 = v159;
      v396[0] = v341;
      goto LABEL_504;
    }
    goto LABEL_588;
  }
  if ( v155 == 1 )
  {
    LOBYTE(v396[0]) = *v158;
    goto LABEL_290;
  }
  if ( v155 )
  {
LABEL_504:
    v340 = v155;
    memcpy(v159, v158, v155);
    v159 = v394;
    v155 = v340;
  }
LABEL_290:
  v395 = v155;
  *((_BYTE *)v159 + v155) = 0;
LABEL_291:
  sub_22B9ED0(&v435, &v394);
  if ( v394 != v396 )
    operator delete(v394);
  v320 = (_QWORD *)v156(&v435, v338, v301, v319, v332);
  if ( v435 != &v436.m128i_u64[1] )
    operator delete(v435);
  if ( !v329 || !v326 )
  {
    sub_1564820(&v435, v334, v344, 1750);
    sub_AE9DF0((unsigned __int8 **)&v435, (__int64)"target MC unavailable", 1u);
    sub_AEA040((__int64)&v435);
    v43 = sub_1541F50((__int64)&v385);
    if ( v320 )
      goto LABEL_354;
    goto LABEL_364;
  }
  if ( !v320 )
  {
LABEL_481:
    sub_1564820(&v435, v334, v344, 1750);
    sub_AE9DF0((unsigned __int8 **)&v435, (__int64)"target MC unavailable", 1u);
    sub_AEA040((__int64)&v435);
    v43 = sub_1541F50((__int64)&v385);
    goto LABEL_364;
  }
  v377 = nullptr;
  v378 = nullptr;
  v379 = nullptr;
  v380 = nullptr;
  v381 = nullptr;
  v382 = 0;
  v383 = nullptr;
  v384 = nullptr;
  sub_2100AA0((unsigned int)&v435, v305, v329, (_DWORD)v149, (_DWORD)v320, (unsigned int)&v377, 0, 1, 0);
  v160 = (__int64 (__fastcall *)(void **, _QWORD, _QWORD))v286[7];
  if ( v160 )
  {
    v161 = v160(&v435, 0, 0);
    v339 = (void *)v161;
  }
  else
  {
    v339 = (void *)operator new(0x388u);
    memset(v339, 0, 0x388u);
    *(_QWORD *)v339 = off_2BE8CA0;
    sub_2112600(v339, &v435, 0);
    v161 = (__int64)v339;
  }
  v441 = v161;
  sub_2230330(&v346, v432, si128.m128i_i64[0], "<MS inline asm>", 15, 1);
  v162 = v346;
  v346 = nullptr;
  v413 = 0;
  v412 = v162;
  v414[0] = 0;
  if ( v378 == v379 )
  {
    sub_1544270((__int64)&v377, v378, (__int64)&v412);
  }
  else
  {
    sub_2239BA0(v378, &v412);
    v378 += 24;
  }
  sub_2239BD0(&v412);
  v343 = sub_210EDB0(&v435);
  v307 = sub_212DAC0(&v377, &v435, v343, v329, 0);
  v163 = (__int64 (__fastcall *)(_QWORD *, __int64, void *, _BYTE *))v286[14];
  if ( !v163 || (v342 = v163(v320, v307, v326, v415)) == 0 )
  {
    sub_1564820(&v412, v334, v344, 1750);
    sub_AE9DF0((unsigned __int8 **)&v412, (__int64)"target ASM parser unavailable", 1u);
    sub_AEA040((__int64)&v412);
    v43 = sub_1541F50((__int64)&v385);
    if ( v307 )
      goto LABEL_338;
    goto LABEL_339;
  }
  v403 = v405;
  v164 = *((_BYTE **)v50 + 27);
  v165 = *((_QWORD *)v50 + 28);
  if ( &v164[v165] && !v164 )
LABEL_587:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v165 > 0xF )
  {
    v333 = *((_BYTE **)v50 + 27);
    if ( v165 >= 0 )
    {
      v166 = (_QWORD *)operator new(v165 + 1);
      v405[0] = v165;
      v164 = v333;
      v403 = v166;
      goto LABEL_540;
    }
LABEL_588:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v165 == 1 )
  {
    LOBYTE(v405[0]) = *v164;
    v166 = v405;
    goto LABEL_309;
  }
  v166 = v405;
  if ( v165 )
  {
LABEL_540:
    memcpy(v166, v164, v165);
    v166 = v403;
  }
LABEL_309:
  v404 = v165;
  *((_BYTE *)v166 + v165) = 0;
  sub_22B9ED0(&v412, &v403);
  if ( v403 != v405 )
    operator delete(v403);
  v167 = (__int64 (__fastcall *)(void **, __int64, __int64, void *, void ***))v286[17];
  if ( v167 )
    v287 = v167(&v412, 1, v329, v326, v149);
  else
    v287 = 0;
  if ( v412 != v414 )
    operator delete(v412);
  v168 = *(void (**)())(*(_QWORD *)v307 + 40LL);
  if ( v168 != nullsub_692 )
    ((void (__fastcall *)(__int64, __int64))v168)(v307, 1);
  v169 = v307;
  sub_2153BE0(v307, v342);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v169 + 56LL))(v169, 1);
  *(_BYTE *)(v342 + 72) = 1;
  v394 = &off_2BB3C78;
  v395 = v334;
  LODWORD(v396[0]) = v344;
  v384 = &v394;
  v396[1] = v432;
  v396[2] = si128.m128i_i64[0];
  v396[3] = v406;
  v396[4] = (unsigned int)v407;
  v396[5] = v374;
  v396[6] = (unsigned int)v375;
  *(_QWORD *)(v342 + 80) = &v394;
  v383 = sub_1542280;
  v368 = v370;
  v403 = v405;
  v409 = v411;
  v404 = 0x400000000LL;
  v410 = 0x400000000LL;
  v412 = v414;
  v369 = 0;
  LOBYTE(v370[0]) = 0;
  v413 = 0x400000000LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void **, void **, void **, void **, void **, void **, void *, __int64, void **))(*(_QWORD *)v169 + 120LL))(
         v169,
         &v368,
         &v362,
         &v365,
         &v403,
         &v409,
         &v412,
         v326,
         v287,
         &v394) )
  {
LABEL_318:
    v43 = 1;
  }
  else
  {
    sub_1543CD0((__int64)&v412);
    sub_1543C40((__int64)&v400, (__int64)&v412);
    v250 = (unsigned int)v398;
    v251 = (_DWORD)v362 + (_DWORD)v365;
    v252 = (unsigned int)((_DWORD)v362 + (_DWORD)v365);
    if ( v252 != (unsigned int)v398 )
    {
      if ( v252 >= (unsigned int)v398 )
      {
        if ( v252 > HIDWORD(v398) )
        {
          v337 = (unsigned int)((_DWORD)v362 + (_DWORD)v365);
          sub_2237220(&v397, v399, v337, 16);
          v250 = (unsigned int)v398;
          v252 = v337;
        }
        v253 = (char *)v397 + 16 * v250;
        for ( j = (char *)v397 + 16 * v252; j != v253; *((_QWORD *)v253 - 1) = 0 )
        {
          *(_QWORD *)v253 = 0;
          v253 += 16;
        }
      }
      LODWORD(v398) = v251;
    }
    v255 = (unsigned int)v372;
    if ( v252 != (unsigned int)v372 )
    {
      if ( v252 >= (unsigned int)v372 )
      {
        if ( v252 > HIDWORD(v372) )
        {
          v336 = v252;
          sub_2237220(&v371, v373, v252, 8);
          v255 = (unsigned int)v372;
          v252 = v336;
        }
        v256 = (char *)v371 + 8 * v255;
        if ( v256 != (char *)v371 + 8 * v252 )
          memset(v256, 0, 8 * (v252 - v255));
      }
      LODWORD(v372) = v251;
    }
    if ( v251 )
    {
      v257 = (char *)v403;
      v258 = *(_QWORD *)v403;
      if ( *(_QWORD *)v403 )
      {
        v259 = (unsigned int)(v251 - 1);
        v260 = 0;
        v261 = v149;
        v262 = v259;
        do
        {
          v267 = 16 * v260;
          if ( v257[8] )
            v258 = sub_1925670(*(_QWORD *)(v334 + 96), *(_QWORD *)(*(_QWORD *)(v334 + 96) + 608LL), v344, 4, v258, 0)
                 & 0xFFFFFFFFFFFFFFFELL;
          v263 = (__int64 *)((char *)v409 + 32 * v260);
          v264 = *v263;
          v265 = v263[1];
          v266 = (char *)v397 + v267;
          *v266 = v264;
          v266[1] = v265;
          *((_QWORD *)v371 + v260) = v258;
          if ( v260 == v262 )
          {
            v149 = v261;
            goto LABEL_574;
          }
          ++v260;
          v257 = (char *)v403 + v267 + 16;
          v258 = *(_QWORD *)v257;
        }
        while ( *(_QWORD *)v257 );
        v149 = v261;
      }
      goto LABEL_318;
    }
LABEL_574:
    v43 = sub_1C54D50(
            *(_QWORD *)(v334 + 96),
            v344,
            *(_DWORD *)ptr,
            (_DWORD)v406,
            v407,
            (_DWORD)v362,
            (__int64)v368,
            v369,
            (_DWORD)v365,
            (__int64)v397,
            (unsigned int)v398,
            (__int64)v400,
            (unsigned int)v401,
            (__int64)v371,
            (unsigned int)v372,
            v345);
  }
  v170 = 32LL * (unsigned int)v413;
  v171 = (void **)((char *)v412 + v170);
  if ( v412 != (char *)v412 + v170 )
  {
    v172 = (void **)v412;
    do
    {
      while ( 1 )
      {
        v171 -= 4;
        if ( *v171 == v171 + 2 )
          break;
        operator delete(*v171);
        if ( v172 == v171 )
          goto LABEL_323;
      }
    }
    while ( v172 != v171 );
  }
LABEL_323:
  if ( v412 != v414 )
    free(v412);
  v173 = 32LL * (unsigned int)v410;
  v174 = (void **)((char *)v409 + v173);
  if ( v409 != (char *)v409 + v173 )
  {
    v175 = (void **)v409;
    do
    {
      while ( 1 )
      {
        v174 -= 4;
        if ( *v174 == v174 + 2 )
          break;
        operator delete(*v174);
        if ( v175 == v174 )
          goto LABEL_329;
      }
    }
    while ( v175 != v174 );
  }
LABEL_329:
  if ( v409 != v411 )
    free(v409);
  if ( v403 != v405 )
    free(v403);
  if ( v368 != v370 )
    operator delete(v368);
  v394 = &off_2BB3C78;
  nullsub_1460(&v394);
  if ( v287 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v287 + 8LL))(v287);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v342 + 8LL))(v342);
LABEL_338:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v307 + 8LL))(v307);
LABEL_339:
  if ( v343 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v343 + 56LL))(v343);
  if ( v346 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v346 + 8LL))(v346);
  if ( v339 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v339 + 8LL))(v339);
  sub_2104F80(&v435);
  v176 = v381;
  v177 = (void **)v380;
  if ( v381 != v380 )
  {
    do
    {
      while ( *v177 != v177 + 2 )
      {
        operator delete(*v177);
        v177 += 4;
        if ( v177 == v176 )
          goto LABEL_348;
      }
      v177 += 4;
    }
    while ( v176 != v177 );
  }
LABEL_348:
  if ( v380 )
    operator delete(v380);
  v178 = v378;
  v179 = (char *)v377;
  if ( v378 != v377 )
  {
    do
    {
      v180 = v179;
      v179 += 24;
      sub_2239BD0(v180);
    }
    while ( v178 != v179 );
  }
  if ( v377 )
    operator delete(v377);
LABEL_354:
  v181 = *(void (__fastcall **)(_QWORD *))(*v320 + 8LL);
  if ( v181 == sub_1542150 )
  {
    v182 = (_QWORD *)v320[35];
    *v320 = &off_2BE9230;
    if ( v182 != v320 + 37 )
      operator delete(v182);
    v183 = (_QWORD *)v320[12];
    if ( v183 != v320 + 14 )
      operator delete(v183);
    v184 = (_QWORD *)v320[8];
    if ( v184 != v320 + 10 )
      operator delete(v184);
    v185 = (_QWORD *)v320[1];
    if ( v185 != v320 + 3 )
      operator delete(v185);
    operator delete(v320, 0x138u);
  }
  else
  {
    v181(v320);
  }
LABEL_364:
  if ( v326 )
    operator delete(v326, 0x30u);
  if ( v329 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v329 + 8LL))(v329);
  v186 = v431;
  v187 = (void **)v430;
  if ( v431 != v430 )
  {
    do
    {
      while ( *v187 != v187 + 2 )
      {
        operator delete(*v187);
        v187 += 4;
        if ( v187 == v186 )
          goto LABEL_371;
      }
      v187 += 4;
    }
    while ( v186 != v187 );
LABEL_371:
    v187 = (void **)v430;
  }
  if ( v187 )
    operator delete(v187);
  v188 = v429;
  v189 = (void **)v428;
  if ( v429 != v428 )
  {
    do
    {
      while ( *v189 != v189 + 2 )
      {
        operator delete(*v189);
        v189 += 4;
        if ( v188 == v189 )
          goto LABEL_377;
      }
      v189 += 4;
    }
    while ( v188 != v189 );
LABEL_377:
    v189 = (void **)v428;
  }
  if ( v189 )
    operator delete(v189);
  if ( v426 != &v427 )
    operator delete(v426);
  if ( v424 != &v425 )
    operator delete(v424);
  if ( v422 != &v423 )
    operator delete(v422);
  if ( v420 != &v421 )
    operator delete(v420);
  if ( v418 != &v419 )
    operator delete(v418);
  if ( v416 != &v417 )
    operator delete(v416);
  v190 = (void (__fastcall *)(void ***))(*v149)[1];
  if ( (char *)v190 == (char *)sub_15421C0 )
  {
    v191 = v149[27];
    v192 = v149[26];
    *v149 = (void **)&off_2BE8D00;
    if ( v191 != v192 )
    {
      do
      {
        while ( *v192 )
        {
          operator delete(*v192);
          v192 += 3;
          if ( v191 == v192 )
            goto LABEL_396;
        }
        v192 += 3;
      }
      while ( v191 != v192 );
LABEL_396:
      v192 = v149[26];
    }
    if ( v192 )
      operator delete(v192);
    operator delete(v149[23], 8LL * *((unsigned int *)v149 + 50), 4);
    operator delete(v149[20], 8LL * *((unsigned int *)v149 + 44), 4);
    operator delete(v149, 0xE8u);
  }
  else
  {
    v190(v149);
  }
LABEL_400:
  if ( v353 != v355 )
    operator delete(v353);
LABEL_212:
  if ( v374 != v376 )
    free(v374);
LABEL_124:
  if ( v432 != v434 )
    free(v432);
  if ( v400 != v402 )
    free(v400);
  if ( v371 != v373 )
    free(v371);
  if ( v397 != v399 )
    free(v397);
LABEL_61:
  if ( ptr != v349 )
    free(ptr);
  if ( v406 != v408 )
    free(v406);
  return v43;
}
