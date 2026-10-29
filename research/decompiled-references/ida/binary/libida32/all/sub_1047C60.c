__int64 __fastcall sub_1047C60(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r12d
  __int64 *v8; // r14
  __int64 *v9; // rax
  __int64 v10; // rax
  __m128i si128; // xmm0
  __m128i v12; // xmm0
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r15d
  __int64 *v20; // r14
  __int64 *v21; // rax
  __m128i *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r15d
  __int64 *v30; // r14
  __int64 *v31; // rax
  __m128i *v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // r15d
  __int64 *v40; // r14
  __int64 *v41; // rax
  __int64 v42; // rax
  __m128i v43; // xmm0
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // r15d
  __int64 *v51; // r14
  __int64 *v52; // rax
  __int64 v53; // rax
  __m128i v54; // xmm0
  unsigned int v55; // eax
  int v56; // r15d
  int v57; // r14d
  unsigned int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v62; // rcx
  __int64 *v63; // rax
  __int64 v64; // rax
  unsigned int v65; // eax
  bool v66; // zf
  unsigned int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 *v71; // rcx
  __int64 result; // rax
  unsigned int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 *v77; // r14
  __int64 *v78; // rax
  unsigned int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 *v83; // r14
  __int64 *v84; // rax
  unsigned int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 *v89; // r14
  __int64 *v90; // rax
  unsigned int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 *v95; // r14
  __int64 *v96; // rax
  unsigned int v97; // eax
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 *v101; // r14
  __int64 *v102; // rax
  unsigned int v103; // eax
  unsigned int v104; // eax
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  unsigned int v108; // r15d
  __int64 *v109; // r14
  __int64 *v110; // rax
  unsigned int v111; // eax
  unsigned int v112; // eax
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  unsigned int v116; // r15d
  __int64 *v117; // r14
  __int64 *v118; // rax
  unsigned int v119; // eax
  unsigned int v120; // eax
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  unsigned int v124; // r15d
  __int64 *v125; // r14
  __int64 *v126; // rax
  unsigned int v127; // eax
  unsigned int v128; // eax
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  unsigned int v132; // r15d
  __int64 *v133; // r14
  __int64 *v134; // rax
  unsigned int v135; // eax
  unsigned int v136; // eax
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  unsigned int v140; // r15d
  __int64 *v141; // r14
  __int64 *v142; // rax
  unsigned int v143; // eax
  unsigned int v144; // eax
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  unsigned int v148; // r15d
  __int64 *v149; // r14
  __int64 *v150; // rax
  unsigned int v151; // eax
  unsigned int v152; // eax
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  unsigned int v156; // r15d
  __int64 *v157; // r14
  __int64 *v158; // rax
  unsigned int v159; // eax
  unsigned int v160; // eax
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  unsigned int v164; // r15d
  __int64 *v165; // r14
  __int64 *v166; // rax
  unsigned int v167; // eax
  unsigned int v168; // eax
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  unsigned int v172; // r15d
  __int64 *v173; // r14
  __int64 *v174; // rax
  unsigned int v175; // eax
  unsigned int v176; // eax
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  unsigned int v180; // r15d
  __int64 *v181; // r14
  __int64 *v182; // rax
  unsigned int v183; // eax
  unsigned int v184; // eax
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  unsigned int v188; // r15d
  __int64 *v189; // r14
  __int64 *v190; // rax
  bool v191; // r14
  unsigned int v192; // eax
  unsigned int v193; // eax
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  unsigned int v197; // r15d
  __int64 *v198; // r13
  __int64 *v199; // rax
  __int64 v200; // rax
  unsigned int v201; // eax
  __int64 v202; // rax
  __m128i v203; // xmm0
  unsigned int v204; // eax
  __int64 v205; // rax
  __m128i v206; // xmm0
  __m128i v207; // xmm0
  unsigned int v208; // eax
  __m128i *v209; // rax
  unsigned int v210; // eax
  __int64 v211; // rax
  __m128i v212; // xmm0
  unsigned int v213; // eax
  __int64 v214; // rax
  __m128i v215; // xmm0
  __m128i v216; // xmm0
  unsigned int v217; // eax
  __int64 v218; // rax
  unsigned int v219; // eax
  __int64 v220; // rax
  __m128i v221; // xmm0
  __m128i v222; // xmm0
  unsigned int v223; // eax
  __int64 v224; // rax
  __m128i v225; // xmm0
  unsigned int v226; // eax
  __int64 v227; // rax
  __m128i v228; // xmm0
  unsigned int v229; // eax
  __int64 v230; // rax
  __m128i v231; // xmm0
  unsigned int v232; // eax
  __int64 v233; // rax
  __m128i v234; // xmm0
  unsigned int v235; // eax
  __int64 v236; // rax
  __m128i v237; // xmm0
  unsigned int v238; // eax
  __int64 v239; // rax
  __m128i v240; // xmm0
  unsigned int v241; // eax
  __m128i *v242; // rax
  unsigned int v243; // eax
  __int64 v244; // rax
  __m128i v245; // xmm0
  unsigned int v246; // eax
  __m128i *v247; // rax
  unsigned int v248; // eax
  __m128i *v249; // rax
  unsigned int v250; // eax
  unsigned int v251; // [rsp+4h] [rbp-54h]
  unsigned int v252; // [rsp+4h] [rbp-54h]
  unsigned int v253; // [rsp+4h] [rbp-54h]
  unsigned int v254; // [rsp+4h] [rbp-54h]
  unsigned int v255; // [rsp+4h] [rbp-54h]
  unsigned int v256; // [rsp+4h] [rbp-54h]
  unsigned int v257; // [rsp+4h] [rbp-54h]
  __int64 *v258; // [rsp+8h] [rbp-50h]
  __int64 *v259; // [rsp+8h] [rbp-50h]
  __int64 *v260[8]; // [rsp+18h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 208);
  v2 = sub_2220DF0("cl_clang_storage_class_specifiers", 33);
  v3 = sub_2220F70(v1 + 304, "cl_clang_storage_class_specifiers", 33, v2);
  v7 = v3;
  v8 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v3);
  if ( *v8 )
  {
    if ( *v8 != -8 )
    {
      sub_1005BB0(v260, v8, 0);
      v9 = v260[0];
      goto LABEL_6;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v10 = sub_220C370(50, 8, v3, v4, v5, v6);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23856E0);
  *(_BYTE *)(v10 + 48) = 115;
  *(__m128i *)(v10 + 16) = si128;
  v12 = _mm_load_si128((const __m128i *)&xmmword_23856F0);
  *(_BYTE *)(v10 + 49) = 0;
  *(__m128i *)(v10 + 32) = v12;
  *(_QWORD *)v10 = 33;
  *(_BYTE *)(v10 + 8) = 0;
  *v8 = v10;
  ++*(_DWORD *)(v1 + 316);
  v13 = sub_2221390(v1 + 304, v7);
  sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v13), 0);
  v9 = v260[0];
