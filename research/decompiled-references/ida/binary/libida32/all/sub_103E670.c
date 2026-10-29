void __fastcall sub_103E670(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  char *v11; // r15
  char *v12; // rbx
  int v13; // edi
  unsigned __int64 v14; // rax
  __m128i *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  _DWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  size_t v30; // rax
  size_t v31; // rax
  _BYTE *v32; // rdx
  size_t v33; // r9
  unsigned __int64 v34; // rcx
  void *v35; // rdx
  unsigned __int64 v36; // rax
  __m128i *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  int v82; // edx
  unsigned __int16 v83; // ax
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  unsigned int *v87; // rsi
  char *v88; // rax
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  int v92; // eax
  char v93; // al
  char v94; // al
  int v95; // eax
  char v96; // dl
  char v97; // al
  __int64 v98; // r15
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rcx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  int v133; // eax
  int v134; // ecx
  int v135; // r8d
  bool v136; // zf
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // r8
  __int64 v153; // r9
  size_t v154; // rax
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  int v160; // [rsp+28h] [rbp-180h]
  void *v161; // [rsp+28h] [rbp-180h]
  size_t v162; // [rsp+30h] [rbp-178h]
  size_t v163; // [rsp+38h] [rbp-170h]
  void *v164; // [rsp+40h] [rbp-168h] BYREF
  unsigned __int64 v165; // [rsp+48h] [rbp-160h]
  _BYTE v166[16]; // [rsp+50h] [rbp-158h] BYREF
  void *v167[2]; // [rsp+60h] [rbp-148h] BYREF
  __int64 v168; // [rsp+70h] [rbp-138h] BYREF
  void *v169; // [rsp+80h] [rbp-128h] BYREF
  size_t v170; // [rsp+88h] [rbp-120h]
  __m128i v171; // [rsp+90h] [rbp-118h] BYREF
  void *v172[2]; // [rsp+A0h] [rbp-108h] BYREF
  __m128i v173; // [rsp+B0h] [rbp-F8h] BYREF
  void *v174; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v175; // [rsp+C8h] [rbp-E0h]
  __m128i v176; // [rsp+D0h] [rbp-D8h] BYREF
  _QWORD v177[4]; // [rsp+E0h] [rbp-C8h] BYREF
  __int16 v178; // [rsp+100h] [rbp-A8h]
  char *v179; // [rsp+110h] [rbp-98h] BYREF
  __int64 v180; // [rsp+118h] [rbp-90h]
  __int64 v181; // [rsp+120h] [rbp-88h]
  __int64 v182; // [rsp+128h] [rbp-80h]
  __int64 v183; // [rsp+130h] [rbp-78h]
  void **v184; // [rsp+140h] [rbp-68h] BYREF
  __int64 v185; // [rsp+148h] [rbp-60h]
  __int64 v186; // [rsp+150h] [rbp-58h]
  __int64 v187; // [rsp+158h] [rbp-50h]
  __int64 v188; // [rsp+160h] [rbp-48h]

  v7 = a1;
  if ( *(_DWORD *)(a1 + 248) == 3 && *(_DWORD *)(a1 + 252) == 36 )
  {
    LOWORD(v188) = 257;
    LOWORD(v183) = 259;
    v178 = 259;
    v177[0] = "__amd64__";
    v179 = "1";
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, a4, a5, 257, (char)v184, v185, v186, v187, 1u);
    LOWORD(v183) = 259;
    v177[0] = "__amd64";
    v178 = 259;
    LOWORD(v188) = 257;
    v179 = "1";
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v146, v147, v148, (char)v184, v185, v186, v187, 1u);
    LOWORD(v188) = 257;
    LOWORD(v183) = 259;
    v177[0] = "__x86_64";
    v178 = 259;
    v179 = "1";
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v149, v150, v151, (char)v184, v185, v186, v187, 1u);
    LOWORD(v188) = 257;
    LOWORD(v183) = 259;
    v177[0] = "__x86_64__";
    v179 = "1";
    v178 = 259;
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, 259, v152, v153, (char)v184, v185, v186, v187, 1u);
    LOWORD(v188) = 257;
    v179 = "1";
    LOWORD(v183) = 259;
    v177[0] = "__arm64ec__";
    v178 = 259;
  }
  else
  {
    LOWORD(v188) = 257;
    v179 = "1";
    LOWORD(v183) = 259;
    v177[0] = "__aarch64__";
    v178 = 259;
  }
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, a4, 259, a6, (char)v184, v185, v186, v187, v188);
  v179 = "1";
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__GCC_ASM_FLAG_OUTPUTS__";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 259, v8, v9, (char)v184, v185, v186, v187, 1u);
  v10 = *(_QWORD *)(a1 + 208);
  v164 = v166;
  sub_103ACA0(&v164, *(_BYTE **)(v10 + 368), *(_QWORD *)(v10 + 368) + *(_QWORD *)(v10 + 376));
  if ( !sub_990D60((__int64)&v164, "default") )
  {
    v154 = j__strlen("small");
    sub_978080(&v164, 0, v165, "small", v154);
  }
  if ( (char *)v164 + v165 != v164 )
  {
    v11 = (char *)v164 + v165;
    v12 = (char *)v164;
    do
    {
      v13 = *v12++;
      *(v12 - 1) = toupper(v13);
    }
    while ( v11 != v12 );
    v7 = a1;
  }
  LOWORD(v183) = 257;
  v178 = 259;
  v177[0] = "1";
  sub_BE13C0((__int64)v167, "__AARCH64_CMODEL_", (__int64)&v164);
  v14 = j__strlen("__");
  if ( v14 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v167[1] )
    goto LABEL_210;
  v15 = (__m128i *)sub_9CA820(v167, "__", v14);
  v174 = &v176;
  if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
  {
    v176 = _mm_loadu_si128(v15 + 1);
  }
  else
  {
    v174 = (void *)v15->m128i_i64[0];
    v176.m128i_i64[0] = v15[1].m128i_i64[0];
  }
  v175 = v15->m128i_i64[1];
  v18 = v175;
  v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
  v15->m128i_i64[1] = 0;
  v15[1].m128i_i8[0] = 0;
  LOWORD(v188) = 260;
  v184 = &v174;
  sub_10160F0(a3, (__int64)&v184, (__int64)v177, v18, v16, v17, (char)v179, v180, v181, v182, v183);
  if ( v174 != &v176 )
    operator delete(v174);
  if ( v167[0] != &v168 )
    operator delete(v167[0]);
  LOWORD(v188) = 257;
  v179 = "(100 * (year) + 10 * (quarter) + (patch))";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_ACLE_VERSION(year, quarter, patch)";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v19, v20, v21, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  v178 = 266;
  v179 = "__ARM_ACLE";
  LOWORD(v183) = 259;
  LODWORD(v177[0]) = 202420;
  sub_10160F0(a3, (__int64)&v179, (__int64)v177, 257, v22, v23, (char)v184, v185, v186, v187, 1u);
  v178 = 266;
  LOWORD(v183) = 259;
  LOWORD(v188) = 257;
  v179 = "__FUNCTION_MULTI_VERSIONING_SUPPORT_LEVEL";
  LODWORD(v177[0]) = 202430;
  sub_10160F0(a3, (__int64)&v179, (__int64)v177, v24, 257, 266, (char)v184, v185, v186, v187, 1u);
  v25 = *(_DWORD **)(v7 + 584);
  LOWORD(v188) = 257;
  sub_D67330(
    (__int64 *)&v174,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    16,
    (__int64)"%u",
    *v25);
  LOWORD(v183) = 260;
  v177[0] = "__ARM_ARCH";
  v178 = 259;
  v179 = (char *)&v174;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v26, v27, v28, (char)v184, v185, v186, v187, v188);
  if ( v174 != &v176 )
    operator delete(v174);
  LOWORD(v188) = 257;
  v29 = *(_QWORD *)(v7 + 584);
  v169 = &v171;
  v160 = *(_DWORD *)(v29 + 16);
  v30 = j__strlen("'");
  sub_103ABE0(&v169, "'", (__int64)&asc_22F4756[v30 + 3]);
  v31 = v170;
  if ( v170 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::_M_replace_aux");
  v32 = v169;
  v33 = v170 + 1;
  if ( v169 == &v171 )
    v34 = 15;
  else
    v34 = v171.m128i_i64[0];
  if ( v33 > v34 )
  {
    v163 = v170 + 1;
    v162 = v170;
    sub_974DF0((__int64)&v169, v170, 0, nullptr, 1u);
    v33 = v163;
    v31 = v162;
    v32 = v169;
  }
  v32[v31] = v160;
  v170 = v33;
  *((_BYTE *)v169 + v31 + 1) = 0;
  v172[0] = &v173;
  if ( v169 == &v171 )
  {
    v173 = _mm_load_si128(&v171);
  }
  else
  {
    v172[0] = v169;
    v173.m128i_i64[0] = v171.m128i_i64[0];
  }
  v35 = (void *)v170;
  v170 = 0;
  v169 = &v171;
  v172[1] = v35;
  v161 = v35;
  v171.m128i_i8[0] = 0;
  v36 = j__strlen("'");
  if ( v36 > 0x7FFFFFFFFFFFFFFFLL - (__int64)v161 )
LABEL_210:
    std::__throw_length_error("basic_string::append");
  v37 = (__m128i *)sub_9CA820(v172, "'", v36);
  v174 = &v176;
  if ( (__m128i *)v37->m128i_i64[0] == &v37[1] )
  {
    v176 = _mm_loadu_si128(v37 + 1);
  }
  else
  {
    v174 = (void *)v37->m128i_i64[0];
    v176.m128i_i64[0] = v37[1].m128i_i64[0];
  }
  v175 = v37->m128i_i64[1];
  v37->m128i_i64[0] = (__int64)v37[1].m128i_i64;
  v37->m128i_i64[1] = 0;
  v37[1].m128i_i8[0] = 0;
  LOWORD(v183) = 260;
  v177[0] = "__ARM_ARCH_PROFILE";
  v179 = (char *)&v174;
  v178 = 259;
  sub_10160F0(
    a3,
    (__int64)v177,
    (__int64)&v179,
    (__int64)"__ARM_ARCH_PROFILE",
    v38,
    v39,
    (char)v184,
    v185,
    v186,
    v187,
    v188);
  if ( v174 != &v176 )
    operator delete(v174);
  if ( v172[0] != &v173 )
    operator delete(v172[0]);
  if ( v169 != &v171 )
    operator delete(v169);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_64BIT_STATE";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 257, v40, v41, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  v179 = "1";
  LOWORD(v183) = 259;
  v178 = 259;
  v177[0] = "__ARM_PCS_AAPCS64";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v42, 257, 259, (char)v184, v185, v186, v187, 1u);
  LOWORD(v183) = 259;
  v177[0] = "__ARM_ARCH_ISA_A64";
  LOWORD(v188) = 257;
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v43, v44, v45, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_CLZ";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v46, v47, v48, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_FMA";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v49, v50, v51, (char)v184, v185, v186, v187, 1u);
  v179 = "0xF";
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_LDREX";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 257, v52, v53, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  v179 = "1";
  LOWORD(v183) = 259;
  v178 = 259;
  v177[0] = "__ARM_FEATURE_IDIV";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v54, 257, 259, (char)v184, v185, v186, v187, 1u);
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_DIV";
  LOWORD(v188) = 257;
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v55, v56, v57, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_NUMERIC_MAXMIN";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v58, v59, v60, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_DIRECTED_ROUNDING";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v61, v62, v63, (char)v184, v185, v186, v187, 1u);
  v179 = "4";
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_ALIGN_MAX_STACK_PWR";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 257, v64, v65, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_STATE_ZA";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v66, 257, 259, (char)v184, v185, v186, v187, 1u);
  v179 = "1";
  v177[0] = "__ARM_STATE_ZT0";
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v67, v68, v69, (char)v184, v185, v186, v187, 1u);
  if ( (*(_BYTE *)(v7 + 512) & 1) != 0 )
  {
    LOWORD(v188) = 257;
    v179 = "0xE";
    LOWORD(v183) = 259;
    v178 = 259;
    v177[0] = "__ARM_FP";
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v70, v71, v72, (char)v184, v185, v186, v187, 1u);
  }
  v179 = "1";
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v178 = 259;
  v177[0] = "__ARM_FP16_FORMAT_IEEE";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v70, 257, 259, (char)v184, v185, v186, v187, 1u);
  v179 = "1";
  v177[0] = "__ARM_FP16_ARGS";
  LOWORD(v188) = 257;
  v178 = 259;
  LOWORD(v183) = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v73, v74, v75, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_NEON_SVE_BRIDGE";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v76, v77, v78, (char)v184, v185, v186, v187, 1u);
  if ( (*(_BYTE *)(a2 + 45) & 0x10) != 0 )
  {
    LOWORD(v183) = 259;
    v178 = 259;
    LOWORD(v188) = 257;
    v179 = "1";
    v177[0] = "__ARM_FP_FAST";
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, 257, v80, v81, (char)v184, v185, v186, v187, 1u);
  }
  LOWORD(v188) = 257;
  v82 = 4;
  v83 = *(_WORD *)(a2 + 46);
  if ( (v83 & 0x780) != 0 )
    v82 = (v83 >> 7) & 0xF;
  v178 = 265;
  v179 = "__ARM_SIZEOF_WCHAR_T";
  LODWORD(v177[0]) = v82;
  LOWORD(v183) = 259;
  sub_10160F0(a3, (__int64)&v179, (__int64)v177, v79, v80, v81, (char)v184, v185, v186, v187, v188);
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  v88 = "1";
  if ( (*(_BYTE *)(a2 + 47) & 0x10) == 0 )
    v88 = "4";
  v179 = v88;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_SIZEOF_MINIMAL_ENUM";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v84, v85, v86, (char)v184, v185, v186, v187, v188);
  v92 = *(_DWORD *)(v7 + 512);
  if ( (v92 & 2) != 0 )
  {
    LOWORD(v188) = 257;
    LOWORD(v183) = 259;
    v177[0] = "__ARM_NEON";
    v178 = 259;
    v179 = "1";
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, 257, 259, (char)v184, v185, v186, v187, 1u);
    v87 = (unsigned int *)v177;
    LOWORD(v183) = 259;
    v179 = "0xE";
    v177[0] = "__ARM_NEON_FP";
    v178 = 259;
    LOWORD(v188) = 257;
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v155, v156, v157, (char)v184, v185, v186, v187, 1u);
    v92 = *(_DWORD *)(v7 + 512);
  }
  if ( (v92 & 4) != 0 )
  {
    LOWORD(v183) = 259;
    v87 = (unsigned int *)v177;
    v178 = 259;
    LOWORD(v188) = 257;
    v179 = "1";
    v177[0] = "__ARM_FEATURE_SVE";
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, 257, v90, v91, (char)v184, v185, v186, v187, 1u);
  }
  if ( *(_BYTE *)(v7 + 532) )
  {
    v87 = (unsigned int *)v177;
    LOWORD(v188) = 257;
    LOWORD(v183) = 259;
    v178 = 259;
    v179 = "1";
    v177[0] = "__ARM_FEATURE_SVE2";
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  }
  if ( *(_BYTE *)(v7 + 533) )
  {
    v87 = (unsigned int *)v177;
    LOWORD(v188) = 257;
    LOWORD(v183) = 259;
    v177[0] = "__ARM_FEATURE_SVE2p1";
    v179 = "1";
    v178 = 259;
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  }
  if ( !*(_BYTE *)(v7 + 532)
    || *(_BYTE *)(v7 + 534)
    && (v87 = (unsigned int *)v177,
        LOWORD(v188) = 257,
        v177[0] = "__ARM_FEATURE_SVE2_AES",
        v179 = "1",
        LOWORD(v183) = 259,
        v178 = 259,
        sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u),
        !*(_BYTE *)(v7 + 532))
    || *(_BYTE *)(v7 + 538)
    && (LOWORD(v188) = 257,
        v87 = (unsigned int *)v177,
        v179 = "1",
        LOWORD(v183) = 259,
        v177[0] = "__ARM_FEATURE_SVE2_BITPERM",
        v178 = 259,
        sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, 257, 259, (char)v184, v185, v186, v187, 1u),
        !*(_BYTE *)(v7 + 532))
    || *(_BYTE *)(v7 + 535)
    && (LOWORD(v183) = 259,
        v87 = (unsigned int *)v177,
        v178 = 259,
        LOWORD(v188) = 257,
        v179 = "1",
        v177[0] = "__ARM_FEATURE_SVE2_SHA3",
        sub_10160F0(a3, (__int64)v177, (__int64)&v179, 257, v90, v91, (char)v184, v185, v186, v187, 1u),
        !*(_BYTE *)(v7 + 532))
    || !*(_BYTE *)(v7 + 536) )
  {
    if ( *(_BYTE *)(v7 + 537) )
      goto LABEL_170;
LABEL_52:
    if ( *(_BYTE *)(v7 + 552) )
      goto LABEL_171;
LABEL_53:
    if ( *(_BYTE *)(v7 + 553) )
      goto LABEL_172;
LABEL_54:
    if ( *(_BYTE *)(v7 + 558) )
      goto LABEL_173;
LABEL_55:
    if ( *(_BYTE *)(v7 + 556) )
      goto LABEL_174;
LABEL_56:
    if ( *(_BYTE *)(v7 + 557) )
      goto LABEL_175;
LABEL_57:
    if ( *(_BYTE *)(v7 + 559) )
      goto LABEL_176;
LABEL_58:
    if ( *(_BYTE *)(v7 + 560) )
      goto LABEL_177;
LABEL_59:
    if ( *(_BYTE *)(v7 + 561) )
      goto LABEL_178;
LABEL_60:
    if ( *(_BYTE *)(v7 + 562) )
      goto LABEL_179;
LABEL_61:
    if ( *(_BYTE *)(v7 + 563) )
      goto LABEL_180;
LABEL_62:
    if ( *(_BYTE *)(v7 + 564) )
      goto LABEL_181;
LABEL_63:
    if ( *(_BYTE *)(v7 + 565) )
      goto LABEL_182;
LABEL_64:
    if ( *(_BYTE *)(v7 + 566) )
      goto LABEL_183;
LABEL_65:
    if ( *(_BYTE *)(v7 + 567) )
      goto LABEL_184;
LABEL_66:
    if ( *(_BYTE *)(v7 + 516) )
      goto LABEL_185;
LABEL_67:
    if ( *(_BYTE *)(v7 + 517) )
      goto LABEL_186;
    goto LABEL_68;
  }
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v178 = 259;
  v179 = "1";
  v177[0] = "__ARM_FEATURE_SVE2_SM4";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 537) )
    goto LABEL_52;
