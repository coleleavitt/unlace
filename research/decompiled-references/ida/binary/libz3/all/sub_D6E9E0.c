__int64 __fastcall sub_D6E9E0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, struct _Unwind_Exception *a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // r15
  int v29; // r8d
  int v30; // r9d
  int v31; // r8d
  int v32; // r9d
  int v33; // r8d
  int v34; // r9d
  bool v35; // zf
  int v36; // edi
  __int64 v37; // rax
  int v38; // r9d
  int v39; // r9d
  __int64 v40; // rax
  int v41; // r9d
  int v42; // r9d
  __int64 v43; // rax
  int v44; // r9d
  int v45; // r9d
  __int64 v46; // rax
  int v47; // r9d
  int v48; // r9d
  __m128 v49; // xmm0
  __int64 v50; // rax
  __m128 v51; // xmm0
  int v52; // r8d
  int v53; // r9d
  int v54; // r8d
  int v55; // r9d
  void *v56; // rax
  __int64 v57; // rax
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // rax
  __int64 v66; // r12
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __m128 v75; // xmm0
  __m128i si128; // xmm0
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r12
  __int64 v82; // rax
  __int64 v83; // rdi
  __m128i v84; // xmm0
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // r12
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdi
  __int64 v96; // rax
  __int64 v97; // r12
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdi
  __m128i v103; // xmm0
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // r12
  __int64 v110; // rax
  unsigned __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rdi
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rdi
  __int64 v134; // rax
  __int64 v135; // r12
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // r12
  __int64 v139; // rax
  __int64 v140; // r12
  __int64 v141; // rax
  __int64 v142; // r12
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // r12
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // r12
  __int64 v149; // rdi
  __int64 v150; // rax
  __int64 v151; // rdi
  __int64 v152; // rax
  __int64 v153; // rdi
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // r12
  __int64 v157; // rax
  int v158; // esi
  int v159; // r12d
  __int64 v160; // rax
  unsigned int v161; // r12d
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rdi
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  unsigned int v171; // r12d
  __int64 v172; // rax
  __int64 v173; // rdi
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // r12
  __int64 v180; // rax
  int v181; // r9d
  __int64 v182; // rax
  __m128i v183; // xmm4
  __int64 v184; // rsi
  __int64 v185; // r14
  __int64 v186; // r13
  int v187; // r9d
  int v188; // r9d
  int v189; // r9d
  int v190; // r9d
  int v191; // r9d
  int v192; // r9d
  int v193; // r9d
  int v194; // r9d
  __int64 v195; // rbx
  __int64 v196; // rbx
  __int64 v197; // rbx
  __int64 v198; // rbx
  __int64 v199; // rbx
  __int64 v200; // rbx
  __int64 v201; // rbx
  __int64 v202; // rbx
  __int64 v203; // rbx
  __int64 v204; // rbx
  __int64 v205; // rbx
  __int64 v206; // rbx
  __int64 v207; // rbx
  __int64 v208; // rbx
  __int64 v209; // rbx
  __int64 v211; // rax
  __int64 v212; // rdi
  __int64 v213; // rax
  __int64 v214; // rax
  __int64 v215; // r12
  void *v216; // [rsp+10h] [rbp-8E0h]
  void *v217; // [rsp+10h] [rbp-8E0h]
  void *v218; // [rsp+10h] [rbp-8E0h]
  __int64 v219; // [rsp+10h] [rbp-8E0h]
  __int64 v220; // [rsp+10h] [rbp-8E0h]
  int v221; // [rsp+10h] [rbp-8E0h]
  __int64 v222; // [rsp+10h] [rbp-8E0h]
  __int64 *v223; // [rsp+10h] [rbp-8E0h]
  __int64 v224; // [rsp+18h] [rbp-8D8h]
  __int64 v225; // [rsp+18h] [rbp-8D8h]
  __int64 v226; // [rsp+18h] [rbp-8D8h]
  __int64 v227; // [rsp+18h] [rbp-8D8h]
  __m128 v228; // [rsp+20h] [rbp-8D0h] BYREF
  __m128 *v229; // [rsp+30h] [rbp-8C0h]
  void *v230; // [rsp+38h] [rbp-8B8h]
  __int64 v231; // [rsp+40h] [rbp-8B0h]
  void *v232; // [rsp+48h] [rbp-8A8h]
  __int64 v233; // [rsp+50h] [rbp-8A0h]
  __int64 v234; // [rsp+58h] [rbp-898h]
  __int64 v235; // [rsp+60h] [rbp-890h]
  __int64 v236; // [rsp+68h] [rbp-888h]
  __int64 v237; // [rsp+70h] [rbp-880h]
  __int64 *v238; // [rsp+78h] [rbp-878h]
  __int64 v239; // [rsp+80h] [rbp-870h]
  __int64 v240; // [rsp+88h] [rbp-868h]
  __int64 v241; // [rsp+90h] [rbp-860h]
  __int64 v242; // [rsp+98h] [rbp-858h]
  __int64 v243; // [rsp+A0h] [rbp-850h]
  __int64 v244; // [rsp+A8h] [rbp-848h]
  __int64 v245; // [rsp+B0h] [rbp-840h]
  __int64 v246; // [rsp+B8h] [rbp-838h]
  __int64 v247; // [rsp+C0h] [rbp-830h] BYREF
  __int64 v248; // [rsp+C8h] [rbp-828h]
  __int64 v249; // [rsp+D0h] [rbp-820h]
  __int64 v250; // [rsp+D8h] [rbp-818h]
  __int64 v251; // [rsp+E0h] [rbp-810h]
  __int64 v252; // [rsp+E8h] [rbp-808h]
  __int64 v253; // [rsp+F0h] [rbp-800h]
  __int64 v254; // [rsp+F8h] [rbp-7F8h]
  __int64 v255; // [rsp+100h] [rbp-7F0h]
  __int64 v256; // [rsp+108h] [rbp-7E8h]
  __int64 v257; // [rsp+110h] [rbp-7E0h]
  __int64 v258; // [rsp+118h] [rbp-7D8h]
  __int64 v259; // [rsp+120h] [rbp-7D0h]
  __int64 v260; // [rsp+128h] [rbp-7C8h]
  __int64 v261; // [rsp+130h] [rbp-7C0h]
  __int64 v262; // [rsp+138h] [rbp-7B8h]
  __int64 v263; // [rsp+140h] [rbp-7B0h]
  __int64 v264; // [rsp+148h] [rbp-7A8h]
  __int64 v265; // [rsp+150h] [rbp-7A0h]
  __int64 v266; // [rsp+158h] [rbp-798h]
  __int64 v267; // [rsp+160h] [rbp-790h]
  __int64 v268; // [rsp+168h] [rbp-788h]
  __int64 v269; // [rsp+170h] [rbp-780h]
  __int64 v270; // [rsp+178h] [rbp-778h]
  __int64 v271; // [rsp+180h] [rbp-770h]
  __int64 v272; // [rsp+188h] [rbp-768h]
  __int64 v273; // [rsp+190h] [rbp-760h]
  __int64 v274; // [rsp+198h] [rbp-758h]
  __int64 *v275; // [rsp+1A0h] [rbp-750h]
  __int64 v276; // [rsp+1A8h] [rbp-748h]
  __int64 v277; // [rsp+1B0h] [rbp-740h]
  __int64 v278; // [rsp+1B8h] [rbp-738h]
  __int64 v279; // [rsp+1C0h] [rbp-730h]
  __int64 v280; // [rsp+1C8h] [rbp-728h]
  __int64 v281; // [rsp+1D0h] [rbp-720h]
  __int64 v282; // [rsp+1D8h] [rbp-718h]
  unsigned __int64 v283; // [rsp+1E0h] [rbp-710h]
  __int64 v284; // [rsp+1E8h] [rbp-708h]
  __int64 v285; // [rsp+1F0h] [rbp-700h]
  __int64 v286; // [rsp+1F8h] [rbp-6F8h]
  __int64 v287; // [rsp+200h] [rbp-6F0h]
  __int64 v288; // [rsp+208h] [rbp-6E8h]
  __int64 v289; // [rsp+210h] [rbp-6E0h]
  __int64 v290; // [rsp+218h] [rbp-6D8h]
  __int64 v291; // [rsp+220h] [rbp-6D0h]
  __int64 v292; // [rsp+228h] [rbp-6C8h]
  __int64 v293; // [rsp+230h] [rbp-6C0h] BYREF
  __int64 v294; // [rsp+238h] [rbp-6B8h]
  __int64 v295; // [rsp+240h] [rbp-6B0h]
  __int64 v296; // [rsp+248h] [rbp-6A8h]
  __int64 v297; // [rsp+250h] [rbp-6A0h]
  __int64 v298; // [rsp+258h] [rbp-698h]
  __int64 v299; // [rsp+260h] [rbp-690h]
  __int64 v300; // [rsp+268h] [rbp-688h]
  __int64 v301; // [rsp+270h] [rbp-680h]
  __m128i *v302; // [rsp+278h] [rbp-678h]
  __int64 v303; // [rsp+280h] [rbp-670h]
  _OWORD *v304; // [rsp+288h] [rbp-668h]
  __m128 *v305; // [rsp+290h] [rbp-660h]
  int v306[2]; // [rsp+298h] [rbp-658h]
  int v307[2]; // [rsp+2A0h] [rbp-650h]
  __int64 v308; // [rsp+2A8h] [rbp-648h]
  __int64 v309; // [rsp+2B0h] [rbp-640h]
  int v310[2]; // [rsp+2B8h] [rbp-638h]
  __int64 v311; // [rsp+2C0h] [rbp-630h]
  __int64 v312; // [rsp+2C8h] [rbp-628h]
  __int64 v313; // [rsp+2D0h] [rbp-620h]
  __int64 v314; // [rsp+2D8h] [rbp-618h]
  __int64 v315; // [rsp+2E0h] [rbp-610h]
  __int64 v316; // [rsp+2E8h] [rbp-608h]
  __int64 v317; // [rsp+2F0h] [rbp-600h]
  __int64 v318; // [rsp+2F8h] [rbp-5F8h]
  int v319[4]; // [rsp+300h] [rbp-5F0h] BYREF
  __int64 v320; // [rsp+310h] [rbp-5E0h]
  _OWORD *v321; // [rsp+318h] [rbp-5D8h]
  __m128 *v322; // [rsp+320h] [rbp-5D0h]
  __int64 v323; // [rsp+328h] [rbp-5C8h]
  __int64 v324; // [rsp+330h] [rbp-5C0h]
  __m128 *v325; // [rsp+338h] [rbp-5B8h]
  __int64 v326; // [rsp+340h] [rbp-5B0h]
  __int64 v327; // [rsp+348h] [rbp-5A8h]
  __int64 *v328; // [rsp+350h] [rbp-5A0h]
  struct _Unwind_Exception *v329; // [rsp+358h] [rbp-598h]
  __m128i v330; // [rsp+360h] [rbp-590h] BYREF
  __m128 v331; // [rsp+370h] [rbp-580h] BYREF
  __int64 v332; // [rsp+380h] [rbp-570h] BYREF
  void *v333; // [rsp+388h] [rbp-568h]
  __int64 v334; // [rsp+390h] [rbp-560h] BYREF
  __int64 v335; // [rsp+398h] [rbp-558h]
  __int64 v336; // [rsp+3A0h] [rbp-550h] BYREF
  __int64 v337; // [rsp+3A8h] [rbp-548h]
  __int64 v338; // [rsp+3B0h] [rbp-540h] BYREF
  __int64 v339; // [rsp+3B8h] [rbp-538h]
  __int64 v340; // [rsp+3C0h] [rbp-530h] BYREF
  __int64 v341; // [rsp+3C8h] [rbp-528h]
  __int64 v342; // [rsp+3D0h] [rbp-520h] BYREF
  __int64 v343; // [rsp+3D8h] [rbp-518h]
  int v344[2]; // [rsp+3E0h] [rbp-510h] BYREF
  __int64 v345; // [rsp+3E8h] [rbp-508h]
  __int64 v346; // [rsp+3F0h] [rbp-500h] BYREF
  __int64 v347; // [rsp+3F8h] [rbp-4F8h]
  __int64 v348; // [rsp+400h] [rbp-4F0h] BYREF
  __int64 v349; // [rsp+408h] [rbp-4E8h]
  __int64 v350; // [rsp+410h] [rbp-4E0h] BYREF
  __int64 v351; // [rsp+418h] [rbp-4D8h]
  __int64 v352; // [rsp+420h] [rbp-4D0h] BYREF
  __int64 v353; // [rsp+428h] [rbp-4C8h]
  int v354[2]; // [rsp+430h] [rbp-4C0h] BYREF
  __int64 v355; // [rsp+438h] [rbp-4B8h]
  __int64 v356; // [rsp+440h] [rbp-4B0h] BYREF
  __int64 v357; // [rsp+448h] [rbp-4A8h]
  __int64 v358; // [rsp+450h] [rbp-4A0h] BYREF
  __int64 v359; // [rsp+458h] [rbp-498h]
  __int64 v360; // [rsp+460h] [rbp-490h] BYREF
  __int64 v361; // [rsp+468h] [rbp-488h]
  __int64 v362; // [rsp+470h] [rbp-480h] BYREF
  __int64 v363; // [rsp+478h] [rbp-478h]
  int v364[2]; // [rsp+480h] [rbp-470h] BYREF
  __int64 v365; // [rsp+488h] [rbp-468h]
  __int64 v366; // [rsp+490h] [rbp-460h] BYREF
  __int64 v367; // [rsp+498h] [rbp-458h]
  __int64 v368; // [rsp+4A0h] [rbp-450h] BYREF
  __int64 v369; // [rsp+4A8h] [rbp-448h]
  __int64 v370; // [rsp+4B0h] [rbp-440h] BYREF
  __int64 v371; // [rsp+4B8h] [rbp-438h]
  __int64 v372; // [rsp+4C0h] [rbp-430h] BYREF
  __int64 v373; // [rsp+4C8h] [rbp-428h]
  int v374[2]; // [rsp+4D0h] [rbp-420h] BYREF
  __int64 v375; // [rsp+4D8h] [rbp-418h]
  __int64 v376; // [rsp+4E0h] [rbp-410h] BYREF
  __int64 v377; // [rsp+4E8h] [rbp-408h]
  __int64 v378; // [rsp+4F0h] [rbp-400h] BYREF
  __int64 v379; // [rsp+4F8h] [rbp-3F8h]
  __int64 v380; // [rsp+500h] [rbp-3F0h] BYREF
  __int64 v381; // [rsp+508h] [rbp-3E8h]
  __int64 v382; // [rsp+510h] [rbp-3E0h] BYREF
  __int64 v383; // [rsp+518h] [rbp-3D8h]
  __int64 v384; // [rsp+520h] [rbp-3D0h] BYREF
  __int64 v385; // [rsp+528h] [rbp-3C8h]
  __int64 v386; // [rsp+530h] [rbp-3C0h] BYREF
  __int64 v387; // [rsp+538h] [rbp-3B8h]
  __int64 v388; // [rsp+540h] [rbp-3B0h] BYREF
  __int64 v389; // [rsp+548h] [rbp-3A8h]
  __int64 v390; // [rsp+550h] [rbp-3A0h] BYREF
  __int64 v391; // [rsp+558h] [rbp-398h]
  __int64 v392; // [rsp+560h] [rbp-390h] BYREF
  __int64 v393; // [rsp+568h] [rbp-388h]
  __int64 v394; // [rsp+570h] [rbp-380h] BYREF
  __int64 v395; // [rsp+578h] [rbp-378h]
  __int64 v396; // [rsp+580h] [rbp-370h] BYREF
  __int64 v397; // [rsp+588h] [rbp-368h]
  __int64 v398; // [rsp+590h] [rbp-360h] BYREF
  __int64 v399; // [rsp+598h] [rbp-358h]
  __int64 v400; // [rsp+5A0h] [rbp-350h] BYREF
  __int64 v401; // [rsp+5A8h] [rbp-348h]
  __int64 v402; // [rsp+5B0h] [rbp-340h] BYREF
  __int64 v403; // [rsp+5B8h] [rbp-338h]
  __int64 v404; // [rsp+5C0h] [rbp-330h] BYREF
  __int64 v405; // [rsp+5C8h] [rbp-328h]
  __int64 v406; // [rsp+5D0h] [rbp-320h] BYREF
  __int64 v407; // [rsp+5D8h] [rbp-318h]
  __int64 v408; // [rsp+5E0h] [rbp-310h] BYREF
  __int64 v409; // [rsp+5E8h] [rbp-308h]
  __int64 v410; // [rsp+5F0h] [rbp-300h] BYREF
  __int64 v411; // [rsp+5F8h] [rbp-2F8h]
  __int64 v412; // [rsp+600h] [rbp-2F0h] BYREF
  __int64 v413; // [rsp+608h] [rbp-2E8h]
  __int64 v414; // [rsp+610h] [rbp-2E0h] BYREF
  __int64 v415; // [rsp+618h] [rbp-2D8h]
  __int64 v416; // [rsp+620h] [rbp-2D0h] BYREF
  __int64 v417; // [rsp+628h] [rbp-2C8h]
  __int64 v418; // [rsp+630h] [rbp-2C0h] BYREF
  __int64 v419; // [rsp+638h] [rbp-2B8h]
  __int64 v420; // [rsp+640h] [rbp-2B0h] BYREF
  __int64 v421; // [rsp+648h] [rbp-2A8h]
  __int64 v422; // [rsp+650h] [rbp-2A0h] BYREF
  __int64 v423; // [rsp+658h] [rbp-298h]
  __int64 v424; // [rsp+660h] [rbp-290h] BYREF
  __int64 v425; // [rsp+668h] [rbp-288h]
  __int64 v426; // [rsp+670h] [rbp-280h] BYREF
  __int64 v427; // [rsp+678h] [rbp-278h]
  __int64 v428; // [rsp+680h] [rbp-270h] BYREF
  __int64 v429; // [rsp+688h] [rbp-268h]
  __int64 v430; // [rsp+690h] [rbp-260h] BYREF
  __int64 v431; // [rsp+698h] [rbp-258h]
  __int64 v432; // [rsp+6A0h] [rbp-250h] BYREF
  __int64 v433; // [rsp+6A8h] [rbp-248h]
  __int64 v434; // [rsp+6B0h] [rbp-240h] BYREF
  __int64 v435; // [rsp+6B8h] [rbp-238h]
  __int64 v436; // [rsp+6C0h] [rbp-230h] BYREF
  __int64 v437; // [rsp+6C8h] [rbp-228h]
  __int64 v438; // [rsp+6D0h] [rbp-220h] BYREF
  __int64 v439; // [rsp+6D8h] [rbp-218h]
  __int64 v440; // [rsp+6E0h] [rbp-210h] BYREF
  __int64 v441; // [rsp+6E8h] [rbp-208h]
  __int64 v442; // [rsp+6F0h] [rbp-200h] BYREF
  __int64 v443; // [rsp+6F8h] [rbp-1F8h]
  __m128i v444; // [rsp+700h] [rbp-1F0h] BYREF
  __int64 v445; // [rsp+710h] [rbp-1E0h] BYREF
  __int64 v446; // [rsp+718h] [rbp-1D8h]
  __int64 v447; // [rsp+720h] [rbp-1D0h] BYREF
  __int64 v448; // [rsp+728h] [rbp-1C8h]
  __m128i v449; // [rsp+730h] [rbp-1C0h]
  __int64 v450; // [rsp+740h] [rbp-1B0h] BYREF
  __int64 v451; // [rsp+748h] [rbp-1A8h]
  __int64 v452; // [rsp+750h] [rbp-1A0h] BYREF
  __int64 v453; // [rsp+758h] [rbp-198h]
  __int64 v454; // [rsp+760h] [rbp-190h] BYREF
  __int64 v455; // [rsp+768h] [rbp-188h]
  __int64 v456; // [rsp+770h] [rbp-180h] BYREF
  __int64 v457; // [rsp+778h] [rbp-178h]
  __m128i v458; // [rsp+780h] [rbp-170h] BYREF
  int v459[2]; // [rsp+790h] [rbp-160h] BYREF
  __int64 v460; // [rsp+798h] [rbp-158h]
  __int64 v461; // [rsp+7A0h] [rbp-150h]
  __int64 v462; // [rsp+7A8h] [rbp-148h]
  __int64 v463; // [rsp+7B0h] [rbp-140h]
  __int64 v464; // [rsp+7B8h] [rbp-138h]
  __int64 v465; // [rsp+7C0h] [rbp-130h] BYREF
  __int64 v466; // [rsp+7C8h] [rbp-128h]
  __m128 v467; // [rsp+7D0h] [rbp-120h] BYREF
  __m128 v468; // [rsp+7E0h] [rbp-110h] BYREF
  __m128 v469; // [rsp+7F0h] [rbp-100h] BYREF
  __m128 v470; // [rsp+800h] [rbp-F0h] BYREF
  __m128 v471; // [rsp+810h] [rbp-E0h] BYREF
  __m128 v472; // [rsp+820h] [rbp-D0h] BYREF
  __m128 v473; // [rsp+830h] [rbp-C0h] BYREF
  __m128i v474; // [rsp+840h] [rbp-B0h] BYREF
  __m128i v475; // [rsp+850h] [rbp-A0h] BYREF
  __m128i v476; // [rsp+860h] [rbp-90h] BYREF
  __m128i v477; // [rsp+870h] [rbp-80h] BYREF
  __int64 v478; // [rsp+880h] [rbp-70h]
  __int64 v479; // [rsp+888h] [rbp-68h]
  __int64 v480; // [rsp+890h] [rbp-60h]
  int v481[4]; // [rsp+8A0h] [rbp-50h] BYREF
  __int64 v482; // [rsp+8B0h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8);
  v326 = a2;
  v329 = a5;
  v293 = v6;
  v7 = *(_QWORD *)(*a4 + 32LL);
  v284 = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v8 = a4[1];
  v315 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = a4[2];
  v314 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = a4[3];
  v324 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  sub_D50200(0, v293);
  v11 = *(_QWORD *)(a1 + 8);
  v328 = &v332;
  v12 = *(_QWORD *)(v326 + 40);
  v317 = v11;
  v332 = 0;
  v333 = (void *)v11;
  sub_D5B8E0(a1, v12, &v332);
  v13 = *(_QWORD *)(v326 + 40);
  v334 = 0;
  v323 = v332;
  v335 = v11;
  v232 = v333;
  sub_D51670(a1, v13, &v334);
  v336 = 0;
  v290 = v334;
  v234 = v335;
  v14 = *(_QWORD *)(v326 + 40);
  v337 = v11;
  sub_D518E0(a1, v14, &v336);
  v338 = 0;
  v292 = v336;
  v235 = v337;
  v15 = *(_QWORD *)(v326 + 40);
  v339 = v11;
  sub_D5B6C0(a1, v15, &v338);
  v340 = 0;
  v316 = v338;
  v236 = v339;
  v16 = *(_QWORD *)(v326 + 40);
  v341 = v11;
  sub_D5B4A0(a1, v16, &v340);
  v342 = 0;
  *(_QWORD *)v344 = 0;
  v318 = v340;
  v346 = 0;
  v317 = v341;
  v17 = *(_QWORD *)(a1 + 8);
  v348 = 0;
  v343 = v17;
  v345 = v17;
  v347 = v17;
  v349 = v17;
  v350 = 0;
  v351 = v17;
  v352 = 0;
  v353 = v17;
  *(_QWORD *)v354 = 0;
  v355 = v17;
  v356 = 0;
  v357 = v17;
  v358 = 0;
  v359 = v17;
  v360 = 0;
  v361 = v17;
  v362 = 0;
  v363 = v17;
  *(_QWORD *)v364 = 0;
  v365 = v17;
  v366 = 0;
  v367 = v17;
  v368 = 0;
  v369 = v17;
  v370 = 0;
  v371 = v17;
  sub_D5BB00(a1, v315, &v342);
  sub_D52DE0(
    a1,
    v315,
    (int)v344,
    v18,
    v19,
    v20,
    v216,
    v224,
    v228.m128_i32[0],
    v228.m128_i64[1],
    (int)v229,
    (__int64)v230,
    v231,
    (__int64)v232,
    v233,
    v234,
    v235,
    v236,
    v237,
    (__int64)v238,
    v239,
    v240,
    v241,
    v242,
    v243);
  sub_D52AC0(a1, v315, &v346);
  sub_D52C50(a1, v315, &v348);
  sub_D61A80(a1, v315, &v350);
  sub_D5BB00(a1, v314, &v352);
  sub_D52DE0(
    a1,
    v314,
    (int)v354,
    v21,
    v22,
    v23,
    v217,
    v225,
    v228.m128_i32[0],
    v228.m128_i64[1],
    (int)v229,
    (__int64)v230,
    v231,
    (__int64)v232,
    v233,
    v234,
    v235,
    v236,
    v237,
    (__int64)v238,
    v239,
    v240,
    v241,
    v242,
    v243);
  sub_D52AC0(a1, v314, &v356);
  sub_D52C50(a1, v314, &v358);
  sub_D61A80(a1, v314, &v360);
  sub_D5BB00(a1, v324, &v362);
  sub_D52DE0(
    a1,
    v324,
    (int)v364,
    v24,
    v25,
    v26,
    v218,
    v226,
    v228.m128_i32[0],
    v228.m128_i64[1],
    (int)v229,
    (__int64)v230,
    v231,
    (__int64)v232,
    v233,
    v234,
    v235,
    v236,
    v237,
    (__int64)v238,
    v239,
    v240,
    v241,
    v242,
    v243);
  sub_D52AC0(a1, v324, &v366);
  sub_D52C50(a1, v324, &v368);
  sub_D61A80(a1, v324, &v370);
  v27 = *(_QWORD *)(a1 + 8);
  v372 = 0;
  v373 = v27;
  sub_D504D0(a1, v284, &v372);
  v28 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v374 = 0;
  v376 = 0;
  v375 = v28;
  v377 = v28;
  v378 = 0;
  v379 = v28;
  v380 = 0;
  v381 = v28;
  v382 = 0;
  v383 = v28;
  v384 = 0;
  v385 = v28;
  v386 = 0;
  v387 = v28;
  v390 = 0;
  v391 = v28;
  v392 = 0;
  v393 = v28;
  v394 = 0;
  v395 = v28;
  v396 = 0;
  v397 = v28;
  v400 = 0;
  v401 = v28;
  v402 = 0;
  v403 = v28;
  v404 = 0;
  v405 = v28;
  v406 = 0;
  v407 = v28;
  sub_14E31E0(a1 + 16, v348, v358, (unsigned int)&v404, v29, v30, v219);
  sub_14E31E0(a1 + 16, v404, v368, (unsigned int)&v404, v31, v32, v220);
  v325 = &v467;
  v467 = _mm_loadh_ps((const double *)&v404);
  sub_D502F0(a1 + 16, &v467, &v406);
  v35 = *(_BYTE *)(a1 + 24) == 0;
  v36 = a1 + 16;
  v482 = v362;
  v238 = (__int64 *)v481;
  *(__m128 *)v481 = _mm_loadh_ps((const double *)&v352);
  if ( !v35 )
  {
    if ( (unsigned int)sub_14E0E20(
                         v36,
                         3,
                         (int)v481,
                         (int)v374,
                         v33,
                         v34,
                         v221,
                         v227,
                         v228.m128_i32[0],
                         v228.m128_i32[2],
                         (int)v229,
                         v230) != 5 )
      goto LABEL_11;
LABEL_154:
    v214 = sub_15E1AF0(*(_QWORD *)(a1 + 16));
    v215 = v214;
    if ( v214 )
      ++*(_DWORD *)(v214 + 8);
    sub_D50200(*(__int64 *)v374, v375);
    *(_QWORD *)v374 = v215;
    if ( v323 )
      goto LABEL_12;
    goto LABEL_157;
  }
  if ( (unsigned int)sub_14E03D0(
                       v36,
                       v221,
                       v227,
                       v228.m128_i32[0],
                       v228.m128_i32[2],
                       (int)v229,
                       (int)v230,
                       v231,
                       v232,
                       v233,
                       v234,
                       v235,
                       v236,
                       v237,
                       (int)v238,
                       v239,
                       v240,
                       v241,
                       v242,
                       v243,
                       v244,
                       v245,
                       v246,
                       v247,
                       v248,
                       v249,
                       v250,
                       v251,
                       v252,
                       v253,
                       v254,
                       v255,
                       v256,
                       v257,
                       v258,
                       v259,
                       v260,
                       v261,
                       v262,
                       v263,
                       v264,
                       v265,
                       v266,
                       v267,
                       v268) == 5 )
    goto LABEL_154;