LABEL_6:
  *(_BYTE *)(*v9 + 8) = 1;
  v14 = sub_2220DF0("__cl_clang_variadic_functions", 29);
  v15 = sub_2220F70(v1 + 304, "__cl_clang_variadic_functions", 29, v14);
  v19 = v15;
  v20 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v15);
  if ( *v20 )
  {
    if ( *v20 != -8 )
    {
      sub_1005BB0(v260, v20, 0);
      v21 = v260[0];
      goto LABEL_11;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v22 = (__m128i *)sub_220C370(46, 8, v15, v16, v17, v18);
  v22[1] = _mm_load_si128((const __m128i *)&xmmword_2385690);
  strcpy(v22[2].m128i_i8, "dic_functions");
  v22->m128i_i64[0] = 29;
  v22->m128i_i8[8] = 0;
  *v20 = (__int64)v22;
  ++*(_DWORD *)(v1 + 316);
  v23 = sub_2221390(v1 + 304, v19);
  sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v23), 0);
  v21 = v260[0];
LABEL_11:
  *(_BYTE *)(*v21 + 8) = 1;
  v24 = sub_2220DF0("__cl_clang_function_pointers", 28);
  v25 = sub_2220F70(v1 + 304, "__cl_clang_function_pointers", 28, v24);
  v29 = v25;
  v30 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v25);
  if ( *v30 )
  {
    if ( *v30 != -8 )
    {
      sub_1005BB0(v260, v30, 0);
      v31 = v260[0];
      goto LABEL_16;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v32 = (__m128i *)sub_220C370(45, 8, v25, v26, v27, v28);
  v32[1] = _mm_load_si128((const __m128i *)&xmmword_2385680);
  strcpy(v32[2].m128i_i8, "ion_pointers");
  v32->m128i_i64[0] = 28;
  v32->m128i_i8[8] = 0;
  *v30 = (__int64)v32;
  ++*(_DWORD *)(v1 + 316);
  v33 = sub_2221390(v1 + 304, v29);
  sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v33), 0);
  v31 = v260[0];
