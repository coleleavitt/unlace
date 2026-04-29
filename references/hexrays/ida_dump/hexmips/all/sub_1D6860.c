__int64 __fastcall sub_1D6860(__int64 a1, __int64 a2, signed int a3, __int64 *a4, int a5, char a6)
{
  _QWORD *exception; // rdi
  __int64 v9; // rdi
  int v10; // r9d
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rax
  __int64 *v13; // rdx
  __m128i *v14; // rax
  __m128i si128; // xmm0
  unsigned __int32 v16; // ecx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __m128i v20; // xmm0
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // r13
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  __int64 v27; // rsi
  __int64 v28; // rax
  int v29; // edx
  char v31; // bl
  void **v32; // r15
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  signed int v35; // eax
  unsigned int v36; // r13d
  __int32 v37; // eax
  const __m128i *v38; // r12
  __int64 (__fastcall ***v39)(); // rbx
  __int64 v40; // rdi
  __int64 v41; // r15
  __int64 v42; // r13
  __int64 v43; // r12
  _QWORD *v44; // rbx
  __int64 v45; // rdi
  __int64 v46; // rdi
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  int item_end; // eax
  int v50; // eax
  __m128i *v51; // rax
  __m128i v52; // xmm1
  __m128i *v53; // rax
  void *v54; // r15
  __m128i v55; // xmm0
  __int64 (__fastcall **v56)(); // rdi
  __int64 v57; // rdx
  __m128i v58; // xmm0
  __int64 v59; // rsi
  int v60; // eax
  _QWORD *v61; // rax
  unsigned int v62; // ebx
  _QWORD *v63; // rdi
  __int64 v64; // rsi
  double v65; // xmm0_8
  unsigned __int64 v66; // rsi
  __int64 v67; // r8
  int v68; // r9d
  signed int v69; // r13d
  unsigned int v70; // ebx
  _QWORD *v71; // rcx
  unsigned int v72; // eax
  __int64 v73; // r15
  __int64 v74; // rax
  __int64 v75; // r15
  __int64 v76; // rdx
  __int64 v77; // r15
  __int64 v78; // r12
  unsigned int v79; // eax
  unsigned __int64 *v80; // rcx
  unsigned __int64 v81; // rax
  __int64 v82; // rdi
  int v83; // ecx
  unsigned __int64 v84; // r12
  _QWORD *v85; // rdi
  int v86; // eax
  __int64 func; // rax
  unsigned __int64 v88; // r13
  __int64 v89; // rcx
  unsigned __int64 **v90; // rax
  char *v91; // r13
  char *v92; // rdx
  unsigned __int64 **v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rdi
  __int64 v96; // r15
  __int64 v97; // r12
  __int64 v98; // rbx
  _QWORD *v99; // r13
  __int64 v100; // rdi
  __int64 v101; // rdi
  __int64 v102; // rdi
  __int64 v103; // r15
  __int64 v104; // r12
  __int64 v105; // rbx
  _QWORD *v106; // r13
  __int64 v107; // rdi
  __int64 v108; // rdi
  __int64 v109; // rdi
  __int64 v110; // r13
  __int32 v111; // r15d
  __int64 v112; // r12
  _QWORD *v113; // rbx
  __int64 v114; // rdi
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  unsigned int v119; // r15d
  __int64 v120; // rsi
  __int64 v121; // rdi
  __int64 v122; // r14
  __int32 v123; // r15d
  __int64 v124; // r13
  __int64 v125; // r12
  _QWORD *v126; // rbx
  __int64 v127; // rdi
  __int64 v128; // rdi
  __int64 v129; // rdx
  __int64 v130; // r12
  __int32 *v131; // rbx
  __int64 v132; // rsi
  __int32 v133; // eax
  __int64 v134; // rax
  __int64 v135; // rsi
  __int64 v136; // rsi
  unsigned __int32 v137; // r13d
  int v138; // eax
  int v139; // r13d
  __int64 v140; // rax
  __int64 v141; // rsi
  unsigned __int64 v142; // r12
  _QWORD *v143; // rax
  unsigned __int64 **v144; // rdi
  int v145; // eax
  unsigned int v146; // ecx
  unsigned __int64 v147; // rdx
  __int64 v148; // r15
  __int64 v149; // rcx
  unsigned int v150; // edx
  __int64 v151; // rax
  __int64 v152; // rax
  int v153; // edx
  __int64 v154; // rcx
  __int64 v155; // r15
  __int64 v156; // rax
  __int32 v157; // r9d
  unsigned __int64 v158; // rax
  unsigned __int64 v159; // rdx
  __int64 v160; // rbx
  void *v161; // r15
  __m128i v162; // xmm0
  __m128i v163; // xmm0
  unsigned __int64 v164; // rbx
  void *v165; // r15
  __m128i v166; // xmm0
  __m128 v167; // xmm1
  __m128i v168; // xmm0
  __m128i v169; // xmm0
  __m128i v170; // xmm0
  unsigned __int64 v171; // rbx
  void *v172; // r15
  __m128i v173; // xmm0
  unsigned __int64 v174; // rbx
  void *v175; // r15
  __m128i v176; // xmm0
  unsigned __int64 v177; // rbx
  void *v178; // r15
  __m128i v179; // xmm0
  unsigned __int64 v180; // rbx
  void *v181; // r12
  __m128i v182; // xmm0
  unsigned __int64 v183; // rbx
  void *v184; // r12
  __m128i v185; // xmm0
  unsigned __int64 v186; // rbx
  void *v187; // r12
  __m128i v188; // xmm0
  __int64 (__fastcall **v189)(); // rax
  __int64 v190; // rdx
  unsigned __int64 v191; // rbx
  unsigned __int64 v192; // r12
  __int64 *v193; // rdi
  __int64 *v194; // rdi
  __int64 (__fastcall **v195)(); // rax
  __m128i v196; // xmm0
  __int64 v197; // r12
  __int64 v198; // rbx
  __m128i v199; // xmm0
  __int64 v200; // rbx
  __m128i v201; // xmm0
  __int64 v202; // rbx
  __m128i v203; // xmm0
  __m128i v204; // xmm0
  __m128i v205; // xmm0
  __m128i v206; // xmm0
  __int64 v207; // rbx
  __int64 v208; // rbx
  __int64 v209; // rbx
  __int64 v210; // rbx
  __int64 v211; // rbx
  __int64 v212; // rbx
  unsigned __int64 **v213; // r12
  __m128i v214; // xmm0
  __m128i v215; // xmm0
  __m128i v216; // xmm0
  __m128i v217; // xmm0
  __m128i v218; // xmm0
  __m128i v219; // xmm1
  __m128i v220; // xmm1
  __m128i v221; // xmm1
  __m128i v222; // xmm1
  __m128i v223; // xmm1
  __m128i v224; // xmm1
  __m128i v225; // xmm1
  __m128i v226; // xmm1
  __m128i v227; // xmm1
  __m128i v228; // xmm1
  void *v229; // rax
  __m128i v230; // xmm1
  __m128i v231; // xmm0
  __m128i v232; // xmm1
  __m128i v233; // xmm1
  __m128i v234; // xmm0
  __m128i v235; // xmm0
  __m128i v236; // xmm0
  __int64 v237; // rdi
  __int64 v238; // r15
  __int64 v239; // rbx
  _QWORD *v240; // r12
  __int64 v241; // rdi
  __int64 v242; // rdi
  __int64 v243; // rdi
  __int64 v244; // r15
  __int64 v245; // rbx
  _QWORD *v246; // r12
  __int64 v247; // rdi
  __int64 v248; // rdi
  __int64 v249; // rdi
  __int64 v250; // r13
  __int64 v251; // rbx
  __int64 v252; // r15
  _QWORD *v253; // r12
  __int64 v254; // rdi
  __int64 v255; // rdi
  __int64 v256; // rdi
  __int64 v257; // r13
  __int64 v258; // rbx
  __int64 v259; // r15
  _QWORD *v260; // r12
  __int64 v261; // rdi
  __int64 v262; // rdi
  __int64 v263; // rdi
  __int64 v264; // r12
  __int64 v265; // r15
  _QWORD *v266; // rbx
  __int64 v267; // rdi
  __int64 v268; // rdi
  __int64 v269; // rax
  __int64 v270; // rax
  unsigned __int64 **v271; // rax
  unsigned __int64 tinfo_size; // r13
  __int64 (__fastcall **v273)(); // rax
  __m128i v274; // xmm0
  _BYTE *v275; // rcx
  __int64 v276; // r15
  __int64 v277; // rbx
  __int64 v278; // r12
  __int64 v279; // rax
  __int64 v280; // rbx
  __int64 v281; // rax
  __int64 v282; // r15
  int v283; // eax
  void *v284; // rax
  void *v285; // rax
  __int64 v286; // rdi
  __int64 v287; // [rsp+8h] [rbp-E18h]
  __int64 v288; // [rsp+10h] [rbp-E10h]
  __int64 i; // [rsp+38h] [rbp-DE8h]
  __int64 v290; // [rsp+40h] [rbp-DE0h]
  __int64 v291; // [rsp+40h] [rbp-DE0h]
  char n; // [rsp+48h] [rbp-DD8h]
  size_t nb; // [rsp+48h] [rbp-DD8h]
  size_t na; // [rsp+48h] [rbp-DD8h]
  bool v295; // [rsp+50h] [rbp-DD0h]
  bool v296; // [rsp+50h] [rbp-DD0h]
  unsigned __int64 *v297; // [rsp+58h] [rbp-DC8h]
  unsigned int v298; // [rsp+58h] [rbp-DC8h]
  unsigned __int64 v299; // [rsp+60h] [rbp-DC0h]
  __int64 v300; // [rsp+68h] [rbp-DB8h]
  __int32 v302; // [rsp+70h] [rbp-DB0h]
  __int64 v303; // [rsp+78h] [rbp-DA8h]
  __m128i v304; // [rsp+80h] [rbp-DA0h] BYREF
  unsigned __int64 **v305; // [rsp+90h] [rbp-D90h]
  __int64 v306; // [rsp+98h] [rbp-D88h]
  unsigned __int64 v307; // [rsp+A0h] [rbp-D80h]
  __int64 *v308; // [rsp+A8h] [rbp-D78h]
  unsigned int v309; // [rsp+B0h] [rbp-D70h]
  unsigned int v310; // [rsp+B4h] [rbp-D6Ch]
  unsigned __int64 *v311; // [rsp+B8h] [rbp-D68h]
  __m128i v312; // [rsp+C0h] [rbp-D60h] BYREF
  __int64 v313[2]; // [rsp+D0h] [rbp-D50h] BYREF
  _QWORD v314[2]; // [rsp+E0h] [rbp-D40h] BYREF
  unsigned __int64 v315; // [rsp+F0h] [rbp-D30h] BYREF
  __int128 v316; // [rsp+F8h] [rbp-D28h]
  _OWORD v317[2]; // [rsp+110h] [rbp-D10h] BYREF
  int v318; // [rsp+130h] [rbp-CF0h]
  __int64 (__fastcall **v319)(); // [rsp+140h] [rbp-CE0h] BYREF
  __int64 v320; // [rsp+148h] [rbp-CD8h]
  __int128 v321; // [rsp+150h] [rbp-CD0h]
  __int64 v322; // [rsp+160h] [rbp-CC0h]
  __int64 v323; // [rsp+168h] [rbp-CB8h]
  __int64 v324; // [rsp+170h] [rbp-CB0h]
  unsigned __int64 **v325; // [rsp+178h] [rbp-CA8h]
  void **v326; // [rsp+180h] [rbp-CA0h]
  __int64 v327; // [rsp+188h] [rbp-C98h] BYREF
  __int128 v328; // [rsp+190h] [rbp-C90h]
  __int64 v329; // [rsp+1A0h] [rbp-C80h] BYREF
  __int128 v330; // [rsp+1A8h] [rbp-C78h]
  __int64 v331; // [rsp+1B8h] [rbp-C68h]
  unsigned __int64 v332; // [rsp+1C0h] [rbp-C60h]
  bool v333; // [rsp+1C8h] [rbp-C58h]
  char v334; // [rsp+1C9h] [rbp-C57h]
  char v335; // [rsp+1CAh] [rbp-C56h]
  __int64 (__fastcall **v336)(); // [rsp+1D0h] [rbp-C50h] BYREF
  char v337; // [rsp+1D8h] [rbp-C48h]
  __int64 v338; // [rsp+1E0h] [rbp-C40h]
  __int128 v339; // [rsp+1E8h] [rbp-C38h]
  __int128 v340; // [rsp+1F8h] [rbp-C28h]
  __int64 v341; // [rsp+208h] [rbp-C18h]
  int v342; // [rsp+210h] [rbp-C10h]
  __int64 v343; // [rsp+218h] [rbp-C08h]
  __int128 v344; // [rsp+220h] [rbp-C00h]
  int v345; // [rsp+230h] [rbp-BF0h]
  __m128i v346; // [rsp+240h] [rbp-BE0h] BYREF
  __int128 v347; // [rsp+250h] [rbp-BD0h]
  __int128 v348; // [rsp+260h] [rbp-BC0h]
  __int64 v349; // [rsp+270h] [rbp-BB0h]
  __int128 v350; // [rsp+278h] [rbp-BA8h]
  __int128 v351; // [rsp+288h] [rbp-B98h]
  __int64 v352; // [rsp+298h] [rbp-B88h]
  int v353; // [rsp+2A0h] [rbp-B80h]
  __int128 v354; // [rsp+2A8h] [rbp-B78h]
  __int128 v355; // [rsp+2B8h] [rbp-B68h]
  __int64 v356; // [rsp+2C8h] [rbp-B58h]
  __int64 v357; // [rsp+2D0h] [rbp-B50h]
  __int128 v358; // [rsp+2D8h] [rbp-B48h]
  __int64 v359; // [rsp+2E8h] [rbp-B38h]
  __int64 v360; // [rsp+2F0h] [rbp-B30h]
  __int128 v361; // [rsp+2F8h] [rbp-B28h]
  __int64 v362; // [rsp+308h] [rbp-B18h]
  __int128 v363; // [rsp+310h] [rbp-B10h]
  __int64 v364; // [rsp+320h] [rbp-B00h]
  __int128 v365; // [rsp+328h] [rbp-AF8h]
  __int64 v366; // [rsp+338h] [rbp-AE8h]
  __int64 v367; // [rsp+340h] [rbp-AE0h]
  __int64 v368; // [rsp+348h] [rbp-AD8h]
  __int128 v369; // [rsp+350h] [rbp-AD0h]
  int v370; // [rsp+360h] [rbp-AC0h]
  __int64 v371; // [rsp+368h] [rbp-AB8h]
  __int128 v372; // [rsp+370h] [rbp-AB0h]
  __int64 v373; // [rsp+380h] [rbp-AA0h]
  __int128 v374; // [rsp+388h] [rbp-A98h]
  __int64 v375; // [rsp+398h] [rbp-A88h]
  __int128 v376; // [rsp+3A0h] [rbp-A80h]
  unsigned __int64 *v377[2]; // [rsp+3B0h] [rbp-A70h] BYREF
  char v378; // [rsp+3C0h] [rbp-A60h] BYREF
  __m128i v379; // [rsp+480h] [rbp-9A0h] BYREF
  __m128i v380; // [rsp+490h] [rbp-990h]
  __int128 v381; // [rsp+4A0h] [rbp-980h] BYREF
  __int64 v382; // [rsp+4B0h] [rbp-970h]
  __m128i v383; // [rsp+4B8h] [rbp-968h] BYREF
  __m128i v384; // [rsp+4C8h] [rbp-958h] BYREF
  __int64 v385; // [rsp+4D8h] [rbp-948h]
  int v386; // [rsp+4E0h] [rbp-940h]
  __m128i v387; // [rsp+4E8h] [rbp-938h] BYREF
  __m128i v388; // [rsp+4F8h] [rbp-928h] BYREF
  __int64 v389; // [rsp+508h] [rbp-918h]
  void *v390; // [rsp+510h] [rbp-910h]
  __int128 v391; // [rsp+518h] [rbp-908h]
  __int64 v392; // [rsp+528h] [rbp-8F8h]
  void *v393; // [rsp+530h] [rbp-8F0h]
  __int128 v394; // [rsp+538h] [rbp-8E8h]
  void *v395; // [rsp+548h] [rbp-8D8h]
  __int128 v396; // [rsp+550h] [rbp-8D0h]
  void *v397; // [rsp+560h] [rbp-8C0h]
  __int128 v398; // [rsp+568h] [rbp-8B8h]
  __int64 v399[2]; // [rsp+578h] [rbp-8A8h] BYREF
  void *v400; // [rsp+588h] [rbp-898h]
  __int128 v401; // [rsp+590h] [rbp-890h]
  int v402; // [rsp+5A0h] [rbp-880h]
  void *v403; // [rsp+5A8h] [rbp-878h]
  __int128 v404; // [rsp+5B0h] [rbp-870h]
  __int64 v405; // [rsp+5C0h] [rbp-860h] BYREF
  __int128 v406; // [rsp+5C8h] [rbp-858h]
  void *src; // [rsp+5D8h] [rbp-848h]
  __int128 v408; // [rsp+5E0h] [rbp-840h]
  unsigned __int64 *v409[2]; // [rsp+5F0h] [rbp-830h] BYREF
  __m128i v410; // [rsp+600h] [rbp-820h] BYREF
  __m128i v411; // [rsp+610h] [rbp-810h] BYREF
  __m128i v412; // [rsp+620h] [rbp-800h] BYREF
  __m128i v413; // [rsp+630h] [rbp-7F0h] BYREF
  __m128i v414; // [rsp+640h] [rbp-7E0h] BYREF
  __m128i v415; // [rsp+650h] [rbp-7D0h] BYREF
  __m128i v416; // [rsp+660h] [rbp-7C0h] BYREF
  __m128i v417; // [rsp+670h] [rbp-7B0h] BYREF
  __m128i v418; // [rsp+680h] [rbp-7A0h] BYREF
  __m128i v419; // [rsp+690h] [rbp-790h] BYREF
  __m128i v420; // [rsp+6A0h] [rbp-780h] BYREF
  __m128i v421; // [rsp+6B0h] [rbp-770h] BYREF
  void *v422[2]; // [rsp+6C0h] [rbp-760h] BYREF
  __m128i v423; // [rsp+6D0h] [rbp-750h]
  __m128i v424; // [rsp+6E0h] [rbp-740h] BYREF
  __int64 v425; // [rsp+6F0h] [rbp-730h]
  __m128i v426; // [rsp+6F8h] [rbp-728h] BYREF
  __m128i v427; // [rsp+708h] [rbp-718h] BYREF
  __int64 v428; // [rsp+718h] [rbp-708h]
  int v429; // [rsp+720h] [rbp-700h]
  __m128i v430; // [rsp+728h] [rbp-6F8h] BYREF
  __m128i v431; // [rsp+738h] [rbp-6E8h] BYREF
  __int64 v432; // [rsp+748h] [rbp-6D8h]
  void *v433; // [rsp+750h] [rbp-6D0h]
  __m128i v434; // [rsp+758h] [rbp-6C8h]
  __int64 v435; // [rsp+768h] [rbp-6B8h]
  void *v436; // [rsp+770h] [rbp-6B0h]
  __m128i v437; // [rsp+778h] [rbp-6A8h]
  void *v438; // [rsp+788h] [rbp-698h]
  __m128i v439; // [rsp+790h] [rbp-690h]
  void *v440; // [rsp+7A0h] [rbp-680h]
  __m128i v441; // [rsp+7A8h] [rbp-678h]
  __int64 v442[2]; // [rsp+7B8h] [rbp-668h] BYREF
  void *v443; // [rsp+7C8h] [rbp-658h]
  __m128i v444; // [rsp+7D0h] [rbp-650h]
  int v445; // [rsp+7E0h] [rbp-640h]
  void *v446; // [rsp+7E8h] [rbp-638h]
  __m128i v447; // [rsp+7F0h] [rbp-630h]
  __int64 v448; // [rsp+800h] [rbp-620h] BYREF
  __int128 v449; // [rsp+808h] [rbp-618h]
  void *v450; // [rsp+818h] [rbp-608h]
  __m128i v451; // [rsp+820h] [rbp-600h]
  __int64 (__fastcall **v452)(); // [rsp+830h] [rbp-5F0h] BYREF
  __int64 v453; // [rsp+838h] [rbp-5E8h]
  __m128i v454; // [rsp+840h] [rbp-5E0h] BYREF
  __m128i v455; // [rsp+850h] [rbp-5D0h] BYREF
  __m128i v456; // [rsp+860h] [rbp-5C0h] BYREF
  __m128i v457; // [rsp+870h] [rbp-5B0h] BYREF
  __m128i v458; // [rsp+880h] [rbp-5A0h] BYREF
  __m128i v459; // [rsp+890h] [rbp-590h] BYREF
  __m128i v460; // [rsp+8A0h] [rbp-580h] BYREF
  __m128i v461; // [rsp+8B0h] [rbp-570h] BYREF
  __m128i v462; // [rsp+8C0h] [rbp-560h] BYREF
  __m128i v463; // [rsp+8D0h] [rbp-550h] BYREF
  __m128i v464; // [rsp+8E0h] [rbp-540h] BYREF
  __m128i v465; // [rsp+8F0h] [rbp-530h] BYREF
  __int64 v466; // [rsp+900h] [rbp-520h] BYREF
  __int64 v467; // [rsp+908h] [rbp-518h]
  int v468; // [rsp+910h] [rbp-510h]
  unsigned __int64 v469; // [rsp+920h] [rbp-500h]
  __m128i v470; // [rsp+928h] [rbp-4F8h] BYREF
  __m128i v471; // [rsp+938h] [rbp-4E8h] BYREF
  __m128i v472; // [rsp+948h] [rbp-4D8h] BYREF
  __int64 v473; // [rsp+958h] [rbp-4C8h]
  __m128i v474; // [rsp+960h] [rbp-4C0h] BYREF
  __m128i v475; // [rsp+970h] [rbp-4B0h] BYREF
  __int64 v476; // [rsp+980h] [rbp-4A0h]
  int v477; // [rsp+988h] [rbp-498h]
  __m128i v478; // [rsp+990h] [rbp-490h] BYREF
  __m128i v479; // [rsp+9A0h] [rbp-480h] BYREF
  __int64 v480; // [rsp+9B0h] [rbp-470h]
  void *v481; // [rsp+9B8h] [rbp-468h]
  __m128i v482; // [rsp+9C0h] [rbp-460h] BYREF
  __int64 v483; // [rsp+9D0h] [rbp-450h]
  void *v484; // [rsp+9D8h] [rbp-448h]
  __m128i v485; // [rsp+9E0h] [rbp-440h] BYREF
  void *v486; // [rsp+9F0h] [rbp-430h]
  __m128i v487; // [rsp+9F8h] [rbp-428h] BYREF
  void *v488; // [rsp+A08h] [rbp-418h]
  __m128i v489; // [rsp+A10h] [rbp-410h] BYREF
  __int64 v490[2]; // [rsp+A20h] [rbp-400h] BYREF
  void *v491; // [rsp+A30h] [rbp-3F0h]
  __m128i v492; // [rsp+A38h] [rbp-3E8h] BYREF
  int v493; // [rsp+A48h] [rbp-3D8h]
  void *v494; // [rsp+A50h] [rbp-3D0h]
  __m128i v495; // [rsp+A58h] [rbp-3C8h] BYREF
  __int64 v496; // [rsp+A68h] [rbp-3B8h]
  __m128i v497; // [rsp+A70h] [rbp-3B0h] BYREF
  void *v498; // [rsp+A80h] [rbp-3A0h]
  __m128i v499; // [rsp+A88h] [rbp-398h] BYREF
  unsigned __int64 *v500; // [rsp+A98h] [rbp-388h] BYREF
  unsigned __int64 *v501; // [rsp+AA0h] [rbp-380h]
  __m128i v502; // [rsp+AA8h] [rbp-378h] BYREF
  __m128i v503; // [rsp+AB8h] [rbp-368h] BYREF
  __m128i v504; // [rsp+AC8h] [rbp-358h] BYREF
  __m128i v505; // [rsp+AD8h] [rbp-348h] BYREF
  __m128i v506; // [rsp+AE8h] [rbp-338h] BYREF
  __m128i v507; // [rsp+AF8h] [rbp-328h] BYREF
  __m128i v508; // [rsp+B08h] [rbp-318h] BYREF
  __m128i v509; // [rsp+B18h] [rbp-308h] BYREF
  __m128i v510; // [rsp+B28h] [rbp-2F8h] BYREF
  __m128i v511; // [rsp+B38h] [rbp-2E8h] BYREF
  __m128i v512; // [rsp+B48h] [rbp-2D8h] BYREF
  __m128i v513; // [rsp+B58h] [rbp-2C8h] BYREF
  __int64 v514; // [rsp+B68h] [rbp-2B8h]
  __int64 v515; // [rsp+B70h] [rbp-2B0h]
  int v516; // [rsp+B78h] [rbp-2A8h]
  unsigned __int64 v517; // [rsp+B80h] [rbp-2A0h] BYREF
  __m128i v518; // [rsp+B88h] [rbp-298h]
  __m128i v519; // [rsp+B98h] [rbp-288h]
  __m128i v520; // [rsp+BA8h] [rbp-278h]
  __int64 v521; // [rsp+BB8h] [rbp-268h]
  __m128i v522; // [rsp+BC0h] [rbp-260h]
  __m128i v523; // [rsp+BD0h] [rbp-250h]
  __int64 v524; // [rsp+BE0h] [rbp-240h]
  int v525; // [rsp+BE8h] [rbp-238h]
  __m128i v526; // [rsp+BF0h] [rbp-230h]
  __m128i v527; // [rsp+C00h] [rbp-220h]
  __int64 v528; // [rsp+C10h] [rbp-210h]
  void *v529; // [rsp+C18h] [rbp-208h]
  __m128i v530; // [rsp+C20h] [rbp-200h]
  __int64 v531; // [rsp+C30h] [rbp-1F0h]
  void *v532; // [rsp+C38h] [rbp-1E8h]
  __m128i v533; // [rsp+C40h] [rbp-1E0h]
  void *v534; // [rsp+C50h] [rbp-1D0h]
  __m128i v535; // [rsp+C58h] [rbp-1C8h]
  void *v536; // [rsp+C68h] [rbp-1B8h]
  __m128i v537; // [rsp+C70h] [rbp-1B0h]
  __int64 v538; // [rsp+C80h] [rbp-1A0h] BYREF
  void *v539; // [rsp+C90h] [rbp-190h]
  __m128i v540; // [rsp+C98h] [rbp-188h]
  int v541; // [rsp+CA8h] [rbp-178h]
  void *v542; // [rsp+CB0h] [rbp-170h]
  __m128i v543; // [rsp+CB8h] [rbp-168h]
  __int64 v544; // [rsp+CC8h] [rbp-158h]
  __m128i v545; // [rsp+CD0h] [rbp-150h]
  void *v546; // [rsp+CE0h] [rbp-140h]
  __m128i v547; // [rsp+CE8h] [rbp-138h]
  unsigned __int64 *v548[2]; // [rsp+CF8h] [rbp-128h] BYREF
  __m128i v549; // [rsp+D08h] [rbp-118h]
  __m128i v550; // [rsp+D18h] [rbp-108h]
  __m128i v551; // [rsp+D28h] [rbp-F8h]
  __m128i v552; // [rsp+D38h] [rbp-E8h]
  __m128i v553; // [rsp+D48h] [rbp-D8h]
  __m128i v554; // [rsp+D58h] [rbp-C8h]
  __m128i v555; // [rsp+D68h] [rbp-B8h]
  __m128i v556; // [rsp+D78h] [rbp-A8h]
  __m128i v557; // [rsp+D88h] [rbp-98h]
  __m128i v558; // [rsp+D98h] [rbp-88h]
  __m128i v559; // [rsp+DA8h] [rbp-78h]
  __m128i v560; // [rsp+DB8h] [rbp-68h]
  __int64 v561; // [rsp+DC8h] [rbp-58h]
  __int64 v562; // [rsp+DD0h] [rbp-50h]
  int v563; // [rsp+DD8h] [rbp-48h]
  unsigned __int64 v564; // [rsp+DE8h] [rbp-38h]

  v306 = a2;
  v310 = a3;
  v308 = a4;
  v564 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 64) <= a3 )
  {
    v312.m128i_i32[0] = -4;
    return v312.m128i_u32[0];
  }
  LODWORD(v311) = a6 & 1;
  if ( (a6 & 1) == 0 && *(_QWORD *)(a1 + 1480) > 1u )
  {
    v312.m128i_i32[0] = -22;
    return v312.m128i_u32[0];
  }
  sub_1CB030(v308);
  v9 = *(_QWORD *)(a1 + 1496);
  v312.m128i_i32[0] = sub_339220(v9, 20, v306, v310, (_DWORD)v308, v10);
  if ( !v312.m128i_i32[0] )
  {
    v305 = *(unsigned __int64 ***)(v306 + 816);
    if ( !v305 )
    {
      v9 = 24;
      v93 = (unsigned __int64 **)qalloc(24);
      v305 = v93;
      if ( !v93 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v94 = v306;
      *v93 = nullptr;
      v93[1] = nullptr;
      v93[2] = nullptr;
      *(_QWORD *)(v94 + 816) = v93;
      *(_DWORD *)(v94 + 824) = *(_DWORD *)(a1 + 64);
    }
    v309 = *(_DWORD *)(a1 + 64);
    if ( v310 >= v309 )
      sub_1CF350(v9);
    v290 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v310);
    v303 = *(_QWORD *)(v290 + 56);
    v11 = (unsigned __int64 *)*v308;
    v300 = *v308;
    if ( !*v308 )
    {
      if ( !v308[2] )
      {
        v312.m128i_i32[0] = -26;
        v29 = v309;
        goto LABEL_30;
      }
      v11 = (unsigned __int64 *)v308[1];
    }
    v12 = *v11;
    v425 = -1;
    *(_OWORD *)v422 = 0;
    v13 = &v466;
    v299 = v12;
    v14 = &v454;
    v423 = 0;
    v426 = 0;
    v427 = 0;
    v430 = 0;
    v431 = 0;
    v434 = 0;
    v437 = 0;
    v439 = 0;
    v441 = 0;
    v444 = 0;
    v447 = 0;
    v449 = 0;
    v428 = 0;
    v429 = 0;
    v432 = 0;
    v433 = nullptr;
    v435 = 0;
    v436 = nullptr;
    v438 = nullptr;
    v440 = nullptr;
    v442[0] = 0;
    v442[1] = 0;
    v443 = nullptr;
    v445 = -1;
    v446 = nullptr;
    v448 = 0;
    v450 = nullptr;
    v424 = (__m128i)-1LL;
    v451 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_407240);
    v16 = v312.m128i_i32[0];
    v452 = nullptr;
    v453 = 0;
    do
    {
      v14[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v14 += 2;
      v14[-2] = si128;
      v14[-1].m128i_i64[1] = 0;
    }
    while ( v14 != (__m128i *)&v466 );
    v312.m128i_i32[0] = v16;
    v466 = 0;
    v467 = -1;
    v468 = -1;
    v297 = *v305;
    if ( !*v305 )
      goto LABEL_17;
    v307 = **v305;
    v17 = v307 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v307 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v31 = 0;
      LOBYTE(v307) = 0;
      if ( *(_DWORD *)v303 == 55 && (_DWORD)elf_gnu_hash_indexes == -1 )
      {
        v18 = 24;
        goto LABEL_302;
      }
      goto LABEL_36;
    }
    if ( (*(_BYTE *)v17 & 2) != 0 )
      goto LABEL_17;
    v9 = v16;
    while ( 1 )
    {
      v13 = *(__int64 **)(v17 + 24);
      v18 = v17 + 24;
      if ( v299 >= (unsigned __int64)v13 )
        break;
      v17 = *(_QWORD *)(v17 + 8);
LABEL_16:
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_17;
    }
    if ( (unsigned __int64)v13 < v299 )
    {
      v17 = *(_QWORD *)(v17 + 16);
      goto LABEL_16;
    }
    v312.m128i_i32[0] = v9;
    if ( v297 != (unsigned __int64 *)v17 )
    {
      v31 = 0;
      LOBYTE(v307) = 0;
      if ( *(_DWORD *)v303 == 55 && *(_DWORD *)(v17 + 624) == -1 )
      {
LABEL_302:
        *(_BYTE *)(v303 + 32) = 7;
        v145 = *(_DWORD *)(v18 + 592);
        v146 = v309;
        *(_DWORD *)(v303 + 40) = v145;
        sub_62DA0(a1, 0, (__int64)"replaced jump to outline by goto %d", v146);
LABEL_250:
        if ( v452 )
        {
          sub_7EA40((unsigned __int64 **)&v452);
          if ( v452 )
            qfree(v452);
        }
        if ( v450 )
        {
          v451.m128i_i64[0] = 0;
          qfree(v450);
        }
        v121 = v448;
        if ( v448 )
        {
          v122 = v449;
          if ( (_QWORD)v449 )
          {
            v123 = v312.m128i_i32[0];
            v124 = 0;
            v125 = 0;
            do
            {
              v126 = (_QWORD *)(v121 + v124);
              clear_tinfo_t(v121 + v124 + 80);
              v127 = *(_QWORD *)(v121 + v124 + 56);
              if ( v127 )
              {
                v126[8] = 0;
                qfree(v127);
              }
              v128 = v126[4];
              if ( v128 )
              {
                v126[5] = 0;
                qfree(v128);
              }
              ++v125;
              v124 += 104;
              cleanup_argloc(v126);
              v121 = v448;
            }
            while ( v122 != v125 );
            v312.m128i_i32[0] = v123;
          }
          *(_QWORD *)&v449 = 0;
          qfree(v121);
        }
        if ( v446 )
        {
          v447.m128i_i64[0] = 0;
          qfree(v446);
        }
        if ( v443 )
        {
          v444.m128i_i64[0] = 0;
          qfree(v443);
        }
        qfree(v442[0]);
        if ( v440 )
        {
          v441.m128i_i64[0] = 0;
          qfree(v440);
        }
        if ( v438 )
        {
          v439.m128i_i64[0] = 0;
          qfree(v438);
        }
        if ( v436 )
        {
          v437.m128i_i64[0] = 0;
          qfree(v436);
        }
        if ( v433 )
        {
          v434.m128i_i64[0] = 0;
          qfree(v433);
        }
        if ( v422[1] )
        {
          v423.m128i_i64[0] = 0;
          qfree(v422[1]);
        }
        return v312.m128i_u32[0];
      }
LABEL_36:
      v32 = (void **)(v17 + 32);
LABEL_37:
      v33 = v306;
      v34 = (unsigned __int64)v32[72] + *(_QWORD *)(v306 + 808);
      *(_QWORD *)(v306 + 808) = v34;
      if ( (int)(*(_DWORD *)(*(_QWORD *)(a1 + 1496) + 652LL) << 10) < v34 )
      {
        v312.m128i_i32[0] = -29;
        goto LABEL_58;
      }
      v298 = v310 + 1;
      v295 = *(_DWORD *)v303 != 55;
      if ( *(_DWORD *)v303 != 55 )
      {
        v35 = *(_DWORD *)(v33 + 824);
        if ( v35 > (int)v310 && v35 <= (int)(v310 + 1) )
        {
          v9 = a1;
          v269 = sub_64DD0(a1, *(_QWORD *)(v303 + 24), *(_QWORD *)(v290 + 40), 1);
          if ( !v269 )
          {
            v312.m128i_i32[0] = -22;
            goto LABEL_58;
          }
          v298 = *(_DWORD *)(v269 + 72);
        }
      }
      v319 = off_4BF208;
      v321 = 0u;
      v325 = v305;
      v335 = v307 | v31 ^ 1;
      v322 = 0;
      v323 = 0;
      v324 = 0;
      v326 = v32;
      v327 = 0;
      v329 = 0;
      v331 = 0;
      v333 = v295;
      v334 = v31;
      v320 = a1;
      n = v295 & v31;
      v328 = 0;
      v330 = 0;
      v332 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v309), _mm_cvtsi32_si128(v298)).m128i_u64[0];
      if ( (a6 & 1) != 0 && (v295 & (unsigned __int8)v31) != 0 )
      {
        if ( v309 >= *(_DWORD *)(a1 + 64) )
          sub_1CF350(v9);
        if ( !v300 )
          goto LABEL_297;
        v129 = *(_QWORD *)v300;
        v291 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v309);
        v130 = *(_QWORD *)(*(_QWORD *)(v291 + 64) + 1504LL);
        v305 = *(unsigned __int64 ***)(v291 + 64);
        v315 = 0;
        v316 = 0;
        (*(void (__fastcall **)(__int64, unsigned __int64 *, __int64))(*(_QWORD *)v130 + 368LL))(v130, &v315, v129);
        v131 = (__int32 *)v315;
        v307 = v315 + 4 * v316;
        if ( v315 == v307 )
          goto LABEL_293;
        v304.m128i_i64[0] = v130 + 224;
        while ( 1 )
        {
          v312.m128i_i32[0] = *v131;
          v137 = v312.m128i_i32[0];
          if ( sub_60730(v304.m128i_i64[0], v312.m128i_i32[0]) )
          {
            v138 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v130 + 32LL))(v130, v137);
            v139 = v138;
            if ( v138 <= 0 )
            {
              if ( !under_debugger )
                sub_37E160(52736);
              goto LABEL_569;
            }
            v157 = sub_133F40(v305, v138, 1);
            if ( v157 == -1 )
            {
LABEL_292:
              v307 = v315;
LABEL_293:
              if ( v307 )
              {
                *(_QWORD *)&v316 = 0;
                qfree(v307);
              }
              v142 = 0;
              v307 = 0;
              for ( i = *(_QWORD *)v300; v142 < (unsigned __int64)v328; ++v142 )
              {
                v143 = (_QWORD *)j__qalloc_or_throw(80);
                v143[4] = 0xFFFFFFFF00000000LL;
                v143[5] = 0;
                v143[6] = 0xFFFFFFFF00000000LL;
                v143[7] = 0;
                v143[8] = 0xFFFFFFFF00000000LL;
                v143[9] = 0;
                v305 = (unsigned __int64 **)(v143 + 4);
                v312.m128i_i64[0] = (__int64)v143;
                v304.m128i_i64[0] = (__int64)(v143 + 8);
                sub_32B920(v143, i);
                v144 = v305;
                *(_DWORD *)v312.m128i_i64[0] = 4;
                sub_120F80((__int64)v144, (unsigned __int8 *)(v327 + 16 * v142));
                sub_120F80(v304.m128i_i64[0], (unsigned __int8 *)(v329 + 16 * v142));
                v307 = (unsigned __int64)sub_9EF60(v291, v312.m128i_i64[0], v307);
              }
LABEL_297:
              v36 = *((_DWORD *)v32 + 146);
              v39 = &v319;
              if ( *((_DWORD *)v32 + 147) <= (signed int)v36 )
              {
LABEL_142:
                *((_DWORD *)v32 + 148) = v298;
                goto LABEL_143;
              }
LABEL_44:
              v312.m128i_i64[0] = (__int64)&v319;
              while ( v36 < *(_DWORD *)(a1 + 64) )
              {
                v38 = *(const __m128i **)(*(_QWORD *)(a1 + 528) + 8LL * v36);
                if ( !v334 )
                {
                  v331 = -*(_QWORD *)(*(_QWORD *)(v320 + 1472) + 40 * v38[32].m128i_i64[0] + 8);
                  v38 = (const __m128i *)sub_65110(v320, v38, *(unsigned int *)(v320 + 64), 0);
                }
                v39 = (__int64 (__fastcall ***)())v312.m128i_i64[0];
                if ( v335 )
                  sub_1D48E0(v312.m128i_i64[0], v38[2].m128i_i64, 0);
                if ( (unsigned int)sub_11B630(v38, v312.m128i_i64[0]) )
                {
                  v312.m128i_i32[0] = -22;
                  goto LABEL_57;
                }
                if ( v335 )
                {
                  sub_1D48E0(v312.m128i_i64[0], &v38[2].m128i_i64[1], 0);
                  v47 = v38[2].m128i_u64[0];
                  if ( v47 >= v38[2].m128i_i64[1] )
                  {
                    v48 = v38[3].m128i_i64[1];
                    if ( v48 )
                      v47 = *(_QWORD *)(v48 + 24);
                    v304.m128i_i64[0] = v47;
                    v307 = sub_32BF20(v320, v47);
                    item_end = get_item_end(v307);
                    v50 = item_end - v307;
                    if ( v50 > 4 )
                      v50 = 4;
                    v38[2].m128i_i64[1] = v304.m128i_i64[0] + v50;
                  }
                }
                v37 = v38[1].m128i_i32[2];
                BYTE1(v37) &= ~2u;
                if ( (_DWORD)v311 )
                {
                  v37 |= 0x40080u;
                  v38[1].m128i_i32[2] = v37;
                  v38[32].m128i_i64[0] = *(_QWORD *)(a1 + 1480);
                }
                else
                {
                  LOBYTE(v37) = v37 | 0x80;
                }
                ++v36;
                v38[1].m128i_i32[2] = v37 | 0x20000;
                if ( *((_DWORD *)v32 + 147) <= (signed int)v36 )
                  goto LABEL_141;
              }
              if ( !under_debugger )
                sub_37E160(52719);
LABEL_569:
              BUG();
            }
            v140 = v328;
            v141 = v327;
            if ( *((_QWORD *)&v328 + 1) < (unsigned __int64)(v328 + 1) )
            {
              v302 = v157;
              v327 = qvector_reserve(&v327, v327, v328 + 1, 16);
              v141 = v327;
              v157 = v302;
              v140 = v328;
            }
            v132 = 16 * v140 + v141;
            *(_QWORD *)v132 = 0xFFFFFFFF00000000LL;
            v133 = v312.m128i_i32[0];
            *(_QWORD *)(v132 + 8) = 0;
            *(_QWORD *)&v328 = v328 + 1;
            *(_BYTE *)v132 = 1;
            *(_DWORD *)(v132 + 8) = v133;
            *(_DWORD *)(v132 + 4) = v139;
            v134 = v330;
            v135 = v329;
            if ( *((_QWORD *)&v330 + 1) < (unsigned __int64)(v330 + 1) )
            {
              v312.m128i_i32[0] = v157;
              v329 = qvector_reserve(&v329, v329, v330 + 1, 16);
              v135 = v329;
              v157 = v312.m128i_i32[0];
              v134 = v330;
            }
            v136 = 16 * v134 + v135;
            *(_QWORD *)v136 = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v136 + 8) = 0;
            *(_QWORD *)&v330 = v330 + 1;
            *(_BYTE *)v136 = 1;
            *(_DWORD *)(v136 + 8) = v157;
            *(_DWORD *)(v136 + 4) = v139;
          }
          if ( (__int32 *)v307 == ++v131 )
            goto LABEL_292;
        }
      }
      v36 = *((_DWORD *)v32 + 146);
      if ( (signed int)v36 < *((_DWORD *)v32 + 147) )
        goto LABEL_44;
      v39 = &v319;
