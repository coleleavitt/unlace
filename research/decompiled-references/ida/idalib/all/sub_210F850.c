__int64 __fastcall sub_210F850(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // eax
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  unsigned int v30; // r12d
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __m128d v33; // xmm0
  __m128d v34; // xmm1
  unsigned __int64 v35; // rax
  __int64 v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rax
  __int64 v44; // rdi
  unsigned __int64 v45; // rax
  __int64 v46; // rdi
  unsigned __int64 v47; // rax
  int v48; // eax
  bool v49; // di
  unsigned __int64 v50; // rax
  __int64 v51; // rdi
  unsigned __int64 v52; // rax
  __int64 v53; // rdi
  unsigned __int64 v54; // rax
  __int64 v55; // rdi
  unsigned __int64 v56; // rax
  __int64 v57; // rdi
  unsigned __int64 v58; // rax
  __int64 v59; // rdi
  unsigned __int64 v60; // rax
  __int64 v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // rdi
  unsigned __int64 v64; // rax
  __int64 v65; // rdi
  unsigned __int64 v66; // rax
  __int64 v67; // rdi
  unsigned __int64 v68; // rax
  __int64 v69; // rdi
  unsigned __int64 v70; // rax
  __int64 v71; // rdi
  unsigned __int64 v72; // rax
  __int64 v73; // rdi
  unsigned __int64 v74; // rax
  __int64 v75; // rdi
  unsigned __int64 v76; // rax
  __int64 v77; // rdi
  unsigned __int64 v78; // rax
  __int64 v79; // rdi
  unsigned __int64 v80; // rax
  __int64 v81; // rdi
  unsigned __int64 v82; // rax
  __int64 v83; // rdi
  unsigned __int64 v84; // rax
  __int64 v85; // rdi
  unsigned __int64 v86; // rax
  __int64 v87; // rdi
  unsigned __int64 v88; // rax
  __int64 v89; // rdi
  unsigned __int64 v90; // rax
  __int64 v91; // rdi
  unsigned __int64 v92; // rax
  __int64 v93; // rdi
  unsigned __int64 v94; // rax
  __int64 v95; // rdi
  unsigned __int64 v96; // rax
  __int64 v97; // rdi
  unsigned __int64 v98; // rax
  __int64 v99; // rdi
  unsigned __int64 v100; // rax
  __int64 v101; // rdi
  unsigned __int64 v102; // rax
  __int64 v103; // rdi
  unsigned __int64 v104; // rax
  __int64 v105; // rdi
  unsigned __int64 v106; // rax
  __int64 v107; // rdi
  unsigned __int64 v108; // rax
  __int64 v109; // rdi
  unsigned __int64 v110; // rax
  __int64 v111; // rbp
  __int64 result; // rax
  int v113; // eax
  __int64 v114; // r12
  size_t v115; // rdx
  unsigned __int64 v116; // rax
  __int64 v117; // r12
  size_t v118; // rdx
  __int64 v119; // rbp
  unsigned __int64 v120; // rax
  __int64 v121; // r12
  size_t v122; // rdx
  __int64 v123; // rbp
  unsigned __int64 v124; // rax
  __int64 v125; // r12
  size_t v126; // rdx
  __int64 v127; // rbp
  unsigned __int64 v128; // rax
  __int64 v129; // r12
  size_t v130; // rdx
  __int64 v131; // rbp
  unsigned __int64 v132; // rax
  __int64 v133; // r12
  size_t v134; // rdx
  __int64 v135; // rbp
  unsigned __int64 v136; // rax
  __int64 v137; // r12
  size_t v138; // rdx
  __int64 v139; // rbp
  unsigned __int64 v140; // rax
  __int64 v141; // r12
  size_t v142; // rdx
  __int64 v143; // rbp
  unsigned __int64 v144; // rax
  __int64 v145; // r12
  size_t v146; // rdx
  __int64 v147; // rbp
  unsigned __int64 v148; // rax
  __int64 v149; // r12
  size_t v150; // rdx
  __int64 v151; // rbp
  unsigned __int64 v152; // rax
  __int64 v153; // r12
  size_t v154; // rdx
  __int64 v155; // rbp
  unsigned __int64 v156; // rax
  __int64 v157; // rdi
  unsigned __int64 v158; // rax
  __int64 v159; // rdi
  __m128i v160; // xmm0
  char v161; // al
  __m128i v162[2]; // [rsp+10h] [rbp-20h] BYREF

  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 464) = sub_21097F0(
                            *(_QWORD *)(a1 + 896),
                            (__int64)"__TEXT",
                            6,
                            (__int64)"__eh_frame",
                            10,
                            1744830475,
                            0,
                            4,
                            nullptr);
  v3 = (unsigned int)a2[11];
  if ( (unsigned int)v3 <= 0x1F )
  {
    v4 = 4160750114LL;
    if ( _bittest64(&v4, v3) )
    {
      if ( ((a2[8] - 3) & 0xFFFFFFFD) == 0 || a2[12] == 31 )
        *(_BYTE *)(a1 + 9) = 1;
    }
  }
  v5 = sub_21006B0(*(_QWORD *)(a1 + 896));
  switch ( v5 )
  {
    case 1:
      *(_BYTE *)(a1 + 10) = 1;
      break;
    case 2:
      v161 = 1;
      if ( a2[9] != 26 )
        v161 = *(_BYTE *)(a1 + 9);
      *(_BYTE *)(a1 + 10) = v161;
      break;
    case 0:
      *(_BYTE *)(a1 + 10) = 0;
      break;
  }
  *(_DWORD *)(a1 + 12) = 16;
  v6 = sub_21097F0(*(_QWORD *)(a1 + 896), (__int64)"__TEXT", 6, (__int64)"__text", 6, 0x80000000, 0, 2, nullptr);
  v7 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 24) = v6;
  v8 = sub_21097F0(v7, (__int64)"__DATA", 6, (__int64)"__data", 6, 0, 0, 19, nullptr);
  *(_QWORD *)(a1 + 40) = 0;
  v9 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 32) = v8;
  v10 = sub_21097F0(v9, (__int64)"__DATA", 6, (__int64)"__thread_data", 13, 17, 0, 19, nullptr);
  v11 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 424) = v10;
  v12 = sub_21097F0(v11, (__int64)"__DATA", 6, (__int64)"__thread_bss", 12, 18, 0, 12, nullptr);
  v13 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 432) = v12;
  v14 = sub_21097F0(v13, (__int64)"__DATA", 6, (__int64)"__thread_vars", 13, 19, 0, 19, nullptr);
  v15 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 544) = v14;
  v16 = sub_21097F0(v15, (__int64)"__DATA", 6, (__int64)"__thread_init", 13, 21, 0, 19, nullptr);
  v17 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 552) = v16;
  v18 = sub_21097F0(v17, (__int64)"__TEXT", 6, (__int64)"__cstring", 9, 2, 0, 5, nullptr);
  v19 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 560) = v18;
  v20 = sub_21097F0(v19, (__int64)"__TEXT", 6, (__int64)"__ustring", 9, 0, 0, 6, nullptr);
  v21 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 568) = v20;
  v22 = sub_21097F0(v21, (__int64)"__TEXT", 6, (__int64)"__literal4", 10, 3, 0, 8, nullptr);
  v23 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 632) = v22;
  v24 = sub_21097F0(v23, (__int64)"__TEXT", 6, (__int64)"__literal8", 10, 4, 0, 9, nullptr);
  v25 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 640) = v24;
  v26 = sub_21097F0(v25, (__int64)"__TEXT", 6, (__int64)"__literal16", 11, 14, 0, 10, nullptr);
  v27 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 648) = v26;
  v28 = sub_21097F0(v27, (__int64)"__TEXT", 6, (__int64)"__const", 7, 0, 0, 4, nullptr);
  v29 = *(_QWORD *)(a1 + 896);
  v30 = a2[8] & 0xFFFFFFFD;
  *(_QWORD *)(a1 + 48) = v28;
  v31 = sub_21097F0(v29, (__int64)"__DATA", 6, (__int64)"__const", 7, 0, 0, 20, nullptr);
  *(_QWORD *)(a1 + 592) = v31;
  if ( v30 == 21 )
  {
    v156 = sub_21097F0(
             *(_QWORD *)(a1 + 896),
             (__int64)"__TEXT",
             6,
             (__int64)"__textcoal_nt",
             13,
             -2147483637,
             0,
             2,
             nullptr);
    v157 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)(a1 + 576) = v156;
    v158 = sub_21097F0(v157, (__int64)"__TEXT", 6, (__int64)"__const_coal", 12, 11, 0, 4, nullptr);
    v159 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)(a1 + 584) = v158;
    v162[0].m128i_i64[0] = sub_21097F0(v159, (__int64)"__DATA", 6, (__int64)"__datacoal_nt", 13, 11, 0, 19, nullptr);
    v160 = _mm_loadl_epi64(v162);
    *(__m128i *)(a1 + 600) = _mm_unpacklo_epi64(v160, v160);
  }
  else
  {
    v32 = *(_QWORD *)(a1 + 32);
    v33 = (__m128d)_mm_loadu_si128((const __m128i *)(a1 + 24));
    *(_QWORD *)(a1 + 608) = v31;
    v34 = (__m128d)_mm_loadu_si128((const __m128i *)(a1 + 40));
    *(_QWORD *)(a1 + 600) = v32;
    *(__m128d *)(a1 + 576) = _mm_shuffle_pd(v33, v34, 2);
  }
  v35 = sub_21097F0(*(_QWORD *)(a1 + 896), (__int64)"__DATA", 6, (__int64)"__common", 8, 1, 0, 15, nullptr);
  v36 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 616) = v35;
  v37 = sub_21097F0(v36, (__int64)"__DATA", 6, (__int64)"__bss", 5, 1, 0, 15, nullptr);
  v38 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 624) = v37;
  v39 = sub_21097F0(v38, (__int64)"__DATA", 6, (__int64)"__la_symbol_ptr", 15, 7, 0, 0, nullptr);
  v40 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 656) = v39;
  v41 = sub_21097F0(v40, (__int64)"__DATA", 6, (__int64)"__nl_symbol_ptr", 15, 6, 0, 0, nullptr);
  v42 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 664) = v41;
  v43 = sub_21097F0(v42, (__int64)"__DATA", 6, (__int64)"__thread_ptr", 12, 20, 0, 0, nullptr);
  v44 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 672) = v43;
  v45 = sub_21097F0(v44, (__int64)"__DATA", 6, (__int64)"__llvm_addrsig", 14, 0, 0, 19, nullptr);
  v46 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 680) = v45;
  v47 = sub_21097F0(v46, (__int64)"__TEXT", 6, (__int64)"__gcc_except_tab", 16, 0, 0, 20, nullptr);
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 56) = v47;
  v48 = a2[11];
  *(_OWORD *)(a1 + 392) = 0;
  v49 = v48 == 5;
  if ( (v48 & 0xFFFFFFF7) != 1 && (unsigned int)(v48 - 27) > 4 && v48 != 5 )
    goto LABEL_22;
  if ( ((a2[8] - 3) & 0xFFFFFFFD) != 0 && a2[9] != 26 )
  {
    if ( (v48 & 0xFFFFFFF7) != 1 )
    {
LABEL_18:
      if ( (v48 != 27 && !v49 || (unsigned int)(a2[8] - 37) > 1) && a2[12] != 31 && v48 != 31 )
        goto LABEL_22;
      goto LABEL_25;
    }
    if ( (unsigned __int8)sub_22B7F30(a2, 10, 6, 0) )
    {
      v48 = a2[11];
      v49 = v48 == 5;
      goto LABEL_18;
    }
  }
