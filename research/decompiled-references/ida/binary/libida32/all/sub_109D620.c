void __fastcall sub_109D620(__int64 a1, char *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __m128i *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i *v15; // rcx
  size_t v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  const char *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // eax
  char v51; // al
  unsigned int v52; // eax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  const void *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  size_t v64; // rax
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  size_t v68; // rax
  size_t v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  size_t v75; // rax
  __int64 v76; // r8
  __int64 v77; // r9
  size_t v78; // rax
  size_t v79; // rax
  size_t v80; // rax
  size_t v81; // rax
  size_t v82; // rax
  size_t v83; // rax
  size_t v84; // rax
  size_t v85; // rax
  size_t v86; // rax
  size_t v87; // rax
  size_t v88; // rax
  size_t v89; // rax
  size_t v90; // rax
  size_t v91; // rax
  size_t v92; // rax
  size_t v93; // rax
  size_t v94; // rax
  size_t v95; // rax
  size_t v96; // rax
  size_t v97; // rax
  size_t v98; // rax
  size_t v99; // rax
  size_t v100; // rax
  size_t v101; // rax
  size_t v102; // rax
  size_t v103; // rax
  size_t v104; // rax
  size_t v105; // rax
  size_t v106; // rax
  size_t v107; // rax
  size_t n; // [rsp+18h] [rbp-138h]
  void *v110[2]; // [rsp+28h] [rbp-128h] BYREF
  _BYTE v111[16]; // [rsp+38h] [rbp-118h] BYREF
  void *v112[2]; // [rsp+48h] [rbp-108h] BYREF
  __int64 v113; // [rsp+58h] [rbp-F8h] BYREF
  void *v114[2]; // [rsp+68h] [rbp-E8h] BYREF
  __m128i v115; // [rsp+78h] [rbp-D8h] BYREF
  _QWORD v116[4]; // [rsp+88h] [rbp-C8h] BYREF
  __int16 v117; // [rsp+A8h] [rbp-A8h]
  _QWORD v118[4]; // [rsp+B8h] [rbp-98h] BYREF
  __int16 v119; // [rsp+D8h] [rbp-78h]
  __int64 v120; // [rsp+E8h] [rbp-68h]
  __int64 v121; // [rsp+F0h] [rbp-60h]
  __int64 v122; // [rsp+F8h] [rbp-58h]
  __int64 v123; // [rsp+100h] [rbp-50h]
  __int64 v124; // [rsp+108h] [rbp-48h]

  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__GCC_ASM_FLAG_OUTPUTS__";
  v117 = 259;
  v118[0] = "1";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, a4, a5, a6, v120, v121, v122, v123, 1u);
  v7 = *(_QWORD *)(a1 + 208);
  v110[0] = v111;
  sub_1097440(v110, *(_BYTE **)(v7 + 368), *(_QWORD *)(v7 + 368) + *(_QWORD *)(v7 + 376));
  if ( !sub_990D60((__int64)v110, "default") )
  {
    v64 = j__strlen("small");
    sub_978080(v110, 0, (unsigned __int64)v110[1], "small", v64);
  }
  v118[0] = "1";
  LOWORD(v124) = 257;
  v119 = 259;
  sub_BE13C0((__int64)v112, "__code_model_", (__int64)v110);
  v8 = j__strlen("__");
  if ( v8 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v112[1] )
    std::__throw_length_error("basic_string::append");
  v9 = (__m128i *)sub_9CA820(v112, "__", v8);
  v114[0] = &v115;
  if ( (__m128i *)v9->m128i_i64[0] == &v9[1] )
  {
    v115 = _mm_loadu_si128(v9 + 1);
  }
  else
  {
    v114[0] = (void *)v9->m128i_i64[0];
    v115.m128i_i64[0] = v9[1].m128i_i64[0];
  }
  v12 = (void *)v9->m128i_i64[1];
  v9[1].m128i_i8[0] = 0;
  v114[1] = v12;
  v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
  v9->m128i_i64[1] = 0;
  v117 = 260;
  v116[0] = v114;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, (__int64)v114, v10, v11, v120, v121, v122, v123, v124);
  v15 = &v115;
  if ( v114[0] != &v115 )
    operator delete(v114[0]);
  if ( v112[0] != &v113 )
    operator delete(v112[0]);
  if ( *(_DWORD *)(a1 + 248) == 38 )
  {
    LOWORD(v124) = 257;
    v119 = 259;
    v116[0] = "__amd64__";
    v117 = 259;
    v118[0] = "1";
    sub_10160F0(a3, (__int64)v116, (__int64)v118, (__int64)v15, v13, v14, v120, v121, v122, v123, 1u);
    LOWORD(v124) = 257;
    v117 = 259;
    v119 = 259;
    v116[0] = "__amd64";
    v118[0] = "1";
    sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v53, v54, v120, v121, v122, v123, 1u);
    v117 = 259;
    LOWORD(v124) = 257;
    v119 = 259;
    v116[0] = "__x86_64";
    v118[0] = "1";
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v55, 259, v56, v120, v121, v122, v123, 1u);
    LOWORD(v124) = 257;
    v118[0] = "1";
    v119 = 259;
    v117 = 259;
    v116[0] = "__x86_64__";
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v57, v58, 257, v120, v121, v122, v123, 1u);
    n = j__strlen("x86_64h");
    v59 = (const void *)sub_2293740(a1 + 216);
    v19 = n;
    if ( n == v60 && (!n || !memcmp(v59, "x86_64h", n)) )
    {
      LOWORD(v124) = 257;
      v119 = 259;
      v116[0] = "__x86_64h";
      v117 = 259;
      v118[0] = "1";
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v19, 257, 259, v120, v121, v122, v123, 1u);
      v119 = 259;
      v116[0] = "__x86_64h__";
      LOWORD(v124) = 257;
      v118[0] = "1";
      v117 = 259;
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v61, v62, v63, v120, v121, v122, v123, 1u);
    }
  }
  else
  {
    v16 = j__strlen("i386");
    sub_10237B0(a3, (char *)"i386", v16, (__int64)a2, v17, v18);
  }
  LOWORD(v124) = 257;
  v116[0] = "__SEG_GS";
  v119 = 259;
  v117 = 259;
  v118[0] = "1";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v19, v20, v21, v120, v121, v122, v123, 1u);
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__SEG_FS";
  v117 = 259;
  v118[0] = "1";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v22, v23, v24, v120, v121, v122, v123, 1u);
  LOWORD(v124) = 257;
  v118[0] = "__attribute__((address_space(256)))";
  v119 = 259;
  v116[0] = "__seg_gs";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v25, v26, v27, v120, v121, v122, v123, 1u);
  v118[0] = "__attribute__((address_space(257)))";
  v119 = 259;
  v117 = 259;
  LOWORD(v124) = 257;
  v116[0] = "__seg_fs";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 257, v28, v29, v120, v121, v122, v123, 1u);
  switch ( *(_DWORD *)(a1 + 632) )
  {
    case 1:
      v33 = 257;
      v34 = 259;
      v118[0] = "1";
      v35 = "__tune_i386__";
      LOWORD(v124) = 257;
      v119 = 259;
      goto LABEL_14;
    case 2:
    case 3:
    case 4:
    case 5:
      v106 = j__strlen("i486");
      sub_102C570(a3, "i486", v106, 1);
      break;
    case 6:
    case 7:
      goto LABEL_282;
    case 8:
      LOWORD(v124) = 257;
      v119 = 259;
      v116[0] = "__pentium_mmx__";
      v117 = 259;
      v118[0] = "1";
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v30, v31, v32, v120, v121, v122, v123, 1u);
      v119 = 259;
      v117 = 259;
      LOWORD(v124) = 257;
      v118[0] = "1";
      v116[0] = "__tune_pentium_mmx__";
      sub_10160F0(a3, (__int64)v116, (__int64)v118, 257, v76, v77, v120, v121, v122, v123, 1u);
