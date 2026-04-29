__int64 __fastcall sub_1DB100(__int64 a1, __int64 a2, signed int a3, __int64 *a4, int a5, char a6)
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
  signed int v34; // eax
  unsigned int v35; // r13d
  __int32 v36; // eax
  const __m128i *v37; // r12
  __int64 (__fastcall ***v38)(); // rbx
  __int64 v39; // rdi
  __int64 v40; // r15
  __int64 v41; // r13
  __int64 v42; // r12
  _QWORD *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rdi
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  int item_end; // eax
  int v49; // eax
  __m128i *v50; // rax
  __m128i v51; // xmm1
  __m128i *v52; // rax
  void *v53; // r15
  __m128i v54; // xmm0
  __int64 (__fastcall **v55)(); // rdi
  __int64 v56; // rdx
  __m128i v57; // xmm0
  __int64 v58; // rsi
  int v59; // eax
  _QWORD *v60; // rax
  unsigned int v61; // ebx
  _QWORD *v62; // rdi
  __int64 v63; // rsi
  double v64; // xmm0_8
  unsigned __int64 v65; // rsi
  __int64 v66; // r8
  int v67; // r9d
  signed int v68; // r13d
  unsigned int v69; // ebx
  _QWORD *v70; // rcx
  unsigned int v71; // eax
  __int64 v72; // r15
  __int64 v73; // rax
  __int64 v74; // r15
  __int64 v75; // rdx
  __int64 v76; // r15
  __int64 v77; // r12
  unsigned int v78; // eax
  unsigned __int64 *v79; // rcx
  unsigned __int64 v80; // rax
  __int64 v81; // rdi
  int v82; // ecx
  unsigned __int64 v83; // r12
  _QWORD *v84; // rdi
  int v85; // eax
  __int64 func; // rax
  unsigned __int64 v87; // r13
  __int64 v88; // rcx
  unsigned __int64 **v89; // rax
  char *v90; // r13
  char *v91; // rdx
  unsigned __int64 **v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // r15
  __int64 v96; // r12
  __int64 v97; // rbx
  _QWORD *v98; // r13
  __int64 v99; // rdi
  __int64 v100; // rdi
  __int64 v101; // rdi
  __int64 v102; // r15
  __int64 v103; // r12
  __int64 v104; // rbx
  _QWORD *v105; // r13
  __int64 v106; // rdi
  __int64 v107; // rdi
  __int64 v108; // rdi
  __int64 v109; // r13
  __int32 v110; // r15d
  __int64 v111; // r12
  _QWORD *v112; // rbx
  __int64 v113; // rdi
  __int64 v114; // rdi
  __int64 v115; // rax
  __int64 v116; // rsi
  __int64 v117; // rdx
  unsigned int v118; // r15d
  __int64 v119; // rsi
  __int64 v120; // rdi
  __int64 v121; // r14
  __int32 v122; // r15d
  __int64 v123; // r13
  __int64 v124; // r12
  _QWORD *v125; // rbx
  __int64 v126; // rdi
  __int64 v127; // rdi
  __int64 v128; // rdx
  __int64 v129; // r12
  __int32 *v130; // rbx
  __int64 v131; // rsi
  __int32 v132; // eax
  __int64 v133; // rax
  __int64 v134; // rsi
  __int64 v135; // rsi
  unsigned __int32 v136; // r13d
  int v137; // eax
  int v138; // r13d
  __int64 v139; // rax
  __int64 v140; // rsi
  unsigned __int64 v141; // r12
  _QWORD *v142; // rax
  unsigned __int64 **v143; // rdi
  int v144; // eax
  unsigned int v145; // ecx
  unsigned __int64 v146; // rdx
  __int64 v147; // r15
  __int64 v148; // rcx
  unsigned int v149; // edx
  __int64 v150; // rax
  __int64 v151; // rax
  int v152; // edx
  __int64 v153; // rcx
  __int64 v154; // r15
  __int64 v155; // rax
  __int32 v156; // r9d
  unsigned __int64 v157; // rax
  unsigned __int64 v158; // rdx
  __int64 v159; // rbx
  void *v160; // r15
  __m128i v161; // xmm0
  __m128i v162; // xmm0
  unsigned __int64 v163; // rbx
  void *v164; // r15
  __m128i v165; // xmm0
  __m128 v166; // xmm1
  __m128i v167; // xmm0
  __m128i v168; // xmm0
  __m128i v169; // xmm0
  unsigned __int64 v170; // rbx
  void *v171; // r15
  __m128i v172; // xmm0
  unsigned __int64 v173; // rbx
  void *v174; // r15
  __m128i v175; // xmm0
  unsigned __int64 v176; // rbx
  void *v177; // r15
  __m128i v178; // xmm0
  unsigned __int64 v179; // rbx
  void *v180; // r12
  __m128i v181; // xmm0
  unsigned __int64 v182; // rbx
  void *v183; // r12
  __m128i v184; // xmm0
  unsigned __int64 v185; // rbx
  void *v186; // r12
  __m128i v187; // xmm0
  __int64 (__fastcall **v188)(); // rax
  __int64 v189; // rdx
  unsigned __int64 v190; // rbx
  unsigned __int64 v191; // r12
  __int64 *v192; // rdi
  __int64 *v193; // rdi
  __int64 (__fastcall **v194)(); // rax
  __m128i v195; // xmm0
  __int64 v196; // r12
  __int64 v197; // rbx
  __m128i v198; // xmm0
  __int64 v199; // rbx
  __m128i v200; // xmm0
  __int64 v201; // rbx
  __m128i v202; // xmm0
  __m128i v203; // xmm0
  __m128i v204; // xmm0
  __m128i v205; // xmm0
  __int64 v206; // rbx
  __int64 v207; // rbx
  __int64 v208; // rbx
  __int64 v209; // rbx
  __int64 v210; // rbx
  __int64 v211; // rbx
  unsigned __int64 **v212; // r12
  __m128i v213; // xmm0
  __m128i v214; // xmm0
  __m128i v215; // xmm0
  __m128i v216; // xmm0
  __m128i v217; // xmm0
  __m128i v218; // xmm1
  __m128i v219; // xmm1
  __m128i v220; // xmm1
  __m128i v221; // xmm1
  __m128i v222; // xmm1
  __m128i v223; // xmm1
  __m128i v224; // xmm1
  __m128i v225; // xmm1
  __m128i v226; // xmm1
  __m128i v227; // xmm1
  void *v228; // rax
  __m128i v229; // xmm1
  __m128i v230; // xmm0
  __m128i v231; // xmm1
  __m128i v232; // xmm1
  __m128i v233; // xmm0
  __m128i v234; // xmm0
  __m128i v235; // xmm0
  __int64 v236; // rdi
  __int64 v237; // r15
  __int64 v238; // rbx
  _QWORD *v239; // r12
  __int64 v240; // rdi
  __int64 v241; // rdi
  __int64 v242; // rdi
  __int64 v243; // r15
  __int64 v244; // rbx
  _QWORD *v245; // r12
  __int64 v246; // rdi
  __int64 v247; // rdi
  __int64 v248; // rdi
  __int64 v249; // r13
  __int64 v250; // rbx
  __int64 v251; // r15
  _QWORD *v252; // r12
  __int64 v253; // rdi
  __int64 v254; // rdi
  __int64 v255; // rdi
  __int64 v256; // r13
  __int64 v257; // rbx
  __int64 v258; // r15
  _QWORD *v259; // r12
  __int64 v260; // rdi
  __int64 v261; // rdi
  __int64 v262; // rdi
  __int64 v263; // r12
  __int64 v264; // r15
  _QWORD *v265; // rbx
  __int64 v266; // rdi
  __int64 v267; // rdi
  __int64 v268; // rax
  __int64 v269; // rax
  unsigned __int64 **v270; // rax
  unsigned __int64 tinfo_size; // r13
  __int64 (__fastcall **v272)(); // rax
  __m128i v273; // xmm0
  _BYTE *v274; // rcx
  __int64 v275; // r15
  __int64 v276; // rbx
  __int64 v277; // r12
  __int64 v278; // rax
  __int64 v279; // rbx
  __int64 v280; // rax
  __int64 v281; // r15
  int v282; // eax
  void *v283; // rax
  void *v284; // rax
  __int64 v285; // rdi
  __int64 v286; // [rsp+8h] [rbp-E18h]
  __int64 v287; // [rsp+10h] [rbp-E10h]
  __int64 i; // [rsp+38h] [rbp-DE8h]
  __int64 v289; // [rsp+40h] [rbp-DE0h]
  __int64 v290; // [rsp+40h] [rbp-DE0h]
  char n; // [rsp+48h] [rbp-DD8h]
  size_t nb; // [rsp+48h] [rbp-DD8h]
  size_t na; // [rsp+48h] [rbp-DD8h]
  bool v294; // [rsp+50h] [rbp-DD0h]
  bool v295; // [rsp+50h] [rbp-DD0h]
  unsigned __int64 *v296; // [rsp+58h] [rbp-DC8h]
  unsigned int v297; // [rsp+58h] [rbp-DC8h]
  unsigned __int64 v298; // [rsp+60h] [rbp-DC0h]
  __int64 v299; // [rsp+68h] [rbp-DB8h]
  __int32 v301; // [rsp+70h] [rbp-DB0h]
  __int64 v302; // [rsp+78h] [rbp-DA8h]
  __m128i v303; // [rsp+80h] [rbp-DA0h] BYREF
  unsigned __int64 **v304; // [rsp+90h] [rbp-D90h]
  __int64 v305; // [rsp+98h] [rbp-D88h]
  unsigned __int64 v306; // [rsp+A0h] [rbp-D80h]
  __int64 *v307; // [rsp+A8h] [rbp-D78h]
  unsigned int v308; // [rsp+B0h] [rbp-D70h]
  unsigned int v309; // [rsp+B4h] [rbp-D6Ch]
  unsigned __int64 *v310; // [rsp+B8h] [rbp-D68h]
  __m128i v311; // [rsp+C0h] [rbp-D60h] BYREF
  __int64 v312[2]; // [rsp+D0h] [rbp-D50h] BYREF
  _QWORD v313[2]; // [rsp+E0h] [rbp-D40h] BYREF
  unsigned __int64 v314; // [rsp+F0h] [rbp-D30h] BYREF
  __int128 v315; // [rsp+F8h] [rbp-D28h]
  _OWORD v316[2]; // [rsp+110h] [rbp-D10h] BYREF
  int v317; // [rsp+130h] [rbp-CF0h]
  __int64 (__fastcall **v318)(); // [rsp+140h] [rbp-CE0h] BYREF
  __int64 v319; // [rsp+148h] [rbp-CD8h]
  __int128 v320; // [rsp+150h] [rbp-CD0h]
  __int64 v321; // [rsp+160h] [rbp-CC0h]
  __int64 v322; // [rsp+168h] [rbp-CB8h]
  __int64 v323; // [rsp+170h] [rbp-CB0h]
  unsigned __int64 **v324; // [rsp+178h] [rbp-CA8h]
  void **v325; // [rsp+180h] [rbp-CA0h]
  __int64 v326; // [rsp+188h] [rbp-C98h] BYREF
  __int128 v327; // [rsp+190h] [rbp-C90h]
  __int64 v328; // [rsp+1A0h] [rbp-C80h] BYREF
  __int128 v329; // [rsp+1A8h] [rbp-C78h]
  __int64 v330; // [rsp+1B8h] [rbp-C68h]
  unsigned __int64 v331; // [rsp+1C0h] [rbp-C60h]
  bool v332; // [rsp+1C8h] [rbp-C58h]
  char v333; // [rsp+1C9h] [rbp-C57h]
  char v334; // [rsp+1CAh] [rbp-C56h]
  __int64 (__fastcall **v335)(); // [rsp+1D0h] [rbp-C50h] BYREF
  char v336; // [rsp+1D8h] [rbp-C48h]
  __int64 v337; // [rsp+1E0h] [rbp-C40h]
  __int128 v338; // [rsp+1E8h] [rbp-C38h]
  __int128 v339; // [rsp+1F8h] [rbp-C28h]
  __int64 v340; // [rsp+208h] [rbp-C18h]
  int v341; // [rsp+210h] [rbp-C10h]
  __int64 v342; // [rsp+218h] [rbp-C08h]
  __int128 v343; // [rsp+220h] [rbp-C00h]
  int v344; // [rsp+230h] [rbp-BF0h]
  __m128i v345; // [rsp+240h] [rbp-BE0h] BYREF
  __int128 v346; // [rsp+250h] [rbp-BD0h]
  __int128 v347; // [rsp+260h] [rbp-BC0h]
  __int64 v348; // [rsp+270h] [rbp-BB0h]
  __int128 v349; // [rsp+278h] [rbp-BA8h]
  __int128 v350; // [rsp+288h] [rbp-B98h]
  __int64 v351; // [rsp+298h] [rbp-B88h]
  int v352; // [rsp+2A0h] [rbp-B80h]
  __int128 v353; // [rsp+2A8h] [rbp-B78h]
  __int128 v354; // [rsp+2B8h] [rbp-B68h]
  __int64 v355; // [rsp+2C8h] [rbp-B58h]
  __int64 v356; // [rsp+2D0h] [rbp-B50h]
  __int128 v357; // [rsp+2D8h] [rbp-B48h]
  __int64 v358; // [rsp+2E8h] [rbp-B38h]
  __int64 v359; // [rsp+2F0h] [rbp-B30h]
  __int128 v360; // [rsp+2F8h] [rbp-B28h]
  __int64 v361; // [rsp+308h] [rbp-B18h]
  __int128 v362; // [rsp+310h] [rbp-B10h]
  __int64 v363; // [rsp+320h] [rbp-B00h]
  __int128 v364; // [rsp+328h] [rbp-AF8h]
  __int64 v365; // [rsp+338h] [rbp-AE8h]
  __int64 v366; // [rsp+340h] [rbp-AE0h]
  __int64 v367; // [rsp+348h] [rbp-AD8h]
  __int128 v368; // [rsp+350h] [rbp-AD0h]
  int v369; // [rsp+360h] [rbp-AC0h]
  __int64 v370; // [rsp+368h] [rbp-AB8h]
  __int128 v371; // [rsp+370h] [rbp-AB0h]
  __int64 v372; // [rsp+380h] [rbp-AA0h]
  __int128 v373; // [rsp+388h] [rbp-A98h]
  __int64 v374; // [rsp+398h] [rbp-A88h]
  __int128 v375; // [rsp+3A0h] [rbp-A80h]
  unsigned __int64 *v376[2]; // [rsp+3B0h] [rbp-A70h] BYREF
  char v377; // [rsp+3C0h] [rbp-A60h] BYREF
  __m128i v378; // [rsp+480h] [rbp-9A0h] BYREF
  __m128i v379; // [rsp+490h] [rbp-990h]
  __int128 v380; // [rsp+4A0h] [rbp-980h] BYREF
  __int64 v381; // [rsp+4B0h] [rbp-970h]
  __m128i v382; // [rsp+4B8h] [rbp-968h] BYREF
  __m128i v383; // [rsp+4C8h] [rbp-958h] BYREF
  __int64 v384; // [rsp+4D8h] [rbp-948h]
  int v385; // [rsp+4E0h] [rbp-940h]
  __m128i v386; // [rsp+4E8h] [rbp-938h] BYREF
  __m128i v387; // [rsp+4F8h] [rbp-928h] BYREF
  __int64 v388; // [rsp+508h] [rbp-918h]
  void *v389; // [rsp+510h] [rbp-910h]
  __int128 v390; // [rsp+518h] [rbp-908h]
  __int64 v391; // [rsp+528h] [rbp-8F8h]
  void *v392; // [rsp+530h] [rbp-8F0h]
  __int128 v393; // [rsp+538h] [rbp-8E8h]
  void *v394; // [rsp+548h] [rbp-8D8h]
  __int128 v395; // [rsp+550h] [rbp-8D0h]
  void *v396; // [rsp+560h] [rbp-8C0h]
  __int128 v397; // [rsp+568h] [rbp-8B8h]
  __int64 v398[2]; // [rsp+578h] [rbp-8A8h] BYREF
  void *v399; // [rsp+588h] [rbp-898h]
  __int128 v400; // [rsp+590h] [rbp-890h]
  int v401; // [rsp+5A0h] [rbp-880h]
  void *v402; // [rsp+5A8h] [rbp-878h]
  __int128 v403; // [rsp+5B0h] [rbp-870h]
  __int64 v404; // [rsp+5C0h] [rbp-860h] BYREF
  __int128 v405; // [rsp+5C8h] [rbp-858h]
  void *src; // [rsp+5D8h] [rbp-848h]
  __int128 v407; // [rsp+5E0h] [rbp-840h]
  unsigned __int64 *v408[2]; // [rsp+5F0h] [rbp-830h] BYREF
  __m128i v409; // [rsp+600h] [rbp-820h] BYREF
  __m128i v410; // [rsp+610h] [rbp-810h] BYREF
  __m128i v411; // [rsp+620h] [rbp-800h] BYREF
  __m128i v412; // [rsp+630h] [rbp-7F0h] BYREF
  __m128i v413; // [rsp+640h] [rbp-7E0h] BYREF
  __m128i v414; // [rsp+650h] [rbp-7D0h] BYREF
  __m128i v415; // [rsp+660h] [rbp-7C0h] BYREF
  __m128i v416; // [rsp+670h] [rbp-7B0h] BYREF
  __m128i v417; // [rsp+680h] [rbp-7A0h] BYREF
  __m128i v418; // [rsp+690h] [rbp-790h] BYREF
  __m128i v419; // [rsp+6A0h] [rbp-780h] BYREF
  __m128i v420; // [rsp+6B0h] [rbp-770h] BYREF
  void *v421[2]; // [rsp+6C0h] [rbp-760h] BYREF
  __m128i v422; // [rsp+6D0h] [rbp-750h]
  __m128i v423; // [rsp+6E0h] [rbp-740h] BYREF
  __int64 v424; // [rsp+6F0h] [rbp-730h]
  __m128i v425; // [rsp+6F8h] [rbp-728h] BYREF
  __m128i v426; // [rsp+708h] [rbp-718h] BYREF
  __int64 v427; // [rsp+718h] [rbp-708h]
  int v428; // [rsp+720h] [rbp-700h]
  __m128i v429; // [rsp+728h] [rbp-6F8h] BYREF
  __m128i v430; // [rsp+738h] [rbp-6E8h] BYREF
  __int64 v431; // [rsp+748h] [rbp-6D8h]
  void *v432; // [rsp+750h] [rbp-6D0h]
  __m128i v433; // [rsp+758h] [rbp-6C8h]
  __int64 v434; // [rsp+768h] [rbp-6B8h]
  void *v435; // [rsp+770h] [rbp-6B0h]
  __m128i v436; // [rsp+778h] [rbp-6A8h]
  void *v437; // [rsp+788h] [rbp-698h]
  __m128i v438; // [rsp+790h] [rbp-690h]
  void *v439; // [rsp+7A0h] [rbp-680h]
  __m128i v440; // [rsp+7A8h] [rbp-678h]
  __int64 v441[2]; // [rsp+7B8h] [rbp-668h] BYREF
  void *v442; // [rsp+7C8h] [rbp-658h]
  __m128i v443; // [rsp+7D0h] [rbp-650h]
  int v444; // [rsp+7E0h] [rbp-640h]
  void *v445; // [rsp+7E8h] [rbp-638h]
  __m128i v446; // [rsp+7F0h] [rbp-630h]
  __int64 v447; // [rsp+800h] [rbp-620h] BYREF
  __int128 v448; // [rsp+808h] [rbp-618h]
  void *v449; // [rsp+818h] [rbp-608h]
  __m128i v450; // [rsp+820h] [rbp-600h]
  __int64 (__fastcall **v451)(); // [rsp+830h] [rbp-5F0h] BYREF
  __int64 v452; // [rsp+838h] [rbp-5E8h]
  __m128i v453; // [rsp+840h] [rbp-5E0h] BYREF
  __m128i v454; // [rsp+850h] [rbp-5D0h] BYREF
  __m128i v455; // [rsp+860h] [rbp-5C0h] BYREF
  __m128i v456; // [rsp+870h] [rbp-5B0h] BYREF
  __m128i v457; // [rsp+880h] [rbp-5A0h] BYREF
  __m128i v458; // [rsp+890h] [rbp-590h] BYREF
  __m128i v459; // [rsp+8A0h] [rbp-580h] BYREF
  __m128i v460; // [rsp+8B0h] [rbp-570h] BYREF
  __m128i v461; // [rsp+8C0h] [rbp-560h] BYREF
  __m128i v462; // [rsp+8D0h] [rbp-550h] BYREF
  __m128i v463; // [rsp+8E0h] [rbp-540h] BYREF
  __m128i v464; // [rsp+8F0h] [rbp-530h] BYREF
  __int64 v465; // [rsp+900h] [rbp-520h] BYREF
  __int64 v466; // [rsp+908h] [rbp-518h]
  int v467; // [rsp+910h] [rbp-510h]
  unsigned __int64 v468; // [rsp+920h] [rbp-500h]
  __m128i v469; // [rsp+928h] [rbp-4F8h] BYREF
  __m128i v470; // [rsp+938h] [rbp-4E8h] BYREF
  __m128i v471; // [rsp+948h] [rbp-4D8h] BYREF
  __int64 v472; // [rsp+958h] [rbp-4C8h]
  __m128i v473; // [rsp+960h] [rbp-4C0h] BYREF
  __m128i v474; // [rsp+970h] [rbp-4B0h] BYREF
  __int64 v475; // [rsp+980h] [rbp-4A0h]
  int v476; // [rsp+988h] [rbp-498h]
  __m128i v477; // [rsp+990h] [rbp-490h] BYREF
  __m128i v478; // [rsp+9A0h] [rbp-480h] BYREF
  __int64 v479; // [rsp+9B0h] [rbp-470h]
  void *v480; // [rsp+9B8h] [rbp-468h]
  __m128i v481; // [rsp+9C0h] [rbp-460h] BYREF
  __int64 v482; // [rsp+9D0h] [rbp-450h]
  void *v483; // [rsp+9D8h] [rbp-448h]
  __m128i v484; // [rsp+9E0h] [rbp-440h] BYREF
  void *v485; // [rsp+9F0h] [rbp-430h]
  __m128i v486; // [rsp+9F8h] [rbp-428h] BYREF
  void *v487; // [rsp+A08h] [rbp-418h]
  __m128i v488; // [rsp+A10h] [rbp-410h] BYREF
  __int64 v489[2]; // [rsp+A20h] [rbp-400h] BYREF
  void *v490; // [rsp+A30h] [rbp-3F0h]
  __m128i v491; // [rsp+A38h] [rbp-3E8h] BYREF
  int v492; // [rsp+A48h] [rbp-3D8h]
  void *v493; // [rsp+A50h] [rbp-3D0h]
  __m128i v494; // [rsp+A58h] [rbp-3C8h] BYREF
  __int64 v495; // [rsp+A68h] [rbp-3B8h]
  __m128i v496; // [rsp+A70h] [rbp-3B0h] BYREF
  void *v497; // [rsp+A80h] [rbp-3A0h]
  __m128i v498; // [rsp+A88h] [rbp-398h] BYREF
  unsigned __int64 *v499; // [rsp+A98h] [rbp-388h] BYREF
  unsigned __int64 *v500; // [rsp+AA0h] [rbp-380h]
  __m128i v501; // [rsp+AA8h] [rbp-378h] BYREF
  __m128i v502; // [rsp+AB8h] [rbp-368h] BYREF
  __m128i v503; // [rsp+AC8h] [rbp-358h] BYREF
  __m128i v504; // [rsp+AD8h] [rbp-348h] BYREF
  __m128i v505; // [rsp+AE8h] [rbp-338h] BYREF
  __m128i v506; // [rsp+AF8h] [rbp-328h] BYREF
  __m128i v507; // [rsp+B08h] [rbp-318h] BYREF
  __m128i v508; // [rsp+B18h] [rbp-308h] BYREF
  __m128i v509; // [rsp+B28h] [rbp-2F8h] BYREF
  __m128i v510; // [rsp+B38h] [rbp-2E8h] BYREF
  __m128i v511; // [rsp+B48h] [rbp-2D8h] BYREF
  __m128i v512; // [rsp+B58h] [rbp-2C8h] BYREF
  __int64 v513; // [rsp+B68h] [rbp-2B8h]
  __int64 v514; // [rsp+B70h] [rbp-2B0h]
  int v515; // [rsp+B78h] [rbp-2A8h]
  unsigned __int64 v516; // [rsp+B80h] [rbp-2A0h] BYREF
  __m128i v517; // [rsp+B88h] [rbp-298h]
  __m128i v518; // [rsp+B98h] [rbp-288h]
  __m128i v519; // [rsp+BA8h] [rbp-278h]
  __int64 v520; // [rsp+BB8h] [rbp-268h]
  __m128i v521; // [rsp+BC0h] [rbp-260h]
  __m128i v522; // [rsp+BD0h] [rbp-250h]
  __int64 v523; // [rsp+BE0h] [rbp-240h]
  int v524; // [rsp+BE8h] [rbp-238h]
  __m128i v525; // [rsp+BF0h] [rbp-230h]
  __m128i v526; // [rsp+C00h] [rbp-220h]
  __int64 v527; // [rsp+C10h] [rbp-210h]
  void *v528; // [rsp+C18h] [rbp-208h]
  __m128i v529; // [rsp+C20h] [rbp-200h]
  __int64 v530; // [rsp+C30h] [rbp-1F0h]
  void *v531; // [rsp+C38h] [rbp-1E8h]
  __m128i v532; // [rsp+C40h] [rbp-1E0h]
  void *v533; // [rsp+C50h] [rbp-1D0h]
  __m128i v534; // [rsp+C58h] [rbp-1C8h]
  void *v535; // [rsp+C68h] [rbp-1B8h]
  __m128i v536; // [rsp+C70h] [rbp-1B0h]
  __int64 v537; // [rsp+C80h] [rbp-1A0h] BYREF
  void *v538; // [rsp+C90h] [rbp-190h]
  __m128i v539; // [rsp+C98h] [rbp-188h]
  int v540; // [rsp+CA8h] [rbp-178h]
  void *v541; // [rsp+CB0h] [rbp-170h]
  __m128i v542; // [rsp+CB8h] [rbp-168h]
  __int64 v543; // [rsp+CC8h] [rbp-158h]
  __m128i v544; // [rsp+CD0h] [rbp-150h]
  void *v545; // [rsp+CE0h] [rbp-140h]
  __m128i v546; // [rsp+CE8h] [rbp-138h]
  unsigned __int64 *v547[2]; // [rsp+CF8h] [rbp-128h] BYREF
  __m128i v548; // [rsp+D08h] [rbp-118h]
  __m128i v549; // [rsp+D18h] [rbp-108h]
  __m128i v550; // [rsp+D28h] [rbp-F8h]
  __m128i v551; // [rsp+D38h] [rbp-E8h]
  __m128i v552; // [rsp+D48h] [rbp-D8h]
  __m128i v553; // [rsp+D58h] [rbp-C8h]
  __m128i v554; // [rsp+D68h] [rbp-B8h]
  __m128i v555; // [rsp+D78h] [rbp-A8h]
  __m128i v556; // [rsp+D88h] [rbp-98h]
  __m128i v557; // [rsp+D98h] [rbp-88h]
  __m128i v558; // [rsp+DA8h] [rbp-78h]
  __m128i v559; // [rsp+DB8h] [rbp-68h]
  __int64 v560; // [rsp+DC8h] [rbp-58h]
  __int64 v561; // [rsp+DD0h] [rbp-50h]
  int v562; // [rsp+DD8h] [rbp-48h]
  unsigned __int64 v563; // [rsp+DE8h] [rbp-38h]

  v305 = a2;
  v309 = a3;
  v307 = a4;
  v563 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 64) <= a3 )
  {
    v311.m128i_i32[0] = -4;
    return v311.m128i_u32[0];
  }
  LODWORD(v310) = a6 & 1;
  if ( (a6 & 1) == 0 && *(_QWORD *)(a1 + 1480) > 1u )
  {
    v311.m128i_i32[0] = -22;
    return v311.m128i_u32[0];
  }
  sub_1CF3F0(v307);
  v9 = *(_QWORD *)(a1 + 1496);
  v311.m128i_i32[0] = sub_33E140(v9, 20, v305, v309, (_DWORD)v307, v10);
  if ( !v311.m128i_i32[0] )
  {
    v304 = *(unsigned __int64 ***)(v305 + 816);
    if ( !v304 )
    {
      v9 = 24;
      v92 = (unsigned __int64 **)qalloc(24);
      v304 = v92;
      if ( !v92 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v93 = v305;
      *v92 = nullptr;
      v92[1] = nullptr;
      v92[2] = nullptr;
      *(_QWORD *)(v93 + 816) = v92;
      *(_DWORD *)(v93 + 824) = *(_DWORD *)(a1 + 64);
    }
    v308 = *(_DWORD *)(a1 + 64);
    if ( v309 >= v308 )
      sub_1D36D0(v9);
    v289 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v309);
    v302 = *(_QWORD *)(v289 + 56);
    v11 = (unsigned __int64 *)*v307;
    v299 = *v307;
    if ( !*v307 )
    {
      if ( !v307[2] )
      {
        v311.m128i_i32[0] = -26;
        v29 = v308;
        goto LABEL_30;
      }
      v11 = (unsigned __int64 *)v307[1];
    }
    v12 = *v11;
    v424 = -1;
    *(_OWORD *)v421 = 0;
    v13 = &v465;
    v298 = v12;
    v14 = &v453;
    v422 = 0;
    v425 = 0;
    v426 = 0;
    v429 = 0;
    v430 = 0;
    v433 = 0;
    v436 = 0;
    v438 = 0;
    v440 = 0;
    v443 = 0;
    v446 = 0;
    v448 = 0;
    v427 = 0;
    v428 = 0;
    v431 = 0;
    v432 = nullptr;
    v434 = 0;
    v435 = nullptr;
    v437 = nullptr;
    v439 = nullptr;
    v441[0] = 0;
    v441[1] = 0;
    v442 = nullptr;
    v444 = -1;
    v445 = nullptr;
    v447 = 0;
    v449 = nullptr;
    v423 = (__m128i)-1LL;
    v450 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    v16 = v311.m128i_i32[0];
    v451 = nullptr;
    v452 = 0;
    do
    {
      v14[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v14 += 2;
      v14[-2] = si128;
      v14[-1].m128i_i64[1] = 0;
    }
    while ( v14 != (__m128i *)&v465 );
    v311.m128i_i32[0] = v16;
    v465 = 0;
    v466 = -1;
    v467 = -1;
    v296 = *v304;
    if ( !*v304 )
      goto LABEL_17;
    v306 = **v304;
    v17 = v306 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v306 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v31 = 0;
      LOBYTE(v306) = 0;
      if ( *(_DWORD *)v302 == 55 && (_DWORD)elf_gnu_hash_indexes == -1 )
      {
        v18 = 24;
        goto LABEL_300;
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
      if ( v298 >= (unsigned __int64)v13 )
        break;
      v17 = *(_QWORD *)(v17 + 8);
LABEL_16:
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_17;
    }
    if ( (unsigned __int64)v13 < v298 )
    {
      v17 = *(_QWORD *)(v17 + 16);
      goto LABEL_16;
    }
    v311.m128i_i32[0] = v9;
    if ( v296 != (unsigned __int64 *)v17 )
    {
      v31 = 0;
      LOBYTE(v306) = 0;
      if ( *(_DWORD *)v302 == 55 && *(_DWORD *)(v17 + 624) == -1 )
      {
LABEL_300:
        *(_BYTE *)(v302 + 32) = 7;
        v144 = *(_DWORD *)(v18 + 592);
        v145 = v308;
        *(_DWORD *)(v302 + 40) = v144;
        sub_66FA0(a1, 0, (__int64)"replaced jump to outline by goto %d", v145);
LABEL_248:
        if ( v451 )
        {
          sub_82C40((unsigned __int64 **)&v451);
          if ( v451 )
            qfree(v451);
        }
        if ( v449 )
        {
          v450.m128i_i64[0] = 0;
          qfree(v449);
        }
        v120 = v447;
        if ( v447 )
        {
          v121 = v448;
          if ( (_QWORD)v448 )
          {
            v122 = v311.m128i_i32[0];
            v123 = 0;
            v124 = 0;
            do
            {
              v125 = (_QWORD *)(v120 + v123);
              clear_tinfo_t(v120 + v123 + 80);
              v126 = *(_QWORD *)(v120 + v123 + 56);
              if ( v126 )
              {
                v125[8] = 0;
                qfree(v126);
              }
              v127 = v125[4];
              if ( v127 )
              {
                v125[5] = 0;
                qfree(v127);
              }
              ++v124;
              v123 += 104;
              cleanup_argloc(v125);
              v120 = v447;
            }
            while ( v121 != v124 );
            v311.m128i_i32[0] = v122;
          }
          *(_QWORD *)&v448 = 0;
          qfree(v120);
        }
        if ( v445 )
        {
          v446.m128i_i64[0] = 0;
          qfree(v445);
        }
        if ( v442 )
        {
          v443.m128i_i64[0] = 0;
          qfree(v442);
        }
        qfree(v441[0]);
        if ( v439 )
        {
          v440.m128i_i64[0] = 0;
          qfree(v439);
        }
        if ( v437 )
        {
          v438.m128i_i64[0] = 0;
          qfree(v437);
        }
        if ( v435 )
        {
          v436.m128i_i64[0] = 0;
          qfree(v435);
        }
        if ( v432 )
        {
          v433.m128i_i64[0] = 0;
          qfree(v432);
        }
        if ( v421[1] )
        {
          v422.m128i_i64[0] = 0;
          qfree(v421[1]);
        }
        return v311.m128i_u32[0];
      }
LABEL_36:
      v32 = (void **)(v17 + 32);
LABEL_37:
      v33 = v305;
      *(_QWORD *)(v305 + 808) += v32[72];
      v297 = v309 + 1;
      v294 = *(_DWORD *)v302 != 55;
      if ( *(_DWORD *)v302 != 55 )
      {
        v34 = *(_DWORD *)(v33 + 824);
        if ( v34 > (int)v309 && v34 <= (int)(v309 + 1) )
        {
          v9 = a1;
          v268 = sub_68FD0(a1, *(_QWORD *)(v302 + 24), *(_QWORD *)(v289 + 40), 1);
          if ( !v268 )
          {
            v311.m128i_i32[0] = -22;
            goto LABEL_57;
          }
          v297 = *(_DWORD *)(v268 + 72);
        }
      }
      v318 = off_4DEAC8;
      v320 = 0u;
      v324 = v304;
      v334 = v306 | v31 ^ 1;
      v321 = 0;
      v322 = 0;
      v323 = 0;
      v325 = v32;
      v326 = 0;
      v328 = 0;
      v330 = 0;
      v332 = v294;
      v333 = v31;
      v319 = a1;
      n = v294 & v31;
      v327 = 0;
      v329 = 0;
      v331 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v308), _mm_cvtsi32_si128(v297)).m128i_u64[0];
      if ( (a6 & 1) != 0 && (v294 & (unsigned __int8)v31) != 0 )
      {
        if ( v308 >= *(_DWORD *)(a1 + 64) )
          sub_1D36D0(v9);
        if ( !v299 )
          goto LABEL_295;
        v128 = *(_QWORD *)v299;
        v290 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v308);
        v129 = *(_QWORD *)(*(_QWORD *)(v290 + 64) + 1504LL);
        v304 = *(unsigned __int64 ***)(v290 + 64);
        v314 = 0;
        v315 = 0;
        (*(void (__fastcall **)(__int64, unsigned __int64 *, __int64))(*(_QWORD *)v129 + 368LL))(v129, &v314, v128);
        v130 = (__int32 *)v314;
        v306 = v314 + 4 * v315;
        if ( v314 == v306 )
          goto LABEL_291;
        v303.m128i_i64[0] = v129 + 224;
        while ( 1 )
        {
          v311.m128i_i32[0] = *v130;
          v136 = v311.m128i_i32[0];
          if ( sub_64930(v303.m128i_i64[0], v311.m128i_i32[0]) )
          {
            v137 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v129 + 32LL))(v129, v136);
            v138 = v137;
            if ( v137 <= 0 )
            {
              if ( !under_debugger )
                sub_383060(52736);
              goto LABEL_567;
            }
            v156 = sub_138140(v304, v137, 1);
            if ( v156 == -1 )
            {
LABEL_290:
              v306 = v314;
LABEL_291:
              if ( v306 )
              {
                *(_QWORD *)&v315 = 0;
                qfree(v306);
              }
              v141 = 0;
              v306 = 0;
              for ( i = *(_QWORD *)v299; v141 < (unsigned __int64)v327; ++v141 )
              {
                v142 = (_QWORD *)j__qalloc_or_throw(80);
                v142[4] = 0xFFFFFFFF00000000LL;
                v142[5] = 0;
                v142[6] = 0xFFFFFFFF00000000LL;
                v142[7] = 0;
                v142[8] = 0xFFFFFFFF00000000LL;
                v142[9] = 0;
                v304 = (unsigned __int64 **)(v142 + 4);
                v311.m128i_i64[0] = (__int64)v142;
                v303.m128i_i64[0] = (__int64)(v142 + 8);
                sub_330970(v142, i);
                v143 = v304;
                *(_DWORD *)v311.m128i_i64[0] = 4;
                sub_125180((__int64)v143, (unsigned __int8 *)(v326 + 16 * v141));
                sub_125180(v303.m128i_i64[0], (unsigned __int8 *)(v328 + 16 * v141));
                v306 = (unsigned __int64)sub_A3160(v290, v311.m128i_i64[0], v306);
              }
LABEL_295:
              v35 = *((_DWORD *)v32 + 146);
              v38 = &v318;
              if ( *((_DWORD *)v32 + 147) <= (signed int)v35 )
              {
LABEL_141:
                *((_DWORD *)v32 + 148) = v297;
                goto LABEL_142;
              }
LABEL_43:
              v311.m128i_i64[0] = (__int64)&v318;
              while ( v35 < *(_DWORD *)(a1 + 64) )
              {
                v37 = *(const __m128i **)(*(_QWORD *)(a1 + 528) + 8LL * v35);
                if ( !v333 )
                {
                  v330 = -*(_QWORD *)(*(_QWORD *)(v319 + 1472) + 40 * v37[32].m128i_i64[0] + 8);
                  v37 = (const __m128i *)sub_69310(v319, v37, *(unsigned int *)(v319 + 64), 0);
                }
                v38 = (__int64 (__fastcall ***)())v311.m128i_i64[0];
                if ( v334 )
                  sub_1D9190(v311.m128i_i64[0], v37[2].m128i_i64, 0);
                if ( (unsigned int)sub_11F830(v37, v311.m128i_i64[0]) )
                {
                  v311.m128i_i32[0] = -22;
                  goto LABEL_56;
                }
                if ( v334 )
                {
                  sub_1D9190(v311.m128i_i64[0], &v37[2].m128i_i64[1], 0);
                  v46 = v37[2].m128i_u64[0];
                  if ( v46 >= v37[2].m128i_i64[1] )
                  {
                    v47 = v37[3].m128i_i64[1];
                    if ( v47 )
                      v46 = *(_QWORD *)(v47 + 24);
                    v303.m128i_i64[0] = v46;
                    v306 = sub_330F80(v319, v46);
                    item_end = get_item_end(v306);
                    v49 = item_end - v306;
                    if ( v49 > 4 )
                      v49 = 4;
                    v37[2].m128i_i64[1] = v303.m128i_i64[0] + v49;
                  }
                }
                v36 = v37[1].m128i_i32[2];
                BYTE1(v36) &= ~2u;
                if ( (_DWORD)v310 )
                {
                  v36 |= 0x40080u;
                  v37[1].m128i_i32[2] = v36;
                  v37[32].m128i_i64[0] = *(_QWORD *)(a1 + 1480);
                }
                else
                {
                  LOBYTE(v36) = v36 | 0x80;
                }
                ++v35;
                v37[1].m128i_i32[2] = v36 | 0x20000;
                if ( *((_DWORD *)v32 + 147) <= (signed int)v35 )
                  goto LABEL_140;
              }
              if ( !under_debugger )
                sub_383060(52719);
LABEL_567:
              BUG();
            }
            v139 = v327;
            v140 = v326;
            if ( *((_QWORD *)&v327 + 1) < (unsigned __int64)(v327 + 1) )
            {
              v301 = v156;
              v326 = qvector_reserve(&v326, v326, v327 + 1, 16);
              v140 = v326;
              v156 = v301;
              v139 = v327;
            }
            v131 = 16 * v139 + v140;
            *(_QWORD *)v131 = 0xFFFFFFFF00000000LL;
            v132 = v311.m128i_i32[0];
            *(_QWORD *)(v131 + 8) = 0;
            *(_QWORD *)&v327 = v327 + 1;
            *(_BYTE *)v131 = 1;
            *(_DWORD *)(v131 + 8) = v132;
            *(_DWORD *)(v131 + 4) = v138;
            v133 = v329;
            v134 = v328;
            if ( *((_QWORD *)&v329 + 1) < (unsigned __int64)(v329 + 1) )
            {
              v311.m128i_i32[0] = v156;
              v328 = qvector_reserve(&v328, v328, v329 + 1, 16);
              v134 = v328;
              v156 = v311.m128i_i32[0];
              v133 = v329;
            }
            v135 = 16 * v133 + v134;
            *(_QWORD *)v135 = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v135 + 8) = 0;
            *(_QWORD *)&v329 = v329 + 1;
            *(_BYTE *)v135 = 1;
            *(_DWORD *)(v135 + 8) = v156;
            *(_DWORD *)(v135 + 4) = v138;
          }
          if ( (__int32 *)v306 == ++v130 )
            goto LABEL_290;
        }
      }
      v35 = *((_DWORD *)v32 + 146);
      if ( (signed int)v35 < *((_DWORD *)v32 + 147) )
        goto LABEL_43;
      v38 = &v318;
