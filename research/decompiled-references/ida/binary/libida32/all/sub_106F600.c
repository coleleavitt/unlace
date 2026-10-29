__int64 __fastcall sub_106F600(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r12d
  __int64 *v8; // r13
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
  unsigned int v19; // r14d
  __int64 *v20; // r13
  __int64 *v21; // rax
  __m128i *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r14d
  __int64 *v30; // r13
  __int64 *v31; // rax
  __m128i *v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // r14d
  __int64 *v40; // r13
  __int64 *v41; // rax
  __int64 v42; // rax
  __m128i v43; // xmm0
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // r14d
  __int64 *v51; // r13
  __int64 *v52; // rax
  __int64 v53; // rax
  __m128i v54; // xmm0
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned int v61; // r14d
  __int64 *v62; // r13
  __int64 *v63; // rax
  __int64 v64; // rax
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned int v71; // r14d
  __int64 *v72; // r13
  __int64 *v73; // rax
  __int64 v74; // rax
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned int v81; // r14d
  __int64 *v82; // r13
  __int64 *v83; // rax
  __m128i *v84; // rax
  unsigned int v85; // eax
  unsigned int v86; // eax
  unsigned int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned int v91; // r14d
  __int64 *v92; // r13
  __int64 *v93; // rax
  __int64 v94; // rax
  __m128i v95; // xmm0
  __m128i v96; // xmm0
  unsigned int v97; // eax
  unsigned int v98; // eax
  unsigned int v99; // eax
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  unsigned int v103; // r14d
  __int64 *v104; // r13
  __int64 *v105; // rax
  __int64 v106; // rax
  __m128i v107; // xmm0
  unsigned int v108; // eax
  unsigned int v109; // eax
  unsigned int v110; // eax
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  unsigned int v114; // r14d
  __int64 *v115; // r13
  __int64 *v116; // rax
  __int64 v117; // rax
  __m128i v118; // xmm0
  unsigned int v119; // eax
  unsigned int v120; // eax
  unsigned int v121; // eax
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  unsigned int v125; // r14d
  __int64 *v126; // r13
  __int64 *v127; // rax
  __int64 v128; // rax
  __m128i v129; // xmm0
  __m128i v130; // xmm0
  unsigned int v131; // eax
  unsigned int v132; // eax
  unsigned int v133; // eax
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  unsigned int v137; // r14d
  __int64 *v138; // r13
  __int64 *v139; // rax
  __int64 v140; // rax
  __m128i v141; // xmm0
  __m128i v142; // xmm0
  unsigned int v143; // eax
  __int64 result; // rax
  __int64 *v145[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = *(_QWORD *)(a1 + 208);
  v2 = sub_2220DF0("cl_clang_storage_class_specifiers", 33);
  v3 = sub_2220F70(v1 + 304, "cl_clang_storage_class_specifiers", 33, v2);
  v7 = v3;
  v8 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v3);
  if ( *v8 )
  {
    if ( *v8 != -8 )
    {
      sub_1005BB0(v145, v8, 0);
      v9 = v145[0];
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
  sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v13), 0);
  v9 = v145[0];
LABEL_6:
  *(_BYTE *)(*v9 + 8) = 1;
  v14 = sub_2220DF0("__cl_clang_function_pointers", 28);
  v15 = sub_2220F70(v1 + 304, "__cl_clang_function_pointers", 28, v14);
  v19 = v15;
  v20 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v15);
  if ( *v20 )
  {
    if ( *v20 != -8 )
    {
      sub_1005BB0(v145, v20, 0);
      v21 = v145[0];
      goto LABEL_11;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v22 = (__m128i *)sub_220C370(45, 8, v15, v16, v17, v18);
  v22[1] = _mm_load_si128((const __m128i *)&xmmword_2385680);
  strcpy(v22[2].m128i_i8, "ion_pointers");
  v22->m128i_i64[0] = 28;
  v22->m128i_i8[8] = 0;
  *v20 = (__int64)v22;
  ++*(_DWORD *)(v1 + 316);
  v23 = sub_2221390(v1 + 304, v19);
  sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v23), 0);
  v21 = v145[0];
LABEL_11:
  *(_BYTE *)(*v21 + 8) = 1;
  v24 = sub_2220DF0("__cl_clang_variadic_functions", 29);
  v25 = sub_2220F70(v1 + 304, "__cl_clang_variadic_functions", 29, v24);
  v29 = v25;
  v30 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v25);
  if ( *v30 )
  {
    if ( *v30 != -8 )
    {
      sub_1005BB0(v145, v30, 0);
      v31 = v145[0];
      goto LABEL_16;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v32 = (__m128i *)sub_220C370(46, 8, v25, v26, v27, v28);
  v32[1] = _mm_load_si128((const __m128i *)&xmmword_2385690);
  strcpy(v32[2].m128i_i8, "dic_functions");
  v32->m128i_i64[0] = 29;
  v32->m128i_i8[8] = 0;
  *v30 = (__int64)v32;
  ++*(_DWORD *)(v1 + 316);
  v33 = sub_2221390(v1 + 304, v29);
  sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v33), 0);
  v31 = v145[0];
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
      sub_1005BB0(v145, v40, 0);
      v41 = v145[0];
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
  sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v44), 0);
  v41 = v145[0];
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
      sub_1005BB0(v145, v51, 0);
      v52 = v145[0];
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
  sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v55), 0);
  v52 = v145[0];
