__int64 __fastcall sub_D61FD0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 *a4, int a5, __int64 *a6)
{
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rax
  void *v23; // r12
  __int64 v24; // r12
  int *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  unsigned int v29; // r12d
  unsigned int v30; // r13d
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int *v33; // rax
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // r12d
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r13
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r13
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 result; // rax
  bool v68; // zf
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // r13
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // r13
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  int v98; // [rsp-10h] [rbp-2A0h]
  int v99; // [rsp-8h] [rbp-298h]
  void *v100; // [rsp+0h] [rbp-290h]
  int v101; // [rsp+0h] [rbp-290h]
  __int64 v102; // [rsp+8h] [rbp-288h]
  __int64 v103; // [rsp+8h] [rbp-288h]
  int v104; // [rsp+10h] [rbp-280h]
  __int64 v105; // [rsp+10h] [rbp-280h]
  __int64 v106; // [rsp+10h] [rbp-280h]
  __int64 v107; // [rsp+18h] [rbp-278h]
  __int64 v108; // [rsp+18h] [rbp-278h]
  __int64 v109; // [rsp+18h] [rbp-278h]
  int v110; // [rsp+20h] [rbp-270h]
  __int64 v111; // [rsp+20h] [rbp-270h]
  __int64 v112; // [rsp+20h] [rbp-270h]
  __int64 v113; // [rsp+28h] [rbp-268h]
  __int64 v114; // [rsp+28h] [rbp-268h]
  __int64 v115; // [rsp+28h] [rbp-268h]
  __int64 v116; // [rsp+30h] [rbp-260h]
  int v117; // [rsp+30h] [rbp-260h]
  __int64 v118; // [rsp+30h] [rbp-260h]
  __int64 v119; // [rsp+38h] [rbp-258h]
  __int64 v120; // [rsp+38h] [rbp-258h]
  __int64 v121; // [rsp+38h] [rbp-258h]
  __int64 v122; // [rsp+40h] [rbp-250h]
  __int64 v123; // [rsp+40h] [rbp-250h]
  __int64 v124; // [rsp+40h] [rbp-250h]
  __int64 v125; // [rsp+48h] [rbp-248h]
  __int64 v126; // [rsp+48h] [rbp-248h]
  __int64 v127; // [rsp+48h] [rbp-248h]
  __int64 v128; // [rsp+50h] [rbp-240h]
  __int64 v129; // [rsp+50h] [rbp-240h]
  __int64 v130; // [rsp+50h] [rbp-240h]
  __int64 v131; // [rsp+58h] [rbp-238h]
  __int64 v132; // [rsp+58h] [rbp-238h]
  __int64 v133; // [rsp+58h] [rbp-238h]
  __int64 v134; // [rsp+60h] [rbp-230h]
  __int64 v135; // [rsp+60h] [rbp-230h]
  __int64 v136; // [rsp+60h] [rbp-230h]
  __int64 v137; // [rsp+68h] [rbp-228h]
  __int64 v138; // [rsp+68h] [rbp-228h]
  char v139; // [rsp+68h] [rbp-228h]
  __int64 v140; // [rsp+68h] [rbp-228h]
  int v141[2]; // [rsp+68h] [rbp-228h]
  __int64 v142; // [rsp+70h] [rbp-220h]
  __int64 v143; // [rsp+70h] [rbp-220h]
  __int64 v144; // [rsp+70h] [rbp-220h]
  __int64 v145; // [rsp+78h] [rbp-218h]
  __int64 v146; // [rsp+78h] [rbp-218h]
  __int64 v147; // [rsp+78h] [rbp-218h]
  __int64 v148; // [rsp+80h] [rbp-210h]
  __int64 v149; // [rsp+80h] [rbp-210h]
  __int64 v150; // [rsp+80h] [rbp-210h]
  __int64 v151; // [rsp+88h] [rbp-208h]
  __int64 v152; // [rsp+88h] [rbp-208h]
  __int64 v153; // [rsp+90h] [rbp-200h]
  __int64 v154; // [rsp+90h] [rbp-200h]
  __int64 v155; // [rsp+98h] [rbp-1F8h]
  __int64 v156; // [rsp+A0h] [rbp-1F0h]
  __int64 v157; // [rsp+A8h] [rbp-1E8h]
  int v158[2]; // [rsp+B0h] [rbp-1E0h]
  __int64 v159; // [rsp+B8h] [rbp-1D8h]
  __int64 v160; // [rsp+B8h] [rbp-1D8h]
  __int64 v161; // [rsp+C0h] [rbp-1D0h]
  __int64 v162; // [rsp+C8h] [rbp-1C8h]
  __int64 v163; // [rsp+D0h] [rbp-1C0h]
  __int64 v164; // [rsp+D8h] [rbp-1B8h]
  __int64 v165; // [rsp+E0h] [rbp-1B0h]
  int v166[2]; // [rsp+E0h] [rbp-1B0h]
  __int64 v167; // [rsp+E8h] [rbp-1A8h]
  __int64 v168; // [rsp+F0h] [rbp-1A0h]
  __int64 v169; // [rsp+F8h] [rbp-198h]
  int v170; // [rsp+100h] [rbp-190h]
  __int64 v171; // [rsp+100h] [rbp-190h]
  __int64 v172; // [rsp+100h] [rbp-190h]
  int v173; // [rsp+108h] [rbp-188h]
  __int64 v174; // [rsp+108h] [rbp-188h]
  unsigned int v175; // [rsp+110h] [rbp-180h]
  int v176[2]; // [rsp+110h] [rbp-180h]
  __int64 v177; // [rsp+110h] [rbp-180h]
  int v178[2]; // [rsp+110h] [rbp-180h]
  unsigned int v179; // [rsp+118h] [rbp-178h]
  __int64 v180; // [rsp+118h] [rbp-178h]
  __int64 v181; // [rsp+120h] [rbp-170h]
  __int64 v182; // [rsp+120h] [rbp-170h]
  int v183; // [rsp+128h] [rbp-168h]
  __int64 v184; // [rsp+128h] [rbp-168h]
  __int64 v185; // [rsp+128h] [rbp-168h]
  __int64 v186; // [rsp+130h] [rbp-160h]
  __int64 v187; // [rsp+130h] [rbp-160h]
  __int64 v188; // [rsp+138h] [rbp-158h]
  unsigned int v189; // [rsp+140h] [rbp-150h]
  __int64 v190; // [rsp+140h] [rbp-150h]
  void *v192; // [rsp+148h] [rbp-148h]
  void *v193; // [rsp+148h] [rbp-148h]
  _DWORD *v194; // [rsp+148h] [rbp-148h]
  void *v195; // [rsp+148h] [rbp-148h]
  unsigned int v196; // [rsp+150h] [rbp-140h]
  int v197[2]; // [rsp+150h] [rbp-140h]
  int v198[2]; // [rsp+150h] [rbp-140h]
  int v199[2]; // [rsp+150h] [rbp-140h]
  int v200; // [rsp+150h] [rbp-140h]
  int v201; // [rsp+150h] [rbp-140h]
  int v202; // [rsp+150h] [rbp-140h]
  int v203; // [rsp+150h] [rbp-140h]
  int v204; // [rsp+150h] [rbp-140h]
  int v205; // [rsp+150h] [rbp-140h]
  int v206; // [rsp+150h] [rbp-140h]
  int v207; // [rsp+150h] [rbp-140h]
  int v208; // [rsp+150h] [rbp-140h]
  int v209; // [rsp+150h] [rbp-140h]
  int v210; // [rsp+150h] [rbp-140h]
  int v211; // [rsp+150h] [rbp-140h]
  int v212; // [rsp+150h] [rbp-140h]
  __int64 v213; // [rsp+158h] [rbp-138h]
  int v214; // [rsp+158h] [rbp-138h]
  __int64 v215; // [rsp+158h] [rbp-138h]
  __int64 v216; // [rsp+158h] [rbp-138h]
  __int64 v217; // [rsp+158h] [rbp-138h]
  int v218; // [rsp+158h] [rbp-138h]
  int v219; // [rsp+158h] [rbp-138h]
  int v220; // [rsp+158h] [rbp-138h]
  int v221; // [rsp+158h] [rbp-138h]
  int v222; // [rsp+158h] [rbp-138h]
  int v223; // [rsp+158h] [rbp-138h]
  int v224; // [rsp+158h] [rbp-138h]
  int v225; // [rsp+158h] [rbp-138h]
  int v226; // [rsp+158h] [rbp-138h]
  int v227; // [rsp+158h] [rbp-138h]
  int v228; // [rsp+158h] [rbp-138h]
  int v229; // [rsp+158h] [rbp-138h]
  int v230; // [rsp+158h] [rbp-138h]
  __int64 v231; // [rsp+158h] [rbp-138h]
  int v232[2]; // [rsp+160h] [rbp-130h] BYREF
  int v233[2]; // [rsp+168h] [rbp-128h] BYREF
  __int64 v234; // [rsp+170h] [rbp-120h] BYREF
  __int64 v235; // [rsp+178h] [rbp-118h]
  __m128i v236; // [rsp+180h] [rbp-110h] BYREF
  __int64 v237; // [rsp+190h] [rbp-100h] BYREF
  __int64 v238; // [rsp+198h] [rbp-F8h]
  __int64 v239; // [rsp+1A0h] [rbp-F0h] BYREF
  __int64 v240; // [rsp+1A8h] [rbp-E8h]
  __int64 v241; // [rsp+1B0h] [rbp-E0h] BYREF
  __int64 v242; // [rsp+1B8h] [rbp-D8h]
  __int64 v243; // [rsp+1C0h] [rbp-D0h] BYREF
  __int64 v244; // [rsp+1C8h] [rbp-C8h]
  int v245[2]; // [rsp+1D0h] [rbp-C0h] BYREF
  __int64 v246; // [rsp+1D8h] [rbp-B8h]
  __int64 v247; // [rsp+1E0h] [rbp-B0h] BYREF
  __int64 v248; // [rsp+1E8h] [rbp-A8h]
  __int64 v249; // [rsp+1F0h] [rbp-A0h] BYREF
  __int64 v250; // [rsp+1F8h] [rbp-98h]
  __int64 v251; // [rsp+200h] [rbp-90h] BYREF
  __int64 v252; // [rsp+208h] [rbp-88h]
  __int64 v253; // [rsp+210h] [rbp-80h] BYREF
  __int64 v254; // [rsp+218h] [rbp-78h]
  __m128i v255; // [rsp+220h] [rbp-70h]
  __int64 v256; // [rsp+230h] [rbp-60h]
  __int64 v257; // [rsp+238h] [rbp-58h]
  __int64 v258; // [rsp+240h] [rbp-50h] BYREF
  __int64 v259; // [rsp+248h] [rbp-48h]
  _QWORD v260[8]; // [rsp+250h] [rbp-40h] BYREF

  LODWORD(v137) = a5;
  v165 = *(_QWORD *)(*a4 + 32);
  v213 = a4[1];
  v236.m128i_i64[0] = 0;
  v9 = sub_15D1F10(v213);
  v10 = *(_QWORD *)(a2 + 40);
  v237 = 0;
  v239 = 0;
  v186 = v10;
  v11 = a1[1];
  v234 = 0;
  v236.m128i_i64[1] = v11;
  v238 = v11;
  v240 = v11;
  v235 = v11;
  sub_D59470(a1, v213, &v234, v236.m128i_i64, &v237, &v239, 1);
  v151 = v234;
  v110 = v235;
  v183 = sub_15C5540((int)a1 + 432, v9, v12, v13, v98, v99);
  v189 = sub_15C5560(a1 + 54, v9);
  v14 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  if ( *(_BYTE *)(v14 + 8) )
    sub_DBF6E(0);
  v196 = *(_DWORD *)v14;
  v122 = a1[1];
  v15 = sub_D50430((__int64)(a1 + 29), 1u);
  v164 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v16 = sub_D50390((__int64)(a1 + 29), 1u);
  v188 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = a1[1];
  v241 = 0;
  v242 = v17;
  v243 = 0;
  v244 = v17;
  *(_QWORD *)v245 = 0;
  v246 = v17;
  v247 = 0;
  v248 = v17;
  v249 = 0;
  v250 = v17;
  sub_D5BB00(a1, v213, &v241);
  sub_D61A80(a1, v213, &v243);
  sub_D52DE0(
    (int)a1,
    v213,
    (int)v245,
    v18,
    v19,
    v20,
    v100,
    v102,
    v104,
    v107,
    v110,
    v113,
    v116,
    v119,
    v122,
    v125,
    v128,
    v131,
    v134,
    v137,
    v142,
    v145,
    v148,
    v151,
    v153);
  sub_D52C50((__int64)a1, v213, &v247);
  sub_D53650(
    (int)a1,
    v213,
    (__int64)&v249,
    v101,
    v103,
    v105,
    v108,
    v111,
    v114,
    v117,
    v120,
    v123,
    v126,
    v129,
    v132,
    v135,
    v138,
    v143,
    v146,
    v149);
  v154 = a1[1];
  v21 = sub_15E1B70(v154);
  v162 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  v253 = 0;
  v254 = v154;
  sub_D612E0((__int64)a1, a2, a3, a4, &v253);
  v156 = v253;
  v118 = v254;
  if ( v253 )
  {
    v251 = 0;
    v252 = v154;
    sub_D50220(&v251, &v253);
    v155 = v251;
    v115 = v252;
  }
  else
  {
    v155 = 0;
    v115 = v154;
  }
  v121 = a1[1];
  v147 = *(_QWORD *)v245;
  if ( *(_QWORD *)v245 )
    ++*(_DWORD *)(*(_QWORD *)v245 + 8LL);
  v258 = 0;
  v259 = 0;
  v260[0] = 1;
  v260[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v260);
  BYTE4(v260[0]) &= ~1u;
  LODWORD(v260[0]) = 1;
  v22 = sub_16746C0(a1 + 29, &v258, v186);
  v157 = v22;
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v258);
  sub_182CBA0(v23, v260);
  v179 = v196 + 3;
  if ( v189 < v196 + 3 )
  {
    v85 = sub_D50430((__int64)(a1 + 29), v196 + 3 - v189);
    v86 = a1[30];
    v255 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v236), (__m128i)(unsigned __int64)v85);
    v87 = sub_15E1AF0(v86);
    v24 = v87;
    if ( v87 )
      ++*(_DWORD *)(v87 + 8);
    sub_D50200(v236.m128i_i64[0], v236.m128i_i64[1]);
    v236.m128i_i64[0] = v24;
  }
  else
  {
    v24 = v236.m128i_i64[0];
  }
  v25 = *(int **)(*(_QWORD *)(sub_15D1F10(v24) + 24) + 8LL);
  if ( *((_BYTE *)v25 + 8) )
    sub_DBF6E(0);
  v214 = *v25;
  v136 = a1[1];
  sub_D500F0((__int64)(a1 + 29), v239);
  v258 = 2;
  v259 = 0;
  *(_QWORD *)v232 = v237;
  sub_15DCAD0(a1[30], (int)v232, 0);
  sub_15D0DF0(&v258);
  v26 = sub_15E1B70(a1[30]);
  v190 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v175 = v196 + 2;
  v256 = sub_D81D60(a1 + 29, v196 + 2, v236.m128i_i64[0]);
  v27 = a1[30];
  v257 = v164;
  v28 = sub_15E1AF0(v27);
  v168 = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v173 = v196 + v214;
  v29 = v196 + v214 + 3;
  v30 = v183 + 2;
  sub_D50430((__int64)(a1 + 29), v183 + 2);
  v31 = sub_15E1B70(a1[30]);
  v187 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  v215 = a1[1];
  sub_15E1A70(a1[30]);
  v32 = sub_15E1BF0(v215);
  v216 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  if ( v30 < v29 )
  {
    v93 = sub_D81D60(a1 + 29, v29 - v183 - 2, v32);
    v94 = v93;
    if ( v93 )
      ++*(_DWORD *)(v93 + 8);
    sub_D50200(v216, v136);
    v216 = v94;
  }
  else if ( v29 < v30 )
  {
    v172 = a1[1];
    v88 = sub_D81CD0(a1 + 29, v29, v30, v32);
    v182 = v88;
    if ( v88 )
      ++*(_DWORD *)(v88 + 8);
    v89 = sub_D50160((__int64)(a1 + 29), v183 + 1, v216);
    v185 = v89;
    if ( v89 )
      ++*(_DWORD *)(v89 + 8);
    sub_D50200(v216, v136);
    v231 = a1[1];
    sub_D81BF0(a1 + 29, (unsigned int)(v173 + 2), v30);
    v90 = a1[1];
    v91 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v182) + 24) + 8LL);
    if ( *(_BYTE *)(v91 + 8) )
      sub_DBF6E(0);
    sub_D50430((__int64)(a1 + 29), *(_DWORD *)v91);
    sub_15E1B70(v90);
    v92 = sub_15E1BF0(v231);
    v216 = v92;
    if ( v92 )
      ++*(_DWORD *)(v92 + 8);
    sub_D50200(v185, v136);
    sub_D50200(v182, v172);
  }
  v109 = a1[1];
  v33 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(v216) + 24) + 8LL);
  if ( *((_BYTE *)v33 + 8) )
    sub_DBF6E(0);
  v34 = sub_D81BF0(a1 + 29, v175, *v33);
  v184 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v35 = a1[1];
  sub_15E1B70(a1[30]);
  v36 = sub_15E1BF0(v35);
  v181 = v36;
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  v170 = *(_DWORD *)(v216 + 8);
  *(_DWORD *)(v216 + 8) = v170 - 1;
  if ( v170 == 1 )
    sub_15D7BC0(v136, v216);
  *(_QWORD *)v158 = a1[1];
  sub_15E1B70(a1[30]);
  sub_15E1B70(a1[30]);
  v37 = sub_15E1BF0(v158[0]);
  v217 = v37;
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  v38 = v29 - v196;
  v39 = sub_D81CD0(a1 + 29, (unsigned int)(v173 + 2), v38 - 3, v37);
  v167 = v39;
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  v40 = sub_D81CD0(a1 + 29, v38 - 3, v38 - 3, v217);
  v169 = v40;
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
  v41 = sub_D81CD0(a1 + 29, v38 - 4, v38 - 4, v217);
  v171 = v41;
  if ( v41 )
    ++*(_DWORD *)(v41 + 8);
  v42 = sub_D50160((__int64)(a1 + 29), v38 - 5, v217);
  v174 = v42;
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  v43 = sub_15E1A70(a1[1]);
  v44 = v43;
  if ( v43 )
    ++*(_DWORD *)(v43 + 8);
  v106 = a1[1];
  sub_D55BB0(&v258, a1, v165, v152, v169, v171, v43);
  v127 = a1[1];
  v150 = v258;
  v45 = sub_D81D60(a1 + 29, v175, v258);
  v163 = v45;
  if ( v45 )
    ++*(_DWORD *)(v45 + 8);
  v46 = sub_15E1B70(a1[30]);
  v47 = v46;
  if ( v46 )
    ++*(_DWORD *)(v46 + 8);
  v130 = a1[1];
  v48 = sub_15E1B70(v130);
  v161 = v48;
  if ( v48 )
    ++*(_DWORD *)(v48 + 8);
  *(_QWORD *)v176 = a1[1];
  sub_D50430((__int64)(a1 + 29), v179);
  v49 = sub_15E1B70(v176[0]);
  *(_QWORD *)v166 = v49;
  if ( v49 )
    ++*(_DWORD *)(v49 + 8);
  v50 = sub_15E1B70(a1[1]);
  v159 = v50;
  if ( v50 )
    ++*(_DWORD *)(v50 + 8);
  v144 = a1[1];
  if ( v139 )
  {
    if ( v188 )
      ++*(_DWORD *)(v188 + 8);
    if ( v196 <= 1 )
    {
      v177 = v188;
    }
    else
    {
      v259 = sub_D50430((__int64)(a1 + 29), v196 - 1);
      v51 = a1[30];
      v258 = v188;
      v52 = sub_15E1AF0(v51);
      v177 = v52;
      if ( v52 )
        ++*(_DWORD *)(v52 + 8);
      sub_D50200(v188, v144);
    }
    v258 = 3;
    v259 = 0;
    *(_QWORD *)v233 = v177;
    v140 = sub_15DCAD0(a1[30], (int)v233, 0);
    sub_15D0DF0(&v258);
    if ( v140 )
      ++*(_DWORD *)(v140 + 8);
    sub_D50200(v177, v144);
    if ( v196 <= 1 )
    {
      v54 = sub_D50430((__int64)(a1 + 29), 4u);
    }
    else
    {
      sub_D50390((__int64)(a1 + 29), v196 - 1);
      v53 = sub_15E1A70(a1[30]);
      v54 = sub_D81D60(a1 + 29, 4, v53);
    }
    *(_QWORD *)v178 = v54;
    if ( v54 )
      ++*(_DWORD *)(v54 + 8);
    v192 = (void *)a1[1];
    sub_D50390((__int64)(a1 + 29), v179);
    sub_15E1A70(a1[30]);
    sub_15E1B70(a1[30]);
    v55 = sub_15E1B70((int)v192);
    v133 = v55;
    if ( v55 )
      ++*(_DWORD *)(v55 + 8);
    sub_D50200(v159, v130);
    v193 = (void *)a1[1];
    sub_15E1A70(a1[30]);
    v56 = sub_15E1BF0((int)v193);
    v194 = (_DWORD *)v56;
    if ( v56 )
      ++*(_DWORD *)(v56 + 8);
    sub_D50200(v47, v127);
    v57 = a1[1];
    sub_15E1B70(a1[30]);
    sub_15E1B70(a1[30]);
    sub_15E1A70(a1[1]);
    v58 = sub_15E1BF0(v57);
    v180 = v58;
    if ( v58 )
      ++*(_DWORD *)(v58 + 8);
    sub_D50200(v140, v144);
  }
  else
  {
    sub_D50390((__int64)(a1 + 29), v196);
    v95 = sub_15E1A70(a1[30]);
    v96 = sub_D81D60(a1 + 29, 3, v95);
    *(_QWORD *)v178 = v96;
    if ( v96 )
      ++*(_DWORD *)(v96 + 8);
    *(_QWORD *)v141 = a1[1];
    sub_15E1B70(a1[30]);
    sub_15E1A70(a1[1]);
    v195 = (void *)a1[1];
    sub_D50430((__int64)(a1 + 29), v179);
    sub_15E1B70((int)v195);
    sub_15E1A70(a1[1]);
    sub_15E1B70((int)v195);
    v97 = sub_15E1BF0(v141[0]);
    v180 = v97;
    if ( v97 )
      ++*(_DWORD *)(v97 + 8);
    v194 = (_DWORD *)v47;
    v133 = v159;
  }
  v160 = a1[1];
  v59 = sub_D50160((__int64)(a1 + 29), v196 - 1, (__int64)v194);
  v60 = v59;
  if ( v59 )
    ++*(_DWORD *)(v59 + 8);
  *(_QWORD *)v197 = a1[1];
  sub_15E1A70(v197[0]);
  v61 = sub_15E1BF0(v197[0]);
  if ( v61 )
    ++*(_DWORD *)(v61 + 8);
  *(_QWORD *)v198 = v61;
  sub_D50200(*a6, a6[1]);
  v62 = a1[1];
  *a6 = *(_QWORD *)v198;
  v63 = sub_15E1BF0(v62);
  if ( v63 )
    ++*(_DWORD *)(v63 + 8);
  *(_QWORD *)v199 = v63;
  sub_D50200(*a6, a6[1]);
  v64 = a1[1];
  *a6 = *(_QWORD *)v199;
  v65 = sub_15E1BF0(v64);
  v66 = v65;
  if ( v65 )
    ++*(_DWORD *)(v65 + 8);
  result = sub_D50200(*a6, a6[1]);
  *a6 = v66;
  if ( v60 )
  {
    v68 = (*(_DWORD *)(v60 + 8))-- == 1;
    if ( v68 )
      result = sub_15D7BC0(v160, v60);
  }
  if ( v180 )
  {
    v200 = *(_DWORD *)(v180 + 8);
    result = (unsigned int)(v200 - 1);
    *(_DWORD *)(v180 + 8) = result;
    if ( v200 == 1 )
      result = sub_15D7BC0(v144, v180);
  }
  if ( *(_QWORD *)v178 )
  {
    v201 = *(_DWORD *)(*(_QWORD *)v178 + 8LL);
    result = (unsigned int)(v201 - 1);
    *(_DWORD *)(*(_QWORD *)v178 + 8LL) = result;
    if ( v201 == 1 )
      result = sub_15D7BC0(v144, *(_QWORD *)v178);
  }
  if ( v133 )
  {
    v202 = *(_DWORD *)(v133 + 8);
    result = (unsigned int)(v202 - 1);
    *(_DWORD *)(v133 + 8) = result;
    if ( v202 == 1 )
      result = sub_15D7BC0(v130, v133);
  }
  if ( *(_QWORD *)v166 )
  {
    v203 = *(_DWORD *)(*(_QWORD *)v166 + 8LL);
    result = (unsigned int)(v203 - 1);
    *(_DWORD *)(*(_QWORD *)v166 + 8LL) = result;
    if ( v203 == 1 )
      result = sub_15D7BC0(v130, *(_QWORD *)v166);
  }
  if ( v161 )
  {
    v204 = *(_DWORD *)(v161 + 8);
    result = (unsigned int)(v204 - 1);
    *(_DWORD *)(v161 + 8) = result;
    if ( v204 == 1 )
      result = sub_15D7BC0(v130, v161);
  }
  if ( v194 )
  {
    v205 = v194[2];
    result = (unsigned int)(v205 - 1);
    v194[2] = result;
    if ( v205 == 1 )
      result = sub_15D7BC0(v127, v194);
  }
  if ( v163 )
  {
    v206 = *(_DWORD *)(v163 + 8);
    result = (unsigned int)(v206 - 1);
    *(_DWORD *)(v163 + 8) = result;
    if ( v206 == 1 )
      result = sub_15D7BC0(v127, v163);
  }
  if ( v150 )
  {
    v207 = *(_DWORD *)(v150 + 8);
    result = (unsigned int)(v207 - 1);
    *(_DWORD *)(v150 + 8) = result;
    if ( v207 == 1 )
      result = sub_15D7BC0(v106, v150);
  }
  if ( v44 )
  {
    v68 = (*(_DWORD *)(v44 + 8))-- == 1;
    if ( v68 )
      result = sub_15D7BC0(*(_QWORD *)v158, v44);
  }
  if ( v174 )
  {
    v208 = *(_DWORD *)(v174 + 8);
    result = (unsigned int)(v208 - 1);
    *(_DWORD *)(v174 + 8) = result;
    if ( v208 == 1 )
      result = sub_15D7BC0(*(_QWORD *)v158, v174);
  }
  if ( v171 )
  {
    v209 = *(_DWORD *)(v171 + 8);
    result = (unsigned int)(v209 - 1);
    *(_DWORD *)(v171 + 8) = result;
    if ( v209 == 1 )
      result = sub_15D7BC0(*(_QWORD *)v158, v171);
  }
  if ( v169 )
  {
    v210 = *(_DWORD *)(v169 + 8);
    result = (unsigned int)(v210 - 1);
    *(_DWORD *)(v169 + 8) = result;
    if ( v210 == 1 )
      result = sub_15D7BC0(*(_QWORD *)v158, v169);
  }
  if ( v167 )
  {
    v211 = *(_DWORD *)(v167 + 8);
    result = (unsigned int)(v211 - 1);
    *(_DWORD *)(v167 + 8) = result;
    if ( v211 == 1 )
      result = sub_15D7BC0(*(_QWORD *)v158, v167);
  }
  if ( v217 )
  {
    v212 = *(_DWORD *)(v217 + 8);
    result = (unsigned int)(v212 - 1);
    *(_DWORD *)(v217 + 8) = result;
    if ( v212 == 1 )
      result = sub_15D7BC0(*(_QWORD *)v158, v217);
  }
  if ( v184 )
  {
    v218 = *(_DWORD *)(v184 + 8);
    result = (unsigned int)(v218 - 1);
    *(_DWORD *)(v184 + 8) = result;
    if ( v218 == 1 )
      result = sub_15D7BC0(v109, v184);
  }
  if ( v168 )
  {
    v219 = *(_DWORD *)(v168 + 8);
    result = (unsigned int)(v219 - 1);
    *(_DWORD *)(v168 + 8) = result;
    if ( v219 == 1 )
      result = sub_15D7BC0(v136, v168);
  }
  if ( v187 )
  {
    v220 = *(_DWORD *)(v187 + 8);
    result = (unsigned int)(v220 - 1);
    *(_DWORD *)(v187 + 8) = result;
    if ( v220 == 1 )
      result = sub_15D7BC0(v136, v187);
  }
  if ( v181 )
  {
    v221 = *(_DWORD *)(v181 + 8);
    result = (unsigned int)(v221 - 1);
    *(_DWORD *)(v181 + 8) = result;
    if ( v221 == 1 )
      result = sub_15D7BC0(v136, v181);
  }
  if ( v190 )
  {
    v222 = *(_DWORD *)(v190 + 8);
    result = (unsigned int)(v222 - 1);
    *(_DWORD *)(v190 + 8) = result;
    if ( v222 == 1 )
      result = sub_15D7BC0(v136, v190);
  }
  if ( v157 )
  {
    v223 = *(_DWORD *)(v157 + 8);
    result = (unsigned int)(v223 - 1);
    *(_DWORD *)(v157 + 8) = result;
    if ( v223 == 1 )
      result = sub_15D7BC0(v121, v157);
  }
  if ( v147 )
  {
    v224 = *(_DWORD *)(v147 + 8);
    result = (unsigned int)(v224 - 1);
    *(_DWORD *)(v147 + 8) = result;
    if ( v224 == 1 )
      result = sub_15D7BC0(v121, v147);
  }
  if ( v156 )
  {
    v225 = *(_DWORD *)(v156 + 8);
    result = (unsigned int)(v225 - 1);
    *(_DWORD *)(v156 + 8) = result;
    if ( v225 == 1 )
      result = sub_15D7BC0(v118, v156);
  }
  if ( v155 )
  {
    v226 = *(_DWORD *)(v155 + 8);
    result = (unsigned int)(v226 - 1);
    *(_DWORD *)(v155 + 8) = result;
    if ( v226 == 1 )
      result = sub_15D7BC0(v115, v155);
  }
  if ( v162 )
  {
    v227 = *(_DWORD *)(v162 + 8);
    result = (unsigned int)(v227 - 1);
    *(_DWORD *)(v162 + 8) = result;
    if ( v227 == 1 )
      result = sub_15D7BC0(v154, v162);
  }
  v69 = v249;
  if ( v249 )
  {
    v70 = v250;
    v68 = (*(_DWORD *)(v249 + 8))-- == 1;
    if ( v68 )
      result = sub_15D7BC0(v70, v69);
  }
  v71 = v247;
  if ( v247 )
  {
    v72 = v248;
    v68 = (*(_DWORD *)(v247 + 8))-- == 1;
    if ( v68 )
      result = sub_15D7BC0(v72, v71);
  }
  v73 = *(_QWORD *)v245;
  if ( *(_QWORD *)v245 )
  {
    v74 = v246;
    v68 = (*(_DWORD *)(*(_QWORD *)v245 + 8LL))-- == 1;
    if ( v68 )
      result = sub_15D7BC0(v74, v73);
  }
  v75 = v243;
  if ( v243 )
  {
    v76 = v244;
    v68 = (*(_DWORD *)(v243 + 8))-- == 1;
    if ( v68 )
      result = sub_15D7BC0(v76, v75);
  }
  v77 = v241;
  if ( v241 )
  {
    v78 = v242;
    v68 = (*(_DWORD *)(v241 + 8))-- == 1;
    if ( v68 )
      result = sub_15D7BC0(v78, v77);
  }
  if ( v188 )
  {
    v228 = *(_DWORD *)(v188 + 8);
    result = (unsigned int)(v228 - 1);
    *(_DWORD *)(v188 + 8) = result;
    if ( v228 == 1 )
      result = sub_15D7BC0(v124, v188);
  }
  if ( v164 )
  {
    v229 = *(_DWORD *)(v164 + 8);
    result = (unsigned int)(v229 - 1);
    *(_DWORD *)(v164 + 8) = result;
    if ( v229 == 1 )
      result = sub_15D7BC0(v124, v164);
  }
  v79 = v239;
  if ( v239 )
  {
    v80 = v240;
    v68 = (*(_DWORD *)(v239 + 8))-- == 1;
    if ( v68 )
      result = sub_15D7BC0(v80, v79);
  }
  v81 = v237;
  if ( v237 )
  {
    v82 = v238;
    v68 = (*(_DWORD *)(v237 + 8))-- == 1;
    if ( v68 )
      result = sub_15D7BC0(v82, v81);
  }
  v83 = v236.m128i_i64[0];
  if ( v236.m128i_i64[0] )
  {
    v84 = v236.m128i_i64[1];
    v68 = (*(_DWORD *)(v236.m128i_i64[0] + 8))-- == 1;
    if ( v68 )
      result = sub_15D7BC0(v84, v83);
  }
  if ( v152 )
  {
    v230 = *(_DWORD *)(v152 + 8);
    result = (unsigned int)(v230 - 1);
    *(_DWORD *)(v152 + 8) = result;
    if ( v230 == 1 )
      return sub_15D7BC0(v112, v152);
  }
  return result;
}