LABEL_16:
  *(_BYTE *)(*v31 + 8) = 1;
  v34 = sub_2220DF0("__cl_clang_non_portable_kernel_param_types", 42);
  v35 = sub_2220F70(v1 + 304, "__cl_clang_non_portable_kernel_param_types", 42, v34);
  v39 = v35;
  v40 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v35);
  if ( *v40 )
  {
    if ( *v40 != -8 )
    {
      sub_1005BB0(v260, v40, 0);
      v41 = v260[0];
      goto LABEL_21;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v42 = sub_220C370(59, 8, v35, v36, v37, v38);
  *(__m128i *)(v42 + 16) = _mm_load_si128((const __m128i *)&xmmword_23856A0);
  v43 = _mm_load_si128((const __m128i *)&xmmword_23856B0);
  strcpy((char *)(v42 + 48), "aram_types");
  *(__m128i *)(v42 + 32) = v43;
  *(_QWORD *)v42 = 42;
  *(_BYTE *)(v42 + 8) = 0;
  *v40 = v42;
  ++*(_DWORD *)(v1 + 316);
  v44 = sub_2221390(v1 + 304, v39);
  sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v44), 0);
  v41 = v260[0];
LABEL_21:
  *(_BYTE *)(*v41 + 8) = 1;
  v45 = sub_2220DF0("__cl_clang_bitfields", 20);
  v46 = sub_2220F70(v1 + 304, "__cl_clang_bitfields", 20, v45);
  v50 = v46;
  v51 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v46);
  if ( *v51 )
  {
    if ( *v51 != -8 )
    {
      sub_1005BB0(v260, v51, 0);
      v52 = v260[0];
      goto LABEL_26;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v53 = sub_220C370(37, 8, v46, v47, v48, v49);
  v54 = _mm_load_si128((const __m128i *)&xmmword_23856C0);
  strcpy((char *)(v53 + 32), "elds");
  *(__m128i *)(v53 + 16) = v54;
  *(_QWORD *)v53 = 20;
  *(_BYTE *)(v53 + 8) = 0;
  *v51 = v53;
  ++*(_DWORD *)(v1 + 316);
  v55 = sub_2221390(v1 + 304, v50);
  sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v55), 0);
  v52 = v260[0];
LABEL_26:
  v56 = *(_DWORD *)(a1 + 248);
  LOBYTE(v57) = 1;
  *(_BYTE *)(*v52 + 8) = 1;
  if ( v56 != 26 )
    v57 = (*(_DWORD *)(a1 + 516) >> 3) & 1;
  v58 = sub_2220DF0("cl_khr_fp64", 11);
  v59 = (unsigned int)sub_2220F70(v1 + 304, "cl_khr_fp64", 11, v58);
  v62 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8 * v59);
  if ( *v62 )
  {
    if ( *v62 != -8 )
    {
      sub_1005BB0(v260, v62, 0);
      v63 = v260[0];
      goto LABEL_33;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v258 = v62;
  v251 = v59;
  v64 = sub_220C370(28, 8, v59, v62, v60, v61);
  strcpy((char *)(v64 + 16), "cl_khr_fp64");
  *(_QWORD *)v64 = 11;
  *(_BYTE *)(v64 + 8) = 0;
  *v258 = v64;
  ++*(_DWORD *)(v1 + 316);
  v65 = sub_2221390(v1 + 304, v251);
  sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v65), 0);
  v63 = v260[0];