LABEL_141:
      if ( n )
        goto LABEL_142;
LABEL_143:
      if ( *(_DWORD *)v303 != 55 )
        *(_DWORD *)v303 = 55;
      v83 = v309;
      *(_BYTE *)(v303 + 32) = 7;
      *(_DWORD *)(v303 + 40) = v83;
      sub_1D1760(a1, v83);
      if ( (_DWORD)v311 )
      {
        sub_1C8F40(v314, v313, (__int64 *)v32 + 37);
        if ( v313[0] < 0 )
        {
          v313[0] = 0;
          v305 = nullptr;
        }
        else
        {
          v305 = (unsigned __int64 **)v313[0];
        }
        v84 = (unsigned __int64)v32[14] + *((int *)v32 + 23);
        v304.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
        if ( v300 )
        {
          v315 = 0;
          v312.m128i_i64[0] = *(_QWORD *)(v300 + 32) + *(unsigned __int16 *)(v300 + 40);
          v311 = &v315;
          if ( (unsigned __int8)get_func_frame(&v315, v300)
            && (tinfo_size = get_tinfo_size(0, v315, 0), v312.m128i_i64[0] < tinfo_size) )
          {
            v307 = tinfo_size - v312.m128i_i64[0];
          }
          else
          {
            v307 = 0;
          }
          *(_QWORD *)&v317[0] = 0;
          v317[1] = 0;
          func_tail_iterator_set(v317, v300, -1);
          v85 = *(_QWORD **)&v317[0];
          if ( !*(_QWORD *)&v317[0] )
            goto LABEL_531;
          DWORD2(v317[0]) = 0;
          if ( *(int *)(*(_QWORD *)&v317[0] + 128LL) <= 0 )
          {
LABEL_160:
            v90 = (unsigned __int64 **)v307;
            if ( (unsigned __int64)v305 >= v307 )
              v90 = v305;
            v91 = (char *)v90 + v312.m128i_i64[0];
            lock_func_range(v85, 0);
          }
          else
          {
            v86 = 0;
LABEL_313:
            v85 = (_QWORD *)(v85[17] + 16LL * v86);
            while ( 1 )
            {
              func = get_func(*v85);
              if ( func )
              {
                v88 = *(_QWORD *)(func + 32) + *(unsigned __int16 *)(func + 40);
                v89 = v312.m128i_i64[0];
                if ( v312.m128i_i64[0] < v88 )
                  v89 = *(_QWORD *)(func + 32) + *(unsigned __int16 *)(func + 40);
                v312.m128i_i64[0] = v89;
                if ( (unsigned __int8)get_func_frame(v311, func) )
                {
                  v158 = get_tinfo_size(0, v315, 0);
                  v159 = v158 - v88;
                  if ( v307 >= v158 - v88 )
                    v159 = v307;
                  if ( v88 >= v158 )
                    v159 = v307;
                  v307 = v159;
                }
              }
              v85 = *(_QWORD **)&v317[0];
              if ( !*(_QWORD *)&v317[0] )
                break;
              v86 = DWORD2(v317[0]) + 1;
              if ( *(_DWORD *)(*(_QWORD *)&v317[0] + 128LL) <= DWORD2(v317[0]) + 1 )
                goto LABEL_160;
              ++DWORD2(v317[0]);
              if ( v86 >= 0 )
                goto LABEL_313;
            }
LABEL_531:
            v271 = (unsigned __int64 **)v307;
            if ( (unsigned __int64)v305 >= v307 )
              v271 = v305;
            v91 = (char *)v271 + v312.m128i_i64[0];
          }
          clear_tinfo_t(v311);
        }
        else
        {
          v91 = nullptr;
        }
        v92 = &v91[v304.m128i_i32[0] - 1];
        if ( v84 < (unsigned __int64)v32[7] + ((unsigned __int64)v92 & -v304.m128i_i32[0]) )
          v84 = (unsigned __int64)v32[7] + ((unsigned __int64)v92 & -v304.m128i_i32[0]);
      }
      else
      {
        v84 = 0;
      }
      v312.m128i_i32[0] = sub_1D5620((__int64)v39, *(_QWORD *)(v303 + 24), v84);
      if ( v312.m128i_i32[0] )
      {
LABEL_57:
        sub_1D0550(v39);
        goto LABEL_58;
      }
      nullsub_115();
      v116 = *(_QWORD *)(a1 + 1456);
      v117 = *(_QWORD *)(a1 + 1448);
      v118 = v116 + 1;
      if ( *(_QWORD *)(a1 + 1464) < (unsigned __int64)(v116 + 1) )
      {
        v270 = qvector_reserve(a1 + 1448, v117, v118, 16);
        *(_QWORD *)(a1 + 1448) = v270;
        v117 = v270;
        v116 = *(_QWORD *)(a1 + 1456);
        v118 = v116 + 1;
      }
      v119 = v309;
      *(_QWORD *)(a1 + 1456) = v118;
      v120 = 16 * v116 + v117;
      *(_DWORD *)v120 = v119;
      *(_DWORD *)(v120 + 4) = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(v120 + 8) = v298;
      *(_BYTE *)(v120 + 12) = v295;
      sub_62DA0(a1, 0, (__int64)"fixed inlined callee %a in blocks %d..%d", 0.0, v299, v119);
      v312.m128i_i32[0] = sub_339220(*(_QWORD *)(a1 + 1496), 21, v306, v310, (_DWORD)v308, v119);
      sub_1D0550(v39);
      goto LABEL_250;
    }
