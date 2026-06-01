__int64 __fastcall sub_1DB100(__int64 a1, __int64 a2, signed int a3, unsigned __int64 **a4, int a5, char a6)
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
  __int64 *v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  __m128i v22; // xmm0
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // r13
  __int64 v26; // rax
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __int64 v29; // rax
  int v30; // edx
  char v32; // bl
  void **v33; // r15
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  signed int v36; // eax
  unsigned int v37; // r13d
  __int32 v38; // eax
  const __m128i *v39; // r12
  __int64 (__fastcall ***v40)(); // rbx
  __int64 v41; // rdi
  __int64 v42; // r15
  __int64 v43; // r13
  __int64 v44; // r12
  _QWORD *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rdi
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
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
  unsigned __int64 *v61; // rax
  unsigned int v62; // ebx
  _QWORD *v63; // rcx
  _QWORD *v64; // rdi
  __int64 v65; // rsi
  unsigned __int64 v66; // rsi
  __int64 v67; // r8
  int v68; // r9d
  signed int v69; // r13d
  unsigned int v70; // ebx
  unsigned int v71; // eax
  __int64 v72; // r15
  __int64 v73; // rax
  __int64 v74; // r15
  __int64 v75; // rdx
  __int64 v76; // r15
  __int64 v77; // rdx
  __int64 v78; // r12
  unsigned int v79; // eax
  unsigned __int64 *v80; // rcx
  unsigned __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rcx
  int v84; // ecx
  __int64 v85; // rcx
  unsigned __int64 v86; // r12
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
  __int64 v129; // rsi
  unsigned __int64 v130; // rdx
  __int64 v131; // r12
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int32 *v134; // rbx
  __int64 v135; // rsi
  __int32 v136; // eax
  __int64 v137; // rax
  __int64 v138; // rsi
  unsigned __int32 v139; // r13d
  int v140; // eax
  int v141; // r13d
  __int64 v142; // rax
  __int64 v143; // rsi
  unsigned __int64 v144; // r12
  _QWORD *v145; // rax
  unsigned __int64 **v146; // rdi
  int v147; // eax
  unsigned int v148; // ecx
  unsigned __int64 v149; // rdx
  __int64 v150; // r15
  __int64 v151; // rcx
  unsigned int v152; // edx
  __int64 v153; // rax
  __int64 v154; // rax
  int v155; // edx
  __int64 v156; // rcx
  __int64 v157; // r15
  __int64 v158; // rax
  __int32 v159; // r9d
  unsigned __int64 v160; // rax
  unsigned __int64 v161; // rdx
  __m128i *v162; // rsi
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rbx
  void *v166; // r15
  __m128i v167; // xmm0
  __m128i v168; // xmm0
  unsigned __int64 v169; // rbx
  void *v170; // r15
  __m128i v171; // xmm0
  __m128 v172; // xmm1
  __m128i v173; // xmm0
  __m128i v174; // xmm0
  __m128i v175; // xmm0
  unsigned __int64 v176; // rbx
  void *v177; // r15
  __m128i v178; // xmm0
  unsigned __int64 v179; // rbx
  void *v180; // r15
  __m128i v181; // xmm0
  unsigned __int64 v182; // rbx
  void *v183; // r15
  __m128i v184; // xmm0
  __int64 *v185; // rsi
  __int64 v186; // rdx
  __int64 v187; // rcx
  unsigned __int64 v188; // rbx
  void *v189; // r12
  __m128i v190; // xmm0
  unsigned __int64 v191; // rbx
  void *v192; // r12
  __m128i v193; // xmm0
  __int64 v194; // rdx
  __int64 v195; // rcx
  unsigned __int64 v196; // rbx
  void *v197; // r12
  __m128i v198; // xmm0
  __int64 v199; // rsi
  __int64 (__fastcall **v200)(); // rax
  __int64 v201; // rcx
  unsigned __int64 v202; // rdx
  unsigned __int64 v203; // rbx
  unsigned __int64 v204; // r12
  __int64 *v205; // rdi
  __int64 *v206; // rdi
  __int64 (__fastcall **v207)(); // rax
  __m128i v208; // xmm0
  __int64 v209; // r12
  __int64 v210; // rbx
  __m128i v211; // xmm0
  __int64 v212; // rbx
  __m128i v213; // xmm0
  __int64 v214; // rbx
  __m128i v215; // xmm0
  __m128i v216; // xmm0
  __m128i v217; // xmm0
  __m128i v218; // xmm0
  __int64 v219; // rbx
  __int64 v220; // rbx
  __int64 v221; // rbx
  void *v222; // rsi
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // rbx
  __int64 v226; // rbx
  __int64 v227; // rbx
  unsigned __int64 **v228; // r12
  __m128i v229; // xmm0
  __m128i v230; // xmm0
  __m128i v231; // xmm0
  __m128i v232; // xmm0
  __m128i v233; // xmm0
  __m128i v234; // xmm1
  __m128i v235; // xmm1
  __m128i v236; // xmm1
  __m128i v237; // xmm1
  __m128i v238; // xmm1
  __m128i v239; // xmm1
  __m128i v240; // xmm1
  __m128i v241; // xmm1
  __m128i v242; // xmm1
  __m128i v243; // xmm1
  __int64 v244; // rax
  __m128i v245; // xmm1
  __m128i v246; // xmm0
  __m128i v247; // xmm1
  __m128i v248; // xmm1
  __m128i v249; // xmm0
  __m128i v250; // xmm0
  __m128i v251; // xmm0
  __int64 v252; // rdi
  __int64 v253; // r15
  __int64 v254; // rbx
  _QWORD *v255; // r12
  __int64 v256; // rdi
  __int64 v257; // rdi
  __int64 v258; // rdi
  __int64 v259; // r15
  __int64 v260; // rbx
  _QWORD *v261; // r12
  __int64 v262; // rdi
  __int64 v263; // rdi
  __int64 v264; // rdi
  __int64 v265; // r13
  __int64 v266; // rbx
  __int64 v267; // r15
  _QWORD *v268; // r12
  __int64 v269; // rdi
  __int64 v270; // rdi
  __int64 v271; // rdi
  __int64 v272; // r13
  __int64 v273; // rbx
  __int64 v274; // r15
  _QWORD *v275; // r12
  __int64 v276; // rdi
  __int64 v277; // rdi
  __int64 v278; // rdi
  __int64 v279; // r12
  __int64 v280; // r15
  _QWORD *v281; // rbx
  __int64 v282; // rdi
  __int64 v283; // rdi
  __int64 v284; // rax
  __int64 v285; // rax
  unsigned __int64 **v286; // rax
  unsigned __int64 tinfo_size; // r13
  void *v288; // rax
  void *v289; // rax
  void *v290; // rax
  void *v291; // rax
  void *v292; // rax
  __int64 (__fastcall **v293)(); // rax
  __m128i v294; // xmm0
  _BYTE *v295; // rcx
  void *v296; // rax
  void *v297; // rax
  void *v298; // rax
  void *v299; // rax
  __int64 v300; // r15
  __int64 v301; // rbx
  __int64 v302; // r12
  __int64 v303; // rdx
  __int64 v304; // rax
  __int64 v305; // rbx
  char *v306; // rax
  const void *v307; // rsi
  char *v308; // r15
  __int64 v309; // rcx
  int v310; // eax
  __int64 v311; // rdx
  void *v312; // rax
  void *v313; // rax
  void *v314; // rax
  void *v315; // rax
  __int64 v316; // rdi
  __int64 v317; // [rsp+8h] [rbp-E18h]
  __int64 v318; // [rsp+10h] [rbp-E10h]
  unsigned __int64 i; // [rsp+38h] [rbp-DE8h]
  __int64 v320; // [rsp+40h] [rbp-DE0h]
  __int64 v321; // [rsp+40h] [rbp-DE0h]
  char n; // [rsp+48h] [rbp-DD8h]
  size_t nb; // [rsp+48h] [rbp-DD8h]
  size_t na; // [rsp+48h] [rbp-DD8h]
  bool v325; // [rsp+50h] [rbp-DD0h]
  bool v326; // [rsp+50h] [rbp-DD0h]
  unsigned __int64 *v327; // [rsp+58h] [rbp-DC8h]
  unsigned int v328; // [rsp+58h] [rbp-DC8h]
  unsigned __int64 v329; // [rsp+60h] [rbp-DC0h]
  unsigned __int64 *v330; // [rsp+68h] [rbp-DB8h]
  __int32 v332; // [rsp+70h] [rbp-DB0h]
  __int64 v333; // [rsp+78h] [rbp-DA8h]
  __m128i v334; // [rsp+80h] [rbp-DA0h] BYREF
  unsigned __int64 **v335; // [rsp+90h] [rbp-D90h]
  __int64 v336; // [rsp+98h] [rbp-D88h]
  unsigned __int64 v337; // [rsp+A0h] [rbp-D80h]
  unsigned __int64 **v338; // [rsp+A8h] [rbp-D78h]
  unsigned int v339; // [rsp+B0h] [rbp-D70h]
  unsigned int v340; // [rsp+B4h] [rbp-D6Ch]
  unsigned __int64 *v341; // [rsp+B8h] [rbp-D68h]
  __m128i v342; // [rsp+C0h] [rbp-D60h] BYREF
  __int64 v343[2]; // [rsp+D0h] [rbp-D50h] BYREF
  _QWORD v344[2]; // [rsp+E0h] [rbp-D40h] BYREF
  unsigned __int64 v345; // [rsp+F0h] [rbp-D30h] BYREF
  __int128 v346; // [rsp+F8h] [rbp-D28h]
  _OWORD v347[2]; // [rsp+110h] [rbp-D10h] BYREF
  int v348; // [rsp+130h] [rbp-CF0h]
  __int64 (__fastcall **v349)(); // [rsp+140h] [rbp-CE0h] BYREF
  __int64 v350; // [rsp+148h] [rbp-CD8h]
  __int128 v351; // [rsp+150h] [rbp-CD0h]
  __int64 v352; // [rsp+160h] [rbp-CC0h]
  __int64 v353; // [rsp+168h] [rbp-CB8h]
  __int64 v354; // [rsp+170h] [rbp-CB0h]
  unsigned __int64 **v355; // [rsp+178h] [rbp-CA8h]
  void **v356; // [rsp+180h] [rbp-CA0h]
  __int64 v357; // [rsp+188h] [rbp-C98h] BYREF
  __int128 v358; // [rsp+190h] [rbp-C90h]
  __int64 v359; // [rsp+1A0h] [rbp-C80h] BYREF
  __int128 v360; // [rsp+1A8h] [rbp-C78h]
  __int64 v361; // [rsp+1B8h] [rbp-C68h]
  unsigned __int64 v362; // [rsp+1C0h] [rbp-C60h]
  bool v363; // [rsp+1C8h] [rbp-C58h]
  char v364; // [rsp+1C9h] [rbp-C57h]
  char v365; // [rsp+1CAh] [rbp-C56h]
  __int64 (__fastcall **v366)(); // [rsp+1D0h] [rbp-C50h] BYREF
  char v367; // [rsp+1D8h] [rbp-C48h]
  __int64 v368; // [rsp+1E0h] [rbp-C40h]
  __int128 v369; // [rsp+1E8h] [rbp-C38h]
  __int128 v370; // [rsp+1F8h] [rbp-C28h]
  unsigned __int64 *v371; // [rsp+208h] [rbp-C18h]
  int v372; // [rsp+210h] [rbp-C10h]
  __int64 v373; // [rsp+218h] [rbp-C08h]
  __int128 v374; // [rsp+220h] [rbp-C00h]
  int v375; // [rsp+230h] [rbp-BF0h]
  __m128i v376; // [rsp+240h] [rbp-BE0h] BYREF
  __int128 v377; // [rsp+250h] [rbp-BD0h]
  __int128 v378; // [rsp+260h] [rbp-BC0h]
  __int64 v379; // [rsp+270h] [rbp-BB0h]
  __int128 v380; // [rsp+278h] [rbp-BA8h]
  __int128 v381; // [rsp+288h] [rbp-B98h]
  __int64 v382; // [rsp+298h] [rbp-B88h]
  int v383; // [rsp+2A0h] [rbp-B80h]
  __int128 v384; // [rsp+2A8h] [rbp-B78h]
  __int128 v385; // [rsp+2B8h] [rbp-B68h]
  __int64 v386; // [rsp+2C8h] [rbp-B58h]
  __int64 v387; // [rsp+2D0h] [rbp-B50h]
  __int128 v388; // [rsp+2D8h] [rbp-B48h]
  __int64 v389; // [rsp+2E8h] [rbp-B38h]
  __int64 v390; // [rsp+2F0h] [rbp-B30h]
  __int128 v391; // [rsp+2F8h] [rbp-B28h]
  __int64 v392; // [rsp+308h] [rbp-B18h]
  __int128 v393; // [rsp+310h] [rbp-B10h]
  __int64 v394; // [rsp+320h] [rbp-B00h]
  __int128 v395; // [rsp+328h] [rbp-AF8h]
  __int64 v396; // [rsp+338h] [rbp-AE8h]
  __int64 v397; // [rsp+340h] [rbp-AE0h]
  __int64 v398; // [rsp+348h] [rbp-AD8h]
  __int128 v399; // [rsp+350h] [rbp-AD0h]
  int v400; // [rsp+360h] [rbp-AC0h]
  __int64 v401; // [rsp+368h] [rbp-AB8h]
  __int128 v402; // [rsp+370h] [rbp-AB0h]
  __int64 v403; // [rsp+380h] [rbp-AA0h]
  __int128 v404; // [rsp+388h] [rbp-A98h]
  __int64 v405; // [rsp+398h] [rbp-A88h]
  __int128 v406; // [rsp+3A0h] [rbp-A80h]
  unsigned __int64 *v407[2]; // [rsp+3B0h] [rbp-A70h] BYREF
  char v408; // [rsp+3C0h] [rbp-A60h] BYREF
  __m128i v409; // [rsp+480h] [rbp-9A0h] BYREF
  __m128i v410; // [rsp+490h] [rbp-990h]
  __int128 v411; // [rsp+4A0h] [rbp-980h] BYREF
  __int64 v412; // [rsp+4B0h] [rbp-970h]
  __m128i v413; // [rsp+4B8h] [rbp-968h] BYREF
  __m128i v414; // [rsp+4C8h] [rbp-958h] BYREF
  __int64 v415; // [rsp+4D8h] [rbp-948h]
  int v416; // [rsp+4E0h] [rbp-940h]
  __m128i v417; // [rsp+4E8h] [rbp-938h] BYREF
  __m128i v418; // [rsp+4F8h] [rbp-928h] BYREF
  __int64 v419; // [rsp+508h] [rbp-918h]
  void *v420; // [rsp+510h] [rbp-910h]
  __int128 v421; // [rsp+518h] [rbp-908h]
  __int64 v422; // [rsp+528h] [rbp-8F8h]
  void *v423; // [rsp+530h] [rbp-8F0h]
  __int128 v424; // [rsp+538h] [rbp-8E8h]
  void *v425; // [rsp+548h] [rbp-8D8h]
  __int128 v426; // [rsp+550h] [rbp-8D0h]
  void *v427; // [rsp+560h] [rbp-8C0h]
  __int128 v428; // [rsp+568h] [rbp-8B8h]
  __int64 v429[2]; // [rsp+578h] [rbp-8A8h] BYREF
  void *v430; // [rsp+588h] [rbp-898h]
  __int128 v431; // [rsp+590h] [rbp-890h]
  int v432; // [rsp+5A0h] [rbp-880h]
  void *v433; // [rsp+5A8h] [rbp-878h]
  __int128 v434; // [rsp+5B0h] [rbp-870h]
  __int64 v435; // [rsp+5C0h] [rbp-860h] BYREF
  __int128 v436; // [rsp+5C8h] [rbp-858h]
  void *src; // [rsp+5D8h] [rbp-848h]
  __int128 v438; // [rsp+5E0h] [rbp-840h]
  unsigned __int64 *v439[2]; // [rsp+5F0h] [rbp-830h] BYREF
  __m128i v440; // [rsp+600h] [rbp-820h] BYREF
  __m128i v441; // [rsp+610h] [rbp-810h] BYREF
  __m128i v442; // [rsp+620h] [rbp-800h] BYREF
  __m128i v443; // [rsp+630h] [rbp-7F0h] BYREF
  __m128i v444; // [rsp+640h] [rbp-7E0h] BYREF
  __m128i v445; // [rsp+650h] [rbp-7D0h] BYREF
  __m128i v446; // [rsp+660h] [rbp-7C0h] BYREF
  __m128i v447; // [rsp+670h] [rbp-7B0h] BYREF
  __m128i v448; // [rsp+680h] [rbp-7A0h] BYREF
  __m128i v449; // [rsp+690h] [rbp-790h] BYREF
  __m128i v450; // [rsp+6A0h] [rbp-780h] BYREF
  __m128i v451; // [rsp+6B0h] [rbp-770h] BYREF
  void *v452[2]; // [rsp+6C0h] [rbp-760h] BYREF
  __m128i v453; // [rsp+6D0h] [rbp-750h]
  __m128i v454; // [rsp+6E0h] [rbp-740h] BYREF
  __int64 v455; // [rsp+6F0h] [rbp-730h]
  __m128i v456; // [rsp+6F8h] [rbp-728h] BYREF
  __m128i v457; // [rsp+708h] [rbp-718h] BYREF
  __int64 v458; // [rsp+718h] [rbp-708h]
  int v459; // [rsp+720h] [rbp-700h]
  __m128i v460; // [rsp+728h] [rbp-6F8h] BYREF
  __m128i v461; // [rsp+738h] [rbp-6E8h] BYREF
  __int64 v462; // [rsp+748h] [rbp-6D8h]
  void *v463; // [rsp+750h] [rbp-6D0h]
  __m128i v464; // [rsp+758h] [rbp-6C8h]
  __int64 v465; // [rsp+768h] [rbp-6B8h]
  void *v466; // [rsp+770h] [rbp-6B0h]
  __m128i v467; // [rsp+778h] [rbp-6A8h]
  void *v468; // [rsp+788h] [rbp-698h]
  __m128i v469; // [rsp+790h] [rbp-690h]
  void *v470; // [rsp+7A0h] [rbp-680h]
  __m128i v471; // [rsp+7A8h] [rbp-678h]
  __int64 v472[2]; // [rsp+7B8h] [rbp-668h] BYREF
  void *v473; // [rsp+7C8h] [rbp-658h]
  __m128i v474; // [rsp+7D0h] [rbp-650h]
  int v475; // [rsp+7E0h] [rbp-640h]
  void *v476; // [rsp+7E8h] [rbp-638h]
  __m128i v477; // [rsp+7F0h] [rbp-630h]
  __int64 v478; // [rsp+800h] [rbp-620h] BYREF
  __int128 v479; // [rsp+808h] [rbp-618h]
  void *v480; // [rsp+818h] [rbp-608h]
  __m128i v481; // [rsp+820h] [rbp-600h]
  __int64 (__fastcall **v482)(); // [rsp+830h] [rbp-5F0h] BYREF
  __int64 v483; // [rsp+838h] [rbp-5E8h]
  __m128i v484; // [rsp+840h] [rbp-5E0h] BYREF
  __m128i v485; // [rsp+850h] [rbp-5D0h] BYREF
  __m128i v486; // [rsp+860h] [rbp-5C0h] BYREF
  __m128i v487; // [rsp+870h] [rbp-5B0h] BYREF
  __m128i v488; // [rsp+880h] [rbp-5A0h] BYREF
  __m128i v489; // [rsp+890h] [rbp-590h] BYREF
  __m128i v490; // [rsp+8A0h] [rbp-580h] BYREF
  __m128i v491; // [rsp+8B0h] [rbp-570h] BYREF
  __m128i v492; // [rsp+8C0h] [rbp-560h] BYREF
  __m128i v493; // [rsp+8D0h] [rbp-550h] BYREF
  __m128i v494; // [rsp+8E0h] [rbp-540h] BYREF
  __m128i v495; // [rsp+8F0h] [rbp-530h] BYREF
  __int64 v496; // [rsp+900h] [rbp-520h] BYREF
  __int64 v497; // [rsp+908h] [rbp-518h]
  int v498; // [rsp+910h] [rbp-510h]
  unsigned __int64 v499; // [rsp+920h] [rbp-500h]
  __m128i v500; // [rsp+928h] [rbp-4F8h] BYREF
  __m128i v501; // [rsp+938h] [rbp-4E8h] BYREF
  __m128i v502; // [rsp+948h] [rbp-4D8h] BYREF
  __int64 v503; // [rsp+958h] [rbp-4C8h]
  __m128i v504; // [rsp+960h] [rbp-4C0h] BYREF
  __m128i v505; // [rsp+970h] [rbp-4B0h] BYREF
  __int64 v506; // [rsp+980h] [rbp-4A0h]
  int v507; // [rsp+988h] [rbp-498h]
  __m128i v508; // [rsp+990h] [rbp-490h] BYREF
  __m128i v509; // [rsp+9A0h] [rbp-480h] BYREF
  __int64 v510; // [rsp+9B0h] [rbp-470h]
  __int64 v511; // [rsp+9B8h] [rbp-468h]
  __m128i v512; // [rsp+9C0h] [rbp-460h] BYREF
  __int64 v513; // [rsp+9D0h] [rbp-450h]
  __int64 v514; // [rsp+9D8h] [rbp-448h]
  __m128i v515; // [rsp+9E0h] [rbp-440h] BYREF
  __int64 v516; // [rsp+9F0h] [rbp-430h]
  __m128i v517; // [rsp+9F8h] [rbp-428h] BYREF
  void *v518; // [rsp+A08h] [rbp-418h]
  __m128i v519; // [rsp+A10h] [rbp-410h] BYREF
  __int64 v520[2]; // [rsp+A20h] [rbp-400h] BYREF
  __int64 v521; // [rsp+A30h] [rbp-3F0h]
  __m128i v522; // [rsp+A38h] [rbp-3E8h] BYREF
  int v523; // [rsp+A48h] [rbp-3D8h]
  __int64 v524; // [rsp+A50h] [rbp-3D0h]
  __m128i v525; // [rsp+A58h] [rbp-3C8h] BYREF
  __int64 v526; // [rsp+A68h] [rbp-3B8h]
  __m128i v527; // [rsp+A70h] [rbp-3B0h] BYREF
  void *v528; // [rsp+A80h] [rbp-3A0h]
  __m128i v529; // [rsp+A88h] [rbp-398h] BYREF
  unsigned __int64 *v530; // [rsp+A98h] [rbp-388h] BYREF
  unsigned __int64 *v531; // [rsp+AA0h] [rbp-380h]
  __m128i v532; // [rsp+AA8h] [rbp-378h] BYREF
  __m128i v533; // [rsp+AB8h] [rbp-368h] BYREF
  __m128i v534; // [rsp+AC8h] [rbp-358h] BYREF
  __m128i v535; // [rsp+AD8h] [rbp-348h] BYREF
  __m128i v536; // [rsp+AE8h] [rbp-338h] BYREF
  __m128i v537; // [rsp+AF8h] [rbp-328h] BYREF
  __m128i v538; // [rsp+B08h] [rbp-318h] BYREF
  __m128i v539; // [rsp+B18h] [rbp-308h] BYREF
  __m128i v540; // [rsp+B28h] [rbp-2F8h] BYREF
  __m128i v541; // [rsp+B38h] [rbp-2E8h] BYREF
  __m128i v542; // [rsp+B48h] [rbp-2D8h] BYREF
  __m128i v543; // [rsp+B58h] [rbp-2C8h] BYREF
  __int64 v544; // [rsp+B68h] [rbp-2B8h]
  __int64 v545; // [rsp+B70h] [rbp-2B0h]
  int v546; // [rsp+B78h] [rbp-2A8h]
  unsigned __int64 v547; // [rsp+B80h] [rbp-2A0h] BYREF
  __m128i v548; // [rsp+B88h] [rbp-298h]
  __m128i v549; // [rsp+B98h] [rbp-288h]
  __m128i v550; // [rsp+BA8h] [rbp-278h]
  __int64 v551; // [rsp+BB8h] [rbp-268h]
  __m128i v552; // [rsp+BC0h] [rbp-260h]
  __m128i v553; // [rsp+BD0h] [rbp-250h]
  __int64 v554; // [rsp+BE0h] [rbp-240h]
  int v555; // [rsp+BE8h] [rbp-238h]
  __m128i v556; // [rsp+BF0h] [rbp-230h]
  __m128i v557; // [rsp+C00h] [rbp-220h]
  __int64 v558; // [rsp+C10h] [rbp-210h]
  __int64 v559; // [rsp+C18h] [rbp-208h]
  __m128i v560; // [rsp+C20h] [rbp-200h]
  __int64 v561; // [rsp+C30h] [rbp-1F0h]
  __int64 v562; // [rsp+C38h] [rbp-1E8h]
  __m128i v563; // [rsp+C40h] [rbp-1E0h]
  __int64 v564; // [rsp+C50h] [rbp-1D0h]
  __m128i v565; // [rsp+C58h] [rbp-1C8h]
  __int64 v566; // [rsp+C68h] [rbp-1B8h]
  __m128i v567; // [rsp+C70h] [rbp-1B0h]
  __int64 v568; // [rsp+C80h] [rbp-1A0h] BYREF
  __int64 v569; // [rsp+C90h] [rbp-190h]
  __m128i v570; // [rsp+C98h] [rbp-188h]
  int v571; // [rsp+CA8h] [rbp-178h]
  __int64 v572; // [rsp+CB0h] [rbp-170h]
  __m128i v573; // [rsp+CB8h] [rbp-168h]
  __int64 v574; // [rsp+CC8h] [rbp-158h]
  __m128i v575; // [rsp+CD0h] [rbp-150h]
  __int64 v576; // [rsp+CE0h] [rbp-140h]
  __m128i v577; // [rsp+CE8h] [rbp-138h]
  unsigned __int64 *v578[2]; // [rsp+CF8h] [rbp-128h] BYREF
  __m128i v579; // [rsp+D08h] [rbp-118h]
  __m128i v580; // [rsp+D18h] [rbp-108h]
  __m128i v581; // [rsp+D28h] [rbp-F8h]
  __m128i v582; // [rsp+D38h] [rbp-E8h]
  __m128i v583; // [rsp+D48h] [rbp-D8h]
  __m128i v584; // [rsp+D58h] [rbp-C8h]
  __m128i v585; // [rsp+D68h] [rbp-B8h]
  __m128i v586; // [rsp+D78h] [rbp-A8h]
  __m128i v587; // [rsp+D88h] [rbp-98h]
  __m128i v588; // [rsp+D98h] [rbp-88h]
  __m128i v589; // [rsp+DA8h] [rbp-78h]
  __m128i v590; // [rsp+DB8h] [rbp-68h]
  __int64 v591; // [rsp+DC8h] [rbp-58h]
  __int64 v592; // [rsp+DD0h] [rbp-50h]
  int v593; // [rsp+DD8h] [rbp-48h]
  unsigned __int64 v594; // [rsp+DE8h] [rbp-38h]

  v336 = a2;
  v340 = a3;
  v338 = a4;
  v594 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 64) <= a3 )
  {
    v342.m128i_i32[0] = -4;
    return v342.m128i_u32[0];
  }
  LODWORD(v341) = a6 & 1;
  if ( (a6 & 1) == 0 && *(_QWORD *)(a1 + 1480) > 1u )
  {
    v342.m128i_i32[0] = -22;
    return v342.m128i_u32[0];
  }
  sub_1CF3F0(v338);
  v9 = *(_QWORD *)(a1 + 1496);
  v342.m128i_i32[0] = sub_33E140(v9, 20, v336, v340, (_DWORD)v338, v10);
  if ( !v342.m128i_i32[0] )
  {
    v335 = *(unsigned __int64 ***)(v336 + 816);
    if ( !v335 )
    {
      v9 = 24;
      v93 = (unsigned __int64 **)qalloc();
      v335 = v93;
      if ( !v93 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v94 = v336;
      *v93 = nullptr;
      v93[1] = nullptr;
      v93[2] = nullptr;
      *(_QWORD *)(v94 + 816) = v93;
      *(_DWORD *)(v94 + 824) = *(_DWORD *)(a1 + 64);
    }
    v339 = *(_DWORD *)(a1 + 64);
    if ( v340 >= v339 )
      sub_1D36D0(v9);
    v320 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v340);
    v333 = *(_QWORD *)(v320 + 56);
    v11 = *v338;
    v330 = *v338;
    if ( !*v338 )
    {
      if ( !v338[2] )
      {
        v342.m128i_i32[0] = -26;
        v30 = v339;
        goto LABEL_30;
      }
      v11 = v338[1];
    }
    v12 = *v11;
    v455 = -1;
    *(_OWORD *)v452 = 0;
    v13 = &v496;
    v329 = v12;
    v14 = &v484;
    v453 = 0;
    v456 = 0;
    v457 = 0;
    v460 = 0;
    v461 = 0;
    v464 = 0;
    v467 = 0;
    v469 = 0;
    v471 = 0;
    v474 = 0;
    v477 = 0;
    v479 = 0;
    v458 = 0;
    v459 = 0;
    v462 = 0;
    v463 = nullptr;
    v465 = 0;
    v466 = nullptr;
    v468 = nullptr;
    v470 = nullptr;
    v472[0] = 0;
    v472[1] = 0;
    v473 = nullptr;
    v475 = -1;
    v476 = nullptr;
    v478 = 0;
    v480 = nullptr;
    v454 = (__m128i)-1LL;
    v481 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    v16 = v342.m128i_i32[0];
    v482 = nullptr;
    v483 = 0;
    do
    {
      v14[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v14 += 2;
      v14[-2] = si128;
      v14[-1].m128i_i64[1] = 0;
    }
    while ( v14 != (__m128i *)&v496 );
    v342.m128i_i32[0] = v16;
    v496 = 0;
    v497 = -1;
    v498 = -1;
    v327 = *v335;
    if ( !*v335 )
      goto LABEL_17;
    v337 = **v335;
    v17 = v337 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v337 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v32 = 0;
      LOBYTE(v337) = 0;
      if ( *(_DWORD *)v333 == 55 && (_DWORD)elf_gnu_hash_indexes == -1 )
      {
        v18 = 24;
        goto LABEL_301;
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
      if ( v329 >= (unsigned __int64)v13 )
        break;
      v17 = *(_QWORD *)(v17 + 8);
LABEL_16:
      if ( (*(_BYTE *)v17 & 2) != 0 )
        goto LABEL_17;
    }
    if ( (unsigned __int64)v13 < v329 )
    {
      v17 = *(_QWORD *)(v17 + 16);
      goto LABEL_16;
    }
    v342.m128i_i32[0] = v9;
    if ( v327 != (unsigned __int64 *)v17 )
    {
      v32 = 0;
      LOBYTE(v337) = 0;
      if ( *(_DWORD *)v333 == 55 && *(_DWORD *)(v17 + 624) == -1 )
      {
LABEL_301:
        *(_BYTE *)(v333 + 32) = 7;
        v147 = *(_DWORD *)(v18 + 592);
        v148 = v339;
        *(_DWORD *)(v333 + 40) = v147;
        sub_66FA0(a1, 0, (__int64)"replaced jump to outline by goto %d", v148);
LABEL_249:
        if ( v482 )
        {
          sub_82C40((unsigned __int64 **)&v482);
          if ( v482 )
            qfree((__int64)v482);
        }
        if ( v480 )
        {
          v481.m128i_i64[0] = 0;
          qfree((__int64)v480);
        }
        v121 = v478;
        if ( v478 )
        {
          v122 = v479;
          if ( (_QWORD)v479 )
          {
            v123 = v342.m128i_i32[0];
            v124 = 0;
            v125 = 0;
            do
            {
              v126 = (_QWORD *)(v121 + v124);
              clear_tinfo_t();
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
              cleanup_argloc();
              v121 = v478;
            }
            while ( v122 != v125 );
            v342.m128i_i32[0] = v123;
          }
          *(_QWORD *)&v479 = 0;
          qfree(v121);
        }
        if ( v476 )
        {
          v477.m128i_i64[0] = 0;
          qfree((__int64)v476);
        }
        if ( v473 )
        {
          v474.m128i_i64[0] = 0;
          qfree((__int64)v473);
        }
        qfree(v472[0]);
        if ( v470 )
        {
          v471.m128i_i64[0] = 0;
          qfree((__int64)v470);
        }
        if ( v468 )
        {
          v469.m128i_i64[0] = 0;
          qfree((__int64)v468);
        }
        if ( v466 )
        {
          v467.m128i_i64[0] = 0;
          qfree((__int64)v466);
        }
        if ( v463 )
        {
          v464.m128i_i64[0] = 0;
          qfree((__int64)v463);
        }
        if ( v452[1] )
        {
          v453.m128i_i64[0] = 0;
          qfree((__int64)v452[1]);
        }
        return v342.m128i_u32[0];
      }
LABEL_36:
      v33 = (void **)(v17 + 32);
LABEL_37:
      v34 = v336;
      v35 = (unsigned __int64)v33[72] + *(_QWORD *)(v336 + 808);
      *(_QWORD *)(v336 + 808) = v35;
      if ( (int)(*(_DWORD *)(*(_QWORD *)(a1 + 1496) + 652LL) << 10) < v35 )
      {
        v342.m128i_i32[0] = -29;
        goto LABEL_58;
      }
      v328 = v340 + 1;
      v325 = *(_DWORD *)v333 != 55;
      if ( *(_DWORD *)v333 != 55 )
      {
        v36 = *(_DWORD *)(v34 + 824);
        if ( v36 > (int)v340 && v36 <= (int)(v340 + 1) )
        {
          v9 = a1;
          v284 = sub_68FD0(a1, *(_QWORD *)(v333 + 24), *(_QWORD *)(v320 + 40), 1);
          if ( !v284 )
          {
            v342.m128i_i32[0] = -22;
            goto LABEL_58;
          }
          v328 = *(_DWORD *)(v284 + 72);
        }
      }
      v349 = off_4DEAC8;
      v351 = 0u;
      v355 = v335;
      v365 = v337 | v32 ^ 1;
      v352 = 0;
      v353 = 0;
      v354 = 0;
      v356 = v33;
      v357 = 0;
      v359 = 0;
      v361 = 0;
      v363 = v325;
      v364 = v32;
      v350 = a1;
      n = v325 & v32;
      v358 = 0;
      v360 = 0;
      v362 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v339), _mm_cvtsi32_si128(v328)).m128i_u64[0];
      if ( (a6 & 1) != 0 && (v325 & (unsigned __int8)v32) != 0 )
      {
        if ( v339 >= *(_DWORD *)(a1 + 64) )
          sub_1D36D0(v9);
        if ( !v330 )
          goto LABEL_296;
        v129 = (__int64)&v345;
        v130 = *v330;
        v321 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v339);
        v131 = *(_QWORD *)(*(_QWORD *)(v321 + 64) + 1504LL);
        v335 = *(unsigned __int64 ***)(v321 + 64);
        v345 = 0;
        v346 = 0;
        (*(void (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64))(*(_QWORD *)v131 + 368LL))(
          v131,
          &v345,
          v130);
        v134 = (__int32 *)v345;
        v337 = v345 + 4 * v346;
        if ( v345 == v337 )
          goto LABEL_292;
        v334.m128i_i64[0] = v131 + 224;
        while ( 1 )
        {
          v129 = (unsigned int)*v134;
          v342.m128i_i32[0] = *v134;
          v139 = v342.m128i_i32[0];
          if ( sub_64930(v334.m128i_i64[0], v342.m128i_i32[0]) )
          {
            v140 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v131 + 32LL))(v131, v139);
            v141 = v140;
            if ( v140 <= 0 )
            {
              if ( !under_debugger )
                sub_383060(52736);
              goto LABEL_567;
            }
            v129 = v140;
            v159 = sub_138140(v335, v140, 1);
            if ( v159 == -1 )
            {
LABEL_291:
              v337 = v345;
LABEL_292:
              if ( v337 )
              {
                *(_QWORD *)&v346 = 0;
                qfree(v337);
              }
              v144 = 0;
              v337 = 0;
              for ( i = *v330; v144 < (unsigned __int64)v358; ++v144 )
              {
                v145 = (_QWORD *)j__qalloc_or_throw(80, v129, v132, v133);
                v145[4] = 0xFFFFFFFF00000000LL;
                v145[5] = 0;
                v145[6] = 0xFFFFFFFF00000000LL;
                v145[7] = 0;
                v145[8] = 0xFFFFFFFF00000000LL;
                v145[9] = 0;
                v335 = (unsigned __int64 **)(v145 + 4);
                v342.m128i_i64[0] = (__int64)v145;
                v334.m128i_i64[0] = (__int64)(v145 + 8);
                sub_330970(v145, i);
                v146 = v335;
                *(_DWORD *)v342.m128i_i64[0] = 4;
                sub_125180((__int64)v146, (unsigned __int8 *)(v357 + 16 * v144));
                sub_125180(v334.m128i_i64[0], (unsigned __int8 *)(v359 + 16 * v144));
                v129 = v342.m128i_i64[0];
                v337 = (unsigned __int64)sub_A3160(v321, v342.m128i_i64[0], v337);
              }
LABEL_296:
              v37 = *((_DWORD *)v33 + 146);
              v40 = &v349;
              if ( *((_DWORD *)v33 + 147) <= (signed int)v37 )
              {
LABEL_142:
                *((_DWORD *)v33 + 148) = v328;
                goto LABEL_143;
              }
LABEL_44:
              v342.m128i_i64[0] = (__int64)&v349;
              while ( v37 < *(_DWORD *)(a1 + 64) )
              {
                v39 = *(const __m128i **)(*(_QWORD *)(a1 + 528) + 8LL * v37);
                if ( !v364 )
                {
                  v361 = -*(_QWORD *)(*(_QWORD *)(v350 + 1472) + 40 * v39[32].m128i_i64[0] + 8);
                  v39 = (const __m128i *)sub_69310(v350, (__int64)v39, *(_DWORD *)(v350 + 64), 0);
                }
                v40 = (__int64 (__fastcall ***)())v342.m128i_i64[0];
                if ( v365 )
                  sub_1D9190(v342.m128i_i64[0], v39[2].m128i_i64, 0);
                if ( (unsigned int)sub_11F830(v39, v342.m128i_i64[0]) )
                {
                  v342.m128i_i32[0] = -22;
                  goto LABEL_57;
                }
                if ( v365 )
                {
                  sub_1D9190(v342.m128i_i64[0], &v39[2].m128i_i64[1], 0);
                  v48 = v39[2].m128i_u64[0];
                  if ( v48 >= v39[2].m128i_i64[1] )
                  {
                    v49 = v39[3].m128i_i64[1];
                    if ( v49 )
                      v48 = *(_QWORD *)(v49 + 24);
                    v334.m128i_i64[0] = v48;
                    v337 = sub_330F80(v350);
                    v50 = get_item_end() - v337;
                    if ( v50 > 4 )
                      v50 = 4;
                    v39[2].m128i_i64[1] = v334.m128i_i64[0] + v50;
                  }
                }
                v38 = v39[1].m128i_i32[2];
                BYTE1(v38) &= ~2u;
                if ( (_DWORD)v341 )
                {
                  v38 |= 0x40080u;
                  v39[1].m128i_i32[2] = v38;
                  v39[32].m128i_i64[0] = *(_QWORD *)(a1 + 1480);
                }
                else
                {
                  LOBYTE(v38) = v38 | 0x80;
                }
                ++v37;
                v39[1].m128i_i32[2] = v38 | 0x20000;
                if ( *((_DWORD *)v33 + 147) <= (signed int)v37 )
                  goto LABEL_141;
              }
              if ( !under_debugger )
                sub_383060(52719);
LABEL_567:
              BUG();
            }
            v142 = v358;
            v143 = v357;
            if ( *((_QWORD *)&v358 + 1) < (unsigned __int64)(v358 + 1) )
            {
              v332 = v159;
              v357 = qvector_reserve((__int64)&v357, v357, v358 + 1, 16);
              v143 = v357;
              v159 = v332;
              v142 = v358;
            }
            v135 = 16 * v142 + v143;
            *(_QWORD *)v135 = 0xFFFFFFFF00000000LL;
            v136 = v342.m128i_i32[0];
            *(_QWORD *)(v135 + 8) = 0;
            *(_QWORD *)&v358 = v358 + 1;
            *(_BYTE *)v135 = 1;
            *(_DWORD *)(v135 + 8) = v136;
            *(_DWORD *)(v135 + 4) = v141;
            v137 = v360;
            v138 = v359;
            v132 = v360 + 1;
            if ( *((_QWORD *)&v360 + 1) < (unsigned __int64)(v360 + 1) )
            {
              v342.m128i_i32[0] = v159;
              v359 = qvector_reserve((__int64)&v359, v359, v132, 16);
              v138 = v359;
              v159 = v342.m128i_i32[0];
              v137 = v360;
            }
            v129 = 16 * v137 + v138;
            *(_QWORD *)v129 = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v129 + 8) = 0;
            *(_QWORD *)&v360 = v360 + 1;
            *(_BYTE *)v129 = 1;
            *(_DWORD *)(v129 + 8) = v159;
            *(_DWORD *)(v129 + 4) = v141;
          }
          if ( (__int32 *)v337 == ++v134 )
            goto LABEL_291;
        }
      }
      v37 = *((_DWORD *)v33 + 146);
      if ( (signed int)v37 < *((_DWORD *)v33 + 147) )
        goto LABEL_44;
      v40 = &v349;