LABEL_26:
  *(_BYTE *)(*v52 + 8) = 1;
  v56 = sub_2220DF0("cl_khr_fp64", 11);
  v57 = sub_2220F70(v1 + 304, "cl_khr_fp64", 11, v56);
  v61 = v57;
  v62 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v57);
  if ( *v62 )
  {
    if ( *v62 != -8 )
    {
      sub_1005BB0(v145, v62, 0);
      v63 = v145[0];
      goto LABEL_31;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v64 = sub_220C370(28, 8, v57, v58, v59, v60);
  strcpy((char *)(v64 + 16), "cl_khr_fp64");
  *(_QWORD *)v64 = 11;
  *(_BYTE *)(v64 + 8) = 0;
  *v62 = v64;
  ++*(_DWORD *)(v1 + 316);
  v65 = sub_2221390(v1 + 304, v61);
  sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v65), 0);
  v63 = v145[0];
LABEL_31:
  *(_BYTE *)(*v63 + 8) = 1;
  v66 = sub_2220DF0("__opencl_c_fp64", 15);
  v67 = sub_2220F70(v1 + 304, "__opencl_c_fp64", 15, v66);
  v71 = v67;
  v72 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v67);
  if ( *v72 )
  {
    if ( *v72 != -8 )
    {
      sub_1005BB0(v145, v72, 0);
      v73 = v145[0];
      goto LABEL_36;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v74 = sub_220C370(32, 8, v67, v68, v69, v70);
  strcpy((char *)(v74 + 16), "__opencl_c_fp64");
  *(_QWORD *)v74 = 15;
  *(_BYTE *)(v74 + 8) = 0;
  *v72 = v74;
  ++*(_DWORD *)(v1 + 316);
  v75 = sub_2221390(v1 + 304, v71);
  sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v75), 0);
  v73 = v145[0];
LABEL_36:
  *(_BYTE *)(*v73 + 8) = 1;
  v76 = sub_2220DF0("cl_khr_byte_addressable_store", 29);
  v77 = sub_2220F70(v1 + 304, "cl_khr_byte_addressable_store", 29, v76);
  v81 = v77;
  v82 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v77);
  if ( *v82 )
  {
    if ( *v82 != -8 )
    {
      sub_1005BB0(v145, v82, 0);
      v83 = v145[0];
      goto LABEL_41;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v84 = (__m128i *)sub_220C370(46, 8, v77, v78, v79, v80);
  v84[1] = _mm_load_si128((const __m128i *)&xmmword_2385330);
  strcpy(v84[2].m128i_i8, "essable_store");
  v84->m128i_i64[0] = 29;
  v84->m128i_i8[8] = 0;
  *v82 = (__int64)v84;
  ++*(_DWORD *)(v1 + 316);
  v85 = sub_2221390(v1 + 304, v81);
  sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v85), 0);
  v83 = v145[0];
LABEL_41:
  *(_BYTE *)(*v83 + 8) = 1;
  v86 = sub_2220DF0("cl_khr_global_int32_base_atomics", 32);
  v87 = sub_2220F70(v1 + 304, "cl_khr_global_int32_base_atomics", 32, v86);
  v91 = v87;
  v92 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v87);
  if ( *v92 )
  {
    if ( *v92 != -8 )
    {
      sub_1005BB0(v145, v92, 0);
      v93 = v145[0];
      goto LABEL_46;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v94 = sub_220C370(49, 8, v87, v88, v89, v90);
  v95 = _mm_load_si128((const __m128i *)&xmmword_2385340);
  *(_BYTE *)(v94 + 48) = 0;
  *(__m128i *)(v94 + 16) = v95;
  v96 = _mm_load_si128((const __m128i *)&xmmword_2385350);
  *(_QWORD *)v94 = 32;
  *(__m128i *)(v94 + 32) = v96;
  *(_BYTE *)(v94 + 8) = 0;
  *v92 = v94;
  ++*(_DWORD *)(v1 + 316);
  v97 = sub_2221390(v1 + 304, v91);
  sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v97), 0);
  v93 = v145[0];