LABEL_33:
  v66 = *(_DWORD *)(a1 + 248) == 26;
  *(_BYTE *)(*v63 + 8) = v57;
  LOBYTE(v57) = 1;
  if ( !v66 )
    v57 = (*(_DWORD *)(a1 + 516) >> 3) & 1;
  v67 = sub_2220DF0("__opencl_c_fp64", 15);
  v68 = (unsigned int)sub_2220F70(v1 + 304, "__opencl_c_fp64", 15, v67);
  v71 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8 * v68);
  if ( *v71 )
  {
    if ( *v71 != -8 )
    {
      sub_1005BB0(v260, v71, 0);
      result = *v260[0];
      *(_BYTE *)(*v260[0] + 8) = v57;
      if ( v56 == 26 )
        goto LABEL_38;
      goto LABEL_94;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v259 = v71;
  v252 = v68;
  v200 = sub_220C370(32, 8, v68, v71, v69, v70);
  strcpy((char *)(v200 + 16), "__opencl_c_fp64");
  *(_QWORD *)v200 = 15;
  *(_BYTE *)(v200 + 8) = 0;
  *v259 = v200;
  ++*(_DWORD *)(v1 + 316);
  v201 = sub_2221390(v1 + 304, v252);
  sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v201), 0);
  result = *v260[0];
  *(_BYTE *)(*v260[0] + 8) = v57;
  if ( v56 == 26 )
    goto LABEL_38;
LABEL_94:
  if ( *(_DWORD *)(a1 + 512) > 7u )
  {
LABEL_38:
    v73 = sub_2220DF0("cl_khr_byte_addressable_store", 29);
    v74 = (unsigned int)sub_2220F70(v1 + 304, "cl_khr_byte_addressable_store", 29, v73);
    v77 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8 * v74);
    if ( *v77 )
    {
      if ( *v77 != -8 )
      {
        sub_1005BB0(v260, v77, 0);
        v78 = v260[0];
        goto LABEL_41;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v253 = v74;
    v202 = sub_220C370(46, 8, v74, v74, v75, v76);
    v203 = _mm_load_si128((const __m128i *)&xmmword_2385330);
    strcpy((char *)(v202 + 32), "essable_store");
    *(__m128i *)(v202 + 16) = v203;
    *(_QWORD *)v202 = 29;
    *(_BYTE *)(v202 + 8) = 0;
    *v77 = v202;
    ++*(_DWORD *)(v1 + 316);
    v204 = sub_2221390(v1 + 304, v253);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v204), 0);
    v78 = v260[0];
LABEL_41:
    *(_BYTE *)(*v78 + 8) = 1;
    v79 = sub_2220DF0("cl_khr_global_int32_base_atomics", 32);
    v80 = (unsigned int)sub_2220F70(v1 + 304, "cl_khr_global_int32_base_atomics", 32, v79);
    v83 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8 * v80);
    if ( *v83 )
    {
      if ( *v83 != -8 )
      {
        sub_1005BB0(v260, v83, 0);
        v84 = v260[0];
        goto LABEL_44;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v257 = v80;
    v214 = sub_220C370(49, 8, v80, v80, v81, v82);
    v215 = _mm_load_si128((const __m128i *)&xmmword_2385340);
    *(_BYTE *)(v214 + 48) = 0;
    *(__m128i *)(v214 + 16) = v215;
    v216 = _mm_load_si128((const __m128i *)&xmmword_2385350);
    *(_QWORD *)v214 = 32;
    *(__m128i *)(v214 + 32) = v216;
    *(_BYTE *)(v214 + 8) = 0;
    *v83 = v214;
    ++*(_DWORD *)(v1 + 316);
    v217 = sub_2221390(v1 + 304, v257);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v217), 0);
    v84 = v260[0];
