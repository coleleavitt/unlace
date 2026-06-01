__int64 __fastcall sub_14B9780(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // r8
  unsigned int *v5; // rbp
  char v7; // r10
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // ecx
  _QWORD *v11; // rsi
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 result; // rax
  unsigned int v16; // edi
  unsigned int v17; // eax
  int v18; // edx
  __int64 v19; // r14
  size_t v20; // rax
  __int64 v21; // r15
  size_t v22; // rax
  __int64 v23; // r15
  size_t v24; // rax
  __int64 v25; // r15
  size_t v26; // rax
  __int64 v27; // r15
  size_t v28; // rax
  __int64 v29; // r15
  size_t v30; // rax
  __int64 v31; // r15
  size_t v32; // rax
  __int64 v33; // r15
  size_t v34; // rax
  __int64 v35; // r15
  size_t v36; // rax
  __int64 v37; // r15
  size_t v38; // rax
  __int64 v39; // r15
  size_t v40; // rax
  __int64 v41; // r15
  size_t v42; // rax
  __int64 v43; // r15
  size_t v44; // rax
  __int64 v45; // r15
  size_t v46; // rax
  __int64 v47; // r15
  size_t v48; // rax
  __int64 v49; // r15
  size_t v50; // rax
  __int64 v51; // r15
  size_t v52; // rax
  __int64 v53; // r15
  size_t v54; // rax
  __int64 v55; // r15
  size_t v56; // rax
  __int64 v57; // r15
  size_t v58; // rax
  __int64 v59; // r15
  size_t v60; // rax
  __int64 v61; // r15
  size_t v62; // rax
  __int64 v63; // r15
  size_t v64; // rax
  __int64 v65; // r15
  size_t v66; // rax
  __int64 v67; // r15
  size_t v68; // rax
  __int64 v69; // r15
  size_t v70; // rax
  __int64 v71; // r15
  size_t v72; // rax
  __int64 v73; // r15
  size_t v74; // rax
  __int64 v75; // r15
  size_t v76; // rax
  __int64 v77; // r15
  size_t v78; // rax
  __int64 v79; // r15
  size_t v80; // rax
  __int64 v81; // r15
  size_t v82; // rax
  __int64 v83; // r15
  size_t v84; // rax
  __int64 v85; // r15
  size_t v86; // rax
  __int64 v87; // r15
  size_t v88; // rax
  __int64 v89; // r15
  size_t v90; // rax
  __int64 v91; // r15
  size_t v92; // rax
  __int64 v93; // r15
  size_t v94; // rax
  __int64 v95; // r15
  size_t v96; // rax
  __int64 v97; // r15
  size_t v98; // rax
  __int64 v99; // r15
  size_t v100; // rax
  __int64 v101; // r15
  size_t v102; // rax
  __int64 v103; // r15
  size_t v104; // rax
  __int64 v105; // r15
  size_t v106; // rax
  __int64 v107; // r15
  size_t v108; // rax
  __int64 v109; // r15
  size_t v110; // rax
  __int64 v111; // r15
  size_t v112; // rax
  __int64 v113; // r15
  size_t v114; // rax
  __int64 v115; // r15
  size_t v116; // rax
  __int64 v117; // r15
  size_t v118; // rax
  __int64 v119; // r15
  size_t v120; // rax
  __int64 v121; // r15
  size_t v122; // rax
  __int64 v123; // r15
  size_t v124; // rax
  __int64 v125; // r15
  size_t v126; // rax
  __int64 v127; // r15
  size_t v128; // rax
  __int64 v129; // r15
  size_t v130; // rax
  __int64 v131; // r15
  size_t v132; // rax
  __int64 v133; // r15
  size_t v134; // rax
  __int64 v135; // r15
  size_t v136; // rax
  __int64 v137; // r15
  size_t v138; // rax
  __int64 v139; // r15
  size_t v140; // rax
  __int64 v141; // r15
  size_t v142; // rax
  __int64 v143; // r15
  size_t v144; // rax
  __int64 v145; // r15
  size_t v146; // rax
  __int64 v147; // r15
  size_t v148; // rax
  __int64 v149; // r15
  size_t v150; // rax
  __int64 v151; // r15
  size_t v152; // rax
  __int64 v153; // r15
  size_t v154; // rax
  __int64 v155; // r15
  size_t v156; // rax
  __int64 v157; // r15
  size_t v158; // rax
  __int64 v159; // r15
  size_t v160; // rax
  unsigned int *v161; // rax
  __int64 v162; // rdi
  int v163; // eax
  __m128 v164[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a2;
  v5 = (unsigned int *)(a1 + 1960);
  if ( !(*(_DWORD *)(a1 + 1960) >> 1) )
  {
    v19 = *(_QWORD *)(a1 + 8);
    v20 = j__strlen("__is_abstract");
    v164[0].m128_u64[0] = sub_6F3470(v19 + 552, "__is_abstract", v20);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 238;
    v21 = *(_QWORD *)(a1 + 8);
    v22 = j__strlen("__is_aggregate");
    v164[0].m128_u64[0] = sub_6F3470(v21 + 552, "__is_aggregate", v22);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 239;
    v23 = *(_QWORD *)(a1 + 8);
    v24 = j__strlen("__is_arithmetic");
    v164[0].m128_u64[0] = sub_6F3470(v23 + 552, "__is_arithmetic", v24);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 290;
    v25 = *(_QWORD *)(a1 + 8);
    v26 = j__strlen("__is_array");
    v164[0].m128_u64[0] = sub_6F3470(v25 + 552, "__is_array", v26);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 295;
    v27 = *(_QWORD *)(a1 + 8);
    v28 = j__strlen("__is_assignable");
    v164[0].m128_u64[0] = sub_6F3470(v27 + 552, "__is_assignable", v28);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 224;
    v29 = *(_QWORD *)(a1 + 8);
    v30 = j__strlen("__is_base_of");
    v164[0].m128_u64[0] = sub_6F3470(v29 + 552, "__is_base_of", v30);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 240;
    v31 = *(_QWORD *)(a1 + 8);
    v32 = j__strlen("__is_bounded_array");
    v164[0].m128_u64[0] = sub_6F3470(v31 + 552, "__is_bounded_array", v32);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 275;
    v33 = *(_QWORD *)(a1 + 8);
    v34 = j__strlen("__is_class");
    v164[0].m128_u64[0] = sub_6F3470(v33 + 552, "__is_class", v34);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 241;
    v35 = *(_QWORD *)(a1 + 8);
    v36 = j__strlen("__is_complete_type");
    v164[0].m128_u64[0] = sub_6F3470(v35 + 552, "__is_complete_type", v36);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 293;
    v37 = *(_QWORD *)(a1 + 8);
    v38 = j__strlen("__is_compound");
    v164[0].m128_u64[0] = sub_6F3470(v37 + 552, "__is_compound", v38);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 303;
    v39 = *(_QWORD *)(a1 + 8);
    v40 = j__strlen("__is_const");
    v164[0].m128_u64[0] = sub_6F3470(v39 + 552, "__is_const", v40);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 308;
    v41 = *(_QWORD *)(a1 + 8);
    v42 = j__strlen("__is_constructible");
    v164[0].m128_u64[0] = sub_6F3470(v41 + 552, "__is_constructible", v42);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 222;
    v43 = *(_QWORD *)(a1 + 8);
    v44 = j__strlen("__is_convertible");
    v164[0].m128_u64[0] = sub_6F3470(v43 + 552, "__is_convertible", v44);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 313;
    v45 = *(_QWORD *)(a1 + 8);
    v46 = j__strlen("__is_convertible_to");
    v164[0].m128_u64[0] = sub_6F3470(v45 + 552, "__is_convertible_to", v46);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 242;
    v47 = *(_QWORD *)(a1 + 8);
    v48 = j__strlen("__is_destructible");
    v164[0].m128_u64[0] = sub_6F3470(v47 + 552, "__is_destructible", v48);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 218;
    v49 = *(_QWORD *)(a1 + 8);
    v50 = j__strlen("__is_empty");
    v164[0].m128_u64[0] = sub_6F3470(v49 + 552, "__is_empty", v50);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 243;
    v51 = *(_QWORD *)(a1 + 8);
    v52 = j__strlen("__is_enum");
    v164[0].m128_u64[0] = sub_6F3470(v51 + 552, "__is_enum", v52);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 244;
    v53 = *(_QWORD *)(a1 + 8);
    v54 = j__strlen("__is_floating_point");
    v164[0].m128_u64[0] = sub_6F3470(v53 + 552, "__is_floating_point", v54);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 291;
    v55 = *(_QWORD *)(a1 + 8);
    v56 = j__strlen("__is_final");
    v164[0].m128_u64[0] = sub_6F3470(v55 + 552, "__is_final", v56);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 245;
    v57 = *(_QWORD *)(a1 + 8);
    v58 = j__strlen("__is_function");
    v164[0].m128_u64[0] = sub_6F3470(v57 + 552, "__is_function", v58);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 296;
    v59 = *(_QWORD *)(a1 + 8);
    v60 = j__strlen("__is_fundamental");
    v164[0].m128_u64[0] = sub_6F3470(v59 + 552, "__is_fundamental", v60);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 300;
    v61 = *(_QWORD *)(a1 + 8);
    v62 = j__strlen("__is_integral");
    v164[0].m128_u64[0] = sub_6F3470(v61 + 552, "__is_integral", v62);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 292;
    v63 = *(_QWORD *)(a1 + 8);
    v64 = j__strlen("__is_interface_class");
    v164[0].m128_u64[0] = sub_6F3470(v63 + 552, "__is_interface_class", v64);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 216;
    v65 = *(_QWORD *)(a1 + 8);
    v66 = j__strlen("__is_literal");
    v164[0].m128_u64[0] = sub_6F3470(v65 + 552, "__is_literal", v66);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 246;
    v67 = *(_QWORD *)(a1 + 8);
    v68 = j__strlen("__is_lvalue_expr");
    v164[0].m128_u64[0] = sub_6F3470(v67 + 552, "__is_lvalue_expr", v68);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 288;
    v69 = *(_QWORD *)(a1 + 8);
    v70 = j__strlen("__is_lvalue_reference");
    v164[0].m128_u64[0] = sub_6F3470(v69 + 552, "__is_lvalue_reference", v70);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 298;
    v71 = *(_QWORD *)(a1 + 8);
    v72 = j__strlen("__is_member_function_pointer");
    v164[0].m128_u64[0] = sub_6F3470(v71 + 552, "__is_member_function_pointer", v72);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 306;
    v73 = *(_QWORD *)(a1 + 8);
    v74 = j__strlen("__is_member_object_pointer");
    v164[0].m128_u64[0] = sub_6F3470(v73 + 552, "__is_member_object_pointer", v74);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 305;
    v75 = *(_QWORD *)(a1 + 8);
    v76 = j__strlen("__is_member_pointer");
    v164[0].m128_u64[0] = sub_6F3470(v75 + 552, "__is_member_pointer", v76);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 307;
    v77 = *(_QWORD *)(a1 + 8);
    v78 = j__strlen("__is_nothrow_assignable");
    v164[0].m128_u64[0] = sub_6F3470(v77 + 552, "__is_nothrow_assignable", v78);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 221;
    v79 = *(_QWORD *)(a1 + 8);
    v80 = j__strlen("__is_nothrow_constructible");
    v164[0].m128_u64[0] = sub_6F3470(v79 + 552, "__is_nothrow_constructible", v80);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 223;
    v81 = *(_QWORD *)(a1 + 8);
    v82 = j__strlen("__is_nothrow_destructible");
    v164[0].m128_u64[0] = sub_6F3470(v81 + 552, "__is_nothrow_destructible", v82);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 220;
    v83 = *(_QWORD *)(a1 + 8);
    v84 = j__strlen("__is_object");
    v164[0].m128_u64[0] = sub_6F3470(v83 + 552, "__is_object", v84);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 301;
    v85 = *(_QWORD *)(a1 + 8);
    v86 = j__strlen("__is_pod");
    v164[0].m128_u64[0] = sub_6F3470(v85 + 552, "__is_pod", v86);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 247;
    v87 = *(_QWORD *)(a1 + 8);
    v88 = j__strlen("__is_pointer");
    v164[0].m128_u64[0] = sub_6F3470(v87 + 552, "__is_pointer", v88);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 304;
    v89 = *(_QWORD *)(a1 + 8);
    v90 = j__strlen("__is_polymorphic");
    v164[0].m128_u64[0] = sub_6F3470(v89 + 552, "__is_polymorphic", v90);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 248;
    v91 = *(_QWORD *)(a1 + 8);
    v92 = j__strlen("__is_reference");
    v164[0].m128_u64[0] = sub_6F3470(v91 + 552, "__is_reference", v92);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 297;
    v93 = *(_QWORD *)(a1 + 8);
    v94 = j__strlen("__is_rvalue_expr");
    v164[0].m128_u64[0] = sub_6F3470(v93 + 552, "__is_rvalue_expr", v94);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 289;
    v95 = *(_QWORD *)(a1 + 8);
    v96 = j__strlen("__is_rvalue_reference");
    v164[0].m128_u64[0] = sub_6F3470(v95 + 552, "__is_rvalue_reference", v96);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 299;
    v97 = *(_QWORD *)(a1 + 8);
    v98 = j__strlen("__is_same");
    v164[0].m128_u64[0] = sub_6F3470(v97 + 552, "__is_same", v98);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 312;
    v99 = *(_QWORD *)(a1 + 8);
    v100 = j__strlen("__is_scalar");
    v164[0].m128_u64[0] = sub_6F3470(v99 + 552, "__is_scalar", v100);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 302;
    v101 = *(_QWORD *)(a1 + 8);
    v102 = j__strlen("__is_scoped_enum");
    v164[0].m128_u64[0] = sub_6F3470(v101 + 552, "__is_scoped_enum", v102);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 277;
    v103 = *(_QWORD *)(a1 + 8);
    v104 = j__strlen("__is_sealed");
    v164[0].m128_u64[0] = sub_6F3470(v103 + 552, "__is_sealed", v104);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 217;
    v105 = *(_QWORD *)(a1 + 8);
    v106 = j__strlen("__is_signed");
    v164[0].m128_u64[0] = sub_6F3470(v105 + 552, "__is_signed", v106);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 310;
    v107 = *(_QWORD *)(a1 + 8);
    v108 = j__strlen("__is_standard_layout");
    v164[0].m128_u64[0] = sub_6F3470(v107 + 552, "__is_standard_layout", v108);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 249;
    v109 = *(_QWORD *)(a1 + 8);
    v110 = j__strlen("__is_trivial");
    v164[0].m128_u64[0] = sub_6F3470(v109 + 552, "__is_trivial", v110);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 250;
    v111 = *(_QWORD *)(a1 + 8);
    v112 = j__strlen("__is_trivially_assignable");
    v164[0].m128_u64[0] = sub_6F3470(v111 + 552, "__is_trivially_assignable", v112);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 251;
    v113 = *(_QWORD *)(a1 + 8);
    v114 = j__strlen("__is_trivially_constructible");
    v164[0].m128_u64[0] = sub_6F3470(v113 + 552, "__is_trivially_constructible", v114);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 252;
    v115 = *(_QWORD *)(a1 + 8);
    v116 = j__strlen("__is_trivially_copyable");
    v164[0].m128_u64[0] = sub_6F3470(v115 + 552, "__is_trivially_copyable", v116);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 253;
    v117 = *(_QWORD *)(a1 + 8);
    v118 = j__strlen("__is_unbounded_array");
    v164[0].m128_u64[0] = sub_6F3470(v117 + 552, "__is_unbounded_array", v118);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 276;
    v119 = *(_QWORD *)(a1 + 8);
    v120 = j__strlen("__is_union");
    v164[0].m128_u64[0] = sub_6F3470(v119 + 552, "__is_union", v120);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 254;
    v121 = *(_QWORD *)(a1 + 8);
    v122 = j__strlen("__is_unsigned");
    v164[0].m128_u64[0] = sub_6F3470(v121 + 552, "__is_unsigned", v122);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 311;
    v123 = *(_QWORD *)(a1 + 8);
    v124 = j__strlen("__is_void");
    v164[0].m128_u64[0] = sub_6F3470(v123 + 552, "__is_void", v124);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 294;
    v125 = *(_QWORD *)(a1 + 8);
    v126 = j__strlen("__is_volatile");
    v164[0].m128_u64[0] = sub_6F3470(v125 + 552, "__is_volatile", v126);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 309;
    v127 = *(_QWORD *)(a1 + 8);
    v128 = j__strlen("__reference_binds_to_temporary");
    v164[0].m128_u64[0] = sub_6F3470(v127 + 552, "__reference_binds_to_temporary", v128);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 279;
    v129 = *(_QWORD *)(a1 + 8);
    v130 = j__strlen("RTT_JOIN(__, add_lvalue_reference)");
    v164[0].m128_u64[0] = sub_6F3470(v129 + 552, "RTT_JOIN(__, add_lvalue_reference)", v130);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 258;
    v131 = *(_QWORD *)(a1 + 8);
    v132 = j__strlen("RTT_JOIN(__, add_pointer)");
    v164[0].m128_u64[0] = sub_6F3470(v131 + 552, "RTT_JOIN(__, add_pointer)", v132);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 259;
    v133 = *(_QWORD *)(a1 + 8);
    v134 = j__strlen("RTT_JOIN(__, add_rvalue_reference)");
    v164[0].m128_u64[0] = sub_6F3470(v133 + 552, "RTT_JOIN(__, add_rvalue_reference)", v134);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 260;
    v135 = *(_QWORD *)(a1 + 8);
    v136 = j__strlen("RTT_JOIN(__, decay)");
    v164[0].m128_u64[0] = sub_6F3470(v135 + 552, "RTT_JOIN(__, decay)", v136);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 261;
    v137 = *(_QWORD *)(a1 + 8);
    v138 = j__strlen("RTT_JOIN(__, make_signed)");
    v164[0].m128_u64[0] = sub_6F3470(v137 + 552, "RTT_JOIN(__, make_signed)", v138);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 262;
    v139 = *(_QWORD *)(a1 + 8);
    v140 = j__strlen("RTT_JOIN(__, make_unsigned)");
    v164[0].m128_u64[0] = sub_6F3470(v139 + 552, "RTT_JOIN(__, make_unsigned)", v140);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 263;
    v141 = *(_QWORD *)(a1 + 8);
    v142 = j__strlen("RTT_JOIN(__, remove_all_extents)");
    v164[0].m128_u64[0] = sub_6F3470(v141 + 552, "RTT_JOIN(__, remove_all_extents)", v142);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 264;
    v143 = *(_QWORD *)(a1 + 8);
    v144 = j__strlen("RTT_JOIN(__, remove_const)");
    v164[0].m128_u64[0] = sub_6F3470(v143 + 552, "RTT_JOIN(__, remove_const)", v144);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 265;
    v145 = *(_QWORD *)(a1 + 8);
    v146 = j__strlen("RTT_JOIN(__, remove_cv)");
    v164[0].m128_u64[0] = sub_6F3470(v145 + 552, "RTT_JOIN(__, remove_cv)", v146);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 266;
    v147 = *(_QWORD *)(a1 + 8);
    v148 = j__strlen("RTT_JOIN(__, remove_cvref)");
    v164[0].m128_u64[0] = sub_6F3470(v147 + 552, "RTT_JOIN(__, remove_cvref)", v148);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 267;
    v149 = *(_QWORD *)(a1 + 8);
    v150 = j__strlen("RTT_JOIN(__, remove_extent)");
    v164[0].m128_u64[0] = sub_6F3470(v149 + 552, "RTT_JOIN(__, remove_extent)", v150);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 268;
    v151 = *(_QWORD *)(a1 + 8);
    v152 = j__strlen("RTT_JOIN(__, remove_pointer)");
    v164[0].m128_u64[0] = sub_6F3470(v151 + 552, "RTT_JOIN(__, remove_pointer)", v152);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 269;
    v153 = *(_QWORD *)(a1 + 8);
    v154 = j__strlen("RTT_JOIN(__, remove_reference_t)");
    v164[0].m128_u64[0] = sub_6F3470(v153 + 552, "RTT_JOIN(__, remove_reference_t)", v154);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 270;
    v155 = *(_QWORD *)(a1 + 8);
    v156 = j__strlen("RTT_JOIN(__, remove_restrict)");
    v164[0].m128_u64[0] = sub_6F3470(v155 + 552, "RTT_JOIN(__, remove_restrict)", v156);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 271;
    v157 = *(_QWORD *)(a1 + 8);
    v158 = j__strlen("RTT_JOIN(__, remove_volatile)");
    v164[0].m128_u64[0] = sub_6F3470(v157 + 552, "RTT_JOIN(__, remove_volatile)", v158);
    *(_WORD *)sub_14B9490(v5, (__int64 *)v164) = 272;
    v159 = *(_QWORD *)(a1 + 8);
    v160 = j__strlen("RTT_JOIN(__, underlying_type)");
    v164[0].m128_u64[0] = sub_6F3470(v159 + 552, "RTT_JOIN(__, underlying_type)", v160);
    v161 = sub_14B9490(v5, (__int64 *)v164);
    v3 = a2;
    *(_WORD *)v161 = 273;
  }
  v7 = *(_BYTE *)(a1 + 1960) & 1;
  if ( !v7 )
  {
    v16 = *(_DWORD *)(a1 + 1976);
    v9 = *(_QWORD *)(a1 + 1968);
    v17 = v16;
    if ( !v16 )
      goto LABEL_19;
    v18 = v16 - 1;
    v10 = (v16 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
    v11 = (_QWORD *)(v9 + 16LL * v10);
    if ( v3 == *v11 )
    {
LABEL_14:
      v8 = 16LL * v17;
      goto LABEL_5;
    }
    if ( *v11 == -4096 )
    {
LABEL_19:
      v162 = 16LL * v16;
      goto LABEL_17;
    }
LABEL_21:
    v163 = 1;
    while ( 1 )
    {
      v10 = v18 & (v163 + v10);
      v11 = (_QWORD *)(v9 + 16LL * v10);
      if ( v3 == *v11 )
        break;
      ++v163;
      if ( *v11 == -4096 )
      {
        if ( !v7 )
        {
          v16 = *(_DWORD *)(a1 + 1976);
          goto LABEL_19;
        }
        v162 = 64;
        goto LABEL_17;
      }
    }
    if ( !v7 )
    {
      v17 = *(_DWORD *)(a1 + 1976);
      goto LABEL_14;
    }
    v8 = 64;
    goto LABEL_5;
  }
  v8 = 64;
  v9 = a1 + 1968;
  v10 = ((unsigned __int8)((unsigned int)v3 >> 4) ^ (unsigned __int8)((unsigned int)v3 >> 9)) & 3;
  v11 = (_QWORD *)(a1
                 + 1968
                 + 16LL * (((unsigned __int8)((unsigned int)v3 >> 4) ^ (unsigned __int8)((unsigned int)v3 >> 9)) & 3));
  if ( v3 == *v11 )
  {
LABEL_5:
    sub_14B8090(v164, v11, (_QWORD *)(v9 + v8), (__int64)v5, 1);
    v12 = v164[0].m128_u64[0];
    goto LABEL_6;
  }
  v162 = 64;
  v18 = 3;
  if ( *v11 != -4096 )
    goto LABEL_21;
LABEL_17:
  sub_14B8090(v164, (_QWORD *)(v9 + v162), (_QWORD *)(v9 + v162), (__int64)v5, 1);
  v12 = v164[0].m128_u64[0];
LABEL_6:
  if ( (*(_BYTE *)(a1 + 1960) & 1) != 0 )
  {
    v13 = a1 + 1968;
    v14 = 64;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 1968);
    v14 = 16LL * *(unsigned int *)(a1 + 1976);
  }
  sub_14B8090(v164, (_QWORD *)(v13 + v14), (_QWORD *)(v13 + v14), (__int64)v5, 1);
  result = 0;
  if ( v164[0].m128_u64[0] != v12 )
  {
    result = 1;
    if ( a3 )
      *a3 = *(_WORD *)(v12 + 8);
  }
  return result;
}
