__int64 __fastcall sub_D5CA20(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 a5)
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
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // r15
  int v24; // r8d
  int v25; // r9d
  int v26; // r8d
  int v27; // r9d
  int v28; // r8d
  int v29; // r9d
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // r14
  int v36; // r9d
  int v37; // r9d
  __int64 v38; // r13
  int v39; // r9d
  __int64 v40; // r14
  __int64 result; // rax
  unsigned __int64 v42; // rsi
  __int64 v43; // rdi
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r15
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rax
  unsigned __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rax
  unsigned __int64 v80; // rsi
  unsigned __int64 v81; // rdi
  __int64 v82; // rax
  __int64 v83; // r12
  __int64 v84; // rax
  __int64 v85; // r12
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rax
  __int64 v89; // r12
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // r12
  __int64 v94; // rsi
  __int64 v95; // rdi
  int v96; // [rsp+0h] [rbp-1D8h]
  void *v97; // [rsp+0h] [rbp-1D8h]
  void *v98; // [rsp+0h] [rbp-1D8h]
  __int64 v99; // [rsp+0h] [rbp-1D8h]
  int v100; // [rsp+0h] [rbp-1D8h]
  int v101; // [rsp+0h] [rbp-1D8h]
  __int64 v102; // [rsp+0h] [rbp-1D8h]
  int v103; // [rsp+0h] [rbp-1D8h]
  int v104; // [rsp+0h] [rbp-1D8h]
  int v105; // [rsp+0h] [rbp-1D8h]
  int v106; // [rsp+0h] [rbp-1D8h]
  int v107; // [rsp+0h] [rbp-1D8h]
  __int64 v108; // [rsp+8h] [rbp-1D0h]
  __int64 v109; // [rsp+8h] [rbp-1D0h]
  __int64 v110; // [rsp+8h] [rbp-1D0h]
  __int64 v111; // [rsp+8h] [rbp-1D0h]
  __int64 v112; // [rsp+8h] [rbp-1D0h]
  __int64 v113; // [rsp+8h] [rbp-1D0h]
  __int64 v114; // [rsp+8h] [rbp-1D0h]
  int v115; // [rsp+10h] [rbp-1C8h]
  int v116; // [rsp+10h] [rbp-1C8h]
  int v117; // [rsp+10h] [rbp-1C8h]
  __int64 v118; // [rsp+10h] [rbp-1C8h]
  __int64 v119; // [rsp+10h] [rbp-1C8h]
  __int64 v120; // [rsp+10h] [rbp-1C8h]
  __int64 v121; // [rsp+10h] [rbp-1C8h]
  int v122; // [rsp+18h] [rbp-1C0h]
  __int64 v123; // [rsp+18h] [rbp-1C0h]
  __int64 v124; // [rsp+18h] [rbp-1C0h]
  __int64 v125; // [rsp+18h] [rbp-1C0h]
  __int64 v126; // [rsp+18h] [rbp-1C0h]
  __int64 v127; // [rsp+18h] [rbp-1C0h]
  __int64 v128; // [rsp+18h] [rbp-1C0h]
  int v129; // [rsp+20h] [rbp-1B8h]
  int v130; // [rsp+20h] [rbp-1B8h]
  int v131; // [rsp+20h] [rbp-1B8h]
  __int64 v132; // [rsp+20h] [rbp-1B8h]
  __int64 v133; // [rsp+20h] [rbp-1B8h]
  __int64 v134; // [rsp+20h] [rbp-1B8h]
  __int64 v135; // [rsp+20h] [rbp-1B8h]
  void *v136; // [rsp+28h] [rbp-1B0h]
  __int64 v137; // [rsp+28h] [rbp-1B0h]
  __int64 v138; // [rsp+28h] [rbp-1B0h]
  __int64 v139; // [rsp+28h] [rbp-1B0h]
  __int64 v140; // [rsp+28h] [rbp-1B0h]
  __int64 v141; // [rsp+28h] [rbp-1B0h]
  __int64 v142; // [rsp+28h] [rbp-1B0h]
  __int64 v143; // [rsp+30h] [rbp-1A8h]
  __int64 v144; // [rsp+30h] [rbp-1A8h]
  __int64 v145; // [rsp+30h] [rbp-1A8h]
  __int64 v146; // [rsp+30h] [rbp-1A8h]
  __int64 v147; // [rsp+30h] [rbp-1A8h]
  __int64 *v148; // [rsp+30h] [rbp-1A8h]
  int v149; // [rsp+30h] [rbp-1A8h]
  void *v150; // [rsp+38h] [rbp-1A0h]
  __int64 v151; // [rsp+38h] [rbp-1A0h]
  __int64 v152; // [rsp+38h] [rbp-1A0h]
  __int64 v153; // [rsp+40h] [rbp-198h]
  __int64 v154; // [rsp+40h] [rbp-198h]
  __int64 v155; // [rsp+40h] [rbp-198h]
  __int64 v156; // [rsp+40h] [rbp-198h]
  __int64 v157; // [rsp+40h] [rbp-198h]
  __int64 v158; // [rsp+40h] [rbp-198h]
  __int64 v159; // [rsp+48h] [rbp-190h]
  __int64 v160; // [rsp+48h] [rbp-190h]
  __int128 v161; // [rsp+48h] [rbp-190h]
  __int128 v162; // [rsp+48h] [rbp-190h]
  __int128 v163; // [rsp+48h] [rbp-190h]
  __int64 v164; // [rsp+48h] [rbp-190h]
  __int64 v165; // [rsp+50h] [rbp-188h]
  __int64 v166; // [rsp+50h] [rbp-188h]
  __int64 v167; // [rsp+50h] [rbp-188h]
  __int64 v168; // [rsp+58h] [rbp-180h]
  __int64 v169; // [rsp+58h] [rbp-180h]
  __int128 v170; // [rsp+58h] [rbp-180h]
  __int128 v171; // [rsp+58h] [rbp-180h]
  __int128 v172; // [rsp+58h] [rbp-180h]
  __int64 v173; // [rsp+58h] [rbp-180h]
  __int64 v174; // [rsp+60h] [rbp-178h]
  __int64 v175; // [rsp+60h] [rbp-178h]
  __int64 v176; // [rsp+60h] [rbp-178h]
  __int64 v177; // [rsp+68h] [rbp-170h]
  __int64 v178; // [rsp+68h] [rbp-170h]
  __int64 v179; // [rsp+70h] [rbp-168h] BYREF
  __int64 v180; // [rsp+78h] [rbp-160h]
  __int64 v181; // [rsp+80h] [rbp-158h] BYREF
  __int64 v182; // [rsp+88h] [rbp-150h]
  __int64 v183; // [rsp+90h] [rbp-148h] BYREF
  int v184[2]; // [rsp+98h] [rbp-140h]
  int v185[2]; // [rsp+A0h] [rbp-138h] BYREF
  int v186[2]; // [rsp+A8h] [rbp-130h]
  int v187[2]; // [rsp+B0h] [rbp-128h] BYREF
  int v188[2]; // [rsp+B8h] [rbp-120h]
  int v189[2]; // [rsp+C0h] [rbp-118h] BYREF
  char v190[8]; // [rsp+C8h] [rbp-110h]
  __int64 v191; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v192; // [rsp+D8h] [rbp-100h]
  __int64 v193; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v194; // [rsp+E8h] [rbp-F0h]
  __int64 v195; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v196; // [rsp+F8h] [rbp-E0h]
  __int64 v197; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v198; // [rsp+108h] [rbp-D0h]
  __int64 v199; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v200; // [rsp+118h] [rbp-C0h]
  __int64 v201; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v202; // [rsp+128h] [rbp-B0h]
  __int64 v203; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v204; // [rsp+138h] [rbp-A0h]
  __int64 v205; // [rsp+140h] [rbp-98h] BYREF
  __int64 v206; // [rsp+148h] [rbp-90h]
  __int64 v207; // [rsp+150h] [rbp-88h] BYREF
  __int64 v208; // [rsp+158h] [rbp-80h]
  __int64 v209; // [rsp+160h] [rbp-78h] BYREF
  __int64 v210; // [rsp+168h] [rbp-70h]
  int v211[4]; // [rsp+170h] [rbp-68h] BYREF
  __m128 v212; // [rsp+180h] [rbp-58h] BYREF
  __m128 v213; // [rsp+190h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a1 + 8);
  v9 = *a3;
  v143 = a5;
  v179 = 0;
  v180 = v8;
  v181 = 0;
  v182 = v8;
  v183 = 0;
  *(_QWORD *)v184 = v8;
  *(_QWORD *)v185 = 0;
  *(_QWORD *)v186 = v8;
  *(_QWORD *)v187 = 0;
  *(_QWORD *)v188 = v8;
  *(_QWORD *)v189 = 0;
  *(_QWORD *)v190 = v8;
  sub_D5BB00(a1, v9, &v183);
  sub_D5BB00(a1, *a4, v185);
  v12 = *(_BYTE *)(a1 + 24) == 0;
  v13 = a1 + 16;
  *(__m128 *)v211 = _mm_loadh_ps((const double *)v185);
  if ( v12 )
  {
    if ( (unsigned int)sub_14E03D0(
                         v13,
                         v96,
                         v108,
                         v115,
                         v122,
                         v129,
                         (int)v136,
                         v143,
                         v150,
                         v153,
                         v159,
                         v165,
                         v168,
                         v174,
                         v177,
                         v179,
                         v180,
                         v181,
                         v182,
                         v183,
                         v184[0],
                         v185[0],
                         v186[0],
                         v187[0],
                         v188[0],
                         v189[0],
                         v190[0],
                         v191,
                         v192,
                         v193,
                         v194,
                         v195,
                         v196,
                         v197,
                         v198,
                         v199,
                         v200,
                         v201,
                         v202,
                         v203,
                         v204,
                         v205,
                         v206,
                         v207,
                         v208) != 5 )
      goto LABEL_3;
  }
  else if ( (unsigned int)sub_14E0E20(v13, 2, (int)v211, (int)&v179, v10, v11, v96, v108, v115, v122, v129, v136) != 5 )
  {
    goto LABEL_3;
  }
  v68 = sub_15E1AF0(*(_QWORD *)(a1 + 16));
  v69 = v68;
  if ( v68 )
    ++*(_DWORD *)(v68 + 8);
  v70 = v179;
  if ( v179 )
  {
    v71 = v180;
    v12 = (*(_DWORD *)(v179 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v71, v70);
  }
  v179 = v69;
LABEL_3:
  sub_D52DE0(
    a1,
    *a3,
    (int)v187,
    v14,
    v15,
    v16,
    v97,
    v109,
    v116,
    v123,
    v130,
    v137,
    v143,
    (__int64)v150,
    v153,
    v159,
    v165,
    v168,
    v174,
    v177,
    v179,
    v180,
    v181,
    v182,
    v183);
  sub_D52DE0(
    a1,
    *a4,
    (int)v189,
    v17,
    v18,
    v19,
    v98,
    v110,
    v117,
    v124,
    v131,
    v138,
    v144,
    v151,
    v154,
    v160,
    v166,
    v169,
    v175,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  v212 = _mm_loadh_ps((const double *)v189);
  sub_D502F0(a1 + 16, &v212, &v181);
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *a3;
  v191 = 0;
  v192 = v20;
  v195 = 0;
  v196 = v20;
  v193 = 0;
  v194 = v20;
  sub_D51BC0(a1, v21, &v191, &v195, &v193);
  v22 = *a4;
  v197 = 0;
  v132 = v191;
  v198 = v20;
  v125 = v193;
  v201 = 0;
  *(_QWORD *)&v170 = v194;
  v202 = v20;
  v118 = v195;
  v199 = 0;
  *((_QWORD *)&v161 + 1) = v196;
  v200 = v20;
  *((_QWORD *)&v170 + 1) = v192;
  sub_D51BC0(a1, v22, &v197, &v201, &v199);
  v203 = 0;
  v111 = v199;
  v139 = v197;
  v23 = v198;
  *(_QWORD *)&v161 = v200;
  v205 = 0;
  v99 = v201;
  v207 = 0;
  v155 = v202;
  v204 = *(_QWORD *)(a1 + 8);
  v206 = v204;
  v208 = v204;
  if ( (unsigned int)sub_14DE480((int)a1 + 16, v132, v197, (unsigned int)&v203, v24, v25) == 5 )
  {
    v92 = sub_14DC5D0(a1 + 16, v132, v139);
    v93 = v92;
    if ( v92 )
      ++*(_DWORD *)(v92 + 8);
    v94 = v203;
    if ( v203 )
    {
      v95 = v204;
      v12 = (*(_DWORD *)(v203 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v95, v94);
    }
    v203 = v93;
  }
  if ( (unsigned int)sub_14DE480((int)a1 + 16, v118, v99, (unsigned int)&v205, v26, v27) == 5 )
  {
    v88 = sub_14DC5D0(a1 + 16, v118, v99);
    v89 = v88;
    if ( v88 )
      ++*(_DWORD *)(v88 + 8);
    v90 = v205;
    if ( v205 )
    {
      v91 = v206;
      v12 = (*(_DWORD *)(v205 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v91, v90);
    }
    v205 = v89;
  }
  if ( (unsigned int)sub_14DE480((int)a1 + 16, v125, v111, (unsigned int)&v207, v28, v29) == 5 )
  {
    v84 = sub_14DC5D0(a1 + 16, v125, v111);
    v85 = v84;
    if ( v84 )
      ++*(_DWORD *)(v84 + 8);
    v86 = v207;
    if ( v207 )
    {
      v87 = v208;
      v12 = (*(_DWORD *)(v207 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v87, v86);
    }
    v207 = v85;
  }
  v33 = *(_QWORD *)(a1 + 8);
  v209 = 0;
  v210 = v33;
  *(_QWORD *)v211 = 0;
  *(_QWORD *)&v211[2] = v33;
  if ( (unsigned int)sub_14DEE90((int)a1 + 16, v203, (unsigned int)&v209, v30, v31, v32) == 5 )
  {
    v82 = sub_15E1A70(*(_QWORD *)(a1 + 16));
    v83 = v82;
    if ( v82 )
      ++*(_DWORD *)(v82 + 8);
    sub_D50200(v209, v210);
    v209 = v83;
  }
  v213 = _mm_loadh_ps((const double *)&v207);
  sub_D502F0(a1 + 16, &v213, v211);
  v34 = *(_QWORD *)(a1 + 8);
  v212.m128_u64[0] = 0;
  v213.m128_u64[0] = 0;
  v35 = *(_QWORD *)(v34 + 864);
  v212.m128_u64[1] = v34;
  v213.m128_u64[1] = v34;
  if ( (unsigned int)sub_14E2530(
                       (int)a1 + 16,
                       v209,
                       v35,
                       v211[0],
                       (unsigned int)&v212,
                       v36,
                       v99,
                       v111,
                       v118,
                       v125,
                       v132,
                       v139,
                       v145,
                       (__int64)&v212,
                       v155,
                       v161,
                       v170) == 5 )
  {
    v79 = sub_15E1BF0(*(_QWORD *)(a1 + 16));
    v38 = v79;
    if ( v79 )
      ++*(_DWORD *)(v79 + 8);
    v80 = v212.m128_u64[0];
    if ( v212.m128_u64[0] )
    {
      v81 = v212.m128_u64[1];
      v12 = (*(_DWORD *)(v212.m128_u64[0] + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v81, v80);
    }
    v212.m128_u64[0] = v38;
  }
  else
  {
    LODWORD(v38) = v212.m128_i32[0];
  }
  if ( (unsigned int)sub_14E2530(
                       (int)a1 + 16,
                       v181,
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL),
                       v38,
                       (unsigned int)&v213,
                       v37,
                       v100,
                       v112,
                       v119,
                       v126,
                       v133,
                       v140,
                       v146,
                       v181,
                       v156,
                       v162,
                       v171) == 5 )
  {
    v76 = sub_15E1BF0(*(_QWORD *)(a1 + 16));
    v40 = v76;
    if ( v76 )
      ++*(_DWORD *)(v76 + 8);
    v77 = v213.m128_u64[0];
    if ( v213.m128_u64[0] )
    {
      v78 = v213.m128_i64[1];
      v12 = (*(_DWORD *)(v213.m128_u64[0] + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v78, v77);
    }
    v213.m128_u64[0] = v40;
  }
  else
  {
    LODWORD(v40) = v213.m128_i32[0];
  }
  result = sub_14E2530(
             (int)a1 + 16,
             v179,
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL),
             v40,
             v147,
             v39,
             v101,
             v113,
             v120,
             v127,
             v134,
             v141,
             v147,
             v152,
             v157,
             v163,
             v172);
  if ( (_DWORD)result == 5 )
  {
    v72 = sub_15E1BF0(*(_QWORD *)(a1 + 16));
    v73 = v72;
    if ( v72 )
      ++*(_DWORD *)(v72 + 8);
    v74 = *v148;
    if ( *v148 )
    {
      v75 = v148[1];
      v12 = (*(_DWORD *)(v74 + 8))-- == 1;
      if ( v12 )
        sub_15D7BC0(v75, v74);
    }
    result = (__int64)v148;
    *v148 = v73;
  }
  v42 = v213.m128_u64[0];
  if ( v213.m128_u64[0] )
  {
    v43 = v213.m128_i64[1];
    v12 = (*(_DWORD *)(v213.m128_u64[0] + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v43, v42);
  }
  v44 = v212.m128_u64[0];
  if ( v212.m128_u64[0] )
  {
    v45 = v212.m128_u64[1];
    v12 = (*(_DWORD *)(v212.m128_u64[0] + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v45, v44);
  }
  v46 = *(_QWORD *)v211;
  if ( *(_QWORD *)v211 )
  {
    v47 = *(_QWORD *)&v211[2];
    v12 = (*(_DWORD *)(*(_QWORD *)v211 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v47, v46);
  }
  v48 = v209;
  if ( v209 )
  {
    v49 = v210;
    v12 = (*(_DWORD *)(v209 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v49, v48);
  }
  v50 = v207;
  if ( v207 )
  {
    v51 = v208;
    v12 = (*(_DWORD *)(v207 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v51, v50);
  }
  v52 = v205;
  if ( v205 )
  {
    v53 = v206;
    v12 = (*(_DWORD *)(v205 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v53, v52);
  }
  v54 = v203;
  if ( v203 )
  {
    v55 = v204;
    v12 = (*(_DWORD *)(v203 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v55, v54);
  }
  if ( v102 )
  {
    v149 = *(_DWORD *)(v102 + 8);
    result = (unsigned int)(v149 - 1);
    *(_DWORD *)(v102 + 8) = result;
    if ( v149 == 1 )
      result = sub_15D7BC0(v158, v102);
  }
  if ( v114 )
  {
    v103 = *(_DWORD *)(v114 + 8);
    result = (unsigned int)(v103 - 1);
    *(_DWORD *)(v114 + 8) = result;
    if ( v103 == 1 )
      result = sub_15D7BC0(v164, v114);
  }
  if ( v142 )
  {
    v104 = *(_DWORD *)(v142 + 8);
    result = (unsigned int)(v104 - 1);
    *(_DWORD *)(v142 + 8) = result;
    if ( v104 == 1 )
      result = sub_15D7BC0(v23, v142);
  }
  if ( v121 )
  {
    v105 = *(_DWORD *)(v121 + 8);
    result = (unsigned int)(v105 - 1);
    *(_DWORD *)(v121 + 8) = result;
    if ( v105 == 1 )
      result = sub_15D7BC0(v167, v121);
  }
  if ( v128 )
  {
    v106 = *(_DWORD *)(v128 + 8);
    result = (unsigned int)(v106 - 1);
    *(_DWORD *)(v128 + 8) = result;
    if ( v106 == 1 )
      result = sub_15D7BC0(v173, v128);
  }
  if ( v135 )
  {
    v107 = *(_DWORD *)(v135 + 8);
    result = (unsigned int)(v107 - 1);
    *(_DWORD *)(v135 + 8) = result;
    if ( v107 == 1 )
      result = sub_15D7BC0(v176, v135);
  }
  v56 = *(_QWORD *)v189;
  if ( *(_QWORD *)v189 )
  {
    v57 = *(_QWORD *)v190;
    v12 = (*(_DWORD *)(*(_QWORD *)v189 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v57, v56);
  }
  v58 = *(_QWORD *)v187;
  if ( *(_QWORD *)v187 )
  {
    v59 = *(_QWORD *)v188;
    v12 = (*(_DWORD *)(*(_QWORD *)v187 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v59, v58);
  }
  v60 = *(_QWORD *)v185;
  if ( *(_QWORD *)v185 )
  {
    v61 = *(_QWORD *)v186;
    v12 = (*(_DWORD *)(*(_QWORD *)v185 + 8LL))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v61, v60);
  }
  v62 = v183;
  if ( v183 )
  {
    v63 = *(_QWORD *)v184;
    v12 = (*(_DWORD *)(v183 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v63, v62);
  }
  v64 = v181;
  if ( v181 )
  {
    v65 = v182;
    v12 = (*(_DWORD *)(v181 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v65, v64);
  }
  v66 = v179;
  if ( v179 )
  {
    v67 = v180;
    v12 = (*(_DWORD *)(v179 + 8))-- == 1;
    if ( v12 )
      return sub_15D7BC0(v67, v66);
  }
  return result;
}