LABEL_170:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_SVE_B16B16";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 552) )
    goto LABEL_53;
LABEL_171:
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_SME";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, 257, 259, (char)v184, v185, v186, v187, 1u);
  v87 = (unsigned int *)v177;
  v179 = "1";
  v177[0] = "__ARM_FEATURE_LOCALLY_STREAMING";
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v143, v144, v145, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 553) )
    goto LABEL_54;
LABEL_172:
  LOWORD(v183) = 259;
  v87 = (unsigned int *)v177;
  v178 = 259;
  LOWORD(v188) = 257;
  v179 = "1";
  v177[0] = "__ARM_FEATURE_SME2";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 257, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 558) )
    goto LABEL_55;
LABEL_173:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v178 = 259;
  v179 = "1";
  v177[0] = "__ARM_FEATURE_SME2p1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 556) )
    goto LABEL_56;
LABEL_174:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_SME_F16F16";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 557) )
    goto LABEL_57;
LABEL_175:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  v177[0] = "__ARM_FEATURE_SME_B16B16";
  v179 = "1";
  LOWORD(v183) = 259;
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 559) )
    goto LABEL_58;
LABEL_176:
  LOWORD(v188) = 257;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_FP8";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, 257, 259, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 560) )
    goto LABEL_59;
LABEL_177:
  LOWORD(v183) = 259;
  v87 = (unsigned int *)v177;
  v178 = 259;
  LOWORD(v188) = 257;
  v179 = "1";
  v177[0] = "__ARM_FEATURE_FP8FMA";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 257, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 561) )
    goto LABEL_60;
