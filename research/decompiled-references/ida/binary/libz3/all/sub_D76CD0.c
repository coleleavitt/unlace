__int64 __fastcall sub_D76CD0(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 *a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  unsigned int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rdi
  bool v35; // zf
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  _QWORD *v44; // rax
  void *v45; // r14
  __int64 v46; // rax
  __int64 v47; // r14
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // rdi
  void *v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rsi
  __int64 v56; // rdi
  struct _Unwind_Exception *v57; // rbx
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // rdi
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rdi
  void *v66; // r13
  __int64 v67; // r12
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // rdi
  __int64 v71; // rax
  int v72; // r9d
  __int64 v73; // r13
  __int64 v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rbx
  int v80; // r9d
  unsigned __int64 v81; // rsi
  unsigned __int64 v82; // rdi
  __int64 v83; // rdi
  void *v84; // r14
  __int64 v85; // r12
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rbx
  unsigned __int64 v94; // rsi
  unsigned __int64 v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rbx
  unsigned __int64 v98; // rsi
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // r14
  __int64 v104; // rax
  __int64 v105; // r12
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rbx
  __int64 v111; // rdi
  __int64 v112; // rax
  __int64 v113; // r13
  __int64 v114; // rsi
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rsi
  int v118; // r9d
  __int64 v119; // r13
  int v120; // r9d
  int v121; // r9d
  int v122; // r9d
  __int64 result; // rax
  __int64 v124; // rsi
  __int64 v125; // rdi
  unsigned __int64 v126; // rsi
  unsigned __int64 v127; // rdi
  struct _Unwind_Exception *v128; // rbx
  __int64 v129; // rsi
  __int64 v130; // rdi
  unsigned __int64 v131; // rsi
  unsigned __int64 v132; // rdi
  __int64 v133; // rsi
  __int64 v134; // rdi
  __int64 v135; // rsi
  __int64 v136; // rdi
  __int64 v137; // rsi
  __int64 v138; // rdi
  __int64 v139; // rcx
  __int64 v140; // rsi
  __int64 v141; // rdi
  __int64 v142; // rsi
  __int64 v143; // rdi
  __int64 v144; // rsi
  __int64 v145; // rdi
  __int64 v146; // rsi
  void *v147; // rdi
  __int64 v148; // rsi
  void *v149; // rdi
  __int64 v150; // rsi
  void *v151; // rdi
  __int64 v152; // rdx
  __int64 v153; // rsi
  __int64 v154; // rdi
  __int64 v155; // rsi
  __int64 v156; // rdi
  __int64 v157; // rsi
  __int64 v158; // rdi
  __int64 v159; // rsi
  __int64 v160; // rdi
  int v161; // ecx
  int v162; // r8d
  int v163; // r9d
  void *v164; // [rsp+0h] [rbp-4A0h]
  void *v165; // [rsp+0h] [rbp-4A0h]
  __int64 v166; // [rsp+0h] [rbp-4A0h]
  __int64 v167; // [rsp+8h] [rbp-498h]
  __int64 v168; // [rsp+8h] [rbp-498h]
  __int64 v169; // [rsp+8h] [rbp-498h]
  int v170; // [rsp+10h] [rbp-490h]
  int v171; // [rsp+10h] [rbp-490h]
  __int64 v172; // [rsp+10h] [rbp-490h]
  __int64 v173; // [rsp+18h] [rbp-488h]
  __int64 v174; // [rsp+18h] [rbp-488h]
  __int64 v175; // [rsp+18h] [rbp-488h]
  int v176; // [rsp+20h] [rbp-480h]
  int v177; // [rsp+20h] [rbp-480h]
  int v178; // [rsp+20h] [rbp-480h]
  void *v179; // [rsp+20h] [rbp-480h]
  __int64 v180; // [rsp+28h] [rbp-478h]
  __int64 v181; // [rsp+28h] [rbp-478h]
  __int64 v182; // [rsp+28h] [rbp-478h]
  __int64 v183; // [rsp+30h] [rbp-470h]
  __int64 v184; // [rsp+30h] [rbp-470h]
  __int64 v185; // [rsp+30h] [rbp-470h]
  __int64 v186; // [rsp+38h] [rbp-468h]
  __int64 v187; // [rsp+38h] [rbp-468h]
  void *v188; // [rsp+38h] [rbp-468h]
  __int64 v189; // [rsp+40h] [rbp-460h]
  __int64 v190; // [rsp+40h] [rbp-460h]
  __int64 v191; // [rsp+40h] [rbp-460h]
  __int64 v192; // [rsp+48h] [rbp-458h]
  __int64 v193; // [rsp+48h] [rbp-458h]
  void *v194; // [rsp+48h] [rbp-458h]
  __int64 v195; // [rsp+50h] [rbp-450h]
  __int64 v196; // [rsp+50h] [rbp-450h]
  void *v197; // [rsp+50h] [rbp-450h]
  __int64 v198; // [rsp+58h] [rbp-448h]
  __int64 v199; // [rsp+58h] [rbp-448h]
  __int64 v200; // [rsp+58h] [rbp-448h]
  __int64 v201; // [rsp+60h] [rbp-440h]
  __int64 v202; // [rsp+60h] [rbp-440h]
  __int64 v203; // [rsp+60h] [rbp-440h]
  __int64 v204; // [rsp+68h] [rbp-438h]
  __int64 v205; // [rsp+68h] [rbp-438h]
  __int64 v206; // [rsp+68h] [rbp-438h]
  __int64 v207; // [rsp+70h] [rbp-430h]
  __int64 v208; // [rsp+70h] [rbp-430h]
  __int64 v209; // [rsp+70h] [rbp-430h]
  __int64 v210; // [rsp+78h] [rbp-428h]
  __int64 v211; // [rsp+78h] [rbp-428h]
  __int64 v212; // [rsp+78h] [rbp-428h]
  __int64 v213; // [rsp+80h] [rbp-420h]
  __int64 v214; // [rsp+80h] [rbp-420h]
  __int64 v215; // [rsp+80h] [rbp-420h]
  __int64 v216; // [rsp+88h] [rbp-418h]
  __int64 v217; // [rsp+88h] [rbp-418h]
  __int64 v218; // [rsp+88h] [rbp-418h]
  __int64 v219; // [rsp+90h] [rbp-410h]
  __int64 v220; // [rsp+90h] [rbp-410h]
  __int64 v221; // [rsp+90h] [rbp-410h]
  __int64 v222; // [rsp+98h] [rbp-408h]
  __int64 v223; // [rsp+A0h] [rbp-400h]
  __int64 v224; // [rsp+A8h] [rbp-3F8h]
  __int64 v225; // [rsp+B0h] [rbp-3F0h]
  unsigned __int64 v226; // [rsp+B8h] [rbp-3E8h]
  __int64 v227; // [rsp+C0h] [rbp-3E0h]
  __int64 v228; // [rsp+C8h] [rbp-3D8h]
  __int64 v229; // [rsp+D0h] [rbp-3D0h]
  __int64 v230; // [rsp+D8h] [rbp-3C8h]
  __int64 v231; // [rsp+E0h] [rbp-3C0h]
  __int64 v232; // [rsp+E8h] [rbp-3B8h]
  unsigned __int64 v233; // [rsp+F0h] [rbp-3B0h]
  __int64 v234; // [rsp+F8h] [rbp-3A8h]
  __int64 v235; // [rsp+100h] [rbp-3A0h]
  void *v236; // [rsp+108h] [rbp-398h]
  __int64 v238; // [rsp+118h] [rbp-388h]
  unsigned __int64 v240; // [rsp+140h] [rbp-360h]
  __int64 v241; // [rsp+148h] [rbp-358h]
  int v242; // [rsp+150h] [rbp-350h]
  unsigned int v243; // [rsp+154h] [rbp-34Ch]
  int v244; // [rsp+158h] [rbp-348h]
  unsigned __int64 v245; // [rsp+158h] [rbp-348h]
  __int64 v246; // [rsp+158h] [rbp-348h]
  __int64 v247; // [rsp+160h] [rbp-340h]
  __int64 v248; // [rsp+168h] [rbp-338h]
  int v249; // [rsp+170h] [rbp-330h]
  __int64 v250; // [rsp+170h] [rbp-330h]
  __int64 v251; // [rsp+170h] [rbp-330h]
  __int64 v252; // [rsp+178h] [rbp-328h]
  __int64 v253; // [rsp+180h] [rbp-320h]
  unsigned int v254; // [rsp+188h] [rbp-318h]
  int v255; // [rsp+188h] [rbp-318h]
  int v256; // [rsp+190h] [rbp-310h]
  __int64 v257; // [rsp+190h] [rbp-310h]
  _QWORD *v258; // [rsp+198h] [rbp-308h]
  __int64 v259; // [rsp+198h] [rbp-308h]
  int v260; // [rsp+198h] [rbp-308h]
  int v261; // [rsp+198h] [rbp-308h]
  __int64 v262; // [rsp+1A0h] [rbp-300h]
  __int64 i; // [rsp+1A8h] [rbp-2F8h]
  __int64 v264; // [rsp+1A8h] [rbp-2F8h]
  __int64 v265; // [rsp+1A8h] [rbp-2F8h]
  __int64 v266; // [rsp+1B0h] [rbp-2F0h]
  int v267; // [rsp+1B0h] [rbp-2F0h]
  int v268; // [rsp+1B0h] [rbp-2F0h]
  int exception_cleanup; // [rsp+1B0h] [rbp-2F0h]
  struct _Unwind_Exception *v270; // [rsp+1B8h] [rbp-2E8h] BYREF
  __int64 v271; // [rsp+1C0h] [rbp-2E0h] BYREF
  void *v272; // [rsp+1C8h] [rbp-2D8h]
  int v273[2]; // [rsp+1D8h] [rbp-2C8h] BYREF
  struct _Unwind_Exception *v274; // [rsp+1E0h] [rbp-2C0h] BYREF
  int v275[2]; // [rsp+1E8h] [rbp-2B8h] BYREF
  int v276[2]; // [rsp+1F0h] [rbp-2B0h] BYREF
  int v277[2]; // [rsp+1F8h] [rbp-2A8h] BYREF
  __int64 v278[2]; // [rsp+200h] [rbp-2A0h] BYREF
  __int64 v279[2]; // [rsp+210h] [rbp-290h] BYREF
  __int64 v280; // [rsp+220h] [rbp-280h] BYREF
  __int64 v281; // [rsp+228h] [rbp-278h]
  __int64 v282; // [rsp+230h] [rbp-270h] BYREF
  __int64 v283; // [rsp+238h] [rbp-268h]
  __int64 v284; // [rsp+240h] [rbp-260h] BYREF
  __int64 v285; // [rsp+248h] [rbp-258h]
  __int64 v286; // [rsp+250h] [rbp-250h] BYREF
  __int64 v287; // [rsp+258h] [rbp-248h]
  __int64 v288; // [rsp+260h] [rbp-240h] BYREF
  __int64 v289; // [rsp+268h] [rbp-238h]
  __int64 v290; // [rsp+270h] [rbp-230h] BYREF
  __int64 v291; // [rsp+278h] [rbp-228h]
  int v292[2]; // [rsp+280h] [rbp-220h] BYREF
  __int64 v293; // [rsp+288h] [rbp-218h]
  __int64 v294; // [rsp+290h] [rbp-210h] BYREF
  __int64 v295; // [rsp+298h] [rbp-208h]
  __int64 v296; // [rsp+2A0h] [rbp-200h] BYREF
  __int64 v297; // [rsp+2A8h] [rbp-1F8h]
  __int64 v298; // [rsp+2B0h] [rbp-1F0h] BYREF
  void *v299; // [rsp+2B8h] [rbp-1E8h]
  int v300[2]; // [rsp+2C0h] [rbp-1E0h] BYREF
  void *v301; // [rsp+2C8h] [rbp-1D8h]
  __int64 v302; // [rsp+2D0h] [rbp-1D0h] BYREF
  void *v303; // [rsp+2D8h] [rbp-1C8h]
  __int64 v304; // [rsp+2E0h] [rbp-1C0h] BYREF
  void *v305; // [rsp+2E8h] [rbp-1B8h]
  __int64 v306; // [rsp+2F0h] [rbp-1B0h] BYREF
  __int64 v307; // [rsp+2F8h] [rbp-1A8h]
  __int64 v308; // [rsp+300h] [rbp-1A0h] BYREF
  void *v309; // [rsp+308h] [rbp-198h]
  __int64 v310; // [rsp+310h] [rbp-190h] BYREF
  void *v311; // [rsp+318h] [rbp-188h]
  __int64 v312; // [rsp+320h] [rbp-180h] BYREF
  void *v313; // [rsp+328h] [rbp-178h]
  __int64 v314; // [rsp+330h] [rbp-170h] BYREF
  __int64 v315; // [rsp+338h] [rbp-168h]
  __int64 v316; // [rsp+340h] [rbp-160h] BYREF
  __int64 v317; // [rsp+348h] [rbp-158h]
  __int64 v318; // [rsp+350h] [rbp-150h] BYREF
  __int64 v319; // [rsp+358h] [rbp-148h]
  __int64 v320; // [rsp+360h] [rbp-140h] BYREF
  __int64 v321; // [rsp+368h] [rbp-138h]
  __int64 v322[2]; // [rsp+370h] [rbp-130h] BYREF
  __int64 v323; // [rsp+380h] [rbp-120h] BYREF
  __int64 v324; // [rsp+388h] [rbp-118h]
  __int64 v325; // [rsp+390h] [rbp-110h] BYREF
  __int64 v326; // [rsp+398h] [rbp-108h]
  __m128i v327; // [rsp+3A0h] [rbp-100h] BYREF
  struct _Unwind_Exception *v328; // [rsp+3B0h] [rbp-F0h] BYREF
  unsigned __int64 v329; // [rsp+3B8h] [rbp-E8h]
  __m128 v330; // [rsp+3C0h] [rbp-E0h]
  __int64 v331; // [rsp+3D0h] [rbp-D0h] BYREF
  __int64 v332; // [rsp+3D8h] [rbp-C8h]
  __m128 v333; // [rsp+3E0h] [rbp-C0h] BYREF
  _OWORD v334[2]; // [rsp+3F0h] [rbp-B0h] BYREF
  __m128 v335; // [rsp+410h] [rbp-90h]
  __int64 v336; // [rsp+420h] [rbp-80h]
  struct _Unwind_Exception *v337; // [rsp+428h] [rbp-78h]
  __m128 v338; // [rsp+430h] [rbp-70h]
  __m128 v339; // [rsp+440h] [rbp-60h] BYREF
  __int64 v340; // [rsp+450h] [rbp-50h] BYREF
  __int64 v341; // [rsp+458h] [rbp-48h]
  __int64 v342; // [rsp+460h] [rbp-40h] BYREF
  __int64 v343; // [rsp+468h] [rbp-38h]

  v235 = a1[1];
  v278[1] = v235;
  v279[1] = v235;
  v6 = *(_QWORD *)(*a4 + 32LL);
  v222 = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v278[0] = v6;
  v7 = a4[1];
  v238 = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v280 = 0;
  v8 = *(_QWORD *)(a2 + 40);
  v279[0] = v7;
  v281 = v235;
  sub_D5B8E0((__int64)a1, v8, &v280);
  v9 = *(_QWORD *)(a2 + 40);
  v282 = 0;
  v224 = v280;
  v283 = v235;
  v170 = v281;
  sub_D51670((__int64)a1, v9, &v282);
  v284 = 0;
  v210 = v282;
  v173 = v283;
  v10 = *(_QWORD *)(a2 + 40);
  v285 = v235;
  sub_D518E0((__int64)a1, v10, &v284);
  v286 = 0;
  v213 = v284;
  v180 = v285;
  v11 = *(_QWORD *)(a2 + 40);
  v287 = v235;
  sub_D5B6C0((__int64)a1, v11, &v286);
  v288 = 0;
  v216 = v286;
  v183 = v287;
  v12 = *(_QWORD *)(a2 + 40);
  v289 = v235;
  sub_D5B4A0((__int64)a1, v12, &v288);
  v290 = 0;
  v219 = v288;
  *(_QWORD *)v292 = 0;
  v189 = v289;
  v13 = a1[1];
  v294 = 0;
  v291 = v13;
  v293 = v13;
  v295 = v13;
  v296 = 0;
  v297 = v13;
  sub_D5BB00(a1, v238, &v290);
  sub_D52DE0(
    (int)a1,
    v238,
    (int)v292,
    v14,
    v15,
    v16,
    v164,
    v167,
    v170,
    v173,
    v176,
    v180,
    v183,
    v186,
    v189,
    v192,
    v195,
    v198,
    v201,
    v204,
    v207,
    v210,
    v213,
    v216,
    v219);
  sub_D52AC0((__int64)a1, v238, &v294);
  sub_D61A80(a1, v238, &v296);
  v205 = a1[1];
  v247 = (__int64)(a1 + 29);
  v17 = sub_D50430((__int64)(a1 + 29), 1u);
  v271 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v18 = sub_D50390(v247, 1u);
  v248 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v298 = 0;
  v19 = (void *)a1[1];
  *(_QWORD *)v300 = 0;
  v236 = v19;
  v299 = v19;
  v301 = v19;
  v303 = v19;
  v302 = 0;
  v223 = v290;
  if ( v290 )
    ++*(_DWORD *)(v290 + 8);
  if ( v238 )
  {
    v304 = 0;
    v305 = v19;
    sub_D50220(&v304, v279);
    v225 = v304;
    v178 = (int)v305;
    sub_D63CE0(a1, v238, &v298);
    v306 = 0;
    v307 = (__int64)v236;
    sub_D50220(&v306, v279);
    v227 = v306;
    sub_D52DE0(
      (int)a1,
      v238,
      (int)v300,
      v20,
      v21,
      v22,
      v165,
      v168,
      v171,
      v174,
      v178,
      v181,
      v184,
      v307,
      v190,
      v193,
      v196,
      v199,
      v202,
      v205,
      v208,
      v211,
      v214,
      v217,
      v220);
    v308 = 0;
    v309 = v236;
    sub_D50220(&v308, v279);
    v228 = v308;
    v194 = v309;
  }
  else
  {
    sub_D63CE0(a1, 0, &v298);
    sub_D52DE0(
      (int)a1,
      0,
      (int)v300,
      v161,
      v162,
      v163,
      v165,
      v168,
      v171,
      v174,
      v177,
      v181,
      v184,
      v187,
      v190,
      v193,
      v196,
      v199,
      v202,
      v205,
      v208,
      v211,
      v214,
      v217,
      v220);
    v228 = 0;
    v227 = 0;
    v194 = v236;
    v188 = v236;
    v179 = v236;
    v225 = 0;
  }
  sub_D52C50((__int64)a1, v238, &v302);
  if ( v224 )
  {
    v310 = 0;
    v311 = v236;
    sub_D50220(&v310, &v280);
    v229 = v310;
    v197 = v311;
  }
  else
  {
    v229 = 0;
    v197 = v236;
  }
  v27 = sub_15C5540((int)a1 + 432, *(_QWORD *)(a2 + 40), v23, v24, v25, v26);
  v242 = sub_15C5560(a1 + 54, *(_QWORD *)(a2 + 40));
  v28 = a1[1];
  v316 = 0;
  v317 = v28;
  v318 = 0;
  v319 = v28;
  v320 = 0;
  v321 = v28;
  v314 = 0;
  v315 = v28;
  sub_D59470(a1, v238, &v314, &v316, &v318, &v320, 1);
  v323 = 0;
  v209 = v314;
  v325 = 0;
  v169 = v315;
  v203 = a1[1];
  v322[1] = v203;
  v324 = v203;
  v326 = v203;
  if ( v271 )
    ++*(_DWORD *)(v271 + 8);
  sub_D81D60(v247, 1, v320);
  v340 = 1;
  v341 = 0;
  *(_QWORD *)v273 = v318;
  v29 = a1[30];
  v272 = &v340;
  sub_15DCAD0(v29, (int)v273, 0);
  sub_15D0DF0(&v340);
  v30 = sub_15E1B70(a1[30]);
  v234 = v30;
  if ( v30 )
    ++*(_DWORD *)(v30 + 8);
  v327.m128i_i64[0] = sub_D81CD0(v247, v27, 1, v30);
  v340 = 2;
  v31 = a1[30];
  v341 = 0;
  v32 = sub_15DCAD0(v31, (int)&v327, 0);
  sub_15D0DF0(v272);
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v33 = v325;
  if ( v325 )
  {
    v34 = v326;
    v35 = (*(_DWORD *)(v325 + 8))-- == 1;
    if ( v35 )
      sub_15D7BC0(v34, v33);
  }
  v325 = v32;
  v36 = a1[1];
  v166 = v36;
  sub_D50160(v247, 0, v234);
  v37 = sub_15E1B70(v36);
  v231 = v37;
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  v38 = a1[1];
  v39 = a1[30];
  v327.m128i_i64[0] = 0;
  v200 = v38;
  v327.m128i_i64[1] = v38;
  v333 = _mm_loadh_ps((const double *)&v271);
  v40 = sub_15E1AF0(v39);
  v230 = v40;
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
  v41 = a1[30];
  v334[0] = _mm_loadh_ps((const double *)&v316);
  v42 = sub_15E1AF0(v41);
  v232 = v42;
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  v258 = a1 + 2;
  sub_D81E50(a1 + 2, v231, v230, v42, &v327);
  v43 = a1[1];
  v333.m128_u64[0] = 0;
  *(_QWORD *)&v334[0] = 0;
  v233 = v43;
  v333.m128_u64[1] = v43;
  *((_QWORD *)&v334[0] + 1) = v43;
  v254 = v242 + 3;
  v44 = sub_D59FE0((__int64 *)(a1[55] + 760LL), v242 + 3);
  v340 = 0;
  v243 = v242 + 5;
  v341 = 0;
  v45 = qword_1C7F2C0;
  v342 = 1;
  v343 = 0;
  if ( (*((_BYTE *)v44 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v272, v44);
  else
    LODWORD(v340) = *(_DWORD *)v44;
  sub_182CBA0(v45, &v342);
  LODWORD(v342) = 1;
  BYTE4(v342) &= ~1u;
  v46 = sub_1674520(v247, v272, v243);
  v47 = v46;
  if ( v46 )
    ++*(_DWORD *)(v46 + 8);
  v48 = v333.m128_u64[0];
  if ( v333.m128_u64[0] )
  {
    v49 = v333.m128_u64[1];
    v35 = (*(_DWORD *)(v333.m128_u64[0] + 8))-- == 1;
    if ( v35 )
      sub_15D7BC0(v49, v48);
  }
  v50 = qword_1C7F2C0;
  v333.m128_u64[0] = v47;
  sub_182CBA0(qword_1C7F2C0, v272);
  sub_182CBA0(v50, &v342);
  v51 = sub_D50430(v247, 4u);
  v52 = a1[30];
  v334[1] = _mm_unpacklo_epi64(_mm_loadl_epi64(&v327), (__m128i)(unsigned __int64)v51);
  sub_15E1AF0(v52);
  v53 = sub_15E1B70(a1[30]);
  v54 = v53;
  if ( v53 )
    ++*(_DWORD *)(v53 + 8);
  v55 = *(_QWORD *)&v334[0];
  if ( *(_QWORD *)&v334[0] )
  {
    v56 = *((_QWORD *)&v334[0] + 1);
    v35 = (*(_DWORD *)(*(_QWORD *)&v334[0] + 8LL))-- == 1;
    if ( v35 )
      sub_15D7BC0(v56, v55);
  }
  *(_QWORD *)&v334[0] = v54;
  v57 = (struct _Unwind_Exception *)v333.m128_u64[0];
  if ( v333.m128_u64[0] )
  {
    v328 = nullptr;
    v329 = v233;
    sub_D50220((__int64 *)&v328, (__int64 *)&v333);
    v57 = v328;
    v226 = v329;
  }
  else
  {
    v226 = v233;
  }
  if ( v242 == -3 )
  {
    v270 = v57;
    v262 = 0;
  }
  else
  {
    v256 = 0;
    for ( i = 0; ; i = v262 )
    {
      v274 = v57;
      LOBYTE(v341) = 0;
      LODWORD(v340) = v242 + 4;
      v83 = a1[30];
      v342 = 1;
      v84 = v272;
      v343 = 0;
      v85 = sub_15DCAD0(v83, (int)&v274, 0);
      sub_15D0DF0(&v342);
      sub_15D0DF0(v84);
      v86 = a1[30];
      v335.m128_u64[1] = v85;
      v335.m128_u64[0] = v271;
      v87 = sub_15E1AF0(v86);
      v270 = (struct _Unwind_Exception *)v87;
      if ( v87 )
        ++*(_DWORD *)(v87 + 8);
      if ( v57 )
      {
        v35 = LODWORD(v57->exception_cleanup)-- == 1;
        if ( v35 )
          sub_15D7BC0(v226, v57);
      }
      v58 = a1[30];
      v241 = a1[1];
      v336 = v271;
      v337 = v270;
      sub_15E1AF0(v58);
      v59 = a1[30];
      v338 = _mm_loadh_ps((const double *)&v271);
      sub_15E1AF0(v59);
      v60 = sub_15E1B70(a1[30]);
      v61 = v60;
      if ( v60 )
        ++*(_DWORD *)(v60 + 8);
      v62 = a1[30];
      v339 = _mm_loadh_ps((const double *)&v271);
      sub_15E1AF0(v62);
      v63 = sub_15E1B70(a1[30]);
      v262 = v63;
      if ( v63 )
        ++*(_DWORD *)(v63 + 8);
      if ( i )
      {
        v249 = *(_DWORD *)(i + 8);
        *(_DWORD *)(i + 8) = v249 - 1;
        if ( v249 == 1 )
          sub_15D7BC0(v233, i);
      }
      v64 = a1[1];
      LOBYTE(v341) = 0;
      LOBYTE(v343) = 0;
      v240 = v64;
      v65 = a1[30];
      v339.m128_u64[1] = v64;
      v339.m128_u64[0] = 0;
      v66 = v272;
      *(_QWORD *)v275 = v262;
      LODWORD(v340) = v242 + 5;
      LODWORD(v342) = v242 + 5;
      v67 = sub_15DCAD0(v65, (int)v275, 0);
      sub_15D0DF0(&v342);
      sub_15D0DF0(v66);
      if ( v67 )
        ++*(_DWORD *)(v67 + 8);
      if ( (unsigned int)sub_14DE480((_DWORD)v258, v67, v248, (unsigned int)&v339, v68, v69) == 5 )
      {
        v96 = sub_14DC5D0(v258, v67, v248);
        v97 = v96;
        if ( v96 )
          ++*(_DWORD *)(v96 + 8);
        v98 = v339.m128_u64[0];
        if ( v339.m128_u64[0] )
        {
          v99 = v339.m128_u64[1];
          v35 = (*(_DWORD *)(v339.m128_u64[0] + 8))-- == 1;
          if ( v35 )
            sub_15D7BC0(v99, v98);
        }
        v339.m128_u64[0] = v97;
      }
      v70 = a1[30];
      v250 = a1[1];
      v335 = _mm_loadh_ps((const double *)&v270);
      v71 = sub_15E1AF0(v70);
      v73 = v71;
      if ( v71 )
        ++*(_DWORD *)(v71 + 8);
      if ( (unsigned int)sub_14E2530((_DWORD)v258, v339.m128_i32[0], v333.m128_i32[0], v71, (unsigned int)&v333, v72) == 5 )
      {
        v92 = sub_15E1BF0(a1[2]);
        v93 = v92;
        if ( v92 )
          ++*(_DWORD *)(v92 + 8);
        v94 = v333.m128_u64[0];
        if ( v333.m128_u64[0] )
        {
          v95 = v333.m128_u64[1];
          v35 = (*(_DWORD *)(v333.m128_u64[0] + 8))-- == 1;
          if ( v35 )
            sub_15D7BC0(v95, v94);
        }
        v333.m128_u64[0] = v93;
      }
      LOBYTE(v341) = 0;
      v342 = 0;
      *(_QWORD *)v276 = *(_QWORD *)&v334[0];
      v343 = 0;
      v74 = a1[30];
      LODWORD(v340) = v242 + 3;
      v75 = sub_15DCAD0(v74, (int)v276, 0);
      sub_15D0DF0(&v342);
      sub_15D0DF0(v272);
      v340 = v75;
      v76 = a1[30];
      v341 = v271;
      v77 = sub_15E1AF0(v76);
      v264 = v77;
      if ( v77 )
        ++*(_DWORD *)(v77 + 8);
      LOBYTE(v341) = 0;
      v342 = 0;
      *(_QWORD *)v277 = v262;
      v343 = 0;
      v78 = a1[30];
      LODWORD(v340) = v242 + 4;
      v79 = sub_15DCAD0(v78, (int)v277, 0);
      sub_15D0DF0(&v342);
      sub_15D0DF0(v272);
      if ( v79 )
        ++*(_DWORD *)(v79 + 8);
      if ( (unsigned int)sub_14E2530((_DWORD)v258, v339.m128_i32[0], v264, v79, (unsigned int)v334, v80) == 5 )
      {
        v88 = sub_15E1BF0(a1[2]);
        v89 = v88;
        if ( v88 )
          ++*(_DWORD *)(v88 + 8);
        v90 = *(_QWORD *)&v334[0];
        if ( *(_QWORD *)&v334[0] )
        {
          v91 = *((_QWORD *)&v334[0] + 1);
          v35 = (*(_DWORD *)(*(_QWORD *)&v334[0] + 8LL))-- == 1;
          if ( v35 )
          {
            v246 = v88;
            sub_15D7BC0(v91, v90);
            v89 = v246;
          }
        }
        *(_QWORD *)&v334[0] = v89;
      }
      if ( v79 )
      {
        v35 = (*(_DWORD *)(v79 + 8))-- == 1;
        if ( v35 )
          sub_15D7BC0(v250, v79);
      }
      if ( v264 )
      {
        v244 = *(_DWORD *)(v264 + 8);
        *(_DWORD *)(v264 + 8) = v244 - 1;
        if ( v244 == 1 )
          sub_15D7BC0(v250, v264);
      }
      if ( v73 )
      {
        v35 = (*(_DWORD *)(v73 + 8))-- == 1;
        if ( v35 )
          sub_15D7BC0(v250, v73);
      }
      if ( v67 )
      {
        v35 = (*(_DWORD *)(v67 + 8))-- == 1;
        if ( v35 )
          sub_15D7BC0(v240, v67);
      }
      v81 = v339.m128_u64[0];
      if ( v339.m128_u64[0] )
      {
        v82 = v339.m128_u64[1];
        v35 = (*(_DWORD *)(v339.m128_u64[0] + 8))-- == 1;
        if ( v35 )
          sub_15D7BC0(v82, v81);
      }
      if ( v61 )
      {
        v35 = (*(_DWORD *)(v61 + 8))-- == 1;
        if ( v35 )
          sub_15D7BC0(v241, v61);
      }
      if ( v254 == ++v256 )
        break;
      v57 = v270;
    }
  }
  v100 = a1[1];
  v339.m128_u64[0] = 0;
  v245 = v100;
  v339.m128_u64[1] = v100;
  v101 = sub_D50430(v247, v243);
  v265 = v101;
  if ( v101 )
    ++*(_DWORD *)(v101 + 8);
  sub_D81DD0(v258, *(_QWORD *)&v334[0], v101, &v339);
  v253 = a1[1];
  v102 = sub_D50160(v247, 0, v333.m128_i64[0]);
  v103 = v102;
  if ( v102 )
    ++*(_DWORD *)(v102 + 8);
  v104 = sub_D81CD0(v247, v254, 1, v333.m128_u64[0]);
  v105 = v104;
  if ( v104 )
    ++*(_DWORD *)(v104 + 8);
  v106 = sub_D81D60(v247, 1, v104);
  v266 = v106;
  if ( v106 )
    ++*(_DWORD *)(v106 + 8);
  v107 = a1[1];
  v340 = 0;
  v252 = v107;
  v341 = v107;
  v108 = sub_D81D60(v247, v254, v103);
  v257 = v108;
  if ( v108 )
    ++*(_DWORD *)(v108 + 8);
  v109 = sub_D50390(v247, v242 + 4);
  v110 = v109;
  if ( v109 )
    ++*(_DWORD *)(v109 + 8);
  sub_D81E50(v258, v339.m128_u64[0], v257, v109, v272);
  v111 = a1[30];
  v330 = _mm_loadh_ps((const double *)&v340);
  v112 = sub_15E1AF0(v111);
  v113 = v112;
  if ( v112 )
    ++*(_DWORD *)(v112 + 8);
  v114 = v323;
  if ( v323 )
  {
    v115 = v324;
    v35 = (*(_DWORD *)(v323 + 8))-- == 1;
    if ( v35 )
      sub_15D7BC0(v115, v114);
  }
  v116 = a1[1];
  v323 = v113;
  v331 = 0;
  v117 = *(_QWORD *)(a2 + 40);
  v332 = v116;
  v322[0] = v271;
  sub_D66E50(a1, v117, v278, v322, &v323, &v325, &v331);
  v259 = v331;
  v251 = v332;
  if ( v331 )
  {
    v312 = 0;
    v313 = v236;
    sub_D50220(&v312, &v331);
    v119 = v312;
    v272 = v313;
  }
  else
  {
    v119 = 0;
    v272 = v236;
  }
  sub_D51DB0((__int64)a1, v302, v229, v119, a5, v118);
  sub_D51DB0((__int64)a1, *(__int64 *)v300, v228, *a5, a5, v120);
  sub_D51DB0((__int64)a1, v298, v227, *a5, a5, v121);
  result = sub_D51DB0((__int64)a1, v223, v225, *a5, a5, v122);
  if ( v259 )
  {
    v255 = *(_DWORD *)(v259 + 8);
    result = (unsigned int)(v255 - 1);
    *(_DWORD *)(v259 + 8) = result;
    if ( v255 == 1 )
      result = sub_15D7BC0(v251, v259);
  }
  if ( v110 )
  {
    v35 = (*(_DWORD *)(v110 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v252, v110);
  }
  if ( v257 )
  {
    v260 = *(_DWORD *)(v257 + 8);
    result = (unsigned int)(v260 - 1);
    *(_DWORD *)(v257 + 8) = result;
    if ( v260 == 1 )
      result = sub_15D7BC0(v252, v257);
  }
  v124 = v340;
  if ( v340 )
  {
    v125 = v341;
    v35 = (*(_DWORD *)(v340 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v125, v124);
  }
  if ( v266 )
  {
    v261 = *(_DWORD *)(v266 + 8);
    result = (unsigned int)(v261 - 1);
    *(_DWORD *)(v266 + 8) = result;
    if ( v261 == 1 )
      result = sub_15D7BC0(v253, v266);
  }
  if ( v103 )
  {
    v35 = (*(_DWORD *)(v103 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v253, v103);
  }
  if ( v105 )
  {
    v35 = (*(_DWORD *)(v105 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v253, v105);
  }
  if ( v265 )
  {
    v267 = *(_DWORD *)(v265 + 8);
    result = (unsigned int)(v267 - 1);
    *(_DWORD *)(v265 + 8) = result;
    if ( v267 == 1 )
      result = sub_15D7BC0(v245, v265);
  }
  v126 = v339.m128_u64[0];
  if ( v339.m128_u64[0] )
  {
    v127 = v339.m128_u64[1];
    v35 = (*(_DWORD *)(v339.m128_u64[0] + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v127, v126);
  }
  if ( v262 )
  {
    v268 = *(_DWORD *)(v262 + 8);
    result = (unsigned int)(v268 - 1);
    *(_DWORD *)(v262 + 8) = result;
    if ( v268 == 1 )
      result = sub_15D7BC0(v233, v262);
  }
  v128 = v270;
  if ( v270 )
  {
    exception_cleanup = (int)v270->exception_cleanup;
    result = (unsigned int)(exception_cleanup - 1);
    LODWORD(v270->exception_cleanup) = result;
    if ( exception_cleanup == 1 )
      result = sub_15D7BC0(v226, v128);
  }
  v129 = *(_QWORD *)&v334[0];
  if ( *(_QWORD *)&v334[0] )
  {
    v130 = *((_QWORD *)&v334[0] + 1);
    v35 = (*(_DWORD *)(*(_QWORD *)&v334[0] + 8LL))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v130, v129);
  }
  v131 = v333.m128_u64[0];
  if ( v333.m128_u64[0] )
  {
    v132 = v333.m128_u64[1];
    v35 = (*(_DWORD *)(v333.m128_u64[0] + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v132, v131);
  }
  if ( v232 )
  {
    LODWORD(v270) = *(_DWORD *)(v232 + 8);
    v35 = (_DWORD)v270 == 1;
    result = (unsigned int)((_DWORD)v270 - 1);
    *(_DWORD *)(v232 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v200, v232);
  }
  if ( v230 )
  {
    LODWORD(v270) = *(_DWORD *)(v230 + 8);
    v35 = (_DWORD)v270 == 1;
    result = (unsigned int)((_DWORD)v270 - 1);
    *(_DWORD *)(v230 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v200, v230);
  }
  v133 = v327.m128i_i64[0];
  if ( v327.m128i_i64[0] )
  {
    v134 = v327.m128i_i64[1];
    v35 = (*(_DWORD *)(v327.m128i_i64[0] + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v134, v133);
  }
  if ( v231 )
  {
    LODWORD(v270) = *(_DWORD *)(v231 + 8);
    v35 = (_DWORD)v270 == 1;
    result = (unsigned int)((_DWORD)v270 - 1);
    *(_DWORD *)(v231 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v166, v231);
  }
  if ( v234 )
  {
    LODWORD(v270) = *(_DWORD *)(v234 + 8);
    v35 = (_DWORD)v270 == 1;
    result = (unsigned int)((_DWORD)v270 - 1);
    *(_DWORD *)(v234 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v203, v234);
  }
  v135 = v325;
  if ( v325 )
  {
    v136 = v326;
    v35 = (*(_DWORD *)(v325 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v136, v135);
  }
  v137 = v323;
  if ( v323 )
  {
    v138 = v324;
    v35 = (*(_DWORD *)(v323 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v138, v137);
  }
  v139 = v271;
  if ( v271 )
  {
    LODWORD(v270) = *(_DWORD *)(v271 + 8);
    v35 = (_DWORD)v270 == 1;
    result = (unsigned int)((_DWORD)v270 - 1);
    *(_DWORD *)(v271 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v203, v139);
  }
  v140 = v320;
  if ( v320 )
  {
    v141 = v321;
    v35 = (*(_DWORD *)(v320 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v141, v140);
  }
  v142 = v318;
  if ( v318 )
  {
    v143 = v319;
    v35 = (*(_DWORD *)(v318 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v143, v142);
  }
  v144 = v316;
  if ( v316 )
  {
    v145 = v317;
    v35 = (*(_DWORD *)(v316 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v145, v144);
  }
  if ( v209 )
  {
    LODWORD(v270) = *(_DWORD *)(v209 + 8);
    v35 = (_DWORD)v270 == 1;
    result = (unsigned int)((_DWORD)v270 - 1);
    *(_DWORD *)(v209 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v169, v209);
  }
  if ( v119 )
  {
    v35 = (*(_DWORD *)(v119 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v272, v119);
  }
  if ( v229 )
  {
    LODWORD(v272) = *(_DWORD *)(v229 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v229 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v197, v229);
  }
  if ( v228 )
  {
    LODWORD(v272) = *(_DWORD *)(v228 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v228 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v194, v228);
  }
  if ( v227 )
  {
    LODWORD(v272) = *(_DWORD *)(v227 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v227 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v188, v227);
  }
  if ( v225 )
  {
    LODWORD(v272) = *(_DWORD *)(v225 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v225 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v179, v225);
  }
  v146 = v302;
  if ( v302 )
  {
    v147 = v303;
    v35 = (*(_DWORD *)(v302 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v147, v146);
  }
  v148 = *(_QWORD *)v300;
  if ( *(_QWORD *)v300 )
  {
    v149 = v301;
    v35 = (*(_DWORD *)(*(_QWORD *)v300 + 8LL))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v149, v148);
  }
  v150 = v298;
  if ( v298 )
  {
    v151 = v299;
    v35 = (*(_DWORD *)(v298 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v151, v150);
  }
  if ( v223 )
  {
    LODWORD(v272) = *(_DWORD *)(v223 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v223 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v236, v223);
  }
  if ( v248 )
  {
    LODWORD(v272) = *(_DWORD *)(v248 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v248 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v206, v248);
  }
  v152 = v271;
  if ( v271 )
  {
    LODWORD(v272) = *(_DWORD *)(v271 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v271 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v206, v152);
  }
  v153 = v296;
  if ( v296 )
  {
    v154 = v297;
    v35 = (*(_DWORD *)(v296 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v154, v153);
  }
  v155 = v294;
  if ( v294 )
  {
    v156 = v295;
    v35 = (*(_DWORD *)(v294 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v156, v155);
  }
  v157 = *(_QWORD *)v292;
  if ( *(_QWORD *)v292 )
  {
    v158 = v293;
    v35 = (*(_DWORD *)(*(_QWORD *)v292 + 8LL))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v158, v157);
  }
  v159 = v290;
  if ( v290 )
  {
    v160 = v291;
    v35 = (*(_DWORD *)(v290 + 8))-- == 1;
    if ( v35 )
      result = sub_15D7BC0(v160, v159);
  }
  if ( v221 )
  {
    LODWORD(v272) = *(_DWORD *)(v221 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v221 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v191, v221);
  }
  if ( v218 )
  {
    LODWORD(v272) = *(_DWORD *)(v218 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v218 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v185, v218);
  }
  if ( v215 )
  {
    LODWORD(v272) = *(_DWORD *)(v215 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v215 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v182, v215);
  }
  if ( v212 )
  {
    LODWORD(v272) = *(_DWORD *)(v212 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v212 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v175, v212);
  }
  if ( v224 )
  {
    LODWORD(v272) = *(_DWORD *)(v224 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v224 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v172, v224);
  }
  if ( v238 )
  {
    LODWORD(v272) = *(_DWORD *)(v238 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v238 + 8) = result;
    if ( v35 )
      result = sub_15D7BC0(v235, v238);
  }
  if ( v222 )
  {
    LODWORD(v272) = *(_DWORD *)(v222 + 8);
    v35 = (_DWORD)v272 == 1;
    result = (unsigned int)((_DWORD)v272 - 1);
    *(_DWORD *)(v222 + 8) = result;
    if ( v35 )
      return sub_15D7BC0(v235, v222);
  }
  return result;
}