LABEL_25:
  *(_QWORD *)(a1 + 64) = sub_21097F0(
                           *(_QWORD *)(a1 + 896),
                           (__int64)"__LD",
                           4,
                           (__int64)"__compact_unwind",
                           16,
                           0x2000000,
                           0,
                           4,
                           nullptr);
  v113 = a2[8];
  if ( (unsigned int)(v113 - 37) <= 1 )
    goto LABEL_26;
  if ( ((v113 - 3) & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)(a1 + 16) = 50331648;
    goto LABEL_22;
  }
  if ( v113 == 1 || v113 == 35 )
LABEL_26:
    *(_DWORD *)(a1 + 16) = 0x4000000;
LABEL_22:
  v50 = sub_21097F0(
          *(_QWORD *)(a1 + 896),
          (__int64)"__DWARF",
          7,
          (__int64)"__debug_names",
          13,
          0x2000000,
          0,
          0,
          "debug_names_begin");
  v51 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 192) = v50;
  v52 = sub_21097F0(v51, (__int64)"__DWARF", 7, (__int64)"__apple_names", 13, 0x2000000, 0, 0, "names_begin");
  v53 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 200) = v52;
  v54 = sub_21097F0(v53, (__int64)"__DWARF", 7, (__int64)"__apple_objc", 12, 0x2000000, 0, 0, "objc_begin");
  v55 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 208) = v54;
  v56 = sub_21097F0(v55, (__int64)"__DWARF", 7, (__int64)"__apple_namespac", 16, 0x2000000, 0, 0, "namespac_begin");
  v57 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 216) = v56;
  v58 = sub_21097F0(v57, (__int64)"__DWARF", 7, (__int64)"__apple_types", 13, 0x2000000, 0, 0, "types_begin");
  v59 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 224) = v58;
  v60 = sub_21097F0(v59, (__int64)"__DWARF", 7, (__int64)"__swift_ast", 11, 0x2000000, 0, 0, nullptr);
  v61 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 384) = v60;
  v62 = sub_21097F0(v61, (__int64)"__DWARF", 7, (__int64)"__debug_abbrev", 14, 0x2000000, 0, 0, "section_abbrev");
  v63 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 80) = v62;
  v64 = sub_21097F0(v63, (__int64)"__DWARF", 7, (__int64)"__debug_info", 12, 0x2000000, 0, 0, "section_info");
  v65 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 88) = v64;
  v66 = sub_21097F0(v65, (__int64)"__DWARF", 7, (__int64)"__debug_line", 12, 0x2000000, 0, 0, "section_line");
  v67 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 96) = v66;
  v68 = sub_21097F0(v67, (__int64)"__DWARF", 7, (__int64)"__debug_line_str", 16, 0x2000000, 0, 0, "section_line_str");
  v69 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 104) = v68;
  v70 = sub_21097F0(v69, (__int64)"__DWARF", 7, (__int64)"__debug_frame", 13, 0x2000000, 0, 0, "section_frame");
  v71 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 112) = v70;
  v72 = sub_21097F0(v71, (__int64)"__DWARF", 7, (__int64)"__debug_pubnames", 16, 0x2000000, 0, 0, nullptr);
  v73 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 184) = v72;
  v74 = sub_21097F0(v73, (__int64)"__DWARF", 7, (__int64)"__debug_pubtypes", 16, 0x2000000, 0, 0, nullptr);
  v75 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 120) = v74;
  v76 = sub_21097F0(v75, (__int64)"__DWARF", 7, (__int64)"__debug_gnu_pubn", 16, 0x2000000, 0, 0, nullptr);
  v77 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 368) = v76;
  v78 = sub_21097F0(v77, (__int64)"__DWARF", 7, (__int64)"__debug_gnu_pubt", 16, 0x2000000, 0, 0, nullptr);
  v79 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 376) = v78;
  v80 = sub_21097F0(v79, (__int64)"__DWARF", 7, (__int64)"__debug_str", 11, 0x2000000, 0, 0, "info_string");
  v81 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 136) = v80;
  v82 = sub_21097F0(v81, (__int64)"__DWARF", 7, (__int64)"__debug_str_offs", 16, 0x2000000, 0, 0, "section_str_off");
  v83 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 304) = v82;
  v84 = sub_21097F0(v83, (__int64)"__DWARF", 7, (__int64)"__debug_addr", 12, 0x2000000, 0, 0, "section_info");
  v85 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 312) = v84;
  v86 = sub_21097F0(v85, (__int64)"__DWARF", 7, (__int64)"__debug_loc", 11, 0x2000000, 0, 0, "section_debug_loc");
  v87 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 144) = v86;
  v88 = sub_21097F0(v87, (__int64)"__DWARF", 7, (__int64)"__debug_loclists", 16, 0x2000000, 0, 0, "section_debug_loc");
  v89 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 328) = v88;
  v90 = sub_21097F0(v89, (__int64)"__DWARF", 7, (__int64)"__debug_aranges", 15, 0x2000000, 0, 0, nullptr);
  v91 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 152) = v90;
  v92 = sub_21097F0(v91, (__int64)"__DWARF", 7, (__int64)"__debug_ranges", 14, 0x2000000, 0, 0, "debug_range");
  v93 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 160) = v92;
  v94 = sub_21097F0(v93, (__int64)"__DWARF", 7, (__int64)"__debug_rnglists", 16, 0x2000000, 0, 0, "debug_range");
  v95 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 320) = v94;
  v96 = sub_21097F0(v95, (__int64)"__DWARF", 7, (__int64)"__debug_macinfo", 15, 0x2000000, 0, 0, "debug_macinfo");
  v97 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 168) = v96;
  v98 = sub_21097F0(v97, (__int64)"__DWARF", 7, (__int64)"__debug_macro", 13, 0x2000000, 0, 0, "debug_macro");
  v99 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 176) = v98;
  v100 = sub_21097F0(v99, (__int64)"__DWARF", 7, (__int64)"__debug_inlined", 15, 0x2000000, 0, 0, nullptr);
  v101 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 128) = v100;
  v102 = sub_21097F0(v101, (__int64)"__DWARF", 7, (__int64)"__debug_cu_index", 16, 0x2000000, 0, 0, nullptr);
  v103 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 352) = v102;
  v104 = sub_21097F0(v103, (__int64)"__DWARF", 7, (__int64)"__debug_tu_index", 16, 0x2000000, 0, 0, nullptr);
  v105 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 360) = v104;
  v106 = sub_21097F0(v105, (__int64)"__LLVM_STACKMAPS", 16, (__int64)"__llvm_stackmaps", 16, 0, 0, 0, nullptr);
  v107 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 440) = v106;
  v108 = sub_21097F0(v107, (__int64)"__LLVM_FAULTMAPS", 16, (__int64)"__llvm_faultmaps", 16, 0, 0, 0, nullptr);
  v109 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 448) = v108;
  v110 = sub_21097F0(v109, (__int64)"__LLVM", 6, (__int64)"__remarks", 9, 0x2000000, 0, 0, nullptr);
  v111 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 456) = v110;
  if ( *(_QWORD *)(v111 + 16) )
  {
    v114 = *(_QWORD *)(v111 + 8);
    v115 = 0;
    if ( v114 )
      v115 = strlen(*(const char **)(v111 + 8));
    v116 = sub_21097F0(v111, v114, v115, (__int64)"__swift5_fieldmd", 16, 0, 0, 0, nullptr);
    v117 = *(_QWORD *)(a1 + 896);
    v118 = 0;
    *(_QWORD *)(a1 + 800) = v116;
    v119 = *(_QWORD *)(v117 + 8);
    if ( v119 )
      v118 = strlen(*(const char **)(v117 + 8));
    v120 = sub_21097F0(v117, v119, v118, (__int64)"__swift5_assocty", 16, 0, 0, 0, nullptr);
    v121 = *(_QWORD *)(a1 + 896);
    v122 = 0;
    *(_QWORD *)(a1 + 808) = v120;
    v123 = *(_QWORD *)(v121 + 8);
    if ( v123 )
      v122 = strlen(*(const char **)(v121 + 8));
    v124 = sub_21097F0(v121, v123, v122, (__int64)"__swift5_builtin", 16, 0, 0, 0, nullptr);
    v125 = *(_QWORD *)(a1 + 896);
    v126 = 0;
    *(_QWORD *)(a1 + 816) = v124;
    v127 = *(_QWORD *)(v125 + 8);
    if ( v127 )
      v126 = strlen(*(const char **)(v125 + 8));
    v128 = sub_21097F0(v125, v127, v126, (__int64)"__swift5_capture", 16, 0, 0, 0, nullptr);
    v129 = *(_QWORD *)(a1 + 896);
    v130 = 0;
    *(_QWORD *)(a1 + 824) = v128;
    v131 = *(_QWORD *)(v129 + 8);
    if ( v131 )
      v130 = strlen(*(const char **)(v129 + 8));
    v132 = sub_21097F0(v129, v131, v130, (__int64)"__swift5_typeref", 16, 0, 0, 0, nullptr);
    v133 = *(_QWORD *)(a1 + 896);
    v134 = 0;
    *(_QWORD *)(a1 + 832) = v132;
    v135 = *(_QWORD *)(v133 + 8);
    if ( v135 )
      v134 = strlen(*(const char **)(v133 + 8));
    v136 = sub_21097F0(v133, v135, v134, (__int64)"__swift5_reflstr", 16, 0, 0, 0, nullptr);
    v137 = *(_QWORD *)(a1 + 896);
    v138 = 0;
    *(_QWORD *)(a1 + 840) = v136;
    v139 = *(_QWORD *)(v137 + 8);
    if ( v139 )
      v138 = strlen(*(const char **)(v137 + 8));
    v140 = sub_21097F0(v137, v139, v138, (__int64)"__swift5_proto", 14, 0, 0, 0, nullptr);
    v141 = *(_QWORD *)(a1 + 896);
    v142 = 0;
    *(_QWORD *)(a1 + 848) = v140;
    v143 = *(_QWORD *)(v141 + 8);
    if ( v143 )
      v142 = strlen(*(const char **)(v141 + 8));
    v144 = sub_21097F0(v141, v143, v142, (__int64)"__swift5_protos", 15, 0, 0, 0, nullptr);
    v145 = *(_QWORD *)(a1 + 896);
    v146 = 0;
    *(_QWORD *)(a1 + 856) = v144;
    v147 = *(_QWORD *)(v145 + 8);
    if ( v147 )
      v146 = strlen(*(const char **)(v145 + 8));
    v148 = sub_21097F0(v145, v147, v146, (__int64)"__swift5_acfuncs", 16, 0, 0, 0, nullptr);
    v149 = *(_QWORD *)(a1 + 896);
    v150 = 0;
    *(_QWORD *)(a1 + 864) = v148;
    v151 = *(_QWORD *)(v149 + 8);
    if ( v151 )
      v150 = strlen(*(const char **)(v149 + 8));
    v152 = sub_21097F0(v149, v151, v150, (__int64)"__swift5_mpenum", 15, 0, 0, 0, nullptr);
    v153 = *(_QWORD *)(a1 + 896);
    v154 = 0;
    *(_QWORD *)(a1 + 872) = v152;
    v155 = *(_QWORD *)(v153 + 8);
    if ( v155 )
      v154 = strlen(*(const char **)(v153 + 8));
    *(_QWORD *)(a1 + 880) = sub_21097F0(v153, v155, v154, (__int64)"__swift_ast", 11, 0, 0, 0, nullptr);
  }
  result = *(_QWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 416) = result;
  return result;
}