LABEL_178:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v178 = 259;
  v179 = "1";
  v177[0] = "__ARM_FEATURE_FP8DOT2";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 562) )
    goto LABEL_61;
LABEL_179:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_FP8DOT4";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 563) )
    goto LABEL_62;
LABEL_180:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  v177[0] = "__ARM_FEATURE_SSVE_FP8DOT2";
  v179 = "1";
  LOWORD(v183) = 259;
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 564) )
    goto LABEL_63;
LABEL_181:
  LOWORD(v188) = 257;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_SSVE_FP8DOT4";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, 257, 259, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 565) )
    goto LABEL_64;
LABEL_182:
  LOWORD(v183) = 259;
  v87 = (unsigned int *)v177;
  v178 = 259;
  LOWORD(v188) = 257;
  v179 = "1";
  v177[0] = "__ARM_FEATURE_SSVE_FP8FMA";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 257, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 566) )
    goto LABEL_65;
LABEL_183:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v178 = 259;
  v179 = "1";
  v177[0] = "__ARM_FEATURE_SME_F8F32";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 567) )
    goto LABEL_66;
LABEL_184:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_SME_F8F16";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 516) )
    goto LABEL_67;
LABEL_185:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  v177[0] = "__ARM_FEATURE_CRC32";
  v179 = "1";
  LOWORD(v183) = 259;
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( *(_BYTE *)(v7 + 517) )
  {
LABEL_186:
    LOWORD(v188) = 257;
    v87 = (unsigned int *)v177;
    v179 = "1";
    LOWORD(v183) = 259;
    v177[0] = "__ARM_FEATURE_CSSC";
    v178 = 259;
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, 257, 259, (char)v184, v185, v186, v187, 1u);
    if ( *(_BYTE *)(v7 + 580) )
      goto LABEL_187;
    goto LABEL_69;
  }