LABEL_140:
      if ( n )
        goto LABEL_141;
LABEL_142:
      if ( *(_DWORD *)v302 != 55 )
        *(_DWORD *)v302 = 55;
      v82 = v308;
      *(_BYTE *)(v302 + 32) = 7;
      *(_DWORD *)(v302 + 40) = v82;
      sub_1D5AE0(a1, v82);
      if ( (_DWORD)v310 )
      {
        sub_1CD300(v313, v312, (__int64 *)v32 + 37);
        if ( v312[0] < 0 )
        {
          v312[0] = 0;
          v304 = nullptr;
        }
        else
        {
          v304 = (unsigned __int64 **)v312[0];
        }
        v83 = (unsigned __int64)v32[14] + *((int *)v32 + 23);
        v303.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
        if ( v299 )
        {
          v314 = 0;
          v311.m128i_i64[0] = *(_QWORD *)(v299 + 32) + *(unsigned __int16 *)(v299 + 40);
          v310 = &v314;
          if ( (unsigned __int8)get_func_frame(&v314, v299)
            && (tinfo_size = get_tinfo_size(0, v314, 0), v311.m128i_i64[0] < tinfo_size) )
          {
            v306 = tinfo_size - v311.m128i_i64[0];
          }
          else
          {
            v306 = 0;
          }
          *(_QWORD *)&v316[0] = 0;
          v316[1] = 0;
          func_tail_iterator_set(v316, v299, -1);
          v84 = *(_QWORD **)&v316[0];
          if ( !*(_QWORD *)&v316[0] )
            goto LABEL_529;
          DWORD2(v316[0]) = 0;
          if ( *(int *)(*(_QWORD *)&v316[0] + 128LL) <= 0 )
          {
LABEL_159:
            v89 = (unsigned __int64 **)v306;
            if ( (unsigned __int64)v304 >= v306 )
              v89 = v304;
            v90 = (char *)v89 + v311.m128i_i64[0];
            lock_func_range(v84, 0);
          }
          else
          {
            v85 = 0;
LABEL_311:
            v84 = (_QWORD *)(v84[17] + 16LL * v85);
            while ( 1 )
            {
              func = get_func(*v84);
              if ( func )
              {
                v87 = *(_QWORD *)(func + 32) + *(unsigned __int16 *)(func + 40);
                v88 = v311.m128i_i64[0];
                if ( v311.m128i_i64[0] < v87 )
                  v88 = *(_QWORD *)(func + 32) + *(unsigned __int16 *)(func + 40);
                v311.m128i_i64[0] = v88;
                if ( (unsigned __int8)get_func_frame(v310, func) )
                {
                  v157 = get_tinfo_size(0, v314, 0);
                  v158 = v157 - v87;
                  if ( v306 >= v157 - v87 )
                    v158 = v306;
                  if ( v87 >= v157 )
                    v158 = v306;
                  v306 = v158;
                }
              }
              v84 = *(_QWORD **)&v316[0];
              if ( !*(_QWORD *)&v316[0] )
                break;
              v85 = DWORD2(v316[0]) + 1;
              if ( *(_DWORD *)(*(_QWORD *)&v316[0] + 128LL) <= DWORD2(v316[0]) + 1 )
                goto LABEL_159;
              ++DWORD2(v316[0]);
              if ( v85 >= 0 )
                goto LABEL_311;
            }
LABEL_529:
            v270 = (unsigned __int64 **)v306;
            if ( (unsigned __int64)v304 >= v306 )
              v270 = v304;
            v90 = (char *)v270 + v311.m128i_i64[0];
          }
          clear_tinfo_t(v310);
        }
        else
        {
          v90 = nullptr;
        }
        v91 = &v90[v303.m128i_i32[0] - 1];
        if ( v83 < (unsigned __int64)v32[7] + ((unsigned __int64)v91 & -v303.m128i_i32[0]) )
          v83 = (unsigned __int64)v32[7] + ((unsigned __int64)v91 & -v303.m128i_i32[0]);
      }
      else
      {
        v83 = 0;
      }
      v311.m128i_i32[0] = sub_1D9EC0((__int64)v38, *(_QWORD *)(v302 + 24), v83);
      if ( v311.m128i_i32[0] )
      {
LABEL_56:
        sub_1D48D0(v38);
        goto LABEL_57;
      }
      nullsub_115();
      v115 = *(_QWORD *)(a1 + 1456);
      v116 = *(_QWORD *)(a1 + 1448);
      v117 = v115 + 1;
      if ( *(_QWORD *)(a1 + 1464) < (unsigned __int64)(v115 + 1) )
      {
        v269 = qvector_reserve(a1 + 1448, v116, v117, 16);
        *(_QWORD *)(a1 + 1448) = v269;
        v116 = v269;
        v115 = *(_QWORD *)(a1 + 1456);
        v117 = v115 + 1;
      }
      v118 = v308;
      *(_QWORD *)(a1 + 1456) = v117;
      v119 = 16 * v115 + v116;
      *(_DWORD *)v119 = v118;
      *(_DWORD *)(v119 + 4) = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(v119 + 8) = v297;
      *(_BYTE *)(v119 + 12) = v294;
      sub_66FA0(a1, 0, (__int64)"fixed inlined callee %a in blocks %d..%d", 0.0, v298, v118);
      v311.m128i_i32[0] = sub_33E140(*(_QWORD *)(a1 + 1496), 21, v305, v309, (_DWORD)v307, v118);
      sub_1D48D0(v38);
      goto LABEL_248;
    }
