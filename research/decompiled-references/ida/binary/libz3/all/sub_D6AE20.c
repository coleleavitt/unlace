__int64 __fastcall sub_D6AE20(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5, __int64 *a6)
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
  int v21; // r9d
  int v22; // r9d
  __int64 v23; // rax
  int v24; // r9d
  int v25; // r9d
  __int64 v26; // rax
  int v27; // r9d
  int v28; // r9d
  __int64 v29; // rax
  int v30; // r9d
  int v31; // r9d
  __int64 v32; // rax
  int v33; // r8d
  int v34; // r9d
  int v35; // r9d
  unsigned int v36; // r13d
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // r12
  __m128i si128; // xmm0
  unsigned __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r12
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // rdi
  bool v54; // zf
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // rdi
  __int64 v65; // rax
  unsigned __int64 v66; // rsi
  unsigned __int64 v67; // rdi
  __int64 v68; // r15
  int v69; // r9d
  int v70; // r9d
  int v71; // r9d
  int v72; // r9d
  int v73; // r9d
  __int64 result; // rax
  __int64 v75; // rcx
  __int64 v76; // rcx
  unsigned __int64 v77; // rsi
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // rsi
  unsigned __int64 v80; // rdi
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rcx
  __int64 v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rbx
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rcx
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
  __int64 *v111; // rbx
  __int64 v112; // rsi
  __int64 v113; // rdi
  __int64 v114; // rsi
  __int64 v115; // rdi
  __int64 v116; // rsi
  __int64 v117; // rdi
  __int64 v118; // rsi
  __int64 v119; // rdi
  __int64 v120; // rsi
  __int64 v121; // rdi
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
  __int64 v138; // rsi
  __int64 v139; // rdi
  __int64 v140; // rsi
  __int64 v141; // rdi
  __int64 v142; // rsi
  __int64 v143; // rdi
  __int64 v144; // rsi
  __int64 v145; // rdi
  __int64 v146; // rsi
  __int64 v147; // rdi
  __int64 v148; // rsi
  __int64 v149; // rdi
  __int64 v150; // rdx
  __int64 v151; // rbx
  __int64 v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // rbx
  __int64 v155; // rax
  __int64 v156; // rdi
  __int64 v157; // rax
  int v158; // [rsp+0h] [rbp-4A0h]
  void *v159; // [rsp+10h] [rbp-490h]
  void *v160; // [rsp+10h] [rbp-490h]
  __int64 v161; // [rsp+10h] [rbp-490h]
  __int64 v162; // [rsp+10h] [rbp-490h]
  __int64 v163; // [rsp+18h] [rbp-488h]
  __int64 v164; // [rsp+18h] [rbp-488h]
  unsigned __int64 v165; // [rsp+18h] [rbp-488h]
  int v166; // [rsp+20h] [rbp-480h]
  int v167; // [rsp+20h] [rbp-480h]
  __int64 v168; // [rsp+20h] [rbp-480h]
  __int64 v169; // [rsp+28h] [rbp-478h]
  __int64 v170; // [rsp+28h] [rbp-478h]
  __int64 v171; // [rsp+28h] [rbp-478h]
  int v172; // [rsp+30h] [rbp-470h]
  int v173; // [rsp+30h] [rbp-470h]
  __int64 v174; // [rsp+30h] [rbp-470h]
  __int64 v175; // [rsp+38h] [rbp-468h]
  __int64 v176; // [rsp+38h] [rbp-468h]
  __int64 v177; // [rsp+38h] [rbp-468h]
  __int64 v178; // [rsp+40h] [rbp-460h]
  __int64 v179; // [rsp+40h] [rbp-460h]
  __int64 v180; // [rsp+40h] [rbp-460h]
  __int64 v181; // [rsp+48h] [rbp-458h]
  __int64 v182; // [rsp+48h] [rbp-458h]
  __int64 v183; // [rsp+48h] [rbp-458h]
  __int64 v184; // [rsp+50h] [rbp-450h]
  __int64 v185; // [rsp+50h] [rbp-450h]
  __int64 v186; // [rsp+50h] [rbp-450h]
  __int64 v187; // [rsp+58h] [rbp-448h]
  __int64 v188; // [rsp+58h] [rbp-448h]
  __int64 v189; // [rsp+58h] [rbp-448h]
  __int64 v190; // [rsp+60h] [rbp-440h]
  __int64 v191; // [rsp+60h] [rbp-440h]
  __int64 v192; // [rsp+60h] [rbp-440h]
  __int64 v193; // [rsp+68h] [rbp-438h]
  __int64 v194; // [rsp+68h] [rbp-438h]
  __int64 v195; // [rsp+70h] [rbp-430h]
  __int64 v196; // [rsp+70h] [rbp-430h]
  __int64 v197; // [rsp+70h] [rbp-430h]
  __int64 v198; // [rsp+78h] [rbp-428h]
  __int64 v199; // [rsp+78h] [rbp-428h]
  __int64 v200; // [rsp+78h] [rbp-428h]
  __int64 v201; // [rsp+80h] [rbp-420h]
  __int64 v202; // [rsp+80h] [rbp-420h]
  __int64 v203; // [rsp+80h] [rbp-420h]
  __int64 v204; // [rsp+88h] [rbp-418h]
  __int64 v205; // [rsp+88h] [rbp-418h]
  __int64 v206; // [rsp+90h] [rbp-410h]
  __int64 v207; // [rsp+90h] [rbp-410h]
  __int64 v208; // [rsp+98h] [rbp-408h]
  __int64 v209; // [rsp+98h] [rbp-408h]
  __int64 v211; // [rsp+A0h] [rbp-400h]
  __int64 *v212; // [rsp+A0h] [rbp-400h]
  __int64 v213; // [rsp+A8h] [rbp-3F8h]
  __int64 v214; // [rsp+B0h] [rbp-3F0h]
  __int64 v215; // [rsp+B8h] [rbp-3E8h]
  __int64 v216; // [rsp+B8h] [rbp-3E8h]
  __int64 v217; // [rsp+C0h] [rbp-3E0h] BYREF
  __int64 v218; // [rsp+C8h] [rbp-3D8h]
  __int64 v219; // [rsp+D0h] [rbp-3D0h]
  __int64 v220; // [rsp+D8h] [rbp-3C8h]
  __int64 v221; // [rsp+E0h] [rbp-3C0h]
  __int64 v222; // [rsp+E8h] [rbp-3B8h]
  __int64 v223; // [rsp+F0h] [rbp-3B0h]
  __int64 v224; // [rsp+F8h] [rbp-3A8h]
  __m128 v225; // [rsp+100h] [rbp-3A0h] BYREF
  __int64 v226; // [rsp+110h] [rbp-390h]
  __int64 v227; // [rsp+118h] [rbp-388h]
  __int64 v228; // [rsp+120h] [rbp-380h]
  __int64 *v229; // [rsp+128h] [rbp-378h]
  __int64 v230; // [rsp+130h] [rbp-370h]
  __int64 v231; // [rsp+138h] [rbp-368h]
  __int64 v232; // [rsp+140h] [rbp-360h]
  __int64 v233; // [rsp+148h] [rbp-358h]
  __int64 v234; // [rsp+150h] [rbp-350h]
  __int64 *v235; // [rsp+158h] [rbp-348h]
  int v236[2]; // [rsp+168h] [rbp-338h] BYREF
  int v237[2]; // [rsp+170h] [rbp-330h] BYREF
  int v238[2]; // [rsp+178h] [rbp-328h] BYREF
  int v239[2]; // [rsp+180h] [rbp-320h] BYREF
  int v240[2]; // [rsp+188h] [rbp-318h] BYREF
  __int64 v241; // [rsp+190h] [rbp-310h] BYREF
  __int64 v242; // [rsp+198h] [rbp-308h]
  __int64 v243; // [rsp+1A0h] [rbp-300h] BYREF
  __int64 v244; // [rsp+1A8h] [rbp-2F8h]
  __int64 v245; // [rsp+1B0h] [rbp-2F0h] BYREF
  __int64 v246; // [rsp+1B8h] [rbp-2E8h]
  __int64 v247; // [rsp+1C0h] [rbp-2E0h] BYREF
  __int64 v248; // [rsp+1C8h] [rbp-2D8h]
  __int64 v249; // [rsp+1D0h] [rbp-2D0h] BYREF
  __int64 v250; // [rsp+1D8h] [rbp-2C8h]
  __int64 v251; // [rsp+1E0h] [rbp-2C0h] BYREF
  __int64 v252; // [rsp+1E8h] [rbp-2B8h]
  int v253[2]; // [rsp+1F0h] [rbp-2B0h] BYREF
  __int64 v254; // [rsp+1F8h] [rbp-2A8h]
  __int64 v255; // [rsp+200h] [rbp-2A0h] BYREF
  __int64 v256; // [rsp+208h] [rbp-298h]
  __int64 v257; // [rsp+210h] [rbp-290h] BYREF
  __int64 v258; // [rsp+218h] [rbp-288h]
  __int64 v259; // [rsp+220h] [rbp-280h] BYREF
  __int64 v260; // [rsp+228h] [rbp-278h]
  int v261[2]; // [rsp+230h] [rbp-270h] BYREF
  __int64 v262; // [rsp+238h] [rbp-268h]
  __int64 v263; // [rsp+240h] [rbp-260h] BYREF
  __int64 v264; // [rsp+248h] [rbp-258h]
  __int64 v265; // [rsp+250h] [rbp-250h] BYREF
  __int64 v266; // [rsp+258h] [rbp-248h]
  __int64 v267; // [rsp+260h] [rbp-240h] BYREF
  __int64 v268; // [rsp+268h] [rbp-238h]
  __int64 v269; // [rsp+270h] [rbp-230h] BYREF
  __int64 v270; // [rsp+278h] [rbp-228h]
  __int64 v271; // [rsp+280h] [rbp-220h] BYREF
  __int64 v272; // [rsp+288h] [rbp-218h]
  __int64 v273; // [rsp+290h] [rbp-210h] BYREF
  __int64 v274; // [rsp+298h] [rbp-208h]
  __int64 v275; // [rsp+2A0h] [rbp-200h] BYREF
  __int64 v276; // [rsp+2A8h] [rbp-1F8h]
  __int64 v277; // [rsp+2B0h] [rbp-1F0h] BYREF
  __int64 v278; // [rsp+2B8h] [rbp-1E8h]
  __int64 v279; // [rsp+2C0h] [rbp-1E0h] BYREF
  __int64 v280; // [rsp+2C8h] [rbp-1D8h]
  __int64 v281; // [rsp+2D0h] [rbp-1D0h] BYREF
  __int64 v282; // [rsp+2D8h] [rbp-1C8h]
  __int64 v283; // [rsp+2E0h] [rbp-1C0h] BYREF
  __int64 v284; // [rsp+2E8h] [rbp-1B8h]
  __int64 v285; // [rsp+2F0h] [rbp-1B0h] BYREF
  __int64 v286; // [rsp+2F8h] [rbp-1A8h]
  __int64 v287; // [rsp+300h] [rbp-1A0h] BYREF
  __int64 v288; // [rsp+308h] [rbp-198h]
  __int64 v289; // [rsp+310h] [rbp-190h] BYREF
  __int64 v290; // [rsp+318h] [rbp-188h]
  __int64 v291; // [rsp+320h] [rbp-180h] BYREF
  __int64 v292; // [rsp+328h] [rbp-178h]
  __int64 v293; // [rsp+330h] [rbp-170h] BYREF
  __int64 v294; // [rsp+338h] [rbp-168h]
  __int64 v295; // [rsp+340h] [rbp-160h] BYREF
  __int64 v296; // [rsp+348h] [rbp-158h]
  __int64 v297; // [rsp+350h] [rbp-150h] BYREF
  __int64 v298; // [rsp+358h] [rbp-148h]
  __int64 v299; // [rsp+360h] [rbp-140h] BYREF
  __int64 v300; // [rsp+368h] [rbp-138h]
  __int64 v301; // [rsp+370h] [rbp-130h] BYREF
  __int64 v302; // [rsp+378h] [rbp-128h]
  __int64 v303; // [rsp+380h] [rbp-120h] BYREF
  __int64 v304; // [rsp+388h] [rbp-118h]
  __int64 v305; // [rsp+390h] [rbp-110h] BYREF
  __int64 v306; // [rsp+398h] [rbp-108h]
  __int64 v307; // [rsp+3A0h] [rbp-100h] BYREF
  __int64 v308; // [rsp+3A8h] [rbp-F8h]
  __int64 v309; // [rsp+3B0h] [rbp-F0h] BYREF
  __int64 v310; // [rsp+3B8h] [rbp-E8h]
  __int64 v311; // [rsp+3C0h] [rbp-E0h] BYREF
  __int64 v312; // [rsp+3C8h] [rbp-D8h]
  __int64 v313; // [rsp+3D0h] [rbp-D0h] BYREF
  __int64 v314; // [rsp+3D8h] [rbp-C8h]
  __int64 v315; // [rsp+3E0h] [rbp-C0h] BYREF
  __int64 v316; // [rsp+3E8h] [rbp-B8h]
  __int64 v317; // [rsp+3F0h] [rbp-B0h] BYREF
  __int64 v318; // [rsp+3F8h] [rbp-A8h]
  int v319[2]; // [rsp+400h] [rbp-A0h] BYREF
  unsigned __int64 v320; // [rsp+408h] [rbp-98h]
  __m128i v321; // [rsp+410h] [rbp-90h]
  __m128 v322; // [rsp+420h] [rbp-80h] BYREF
  __m128 v323; // [rsp+430h] [rbp-70h] BYREF
  __int64 v324; // [rsp+440h] [rbp-60h]
  __int64 v325; // [rsp+448h] [rbp-58h]
  __int64 v326; // [rsp+450h] [rbp-50h]
  __int64 v327; // [rsp+458h] [rbp-48h]
  __int64 v328; // [rsp+460h] [rbp-40h] BYREF
  __int64 v329; // [rsp+468h] [rbp-38h]

  v9 = a1[1];
  v231 = a2;
  v235 = a5;
  v230 = v9;
  v241 = 0;
  v242 = v9;
  v229 = &v241;
  sub_D5B8E0((__int64)a1, a2, &v241);
  v243 = 0;
  v234 = v241;
  v244 = v9;
  v172 = v242;
  sub_D51670((__int64)a1, a2, &v243);
  v245 = 0;
  v218 = v243;
  v175 = v244;
  v246 = v9;
  sub_D518E0((__int64)a1, a2, &v245);
  v247 = 0;
  v219 = v245;
  v178 = v246;
  v248 = v9;
  sub_D5B6C0((__int64)a1, a2, &v247);
  v249 = 0;
  v232 = v247;
  v181 = v248;
  v250 = v9;
  sub_D5B4A0((__int64)a1, a2, &v249);
  v10 = *a4;
  v251 = 0;
  v233 = v249;
  *(_QWORD *)v253 = 0;
  v230 = v250;
  v11 = a1[1];
  v255 = 0;
  v252 = v11;
  v254 = v11;
  v256 = v11;
  v257 = 0;
  v258 = v11;
  v259 = 0;
  v260 = v11;
  *(_QWORD *)v261 = 0;
  v262 = v11;
  v263 = 0;
  v264 = v11;
  v265 = 0;
  v266 = v11;
  sub_D5BB00(a1, v10, &v251);
  sub_D52DE0(
    (int)a1,
    *a4,
    (int)v253,
    v12,
    v13,
    v14,
    v159,
    v163,
    v166,
    v169,
    v172,
    v175,
    v178,
    v181,
    v184,
    v187,
    v190,
    v193,
    v195,
    v198,
    v201,
    v204,
    v206,
    v208,
    a3);
  sub_D52AC0((__int64)a1, *a4, &v255);
  sub_D61A80(a1, *a4, &v257);
  sub_D5BB00(a1, *v235, &v259);
  sub_D52DE0(
    (int)a1,
    *v235,
    (int)v261,
    v15,
    v16,
    v17,
    v160,
    v164,
    v167,
    v170,
    v173,
    v176,
    v179,
    v182,
    v185,
    v188,
    v191,
    v194,
    v196,
    v199,
    v202,
    v205,
    v207,
    v209,
    v211);
  sub_D52AC0((__int64)a1, *v235, &v263);
  sub_D61A80(a1, *v235, &v265);
  v18 = a1[1];
  v267 = 0;
  v19 = _mm_loadh_ps((const double *)&v259);
  v268 = v18;
  v269 = 0;
  v270 = v18;
  v271 = 0;
  v272 = v18;
  v273 = 0;
  v274 = v18;
  v275 = 0;
  v276 = v18;
  v277 = 0;
  v278 = v18;
  v281 = 0;
  v282 = v18;
  v283 = 0;
  v284 = v18;
  v285 = 0;
  v286 = v18;
  v287 = 0;
  v288 = v18;
  v289 = 0;
  v290 = v18;
  v322 = v19;
  sub_D50260(a1 + 2, &v322, &v267);
  if ( v234 )
  {
    v279 = 0;
    v280 = v18;
    sub_D50220(&v279, v229);
    v214 = v279;
    v168 = v280;
  }
  else
  {
    v168 = v18;
    v214 = 0;
  }
  sub_D63CE0(a1, *a4, &v269);
  v20 = a1[1];
  v293 = 0;
  v294 = v20;
  sub_D51DB0((__int64)a1, v263, v233, v232, &v293, v21);
  sub_D51DB0((__int64)a1, *(__int64 *)v261, v234, v293, &v281, v22);
  sub_D63CE0(a1, *v235, &v271);
  v23 = a1[1];
  v295 = 0;
  v296 = v23;
  sub_D51DB0((__int64)a1, v255, v233, v232, &v295, v24);
  sub_D51DB0((__int64)a1, *(__int64 *)v253, v234, v295, &v283, v25);
  sub_D63E40(a1, *a4, &v273);
  v26 = a1[1];
  v297 = 0;
  v298 = v26;
  sub_D51DB0((__int64)a1, v263, v232, v233, &v297, v27);
  sub_D51DB0((__int64)a1, *(__int64 *)v261, v234, v297, &v285, v28);
  sub_D63E40(a1, *v235, &v275);
  v29 = a1[1];
  v299 = 0;
  v300 = v29;
  sub_D51DB0((__int64)a1, v255, v232, v233, &v299, v30);
  sub_D51DB0((__int64)a1, *(__int64 *)v253, v234, v299, &v287, v31);
  v323 = _mm_loadh_ps((const double *)v261);
  sub_D50260(a1 + 2, &v323, &v277);
  v32 = a1[1];
  v301 = 0;
  v302 = v32;
  sub_14E31E0((_DWORD)a1 + 16, v255, v263, (unsigned int)&v301, v33, v34, v161);
  sub_D51DB0((__int64)a1, v301, v218, v219, &v289, v35);
  v36 = sub_15C5560(a1 + 54, v231);
  v37 = a1[1];
  v38 = *a4;
  v305 = 0;
  v215 = v37;
  v306 = v37;
  v307 = 0;
  v308 = v37;
  v309 = 0;
  v310 = v37;
  v313 = 0;
  v314 = v37;
  v315 = 0;
  v316 = v37;
  v317 = 0;
  v318 = v37;
  v303 = 0;
  v304 = v37;
  sub_D59470(a1, v38, &v303, &v305, &v307, &v309, 1);
  v311 = 0;
  v213 = v303;
  v171 = v304;
  v39 = *v235;
  v312 = v215;
  sub_D59470(a1, v39, &v311, &v313, &v315, &v317, 1);
  v328 = 2;
  v217 = v311;
  v329 = 0;
  v40 = a1[30];
  v216 = v312;
  v192 = a1[1];
  v229 = a1 + 29;
  *(_QWORD *)v236 = v309;
  v235 = &v328;
  v221 = sub_15DCAD0(v40, (int)v236, 0);
  sub_15D0DF0(&v328);
  if ( v221 )
    ++*(_DWORD *)(v221 + 8);
  v328 = 2;
  v329 = 0;
  *(_QWORD *)v237 = v317;
  v226 = sub_15DCAD0(a1[30], (int)v237, 0);
  sub_15D0DF0(v235);
  if ( v226 )
    ++*(_DWORD *)(v226 + 8);
  v41 = a1[1];
  LODWORD(v328) = v36;
  LOBYTE(v329) = 0;
  v189 = v41;
  v42 = a1[30];
  *(_QWORD *)v238 = v305;
  v222 = sub_15DCAD0(v42, (int)v238, 0);
  sub_15D0DF0(v235);
  if ( v222 )
    ++*(_DWORD *)(v222 + 8);
  LODWORD(v328) = v36;
  LOBYTE(v329) = 0;
  *(_QWORD *)v239 = v313;
  v227 = sub_15DCAD0(a1[30], (int)v239, 0);
  sub_15D0DF0(v235);
  if ( v227 )
    ++*(_DWORD *)(v227 + 8);
  v43 = a1[1];
  v328 = 2;
  v329 = 0;
  v186 = v43;
  v44 = a1[30];
  *(_QWORD *)v240 = v307;
  v223 = sub_15DCAD0(v44, (int)v240, 0);
  sub_15D0DF0(v235);
  if ( v223 )
    ++*(_DWORD *)(v223 + 8);
  v328 = 2;
  v329 = 0;
  *(_QWORD *)v319 = v315;
  v228 = sub_15DCAD0(a1[30], (int)v319, 0);
  v45 = v228;
  v225 = _mm_loadh_ps((const double *)&v217);
  sub_15D0DF0(v235);
  si128 = _mm_load_si128((const __m128i *)&v225);
  if ( v45 )
    ++*(_DWORD *)(v228 + 8);
  v47 = a1[1];
  v48 = a1[30];
  v322.m128_u64[0] = 0;
  v165 = v47;
  v320 = v47;
  v322.m128_u64[1] = v47;
  v323.m128_u64[0] = 0;
  v323.m128_u64[1] = v47;
  v321 = si128;
  v49 = sub_15E1AF0(v48);
  v225.m128_u64[0] = v49;
  if ( v49 )
    ++*(_DWORD *)(v49 + 8);
  sub_15E1B70(a1[30]);
  sub_15E1B70(a1[30]);
  v50 = sub_15E1B70(a1[30]);
  v51 = v50;
  if ( v50 )
    ++*(_DWORD *)(v50 + 8);
  v52 = v323.m128_u64[0];
  if ( v323.m128_u64[0] )
  {
    v53 = v323.m128_u64[1];
    v54 = (*(_DWORD *)(v323.m128_u64[0] + 8))-- == 1;
    if ( v54 )
      sub_15D7BC0(v53, v52);
  }
  v55 = a1[1];
  v323.m128_u64[0] = v51;
  v162 = v55;
  v56 = sub_15E1B70(a1[30]);
  v57 = v56;
  if ( v56 )
    ++*(_DWORD *)(v56 + 8);
  v200 = a1[1];
  v58 = sub_D81CD0(v229, 2 * v36 - 1, v36, v56);
  v224 = v58;
  if ( v58 )
    ++*(_DWORD *)(v58 + 8);
  v59 = sub_D50160((__int64)v229, v36 - 1, v57);
  v220 = v59;
  if ( v59 )
    ++*(_DWORD *)(v59 + 8);
  if ( v36 <= 3 )
  {
    v155 = sub_D50430((__int64)v229, 4 - v36);
    v156 = a1[30];
    v327 = v155;
    v326 = v220;
    v157 = sub_15E1AF0(v156);
    v63 = v157;
    if ( v157 )
      ++*(_DWORD *)(v157 + 8);
  }
  else
  {
    v197 = a1[1];
    sub_D50160((__int64)v229, v36 - 4, v57);
    v60 = sub_15E1A70(v197);
    v203 = v60;
    if ( v60 )
      ++*(_DWORD *)(v60 + 8);
    v324 = sub_D81CD0(v229, v36 - 1, v36 - 3, v57);
    v61 = a1[30];
    v325 = v203;
    v62 = sub_15E1AF0(v61);
    v63 = v62;
    if ( v62 )
      ++*(_DWORD *)(v62 + 8);
    sub_D50200(v203, v197);
  }
  v329 = v63;
  v64 = a1[30];
  v328 = v224;
  v65 = sub_15E1AF0(v64);
  v235 = (__int64 *)v65;
  if ( v65 )
    ++*(_DWORD *)(v65 + 8);
  v66 = v322.m128_u64[0];
  if ( v322.m128_u64[0] )
  {
    v67 = v322.m128_u64[1];
    v54 = (*(_DWORD *)(v322.m128_u64[0] + 8))-- == 1;
    if ( v54 )
      sub_15D7BC0(v67, v66);
  }
  v291 = 0;
  v292 = v18;
  v322.m128_u64[0] = (unsigned __int64)v235;
  *(_QWORD *)v319 = v225.m128_u64[0];
  sub_D66E50(a1, v231, v212, (__int64 *)v319, (__int64 *)&v322, (__int64 *)&v323, &v291);
  v235 = (__int64 *)v291;
  v68 = v292;
  sub_D51DB0((__int64)a1, v277, v289, v291, a6, v158);
  sub_D51DB0((__int64)a1, v275, v287, *a6, a6, v69);
  sub_D51DB0((__int64)a1, v273, v285, *a6, a6, v70);
  sub_D51DB0((__int64)a1, v271, v283, *a6, a6, v71);
  sub_D51DB0((__int64)a1, v269, v281, *a6, a6, v72);
  result = sub_D51DB0((__int64)a1, v267, v214, *a6, a6, v73);
  if ( v63 )
  {
    v54 = (*(_DWORD *)(v63 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v200, v63);
  }
  v75 = v220;
  if ( v220 )
  {
    LODWORD(v231) = *(_DWORD *)(v220 + 8);
    v54 = (_DWORD)v231 == 1;
    result = (unsigned int)(v231 - 1);
    *(_DWORD *)(v220 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v200, v75);
  }
  v76 = v224;
  if ( v224 )
  {
    LODWORD(v231) = *(_DWORD *)(v224 + 8);
    v54 = (_DWORD)v231 == 1;
    result = (unsigned int)(v231 - 1);
    *(_DWORD *)(v224 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v200, v76);
  }
  if ( v57 )
  {
    v54 = (*(_DWORD *)(v57 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v162, v57);
  }
  v77 = v323.m128_u64[0];
  if ( v323.m128_u64[0] )
  {
    v78 = v323.m128_u64[1];
    v54 = (*(_DWORD *)(v323.m128_u64[0] + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v78, v77);
  }
  v79 = v322.m128_u64[0];
  if ( v322.m128_u64[0] )
  {
    v80 = v322.m128_u64[1];
    v54 = (*(_DWORD *)(v322.m128_u64[0] + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v80, v79);
  }
  v81 = v225.m128_u64[0];
  if ( v225.m128_u64[0] )
  {
    LODWORD(v231) = *(_DWORD *)(v225.m128_u64[0] + 8);
    v54 = (_DWORD)v231 == 1;
    result = (unsigned int)(v231 - 1);
    *(_DWORD *)(v225.m128_u64[0] + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v165, v81);
  }
  v82 = v228;
  if ( v228 )
  {
    LODWORD(v231) = *(_DWORD *)(v228 + 8);
    v54 = (_DWORD)v231 == 1;
    result = (unsigned int)(v231 - 1);
    *(_DWORD *)(v228 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v186, v82);
  }
  v83 = v223;
  if ( v223 )
  {
    LODWORD(v231) = *(_DWORD *)(v223 + 8);
    v54 = (_DWORD)v231 == 1;
    result = (unsigned int)(v231 - 1);
    *(_DWORD *)(v223 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v186, v83);
  }
  v84 = v227;
  if ( v227 )
  {
    LODWORD(v231) = *(_DWORD *)(v227 + 8);
    v54 = (_DWORD)v231 == 1;
    result = (unsigned int)(v231 - 1);
    *(_DWORD *)(v227 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v189, v84);
  }
  v85 = v222;
  if ( v222 )
  {
    LODWORD(v231) = *(_DWORD *)(v222 + 8);
    v54 = (_DWORD)v231 == 1;
    result = (unsigned int)(v231 - 1);
    *(_DWORD *)(v222 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v189, v85);
  }
  v86 = v226;
  if ( v226 )
  {
    LODWORD(v231) = *(_DWORD *)(v226 + 8);
    v54 = (_DWORD)v231 == 1;
    result = (unsigned int)(v231 - 1);
    *(_DWORD *)(v226 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v192, v86);
  }
  v87 = v221;
  if ( v221 )
  {
    LODWORD(v231) = *(_DWORD *)(v221 + 8);
    v54 = (_DWORD)v231 == 1;
    result = (unsigned int)(v231 - 1);
    *(_DWORD *)(v221 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v192, v87);
  }
  v88 = v317;
  if ( v317 )
  {
    v89 = v318;
    v54 = (*(_DWORD *)(v317 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v89, v88);
  }
  v90 = v315;
  if ( v315 )
  {
    v91 = v316;
    v54 = (*(_DWORD *)(v315 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v91, v90);
  }
  v92 = v313;
  if ( v313 )
  {
    v93 = v314;
    v54 = (*(_DWORD *)(v313 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v93, v92);
  }
  v94 = v217;
  if ( v217 )
  {
    LODWORD(v231) = *(_DWORD *)(v217 + 8);
    v54 = (_DWORD)v231 == 1;
    result = (unsigned int)(v231 - 1);
    *(_DWORD *)(v217 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v216, v94);
  }
  v95 = v309;
  if ( v309 )
  {
    v96 = v310;
    v54 = (*(_DWORD *)(v309 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v96, v95);
  }
  v97 = v307;
  if ( v307 )
  {
    v98 = v308;
    v54 = (*(_DWORD *)(v307 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v98, v97);
  }
  v99 = v305;
  if ( v305 )
  {
    v100 = v306;
    v54 = (*(_DWORD *)(v305 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v100, v99);
  }
  if ( v213 )
  {
    LODWORD(v231) = *(_DWORD *)(v213 + 8);
    v54 = (_DWORD)v231 == 1;
    result = (unsigned int)(v231 - 1);
    *(_DWORD *)(v213 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v171, v213);
  }
  v101 = v301;
  if ( v301 )
  {
    v102 = v302;
    v54 = (*(_DWORD *)(v301 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v102, v101);
  }
  v103 = v299;
  if ( v299 )
  {
    v104 = v300;
    v54 = (*(_DWORD *)(v299 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v104, v103);
  }
  v105 = v297;
  if ( v297 )
  {
    v106 = v298;
    v54 = (*(_DWORD *)(v297 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v106, v105);
  }
  v107 = v295;
  if ( v295 )
  {
    v108 = v296;
    v54 = (*(_DWORD *)(v295 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v108, v107);
  }
  v109 = v293;
  if ( v293 )
  {
    v110 = v294;
    v54 = (*(_DWORD *)(v293 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v110, v109);
  }
  v111 = v235;
  if ( v235 )
  {
    LODWORD(v231) = *((_DWORD *)v235 + 2);
    v54 = (_DWORD)v231 == 1;
    result = (unsigned int)(v231 - 1);
    *((_DWORD *)v235 + 2) = result;
    if ( v54 )
      result = sub_15D7BC0(v68, v111);
  }
  v112 = v289;
  if ( v289 )
  {
    v113 = v290;
    v54 = (*(_DWORD *)(v289 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v113, v112);
  }
  v114 = v287;
  if ( v287 )
  {
    v115 = v288;
    v54 = (*(_DWORD *)(v287 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v115, v114);
  }
  v116 = v285;
  if ( v285 )
  {
    v117 = v286;
    v54 = (*(_DWORD *)(v285 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v117, v116);
  }
  v118 = v283;
  if ( v283 )
  {
    v119 = v284;
    v54 = (*(_DWORD *)(v283 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v119, v118);
  }
  v120 = v281;
  if ( v281 )
  {
    v121 = v282;
    v54 = (*(_DWORD *)(v281 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v121, v120);
  }
  if ( v214 )
  {
    LODWORD(v235) = *(_DWORD *)(v214 + 8);
    v54 = (_DWORD)v235 == 1;
    result = (unsigned int)((_DWORD)v235 - 1);
    *(_DWORD *)(v214 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v168, v214);
  }
  v122 = v277;
  if ( v277 )
  {
    v123 = v278;
    v54 = (*(_DWORD *)(v277 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v123, v122);
  }
  v124 = v275;
  if ( v275 )
  {
    v125 = v276;
    v54 = (*(_DWORD *)(v275 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v125, v124);
  }
  v126 = v273;
  if ( v273 )
  {
    v127 = v274;
    v54 = (*(_DWORD *)(v273 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v127, v126);
  }
  v128 = v271;
  if ( v271 )
  {
    v129 = v272;
    v54 = (*(_DWORD *)(v271 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v129, v128);
  }
  v130 = v269;
  if ( v269 )
  {
    v131 = v270;
    v54 = (*(_DWORD *)(v269 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v131, v130);
  }
  v132 = v267;
  if ( v267 )
  {
    v133 = v268;
    v54 = (*(_DWORD *)(v267 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v133, v132);
  }
  v134 = v265;
  if ( v265 )
  {
    v135 = v266;
    v54 = (*(_DWORD *)(v265 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v135, v134);
  }
  v136 = v263;
  if ( v263 )
  {
    v137 = v264;
    v54 = (*(_DWORD *)(v263 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v137, v136);
  }
  v138 = *(_QWORD *)v261;
  if ( *(_QWORD *)v261 )
  {
    v139 = v262;
    v54 = (*(_DWORD *)(*(_QWORD *)v261 + 8LL))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v139, v138);
  }
  v140 = v259;
  if ( v259 )
  {
    v141 = v260;
    v54 = (*(_DWORD *)(v259 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v141, v140);
  }
  v142 = v257;
  if ( v257 )
  {
    v143 = v258;
    v54 = (*(_DWORD *)(v257 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v143, v142);
  }
  v144 = v255;
  if ( v255 )
  {
    v145 = v256;
    v54 = (*(_DWORD *)(v255 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v145, v144);
  }
  v146 = *(_QWORD *)v253;
  if ( *(_QWORD *)v253 )
  {
    v147 = v254;
    v54 = (*(_DWORD *)(*(_QWORD *)v253 + 8LL))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v147, v146);
  }
  v148 = v251;
  if ( v251 )
  {
    v149 = v252;
    v54 = (*(_DWORD *)(v251 + 8))-- == 1;
    if ( v54 )
      result = sub_15D7BC0(v149, v148);
  }
  v150 = v233;
  if ( v233 )
  {
    LODWORD(v235) = *(_DWORD *)(v233 + 8);
    v54 = (_DWORD)v235 == 1;
    result = (unsigned int)((_DWORD)v235 - 1);
    *(_DWORD *)(v233 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v230, v150);
  }
  v151 = v232;
  if ( v232 )
  {
    LODWORD(v235) = *(_DWORD *)(v232 + 8);
    v54 = (_DWORD)v235 == 1;
    result = (unsigned int)((_DWORD)v235 - 1);
    *(_DWORD *)(v232 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v183, v151);
  }
  v152 = v219;
  if ( v219 )
  {
    LODWORD(v235) = *(_DWORD *)(v219 + 8);
    v54 = (_DWORD)v235 == 1;
    result = (unsigned int)((_DWORD)v235 - 1);
    *(_DWORD *)(v219 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v180, v152);
  }
  v153 = v218;
  if ( v218 )
  {
    LODWORD(v235) = *(_DWORD *)(v218 + 8);
    v54 = (_DWORD)v235 == 1;
    result = (unsigned int)((_DWORD)v235 - 1);
    *(_DWORD *)(v218 + 8) = result;
    if ( v54 )
      result = sub_15D7BC0(v177, v153);
  }
  v154 = v234;
  if ( v234 )
  {
    LODWORD(v235) = *(_DWORD *)(v234 + 8);
    v54 = (_DWORD)v235 == 1;
    result = (unsigned int)((_DWORD)v235 - 1);
    *(_DWORD *)(v234 + 8) = result;
    if ( v54 )
      return sub_15D7BC0(v174, v154);
  }
  return result;
}