LABEL_68:
  if ( *(_BYTE *)(v7 + 580) )
  {
LABEL_187:
    LOWORD(v188) = 257;
    v179 = "3";
    goto LABEL_189;
  }
LABEL_69:
  if ( *(_BYTE *)(v7 + 546) )
  {
    v179 = "1";
    LOWORD(v188) = 257;
LABEL_189:
    v87 = (unsigned int *)v177;
    LOWORD(v183) = 259;
    v177[0] = "__ARM_FEATURE_RCPC";
    v178 = 259;
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, 259, v90, v91, (char)v184, v185, v186, v187, v188);
    if ( !*(_BYTE *)(v7 + 578) )
      goto LABEL_71;
    goto LABEL_190;
  }
  if ( !*(_BYTE *)(v7 + 578) )
    goto LABEL_71;
LABEL_190:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__HAVE_FUNCTION_MULTI_VERSIONING";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
LABEL_71:
  v93 = *(_BYTE *)(v7 + 519);
  if ( !*(_BYTE *)(v7 + 518) )
    goto LABEL_72;
  if ( v93 )
  {
    v87 = (unsigned int *)v177;
    LOWORD(v188) = 257;
    LOWORD(v183) = 259;
    v177[0] = "__ARM_FEATURE_CRYPTO";
    v179 = "1";
    v178 = 259;
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
    if ( !*(_BYTE *)(v7 + 518) )
    {
      v93 = *(_BYTE *)(v7 + 519);
LABEL_72:
      if ( !v93 )
        goto LABEL_73;
      goto LABEL_158;
    }
  }
  v177[0] = "__ARM_FEATURE_AES";
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  v179 = "1";
  LOWORD(v183) = 259;
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 519) )
  {
LABEL_73:
    if ( !*(_BYTE *)(v7 + 520) )
      goto LABEL_74;
    goto LABEL_159;
  }