LABEL_282:
      v78 = j__strlen("i586");
      sub_102C570(a3, "i586", v78, 1);
      v79 = j__strlen("pentium");
      sub_102C570(a3, "pentium", v79, 1);
      break;
    case 9:
    case 0xA:
      goto LABEL_277;
    case 0xB:
    case 0xE:
      goto LABEL_276;
    case 0xC:
    case 0xD:
      LOWORD(v124) = 257;
      v119 = 259;
      v116[0] = "__tune_pentium3__";
      v118[0] = "1";
      v117 = 259;
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v30, v31, v32, v120, v121, v122, v123, 1u);
LABEL_276:
      LOWORD(v124) = 257;
      v116[0] = "__tune_pentium2__";
      v118[0] = "1";
      v119 = 259;
      v117 = 259;
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v30, v31, v32, v120, v121, v122, v123, 1u);
LABEL_277:
      v68 = j__strlen("i686");
      sub_102C570(a3, "i686", v68, 1);
      v69 = j__strlen("pentiumpro");
      sub_102C570(a3, "pentiumpro", v69, 1);
      break;
    case 0xF:
    case 0x11:
    case 0x12:
      v102 = j__strlen("nocona");
      sub_102C570(a3, "nocona", v102, 1);
      break;
    case 0x10:
      v101 = j__strlen("pentium4");
      sub_102C570(a3, "pentium4", v101, 1);
      break;
    case 0x13:
    case 0x14:
      v91 = j__strlen("core2");
      sub_102C570(a3, "core2", v91, 1);
      break;
    case 0x15:
      v90 = j__strlen("atom");
      sub_102C570(a3, "atom", v90, 1);
      break;
    case 0x16:
      v89 = j__strlen("slm");
      sub_102C570(a3, "slm", v89, 1);
      break;
    case 0x17:
      v88 = j__strlen("goldmont");
      sub_102C570(a3, "goldmont", v88, 1);
      break;
    case 0x18:
      v87 = j__strlen("goldmont_plus");
      sub_102C570(a3, "goldmont_plus", v87, 1);
      break;
    case 0x19:
      v86 = j__strlen("tremont");
      sub_102C570(a3, "tremont", v86, 1);
      break;
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      v85 = j__strlen("corei7");
      sub_102C570(a3, "corei7", v85, 1);
      break;
    case 0x39:
      v84 = j__strlen("knl");
      sub_102C570(a3, "knl", v84, 1);
      break;
    case 0x3B:
      v103 = j__strlen("i586");
      sub_102C570(a3, "i586", v103, 0);
      v104 = j__strlen("pentium");
      sub_102C570(a3, "pentium", v104, 0);
      v33 = 257;
      v34 = 259;
      v118[0] = "1";
      LOWORD(v124) = 257;
      v35 = "__tune_lakemont__";
      v119 = 259;
LABEL_14:
      v116[0] = v35;
      v117 = 259;
      goto LABEL_15;
    case 0x3C:
      goto LABEL_280;
    case 0x3D:
      LOWORD(v124) = 257;
      v119 = 259;
      v116[0] = "__k6_2__";
      v117 = 259;
      v118[0] = "1";
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v30, v31, v32, v120, v121, v122, v123, 1u);
      LOWORD(v124) = 257;
      v117 = 259;
      v118[0] = "1";
      v119 = 259;
      v116[0] = "__tune_k6_2__";
      sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v70, v71, v120, v121, v122, v123, 1u);
      if ( *(_DWORD *)(a1 + 632) != 61 )
        goto LABEL_279;
      goto LABEL_280;
    case 0x3E:
LABEL_279:
      LOWORD(v124) = 257;
      v119 = 259;
      v116[0] = "__k6_3__";
      v117 = 259;
      v118[0] = "1";
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v30, v31, 257, v120, v121, v122, v123, 1u);
      LOWORD(v124) = 257;
      v119 = 259;
      v116[0] = "__tune_k6_3__";
      v118[0] = "1";
      v117 = 259;
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v72, v73, v74, v120, v121, v122, v123, 1u);
LABEL_280:
      v75 = j__strlen("k6");
      sub_102C570(a3, "k6", v75, 1);
      break;
    case 0x3F:
    case 0x40:
      v83 = j__strlen("athlon");
      sub_102C570(a3, "athlon", v83, 1);
      v31 = *(unsigned int *)(a1 + 512);
      if ( (_DWORD)v31 )
      {
        LOWORD(v124) = 257;
        v119 = 259;
        v116[0] = "__athlon_sse__";
        v117 = 259;
        v118[0] = "1";
        sub_10160F0(a3, (__int64)v116, (__int64)v118, v30, v31, v32, v120, v121, v122, v123, 1u);
        v30 = 257;
        LOWORD(v124) = 257;
        v118[0] = "1";
        v119 = 259;
        v116[0] = "__tune_athlon_sse__";
        v117 = 259;
LABEL_15:
        sub_10160F0(a3, (__int64)v116, (__int64)v118, v30, v33, v34, v120, v121, v122, v123, v124);
      }
      break;
    case 0x41:
    case 0x42:
    case 0x4F:
      v82 = j__strlen("k8");
      sub_102C570(a3, "k8", v82, 1);
      break;
    case 0x43:
      v81 = j__strlen("amdfam10");
      sub_102C570(a3, "amdfam10", v81, 1);
      break;
    case 0x44:
      v107 = j__strlen("btver1");
      sub_102C570(a3, "btver1", v107, 1);
      break;
    case 0x45:
      v100 = j__strlen("btver2");
      sub_102C570(a3, "btver2", v100, 1);
      break;
    case 0x46:
      v99 = j__strlen("bdver1");
      sub_102C570(a3, "bdver1", v99, 1);
      break;
    case 0x47:
      v98 = j__strlen("bdver2");
      sub_102C570(a3, "bdver2", v98, 1);
      break;
    case 0x48:
      v97 = j__strlen("bdver3");
      sub_102C570(a3, "bdver3", v97, 1);
      break;
    case 0x49:
      v96 = j__strlen("bdver4");
      sub_102C570(a3, "bdver4", v96, 1);
      break;
    case 0x4A:
      v95 = j__strlen("znver1");
      sub_102C570(a3, "znver1", v95, 1);
      break;
    case 0x4B:
      v94 = j__strlen("znver2");
      sub_102C570(a3, "znver2", v94, 1);
      break;
    case 0x4C:
      v93 = j__strlen("znver3");
      sub_102C570(a3, "znver3", v93, 1);
      break;
    case 0x4D:
      v92 = j__strlen("znver4");
      sub_102C570(a3, "znver4", v92, 1);
      break;
    case 0x4E:
      v105 = j__strlen("znver5");
      sub_102C570(a3, "znver5", v105, 1);
      break;
    case 0x53:
      v80 = j__strlen("geode");
      sub_102C570(a3, "geode", v80, 1);
      break;
    default:
      break;
  }
  v116[0] = "__REGISTER_PREFIX__";
  LOWORD(v124) = 257;
  v119 = 257;
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v30, v31, v32, v120, v121, v122, v123, 1u);
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__NO_MATH_INLINES";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v36, v37, v38, v120, v121, v122, v123, 1u);
  if ( *(_BYTE *)(a1 + 524) )
  {
    LOWORD(v124) = 257;
    v118[0] = "1";
    v119 = 259;
    v116[0] = "__AES__";
    v117 = 259;
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, 259, v120, v121, v122, v123, 1u);
  }
  if ( !*(_BYTE *)(a1 + 525) )
  {
    if ( !*(_BYTE *)(a1 + 526) )
      goto LABEL_20;
LABEL_271:
    LOWORD(v124) = 257;
    v119 = 259;
    v116[0] = "__PCLMUL__";
    v118[0] = "1";
    v117 = 259;
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
    if ( !*(_BYTE *)(a1 + 527) )
      goto LABEL_21;
LABEL_272:
    LOWORD(v124) = 257;
    v119 = 259;
    v116[0] = "__VPCLMULQDQ__";
    v118[0] = "1";
    v117 = 259;
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
    goto LABEL_21;
  }
  LOWORD(v124) = 257;
  v117 = 259;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__VAES__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( *(_BYTE *)(a1 + 526) )
    goto LABEL_271;
LABEL_20:
  if ( *(_BYTE *)(a1 + 527) )
    goto LABEL_272;
LABEL_21:
  if ( *(_BYTE *)(a1 + 588) || *(_DWORD *)(a1 + 248) == 37 )
  {
    LOWORD(v124) = 257;
    v118[0] = "1";
    v119 = 259;
    v116[0] = "__LAHF_SAHF__";
    v117 = 259;
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, 257, v120, v121, v122, v123, 1u);
    if ( !*(_BYTE *)(a1 + 529) )
    {
LABEL_24:
      if ( !*(_BYTE *)(a1 + 530) )
        goto LABEL_25;
      goto LABEL_136;
    }
  }
  else if ( !*(_BYTE *)(a1 + 529) )
  {
    goto LABEL_24;
  }
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__LZCNT__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 530) )
  {
LABEL_25:
    if ( !*(_BYTE *)(a1 + 531) )
      goto LABEL_26;
    goto LABEL_137;
  }
LABEL_136:
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__RDRND__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 531) )
  {
LABEL_26:
    if ( !*(_BYTE *)(a1 + 532) )
      goto LABEL_27;
    goto LABEL_138;
  }
LABEL_137:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__FSGSBASE__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 532) )
  {
LABEL_27:
    if ( !*(_BYTE *)(a1 + 533) )
      goto LABEL_28;
    goto LABEL_139;
  }
LABEL_138:
  v119 = 259;
  v116[0] = "__BMI__";
  LOWORD(v124) = 257;
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 533) )
  {
LABEL_28:
    if ( !*(_BYTE *)(a1 + 534) )
      goto LABEL_29;
    goto LABEL_140;
  }
LABEL_139:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__BMI2__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 257, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 534) )
  {
LABEL_29:
    if ( !*(_BYTE *)(a1 + 535) )
      goto LABEL_30;
    goto LABEL_141;
  }
LABEL_140:
  v119 = 259;
  v117 = 259;
  LOWORD(v124) = 257;
  v118[0] = "1";
  v116[0] = "__POPCNT__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 257, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 535) )
  {
LABEL_30:
    if ( !*(_BYTE *)(a1 + 536) )
      goto LABEL_31;
    goto LABEL_142;
  }
