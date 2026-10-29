__int64 __fastcall sub_D57430(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        __int64 *a5,
        _QWORD *a6,
        _QWORD *a7,
        __m128i *a8,
        __int64 a9,
        __int64 *a10,
        __int64 *a11,
        __int64 *a12)
{
  char **exception; // r15
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  unsigned int v22; // eax
  __int64 v23; // rdx
  __m128i v24; // xmm1
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  __m128i v30; // xmm2
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rax
  __m128i v37; // xmm3
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // r13
  __int64 v59; // rsi
  unsigned __int64 v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // r13
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r12
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // r14
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rdi
  __int64 v87; // rbx
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 result; // rax
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
  __int64 v105; // rax
  __int64 v106; // r13
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // [rsp+8h] [rbp-1D8h]
  __int64 v111; // [rsp+10h] [rbp-1D0h]
  __int64 v112; // [rsp+18h] [rbp-1C8h]
  __int64 v113; // [rsp+20h] [rbp-1C0h]
  __int64 v115; // [rsp+40h] [rbp-1A0h]
  __int64 v116; // [rsp+48h] [rbp-198h]
  __int64 v117; // [rsp+58h] [rbp-188h]
  __int64 v118; // [rsp+60h] [rbp-180h]
  __int64 v119; // [rsp+68h] [rbp-178h]
  __int64 v120; // [rsp+70h] [rbp-170h]
  __int64 v121; // [rsp+78h] [rbp-168h]
  __int64 v122; // [rsp+80h] [rbp-160h]
  __int64 v123; // [rsp+88h] [rbp-158h]
  __int64 v124; // [rsp+90h] [rbp-150h]
  __int64 v125; // [rsp+98h] [rbp-148h]
  __int64 v126; // [rsp+A0h] [rbp-140h]
  __int64 v127; // [rsp+A0h] [rbp-140h]
  __int64 v128; // [rsp+A8h] [rbp-138h]
  __int64 v129; // [rsp+A8h] [rbp-138h]
  __int64 v131; // [rsp+B0h] [rbp-130h]
  __int64 v132; // [rsp+B8h] [rbp-128h]
  __int64 v133; // [rsp+B8h] [rbp-128h]
  unsigned int v134; // [rsp+C0h] [rbp-120h]
  __int64 v135; // [rsp+C0h] [rbp-120h]
  unsigned int v136; // [rsp+C8h] [rbp-118h]
  __int64 v137; // [rsp+C8h] [rbp-118h]
  __int64 v139; // [rsp+D0h] [rbp-110h]
  __int64 v140; // [rsp+D8h] [rbp-108h]
  int v141; // [rsp+D8h] [rbp-108h]
  int v142; // [rsp+D8h] [rbp-108h]
  int v143; // [rsp+D8h] [rbp-108h]
  int v144; // [rsp+D8h] [rbp-108h]
  int v145; // [rsp+D8h] [rbp-108h]
  int v146; // [rsp+D8h] [rbp-108h]
  int v147; // [rsp+D8h] [rbp-108h]
  int v148; // [rsp+D8h] [rbp-108h]
  int v149; // [rsp+D8h] [rbp-108h]
  int v150; // [rsp+D8h] [rbp-108h]
  int v151; // [rsp+D8h] [rbp-108h]
  int v152; // [rsp+D8h] [rbp-108h]
  int v153; // [rsp+D8h] [rbp-108h]
  __int64 v154; // [rsp+D8h] [rbp-108h]
  int v155[2]; // [rsp+E8h] [rbp-F8h] BYREF
  int v156[2]; // [rsp+F0h] [rbp-F0h] BYREF
  int v157[2]; // [rsp+F8h] [rbp-E8h] BYREF
  __int64 v158; // [rsp+100h] [rbp-E0h] BYREF
  __int64 v159; // [rsp+108h] [rbp-D8h]
  __int64 v160; // [rsp+110h] [rbp-D0h] BYREF
  __int64 v161; // [rsp+118h] [rbp-C8h]
  __int64 v162; // [rsp+120h] [rbp-C0h] BYREF
  __int64 v163; // [rsp+128h] [rbp-B8h]
  __m128 v164; // [rsp+130h] [rbp-B0h]
  __int64 v165; // [rsp+140h] [rbp-A0h] BYREF
  __int64 v166; // [rsp+148h] [rbp-98h]
  __m128i v167; // [rsp+150h] [rbp-90h] BYREF
  __m128i v168; // [rsp+160h] [rbp-80h] BYREF
  __m128i v169; // [rsp+170h] [rbp-70h] BYREF
  __m128i v170; // [rsp+180h] [rbp-60h] BYREF
  __int64 v171; // [rsp+190h] [rbp-50h] BYREF
  __int64 v172; // [rsp+198h] [rbp-48h]
  __int64 v173; // [rsp+1A0h] [rbp-40h]

  v159 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(a1 + 240);
  v158 = 0;
  v17 = sub_15E1B70(v16);
  v18 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v19 = v158;
  if ( v158 )
  {
    v20 = v159;
    v21 = (*(_DWORD *)(v158 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v20, v19);
  }
  v158 = v18;
  v136 = a2 + 2;
  v22 = sub_180B190(a2 + 2, v19);
  v23 = a3 + 2;
  if ( v22 < (unsigned int)v23 )
  {
    v140 = a1 + 232;
    v135 = *(_QWORD *)(a1 + 8);
    v105 = sub_D81BF0(a1 + 232, v136, v23);
    v106 = v105;
    if ( v105 )
      ++*(_DWORD *)(v105 + 8);
    sub_D500F0(v140, v158);
    v107 = sub_15E1B70(*(_QWORD *)(a1 + 240));
    v129 = v107;
    if ( v107 )
      ++*(_DWORD *)(v107 + 8);
    v108 = sub_D500F0(v140, v158);
    v133 = v108;
    if ( v108 )
      ++*(_DWORD *)(v108 + 8);
    sub_D81E50(a1 + 16, v129, v106, v108, &v158);
    v109 = sub_D50160(v140, a3 - 1, v158);
    if ( v109 )
      ++*(_DWORD *)(v109 + 8);
    v127 = v109;
    sub_D50200(v158, v159);
    v158 = v127;
    sub_D50200(v133, v135);
    sub_D50200(v129, v135);
    sub_D50200(v106, v135);
  }
  else
  {
    v140 = a1 + 232;
  }
  v24 = (__m128i)(unsigned __int64)sub_D50430(v140, 3u);
  v25 = *(_QWORD *)(a1 + 240);
  v167 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a5, v24);
  v26 = sub_15E1AF0(v25);
  v27 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v28 = *a5;
  if ( *a5 )
  {
    v29 = a5[1];
    v21 = (*(_DWORD *)(v28 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v29, v28);
  }
  *a5 = v27;
  v30 = (__m128i)(unsigned __int64)sub_D50430(v140, 3u);
  v31 = *(_QWORD *)(a1 + 240);
  v168 = _mm_unpacklo_epi64(_mm_loadl_epi64(a8), v30);
  v32 = sub_15E1AF0(v31);
  v33 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v34 = a8->m128i_i64[0];
  if ( a8->m128i_i64[0] )
  {
    v35 = a8->m128i_i64[1];
    v21 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v35, v34);
  }
  v36 = *(_QWORD *)(a1 + 8);
  a8->m128i_i64[0] = v33;
  v110 = v36;
  v134 = a2 + 3;
  v37 = (__m128i)(unsigned __int64)sub_D50430(v140, a2 + 3);
  v38 = *(_QWORD *)(a1 + 240);
  v169 = _mm_unpacklo_epi64(_mm_loadl_epi64(a8), v37);
  v39 = sub_15E1AF0(v38);
  v122 = v39;
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  if ( a2 < a3 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(&v171, "addition/subtract with ebits > sbits not supported");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v171);
    sub_233E40((__int64)&v171);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v40 = *(_QWORD *)(a1 + 8);
  v160 = 0;
  v41 = v158;
  v115 = v40;
  v161 = v40;
  v42 = sub_D50430(v140, 2 * v134 - a3);
  v43 = *(_QWORD *)(a1 + 240);
  v170 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)(unsigned __int64)v41);
  sub_15E1AF0(v43);
  v44 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v45 = v44;
  if ( v44 )
    ++*(_DWORD *)(v44 + 8);
  v46 = sub_D81CD0(v140, 2 * v134 - 1, v134, v44);
  v47 = v46;
  if ( v46 )
    ++*(_DWORD *)(v46 + 8);
  v48 = sub_D50160(v140, v136, v45);
  v126 = v48;
  if ( v48 )
    ++*(_DWORD *)(v48 + 8);
  v49 = *(_QWORD *)(a1 + 8);
  v162 = 0;
  v113 = v49;
  v163 = v49;
  v50 = sub_D50430(v140, v134);
  v128 = v50;
  if ( v50 )
    ++*(_DWORD *)(v50 + 8);
  v51 = sub_D50390(v140, v134);
  v123 = v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  v132 = a1 + 16;
  sub_D81DD0(a1 + 16, v126, v128, &v162);
  sub_D81E50(a1 + 16, v162, v128, v123, &v160);
  v52 = *(_QWORD *)(a1 + 240);
  v164 = _mm_loadh_ps((const double *)&v160);
  v53 = sub_15E1AF0(v52);
  v54 = v53;
  if ( v53 )
    ++*(_DWORD *)(v53 + 8);
  if ( v47 )
  {
    v21 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v115, v47);
  }
  v55 = *(_QWORD *)(a1 + 8);
  v56 = *a4;
  v165 = 0;
  v166 = v55;
  sub_D81DD0(v132, v56, *a7, &v165);
  v171 = 2;
  v172 = 0;
  v57 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)v155 = *a5;
  v58 = sub_15DCAD0(v57, (int)v155, 0);
  sub_15D0DF0(&v171);
  if ( v58 )
    ++*(_DWORD *)(v58 + 8);
  v59 = *a5;
  if ( *a5 )
  {
    v60 = a5[1];
    v21 = (*(_DWORD *)(v59 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v60, v59);
  }
  *(_QWORD *)v156 = v54;
  v171 = 2;
  *a5 = v58;
  v61 = *(_QWORD *)(a1 + 240);
  v172 = 0;
  v62 = sub_15DCAD0(v61, (int)v156, 0);
  sub_15D0DF0(&v171);
  if ( v62 )
    ++*(_DWORD *)(v62 + 8);
  if ( v54 )
  {
    v21 = (*(_DWORD *)(v54 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v115, v54);
  }
  v63 = *(_QWORD *)(a1 + 8);
  v64 = *(_QWORD *)(a1 + 240);
  v167.m128i_i64[0] = 0;
  v112 = v63;
  v167.m128i_i64[1] = v63;
  v65 = sub_15E1B70(v64);
  v118 = v65;
  if ( v65 )
    ++*(_DWORD *)(v65 + 8);
  v66 = sub_15E1B70(*(_QWORD *)(a1 + 240));
  v121 = v66;
  if ( v66 )
    ++*(_DWORD *)(v66 + 8);
  sub_D81E50(v132, v165, v118, v66, &v167);
  v111 = *(_QWORD *)(a1 + 8);
  v67 = sub_D81CD0(v140, a2 + 4, a2 + 4, v167.m128i_i64[0]);
  v68 = v67;
  if ( v67 )
    ++*(_DWORD *)(v67 + 8);
  v69 = sub_15E1A70(*(_QWORD *)(a1 + 240));
  v120 = v69;
  if ( v69 )
    ++*(_DWORD *)(v69 + 8);
  v116 = *(_QWORD *)(a1 + 8);
  v70 = sub_15E1A70(*(_QWORD *)(a1 + 240));
  v117 = v70;
  if ( v70 )
    ++*(_DWORD *)(v70 + 8);
  v71 = sub_15E1A70(*(_QWORD *)(a1 + 240));
  v119 = v71;
  if ( v71 )
    ++*(_DWORD *)(v71 + 8);
  v72 = sub_15E1A70(*(_QWORD *)(a1 + 240));
  v124 = v72;
  if ( v72 )
    ++*(_DWORD *)(v72 + 8);
  v73 = sub_15E1BF0(*(_QWORD *)(a1 + 8));
  v125 = v73;
  if ( v73 )
    ++*(_DWORD *)(v73 + 8);
  v74 = sub_15E1BF0(*(_QWORD *)(a1 + 8));
  v131 = v74;
  if ( v74 )
    ++*(_DWORD *)(v74 + 8);
  v75 = sub_15E1B70(*(_QWORD *)(a1 + 8));
  v139 = v75;
  if ( v75 )
    ++*(_DWORD *)(v75 + 8);
  v76 = *(_QWORD *)(a1 + 240);
  v171 = v125;
  v172 = v131;
  v173 = v75;
  v77 = sub_15E1AF0(v76);
  v78 = v77;
  if ( v77 )
    ++*(_DWORD *)(v77 + 8);
  v79 = *a10;
  if ( *a10 )
  {
    v80 = a10[1];
    v21 = (*(_DWORD *)(v79 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v80, v79);
  }
  v168.m128i_i64[0] = 0;
  v169.m128i_i64[0] = 0;
  *a10 = v78;
  v137 = *(_QWORD *)(a1 + 8);
  v168.m128i_i64[1] = v137;
  v169.m128i_i64[1] = v137;
  v81 = sub_D50390(v140, 1u);
  v82 = v81;
  if ( v81 )
    ++*(_DWORD *)(v81 + 8);
  sub_D81DD0(v132, v68, v81, &v168);
  sub_D81E50(v132, v168.m128i_i64[0], v120, v167.m128i_i64[0], &v169);
  v83 = sub_D50160(v140, v134, v169.m128i_i64[0]);
  if ( v83 )
    ++*(_DWORD *)(v83 + 8);
  v84 = *a11;
  if ( *a11 )
  {
    v85 = a11[1];
    v21 = (*(_DWORD *)(v84 + 8))-- == 1;
    if ( v21 )
    {
      v154 = v83;
      sub_15D7BC0(v85, v84);
      v83 = v154;
    }
  }
  v170 = (__m128i)2uLL;
  *a11 = v83;
  v86 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)v157 = *a6;
  v87 = sub_15DCAD0(v86, (int)v157, 0);
  sub_15D0DF0(&v170);
  if ( v87 )
    ++*(_DWORD *)(v87 + 8);
  v88 = *a12;
  if ( *a12 )
  {
    v89 = a12[1];
    v21 = (*(_DWORD *)(v88 + 8))-- == 1;
    if ( v21 )
      sub_15D7BC0(v89, v88);
  }
  result = (__int64)a12;
  *a12 = v87;
  if ( v82 )
  {
    v21 = (*(_DWORD *)(v82 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v137, v82);
  }
  v91 = v169.m128i_i64[0];
  if ( v169.m128i_i64[0] )
  {
    v92 = v169.m128i_i64[1];
    v21 = (*(_DWORD *)(v169.m128i_i64[0] + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v92, v91);
  }
  v93 = v168.m128i_i64[0];
  if ( v168.m128i_i64[0] )
  {
    v94 = v168.m128i_i64[1];
    v21 = (*(_DWORD *)(v168.m128i_i64[0] + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v94, v93);
  }
  if ( v124 )
  {
    v141 = *(_DWORD *)(v124 + 8);
    result = (unsigned int)(v141 - 1);
    *(_DWORD *)(v124 + 8) = result;
    if ( v141 == 1 )
      result = sub_15D7BC0(v116, v124);
  }
  if ( v119 )
  {
    v142 = *(_DWORD *)(v119 + 8);
    result = (unsigned int)(v142 - 1);
    *(_DWORD *)(v119 + 8) = result;
    if ( v142 == 1 )
      result = sub_15D7BC0(v116, v119);
  }
  if ( v117 )
  {
    v143 = *(_DWORD *)(v117 + 8);
    result = (unsigned int)(v143 - 1);
    *(_DWORD *)(v117 + 8) = result;
    if ( v143 == 1 )
      result = sub_15D7BC0(v116, v117);
  }
  if ( v139 )
  {
    v144 = *(_DWORD *)(v139 + 8);
    result = (unsigned int)(v144 - 1);
    *(_DWORD *)(v139 + 8) = result;
    if ( v144 == 1 )
      result = sub_15D7BC0(v116, v139);
  }
  if ( v131 )
  {
    v145 = *(_DWORD *)(v131 + 8);
    result = (unsigned int)(v145 - 1);
    *(_DWORD *)(v131 + 8) = result;
    if ( v145 == 1 )
      result = sub_15D7BC0(v116, v131);
  }
  if ( v125 )
  {
    v146 = *(_DWORD *)(v125 + 8);
    result = (unsigned int)(v146 - 1);
    *(_DWORD *)(v125 + 8) = result;
    if ( v146 == 1 )
      result = sub_15D7BC0(v116, v125);
  }
  if ( v120 )
  {
    v147 = *(_DWORD *)(v120 + 8);
    result = (unsigned int)(v147 - 1);
    *(_DWORD *)(v120 + 8) = result;
    if ( v147 == 1 )
      result = sub_15D7BC0(v111, v120);
  }
  if ( v68 )
  {
    v21 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v111, v68);
  }
  if ( v121 )
  {
    v148 = *(_DWORD *)(v121 + 8);
    result = (unsigned int)(v148 - 1);
    *(_DWORD *)(v121 + 8) = result;
    if ( v148 == 1 )
      result = sub_15D7BC0(v112, v121);
  }
  if ( v118 )
  {
    v149 = *(_DWORD *)(v118 + 8);
    result = (unsigned int)(v149 - 1);
    *(_DWORD *)(v118 + 8) = result;
    if ( v149 == 1 )
      result = sub_15D7BC0(v112, v118);
  }
  v95 = v167.m128i_i64[0];
  if ( v167.m128i_i64[0] )
  {
    v96 = v167.m128i_i64[1];
    v21 = (*(_DWORD *)(v167.m128i_i64[0] + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v96, v95);
  }
  v97 = v165;
  if ( v165 )
  {
    v98 = v166;
    v21 = (*(_DWORD *)(v165 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v98, v97);
  }
  if ( v123 )
  {
    v150 = *(_DWORD *)(v123 + 8);
    result = (unsigned int)(v150 - 1);
    *(_DWORD *)(v123 + 8) = result;
    if ( v150 == 1 )
      result = sub_15D7BC0(v113, v123);
  }
  if ( v128 )
  {
    v151 = *(_DWORD *)(v128 + 8);
    result = (unsigned int)(v151 - 1);
    *(_DWORD *)(v128 + 8) = result;
    if ( v151 == 1 )
      result = sub_15D7BC0(v113, v128);
  }
  v99 = v162;
  if ( v162 )
  {
    v100 = v163;
    v21 = (*(_DWORD *)(v162 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v100, v99);
  }
  v101 = v160;
  if ( v160 )
  {
    v102 = v161;
    v21 = (*(_DWORD *)(v160 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v102, v101);
  }
  if ( v126 )
  {
    v152 = *(_DWORD *)(v126 + 8);
    result = (unsigned int)(v152 - 1);
    *(_DWORD *)(v126 + 8) = result;
    if ( v152 == 1 )
      result = sub_15D7BC0(v115, v126);
  }
  if ( v62 )
  {
    v21 = (*(_DWORD *)(v62 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v115, v62);
  }
  if ( v45 )
  {
    v21 = (*(_DWORD *)(v45 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v115, v45);
  }
  if ( v122 )
  {
    v153 = *(_DWORD *)(v122 + 8);
    result = (unsigned int)(v153 - 1);
    *(_DWORD *)(v122 + 8) = result;
    if ( v153 == 1 )
      result = sub_15D7BC0(v110, v122);
  }
  v103 = v158;
  if ( v158 )
  {
    v104 = v159;
    v21 = (*(_DWORD *)(v158 + 8))-- == 1;
    if ( v21 )
      return sub_15D7BC0(v104, v103);
  }
  return result;
}