LABEL_44:
    *(_BYTE *)(*v84 + 8) = 1;
    v85 = sub_2220DF0("cl_khr_global_int32_extended_atomics", 36);
    v86 = (unsigned int)sub_2220F70(v1 + 304, "cl_khr_global_int32_extended_atomics", 36, v85);
    v89 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8 * v86);
    if ( *v89 )
    {
      if ( *v89 != -8 )
      {
        sub_1005BB0(v260, v89, 0);
        v90 = v260[0];
        goto LABEL_47;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v256 = v86;
    v211 = sub_220C370(53, 8, v86, v86, v87, v88);
    v212 = _mm_load_si128((const __m128i *)&xmmword_2385340);
    strcpy((char *)(v211 + 48), "mics");
    *(__m128i *)(v211 + 16) = v212;
    *(__m128i *)(v211 + 32) = _mm_load_si128((const __m128i *)&xmmword_2385360);
    *(_QWORD *)v211 = 36;
    *(_BYTE *)(v211 + 8) = 0;
    *v89 = v211;
    ++*(_DWORD *)(v1 + 316);
    v213 = sub_2221390(v1 + 304, v256);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v213), 0);
    v90 = v260[0];
LABEL_47:
    *(_BYTE *)(*v90 + 8) = 1;
    v91 = sub_2220DF0("cl_khr_local_int32_base_atomics", 31);
    v92 = (unsigned int)sub_2220F70(v1 + 304, "cl_khr_local_int32_base_atomics", 31, v91);
    v95 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8 * v92);
    if ( *v95 )
    {
      if ( *v95 != -8 )
      {
        sub_1005BB0(v260, v95, 0);
        v96 = v260[0];
        goto LABEL_50;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v255 = v92;
    v209 = (__m128i *)sub_220C370(48, 8, v92, v92, v93, v94);
    v209[1] = _mm_load_si128((const __m128i *)&xmmword_2385370);
    strcpy(v209[2].m128i_i8, "32_base_atomics");
    v209->m128i_i64[0] = 31;
    v209->m128i_i8[8] = 0;
    *v95 = (__int64)v209;
    ++*(_DWORD *)(v1 + 316);
    v210 = sub_2221390(v1 + 304, v255);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v210), 0);
    v96 = v260[0];
LABEL_50:
    *(_BYTE *)(*v96 + 8) = 1;
    v97 = sub_2220DF0("cl_khr_local_int32_extended_atomics", 35);
    v98 = (unsigned int)sub_2220F70(v1 + 304, "cl_khr_local_int32_extended_atomics", 35, v97);
    v101 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8 * v98);
    if ( *v101 )
    {
      if ( *v101 != -8 )
      {
        sub_1005BB0(v260, v101, 0);
        v102 = v260[0];
        goto LABEL_53;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v254 = v98;
    v205 = sub_220C370(52, 8, v98, v98, v99, v100);
    v206 = _mm_load_si128((const __m128i *)&xmmword_2385370);
    *(_BYTE *)(v205 + 50) = 115;
    *(__m128i *)(v205 + 16) = v206;
    v207 = _mm_load_si128((const __m128i *)&xmmword_2385380);
    *(_WORD *)(v205 + 48) = 25449;
    *(__m128i *)(v205 + 32) = v207;
    *(_BYTE *)(v205 + 51) = 0;
    *(_QWORD *)v205 = 35;
    *(_BYTE *)(v205 + 8) = 0;
    *v101 = v205;
    ++*(_DWORD *)(v1 + 316);
    v208 = sub_2221390(v1 + 304, v254);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v208), 0);
    v102 = v260[0];
LABEL_53:
    result = *v102;
    *(_BYTE *)(result + 8) = 1;
    if ( v56 != 26 )
      return result;
    v103 = sub_2220DF0("cl_khr_fp16", 11);
    v104 = sub_2220F70(v1 + 304, "cl_khr_fp16", 11, v103);
    v108 = v104;
    v109 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v104);
    if ( *v109 )
    {
      if ( *v109 != -8 )
      {
        sub_1005BB0(v260, v109, 0);
        v110 = v260[0];
        goto LABEL_57;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v218 = sub_220C370(28, 8, v104, v105, v106, v107);
    strcpy((char *)(v218 + 16), "cl_khr_fp16");
    *(_QWORD *)v218 = 11;
    *(_BYTE *)(v218 + 8) = 0;
    *v109 = v218;
    ++*(_DWORD *)(v1 + 316);
    v219 = sub_2221390(v1 + 304, v108);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v219), 0);
    v110 = v260[0];