LABEL_141:
      if ( n )
        goto LABEL_142;
LABEL_143:
      if ( *(_DWORD *)v333 != 55 )
        *(_DWORD *)v333 = 55;
      v84 = v339;
      *(_BYTE *)(v333 + 32) = 7;
      *(_DWORD *)(v333 + 40) = v84;
      sub_1D5AE0(a1, v84);
      if ( (_DWORD)v341 )
      {
        sub_1CD300(v344, v343, (__int64 *)v33 + 37);
        if ( v343[0] < 0 )
        {
          v343[0] = 0;
          v335 = nullptr;
        }
        else
        {
          v335 = (unsigned __int64 **)v343[0];
        }
        v86 = (unsigned __int64)v33[14] + *((int *)v33 + 23);
        v334.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
        if ( v330 )
        {
          v345 = 0;
          v342.m128i_i64[0] = v330[4] + *((unsigned __int16 *)v330 + 20);
          v341 = &v345;
          if ( (unsigned __int8)get_func_frame() && (tinfo_size = get_tinfo_size(), v342.m128i_i64[0] < tinfo_size) )
            v337 = tinfo_size - v342.m128i_i64[0];
          else
            v337 = 0;
          *(_QWORD *)&v347[0] = 0;
          v347[1] = 0;
          func_tail_iterator_set();
          if ( !*(_QWORD *)&v347[0] )
            goto LABEL_529;
          DWORD2(v347[0]) = 0;
          if ( *(int *)(*(_QWORD *)&v347[0] + 128LL) <= 0 )
          {
LABEL_159:
            v90 = (unsigned __int64 **)v337;
            if ( (unsigned __int64)v335 >= v337 )
              v90 = v335;
            v91 = (char *)v90 + v342.m128i_i64[0];
            lock_func_range();
          }
          else
          {
            while ( 1 )
            {
              func = get_func();
              if ( func )
              {
                v88 = *(_QWORD *)(func + 32) + *(unsigned __int16 *)(func + 40);
                v89 = v342.m128i_i64[0];
                if ( v342.m128i_i64[0] < v88 )
                  v89 = *(_QWORD *)(func + 32) + *(unsigned __int16 *)(func + 40);
                v342.m128i_i64[0] = v89;
                if ( (unsigned __int8)get_func_frame() )
                {
                  v160 = get_tinfo_size();
                  v161 = v160 - v88;
                  if ( v337 >= v160 - v88 )
                    v161 = v337;
                  if ( v88 >= v160 )
                    v161 = v337;
                  v337 = v161;
                }
              }
              if ( !*(_QWORD *)&v347[0] )
                break;
              if ( *(_DWORD *)(*(_QWORD *)&v347[0] + 128LL) <= DWORD2(v347[0]) + 1 )
                goto LABEL_159;
              ++DWORD2(v347[0]);
            }
LABEL_529:
            v286 = (unsigned __int64 **)v337;
            if ( (unsigned __int64)v335 >= v337 )
              v286 = v335;
            v91 = (char *)v286 + v342.m128i_i64[0];
          }
          clear_tinfo_t();
        }
        else
        {
          v91 = nullptr;
        }
        v92 = &v91[v334.m128i_i32[0] - 1];
        if ( v86 < (unsigned __int64)v33[7] + ((unsigned __int64)v92 & -v334.m128i_i32[0]) )
          v86 = (unsigned __int64)v33[7] + ((unsigned __int64)v92 & -v334.m128i_i32[0]);
      }
      else
      {
        v86 = 0;
      }
      v342.m128i_i32[0] = sub_1D9EC0((__int64)v40, *(_QWORD *)(v333 + 24), v86, v85);
      if ( v342.m128i_i32[0] )
      {
LABEL_57:
        sub_1D48D0(v40);
        goto LABEL_58;
      }
      nullsub_115();
      v116 = *(_QWORD *)(a1 + 1456);
      v117 = *(_QWORD *)(a1 + 1448);
      v118 = v116 + 1;
      if ( *(_QWORD *)(a1 + 1464) < (unsigned __int64)(v116 + 1) )
      {
        v285 = qvector_reserve(a1 + 1448, v117, v118, 16);
        *(_QWORD *)(a1 + 1448) = v285;
        v117 = v285;
        v116 = *(_QWORD *)(a1 + 1456);
        v118 = v116 + 1;
      }
      v119 = v339;
      *(_QWORD *)(a1 + 1456) = v118;
      v120 = 16 * v116 + v117;
      *(_DWORD *)v120 = v119;
      *(_DWORD *)(v120 + 4) = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(v120 + 8) = v328;
      *(_BYTE *)(v120 + 12) = v325;
      sub_66FA0(a1, 0, (__int64)"fixed inlined callee %a in blocks %d..%d", 0.0, v329, v119);
      v342.m128i_i32[0] = sub_33E140(*(_QWORD *)(a1 + 1496), 21, v336, v340, (_DWORD)v338, v119);
      sub_1D48D0(v40);
      goto LABEL_249;
    }
