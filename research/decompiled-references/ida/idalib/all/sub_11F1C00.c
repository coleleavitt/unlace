void __fastcall sub_11F1C00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char **a4,
        __int64 a5,
        __int64 a6,
        __m128 si128,
        __m128i a8,
        __int64 a9)
{
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  size_t v16; // rbx
  char *v17; // rax
  size_t v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _BYTE *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r12
  const char *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // r12
  __int64 v33; // rax
  unsigned __int64 v34; // r12
  __int64 v35; // rbp
  char *v36; // r14
  size_t v37; // rax
  size_t v38; // rax
  _BYTE *v39; // rdi
  size_t v40; // r9
  unsigned __int64 v41; // rdx
  char *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  _QWORD *v46; // r14
  __int64 v47; // rbx
  char *v48; // r12
  char v49; // bp
  const __m128i *v50; // r13
  __int64 v51; // r14
  __int64 v52; // rbx
  _QWORD *v53; // rbp
  void (__fastcall *v54)(__int64); // rax
  __int64 v55; // r12
  __int64 v56; // rbx
  void *v57; // rdi
  _QWORD *v58; // rdi
  _QWORD *v59; // rdi
  void **v60; // r12
  void **v61; // rbx
  void *v62; // rdi
  _QWORD *v63; // rdi
  __int64 v64; // rbx
  size_t v65; // rbx
  size_t v66; // rax
  size_t v67; // rbx
  size_t v68; // rax
  __int64 v69; // rax
  __int32 v70; // edx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 *v74; // r12
  bool v75; // bl
  size_t v76; // rbx
  __int64 v77; // rax
  char *v78; // r12
  const char **v79; // rax
  __int64 v80; // rax
  __int64 v81; // r13
  size_t v82; // rax
  __int64 v83; // rax
  __int64 v84; // rbx
  char *v85; // rbx
  size_t v86; // rax
  __int64 v87; // rax
  size_t v88; // rax
  __int64 v89; // rbx
  size_t v90; // r12
  const char **v91; // rax
  const char *v92; // rbx
  size_t v93; // rax
  char *v94; // rdx
  char *v95; // r13
  size_t v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  unsigned int v102; // [rsp+0h] [rbp-3B8h]
  char *v103; // [rsp+0h] [rbp-3B8h]
  void **v104; // [rsp+28h] [rbp-390h]
  __int64 v105; // [rsp+30h] [rbp-388h]
  size_t v106; // [rsp+48h] [rbp-370h]
  size_t v107; // [rsp+48h] [rbp-370h]
  __int64 v108; // [rsp+48h] [rbp-370h]
  __int64 v112; // [rsp+88h] [rbp-330h]
  char v113; // [rsp+9Fh] [rbp-319h] BYREF
  __int64 v114; // [rsp+A0h] [rbp-318h] BYREF
  __int64 v115; // [rsp+A8h] [rbp-310h]
  void *v116; // [rsp+B0h] [rbp-308h] BYREF
  size_t v117; // [rsp+B8h] [rbp-300h]
  __m128i v118; // [rsp+C0h] [rbp-2F8h] BYREF
  __m128i v119; // [rsp+D0h] [rbp-2E8h] BYREF
  __m128 v120; // [rsp+E0h] [rbp-2D8h] BYREF
  __int16 v121; // [rsp+F0h] [rbp-2C8h]
  __m128i v122; // [rsp+100h] [rbp-2B8h] BYREF
  __int64 v123; // [rsp+110h] [rbp-2A8h] BYREF
  __int16 v124; // [rsp+120h] [rbp-298h]
  void *v125; // [rsp+130h] [rbp-288h] BYREF
  __int64 v126; // [rsp+138h] [rbp-280h]
  _BYTE v127[128]; // [rsp+140h] [rbp-278h] BYREF
  void *v128; // [rsp+1C0h] [rbp-1F8h] BYREF
  __int64 v129; // [rsp+1C8h] [rbp-1F0h]
  _BYTE v130[128]; // [rsp+1D0h] [rbp-1E8h] BYREF
  __m128i ptr; // [rsp+250h] [rbp-168h] BYREF
  __int64 v132; // [rsp+260h] [rbp-158h] BYREF
  void **v133; // [rsp+268h] [rbp-150h]
  __int64 v134; // [rsp+270h] [rbp-148h]
  _BYTE v135[24]; // [rsp+2E0h] [rbp-D8h] BYREF
  __int64 v136; // [rsp+2F8h] [rbp-C0h] BYREF
  __int16 v137; // [rsp+300h] [rbp-B8h]

  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_BYTE *)(v11 + 2424) == 0;
  v125 = v127;
  v126 = 0x1000000000LL;
  v128 = v130;
  v129 = 0x1000000000LL;
  if ( v12 )
  {
    v13 = sub_11E8F10(v11, a6);
    v11 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v13 = *(_QWORD *)(v11 + 2408);
    v14 = *(_QWORD *)(v11 + 2416);
  }
  v115 = v14;
  v114 = v13;
  sub_1132E50(&ptr, v11, &v113);
  *(_QWORD *)v135 = &ptr;
  v137 = 260;
  v112 = sub_10DA6C0(a6, (__int64)v135);
  if ( (__int64 *)ptr.m128i_i64[0] != &v132 )
    operator delete((void *)ptr.m128i_i64[0]);
  sub_11EAE40(
    a1,
    a2,
    a6,
    (__int64)&v128,
    (__int64 *)a5,
    v113,
    v114,
    v115,
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 60LL) == 31);
  if ( (unsigned __int8)sub_10DBA30(a6) )
  {
    v74 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL);
    sub_21B7150(v135, a6, 129);
    v75 = *(_QWORD *)&v135[8] - *(_QWORD *)v135 > 0x3Fu;
    sub_9B4A30((void ***)v135);
    if ( sub_10DCD30(a6, 0x61Eu) && v75 )
    {
      sub_FC70B0((__int64)v135, *v74, 0, 391);
      sub_AE9DF0((unsigned __int8 **)v135, (__int64)"-foptimization-record-file", 1u);
      sub_AEA040((__int64)v135);
    }
    else
    {
      v76 = 4;
      v77 = sub_10DCD30(a6, 0x6F7u);
      v78 = "yaml";
      if ( v77 )
      {
        v79 = *(const char ***)(v77 + 48);
        v76 = 0;
        v78 = (char *)*v79;
        if ( *v79 )
          v76 = j__strlen(*v79);
      }
      sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
      sub_10DC5D0((__int64)&v128, (__int64)"-lto-pass-remarks-output");
      sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
      v80 = sub_10DCD30(a6, 0x61Eu);
      if ( v80 )
      {
        sub_10DC5D0((__int64)&v128, **(_QWORD **)(v80 + 48));
      }
      else
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D40);
        v94 = nullptr;
        *(__m128 *)&v135[8] = si128;
        *(_QWORD *)v135 = &v136;
        v95 = (char *)*a4;
        if ( *a4 )
          v94 = &v95[j__strlen(*a4)];
        sub_A1FE50(v135, v95, v94);
        v96 = j__strlen(".opt.");
        sub_A1FE50(v135, ".opt.", &aOpt_1[v96]);
        sub_A1FE50(v135, v78, &v78[v76]);
        ptr = *(__m128i *)v135;
        LOWORD(v134) = 261;
        v97 = sub_10DA6C0(a6, (__int64)&ptr);
        sub_10DC5D0((__int64)&v128, v97);
        if ( *(__int64 **)v135 != &v136 )
          free(*(void **)v135);
      }
      v81 = sub_10DCD30(a6, 0x61Fu);
      if ( v81 )
      {
        sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
        v103 = **(char ***)(v81 + 48);
        *(_QWORD *)v135 = &v135[16];
        v82 = j__strlen("-lto-pass-remarks-filter=");
        sub_11E46A0(v135, "-lto-pass-remarks-filter=", (__int64)&aLtoPassRemarks_0[v82]);
        sub_10E1980(&ptr, (__m128i *)v135, v103);
        if ( *(_BYTE **)v135 != &v135[16] )
          operator delete(*(void **)v135);
        v137 = 260;
        *(_QWORD *)v135 = &ptr;
        v83 = sub_10DA6C0(a6, (__int64)v135);
        sub_10DC5D0((__int64)&v128, v83);
        if ( (__int64 *)ptr.m128i_i64[0] != &v132 )
          operator delete((void *)ptr.m128i_i64[0]);
      }
      if ( v76 )
      {
        sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
        ptr.m128i_i64[1] = v76;
        LOWORD(v134) = 261;
        v137 = 259;
        *(_QWORD *)v135 = "-lto-pass-remarks-format=";
        ptr.m128i_i64[0] = (__int64)v78;
        sub_A41580(&v122, (const __m128i *)v135, &ptr, v98, v99, v100);
        v101 = sub_10DA6C0(a6, (__int64)&v122);
        sub_10DC5D0((__int64)&v128, v101);
      }
      if ( sub_11BFE40(a6) )
      {
        sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
        sub_10DC5D0((__int64)&v128, (__int64)"-lto-pass-remarks-with-hotness");
        v84 = sub_10DCD30(a6, 0x25Du);
        if ( v84 )
        {
          sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
          v85 = **(char ***)(v84 + 48);
          *(_QWORD *)v135 = &v135[16];
          v86 = j__strlen("-lto-pass-remarks-hotness-threshold=");
          sub_11E46A0(v135, "-lto-pass-remarks-hotness-threshold=", (__int64)&aLtoPassRemarks_2[v86]);
          sub_10E1980(&ptr, (__m128i *)v135, v85);
          if ( *(_BYTE **)v135 != &v135[16] )
            operator delete(*(void **)v135);
          v137 = 260;
          *(_QWORD *)v135 = &ptr;
          v87 = sub_10DA6C0(a6, (__int64)v135);
          sub_10DC5D0((__int64)&v128, v87);
          if ( (__int64 *)ptr.m128i_i64[0] != &v132 )
            operator delete((void *)ptr.m128i_i64[0]);
        }
      }
    }
  }
  v15 = sub_10DE660(a6, 0xAE8u, 0xA6Cu);
  if ( v15 )
  {
    if ( (unsigned __int8)sub_21B9810(v15, 2792) )
    {
      v16 = j__strlen("arm64");
      v17 = sub_11E83E0(*(_QWORD *)(a1 + 24), a6);
      if ( v18 == v16 && (!v18 || !memcmp(v17, "arm64", v18)) )
      {
        sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
        sub_10DC5D0((__int64)&v128, (__int64)"-enable-machine-outliner");
      }
    }
    else
    {
      sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
      sub_10DC5D0((__int64)&v128, (__int64)"-enable-machine-outliner=never");
    }
  }
  sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
  sub_10DC5D0((__int64)&v128, (__int64)"-enable-linkonceodr-outlining");
  v19 = sub_10DCD30(a6, 0x1F8u);
  v20 = sub_10DCD30(a6, 0x1FAu);
  v21 = v20;
  if ( v19 && v20 )
  {
    sub_FC70B0((__int64)v135, **(_QWORD **)(*(_QWORD *)(a1 + 24) + 8LL), 0, 323);
    sub_21B5FF0(&v122, v19, a6);
    sub_AEC220((unsigned __int8 **)v135, v122.m128i_i64[0], v122.m128i_i64[1]);
    sub_21B5FF0(&ptr, v21, a6);
    sub_AEC220((unsigned __int8 **)v135, ptr.m128i_i64[0], ptr.m128i_i64[1]);
    if ( (__int64 *)ptr.m128i_i64[0] != &v132 )
      operator delete((void *)ptr.m128i_i64[0]);
    if ( (__int64 *)v122.m128i_i64[0] != &v123 )
      operator delete((void *)v122.m128i_i64[0]);
    sub_AEA040((__int64)v135);
  }
  else if ( !v19 )
  {
    goto LABEL_12;
  }
  sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
  sub_10DC5D0((__int64)&v128, (__int64)"-codegen-data-generate");