LABEL_11:
  if ( v323 )
  {
LABEL_12:
    v388 = 0;
    v389 = v28;
    sub_D50220(&v388, v328);
    v250 = v388;
    v237 = v389;
    goto LABEL_13;
  }
LABEL_157:
  v237 = v28;
  v250 = 0;
LABEL_13:
  sub_D63CE0(a1, v315, &v376);
  v37 = *(_QWORD *)(a1 + 8);
  v408 = 0;
  v409 = v37;
  v410 = 0;
  v411 = v37;
  sub_D51DB0(a1, v356, v318, v316, &v408, v38);
  v229 = &v468;
  v468 = _mm_loadh_ps((const double *)&v406);
  sub_D50260(a1 + 16, &v468, &v410);
  sub_D51DB0(a1, v410, v323, v408, &v390, v39);
  sub_D63CE0(a1, v314, &v378);
  v40 = *(_QWORD *)(a1 + 8);
  v412 = 0;
  v413 = v40;
  sub_D51DB0(a1, v346, v318, v316, &v412, v41);
  v469 = _mm_loadh_ps((const double *)&v406);
  sub_D50260(a1 + 16, &v469, &v410);
  sub_D51DB0(a1, v410, v323, v412, &v392, v42);
  sub_D63E40(a1, v315, &v380);
  v43 = *(_QWORD *)(a1 + 8);
  v414 = 0;
  v415 = v43;
  sub_D51DB0(a1, v356, v316, v318, &v414, v44);
  v470 = _mm_loadh_ps((const double *)&v406);
  sub_D50260(a1 + 16, &v470, &v410);
  sub_D51DB0(a1, v410, v323, v414, &v394, v45);
  sub_D63E40(a1, v314, &v382);
  v46 = *(_QWORD *)(a1 + 8);
  v416 = 0;
  v417 = v46;
  sub_D51DB0(a1, v346, v316, v318, &v416, v47);
  v322 = &v471;
  v471 = _mm_loadh_ps((const double *)&v406);
  sub_D50260(a1 + 16, &v471, &v410);
  sub_D51DB0(a1, v410, v323, v416, &v396, v48);
  sub_D61A80(a1, v324, &v384);
  if ( v324 )
  {
    v398 = 0;
    v49 = _mm_loadh_ps((const double *)&v293);
    v399 = v28;
    v331 = v49;
    sub_D50220(&v398, (__int64 *)&v331);
    v28 = v399;
    v251 = v398;
  }
  else
  {
    v251 = 0;
  }
  v50 = *(_QWORD *)(a1 + 8);
  v418 = 0;
  v419 = v50;
  v51 = _mm_loadh_ps((const double *)v354);
  v421 = v50;
  v423 = v50;
  v321 = &v472;
  v420 = 0;
  v422 = 0;
  v472 = v51;
  sub_D50260(a1 + 16, &v472, &v386);
  sub_14E31E0(a1 + 16, v348, v358, (unsigned int)&v420, v52, v53, (__int64)&v470);
  sub_14E31E0(a1 + 16, v420, v368, (unsigned int)&v422, v54, v55, v222);
  v305 = &v473;
  v473 = _mm_loadh_ps((const double *)&v422);
  sub_D502F0(a1 + 16, &v473, &v418);
  v56 = *(void **)(a1 + 8);
  v424 = 0;
  v230 = v56;
  v425 = (__int64)v56;
  v57 = sub_15E1A70((int)v56);
  v239 = v57;
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  sub_D81E50(a1 + 16, v372, v290, v292, &v424);
  sub_D51DB0(a1, v418, v424, v324, &v400, v58);
  v289 = *(_QWORD *)(a1 + 8);
  v59 = sub_D50390(a1 + 232, 1u);
  v299 = v59;
  if ( v59 )
    ++*(_DWORD *)(v59 + 8);
  sub_D50200(0, v289);
  v60 = sub_D50430(a1 + 232, 1u);
  v301 = v60;
  if ( v60 )
    ++*(_DWORD *)(v60 + 8);
  sub_D50200(0, v289);
  v307[0] = sub_15C5540((int)a1 + 432, *(_QWORD *)(v326 + 40), v61, v62, v63, v64);
  LODWORD(v328) = sub_15C5560(a1 + 432, *(_QWORD *)(v326 + 40));
  v65 = *(_QWORD *)(a1 + 8);
  v428 = 0;
  v66 = v65;
  v429 = v65;
  v430 = 0;
  v431 = v65;
  v432 = 0;
  v433 = v65;
  v436 = 0;
  v437 = v65;
  v438 = 0;
  v439 = v65;
  v440 = 0;
  v441 = v65;
  v444.m128i_i64[0] = 0;
  v444.m128i_i64[1] = v65;
  v445 = 0;
  v446 = v65;
  v447 = 0;
  v448 = v65;
  v426 = 0;
  v427 = v65;
  sub_D59470((_QWORD *)a1, v315, &v426, &v428, &v430, &v432, 1);
  v435 = v66;
  v434 = 0;
  v246 = v426;
  v231 = v427;
  sub_D59470((_QWORD *)a1, v314, &v434, &v436, &v438, &v440, 1);
  v443 = v66;
  v442 = 0;
  v247 = v434;
  v233 = v435;
  sub_D59470((_QWORD *)a1, v324, &v442, v444.m128i_i64, &v445, &v447, 1);
  v291 = v442;
  v248 = v443;
  v308 = *(_QWORD *)(a1 + 8);
  v67 = sub_D500F0(a1 + 232, v432);
  v259 = v67;
  if ( v67 )
    ++*(_DWORD *)(v67 + 8);
  sub_D50200(0, v308);
  v68 = sub_D500F0(a1 + 232, v440);
  v266 = v68;
  if ( v68 )
    ++*(_DWORD *)(v68 + 8);
  sub_D50200(0, v308);
  v69 = sub_D500F0(a1 + 232, v447);
  v271 = v69;
  if ( v69 )
    ++*(_DWORD *)(v69 + 8);
  sub_D50200(0, v308);
  v288 = *(_QWORD *)(a1 + 8);
  v70 = sub_D81D60(a1 + 232, (unsigned int)v328, v428);
  v258 = v70;
  if ( v70 )
    ++*(_DWORD *)(v70 + 8);
  sub_D50200(0, v288);
  v71 = sub_D81D60(a1 + 232, (unsigned int)v328, v436);
  v265 = v71;
  if ( v71 )
    ++*(_DWORD *)(v71 + 8);
  sub_D50200(0, v288);
  v313 = *(_QWORD *)(a1 + 8);
  v72 = sub_D50080(a1 + 232, v430);
  v257 = v72;
  if ( v72 )
    ++*(_DWORD *)(v72 + 8);
  sub_D50200(0, v313);
  v73 = sub_D50080(a1 + 232, v438);
  v264 = v73;
  if ( v73 )
    ++*(_DWORD *)(v73 + 8);
  sub_D50200(0, v313);
  v74 = sub_D50080(a1 + 232, v445);
  v327 = v74;
  v75 = _mm_loadh_ps((const double *)&v247);
  if ( v74 )
    ++*(_DWORD *)(v74 + 8);
  *(__m128 *)v319 = v75;
  sub_D50200(0, v313);
  si128 = _mm_load_si128((const __m128i *)v319);
  v77 = *(_QWORD *)(a1 + 240);
  v312 = *(_QWORD *)(a1 + 8);
  v449 = si128;
  v78 = sub_15E1AF0(v77);
  v297 = v78;
  if ( v78 )
    ++*(_DWORD *)(v78 + 8);
  sub_D50200(0, v312);
  sub_15E1B70(*(_QWORD *)(a1 + 240));
  sub_15E1B70(*(_QWORD *)(a1 + 240));
  v79 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v311 = v79;
  if ( v79 )
    ++*(_DWORD *)(v79 + 8);
  sub_D50200(0, v312);
  v80 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v81 = v80;
  if ( v80 )
    ++*(_DWORD *)(v80 + 8);
  sub_D50200(0, v312);
  v245 = *(_QWORD *)(a1 + 8);
  v82 = sub_D50430(a1 + 232, (int)v328 + 2);
  v83 = *(_QWORD *)(a1 + 240);
  v84 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v444), (__m128i)(unsigned __int64)v82);
  v304 = &v474;
  v474 = v84;
  v85 = sub_15E1AF0(v83);
  v86 = sub_D81D60(a1 + 232, 1, v85);
  v300 = v86;
  if ( v86 )
    ++*(_DWORD *)(v86 + 8);
  sub_D50200(0, v245);
  v87 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v309 = v87;
  if ( v87 )
    ++*(_DWORD *)(v87 + 8);
  sub_D50200(v327, v313);
  v475.m128i_i64[1] = sub_D50430(a1 + 232, 3u);
  v88 = *(_QWORD *)(a1 + 240);
  v475.m128i_i64[0] = v81;
  v302 = &v475;
  v89 = sub_15E1AF0(v88);
  v295 = v89;
  if ( v89 )
    ++*(_DWORD *)(v89 + 8);
  sub_D50200(v81, v312);
  v90 = *(_QWORD *)(a1 + 240);
  v244 = *(_QWORD *)(a1 + 8);
  v91 = sub_15E1B70(v90);
  v256 = v91;
  if ( v91 )
    ++*(_DWORD *)(v91 + 8);
  sub_D50200(0, v244);
  v92 = v256;
  v93 = *(_QWORD *)(a1 + 8);
  v450 = 0;
  v451 = v93;
  v452 = 0;
  v453 = v93;
  v454 = 0;
  v455 = v93;
  v456 = 0;
  v457 = v93;
  v458.m128i_i64[0] = 0;
  v458.m128i_i64[1] = v93;
  v467.m128_u64[0] = 0;
  v467.m128_u64[1] = v93;
  sub_D81E50(a1 + 16, v256, v291, v297, &v450);
  sub_D81E50(a1 + 16, v92, v300, v295, &v452);
  sub_D81E50(a1 + 16, v92, v309, v311, &v454);
  sub_D81E50(a1 + 16, v92, v297, v291, &v456);
  sub_D81E50(a1 + 16, v92, v295, v300, &v458);
  sub_D81E50(a1 + 16, v92, v311, v309, v325);
  v94 = *(_QWORD *)(a1 + 8);
  v469.m128_u64[0] = 0;
  v95 = *(_QWORD *)(a1 + 240);
  v470.m128_u64[0] = 0;
  v243 = v94;
  v468.m128_u64[1] = v94;
  v469.m128_u64[1] = v94;
  v470.m128_u64[1] = v94;
  v471.m128_u64[0] = 0;
  v471.m128_u64[1] = v94;
  v96 = sub_15E1B70(v95);
  v97 = v96;
  if ( v96 )
    ++*(_DWORD *)(v96 + 8);
  sub_D50200(v471.m128_i64[0], v471.m128_i64[1]);
  v98 = *(_QWORD *)(a1 + 8);
  v471.m128_u64[0] = v97;
  v287 = v98;
  v319[0] = v307[0] + 2;
  LODWORD(v280) = 2 * (_DWORD)v328;
  LODWORD(v325) = 2 * (_DWORD)v328 + 3;
  v99 = sub_D81BF0(a1 + 232, (unsigned int)v325, (unsigned int)(v307[0] + 2));
  v298 = v99;
  if ( v99 )
    ++*(_DWORD *)(v99 + 8);
  sub_D50200(0, v287);
  v100 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v267 = v100;
  if ( v100 )
    ++*(_DWORD *)(v100 + 8);
  sub_D50200(0, v287);
  sub_D81E50(a1 + 16, v267, v298, v471.m128_u64[0], v322);
  v322 = *(__m128 **)(a1 + 8);
  LODWORD(v327) = 3 * (_DWORD)v328 + 3;
  sub_D81D60(a1 + 232, (unsigned int)(v327 - v307[0] - 2), v471.m128_u64[0]);
  v101 = sub_D50430(a1 + 232, (unsigned int)v328);
  v102 = *(_QWORD *)(a1 + 240);
  v103 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v458), (__m128i)(unsigned __int64)v101);
  v275 = (__int64 *)&v476;
  v476 = v103;
  sub_15E1AF0(v102);
  v104 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v303 = v104;
  if ( v104 )
    ++*(_DWORD *)(v104 + 8);
  sub_D50200(0, (__int64)v322);
  v105 = sub_D81CD0(a1 + 232, (unsigned int)(v327 - 1), (unsigned int)v328, v303);
  v327 = v105;
  if ( v105 )
    ++*(_DWORD *)(v105 + 8);
  sub_D50200(0, (__int64)v322);
  LODWORD(v278) = (_DWORD)v328 - 1;
  v106 = sub_D50160(a1 + 232, (int)v328 - 1, v303);
  v276 = v106;
  if ( v106 )
    ++*(_DWORD *)(v106 + 8);
  sub_D50200(0, (__int64)v322);
  v107 = sub_15E1A70(*(_QWORD *)(a1 + 8));
  v281 = v107;
  if ( v107 )
    ++*(_DWORD *)(v107 + 8);
  sub_D50200(0, (__int64)v322);
  v108 = sub_D500F0(a1 + 232, v452);
  v109 = v108;
  if ( v108 )
    ++*(_DWORD *)(v108 + 8);
  sub_D50200(v452, v453);
  v452 = v109;
  v110 = sub_D500F0(a1 + 232, v327);
  v294 = v110;
  if ( v110 )
    ++*(_DWORD *)(v110 + 8);
  sub_D50200(v327, (__int64)v322);
  v111 = *(_QWORD *)(a1 + 8);
  v472.m128_u64[0] = 0;
  v472.m128_u64[1] = v111;
  sub_D81DD0(a1 + 16, v450, v456, v321);
  v112 = *(_QWORD *)(a1 + 8);
  v473.m128_u64[0] = 0;
  v321 = (_OWORD *)v112;
  v473.m128_u64[1] = v112;
  LODWORD(v320) = v280 + 4;
  v113 = sub_D81D60(a1 + 232, (unsigned int)(v280 + 4), v281);
  v296 = v113;
  if ( v113 )
    ++*(_DWORD *)(v113 + 8);
  sub_D50200(0, (__int64)v321);
  v114 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v327 = v114;
  if ( v114 )
    ++*(_DWORD *)(v114 + 8);
  sub_D50200(0, (__int64)v321);
  v115 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)v310 = *(_QWORD *)(a1 + 8);
  sub_15E1B70(v115);
  *(_QWORD *)v306 = *(_QWORD *)(a1 + 8);
  sub_D50160(a1 + 232, 0, v327);
  sub_15E1B70(v306[0]);
  v116 = sub_15E1BF0(v310[0]);
  v277 = v116;
  if ( v116 )
    ++*(_DWORD *)(v116 + 8);
  sub_D50200(v327, (__int64)v321);
  v117 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v327 = v117;
  if ( v117 )
    ++*(_DWORD *)(v117 + 8);
  sub_D50200(0, (__int64)v321);
  v118 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)v310 = *(_QWORD *)(a1 + 8);
  sub_15E1B70(v118);
  *(_QWORD *)v306 = *(_QWORD *)(a1 + 8);
  sub_D50160(a1 + 232, 0, v327);
  sub_15E1B70(v306[0]);
  v119 = sub_15E1BF0(v310[0]);
  v252 = v119;
  if ( v119 )
    ++*(_DWORD *)(v119 + 8);
  sub_D50200(v327, (__int64)v321);
  sub_D81E50(a1 + 16, v472.m128_u64[0], v277, v252, v305);
  v286 = *(_QWORD *)(a1 + 8);
  v120 = sub_D81CD0(a1 + 232, (unsigned int)v320, (unsigned int)v320, v473.m128_u64[0]);
  *(_QWORD *)v310 = v120;
  if ( v120 )
    ++*(_DWORD *)(v120 + 8);
  sub_D50200(0, v286);
  v121 = sub_15E1A70(*(_QWORD *)(a1 + 240));
  v268 = v121;
  if ( v121 )
    ++*(_DWORD *)(v121 + 8);
  sub_D50200(0, v286);
  v122 = *(_QWORD *)(a1 + 8);
  v474.m128i_i64[0] = 0;
  v475.m128i_i64[0] = 0;
  v474.m128i_i64[1] = v122;
  v475.m128i_i64[1] = v122;
  sub_D81DD0(a1 + 16, *(_QWORD *)v310, v299, v304);
  sub_D81E50(a1 + 16, v474.m128i_i64[0], v268, v473.m128_u64[0], v302);
  v123 = *(_QWORD *)(a1 + 240);
  v327 = *(_QWORD *)(a1 + 8);
  v124 = sub_15E1A70(v123);
  v253 = v124;
  if ( v124 )
    ++*(_DWORD *)(v124 + 8);
  sub_D50200(0, v327);
  v125 = sub_15E1A70(*(_QWORD *)(a1 + 240));
  v261 = v125;
  if ( v125 )
    ++*(_DWORD *)(v125 + 8);
  sub_D50200(0, v327);
  v126 = sub_15E1A70(*(_QWORD *)(a1 + 240));
  v270 = v126;
  if ( v126 )
    ++*(_DWORD *)(v126 + 8);
  sub_D50200(0, v327);
  v127 = sub_15E1BF0(*(_QWORD *)(a1 + 8));
  v274 = v127;
  if ( v127 )
    ++*(_DWORD *)(v127 + 8);
  sub_D50200(0, v327);
  v128 = sub_15E1BF0(*(_QWORD *)(a1 + 8));
  v279 = v128;
  if ( v128 )
    ++*(_DWORD *)(v128 + 8);
  sub_D50200(0, v327);
  v129 = sub_15E1B70(*(_QWORD *)(a1 + 8));
  v282 = v129;
  if ( v129 )
    ++*(_DWORD *)(v129 + 8);
  sub_D50200(0, v327);
  v130 = *(_QWORD *)(a1 + 240);
  v478 = v274;
  v479 = v279;
  v480 = v282;
  v131 = sub_15E1AF0(v130);
  v283 = v131;
  if ( v131 )
    ++*(_DWORD *)(v131 + 8);
  sub_D50200(0, v243);
  v242 = *(_QWORD *)(a1 + 8);
  sub_D81CD0(a1 + 232, (unsigned int)v320, (unsigned int)v320, v475.m128i_i64[0]);
  v132 = sub_15E1B70(v242);
  v260 = v132;
  if ( v132 )
    ++*(_DWORD *)(v132 + 8);
  sub_D50200(0, v242);
  v133 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)v306 = *(_QWORD *)(a1 + 8);
  sub_15E1A70(v133);
  v134 = sub_15E1BF0(v306[0]);
  v135 = v134;
  if ( v134 )
    ++*(_DWORD *)(v134 + 8);
  sub_D50200(v475.m128i_i64[0], v475.m128i_i64[1]);
  v136 = *(_QWORD *)(a1 + 8);
  v475.m128i_i64[0] = v135;
  v285 = v136;
  v137 = sub_D81CD0(a1 + 232, (unsigned int)v320, (unsigned int)v325, v135);
  v255 = v137;
  if ( v137 )
    ++*(_DWORD *)(v137 + 8);
  sub_D50200(0, v285);
  v138 = *(_QWORD *)(a1 + 8);
  sub_D50430(a1 + 232, 2u);
  v139 = sub_15E1B70(v138);
  v302 = (__m128i *)v139;
  if ( v139 )
    ++*(_DWORD *)(v139 + 8);
  sub_D50200(0, v285);
  v140 = *(_QWORD *)(a1 + 8);
  sub_D50390(a1 + 232, v319[0]);
  sub_15E1B70(*(_QWORD *)(a1 + 240));
  v141 = sub_15E1BF0(v140);
  v142 = v141;
  if ( v141 )
    ++*(_DWORD *)(v141 + 8);
  sub_D50200(v470.m128_i64[0], v470.m128_i64[1]);
  v143 = *(_QWORD *)(a1 + 8);
  v470.m128_u64[0] = v142;
  v476.m128i_i64[0] = 0;
  v325 = (__m128 *)v143;
  v476.m128i_i64[1] = v143;
  v144 = sub_D50430(a1 + 232, v319[0]);
  v254 = v144;
  if ( v144 )
    ++*(_DWORD *)(v144 + 8);
  sub_D50200(0, (__int64)v325);
  *(_QWORD *)v459 = 0;
  v460 = (__int64)v325;
  sub_D5AB10(a1, v307[0], (__int64 *)v459);
  v249 = v460;
  v145 = *(_QWORD *)v459;
  v146 = sub_D50080(a1 + 232, *(__int64 *)v459);
  v269 = v146;
  if ( v146 )
    ++*(_DWORD *)(v146 + 8);
  sub_D50200(v145, v249);
  sub_D55100(a1, v475.m128i_i64[0], v319[0], v275);
  sub_D81BF0(a1 + 232, 2, (unsigned int)v319[0]);
  v147 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v148 = v147;
  if ( v147 )
    ++*(_DWORD *)(v147 + 8);
  sub_D50200(v476.m128i_i64[0], v476.m128i_i64[1]);
  v149 = *(_QWORD *)(a1 + 240);
  v476.m128i_i64[0] = v148;
  v150 = sub_15E1B70(v149);
  v304 = (_OWORD *)v150;
  if ( v150 )
    ++*(_DWORD *)(v150 + 8);
  sub_D50200(0, (__int64)v325);
  v151 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)v319 = *(_QWORD *)(a1 + 8);
  sub_15E1B70(v151);
  v152 = sub_15E1BF0(v319[0]);
  v305 = (__m128 *)v152;
  if ( v152 )
    ++*(_DWORD *)(v152 + 8);
  sub_D50200(0, (__int64)v325);
  v153 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)v319 = *(_QWORD *)(a1 + 8);
  sub_15E1B70(v153);
  v154 = sub_15E1BF0(v319[0]);
  *(_QWORD *)v306 = v154;
  if ( v154 )
    ++*(_DWORD *)(v154 + 8);
  sub_D50200(0, (__int64)v325);
  v155 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v156 = v155;
  if ( v155 )
    ++*(_DWORD *)(v155 + 8);
  sub_D50200(v470.m128_i64[0], v470.m128_i64[1]);
  v470.m128_u64[0] = v156;
  sub_D81D60(a1 + 232, (unsigned int)(v280 - v307[0] + 3), *(_QWORD *)v306);
  v157 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  *(_QWORD *)v307 = v157;
  if ( v157 )
    ++*(_DWORD *)(v157 + 8);
  sub_D50200(v475.m128i_i64[0], v475.m128i_i64[1]);
  v475.m128i_i64[0] = *(_QWORD *)v307;
  if ( (unsigned int)v328 <= 4 )
  {
    v159 = 7 - (_DWORD)v328;
    v211 = sub_D50430(a1 + 232, 7 - (int)v328);
    v212 = *(_QWORD *)(a1 + 240);
    v477 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v475), (__m128i)(unsigned __int64)v211);
    v213 = sub_15E1AF0(v212);
    *(_QWORD *)v307 = v213;
    if ( v213 )
      ++*(_DWORD *)(v213 + 8);
    sub_D50200(v475.m128i_i64[0], v475.m128i_i64[1]);
    v158 = 5;
    LODWORD(v278) = 6;
    LODWORD(v272) = 7;
    v475.m128i_i64[0] = *(_QWORD *)v307;
  }
  else
  {
    LODWORD(v272) = (_DWORD)v328;
    v158 = (_DWORD)v328 - 2;
    v159 = 0;
  }
  *(_QWORD *)v319 = *(_QWORD *)(a1 + 8);
  v160 = sub_D50160(a1 + 232, v158, *(__int64 *)v307);
  *(_QWORD *)v307 = v160;
  if ( v160 )
    ++*(_DWORD *)(v160 + 8);
  sub_D50200(0, *(__int64 *)v319);
  v161 = v159 + v320;
  v162 = sub_D81CD0(a1 + 232, v161, (unsigned int)v278, v475.m128i_i64[0]);
  v263 = v162;
  if ( v162 )
    ++*(_DWORD *)(v162 + 8);
  sub_D50200(0, *(__int64 *)v319);
  v163 = sub_15E1A70(*(_QWORD *)(a1 + 8));
  v164 = sub_D81D60(a1 + 232, (unsigned int)((_DWORD)v328 + 5), v163);
  v273 = v164;
  if ( v164 )
    ++*(_DWORD *)(v164 + 8);
  sub_D50200(0, *(__int64 *)v319);
  v165 = *(_QWORD *)(a1 + 240);
  v461 = v263;
  v462 = v273;
  v166 = sub_15E1AF0(v165);
  v275 = (__int64 *)v166;
  if ( v166 )
    ++*(_DWORD *)(v166 + 8);
  sub_D50200(0, *(__int64 *)v319);
  LODWORD(v241) = (_DWORD)v328 + 3;
  v167 = sub_D50160(a1 + 232, (int)v328 + 3, (__int64)v275);
  v280 = v167;
  if ( v167 )
    ++*(_DWORD *)(v167 + 8);
  sub_D50200(0, *(__int64 *)v319);
  v320 = *(_QWORD *)(a1 + 8);
  v168 = sub_D50160(a1 + 232, v278, v475.m128i_i64[0]);
  v240 = v168;
  if ( v168 )
    ++*(_DWORD *)(v168 + 8);
  sub_D50200(0, v320);
  v169 = sub_D81CD0(a1 + 232, v161, (unsigned int)v272, v475.m128i_i64[0]);
  v262 = v169;
  if ( v169 )
    ++*(_DWORD *)(v169 + 8);
  sub_D50200(0, v320);
  v170 = sub_15E1A70(*(_QWORD *)(a1 + 8));
  v171 = (_DWORD)v328 + 4;
  v172 = sub_D81D60(a1 + 232, (unsigned int)((_DWORD)v328 + 4), v170);
  v272 = v172;
  if ( v172 )
    ++*(_DWORD *)(v172 + 8);
  sub_D50200(0, v320);
  v173 = *(_QWORD *)(a1 + 240);
  v463 = v262;
  v464 = v272;
  v174 = sub_15E1AF0(v173);
  v175 = sub_D81D60(a1 + 232, 1, v174);
  v278 = v175;
  if ( v175 )
    ++*(_DWORD *)(v175 + 8);
  sub_D50200(0, v320);
  v176 = sub_D50160(a1 + 232, v241, v278);
  v328 = (__int64 *)v176;
  if ( v176 )
    ++*(_DWORD *)(v176 + 8);
  sub_D50200(0, v320);
  v177 = sub_15E1BF0(*(_QWORD *)(a1 + 8));
  if ( v177 )
    ++*(_DWORD *)(v177 + 8);
  v241 = v177;
  sub_D50200(v469.m128_i64[0], v469.m128_i64[1]);
  v477.m128i_i64[0] = 0;
  v469.m128_u64[0] = v241;
  v241 = *(_QWORD *)(a1 + 8);
  v477.m128i_i64[1] = v241;
  v178 = sub_D50430(a1 + 232, v171);
  v179 = v178;
  v228 = _mm_loadh_ps((const double *)&v293);
  if ( v178 )
    ++*(_DWORD *)(v178 + 8);
  sub_D50200(0, v241);
  sub_D81DD0(a1 + 16, v469.m128_u64[0], v179, &v477);
  v180 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v481 = 0;
  *(_QWORD *)&v481[2] = v180;
  sub_D51DB0(a1, v372, v290, v292, v238, v181);
  v182 = *(_QWORD *)(a1 + 8);
  v183 = _mm_load_si128((const __m128i *)&v228);
  v465 = 0;
  v466 = v182;
  v184 = *(_QWORD *)(v326 + 40);
  v468.m128_u64[0] = v283;
  v330 = v183;
  sub_D66E50((_QWORD *)a1, v184, v330.m128i_i64, (__int64 *)v229, (__int64 *)&v469, v223, &v465);
  v185 = v465;
  v186 = v466;
  sub_D51DB0(a1, v477.m128i_i64[0], *(__int64 *)v481, v465, &v402, v187);
  sub_D51DB0(a1, v386, v400, v402, (__int64 *)v329, v188);
  sub_D51DB0(a1, v384, v251, v329->exception_class, (__int64 *)v329, v189);
  sub_D51DB0(a1, v382, v396, v329->exception_class, (__int64 *)v329, v190);
  sub_D51DB0(a1, v380, v394, v329->exception_class, (__int64 *)v329, v191);
  sub_D51DB0(a1, v378, v392, v329->exception_class, (__int64 *)v329, v192);
  sub_D51DB0(a1, v376, v390, v329->exception_class, (__int64 *)v329, v193);
  sub_D51DB0(a1, *(__int64 *)v374, v250, v329->exception_class, (__int64 *)v329, v194);
  sub_D50200(v185, v186);
  sub_D50200(*(__int64 *)v481, *(__int64 *)&v481[2]);
  sub_D50200(v179, v241);
  sub_D50200(v477.m128i_i64[0], v477.m128i_i64[1]);
  v195 = v320;
  sub_D50200((__int64)v328, v320);
  sub_D50200(v278, v195);
  sub_D50200(v272, v195);
  sub_D50200(v240, v195);
  sub_D50200(v262, v195);
  v196 = *(_QWORD *)v319;
  sub_D50200(v280, *(__int64 *)v319);
  sub_D50200((__int64)v275, v196);
  sub_D50200(v273, v196);
  sub_D50200(*(__int64 *)v307, v196);
  sub_D50200(v263, v196);
  v197 = (__int64)v325;
  sub_D50200(*(__int64 *)v306, (__int64)v325);
  sub_D50200((__int64)v305, v197);
  sub_D50200((__int64)v304, v197);
  sub_D50200(v476.m128i_i64[0], v476.m128i_i64[1]);
  sub_D50200(v269, v249);
  sub_D50200(v254, v197);
  v198 = v285;
  sub_D50200((__int64)v302, v285);
  sub_D50200(v255, v198);
  sub_D50200(v260, v242);
  v199 = v327;
  sub_D50200(v270, v327);
  sub_D50200(v261, v199);
  sub_D50200(v253, v199);
  sub_D50200(v282, v199);
  sub_D50200(v279, v199);
  sub_D50200(v274, v199);
  sub_D50200(v475.m128i_i64[0], v475.m128i_i64[1]);
  sub_D50200(v474.m128i_i64[0], v474.m128i_i64[1]);
  v200 = v286;
  sub_D50200(v268, v286);
  sub_D50200(*(__int64 *)v310, v200);
  v201 = (__int64)v321;
  sub_D50200(v296, (__int64)v321);
  sub_D50200(v252, v201);
  sub_D50200(v277, v201);
  sub_D50200(v473.m128_i64[0], v473.m128_i64[1]);
  sub_D50200(v472.m128_i64[0], v472.m128_i64[1]);
  v202 = (__int64)v322;
  sub_D50200(v281, (__int64)v322);
  sub_D50200(v276, v202);
  sub_D50200(v294, v202);
  sub_D50200(v303, v202);
  v203 = v287;
  sub_D50200(v267, v287);
  sub_D50200(v298, v203);
  sub_D50200(v471.m128_i64[0], v471.m128_i64[1]);
  sub_D50200(v470.m128_i64[0], v470.m128_i64[1]);
  sub_D50200(v469.m128_i64[0], v469.m128_i64[1]);
  sub_D50200(v283, v243);
  sub_D50200(v467.m128_i64[0], v467.m128_i64[1]);
  sub_D50200(v458.m128i_i64[0], v458.m128i_i64[1]);
  sub_D50200(v456, v457);
  sub_D50200(v454, v455);
  sub_D50200(v452, v453);
  sub_D50200(v450, v451);
  sub_D50200(v256, v244);
  sub_D50200(v300, v245);
  v204 = v312;
  sub_D50200(v311, v312);
  sub_D50200(v295, v204);
  sub_D50200(v297, v204);
  v205 = v313;
  sub_D50200(v309, v313);
  sub_D50200(v264, v205);
  sub_D50200(v257, v205);
  v206 = v288;
  sub_D50200(v265, v288);
  sub_D50200(v258, v206);
  v207 = v308;
  sub_D50200(v271, v308);
  sub_D50200(v266, v207);
  sub_D50200(v259, v207);
  sub_D50200(v447, v448);
  sub_D50200(v445, v446);
  sub_D50200(v444.m128i_i64[0], v444.m128i_i64[1]);
  sub_D50200(v291, v248);
  sub_D50200(v440, v441);
  sub_D50200(v438, v439);
  sub_D50200(v436, v437);
  sub_D50200(v247, v233);
  sub_D50200(v432, v433);
  sub_D50200(v430, v431);
  sub_D50200(v428, v429);
  sub_D50200(v246, v231);
  v208 = v289;
  sub_D50200(v301, v289);
  sub_D50200(v299, v208);
  sub_D50200(v239, (__int64)v230);
  sub_D50200(v424, v425);
  sub_D50200(v422, v423);
  sub_D50200(v420, v421);
  sub_D50200(v418, v419);
  sub_D50200(v416, v417);
  sub_D50200(v414, v415);
  sub_D50200(v412, v413);
  sub_D50200(v410, v411);
  sub_D50200(v408, v409);
  sub_D50200(v406, v407);
  sub_D50200(v404, v405);
  sub_D50200(v402, v403);
  sub_D50200(v400, v401);
  sub_D50200(v251, v28);
  sub_D50200(v396, v397);
  sub_D50200(v394, v395);
  sub_D50200(v392, v393);
  sub_D50200(v390, v391);
  sub_D50200(v250, v237);
  sub_D50200(v386, v387);
  sub_D50200(v384, v385);
  sub_D50200(v382, v383);
  sub_D50200(v380, v381);
  sub_D50200(v378, v379);
  sub_D50200(v376, v377);
  sub_D50200(*(__int64 *)v374, v375);
  sub_D50200(v372, v373);
  sub_D50200(v370, v371);
  sub_D50200(v368, v369);
  sub_D50200(v366, v367);
  sub_D50200(*(__int64 *)v364, v365);
  sub_D50200(v362, v363);
  sub_D50200(v360, v361);
  sub_D50200(v358, v359);
  sub_D50200(v356, v357);
  sub_D50200(*(__int64 *)v354, v355);
  sub_D50200(v352, v353);
  sub_D50200(v350, v351);
  sub_D50200(v348, v349);
  sub_D50200(v346, v347);
  sub_D50200(*(__int64 *)v344, v345);
  sub_D50200(v342, v343);
  sub_D50200(v318, v317);
  sub_D50200(v316, v236);
  sub_D50200(v292, v235);
  sub_D50200(v290, v234);
  sub_D50200(v323, (__int64)v232);
  v209 = v293;
  sub_D50200(v324, v293);
  sub_D50200(v314, v209);
  sub_D50200(v315, v209);
  return sub_D50200(v284, v209);
}