LABEL_46:
  *(_BYTE *)(*v93 + 8) = 1;
  v98 = sub_2220DF0("cl_khr_global_int32_extended_atomics", 36);
  v99 = sub_2220F70(v1 + 304, "cl_khr_global_int32_extended_atomics", 36, v98);
  v103 = v99;
  v104 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v99);
  if ( *v104 )
  {
    if ( *v104 != -8 )
    {
      sub_1005BB0(v145, v104, 0);
      v105 = v145[0];
      goto LABEL_51;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v106 = sub_220C370(53, 8, v99, v100, v101, v102);
  v107 = _mm_load_si128((const __m128i *)&xmmword_2385340);
  strcpy((char *)(v106 + 48), "mics");
  *(__m128i *)(v106 + 16) = v107;
  *(__m128i *)(v106 + 32) = _mm_load_si128((const __m128i *)&xmmword_2385360);
  *(_QWORD *)v106 = 36;
  *(_BYTE *)(v106 + 8) = 0;
  *v104 = v106;
  ++*(_DWORD *)(v1 + 316);
  v108 = sub_2221390(v1 + 304, v103);
  sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v108), 0);
  v105 = v145[0];
LABEL_51:
  *(_BYTE *)(*v105 + 8) = 1;
  v109 = sub_2220DF0("cl_khr_local_int32_base_atomics", 31);
  v110 = sub_2220F70(v1 + 304, "cl_khr_local_int32_base_atomics", 31, v109);
  v114 = v110;
  v115 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v110);
  if ( *v115 )
  {
    if ( *v115 != -8 )
    {
      sub_1005BB0(v145, v115, 0);
      v116 = v145[0];
      goto LABEL_56;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v117 = sub_220C370(48, 8, v110, v111, v112, v113);
  v118 = _mm_load_si128((const __m128i *)&xmmword_2385370);
  strcpy((char *)(v117 + 32), "32_base_atomics");
  *(__m128i *)(v117 + 16) = v118;
  *(_QWORD *)v117 = 31;
  *(_BYTE *)(v117 + 8) = 0;
  *v115 = v117;
  ++*(_DWORD *)(v1 + 316);
  v119 = sub_2221390(v1 + 304, v114);
  sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v119), 0);
  v116 = v145[0];
LABEL_56:
  *(_BYTE *)(*v116 + 8) = 1;
  v120 = sub_2220DF0("cl_khr_local_int32_extended_atomics", 35);
  v121 = sub_2220F70(v1 + 304, "cl_khr_local_int32_extended_atomics", 35, v120);
  v125 = v121;
  v126 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v121);
  if ( *v126 )
  {
    if ( *v126 != -8 )
    {
      sub_1005BB0(v145, v126, 0);
      v127 = v145[0];
      goto LABEL_61;
    }
    --*(_DWORD *)(v1 + 320);
  }
  v128 = sub_220C370(52, 8, v121, v122, v123, v124);
  v129 = _mm_load_si128((const __m128i *)&xmmword_2385370);
  *(_WORD *)(v128 + 48) = 25449;
  *(_BYTE *)(v128 + 50) = 115;
  *(__m128i *)(v128 + 16) = v129;
  v130 = _mm_load_si128((const __m128i *)&xmmword_2385380);
  *(_BYTE *)(v128 + 51) = 0;
  *(__m128i *)(v128 + 32) = v130;
  *(_QWORD *)v128 = 35;
  *(_BYTE *)(v128 + 8) = 0;
  *v126 = v128;
  ++*(_DWORD *)(v1 + 316);
  v131 = sub_2221390(v1 + 304, v125);
  sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v131), 0);
  v127 = v145[0];
LABEL_61:
  *(_BYTE *)(*v127 + 8) = 1;
  v132 = sub_2220DF0("__opencl_c_generic_address_space", 32);
  v133 = sub_2220F70(v1 + 304, "__opencl_c_generic_address_space", 32, v132);
  v137 = v133;
  v138 = (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v133);
  if ( !*v138 )
  {
LABEL_65:
    v140 = sub_220C370(49, 8, v133, v134, v135, v136);
    v141 = _mm_load_si128((const __m128i *)&xmmword_23853E0);
    *(_BYTE *)(v140 + 48) = 0;
    *(__m128i *)(v140 + 16) = v141;
    v142 = _mm_load_si128((const __m128i *)&xmmword_23853F0);
    *(_QWORD *)v140 = 32;
    *(__m128i *)(v140 + 32) = v142;
    *(_BYTE *)(v140 + 8) = 0;
    *v138 = v140;
    ++*(_DWORD *)(v1 + 316);
    v143 = sub_2221390(v1 + 304, v137);
    sub_1005BB0(v145, (__int64 *)(*(_QWORD *)(v1 + 304) + 8LL * v143), 0);
    v139 = v145[0];
    goto LABEL_66;
  }
  if ( *v138 == -8 )
  {
    --*(_DWORD *)(v1 + 320);
    goto LABEL_65;
  }
  sub_1005BB0(v145, v138, 0);
  v139 = v145[0];
LABEL_66:
  result = *v139;
  *(_BYTE *)(result + 8) = 1;
  return result;
}