LABEL_141:
  LOWORD(v124) = 257;
  v119 = 259;
  v117 = 259;
  v118[0] = "1";
  v116[0] = "__RTM__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 536) )
  {
LABEL_31:
    if ( !*(_BYTE *)(a1 + 537) )
      goto LABEL_32;
    goto LABEL_143;
  }
LABEL_142:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__PRFCHW__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 537) )
  {
LABEL_32:
    if ( !*(_BYTE *)(a1 + 538) )
      goto LABEL_33;
    goto LABEL_144;
  }
LABEL_143:
  LOWORD(v124) = 257;
  v116[0] = "__RDSEED__";
  v118[0] = "1";
  v119 = 259;
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 538) )
  {
LABEL_33:
    if ( !*(_BYTE *)(a1 + 539) )
      goto LABEL_34;
    goto LABEL_145;
  }
LABEL_144:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__ADX__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 539) )
  {
LABEL_34:
    if ( !*(_BYTE *)(a1 + 540) )
      goto LABEL_35;
    goto LABEL_146;
  }
LABEL_145:
  LOWORD(v124) = 257;
  v117 = 259;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__TBM__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 540) )
  {
LABEL_35:
    if ( !*(_BYTE *)(a1 + 575) )
      goto LABEL_36;
    goto LABEL_147;
  }
LABEL_146:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__LWP__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 575) )
  {
LABEL_36:
    if ( !*(_BYTE *)(a1 + 582) )
      goto LABEL_37;
    goto LABEL_148;
  }
LABEL_147:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__MWAITX__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 582) )
  {
LABEL_37:
    v42 = *(_DWORD *)(a1 + 520);
    if ( v42 != 2 )
      goto LABEL_38;
LABEL_149:
    LOWORD(v124) = 257;
    v119 = 259;
    v118[0] = "1";
    v116[0] = "__FMA4__";
    v117 = 259;
    sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
    goto LABEL_150;
  }
LABEL_148:
  v116[0] = "__MOVBE__";
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, 257, v120, v121, v122, v123, 1u);
  v42 = *(_DWORD *)(a1 + 520);
  if ( v42 == 2 )
    goto LABEL_149;
LABEL_38:
  if ( v42 == 3 )
  {
    LOWORD(v124) = 257;
    v119 = 259;
    v118[0] = "1";
    v116[0] = "__XOP__";
    v117 = 259;
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, v41, v120, v121, v122, v123, 1u);
    goto LABEL_149;
  }
  if ( v42 != 1 )
  {
    if ( !*(_BYTE *)(a1 + 541) )
      goto LABEL_41;
    goto LABEL_151;
  }
LABEL_150:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__SSE4A__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 541) )
  {
LABEL_41:
    if ( !*(_BYTE *)(a1 + 542) )
      goto LABEL_42;
    goto LABEL_152;
  }
LABEL_151:
  v119 = 259;
  v116[0] = "__FMA__";
  LOWORD(v124) = 257;
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 542) )
  {
LABEL_42:
    if ( !*(_BYTE *)(a1 + 528) )
      goto LABEL_43;
    goto LABEL_153;
  }
LABEL_152:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__F16C__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 257, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 528) )
  {
LABEL_43:
    if ( !*(_BYTE *)(a1 + 547) )
      goto LABEL_44;
    goto LABEL_154;
  }
LABEL_153:
  v119 = 259;
  v117 = 259;
  LOWORD(v124) = 257;
  v118[0] = "1";
  v116[0] = "__GFNI__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 257, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 547) )
  {
LABEL_44:
    if ( !*(_BYTE *)(a1 + 543) )
      goto LABEL_45;
    goto LABEL_155;
  }
LABEL_154:
  LOWORD(v124) = 257;
  v119 = 259;
  v117 = 259;
  v118[0] = "1";
  v116[0] = "__EVEX512__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 543) )
  {
LABEL_45:
    if ( !*(_BYTE *)(a1 + 544) )
      goto LABEL_46;
    goto LABEL_156;
  }
LABEL_155:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__AVX10_1__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 544) )
  {
LABEL_46:
    if ( !*(_BYTE *)(a1 + 545) )
      goto LABEL_47;
    goto LABEL_157;
  }
LABEL_156:
  LOWORD(v124) = 257;
  v116[0] = "__AVX10_1_512__";
  v118[0] = "1";
  v119 = 259;
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 545) )
  {
LABEL_47:
    if ( !*(_BYTE *)(a1 + 546) )
      goto LABEL_48;
    goto LABEL_158;
  }
LABEL_157:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__AVX10_2__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 546) )
  {
LABEL_48:
    if ( !*(_BYTE *)(a1 + 548) )
      goto LABEL_49;
    goto LABEL_159;
  }
LABEL_158:
  LOWORD(v124) = 257;
  v117 = 259;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__AVX10_2_512__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 548) )
  {
LABEL_49:
    if ( !*(_BYTE *)(a1 + 549) )
      goto LABEL_50;
    goto LABEL_160;
  }
LABEL_159:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__AVX512CD__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 549) )
  {
LABEL_50:
    if ( !*(_BYTE *)(a1 + 550) )
      goto LABEL_51;
    goto LABEL_161;
  }
LABEL_160:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__AVX512VPOPCNTDQ__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 550) )
  {
LABEL_51:
    if ( !*(_BYTE *)(a1 + 552) )
      goto LABEL_52;
    goto LABEL_162;
  }
LABEL_161:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__AVX512VNNI__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, 257, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 552) )
  {
LABEL_52:
    if ( !*(_BYTE *)(a1 + 551) )
      goto LABEL_53;
    goto LABEL_163;
  }
LABEL_162:
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__AVX512BF16__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 551) )
  {
LABEL_53:
    if ( !*(_BYTE *)(a1 + 553) )
      goto LABEL_54;
    goto LABEL_164;
  }
LABEL_163:
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__AVX512FP16__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 553) )
  {
LABEL_54:
    if ( !*(_BYTE *)(a1 + 554) )
      goto LABEL_55;
    goto LABEL_165;
  }
