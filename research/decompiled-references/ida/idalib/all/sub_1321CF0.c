void __fastcall sub_1321CF0(__int64 a1, __int64 a2)
{
  size_t v4; // r13
  size_t v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  size_t v19; // rax
  size_t v20; // rax
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  size_t v27; // rax
  size_t v28; // rax
  size_t v29; // r15
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // eax
  size_t v33; // rax
  size_t v34; // rax
  size_t v35; // rax
  size_t v36; // rax
  size_t v37; // rax
  size_t v38; // rax
  size_t v39; // rax
  size_t v40; // rax
  size_t v41; // rax
  size_t v42; // rax
  size_t v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  size_t v46; // rax
  size_t v47; // rax
  size_t v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  size_t v51; // rax
  size_t v52; // rax
  size_t v53; // r15
  size_t v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  size_t v57; // rax
  size_t v58; // rax
  size_t v59; // rax
  size_t v60; // rax
  size_t v61; // rax
  size_t v62; // rax
  size_t v63; // rax
  size_t v64; // rax
  size_t v65; // rax
  size_t v66; // rax
  size_t v67; // rax
  size_t v68; // rax
  size_t v69; // rax
  size_t v70; // rax
  size_t v71; // rax
  size_t v72; // rax
  size_t v73; // rax
  size_t v74; // rax
  size_t v75; // rax
  size_t v76; // rax
  size_t v77; // rax
  size_t v78; // rax
  size_t v79; // rax
  size_t v80; // r15
  size_t v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  size_t v84; // r15
  size_t v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  size_t v88; // r15
  size_t v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  size_t v92; // r15
  size_t v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  size_t v96; // r15
  size_t v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  size_t v100; // r15
  size_t v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  size_t v104; // r15
  size_t v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdx
  size_t v108; // r15
  size_t v109; // rax
  __int64 v110; // rdx
  size_t v111; // rax
  size_t v112; // rax
  size_t v113; // rax
  const char *v114; // rcx
  size_t v115; // r15
  size_t v116; // rax
  __int64 v117; // rax
  bool v118; // zf
  __int64 v119; // rdx
  void *v120; // rax
  void *v121; // rax
  void *v122; // rdx
  size_t v123; // rax
  size_t v124; // rax
  const __m128i *v125; // r15
  char *v126; // rsi
  void *v127; // rcx
  _QWORD *v128; // rsi
  __m128i si128; // xmm1
  const __m128i *v130; // r15
  _QWORD *v131; // rsi
  __m128i v132; // xmm2
  __int64 v133; // rdx
  char *v134; // rsi
  size_t v135; // rax
  const void **v136; // rbp
  const void **v137; // r15
  _BYTE *v138; // rdx
  _BYTE *v139; // rsi
  size_t v140; // rdx
  char *v141; // rax
  _QWORD *v142; // rdi
  __int64 v143; // rdx
  char *v144; // [rsp+0h] [rbp-1E8h]
  int v145; // [rsp+0h] [rbp-1E8h]
  _BYTE *v146; // [rsp+0h] [rbp-1E8h]
  void *v147; // [rsp+0h] [rbp-1E8h]
  void *v148; // [rsp+0h] [rbp-1E8h]
  void *v149[2]; // [rsp+10h] [rbp-1D8h] BYREF
  void *v150; // [rsp+20h] [rbp-1C8h]
  void *v151[2]; // [rsp+30h] [rbp-1B8h] BYREF
  void *v152; // [rsp+40h] [rbp-1A8h]
  unsigned __int8 *v153[10]; // [rsp+50h] [rbp-198h] BYREF
  void *v154[2]; // [rsp+A0h] [rbp-148h] BYREF
  _BYTE v155[16]; // [rsp+B0h] [rbp-138h] BYREF
  __int16 v156; // [rsp+C0h] [rbp-128h]

  v4 = j__strlen("deep");
  v5 = j__strlen("mode");
  v6 = sub_13217C0(a1 + 48, "mode", v5, "deep", v4);
  *(_QWORD *)(a1 + 208) = v7;
  *(_QWORD *)(a1 + 200) = v6;
  v8 = j__strlen("cfg-implicit-dtors");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 216), "cfg-implicit-dtors", v8);
  v9 = j__strlen("cfg-temporary-dtors");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 217), "cfg-temporary-dtors", v9);
  v10 = j__strlen("cfg-lifetime");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 218), "cfg-lifetime", v10);
  v11 = j__strlen("cfg-loopexit");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 219), "cfg-loopexit", v11);
  v12 = j__strlen("cfg-rich-constructors");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 220), "cfg-rich-constructors", v12);
  v13 = j__strlen("cfg-scopes");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 221), "cfg-scopes", v13);
  v14 = j__strlen("cfg-expand-default-aggr-inits");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 222), "cfg-expand-default-aggr-inits", v14);
  v15 = j__strlen("c++-template-inlining");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 223), "c++-template-inlining", v15);
  v16 = j__strlen("c++-stdlib-inlining");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 224), "c++-stdlib-inlining", v16);
  v17 = j__strlen("c++-allocator-inlining");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 225), "c++-allocator-inlining", v17);
  v18 = j__strlen("c++-shared_ptr-inlining");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 226), "c++-shared_ptr-inlining", v18);
  v19 = j__strlen("c++-temp-dtor-inlining");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 227), "c++-temp-dtor-inlining", v19);
  v20 = j__strlen("suppress-null-return-paths");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 228), "suppress-null-return-paths", v20);
  v21 = j__strlen("avoid-suppressing-null-argument-paths");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 229), "avoid-suppressing-null-argument-paths", v21);
  v22 = j__strlen("suppress-inlined-defensive-checks");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 230), "suppress-inlined-defensive-checks", v22);
  v23 = j__strlen("c++-container-inlining");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 231), "c++-container-inlining", v23);
  v24 = j__strlen("suppress-c++-stdlib");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 232), "suppress-c++-stdlib", v24);
  v25 = j__strlen("crosscheck-with-z3");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 233), "crosscheck-with-z3", v25);
  v26 = j__strlen("crosscheck-with-z3-eqclass-timeout-threshold");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 236), "crosscheck-with-z3-eqclass-timeout-threshold", v26, 0);
  v27 = j__strlen("crosscheck-with-z3-timeout-threshold");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 240), "crosscheck-with-z3-timeout-threshold", v27, 15000);
  v28 = j__strlen("crosscheck-with-z3-rlimit-threshold");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 244), "crosscheck-with-z3-rlimit-threshold", v28, 0);
  v29 = j__strlen("crosscheck-with-z3-max-attempts-per-query");
  sub_D8B070(v154, (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf, 16, (__int64)"%u", 3);
  v30 = sub_13217C0(
          a1 + 48,
          (void *)"crosscheck-with-z3-max-attempts-per-query",
          v29,
          (_BYTE *)v154[0],
          (__int64)v154[1]);
  if ( !(unsigned __int8)sub_2247970(v30, v31, 0, v153)
    && (v32 = (int)v153[0], v153[0] == (unsigned __int8 *)LODWORD(v153[0]))
    && v153[0] )
  {
    if ( v154[0] != v155 )
    {
      v145 = (int)v153[0];
      operator delete(v154[0]);
      v32 = v145;
    }
    *(_DWORD *)(a1 + 248) = v32;
  }
  else
  {
    if ( v154[0] != v155 )
      operator delete(v154[0]);
    if ( a2 )
    {
      sub_FC70B0((__int64)v154, a2, 0, 304);
      sub_AEC220((unsigned __int8 **)v154, "crosscheck-with-z3-max-attempts-per-query", v29);
      sub_12FA2D0((unsigned __int8 **)v154, (__int64)"a positive");
      sub_AEA040((__int64)v154);
    }
    *(_DWORD *)(a1 + 248) = 3;
  }
  v33 = j__strlen("report-in-main-source-file");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 252), "report-in-main-source-file", v33);
  v34 = j__strlen("stable-report-filename");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 253), "stable-report-filename", v34);
  v35 = j__strlen("verbose-report-filename");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 254), "verbose-report-filename", v35);
  v36 = j__strlen("serialize-stats");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 255), "serialize-stats", v36);
  v37 = j__strlen("objc-inlining");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 256), "objc-inlining", v37);
  v38 = j__strlen("prune-paths");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 257), "prune-paths", v38);
  v39 = j__strlen("add-pop-up-notes");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 258), "add-pop-up-notes", v39);
  v40 = j__strlen("cfg-conditional-static-initializers");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 259), "cfg-conditional-static-initializers", v40);
  v41 = j__strlen("faux-bodies");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 260), "faux-bodies", v41);
  v42 = j__strlen("elide-constructors");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 261), "elide-constructors", v42);
  v43 = j__strlen("inline-lambdas");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 262), "inline-lambdas", v43);
  v44 = j__strlen("widen-loops");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 263), "widen-loops", v44);
  v45 = j__strlen("unroll-loops");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 264), "unroll-loops", v45);
  v46 = j__strlen("assume-at-least-one-iteration");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 265), "assume-at-least-one-iteration", v46);
  v47 = j__strlen("notes-as-events");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 266), "notes-as-events", v47);
  v48 = j__strlen("aggressive-binary-operation-simplification");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 267), "aggressive-binary-operation-simplification", v48);
  v49 = j__strlen("eagerly-assume");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 268), "eagerly-assume", v49);
  v50 = j__strlen("experimental-enable-naive-ctu-analysis");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 269), "experimental-enable-naive-ctu-analysis", v50);
  v51 = j__strlen("expand-macros");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 270), "expand-macros", v51);
  v52 = j__strlen("display-ctu-progress");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 271), "display-ctu-progress", v52);
  v53 = j__strlen(&byte_22F0C30);
  v54 = j__strlen("dump-entry-point-stats-to-csv");
  v55 = sub_13217C0(a1 + 48, (void *)"dump-entry-point-stats-to-csv", v54, &byte_22F0C30, v53);
  *(_QWORD *)(a1 + 280) = v56;
  *(_QWORD *)(a1 + 272) = v55;
  v57 = j__strlen("track-conditions");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 288), "track-conditions", v57);
  v58 = j__strlen("track-conditions-debug");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 289), "track-conditions-debug", v58);
  v59 = j__strlen("apply-fixits");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 290), "apply-fixits", v59);
  v60 = j__strlen("display-checker-name");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 291), "display-checker-name", v60);
  v61 = j__strlen("support-symbolic-integer-casts");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 292), "support-symbolic-integer-casts", v61);
  v62 = j__strlen("assume-controlled-environment");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 293), "assume-controlled-environment", v62);
  v63 = j__strlen("ignore-bison-generated-files");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 294), "ignore-bison-generated-files", v63);
  v64 = j__strlen("ignore-flex-generated-files");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 295), "ignore-flex-generated-files", v64);
  v65 = j__strlen("suppress-dereferences-from-any-address-space");
  sub_1321B30(a1 + 48, a2, (char *)(a1 + 296), "suppress-dereferences-from-any-address-space", v65);
  v66 = j__strlen("inline-functions-with-ambiguous-loops");
  sub_1321C10(a1 + 48, a2, (char *)(a1 + 297), "inline-functions-with-ambiguous-loops", v66);
  v67 = j__strlen("ctu-import-threshold");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 300), "ctu-import-threshold", v67, 24);
  v68 = j__strlen("ctu-import-cpp-threshold");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 304), "ctu-import-cpp-threshold", v68, 8);
  v69 = j__strlen("ipa-always-inline-size");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 308), "ipa-always-inline-size", v69, 3);
  v70 = j__strlen("graph-trim-interval");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 312), "graph-trim-interval", v70, 1000);
  v71 = j__strlen("min-cfg-size-treat-functions-as-large");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 316), "min-cfg-size-treat-functions-as-large", v71, 14);
  v72 = j__strlen("max-symbol-complexity");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 320), "max-symbol-complexity", v72, 35);
  v73 = j__strlen("max-tainted-symbol-complexity");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 324), "max-tainted-symbol-complexity", v73, 9);
  v74 = j__strlen("max-times-inline-large");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 328), "max-times-inline-large", v74, 32);
  v75 = j__strlen("ctu-max-nodes-pct");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 340), "ctu-max-nodes-pct", v75, 50);
  v76 = j__strlen("ctu-max-nodes-min");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 344), "ctu-max-nodes-min", v76, 10000);
  v77 = j__strlen("region-store-small-struct-limit");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 348), "region-store-small-struct-limit", v77, 2);
  v78 = j__strlen("region-store-small-array-limit");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 352), "region-store-small-array-limit", v78, 5);
  v79 = j__strlen("region-store-max-binding-fanout");
  sub_1321A00(a1 + 48, a2, (int *)(a1 + 356), "region-store-max-binding-fanout", v79, 128);
  v80 = j__strlen(&byte_22F0C30);
  v81 = j__strlen("ctu-dir");
  v82 = sub_13217C0(a1 + 48, (void *)"ctu-dir", v81, &byte_22F0C30, v80);
  *(_QWORD *)(a1 + 368) = v83;
  *(_QWORD *)(a1 + 360) = v82;
  v84 = j__strlen("externalDefMap.txt");
  v85 = j__strlen("ctu-index-name");
  v86 = sub_13217C0(a1 + 48, (void *)"ctu-index-name", v85, "externalDefMap.txt", v84);
  *(_QWORD *)(a1 + 384) = v87;
  *(_QWORD *)(a1 + 376) = v86;
  v88 = j__strlen("invocations.yaml");
  v89 = j__strlen("ctu-invocation-list");
  v90 = sub_13217C0(a1 + 48, (void *)"ctu-invocation-list", v89, "invocations.yaml", v88);
  *(_QWORD *)(a1 + 400) = v91;
  *(_QWORD *)(a1 + 392) = v90;
  v92 = j__strlen(&byte_22F0C30);
  v93 = j__strlen("model-path");
  v94 = sub_13217C0(a1 + 48, (void *)"model-path", v93, &byte_22F0C30, v92);
  *(_QWORD *)(a1 + 416) = v95;
  *(_QWORD *)(a1 + 408) = v94;
  v96 = j__strlen("small");
  v97 = j__strlen("ctu-phase1-inlining");
  v98 = sub_13217C0(a1 + 48, (void *)"ctu-phase1-inlining", v97, "small", v96);
  *(_QWORD *)(a1 + 432) = v99;
  *(_QWORD *)(a1 + 424) = v98;
  v100 = j__strlen("destructors");
  v101 = j__strlen("c++-inlining");
  v102 = sub_13217C0(a1 + 48, (void *)"c++-inlining", v101, "destructors", v100);
  *(_QWORD *)(a1 + 448) = v103;
  *(_QWORD *)(a1 + 440) = v102;
  v104 = j__strlen("unexplored_first_queue");
  v105 = j__strlen("exploration_strategy");
  v106 = sub_13217C0(a1 + 48, (void *)"exploration_strategy", v105, "unexplored_first_queue", v104);
  *(_QWORD *)(a1 + 464) = v107;
  *(_QWORD *)(a1 + 456) = v106;
  v108 = j__strlen(&byte_22F0C30);
  v109 = j__strlen("silence-checkers");
  *(_QWORD *)(a1 + 472) = sub_13217C0(a1 + 48, (void *)"silence-checkers", v109, &byte_22F0C30, v108);
  *(_QWORD *)(a1 + 480) = v110;
  v111 = j__strlen("shallow");
  if ( v111 == *(_QWORD *)(a1 + 208) && (!v111 || !memcmp(*(const void **)(a1 + 200), "shallow", v111)) )
  {
    v123 = j__strlen("max-inlinable-size");
    sub_1321A00(a1 + 48, a2, (int *)(a1 + 332), "max-inlinable-size", v123, 4);
    v124 = j__strlen("max-nodes");
    sub_1321A00(a1 + 48, a2, (int *)(a1 + 336), "max-nodes", v124, 75000);
    v114 = "inlining";
  }
  else
  {
    v112 = j__strlen("max-inlinable-size");
    sub_1321A00(a1 + 48, a2, (int *)(a1 + 332), "max-inlinable-size", v112, 100);
    v113 = j__strlen("max-nodes");
    sub_1321A00(a1 + 48, a2, (int *)(a1 + 336), "max-nodes", v113, 225000);
    v114 = "dynamic-bifurcate";
  }
  v144 = (char *)v114;
  v115 = j__strlen(v114);
  v116 = j__strlen("ipa");
  v117 = sub_13217C0(a1 + 48, (void *)"ipa", v116, v144, v115);
  v118 = *(_QWORD *)(a1 + 480) == 0;
  *(_QWORD *)(a1 + 488) = v117;
  *(_QWORD *)(a1 + 496) = v119;
  if ( v118 )
    goto LABEL_13;
  v125 = (const __m128i *)&off_2BB11E0;
  v150 = nullptr;
  *(_OWORD *)v149 = 0;
  do
  {
    while ( 1 )
    {
      si128 = _mm_load_si128(v125);
      *(__m128i *)v154 = si128;
      if ( si128.m128i_i64[1] <= 5uLL || *(_DWORD *)v154[0] != 1969382756 )
      {
        v126 = (char *)v149[1];
        if ( v149[1] == v150 )
          break;
        goto LABEL_33;
      }
      if ( *((_WORD *)v154[0] + 2) == 11879 )
        goto LABEL_34;
      v126 = (char *)v149[1];
      if ( v149[1] == v150 )
        break;
LABEL_33:
      v127 = v154[0];
      v128 = v126 + 16;
      *(v128 - 1) = si128.m128i_i64[1];
      *(v128 - 2) = v127;
      v149[1] = v128;
LABEL_34:
      if ( &unk_2BB1EB0 == (_UNKNOWN *)++v125 )
        goto LABEL_40;
    }
    ++v125;
    sub_1245C50((__int64)v149, v126, v154);
  }
  while ( &unk_2BB1EB0 != (_UNKNOWN *)v125 );