LABEL_17:
    if ( (*(_BYTE *)(a1 + 5) & 0x20) == 0 )
      sub_66FA0(a1, 0, (__int64)"before handling outlines");
    memset(v347, 0, sizeof(v347));
    v348 = -1;
    sub_332990(a1 + 8, v347, v13);
    v343[0] = 0;
    v366 = off_4DD9D8;
    v343[1] = 0;
    v367 = 0;
    v368 = 0;
    v371 = nullptr;
    v372 = 0;
    v373 = 0;
    v375 = 0;
    v369 = 0;
    v370 = 0;
    v374 = 0;
    if ( v330 )
    {
      v371 = v330;
      v370 = -1;
      create_qflow_chart();
    }
    else
    {
      create_multirange_qflow_chart();
    }
    v19 = v343;
    sub_1D3620((__int64 *)&v366, v343);
    v21 = v375;
    *(_DWORD *)(a1 + 4) |= 0x2000u;
    v22 = _mm_load_si128((const __m128i *)&xmmword_424800);
    if ( v21 <= 0 )
    {
      LOBYTE(v337) = 0;
      v24 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      LOBYTE(v337) = 0;
      v23 = 0;
      do
      {
        v25 = v373 + (v23 << 6);
        if ( !(_BYTE)v337 )
        {
          LOBYTE(v337) = rangeset_t_has_common();
          v22 = _mm_load_si128((const __m128i *)&xmmword_424800);
        }
        v26 = *(_QWORD *)(a1 + 24);
        v27 = _mm_loadl_epi64((const __m128i *)v25);
        v28 = _mm_loadl_epi64((const __m128i *)(v25 + 8));
        v19 = *(__int64 **)(a1 + 16);
        if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v26 + 1) )
        {
          v334.m128i_i64[0] = v28.m128i_i64[0];
          v342.m128i_i64[0] = v27.m128i_i64[0];
          v29 = qvector_reserve(a1 + 16, (__int64)v19, v26 + 1, 16);
          *(_QWORD *)(a1 + 16) = v29;
          v19 = (__int64 *)v29;
          v26 = *(_QWORD *)(a1 + 24);
          v22 = _mm_load_si128((const __m128i *)&xmmword_424800);
          v28 = _mm_loadl_epi64(&v334);
          v27 = _mm_loadl_epi64(&v342);
        }
        ++v23;
        *(__m128i *)&v19[2 * v26] = _mm_unpacklo_epi64(v27, v28);
        v24 = *(_QWORD *)(a1 + 24) + 1LL;
        *(_QWORD *)(a1 + 24) = v24;
      }
      while ( v375 > (int)v23 );
    }
    v379 = -1;
    v382 = 0;
    v51 = (__m128i *)&v408;
    v383 = 0;
    v386 = 0;
    v387 = 0;
    v389 = 0;
    v390 = 0;
    v392 = 0;
    v394 = 0;
    v396 = 0;
    v397 = 0;
    v398 = 0;
    v400 = -1;
    v401 = 0;
    v403 = 0;
    v405 = 0;
    v407[0] = nullptr;
    v376 = 0;
    v377 = 0;
    v378 = -1;
    v380 = 0;
    v381 = 0;
    v384 = 0;
    v385 = 0;
    v388 = 0;
    v391 = 0;
    v393 = 0;
    v395 = 0;
    v399 = 0;
    v402 = 0;
    v404 = 0;
    v406 = 0;
    v407[1] = nullptr;
    do
    {
      v51[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v51 += 2;
      v51[-2] = v22;
      v51[-1].m128i_i64[1] = 0;
    }
    while ( &v409 != v51 );
    v52.m128i_i64[0] = 0;
    v409.m128i_i64[1] = 0;
    v412 = -1;
    v53 = &v440;
    v415 = 0;
    v416 = 0;
    v419 = 0;
    v420 = nullptr;
    v422 = 0;
    v423 = nullptr;
    v425 = nullptr;
    v427 = nullptr;
    v429[0] = 0;
    v429[1] = 0;
    v430 = nullptr;
    v432 = -1;
    v433 = nullptr;
    v435 = 0;
    src = nullptr;
    v439[0] = nullptr;
    v410 = 0;
    v411 = -1;
    v413 = 0;
    v414 = 0;
    v417 = 0;
    v418 = 0;
    v421 = 0;
    v424 = 0;
    v426 = 0;
    v428 = 0;
    v431 = 0;
    v434 = 0;
    v436 = 0;
    v438 = 0;
    v439[1] = nullptr;
    do
    {
      v53[1].m128i_i64[0] = (__int64)"<unnamed inteval>";
      v53 += 2;
      v53[-2] = v22;
      v53[-1].m128i_i64[1] = 0;
    }
    while ( v452 != (void **)v53 );
    v54 = nullptr;
    v409.m128i_i64[0] = *(_QWORD *)(a1 + 8);
    if ( v24 )
    {
      v54 = (void *)qalloc_or_throw(16 * v24, (__int64)v19, (__int64)v452, v20);
      memcpy(v54, *(const void **)(a1 + 16), 16 * v24);
    }
    v55 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
    if ( v409.m128i_i64[1] )
    {
      v342 = v55;
      v410.m128i_i64[0] = 0;
      qfree(v409.m128i_i64[1]);
      v55 = _mm_load_si128(&v342);
    }
    v409.m128i_i64[1] = (__int64)v54;
    v410 = v55;
    if ( v409.m128i_i64[0] )
    {
      v55.m128i_i64[0] = 0;
      v349 = nullptr;
      v351 = 0;
      func_tail_iterator_set();
      v56 = v349;
      LODWORD(v350) = -1;
      if ( v349 )
      {
        v57 = v410.m128i_i64[0];
        while ( 1 )
        {
          v58 = _mm_loadl_epi64((const __m128i *)v56);
          v52 = _mm_loadl_epi64((const __m128i *)(v56 + 1));
          v59 = v409.m128i_i64[1];
          if ( v410.m128i_i64[1] < (unsigned __int64)(v57 + 1) )
          {
            v334.m128i_i64[0] = v52.m128i_i64[0];
            v342.m128i_i64[0] = v58.m128i_i64[0];
            v409.m128i_i64[1] = qvector_reserve((__int64)&v409.m128i_i64[1], v409.m128i_i64[1], v57 + 1, 16);
            v57 = v410.m128i_i64[0];
            v59 = v409.m128i_i64[1];
            v52 = _mm_loadl_epi64(&v334);
            v58 = _mm_loadl_epi64(&v342);
          }
          v55 = _mm_unpacklo_epi64(v58, v52);
          *(__m128i *)(v59 + 16 * v57) = v55;
          v56 = v349;
          v57 = ++v410.m128i_i64[0];
          if ( !v349 )
            goto LABEL_110;
          v60 = v350 + 1;
          if ( *((_DWORD *)v349 + 32) <= (int)v350 + 1 )
            break;
          LODWORD(v350) = v350 + 1;
          if ( v60 >= 0 )
            v56 = (__int64 (__fastcall **)())((char *)v349[17] + 16 * v60);
        }
        lock_func_range();
      }
    }
LABEL_110:
    v61 = *v338;
    v409.m128i_i64[0] = (__int64)v61;
    if ( !v61 )
      v61 = (unsigned __int64 *)v409.m128i_i64[1];
    *(_QWORD *)&v411 = *v61;
    sub_1D84D0(a1, v409.m128i_i8, &v376, v20);
    v62 = a5 | 0x80000000;
    v342.m128i_i32[0] = sub_33E140(*(_QWORD *)(a1 + 1496), 0, (unsigned int)&v366, a1, (unsigned int)v343, v62);
    if ( v342.m128i_i32[0] )
      goto LABEL_170;
    v342.m128i_i32[0] = sub_1CF000(a1, (__int64)&v366, (__int64)v343, v330);
    if ( v342.m128i_i32[0] )
      goto LABEL_170;
    v64 = *(_QWORD **)(a1 + 1504);
    if ( (*(_BYTE *)(a1 + 112) & 0x10) != 0 )
    {
      v65 = v64[5];
      if ( v65 )
      {
        *(_DWORD *)(a1 + 1184) = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*v64 + 48LL))(v64, v65, 0);
        v64 = *(_QWORD **)(a1 + 1504);
      }
    }
    sub_2B7DE0(v64, a1 + 1312, v329);
    v66 = v336;
    v342.m128i_i32[0] = sub_1D7070(a1, v336, (__int64)&v366, v343, v330, v62);
    if ( v342.m128i_i32[0] )
    {
LABEL_170:
      sub_1D84D0(a1, v376.m128i_i8, &v409, (__int64)v63);
      goto LABEL_171;
    }
    v69 = *(_DWORD *)(a1 + 64);
    v70 = v339;
    if ( v69 > (int)v339 )
    {
      v63 = v344;
      v71 = *(_DWORD *)(a1 + 64);
      v334.m128i_i64[0] = (__int64)v344;
      while ( 1 )
      {
        if ( v70 >= v71 )
        {
          if ( !under_debugger )
            sub_383060(52719);
          goto LABEL_567;
        }
        v75 = *(_QWORD *)(a1 + 528);
        v76 = *(_QWORD *)(v75 + 8LL * v70);
        sub_B62C0(v76, v66, v75, (__int64)v63, v67, v68);
        v78 = *(_QWORD *)(v76 + 56);
        if ( !v78 )
          goto LABEL_124;
        v79 = *(_DWORD *)v78;
        if ( *(_DWORD *)v78 <= 0x34u )
        {
          v63 = (_QWORD *)(v78 + 64);
          v342.m128i_i64[0] = v78 + 64;
          if ( v79 <= 0x29 )
            goto LABEL_124;
        }
        else
        {
          if ( v79 != 55 )
            goto LABEL_124;
          v342.m128i_i64[0] = v78 + 32;
        }
        v72 = v342.m128i_i64[0];
        sub_123A40(v334.m128i_i64[0], (unsigned __int8 *)v342.m128i_i64[0], v77, (__int64)v63);
        v66 = *(_QWORD *)(v78 + 24);
        v73 = sub_1D36F0(a1, v66, v72, 0);
        v74 = v73;
        if ( !v73 )
        {
          v66 = *(_QWORD *)(v342.m128i_i64[0] + 8);
          if ( !(unsigned __int8)sub_332920(a1 + 8, v66) )
            goto LABEL_123;
          sub_66FA0(a1, 0, (__int64)"%a: resolve block for %a", *(double *)v55.m128i_i64, *(double *)v52.m128i_i64);
LABEL_136:
          sub_69F20(a1, v339, v69);
          v82 = v334.m128i_i64[0];
          *(_QWORD *)(a1 + 488) = *(_QWORD *)(v78 + 24);
          sub_11CDA0(v82);
          sub_1D84D0(a1, v376.m128i_i8, &v409, v83);
          v342.m128i_i32[0] = -22;
LABEL_171:
          if ( v439[0] )
          {
            sub_82C40(v439);
            if ( v439[0] )
              qfree((__int64)v439[0]);
          }
          if ( src )
          {
            *(_QWORD *)&v438 = 0;
            qfree((__int64)src);
          }
          v95 = v435;
          if ( v435 )
          {
            v96 = v436;
            if ( (_QWORD)v436 )
            {
              v97 = 0;
              v98 = 0;
              do
              {
                v99 = (_QWORD *)(v95 + v97);
                clear_tinfo_t();
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
                cleanup_argloc();
                v95 = v435;
              }
              while ( v96 != v98 );
            }
            *(_QWORD *)&v436 = 0;
            qfree(v95);
          }
          if ( v433 )
          {
            *(_QWORD *)&v434 = 0;
            qfree((__int64)v433);
          }
          if ( v430 )
          {
            *(_QWORD *)&v431 = 0;
            qfree((__int64)v430);
          }
          qfree(v429[0]);
          if ( v427 )
          {
            *(_QWORD *)&v428 = 0;
            qfree((__int64)v427);
          }
          if ( v425 )
          {
            *(_QWORD *)&v426 = 0;
            qfree((__int64)v425);
          }
          if ( v423 )
          {
            *(_QWORD *)&v424 = 0;
            qfree((__int64)v423);
          }
          if ( v420 )
          {
            *(_QWORD *)&v421 = 0;
            qfree((__int64)v420);
          }
          if ( v409.m128i_i64[1] )
          {
            v410.m128i_i64[0] = 0;
            qfree(v409.m128i_i64[1]);
          }
          if ( v407[0] )
          {
            sub_82C40(v407);
            if ( v407[0] )
              qfree((__int64)v407[0]);
          }
          if ( v405 )
          {
            *(_QWORD *)&v406 = 0;
            qfree(v405);
          }
          v102 = v403;
          if ( v403 )
          {
            v103 = v404;
            if ( (_QWORD)v404 )
            {
              v104 = 0;
              v105 = 0;
              do
              {
                v106 = (_QWORD *)(v102 + v104);
                clear_tinfo_t();
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
                cleanup_argloc();
                v102 = v403;
              }
              while ( v103 != v105 );
            }
            *(_QWORD *)&v404 = 0;
            qfree(v102);
          }
          if ( v401 )
          {
            *(_QWORD *)&v402 = 0;
            qfree(v401);
          }
          if ( v398 )
          {
            *(_QWORD *)&v399 = 0;
            qfree(v398);
          }
          qfree(v396);
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
          if ( v390 )
          {
            *(_QWORD *)&v391 = 0;
            qfree(v390);
          }
          if ( v387 )
          {
            *(_QWORD *)&v388 = 0;
            qfree(v387);
          }
          if ( v376.m128i_i64[1] )
          {
            *(_QWORD *)&v377 = 0;
            qfree(v376.m128i_i64[1]);
          }
          v109 = v373;
          v366 = off_4DD9D8;
          if ( v373 )
          {
            v110 = v374;
            if ( (_QWORD)v374 )
            {
              v111 = v342.m128i_i32[0];
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
                v109 = v373;
              }
              while ( v110 != v112 );
              v342.m128i_i32[0] = v111;
            }
            *(_QWORD *)&v374 = 0;
            qfree(v109);
          }
          if ( v368 )
          {
            *(_QWORD *)&v369 = 0;
            qfree(v368);
          }
          qfree(v343[0]);
          if ( *(_QWORD *)&v347[0] )
          {
            *((_QWORD *)&v347[0] + 1) = 0;
            qfree(*(__int64 *)&v347[0]);
          }
LABEL_58:
          if ( v482 )
          {
            sub_82C40((unsigned __int64 **)&v482);
            if ( v482 )
              qfree((__int64)v482);
          }
          if ( v480 )
          {
            v481.m128i_i64[0] = 0;
            qfree((__int64)v480);
          }
          v41 = v478;
          if ( v478 )
          {
            v42 = v479;
            if ( (_QWORD)v479 )
            {
              v43 = 0;
              v44 = 0;
              do
              {
                v45 = (_QWORD *)(v41 + v43);
                clear_tinfo_t();
                v46 = *(_QWORD *)(v41 + v43 + 56);
                if ( v46 )
                {
                  v45[8] = 0;
                  qfree(v46);
                }
                v47 = v45[4];
                if ( v47 )
                {
                  v45[5] = 0;
                  qfree(v47);
                }
                ++v44;
                v43 += 104;
                cleanup_argloc();
                v41 = v478;
              }
              while ( v42 != v44 );
            }
            *(_QWORD *)&v479 = 0;
            qfree(v41);
          }
          if ( v476 )
          {
            v477.m128i_i64[0] = 0;
            qfree((__int64)v476);
          }
          if ( v473 )
          {
            v474.m128i_i64[0] = 0;
            qfree((__int64)v473);
          }
          qfree(v472[0]);
          if ( v470 )
          {
            v471.m128i_i64[0] = 0;
            qfree((__int64)v470);
          }
          if ( v468 )
          {
            v469.m128i_i64[0] = 0;
            qfree((__int64)v468);
          }
          if ( v466 )
          {
            v467.m128i_i64[0] = 0;
            qfree((__int64)v466);
          }
          if ( v463 )
          {
            v464.m128i_i64[0] = 0;
            qfree((__int64)v463);
          }
          if ( v452[1] )
          {
            v453.m128i_i64[0] = 0;
            qfree((__int64)v452[1]);
          }
          v30 = *(_DWORD *)(a1 + 64);
LABEL_30:
          sub_69F20(a1, v339, v30);
          return v342.m128i_u32[0];
        }
        v326 = v69 <= *(_DWORD *)(v73 + 72) || (int)v339 > *(_DWORD *)(v73 + 72);
        if ( !v326 )
          goto LABEL_123;
        v66 = v334.m128i_i64[0];
        sub_125180(v342.m128i_i64[0], (unsigned __int8 *)v334.m128i_i64[0]);
        v80 = *v335;
        if ( !*v335 )
          goto LABEL_134;
        v81 = *v80 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v81 )
          goto LABEL_123;
        if ( (*(_BYTE *)(*v80 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_134;
        v66 = *(_QWORD *)(v74 + 32);
        while ( 1 )
        {
          v149 = *(_QWORD *)(v81 + 24);
          if ( v66 >= v149 )
            break;
          v81 = *(_QWORD *)(v81 + 8);
LABEL_305:
          if ( (*(_BYTE *)v81 & 2) != 0 )
            goto LABEL_134;
        }
        if ( v149 < v66 )
          break;
        if ( v80 != (unsigned __int64 *)v81 )
          goto LABEL_123;
LABEL_134:
        if ( *(_BYTE *)v342.m128i_i64[0] != 6
          || (v150 = v342.m128i_i64[0],
              sub_339C80(*(_QWORD *)(a1 + 1504), v342.m128i_i64[0]),
              v151 = *(_QWORD *)(v150 + 8),
              v318 = v151,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) == v151)
          || v151 == -1 )
        {
LABEL_135:
          sub_66FA0(a1, 0, (__int64)"%a: branch out of outlined function", *(double *)v55.m128i_i64);
          goto LABEL_136;
        }
        v317 = 0;
        v152 = v339;
        while ( 2 )
        {
          if ( v152 >= *(_DWORD *)(a1 + 64) )
          {
            if ( !under_debugger )
              sub_383060(52719);
            goto LABEL_567;
          }
          v156 = *(_QWORD *)(a1 + 528);
          LODWORD(v337) = v152;
          v157 = *(_QWORD *)(v156 + 8LL * v152);
          v66 = *(_QWORD *)(v157 + 32);
          v158 = sub_330F80(a1);
          v155 = v337;
          if ( v318 != v158 )
          {
            v153 = *(_QWORD *)(v157 + 48);
            if ( !v153 || (v66 = *(_QWORD *)(v153 + 24), v154 = sub_330F80(a1), v155 = v337, v318 != v154) )
            {
LABEL_318:
              v152 = v155 + 1;
              if ( v69 == v152 )
                goto LABEL_539;
              continue;
            }
          }
          break;
        }
        if ( (*(_BYTE *)(v157 + 24) & 2) != 0 )
        {
          if ( v317 )
            v157 = v317;
          v317 = v157;
          goto LABEL_318;
        }
        v317 = v157;
LABEL_539:
        if ( !v317 )
          goto LABEL_135;
        v295 = (_BYTE *)v342.m128i_i64[0];
        *(_DWORD *)(v342.m128i_i64[0] + 8) = *(_DWORD *)(v317 + 72);
        *v295 = 7;
        LOBYTE(v337) = v326;
LABEL_123:
        sub_11CDA0(v334.m128i_i64[0]);
LABEL_124:
        if ( v69 == ++v70 )
          goto LABEL_330;
        v71 = *(_DWORD *)(a1 + 64);
      }
      v81 = *(_QWORD *)(v81 + 16);
      goto LABEL_305;
    }
