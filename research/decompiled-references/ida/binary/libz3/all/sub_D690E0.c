__int64 __fastcall sub_D690E0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // r15
  __m128 v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // r8d
  int v23; // r9d
  int v24; // r9d
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r9d
  int v28; // r9d
  __int64 v29; // rax
  __m128 v30; // xmm0
  int v31; // r8d
  int v32; // r9d
  int v33; // r9d
  int v34; // r9d
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // r13
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r13
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r14
  unsigned __int64 v49; // rax
  int v50; // r9d
  __int64 v51; // rax
  int v52; // r9d
  int v53; // r9d
  int v54; // r9d
  int v55; // r9d
  int v56; // r9d
  int v57; // r9d
  int v58; // r9d
  __int64 result; // rax
  unsigned __int64 v60; // rsi
  __int64 v61; // rdi
  bool v62; // zf
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rdi
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // rsi
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdi
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rdi
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rdi
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rdi
  __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rdi
  __int64 v101; // rsi
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // rdi
  __int64 v105; // rsi
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // rsi
  __int64 v114; // rdi
  __int64 v115; // rsi
  __int64 v116; // rdi
  __int64 v117; // rsi
  __int64 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rdi
  __int64 v121; // rsi
  __int64 v122; // rdi
  __int64 v123; // rsi
  __int64 v124; // rdi
  __int64 v125; // rsi
  __int64 v126; // rdi
  __int64 v127; // rsi
  __int64 v128; // rdi
  __int64 v129; // rsi
  __int64 v130; // rdi
  __int64 v131; // rsi
  __int64 v132; // rdi
  __int64 v133; // rsi
  __int64 v134; // rdi
  __int64 v135; // rsi
  __int64 v136; // rdi
  __int64 v137; // rsi
  __int64 v138; // rdi
  __int64 v139; // rsi
  __int64 v140; // rdi
  __int64 v141; // rsi
  __int64 v142; // rdi
  __int64 v143; // rsi
  __int64 v144; // rdi
  __int64 v145; // rsi
  __int64 v146; // rdi
  __int64 v147; // rsi
  __int64 v148; // rdi
  __int64 v149; // rsi
  __int64 v150; // rdi
  __int64 v151; // rsi
  __int64 v152; // rdi
  void *v153; // [rsp+10h] [rbp-4E0h]
  void *v154; // [rsp+10h] [rbp-4E0h]
  __int64 v155; // [rsp+10h] [rbp-4E0h]
  __int64 v156; // [rsp+10h] [rbp-4E0h]
  __int64 v157; // [rsp+10h] [rbp-4E0h]
  __int64 v158; // [rsp+10h] [rbp-4E0h]
  __int64 v159; // [rsp+18h] [rbp-4D8h]
  __int64 v160; // [rsp+18h] [rbp-4D8h]
  __int64 v161; // [rsp+18h] [rbp-4D8h]
  int v162; // [rsp+20h] [rbp-4D0h]
  int v163; // [rsp+20h] [rbp-4D0h]
  __int64 v164; // [rsp+20h] [rbp-4D0h]
  __int64 v165; // [rsp+28h] [rbp-4C8h]
  __int64 v166; // [rsp+28h] [rbp-4C8h]
  __int64 v167; // [rsp+28h] [rbp-4C8h]
  int v168; // [rsp+30h] [rbp-4C0h]
  int v169; // [rsp+30h] [rbp-4C0h]
  __int64 v170; // [rsp+30h] [rbp-4C0h]
  __int64 v171; // [rsp+38h] [rbp-4B8h]
  __int64 v172; // [rsp+38h] [rbp-4B8h]
  __int64 v173; // [rsp+38h] [rbp-4B8h]
  __int64 v174; // [rsp+40h] [rbp-4B0h]
  __int64 v175; // [rsp+40h] [rbp-4B0h]
  __int64 v176; // [rsp+40h] [rbp-4B0h]
  __int64 v177; // [rsp+48h] [rbp-4A8h]
  __int64 v178; // [rsp+48h] [rbp-4A8h]
  __int64 v179; // [rsp+48h] [rbp-4A8h]
  __int64 v180; // [rsp+50h] [rbp-4A0h]
  __int64 v181; // [rsp+50h] [rbp-4A0h]
  __int64 v182; // [rsp+58h] [rbp-498h]
  __int64 v183; // [rsp+58h] [rbp-498h]
  __int64 v184; // [rsp+60h] [rbp-490h]
  __int64 v185; // [rsp+60h] [rbp-490h]
  __int64 v186; // [rsp+68h] [rbp-488h]
  __int64 v187; // [rsp+68h] [rbp-488h]
  unsigned int v188; // [rsp+68h] [rbp-488h]
  unsigned int v189; // [rsp+6Ch] [rbp-484h]
  __int64 v190; // [rsp+70h] [rbp-480h]
  __int64 v191; // [rsp+70h] [rbp-480h]
  __int64 v192; // [rsp+70h] [rbp-480h]
  __int64 v193; // [rsp+78h] [rbp-478h]
  __int64 v194; // [rsp+78h] [rbp-478h]
  __int64 v195; // [rsp+80h] [rbp-470h]
  __int64 v196; // [rsp+80h] [rbp-470h]
  __int64 v197; // [rsp+88h] [rbp-468h]
  __int64 v198; // [rsp+88h] [rbp-468h]
  __int64 v199; // [rsp+90h] [rbp-460h]
  __int64 v200; // [rsp+90h] [rbp-460h]
  __int64 v201; // [rsp+98h] [rbp-458h]
  __int64 v202; // [rsp+98h] [rbp-458h]
  unsigned __int64 v203; // [rsp+98h] [rbp-458h]
  __int64 v204; // [rsp+A0h] [rbp-450h]
  __int64 v205; // [rsp+A0h] [rbp-450h]
  unsigned __int64 v206; // [rsp+A0h] [rbp-450h]
  __int64 v207; // [rsp+A8h] [rbp-448h]
  __int64 v209; // [rsp+B0h] [rbp-440h]
  __int64 v210; // [rsp+B8h] [rbp-438h]
  __int64 v211; // [rsp+C0h] [rbp-430h]
  __int64 v212; // [rsp+C8h] [rbp-428h]
  __int64 v213; // [rsp+D0h] [rbp-420h]
  __int64 v214; // [rsp+D8h] [rbp-418h]
  __int64 v215; // [rsp+E0h] [rbp-410h]
  __int64 v216; // [rsp+E8h] [rbp-408h]
  __int64 v217; // [rsp+F0h] [rbp-400h]
  __int64 v218; // [rsp+F8h] [rbp-3F8h]
  __int64 v219; // [rsp+100h] [rbp-3F0h]
  __int64 v220; // [rsp+108h] [rbp-3E8h]
  int exception_cleanup; // [rsp+110h] [rbp-3E0h]
  struct _Unwind_Exception *v223; // [rsp+118h] [rbp-3D8h]
  struct _Unwind_Exception *v224; // [rsp+118h] [rbp-3D8h]
  int v225; // [rsp+118h] [rbp-3D8h]
  int v226; // [rsp+118h] [rbp-3D8h]
  int v227; // [rsp+118h] [rbp-3D8h]
  int v228; // [rsp+118h] [rbp-3D8h]
  int v229; // [rsp+118h] [rbp-3D8h]
  int v230; // [rsp+118h] [rbp-3D8h]
  int v231; // [rsp+118h] [rbp-3D8h]
  int v232; // [rsp+118h] [rbp-3D8h]
  int v233; // [rsp+118h] [rbp-3D8h]
  int v234; // [rsp+118h] [rbp-3D8h]
  int v235; // [rsp+118h] [rbp-3D8h]
  __int64 v236; // [rsp+120h] [rbp-3D0h] BYREF
  __int64 v237; // [rsp+128h] [rbp-3C8h]
  __int64 v238; // [rsp+130h] [rbp-3C0h] BYREF
  __int64 v239; // [rsp+138h] [rbp-3B8h]
  __int64 v240; // [rsp+140h] [rbp-3B0h] BYREF
  __int64 v241; // [rsp+148h] [rbp-3A8h]
  __int64 v242; // [rsp+150h] [rbp-3A0h] BYREF
  __int64 v243; // [rsp+158h] [rbp-398h]
  int v244[2]; // [rsp+160h] [rbp-390h] BYREF
  __int64 v245; // [rsp+168h] [rbp-388h]
  __int64 v246; // [rsp+170h] [rbp-380h] BYREF
  __int64 v247; // [rsp+178h] [rbp-378h]
  __int64 v248; // [rsp+180h] [rbp-370h] BYREF
  __int64 v249; // [rsp+188h] [rbp-368h]
  __int64 v250; // [rsp+190h] [rbp-360h] BYREF
  __int64 v251; // [rsp+198h] [rbp-358h]
  __int64 v252; // [rsp+1A0h] [rbp-350h] BYREF
  __int64 v253; // [rsp+1A8h] [rbp-348h]
  int v254[2]; // [rsp+1B0h] [rbp-340h] BYREF
  __int64 v255; // [rsp+1B8h] [rbp-338h]
  __int64 v256; // [rsp+1C0h] [rbp-330h] BYREF
  __int64 v257; // [rsp+1C8h] [rbp-328h]
  __int64 v258; // [rsp+1D0h] [rbp-320h] BYREF
  __int64 v259; // [rsp+1D8h] [rbp-318h]
  __int64 v260; // [rsp+1E0h] [rbp-310h] BYREF
  __int64 v261; // [rsp+1E8h] [rbp-308h]
  __int64 v262; // [rsp+1F0h] [rbp-300h] BYREF
  __int64 v263; // [rsp+1F8h] [rbp-2F8h]
  __int64 v264; // [rsp+200h] [rbp-2F0h] BYREF
  __int64 v265; // [rsp+208h] [rbp-2E8h]
  __int64 v266; // [rsp+210h] [rbp-2E0h] BYREF
  __int64 v267; // [rsp+218h] [rbp-2D8h]
  __int64 v268; // [rsp+220h] [rbp-2D0h] BYREF
  __int64 v269; // [rsp+228h] [rbp-2C8h]
  __int64 v270; // [rsp+230h] [rbp-2C0h] BYREF
  __int64 v271; // [rsp+238h] [rbp-2B8h]
  __int64 v272; // [rsp+240h] [rbp-2B0h] BYREF
  __int64 v273; // [rsp+248h] [rbp-2A8h]
  __int64 v274; // [rsp+250h] [rbp-2A0h] BYREF
  __int64 v275; // [rsp+258h] [rbp-298h]
  __int64 v276; // [rsp+260h] [rbp-290h] BYREF
  __int64 v277; // [rsp+268h] [rbp-288h]
  __int64 v278; // [rsp+270h] [rbp-280h] BYREF
  __int64 v279; // [rsp+278h] [rbp-278h]
  __int64 v280; // [rsp+280h] [rbp-270h] BYREF
  __int64 v281; // [rsp+288h] [rbp-268h]
  __int64 v282; // [rsp+290h] [rbp-260h] BYREF
  __int64 v283; // [rsp+298h] [rbp-258h]
  __int64 v284; // [rsp+2A0h] [rbp-250h] BYREF
  __int64 v285; // [rsp+2A8h] [rbp-248h]
  __int64 v286; // [rsp+2B0h] [rbp-240h] BYREF
  __int64 v287; // [rsp+2B8h] [rbp-238h]
  __int64 v288; // [rsp+2C0h] [rbp-230h] BYREF
  __int64 v289; // [rsp+2C8h] [rbp-228h]
  __int64 v290; // [rsp+2D0h] [rbp-220h] BYREF
  __int64 v291; // [rsp+2D8h] [rbp-218h]
  __int64 v292; // [rsp+2E0h] [rbp-210h] BYREF
  __int64 v293; // [rsp+2E8h] [rbp-208h]
  __int64 v294; // [rsp+2F0h] [rbp-200h] BYREF
  __int64 v295; // [rsp+2F8h] [rbp-1F8h]
  __int64 v296; // [rsp+300h] [rbp-1F0h] BYREF
  __int64 v297; // [rsp+308h] [rbp-1E8h]
  __int64 v298; // [rsp+310h] [rbp-1E0h] BYREF
  __int64 v299; // [rsp+318h] [rbp-1D8h]
  __int64 v300; // [rsp+320h] [rbp-1D0h] BYREF
  __int64 v301; // [rsp+328h] [rbp-1C8h]
  __int64 v302; // [rsp+330h] [rbp-1C0h] BYREF
  __int64 v303; // [rsp+338h] [rbp-1B8h]
  __int64 v304; // [rsp+340h] [rbp-1B0h] BYREF
  __int64 v305; // [rsp+348h] [rbp-1A8h]
  __int64 v306; // [rsp+350h] [rbp-1A0h] BYREF
  __int64 v307; // [rsp+358h] [rbp-198h]
  __int64 v308; // [rsp+360h] [rbp-190h] BYREF
  __int64 v309; // [rsp+368h] [rbp-188h]
  __int64 v310; // [rsp+370h] [rbp-180h] BYREF
  __int64 v311; // [rsp+378h] [rbp-178h]
  __int64 v312; // [rsp+380h] [rbp-170h] BYREF
  __int64 v313; // [rsp+388h] [rbp-168h]
  __int64 v314; // [rsp+390h] [rbp-160h] BYREF
  __int64 v315; // [rsp+398h] [rbp-158h]
  __int64 v316; // [rsp+3A0h] [rbp-150h] BYREF
  __int64 v317; // [rsp+3A8h] [rbp-148h]
  __int64 v318; // [rsp+3B0h] [rbp-140h] BYREF
  __int64 v319; // [rsp+3B8h] [rbp-138h]
  __int64 v320; // [rsp+3C0h] [rbp-130h] BYREF
  __int64 v321; // [rsp+3C8h] [rbp-128h]
  __int64 v322; // [rsp+3D0h] [rbp-120h] BYREF
  __int64 v323; // [rsp+3D8h] [rbp-118h]
  __int64 v324; // [rsp+3E0h] [rbp-110h] BYREF
  __int64 v325; // [rsp+3E8h] [rbp-108h]
  __int64 v326; // [rsp+3F0h] [rbp-100h] BYREF
  __int64 v327; // [rsp+3F8h] [rbp-F8h]
  __int64 v328; // [rsp+400h] [rbp-F0h] BYREF
  __int64 v329; // [rsp+408h] [rbp-E8h]
  __int64 v330; // [rsp+410h] [rbp-E0h] BYREF
  __int64 v331; // [rsp+418h] [rbp-D8h]
  __int64 v332; // [rsp+420h] [rbp-D0h] BYREF
  unsigned __int64 v333; // [rsp+428h] [rbp-C8h]
  __int64 v334; // [rsp+430h] [rbp-C0h] BYREF
  __int64 v335; // [rsp+438h] [rbp-B8h]
  __m128 v336; // [rsp+440h] [rbp-B0h] BYREF
  __m128 v337; // [rsp+450h] [rbp-A0h] BYREF
  __m128 v338; // [rsp+460h] [rbp-90h] BYREF
  __m128 v339; // [rsp+470h] [rbp-80h] BYREF
  __m128 v340; // [rsp+480h] [rbp-70h] BYREF
  __m128 v341; // [rsp+490h] [rbp-60h] BYREF
  __m128 v342; // [rsp+4A0h] [rbp-50h] BYREF
  __m128 v343; // [rsp+4B0h] [rbp-40h] BYREF

  v9 = a1[1];
  v236 = 0;
  v237 = v9;
  sub_D5B8E0((__int64)a1, a2, &v236);
  v238 = 0;
  v220 = v236;
  v239 = v9;
  v165 = v237;
  sub_D51670((__int64)a1, a2, &v238);
  v240 = 0;
  v217 = v238;
  v168 = v239;
  v241 = v9;
  sub_D518E0((__int64)a1, a2, &v240);
  v10 = *a4;
  v242 = 0;
  v219 = v240;
  *(_QWORD *)v244 = 0;
  v211 = v241;
  v11 = a1[1];
  v246 = 0;
  v243 = v11;
  v245 = v11;
  v247 = v11;
  v248 = 0;
  v249 = v11;
  v250 = 0;
  v251 = v11;
  v252 = 0;
  v253 = v11;
  *(_QWORD *)v254 = 0;
  v255 = v11;
  v256 = 0;
  v257 = v11;
  v258 = 0;
  v259 = v11;
  v260 = 0;
  v261 = v11;
  sub_D5BB00(a1, v10, &v242);
  sub_D52DE0(
    (int)a1,
    *a4,
    (int)v244,
    v12,
    v13,
    v14,
    v153,
    v159,
    v162,
    v165,
    v168,
    v171,
    v174,
    v177,
    v180,
    v182,
    v184,
    v186,
    v190,
    v193,
    v195,
    v197,
    v199,
    v201,
    v204);
  sub_D52AC0((__int64)a1, *a4, &v246);
  sub_D52C50((__int64)a1, *a4, &v248);
  sub_D61A80(a1, *a4, &v250);
  sub_D5BB00(a1, *a5, &v252);
  sub_D52DE0(
    (int)a1,
    *a5,
    (int)v254,
    v15,
    v16,
    v17,
    v154,
    v160,
    v163,
    v166,
    v169,
    v172,
    v175,
    v178,
    v181,
    v183,
    v185,
    v187,
    v191,
    v194,
    v196,
    v198,
    v200,
    v202,
    v205);
  sub_D52AC0((__int64)a1, *a5, &v256);
  sub_D52C50((__int64)a1, *a5, &v258);
  sub_D61A80(a1, *a5, &v260);
  v18 = a1[1];
  v262 = 0;
  v19 = _mm_loadh_ps((const double *)&v252);
  v263 = v18;
  v264 = 0;
  v265 = v18;
  v266 = 0;
  v267 = v18;
  v268 = 0;
  v269 = v18;
  v276 = 0;
  v277 = v18;
  v278 = 0;
  v279 = v18;
  v280 = 0;
  v281 = v18;
  v286 = 0;
  v287 = v18;
  v223 = (struct _Unwind_Exception *)(a1 + 2);
  v336 = v19;
  sub_D50260(a1 + 2, &v336, &v262);
  if ( v220 )
  {
    v274 = 0;
    v275 = v18;
    sub_D50220(&v274, &v236);
    v210 = v274;
    v164 = v275;
  }
  else
  {
    v164 = v18;
    v210 = 0;
  }
  sub_D61A80(a1, *a4, &v264);
  v20 = a1[1];
  v21 = *a4;
  v288 = 0;
  v289 = v20;
  v290 = 0;
  v291 = v20;
  v292 = 0;
  v293 = v20;
  v294 = 0;
  v295 = v20;
  sub_D52C50((__int64)a1, v21, &v288);
  sub_D52C50((__int64)a1, *a5, &v290);
  sub_14E31E0((_DWORD)v223, v288, v290, (unsigned int)&v292, v22, v23, v155);
  v337 = _mm_loadh_ps((const double *)&v292);
  sub_D502F0(v223, &v337, &v294);
  sub_D51DB0((__int64)a1, v294, v220, *a4, &v276, v24);
  sub_D61A80(a1, *a5, &v266);
  v25 = a1[1];
  v296 = 0;
  v298 = 0;
  v297 = v25;
  v299 = v25;
  sub_14E31E0((_DWORD)v223, v248, v258, (unsigned int)&v296, v26, v27, v156);
  v338 = _mm_loadh_ps((const double *)&v296);
  sub_D502F0(v223, &v338, &v298);
  sub_D51DB0((__int64)a1, v298, v220, *a5, &v278, v28);
  v29 = a1[1];
  v300 = 0;
  v302 = 0;
  v301 = v29;
  v303 = v29;
  v30 = _mm_loadh_ps((const double *)v254);
  v305 = v29;
  v307 = v29;
  v309 = v29;
  v311 = v29;
  v339 = v30;
  v304 = 0;
  v306 = 0;
  v308 = 0;
  v310 = 0;
  sub_D502F0(v223, &v339, &v268);
  v340 = _mm_loadh_ps((const double *)&v258);
  sub_D502F0(v223, &v340, &v302);
  sub_14E31E0((_DWORD)v223, v248, v258, (unsigned int)&v304, v31, v32, v157);
  sub_D504D0((__int64)a1, *a3, &v300);
  v341 = _mm_loadh_ps((const double *)&v304);
  sub_D502F0(v223, &v341, &v308);
  v342 = _mm_loadh_ps((const double *)&v308);
  sub_D50260(v223, &v342, &v310);
  sub_D51DB0((__int64)a1, v310, v217, v219, &v280, v33);
  v343 = _mm_loadh_ps((const double *)&v258);
  sub_D502F0(v223, &v343, &v306);
  sub_D51DB0((__int64)a1, v306, *a4, v280, &v280, v34);
  v212 = *(_QWORD *)v244;
  if ( *(_QWORD *)v244 )
  {
    v270 = 0;
    v271 = v18;
    sub_D50220(&v270, (__int64 *)v244);
    v212 = v270;
    v173 = v271;
  }
  else
  {
    v173 = v18;
  }
  v213 = *a5;
  if ( *a5 )
  {
    v282 = 0;
    v283 = v18;
    sub_D50220(&v282, a5);
    v213 = v282;
    v176 = v283;
  }
  else
  {
    v176 = v18;
  }
  v214 = *(_QWORD *)v254;
  if ( *(_QWORD *)v254 )
  {
    v272 = 0;
    v273 = v18;
    sub_D50220(&v272, (__int64 *)v254);
    v214 = v272;
    v179 = v273;
  }
  else
  {
    v179 = v18;
  }
  v215 = *a4;
  if ( *a4 )
  {
    v284 = 0;
    v285 = v18;
    sub_D50220(&v284, a4);
    v18 = v285;
    v215 = v284;
  }
  v189 = sub_15C5540((int)a1 + 432, a2, v35, v36, v37, v38);
  v188 = sub_15C5560(a1 + 54, a2);
  v39 = a1[1];
  v40 = *a4;
  v314 = 0;
  v41 = v39;
  v315 = v39;
  v316 = 0;
  v317 = v39;
  v318 = 0;
  v319 = v39;
  v322 = 0;
  v323 = v39;
  v324 = 0;
  v325 = v39;
  v326 = 0;
  v327 = v39;
  v312 = 0;
  v313 = v39;
  sub_D59470(a1, v40, &v312, &v314, &v316, &v318, 0);
  v42 = *a5;
  v321 = v41;
  v320 = 0;
  v216 = v312;
  v161 = v313;
  sub_D59470(a1, v42, &v320, &v322, &v324, &v326, 0);
  v218 = v320;
  v192 = v321;
  v158 = a1[1];
  v43 = sub_15E1B70(a1[30]);
  v44 = v43;
  if ( v43 )
    ++*(_DWORD *)(v43 + 8);
  v45 = a1[1];
  v328 = 0;
  v329 = v45;
  v330 = 0;
  v331 = v45;
  v336.m128_u64[0] = 0;
  v336.m128_u64[1] = v45;
  v337.m128_u64[0] = 0;
  v337.m128_u64[1] = v45;
  v338.m128_u64[0] = 0;
  v338.m128_u64[1] = v45;
  v339.m128_u64[0] = 0;
  v339.m128_u64[1] = v45;
  sub_D81E50(v223, v44, v218, v216, &v328);
  sub_D81E50(v223, v44, v322, v314, &v330);
  sub_D81E50(v223, v44, v324, v316, &v336);
  sub_D81E50(v223, v44, v216, v218, &v337);
  sub_D81E50(v223, v44, v314, v322, &v338);
  sub_D81E50(v223, v44, v316, v324, &v339);
  v46 = a1[1];
  v340.m128_u64[0] = 0;
  v340.m128_u64[1] = v46;
  v341.m128_u64[1] = v46;
  v341.m128_u64[0] = 0;
  v332 = 0;
  v333 = v46;
  sub_D57430(
    (__int64)a1,
    v188,
    v189,
    &v328,
    &v330,
    &v336,
    &v337,
    (__m128i *)&v338,
    (__int64)&v339,
    &v332,
    (__int64 *)&v340,
    (__int64 *)&v341);
  v342.m128_u64[0] = 0;
  v207 = v332;
  v206 = v333;
  v203 = a1[1];
  v342.m128_u64[1] = v203;
  v47 = sub_D50430((__int64)(a1 + 29), v188 + 4);
  v48 = v47;
  if ( v47 )
    ++*(_DWORD *)(v47 + 8);
  sub_D81DD0(v223, v340.m128_u64[0], v47, &v342);
  v49 = a1[1];
  v343.m128_u64[0] = 0;
  v343.m128_u64[1] = v49;
  sub_D51DB0((__int64)a1, v300, v217, v219, (__int64 *)&v343, v50);
  v51 = a1[1];
  v334 = 0;
  v335 = v51;
  sub_D66E50(a1, a2, a3, &v332, (__int64 *)&v340, (__int64 *)&v341, &v334);
  v209 = v335;
  v224 = (struct _Unwind_Exception *)v334;
  sub_D51DB0((__int64)a1, v342.m128_i64[0], v343.m128_i64[0], v334, &v286, v52);
  sub_D51DB0((__int64)a1, v214, v215, v286, a6, v53);
  sub_D51DB0((__int64)a1, v212, v213, *a6, a6, v54);
  sub_D51DB0((__int64)a1, v268, v280, *a6, a6, v55);
  sub_D51DB0((__int64)a1, v266, v278, *a6, a6, v56);
  sub_D51DB0((__int64)a1, v264, v276, *a6, a6, v57);
  result = sub_D51DB0((__int64)a1, v262, v210, *a6, a6, v58);
  if ( v224 )
  {
    exception_cleanup = (int)v224->exception_cleanup;
    result = (unsigned int)(exception_cleanup - 1);
    LODWORD(v224->exception_cleanup) = result;
    if ( exception_cleanup == 1 )
      result = sub_15D7BC0(v209, v224);
  }
  v60 = v343.m128_u64[0];
  if ( v343.m128_u64[0] )
  {
    v61 = v343.m128_i64[1];
    v62 = (*(_DWORD *)(v343.m128_u64[0] + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v61, v60);
  }
  if ( v48 )
  {
    v62 = (*(_DWORD *)(v48 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v203, v48);
  }
  v63 = v342.m128_u64[0];
  if ( v342.m128_u64[0] )
  {
    v64 = v342.m128_u64[1];
    v62 = (*(_DWORD *)(v342.m128_u64[0] + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v64, v63);
  }
  v65 = v341.m128_u64[0];
  if ( v341.m128_u64[0] )
  {
    v66 = v341.m128_u64[1];
    v62 = (*(_DWORD *)(v341.m128_u64[0] + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v66, v65);
  }
  v67 = v340.m128_u64[0];
  if ( v340.m128_u64[0] )
  {
    v68 = v340.m128_u64[1];
    v62 = (*(_DWORD *)(v340.m128_u64[0] + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v68, v67);
  }
  if ( v207 )
  {
    v225 = *(_DWORD *)(v207 + 8);
    result = (unsigned int)(v225 - 1);
    *(_DWORD *)(v207 + 8) = result;
    if ( v225 == 1 )
      result = sub_15D7BC0(v206, v207);
  }
  v69 = v339.m128_u64[0];
  if ( v339.m128_u64[0] )
  {
    v70 = v339.m128_u64[1];
    v62 = (*(_DWORD *)(v339.m128_u64[0] + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v70, v69);
  }
  v71 = v338.m128_u64[0];
  if ( v338.m128_u64[0] )
  {
    v72 = v338.m128_i64[1];
    v62 = (*(_DWORD *)(v338.m128_u64[0] + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v72, v71);
  }
  v73 = v337.m128_u64[0];
  if ( v337.m128_u64[0] )
  {
    v74 = v337.m128_u64[1];
    v62 = (*(_DWORD *)(v337.m128_u64[0] + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v74, v73);
  }
  v75 = v336.m128_u64[0];
  if ( v336.m128_u64[0] )
  {
    v76 = v336.m128_u64[1];
    v62 = (*(_DWORD *)(v336.m128_u64[0] + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v76, v75);
  }
  v77 = v330;
  if ( v330 )
  {
    v78 = v331;
    v62 = (*(_DWORD *)(v330 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v78, v77);
  }
  v79 = v328;
  if ( v328 )
  {
    v80 = v329;
    v62 = (*(_DWORD *)(v328 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v80, v79);
  }
  if ( v44 )
  {
    v62 = (*(_DWORD *)(v44 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v158, v44);
  }
  v81 = v326;
  if ( v326 )
  {
    v82 = v327;
    v62 = (*(_DWORD *)(v326 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v82, v81);
  }
  v83 = v324;
  if ( v324 )
  {
    v84 = v325;
    v62 = (*(_DWORD *)(v324 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v84, v83);
  }
  v85 = v322;
  if ( v322 )
  {
    v86 = v323;
    v62 = (*(_DWORD *)(v322 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v86, v85);
  }
  if ( v218 )
  {
    v226 = *(_DWORD *)(v218 + 8);
    result = (unsigned int)(v226 - 1);
    *(_DWORD *)(v218 + 8) = result;
    if ( v226 == 1 )
      result = sub_15D7BC0(v192, v218);
  }
  v87 = v318;
  if ( v318 )
  {
    v88 = v319;
    v62 = (*(_DWORD *)(v318 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v88, v87);
  }
  v89 = v316;
  if ( v316 )
  {
    v90 = v317;
    v62 = (*(_DWORD *)(v316 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v90, v89);
  }
  v91 = v314;
  if ( v314 )
  {
    v92 = v315;
    v62 = (*(_DWORD *)(v314 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v92, v91);
  }
  if ( v216 )
  {
    v227 = *(_DWORD *)(v216 + 8);
    result = (unsigned int)(v227 - 1);
    *(_DWORD *)(v216 + 8) = result;
    if ( v227 == 1 )
      result = sub_15D7BC0(v161, v216);
  }
  v93 = v310;
  if ( v310 )
  {
    v94 = v311;
    v62 = (*(_DWORD *)(v310 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v94, v93);
  }
  v95 = v308;
  if ( v308 )
  {
    v96 = v309;
    v62 = (*(_DWORD *)(v308 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v96, v95);
  }
  v97 = v306;
  if ( v306 )
  {
    v98 = v307;
    v62 = (*(_DWORD *)(v306 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v98, v97);
  }
  v99 = v304;
  if ( v304 )
  {
    v100 = v305;
    v62 = (*(_DWORD *)(v304 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v100, v99);
  }
  v101 = v302;
  if ( v302 )
  {
    v102 = v303;
    v62 = (*(_DWORD *)(v302 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v102, v101);
  }
  v103 = v300;
  if ( v300 )
  {
    v104 = v301;
    v62 = (*(_DWORD *)(v300 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v104, v103);
  }
  v105 = v298;
  if ( v298 )
  {
    v106 = v299;
    v62 = (*(_DWORD *)(v298 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v106, v105);
  }
  v107 = v296;
  if ( v296 )
  {
    v108 = v297;
    v62 = (*(_DWORD *)(v296 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v108, v107);
  }
  v109 = v294;
  if ( v294 )
  {
    v110 = v295;
    v62 = (*(_DWORD *)(v294 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v110, v109);
  }
  v111 = v292;
  if ( v292 )
  {
    v112 = v293;
    v62 = (*(_DWORD *)(v292 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v112, v111);
  }
  v113 = v290;
  if ( v290 )
  {
    v114 = v291;
    v62 = (*(_DWORD *)(v290 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v114, v113);
  }
  v115 = v288;
  if ( v288 )
  {
    v116 = v289;
    v62 = (*(_DWORD *)(v288 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v116, v115);
  }
  v117 = v286;
  if ( v286 )
  {
    v118 = v287;
    v62 = (*(_DWORD *)(v286 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v118, v117);
  }
  if ( v215 )
  {
    v228 = *(_DWORD *)(v215 + 8);
    result = (unsigned int)(v228 - 1);
    *(_DWORD *)(v215 + 8) = result;
    if ( v228 == 1 )
      result = sub_15D7BC0(v18, v215);
  }
  if ( v213 )
  {
    v229 = *(_DWORD *)(v213 + 8);
    result = (unsigned int)(v229 - 1);
    *(_DWORD *)(v213 + 8) = result;
    if ( v229 == 1 )
      result = sub_15D7BC0(v176, v213);
  }
  v119 = v280;
  if ( v280 )
  {
    v120 = v281;
    v62 = (*(_DWORD *)(v280 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v120, v119);
  }
  v121 = v278;
  if ( v278 )
  {
    v122 = v279;
    v62 = (*(_DWORD *)(v278 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v122, v121);
  }
  v123 = v276;
  if ( v276 )
  {
    v124 = v277;
    v62 = (*(_DWORD *)(v276 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v124, v123);
  }
  if ( v210 )
  {
    v230 = *(_DWORD *)(v210 + 8);
    result = (unsigned int)(v230 - 1);
    *(_DWORD *)(v210 + 8) = result;
    if ( v230 == 1 )
      result = sub_15D7BC0(v164, v210);
  }
  if ( v214 )
  {
    v231 = *(_DWORD *)(v214 + 8);
    result = (unsigned int)(v231 - 1);
    *(_DWORD *)(v214 + 8) = result;
    if ( v231 == 1 )
      result = sub_15D7BC0(v179, v214);
  }
  if ( v212 )
  {
    v232 = *(_DWORD *)(v212 + 8);
    result = (unsigned int)(v232 - 1);
    *(_DWORD *)(v212 + 8) = result;
    if ( v232 == 1 )
      result = sub_15D7BC0(v173, v212);
  }
  v125 = v268;
  if ( v268 )
  {
    v126 = v269;
    v62 = (*(_DWORD *)(v268 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v126, v125);
  }
  v127 = v266;
  if ( v266 )
  {
    v128 = v267;
    v62 = (*(_DWORD *)(v266 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v128, v127);
  }
  v129 = v264;
  if ( v264 )
  {
    v130 = v265;
    v62 = (*(_DWORD *)(v264 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v130, v129);
  }
  v131 = v262;
  if ( v262 )
  {
    v132 = v263;
    v62 = (*(_DWORD *)(v262 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v132, v131);
  }
  v133 = v260;
  if ( v260 )
  {
    v134 = v261;
    v62 = (*(_DWORD *)(v260 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v134, v133);
  }
  v135 = v258;
  if ( v258 )
  {
    v136 = v259;
    v62 = (*(_DWORD *)(v258 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v136, v135);
  }
  v137 = v256;
  if ( v256 )
  {
    v138 = v257;
    v62 = (*(_DWORD *)(v256 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v138, v137);
  }
  v139 = *(_QWORD *)v254;
  if ( *(_QWORD *)v254 )
  {
    v140 = v255;
    v62 = (*(_DWORD *)(*(_QWORD *)v254 + 8LL))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v140, v139);
  }
  v141 = v252;
  if ( v252 )
  {
    v142 = v253;
    v62 = (*(_DWORD *)(v252 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v142, v141);
  }
  v143 = v250;
  if ( v250 )
  {
    v144 = v251;
    v62 = (*(_DWORD *)(v250 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v144, v143);
  }
  v145 = v248;
  if ( v248 )
  {
    v146 = v249;
    v62 = (*(_DWORD *)(v248 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v146, v145);
  }
  v147 = v246;
  if ( v246 )
  {
    v148 = v247;
    v62 = (*(_DWORD *)(v246 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v148, v147);
  }
  v149 = *(_QWORD *)v244;
  if ( *(_QWORD *)v244 )
  {
    v150 = v245;
    v62 = (*(_DWORD *)(*(_QWORD *)v244 + 8LL))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v150, v149);
  }
  v151 = v242;
  if ( v242 )
  {
    v152 = v243;
    v62 = (*(_DWORD *)(v242 + 8))-- == 1;
    if ( v62 )
      result = sub_15D7BC0(v152, v151);
  }
  if ( v219 )
  {
    v233 = *(_DWORD *)(v219 + 8);
    result = (unsigned int)(v233 - 1);
    *(_DWORD *)(v219 + 8) = result;
    if ( v233 == 1 )
      result = sub_15D7BC0(v211, v219);
  }
  if ( v217 )
  {
    v234 = *(_DWORD *)(v217 + 8);
    result = (unsigned int)(v234 - 1);
    *(_DWORD *)(v217 + 8) = result;
    if ( v234 == 1 )
      result = sub_15D7BC0(v170, v217);
  }
  if ( v220 )
  {
    v235 = *(_DWORD *)(v220 + 8);
    result = (unsigned int)(v235 - 1);
    *(_DWORD *)(v220 + 8) = result;
    if ( v235 == 1 )
      return sub_15D7BC0(v167, v220);
  }
  return result;
}