LABEL_12:
  if ( v21 )
  {
    sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
    v25 = **(_BYTE ***)(v21 + 48);
    LOWORD(v134) = 257;
    if ( *v25 )
    {
      ptr.m128i_i64[0] = (__int64)v25;
      LOBYTE(v134) = 3;
    }
    v122.m128i_i64[0] = (__int64)"-codegen-data-use-path=";
    v124 = 259;
    sub_A41580((__m128i *)v135, &v122, &ptr, v22, v23, v24);
    v26 = sub_10DA6C0(a6, (__int64)v135);
    sub_10DC5D0((__int64)&v128, v26);
  }
  sub_11C0CF0(v135, a6, (__int64)a4, *(_QWORD *)a5, *(void ***)(*(_QWORD *)(a1 + 24) + 8LL));
  if ( *(_QWORD *)&v135[8] )
  {
    sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
    LOWORD(v134) = 1283;
    ptr.m128i_i64[0] = (__int64)"-lto-stats-file=";
    v132 = *(_QWORD *)v135;
    v133 = *(void ***)&v135[8];
    v73 = sub_10DA6C0(a6, (__int64)&ptr);
    sub_10DC5D0((__int64)&v128, v73);
  }
  ptr.m128i_i64[0] = 0xCF900000146LL;
  ptr.m128i_i64[1] = 0xDED00000D17LL;
  LODWORD(v132) = 69;
  sub_21B6650(a6, &v128, &ptr, 5);
  if ( sub_10DCD30(a6, 0xBFFu) || sub_10DCD30(a6, 0xBFCu) )
    sub_10DC5D0((__int64)&v128, (__int64)"-ObjC");
  sub_10DC5D0((__int64)&v128, (__int64)"-o");
  sub_10DC5D0((__int64)&v128, (__int64)*a4);
  if ( !sub_10DE660(a6, 0xBF0u, 0xBEBu) )
    (*(void (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(a1 + 24) + 784LL))(*(_QWORD *)(a1 + 24), a6, &v128);
  sub_21B7F70(a6, &v128, 2204);
  sub_11C3660(*(_QWORD *)(a1 + 24), a5, a6, (__int64)&v128, a3);
  v27 = *(_QWORD *)a5;
  v28 = *(_QWORD *)a5 + 40LL * *(unsigned int *)(a5 + 8);
  if ( *(_QWORD *)a5 != v28 )
  {
    do
    {
      if ( *(_DWORD *)(v27 + 8) == 1 )
      {
        sub_10DC5D0((__int64)&v125, *(_QWORD *)v27);
      }
      else if ( (_DWORD)v126 )
      {
        break;
      }
      v27 += 40;
    }
    while ( v28 != v27 );
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 16LL) == 4 && !sub_10DE660(a6, 0xBF0u, 0xBDDu) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(a1 + 24) + 320LL))(*(_QWORD *)(a1 + 24), a6, &v128);
    (*(void (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(a1 + 24) + 312LL))(*(_QWORD *)(a1 + 24), a6, &v128);
  }
  if ( !sub_10DE660(a6, 0xBF0u, 0xBDDu) )
    sub_11C50B0(a2, (__int64)&v128, *(_QWORD *)(a1 + 24), a6, 0, 0, 0);
  if ( (unsigned __int8)sub_11BB7D0(a6) )
  {
    sub_21B7CF0(a6, 1520);
LABEL_129:
    if ( !sub_10DE660(a6, 0xBF0u, 0xBDDu) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(a1 + 24) + 768LL))(
        *(_QWORD *)(a1 + 24),
        a6,
        &v128);
      sub_10DC5D0((__int64)&v128, (__int64)"-framework");
      sub_10DC5D0((__int64)&v128, (__int64)"Foundation");
      sub_10DC5D0((__int64)&v128, (__int64)"-lobjc");
    }
    goto LABEL_30;
  }
  if ( sub_10DCD30(a6, 0x5F0u) )
    goto LABEL_129;