LABEL_158:
  LOWORD(v188) = 257;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_SHA2";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, 259, 259, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 520) )
  {
LABEL_74:
    if ( !*(_BYTE *)(v7 + 521) )
      goto LABEL_75;
    goto LABEL_160;
  }
LABEL_159:
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_SHA3";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  v178 = 259;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_SHA512";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 259, v138, v139, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 521) )
  {
LABEL_75:
    if ( !*(_BYTE *)(v7 + 527) )
      goto LABEL_76;
    goto LABEL_161;
  }
LABEL_160:
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_SM3";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_SM4";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v140, v141, v142, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 527) )
  {
LABEL_76:
    if ( !*(_BYTE *)(v7 + 582) )
      goto LABEL_77;
    goto LABEL_162;
  }
LABEL_161:
  LOWORD(v188) = 257;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_PAUTH";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, 259, 259, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 582) )
  {
LABEL_77:
    if ( !*(_BYTE *)(v7 + 571) )
      goto LABEL_78;
LABEL_163:
    v87 = (unsigned int *)v177;
    LOWORD(v188) = 257;
    LOWORD(v183) = 259;
    v177[0] = "__ARM_FEATURE_BTI";
    v179 = "1";
    v178 = 259;
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
    if ( (*(_BYTE *)(v7 + 393) & 0x10) == 0 )
      goto LABEL_79;
    goto LABEL_164;
  }