LABEL_330:
    v162 = &v376;
    sub_1D84D0(a1, v376.m128i_i8, &v409, (__int64)v63);
    v165 = v410.m128i_i64[0];
    v166 = nullptr;
    v452[0] = (void *)v409.m128i_i64[0];
    if ( v410.m128i_i64[0] )
    {
      v292 = (void *)qalloc_or_throw(16 * v410.m128i_i64[0], (__int64)&v376, v163, v164);
      v162 = (__m128i *)v409.m128i_i64[1];
      v166 = v292;
      memcpy(v292, (const void *)v409.m128i_i64[1], 16 * v165);
    }
    v167 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v165, (__m128i)(unsigned __int64)v165);
    if ( v452[1] )
    {
      v342 = v167;
      v453.m128i_i64[0] = 0;
      qfree((__int64)v452[1]);
      v167 = _mm_load_si128(&v342);
    }
    v453 = v167;
    v168 = _mm_loadu_si128(&v413);
    v169 = v421;
    v452[1] = v166;
    v170 = nullptr;
    v455 = v412;
    v456 = v168;
    v171 = _mm_loadu_si128(&v414);
    v172 = _mm_loadh_ps((const double *)&v411 + 1);
    v458 = v415;
    v457 = v171;
    v173 = _mm_loadu_si128(&v417);
    v459 = v416;
    v460 = v173;
    v174 = _mm_loadu_si128(&v418);
    v462 = v419;
    v454 = (__m128i)v172;
    v461 = v174;
    if ( (_QWORD)v421 )
    {
      v291 = (void *)qalloc_or_throw(40 * v421, (__int64)v162, v163, v164);
      v162 = (__m128i *)v420;
      v170 = v291;
      memcpy(v291, v420, 40 * v169);
    }
    v175 = _mm_unpacklo_epi64((__m128i)v169, (__m128i)v169);
    if ( v463 )
    {
      v342 = v175;
      v464.m128i_i64[0] = 0;
      qfree((__int64)v463);
      v175 = _mm_load_si128(&v342);
    }
    v176 = v424;
    v463 = v170;
    v177 = nullptr;
    v464 = v175;
    v465 = v422;
    if ( (_QWORD)v424 )
    {
      v290 = (void *)qalloc_or_throw(16 * v424, (__int64)v162, v163, v164);
      v162 = (__m128i *)v423;
      v177 = v290;
      memcpy(v290, v423, 16 * v176);
    }
    v178 = _mm_unpacklo_epi64((__m128i)v176, (__m128i)v176);
    if ( v466 )
    {
      v342 = v178;
      v467.m128i_i64[0] = 0;
      qfree((__int64)v466);
      v178 = _mm_load_si128(&v342);
    }
    v179 = v426;
    v466 = v177;
    v180 = nullptr;
    v467 = v178;
    if ( (_QWORD)v426 )
    {
      v289 = (void *)qalloc_or_throw(16 * v426, (__int64)v162, v163, v164);
      v162 = (__m128i *)v425;
      v180 = v289;
      memcpy(v289, v425, 16 * v179);
    }
    v181 = _mm_unpacklo_epi64((__m128i)v179, (__m128i)v179);
    if ( v468 )
    {
      v342 = v181;
      v469.m128i_i64[0] = 0;
      qfree((__int64)v468);
      v181 = _mm_load_si128(&v342);
    }
    v182 = v428;
    v468 = v180;
    v183 = nullptr;
    v469 = v181;
    if ( (_QWORD)v428 )
    {
      v183 = (void *)qalloc_or_throw(16 * v428, (__int64)v162, v163, v164);
      memcpy(v183, v427, 16 * v182);
    }
    v184 = _mm_unpacklo_epi64((__m128i)v182, (__m128i)v182);
    if ( v470 )
    {
      v342 = v184;
      v471.m128i_i64[0] = 0;
      qfree((__int64)v470);
      v184 = _mm_load_si128(&v342);
    }
    v185 = v429;
    v470 = v183;
    v342.m128i_i64[0] = (__int64)v472;
    v471 = v184;
    sub_648D0(v472, v429);
    v188 = v431;
    v189 = nullptr;
    if ( (_QWORD)v431 )
    {
      v288 = (void *)qalloc_or_throw(16 * v431, (__int64)v429, v186, v187);
      v185 = (__int64 *)v430;
      v189 = v288;
      memcpy(v288, v430, 16 * v188);
    }
    v190 = _mm_unpacklo_epi64((__m128i)v188, (__m128i)v188);
    if ( v473 )
    {
      v334 = v190;
      v474.m128i_i64[0] = 0;
      qfree((__int64)v473);
      v190 = _mm_load_si128(&v334);
    }
    v191 = v434;
    v473 = v189;
    v192 = nullptr;
    v474 = v190;
    v475 = v432;
    if ( (_QWORD)v434 )
    {
      v192 = (void *)qalloc_or_throw(16 * v434, (__int64)v185, v186, v187);
      memcpy(v192, v433, 16 * v191);
    }
    v193 = _mm_unpacklo_epi64((__m128i)v191, (__m128i)v191);
    if ( v476 )
    {
      v334 = v193;
      v477.m128i_i64[0] = 0;
      qfree((__int64)v476);
      v193 = _mm_load_si128(&v334);
    }
    v476 = v192;
    v477 = v193;
    sub_1D41E0(&v478, (__int64)&v435, v186, v187);
    v196 = v438;
    v197 = nullptr;
    if ( (_QWORD)v438 )
    {
      v197 = (void *)qalloc_or_throw(4 * v438, (__int64)&v435, v194, v195);
      memcpy(v197, src, 4 * v196);
    }
    v198 = _mm_unpacklo_epi64((__m128i)v196, (__m128i)v196);
    if ( v480 )
    {
      v334 = v198;
      v481.m128i_i64[0] = 0;
      qfree((__int64)v480);
      v198 = _mm_load_si128(&v334);
    }
    v480 = v197;
    v199 = (__int64)v439;
    v481 = v198;
    sub_1D82C0((__int64 *)&v349, (__int64)v439);
    v200 = v482;
    v201 = v350;
    v482 = v349;
    v202 = v483;
    v349 = v200;
    v483 = v350;
    v350 = v202;
    if ( !v200 )
    {
LABEL_375:
      v484 = _mm_load_si128(&v440);
      v485 = _mm_load_si128(&v441);
      v486 = _mm_load_si128(&v442);
      v487 = _mm_load_si128(&v443);
      v488 = _mm_load_si128(&v444);
      v489 = _mm_load_si128(&v445);
      v490 = _mm_load_si128(&v446);
      v491 = _mm_load_si128(&v447);
      v492 = _mm_load_si128(&v448);
      v493 = _mm_load_si128(&v449);
      v494 = _mm_load_si128(&v450);
      v495 = _mm_load_si128(&v451);
      if ( v375 <= 0 )
      {
        v210 = 0;
      }
      else
      {
        v209 = 0;
        v210 = 0;
        do
        {
          v199 = (unsigned int)v209;
          if ( sub_64930(v343, v209) )
            v210 = *(_QWORD *)(v373 + (v209 << 6) + 8) + v210 - *(_QWORD *)(v373 + (v209 << 6));
          ++v209;
        }
        while ( v375 > (int)v209 );
      }
      v496 = v210;
      v211.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v339), _mm_cvtsi32_si128(v69)).m128i_u64[0];
      v497 = v211.m128i_i64[0];
      if ( (a6 & 2) == 0 )
      {
        v212 = v453.m128i_i64[0];
        v501 = 0;
        v499 = v329;
        v500 = (__m128i)(unsigned __int64)v452[0];
        if ( v453.m128i_i64[0] )
        {
          v298 = (void *)qalloc_or_throw(16 * v453.m128i_i64[0], v199, v202, v201);
          v199 = (__int64)v452[1];
          v500.m128i_i64[1] = (__int64)v298;
          v501.m128i_i64[1] = v212;
          memcpy(v298, v452[1], 16 * v212);
          v501.m128i_i64[0] = v212;
        }
        v213 = _mm_load_si128(&v454);
        v511 = 0;
        v214 = v464.m128i_i64[0];
        v502 = v213;
        v215 = _mm_loadu_si128(&v456);
        v503 = v455;
        v504 = v215;
        v216 = _mm_loadu_si128(&v457);
        v506 = v458;
        v505 = v216;
        v217 = _mm_loadu_si128(&v460);
        v507 = v459;
        v508 = v217;
        v218 = _mm_loadu_si128(&v461);
        v510 = v462;
        v509 = v218;
        v512 = 0;
        if ( v464.m128i_i64[0] )
        {
          v297 = (void *)qalloc_or_throw(40 * v464.m128i_i64[0], v199, v202, v201);
          v199 = (__int64)v463;
          v511 = (__int64)v297;
          v512.m128i_i64[1] = v214;
          memcpy(v297, v463, 40 * v214);
          v512.m128i_i64[0] = v214;
        }
        v219 = v467.m128i_i64[0];
        v514 = 0;
        v515 = 0;
        v513 = v465;
        if ( v467.m128i_i64[0] )
        {
          v296 = (void *)qalloc_or_throw(16 * v467.m128i_i64[0], v199, v202, v201);
          v199 = (__int64)v466;
          v514 = (__int64)v296;
          v515.m128i_i64[1] = v219;
          memcpy(v296, v466, 16 * v219);
          v515.m128i_i64[0] = v219;
        }
        v220 = v469.m128i_i64[0];
        v516 = 0;
        v517 = 0;
        if ( v469.m128i_i64[0] )
        {
          v314 = (void *)qalloc_or_throw(16 * v469.m128i_i64[0], v199, v202, v201);
          v199 = (__int64)v468;
          v516 = (__int64)v314;
          v517.m128i_i64[1] = v220;
          memcpy(v314, v468, 16 * v220);
          v517.m128i_i64[0] = v220;
        }
        v221 = v471.m128i_i64[0];
        v518 = nullptr;
        v519 = 0;
        if ( v471.m128i_i64[0] )
        {
          v518 = (void *)qalloc_or_throw(16 * v471.m128i_i64[0], v199, v202, v201);
          v519.m128i_i64[1] = v221;
          memcpy(v518, v470, 16 * v221);
          v519.m128i_i64[0] = v221;
        }
        v222 = (void *)v342.m128i_i64[0];
        sub_64000(v520, v342.m128i_i64[0]);
        v225 = v474.m128i_i64[0];
        v521 = 0;
        v522 = 0;
        if ( v474.m128i_i64[0] )
        {
          v299 = (void *)qalloc_or_throw(16 * v474.m128i_i64[0], (__int64)v222, v223, v224);
          v222 = v473;
          v521 = (__int64)v299;
          v522.m128i_i64[1] = v225;
          memcpy(v299, v473, 16 * v225);
          v522.m128i_i64[0] = v225;
        }
        v226 = v477.m128i_i64[0];
        v524 = 0;
        v525 = 0;
        v523 = v475;
        if ( v477.m128i_i64[0] )
        {
          v315 = (void *)qalloc_or_throw(16 * v477.m128i_i64[0], (__int64)v222, v223, v224);
          v222 = v476;
          v524 = (__int64)v315;
          v525.m128i_i64[1] = v226;
          memcpy(v315, v476, 16 * v226);
          v525.m128i_i64[0] = v226;
        }
        v526 = 0;
        v527 = 0;
        v334.m128i_i64[0] = v479;
        if ( (_QWORD)v479 )
        {
          v300 = v479;
          v526 = qalloc_or_throw(104 * v479, (__int64)v222, v223, v224);
          v301 = v526;
          v302 = 0;
          v527.m128i_i64[1] = v300;
          v342.m128i_i64[0] = 0;
          while ( 1 )
          {
            v305 = v342.m128i_i64[0] + v301;
            v306 = (char *)(v478 + v342.m128i_i64[0]);
            *(_DWORD *)v305 = 0;
            v307 = v306;
            v308 = v306;
            copy_argloc();
            *(_QWORD *)(v305 + 16) = *((_QWORD *)v308 + 2);
            v310 = *((_DWORD *)v308 + 6);
            *(_QWORD *)(v305 + 32) = 0;
            *(_DWORD *)(v305 + 24) = v310;
            *(_OWORD *)(v305 + 40) = 0;
            v311 = *((_QWORD *)v308 + 5);
            if ( v311 )
            {
              nb = *((_QWORD *)v308 + 5);
              v312 = (void *)qalloc_or_throw(nb, (__int64)v307, v311, v309);
              *(_QWORD *)(v305 + 32) = v312;
              *(_QWORD *)(v305 + 48) = nb;
              v307 = *((const void **)v308 + 4);
              memcpy(v312, v307, nb);
              *(_QWORD *)(v305 + 40) = nb;
            }
            *(_QWORD *)(v305 + 56) = 0;
            *(_OWORD *)(v305 + 64) = 0;
            v303 = *((_QWORD *)v308 + 8);
            if ( v303 )
            {
              na = *((_QWORD *)v308 + 8);
              v313 = (void *)qalloc_or_throw(na, (__int64)v307, v303, v309);
              *(_QWORD *)(v305 + 56) = v313;
              *(_QWORD *)(v305 + 72) = na;
              memcpy(v313, *((const void **)v308 + 7), na);
              *(_QWORD *)(v305 + 64) = na;
            }
            *(_QWORD *)(v305 + 80) = 0;
            v222 = v308 + 80;
            copy_tinfo_t();
            v304 = *((_QWORD *)v308 + 11);
            v342.m128i_i64[0] += 104;
            ++v302;
            *(_QWORD *)(v305 + 88) = v304;
            *(_QWORD *)(v305 + 96) = *((_QWORD *)v308 + 12);
            if ( v334.m128i_i64[0] == v302 )
              break;
            v301 = v526;
          }
          v527.m128i_i64[0] = v334.m128i_i64[0];
        }
        v227 = v481.m128i_i64[0];
        v528 = nullptr;
        v529 = 0;
        if ( v481.m128i_i64[0] )
        {
          v528 = (void *)qalloc_or_throw(4 * v481.m128i_i64[0], (__int64)v222, v223, v224);
          v529.m128i_i64[1] = v227;
          memcpy(v528, v480, 4 * v227);
          v529.m128i_i64[0] = v227;
        }
        v228 = &v530;
        sub_1D82C0((__int64 *)&v530, (__int64)&v482);
        v532 = _mm_load_si128(&v484);
        v229 = _mm_load_si128(&v485);
        v544 = v496;
        v533 = v229;
        v230 = _mm_load_si128(&v486);
        v545 = v497;
        v534 = v230;
        v231 = _mm_load_si128(&v487);
        v546 = v498;
        v535 = v231;
        v232 = _mm_load_si128(&v488);
        v547 = v499;
        v536 = v232;
        v537 = _mm_load_si128(&v489);
        v538 = _mm_load_si128(&v490);
        v539 = _mm_load_si128(&v491);
        v540 = _mm_load_si128(&v492);
        v541 = _mm_load_si128(&v493);
        v542 = _mm_load_si128(&v494);
        v543 = _mm_load_si128(&v495);
        v233 = _mm_loadu_si128(&v500);
        v234 = _mm_loadu_si128(&v501);
        v500.m128i_i64[1] = 0;
        v549 = v234;
        v235 = _mm_loadu_si128(&v502);
        v551 = v503;
        v550 = v235;
        v236 = _mm_load_si128(&v504);
        v554 = v506;
        v552 = v236;
        v237 = _mm_load_si128(&v505);
        v555 = v507;
        v553 = v237;
        v238 = _mm_load_si128(&v508);
        v558 = v510;
        v556 = v238;
        v239 = _mm_load_si128(&v509);
        v559 = v511;
        v557 = v239;
        v240 = _mm_load_si128(&v512);
        v548 = v233;
        v560 = v240;
        v511 = 0;
        v561 = v513;
        v501 = 0;
        v512 = 0;
        v241 = _mm_load_si128(&v515);
        v515 = 0;
        v562 = v514;
        v563 = v241;
        v242 = _mm_loadu_si128(&v517);
        v564 = v516;
        v565 = v242;
        v243 = _mm_load_si128(&v519);
        v514 = 0;
        v516 = 0;
        v566 = (__int64)v518;
        v518 = nullptr;
        v517 = 0;
        v567 = v243;
        v519 = 0;
        sub_64000(&v568, (__int64)v520);
        v244 = v521;
        v245 = _mm_loadu_si128(&v525);
        v521 = 0;
        v246 = _mm_loadu_si128(&v522);
        v569 = v244;
        v573 = v245;
        v247 = _mm_load_si128(&v527);
        v571 = v523;
        v575 = v247;
        v248 = _mm_loadu_si128(&v529);
        v572 = v524;
        v570 = v246;
        v574 = v526;
        v524 = 0;
        v576 = (__int64)v528;
        v526 = 0;
        v578[0] = v530;
        v528 = nullptr;
        v578[1] = v531;
        v530 = nullptr;
        v531 = nullptr;
        v522 = 0;
        v525 = 0;
        v527 = 0;
        v577 = v248;
        v529 = 0;
        v579 = _mm_loadu_si128(&v532);
        v249 = _mm_loadu_si128(&v533);
        v591 = v544;
        v580 = v249;
        v250 = _mm_loadu_si128(&v534);
        v592 = v545;
        v581 = v250;
        v251 = _mm_loadu_si128(&v535);
        v593 = v546;
        v582 = v251;
        v583 = _mm_loadu_si128(&v536);
        v584 = _mm_loadu_si128(&v537);
        v585 = _mm_loadu_si128(&v538);
        v586 = _mm_loadu_si128(&v539);
        v587 = _mm_loadu_si128(&v540);
        v588 = _mm_loadu_si128(&v541);
        v589 = _mm_loadu_si128(&v542);
        v211 = _mm_loadu_si128(&v543);
        v590 = v211;
        v327 = (unsigned __int64 *)sub_1DAF50((__m128i *)v335, &v547);
        if ( v578[0] )
        {
          sub_82C40(v578);
          if ( v578[0] )
            qfree((__int64)v578[0]);
        }
        if ( v576 )
        {
          v577.m128i_i64[0] = 0;
          qfree(v576);
        }
        v252 = v574;
        if ( v574 )
        {
          v253 = v575.m128i_i64[0];
          if ( v575.m128i_i64[0] )
          {
            v334.m128i_i64[0] = (__int64)&v530;
            v254 = 0;
            v342.m128i_i64[0] = 0;
            do
            {
              v255 = (_QWORD *)(v252 + v342.m128i_i64[0]);
              clear_tinfo_t();
              v256 = v255[7];
              if ( v256 )
              {
                v255[8] = 0;
                qfree(v256);
              }
              v257 = v255[4];
              if ( v257 )
              {
                v255[5] = 0;
                qfree(v257);
              }
              ++v254;
              cleanup_argloc();
              v342.m128i_i64[0] += 104;
              v252 = v574;
            }
            while ( v253 != v254 );
            v228 = (unsigned __int64 **)v334.m128i_i64[0];
          }
          v575.m128i_i64[0] = 0;
          qfree(v252);
        }
        if ( v572 )
        {
          v573.m128i_i64[0] = 0;
          qfree(v572);
        }
        if ( v569 )
        {
          v570.m128i_i64[0] = 0;
          qfree(v569);
        }
        qfree(v568);
        if ( v566 )
        {
          v567.m128i_i64[0] = 0;
          qfree(v566);
        }
        if ( v564 )
        {
          v565.m128i_i64[0] = 0;
          qfree(v564);
        }
        if ( v562 )
        {
          v563.m128i_i64[0] = 0;
          qfree(v562);
        }
        if ( v559 )
        {
          v560.m128i_i64[0] = 0;
          qfree(v559);
        }
        if ( v548.m128i_i64[1] )
        {
          v549.m128i_i64[0] = 0;
          qfree(v548.m128i_i64[1]);
        }
        if ( v530 )
        {
          sub_82C40(v228);
          if ( v530 )
            qfree((__int64)v530);
        }
        if ( v528 )
        {
          v529.m128i_i64[0] = 0;
          qfree((__int64)v528);
        }
        v258 = v526;
        if ( v526 )
        {
          v259 = v527.m128i_i64[0];
          if ( v527.m128i_i64[0] )
          {
            v260 = 0;
            v342.m128i_i64[0] = 0;
            do
            {
              v261 = (_QWORD *)(v258 + v342.m128i_i64[0]);
              clear_tinfo_t();
              v262 = v261[7];
              if ( v262 )
              {
                v261[8] = 0;
                qfree(v262);
              }
              v263 = v261[4];
              if ( v263 )
              {
                v261[5] = 0;
                qfree(v263);
              }
              ++v260;
              cleanup_argloc();
              v342.m128i_i64[0] += 104;
              v258 = v526;
            }
            while ( v259 != v260 );
          }
          v527.m128i_i64[0] = 0;
          qfree(v258);
        }
        if ( v524 )
        {
          v525.m128i_i64[0] = 0;
          qfree(v524);
        }
        if ( v521 )
        {
          v522.m128i_i64[0] = 0;
          qfree(v521);
        }
        qfree(v520[0]);
        if ( v518 )
        {
          v519.m128i_i64[0] = 0;
          qfree((__int64)v518);
        }
        if ( v516 )
        {
          v517.m128i_i64[0] = 0;
          qfree(v516);
        }
        if ( v514 )
        {
          v515.m128i_i64[0] = 0;
          qfree(v514);
        }
        if ( v511 )
        {
          v512.m128i_i64[0] = 0;
          qfree(v511);
        }
        if ( v500.m128i_i64[1] )
        {
          v501.m128i_i64[0] = 0;
          qfree(v500.m128i_i64[1]);
        }
      }
      sub_66FA0(
        a1,
        0,
        (__int64)"inlined callee %a from block %d into blocks %d..%d",
        *(double *)v211.m128i_i64,
        v329,
        v340,
        v339);
      if ( v439[0] )
      {
        sub_82C40(v439);
        if ( v439[0] )
          qfree((__int64)v439[0]);
      }
      if ( src )
      {
        *(_QWORD *)&v438 = 0;
        qfree((__int64)src);
      }
      v264 = v435;
      if ( v435 )
      {
        v265 = v436;
        if ( (_QWORD)v436 )
        {
          v266 = 0;
          v267 = 0;
          do
          {
            v268 = (_QWORD *)(v264 + v267);
            clear_tinfo_t();
            v269 = *(_QWORD *)(v264 + v267 + 56);
            if ( v269 )
            {
              v268[8] = 0;
              qfree(v269);
            }
            v270 = v268[4];
            if ( v270 )
            {
              v268[5] = 0;
              qfree(v270);
            }
            ++v266;
            cleanup_argloc();
            v264 = v435;
            v267 += 104;
          }
          while ( v265 != v266 );
        }
        *(_QWORD *)&v436 = 0;
        qfree(v264);
      }
      if ( v433 )
      {
        *(_QWORD *)&v434 = 0;
        qfree((__int64)v433);
      }
      if ( v430 )
      {
        *(_QWORD *)&v431 = 0;
        qfree((__int64)v430);
      }
      qfree(v429[0]);
      if ( v427 )
      {
        *(_QWORD *)&v428 = 0;
        qfree((__int64)v427);
      }
      if ( v425 )
      {
        *(_QWORD *)&v426 = 0;
        qfree((__int64)v425);
      }
      if ( v423 )
      {
        *(_QWORD *)&v424 = 0;
        qfree((__int64)v423);
      }
      if ( v420 )
      {
        *(_QWORD *)&v421 = 0;
        qfree((__int64)v420);
      }
      if ( v409.m128i_i64[1] )
      {
        v410.m128i_i64[0] = 0;
        qfree(v409.m128i_i64[1]);
      }
      if ( v407[0] )
      {
        sub_82C40(v407);
        if ( v407[0] )
          qfree((__int64)v407[0]);
      }
      if ( v405 )
      {
        *(_QWORD *)&v406 = 0;
        qfree(v405);
      }
      v271 = v403;
      if ( v403 )
      {
        v272 = v404;
        if ( (_QWORD)v404 )
        {
          v273 = 0;
          v274 = 0;
          do
          {
            v275 = (_QWORD *)(v271 + v274);
            clear_tinfo_t();
            v276 = *(_QWORD *)(v271 + v274 + 56);
            if ( v276 )
            {
              v275[8] = 0;
              qfree(v276);
            }
            v277 = v275[4];
            if ( v277 )
            {
              v275[5] = 0;
              qfree(v277);
            }
            ++v273;
            cleanup_argloc();
            v271 = v403;
            v274 += 104;
          }
          while ( v272 != v273 );
        }
        *(_QWORD *)&v404 = 0;
        qfree(v271);
      }
      if ( v401 )
      {
        *(_QWORD *)&v402 = 0;
        qfree(v401);
      }
      if ( v398 )
      {
        *(_QWORD *)&v399 = 0;
        qfree(v398);
      }
      qfree(v396);
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
      if ( v390 )
      {
        *(_QWORD *)&v391 = 0;
        qfree(v390);
      }
      if ( v387 )
      {
        *(_QWORD *)&v388 = 0;
        qfree(v387);
      }
      if ( v376.m128i_i64[1] )
      {
        *(_QWORD *)&v377 = 0;
        qfree(v376.m128i_i64[1]);
      }
      v278 = v373;
      v366 = off_4DD9D8;
      if ( v373 )
      {
        v279 = v374;
        if ( (_QWORD)v374 )
        {
          v280 = 0;
          do
          {
            v281 = (_QWORD *)(v278 + (v280 << 6));
            v282 = v281[5];
            if ( v282 )
            {
              v281[6] = 0;
              qfree(v282);
            }
            v283 = v281[2];
            if ( v283 )
            {
              v281[3] = 0;
              qfree(v283);
            }
            v278 = v373;
            ++v280;
          }
          while ( v279 != v280 );
        }
        *(_QWORD *)&v374 = 0;
        qfree(v278);
      }
      if ( v368 )
      {
        *(_QWORD *)&v369 = 0;
        qfree(v368);
      }
      qfree(v343[0]);
      v9 = *(_QWORD *)&v347[0];
      if ( *(_QWORD *)&v347[0] )
      {
        *((_QWORD *)&v347[0] + 1) = 0;
        qfree(*(__int64 *)&v347[0]);
      }
      if ( v327 != *v335 )
      {
        v17 = (unsigned __int64)v327;
        v32 = 1;
        goto LABEL_36;
      }
      v33 = v452;
      v32 = 1;
      goto LABEL_37;
    }
    v203 = (unsigned __int64)*v200;
    if ( !v202 )
    {
      v202 = (unsigned __int64)*v200 & 3 | (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFFCLL;
      *v200 = (__int64 (__fastcall *)())v202;
      v293 = v349;
      v294 = (__m128i)(unsigned __int64)v349;
      *v349 = (__int64 (__fastcall *)())((unsigned __int64)*v349 & 0xFFFFFFFFFFFFFFFELL);
      *(__m128i *)(v293 + 1) = _mm_unpacklo_epi64(v294, v294);
      *v349 = (__int64 (__fastcall *)())((unsigned __int64)*v349 | 2);
LABEL_373:
      if ( v349 )
        qfree((__int64)v349);
      goto LABEL_375;
    }
    v204 = v203 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v203 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_372:
      v202 = v203 & 3 | (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFFCLL;
      *v200 = (__int64 (__fastcall *)())v202;
      v207 = v349;
      v208 = (__m128i)(unsigned __int64)v349;
      *v349 = (__int64 (__fastcall *)())((unsigned __int64)*v349 & 0xFFFFFFFFFFFFFFFELL);
      *(__m128i *)(v207 + 1) = _mm_unpacklo_epi64(v208, v208);
      *v349 = (__int64 (__fastcall *)())((unsigned __int64)*v349 | 2);
      v350 = 0;
      goto LABEL_373;
    }
    v205 = *(__int64 **)(v204 + 8);
    if ( (*(_BYTE *)v205 & 2) != 0 )
    {
      v206 = *(__int64 **)(v204 + 16);
      if ( (*(_BYTE *)v206 & 2) != 0 )
        goto LABEL_554;
    }
    else
    {
      sub_1D4760(v205);
      v206 = *(__int64 **)(v204 + 16);
      if ( (*(_BYTE *)v206 & 2) != 0 )
        goto LABEL_368;
    }
    sub_1D4760(v206);
LABEL_368:
    if ( (*(_BYTE *)v204 & 2) != 0 )
    {
LABEL_369:
      if ( v203 > 3 )
        qfree(v203 & 0xFFFFFFFFFFFFFFFCLL);
      v200 = v349;
      v203 = (unsigned __int64)*v349;
      goto LABEL_372;
    }
LABEL_554:
    v316 = *(_QWORD *)(v204 + 24);
    if ( v316 )
    {
      *(_QWORD *)(v204 + 32) = 0;
      qfree(v316);
    }
    *(_QWORD *)v204 |= 2uLL;
    goto LABEL_369;
  }
  return v342.m128i_u32[0];
}