LABEL_30:
  if ( a9 )
  {
    sub_10DC5D0((__int64)&v128, (__int64)"-arch_multiple");
    sub_10DC5D0((__int64)&v128, (__int64)"-final_output");
    sub_10DC5D0((__int64)&v128, a9);
  }
  if ( sub_10DCD30(a6, 0x3E2u) )
    sub_10DC5D0((__int64)&v128, (__int64)"-allow_stack_execute");
  (*(void (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(a1 + 24) + 672LL))(*(_QWORD *)(a1 + 24), a6, &v128);
  v29 = sub_11BCAF0(a6, *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL));
  v31 = v30;
  if ( v30 )
  {
    sub_10DC5D0((__int64)&v128, (__int64)"-mllvm");
    v69 = sub_22970E0(v29, v31, 0x100000000LL);
    ptr.m128i_i32[2] = v70;
    ptr.m128i_i64[0] = v69;
    v119.m128i_i32[0] = sub_2297870(&ptr);
    v121 = 265;
    v122.m128i_i64[0] = (__int64)"-threads=";
    v124 = 259;
    sub_A41580(&ptr, &v122, &v119, v71, 265, 259);
    v72 = sub_10DA6C0(a6, (__int64)&ptr);
    sub_10DC5D0((__int64)&v128, v72);
  }
  if ( sub_112D7B0(*(_QWORD *)(a1 + 24), a6) )
    (*(void (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(a1 + 24) + 640LL))(*(_QWORD *)(a1 + 24), a6, &v128);
  v32 = sub_10DE660(a6, 0xBF0u, 0xBDDu);
  v33 = sub_10DCD30(a6, 0x1ADu);
  if ( !v32 || v33 )
  {
    v64 = *(_QWORD *)(a1 + 24);
    if ( v32 && v33 )
    {
      v88 = j__strlen("builtins");
      sub_11E7860(v64, a6, (__int64)&v128, (__int64)"builtins", v88, 0, 0);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64, void **, bool))(*(_QWORD *)v64 + 776LL))(
        *(_QWORD *)(a1 + 24),
        a6,
        &v128,
        v33 != 0);
      sub_21B7CF0(a6, 3178);
      sub_21B7CF0(a6, 3177);
    }
  }
  sub_10DE660(a6, 0xBF0u, 0xBEBu);
  sub_21B7F70(a6, &v128, 15);
  sub_21B7F70(a6, &v128, 1980);
  sub_10DC500((__int64)&ptr, a6, 0x855u);
  v34 = ptr.m128i_i64[0];
  v105 = a6;
  v102 = v132;
  v35 = ptr.m128i_i64[1];
  v104 = v133;
  while ( v104 != (void **)v34 )
  {
    while ( 1 )
    {
      v36 = **(char ***)(*(_QWORD *)v34 + 48LL);
      v116 = &v118;
      v37 = j__strlen("-F");
      sub_11E46A0(&v116, "-F", (__int64)&asc_230C776[v37]);
      v38 = strlen(v36);
      if ( 0x7FFFFFFFFFFFFFFFLL - v117 < v38 )
        std::__throw_length_error("basic_string::append");
      v39 = v116;
      v40 = v117 + v38;
      v41 = v116 == &v118 ? 15LL : v118.m128i_i64[0];
      if ( v40 > v41 )
      {
        v107 = v117 + v38;
        sub_998B30((__int64)&v116, v117, 0, v36, v38);
        v39 = v116;
        v40 = v107;
      }
      else if ( v38 )
      {
        v42 = (char *)v116 + v117;
        if ( v38 == 1 )
        {
          *v42 = *v36;
          v39 = v116;
        }
        else
        {
          v106 = v117 + v38;
          memcpy(v42, v36, v38);
          v39 = v116;
          v40 = v106;
        }
      }
      v117 = v40;
      v39[v40] = 0;
      v119.m128i_i64[0] = (__int64)&v120;
      if ( v116 == &v118 )
      {
        a8 = _mm_load_si128(&v118);
        v120 = (__m128)a8;
      }
      else
      {
        v119.m128i_i64[0] = (__int64)v116;
        v120.m128_u64[0] = v118.m128i_i64[0];
      }
      v124 = 260;
      v119.m128i_i64[1] = v117;
      v116 = &v118;
      v117 = 0;
      v118.m128i_i8[0] = 0;
      v122.m128i_i64[0] = (__int64)&v119;
      v43 = sub_10DA6C0(v105, (__int64)&v122);
      v44 = (unsigned int)v129;
      v45 = (unsigned int)v129 + 1LL;
      if ( v45 > HIDWORD(v129) )
      {
        v108 = v43;
        sub_2237220(&v128, v130, v45, 8);
        v44 = (unsigned int)v129;
        v43 = v108;
      }
      *((_QWORD *)v128 + v44) = v43;
      LODWORD(v129) = v129 + 1;
      if ( (__m128 *)v119.m128i_i64[0] != &v120 )
        operator delete((void *)v119.m128i_i64[0]);
      if ( v116 != &v118 )
        operator delete(v116);
      v46 = (_QWORD *)(v34 + 8);
      if ( v34 + 8 != v35 )
        break;
LABEL_62:
      v34 = v35;
LABEL_63:
      if ( v104 == (void **)v34 )
        goto LABEL_64;
    }
    if ( !v102 )
    {
      v34 = (unsigned __int64)&v46[((v35 - 16 - v34) >> 3) + 1];
      goto LABEL_63;
    }
    while ( !*v46 || !(unsigned __int8)sub_21B9810(*v46, v102) )
    {
      if ( (_QWORD *)v35 == ++v46 )
        goto LABEL_62;
    }
    v34 = (unsigned __int64)v46;
  }