LABEL_162:
  LOWORD(v188) = 257;
  v178 = 259;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_PAUTH_LR";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 259, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( *(_BYTE *)(v7 + 571) )
    goto LABEL_163;
LABEL_78:
  if ( (*(_BYTE *)(v7 + 393) & 0x10) == 0 )
    goto LABEL_79;
LABEL_164:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_UNALIGNED";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
LABEL_79:
  v94 = *(_BYTE *)(v7 + 522);
  if ( (*(_BYTE *)(v7 + 512) & 2) != 0 )
  {
    if ( !v94 )
      goto LABEL_81;
    v177[0] = "__ARM_FEATURE_FP16_VECTOR_ARITHMETIC";
    v87 = (unsigned int *)v177;
    LOWORD(v188) = 257;
    v179 = "1";
    LOWORD(v183) = 259;
    v178 = 259;
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
    v94 = *(_BYTE *)(v7 + 522);
  }
  if ( !v94 )
  {
LABEL_81:
    if ( !*(_BYTE *)(v7 + 523) )
      goto LABEL_82;
    goto LABEL_119;
  }
  LOWORD(v188) = 257;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_FP16_SCALAR_ARITHMETIC";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, 259, 259, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 523) )
  {
LABEL_82:
    if ( !*(_BYTE *)(v7 + 525) )
      goto LABEL_83;
    goto LABEL_120;
  }
LABEL_119:
  LOWORD(v188) = 257;
  v178 = 259;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_DOTPROD";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 259, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 525) )
  {
LABEL_83:
    if ( !*(_BYTE *)(v7 + 526) )
      goto LABEL_84;
    goto LABEL_121;
  }
LABEL_120:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_MEMORY_TAGGING";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 526) )
  {
LABEL_84:
    if ( !*(_BYTE *)(v7 + 530) )
      goto LABEL_85;
    goto LABEL_122;
  }
LABEL_121:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_TME";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 530) )
  {
LABEL_85:
    if ( !*(_BYTE *)(v7 + 541) )
      goto LABEL_86;
    goto LABEL_123;
  }
LABEL_122:
  LOWORD(v188) = 257;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_MATMUL_INT8";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 541) )
  {
LABEL_86:
    if ( !*(_BYTE *)(v7 + 531) )
      goto LABEL_87;
    goto LABEL_124;
  }
LABEL_123:
  LOWORD(v188) = 257;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_ATOMICS";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, 259, 259, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 531) )
  {
LABEL_87:
    v95 = *(_DWORD *)(v7 + 512);
    v96 = v95;
    if ( (v95 & 4) == 0 )
      goto LABEL_88;
    goto LABEL_127;
  }