LABEL_40:
  v130 = (const __m128i *)&off_2BB0EA0;
  v152 = nullptr;
  *(_OWORD *)v151 = 0;
  while ( 1 )
  {
LABEL_43:
    v132 = _mm_load_si128(v130);
    v133 = v130->m128i_i64[0];
    *(__m128i *)v154 = v132;
    if ( v132.m128i_i64[1] == 5 && *(_DWORD *)v133 == 1969382756 && *(_BYTE *)(v133 + 4) == 103 )
      goto LABEL_42;
    v134 = (char *)v151[1];
    if ( v151[1] == v152 )
      break;
    *(_QWORD *)v151[1] = v133;
    v131 = v134 + 16;
    *(v131 - 1) = v132.m128i_i64[1];
    v151[1] = v131;
LABEL_42:
    if ( ++v130 == (const __m128i *)&unk_2BB11D0 )
      goto LABEL_47;
  }
  ++v130;
  sub_1245C50((__int64)v151, (char *)v151[1], v154);
  if ( v130 != (const __m128i *)&unk_2BB11D0 )
    goto LABEL_43;
LABEL_47:
  v154[0] = v155;
  v154[1] = (void *)0x1000000000LL;
  v135 = j__strlen(";");
  sub_22471D0(a1 + 472, v154, ";", v135, 0xFFFFFFFFLL, 1);
  v136 = (const void **)((char *)v154[0] + 16 * LODWORD(v154[1]));
  if ( v154[0] == v136 )
    goto LABEL_58;
  v137 = (const void **)v154[0];
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !a2 )
        goto LABEL_55;
      v140 = (size_t)v137[1];
      if ( v140 && (v146 = *v137, (v141 = (char *)memchr(*v137, 46, v140)) != nullptr) && v141 - v146 != -1 )
      {
        v147 = v149[1];
        if ( v147 != (void *)sub_12FB470((__int64)v149[0], (__int64)v149[1], (__int64)v137) )
          goto LABEL_55;
LABEL_67:
        sub_FC70B0((__int64)v153, a2, 0, 81);
        sub_AEC220(v153, *v137, (signed __int64)v137[1]);
        sub_AEA040((__int64)v153);
      }
      else
      {
        v148 = v151[1];
        if ( v148 == (void *)sub_12FB470((__int64)v151[0], (__int64)v151[1], (__int64)v137) )
          goto LABEL_67;
      }