LABEL_57:
    *(_BYTE *)(*v110 + 8) = 1;
    v111 = sub_2220DF0("cl_khr_int64_base_atomics", 25);
    v112 = sub_2220F70(v1 + 304, "cl_khr_int64_base_atomics", 25, v111);
    v116 = v112;
    v117 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v112);
    if ( *v117 )
    {
      if ( *v117 != -8 )
      {
        sub_1005BB0(v260, v117, 0);
        v118 = v260[0];
        goto LABEL_60;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v249 = (__m128i *)sub_220C370(42, 8, v112, v113, v114, v115);
    v249[1] = _mm_load_si128((const __m128i *)&xmmword_2385390);
    strcpy(v249[2].m128i_i8, "e_atomics");
    v249->m128i_i64[0] = 25;
    v249->m128i_i8[8] = 0;
    *v117 = (__int64)v249;
    ++*(_DWORD *)(v1 + 316);
    v250 = sub_2221390(v1 + 304, v116);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v250), 0);
    v118 = v260[0];
LABEL_60:
    *(_BYTE *)(*v118 + 8) = 1;
    v119 = sub_2220DF0("cl_khr_int64_extended_atomics", 29);
    v120 = sub_2220F70(v1 + 304, "cl_khr_int64_extended_atomics", 29, v119);
    v124 = v120;
    v125 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v120);
    if ( *v125 )
    {
      if ( *v125 != -8 )
      {
        sub_1005BB0(v260, v125, 0);
        v126 = v260[0];
        goto LABEL_63;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v247 = (__m128i *)sub_220C370(46, 8, v120, v121, v122, v123);
    v247[1] = _mm_load_si128((const __m128i *)&xmmword_2385630);
    strcpy(v247[2].m128i_i8, "ended_atomics");
    v247->m128i_i64[0] = 29;
    v247->m128i_i8[8] = 0;
    *v125 = (__int64)v247;
    ++*(_DWORD *)(v1 + 316);
    v248 = sub_2221390(v1 + 304, v124);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v248), 0);
    v126 = v260[0];
LABEL_63:
    *(_BYTE *)(*v126 + 8) = 1;
    v127 = sub_2220DF0("cl_khr_mipmap_image", 19);
    v128 = sub_2220F70(v1 + 304, "cl_khr_mipmap_image", 19, v127);
    v132 = v128;
    v133 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v128);
    if ( *v133 )
    {
      if ( *v133 != -8 )
      {
        sub_1005BB0(v260, v133, 0);
        v134 = v260[0];
        goto LABEL_66;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v244 = sub_220C370(36, 8, v128, v129, v130, v131);
    v245 = _mm_load_si128((const __m128i *)&xmmword_2385700);
    *(_WORD *)(v244 + 32) = 26465;
    *(__m128i *)(v244 + 16) = v245;
    *(_BYTE *)(v244 + 34) = 101;
    *(_BYTE *)(v244 + 35) = 0;
    *(_QWORD *)v244 = 19;
    *(_BYTE *)(v244 + 8) = 0;
    *v133 = v244;
    ++*(_DWORD *)(v1 + 316);
    v246 = sub_2221390(v1 + 304, v132);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v246), 0);
    v134 = v260[0];
LABEL_66:
    *(_BYTE *)(*v134 + 8) = 1;
    v135 = sub_2220DF0("cl_khr_mipmap_image_writes", 26);
    v136 = sub_2220F70(v1 + 304, "cl_khr_mipmap_image_writes", 26, v135);
    v140 = v136;
    v141 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v136);
    if ( *v141 )
    {
      if ( *v141 != -8 )
      {
        sub_1005BB0(v260, v141, 0);
        v142 = v260[0];
        goto LABEL_69;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v242 = (__m128i *)sub_220C370(43, 8, v136, v137, v138, v139);
    v242[1] = _mm_load_si128((const __m128i *)&xmmword_2385700);
    strcpy(v242[2].m128i_i8, "age_writes");
    v242->m128i_i64[0] = 26;
    v242->m128i_i8[8] = 0;
    *v141 = (__int64)v242;
    ++*(_DWORD *)(v1 + 316);
    v243 = sub_2221390(v1 + 304, v140);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v243), 0);
    v142 = v260[0];