LABEL_124:
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_BF16";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_BF16_VECTOR_ARITHMETIC";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v106, v107, v108, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_BF16_FORMAT_ALTERNATIVE";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v109, v110, v111, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  v177[0] = "__ARM_FEATURE_BF16_SCALAR_ARITHMETIC";
  v178 = 259;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 259, v112, v113, (char)v184, v185, v186, v187, 1u);
  v95 = *(_DWORD *)(v7 + 512);
  v96 = v95;
  if ( (v95 & 4) == 0 )
    goto LABEL_88;
  if ( *(_BYTE *)(v7 + 531) )
  {
    LOWORD(v188) = 257;
    v87 = (unsigned int *)v177;
    v177[0] = "__ARM_FEATURE_SVE_BF16";
    v179 = "1";
    LOWORD(v183) = 259;
    v178 = 259;
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, 259, 259, (char)v184, v185, v186, v187, 1u);
    v95 = *(_DWORD *)(v7 + 512);
    v96 = v95;
    if ( (v95 & 4) == 0 )
      goto LABEL_88;
  }
LABEL_127:
  if ( *(_BYTE *)(v7 + 539)
    && (LOWORD(v188) = 257,
        v177[0] = "__ARM_FEATURE_SVE_MATMUL_FP64",
        v178 = 259,
        v87 = (unsigned int *)v177,
        v179 = "1",
        LOWORD(v183) = 259,
        sub_10160F0(a3, (__int64)v177, (__int64)&v179, 259, v90, v91, (char)v184, v185, v186, v187, 1u),
        v95 = *(_DWORD *)(v7 + 512),
        v96 = v95,
        (v95 & 4) == 0)
    || *(_BYTE *)(v7 + 540)
    && (v87 = (unsigned int *)v177,
        LOWORD(v188) = 257,
        LOWORD(v183) = 259,
        v177[0] = "__ARM_FEATURE_SVE_MATMUL_FP32",
        v178 = 259,
        v179 = "1",
        sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u),
        v95 = *(_DWORD *)(v7 + 512),
        v96 = v95,
        (v95 & 4) == 0)
    || (v96 = v95, !*(_BYTE *)(v7 + 530)) )
  {
LABEL_88:
    if ( (v96 & 2) == 0 )
      goto LABEL_91;
    goto LABEL_89;
  }
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_SVE_MATMUL_INT8";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( (*(_DWORD *)(v7 + 512) & 2) == 0 )
    goto LABEL_91;
LABEL_89:
  if ( *(_BYTE *)(v7 + 524) )
  {
    LOWORD(v188) = 257;
    v87 = (unsigned int *)v177;
    v179 = "1";
    LOWORD(v183) = 259;
    v177[0] = "__ARM_FEATURE_FP16_FML";
    v178 = 259;
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  }
LABEL_91:
  if ( ((*(_BYTE *)(a2 + 213) >> 4) & 3) == 0 )
    goto LABEL_92;
  v134 = 10 - ((*(_BYTE *)(a2 + 213) & 0x40) == 0);
  v135 = 2 - ((*(_BYTE *)(a2 + 213) & 0x40) == 0);
  if ( ((*(_BYTE *)(a2 + 213) >> 4) & 3) == 2 )
  {
    v134 = 14 - ((*(_BYTE *)(a2 + 213) & 0x40) == 0);
    v135 = 6 - ((*(_BYTE *)(a2 + 213) & 0x40) == 0);
  }
  v136 = (*(_BYTE *)(a2 + 172) & 2) == 0;
  LOWORD(v188) = 257;
  if ( !v136 )
    v135 = v134;
  sub_D67330(
    (__int64 *)&v174,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    16,
    (__int64)"%u",
    v135);
  v87 = (unsigned int *)v177;
  v177[0] = "__ARM_FEATURE_PAC_DEFAULT";
  LOWORD(v183) = 260;
  v179 = (char *)&v174;
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v137, 260, 259, (char)v184, v185, v186, v187, v188);
  if ( v174 == &v176 )
  {
LABEL_92:
    v97 = *(_BYTE *)(a2 + 172);
    if ( (v97 & 1) != 0 )
      goto LABEL_149;
LABEL_93:
    if ( (v97 & 4) != 0 )
      goto LABEL_150;
LABEL_94:
    if ( *(_BYTE *)(v7 + 528) )
      goto LABEL_151;
LABEL_95:
    if ( *(_BYTE *)(v7 + 529) )
      goto LABEL_152;
LABEL_96:
    if ( *(_BYTE *)(v7 + 544) )
      goto LABEL_153;
LABEL_97:
    if ( *(_BYTE *)(v7 + 545) )
      goto LABEL_154;
    goto LABEL_98;
  }
  operator delete(v174);
  v97 = *(_BYTE *)(a2 + 172);
  if ( (v97 & 1) == 0 )
    goto LABEL_93;
LABEL_149:
  LOWORD(v188) = 257;
  v178 = 259;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_BTI_DEFAULT";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 259, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( (*(_BYTE *)(a2 + 172) & 4) == 0 )
    goto LABEL_94;
LABEL_150:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_GCS_DEFAULT";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 528) )
    goto LABEL_95;
LABEL_151:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_LS64";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 529) )
    goto LABEL_96;
