__int64 __fastcall sub_D5D650(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // r8d
  int v11; // r9d
  bool v12; // zf
  int v13; // edi
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // r13
  __int64 v34; // rax
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // r13
  int v39; // r8d
  int v40; // r9d
  int v41; // edi
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // r13
  __int64 v50; // rax
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // r13
  __m128i v55; // xmm1
  int v56; // r8d
  int v57; // r9d
  int v58; // edi
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  __int64 result; // rax
  unsigned __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 v100; // rsi
  __int64 v101; // rdi
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // rsi
  __int64 v105; // rdi
  __int64 v106; // rsi
  __int64 v107; // rdi
  __int64 v108; // rax
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rsi
  __int64 v113; // rdi
  __int64 v114; // rax
  __int64 v115; // r12
  __int64 v116; // rsi
  __int64 v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  int v122; // [rsp+0h] [rbp-2A8h]
  void *v123; // [rsp+0h] [rbp-2A8h]
  void *v124; // [rsp+0h] [rbp-2A8h]
  int v125; // [rsp+0h] [rbp-2A8h]
  int v126; // [rsp+0h] [rbp-2A8h]
  __int64 v127; // [rsp+8h] [rbp-2A0h]
  __int64 v128; // [rsp+8h] [rbp-2A0h]
  __int64 v129; // [rsp+8h] [rbp-2A0h]
  __int64 v130; // [rsp+8h] [rbp-2A0h]
  __int64 v131; // [rsp+8h] [rbp-2A0h]
  __int64 v132; // [rsp+8h] [rbp-2A0h]
  int v133; // [rsp+8h] [rbp-2A0h]
  int v134; // [rsp+8h] [rbp-2A0h]
  int v135; // [rsp+8h] [rbp-2A0h]
  int v136; // [rsp+8h] [rbp-2A0h]
  int v137; // [rsp+8h] [rbp-2A0h]
  int v138; // [rsp+10h] [rbp-298h]
  int v139; // [rsp+10h] [rbp-298h]
  int v140; // [rsp+10h] [rbp-298h]
  int v141[2]; // [rsp+10h] [rbp-298h]
  int v142[2]; // [rsp+10h] [rbp-298h]
  int v143[2]; // [rsp+10h] [rbp-298h]
  int v144; // [rsp+18h] [rbp-290h]
  __int64 v145; // [rsp+18h] [rbp-290h]
  __int64 v146; // [rsp+18h] [rbp-290h]
  int v147; // [rsp+18h] [rbp-290h]
  int v148; // [rsp+18h] [rbp-290h]
  int v149[2]; // [rsp+18h] [rbp-290h]
  int v150; // [rsp+20h] [rbp-288h]
  int v151; // [rsp+20h] [rbp-288h]
  int v152; // [rsp+20h] [rbp-288h]
  int v153[2]; // [rsp+20h] [rbp-288h]
  int v154[2]; // [rsp+20h] [rbp-288h]
  int v155[2]; // [rsp+20h] [rbp-288h]
  void *v156; // [rsp+28h] [rbp-280h]
  void *v157; // [rsp+28h] [rbp-280h]
  void *v158; // [rsp+28h] [rbp-280h]
  void *v159; // [rsp+28h] [rbp-280h]
  void *v160; // [rsp+28h] [rbp-280h]
  _DWORD *v161; // [rsp+28h] [rbp-280h]
  __int64 v162; // [rsp+30h] [rbp-278h]
  __int64 v163; // [rsp+30h] [rbp-278h]
  int v164[2]; // [rsp+30h] [rbp-278h]
  void *ptr; // [rsp+38h] [rbp-270h]
  void *ptrd; // [rsp+38h] [rbp-270h]
  void *ptra; // [rsp+38h] [rbp-270h]
  void *ptrb; // [rsp+38h] [rbp-270h]
  int *ptrc; // [rsp+38h] [rbp-270h]
  int ptre; // [rsp+38h] [rbp-270h]
  void *ptrf; // [rsp+38h] [rbp-270h]
  __int64 *v172; // [rsp+40h] [rbp-268h]
  __int64 v173; // [rsp+40h] [rbp-268h]
  __int64 v174; // [rsp+40h] [rbp-268h]
  __int64 v175; // [rsp+40h] [rbp-268h]
  int *v176; // [rsp+40h] [rbp-268h]
  __int64 v177; // [rsp+48h] [rbp-260h]
  __int64 v178; // [rsp+48h] [rbp-260h]
  __int64 v179; // [rsp+48h] [rbp-260h]
  __m128i v180; // [rsp+50h] [rbp-258h] BYREF
  int v181[2]; // [rsp+60h] [rbp-248h]
  int v182[2]; // [rsp+68h] [rbp-240h]
  int v183[2]; // [rsp+70h] [rbp-238h]
  int v184[2]; // [rsp+78h] [rbp-230h]
  int v185[2]; // [rsp+80h] [rbp-228h]
  int v186[2]; // [rsp+88h] [rbp-220h]
  int v187[2]; // [rsp+90h] [rbp-218h]
  __int64 v188; // [rsp+98h] [rbp-210h]
  int v189[2]; // [rsp+A0h] [rbp-208h] BYREF
  int v190[2]; // [rsp+A8h] [rbp-200h]
  int v191[2]; // [rsp+B0h] [rbp-1F8h] BYREF
  int v192[2]; // [rsp+B8h] [rbp-1F0h]
  int v193[2]; // [rsp+C0h] [rbp-1E8h] BYREF
  char v194[8]; // [rsp+C8h] [rbp-1E0h]
  int v195[2]; // [rsp+D0h] [rbp-1D8h] BYREF
  int v196[2]; // [rsp+D8h] [rbp-1D0h]
  int v197[2]; // [rsp+E0h] [rbp-1C8h] BYREF
  int v198[2]; // [rsp+E8h] [rbp-1C0h]
  int v199[2]; // [rsp+F0h] [rbp-1B8h] BYREF
  int v200[2]; // [rsp+F8h] [rbp-1B0h]
  int v201[2]; // [rsp+100h] [rbp-1A8h] BYREF
  int v202[2]; // [rsp+108h] [rbp-1A0h]
  void *v203; // [rsp+110h] [rbp-198h] BYREF
  int v204[2]; // [rsp+118h] [rbp-190h]
  int v205[2]; // [rsp+120h] [rbp-188h] BYREF
  int v206[2]; // [rsp+128h] [rbp-180h]
  int v207[2]; // [rsp+130h] [rbp-178h] BYREF
  int v208[2]; // [rsp+138h] [rbp-170h]
  int v209[2]; // [rsp+140h] [rbp-168h] BYREF
  int v210[2]; // [rsp+148h] [rbp-160h]
  __int64 v211; // [rsp+150h] [rbp-158h] BYREF
  char v212[8]; // [rsp+158h] [rbp-150h]
  __int64 v213; // [rsp+160h] [rbp-148h] BYREF
  __int64 v214; // [rsp+168h] [rbp-140h]
  __int64 v215; // [rsp+170h] [rbp-138h] BYREF
  __int64 v216; // [rsp+178h] [rbp-130h]
  __int64 v217; // [rsp+180h] [rbp-128h] BYREF
  __int64 v218; // [rsp+188h] [rbp-120h]
  __int64 v219; // [rsp+190h] [rbp-118h] BYREF
  __int64 v220; // [rsp+198h] [rbp-110h]
  __int64 v221; // [rsp+1A0h] [rbp-108h] BYREF
  __int64 v222; // [rsp+1A8h] [rbp-100h]
  __int64 v223; // [rsp+1B0h] [rbp-F8h] BYREF
  __int64 v224; // [rsp+1B8h] [rbp-F0h]
  __int64 v225; // [rsp+1C0h] [rbp-E8h] BYREF
  __int64 v226; // [rsp+1C8h] [rbp-E0h]
  __int64 v227; // [rsp+1D0h] [rbp-D8h] BYREF
  __int64 v228; // [rsp+1D8h] [rbp-D0h]
  int v229[2]; // [rsp+1E0h] [rbp-C8h] BYREF
  __int64 v230; // [rsp+1E8h] [rbp-C0h]
  __int64 v231; // [rsp+1F0h] [rbp-B8h] BYREF
  __int64 v232; // [rsp+1F8h] [rbp-B0h]
  __int64 v233; // [rsp+200h] [rbp-A8h] BYREF
  __int64 v234; // [rsp+208h] [rbp-A0h]
  __int64 v235[2]; // [rsp+210h] [rbp-98h] BYREF
  int v236[4]; // [rsp+220h] [rbp-88h] BYREF
  int v237[4]; // [rsp+230h] [rbp-78h] BYREF
  int v238[4]; // [rsp+240h] [rbp-68h] BYREF
  int v239[4]; // [rsp+250h] [rbp-58h] BYREF
  __m128 v240; // [rsp+260h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a1 + 8);
  v9 = *a3;
  v177 = a5;
  *(_QWORD *)v189 = 0;
  *(_QWORD *)v190 = v8;
  *(_QWORD *)v191 = 0;
  *(_QWORD *)v192 = v8;
  *(_QWORD *)v193 = 0;
  *(_QWORD *)v194 = v8;
  *(_QWORD *)v195 = 0;
  *(_QWORD *)v196 = v8;
  *(_QWORD *)v197 = 0;
  *(_QWORD *)v198 = v8;
  *(_QWORD *)v199 = 0;
  *(_QWORD *)v200 = v8;
  sub_D5BB00(a1, v9, v193);
  sub_D5BB00(a1, *a4, v195);
  v12 = *(_BYTE *)(a1 + 24) == 0;
  v172 = v235;
  v13 = a1 + 16;
  *(__m128 *)v235 = _mm_loadh_ps((const double *)v195);
  if ( v12 )
  {
    if ( (unsigned int)sub_14E03D0(
                         v13,
                         v122,
                         v127,
                         v138,
                         v144,
                         v150,
                         (int)v156,
                         v162,
                         ptr,
                         (int)v235,
                         v177,
                         v180.m128i_i32[0],
                         v180.m128i_i32[2],
                         v181[0],
                         v182[0],
                         v183[0],
                         v184[0],
                         v185[0],
                         v186[0],
                         v187[0],
                         v188,
                         v189[0],
                         v190[0],
                         v191[0],
                         v192[0],
                         v193[0],
                         v194[0],
                         v195[0],
                         v196[0],
                         v197[0],
                         v198[0],
                         v199[0],
                         v200[0],
                         v201[0],
                         v202[0],
                         (int)v203,
                         v204[0],
                         v205[0],
                         v206[0],
                         v207[0],
                         v208[0],
                         v209[0],
                         v210[0],
                         v211,
                         v212[0]) != 5 )
      goto LABEL_3;
  }
  else if ( (unsigned int)sub_14E0E20(v13, 2, (int)v235, (int)v189, v10, v11, v122, v127, v138, v144, v150, v156) != 5 )
  {
    goto LABEL_3;
  }
  v114 = sub_15E1AF0(*(_QWORD *)(a1 + 16));
  v115 = v114;
  if ( v114 )
    ++*(_DWORD *)(v114 + 8);
  v116 = *(_QWORD *)v189;
  if ( *(_QWORD *)v189 )
  {
    v117 = *(_QWORD *)v190;
    v12 = (*(_DWORD *)(*(_QWORD *)v189 + 8LL))-- == 1;
    if ( v12 )
      sub_15D7BC0(v117, v116);
  }
  *(_QWORD *)v189 = v115;
LABEL_3:
  sub_D52DE0(
    a1,
    *a3,
    (int)v197,
    v14,
    v15,
    v16,
    v123,
    v128,
    v139,
    v145,
    v151,
    (__int64)v157,
    v162,
    (__int64)ptr,
    (__int64)v172,
    v177,
    v180.m128i_i64[0],
    v180.m128i_i64[1],
    *(__int64 *)v181,
    *(__int64 *)v182,
    *(__int64 *)v183,
    *(__int64 *)v184,
    *(__int64 *)v185,
    *(__int64 *)v186,
    *(__int64 *)v187);
  sub_D52DE0(
    a1,
    *a4,
    (int)v199,
    v17,
    v18,
    v19,
    v124,
    v129,
    v140,
    v146,
    v152,
    (__int64)v158,
    v163,
    (__int64)ptrd,
    v173,
    v178,
    v180.m128i_i64[0],
    v180.m128i_i64[1],
    *(__int64 *)v181,
    *(__int64 *)v182,
    *(__int64 *)v183,
    *(__int64 *)v184,
    *(__int64 *)v185,
    *(__int64 *)v186,
    *(__int64 *)v187);
  v180.m128i_i64[0] = (__int64)v236;
  *(__m128 *)v236 = _mm_loadh_ps((const double *)v199);
  sub_D502F0(a1 + 16, v236, v191);
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *a3;
  *(_QWORD *)v201 = 0;
  *(_QWORD *)v202 = v20;
  *(_QWORD *)v205 = 0;
  *(_QWORD *)v206 = v20;
  v203 = nullptr;
  *(_QWORD *)v204 = v20;
  sub_D51BC0(a1, v21, (__int64 *)v201, (__int64 *)v205, (__int64 *)&v203);
  v22 = *a4;
  *(_QWORD *)v207 = 0;
  *(_QWORD *)v164 = *(_QWORD *)v201;
  *(_QWORD *)v208 = v20;
  v159 = v203;
  v211 = 0;
  *(_QWORD *)v185 = *(_QWORD *)v204;
  *(_QWORD *)v212 = v20;
  *(_QWORD *)v141 = *(_QWORD *)v205;
  *(_QWORD *)v209 = 0;
  *(_QWORD *)v186 = *(_QWORD *)v206;
  *(_QWORD *)v210 = v20;
  *(_QWORD *)v184 = *(_QWORD *)v202;
  sub_D51BC0(a1, v22, (__int64 *)v207, &v211, (__int64 *)v209);
  v213 = 0;
  v23 = *(_QWORD *)v208;
  v215 = 0;
  *(_QWORD *)v153 = *(_QWORD *)v207;
  v217 = 0;
  v147 = v209[0];
  *(_QWORD *)v183 = *(_QWORD *)v210;
  v130 = v211;
  *(_QWORD *)v182 = *(_QWORD *)v212;
  *(_QWORD *)v181 = *(_QWORD *)(a1 + 8);
  v214 = *(_QWORD *)v181;
  v216 = *(_QWORD *)v181;
  v218 = *(_QWORD *)v181;
  v24 = sub_D50390(a1 + 232, 1u);
  v25 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v26 = sub_D50430(a1 + 232, 1u);
  v27 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  sub_D81DD0(a1 + 16, *(_QWORD *)v164, v25, &v213);
  v28 = *(_QWORD *)(a1 + 8);
  v219 = 0;
  v220 = v28;
  v221 = 0;
  v222 = v28;
  v223 = 0;
  v224 = v28;
  v225 = 0;
  v226 = v28;
  v227 = 0;
  v228 = v28;
  *(_QWORD *)v229 = 0;
  v230 = v28;
  sub_D81DD0(a1 + 16, *(_QWORD *)v153, v27, &v219);
  ptra = *(void **)(a1 + 8);
  v29 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v33 = v29;
  if ( v29 )
  {
    ++*(_DWORD *)(v29 + 8);
    if ( (unsigned int)sub_14DEE90((int)a1 + 16, v29, (unsigned int)&v221, v30, v31, v32) != 5 )
    {
LABEL_9:
      v12 = (*(_DWORD *)(v33 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(ptra, v33);
      goto LABEL_11;
    }
  }
  else if ( (unsigned int)sub_14DEE90((int)a1 + 16, 0, (unsigned int)&v221, v30, v31, v32) != 5 )
  {
    goto LABEL_11;
  }
  v121 = sub_15E1A70(*(_QWORD *)(a1 + 16));
  if ( v121 )
    ++*(_DWORD *)(v121 + 8);
  v180.m128i_i64[1] = v121;
  sub_D50200(v221, v222);
  v221 = v180.m128i_i64[1];
  if ( v33 )
    goto LABEL_9;
LABEL_11:
  ptrb = *(void **)(a1 + 8);
  v34 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v38 = v34;
  if ( v34 )
  {
    ++*(_DWORD *)(v34 + 8);
    if ( (unsigned int)sub_14DEE90((int)a1 + 16, v34, (unsigned int)&v223, v35, v36, v37) != 5 )
    {
LABEL_13:
      v12 = (*(_DWORD *)(v38 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(ptrb, v38);
      goto LABEL_15;
    }
  }
  else if ( (unsigned int)sub_14DEE90((int)a1 + 16, 0, (unsigned int)&v223, v35, v36, v37) != 5 )
  {
    goto LABEL_15;
  }
  v120 = sub_15E1A70(*(_QWORD *)(a1 + 16));
  if ( v120 )
    ++*(_DWORD *)(v120 + 8);
  v180.m128i_i64[1] = v120;
  sub_D50200(v223, v224);
  v223 = v180.m128i_i64[1];
  if ( v38 )
    goto LABEL_13;
LABEL_15:
  sub_D81DD0(a1 + 16, v130, *(_QWORD *)v141, &v225);
  v180.m128i_i64[1] = (__int64)v237;
  *(__m128 *)v237 = _mm_loadh_ps((const double *)&v223);
  sub_D502F0(a1 + 16, v237, &v227);
  v12 = *(_BYTE *)(a1 + 24) == 0;
  ptrc = v238;
  v41 = a1 + 16;
  *(__m128 *)v238 = _mm_loadh_ps((const double *)&v227);
  if ( v12 )
  {
    if ( (unsigned int)sub_14E03D0(
                         v41,
                         v125,
                         v130,
                         v141[0],
                         v147,
                         v153[0],
                         (int)v159,
                         v164[0],
                         v238,
                         v174,
                         v179,
                         v180.m128i_i32[0],
                         v180.m128i_i32[2],
                         v181[0],
                         v182[0],
                         v183[0],
                         v184[0],
                         v185[0],
                         v186[0],
                         v187[0],
                         v188,
                         v189[0],
                         v190[0],
                         v191[0],
                         v192[0],
                         v193[0],
                         v194[0],
                         v195[0],
                         v196[0],
                         v197[0],
                         v198[0],
                         v199[0],
                         v200[0],
                         v201[0],
                         v202[0],
                         (int)v203,
                         v204[0],
                         v205[0],
                         v206[0],
                         v207[0],
                         v208[0],
                         v209[0],
                         v210[0],
                         v211,
                         v212[0]) != 5 )
      goto LABEL_17;
  }
  else if ( (unsigned int)sub_14E0E20(v41, 2, (int)v238, (int)v229, v39, v40, v125, v130, v141[0], v147, v153[0], v159) != 5 )
  {
LABEL_17:
    v42 = *(_QWORD *)v229;
    goto LABEL_18;
  }
  v111 = sub_15E1AF0(*(_QWORD *)(a1 + 16));
  v42 = v111;
  if ( v111 )
    ++*(_DWORD *)(v111 + 8);
  v112 = *(_QWORD *)v229;
  if ( *(_QWORD *)v229 )
  {
    v113 = v230;
    v12 = (*(_DWORD *)(*(_QWORD *)v229 + 8LL))-- == 1;
    if ( v12 )
    {
      *(_QWORD *)v187 = v111;
      sub_15D7BC0(v113, v112);
      v42 = *(_QWORD *)v187;
    }
  }
  *(_QWORD *)v229 = v42;
LABEL_18:
  sub_D81E50(a1 + 16, v219, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL), v42, &v215);
  v43 = *(_QWORD *)(a1 + 8);
  v231 = 0;
  v232 = v43;
  v233 = 0;
  v234 = v43;
  v235[0] = 0;
  v235[1] = v43;
  *(_QWORD *)v236 = 0;
  *(_QWORD *)&v236[2] = v43;
  *(_QWORD *)v237 = 0;
  *(_QWORD *)&v237[2] = v43;
  *(_QWORD *)v238 = 0;
  *(_QWORD *)&v238[2] = v43;
  sub_D81DD0(a1 + 16, *(_QWORD *)v154, v25, &v231);
  v44 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)v187 = *(_QWORD *)(a1 + 8);
  v45 = sub_15E1B70(v44);
  v49 = v45;
  if ( v45 )
  {
    ++*(_DWORD *)(v45 + 8);
    if ( (unsigned int)sub_14DEE90((int)a1 + 16, v45, (unsigned int)&v233, v46, v47, v48) != 5 )
    {
LABEL_20:
      v12 = (*(_DWORD *)(v49 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(*(_QWORD *)v187, v49);
      goto LABEL_22;
    }
  }
  else if ( (unsigned int)sub_14DEE90((int)a1 + 16, 0, (unsigned int)&v233, v46, v47, v48) != 5 )
  {
    goto LABEL_22;
  }
  v119 = sub_15E1A70(*(_QWORD *)(a1 + 16));
  if ( v119 )
    ++*(_DWORD *)(v119 + 8);
  v188 = v119;
  sub_D50200(v233, v234);
  v233 = v188;
  if ( v49 )
    goto LABEL_20;
LABEL_22:
  sub_D81DD0(a1 + 16, *(_QWORD *)v142, v131, v174);
  v175 = *(_QWORD *)(a1 + 8);
  v50 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v54 = v50;
  if ( v50 )
  {
    ++*(_DWORD *)(v50 + 8);
    if ( (unsigned int)sub_14DEE90((int)a1 + 16, v50, v180.m128i_i32[0], v51, v52, v53) != 5 )
    {
LABEL_24:
      v12 = (*(_DWORD *)(v54 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v175, v54);
      goto LABEL_26;
    }
  }
  else if ( (unsigned int)sub_14DEE90((int)a1 + 16, 0, v180.m128i_i32[0], v51, v52, v53) != 5 )
  {
LABEL_26:
    v55 = _mm_loadl_epi64((const __m128i *)v236);
    goto LABEL_27;
  }
  v118 = sub_15E1A70(*(_QWORD *)(a1 + 16));
  if ( v118 )
    ++*(_DWORD *)(v118 + 8);
  v180.m128i_i64[0] = v118;
  sub_D50200(*(__int64 *)v236, *(__int64 *)&v236[2]);
  v55 = _mm_loadl_epi64(&v180);
  *(_QWORD *)v236 = v55.m128i_i64[0];
  if ( v54 )
    goto LABEL_24;
LABEL_27:
  v176 = v239;
  *(__m128i *)v239 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)v235), v55);
  sub_D502F0(a1 + 16, v239, v180.m128i_i64[1]);
  v12 = *(_BYTE *)(a1 + 24) == 0;
  v58 = a1 + 16;
  v240 = _mm_loadh_ps((const double *)v237);
  if ( v12 )
  {
    if ( (unsigned int)sub_14E03D0(
                         v58,
                         v126,
                         v131,
                         v142[0],
                         v148,
                         v154[0],
                         (int)v160,
                         v164[0],
                         ptrc,
                         (int)v239,
                         v179,
                         v180.m128i_i32[0],
                         v180.m128i_i32[2],
                         v181[0],
                         v182[0],
                         v183[0],
                         v184[0],
                         v185[0],
                         v186[0],
                         v187[0],
                         v188,
                         v189[0],
                         v190[0],
                         v191[0],
                         v192[0],
                         v193[0],
                         v194[0],
                         v195[0],
                         v196[0],
                         v197[0],
                         v198[0],
                         v199[0],
                         v200[0],
                         v201[0],
                         v202[0],
                         (int)v203,
                         v204[0],
                         v205[0],
                         v206[0],
                         v207[0],
                         v208[0],
                         v209[0],
                         v210[0],
                         v211,
                         v212[0]) != 5 )
      goto LABEL_29;
  }
  else if ( (unsigned int)sub_14E0E20(v58, 2, (int)&v240, (int)ptrc, v56, v57, v126, v131, v142[0], v148, v154[0], v160) != 5 )
  {
LABEL_29:
    v59 = *(_QWORD *)v238;
    goto LABEL_30;
  }
  v108 = sub_15E1AF0(*(_QWORD *)(a1 + 16));
  v59 = v108;
  if ( v108 )
    ++*(_DWORD *)(v108 + 8);
  v109 = *(_QWORD *)v238;
  if ( *(_QWORD *)v238 )
  {
    v110 = *(_QWORD *)&v238[2];
    v12 = (*(_DWORD *)(*(_QWORD *)v238 + 8LL))-- == 1;
    if ( v12 )
    {
      ptrf = (void *)v108;
      sub_15D7BC0(v110, v109);
      v59 = (__int64)ptrf;
    }
  }
  *(_QWORD *)v238 = v59;
LABEL_30:
  sub_D81E50(a1 + 16, v231, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL), v59, &v217);
  v60 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v239 = 0;
  v240.m128_u64[0] = 0;
  *(_QWORD *)&v239[2] = v60;
  v240.m128_u64[1] = v60;
  sub_D81E50(a1 + 16, v213, v215, v217, v176);
  sub_D81E50(a1 + 16, *(_QWORD *)v191, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL), *(_QWORD *)v239, &v240);
  result = sub_D81E50(a1 + 16, *(_QWORD *)v189, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL), v240.m128_u64[0], v179);
  v62 = v240.m128_u64[0];
  if ( v240.m128_u64[0] )
  {
    v63 = v240.m128_i64[1];
    v12 = (*(_DWORD *)(v240.m128_u64[0] + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v63, v62);
  }
  v64 = *(_QWORD *)v239;
  if ( *(_QWORD *)v239 )
  {
    v65 = *(_QWORD *)&v239[2];
    v12 = (*(_DWORD *)(*(_QWORD *)v239 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v65, v64);
  }
  v66 = *(_QWORD *)v238;
  if ( *(_QWORD *)v238 )
  {
    v67 = *(_QWORD *)&v238[2];
    v12 = (*(_DWORD *)(*(_QWORD *)v238 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v67, v66);
  }
  v68 = *(_QWORD *)v237;
  if ( *(_QWORD *)v237 )
  {
    v69 = *(_QWORD *)&v237[2];
    v12 = (*(_DWORD *)(*(_QWORD *)v237 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v69, v68);
  }
  v70 = *(_QWORD *)v236;
  if ( *(_QWORD *)v236 )
  {
    v71 = *(_QWORD *)&v236[2];
    v12 = (*(_DWORD *)(*(_QWORD *)v236 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v71, v70);
  }
  v72 = v235[0];
  if ( v235[0] )
  {
    v73 = v235[1];
    v12 = (*(_DWORD *)(v235[0] + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v73, v72);
  }
  v74 = v233;
  if ( v233 )
  {
    v75 = v234;
    v12 = (*(_DWORD *)(v233 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v75, v74);
  }
  v76 = v231;
  if ( v231 )
  {
    v77 = v232;
    v12 = (*(_DWORD *)(v231 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v77, v76);
  }
  v78 = *(_QWORD *)v229;
  if ( *(_QWORD *)v229 )
  {
    v79 = v230;
    v12 = (*(_DWORD *)(*(_QWORD *)v229 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v79, v78);
  }
  v80 = v227;
  if ( v227 )
  {
    v81 = v228;
    v12 = (*(_DWORD *)(v227 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v81, v80);
  }
  v82 = v225;
  if ( v225 )
  {
    v83 = v226;
    v12 = (*(_DWORD *)(v225 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v83, v82);
  }
  v84 = v223;
  if ( v223 )
  {
    v85 = v224;
    v12 = (*(_DWORD *)(v223 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v85, v84);
  }
  v86 = v221;
  if ( v221 )
  {
    v87 = v222;
    v12 = (*(_DWORD *)(v221 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v87, v86);
  }
  v88 = v219;
  if ( v219 )
  {
    v89 = v220;
    v12 = (*(_DWORD *)(v219 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v89, v88);
  }
  if ( v27 )
  {
    v12 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(*(_QWORD *)v181, v27);
  }
  if ( v25 )
  {
    v12 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(*(_QWORD *)v181, v25);
  }
  v90 = v217;
  if ( v217 )
  {
    v91 = v218;
    v12 = (*(_DWORD *)(v217 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v91, v90);
  }
  v92 = v215;
  if ( v215 )
  {
    v93 = v216;
    v12 = (*(_DWORD *)(v215 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v93, v92);
  }
  v94 = v213;
  if ( v213 )
  {
    v95 = v214;
    v12 = (*(_DWORD *)(v213 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v95, v94);
  }
  if ( v132 )
  {
    ptre = *(_DWORD *)(v132 + 8);
    result = (unsigned int)(ptre - 1);
    *(_DWORD *)(v132 + 8) = result;
    if ( ptre == 1 )
      result = sub_15D7BC0(*(_QWORD *)v182, v132);
  }
  if ( *(_QWORD *)v149 )
  {
    v133 = *(_DWORD *)(*(_QWORD *)v149 + 8LL);
    result = (unsigned int)(v133 - 1);
    *(_DWORD *)(*(_QWORD *)v149 + 8LL) = result;
    if ( v133 == 1 )
      result = sub_15D7BC0(*(_QWORD *)v183, *(_QWORD *)v149);
  }
  if ( *(_QWORD *)v155 )
  {
    v134 = *(_DWORD *)(*(_QWORD *)v155 + 8LL);
    result = (unsigned int)(v134 - 1);
    *(_DWORD *)(*(_QWORD *)v155 + 8LL) = result;
    if ( v134 == 1 )
      result = sub_15D7BC0(v23, *(_QWORD *)v155);
  }
  if ( *(_QWORD *)v143 )
  {
    v135 = *(_DWORD *)(*(_QWORD *)v143 + 8LL);
    result = (unsigned int)(v135 - 1);
    *(_DWORD *)(*(_QWORD *)v143 + 8LL) = result;
    if ( v135 == 1 )
      result = sub_15D7BC0(*(_QWORD *)v186, *(_QWORD *)v143);
  }
  if ( v161 )
  {
    v136 = v161[2];
    result = (unsigned int)(v136 - 1);
    v161[2] = result;
    if ( v136 == 1 )
      result = sub_15D7BC0(*(_QWORD *)v185, v161);
  }
  if ( *(_QWORD *)v164 )
  {
    v137 = *(_DWORD *)(*(_QWORD *)v164 + 8LL);
    result = (unsigned int)(v137 - 1);
    *(_DWORD *)(*(_QWORD *)v164 + 8LL) = result;
    if ( v137 == 1 )
      result = sub_15D7BC0(*(_QWORD *)v184, *(_QWORD *)v164);
  }
  v96 = *(_QWORD *)v199;
  if ( *(_QWORD *)v199 )
  {
    v97 = *(_QWORD *)v200;
    v12 = (*(_DWORD *)(*(_QWORD *)v199 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v97, v96);
  }
  v98 = *(_QWORD *)v197;
  if ( *(_QWORD *)v197 )
  {
    v99 = *(_QWORD *)v198;
    v12 = (*(_DWORD *)(*(_QWORD *)v197 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v99, v98);
  }
  v100 = *(_QWORD *)v195;
  if ( *(_QWORD *)v195 )
  {
    v101 = *(_QWORD *)v196;
    v12 = (*(_DWORD *)(*(_QWORD *)v195 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v101, v100);
  }
  v102 = *(_QWORD *)v193;
  if ( *(_QWORD *)v193 )
  {
    v103 = *(_QWORD *)v194;
    v12 = (*(_DWORD *)(*(_QWORD *)v193 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v103, v102);
  }
  v104 = *(_QWORD *)v191;
  if ( *(_QWORD *)v191 )
  {
    v105 = *(_QWORD *)v192;
    v12 = (*(_DWORD *)(*(_QWORD *)v191 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v105, v104);
  }
  v106 = *(_QWORD *)v189;
  if ( *(_QWORD *)v189 )
  {
    v107 = *(_QWORD *)v190;
    v12 = (*(_DWORD *)(*(_QWORD *)v189 + 8LL))-- == 1;
    if ( v12 )
      return sub_15D7BC0(v107, v106);
  }
  return result;
}