LABEL_164:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__AVX512DQ__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 554) )
  {
LABEL_55:
    if ( !*(_BYTE *)(a1 + 555) )
      goto LABEL_56;
    goto LABEL_166;
  }
LABEL_165:
  v119 = 259;
  v116[0] = "__AVX512BITALG__";
  LOWORD(v124) = 257;
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 555) )
  {
LABEL_56:
    if ( !*(_BYTE *)(a1 + 556) )
      goto LABEL_57;
    goto LABEL_167;
  }
LABEL_166:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__AVX512BW__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 257, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 556) )
  {
LABEL_57:
    if ( !*(_BYTE *)(a1 + 557) )
      goto LABEL_58;
    goto LABEL_168;
  }
LABEL_167:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__AVX512VL__";
  v117 = 259;
  v118[0] = "1";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  v119 = 259;
  v117 = 259;
  LOWORD(v124) = 257;
  v118[0] = "1";
  v116[0] = "__EVEX256__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 257, v43, v44, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 557) )
  {
LABEL_58:
    if ( !*(_BYTE *)(a1 + 558) )
      goto LABEL_59;
    goto LABEL_169;
  }
LABEL_168:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__AVX512VBMI__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 558) )
  {
LABEL_59:
    if ( !*(_BYTE *)(a1 + 560) )
      goto LABEL_60;
    goto LABEL_170;
  }
LABEL_169:
  LOWORD(v124) = 257;
  v116[0] = "__AVX512VBMI2__";
  v118[0] = "1";
  v119 = 259;
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 560) )
  {
LABEL_60:
    if ( !*(_BYTE *)(a1 + 561) )
      goto LABEL_61;
    goto LABEL_171;
  }
LABEL_170:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__AVX512IFMA__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 561) )
  {
LABEL_61:
    if ( !*(_BYTE *)(a1 + 562) )
      goto LABEL_62;
    goto LABEL_172;
  }
LABEL_171:
  LOWORD(v124) = 257;
  v117 = 259;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__AVX512VP2INTERSECT__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 562) )
  {
LABEL_62:
    if ( !*(_BYTE *)(a1 + 563) )
      goto LABEL_63;
    goto LABEL_173;
  }
LABEL_172:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__SHA__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 563) )
  {
LABEL_63:
    if ( !*(_BYTE *)(a1 + 570) )
      goto LABEL_64;
    goto LABEL_174;
  }
LABEL_173:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__SHA512__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 570) )
  {
LABEL_64:
    if ( !*(_BYTE *)(a1 + 571) )
      goto LABEL_65;
    goto LABEL_175;
  }
LABEL_174:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__FXSR__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, 257, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 571) )
  {
LABEL_65:
    if ( !*(_BYTE *)(a1 + 572) )
      goto LABEL_66;
    goto LABEL_176;
  }
LABEL_175:
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__XSAVE__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 572) )
  {
LABEL_66:
    if ( !*(_BYTE *)(a1 + 573) )
      goto LABEL_67;
    goto LABEL_177;
  }
LABEL_176:
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__XSAVEOPT__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 573) )
  {
LABEL_67:
    if ( !*(_BYTE *)(a1 + 574) )
      goto LABEL_68;
    goto LABEL_178;
  }
LABEL_177:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__XSAVEC__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 574) )
  {
LABEL_68:
    if ( !*(_BYTE *)(a1 + 579) )
      goto LABEL_69;
    goto LABEL_179;
  }
LABEL_178:
  v119 = 259;
  v116[0] = "__XSAVES__";
  LOWORD(v124) = 257;
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 579) )
  {
LABEL_69:
    if ( !*(_BYTE *)(a1 + 580) )
      goto LABEL_70;
    goto LABEL_180;
  }
LABEL_179:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__PKU__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 257, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 580) )
  {
LABEL_70:
    if ( !*(_BYTE *)(a1 + 581) )
      goto LABEL_71;
    goto LABEL_181;
  }
LABEL_180:
  v119 = 259;
  v117 = 259;
  LOWORD(v124) = 257;
  v118[0] = "1";
  v116[0] = "__CLFLUSHOPT__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 257, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 581) )
  {
LABEL_71:
    if ( !*(_BYTE *)(a1 + 589) )
      goto LABEL_72;
    goto LABEL_182;
  }
LABEL_181:
  LOWORD(v124) = 257;
  v119 = 259;
  v117 = 259;
  v118[0] = "1";
  v116[0] = "__CLWB__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 589) )
  {
LABEL_72:
    if ( !*(_BYTE *)(a1 + 564) )
      goto LABEL_73;
    goto LABEL_183;
  }
LABEL_182:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__WBNOINVD__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 564) )
  {
LABEL_73:
    if ( !*(_BYTE *)(a1 + 566) )
      goto LABEL_74;
    goto LABEL_184;
  }
LABEL_183:
  LOWORD(v124) = 257;
  v116[0] = "__SHSTK__";
  v118[0] = "1";
  v119 = 259;
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 566) )
  {
LABEL_74:
    if ( !*(_BYTE *)(a1 + 565) )
      goto LABEL_75;
    goto LABEL_185;
  }
LABEL_184:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__SGX__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 565) )
  {
LABEL_75:
    if ( !*(_BYTE *)(a1 + 567) )
      goto LABEL_76;
    goto LABEL_186;
  }
LABEL_185:
  LOWORD(v124) = 257;
  v117 = 259;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__SM3__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 567) )
  {
LABEL_76:
    if ( !*(_BYTE *)(a1 + 584) )
      goto LABEL_77;
    goto LABEL_187;
  }
LABEL_186:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__SM4__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 584) )
  {
LABEL_77:
    if ( !*(_BYTE *)(a1 + 576) )
      goto LABEL_78;
    goto LABEL_188;
  }
LABEL_187:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__PREFETCHI__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 576) )
  {
LABEL_78:
    if ( !*(_BYTE *)(a1 + 602) )
      goto LABEL_79;
    goto LABEL_189;
  }
LABEL_188:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__CLZERO__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, 257, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 602) )
  {
LABEL_79:
    if ( !*(_BYTE *)(a1 + 603) )
      goto LABEL_80;
    goto LABEL_190;
  }