LABEL_55:
      v142 = *(_QWORD **)(a1 + 32);
      if ( v142 != *(_QWORD **)(a1 + 40) )
      {
        v138 = v137[1];
        v139 = *v137;
        v137 += 2;
        *v142 = v142 + 2;
        sub_12FAAE0(v142, v139, (__int64)&v138[(_QWORD)v139]);
        *(_QWORD *)(a1 + 32) += 32LL;
        if ( v136 == v137 )
          goto LABEL_57;
        continue;
      }
      break;
    }
    v143 = (__int64)v137;
    v137 += 2;
    sub_F95610((void ***)(a1 + 24), *(const __m128i **)(a1 + 32), v143);
    if ( v136 != v137 )
      continue;
    break;
  }
LABEL_57:
  v136 = (const void **)v154[0];
LABEL_58:
  if ( v136 != (const void **)v155 )
    free(v136);
  if ( v151[0] )
    operator delete(v151[0]);
  if ( v149[0] )
    operator delete(v149[0]);
LABEL_13:
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 289) && !*(_BYTE *)(a1 + 288) )
    {
      sub_FC70B0((__int64)v154, a2, 0, 304);
      sub_12FA2D0((unsigned __int8 **)v154, (__int64)"track-conditions-debug");
      sub_12FA2D0((unsigned __int8 **)v154, (__int64)"'track-conditions' to also be enabled");
      sub_AEA040((__int64)v154);
      v120 = *(void **)(a1 + 368);
      if ( v120 )
        goto LABEL_20;
      goto LABEL_16;
    }
    v120 = *(void **)(a1 + 368);
    if ( !v120 )
      goto LABEL_16;
