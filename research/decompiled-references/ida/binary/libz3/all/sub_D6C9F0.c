__int64 __fastcall sub_D6C9F0(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        struct _Unwind_Exception *a6)
{
  char **exception; // r14
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  __m128 v21; // xmm0
  __int64 v22; // rax
  int v23; // r9d
  int v24; // r9d
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r9d
  int v28; // r9d
  int v29; // r9d
  __int64 v30; // rax
  int v31; // r9d
  int v32; // r9d
  int v33; // r9d
  int v34; // r9d
  __int64 v35; // rax
  int v36; // r9d
  int v37; // r9d
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  unsigned int v42; // r14d
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // r15
  unsigned int v46; // r13d
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // r15
  __m128i si128; // xmm0
  unsigned __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r15
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // rdi
  bool v64; // zf
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // r15
  __int64 v71; // rsi
  unsigned __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // r13
  __int64 v76; // rax
  int v77; // r9d
  __int64 v78; // r15
  __int64 v79; // rax
  unsigned int v80; // r14d
  __int64 v81; // rax
  __int64 v82; // r13
  __int64 v83; // rax
  __int64 v84; // r14
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // r12
  int v88; // r9d
  int v89; // r9d
  int v90; // r9d
  int v91; // r9d
  int v92; // r9d
  int v93; // r9d
  int v94; // r9d
  int v95; // r9d
  __int64 result; // rax
  __int64 *v97; // rcx
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rbx
  __int64 v103; // rcx
  __int64 v104; // rbx
  __int64 v105; // rdx
  unsigned __int64 v106; // rsi
  unsigned __int64 v107; // rdi
  __int64 v108; // rsi
  unsigned __int64 v109; // rdi
  __int64 v110; // rcx
  __int64 v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rbx
  __int64 v115; // rsi
  __int64 v116; // rdi
  __int64 v117; // rsi
  __int64 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rdi
  __int64 v121; // rdx
  __int64 v122; // rsi
  __int64 v123; // rdi
  __int64 v124; // rsi
  __int64 v125; // rdi
  __int64 v126; // rsi
  __int64 v127; // rdi
  __int64 v128; // rsi
  __int64 v129; // rdi
  __int64 v130; // rsi
  __int64 v131; // rdi
  __int64 v132; // rsi
  __int64 v133; // rdi
  __int64 v134; // rsi
  __int64 v135; // rdi
  __int64 v136; // rsi
  __int64 v137; // rdi
  __int64 v138; // rbx
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
  __int64 *v153; // rcx
  __int64 v154; // rbx
  __int64 v155; // rdx
  __int64 v156; // rsi
  __int64 v157; // rdi
  __int64 v158; // rsi
  __int64 v159; // rdi
  __int64 v160; // rsi
  __int64 v161; // rdi
  __int64 v162; // rsi
  __int64 v163; // rdi
  __int64 v164; // rsi
  __int64 v165; // rdi
  __int64 v166; // rsi
  __int64 v167; // rdi
  __int64 v168; // rsi
  __int64 v169; // rdi
  __int64 v170; // rsi
  __int64 v171; // rdi
  __int64 v172; // rsi
  __int64 v173; // rdi
  __int64 v174; // rsi
  __int64 v175; // rdi
  __int64 v176; // rsi
  __int64 v177; // rdi
  __int64 v178; // rsi
  __int64 v179; // rdi
  __int64 v180; // rsi
  __int64 v181; // rdi
  __int64 v182; // rcx
  __int64 v183; // rbx
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rbx
  void *v187; // [rsp+10h] [rbp-500h]
  void *v188; // [rsp+10h] [rbp-500h]
  __int64 v189; // [rsp+10h] [rbp-500h]
  __int64 v190; // [rsp+18h] [rbp-4F8h]
  __int64 v191; // [rsp+18h] [rbp-4F8h]
  __int64 v192; // [rsp+18h] [rbp-4F8h]
  int v193; // [rsp+20h] [rbp-4F0h]
  int v194; // [rsp+20h] [rbp-4F0h]
  __int64 v195; // [rsp+20h] [rbp-4F0h]
  __int64 v196; // [rsp+28h] [rbp-4E8h]
  __int64 v197; // [rsp+28h] [rbp-4E8h]
  __int64 v198; // [rsp+28h] [rbp-4E8h]
  int v199; // [rsp+30h] [rbp-4E0h]
  int v200; // [rsp+30h] [rbp-4E0h]
  unsigned __int64 v201; // [rsp+30h] [rbp-4E0h]
  __int64 v202; // [rsp+38h] [rbp-4D8h]
  __int64 v203; // [rsp+38h] [rbp-4D8h]
  __int64 v204; // [rsp+38h] [rbp-4D8h]
  __int64 v205; // [rsp+40h] [rbp-4D0h]
  __int64 v206; // [rsp+40h] [rbp-4D0h]
  __int64 v207; // [rsp+40h] [rbp-4D0h]
  __int64 v208; // [rsp+48h] [rbp-4C8h]
  __int64 v209; // [rsp+48h] [rbp-4C8h]
  __int64 v210; // [rsp+48h] [rbp-4C8h]
  __int64 v211; // [rsp+50h] [rbp-4C0h]
  __int64 v212; // [rsp+50h] [rbp-4C0h]
  __int64 v213; // [rsp+50h] [rbp-4C0h]
  __int64 v214; // [rsp+58h] [rbp-4B8h]
  __int64 v215; // [rsp+58h] [rbp-4B8h]
  __int64 v216; // [rsp+58h] [rbp-4B8h]
  __int64 v217; // [rsp+60h] [rbp-4B0h]
  __int64 v218; // [rsp+60h] [rbp-4B0h]
  __int64 v219; // [rsp+60h] [rbp-4B0h]
  __int64 v220; // [rsp+68h] [rbp-4A8h]
  __int64 v221; // [rsp+68h] [rbp-4A8h]
  __int64 v222; // [rsp+68h] [rbp-4A8h]
  __int64 v223; // [rsp+70h] [rbp-4A0h]
  __int64 v224; // [rsp+70h] [rbp-4A0h]
  __int64 v225; // [rsp+70h] [rbp-4A0h]
  __int64 v226; // [rsp+78h] [rbp-498h]
  __int64 v227; // [rsp+78h] [rbp-498h]
  __int64 v228; // [rsp+78h] [rbp-498h]
  __int64 v229; // [rsp+80h] [rbp-490h]
  __int64 v230; // [rsp+80h] [rbp-490h]
  __int64 v231; // [rsp+80h] [rbp-490h]
  __int64 v232; // [rsp+88h] [rbp-488h]
  __int64 v233; // [rsp+88h] [rbp-488h]
  __int64 v234; // [rsp+88h] [rbp-488h]
  __int64 v235; // [rsp+90h] [rbp-480h]
  __int64 v236; // [rsp+90h] [rbp-480h]
  __int64 v237; // [rsp+90h] [rbp-480h]
  __int64 v238; // [rsp+98h] [rbp-478h]
  __int64 v239; // [rsp+98h] [rbp-478h]
  __int64 v240; // [rsp+98h] [rbp-478h]
  __int64 v241; // [rsp+A0h] [rbp-470h]
  __int64 v242; // [rsp+A0h] [rbp-470h]
  __int64 v243; // [rsp+A0h] [rbp-470h]
  __int64 v245; // [rsp+B8h] [rbp-458h]
  unsigned int v246; // [rsp+D4h] [rbp-43Ch]
  __int64 v247; // [rsp+D8h] [rbp-438h]
  __int64 v248; // [rsp+E0h] [rbp-430h]
  __int64 v249; // [rsp+E8h] [rbp-428h] BYREF
  __m128i *v250; // [rsp+F0h] [rbp-420h]
  __int64 v251; // [rsp+F8h] [rbp-418h]
  __int64 v252; // [rsp+100h] [rbp-410h]
  __int64 v253; // [rsp+108h] [rbp-408h]
  __int64 v254; // [rsp+110h] [rbp-400h]
  __int64 v255; // [rsp+118h] [rbp-3F8h]
  __int64 v256; // [rsp+120h] [rbp-3F0h]
  __int64 v257; // [rsp+128h] [rbp-3E8h]
  __int64 v258; // [rsp+130h] [rbp-3E0h]
  __int64 v259; // [rsp+138h] [rbp-3D8h]
  __int64 v260; // [rsp+140h] [rbp-3D0h]
  __int64 v261; // [rsp+148h] [rbp-3C8h]
  _QWORD *v262; // [rsp+150h] [rbp-3C0h]
  __int64 v263; // [rsp+158h] [rbp-3B8h]
  __int64 v264; // [rsp+160h] [rbp-3B0h]
  __int64 v265; // [rsp+168h] [rbp-3A8h]
  __int64 *v266; // [rsp+170h] [rbp-3A0h]
  __int64 v267; // [rsp+178h] [rbp-398h]
  __m128 v268; // [rsp+180h] [rbp-390h] BYREF
  __int64 v269; // [rsp+190h] [rbp-380h]
  __int64 v270; // [rsp+198h] [rbp-378h]
  __int64 v271; // [rsp+1A0h] [rbp-370h]
  __int64 v272; // [rsp+1A8h] [rbp-368h]
  __int64 v273; // [rsp+1B0h] [rbp-360h]
  struct _Unwind_Exception *v274; // [rsp+1B8h] [rbp-358h]
  __int64 v275; // [rsp+1C0h] [rbp-350h] BYREF
  __int64 v276; // [rsp+1C8h] [rbp-348h]
  __int64 v277; // [rsp+1D0h] [rbp-340h] BYREF
  __int64 v278; // [rsp+1D8h] [rbp-338h]
  __int64 v279; // [rsp+1E0h] [rbp-330h] BYREF
  __int64 v280; // [rsp+1E8h] [rbp-328h]
  __int64 v281; // [rsp+1F0h] [rbp-320h] BYREF
  __int64 v282; // [rsp+1F8h] [rbp-318h]
  __int64 v283; // [rsp+200h] [rbp-310h] BYREF
  __int64 v284; // [rsp+208h] [rbp-308h]
  __int64 v285; // [rsp+210h] [rbp-300h] BYREF
  __int64 v286; // [rsp+218h] [rbp-2F8h]
  int v287[2]; // [rsp+220h] [rbp-2F0h] BYREF
  __int64 v288; // [rsp+228h] [rbp-2E8h]
  __int64 v289; // [rsp+230h] [rbp-2E0h] BYREF
  __int64 v290; // [rsp+238h] [rbp-2D8h]
  __int64 v291; // [rsp+240h] [rbp-2D0h] BYREF
  __int64 v292; // [rsp+248h] [rbp-2C8h]
  __int64 v293; // [rsp+250h] [rbp-2C0h] BYREF
  __int64 v294; // [rsp+258h] [rbp-2B8h]
  int v295[2]; // [rsp+260h] [rbp-2B0h] BYREF
  __int64 v296; // [rsp+268h] [rbp-2A8h]
  __int64 v297; // [rsp+270h] [rbp-2A0h] BYREF
  __int64 v298; // [rsp+278h] [rbp-298h]
  __int64 v299; // [rsp+280h] [rbp-290h] BYREF
  __int64 v300; // [rsp+288h] [rbp-288h]
  __int64 v301; // [rsp+290h] [rbp-280h] BYREF
  __int64 v302; // [rsp+298h] [rbp-278h]
  __int64 v303; // [rsp+2A0h] [rbp-270h] BYREF
  __int64 v304; // [rsp+2A8h] [rbp-268h]
  __int64 v305; // [rsp+2B0h] [rbp-260h] BYREF
  __int64 v306; // [rsp+2B8h] [rbp-258h]
  __int64 v307; // [rsp+2C0h] [rbp-250h] BYREF
  __int64 v308; // [rsp+2C8h] [rbp-248h]
  __int64 v309; // [rsp+2D0h] [rbp-240h] BYREF
  __int64 v310; // [rsp+2D8h] [rbp-238h]
  __int64 v311; // [rsp+2E0h] [rbp-230h] BYREF
  __int64 v312; // [rsp+2E8h] [rbp-228h]
  __int64 v313; // [rsp+2F0h] [rbp-220h] BYREF
  __int64 v314; // [rsp+2F8h] [rbp-218h]
  __int64 *v315; // [rsp+300h] [rbp-210h] BYREF
  __int64 v316; // [rsp+308h] [rbp-208h]
  __int64 v317; // [rsp+310h] [rbp-200h] BYREF
  __int64 v318; // [rsp+318h] [rbp-1F8h]
  __int64 v319; // [rsp+320h] [rbp-1F0h] BYREF
  __int64 v320; // [rsp+328h] [rbp-1E8h]
  __int64 v321; // [rsp+330h] [rbp-1E0h] BYREF
  __int64 v322; // [rsp+338h] [rbp-1D8h]
  __int64 v323; // [rsp+340h] [rbp-1D0h] BYREF
  __int64 v324; // [rsp+348h] [rbp-1C8h]
  __int64 v325; // [rsp+350h] [rbp-1C0h] BYREF
  __int64 v326; // [rsp+358h] [rbp-1B8h]
  __int64 v327; // [rsp+360h] [rbp-1B0h] BYREF
  __int64 v328; // [rsp+368h] [rbp-1A8h]
  __int64 v329; // [rsp+370h] [rbp-1A0h] BYREF
  __int64 v330; // [rsp+378h] [rbp-198h]
  __int64 v331; // [rsp+380h] [rbp-190h] BYREF
  __int64 v332; // [rsp+388h] [rbp-188h]
  __int64 v333; // [rsp+390h] [rbp-180h] BYREF
  __int64 v334; // [rsp+398h] [rbp-178h]
  __int64 v335; // [rsp+3A0h] [rbp-170h] BYREF
  __int64 v336; // [rsp+3A8h] [rbp-168h]
  __int64 v337; // [rsp+3B0h] [rbp-160h] BYREF
  __int64 v338; // [rsp+3B8h] [rbp-158h]
  __int64 v339; // [rsp+3C0h] [rbp-150h] BYREF
  __int64 v340; // [rsp+3C8h] [rbp-148h]
  __int64 v341; // [rsp+3D0h] [rbp-140h] BYREF
  __int64 v342; // [rsp+3D8h] [rbp-138h]
  __int64 v343; // [rsp+3E0h] [rbp-130h] BYREF
  __int64 v344; // [rsp+3E8h] [rbp-128h]
  __int64 v345; // [rsp+3F0h] [rbp-120h] BYREF
  __int64 v346; // [rsp+3F8h] [rbp-118h]
  __m128i v347; // [rsp+400h] [rbp-110h] BYREF
  __int64 v348; // [rsp+410h] [rbp-100h] BYREF
  __int64 v349; // [rsp+418h] [rbp-F8h]
  __int64 v350; // [rsp+420h] [rbp-F0h] BYREF
  __int64 v351; // [rsp+428h] [rbp-E8h]
  __int64 v352; // [rsp+430h] [rbp-E0h] BYREF
  __int64 v353; // [rsp+438h] [rbp-D8h]
  __int64 v354; // [rsp+440h] [rbp-D0h] BYREF
  __int64 v355; // [rsp+448h] [rbp-C8h]
  __int64 v356; // [rsp+450h] [rbp-C0h] BYREF
  __int64 v357; // [rsp+458h] [rbp-B8h]
  __int64 v358; // [rsp+460h] [rbp-B0h] BYREF
  __int64 v359; // [rsp+468h] [rbp-A8h]
  int v360[2]; // [rsp+470h] [rbp-A0h] BYREF
  unsigned __int64 v361; // [rsp+478h] [rbp-98h]
  int v362[2]; // [rsp+480h] [rbp-90h] BYREF
  unsigned __int64 v363; // [rsp+488h] [rbp-88h]
  __m128i v364; // [rsp+490h] [rbp-80h]
  __m128 v365; // [rsp+4A0h] [rbp-70h] BYREF
  __m128i v366; // [rsp+4B0h] [rbp-60h] BYREF
  __int64 v367; // [rsp+4C0h] [rbp-50h] BYREF
  __int64 v368; // [rsp+4C8h] [rbp-48h]

  v10 = a1[1];
  v274 = a6;
  v267 = v10;
  v275 = 0;
  v276 = v10;
  v272 = a2;
  sub_D5B8E0((__int64)a1, a2, &v275);
  v277 = 0;
  v273 = v275;
  v278 = v10;
  v208 = v276;
  sub_D51670((__int64)a1, a2, &v277);
  v279 = 0;
  v263 = v277;
  v214 = v278;
  v280 = v10;
  sub_D518E0((__int64)a1, a2, &v279);
  v281 = 0;
  v264 = v279;
  v217 = v280;
  v282 = v10;
  sub_D5B6C0((__int64)a1, a2, &v281);
  v283 = 0;
  v269 = v281;
  v220 = v282;
  v284 = v10;
  sub_D5B4A0((__int64)a1, a2, &v283);
  v11 = *a4;
  v285 = 0;
  v270 = v283;
  *(_QWORD *)v287 = 0;
  v267 = v284;
  v12 = a1[1];
  v289 = 0;
  v286 = v12;
  v288 = v12;
  v290 = v12;
  v291 = 0;
  v292 = v12;
  v293 = 0;
  v294 = v12;
  *(_QWORD *)v295 = 0;
  v296 = v12;
  v297 = 0;
  v298 = v12;
  v299 = 0;
  v300 = v12;
  sub_D5BB00(a1, v11, &v285);
  v13 = *a4;
  v268.m128_u64[0] = (unsigned __int64)v287;
  sub_D52DE0(
    (int)a1,
    v13,
    (int)v287,
    v14,
    v15,
    v16,
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
    v220,
    v223,
    v226,
    v229,
    v232,
    v235,
    v238,
    v241);
  sub_D52AC0((__int64)a1, *a4, &v289);
  sub_D61A80(a1, *a4, &v291);
  sub_D5BB00(a1, *a5, &v293);
  sub_D52DE0(
    (int)a1,
    *a5,
    (int)v295,
    v17,
    v18,
    v19,
    v188,
    v191,
    v194,
    v197,
    v200,
    v203,
    v206,
    v209,
    v212,
    v215,
    v218,
    v221,
    v224,
    v227,
    v230,
    v233,
    v236,
    v239,
    v242);
  sub_D52AC0((__int64)a1, *a5, &v297);
  sub_D61A80(a1, *a5, &v299);
  v20 = a1[1];
  v301 = 0;
  v271 = v20;
  v21 = _mm_loadh_ps((const double *)&v293);
  v302 = v20;
  v304 = v20;
  v306 = v20;
  v308 = v20;
  v310 = v20;
  v320 = v20;
  v322 = v20;
  v324 = v20;
  v326 = v20;
  v328 = v20;
  v330 = v20;
  v332 = v20;
  v365 = v21;
  v303 = 0;
  v305 = 0;
  v307 = 0;
  v309 = 0;
  v319 = 0;
  v321 = 0;
  v323 = 0;
  v325 = 0;
  v327 = 0;
  v329 = 0;
  v331 = 0;
  v262 = a1 + 2;
  sub_D50260(a1 + 2, &v365, &v301);
  if ( v273 )
  {
    v317 = 0;
    v318 = v271;
    sub_D50220(&v317, &v275);
    v247 = v317;
    v204 = v318;
  }
  else
  {
    v247 = 0;
    v204 = v271;
  }
  sub_D63CE0(a1, *a4, &v303);
  v22 = a1[1];
  v335 = 0;
  v336 = v22;
  sub_D51DB0((__int64)a1, v297, v270, v269, &v335, v23);
  sub_D51DB0((__int64)a1, v299, v273, v335, &v319, v24);
  sub_D63CE0(a1, *a5, &v305);
  v25 = a1[1];
  v337 = 0;
  v339 = 0;
  v338 = v25;
  v340 = v25;
  sub_14E31E0((_DWORD)v262, v289, v297, (unsigned int)&v339, v26, v27, v189);
  sub_D51DB0((__int64)a1, v339, v263, v264, &v337, v28);
  sub_D51DB0((__int64)a1, v291, v273, v337, &v321, v29);
  sub_D63E40(a1, *a4, &v307);
  v30 = a1[1];
  v341 = 0;
  v342 = v30;
  sub_D51DB0((__int64)a1, v297, v269, v270, &v341, v31);
  sub_D51DB0((__int64)a1, v299, v273, v341, &v323, v32);
  sub_D63E40(a1, *a5, &v309);
  sub_D51DB0((__int64)a1, v291, v273, v337, &v325, v33);
  v251 = *(_QWORD *)v295;
  if ( *(_QWORD *)v295 )
  {
    v311 = 0;
    v312 = v271;
    sub_D50220(&v311, (__int64 *)v295);
    v251 = v311;
    v225 = v312;
  }
  else
  {
    v225 = v271;
  }
  v35 = a1[1];
  v343 = 0;
  v344 = v35;
  sub_D51DB0((__int64)a1, v339, v269, v270, &v343, v34);
  sub_D51DB0((__int64)a1, *(__int64 *)v287, v273, v343, &v327, v36);
  v252 = *(_QWORD *)v287;
  if ( *(_QWORD *)v287 )
  {
    v313 = 0;
    v314 = v271;
    sub_D50220(&v313, (__int64 *)v268.m128_u64[0]);
    v252 = v313;
    v213 = v314;
  }
  else
  {
    v213 = v271;
  }
  sub_D51DB0((__int64)a1, v339, v263, v264, &v329, v37);
  v246 = sub_15C5540((int)a1 + 432, v272, v38, v39, v40, v41);
  v42 = sub_15C5560(a1 + 54, v272);
  if ( v42 < v246 )
  {
    v266 = &v367;
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(&v367, "division with ebits > sbits not supported");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v266);
    sub_233E40((__int64)v266);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v43 = a1[1];
  v44 = *a4;
  v347.m128i_i64[0] = 0;
  v45 = v43;
  v347.m128i_i64[1] = v43;
  v348 = 0;
  v349 = v43;
  v350 = 0;
  v351 = v43;
  v354 = 0;
  v355 = v43;
  v356 = 0;
  v357 = v43;
  v358 = 0;
  v359 = v43;
  v345 = 0;
  v346 = v43;
  sub_D59470(a1, v44, &v345, v347.m128i_i64, &v348, &v350, 1);
  v353 = v45;
  v352 = 0;
  v248 = v345;
  v207 = v346;
  sub_D59470(a1, *a5, &v352, &v354, &v356, &v358, 1);
  v46 = 2 * v42 + 2;
  v249 = v352;
  v245 = v353;
  v237 = a1[1];
  v47 = sub_D50430((__int64)(a1 + 29), v46);
  v48 = a1[30];
  v250 = &v366;
  v366 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v347), (__m128i)(unsigned __int64)v47);
  v49 = sub_15E1AF0(v48);
  v257 = v49;
  if ( v49 )
    ++*(_DWORD *)(v49 + 8);
  v50 = sub_D81D60(a1 + 29, v46, v354);
  v259 = v50;
  if ( v50 )
    ++*(_DWORD *)(v50 + 8);
  v51 = a1[1];
  v367 = 2;
  v368 = 0;
  v234 = v51;
  v266 = &v367;
  v52 = a1[30];
  *(_QWORD *)v360 = v348;
  v265 = sub_15DCAD0(v52, (int)v360, 0);
  sub_15D0DF0(&v367);
  if ( v265 )
    ++*(_DWORD *)(v265 + 8);
  v367 = 2;
  v368 = 0;
  *(_QWORD *)v362 = v356;
  v255 = sub_15DCAD0(a1[30], (int)v362, 0);
  v53 = v255;
  v268 = _mm_loadh_ps((const double *)&v249);
  sub_15D0DF0(v266);
  si128 = _mm_load_si128((const __m128i *)&v268);
  if ( v53 )
    ++*(_DWORD *)(v255 + 8);
  v55 = a1[1];
  v56 = a1[30];
  v364 = si128;
  v201 = v55;
  v361 = v55;
  *(_QWORD *)v362 = 0;
  v363 = v55;
  v365.m128_u64[0] = 0;
  v365.m128_u64[1] = v55;
  v57 = sub_15E1AF0(v56);
  v254 = v57;
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  v231 = a1[1];
  v58 = sub_D500F0((__int64)(a1 + 29), v350);
  v253 = v58;
  if ( v58 )
    ++*(_DWORD *)(v58 + 8);
  v59 = sub_D500F0((__int64)(a1 + 29), v358);
  v258 = v59;
  if ( v59 )
    ++*(_DWORD *)(v59 + 8);
  sub_15E1B70(a1[30]);
  sub_15E1B70(a1[30]);
  v60 = sub_15E1B70(a1[30]);
  v61 = v60;
  if ( v60 )
    ++*(_DWORD *)(v60 + 8);
  v62 = v365.m128_u64[0];
  if ( v365.m128_u64[0] )
  {
    v63 = v365.m128_u64[1];
    v64 = (*(_DWORD *)(v365.m128_u64[0] + 8))-- == 1;
    if ( v64 )
      sub_15D7BC0(v63, v62);
  }
  v65 = a1[1];
  v365.m128_u64[0] = v61;
  v198 = v65;
  v66 = sub_15E1B70(v65);
  v268.m128_u64[0] = v66;
  if ( v66 )
    ++*(_DWORD *)(v66 + 8);
  v243 = a1[1];
  v366.m128i_i64[1] = v243;
  sub_D50160((__int64)(a1 + 29), v42, v66);
  v67 = sub_15E1A70(v243);
  v256 = v67;
  if ( v67 )
    ++*(_DWORD *)(v67 + 8);
  v367 = sub_D81CD0(a1 + 29, 2 * v42 + 3, v42 + 1, v268.m128_u64[0]);
  v68 = a1[30];
  v368 = v256;
  v69 = sub_15E1AF0(v68);
  v70 = v69;
  if ( v69 )
    ++*(_DWORD *)(v69 + 8);
  v71 = *(_QWORD *)v362;
  if ( *(_QWORD *)v362 )
  {
    v72 = v363;
    v64 = (*(_DWORD *)(*(_QWORD *)v362 + 8LL))-- == 1;
    if ( v64 )
      sub_15D7BC0(v72, v71);
  }
  *(_QWORD *)v362 = v70;
  v73 = sub_D81CD0(a1 + 29, v46 + v42 - 1, 2 * v42 + 4, v268.m128_u64[0]);
  v260 = v73;
  if ( v73 )
    ++*(_DWORD *)(v73 + 8);
  v74 = sub_15E1A70(a1[1]);
  v261 = v74;
  if ( v74 )
    ++*(_DWORD *)(v74 + 8);
  v75 = a1[1];
  sub_D50390((__int64)(a1 + 29), 1u);
  v76 = sub_15E1B70(v75);
  v78 = v76;
  if ( v76 )
  {
    ++*(_DWORD *)(v76 + 8);
    v366.m128i_i64[0] = v76;
    v315 = nullptr;
    v316 = v271;
    sub_D50220((__int64 *)&v315, v250->m128i_i64);
    v250 = (__m128i *)v315;
    v228 = v316;
  }
  else
  {
    v250 = nullptr;
    v228 = v271;
  }
  sub_D51DB0((__int64)a1, v339, v269, v270, &v331, v77);
  v79 = a1[1];
  v80 = v42 + 4;
  v367 = 0;
  v368 = v79;
  sub_D55100((__int64)a1, *(__int64 *)v362, v80, v266);
  v195 = a1[1];
  sub_D50390((__int64)(a1 + 29), v80);
  v81 = sub_15E1B70(a1[30]);
  v82 = v81;
  if ( v81 )
    ++*(_DWORD *)(v81 + 8);
  v192 = a1[1];
  sub_D50390((__int64)(a1 + 29), v80);
  v83 = sub_15E1B70(a1[30]);
  v84 = v83;
  if ( v83 )
    ++*(_DWORD *)(v83 + 8);
  v240 = a1[1];
  v85 = sub_15E1B70(a1[30]);
  v266 = (__int64 *)v85;
  if ( v85 )
    ++*(_DWORD *)(v85 + 8);
  sub_D50160((__int64)(a1 + 29), v246 + 1, v82);
  v86 = sub_15E1B70(a1[30]);
  v87 = v86;
  if ( v86 )
    ++*(_DWORD *)(v86 + 8);
  sub_D81E50(v262, v84, *(_QWORD *)v362, v266, v362);
  sub_D81E50(v262, v84, v365.m128_u64[0], v87, &v365);
  v333 = 0;
  *(_QWORD *)v360 = v254;
  v334 = v271;
  sub_D66E50(a1, v272, a3, (__int64 *)v360, (__int64 *)v362, (__int64 *)&v365, &v333);
  v272 = v333;
  v271 = v334;
  sub_D51DB0((__int64)a1, (__int64)v250, v331, v333, (__int64 *)v274, v88);
  sub_D51DB0((__int64)a1, v252, v329, v274->exception_class, (__int64 *)v274, v89);
  sub_D51DB0((__int64)a1, v251, v327, v274->exception_class, (__int64 *)v274, v90);
  sub_D51DB0((__int64)a1, v309, v325, v274->exception_class, (__int64 *)v274, v91);
  sub_D51DB0((__int64)a1, v307, v323, v274->exception_class, (__int64 *)v274, v92);
  sub_D51DB0((__int64)a1, v305, v321, v274->exception_class, (__int64 *)v274, v93);
  sub_D51DB0((__int64)a1, v303, v319, v274->exception_class, (__int64 *)v274, v94);
  result = sub_D51DB0((__int64)a1, v301, v247, v274->exception_class, (__int64 *)v274, v95);
  if ( v87 )
  {
    v64 = (*(_DWORD *)(v87 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v240, v87);
  }
  v97 = v266;
  if ( v266 )
  {
    LODWORD(v274) = *((_DWORD *)v266 + 2);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *((_DWORD *)v266 + 2) = result;
    if ( v64 )
      result = sub_15D7BC0(v240, v97);
  }
  if ( v84 )
  {
    v64 = (*(_DWORD *)(v84 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v192, v84);
  }
  if ( v82 )
  {
    v64 = (*(_DWORD *)(v82 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v195, v82);
  }
  v98 = v367;
  if ( v367 )
  {
    v99 = v368;
    v64 = (*(_DWORD *)(v367 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v99, v98);
  }
  if ( v78 )
  {
    v64 = (*(_DWORD *)(v78 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v243, v78);
  }
  v100 = v261;
  if ( v261 )
  {
    LODWORD(v274) = *(_DWORD *)(v261 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v261 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v243, v100);
  }
  v101 = v260;
  if ( v260 )
  {
    LODWORD(v274) = *(_DWORD *)(v260 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v260 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v243, v101);
  }
  v102 = v256;
  if ( v256 )
  {
    LODWORD(v274) = *(_DWORD *)(v256 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v256 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v243, v102);
  }
  v103 = v268.m128_u64[0];
  if ( v268.m128_u64[0] )
  {
    LODWORD(v274) = *(_DWORD *)(v268.m128_u64[0] + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v268.m128_u64[0] + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v198, v103);
  }
  v104 = v258;
  if ( v258 )
  {
    LODWORD(v274) = *(_DWORD *)(v258 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v258 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v231, v104);
  }
  v105 = v253;
  if ( v253 )
  {
    LODWORD(v274) = *(_DWORD *)(v253 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v253 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v231, v105);
  }
  v106 = v365.m128_u64[0];
  if ( v365.m128_u64[0] )
  {
    v107 = v365.m128_u64[1];
    v64 = (*(_DWORD *)(v365.m128_u64[0] + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v107, v106);
  }
  v108 = *(_QWORD *)v362;
  if ( *(_QWORD *)v362 )
  {
    v109 = v363;
    v64 = (*(_DWORD *)(*(_QWORD *)v362 + 8LL))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v109, v108);
  }
  v110 = v254;
  if ( v254 )
  {
    LODWORD(v274) = *(_DWORD *)(v254 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v254 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v201, v110);
  }
  v111 = v255;
  if ( v255 )
  {
    LODWORD(v274) = *(_DWORD *)(v255 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v255 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v234, v111);
  }
  v112 = v265;
  if ( v265 )
  {
    LODWORD(v274) = *(_DWORD *)(v265 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v265 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v234, v112);
  }
  v113 = v259;
  if ( v259 )
  {
    LODWORD(v274) = *(_DWORD *)(v259 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v259 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v237, v113);
  }
  v114 = v257;
  if ( v257 )
  {
    LODWORD(v274) = *(_DWORD *)(v257 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v257 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v237, v114);
  }
  v115 = v358;
  if ( v358 )
  {
    v116 = v359;
    v64 = (*(_DWORD *)(v358 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v116, v115);
  }
  v117 = v356;
  if ( v356 )
  {
    v118 = v357;
    v64 = (*(_DWORD *)(v356 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v118, v117);
  }
  v119 = v354;
  if ( v354 )
  {
    v120 = v355;
    v64 = (*(_DWORD *)(v354 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v120, v119);
  }
  v121 = v249;
  if ( v249 )
  {
    LODWORD(v274) = *(_DWORD *)(v249 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v249 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v245, v121);
  }
  v122 = v350;
  if ( v350 )
  {
    v123 = v351;
    v64 = (*(_DWORD *)(v350 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v123, v122);
  }
  v124 = v348;
  if ( v348 )
  {
    v125 = v349;
    v64 = (*(_DWORD *)(v348 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v125, v124);
  }
  v126 = v347.m128i_i64[0];
  if ( v347.m128i_i64[0] )
  {
    v127 = v347.m128i_i64[1];
    v64 = (*(_DWORD *)(v347.m128i_i64[0] + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v127, v126);
  }
  if ( v248 )
  {
    LODWORD(v274) = *(_DWORD *)(v248 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v248 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v207, v248);
  }
  v128 = v343;
  if ( v343 )
  {
    v129 = v344;
    v64 = (*(_DWORD *)(v343 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v129, v128);
  }
  v130 = v341;
  if ( v341 )
  {
    v131 = v342;
    v64 = (*(_DWORD *)(v341 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v131, v130);
  }
  v132 = v339;
  if ( v339 )
  {
    v133 = v340;
    v64 = (*(_DWORD *)(v339 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v133, v132);
  }
  v134 = v337;
  if ( v337 )
  {
    v135 = v338;
    v64 = (*(_DWORD *)(v337 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v135, v134);
  }
  v136 = v335;
  if ( v335 )
  {
    v137 = v336;
    v64 = (*(_DWORD *)(v335 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v137, v136);
  }
  v138 = v272;
  if ( v272 )
  {
    LODWORD(v274) = *(_DWORD *)(v272 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v272 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v271, v138);
  }
  v139 = v331;
  if ( v331 )
  {
    v140 = v332;
    v64 = (*(_DWORD *)(v331 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v140, v139);
  }
  v141 = v329;
  if ( v329 )
  {
    v142 = v330;
    v64 = (*(_DWORD *)(v329 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v142, v141);
  }
  v143 = v327;
  if ( v327 )
  {
    v144 = v328;
    v64 = (*(_DWORD *)(v327 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v144, v143);
  }
  v145 = v325;
  if ( v325 )
  {
    v146 = v326;
    v64 = (*(_DWORD *)(v325 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v146, v145);
  }
  v147 = v323;
  if ( v323 )
  {
    v148 = v324;
    v64 = (*(_DWORD *)(v323 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v148, v147);
  }
  v149 = v321;
  if ( v321 )
  {
    v150 = v322;
    v64 = (*(_DWORD *)(v321 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v150, v149);
  }
  v151 = v319;
  if ( v319 )
  {
    v152 = v320;
    v64 = (*(_DWORD *)(v319 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v152, v151);
  }
  if ( v247 )
  {
    LODWORD(v274) = *(_DWORD *)(v247 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v247 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v204, v247);
  }
  v153 = (__int64 *)v250;
  if ( v250 )
  {
    LODWORD(v274) = v250->m128i_i32[2];
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    v250->m128i_i32[2] = result;
    if ( v64 )
      result = sub_15D7BC0(v228, v153);
  }
  v154 = v252;
  if ( v252 )
  {
    LODWORD(v274) = *(_DWORD *)(v252 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v252 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v213, v154);
  }
  v155 = v251;
  if ( v251 )
  {
    LODWORD(v274) = *(_DWORD *)(v251 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v251 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v225, v155);
  }
  v156 = v309;
  if ( v309 )
  {
    v157 = v310;
    v64 = (*(_DWORD *)(v309 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v157, v156);
  }
  v158 = v307;
  if ( v307 )
  {
    v159 = v308;
    v64 = (*(_DWORD *)(v307 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v159, v158);
  }
  v160 = v305;
  if ( v305 )
  {
    v161 = v306;
    v64 = (*(_DWORD *)(v305 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v161, v160);
  }
  v162 = v303;
  if ( v303 )
  {
    v163 = v304;
    v64 = (*(_DWORD *)(v303 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v163, v162);
  }
  v164 = v301;
  if ( v301 )
  {
    v165 = v302;
    v64 = (*(_DWORD *)(v301 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v165, v164);
  }
  v166 = v299;
  if ( v299 )
  {
    v167 = v300;
    v64 = (*(_DWORD *)(v299 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v167, v166);
  }
  v168 = v297;
  if ( v297 )
  {
    v169 = v298;
    v64 = (*(_DWORD *)(v297 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v169, v168);
  }
  v170 = *(_QWORD *)v295;
  if ( *(_QWORD *)v295 )
  {
    v171 = v296;
    v64 = (*(_DWORD *)(*(_QWORD *)v295 + 8LL))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v171, v170);
  }
  v172 = v293;
  if ( v293 )
  {
    v173 = v294;
    v64 = (*(_DWORD *)(v293 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v173, v172);
  }
  v174 = v291;
  if ( v291 )
  {
    v175 = v292;
    v64 = (*(_DWORD *)(v291 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v175, v174);
  }
  v176 = v289;
  if ( v289 )
  {
    v177 = v290;
    v64 = (*(_DWORD *)(v289 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v177, v176);
  }
  v178 = *(_QWORD *)v287;
  if ( *(_QWORD *)v287 )
  {
    v179 = v288;
    v64 = (*(_DWORD *)(*(_QWORD *)v287 + 8LL))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v179, v178);
  }
  v180 = v285;
  if ( v285 )
  {
    v181 = v286;
    v64 = (*(_DWORD *)(v285 + 8))-- == 1;
    if ( v64 )
      result = sub_15D7BC0(v181, v180);
  }
  v182 = v270;
  if ( v270 )
  {
    LODWORD(v274) = *(_DWORD *)(v270 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v270 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v267, v182);
  }
  v183 = v269;
  if ( v269 )
  {
    LODWORD(v274) = *(_DWORD *)(v269 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v269 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v222, v183);
  }
  v184 = v264;
  if ( v264 )
  {
    LODWORD(v274) = *(_DWORD *)(v264 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v264 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v219, v184);
  }
  v185 = v263;
  if ( v263 )
  {
    LODWORD(v274) = *(_DWORD *)(v263 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v263 + 8) = result;
    if ( v64 )
      result = sub_15D7BC0(v216, v185);
  }
  v186 = v273;
  if ( v273 )
  {
    LODWORD(v274) = *(_DWORD *)(v273 + 8);
    v64 = (_DWORD)v274 == 1;
    result = (unsigned int)((_DWORD)v274 - 1);
    *(_DWORD *)(v273 + 8) = result;
    if ( v64 )
      return sub_15D7BC0(v210, v186);
  }
  return result;
}