LABEL_189:
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__KL__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 603) )
  {
LABEL_80:
    if ( !*(_BYTE *)(a1 + 585) )
      goto LABEL_81;
    goto LABEL_191;
  }
LABEL_190:
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__WIDEKL__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 585) )
  {
LABEL_81:
    if ( !*(_BYTE *)(a1 + 586) )
      goto LABEL_82;
    goto LABEL_192;
  }
LABEL_191:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__RDPID__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 586) )
  {
LABEL_82:
    if ( !*(_BYTE *)(a1 + 577) )
      goto LABEL_83;
    goto LABEL_193;
  }
LABEL_192:
  v119 = 259;
  v116[0] = "__RDPRU__";
  LOWORD(v124) = 257;
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 577) )
  {
LABEL_83:
    if ( !*(_BYTE *)(a1 + 590) )
      goto LABEL_84;
    goto LABEL_194;
  }
LABEL_193:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__CLDEMOTE__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 257, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 590) )
  {
LABEL_84:
    if ( !*(_BYTE *)(a1 + 591) )
      goto LABEL_85;
    goto LABEL_195;
  }
LABEL_194:
  v119 = 259;
  v117 = 259;
  LOWORD(v124) = 257;
  v118[0] = "1";
  v116[0] = "__WAITPKG__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 257, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 591) )
  {
LABEL_85:
    if ( !*(_BYTE *)(a1 + 592) )
      goto LABEL_86;
    goto LABEL_196;
  }
LABEL_195:
  LOWORD(v124) = 257;
  v119 = 259;
  v117 = 259;
  v118[0] = "1";
  v116[0] = "__MOVDIRI__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 592) )
  {
LABEL_86:
    if ( !*(_BYTE *)(a1 + 583) )
      goto LABEL_87;
    goto LABEL_197;
  }
LABEL_196:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__MOVDIR64B__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 583) )
  {
LABEL_87:
    if ( !*(_BYTE *)(a1 + 578) )
      goto LABEL_88;
    goto LABEL_198;
  }
LABEL_197:
  LOWORD(v124) = 257;
  v116[0] = "__MOVRS__";
  v118[0] = "1";
  v119 = 259;
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 578) )
  {
LABEL_88:
    if ( !*(_BYTE *)(a1 + 593) )
      goto LABEL_89;
    goto LABEL_199;
  }
LABEL_198:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__PCONFIG__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 593) )
  {
LABEL_89:
    if ( !*(_BYTE *)(a1 + 594) )
      goto LABEL_90;
    goto LABEL_200;
  }
LABEL_199:
  LOWORD(v124) = 257;
  v117 = 259;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__PTWRITE__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 594) )
  {
LABEL_90:
    if ( !*(_BYTE *)(a1 + 595) )
      goto LABEL_91;
    goto LABEL_201;
  }
LABEL_200:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__INVPCID__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 595) )
  {
LABEL_91:
    if ( !*(_BYTE *)(a1 + 604) )
      goto LABEL_92;
    goto LABEL_202;
  }
LABEL_201:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__ENQCMD__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 604) )
  {
LABEL_92:
    if ( !*(_BYTE *)(a1 + 606) )
      goto LABEL_93;
    goto LABEL_203;
  }
LABEL_202:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__HRESET__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, 257, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 606) )
  {
LABEL_93:
    if ( !*(_BYTE *)(a1 + 607) )
      goto LABEL_94;
    goto LABEL_204;
  }
LABEL_203:
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__AMX_TILE__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 607) )
  {
LABEL_94:
    if ( !*(_BYTE *)(a1 + 608) )
      goto LABEL_95;
    goto LABEL_205;
  }
LABEL_204:
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__AMX_INT8__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 608) )
  {
LABEL_95:
    if ( !*(_BYTE *)(a1 + 597) )
      goto LABEL_96;
    goto LABEL_206;
  }
LABEL_205:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__AMX_BF16__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 597) )
  {
LABEL_96:
    if ( !*(_BYTE *)(a1 + 609) )
      goto LABEL_97;
    goto LABEL_207;
  }
LABEL_206:
  v119 = 259;
  v116[0] = "__AMX_FP16__";
  LOWORD(v124) = 257;
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 609) )
  {
LABEL_97:
    if ( !*(_BYTE *)(a1 + 610) )
      goto LABEL_98;
    goto LABEL_208;
  }
LABEL_207:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__AMX_COMPLEX__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 257, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 610) )
  {
LABEL_98:
    if ( !*(_BYTE *)(a1 + 611) )
      goto LABEL_99;
    goto LABEL_209;
  }
LABEL_208:
  v119 = 259;
  v117 = 259;
  LOWORD(v124) = 257;
  v118[0] = "1";
  v116[0] = "__AMX_FP8__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 257, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 611) )
  {
LABEL_99:
    if ( !*(_BYTE *)(a1 + 612) )
      goto LABEL_100;
    goto LABEL_210;
  }
LABEL_209:
  LOWORD(v124) = 257;
  v119 = 259;
  v117 = 259;
  v118[0] = "1";
  v116[0] = "__AMX_MOVRS__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 612) )
  {
LABEL_100:
    if ( !*(_BYTE *)(a1 + 613) )
      goto LABEL_101;
    goto LABEL_211;
  }
LABEL_210:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__AMX_TRANSPOSE__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 613) )
  {
LABEL_101:
    if ( !*(_BYTE *)(a1 + 614) )
      goto LABEL_102;
    goto LABEL_212;
  }
LABEL_211:
  LOWORD(v124) = 257;
  v116[0] = "__AMX_AVX512__";
  v118[0] = "1";
  v119 = 259;
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 614) )
  {
LABEL_102:
    if ( !*(_BYTE *)(a1 + 598) )
      goto LABEL_103;
    goto LABEL_213;
  }
LABEL_212:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__AMX_TF32__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 598) )
  {
LABEL_103:
    if ( !*(_BYTE *)(a1 + 599) )
      goto LABEL_104;
    goto LABEL_214;
  }
LABEL_213:
  LOWORD(v124) = 257;
  v117 = 259;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__CMPCCXADD__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 599) )
  {
LABEL_104:
    if ( !*(_BYTE *)(a1 + 559) )
      goto LABEL_105;
    goto LABEL_215;
  }