LABEL_152:
  LOWORD(v188) = 257;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_RNG";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
  if ( !*(_BYTE *)(v7 + 544) )
    goto LABEL_97;
LABEL_153:
  LOWORD(v188) = 257;
  v87 = (unsigned int *)v177;
  v179 = "1";
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_MOPS";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, 259, 259, (char)v184, v185, v186, v187, 1u);
  if ( *(_BYTE *)(v7 + 545) )
  {
LABEL_154:
    LOWORD(v188) = 257;
    v178 = 259;
    v87 = (unsigned int *)v177;
    v179 = "1";
    LOWORD(v183) = 259;
    v177[0] = "__ARM_FEATURE_SYSREG128";
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, 259, v90, v91, (char)v184, v185, v186, v187, 1u);
    if ( !*(_BYTE *)(v7 + 579) )
      goto LABEL_99;
    goto LABEL_155;
  }
LABEL_98:
  if ( !*(_BYTE *)(v7 + 579) )
    goto LABEL_99;
LABEL_155:
  v87 = (unsigned int *)v177;
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__ARM_FEATURE_GCS";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v89, v90, v91, (char)v184, v185, v186, v187, 1u);
LABEL_99:
  v98 = *(_QWORD *)(v7 + 584);
  if ( *(_QWORD *)(v98 + 32) == 9
    && (v99 = 0x2D312E38766D7261LL, v114 = *(_QWORD *)(v98 + 24), *(_QWORD *)v114 == 0x2D312E38766D7261LL)
    && *(_BYTE *)(v114 + 8) == 97
    || (v87 = dword_2B2E400, sub_103BB30(*(_QWORD *)(v7 + 584), (__int64)dword_2B2E400)) )
  {
    sub_103B910(a3, (__int64)v87, v99, v89, v90, v91);
  }
  else if ( sub_103BB30(v98, (__int64)dword_2B2E3A0) || sub_103BB30(v98, (__int64)dword_2B2E340) )
  {
    sub_103BDD0(v7, a2, a3, v100, v101, v102);
  }
  else if ( sub_103BB30(v98, (__int64)dword_2B2E2E0)
         || sub_103BB30(v98, (__int64)dword_2B2E280)
         || sub_103BB30(v98, (__int64)dword_2B2E220)
         || sub_103BB30(v98, (__int64)dword_2B2E1C0)
         || sub_103BB30(v98, (__int64)dword_2B2E160)
         || sub_103BB30(v98, (__int64)dword_2B2E100)
         || sub_103BB30(v98, (__int64)dword_2B2E0A0)
         || sub_103BB30(v98, (__int64)dword_2B2E040)
         || sub_103BB30(v98, (__int64)dword_2B2DFE0)
         || sub_103BB30(v98, (__int64)dword_2B2DF80)
         || sub_103BB30(v98, (__int64)dword_2B2DF20)
         || sub_103BB30(v98, (__int64)dword_2B2DEC0) )
  {
    sub_103BF40(v7, a2, a3, v103, v104, v105);
  }
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v103, v104, v105, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v115, v116, v117, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v118, v119, v120, (char)v184, v185, v186, v187, 1u);
  LOWORD(v183) = 259;
  LOWORD(v188) = 257;
  v177[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
  v178 = 259;
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, 259, v121, v122, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v178 = 259;
  v177[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_16";
  v179 = "1";
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v123, 259, 259, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__FP_FAST_FMA";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v124, v125, v126, (char)v184, v185, v186, v187, 1u);
  LOWORD(v188) = 257;
  LOWORD(v183) = 259;
  v177[0] = "__FP_FAST_FMAF";
  v179 = "1";
  v178 = 259;
  sub_10160F0(a3, (__int64)v177, (__int64)&v179, v127, v128, v129, (char)v184, v185, v186, v187, 1u);
  if ( (*(_BYTE *)(v7 + 512) & 4) != 0 )
  {
    LOWORD(v188) = 257;
    v179 = "2";
    LOWORD(v183) = 259;
    v177[0] = "__ARM_FEATURE_SVE_VECTOR_OPERATORS";
    v178 = 259;
    sub_10160F0(a3, (__int64)v177, (__int64)&v179, v130, 259, 259, (char)v184, v185, v186, v187, 1u);
  }
  v133 = *(_DWORD *)(a2 + 176);
  if ( v133 && v133 == *(_DWORD *)(a2 + 180) )
  {
    LODWORD(v177[0]) = v133 << 7;
    LOWORD(v188) = 257;
    LOWORD(v183) = 259;
    v178 = 265;
    v179 = "__ARM_FEATURE_SVE_BITS";
    sub_10160F0(a3, (__int64)&v179, (__int64)v177, 265, v131, v132, (char)v184, v185, v186, v187, 1u);
  }
  if ( v164 != v166 )
    operator delete(v164);
}