LABEL_17:
    if ( (*(_BYTE *)(a1 + 5) & 0x20) == 0 )
      sub_62DA0(a1, 0, (__int64)"before handling outlines");
    memset(v317, 0, sizeof(v317));
    v318 = -1;
    sub_32D950(a1 + 8, v317, v13);
    v313[0] = 0;
    v336 = off_4BE158;
    v313[1] = 0;
    v337 = 0;
    v338 = 0;
    v341 = 0;
    v342 = 0;
    v343 = 0;
    v345 = 0;
    v339 = 0;
    v340 = 0;
    v344 = 0;
    if ( v300 )
    {
      v341 = v300;
      v340 = -1;
      create_qflow_chart(&v336);
    }
    else
    {
      create_multirange_qflow_chart(&v336, v308 + 1);
    }
    sub_1CF2A0((__int64 *)&v336, v313);
    v19 = v345;
    *(_DWORD *)(a1 + 4) |= 0x2000u;
    v20 = _mm_load_si128((const __m128i *)&xmmword_407240);
    if ( v19 <= 0 )
    {
      LOBYTE(v307) = 0;
      v22 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      LOBYTE(v307) = 0;
      v21 = 0;
      do
      {
        v23 = v343 + (v21 << 6);
        if ( !(_BYTE)v307 )
        {
          LOBYTE(v307) = rangeset_t_has_common(v317, v343 + (v21 << 6), 0);
          v20 = _mm_load_si128((const __m128i *)&xmmword_407240);
        }
        v24 = *(_QWORD *)(a1 + 24);
        v25 = _mm_loadl_epi64((const __m128i *)v23);
        v26 = _mm_loadl_epi64((const __m128i *)(v23 + 8));
        v27 = *(_QWORD *)(a1 + 16);
        if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v24 + 1) )
        {
          v304.m128i_i64[0] = v26.m128i_i64[0];
          v312.m128i_i64[0] = v25.m128i_i64[0];
          v28 = qvector_reserve(a1 + 16, v27, v24 + 1, 16);
          *(_QWORD *)(a1 + 16) = v28;
          v27 = v28;
          v24 = *(_QWORD *)(a1 + 24);
          v20 = _mm_load_si128((const __m128i *)&xmmword_407240);
          v26 = _mm_loadl_epi64(&v304);
          v25 = _mm_loadl_epi64(&v312);
        }
        ++v21;
        *(__m128i *)(v27 + 16 * v24) = _mm_unpacklo_epi64(v25, v26);
        v22 = *(_QWORD *)(a1 + 24) + 1LL;
        *(_QWORD *)(a1 + 24) = v22;
      }
      while ( v345 > (int)v21 );
    }
    v349 = -1;
    v352 = 0;
    v51 = (__m128i *)&v378;
    v353 = 0;
    v356 = 0;
    v357 = 0;
    v359 = 0;
    v360 = 0;
    v362 = 0;
    v364 = 0;
    v366 = 0;
    v367 = 0;
    v368 = 0;
    v370 = -1;
    v371 = 0;
    v373 = 0;
    v375 = 0;
    v377[0] = nullptr;
    v346 = 0;
    v347 = 0;
    v348 = -1;
    v350 = 0;
    v351 = 0;
    v354 = 0;
    v355 = 0;
    v358 = 0;
    v361 = 0;
    v363 = 0;
    v365 = 0;
    v369 = 0;
    v372 = 0;
    v374 = 0;
    v376 = 0;
    v377[1] = nullptr;
    do
    {
      v51[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v51 += 2;
      v51[-2] = v20;
      v51[-1].m128i_i64[1] = 0;
    }
    while ( &v379 != v51 );
    v52.m128i_i64[0] = 0;
    v379.m128i_i64[1] = 0;
    v382 = -1;
    v53 = &v410;
    v385 = 0;
    v386 = 0;
    v389 = 0;
    v390 = nullptr;
    v392 = 0;
    v393 = nullptr;
    v395 = nullptr;
    v397 = nullptr;
    v399[0] = 0;
    v399[1] = 0;
    v400 = nullptr;
    v402 = -1;
    v403 = nullptr;
    v405 = 0;
    src = nullptr;
    v409[0] = nullptr;
    v380 = 0;
    v381 = -1;
    v383 = 0;
    v384 = 0;
    v387 = 0;
    v388 = 0;
    v391 = 0;
    v394 = 0;
    v396 = 0;
    v398 = 0;
    v401 = 0;
    v404 = 0;
    v406 = 0;
    v408 = 0;
    v409[1] = nullptr;
    do
    {
      v53[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v53 += 2;
      v53[-2] = v20;
      v53[-1].m128i_i64[1] = 0;
    }
    while ( v422 != (void **)v53 );
    v54 = nullptr;
    v379.m128i_i64[0] = *(_QWORD *)(a1 + 8);
    if ( v22 )
    {
      v54 = (void *)qalloc_or_throw(16 * v22);
      memcpy(v54, *(const void **)(a1 + 16), 16 * v22);
    }
    v55 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
    if ( v379.m128i_i64[1] )
    {
      v312 = v55;
      v380.m128i_i64[0] = 0;
      qfree(v379.m128i_i64[1]);
      v55 = _mm_load_si128(&v312);
    }
    v379.m128i_i64[1] = (__int64)v54;
    v380 = v55;
    if ( v379.m128i_i64[0] )
    {
      v319 = nullptr;
      v321 = 0;
      func_tail_iterator_set(&v319, v379.m128i_i64[0], -1);
      v56 = v319;
      LODWORD(v320) = -1;
      if ( v319 )
      {
        v57 = v380.m128i_i64[0];
        while ( 1 )
        {
          v58 = _mm_loadl_epi64((const __m128i *)v56);
          v52 = _mm_loadl_epi64((const __m128i *)(v56 + 1));
          v59 = v379.m128i_i64[1];
          if ( v380.m128i_i64[1] < (unsigned __int64)(v57 + 1) )
          {
            v304.m128i_i64[0] = v52.m128i_i64[0];
            v312.m128i_i64[0] = v58.m128i_i64[0];
            v379.m128i_i64[1] = qvector_reserve(&v379.m128i_u64[1], v379.m128i_i64[1], v57 + 1, 16);
            v57 = v380.m128i_i64[0];
            v59 = v379.m128i_i64[1];
            v52 = _mm_loadl_epi64(&v304);
            v58 = _mm_loadl_epi64(&v312);
          }
          *(__m128i *)(v59 + 16 * v57) = _mm_unpacklo_epi64(v58, v52);
          v56 = v319;
          v57 = ++v380.m128i_i64[0];
          if ( !v319 )
            goto LABEL_110;
          v60 = v320 + 1;
          if ( *((_DWORD *)v319 + 32) <= (int)v320 + 1 )
            break;
          LODWORD(v320) = v320 + 1;
          if ( v60 >= 0 )
            v56 = (__int64 (__fastcall **)())((char *)v319[17] + 16 * v60);
        }
        lock_func_range(v319, 0);
      }
    }
LABEL_110:
    v61 = (_QWORD *)*v308;
    v379.m128i_i64[0] = (__int64)v61;
    if ( !v61 )
      v61 = (_QWORD *)v379.m128i_i64[1];
    *(_QWORD *)&v381 = *v61;
    sub_1D3C20(a1, (__int64)&v379, &v346);
    v62 = a5 | 0x80000000;
    v312.m128i_i32[0] = sub_339220(*(_QWORD *)(a1 + 1496), 0, (unsigned int)&v336, a1, (unsigned int)v313, v62);
    if ( v312.m128i_i32[0] )
      goto LABEL_171;
    v312.m128i_i32[0] = sub_1CAC40(a1, (unsigned __int64)&v336, (__int64)v313, (_QWORD *)v300);
    if ( v312.m128i_i32[0] )
      goto LABEL_171;
    v63 = *(_QWORD **)(a1 + 1504);
    if ( (*(_BYTE *)(a1 + 112) & 0x10) != 0 )
    {
      v64 = v63[5];
      if ( v64 )
      {
        *(_DWORD *)(a1 + 1184) = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*v63 + 48LL))(v63, v64, 0);
        v63 = *(_QWORD **)(a1 + 1504);
      }
    }
    v65 = sub_2B3560(v63, a1 + 1312, v299);
    v66 = v306;
    v312.m128i_i32[0] = sub_1D27C0(a1, v306, (unsigned __int64)&v336, v313, (_QWORD *)v300, v62, v65);
    if ( v312.m128i_i32[0] )
    {
LABEL_171:
      sub_1D3C20(a1, (__int64)&v346, &v379);
      goto LABEL_172;
    }
    v69 = *(_DWORD *)(a1 + 64);
    v70 = v309;
    if ( v69 > (int)v309 )
    {
      v71 = v314;
      v72 = *(_DWORD *)(a1 + 64);
      v304.m128i_i64[0] = (__int64)v314;
      while ( 1 )
      {
        if ( v70 >= v72 )
        {
          if ( !under_debugger )
            sub_37E160(52719);
          goto LABEL_569;
        }
        v76 = *(_QWORD *)(a1 + 528);
        v77 = *(_QWORD *)(v76 + 8LL * v70);
        sub_B20C0(v77, v66, v76, (__int64)v71, v67, v68);
        v78 = *(_QWORD *)(v77 + 56);
        if ( !v78 )
          goto LABEL_124;
        v79 = *(_DWORD *)v78;
        if ( *(_DWORD *)v78 <= 0x34u )
        {
          v71 = (_QWORD *)(v78 + 64);
          v312.m128i_i64[0] = v78 + 64;
          if ( v79 <= 0x29 )
            goto LABEL_124;
        }
        else
        {
          if ( v79 != 55 )
            goto LABEL_124;
          v312.m128i_i64[0] = v78 + 32;
        }
        v73 = v312.m128i_i64[0];
        sub_11F840(v304.m128i_i64[0], (unsigned __int8 *)v312.m128i_i64[0]);
        v66 = *(_QWORD *)(v78 + 24);
        v74 = sub_1CF370(a1, v66, v73, 0);
        v75 = v74;
        if ( !v74 )
        {
          v66 = *(_QWORD *)(v312.m128i_i64[0] + 8);
          if ( !(unsigned __int8)sub_32D8E0(a1 + 8, v66) )
            goto LABEL_123;
          sub_62DA0(a1, 0, (__int64)"%a: resolve block for %a", v65, *(double *)v52.m128i_i64);
LABEL_136:
          sub_65D20(a1, v309, v69);
          v82 = v304.m128i_i64[0];
          *(_QWORD *)(a1 + 488) = *(_QWORD *)(v78 + 24);
          sub_118BA0(v82);
          sub_1D3C20(a1, (__int64)&v346, &v379);
          v312.m128i_i32[0] = -22;
LABEL_172:
          if ( v409[0] )
          {
            sub_7EA40(v409);
            if ( v409[0] )
              qfree(v409[0]);
          }
          if ( src )
          {
            *(_QWORD *)&v408 = 0;
            qfree(src);
          }
          v95 = v405;
          if ( v405 )
          {
            v96 = v406;
            if ( (_QWORD)v406 )
            {
              v97 = 0;
              v98 = 0;
              do
              {
                v99 = (_QWORD *)(v95 + v97);
                clear_tinfo_t(v95 + v97 + 80);
                v100 = *(_QWORD *)(v95 + v97 + 56);
                if ( v100 )
                {
                  v99[8] = 0;
                  qfree(v100);
                }
                v101 = v99[4];
                if ( v101 )
                {
                  v99[5] = 0;
                  qfree(v101);
                }
                ++v98;
                v97 += 104;
                cleanup_argloc(v99);
                v95 = v405;
              }
              while ( v96 != v98 );
            }
            *(_QWORD *)&v406 = 0;
            qfree(v95);
          }
          if ( v403 )
          {
            *(_QWORD *)&v404 = 0;
            qfree(v403);
          }
          if ( v400 )
          {
            *(_QWORD *)&v401 = 0;
            qfree(v400);
          }
          qfree(v399[0]);
          if ( v397 )
          {
            *(_QWORD *)&v398 = 0;
            qfree(v397);
          }
          if ( v395 )
          {
            *(_QWORD *)&v396 = 0;
            qfree(v395);
          }
          if ( v393 )
          {
            *(_QWORD *)&v394 = 0;
            qfree(v393);
          }
          if ( v390 )
          {
            *(_QWORD *)&v391 = 0;
            qfree(v390);
          }
          if ( v379.m128i_i64[1] )
          {
            v380.m128i_i64[0] = 0;
            qfree(v379.m128i_i64[1]);
          }
          if ( v377[0] )
          {
            sub_7EA40(v377);
            if ( v377[0] )
              qfree(v377[0]);
          }
          if ( v375 )
          {
            *(_QWORD *)&v376 = 0;
            qfree(v375);
          }
          v102 = v373;
          if ( v373 )
          {
            v103 = v374;
            if ( (_QWORD)v374 )
            {
              v104 = 0;
              v105 = 0;
              do
              {
                v106 = (_QWORD *)(v102 + v104);
                clear_tinfo_t(v102 + v104 + 80);
                v107 = *(_QWORD *)(v102 + v104 + 56);
                if ( v107 )
                {
                  v106[8] = 0;
                  qfree(v107);
                }
                v108 = v106[4];
                if ( v108 )
                {
                  v106[5] = 0;
                  qfree(v108);
                }
                ++v105;
                v104 += 104;
                cleanup_argloc(v106);
                v102 = v373;
              }
              while ( v103 != v105 );
            }
            *(_QWORD *)&v374 = 0;
            qfree(v102);
          }
          if ( v371 )
          {
            *(_QWORD *)&v372 = 0;
            qfree(v371);
          }
          if ( v368 )
          {
            *(_QWORD *)&v369 = 0;
            qfree(v368);
          }
          qfree(v366);
          if ( v364 )
          {
            *(_QWORD *)&v365 = 0;
            qfree(v364);
          }
          if ( v362 )
          {
            *(_QWORD *)&v363 = 0;
            qfree(v362);
          }
          if ( v360 )
          {
            *(_QWORD *)&v361 = 0;
            qfree(v360);
          }
          if ( v357 )
          {
            *(_QWORD *)&v358 = 0;
            qfree(v357);
          }
          if ( v346.m128i_i64[1] )
          {
            *(_QWORD *)&v347 = 0;
            qfree(v346.m128i_i64[1]);
          }
          v109 = v343;
          v336 = off_4BE158;
          if ( v343 )
          {
            v110 = v344;
            if ( (_QWORD)v344 )
            {
              v111 = v312.m128i_i32[0];
              v112 = 0;
              do
              {
                v113 = (_QWORD *)(v109 + (v112 << 6));
                v114 = v113[5];
                if ( v114 )
                {
                  v113[6] = 0;
                  qfree(v114);
                }
                v115 = v113[2];
                if ( v115 )
                {
                  v113[3] = 0;
                  qfree(v115);
                }
                ++v112;
                v109 = v343;
              }
              while ( v110 != v112 );
              v312.m128i_i32[0] = v111;
            }
            *(_QWORD *)&v344 = 0;
            qfree(v109);
          }
          if ( v338 )
          {
            *(_QWORD *)&v339 = 0;
            qfree(v338);
          }
          qfree(v313[0]);
          if ( *(_QWORD *)&v317[0] )
          {
            *((_QWORD *)&v317[0] + 1) = 0;
            qfree(*(_QWORD *)&v317[0]);
          }
LABEL_58:
          if ( v452 )
          {
            sub_7EA40((unsigned __int64 **)&v452);
            if ( v452 )
              qfree(v452);
          }
          if ( v450 )
          {
            v451.m128i_i64[0] = 0;
            qfree(v450);
          }
          v40 = v448;
          if ( v448 )
          {
            v41 = v449;
            if ( (_QWORD)v449 )
            {
              v42 = 0;
              v43 = 0;
              do
              {
                v44 = (_QWORD *)(v40 + v42);
                clear_tinfo_t(v40 + v42 + 80);
                v45 = *(_QWORD *)(v40 + v42 + 56);
                if ( v45 )
                {
                  v44[8] = 0;
                  qfree(v45);
                }
                v46 = v44[4];
                if ( v46 )
                {
                  v44[5] = 0;
                  qfree(v46);
                }
                ++v43;
                v42 += 104;
                cleanup_argloc(v44);
                v40 = v448;
              }
              while ( v41 != v43 );
            }
            *(_QWORD *)&v449 = 0;
            qfree(v40);
          }
          if ( v446 )
          {
            v447.m128i_i64[0] = 0;
            qfree(v446);
          }
          if ( v443 )
          {
            v444.m128i_i64[0] = 0;
            qfree(v443);
          }
          qfree(v442[0]);
          if ( v440 )
          {
            v441.m128i_i64[0] = 0;
            qfree(v440);
          }
          if ( v438 )
          {
            v439.m128i_i64[0] = 0;
            qfree(v438);
          }
          if ( v436 )
          {
            v437.m128i_i64[0] = 0;
            qfree(v436);
          }
          if ( v433 )
          {
            v434.m128i_i64[0] = 0;
            qfree(v433);
          }
          if ( v422[1] )
          {
            v423.m128i_i64[0] = 0;
            qfree(v422[1]);
          }
          v29 = *(_DWORD *)(a1 + 64);
LABEL_30:
          sub_65D20(a1, v309, v29);
          return v312.m128i_u32[0];
        }
        v296 = v69 <= *(_DWORD *)(v74 + 72) || (int)v309 > *(_DWORD *)(v74 + 72);
        if ( !v296 )
          goto LABEL_123;
        v66 = v304.m128i_i64[0];
        sub_120F80(v312.m128i_i64[0], (unsigned __int8 *)v304.m128i_i64[0]);
        v80 = *v305;
        if ( !*v305 )
          goto LABEL_134;
        v81 = *v80 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v81 )
          goto LABEL_123;
        if ( (*(_BYTE *)(*v80 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_134;
        v66 = *(_QWORD *)(v75 + 32);
        while ( 1 )
        {
          v147 = *(_QWORD *)(v81 + 24);
          if ( v66 >= v147 )
            break;
          v81 = *(_QWORD *)(v81 + 8);
LABEL_306:
          if ( (*(_BYTE *)v81 & 2) != 0 )
            goto LABEL_134;
        }
        if ( v147 < v66 )
          break;
        if ( v80 != (unsigned __int64 *)v81 )
          goto LABEL_123;
LABEL_134:
        if ( *(_BYTE *)v312.m128i_i64[0] != 6
          || (v148 = v312.m128i_i64[0],
              sub_334A40(*(_QWORD *)(a1 + 1504), v312.m128i_i64[0]),
              v149 = *(_QWORD *)(v148 + 8),
              v288 = v149,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) == v149)
          || v149 == -1 )
        {
LABEL_135:
          sub_62DA0(a1, 0, (__int64)"%a: branch out of outlined function", v65);
          goto LABEL_136;
        }
        v287 = 0;
        v150 = v309;
        while ( 2 )
        {
          if ( v150 >= *(_DWORD *)(a1 + 64) )
          {
            if ( !under_debugger )
              sub_37E160(52719);
            goto LABEL_569;
          }
          v154 = *(_QWORD *)(a1 + 528);
          LODWORD(v307) = v150;
          v155 = *(_QWORD *)(v154 + 8LL * v150);
          v66 = *(_QWORD *)(v155 + 32);
          v156 = sub_32BF20(a1, v66);
          v153 = v307;
          if ( v288 != v156 )
          {
            v151 = *(_QWORD *)(v155 + 48);
            if ( !v151 || (v66 = *(_QWORD *)(v151 + 24), v152 = sub_32BF20(a1, v66), v153 = v307, v288 != v152) )
            {
LABEL_320:
              v150 = v153 + 1;
              if ( v69 == v150 )
                goto LABEL_541;
              continue;
            }
          }
          break;
        }
        if ( (*(_BYTE *)(v155 + 24) & 2) != 0 )
        {
          if ( v287 )
            v155 = v287;
          v287 = v155;
          goto LABEL_320;
        }
        v287 = v155;
LABEL_541:
        if ( !v287 )
          goto LABEL_135;
        v275 = (_BYTE *)v312.m128i_i64[0];
        *(_DWORD *)(v312.m128i_i64[0] + 8) = *(_DWORD *)(v287 + 72);
        *v275 = 7;
        LOBYTE(v307) = v296;
LABEL_123:
        sub_118BA0(v304.m128i_i64[0]);
LABEL_124:
        if ( v69 == ++v70 )
          goto LABEL_332;
        v72 = *(_DWORD *)(a1 + 64);
      }
      v81 = *(_QWORD *)(v81 + 16);
      goto LABEL_306;
    }
LABEL_332:
    sub_1D3C20(a1, (__int64)&v346, &v379);
    v160 = v380.m128i_i64[0];
    v161 = nullptr;
    v422[0] = (void *)v379.m128i_i64[0];
    if ( v380.m128i_i64[0] )
    {
      v161 = (void *)qalloc_or_throw(16 * v380.m128i_i64[0]);
      memcpy(v161, (const void *)v379.m128i_i64[1], 16 * v160);
    }
    v162 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v160, (__m128i)(unsigned __int64)v160);
    if ( v422[1] )
    {
      v312 = v162;
      v423.m128i_i64[0] = 0;
      qfree(v422[1]);
      v162 = _mm_load_si128(&v312);
    }
    v423 = v162;
    v163 = _mm_loadu_si128(&v383);
    v164 = v391;
    v422[1] = v161;
    v165 = nullptr;
    v425 = v382;
    v426 = v163;
    v166 = _mm_loadu_si128(&v384);
    v167 = _mm_loadh_ps((const double *)&v381 + 1);
    v428 = v385;
    v427 = v166;
    v168 = _mm_loadu_si128(&v387);
    v429 = v386;
    v430 = v168;
    v169 = _mm_loadu_si128(&v388);
    v432 = v389;
    v424 = (__m128i)v167;
    v431 = v169;
    if ( (_QWORD)v391 )
    {
      v165 = (void *)qalloc_or_throw(40 * v391);
      memcpy(v165, v390, 40 * v164);
    }
    v170 = _mm_unpacklo_epi64((__m128i)v164, (__m128i)v164);
    if ( v433 )
    {
      v312 = v170;
      v434.m128i_i64[0] = 0;
      qfree(v433);
      v170 = _mm_load_si128(&v312);
    }
    v171 = v394;
    v433 = v165;
    v172 = nullptr;
    v434 = v170;
    v435 = v392;
    if ( (_QWORD)v394 )
    {
      v172 = (void *)qalloc_or_throw(16 * v394);
      memcpy(v172, v393, 16 * v171);
    }
    v173 = _mm_unpacklo_epi64((__m128i)v171, (__m128i)v171);
    if ( v436 )
    {
      v312 = v173;
      v437.m128i_i64[0] = 0;
      qfree(v436);
      v173 = _mm_load_si128(&v312);
    }
    v174 = v396;
    v436 = v172;
    v175 = nullptr;
    v437 = v173;
    if ( (_QWORD)v396 )
    {
      v175 = (void *)qalloc_or_throw(16 * v396);
      memcpy(v175, v395, 16 * v174);
    }
    v176 = _mm_unpacklo_epi64((__m128i)v174, (__m128i)v174);
    if ( v438 )
    {
      v312 = v176;
      v439.m128i_i64[0] = 0;
      qfree(v438);
      v176 = _mm_load_si128(&v312);
    }
    v177 = v398;
    v438 = v175;
    v178 = nullptr;
    v439 = v176;
    if ( (_QWORD)v398 )
    {
      v178 = (void *)qalloc_or_throw(16 * v398);
      memcpy(v178, v397, 16 * v177);
    }
    v179 = _mm_unpacklo_epi64((__m128i)v177, (__m128i)v177);
    if ( v440 )
    {
      v312 = v179;
      v441.m128i_i64[0] = 0;
      qfree(v440);
      v179 = _mm_load_si128(&v312);
    }
    v440 = v178;
    v312.m128i_i64[0] = (__int64)v442;
    v441 = v179;
    sub_606D0(v442, v399);
    v180 = v401;
    v181 = nullptr;
    if ( (_QWORD)v401 )
    {
      v181 = (void *)qalloc_or_throw(16 * v401);
      memcpy(v181, v400, 16 * v180);
    }
    v182 = _mm_unpacklo_epi64((__m128i)v180, (__m128i)v180);
    if ( v443 )
    {
      v304 = v182;
      v444.m128i_i64[0] = 0;
      qfree(v443);
      v182 = _mm_load_si128(&v304);
    }
    v183 = v404;
    v443 = v181;
    v184 = nullptr;
    v444 = v182;
    v445 = v402;
    if ( (_QWORD)v404 )
    {
      v184 = (void *)qalloc_or_throw(16 * v404);
      memcpy(v184, v403, 16 * v183);
    }
    v185 = _mm_unpacklo_epi64((__m128i)v183, (__m128i)v183);
    if ( v446 )
    {
      v304 = v185;
      v447.m128i_i64[0] = 0;
      qfree(v446);
      v185 = _mm_load_si128(&v304);
    }
    v446 = v184;
    v447 = v185;
    sub_1CFE60(&v448, (__int64)&v405);
    v186 = v408;
    v187 = nullptr;
    if ( (_QWORD)v408 )
    {
      v187 = (void *)qalloc_or_throw(4 * v408);
      memcpy(v187, src, 4 * v186);
    }
    v188 = _mm_unpacklo_epi64((__m128i)v186, (__m128i)v186);
    if ( v450 )
    {
      v304 = v188;
      v451.m128i_i64[0] = 0;
      qfree(v450);
      v188 = _mm_load_si128(&v304);
    }
    v450 = v187;
    v451 = v188;
    sub_1D3A10((__int64 *)&v319, (__int64)v409);
    v189 = v452;
    v452 = v319;
    v190 = v453;
    v319 = v189;
    v453 = v320;
    v320 = v190;
    if ( !v189 )
    {
LABEL_377:
      v454 = _mm_load_si128(&v410);
      v455 = _mm_load_si128(&v411);
      v456 = _mm_load_si128(&v412);
      v457 = _mm_load_si128(&v413);
      v458 = _mm_load_si128(&v414);
      v459 = _mm_load_si128(&v415);
      v460 = _mm_load_si128(&v416);
      v461 = _mm_load_si128(&v417);
      v462 = _mm_load_si128(&v418);
      v463 = _mm_load_si128(&v419);
      v464 = _mm_load_si128(&v420);
      v465 = _mm_load_si128(&v421);
      if ( v345 <= 0 )
      {
        v198 = 0;
      }
      else
      {
        v197 = 0;
        v198 = 0;
        do
        {
          if ( sub_60730(v313, v197) )
            v198 = *(_QWORD *)(v343 + (v197 << 6) + 8) + v198 - *(_QWORD *)(v343 + (v197 << 6));
          ++v197;
        }
        while ( v345 > (int)v197 );
      }
      v466 = v198;
      v199.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v309), _mm_cvtsi32_si128(v69)).m128i_u64[0];
      v467 = v199.m128i_i64[0];
      if ( (a6 & 2) == 0 )
      {
        v200 = v423.m128i_i64[0];
        v471 = 0;
        v469 = v299;
        v470 = (__m128i)(unsigned __int64)v422[0];
        if ( v423.m128i_i64[0] )
        {
          v470.m128i_i64[1] = qalloc_or_throw(16 * v423.m128i_i64[0]);
          v471.m128i_i64[1] = v200;
          memcpy((void *)v470.m128i_i64[1], v422[1], 16 * v200);
          v471.m128i_i64[0] = v200;
        }
        v201 = _mm_load_si128(&v424);
        v481 = nullptr;
        v202 = v434.m128i_i64[0];
        v472 = v201;
        v203 = _mm_loadu_si128(&v426);
        v473 = v425;
        v474 = v203;
        v204 = _mm_loadu_si128(&v427);
        v476 = v428;
        v475 = v204;
        v205 = _mm_loadu_si128(&v430);
        v477 = v429;
        v478 = v205;
        v206 = _mm_loadu_si128(&v431);
        v480 = v432;
        v479 = v206;
        v482 = 0;
        if ( v434.m128i_i64[0] )
        {
          v481 = (void *)qalloc_or_throw(40 * v434.m128i_i64[0]);
          v482.m128i_i64[1] = v202;
          memcpy(v481, v433, 40 * v202);
          v482.m128i_i64[0] = v202;
        }
        v207 = v437.m128i_i64[0];
        v484 = nullptr;
        v485 = 0;
        v483 = v435;
        if ( v437.m128i_i64[0] )
        {
          v484 = (void *)qalloc_or_throw(16 * v437.m128i_i64[0]);
          v485.m128i_i64[1] = v207;
          memcpy(v484, v436, 16 * v207);
          v485.m128i_i64[0] = v207;
        }
        v208 = v439.m128i_i64[0];
        v486 = nullptr;
        v487 = 0;
        if ( v439.m128i_i64[0] )
        {
          v486 = (void *)qalloc_or_throw(16 * v439.m128i_i64[0]);
          v487.m128i_i64[1] = v208;
          memcpy(v486, v438, 16 * v208);
          v487.m128i_i64[0] = v208;
        }
        v209 = v441.m128i_i64[0];
        v488 = nullptr;
        v489 = 0;
        if ( v441.m128i_i64[0] )
        {
          v488 = (void *)qalloc_or_throw(16 * v441.m128i_i64[0]);
          v489.m128i_i64[1] = v209;
          memcpy(v488, v440, 16 * v209);
          v489.m128i_i64[0] = v209;
        }
        sub_5FE00(v490, v312.m128i_i64[0]);
        v210 = v444.m128i_i64[0];
        v491 = nullptr;
        v492 = 0;
        if ( v444.m128i_i64[0] )
        {
          v491 = (void *)qalloc_or_throw(16 * v444.m128i_i64[0]);
          v492.m128i_i64[1] = v210;
          memcpy(v491, v443, 16 * v210);
          v492.m128i_i64[0] = v210;
        }
        v211 = v447.m128i_i64[0];
        v494 = nullptr;
        v495 = 0;
        v493 = v445;
        if ( v447.m128i_i64[0] )
        {
          v494 = (void *)qalloc_or_throw(16 * v447.m128i_i64[0]);
          v495.m128i_i64[1] = v211;
          memcpy(v494, v446, 16 * v211);
          v495.m128i_i64[0] = v211;
        }
        v496 = 0;
        v497 = 0;
        v304.m128i_i64[0] = v449;
        if ( (_QWORD)v449 )
        {
          v276 = v449;
          v496 = qalloc_or_throw(104 * v449);
          v277 = v496;
          v278 = 0;
          v497.m128i_i64[1] = v276;
          v312.m128i_i64[0] = 0;
          while ( 1 )
          {
            v280 = v312.m128i_i64[0] + v277;
            v281 = v448 + v312.m128i_i64[0];
            *(_DWORD *)v280 = 0;
            v282 = v281;
            copy_argloc(v280, v281);
            *(_QWORD *)(v280 + 16) = *(_QWORD *)(v282 + 16);
            v283 = *(_DWORD *)(v282 + 24);
            *(_QWORD *)(v280 + 32) = 0;
            *(_DWORD *)(v280 + 24) = v283;
            *(_OWORD *)(v280 + 40) = 0;
            if ( *(_QWORD *)(v282 + 40) )
            {
              nb = *(_QWORD *)(v282 + 40);
              v284 = (void *)qalloc_or_throw(nb);
              *(_QWORD *)(v280 + 32) = v284;
              *(_QWORD *)(v280 + 48) = nb;
              memcpy(v284, *(const void **)(v282 + 32), nb);
              *(_QWORD *)(v280 + 40) = nb;
            }
            *(_QWORD *)(v280 + 56) = 0;
            *(_OWORD *)(v280 + 64) = 0;
            if ( *(_QWORD *)(v282 + 64) )
            {
              na = *(_QWORD *)(v282 + 64);
              v285 = (void *)qalloc_or_throw(na);
              *(_QWORD *)(v280 + 56) = v285;
              *(_QWORD *)(v280 + 72) = na;
              memcpy(v285, *(const void **)(v282 + 56), na);
              *(_QWORD *)(v280 + 64) = na;
            }
            *(_QWORD *)(v280 + 80) = 0;
            copy_tinfo_t(v280 + 80, v282 + 80);
            v279 = *(_QWORD *)(v282 + 88);
            v312.m128i_i64[0] += 104;
            ++v278;
            *(_QWORD *)(v280 + 88) = v279;
            *(_QWORD *)(v280 + 96) = *(_QWORD *)(v282 + 96);
            if ( v304.m128i_i64[0] == v278 )
              break;
            v277 = v496;
          }
          v497.m128i_i64[0] = v304.m128i_i64[0];
        }
        v212 = v451.m128i_i64[0];
        v498 = nullptr;
        v499 = 0;
        if ( v451.m128i_i64[0] )
        {
          v498 = (void *)qalloc_or_throw(4 * v451.m128i_i64[0]);
          v499.m128i_i64[1] = v212;
          memcpy(v498, v450, 4 * v212);
          v499.m128i_i64[0] = v212;
        }
        v213 = &v500;
        sub_1D3A10((__int64 *)&v500, (__int64)&v452);
        v502 = _mm_load_si128(&v454);
        v214 = _mm_load_si128(&v455);
        v514 = v466;
        v503 = v214;
        v215 = _mm_load_si128(&v456);
        v515 = v467;
        v504 = v215;
        v216 = _mm_load_si128(&v457);
        v516 = v468;
        v505 = v216;
        v217 = _mm_load_si128(&v458);
        v517 = v469;
        v506 = v217;
        v507 = _mm_load_si128(&v459);
        v508 = _mm_load_si128(&v460);
        v509 = _mm_load_si128(&v461);
        v510 = _mm_load_si128(&v462);
        v511 = _mm_load_si128(&v463);
        v512 = _mm_load_si128(&v464);
        v513 = _mm_load_si128(&v465);
        v218 = _mm_loadu_si128(&v470);
        v219 = _mm_loadu_si128(&v471);
        v470.m128i_i64[1] = 0;
        v519 = v219;
        v220 = _mm_loadu_si128(&v472);
        v521 = v473;
        v520 = v220;
        v221 = _mm_load_si128(&v474);
        v524 = v476;
        v522 = v221;
        v222 = _mm_load_si128(&v475);
        v525 = v477;
        v523 = v222;
        v223 = _mm_load_si128(&v478);
        v528 = v480;
        v526 = v223;
        v224 = _mm_load_si128(&v479);
        v529 = v481;
        v527 = v224;
        v225 = _mm_load_si128(&v482);
        v518 = v218;
        v530 = v225;
        v481 = nullptr;
        v531 = v483;
        v471 = 0;
        v482 = 0;
        v226 = _mm_load_si128(&v485);
        v485 = 0;
        v532 = v484;
        v533 = v226;
        v227 = _mm_loadu_si128(&v487);
        v534 = v486;
        v535 = v227;
        v228 = _mm_load_si128(&v489);
        v484 = nullptr;
        v486 = nullptr;
        v536 = v488;
        v488 = nullptr;
        v487 = 0;
        v537 = v228;
        v489 = 0;
        sub_5FE00(&v538, (__int64)v490);
        v229 = v491;
        v230 = _mm_loadu_si128(&v495);
        v491 = nullptr;
        v231 = _mm_loadu_si128(&v492);
        v539 = v229;
        v543 = v230;
        v232 = _mm_load_si128(&v497);
        v541 = v493;
        v545 = v232;
        v233 = _mm_loadu_si128(&v499);
        v542 = v494;
        v540 = v231;
        v544 = v496;
        v494 = nullptr;
        v546 = v498;
        v496 = 0;
        v548[0] = v500;
        v498 = nullptr;
        v548[1] = v501;
        v500 = nullptr;
        v501 = nullptr;
        v492 = 0;
        v495 = 0;
        v497 = 0;
        v547 = v233;
        v499 = 0;
        v549 = _mm_loadu_si128(&v502);
        v234 = _mm_loadu_si128(&v503);
        v561 = v514;
        v550 = v234;
        v235 = _mm_loadu_si128(&v504);
        v562 = v515;
        v551 = v235;
        v236 = _mm_loadu_si128(&v505);
        v563 = v516;
        v552 = v236;
        v553 = _mm_loadu_si128(&v506);
        v554 = _mm_loadu_si128(&v507);
        v555 = _mm_loadu_si128(&v508);
        v556 = _mm_loadu_si128(&v509);
        v557 = _mm_loadu_si128(&v510);
        v558 = _mm_loadu_si128(&v511);
        v559 = _mm_loadu_si128(&v512);
        v199 = _mm_loadu_si128(&v513);
        v560 = v199;
        v297 = (unsigned __int64 *)sub_1D66B0((__m128i *)v305, &v517);
        if ( v548[0] )
        {
          sub_7EA40(v548);
          if ( v548[0] )
            qfree(v548[0]);
        }
        if ( v546 )
        {
          v547.m128i_i64[0] = 0;
          qfree(v546);
        }
        v237 = v544;
        if ( v544 )
        {
          v238 = v545.m128i_i64[0];
          if ( v545.m128i_i64[0] )
          {
            v304.m128i_i64[0] = (__int64)&v500;
            v239 = 0;
            v312.m128i_i64[0] = 0;
            do
            {
              v240 = (_QWORD *)(v237 + v312.m128i_i64[0]);
              clear_tinfo_t(v237 + v312.m128i_i64[0] + 80);
              v241 = v240[7];
              if ( v241 )
              {
                v240[8] = 0;
                qfree(v241);
              }
              v242 = v240[4];
              if ( v242 )
              {
                v240[5] = 0;
                qfree(v242);
              }
              ++v239;
              cleanup_argloc(v240);
              v312.m128i_i64[0] += 104;
              v237 = v544;
            }
            while ( v238 != v239 );
            v213 = (unsigned __int64 **)v304.m128i_i64[0];
          }
          v545.m128i_i64[0] = 0;
          qfree(v237);
        }
        if ( v542 )
        {
          v543.m128i_i64[0] = 0;
          qfree(v542);
        }
        if ( v539 )
        {
          v540.m128i_i64[0] = 0;
          qfree(v539);
        }
        qfree(v538);
        if ( v536 )
        {
          v537.m128i_i64[0] = 0;
          qfree(v536);
        }
        if ( v534 )
        {
          v535.m128i_i64[0] = 0;
          qfree(v534);
        }
        if ( v532 )
        {
          v533.m128i_i64[0] = 0;
          qfree(v532);
        }
        if ( v529 )
        {
          v530.m128i_i64[0] = 0;
          qfree(v529);
        }
        if ( v518.m128i_i64[1] )
        {
          v519.m128i_i64[0] = 0;
          qfree(v518.m128i_i64[1]);
        }
        if ( v500 )
        {
          sub_7EA40(v213);
          if ( v500 )
            qfree(v500);
        }
        if ( v498 )
        {
          v499.m128i_i64[0] = 0;
          qfree(v498);
        }
        v243 = v496;
        if ( v496 )
        {
          v244 = v497.m128i_i64[0];
          if ( v497.m128i_i64[0] )
          {
            v245 = 0;
            v312.m128i_i64[0] = 0;
            do
            {
              v246 = (_QWORD *)(v243 + v312.m128i_i64[0]);
              clear_tinfo_t(v243 + v312.m128i_i64[0] + 80);
              v247 = v246[7];
              if ( v247 )
              {
                v246[8] = 0;
                qfree(v247);
              }
              v248 = v246[4];
              if ( v248 )
              {
                v246[5] = 0;
                qfree(v248);
              }
              ++v245;
              cleanup_argloc(v246);
              v312.m128i_i64[0] += 104;
              v243 = v496;
            }
            while ( v244 != v245 );
          }
          v497.m128i_i64[0] = 0;
          qfree(v243);
        }
        if ( v494 )
        {
          v495.m128i_i64[0] = 0;
          qfree(v494);
        }
        if ( v491 )
        {
          v492.m128i_i64[0] = 0;
          qfree(v491);
        }
        qfree(v490[0]);
        if ( v488 )
        {
          v489.m128i_i64[0] = 0;
          qfree(v488);
        }
        if ( v486 )
        {
          v487.m128i_i64[0] = 0;
          qfree(v486);
        }
        if ( v484 )
        {
          v485.m128i_i64[0] = 0;
          qfree(v484);
        }
        if ( v481 )
        {
          v482.m128i_i64[0] = 0;
          qfree(v481);
        }
        if ( v470.m128i_i64[1] )
        {
          v471.m128i_i64[0] = 0;
          qfree(v470.m128i_i64[1]);
        }
      }
      sub_62DA0(
        a1,
        0,
        (__int64)"inlined callee %a from block %d into blocks %d..%d",
        *(double *)v199.m128i_i64,
        v299,
        v310,
        v309);
      if ( v409[0] )
      {
        sub_7EA40(v409);
        if ( v409[0] )
          qfree(v409[0]);
      }
      if ( src )
      {
        *(_QWORD *)&v408 = 0;
        qfree(src);
      }
      v249 = v405;
      if ( v405 )
      {
        v250 = v406;
        if ( (_QWORD)v406 )
        {
          v251 = 0;
          v252 = 0;
          do
          {
            v253 = (_QWORD *)(v249 + v252);
            clear_tinfo_t(v249 + v252 + 80);
            v254 = *(_QWORD *)(v249 + v252 + 56);
            if ( v254 )
            {
              v253[8] = 0;
              qfree(v254);
            }
            v255 = v253[4];
            if ( v255 )
            {
              v253[5] = 0;
              qfree(v255);
            }
            ++v251;
            cleanup_argloc(v253);
            v249 = v405;
            v252 += 104;
          }
          while ( v250 != v251 );
        }
        *(_QWORD *)&v406 = 0;
        qfree(v249);
      }
      if ( v403 )
      {
        *(_QWORD *)&v404 = 0;
        qfree(v403);
      }
      if ( v400 )
      {
        *(_QWORD *)&v401 = 0;
        qfree(v400);
      }
      qfree(v399[0]);
      if ( v397 )
      {
        *(_QWORD *)&v398 = 0;
        qfree(v397);
      }
      if ( v395 )
      {
        *(_QWORD *)&v396 = 0;
        qfree(v395);
      }
      if ( v393 )
      {
        *(_QWORD *)&v394 = 0;
        qfree(v393);
      }
      if ( v390 )
      {
        *(_QWORD *)&v391 = 0;
        qfree(v390);
      }
      if ( v379.m128i_i64[1] )
      {
        v380.m128i_i64[0] = 0;
        qfree(v379.m128i_i64[1]);
      }
      if ( v377[0] )
      {
        sub_7EA40(v377);
        if ( v377[0] )
          qfree(v377[0]);
      }
      if ( v375 )
      {
        *(_QWORD *)&v376 = 0;
        qfree(v375);
      }
      v256 = v373;
      if ( v373 )
      {
        v257 = v374;
        if ( (_QWORD)v374 )
        {
          v258 = 0;
          v259 = 0;
          do
          {
            v260 = (_QWORD *)(v256 + v259);
            clear_tinfo_t(v256 + v259 + 80);
            v261 = *(_QWORD *)(v256 + v259 + 56);
            if ( v261 )
            {
              v260[8] = 0;
              qfree(v261);
            }
            v262 = v260[4];
            if ( v262 )
            {
              v260[5] = 0;
              qfree(v262);
            }
            ++v258;
            cleanup_argloc(v260);
            v256 = v373;
            v259 += 104;
          }
          while ( v257 != v258 );
        }
        *(_QWORD *)&v374 = 0;
        qfree(v256);
      }
      if ( v371 )
      {
        *(_QWORD *)&v372 = 0;
        qfree(v371);
      }
      if ( v368 )
      {
        *(_QWORD *)&v369 = 0;
        qfree(v368);
      }
      qfree(v366);
      if ( v364 )
      {
        *(_QWORD *)&v365 = 0;
        qfree(v364);
      }
      if ( v362 )
      {
        *(_QWORD *)&v363 = 0;
        qfree(v362);
      }
      if ( v360 )
      {
        *(_QWORD *)&v361 = 0;
        qfree(v360);
      }
      if ( v357 )
      {
        *(_QWORD *)&v358 = 0;
        qfree(v357);
      }
      if ( v346.m128i_i64[1] )
      {
        *(_QWORD *)&v347 = 0;
        qfree(v346.m128i_i64[1]);
      }
      v263 = v343;
      v336 = off_4BE158;
      if ( v343 )
      {
        v264 = v344;
        if ( (_QWORD)v344 )
        {
          v265 = 0;
          do
          {
            v266 = (_QWORD *)(v263 + (v265 << 6));
            v267 = v266[5];
            if ( v267 )
            {
              v266[6] = 0;
              qfree(v267);
            }
            v268 = v266[2];
            if ( v268 )
            {
              v266[3] = 0;
              qfree(v268);
            }
            v263 = v343;
            ++v265;
          }
          while ( v264 != v265 );
        }
        *(_QWORD *)&v344 = 0;
        qfree(v263);
      }
      if ( v338 )
      {
        *(_QWORD *)&v339 = 0;
        qfree(v338);
      }
      qfree(v313[0]);
      v9 = *(_QWORD *)&v317[0];
      if ( *(_QWORD *)&v317[0] )
      {
        *((_QWORD *)&v317[0] + 1) = 0;
        qfree(*(_QWORD *)&v317[0]);
      }
      if ( v297 != *v305 )
      {
        v17 = (unsigned __int64)v297;
        v31 = 1;
        goto LABEL_36;
      }
      v32 = v422;
      v31 = 1;
      goto LABEL_37;
    }
    v191 = (unsigned __int64)*v189;
    if ( !v190 )
    {
      *v189 = (__int64 (__fastcall *)())((unsigned __int64)*v189 & 3 | (unsigned __int64)v189 & 0xFFFFFFFFFFFFFFFCLL);
      v273 = v319;
      v274 = (__m128i)(unsigned __int64)v319;
      *v319 = (__int64 (__fastcall *)())((unsigned __int64)*v319 & 0xFFFFFFFFFFFFFFFELL);
      *(__m128i *)(v273 + 1) = _mm_unpacklo_epi64(v274, v274);
      *v319 = (__int64 (__fastcall *)())((unsigned __int64)*v319 | 2);
LABEL_375:
      if ( v319 )
        qfree(v319);
      goto LABEL_377;
    }
    v192 = v191 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v191 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_374:
      *v189 = (__int64 (__fastcall *)())(v191 & 3 | (unsigned __int64)v189 & 0xFFFFFFFFFFFFFFFCLL);
      v195 = v319;
      v196 = (__m128i)(unsigned __int64)v319;
      *v319 = (__int64 (__fastcall *)())((unsigned __int64)*v319 & 0xFFFFFFFFFFFFFFFELL);
      *(__m128i *)(v195 + 1) = _mm_unpacklo_epi64(v196, v196);
      *v319 = (__int64 (__fastcall *)())((unsigned __int64)*v319 | 2);
      v320 = 0;
      goto LABEL_375;
    }
    v193 = *(__int64 **)(v192 + 8);
    if ( (*(_BYTE *)v193 & 2) != 0 )
    {
      v194 = *(__int64 **)(v192 + 16);
      if ( (*(_BYTE *)v194 & 2) != 0 )
        goto LABEL_556;
    }
    else
    {
      sub_1D03E0(v193);
      v194 = *(__int64 **)(v192 + 16);
      if ( (*(_BYTE *)v194 & 2) != 0 )
        goto LABEL_370;
    }
    sub_1D03E0(v194);
LABEL_370:
    if ( (*(_BYTE *)v192 & 2) != 0 )
    {
LABEL_371:
      if ( v191 > 3 )
        qfree(v191 & 0xFFFFFFFFFFFFFFFCLL);
      v189 = v319;
      v191 = (unsigned __int64)*v319;
      goto LABEL_374;
    }
LABEL_556:
    v286 = *(_QWORD *)(v192 + 24);
    if ( v286 )
    {
      *(_QWORD *)(v192 + 32) = 0;
      qfree(v286);
    }
    *(_QWORD *)v192 |= 2uLL;
    goto LABEL_371;
  }
  return v312.m128i_u32[0];
}
