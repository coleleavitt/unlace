__int64 __fastcall sub_D7DEA0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rsi
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rax
  __int64 v45; // r14
  __m128i v46; // xmm0
  int v47; // r9d
  __int64 v48; // rax
  _QWORD *v49; // rax
  void *v50; // rdi
  __int64 v51; // rax
  void *v52; // r14
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // r9d
  __int64 v56; // rcx
  int v57; // r9d
  int v58; // r9d
  __int64 v59; // rax
  int v60; // r9d
  int v61; // r9d
  int v62; // r9d
  int v63; // r9d
  __int64 v64; // rsi
  int v65; // r9d
  int v66; // eax
  __int64 v67; // rax
  __m128 v68; // xmm0
  void *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned int v72; // r14d
  __int64 v73; // rdi
  void *v74; // r13
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rdi
  __m128 v78; // xmm0
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // r13
  __int64 v93; // rax
  __int64 v94; // rax
  int v95; // ecx
  int v96; // r8d
  int v97; // r9d
  int v98; // eax
  __int64 v99; // r13
  __int64 v100; // rax
  __int64 v101; // rax
  int v102; // ecx
  int v103; // r8d
  int v104; // r9d
  int v105; // eax
  __int64 v106; // r14
  __int64 v107; // rax
  unsigned __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // r12
  __int64 v111; // rax
  __int64 v112; // r13
  __int64 v113; // rax
  _DWORD *v114; // rax
  __int64 v115; // r13
  __int64 v116; // rax
  __int64 v117; // r13
  __int64 v118; // rax
  __int64 v119; // r13
  __int64 v120; // rax
  __int64 v121; // r14
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // r14
  __int64 v126; // rdi
  __int64 v127; // rax
  __int64 v128; // r14
  __int64 *v129; // r15
  int v130; // r9d
  int v131; // r9d
  int v132; // r9d
  int v133; // r9d
  int v134; // r9d
  __int64 v135; // rbx
  __int64 v136; // rbx
  __int64 v137; // rbx
  __int64 v138; // rbx
  __int64 v139; // rbx
  __int64 v140; // rbx
  __int64 v141; // rbx
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rdi
  void *v146; // r14
  __int64 v147; // rax
  __int64 v148; // rsi
  __int64 v149; // rdi
  bool v150; // zf
  __int64 v151; // rax
  __int64 v152; // rsi
  __int64 v153; // rdi
  void *v154; // [rsp+0h] [rbp-670h]
  void *v155; // [rsp+0h] [rbp-670h]
  int v156; // [rsp+0h] [rbp-670h]
  __int64 v157; // [rsp+8h] [rbp-668h]
  __int64 v158; // [rsp+8h] [rbp-668h]
  __int64 v159; // [rsp+8h] [rbp-668h]
  int v160; // [rsp+Ch] [rbp-664h]
  int v162; // [rsp+10h] [rbp-660h]
  int v163; // [rsp+10h] [rbp-660h]
  __int64 *v164; // [rsp+10h] [rbp-660h]
  __int64 v165; // [rsp+18h] [rbp-658h]
  __int64 v166; // [rsp+18h] [rbp-658h]
  __int64 v167; // [rsp+18h] [rbp-658h]
  __int64 v168; // [rsp+18h] [rbp-658h]
  int v169; // [rsp+20h] [rbp-650h]
  int v170; // [rsp+20h] [rbp-650h]
  __int64 v171; // [rsp+20h] [rbp-650h]
  __int64 v172; // [rsp+20h] [rbp-650h]
  __int64 v173; // [rsp+28h] [rbp-648h]
  __int64 v174; // [rsp+28h] [rbp-648h]
  __int64 v175; // [rsp+28h] [rbp-648h]
  __int64 v176; // [rsp+28h] [rbp-648h]
  __int64 v177; // [rsp+30h] [rbp-640h]
  __int64 v178; // [rsp+30h] [rbp-640h]
  __int64 v179; // [rsp+30h] [rbp-640h]
  __int64 v180; // [rsp+30h] [rbp-640h]
  __int64 v181; // [rsp+38h] [rbp-638h]
  __int64 v182; // [rsp+38h] [rbp-638h]
  __int64 v183; // [rsp+38h] [rbp-638h]
  __int64 v184; // [rsp+40h] [rbp-630h]
  __int64 v185; // [rsp+40h] [rbp-630h]
  __int64 v186; // [rsp+40h] [rbp-630h]
  __int64 v187; // [rsp+40h] [rbp-630h]
  __int64 v188; // [rsp+48h] [rbp-628h]
  __int64 v189; // [rsp+48h] [rbp-628h]
  __int64 v190; // [rsp+48h] [rbp-628h]
  __int64 v191; // [rsp+48h] [rbp-628h]
  __int64 v192; // [rsp+50h] [rbp-620h]
  __int64 v193; // [rsp+50h] [rbp-620h]
  __int64 v194; // [rsp+50h] [rbp-620h]
  __int64 v195; // [rsp+50h] [rbp-620h]
  __int64 v196; // [rsp+58h] [rbp-618h]
  __int64 v197; // [rsp+58h] [rbp-618h]
  __int64 v198; // [rsp+58h] [rbp-618h]
  __int64 v199; // [rsp+58h] [rbp-618h]
  __int64 v200; // [rsp+60h] [rbp-610h]
  __int64 v201; // [rsp+60h] [rbp-610h]
  __int64 v202; // [rsp+60h] [rbp-610h]
  __int64 v203; // [rsp+60h] [rbp-610h]
  __int64 v204; // [rsp+68h] [rbp-608h]
  __int64 v205; // [rsp+68h] [rbp-608h]
  __int64 v206; // [rsp+68h] [rbp-608h]
  __int64 v207; // [rsp+68h] [rbp-608h]
  __int64 v208; // [rsp+70h] [rbp-600h]
  __int64 v209; // [rsp+70h] [rbp-600h]
  __int64 v210; // [rsp+70h] [rbp-600h]
  __int64 v211; // [rsp+70h] [rbp-600h]
  __int64 v212; // [rsp+78h] [rbp-5F8h]
  __int64 v213; // [rsp+78h] [rbp-5F8h]
  __int64 v214; // [rsp+78h] [rbp-5F8h]
  __int64 v215; // [rsp+78h] [rbp-5F8h]
  __int64 v216; // [rsp+80h] [rbp-5F0h]
  __int64 v217; // [rsp+80h] [rbp-5F0h]
  __int64 v218; // [rsp+80h] [rbp-5F0h]
  __int64 v219; // [rsp+80h] [rbp-5F0h]
  __int64 v220; // [rsp+88h] [rbp-5E8h]
  __int64 v221; // [rsp+88h] [rbp-5E8h]
  __int64 v222; // [rsp+88h] [rbp-5E8h]
  __int64 v223; // [rsp+88h] [rbp-5E8h]
  __int64 v224; // [rsp+90h] [rbp-5E0h]
  __int64 v225; // [rsp+90h] [rbp-5E0h]
  __int64 v226; // [rsp+90h] [rbp-5E0h]
  __int64 v227; // [rsp+98h] [rbp-5D8h]
  __int64 v228; // [rsp+A0h] [rbp-5D0h]
  __int64 v229; // [rsp+A8h] [rbp-5C8h]
  __int64 v230; // [rsp+B0h] [rbp-5C0h]
  __int64 v231; // [rsp+B8h] [rbp-5B8h]
  __int64 v232; // [rsp+C0h] [rbp-5B0h] BYREF
  __int64 v233; // [rsp+C8h] [rbp-5A8h] BYREF
  __int64 v234; // [rsp+D0h] [rbp-5A0h]
  __int64 v235; // [rsp+D8h] [rbp-598h]
  __int64 v236; // [rsp+E0h] [rbp-590h]
  __int64 v237; // [rsp+E8h] [rbp-588h]
  __int64 v238; // [rsp+F0h] [rbp-580h]
  __int64 v239; // [rsp+F8h] [rbp-578h]
  __int64 v240; // [rsp+100h] [rbp-570h]
  __int64 v241; // [rsp+108h] [rbp-568h]
  __int64 v242; // [rsp+110h] [rbp-560h]
  __int64 v243; // [rsp+118h] [rbp-558h]
  __int64 v244; // [rsp+120h] [rbp-550h]
  __int64 v245; // [rsp+128h] [rbp-548h]
  __int64 v246; // [rsp+130h] [rbp-540h]
  __int64 v247; // [rsp+138h] [rbp-538h]
  __int64 v248; // [rsp+140h] [rbp-530h]
  __int64 v249; // [rsp+148h] [rbp-528h]
  __int64 v250; // [rsp+150h] [rbp-520h]
  __int64 *v251; // [rsp+158h] [rbp-518h]
  __int64 v252; // [rsp+160h] [rbp-510h]
  __int64 v253; // [rsp+168h] [rbp-508h]
  __int64 v254; // [rsp+170h] [rbp-500h]
  __int64 v255; // [rsp+178h] [rbp-4F8h]
  __int64 v256; // [rsp+180h] [rbp-4F0h]
  __int64 v257; // [rsp+188h] [rbp-4E8h]
  __int64 v258; // [rsp+190h] [rbp-4E0h]
  __int64 v259; // [rsp+198h] [rbp-4D8h]
  __int64 v260; // [rsp+1A0h] [rbp-4D0h]
  __int64 v261; // [rsp+1A8h] [rbp-4C8h]
  __int64 v262; // [rsp+1B0h] [rbp-4C0h]
  __int64 v263; // [rsp+1B8h] [rbp-4B8h]
  __int64 v264; // [rsp+1C0h] [rbp-4B0h]
  __int64 v265; // [rsp+1C8h] [rbp-4A8h] BYREF
  __int64 v266; // [rsp+1D0h] [rbp-4A0h]
  __int64 v267; // [rsp+1D8h] [rbp-498h]
  __int64 v268; // [rsp+1E0h] [rbp-490h]
  __int64 *v269; // [rsp+1E8h] [rbp-488h]
  __int64 v270; // [rsp+1F0h] [rbp-480h]
  __int64 v271; // [rsp+1F8h] [rbp-478h] BYREF
  __int64 v272; // [rsp+200h] [rbp-470h]
  __int64 v273; // [rsp+208h] [rbp-468h]
  __int64 v274; // [rsp+210h] [rbp-460h]
  __int64 v275; // [rsp+218h] [rbp-458h]
  __m128 *v276; // [rsp+220h] [rbp-450h]
  __int64 v277; // [rsp+228h] [rbp-448h]
  __int64 v278; // [rsp+230h] [rbp-440h]
  __m128 *v279; // [rsp+238h] [rbp-438h]
  __m128 *v280; // [rsp+240h] [rbp-430h]
  void *v281; // [rsp+248h] [rbp-428h]
  __int64 *v282; // [rsp+250h] [rbp-420h]
  __int64 *v283; // [rsp+258h] [rbp-418h]
  unsigned int v284; // [rsp+260h] [rbp-410h]
  unsigned int v285; // [rsp+264h] [rbp-40Ch]
  __m128 *v286; // [rsp+268h] [rbp-408h]
  int v287[2]; // [rsp+270h] [rbp-400h]
  __int64 v288; // [rsp+278h] [rbp-3F8h]
  void *v289; // [rsp+280h] [rbp-3F0h]
  __int64 v290; // [rsp+288h] [rbp-3E8h]
  __m128i v291; // [rsp+290h] [rbp-3E0h] BYREF
  __int64 v292; // [rsp+2A0h] [rbp-3D0h]
  struct _Unwind_Exception *v293; // [rsp+2A8h] [rbp-3C8h]
  int v294[2]; // [rsp+2B0h] [rbp-3C0h] BYREF
  int v295[2]; // [rsp+2B8h] [rbp-3B8h] BYREF
  __int64 v296; // [rsp+2C0h] [rbp-3B0h] BYREF
  __int64 v297; // [rsp+2C8h] [rbp-3A8h]
  __int64 v298; // [rsp+2D0h] [rbp-3A0h] BYREF
  __int64 v299; // [rsp+2D8h] [rbp-398h]
  __int64 v300; // [rsp+2E0h] [rbp-390h] BYREF
  __int64 v301; // [rsp+2E8h] [rbp-388h]
  __int64 v302; // [rsp+2F0h] [rbp-380h] BYREF
  __int64 v303; // [rsp+2F8h] [rbp-378h]
  __int64 v304; // [rsp+300h] [rbp-370h] BYREF
  __int64 v305; // [rsp+308h] [rbp-368h]
  __int64 v306; // [rsp+310h] [rbp-360h] BYREF
  __int64 v307; // [rsp+318h] [rbp-358h]
  __int64 v308; // [rsp+320h] [rbp-350h] BYREF
  __int64 v309; // [rsp+328h] [rbp-348h]
  __int64 v310; // [rsp+330h] [rbp-340h] BYREF
  __int64 v311; // [rsp+338h] [rbp-338h]
  int v312[2]; // [rsp+340h] [rbp-330h] BYREF
  __int64 v313; // [rsp+348h] [rbp-328h]
  __int64 v314; // [rsp+350h] [rbp-320h] BYREF
  __int64 v315; // [rsp+358h] [rbp-318h]
  __int64 v316; // [rsp+360h] [rbp-310h] BYREF
  __int64 v317; // [rsp+368h] [rbp-308h]
  __int64 v318; // [rsp+370h] [rbp-300h] BYREF
  __int64 v319; // [rsp+378h] [rbp-2F8h]
  __int64 v320; // [rsp+380h] [rbp-2F0h] BYREF
  __int64 v321; // [rsp+388h] [rbp-2E8h]
  int v322[2]; // [rsp+390h] [rbp-2E0h] BYREF
  __int64 v323; // [rsp+398h] [rbp-2D8h]
  __int64 v324; // [rsp+3A0h] [rbp-2D0h] BYREF
  __int64 v325; // [rsp+3A8h] [rbp-2C8h]
  __int64 v326; // [rsp+3B0h] [rbp-2C0h] BYREF
  __int64 v327; // [rsp+3B8h] [rbp-2B8h]
  __int64 v328; // [rsp+3C0h] [rbp-2B0h] BYREF
  __int64 v329; // [rsp+3C8h] [rbp-2A8h]
  __int64 v330; // [rsp+3D0h] [rbp-2A0h] BYREF
  __int64 v331; // [rsp+3D8h] [rbp-298h]
  __int64 v332; // [rsp+3E0h] [rbp-290h] BYREF
  __int64 v333; // [rsp+3E8h] [rbp-288h]
  __int64 v334; // [rsp+3F0h] [rbp-280h] BYREF
  __int64 v335; // [rsp+3F8h] [rbp-278h]
  __m128i v336; // [rsp+400h] [rbp-270h] BYREF
  __m128i v337; // [rsp+410h] [rbp-260h] BYREF
  __int64 v338; // [rsp+420h] [rbp-250h] BYREF
  __int64 v339; // [rsp+428h] [rbp-248h]
  __int64 v340; // [rsp+430h] [rbp-240h] BYREF
  __int64 v341; // [rsp+438h] [rbp-238h]
  __int64 v342; // [rsp+440h] [rbp-230h] BYREF
  __int64 v343; // [rsp+448h] [rbp-228h]
  __int64 v344; // [rsp+450h] [rbp-220h] BYREF
  __int64 v345; // [rsp+458h] [rbp-218h]
  __int64 v346; // [rsp+460h] [rbp-210h] BYREF
  __int64 v347; // [rsp+468h] [rbp-208h]
  __int64 v348; // [rsp+470h] [rbp-200h] BYREF
  __int64 v349; // [rsp+478h] [rbp-1F8h]
  __int64 v350; // [rsp+480h] [rbp-1F0h] BYREF
  __int64 v351; // [rsp+488h] [rbp-1E8h]
  __int64 v352; // [rsp+490h] [rbp-1E0h] BYREF
  __int64 v353; // [rsp+498h] [rbp-1D8h]
  __int64 v354; // [rsp+4A0h] [rbp-1D0h] BYREF
  __int64 v355; // [rsp+4A8h] [rbp-1C8h]
  __int64 v356; // [rsp+4B0h] [rbp-1C0h] BYREF
  __int64 v357; // [rsp+4B8h] [rbp-1B8h]
  __int64 v358; // [rsp+4C0h] [rbp-1B0h] BYREF
  __int64 v359; // [rsp+4C8h] [rbp-1A8h]
  __int64 v360; // [rsp+4D0h] [rbp-1A0h] BYREF
  __int64 v361; // [rsp+4D8h] [rbp-198h]
  __int64 v362; // [rsp+4E0h] [rbp-190h] BYREF
  __int64 v363; // [rsp+4E8h] [rbp-188h]
  __int64 v364; // [rsp+4F0h] [rbp-180h] BYREF
  __int64 v365; // [rsp+4F8h] [rbp-178h]
  __int64 v366; // [rsp+500h] [rbp-170h] BYREF
  __int64 v367; // [rsp+508h] [rbp-168h]
  __int64 v368; // [rsp+510h] [rbp-160h] BYREF
  __int64 v369; // [rsp+518h] [rbp-158h]
  __int64 v370; // [rsp+520h] [rbp-150h] BYREF
  __int64 v371; // [rsp+528h] [rbp-148h]
  __int64 v372; // [rsp+530h] [rbp-140h] BYREF
  __int64 v373; // [rsp+538h] [rbp-138h]
  __m128 v374; // [rsp+540h] [rbp-130h] BYREF
  __int64 v375; // [rsp+550h] [rbp-120h] BYREF
  __int64 v376; // [rsp+558h] [rbp-118h]
  struct _Unwind_Exception *v377; // [rsp+560h] [rbp-110h] BYREF
  void *v378; // [rsp+568h] [rbp-108h]
  __m128 v379; // [rsp+570h] [rbp-100h] BYREF
  __int64 v380; // [rsp+580h] [rbp-F0h] BYREF
  __int64 v381; // [rsp+588h] [rbp-E8h]
  __int64 v382; // [rsp+590h] [rbp-E0h] BYREF
  __int64 v383; // [rsp+598h] [rbp-D8h]
  int v384[2]; // [rsp+5A0h] [rbp-D0h] BYREF
  __int64 v385; // [rsp+5A8h] [rbp-C8h]
  __m128 v386; // [rsp+5B0h] [rbp-C0h] BYREF
  __m128 v387; // [rsp+5C0h] [rbp-B0h] BYREF
  __m128 v388; // [rsp+5D0h] [rbp-A0h] BYREF
  __int64 v389; // [rsp+5E0h] [rbp-90h] BYREF
  __int64 v390; // [rsp+5E8h] [rbp-88h]
  __m128 v391; // [rsp+5F0h] [rbp-80h] BYREF
  __int64 v392; // [rsp+600h] [rbp-70h] BYREF
  __int64 v393; // [rsp+608h] [rbp-68h]
  __int64 v394; // [rsp+610h] [rbp-60h] BYREF
  __int64 v395; // [rsp+618h] [rbp-58h]
  __int64 v396; // [rsp+620h] [rbp-50h] BYREF
  __int64 v397; // [rsp+628h] [rbp-48h]
  _QWORD v398[8]; // [rsp+630h] [rbp-40h] BYREF

  v9 = *(_QWORD *)(a1 + 8);
  v10 = *a3;
  v296 = 0;
  v297 = v9;
  v298 = 0;
  v299 = v9;
  v300 = 0;
  v301 = v9;
  v302 = 0;
  v303 = v9;
  v304 = 0;
  v305 = v9;
  sub_D54E20(a1, v10, 1u, &v296);
  sub_D54E20(a1, *a3, 0, &v298);
  v11 = *a3;
  v269 = &v300;
  sub_D54E20(a1, v11, 2u, &v300);
  v12 = *a3;
  v251 = &v302;
  sub_D504D0(a1, v12, &v302);
  sub_D54E20(a1, *a3, 4u, &v304);
  v13 = *(_QWORD *)(a1 + 8);
  v306 = 0;
  v239 = v13;
  v307 = v13;
  sub_D5B8E0(a1, a2, &v306);
  v308 = 0;
  v237 = v306;
  v309 = v13;
  v200 = v307;
  sub_D51670(a1, a2, &v308);
  v310 = 0;
  v267 = v308;
  v216 = v309;
  v311 = v13;
  sub_D518E0(a1, a2, &v310);
  v14 = *a4;
  *(_QWORD *)v312 = 0;
  v268 = v310;
  v314 = 0;
  v228 = v311;
  v15 = *(_QWORD *)(a1 + 8);
  v316 = 0;
  v313 = v15;
  v315 = v15;
  v317 = v15;
  sub_D52DE0(
    a1,
    v14,
    (int)v312,
    v16,
    v17,
    v18,
    v154,
    v157,
    a5,
    v165,
    v169,
    v173,
    v177,
    v181,
    v184,
    v188,
    v192,
    v196,
    v200,
    v204,
    v208,
    v212,
    v216,
    v220,
    v224);
  sub_D52AC0(a1, *a4, &v314);
  sub_D52C50(a1, *a4, &v316);
  v19 = *(_QWORD *)(a1 + 8);
  v20 = *a4;
  v318 = 0;
  v288 = v19;
  v319 = v19;
  v320 = 0;
  v321 = v19;
  *(_QWORD *)v322 = 0;
  v323 = v19;
  v332 = 0;
  v333 = v19;
  sub_D5BB00(a1, v20, &v318);
  if ( v237 )
  {
    v326 = 0;
    v327 = v288;
    sub_D50220(&v326, &v306);
    v189 = v326;
    v193 = v327;
  }
  else
  {
    v189 = 0;
    v193 = v288;
  }
  sub_D61A80(a1, *a4, &v320);
  v246 = *a4;
  if ( v246 )
  {
    v328 = 0;
    v329 = v288;
    sub_D50220(&v328, a4);
    v24 = *a4;
    v246 = v328;
    sub_D52DE0(
      a1,
      v24,
      (int)v322,
      v25,
      v26,
      v27,
      v155,
      v158,
      v162,
      v166,
      v170,
      v174,
      v178,
      v182,
      v185,
      v189,
      v193,
      v197,
      v201,
      v205,
      v209,
      v213,
      v217,
      v221,
      v329);
  }
  else
  {
    sub_D52DE0(
      a1,
      0,
      (int)v322,
      v21,
      v22,
      v23,
      v155,
      v158,
      v162,
      v166,
      v170,
      v174,
      v178,
      v182,
      v185,
      v189,
      v193,
      v197,
      v201,
      v205,
      v209,
      v213,
      v217,
      v221,
      v288);
  }
  v247 = *a4;
  if ( v247 )
  {
    v330 = 0;
    v331 = v288;
    sub_D50220(&v330, a4);
    v247 = v330;
    v229 = v331;
  }
  else
  {
    v229 = v288;
  }
  v265 = *(_QWORD *)(a1 + 8);
  v28 = sub_D50390(a1 + 232, 1u);
  v290 = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v29 = sub_D50430(a1 + 232, 1u);
  v272 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  v287[0] = sub_15C5540((int)a1 + 432, a2, v30, v31, v32, v33);
  LODWORD(v292) = sub_15C5560(a1 + 432, a2);
  v34 = *(_QWORD *)(a1 + 8);
  v340 = 0;
  v35 = *a4;
  v341 = v34;
  v343 = v34;
  v345 = v34;
  v339 = v34;
  v342 = 0;
  v344 = 0;
  v338 = 0;
  v282 = &v342;
  v283 = &v338;
  sub_D59470((_QWORD *)a1, v35, &v338, &v340, &v342, &v344, 1);
  v346 = 0;
  v206 = v339;
  v36 = *(_QWORD *)(a1 + 8);
  v236 = v338;
  v186 = v36;
  v347 = v36;
  v37 = sub_15E1B70(v36);
  v270 = v37;
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  sub_D51DB0(a1, v37, v267, v268, &v346, v38);
  v39 = *(_QWORD *)(a1 + 8);
  v40 = *a4;
  v348 = 0;
  v349 = v39;
  v350 = 0;
  v351 = v39;
  sub_D548C0(
    a1,
    v40,
    (__int64)&v350,
    v156,
    v159,
    v163,
    v167,
    v171,
    v175,
    v179,
    v39,
    v186,
    v190,
    v194,
    v198,
    v202,
    v206,
    v210,
    v214,
    v218,
    v222,
    v225);
  v284 = v287[0] - 1;
  v41 = sub_D81CD0(a1 + 232, (unsigned int)(v287[0] - 1), (unsigned int)(v287[0] - 1), v342);
  v253 = v41;
  if ( v41 )
    ++*(_DWORD *)(v41 + 8);
  v293 = (struct _Unwind_Exception *)(a1 + 16);
  sub_D81DD0(a1 + 16, v41, v290, &v348);
  v42 = sub_15E1B70(*(_QWORD *)(a1 + 8));
  v262 = v42;
  v43 = (__m128i)_mm_loadh_ps((const double *)&v265);
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  v44 = *(_QWORD *)(a1 + 8);
  v356 = 0;
  v211 = v44;
  v45 = v44;
  v357 = v44;
  v358 = 0;
  v359 = v44;
  v360 = 0;
  v361 = v44;
  v362 = 0;
  v363 = v44;
  v364 = 0;
  v365 = v44;
  v366 = 0;
  v367 = v44;
  v368 = 0;
  v369 = v44;
  v352 = 0;
  v353 = v44;
  v291 = v43;
  v337 = v43;
  sub_D7DAF0(a1, a2, (__int64)&v337, &v352);
  v46 = _mm_load_si128(&v291);
  v354 = 0;
  v266 = v352;
  v355 = v45;
  v199 = v353;
  v336 = v46;
  sub_D7DAF0(a1, a2, (__int64)&v336, &v354);
  v223 = v355;
  v238 = v354;
  v291.m128i_i64[0] = (__int64)&v356;
  sub_D51DB0(a1, v270, v354, v266, &v356, v47);
  v180 = *(_QWORD *)(a1 + 8);
  v48 = *(_QWORD *)(a1 + 440);
  v285 = v292 - 1;
  v49 = sub_D59FE0((__int64 *)(v48 + 760), (int)v292 - 1);
  v396 = 0;
  v397 = 0;
  v398[0] = 1;
  v50 = qword_1C7F2C0;
  v398[1] = 0;
  if ( (*((_BYTE *)v49 + 4) & 1) != 0 )
  {
    v289 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v396, v49);
    v50 = v289;
  }
  else
  {
    LODWORD(v396) = *(_DWORD *)v49;
  }
  sub_182CBA0(v50, v398);
  BYTE4(v398[0]) &= ~1u;
  LODWORD(v398[0]) = 1;
  v281 = &v396;
  v51 = sub_1674520(a1 + 232, &v396, (unsigned int)v292);
  v242 = v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  v52 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v281);
  sub_182CBA0(v52, v398);
  sub_D50390(a1 + 232, v287[0]);
  v53 = sub_15E1A70(*(_QWORD *)(a1 + 240));
  v257 = v53;
  if ( v53 )
    ++*(_DWORD *)(v53 + 8);
  sub_D81DD0(v293, v340, v242, &v362);
  sub_D81DD0(v293, v342, v257, &v364);
  v276 = &v386;
  v386 = _mm_loadh_ps((const double *)&v364);
  sub_D502F0(v293, &v386, &v366);
  v286 = &v387;
  v387 = _mm_loadh_ps((const double *)&v298);
  sub_D502F0(v293, &v387, &v358);
  v280 = &v388;
  v388 = _mm_loadh_ps((const double *)&v296);
  sub_D502F0(v293, &v388, &v360);
  sub_D81BF0(a1 + 232, 2, (unsigned int)v287[0]);
  sub_15E1A70(*(_QWORD *)(a1 + 240));
  v54 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v263 = v54;
  if ( v54 )
    ++*(_DWORD *)(v54 + 8);
  v56 = v368;
  if ( v356 != v368 )
  {
    sub_D50220(&v368, (__int64 *)v291.m128i_i64[0]);
    v56 = v368;
  }
  sub_D51DB0(a1, v263, v346, v56, &v368, v55);
  sub_D51DB0(a1, v360, v356, v368, &v368, v57);
  sub_D51DB0(a1, v358, v346, v368, &v368, v58);
  v59 = *(_QWORD *)(a1 + 8);
  v370 = 0;
  v371 = v59;
  v372 = 0;
  v373 = v59;
  sub_D51DB0(a1, v316, v267, v266, &v372, v60);
  sub_D51DB0(a1, v316, v238, v268, &v370, v61);
  sub_D51DB0(a1, v300, v372, v368, &v332, v62);
  sub_D51DB0(a1, v302, v370, v332, &v332, v63);
  v64 = v304;
  sub_D51DB0(a1, v304, v346, v332, &v332, v65);
  v233 = *(_QWORD *)(a1 + 8);
  v66 = sub_180B190(v285, v64);
  if ( v284 >= v66 + 1 )
  {
    sub_D81BF0(a1 + 232, v285, (unsigned int)v287[0]);
    v67 = sub_15E1B70(*(_QWORD *)(a1 + 240));
    v241 = v67;
    if ( v67 )
      goto LABEL_29;
  }
  else
  {
    v67 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL);
    v241 = v67;
    if ( v67 )
    {
LABEL_29:
      ++*(_DWORD *)(v67 + 8);
      v68 = _mm_loadh_ps((const double *)&v233);
      v324 = 0;
      v325 = v288;
      v374 = v68;
      sub_D50220(&v324, (__int64 *)&v374);
      v243 = v324;
      v230 = v325;
      goto LABEL_30;
    }
  }
  v243 = 0;
  v230 = v288;