LABEL_214:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__RAOINT__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 559) )
  {
LABEL_105:
    if ( !*(_BYTE *)(a1 + 601) )
      goto LABEL_106;
    goto LABEL_216;
  }
LABEL_215:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__AVXIFMA__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 601) )
  {
LABEL_106:
    if ( !*(_BYTE *)(a1 + 605) )
      goto LABEL_107;
    goto LABEL_217;
  }
LABEL_216:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__AVXNECONVERT__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, 257, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 605) )
  {
LABEL_107:
    if ( !*(_BYTE *)(a1 + 596) )
      goto LABEL_108;
    goto LABEL_218;
  }
LABEL_217:
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__AVXVNNI__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 596) )
  {
LABEL_108:
    if ( !*(_BYTE *)(a1 + 600) )
      goto LABEL_109;
    goto LABEL_219;
  }
LABEL_218:
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__AVXVNNIINT16__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 600) )
  {
LABEL_109:
    if ( !*(_BYTE *)(a1 + 615) )
      goto LABEL_110;
    goto LABEL_220;
  }
LABEL_219:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__AVXVNNIINT8__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 615) )
  {
LABEL_110:
    if ( !*(_BYTE *)(a1 + 616) )
      goto LABEL_111;
    goto LABEL_221;
  }
LABEL_220:
  v119 = 259;
  v116[0] = "__SERIALIZE__";
  LOWORD(v124) = 257;
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 616) )
  {
LABEL_111:
    if ( !*(_BYTE *)(a1 + 618) )
      goto LABEL_112;
    goto LABEL_222;
  }
LABEL_221:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__TSXLDTRK__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 257, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 618) )
  {
LABEL_112:
    if ( !*(_BYTE *)(a1 + 617) )
      goto LABEL_113;
    goto LABEL_223;
  }
LABEL_222:
  v119 = 259;
  v117 = 259;
  LOWORD(v124) = 257;
  v118[0] = "1";
  v116[0] = "__UINTR__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 257, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 617) )
  {
LABEL_113:
    if ( !*(_BYTE *)(a1 + 619) )
      goto LABEL_114;
    goto LABEL_224;
  }
LABEL_223:
  LOWORD(v124) = 257;
  v119 = 259;
  v117 = 259;
  v118[0] = "1";
  v116[0] = "__USERMSR__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 619) )
  {
LABEL_114:
    if ( !*(_BYTE *)(a1 + 621) )
      goto LABEL_115;
    goto LABEL_225;
  }
LABEL_224:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__CRC32__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 621) )
  {
LABEL_115:
    if ( !*(_BYTE *)(a1 + 622) )
      goto LABEL_116;
    goto LABEL_226;
  }
LABEL_225:
  LOWORD(v124) = 257;
  v116[0] = "__EGPR__";
  v118[0] = "1";
  v119 = 259;
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 622) )
  {
LABEL_116:
    if ( !*(_BYTE *)(a1 + 623) )
      goto LABEL_117;
    goto LABEL_227;
  }
LABEL_226:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__PUSH2POP2__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, 259, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 623) )
  {
LABEL_117:
    if ( !*(_BYTE *)(a1 + 624) )
      goto LABEL_118;
    goto LABEL_228;
  }
LABEL_227:
  LOWORD(v124) = 257;
  v117 = 259;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__PPX__";
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 624) )
  {
LABEL_118:
    if ( !*(_BYTE *)(a1 + 625) )
      goto LABEL_119;
    goto LABEL_229;
  }
LABEL_228:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__NDD__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 625) )
  {
LABEL_119:
    if ( !*(_BYTE *)(a1 + 626) )
      goto LABEL_120;
    goto LABEL_230;
  }
LABEL_229:
  LOWORD(v124) = 257;
  v119 = 259;
  v116[0] = "__CCMP__";
  v118[0] = "1";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  if ( !*(_BYTE *)(a1 + 626) )
  {
LABEL_120:
    if ( !*(_BYTE *)(a1 + 627) )
      goto LABEL_121;
LABEL_231:
    LOWORD(v124) = 257;
    v119 = 259;
    v118[0] = "1";
    v116[0] = "__CF__";
    v117 = 259;
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, v41, v120, v121, v122, v123, 1u);
    if ( !*(_BYTE *)(a1 + 628) )
      goto LABEL_122;
    goto LABEL_232;
  }
LABEL_230:
  LOWORD(v124) = 257;
  v118[0] = "1";
  v119 = 259;
  v116[0] = "__NF__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, 257, v120, v121, v122, v123, 1u);
  if ( *(_BYTE *)(a1 + 627) )
    goto LABEL_231;
LABEL_121:
  if ( !*(_BYTE *)(a1 + 628) )
    goto LABEL_122;
LABEL_232:
  LOWORD(v124) = 257;
  v119 = 259;
  v118[0] = "1";
  v116[0] = "__ZU__";
  v117 = 259;
  sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
LABEL_122:
  if ( *(_BYTE *)(a1 + 621) )
  {
    if ( !*(_BYTE *)(a1 + 622)
      || !*(_BYTE *)(a1 + 623)
      || !*(_BYTE *)(a1 + 624)
      || !*(_BYTE *)(a1 + 625)
      || !*(_BYTE *)(a1 + 626)
      || !*(_BYTE *)(a1 + 627)
      || !*(_BYTE *)(a1 + 628)
      || (LOWORD(v124) = 257,
          v119 = 259,
          v116[0] = "__APX_F__",
          v118[0] = "1",
          v117 = 259,
          sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u),
          *(_BYTE *)(a1 + 621)) )
    {
      if ( *(_BYTE *)(a1 + 629) )
      {
        v119 = 259;
        v116[0] = "__APX_INLINE_ASM_USE_GPR32__";
        LOWORD(v124) = 257;
        v118[0] = "1";
        v117 = 259;
        sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
      }
    }
  }
  switch ( *(_DWORD *)(a1 + 512) )
  {
    case 1:
      goto LABEL_241;
    case 2:
      goto LABEL_240;
    case 3:
      goto LABEL_239;
    case 4:
      goto LABEL_238;
    case 5:
      goto LABEL_237;
    case 6:
      goto LABEL_236;
    case 7:
      goto LABEL_235;
    case 8:
      goto LABEL_234;
    case 9:
      LOWORD(v124) = 257;
      v118[0] = "1";
      v119 = 259;
      v116[0] = "__AVX512F__";
      v117 = 259;
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 257, 259, v120, v121, v122, v123, 1u);
LABEL_234:
      v119 = 259;
      v117 = 259;
      LOWORD(v124) = 257;
      v118[0] = "1";
      v116[0] = "__AVX2__";
      sub_10160F0(a3, (__int64)v116, (__int64)v118, 257, v40, v41, v120, v121, v122, v123, 1u);