LABEL_17:
    if ( (*(_BYTE *)(a1 + 5) & 0x20) == 0 )
      sub_66FA0(a1, 0, (__int64)"before handling outlines");
    memset(v316, 0, sizeof(v316));
    v317 = -1;
    sub_332990(a1 + 8, v316, v13);
    v312[0] = 0;
    v335 = off_4DD9D8;
    v312[1] = 0;
    v336 = 0;
    v337 = 0;
    v340 = 0;
    v341 = 0;
    v342 = 0;
    v344 = 0;
    v338 = 0;
    v339 = 0;
    v343 = 0;
    if ( v299 )
    {
      v340 = v299;
      v339 = -1;
      create_qflow_chart(&v335);
    }
    else
    {
      create_multirange_qflow_chart(&v335, v307 + 1);
    }
    sub_1D3620((__int64 *)&v335, v312);
    v19 = v344;
    *(_DWORD *)(a1 + 4) |= 0x2000u;
    v20 = _mm_load_si128((const __m128i *)&xmmword_424800);
    if ( v19 <= 0 )
    {
      LOBYTE(v306) = 0;
      v22 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      LOBYTE(v306) = 0;
      v21 = 0;
      do
      {
        v23 = v342 + (v21 << 6);
        if ( !(_BYTE)v306 )
        {
          LOBYTE(v306) = rangeset_t_has_common(v316, v342 + (v21 << 6), 0);
          v20 = _mm_load_si128((const __m128i *)&xmmword_424800);
        }
        v24 = *(_QWORD *)(a1 + 24);
        v25 = _mm_loadl_epi64((const __m128i *)v23);
        v26 = _mm_loadl_epi64((const __m128i *)(v23 + 8));
        v27 = *(_QWORD *)(a1 + 16);
        if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v24 + 1) )
        {
          v303.m128i_i64[0] = v26.m128i_i64[0];
          v311.m128i_i64[0] = v25.m128i_i64[0];
          v28 = qvector_reserve(a1 + 16, v27, v24 + 1, 16);
          *(_QWORD *)(a1 + 16) = v28;
          v27 = v28;
          v24 = *(_QWORD *)(a1 + 24);
          v20 = _mm_load_si128((const __m128i *)&xmmword_424800);
          v26 = _mm_loadl_epi64(&v303);
          v25 = _mm_loadl_epi64(&v311);
        }
        ++v21;
        *(__m128i *)(v27 + 16 * v24) = _mm_unpacklo_epi64(v25, v26);
        v22 = *(_QWORD *)(a1 + 24) + 1LL;
        *(_QWORD *)(a1 + 24) = v22;
      }
      while ( v344 > (int)v21 );
    }
    v348 = -1;
    v351 = 0;
    v50 = (__m128i *)&v377;
    v352 = 0;
    v355 = 0;
    v356 = 0;
    v358 = 0;
    v359 = 0;
    v361 = 0;
    v363 = 0;
    v365 = 0;
    v366 = 0;
    v367 = 0;
    v369 = -1;
    v370 = 0;
    v372 = 0;
    v374 = 0;
    v376[0] = nullptr;
    v345 = 0;
    v346 = 0;
    v347 = -1;
    v349 = 0;
    v350 = 0;
    v353 = 0;
    v354 = 0;
    v357 = 0;
    v360 = 0;
    v362 = 0;
    v364 = 0;
    v368 = 0;
    v371 = 0;
    v373 = 0;
    v375 = 0;
    v376[1] = nullptr;
    do
    {
      v50[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v50 += 2;
      v50[-2] = v20;
      v50[-1].m128i_i64[1] = 0;
    }
    while ( &v378 != v50 );
    v51.m128i_i64[0] = 0;
    v378.m128i_i64[1] = 0;
    v381 = -1;
    v52 = &v409;
    v384 = 0;
    v385 = 0;
    v388 = 0;
    v389 = nullptr;
    v391 = 0;
    v392 = nullptr;
    v394 = nullptr;
    v396 = nullptr;
    v398[0] = 0;
    v398[1] = 0;
    v399 = nullptr;
    v401 = -1;
    v402 = nullptr;
    v404 = 0;
    src = nullptr;
    v408[0] = nullptr;
    v379 = 0;
    v380 = -1;
    v382 = 0;
    v383 = 0;
    v386 = 0;
    v387 = 0;
    v390 = 0;
    v393 = 0;
    v395 = 0;
    v397 = 0;
    v400 = 0;
    v403 = 0;
    v405 = 0;
    v407 = 0;
    v408[1] = nullptr;
    do
    {
      v52[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v52 += 2;
      v52[-2] = v20;
      v52[-1].m128i_i64[1] = 0;
    }
    while ( v421 != (void **)v52 );
    v53 = nullptr;
    v378.m128i_i64[0] = *(_QWORD *)(a1 + 8);
    if ( v22 )
    {
      v53 = (void *)qalloc_or_throw(16 * v22);
      memcpy(v53, *(const void **)(a1 + 16), 16 * v22);
    }
    v54 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
    if ( v378.m128i_i64[1] )
    {
      v311 = v54;
      v379.m128i_i64[0] = 0;
      qfree(v378.m128i_i64[1]);
      v54 = _mm_load_si128(&v311);
    }
    v378.m128i_i64[1] = (__int64)v53;
    v379 = v54;
    if ( v378.m128i_i64[0] )
    {
      v318 = nullptr;
      v320 = 0;
      func_tail_iterator_set(&v318, v378.m128i_i64[0], -1);
      v55 = v318;
      LODWORD(v319) = -1;
      if ( v318 )
      {
        v56 = v379.m128i_i64[0];
        while ( 1 )
        {
          v57 = _mm_loadl_epi64((const __m128i *)v55);
          v51 = _mm_loadl_epi64((const __m128i *)(v55 + 1));
          v58 = v378.m128i_i64[1];
          if ( v379.m128i_i64[1] < (unsigned __int64)(v56 + 1) )
          {
            v303.m128i_i64[0] = v51.m128i_i64[0];
            v311.m128i_i64[0] = v57.m128i_i64[0];
            v378.m128i_i64[1] = qvector_reserve(&v378.m128i_u64[1], v378.m128i_i64[1], v56 + 1, 16);
            v56 = v379.m128i_i64[0];
            v58 = v378.m128i_i64[1];
            v51 = _mm_loadl_epi64(&v303);
            v57 = _mm_loadl_epi64(&v311);
          }
          *(__m128i *)(v58 + 16 * v56) = _mm_unpacklo_epi64(v57, v51);
          v55 = v318;
          v56 = ++v379.m128i_i64[0];
          if ( !v318 )
            goto LABEL_109;
          v59 = v319 + 1;
          if ( *((_DWORD *)v318 + 32) <= (int)v319 + 1 )
            break;
          LODWORD(v319) = v319 + 1;
          if ( v59 >= 0 )
            v55 = (__int64 (__fastcall **)())((char *)v318[17] + 16 * v59);
        }
        lock_func_range(v318, 0);
      }
    }
LABEL_109:
    v60 = (_QWORD *)*v307;
    v378.m128i_i64[0] = (__int64)v60;
    if ( !v60 )
      v60 = (_QWORD *)v378.m128i_i64[1];
    *(_QWORD *)&v380 = *v60;
    sub_1D84D0(a1, (__int64)&v378, &v345);
    v61 = a5 | 0x80000000;
    v311.m128i_i32[0] = sub_33E140(*(_QWORD *)(a1 + 1496), 0, (unsigned int)&v335, a1, (unsigned int)v312, v61);
    if ( v311.m128i_i32[0] )
      goto LABEL_170;
    v311.m128i_i32[0] = sub_1CF000(a1, (unsigned __int64)&v335, (__int64)v312, (_QWORD *)v299);
    if ( v311.m128i_i32[0] )
      goto LABEL_170;
    v62 = *(_QWORD **)(a1 + 1504);
    if ( (*(_BYTE *)(a1 + 112) & 0x10) != 0 )
    {
      v63 = v62[5];
      if ( v63 )
      {
        *(_DWORD *)(a1 + 1184) = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*v62 + 48LL))(v62, v63, 0);
        v62 = *(_QWORD **)(a1 + 1504);
      }
    }
    v64 = sub_2B7DE0(v62, a1 + 1312, v298);
    v65 = v305;
    v311.m128i_i32[0] = sub_1D7070(a1, v305, (unsigned __int64)&v335, v312, (_QWORD *)v299, v61, v64);
    if ( v311.m128i_i32[0] )
    {
LABEL_170:
      sub_1D84D0(a1, (__int64)&v345, &v378);
      goto LABEL_171;
    }
    v68 = *(_DWORD *)(a1 + 64);
    v69 = v308;
    if ( v68 > (int)v308 )
    {
      v70 = v313;
      v71 = *(_DWORD *)(a1 + 64);
      v303.m128i_i64[0] = (__int64)v313;
      while ( 1 )
      {
        if ( v69 >= v71 )
        {
          if ( !under_debugger )
            sub_383060(52719);
          goto LABEL_567;
        }
        v75 = *(_QWORD *)(a1 + 528);
        v76 = *(_QWORD *)(v75 + 8LL * v69);
        sub_B62C0(v76, v65, v75, (__int64)v70, v66, v67);
        v77 = *(_QWORD *)(v76 + 56);
        if ( !v77 )
          goto LABEL_123;
        v78 = *(_DWORD *)v77;
        if ( *(_DWORD *)v77 <= 0x34u )
        {
          v70 = (_QWORD *)(v77 + 64);
          v311.m128i_i64[0] = v77 + 64;
          if ( v78 <= 0x29 )
            goto LABEL_123;
        }
        else
        {
          if ( v78 != 55 )
            goto LABEL_123;
          v311.m128i_i64[0] = v77 + 32;
        }
        v72 = v311.m128i_i64[0];
        sub_123A40(v303.m128i_i64[0], (unsigned __int8 *)v311.m128i_i64[0]);
        v65 = *(_QWORD *)(v77 + 24);
        v73 = sub_1D36F0(a1, v65, v72, 0);
        v74 = v73;
        if ( !v73 )
        {
          v65 = *(_QWORD *)(v311.m128i_i64[0] + 8);
          if ( !(unsigned __int8)sub_332920(a1 + 8, v65) )
            goto LABEL_122;
          sub_66FA0(a1, 0, (__int64)"%a: resolve block for %a", v64, *(double *)v51.m128i_i64);
LABEL_135:
          sub_69F20(a1, v308, v68);
          v81 = v303.m128i_i64[0];
          *(_QWORD *)(a1 + 488) = *(_QWORD *)(v77 + 24);
          sub_11CDA0(v81);
          sub_1D84D0(a1, (__int64)&v345, &v378);
          v311.m128i_i32[0] = -22;
LABEL_171:
          if ( v408[0] )
          {
            sub_82C40(v408);
            if ( v408[0] )
              qfree(v408[0]);
          }
          if ( src )
          {
            *(_QWORD *)&v407 = 0;
            qfree(src);
          }
          v94 = v404;
          if ( v404 )
          {
            v95 = v405;
            if ( (_QWORD)v405 )
            {
              v96 = 0;
              v97 = 0;
              do
              {
                v98 = (_QWORD *)(v94 + v96);
                clear_tinfo_t(v94 + v96 + 80);
                v99 = *(_QWORD *)(v94 + v96 + 56);
                if ( v99 )
                {
                  v98[8] = 0;
                  qfree(v99);
                }
                v100 = v98[4];
                if ( v100 )
                {
                  v98[5] = 0;
                  qfree(v100);
                }
                ++v97;
                v96 += 104;
                cleanup_argloc(v98);
                v94 = v404;
              }
              while ( v95 != v97 );
            }
            *(_QWORD *)&v405 = 0;
            qfree(v94);
          }
          if ( v402 )
          {
            *(_QWORD *)&v403 = 0;
            qfree(v402);
          }
          if ( v399 )
          {
            *(_QWORD *)&v400 = 0;
            qfree(v399);
          }
          qfree(v398[0]);
          if ( v396 )
          {
            *(_QWORD *)&v397 = 0;
            qfree(v396);
          }
          if ( v394 )
          {
            *(_QWORD *)&v395 = 0;
            qfree(v394);
          }
          if ( v392 )
          {
            *(_QWORD *)&v393 = 0;
            qfree(v392);
          }
          if ( v389 )
          {
            *(_QWORD *)&v390 = 0;
            qfree(v389);
          }
          if ( v378.m128i_i64[1] )
          {
            v379.m128i_i64[0] = 0;
            qfree(v378.m128i_i64[1]);
          }
          if ( v376[0] )
          {
            sub_82C40(v376);
            if ( v376[0] )
              qfree(v376[0]);
          }
          if ( v374 )
          {
            *(_QWORD *)&v375 = 0;
            qfree(v374);
          }
          v101 = v372;
          if ( v372 )
          {
            v102 = v373;
            if ( (_QWORD)v373 )
            {
              v103 = 0;
              v104 = 0;
              do
              {
                v105 = (_QWORD *)(v101 + v103);
                clear_tinfo_t(v101 + v103 + 80);
                v106 = *(_QWORD *)(v101 + v103 + 56);
                if ( v106 )
                {
                  v105[8] = 0;
                  qfree(v106);
                }
                v107 = v105[4];
                if ( v107 )
                {
                  v105[5] = 0;
                  qfree(v107);
                }
                ++v104;
                v103 += 104;
                cleanup_argloc(v105);
                v101 = v372;
              }
              while ( v102 != v104 );
            }
            *(_QWORD *)&v373 = 0;
            qfree(v101);
          }
          if ( v370 )
          {
            *(_QWORD *)&v371 = 0;
            qfree(v370);
          }
          if ( v367 )
          {
            *(_QWORD *)&v368 = 0;
            qfree(v367);
          }
          qfree(v365);
          if ( v363 )
          {
            *(_QWORD *)&v364 = 0;
            qfree(v363);
          }
          if ( v361 )
          {
            *(_QWORD *)&v362 = 0;
            qfree(v361);
          }
          if ( v359 )
          {
            *(_QWORD *)&v360 = 0;
            qfree(v359);
          }
          if ( v356 )
          {
            *(_QWORD *)&v357 = 0;
            qfree(v356);
          }
          if ( v345.m128i_i64[1] )
          {
            *(_QWORD *)&v346 = 0;
            qfree(v345.m128i_i64[1]);
          }
          v108 = v342;
          v335 = off_4DD9D8;
          if ( v342 )
          {
            v109 = v343;
            if ( (_QWORD)v343 )
            {
              v110 = v311.m128i_i32[0];
              v111 = 0;
              do
              {
                v112 = (_QWORD *)(v108 + (v111 << 6));
                v113 = v112[5];
                if ( v113 )
                {
                  v112[6] = 0;
                  qfree(v113);
                }
                v114 = v112[2];
                if ( v114 )
                {
                  v112[3] = 0;
                  qfree(v114);
                }
                ++v111;
                v108 = v342;
              }
              while ( v109 != v111 );
              v311.m128i_i32[0] = v110;
            }
            *(_QWORD *)&v343 = 0;
            qfree(v108);
          }
          if ( v337 )
          {
            *(_QWORD *)&v338 = 0;
            qfree(v337);
          }
          qfree(v312[0]);
          if ( *(_QWORD *)&v316[0] )
          {
            *((_QWORD *)&v316[0] + 1) = 0;
            qfree(*(_QWORD *)&v316[0]);
          }
LABEL_57:
          if ( v451 )
          {
            sub_82C40((unsigned __int64 **)&v451);
            if ( v451 )
              qfree(v451);
          }
          if ( v449 )
          {
            v450.m128i_i64[0] = 0;
            qfree(v449);
          }
          v39 = v447;
          if ( v447 )
          {
            v40 = v448;
            if ( (_QWORD)v448 )
            {
              v41 = 0;
              v42 = 0;
              do
              {
                v43 = (_QWORD *)(v39 + v41);
                clear_tinfo_t(v39 + v41 + 80);
                v44 = *(_QWORD *)(v39 + v41 + 56);
                if ( v44 )
                {
                  v43[8] = 0;
                  qfree(v44);
                }
                v45 = v43[4];
                if ( v45 )
                {
                  v43[5] = 0;
                  qfree(v45);
                }
                ++v42;
                v41 += 104;
                cleanup_argloc(v43);
                v39 = v447;
              }
              while ( v40 != v42 );
            }
            *(_QWORD *)&v448 = 0;
            qfree(v39);
          }
          if ( v445 )
          {
            v446.m128i_i64[0] = 0;
            qfree(v445);
          }
          if ( v442 )
          {
            v443.m128i_i64[0] = 0;
            qfree(v442);
          }
          qfree(v441[0]);
          if ( v439 )
          {
            v440.m128i_i64[0] = 0;
            qfree(v439);
          }
          if ( v437 )
          {
            v438.m128i_i64[0] = 0;
            qfree(v437);
          }
          if ( v435 )
          {
            v436.m128i_i64[0] = 0;
            qfree(v435);
          }
          if ( v432 )
          {
            v433.m128i_i64[0] = 0;
            qfree(v432);
          }
          if ( v421[1] )
          {
            v422.m128i_i64[0] = 0;
            qfree(v421[1]);
          }
          v29 = *(_DWORD *)(a1 + 64);
LABEL_30:
          sub_69F20(a1, v308, v29);
          return v311.m128i_u32[0];
        }
        v295 = v68 <= *(_DWORD *)(v73 + 72) || (int)v308 > *(_DWORD *)(v73 + 72);
        if ( !v295 )
          goto LABEL_122;
        v65 = v303.m128i_i64[0];
        sub_125180(v311.m128i_i64[0], (unsigned __int8 *)v303.m128i_i64[0]);
        v79 = *v304;
        if ( !*v304 )
          goto LABEL_133;
        v80 = *v79 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v80 )
          goto LABEL_122;
        if ( (*(_BYTE *)(*v79 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_133;
        v65 = *(_QWORD *)(v74 + 32);
        while ( 1 )
        {
          v146 = *(_QWORD *)(v80 + 24);
          if ( v65 >= v146 )
            break;
          v80 = *(_QWORD *)(v80 + 8);
LABEL_304:
          if ( (*(_BYTE *)v80 & 2) != 0 )
            goto LABEL_133;
        }
        if ( v146 < v65 )
          break;
        if ( v79 != (unsigned __int64 *)v80 )
          goto LABEL_122;
LABEL_133:
        if ( *(_BYTE *)v311.m128i_i64[0] != 6
          || (v147 = v311.m128i_i64[0],
              sub_339C80(*(_QWORD *)(a1 + 1504), v311.m128i_i64[0]),
              v148 = *(_QWORD *)(v147 + 8),
              v287 = v148,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) == v148)
          || v148 == -1 )
        {
LABEL_134:
          sub_66FA0(a1, 0, (__int64)"%a: branch out of outlined function", v64);
          goto LABEL_135;
        }
        v286 = 0;
        v149 = v308;
        while ( 2 )
        {
          if ( v149 >= *(_DWORD *)(a1 + 64) )
          {
            if ( !under_debugger )
              sub_383060(52719);
            goto LABEL_567;
          }
          v153 = *(_QWORD *)(a1 + 528);
          LODWORD(v306) = v149;
          v154 = *(_QWORD *)(v153 + 8LL * v149);
          v65 = *(_QWORD *)(v154 + 32);
          v155 = sub_330F80(a1, v65);
          v152 = v306;
          if ( v287 != v155 )
          {
            v150 = *(_QWORD *)(v154 + 48);
            if ( !v150 || (v65 = *(_QWORD *)(v150 + 24), v151 = sub_330F80(a1, v65), v152 = v306, v287 != v151) )
            {
LABEL_318:
              v149 = v152 + 1;
              if ( v68 == v149 )
                goto LABEL_539;
              continue;
            }
          }
          break;
        }
        if ( (*(_BYTE *)(v154 + 24) & 2) != 0 )
        {
          if ( v286 )
            v154 = v286;
          v286 = v154;
          goto LABEL_318;
        }
        v286 = v154;
LABEL_539:
        if ( !v286 )
          goto LABEL_134;
        v274 = (_BYTE *)v311.m128i_i64[0];
        *(_DWORD *)(v311.m128i_i64[0] + 8) = *(_DWORD *)(v286 + 72);
        *v274 = 7;
        LOBYTE(v306) = v295;
LABEL_122:
        sub_11CDA0(v303.m128i_i64[0]);
LABEL_123:
        if ( v68 == ++v69 )
          goto LABEL_330;
        v71 = *(_DWORD *)(a1 + 64);
      }
      v80 = *(_QWORD *)(v80 + 16);
      goto LABEL_304;
    }
LABEL_330:
    sub_1D84D0(a1, (__int64)&v345, &v378);
    v159 = v379.m128i_i64[0];
    v160 = nullptr;
    v421[0] = (void *)v378.m128i_i64[0];
    if ( v379.m128i_i64[0] )
    {
      v160 = (void *)qalloc_or_throw(16 * v379.m128i_i64[0]);
      memcpy(v160, (const void *)v378.m128i_i64[1], 16 * v159);
    }
    v161 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v159, (__m128i)(unsigned __int64)v159);
    if ( v421[1] )
    {
      v311 = v161;
      v422.m128i_i64[0] = 0;
      qfree(v421[1]);
      v161 = _mm_load_si128(&v311);
    }
    v422 = v161;
    v162 = _mm_loadu_si128(&v382);
    v163 = v390;
    v421[1] = v160;
    v164 = nullptr;
    v424 = v381;
    v425 = v162;
    v165 = _mm_loadu_si128(&v383);
    v166 = _mm_loadh_ps((const double *)&v380 + 1);
    v427 = v384;
    v426 = v165;
    v167 = _mm_loadu_si128(&v386);
    v428 = v385;
    v429 = v167;
    v168 = _mm_loadu_si128(&v387);
    v431 = v388;
    v423 = (__m128i)v166;
    v430 = v168;
    if ( (_QWORD)v390 )
    {
      v164 = (void *)qalloc_or_throw(40 * v390);
      memcpy(v164, v389, 40 * v163);
    }
    v169 = _mm_unpacklo_epi64((__m128i)v163, (__m128i)v163);
    if ( v432 )
    {
      v311 = v169;
      v433.m128i_i64[0] = 0;
      qfree(v432);
      v169 = _mm_load_si128(&v311);
    }
    v170 = v393;
    v432 = v164;
    v171 = nullptr;
    v433 = v169;
    v434 = v391;
    if ( (_QWORD)v393 )
    {
      v171 = (void *)qalloc_or_throw(16 * v393);
      memcpy(v171, v392, 16 * v170);
    }
    v172 = _mm_unpacklo_epi64((__m128i)v170, (__m128i)v170);
    if ( v435 )
    {
      v311 = v172;
      v436.m128i_i64[0] = 0;
      qfree(v435);
      v172 = _mm_load_si128(&v311);
    }
    v173 = v395;
    v435 = v171;
    v174 = nullptr;
    v436 = v172;
    if ( (_QWORD)v395 )
    {
      v174 = (void *)qalloc_or_throw(16 * v395);
      memcpy(v174, v394, 16 * v173);
    }
    v175 = _mm_unpacklo_epi64((__m128i)v173, (__m128i)v173);
    if ( v437 )
    {
      v311 = v175;
      v438.m128i_i64[0] = 0;
      qfree(v437);
      v175 = _mm_load_si128(&v311);
    }
    v176 = v397;
    v437 = v174;
    v177 = nullptr;
    v438 = v175;
    if ( (_QWORD)v397 )
    {
      v177 = (void *)qalloc_or_throw(16 * v397);
      memcpy(v177, v396, 16 * v176);
    }
    v178 = _mm_unpacklo_epi64((__m128i)v176, (__m128i)v176);
    if ( v439 )
    {
      v311 = v178;
      v440.m128i_i64[0] = 0;
      qfree(v439);
      v178 = _mm_load_si128(&v311);
    }
    v439 = v177;
    v311.m128i_i64[0] = (__int64)v441;
    v440 = v178;
    sub_648D0(v441, v398);
    v179 = v400;
    v180 = nullptr;
    if ( (_QWORD)v400 )
    {
      v180 = (void *)qalloc_or_throw(16 * v400);
      memcpy(v180, v399, 16 * v179);
    }
    v181 = _mm_unpacklo_epi64((__m128i)v179, (__m128i)v179);
    if ( v442 )
    {
      v303 = v181;
      v443.m128i_i64[0] = 0;
      qfree(v442);
      v181 = _mm_load_si128(&v303);
    }
    v182 = v403;
    v442 = v180;
    v183 = nullptr;
    v443 = v181;
    v444 = v401;
    if ( (_QWORD)v403 )
    {
      v183 = (void *)qalloc_or_throw(16 * v403);
      memcpy(v183, v402, 16 * v182);
    }
    v184 = _mm_unpacklo_epi64((__m128i)v182, (__m128i)v182);
    if ( v445 )
    {
      v303 = v184;
      v446.m128i_i64[0] = 0;
      qfree(v445);
      v184 = _mm_load_si128(&v303);
    }
    v445 = v183;
    v446 = v184;
    sub_1D41E0(&v447, (__int64)&v404);
    v185 = v407;
    v186 = nullptr;
    if ( (_QWORD)v407 )
    {
      v186 = (void *)qalloc_or_throw(4 * v407);
      memcpy(v186, src, 4 * v185);
    }
    v187 = _mm_unpacklo_epi64((__m128i)v185, (__m128i)v185);
    if ( v449 )
    {
      v303 = v187;
      v450.m128i_i64[0] = 0;
      qfree(v449);
      v187 = _mm_load_si128(&v303);
    }
    v449 = v186;
    v450 = v187;
    sub_1D82C0((__int64 *)&v318, (__int64)v408);
    v188 = v451;
    v451 = v318;
    v189 = v452;
    v318 = v188;
    v452 = v319;
    v319 = v189;
    if ( !v188 )
    {
LABEL_375:
      v453 = _mm_load_si128(&v409);
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
      if ( v344 <= 0 )
      {
        v197 = 0;
      }
      else
      {
        v196 = 0;
        v197 = 0;
        do
        {
          if ( sub_64930(v312, v196) )
            v197 = *(_QWORD *)(v342 + (v196 << 6) + 8) + v197 - *(_QWORD *)(v342 + (v196 << 6));
          ++v196;
        }
        while ( v344 > (int)v196 );
      }
      v465 = v197;
      v198.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v308), _mm_cvtsi32_si128(v68)).m128i_u64[0];
      v466 = v198.m128i_i64[0];
      if ( (a6 & 2) == 0 )
      {
        v199 = v422.m128i_i64[0];
        v470 = 0;
        v468 = v298;
        v469 = (__m128i)(unsigned __int64)v421[0];
        if ( v422.m128i_i64[0] )
        {
          v469.m128i_i64[1] = qalloc_or_throw(16 * v422.m128i_i64[0]);
          v470.m128i_i64[1] = v199;
          memcpy((void *)v469.m128i_i64[1], v421[1], 16 * v199);
          v470.m128i_i64[0] = v199;
        }
        v200 = _mm_load_si128(&v423);
        v480 = nullptr;
        v201 = v433.m128i_i64[0];
        v471 = v200;
        v202 = _mm_loadu_si128(&v425);
        v472 = v424;
        v473 = v202;
        v203 = _mm_loadu_si128(&v426);
        v475 = v427;
        v474 = v203;
        v204 = _mm_loadu_si128(&v429);
        v476 = v428;
        v477 = v204;
        v205 = _mm_loadu_si128(&v430);
        v479 = v431;
        v478 = v205;
        v481 = 0;
        if ( v433.m128i_i64[0] )
        {
          v480 = (void *)qalloc_or_throw(40 * v433.m128i_i64[0]);
          v481.m128i_i64[1] = v201;
          memcpy(v480, v432, 40 * v201);
          v481.m128i_i64[0] = v201;
        }
        v206 = v436.m128i_i64[0];
        v483 = nullptr;
        v484 = 0;
        v482 = v434;
        if ( v436.m128i_i64[0] )
        {
          v483 = (void *)qalloc_or_throw(16 * v436.m128i_i64[0]);
          v484.m128i_i64[1] = v206;
          memcpy(v483, v435, 16 * v206);
          v484.m128i_i64[0] = v206;
        }
        v207 = v438.m128i_i64[0];
        v485 = nullptr;
        v486 = 0;
        if ( v438.m128i_i64[0] )
        {
          v485 = (void *)qalloc_or_throw(16 * v438.m128i_i64[0]);
          v486.m128i_i64[1] = v207;
          memcpy(v485, v437, 16 * v207);
          v486.m128i_i64[0] = v207;
        }
        v208 = v440.m128i_i64[0];
        v487 = nullptr;
        v488 = 0;
        if ( v440.m128i_i64[0] )
        {
          v487 = (void *)qalloc_or_throw(16 * v440.m128i_i64[0]);
          v488.m128i_i64[1] = v208;
          memcpy(v487, v439, 16 * v208);
          v488.m128i_i64[0] = v208;
        }
        sub_64000(v489, v311.m128i_i64[0]);
        v209 = v443.m128i_i64[0];
        v490 = nullptr;
        v491 = 0;
        if ( v443.m128i_i64[0] )
        {
          v490 = (void *)qalloc_or_throw(16 * v443.m128i_i64[0]);
          v491.m128i_i64[1] = v209;
          memcpy(v490, v442, 16 * v209);
          v491.m128i_i64[0] = v209;
        }
        v210 = v446.m128i_i64[0];
        v493 = nullptr;
        v494 = 0;
        v492 = v444;
        if ( v446.m128i_i64[0] )
        {
          v493 = (void *)qalloc_or_throw(16 * v446.m128i_i64[0]);
          v494.m128i_i64[1] = v210;
          memcpy(v493, v445, 16 * v210);
          v494.m128i_i64[0] = v210;
        }
        v495 = 0;
        v496 = 0;
        v303.m128i_i64[0] = v448;
        if ( (_QWORD)v448 )
        {
          v275 = v448;
          v495 = qalloc_or_throw(104 * v448);
          v276 = v495;
          v277 = 0;
          v496.m128i_i64[1] = v275;
          v311.m128i_i64[0] = 0;
          while ( 1 )
          {
            v279 = v311.m128i_i64[0] + v276;
            v280 = v447 + v311.m128i_i64[0];
            *(_DWORD *)v279 = 0;
            v281 = v280;
            copy_argloc(v279, v280);
            *(_QWORD *)(v279 + 16) = *(_QWORD *)(v281 + 16);
            v282 = *(_DWORD *)(v281 + 24);
            *(_QWORD *)(v279 + 32) = 0;
            *(_DWORD *)(v279 + 24) = v282;
            *(_OWORD *)(v279 + 40) = 0;
            if ( *(_QWORD *)(v281 + 40) )
            {
              nb = *(_QWORD *)(v281 + 40);
              v283 = (void *)qalloc_or_throw(nb);
              *(_QWORD *)(v279 + 32) = v283;
              *(_QWORD *)(v279 + 48) = nb;
              memcpy(v283, *(const void **)(v281 + 32), nb);
              *(_QWORD *)(v279 + 40) = nb;
            }
            *(_QWORD *)(v279 + 56) = 0;
            *(_OWORD *)(v279 + 64) = 0;
            if ( *(_QWORD *)(v281 + 64) )
            {
              na = *(_QWORD *)(v281 + 64);
              v284 = (void *)qalloc_or_throw(na);
              *(_QWORD *)(v279 + 56) = v284;
              *(_QWORD *)(v279 + 72) = na;
              memcpy(v284, *(const void **)(v281 + 56), na);
              *(_QWORD *)(v279 + 64) = na;
            }
            *(_QWORD *)(v279 + 80) = 0;
            copy_tinfo_t(v279 + 80, v281 + 80);
            v278 = *(_QWORD *)(v281 + 88);
            v311.m128i_i64[0] += 104;
            ++v277;
            *(_QWORD *)(v279 + 88) = v278;
            *(_QWORD *)(v279 + 96) = *(_QWORD *)(v281 + 96);
            if ( v303.m128i_i64[0] == v277 )
              break;
            v276 = v495;
          }
          v496.m128i_i64[0] = v303.m128i_i64[0];
        }
        v211 = v450.m128i_i64[0];
        v497 = nullptr;
        v498 = 0;
        if ( v450.m128i_i64[0] )
        {
          v497 = (void *)qalloc_or_throw(4 * v450.m128i_i64[0]);
          v498.m128i_i64[1] = v211;
          memcpy(v497, v449, 4 * v211);
          v498.m128i_i64[0] = v211;
        }
        v212 = &v499;
        sub_1D82C0((__int64 *)&v499, (__int64)&v451);
        v501 = _mm_load_si128(&v453);
        v213 = _mm_load_si128(&v454);
        v513 = v465;
        v502 = v213;
        v214 = _mm_load_si128(&v455);
        v514 = v466;
        v503 = v214;
        v215 = _mm_load_si128(&v456);
        v515 = v467;
        v504 = v215;
        v216 = _mm_load_si128(&v457);
        v516 = v468;
        v505 = v216;
        v506 = _mm_load_si128(&v458);
        v507 = _mm_load_si128(&v459);
        v508 = _mm_load_si128(&v460);
        v509 = _mm_load_si128(&v461);
        v510 = _mm_load_si128(&v462);
        v511 = _mm_load_si128(&v463);
        v512 = _mm_load_si128(&v464);
        v217 = _mm_loadu_si128(&v469);
        v218 = _mm_loadu_si128(&v470);
        v469.m128i_i64[1] = 0;
        v518 = v218;
        v219 = _mm_loadu_si128(&v471);
        v520 = v472;
        v519 = v219;
        v220 = _mm_load_si128(&v473);
        v523 = v475;
        v521 = v220;
        v221 = _mm_load_si128(&v474);
        v524 = v476;
        v522 = v221;
        v222 = _mm_load_si128(&v477);
        v527 = v479;
        v525 = v222;
        v223 = _mm_load_si128(&v478);
        v528 = v480;
        v526 = v223;
        v224 = _mm_load_si128(&v481);
        v517 = v217;
        v529 = v224;
        v480 = nullptr;
        v530 = v482;
        v470 = 0;
        v481 = 0;
        v225 = _mm_load_si128(&v484);
        v484 = 0;
        v531 = v483;
        v532 = v225;
        v226 = _mm_loadu_si128(&v486);
        v533 = v485;
        v534 = v226;
        v227 = _mm_load_si128(&v488);
        v483 = nullptr;
        v485 = nullptr;
        v535 = v487;
        v487 = nullptr;
        v486 = 0;
        v536 = v227;
        v488 = 0;
        sub_64000(&v537, (__int64)v489);
        v228 = v490;
        v229 = _mm_loadu_si128(&v494);
        v490 = nullptr;
        v230 = _mm_loadu_si128(&v491);
        v538 = v228;
        v542 = v229;
        v231 = _mm_load_si128(&v496);
        v540 = v492;
        v544 = v231;
        v232 = _mm_loadu_si128(&v498);
        v541 = v493;
        v539 = v230;
        v543 = v495;
        v493 = nullptr;
        v545 = v497;
        v495 = 0;
        v547[0] = v499;
        v497 = nullptr;
        v547[1] = v500;
        v499 = nullptr;
        v500 = nullptr;
        v491 = 0;
        v494 = 0;
        v496 = 0;
        v546 = v232;
        v498 = 0;
        v548 = _mm_loadu_si128(&v501);
        v233 = _mm_loadu_si128(&v502);
        v560 = v513;
        v549 = v233;
        v234 = _mm_loadu_si128(&v503);
        v561 = v514;
        v550 = v234;
        v235 = _mm_loadu_si128(&v504);
        v562 = v515;
        v551 = v235;
        v552 = _mm_loadu_si128(&v505);
        v553 = _mm_loadu_si128(&v506);
        v554 = _mm_loadu_si128(&v507);
        v555 = _mm_loadu_si128(&v508);
        v556 = _mm_loadu_si128(&v509);
        v557 = _mm_loadu_si128(&v510);
        v558 = _mm_loadu_si128(&v511);
        v198 = _mm_loadu_si128(&v512);
        v559 = v198;
        v296 = (unsigned __int64 *)sub_1DAF50((__m128i *)v304, &v516);
        if ( v547[0] )
        {
          sub_82C40(v547);
          if ( v547[0] )
            qfree(v547[0]);
        }
        if ( v545 )
        {
          v546.m128i_i64[0] = 0;
          qfree(v545);
        }
        v236 = v543;
        if ( v543 )
        {
          v237 = v544.m128i_i64[0];
          if ( v544.m128i_i64[0] )
          {
            v303.m128i_i64[0] = (__int64)&v499;
            v238 = 0;
            v311.m128i_i64[0] = 0;
            do
            {
              v239 = (_QWORD *)(v236 + v311.m128i_i64[0]);
              clear_tinfo_t(v236 + v311.m128i_i64[0] + 80);
              v240 = v239[7];
              if ( v240 )
              {
                v239[8] = 0;
                qfree(v240);
              }
              v241 = v239[4];
              if ( v241 )
              {
                v239[5] = 0;
                qfree(v241);
              }
              ++v238;
              cleanup_argloc(v239);
              v311.m128i_i64[0] += 104;
              v236 = v543;
            }
            while ( v237 != v238 );
            v212 = (unsigned __int64 **)v303.m128i_i64[0];
          }
          v544.m128i_i64[0] = 0;
          qfree(v236);
        }
        if ( v541 )
        {
          v542.m128i_i64[0] = 0;
          qfree(v541);
        }
        if ( v538 )
        {
          v539.m128i_i64[0] = 0;
          qfree(v538);
        }
        qfree(v537);
        if ( v535 )
        {
          v536.m128i_i64[0] = 0;
          qfree(v535);
        }
        if ( v533 )
        {
          v534.m128i_i64[0] = 0;
          qfree(v533);
        }
        if ( v531 )
        {
          v532.m128i_i64[0] = 0;
          qfree(v531);
        }
        if ( v528 )
        {
          v529.m128i_i64[0] = 0;
          qfree(v528);
        }
        if ( v517.m128i_i64[1] )
        {
          v518.m128i_i64[0] = 0;
          qfree(v517.m128i_i64[1]);
        }
        if ( v499 )
        {
          sub_82C40(v212);
          if ( v499 )
            qfree(v499);
        }
        if ( v497 )
        {
          v498.m128i_i64[0] = 0;
          qfree(v497);
        }
        v242 = v495;
        if ( v495 )
        {
          v243 = v496.m128i_i64[0];
          if ( v496.m128i_i64[0] )
          {
            v244 = 0;
            v311.m128i_i64[0] = 0;
            do
            {
              v245 = (_QWORD *)(v242 + v311.m128i_i64[0]);
              clear_tinfo_t(v242 + v311.m128i_i64[0] + 80);
              v246 = v245[7];
              if ( v246 )
              {
                v245[8] = 0;
                qfree(v246);
              }
              v247 = v245[4];
              if ( v247 )
              {
                v245[5] = 0;
                qfree(v247);
              }
              ++v244;
              cleanup_argloc(v245);
              v311.m128i_i64[0] += 104;
              v242 = v495;
            }
            while ( v243 != v244 );
          }
          v496.m128i_i64[0] = 0;
          qfree(v242);
        }
        if ( v493 )
        {
          v494.m128i_i64[0] = 0;
          qfree(v493);
        }
        if ( v490 )
        {
          v491.m128i_i64[0] = 0;
          qfree(v490);
        }
        qfree(v489[0]);
        if ( v487 )
        {
          v488.m128i_i64[0] = 0;
          qfree(v487);
        }
        if ( v485 )
        {
          v486.m128i_i64[0] = 0;
          qfree(v485);
        }
        if ( v483 )
        {
          v484.m128i_i64[0] = 0;
          qfree(v483);
        }
        if ( v480 )
        {
          v481.m128i_i64[0] = 0;
          qfree(v480);
        }
        if ( v469.m128i_i64[1] )
        {
          v470.m128i_i64[0] = 0;
          qfree(v469.m128i_i64[1]);
        }
      }
      sub_66FA0(
        a1,
        0,
        (__int64)"inlined callee %a from block %d into blocks %d..%d",
        *(double *)v198.m128i_i64,
        v298,
        v309,
        v308);
      if ( v408[0] )
      {
        sub_82C40(v408);
        if ( v408[0] )
          qfree(v408[0]);
      }
      if ( src )
      {
        *(_QWORD *)&v407 = 0;
        qfree(src);
      }
      v248 = v404;
      if ( v404 )
      {
        v249 = v405;
        if ( (_QWORD)v405 )
        {
          v250 = 0;
          v251 = 0;
          do
          {
            v252 = (_QWORD *)(v248 + v251);
            clear_tinfo_t(v248 + v251 + 80);
            v253 = *(_QWORD *)(v248 + v251 + 56);
            if ( v253 )
            {
              v252[8] = 0;
              qfree(v253);
            }
            v254 = v252[4];
            if ( v254 )
            {
              v252[5] = 0;
              qfree(v254);
            }
            ++v250;
            cleanup_argloc(v252);
            v248 = v404;
            v251 += 104;
          }
          while ( v249 != v250 );
        }
        *(_QWORD *)&v405 = 0;
        qfree(v248);
      }
      if ( v402 )
      {
        *(_QWORD *)&v403 = 0;
        qfree(v402);
      }
      if ( v399 )
      {
        *(_QWORD *)&v400 = 0;
        qfree(v399);
      }
      qfree(v398[0]);
      if ( v396 )
      {
        *(_QWORD *)&v397 = 0;
        qfree(v396);
      }
      if ( v394 )
      {
        *(_QWORD *)&v395 = 0;
        qfree(v394);
      }
      if ( v392 )
      {
        *(_QWORD *)&v393 = 0;
        qfree(v392);
      }
      if ( v389 )
      {
        *(_QWORD *)&v390 = 0;
        qfree(v389);
      }
      if ( v378.m128i_i64[1] )
      {
        v379.m128i_i64[0] = 0;
        qfree(v378.m128i_i64[1]);
      }
      if ( v376[0] )
      {
        sub_82C40(v376);
        if ( v376[0] )
          qfree(v376[0]);
      }
      if ( v374 )
      {
        *(_QWORD *)&v375 = 0;
        qfree(v374);
      }
      v255 = v372;
      if ( v372 )
      {
        v256 = v373;
        if ( (_QWORD)v373 )
        {
          v257 = 0;
          v258 = 0;
          do
          {
            v259 = (_QWORD *)(v255 + v258);
            clear_tinfo_t(v255 + v258 + 80);
            v260 = *(_QWORD *)(v255 + v258 + 56);
            if ( v260 )
            {
              v259[8] = 0;
              qfree(v260);
            }
            v261 = v259[4];
            if ( v261 )
            {
              v259[5] = 0;
              qfree(v261);
            }
            ++v257;
            cleanup_argloc(v259);
            v255 = v372;
            v258 += 104;
          }
          while ( v256 != v257 );
        }
        *(_QWORD *)&v373 = 0;
        qfree(v255);
      }
      if ( v370 )
      {
        *(_QWORD *)&v371 = 0;
        qfree(v370);
      }
      if ( v367 )
      {
        *(_QWORD *)&v368 = 0;
        qfree(v367);
      }
      qfree(v365);
      if ( v363 )
      {
        *(_QWORD *)&v364 = 0;
        qfree(v363);
      }
      if ( v361 )
      {
        *(_QWORD *)&v362 = 0;
        qfree(v361);
      }
      if ( v359 )
      {
        *(_QWORD *)&v360 = 0;
        qfree(v359);
      }
      if ( v356 )
      {
        *(_QWORD *)&v357 = 0;
        qfree(v356);
      }
      if ( v345.m128i_i64[1] )
      {
        *(_QWORD *)&v346 = 0;
        qfree(v345.m128i_i64[1]);
      }
      v262 = v342;
      v335 = off_4DD9D8;
      if ( v342 )
      {
        v263 = v343;
        if ( (_QWORD)v343 )
        {
          v264 = 0;
          do
          {
            v265 = (_QWORD *)(v262 + (v264 << 6));
            v266 = v265[5];
            if ( v266 )
            {
              v265[6] = 0;
              qfree(v266);
            }
            v267 = v265[2];
            if ( v267 )
            {
              v265[3] = 0;
              qfree(v267);
            }
            v262 = v342;
            ++v264;
          }
          while ( v263 != v264 );
        }
        *(_QWORD *)&v343 = 0;
        qfree(v262);
      }
      if ( v337 )
      {
        *(_QWORD *)&v338 = 0;
        qfree(v337);
      }
      qfree(v312[0]);
      v9 = *(_QWORD *)&v316[0];
      if ( *(_QWORD *)&v316[0] )
      {
        *((_QWORD *)&v316[0] + 1) = 0;
        qfree(*(_QWORD *)&v316[0]);
      }
      if ( v296 != *v304 )
      {
        v17 = (unsigned __int64)v296;
        v31 = 1;
        goto LABEL_36;
      }
      v32 = v421;
      v31 = 1;
      goto LABEL_37;
    }
    v190 = (unsigned __int64)*v188;
    if ( !v189 )
    {
      *v188 = (__int64 (__fastcall *)())((unsigned __int64)*v188 & 3 | (unsigned __int64)v188 & 0xFFFFFFFFFFFFFFFCLL);
      v272 = v318;
      v273 = (__m128i)(unsigned __int64)v318;
      *v318 = (__int64 (__fastcall *)())((unsigned __int64)*v318 & 0xFFFFFFFFFFFFFFFELL);
      *(__m128i *)(v272 + 1) = _mm_unpacklo_epi64(v273, v273);
      *v318 = (__int64 (__fastcall *)())((unsigned __int64)*v318 | 2);
LABEL_373:
      if ( v318 )
        qfree(v318);
      goto LABEL_375;
    }
    v191 = v190 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v190 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_372:
      *v188 = (__int64 (__fastcall *)())(v190 & 3 | (unsigned __int64)v188 & 0xFFFFFFFFFFFFFFFCLL);
      v194 = v318;
      v195 = (__m128i)(unsigned __int64)v318;
      *v318 = (__int64 (__fastcall *)())((unsigned __int64)*v318 & 0xFFFFFFFFFFFFFFFELL);
      *(__m128i *)(v194 + 1) = _mm_unpacklo_epi64(v195, v195);
      *v318 = (__int64 (__fastcall *)())((unsigned __int64)*v318 | 2);
      v319 = 0;
      goto LABEL_373;
    }
    v192 = *(__int64 **)(v191 + 8);
    if ( (*(_BYTE *)v192 & 2) != 0 )
    {
      v193 = *(__int64 **)(v191 + 16);
      if ( (*(_BYTE *)v193 & 2) != 0 )
        goto LABEL_554;
    }
    else
    {
      sub_1D4760(v192);
      v193 = *(__int64 **)(v191 + 16);
      if ( (*(_BYTE *)v193 & 2) != 0 )
        goto LABEL_368;
    }
    sub_1D4760(v193);
LABEL_368:
    if ( (*(_BYTE *)v191 & 2) != 0 )
    {
LABEL_369:
      if ( v190 > 3 )
        qfree(v190 & 0xFFFFFFFFFFFFFFFCLL);
      v188 = v318;
      v190 = (unsigned __int64)*v318;
      goto LABEL_372;
    }
LABEL_554:
    v285 = *(_QWORD *)(v191 + 24);
    if ( v285 )
    {
      *(_QWORD *)(v191 + 32) = 0;
      qfree(v285);
    }
    *(_QWORD *)v191 |= 2uLL;
    goto LABEL_369;
  }
  return v311.m128i_u32[0];
}