LABEL_30:
  v248 = *a4;
  if ( v248 )
  {
    v334 = 0;
    v335 = v288;
    sub_D50220(&v334, a4);
    v248 = v334;
    v231 = v335;
  }
  else
  {
    v231 = v288;
  }
  v69 = *(void **)(a1 + 8);
  v386.m128_u64[0] = 0;
  v289 = v69;
  v386.m128_u64[1] = (unsigned __int64)v69;
  if ( v236 )
  {
    v375 = 0;
    v376 = (__int64)v69;
    sub_D50220(&v375, v283);
    v277 = v375;
    v168 = v376;
  }
  else
  {
    v168 = (__int64)v69;
    v277 = 0;
  }
  v255 = v342;
  if ( v342 )
  {
    v377 = nullptr;
    v378 = v289;
    sub_D50220((__int64 *)&v377, v282);
    v255 = (__int64)v377;
    v289 = v378;
  }
  v176 = *(_QWORD *)(a1 + 8);
  v70 = sub_D50430(a1 + 232, v292);
  v271 = v70;
  if ( v70 )
    ++*(_DWORD *)(v70 + 8);
  v71 = *(_QWORD *)(a1 + 8);
  v72 = v292;
  LOBYTE(v397) = 0;
  v232 = v71;
  v73 = *(_QWORD *)(a1 + 240);
  v74 = v281;
  v160 = v292 - v287[0];
  LODWORD(v396) = v292 - v287[0];
  *(_QWORD *)v294 = v342;
  sub_15DCAD0(v73, (int)v294, 0);
  sub_15D0DF0(v74);
  sub_D81BF0(a1 + 232, v285, v72);
  v75 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v273 = v75;
  if ( v75 )
    ++*(_DWORD *)(v75 + 8);
  v76 = *(_QWORD *)(a1 + 240);
  v389 = v271;
  v390 = v273;
  sub_15E1AF0(v76);
  v77 = *(_QWORD *)(a1 + 240);
  v78 = _mm_loadh_ps((const double *)&v271);
  v279 = &v391;
  v391 = v78;
  sub_15E1AF0(v77);
  v79 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v275 = v79;
  if ( v79 )
    ++*(_DWORD *)(v79 + 8);
  v80 = sub_D81CD0(a1 + 232, (unsigned int)(2 * v292 - 1), (unsigned int)v292, v79);
  v291.m128i_i64[0] = v80;
  if ( v80 )
    ++*(_DWORD *)(v80 + 8);
  v81 = sub_D50160(a1 + 232, v285, v275);
  v283 = (__int64 *)v81;
  if ( v81 )
    ++*(_DWORD *)(v81 + 8);
  v172 = *(_QWORD *)(a1 + 8);
  sub_D50390(a1 + 232, v292);
  v82 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v282 = (__int64 *)v82;
  if ( v82 )
    ++*(_DWORD *)(v82 + 8);
  v83 = *(_QWORD *)(a1 + 8);
  v387.m128_u64[0] = 0;
  v388.m128_u64[0] = 0;
  v278 = v83;
  v387.m128_u64[1] = v83;
  v388.m128_u64[1] = v83;
  v393 = sub_D50430(a1 + 232, v285);
  v84 = *(_QWORD *)(a1 + 240);
  v392 = v290;
  v85 = sub_15E1AF0(v84);
  v274 = v85;
  if ( v85 )
    ++*(_DWORD *)(v85 + 8);
  sub_D50200(0, v278);
  sub_D81DD0(v293, v283, v274, v286);
  v86 = sub_D50160(a1 + 232, 0, v291.m128i_i64[0]);
  v258 = v86;
  if ( v86 )
    ++*(_DWORD *)(v86 + 8);
  sub_D50200(0, v278);
  v286 = *(__m128 **)(a1 + 8);
  v87 = sub_15E1B70((int)v286);
  v252 = v87;
  if ( v87 )
    ++*(_DWORD *)(v87 + 8);
  sub_D50200(0, (__int64)v286);
  v88 = sub_15E1B70(*(_QWORD *)(a1 + 8));
  v254 = v88;
  if ( v88 )
    ++*(_DWORD *)(v88 + 8);
  sub_D50200(0, (__int64)v286);
  v89 = sub_15E1B70(*(_QWORD *)(a1 + 8));
  v259 = v89;
  if ( v89 )
    ++*(_DWORD *)(v89 + 8);
  sub_D50200(0, (__int64)v286);
  v90 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v260 = v90;
  if ( v90 )
    ++*(_DWORD *)(v90 + 8);
  sub_D50200(0, (__int64)v286);
  v91 = sub_15E1BF0(*(_QWORD *)(a1 + 8));
  v261 = v91;
  if ( v91 )
    ++*(_DWORD *)(v91 + 8);
  sub_D50200(0, v278);
  sub_D81E50(v293, v261, v282, v291.m128i_i64[0], v280);
  v92 = *(_QWORD *)(a1 + 8);
  v389 = 0;
  v391.m128_u64[0] = 0;
  v264 = v92;
  v390 = v92;
  v391.m128_u64[1] = v92;
  sub_D50430(a1 + 232, v292);
  v93 = sub_15E1B70(v92);
  v280 = (__m128 *)v93;
  if ( v93 )
    ++*(_DWORD *)(v93 + 8);
  sub_D50200(0, v264);
  v94 = sub_15E1B70(*(_QWORD *)(a1 + 8));
  v256 = v94;
  if ( v94 )
    ++*(_DWORD *)(v94 + 8);
  sub_D50200(0, v264);
  v98 = sub_14DEE90((_DWORD)v293, (_DWORD)v280, (unsigned int)&v389, v95, v96, v97);
  v99 = v389;
  if ( v98 == 5 )
  {
    v151 = sub_15E1A70(*(_QWORD *)(a1 + 16));
    v99 = v151;
    if ( v151 )
      ++*(_DWORD *)(v151 + 8);
    v152 = v389;
    if ( v389 )
    {
      v153 = v390;
      v150 = (*(_DWORD *)(v389 + 8))-- == 1;
      if ( v150 )
        sub_15D7BC0(v153, v152);
    }
    v389 = v99;
  }
  v394 = v99;
  v395 = v256;
  sub_D502F0(v293, &v394, &v389);
  sub_D81E50(v293, v389, v282, v291.m128i_i64[0], v279);
  v100 = *(_QWORD *)(a1 + 8);
  v392 = 0;
  v235 = v100;
  v393 = v100;
  v394 = 0;
  v395 = v100;
  v101 = sub_15E1B70(v100);
  v250 = v101;
  if ( v101 )
    ++*(_DWORD *)(v101 + 8);
  sub_D50200(0, v235);
  v105 = sub_14DEE90((_DWORD)v293, (_DWORD)v280, (unsigned int)&v392, v102, v103, v104);
  v106 = v392;
  if ( v105 == 5 )
  {
    v147 = sub_15E1A70(*(_QWORD *)(a1 + 16));
    v106 = v147;
    if ( v147 )
      ++*(_DWORD *)(v147 + 8);
    v148 = v392;
    if ( v392 )
    {
      v149 = v393;
      v150 = (*(_DWORD *)(v392 + 8))-- == 1;
      if ( v150 )
        sub_15D7BC0(v149, v148);
    }
    v392 = v106;
  }
  v396 = v106;
  v397 = v250;
  sub_D502F0(v293, v281, &v392);
  sub_D81E50(v293, v392, v282, v291.m128i_i64[0], &v394);
  v279 = *(__m128 **)(a1 + 8);
  v107 = sub_15E1B70((int)v279);
  v249 = v107;
  if ( v107 )
    ++*(_DWORD *)(v107 + 8);
  sub_D50200(0, (__int64)v279);
  v244 = v300;
  if ( v300 )
  {
    v380 = 0;
    v381 = (__int64)v279;
    sub_D50220(&v380, v269);
    v244 = v380;
    v215 = v381;
  }
  else
  {
    v215 = (__int64)v279;
  }
  v245 = v302;
  if ( v302 )
  {
    v382 = 0;
    v383 = (__int64)v279;
    sub_D50220(&v382, v251);
    v245 = v382;
    v227 = v383;
  }
  else
  {
    v227 = (__int64)v279;
  }
  v108 = v386.m128_u64[0];
  if ( v291.m128i_i64[0] != v386.m128_u64[0] )
  {
    v379 = _mm_loadh_ps((const double *)&v232);
    sub_D50220((__int64 *)v276, (__int64 *)&v379);
    v108 = v386.m128_u64[0];
  }
  sub_D81E50(v293, v245, v394, v108, v276);
  sub_D81E50(v293, v244, v391.m128_u64[0], v386.m128_u64[0], v276);
  sub_D81E50(v293, v249, v388.m128_u64[0], v386.m128_u64[0], v276);
  v234 = *(_QWORD *)(a1 + 8);
  LODWORD(v276) = v287[0] + 2;
  if ( (int)v292 + 1 < (unsigned int)(v287[0] + 2) )
  {
    LOBYTE(v397) = 0;
    v145 = *(_QWORD *)(a1 + 240);
    *(_QWORD *)v295 = v273;
    v146 = v281;
    LODWORD(v396) = (_DWORD)v276 - v292;
    v269 = (__int64 *)sub_15DCAD0(v145, (int)v295, 0);
    sub_15D0DF0(v146);
  }
  else
  {
    v269 = (__int64 *)sub_D50160(a1 + 232, v287[0] + 1, v273);
  }
  if ( v269 )
    ++*((_DWORD *)v269 + 2);
  sub_D50200(0, v234);
  sub_D500F0(a1 + 232, v255);
  v109 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v293 = (struct _Unwind_Exception *)v109;
  if ( v109 )
    ++*(_DWORD *)(v109 + 8);
  sub_D50200(v255, (__int64)v289);
  v110 = *(_QWORD *)(a1 + 8);
  v396 = 0;
  v397 = v110;
  v111 = sub_D50430(a1 + 232, (unsigned int)v276);
  v251 = (__int64 *)v111;
  if ( v111 )
    ++*(_DWORD *)(v111 + 8);
  sub_D50200(0, v110);
  *(_QWORD *)v384 = 0;
  v385 = v110;
  sub_D5AB10(a1, v287[0], (__int64 *)v384);
  v112 = *(_QWORD *)v384;
  v240 = v385;
  v113 = sub_D50080(a1 + 232, *(__int64 *)v384);
  v255 = v113;
  if ( v113 )
    ++*(_DWORD *)(v113 + 8);
  sub_D50200(v112, v240);
  sub_D55100(a1, v386.m128_i64[0], (unsigned int)v276, (__int64 *)v281);
  v114 = (_DWORD *)sub_15E1B70(*(_QWORD *)(a1 + 240));
  v281 = v114;
  if ( v114 )
    ++v114[2];
  sub_D50200(0, v110);
  v115 = *(_QWORD *)(a1 + 8);
  sub_15E1B70(*(_QWORD *)(a1 + 240));
  v116 = sub_15E1BF0(v115);
  *(_QWORD *)v287 = v116;
  if ( v116 )
    ++*(_DWORD *)(v116 + 8);
  sub_D50200(0, v110);
  v117 = *(_QWORD *)(a1 + 8);
  sub_15E1B70(*(_QWORD *)(a1 + 240));
  v118 = sub_15E1BF0(v117);
  v119 = v118;
  if ( v118 )
    ++*(_DWORD *)(v118 + 8);
  sub_D50200(0, v110);
  v120 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v121 = v120;
  if ( v120 )
    ++*(_DWORD *)(v120 + 8);
  sub_D50200((__int64)v293, (__int64)v289);
  if ( (unsigned int)v292 < (unsigned int)v276 )
  {
    sub_D81D60(a1 + 232, (unsigned int)((_DWORD)v276 - v292), v386.m128_u64[0]);
    v143 = sub_15E1B70(*(_QWORD *)(a1 + 240));
    v293 = (struct _Unwind_Exception *)v143;
    if ( v143 )
      ++*(_DWORD *)(v143 + 8);
    sub_D50200(v386.m128_i64[0], v386.m128_i64[1]);
    v386.m128_u64[0] = (unsigned __int64)v293;
    v144 = sub_D50160(a1 + 232, v285, (__int64)v293);
    v293 = (struct _Unwind_Exception *)v144;
    if ( v144 )
      ++*(_DWORD *)(v144 + 8);
  }
  else
  {
    sub_D81D60(a1 + 232, (unsigned int)(v160 - 2), v119);
    v122 = sub_15E1B70(*(_QWORD *)(a1 + 240));
    v293 = (struct _Unwind_Exception *)v122;
    if ( v122 )
      ++*(_DWORD *)(v122 + 8);
  }
  sub_D50200(v386.m128_i64[0], v386.m128_i64[1]);
  v386.m128_u64[0] = (unsigned __int64)v293;
  v123 = sub_D50160(a1 + 232, v284, v121);
  v293 = (struct _Unwind_Exception *)v123;
  if ( v123 )
    ++*(_DWORD *)(v123 + 8);
  sub_D50200(v121, (__int64)v289);
  v377 = v293;
  v378 = v289;
  sub_D65A70((_QWORD *)a1, (__int64)v293, (__int64 *)&v377);
  v293 = v377;
  v289 = v378;
  v124 = sub_D50160(a1 + 232, (int)v292 - 2, v386.m128_i64[0]);
  v125 = v124;
  if ( v124 )
    ++*(_DWORD *)(v124 + 8);
  sub_D50200(v386.m128_i64[0], v386.m128_i64[1]);
  v126 = *(_QWORD *)(a1 + 432);
  v386.m128_u64[0] = v125;
  v127 = sub_15E1BF0(v126);
  v128 = v127;
  if ( v127 )
    ++*(_DWORD *)(v127 + 8);
  sub_D50200(0, v288);
  v129 = v164;
  sub_D51DB0(a1, v243, v248, v128, v164, v130);
  sub_D51DB0(a1, v262, v332, *v129, v129, v131);
  sub_D51DB0(a1, *(__int64 *)v322, v247, *v129, v129, v132);
  sub_D51DB0(a1, v320, v246, *v129, v129, v133);
  sub_D51DB0(a1, v318, v191, *v164, v164, v134);
  sub_D50200(v119, v110);
  sub_D50200(*(__int64 *)v287, v110);
  sub_D50200((__int64)v281, v110);
  sub_D50200(v396, v397);
  sub_D50200(v255, v240);
  sub_D50200((__int64)v251, v110);
  sub_D50200((__int64)v269, v234);
  sub_D50200(v245, v227);
  sub_D50200(v244, v215);
  sub_D50200(v249, (__int64)v279);
  sub_D50200(v250, v235);
  sub_D50200(v394, v395);
  sub_D50200(v392, v393);
  v135 = v264;
  sub_D50200(v256, v264);
  sub_D50200((__int64)v280, v135);
  sub_D50200(v391.m128_i64[0], v391.m128_i64[1]);
  sub_D50200(v389, v390);
  v136 = (__int64)v286;
  sub_D50200(v260, (__int64)v286);
  sub_D50200(v259, v136);
  sub_D50200(v254, v136);
  sub_D50200(v252, v136);
  sub_D50200(v388.m128_i64[0], v388.m128_i64[1]);
  v137 = v278;
  sub_D50200(v258, v278);
  sub_D50200(v261, v137);
  sub_D50200(v387.m128_i64[0], v387.m128_i64[1]);
  sub_D50200(v274, v137);
  sub_D50200((__int64)v282, v172);
  v138 = v232;
  sub_D50200((__int64)v283, v232);
  sub_D50200(v291.m128i_i64[0], v138);
  sub_D50200(v275, v138);
  sub_D50200(v273, v138);
  sub_D50200(v271, v176);
  sub_D50200((__int64)v293, (__int64)v289);
  sub_D50200(v386.m128_i64[0], v386.m128_i64[1]);
  sub_D50200(v277, v168);
  sub_D50200(v241, v233);
  sub_D50200(v372, v373);
  sub_D50200(v370, v371);
  sub_D50200(v257, v180);
  sub_D50200(v242, v180);
  sub_D50200(0, v211);
  sub_D50200(v368, v369);
  sub_D50200(v366, v367);
  sub_D50200(v364, v365);
  sub_D50200(v362, v363);
  sub_D50200(v263, v211);
  sub_D50200(v360, v361);
  sub_D50200(v358, v359);
  sub_D50200(v356, v357);
  sub_D50200(v238, v223);
  sub_D50200(v266, v199);
  sub_D50200(v350, v351);
  sub_D50200(v253, v183);
  sub_D50200(v348, v349);
  sub_D50200(v270, v187);
  sub_D50200(v346, v347);
  sub_D50200(v344, v345);
  sub_D50200(v342, v343);
  sub_D50200(v340, v341);
  sub_D50200(v236, v207);
  v139 = v265;
  sub_D50200(v272, v265);
  sub_D50200(v290, v139);
  v140 = v288;
  sub_D50200(v128, v288);
  sub_D50200(v248, v231);
  sub_D50200(v332, v333);
  sub_D50200(v247, v229);
  sub_D50200(v246, v226);
  sub_D50200(v191, v195);
  sub_D50200(v243, v230);
  sub_D50200(v262, v140);
  sub_D50200(*(__int64 *)v322, v323);
  sub_D50200(v320, v321);
  sub_D50200(v318, v319);
  sub_D50200(v316, v317);
  sub_D50200(v314, v315);
  sub_D50200(*(__int64 *)v312, v313);
  v141 = v239;
  sub_D50200(0, v239);
  sub_D50200(0, v141);
  sub_D50200(v268, v228);
  sub_D50200(v267, v219);
  sub_D50200(v237, v203);
  sub_D50200(v304, v305);
  sub_D50200(v302, v303);
  sub_D50200(v300, v301);
  sub_D50200(v298, v299);
  return sub_D50200(v296, v297);
}