LABEL_235:
      LOWORD(v124) = 257;
      v119 = 259;
      v117 = 259;
      v118[0] = "1";
      v116[0] = "__AVX__";
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
LABEL_236:
      LOWORD(v124) = 257;
      v119 = 259;
      v116[0] = "__SSE4_2__";
      v118[0] = "1";
      v117 = 259;
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
LABEL_237:
      LOWORD(v124) = 257;
      v116[0] = "__SSE4_1__";
      v118[0] = "1";
      v119 = 259;
      v117 = 259;
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
LABEL_238:
      LOWORD(v124) = 257;
      v118[0] = "1";
      v119 = 259;
      v116[0] = "__SSSE3__";
      v117 = 259;
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, 259, v120, v121, v122, v123, 1u);
LABEL_239:
      LOWORD(v124) = 257;
      v117 = 259;
      v118[0] = "1";
      v119 = 259;
      v116[0] = "__SSE3__";
      sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v40, v41, v120, v121, v122, v123, 1u);
LABEL_240:
      LOWORD(v124) = 257;
      v119 = 259;
      v116[0] = "__SSE2__";
      v117 = 259;
      v118[0] = "1";
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
      LOWORD(v124) = 257;
      v119 = 259;
      v116[0] = "__SSE2_MATH__";
      v118[0] = "1";
      v117 = 259;
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v45, v46, v47, v120, v121, v122, v123, 1u);
LABEL_241:
      LOWORD(v124) = 257;
      v119 = 259;
      v116[0] = "__SSE__";
      v117 = 259;
      v118[0] = "1";
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, v41, v120, v121, v122, v123, 1u);
      LOWORD(v124) = 257;
      v118[0] = "1";
      v119 = 259;
      v116[0] = "__SSE_MATH__";
      v117 = 259;
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v48, v49, 257, v120, v121, v122, v123, 1u);
      break;
    default:
      break;
  }
  if ( *a2 < 0 && *(_DWORD *)(a1 + 248) == 37 )
  {
    v52 = *(_DWORD *)(a1 + 512);
    LOWORD(v124) = 257;
    v117 = 266;
    if ( v52 == 1 )
    {
      LODWORD(v116[0]) = 1;
    }
    else if ( v52 && v52 <= 9 )
    {
      LODWORD(v116[0]) = 2;
    }
    else
    {
      LODWORD(v116[0]) = 0;
    }
    v118[0] = "_M_IX86_FP";
    v119 = 259;
    sub_10160F0(a3, (__int64)v118, (__int64)v116, 266, v40, v41, v120, v121, v122, v123, v124);
    if ( *(_BYTE *)(a1 + 516) )
      goto LABEL_264;
  }
  else if ( *(_BYTE *)(a1 + 516) )
  {
LABEL_264:
    LOWORD(v124) = 257;
    v116[0] = "__MMX__";
    v118[0] = "1";
    v119 = 259;
    v117 = 259;
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  }
  v50 = *(_DWORD *)(a1 + 632);
  if ( (unsigned int)(v50 - 2) <= 0x7FFFFFFD || !v50 )
  {
    LOWORD(v124) = 257;
    v119 = 259;
    v116[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
    v117 = 259;
    v118[0] = "1";
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
    LOWORD(v124) = 257;
    v119 = 259;
    v116[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
    v117 = 259;
    v118[0] = "1";
    sub_10160F0(a3, (__int64)v116, (__int64)v118, 259, v65, v66, v120, v121, v122, v123, 1u);
    LOWORD(v124) = 257;
    v118[0] = "1";
    v119 = 259;
    v116[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
    v117 = 259;
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v67, 259, 259, v120, v121, v122, v123, 1u);
  }
  if ( *(_BYTE *)(a1 + 568) )
  {
    LOWORD(v124) = 257;
    v119 = 259;
    v116[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
    v118[0] = "1";
    v117 = 259;
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
  }
  if ( *(_BYTE *)(a1 + 569) && *(_DWORD *)(a1 + 248) == 38 )
  {
    v118[0] = "1";
    v116[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_16";
    LOWORD(v124) = 257;
    v119 = 259;
    v117 = 259;
    sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, v40, v41, v120, v121, v122, v123, 1u);
    if ( *(_BYTE *)(a1 + 278) )
    {
LABEL_256:
      LOWORD(v124) = 257;
      v118[0] = "16";
      v119 = 259;
      v116[0] = "__SIZEOF_FLOAT128__";
      v117 = 259;
      sub_10160F0(a3, (__int64)v116, (__int64)v118, v39, 259, 259, v120, v121, v122, v123, 1u);
      v51 = a2[108];
      if ( (v51 & 3) == 0 )
        goto LABEL_251;
      goto LABEL_257;
    }
  }
  else if ( *(_BYTE *)(a1 + 278) )
  {
    goto LABEL_256;
  }
  v51 = a2[108];
  if ( (v51 & 3) == 0 )
    goto LABEL_251;
LABEL_257:
  LOWORD(v124) = 257;
  v119 = 259;
  v117 = 266;
  LODWORD(v116[0]) = (2 * ((v51 & 2) != 0)) | v51 & 1;
  v118[0] = "__CET__";
  sub_10160F0(a3, (__int64)v118, (__int64)v116, 266, v40, v41, v120, v121, v122, v123, 1u);
LABEL_251:
  if ( v110[0] != v111 )
    operator delete(v110[0]);
}