LABEL_20:
    v122 = *(void **)(a1 + 360);
    v156 = 261;
    v154[0] = v122;
    v154[1] = v120;
    if ( !(unsigned int)sub_228B230(v154, v153) && LOBYTE(v153[0]) )
    {
LABEL_16:
      v121 = *(void **)(a1 + 416);
      if ( v121 )
        goto LABEL_23;
    }
    else
    {
      sub_FC70B0((__int64)v154, a2, 0, 304);
      sub_12FA2D0((unsigned __int8 **)v154, (__int64)"ctu-dir");
      sub_12FA2D0((unsigned __int8 **)v154, (__int64)"a filename");
      sub_AEA040((__int64)v154);
      v121 = *(void **)(a1 + 416);
      if ( v121 )
      {
LABEL_23:
        v154[1] = v121;
        v156 = 261;
        v154[0] = *(void **)(a1 + 408);
        if ( (unsigned int)sub_228B230(v154, v153) || !LOBYTE(v153[0]) )
        {
          sub_FC70B0((__int64)v154, a2, 0, 304);
          sub_12FA2D0((unsigned __int8 **)v154, (__int64)"model-path");
          sub_12FA2D0((unsigned __int8 **)v154, (__int64)"a filename");
          sub_AEA040((__int64)v154);
        }
      }
    }
  }
}