LABEL_69:
    *(_BYTE *)(*v142 + 8) = 1;
    v143 = sub_2220DF0("cl_khr_subgroups", 16);
    v144 = sub_2220F70(v1 + 304, "cl_khr_subgroups", 16, v143);
    v148 = v144;
    v149 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v144);
    if ( *v149 )
    {
      if ( *v149 != -8 )
      {
        sub_1005BB0(v260, v149, 0);
        v150 = v260[0];
        goto LABEL_72;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v239 = sub_220C370(33, 8, v144, v145, v146, v147);
    v240 = _mm_load_si128((const __m128i *)&xmmword_2385670);
    *(_BYTE *)(v239 + 32) = 0;
    *(__m128i *)(v239 + 16) = v240;
    *(_QWORD *)v239 = 16;
    *(_BYTE *)(v239 + 8) = 0;
    *v149 = v239;
    ++*(_DWORD *)(v1 + 316);
    v241 = sub_2221390(v1 + 304, v148);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v241), 0);
    v150 = v260[0];
LABEL_72:
    *(_BYTE *)(*v150 + 8) = 1;
    v151 = sub_2220DF0("cl_amd_media_ops", 16);
    v152 = sub_2220F70(v1 + 304, "cl_amd_media_ops", 16, v151);
    v156 = v152;
    v157 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v152);
    if ( *v157 )
    {
      if ( *v157 != -8 )
      {
        sub_1005BB0(v260, v157, 0);
        v158 = v260[0];
        goto LABEL_75;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v236 = sub_220C370(33, 8, v152, v153, v154, v155);
    v237 = _mm_load_si128((const __m128i *)&xmmword_23856D0);
    *(_BYTE *)(v236 + 32) = 0;
    *(__m128i *)(v236 + 16) = v237;
    *(_QWORD *)v236 = 16;
    *(_BYTE *)(v236 + 8) = 0;
    *v157 = v236;
    ++*(_DWORD *)(v1 + 316);
    v238 = sub_2221390(v1 + 304, v156);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v238), 0);
    v158 = v260[0];
LABEL_75:
    *(_BYTE *)(*v158 + 8) = 1;
    v159 = sub_2220DF0("cl_amd_media_ops2", 17);
    v160 = sub_2220F70(v1 + 304, "cl_amd_media_ops2", 17, v159);
    v164 = v160;
    v165 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v160);
    if ( *v165 )
    {
      if ( *v165 != -8 )
      {
        sub_1005BB0(v260, v165, 0);
        v166 = v260[0];
        goto LABEL_78;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v233 = sub_220C370(34, 8, v160, v161, v162, v163);
    v234 = _mm_load_si128((const __m128i *)&xmmword_23856D0);
    *(_BYTE *)(v233 + 32) = 50;
    *(__m128i *)(v233 + 16) = v234;
    *(_BYTE *)(v233 + 33) = 0;
    *(_QWORD *)v233 = 17;
    *(_BYTE *)(v233 + 8) = 0;
    *v165 = v233;
    ++*(_DWORD *)(v1 + 316);
    v235 = sub_2221390(v1 + 304, v164);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v235), 0);
    v166 = v260[0];
LABEL_78:
    *(_BYTE *)(*v166 + 8) = 1;
    v167 = sub_2220DF0("__opencl_c_images", 17);
    v168 = sub_2220F70(v1 + 304, "__opencl_c_images", 17, v167);
    v172 = v168;
    v173 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v168);
    if ( *v173 )
    {
      if ( *v173 != -8 )
      {
        sub_1005BB0(v260, v173, 0);
        v174 = v260[0];
        goto LABEL_81;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v230 = sub_220C370(34, 8, v168, v169, v170, v171);
    v231 = _mm_load_si128((const __m128i *)&xmmword_2385470);
    *(_BYTE *)(v230 + 32) = 115;
    *(__m128i *)(v230 + 16) = v231;
    *(_BYTE *)(v230 + 33) = 0;
    *(_QWORD *)v230 = 17;
    *(_BYTE *)(v230 + 8) = 0;
    *v173 = v230;
    ++*(_DWORD *)(v1 + 316);
    v232 = sub_2221390(v1 + 304, v172);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v232), 0);
    v174 = v260[0];
