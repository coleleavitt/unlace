__int64 __fastcall sub_D74200(_QWORD *a1, __int64 a2, struct _Unwind_Exception *a3, __int64 *a4, __int64 a5)
{
  char **v5; // r12
  struct _Unwind_Exception *v6; // rbx
  struct _Unwind_Exception *v7; // rsi
  char **exception; // r12
  struct _Unwind_Exception *v9; // rbx
  struct _Unwind_Exception *v10; // rsi
  __int64 v12; // r14
  _Unwind_Exception_Class exception_class; // rsi
  __int64 v14; // rax
  _Unwind_Exception_Class v15; // rsi
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  _Unwind_Exception_Class v19; // rsi
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  __m128 v24; // xmm0
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  _Unwind_Exception_Class v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rax
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // r12
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rax
  _Unwind_Exception_Class v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r15
  _QWORD *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r13
  __int64 v62; // r14
  unsigned __int64 v63; // rdi
  unsigned int v64; // r12d
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rdi
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // r12
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r12
  __int64 v82; // rax
  __int64 v83; // rax
  __m128 v84; // xmm0
  __int64 v85; // rax
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // r12
  __int64 v89; // rax
  unsigned int v90; // r12d
  int v91; // r14d
  __int64 v92; // rax
  __int64 v93; // r12
  __int64 v94; // rax
  __int64 *v95; // r14
  __int64 v96; // r12
  __int64 v97; // rax
  __int64 v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  int v102; // r14d
  __int64 v103; // r12
  __int64 v104; // rax
  __int64 v105; // r12
  __int64 v106; // r13
  __int64 v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rdi
  bool v110; // zf
  __int64 v111; // r14
  __int64 v112; // rax
  __int64 v113; // r14
  int v114; // r9d
  int v115; // r9d
  int v116; // r9d
  int v117; // r9d
  int v118; // r9d
  int v119; // r9d
  int v120; // r9d
  int v121; // r9d
  __int64 v122; // rax
  __int64 v123; // rsi
  int v124; // ecx
  int v125; // r9d
  int v126; // r9d
  int v127; // r9d
  __int64 v128; // rbx
  __int64 v129; // rbx
  __int64 v130; // rbx
  __int64 v131; // r14
  __int64 v132; // r15
  __int64 v134; // rdi
  __int64 v135; // r12
  __int64 v136; // rdi
  __int64 v137; // r13
  __int64 v138; // rdi
  unsigned int v139; // eax
  __int64 *v140; // rax
  unsigned int v141; // eax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // r14
  __int64 v145; // rsi
  __int64 v146; // rdi
  void *v147; // [rsp+10h] [rbp-770h]
  void *v148; // [rsp+10h] [rbp-770h]
  __int64 v149; // [rsp+18h] [rbp-768h]
  __int64 v150; // [rsp+18h] [rbp-768h]
  __int64 v151; // [rsp+18h] [rbp-768h]
  __int64 v152; // [rsp+18h] [rbp-768h]
  int v153; // [rsp+20h] [rbp-760h]
  int v154; // [rsp+20h] [rbp-760h]
  __int64 v155; // [rsp+20h] [rbp-760h]
  __int64 v156; // [rsp+20h] [rbp-760h]
  __int64 v157; // [rsp+28h] [rbp-758h]
  __int64 v158; // [rsp+28h] [rbp-758h]
  __int64 v159; // [rsp+28h] [rbp-758h]
  __int64 v160; // [rsp+28h] [rbp-758h]
  int v161; // [rsp+30h] [rbp-750h]
  int v162; // [rsp+30h] [rbp-750h]
  int v163; // [rsp+30h] [rbp-750h]
  __int64 v164; // [rsp+30h] [rbp-750h]
  __int64 v165; // [rsp+38h] [rbp-748h]
  __int64 v166; // [rsp+38h] [rbp-748h]
  __int64 v167; // [rsp+38h] [rbp-748h]
  __int64 v168; // [rsp+38h] [rbp-748h]
  __int64 v169; // [rsp+40h] [rbp-740h]
  __int64 v170; // [rsp+40h] [rbp-740h]
  __int64 v171; // [rsp+40h] [rbp-740h]
  __int64 v172; // [rsp+40h] [rbp-740h]
  __int64 v173; // [rsp+48h] [rbp-738h]
  __int64 v174; // [rsp+48h] [rbp-738h]
  __int64 v175; // [rsp+48h] [rbp-738h]
  __int64 v176; // [rsp+48h] [rbp-738h]
  __int64 v177; // [rsp+50h] [rbp-730h]
  __int64 v178; // [rsp+50h] [rbp-730h]
  __int64 v179; // [rsp+50h] [rbp-730h]
  __int64 v180; // [rsp+50h] [rbp-730h]
  __int64 v181; // [rsp+58h] [rbp-728h]
  __int64 v182; // [rsp+58h] [rbp-728h]
  __int64 v183; // [rsp+58h] [rbp-728h]
  __int64 v184; // [rsp+58h] [rbp-728h]
  __int64 v185; // [rsp+60h] [rbp-720h]
  __int64 v186; // [rsp+60h] [rbp-720h]
  __int64 v187; // [rsp+60h] [rbp-720h]
  __int64 v188; // [rsp+60h] [rbp-720h]
  __int64 v189; // [rsp+68h] [rbp-718h]
  __int64 v190; // [rsp+68h] [rbp-718h]
  __int64 v191; // [rsp+68h] [rbp-718h]
  __int64 v192; // [rsp+68h] [rbp-718h]
  __int64 v193; // [rsp+70h] [rbp-710h]
  __int64 v194; // [rsp+70h] [rbp-710h]
  __int64 v195; // [rsp+70h] [rbp-710h]
  __int64 v196; // [rsp+70h] [rbp-710h]
  __int64 v197; // [rsp+78h] [rbp-708h]
  __int64 v198; // [rsp+78h] [rbp-708h]
  __int64 v199; // [rsp+78h] [rbp-708h]
  __int64 v200; // [rsp+78h] [rbp-708h]
  __int64 v201; // [rsp+80h] [rbp-700h]
  __int64 v202; // [rsp+80h] [rbp-700h]
  __int64 v203; // [rsp+80h] [rbp-700h]
  __int64 v204; // [rsp+80h] [rbp-700h]
  __int64 v205; // [rsp+88h] [rbp-6F8h]
  __int64 v206; // [rsp+88h] [rbp-6F8h]
  __int64 v207; // [rsp+88h] [rbp-6F8h]
  __int64 v208; // [rsp+88h] [rbp-6F8h]
  __int64 v209; // [rsp+90h] [rbp-6F0h]
  __int64 v210; // [rsp+90h] [rbp-6F0h]
  __int64 v211; // [rsp+90h] [rbp-6F0h]
  __int64 v212; // [rsp+90h] [rbp-6F0h]
  __int64 v213; // [rsp+98h] [rbp-6E8h]
  __int64 v214; // [rsp+98h] [rbp-6E8h]
  __int64 v215; // [rsp+98h] [rbp-6E8h]
  __int64 v216; // [rsp+98h] [rbp-6E8h]
  __int64 v217; // [rsp+A0h] [rbp-6E0h]
  __int64 v218; // [rsp+A0h] [rbp-6E0h]
  __int64 v219; // [rsp+A0h] [rbp-6E0h]
  __int64 v220; // [rsp+A0h] [rbp-6E0h]
  __int64 v221; // [rsp+A8h] [rbp-6D8h]
  __int64 v222; // [rsp+B0h] [rbp-6D0h]
  __int64 v223; // [rsp+B8h] [rbp-6C8h]
  __int64 v224; // [rsp+C0h] [rbp-6C0h]
  __int64 v225; // [rsp+C8h] [rbp-6B8h]
  __int64 v226; // [rsp+D0h] [rbp-6B0h]
  __int64 v227; // [rsp+D8h] [rbp-6A8h]
  __int64 v228; // [rsp+E0h] [rbp-6A0h]
  __int64 v229; // [rsp+E8h] [rbp-698h]
  __int64 v230; // [rsp+F0h] [rbp-690h]
  __int64 *v231; // [rsp+F8h] [rbp-688h]
  __int64 v232; // [rsp+100h] [rbp-680h]
  __int64 v233; // [rsp+108h] [rbp-678h]
  __int64 v234; // [rsp+110h] [rbp-670h]
  __int64 v235; // [rsp+118h] [rbp-668h] BYREF
  __int64 v236; // [rsp+120h] [rbp-660h]
  __int64 v237; // [rsp+128h] [rbp-658h]
  __int64 v238; // [rsp+130h] [rbp-650h]
  __int64 v239; // [rsp+138h] [rbp-648h]
  __int64 v240; // [rsp+140h] [rbp-640h]
  __int64 v241; // [rsp+148h] [rbp-638h]
  __int64 v242; // [rsp+150h] [rbp-630h]
  __int64 v243; // [rsp+158h] [rbp-628h]
  __int64 v244; // [rsp+160h] [rbp-620h]
  __int64 v245; // [rsp+168h] [rbp-618h]
  __int64 v246; // [rsp+170h] [rbp-610h]
  __int64 v247; // [rsp+178h] [rbp-608h]
  __int64 v248; // [rsp+180h] [rbp-600h]
  __int64 v249; // [rsp+188h] [rbp-5F8h]
  __int64 v250; // [rsp+190h] [rbp-5F0h]
  _QWORD *v251; // [rsp+198h] [rbp-5E8h]
  __int64 v252; // [rsp+1A0h] [rbp-5E0h]
  __int64 v253; // [rsp+1A8h] [rbp-5D8h]
  __int64 *v254; // [rsp+1B0h] [rbp-5D0h]
  __int64 v255; // [rsp+1B8h] [rbp-5C8h]
  __int64 v256; // [rsp+1C0h] [rbp-5C0h]
  __int64 v257; // [rsp+1C8h] [rbp-5B8h]
  _Unwind_Exception_Class v258; // [rsp+1D0h] [rbp-5B0h]
  __int64 v259; // [rsp+1D8h] [rbp-5A8h]
  __int64 v260; // [rsp+1E0h] [rbp-5A0h]
  __int64 v261; // [rsp+1E8h] [rbp-598h]
  __int64 v262; // [rsp+1F0h] [rbp-590h]
  __int64 v263; // [rsp+1F8h] [rbp-588h]
  __int64 v264; // [rsp+200h] [rbp-580h]
  __int64 v265; // [rsp+208h] [rbp-578h]
  __int64 v266; // [rsp+210h] [rbp-570h]
  __int64 v267; // [rsp+218h] [rbp-568h]
  _Unwind_Exception_Class v268; // [rsp+220h] [rbp-560h]
  __int64 v269; // [rsp+228h] [rbp-558h]
  __int64 v270; // [rsp+230h] [rbp-550h]
  __int64 v271; // [rsp+238h] [rbp-548h]
  __int64 v272; // [rsp+240h] [rbp-540h]
  __int64 *v273; // [rsp+248h] [rbp-538h]
  __int64 v274; // [rsp+250h] [rbp-530h]
  int v275[2]; // [rsp+258h] [rbp-528h]
  __int64 v276; // [rsp+260h] [rbp-520h]
  __int64 v277; // [rsp+268h] [rbp-518h]
  __int64 v278; // [rsp+270h] [rbp-510h]
  __int64 v279; // [rsp+278h] [rbp-508h]
  __int64 v280; // [rsp+280h] [rbp-500h]
  __int64 v281; // [rsp+288h] [rbp-4F8h]
  __int64 v282; // [rsp+290h] [rbp-4F0h]
  __int64 v283; // [rsp+298h] [rbp-4E8h]
  _QWORD *v284; // [rsp+2A0h] [rbp-4E0h]
  __int64 v285; // [rsp+2A8h] [rbp-4D8h]
  __int64 v286; // [rsp+2B0h] [rbp-4D0h]
  __int64 v287; // [rsp+2B8h] [rbp-4C8h]
  __int64 v288; // [rsp+2C0h] [rbp-4C0h]
  __int64 v289; // [rsp+2C8h] [rbp-4B8h]
  __int64 v290; // [rsp+2D0h] [rbp-4B0h]
  __int64 *v291; // [rsp+2D8h] [rbp-4A8h]
  __int64 v292; // [rsp+2E0h] [rbp-4A0h]
  __int64 v293; // [rsp+2E8h] [rbp-498h]
  __int64 v294; // [rsp+2F0h] [rbp-490h]
  __int64 *v295; // [rsp+2F8h] [rbp-488h]
  __int64 v296; // [rsp+300h] [rbp-480h]
  __int64 v297; // [rsp+308h] [rbp-478h]
  __int64 v298; // [rsp+310h] [rbp-470h]
  __int64 v299; // [rsp+318h] [rbp-468h]
  int v300[2]; // [rsp+320h] [rbp-460h]
  __int64 *v301; // [rsp+328h] [rbp-458h]
  __int64 v302; // [rsp+330h] [rbp-450h]
  __int64 *v303; // [rsp+338h] [rbp-448h]
  int v304[2]; // [rsp+340h] [rbp-440h]
  struct _Unwind_Exception *v305; // [rsp+348h] [rbp-438h]
  __int64 v306; // [rsp+350h] [rbp-430h] BYREF
  __int64 v307; // [rsp+358h] [rbp-428h]
  __int64 v308; // [rsp+360h] [rbp-420h] BYREF
  __int64 v309; // [rsp+368h] [rbp-418h]
  __int64 v310; // [rsp+370h] [rbp-410h] BYREF
  __int64 v311; // [rsp+378h] [rbp-408h]
  __int64 v312; // [rsp+380h] [rbp-400h] BYREF
  __int64 v313; // [rsp+388h] [rbp-3F8h]
  __int64 v314; // [rsp+390h] [rbp-3F0h] BYREF
  __int64 v315; // [rsp+398h] [rbp-3E8h]
  __int64 v316; // [rsp+3A0h] [rbp-3E0h] BYREF
  __int64 v317; // [rsp+3A8h] [rbp-3D8h]
  int v318[2]; // [rsp+3B0h] [rbp-3D0h] BYREF
  __int64 v319; // [rsp+3B8h] [rbp-3C8h]
  __int64 v320; // [rsp+3C0h] [rbp-3C0h] BYREF
  __int64 v321; // [rsp+3C8h] [rbp-3B8h]
  __int64 v322; // [rsp+3D0h] [rbp-3B0h] BYREF
  __int64 v323; // [rsp+3D8h] [rbp-3A8h]
  __int64 v324; // [rsp+3E0h] [rbp-3A0h] BYREF
  __int64 v325; // [rsp+3E8h] [rbp-398h]
  __int64 v326; // [rsp+3F0h] [rbp-390h] BYREF
  __int64 v327; // [rsp+3F8h] [rbp-388h]
  int v328[2]; // [rsp+400h] [rbp-380h] BYREF
  __int64 v329; // [rsp+408h] [rbp-378h]
  __int64 v330; // [rsp+410h] [rbp-370h] BYREF
  __int64 v331; // [rsp+418h] [rbp-368h]
  __int64 v332; // [rsp+420h] [rbp-360h] BYREF
  __int64 v333; // [rsp+428h] [rbp-358h]
  __int64 v334; // [rsp+430h] [rbp-350h] BYREF
  __int64 v335; // [rsp+438h] [rbp-348h]
  __int64 v336; // [rsp+440h] [rbp-340h] BYREF
  __int64 v337; // [rsp+448h] [rbp-338h]
  __int64 v338; // [rsp+450h] [rbp-330h] BYREF
  __int64 v339; // [rsp+458h] [rbp-328h]
  __int64 v340; // [rsp+460h] [rbp-320h] BYREF
  __int64 v341; // [rsp+468h] [rbp-318h]
  __int64 v342; // [rsp+470h] [rbp-310h] BYREF
  __int64 v343; // [rsp+478h] [rbp-308h]
  __int64 v344; // [rsp+480h] [rbp-300h] BYREF
  __int64 v345; // [rsp+488h] [rbp-2F8h]
  __int64 v346; // [rsp+490h] [rbp-2F0h] BYREF
  __int64 v347; // [rsp+498h] [rbp-2E8h]
  __int64 v348; // [rsp+4A0h] [rbp-2E0h] BYREF
  __int64 v349; // [rsp+4A8h] [rbp-2D8h]
  _Unwind_Exception_Class v350; // [rsp+4B0h] [rbp-2D0h] BYREF
  __int64 v351; // [rsp+4B8h] [rbp-2C8h]
  __int64 v352; // [rsp+4C0h] [rbp-2C0h] BYREF
  __int64 v353; // [rsp+4C8h] [rbp-2B8h]
  __int64 v354; // [rsp+4D0h] [rbp-2B0h] BYREF
  __int64 v355; // [rsp+4D8h] [rbp-2A8h]
  _Unwind_Exception_Class v356; // [rsp+4E0h] [rbp-2A0h] BYREF
  __int64 v357; // [rsp+4E8h] [rbp-298h]
  __int64 v358; // [rsp+4F0h] [rbp-290h] BYREF
  __int64 v359; // [rsp+4F8h] [rbp-288h]
  __int64 v360; // [rsp+500h] [rbp-280h] BYREF
  __int64 v361; // [rsp+508h] [rbp-278h]
  __int64 v362; // [rsp+510h] [rbp-270h] BYREF
  __int64 v363; // [rsp+518h] [rbp-268h]
  __int64 v364; // [rsp+520h] [rbp-260h] BYREF
  __int64 v365; // [rsp+528h] [rbp-258h]
  __int64 v366; // [rsp+530h] [rbp-250h] BYREF
  __int64 v367; // [rsp+538h] [rbp-248h]
  __int64 v368; // [rsp+540h] [rbp-240h] BYREF
  __int64 v369; // [rsp+548h] [rbp-238h]
  __int64 v370; // [rsp+550h] [rbp-230h] BYREF
  __int64 v371; // [rsp+558h] [rbp-228h]
  __int64 v372; // [rsp+560h] [rbp-220h] BYREF
  __int64 v373; // [rsp+568h] [rbp-218h]
  __m128 v374; // [rsp+570h] [rbp-210h] BYREF
  __int64 v375; // [rsp+580h] [rbp-200h] BYREF
  __int64 v376; // [rsp+588h] [rbp-1F8h]
  __int64 v377; // [rsp+590h] [rbp-1F0h] BYREF
  __int64 v378; // [rsp+598h] [rbp-1E8h]
  __int64 v379; // [rsp+5A0h] [rbp-1E0h] BYREF
  __int64 v380; // [rsp+5A8h] [rbp-1D8h]
  __int64 v381; // [rsp+5B0h] [rbp-1D0h] BYREF
  __int64 v382; // [rsp+5B8h] [rbp-1C8h]
  __int64 v383; // [rsp+5C0h] [rbp-1C0h] BYREF
  __int64 v384; // [rsp+5C8h] [rbp-1B8h]
  __int64 v385; // [rsp+5D0h] [rbp-1B0h] BYREF
  __int64 v386; // [rsp+5D8h] [rbp-1A8h]
  __int64 v387; // [rsp+5E0h] [rbp-1A0h] BYREF
  __int64 v388; // [rsp+5E8h] [rbp-198h]
  __int64 v389; // [rsp+5F0h] [rbp-190h] BYREF
  __int64 v390; // [rsp+5F8h] [rbp-188h]
  __int64 v391; // [rsp+600h] [rbp-180h] BYREF
  __int64 v392; // [rsp+608h] [rbp-178h]
  __int64 v393[2]; // [rsp+610h] [rbp-170h] BYREF
  __int64 v394[2]; // [rsp+620h] [rbp-160h] BYREF
  __int64 v395; // [rsp+630h] [rbp-150h] BYREF
  __int64 v396; // [rsp+638h] [rbp-148h]
  __int64 v397; // [rsp+640h] [rbp-140h] BYREF
  __int64 v398; // [rsp+648h] [rbp-138h]
  __int64 v399; // [rsp+650h] [rbp-130h] BYREF
  __int64 v400; // [rsp+658h] [rbp-128h]
  __int64 v401[2]; // [rsp+660h] [rbp-120h] BYREF
  __int64 v402; // [rsp+670h] [rbp-110h] BYREF
  __int64 v403; // [rsp+678h] [rbp-108h]
  __int64 v404; // [rsp+680h] [rbp-100h] BYREF
  __int64 v405; // [rsp+688h] [rbp-F8h]
  __int64 v406; // [rsp+690h] [rbp-F0h] BYREF
  __int64 v407; // [rsp+698h] [rbp-E8h]
  __int64 v408; // [rsp+6A0h] [rbp-E0h] BYREF
  __int64 v409; // [rsp+6A8h] [rbp-D8h]
  int v410[2]; // [rsp+6B0h] [rbp-D0h] BYREF
  __int64 v411; // [rsp+6B8h] [rbp-C8h]
  __int64 v412; // [rsp+6C0h] [rbp-C0h] BYREF
  __int64 v413; // [rsp+6C8h] [rbp-B8h]
  __int64 v414; // [rsp+6D0h] [rbp-B0h]
  _QWORD v415[3]; // [rsp+6D8h] [rbp-A8h] BYREF
  __m128 v416; // [rsp+6F0h] [rbp-90h] BYREF
  __int64 v417; // [rsp+700h] [rbp-80h]
  __int64 v418; // [rsp+710h] [rbp-70h]
  _QWORD v419[3]; // [rsp+718h] [rbp-68h] BYREF
  __int64 v420; // [rsp+730h] [rbp-50h] BYREF
  __int64 v421; // [rsp+738h] [rbp-48h]

  v12 = a1[1];
  v305 = a3;
  v299 = a2;
  v295 = a4;
  *(_QWORD *)v304 = a5;
  v297 = v12;
  v306 = 0;
  v307 = v12;
  sub_D5B8E0((__int64)a1, a2, &v306);
  v308 = 0;
  v277 = v306;
  v309 = v12;
  v181 = v307;
  sub_D51670((__int64)a1, a2, &v308);
  v310 = 0;
  v246 = v308;
  v213 = v309;
  v311 = v12;
  v303 = &v310;
  sub_D518E0((__int64)a1, a2, &v310);
  v312 = 0;
  v280 = v310;
  v217 = v311;
  v313 = v12;
  sub_D5B6C0((__int64)a1, a2, &v312);
  v314 = 0;
  v222 = v312;
  v223 = v313;
  v315 = v12;
  sub_D5B4A0((__int64)a1, a2, &v314);
  v316 = 0;
  v225 = v314;
  exception_class = v305->exception_class;
  *(_QWORD *)v318 = 0;
  v320 = 0;
  v297 = v315;
  v14 = a1[1];
  v322 = 0;
  v317 = v14;
  v319 = v14;
  v321 = v14;
  v323 = v14;
  v324 = 0;
  v325 = v14;
  v326 = 0;
  v327 = v14;
  *(_QWORD *)v328 = 0;
  v329 = v14;
  v330 = 0;
  v331 = v14;
  v332 = 0;
  v333 = v14;
  v334 = 0;
  v335 = v14;
  sub_D5BB00(a1, exception_class, &v316);
  v15 = v305->exception_class;
  v301 = (__int64 *)v318;
  sub_D52DE0(
    (int)a1,
    v15,
    (int)v318,
    v16,
    v17,
    v18,
    v147,
    v149,
    v153,
    v157,
    v161,
    v165,
    v169,
    v173,
    v177,
    v181,
    v185,
    v189,
    v193,
    v197,
    v201,
    v205,
    v209,
    v213,
    v217);
  sub_D52AC0((__int64)a1, v305->exception_class, &v320);
  sub_D52C50((__int64)a1, v305->exception_class, &v322);
  v19 = v305->exception_class;
  *(_QWORD *)v300 = &v324;
  sub_D61A80(a1, v19, &v324);
  sub_D5BB00(a1, *v295, &v326);
  sub_D52DE0(
    (int)a1,
    *v295,
    (int)v328,
    v20,
    v21,
    v22,
    v148,
    v150,
    v154,
    v158,
    v162,
    v166,
    v170,
    v174,
    v178,
    v182,
    v186,
    v190,
    v194,
    v198,
    v202,
    v206,
    v210,
    v214,
    v218);
  sub_D52AC0((__int64)a1, *v295, &v330);
  sub_D52C50((__int64)a1, *v295, &v332);
  sub_D61A80(a1, *v295, &v334);
  v23 = a1[1];
  v336 = 0;
  v24 = _mm_loadh_ps((const double *)&v326);
  v302 = v23;
  v337 = v23;
  v358 = 0;
  v359 = v23;
  v416 = v24;
  sub_D50260(a1 + 2, &v416, &v336);
  if ( v277 )
  {
    v346 = 0;
    v347 = v302;
    sub_D50220(&v346, &v306);
    v244 = v346;
    v175 = v347;
    v256 = v324;
    if ( v324 )
    {
      v338 = 0;
      v339 = v302;
      sub_D50220(&v338, *(__int64 **)v300);
      v256 = v338;
      v207 = v339;
    }
    else
    {
      v207 = v302;
    }
    v348 = 0;
    v349 = v302;
    sub_D50220(&v348, &v306);
    v247 = v348;
    v221 = v349;
  }
  else
  {
    v256 = v324;
    if ( v324 )
    {
      v338 = 0;
      v339 = v302;
      sub_D50220(&v338, *(__int64 **)v300);
      v247 = 0;
      v244 = 0;
      v256 = v338;
      v26 = v339;
      v221 = v302;
      v207 = v339;
      v175 = v302;
    }
    else
    {
      v247 = 0;
      v244 = 0;
      v221 = v302;
      v175 = v302;
      v207 = v302;
    }
  }
  v257 = v334;
  if ( v334 )
  {
    v340 = 0;
    v341 = v302;
    sub_D50220(&v340, &v334);
    v257 = v340;
    v224 = v341;
  }
  else
  {
    v224 = v302;
  }
  v258 = v305->exception_class;
  if ( v258 )
  {
    v350 = 0;
    v351 = v302;
    sub_D50220((__int64 *)&v350, (__int64 *)v305);
    v258 = v350;
    v226 = v351;
  }
  else
  {
    v226 = v302;
  }
  v259 = *(_QWORD *)v328;
  if ( *(_QWORD *)v328 )
  {
    v342 = 0;
    v343 = v302;
    sub_D50220(&v342, (__int64 *)v328);
    v259 = v342;
    v227 = v343;
  }
  else
  {
    v227 = v302;
  }
  if ( v277 )
  {
    v352 = 0;
    v353 = v302;
    sub_D50220(&v352, &v306);
    v248 = v352;
    v228 = v353;
  }
  else
  {
    v248 = 0;
    v228 = v302;
  }
  v260 = *(_QWORD *)v318;
  if ( *(_QWORD *)v318 )
  {
    v344 = 0;
    v345 = v302;
    sub_D50220(&v344, v301);
    v260 = v344;
    v229 = v345;
  }
  else
  {
    v229 = v302;
  }
  if ( v280 )
  {
    v354 = 0;
    v355 = v302;
    sub_D50220(&v354, v303);
    v249 = v354;
    v230 = v355;
  }
  else
  {
    v249 = 0;
    v230 = v302;
  }
  LODWORD(v296) = sub_15C5540((int)a1 + 432, v299, v25, v26, v27, v28);
  LODWORD(v293) = sub_15C5560(a1 + 54, v299);
  v29 = a1[1];
  v360 = 0;
  v364 = 0;
  v30 = v305->exception_class;
  v279 = v29;
  v361 = v29;
  v365 = v29;
  v362 = 0;
  v363 = v29;
  sub_D51BC0((__int64)a1, v30, &v360, &v364, &v362);
  v366 = 0;
  v179 = v360;
  v370 = 0;
  v191 = v362;
  v368 = 0;
  v163 = v363;
  v241 = v364;
  v167 = v365;
  v187 = v361;
  v31 = *v295;
  v367 = v279;
  v371 = v279;
  v369 = v279;
  sub_D51BC0((__int64)a1, v31, &v366, &v370, &v368);
  v372 = 0;
  v195 = v366;
  v199 = v368;
  v203 = v369;
  v278 = v370;
  v211 = v371;
  v279 = v367;
  v159 = a1[1];
  v373 = v159;
  v303 = a1 + 29;
  v32 = sub_D50390((__int64)(a1 + 29), v296);
  v264 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v33 = sub_15E1B70(a1[30]);
  v265 = v33;
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  v34 = a1[1];
  v35 = sub_15E1B70(a1[30]);
  v39 = v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  if ( (unsigned int)sub_14DEE90((int)a1 + 16, v35, (unsigned int)&v372, v36, v37, v38) == 5 )
  {
    v143 = sub_15E1A70(a1[2]);
    v144 = v143;
    if ( v143 )
      ++*(_DWORD *)(v143 + 8);
    v145 = v372;
    if ( v372 )
    {
      v146 = v373;
      v110 = (*(_DWORD *)(v372 + 8))-- == 1;
      if ( v110 )
        sub_15D7BC0(v146, v145);
    }
    v372 = v144;
  }
  sub_D50200(v39, v34);
  v40 = a1[1];
  sub_D50430((__int64)v303, v296);
  sub_15E1B70(v40);
  v41 = sub_15E1A70(v40);
  v269 = v41;
  if ( v41 )
    ++*(_DWORD *)(v41 + 8);
  v42 = sub_15E1B70(a1[1]);
  v272 = v42;
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  v268 = v305->exception_class;
  if ( v268 )
  {
    v356 = 0;
    v357 = v302;
    sub_D50220((__int64 *)&v356, (__int64 *)v305);
    v43 = v305->exception_class;
    v268 = v356;
    v232 = v357;
  }
  else
  {
    v43 = 0;
    v232 = v302;
  }
  v44 = a1[1];
  v375 = 0;
  v377 = 0;
  v242 = v44;
  v45 = v44;
  v376 = v44;
  v378 = v44;
  v380 = v44;
  v384 = v44;
  v386 = v44;
  v388 = v44;
  v374.m128_u64[1] = v44;
  v379 = 0;
  v383 = 0;
  v385 = 0;
  v387 = 0;
  v374.m128_u64[0] = 0;
  v291 = (__int64 *)&v374;
  sub_D59470(a1, v43, (__int64 *)&v374, &v375, &v377, &v379, 1);
  v382 = v45;
  v381 = 0;
  v235 = v374.m128_i64[1];
  v240 = v374.m128_u64[0];
  sub_D59470(a1, *v295, &v381, &v383, &v385, &v387, 1);
  v245 = v381;
  v242 = v382;
  v46 = sub_D59FE0((__int64 *)(a1[55] + 760LL), v296);
  v47 = a1[63];
  v415[0] = 0;
  v414 = v47;
  v415[1] = 0;
  v420 = 3;
  v421 = 0;
  v251 = v415;
  v305 = (struct _Unwind_Exception *)&v420;
  sub_183A580(v47, v46, &v420, v415);
  v420 = 0x7FFFFFFF;
  v48 = a1[63];
  v421 = 0;
  if ( (v415[0] & 0x100000000LL) != 0 && (int)sub_182EB00(v48, &v420, v415) < 0 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(
      (__int64 *)v305,
      "Maximum exponent difference in fp.rem does not fit into a signed int. Huge exponents in fp.rem are not supported.");
    v9 = v305;
    v10 = v305;
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v10);
    *exception = (char *)off_1C650D8;
    sub_233E40((__int64)v9);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
  }
  v155 = a1[1];
  v49 = sub_D50080((__int64)v303, v377);
  v263 = v49;
  if ( v49 )
    ++*(_DWORD *)(v49 + 8);
  v50 = sub_D50080((__int64)v303, v385);
  v288 = v50;
  if ( v50 )
    ++*(_DWORD *)(v50 + 8);
  v151 = a1[1];
  v51 = sub_D500F0((__int64)v303, v379);
  v262 = v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  v52 = sub_D500F0((__int64)v303, v387);
  v287 = v52;
  if ( v52 )
    ++*(_DWORD *)(v52 + 8);
  v53 = a1[30];
  v261 = a1[1];
  sub_15E1B70(v53);
  sub_15E1B70(a1[30]);
  v54 = sub_15E1B70(a1[30]);
  v301 = (__int64 *)v54;
  if ( v54 )
    ++*(_DWORD *)(v54 + 8);
  v55 = sub_15E1A70(a1[30]);
  v294 = v55;
  if ( v55 )
    ++*(_DWORD *)(v55 + 8);
  LODWORD(v292) = v296 + 2;
  sub_D50430((__int64)v303, v296 + 2);
  v56 = sub_15E1B70(a1[30]);
  v270 = v56;
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  v57 = a1[1];
  sub_D50430((__int64)v303, v292);
  v58 = sub_15E1B70(v57);
  v236 = v58;
  if ( v58 )
    ++*(_DWORD *)(v58 + 8);
  v59 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v301) + 24) + 8LL);
  if ( *(_BYTE *)(v59 + 8) )
    sub_DBF6E(0);
  sub_D50430((__int64)v303, *(_DWORD *)v59);
  v60 = sub_15E1B70(a1[30]);
  v237 = v60;
  if ( v60 )
    ++*(_DWORD *)(v60 + 8);
  v61 = v375;
  v298 = a1[1];
  v286 = v376;
  if ( v375 )
    ++*(_DWORD *)(v375 + 8);
  v62 = v383;
  v285 = v384;
  if ( v383 )
    ++*(_DWORD *)(v383 + 8);
  v63 = a1[63];
  v417 = 0;
  v416 = (__m128)v63;
  if ( (v415[0] & 0x100000000LL) != 0 )
  {
    sub_182EA00(v63, &v416.m128_u16[4], v251);
    v63 = a1[63];
  }
  else
  {
    v416.m128_i32[2] = v415[0];
  }
  *(_QWORD *)v300 = &v408;
  while ( 1 )
  {
    v420 = 0x7FFFFFFF;
    v421 = 0;
    if ( (v416.m128_i8[12] & 1) == 0 || (int)sub_182EB00(v63, v305, &v416.m128_u16[4]) >= 0 )
      break;
    v408 = v61;
    v420 = 0x7FFFFFFF;
    v134 = a1[30];
    v421 = 0;
    v135 = sub_15DCAD0(v134, v300[0], 0);
    sub_15D0DF0(v305);
    if ( v135 )
      ++*(_DWORD *)(v135 + 8);
    if ( v61 )
    {
      v110 = (*(_DWORD *)(v61 + 8))-- == 1;
      if ( v110 )
        sub_15D7BC0(v286, v61);
    }
    *(_QWORD *)v410 = v62;
    v420 = 0x7FFFFFFF;
    v136 = a1[30];
    v421 = 0;
    v137 = sub_15DCAD0(v136, (int)v410, 0);
    sub_15D0DF0(v305);
    if ( v137 )
      ++*(_DWORD *)(v137 + 8);
    if ( v62 )
    {
      v110 = (*(_DWORD *)(v62 + 8))-- == 1;
      if ( v110 )
        sub_15D7BC0(v285, v62);
    }
    v138 = a1[63];
    v420 = 0x7FFFFFFF;
    v421 = 0;
    sub_183A580(v138, &v416.m128_u16[4], v305, &v416.m128_u16[4]);
    v62 = v137;
    v63 = a1[63];
    v61 = v135;
  }
  if ( v416.m128_i32[2] )
  {
    v64 = sub_182F340(a1[63], &v416.m128_u16[4]);
    v65 = sub_D81D60(v303, v64, v61);
    v253 = v65;
    if ( v65 )
      ++*(_DWORD *)(v65 + 8);
    sub_D50200(v61, v286);
    v66 = sub_D81D60(v303, v64, v62);
    v252 = v66;
    if ( v66 )
      ++*(_DWORD *)(v66 + 8);
    sub_D50200(v62, v285);
  }
  else
  {
    v252 = v62;
    v253 = v61;
  }
  v239 = a1[1];
  v413 = sub_D50430((__int64)v303, 3u);
  v67 = a1[30];
  v412 = v253;
  v68 = sub_15E1AF0(v67);
  v266 = v68;
  if ( v68 )
    ++*(_DWORD *)(v68 + 8);
  v69 = sub_D50430((__int64)v303, 3u);
  v70 = a1[30];
  v419[0] = v69;
  v418 = v252;
  v71 = sub_15E1AF0(v70);
  v290 = v71;
  if ( v71 )
    ++*(_DWORD *)(v71 + 8);
  sub_D50200(0, v239);
  v72 = a1[63];
  v419[0] = 0;
  v419[1] = 0;
  LODWORD(v420) = v293;
  BYTE4(v420) &= 0xFCu;
  v418 = v72;
  v421 = 0;
  v284 = v419;
  sub_1839610(v72, v251, v305);
  v421 = 0;
  v73 = a1[63];
  BYTE4(v420) &= 0xFCu;
  LODWORD(v420) = v296;
  sub_183A580(v73, v284, v305, v284);
  v74 = a1[63];
  v420 = 1;
  v421 = 0;
  sub_1839610(v74, v419, v305);
  v393[1] = v261;
  v394[1] = v261;
  v75 = v294;
  ++*((_DWORD *)v301 + 2);
  if ( v75 )
    ++*(_DWORD *)(v75 + 8);
  v76 = a1[63];
  if ( (v419[0] & 0x100000000LL) != 0 )
  {
    sub_182EA00(v76, &v416.m128_u16[4], v284);
    v76 = a1[63];
  }
  else
  {
    v416.m128_i8[12] &= ~1u;
    v416.m128_i32[2] = v419[0];
  }
  v420 = 0x7FFFFFFF;
  v421 = 0;
  if ( (v416.m128_i8[12] & 1) != 0 && (int)sub_182EB00(v76, v305, &v416.m128_u16[4]) < 0 )
  {
    v5 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0((__int64 *)v305, "zero extension bit-vector types are too large; would exhaust memory");
    v6 = v305;
    v7 = v305;
    *v5 = (char *)off_1C63128;
    sub_2333C0(v5 + 1, v7);
    sub_233E40((__int64)v6);
    __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  *(_QWORD *)v300 = v294;
  v254 = v301;
  if ( !v416.m128_i32[2] )
    goto LABEL_76;
  v139 = sub_182F340(a1[63], &v416.m128_u16[4]);
  v140 = (__int64 *)sub_D81D60(v303, v139, v301);
  v254 = v140;
  if ( v140 )
    ++*((_DWORD *)v140 + 2);
  sub_D50200((__int64)v301, v261);
  v141 = sub_182F340(a1[63], &v416.m128_u16[4]);
  v142 = sub_D81D60(v303, v141, v294);
  *(_QWORD *)v300 = v142;
  if ( v142 )
  {
    ++*(_DWORD *)(v142 + 8);
    sub_D50200(v294, v261);
    if ( !v254 )
    {
      v250 = 0;
      v233 = v298;
LABEL_130:
      v391 = 0;
      v392 = v298;
      v394[0] = *(_QWORD *)v300;
      sub_D50220(&v391, v394);
      v234 = v392;
      v231 = *(__int64 **)v300;
      *(_QWORD *)v300 = v391;
      goto LABEL_78;
    }
LABEL_76:
    v389 = 0;
    v390 = v298;
    v393[0] = (__int64)v254;
    sub_D50220(&v389, v393);
    v250 = v389;
    v233 = v390;
    if ( !*(_QWORD *)v300 )
    {
      v231 = nullptr;
      v234 = v298;
      goto LABEL_78;
    }
    goto LABEL_130;
  }
  sub_D50200(v294, v261);
  if ( v254 )
    goto LABEL_76;
  v250 = 0;
  v231 = nullptr;
  v233 = v298;
  v234 = v298;
  *(_QWORD *)v300 = 0;
LABEL_78:
  v77 = a1[1];
  sub_15E1B70(a1[30]);
  sub_15E1B70(a1[30]);
  v78 = sub_15E1BF0(v77);
  v296 = v78;
  if ( v78 )
    ++*(_DWORD *)(v78 + 8);
  sub_D50200(0, v298);
  v79 = sub_15E1B70(a1[30]);
  v281 = v79;
  if ( v79 )
    ++*(_DWORD *)(v79 + 8);
  sub_D50200(0, v298);
  v80 = sub_15E1B70(a1[1]);
  v282 = v80;
  if ( v80 )
    ++*(_DWORD *)(v80 + 8);
  sub_D50200(0, v298);
  v81 = a1[1];
  sub_D50430((__int64)v303, 1u);
  sub_D50160((__int64)v303, 0, v282);
  v82 = sub_15E1B70(v81);
  v283 = v82;
  if ( v82 )
    ++*(_DWORD *)(v82 + 8);
  sub_D50200(0, v298);
  v83 = a1[1];
  v397 = 0;
  v399 = 0;
  v255 = v83;
  v398 = v83;
  v400 = v83;
  v401[1] = v83;
  v402 = 0;
  v403 = v83;
  if ( v240 )
  {
    v395 = 0;
    v84 = _mm_loadh_ps((const double *)&v235);
    v396 = v83;
    v374 = v84;
    sub_D50220(&v395, v291);
    v274 = v395;
    v238 = v396;
  }
  else
  {
    v238 = v83;
    v274 = 0;
  }
  v85 = sub_15E1B70(a1[30]);
  v86 = v85;
  if ( v85 )
    ++*(_DWORD *)(v85 + 8);
  sub_D50200(v397, v398);
  v397 = v86;
  v87 = sub_D50160((__int64)v303, (int)v293 + 3, v281);
  v88 = v87;
  if ( v87 )
    ++*(_DWORD *)(v87 + 8);
  sub_D50200(v399, v400);
  v399 = v88;
  v89 = sub_D50430((__int64)v303, 3u);
  v271 = v89;
  if ( v89 )
    ++*(_DWORD *)(v89 + 8);
  sub_D50200(0, v255);
  v90 = v292;
  sub_D55100((__int64)a1, v399, v292, &v402);
  v293 = a1[1];
  v91 = v293;
  sub_D50390((__int64)v303, v90);
  v92 = sub_15E1B70(v91);
  v267 = v92;
  if ( v92 )
    ++*(_DWORD *)(v92 + 8);
  sub_D50200(0, v293);
  v93 = a1[1];
  sub_D81BF0(v303, 2, (unsigned int)v292);
  v94 = sub_15E1B70(v93);
  v291 = (__int64 *)v94;
  if ( v94 )
    ++*(_DWORD *)(v94 + 8);
  sub_D50200(0, v293);
  v95 = v303;
  v276 = a1[1];
  v96 = sub_D50430((__int64)v303, 2u);
  v97 = sub_D500F0((__int64)v95, v383);
  v98 = a1[30];
  v420 = v97;
  v421 = v96;
  v99 = sub_15E1AF0(v98);
  v289 = v99;
  if ( v99 )
    ++*(_DWORD *)(v99 + 8);
  sub_D50200(0, v276);
  v100 = sub_15E1B70(a1[30]);
  v303 = (__int64 *)v100;
  if ( v100 )
    ++*(_DWORD *)(v100 + 8);
  sub_D50200(0, v293);
  v101 = sub_15E1B70(a1[1]);
  v292 = v101;
  if ( v101 )
    ++*(_DWORD *)(v101 + 8);
  sub_D50200(0, v276);
  *(_QWORD *)v275 = a1[1];
  v102 = v275[0];
  sub_15E1A70(v275[0]);
  sub_15E1BF0(v102);
  v103 = a1[1];
  sub_15E1A70(v103);
  sub_15E1BF0(v103);
  sub_15E1B70(a1[1]);
  v104 = sub_15E1BF0(v275[0]);
  v105 = v104;
  if ( v104 )
    ++*(_DWORD *)(v104 + 8);
  sub_D50200(0, *(__int64 *)v275);
  v106 = a1[1];
  v406 = 0;
  v401[0] = v271;
  v407 = v106;
  v395 = v274;
  v408 = 0;
  v396 = v238;
  v409 = v106;
  *(_QWORD *)v410 = 0;
  v411 = v106;
  v404 = 0;
  v405 = v106;
  v273 = v401;
  sub_D66E50(a1, v299, v401, &v395, &v399, &v397, &v404);
  v107 = a1[1];
  v420 = 0;
  v243 = v404;
  v421 = v107;
  v171 = v405;
  sub_D5C740(a1, v299, v295, (__int64 *)v305);
  sub_D690E0(a1, v299, v273, &v404, (__int64 *)v305, &v406);
  v108 = v420;
  if ( v420 )
  {
    v109 = v421;
    v110 = (*(_DWORD *)(v420 + 8))-- == 1;
    if ( v110 )
      sub_15D7BC0(v109, v108);
  }
  sub_D690E0(a1, v299, v273, &v404, v295, &v408);
  v111 = a1[1];
  sub_15E1B70(v111);
  v112 = sub_15E1A70(v111);
  v113 = v112;
  if ( v112 )
    ++*(_DWORD *)(v112 + 8);
  sub_D50200(0, v106);
  sub_D51DB0((__int64)a1, v113, v408, v406, (__int64 *)v410, v114);
  sub_D51DB0((__int64)a1, v105, *(__int64 *)v410, v243, &v358, v115);
  sub_D51DB0((__int64)a1, v272, v268, v358, *(__int64 **)v304, v116);
  sub_D51DB0((__int64)a1, v260, v249, **(_QWORD **)v304, *(__int64 **)v304, v117);
  sub_D51DB0((__int64)a1, v259, v248, **(_QWORD **)v304, *(__int64 **)v304, v118);
  sub_D51DB0((__int64)a1, v257, v258, **(_QWORD **)v304, *(__int64 **)v304, v119);
  sub_D51DB0((__int64)a1, v256, v247, **(_QWORD **)v304, *(__int64 **)v304, v120);
  sub_D51DB0((__int64)a1, v336, v244, **(_QWORD **)v304, *(__int64 **)v304, v121);
  v122 = a1[1];
  v412 = 0;
  v420 = 0;
  v123 = **(_QWORD **)v304;
  v413 = v122;
  v421 = v122;
  sub_D52DE0(
    (int)a1,
    v123,
    (int)&v412,
    v124,
    v304[0],
    v125,
    &v412,
    v151,
    v155,
    v159,
    v163,
    v167,
    v171,
    v175,
    v179,
    v183,
    v187,
    v191,
    v195,
    v199,
    v203,
    v207,
    v211,
    v215,
    v219);
  sub_D51DB0((__int64)a1, v320, v280, v246, (__int64 *)v305, v126);
  sub_D51DB0((__int64)a1, v412, v420, **(_QWORD **)v304, *(__int64 **)v304, v127);
  sub_D50200(v420, v421);
  sub_D50200(v412, v413);
  sub_D50200(*(__int64 *)v410, v411);
  sub_D50200(v113, v106);
  sub_D50200(v408, v409);
  sub_D50200(v406, v407);
  sub_D50200(v243, v172);
  sub_D50200(v105, *(__int64 *)v275);
  v128 = v276;
  sub_D50200(v292, v276);
  sub_D50200(v289, v128);
  v129 = v293;
  sub_D50200((__int64)v303, v293);
  sub_D50200((__int64)v291, v129);
  sub_D50200(v267, v129);
  sub_D50200(v402, v403);
  sub_D50200(v271, v255);
  sub_D50200(v399, v400);
  sub_D50200(v397, v398);
  sub_D50200(v274, v238);
  v130 = v261;
  sub_D50200((__int64)v231, v261);
  sub_D50200((__int64)v254, v130);
  sub_182EF00(v418, v284);
  v131 = v239;
  sub_D50200(v290, v239);
  sub_D50200(v266, v131);
  sub_182EF00(v416.m128_u64[0], &v416.m128_u16[4]);
  sub_D50200(v252, v285);
  sub_D50200(v253, v286);
  v132 = v298;
  sub_D50200(v283, v298);
  sub_D50200(v282, v132);
  sub_D50200(v281, v132);
  sub_D50200(v296, v132);
  sub_D50200(*(__int64 *)v300, v234);
  sub_D50200(v250, v233);
  sub_D50200(v236, v130);
  sub_D50200(v237, v130);
  sub_D50200(v270, v130);
  sub_D50200(v294, v130);
  sub_D50200((__int64)v301, v130);
  sub_D50200(v287, v152);
  sub_D50200(v262, v152);
  sub_D50200(v288, v156);
  sub_D50200(v263, v156);
  sub_182EF00(v414, v251);
  sub_D50200(v387, v388);
  sub_D50200(v385, v386);
  sub_D50200(v383, v384);
  sub_D50200(v245, v242);
  sub_D50200(v379, v380);
  sub_D50200(v377, v378);
  sub_D50200(v375, v376);
  sub_D50200(v240, v235);
  sub_D50200(v269, v160);
  sub_D50200(v372, v373);
  sub_D50200(v265, v160);
  sub_D50200(v264, v160);
  sub_D50200(v278, v212);
  sub_D50200(v200, v204);
  sub_D50200(v196, v279);
  sub_D50200(v241, v168);
  sub_D50200(v192, v164);
  sub_D50200(v180, v188);
  sub_D50200(v358, v359);
  sub_D50200(v268, v232);
  sub_D50200(v249, v230);
  sub_D50200(v248, v228);
  sub_D50200(v258, v226);
  sub_D50200(v247, v221);
  sub_D50200(v244, v176);
  sub_D50200(v272, v302);
  sub_D50200(v260, v229);
  sub_D50200(v259, v227);
  sub_D50200(v257, v224);
  sub_D50200(v256, v208);
  sub_D50200(v336, v337);
  sub_D50200(v334, v335);
  sub_D50200(v332, v333);
  sub_D50200(v330, v331);
  sub_D50200(*(__int64 *)v328, v329);
  sub_D50200(v326, v327);
  sub_D50200(v324, v325);
  sub_D50200(v322, v323);
  sub_D50200(v320, v321);
  sub_D50200(*(__int64 *)v318, v319);
  sub_D50200(v316, v317);
  sub_D50200(v225, v297);
  sub_D50200(v222, v223);
  sub_D50200(v280, v220);
  sub_D50200(v246, v216);
  return sub_D50200(v277, v184);
}