LABEL_64:
  if ( !sub_10DE660(v105, 0xBF0u, 0xBDDu) )
  {
    v89 = sub_10DCD30(v105, 0x784u);
    if ( v89 )
    {
      v90 = j__strlen("Accelerate");
      v91 = *(const char ***)(v89 + 48);
      v92 = *v91;
      if ( *v91 )
      {
        v93 = j__strlen(*v91);
        if ( v93 == v90 && (!v93 || !memcmp(v92, "Accelerate", v93)) )
        {
LABEL_172:
          sub_10DC5D0((__int64)&v128, (__int64)"-framework");
          sub_10DC5D0((__int64)&v128, (__int64)"Accelerate");
        }
      }
      else if ( !v90 )
      {
        goto LABEL_172;
      }
    }
  }
  v47 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v47 + 60) == 30
    && ((unsigned int)v114 <= 0x25C || (_DWORD)v114 == 605 && (v114 >= 0 || (v114 & 0x7FFFFFFF00000000LL) == 0)) )
  {
    v122.m128i_i64[0] = sub_10DCD30(v105, 0x878u);
    if ( v122.m128i_i64[0] )
    {
      v132 = a1;
      ptr.m128i_i64[0] = (__int64)&v122;
      ptr.m128i_i64[1] = v47 + 16;
      v133 = &v128;
      v134 = v105;
      v65 = j__strlen("/usr/lib");
      v66 = j__strlen("-L");
      sub_11E80E0(&ptr, (__int64)"-L", v66, (__int64)"/usr/lib", v65);
      v67 = j__strlen("/System/Library/Frameworks");
      v68 = j__strlen("-F");
      sub_11E80E0(&ptr, (__int64)"-F", v68, (__int64)"/System/Library/Frameworks", v67);
    }
  }
  ptr = (__m128i)0x2C1uLL;
  if ( !(unsigned __int8)sub_A09E20((unsigned int *)&v114, (unsigned int *)&ptr) || v113 )
  {
    v48 = "@";
    v49 = 0;
  }
  else
  {
    v48 = "-filelist";
    v49 = 1;
  }
  v50 = *(const __m128i **)a5;
  v51 = *(unsigned int *)(a5 + 8);
  v52 = operator new(0x208u);
  sub_1106AE0(v52, a3, a1, v49 & 1, (__int64)v48, v112, (__int64)&v128, v50, v51, (__int64)a4, 1, 0);
  ptr.m128i_i64[0] = (__int64)&v132;
  ptr.m128i_i64[1] = 0x1000000000LL;
  if ( (_DWORD)v126 )
    sub_10E02C0((char ***)&ptr, (char ***)&v125);
  sub_10E02C0((char ***)(v52 + 256), (char ***)&ptr);
  if ( (__int64 *)ptr.m128i_i64[0] != &v132 )
    free((void *)ptr.m128i_i64[0]);
  ptr.m128i_i64[0] = v52;
  sub_118A0F0(a2, ptr.m128i_i64, si128, *(double *)a8.m128i_i64);
  v53 = (_QWORD *)ptr.m128i_i64[0];
  if ( ptr.m128i_i64[0] )
  {
    v54 = *(void (__fastcall **)(__int64))(*(_QWORD *)ptr.m128i_i64[0] + 8LL);
    if ( (char *)v54 == (char *)sub_10D4290 )
    {
      v55 = *(_QWORD *)(ptr.m128i_i64[0] + 464);
      v56 = *(_QWORD *)(ptr.m128i_i64[0] + 456);
      *(_QWORD *)ptr.m128i_i64[0] = &off_2BA8F30;
      if ( v55 != v56 )
      {
        do
        {
          if ( *(_BYTE *)(v56 + 32) && *(_QWORD *)v56 != v56 + 16 )
            operator delete(*(void **)v56);
          v56 += 40;
        }
        while ( v55 != v56 );
        v56 = v53[57];
      }
      if ( v56 )
        operator delete((void *)v56);
      v57 = (void *)v53[54];
      if ( v57 )
        operator delete(v57);
      v58 = (_QWORD *)v53[50];
      if ( v58 != v53 + 52 )
        operator delete(v58);
      v59 = (_QWORD *)v53[32];
      if ( v59 != v53 + 34 )
        free(v59);
      v60 = (void **)v53[29];
      v61 = (void **)v53[28];
      if ( v60 != v61 )
      {
        do
        {
          while ( *v61 != v61 + 2 )
          {
            operator delete(*v61);
            v61 += 4;
            if ( v60 == v61 )
            {
              v61 = (void **)v53[28];
              goto LABEL_92;
            }
          }
          v61 += 4;
        }
        while ( v60 != v61 );
        v61 = (void **)v53[28];
      }
LABEL_92:
      if ( v61 )
        operator delete(v61);
      v62 = (void *)v53[25];
      if ( v62 )
        operator delete(v62);
      v63 = (_QWORD *)v53[7];
      if ( v63 != v53 + 9 )
        free(v63);
      operator delete(v53, 0x208u);
    }
    else
    {
      v54(ptr.m128i_i64[0]);
    }
  }
  if ( *(__int64 **)v135 != &v136 )
    free(*(void **)v135);
  if ( v128 != v130 )
    free(v128);
  if ( v125 != v127 )
    free(v125);
}