LABEL_81:
    *(_BYTE *)(*v174 + 8) = 1;
    v175 = sub_2220DF0("__opencl_c_3d_image_writes", 26);
    v176 = sub_2220F70(v1 + 304, "__opencl_c_3d_image_writes", 26, v175);
    v180 = v176;
    v181 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v176);
    if ( *v181 )
    {
      if ( *v181 != -8 )
      {
        sub_1005BB0(v260, v181, 0);
        v182 = v260[0];
        goto LABEL_84;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v227 = sub_220C370(43, 8, v176, v177, v178, v179);
    v228 = _mm_load_si128((const __m128i *)&xmmword_2385420);
    strcpy((char *)(v227 + 32), "age_writes");
    *(__m128i *)(v227 + 16) = v228;
    *(_QWORD *)v227 = 26;
    *(_BYTE *)(v227 + 8) = 0;
    *v181 = v227;
    ++*(_DWORD *)(v1 + 316);
    v229 = sub_2221390(v1 + 304, v180);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v229), 0);
    v182 = v260[0];
LABEL_84:
    *(_BYTE *)(*v182 + 8) = 1;
    v183 = sub_2220DF0("cl_khr_3d_image_writes", 22);
    v184 = sub_2220F70(v1 + 304, "cl_khr_3d_image_writes", 22, v183);
    v188 = v184;
    v189 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v184);
    if ( *v189 )
    {
      if ( *v189 != -8 )
      {
        sub_1005BB0(v260, v189, 0);
        v190 = v260[0];
        goto LABEL_87;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v224 = sub_220C370(39, 8, v184, v185, v186, v187);
    v225 = _mm_load_si128(xmmword_2385640);
    strcpy((char *)(v224 + 32), "writes");
    *(__m128i *)(v224 + 16) = v225;
    *(_QWORD *)v224 = 22;
    *(_BYTE *)(v224 + 8) = 0;
    *v189 = v224;
    ++*(_DWORD *)(v1 + 316);
    v226 = sub_2221390(v1 + 304, v188);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v226), 0);
    v190 = v260[0];
LABEL_87:
    v191 = *(_DWORD *)(a1 + 512) > 0x13u;
    *(_BYTE *)(*v190 + 8) = 1;
    v192 = sub_2220DF0("__opencl_c_generic_address_space", 32);
    v193 = sub_2220F70(v1 + 304, "__opencl_c_generic_address_space", 32, v192);
    v197 = v193;
    v198 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v193);
    if ( *v198 )
    {
      if ( *v198 != -8 )
      {
        sub_1005BB0(v260, v198, 0);
        v199 = v260[0];
LABEL_90:
        result = *v199;
        *(_BYTE *)(result + 8) = v191;
        return result;
      }
      --*(_DWORD *)(v1 + 320);
    }
    v220 = sub_220C370(49, 8, v193, v194, v195, v196);
    v221 = _mm_load_si128((const __m128i *)&xmmword_23853E0);
    *(_BYTE *)(v220 + 48) = 0;
    *(__m128i *)(v220 + 16) = v221;
    v222 = _mm_load_si128((const __m128i *)&xmmword_23853F0);
    *(_QWORD *)v220 = 32;
    *(__m128i *)(v220 + 32) = v222;
    *(_BYTE *)(v220 + 8) = 0;
    *v198 = v220;
    ++*(_DWORD *)(v1 + 316);
    v223 = sub_2221390(v1 + 304, v197);
    sub_1005BB0(v260, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v223), 0);
    v199 = v260[0];
    goto LABEL_90;
  }
  return result;
}

