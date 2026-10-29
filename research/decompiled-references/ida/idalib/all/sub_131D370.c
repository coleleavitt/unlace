__int64 __fastcall sub_131D370(__int64 a1, void (__fastcall *a2)(__int64, _QWORD *), __int64 a3)
{
  _BYTE *v5; // rsi
  __int64 v6; // rdx
  __m128i *v7; // rcx
  bool v8; // al
  __m128i *v9; // rcx
  int v10; // ecx
  int v11; // ecx
  char v12; // al
  char v13; // al
  __int64 v14; // rax
  bool v15; // al
  __m128i *v16; // rdi
  char v17; // al
  __m128i *v18; // rcx
  bool v19; // al
  __m128i *v20; // rcx
  char v21; // al
  __int64 v22; // rax
  bool v23; // r14
  __m128i *v24; // rdi
  size_t v25; // rax
  char v26; // al
  __int64 v27; // r14
  size_t v28; // rax
  size_t v29; // r9
  unsigned __int64 v30; // rcx
  size_t v31; // r8
  _BYTE *v32; // rdi
  _BYTE *v33; // rcx
  size_t v34; // r9
  unsigned __int64 v35; // rax
  _BYTE *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 j; // rbp
  __int64 v40; // rbp
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // r14
  unsigned __int64 v45; // rbp
  int *v46; // r9
  unsigned __int64 v47; // r10
  unsigned __int64 v48; // r15
  _DWORD *v49; // rax
  int *v50; // r9
  _DWORD *v51; // r10
  char v52; // al
  int *v53; // r9
  char v54; // al
  int *v55; // r9
  char v56; // al
  int *v57; // r9
  char v58; // al
  int *v59; // r9
  char v60; // al
  int *v61; // r9
  char v62; // al
  int *v63; // r9
  char v64; // al
  int *v65; // r9
  char v66; // al
  int *v67; // r9
  char v68; // al
  int *v69; // r9
  char v70; // al
  _DWORD *v71; // rax
  int *v72; // r9
  _DWORD *v73; // r10
  char v74; // al
  int *v75; // rdx
  char v76; // al
  __int64 v77; // rbp
  __int64 k; // r14
  int v79; // edx
  __int64 result; // rax
  __int64 v81; // r14
  __int64 m; // rbp
  int *v83; // r9
  char v84; // r11
  unsigned int v85; // edx
  char v86; // r11
  unsigned int v87; // edx
  _BOOL4 v88; // edx
  _BOOL4 v89; // edx
  size_t v90; // rax
  size_t v91; // rax
  size_t v92; // rax
  size_t v93; // rax
  __int64 v94; // r8
  __int64 v95; // r9
  size_t v96; // rax
  size_t v97; // rax
  size_t v98; // rax
  size_t v100; // [rsp+10h] [rbp-118h]
  size_t v101; // [rsp+10h] [rbp-118h]
  __m128i *v102; // [rsp+18h] [rbp-110h]
  bool v103; // [rsp+18h] [rbp-110h]
  __m128i *v104; // [rsp+18h] [rbp-110h]
  void *i; // [rsp+18h] [rbp-110h]
  size_t v106; // [rsp+20h] [rbp-108h]
  size_t v107; // [rsp+20h] [rbp-108h]
  size_t v108; // [rsp+20h] [rbp-108h]
  size_t v109; // [rsp+28h] [rbp-100h]
  void *v110; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v111; // [rsp+38h] [rbp-F0h]
  __m128i v112; // [rsp+40h] [rbp-E8h] BYREF
  void *v113; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v114; // [rsp+58h] [rbp-D0h]
  __m128i v115; // [rsp+60h] [rbp-C8h] BYREF
  void *v116; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v117; // [rsp+78h] [rbp-B0h]
  __m128i v118; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v119; // [rsp+90h] [rbp-98h] BYREF
  __m128i v120; // [rsp+A0h] [rbp-88h] BYREF
  __int16 v121; // [rsp+B0h] [rbp-78h]
  __m128i v122; // [rsp+C0h] [rbp-68h] BYREF
  _BYTE v123[16]; // [rsp+D0h] [rbp-58h] BYREF
  __int16 v124; // [rsp+E0h] [rbp-48h]

  v5 = *(_BYTE **)(a1 + 144);
  v6 = (__int64)&v5[*(_QWORD *)(a1 + 152)];
  v116 = &v118;
  sub_12FAA20(&v116, v5, v6);
  v7 = (__m128i *)v116;
  v119.m128i_i64[0] = (__int64)&v120;
  if ( v116 == &v118 )
  {
    v7 = &v120;
    v120 = _mm_load_si128(&v118);
  }
  else
  {
    v119.m128i_i64[0] = (__int64)v116;
    v120.m128i_i64[0] = v118.m128i_i64[0];
  }
  v102 = v7;
  v116 = &v118;
  v119.m128i_i64[1] = v117;
  v100 = v117;
  v117 = 0;
  v118.m128i_i8[0] = 0;
  v122.m128i_i64[0] = (__int64)v123;
  v122.m128i_i64[1] = 0;
  v123[0] = 0;
  v8 = sub_1302CC0((__int64)&v119, (__int64)&v122);
  v9 = v102;
  if ( v8 )
  {
    sub_12FAA20(&v122, v102, (__int64)v102->m128i_i64 + v100);
    sub_12FD520(a2, a3, 17867, (__int64)&v122);
    if ( (_BYTE *)v122.m128i_i64[0] != v123 )
      operator delete((void *)v122.m128i_i64[0]);
    v9 = (__m128i *)v119.m128i_i64[0];
  }
  if ( v9 != &v120 )
    operator delete(v9);
  if ( v116 != &v118 )
    operator delete(v116);
  if ( (*(_BYTE *)(a1 + 280) & 0x10) != 0 )
  {
    v122.m128i_i8[0] = 1;
    sub_12FD380((__int64)&v122, a2, a3, 32903, 1);
    if ( (*(_BYTE *)(a1 + 280) & 0x10) != 0 )
    {
      v122.m128i_i8[0] = 0;
      sub_12FD320((__int64)&v122, a2, a3, 25283, 1);
    }
  }
  v10 = *(_DWORD *)(a1 + 284);
  if ( v10 != 604800 )
    sub_12FD440((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 17674, v10);
  v11 = *(_DWORD *)(a1 + 288);
  if ( v11 != 2678400 )
    sub_12FD440((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 17651, v11);
  if ( *(_QWORD *)(a1 + 296) )
  {
    v116 = *(void **)(a1 + 296);
    v124 = 267;
    v122.m128i_i64[0] = (__int64)&v116;
    v93 = j__strlen("-fbuild-session-timestamp=");
    v121 = 261;
    v119.m128i_i64[0] = (__int64)"-fbuild-session-timestamp=";
    v119.m128i_i64[1] = v93;
    sub_12FD590((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, &v119, &v122, v94, v95);
  }
  if ( (*(_BYTE *)(a1 + 624) & 0x20) != 0 )
  {
    v92 = j__strlen("-fmodules-validate-once-per-build-session");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-fmodules-validate-once-per-build-session";
    v122.m128i_i64[1] = v92;
    a2(a3, &v122);
  }
  if ( (*(_BYTE *)(a1 + 625) & 8) == 0 )
  {
    v122.m128i_i64[1] = j__strlen("-fmodules-disable-diagnostic-validation");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-fmodules-disable-diagnostic-validation";
    a2(a3, &v122);
  }
  v12 = *(_BYTE *)(a1 + 624);
  if ( v12 >= 0 )
  {
    v122.m128i_i8[0] = 0;
    sub_12FD320((__int64)&v122, a2, a3, 23697, 0);
    v12 = *(_BYTE *)(a1 + 624);
  }
  if ( (v12 & 0x40) != 0 )
  {
    v122.m128i_i8[0] = 1;
    sub_12FD380((__int64)&v122, a2, a3, 17974, 1);
  }
  v13 = *(_BYTE *)(a1 + 625);
  if ( (v13 & 0x10) != 0 )
  {
    v122.m128i_i8[0] = 1;
    sub_12FD380((__int64)&v122, a2, a3, 17743, 1);
    v13 = *(_BYTE *)(a1 + 625);
    if ( (v13 & 0x10) != 0 )
    {
      v122.m128i_i8[0] = 0;
      sub_12FD320((__int64)&v122, a2, a3, 23869, 1);
      v13 = *(_BYTE *)(a1 + 625);
    }
  }
  if ( (v13 & 0x20) != 0 )
  {
    v122.m128i_i8[0] = 1;
    sub_12FD380((__int64)&v122, a2, a3, 17777, 1);
    v13 = *(_BYTE *)(a1 + 625);
    if ( (v13 & 0x20) != 0 )
    {
      v122.m128i_i8[0] = 0;
      sub_12FD320((__int64)&v122, a2, a3, 23906, 1);
      v13 = *(_BYTE *)(a1 + 625);
    }
  }
  if ( v13 >= 0 )
  {
    v122.m128i_i64[1] = j__strlen("-fno-modules-prune-non-affecting-module-map-files");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-fno-modules-prune-non-affecting-module-map-files";
    a2(a3, &v122);
    v13 = *(_BYTE *)(a1 + 625);
  }
  if ( (v13 & 1) != 0 )
  {
    v122.m128i_i64[1] = j__strlen("-fvalidate-ast-input-files-content");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-fvalidate-ast-input-files-content";
    a2(a3, &v122);
    v13 = *(_BYTE *)(a1 + 625);
  }
  if ( (v13 & 2) != 0 )
  {
    v122.m128i_i64[1] = j__strlen("-fforce-check-cxx20-modules-input-files");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-fforce-check-cxx20-modules-input-files";
    a2(a3, &v122);
    if ( (*(_BYTE *)(a1 + 280) & 2) == 0 )
      goto LABEL_31;
  }
  else if ( (*(_BYTE *)(a1 + 280) & 2) == 0 )
  {
    goto LABEL_31;
  }
  v90 = j__strlen("-fimplicit-module-maps");
  v124 = 261;
  v122.m128i_i64[0] = (__int64)"-fimplicit-module-maps";
  v122.m128i_i64[1] = v90;
  a2(a3, &v122);
LABEL_31:
  if ( (*(_BYTE *)(a1 + 626) & 0x10) == 0 )
  {
    v122.m128i_i8[0] = 1;
    sub_12FD380((__int64)&v122, a2, a3, 17325, 0);
    if ( (*(_BYTE *)(a1 + 626) & 0x10) == 0 )
    {
      v122.m128i_i8[0] = 0;
      sub_12FD320((__int64)&v122, a2, a3, 23578, 0);
    }
  }
  v110 = &v112;
  sub_12FAA20(&v110, *(_BYTE **)a1, *(_QWORD *)a1 + *(_QWORD *)(a1 + 8));
  v113 = &v115;
  if ( v110 == &v112 )
  {
    v115 = _mm_load_si128(&v112);
  }
  else
  {
    v113 = v110;
    v115.m128i_i64[0] = v112.m128i_i64[0];
  }
  v14 = v111;
  v111 = 0;
  v112.m128i_i8[0] = 0;
  v114 = v14;
  v110 = &v112;
  sub_12FB750(&v122, "/");
  v15 = sub_1302CC0((__int64)&v113, (__int64)&v122);
  if ( (_BYTE *)v122.m128i_i64[0] != v123 )
  {
    v103 = v15;
    operator delete((void *)v122.m128i_i64[0]);
    v15 = v103;
  }
  v16 = (__m128i *)v113;
  if ( v15 )
  {
    v116 = &v118;
    sub_12FAA20(&v116, v113, (__int64)v113 + v114);
    v119.m128i_i64[0] = (__int64)&v116;
    v121 = 260;
    v91 = j__strlen("-isysroot");
    v122.m128i_i64[0] = (__int64)"-isysroot";
    v124 = 261;
    v122.m128i_i64[1] = v91;
    a2(a3, &v122);
    a2(a3, &v119);
    if ( v116 != &v118 )
      operator delete(v116);
    v16 = (__m128i *)v113;
  }
  if ( v16 != &v115 )
    operator delete(v16);
  if ( v110 != &v112 )
    operator delete(v110);
  v17 = *(_BYTE *)(a1 + 624);
  if ( (v17 & 1) == 0 )
  {
    v122.m128i_i64[1] = j__strlen("-nobuiltininc");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-nobuiltininc";
    a2(a3, &v122);
    v17 = *(_BYTE *)(a1 + 624);
  }
  if ( (v17 & 4) == 0 )
  {
    v122.m128i_i64[1] = j__strlen("-nostdinc++");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-nostdinc++";
    a2(a3, &v122);
  }
  v116 = &v118;
  sub_12FAA20(&v116, *(_BYTE **)(a1 + 80), *(_QWORD *)(a1 + 80) + *(_QWORD *)(a1 + 88));
  v18 = (__m128i *)v116;
  v119.m128i_i64[0] = (__int64)&v120;
  if ( v116 == &v118 )
  {
    v18 = &v120;
    v120 = _mm_load_si128(&v118);
  }
  else
  {
    v119.m128i_i64[0] = (__int64)v116;
    v120.m128i_i64[0] = v118.m128i_i64[0];
  }
  v104 = v18;
  v119.m128i_i64[1] = v117;
  v101 = v117;
  v116 = &v118;
  v117 = 0;
  v118.m128i_i8[0] = 0;
  v122.m128i_i64[0] = (__int64)v123;
  v122.m128i_i64[1] = 0;
  v123[0] = 0;
  v19 = sub_1302CC0((__int64)&v119, (__int64)&v122);
  v20 = v104;
  if ( v19 )
  {
    sub_12FAA20(&v122, v104, (__int64)v104->m128i_i64 + v101);
    sub_12FD520(a2, a3, 58149, (__int64)&v122);
    if ( (_BYTE *)v122.m128i_i64[0] != v123 )
      operator delete((void *)v122.m128i_i64[0]);
    v20 = (__m128i *)v119.m128i_i64[0];
  }
  if ( v20 != &v120 )
    operator delete(v20);
  if ( v116 != &v118 )
    operator delete(v116);
  if ( (*(_BYTE *)(a1 + 624) & 0x10) != 0 )
  {
    v122.m128i_i64[1] = j__strlen("-v");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-v";
    a2(a3, &v122);
  }
  v21 = *(_BYTE *)(a1 + 280);
  if ( (v21 & 4) != 0 )
  {
    v122.m128i_i64[1] = j__strlen("-fmodule-map-file-home-is-cwd");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-fmodule-map-file-home-is-cwd";
    a2(a3, &v122);
    v21 = *(_BYTE *)(a1 + 280);
  }
  if ( (v21 & 8) != 0 )
  {
    v122.m128i_i64[1] = j__strlen("-fmodule-file-home-is-cwd");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-fmodule-file-home-is-cwd";
    a2(a3, &v122);
  }
  v116 = &v118;
  sub_12FAA20(&v116, *(_BYTE **)(a1 + 248), *(_QWORD *)(a1 + 248) + *(_QWORD *)(a1 + 256));
  v119.m128i_i64[0] = (__int64)&v120;
  if ( v116 == &v118 )
  {
    v120 = _mm_load_si128(&v118);
  }
  else
  {
    v119.m128i_i64[0] = (__int64)v116;
    v120.m128i_i64[0] = v118.m128i_i64[0];
  }
  v22 = v117;
  v117 = 0;
  v118.m128i_i8[0] = 0;
  v119.m128i_i64[1] = v22;
  v116 = &v118;
  sub_12FB750(&v122, "raw");
  v23 = sub_1302CC0((__int64)&v119, (__int64)&v122);
  if ( (_BYTE *)v122.m128i_i64[0] != v123 )
    operator delete((void *)v122.m128i_i64[0]);
  v24 = (__m128i *)v119.m128i_i64[0];
  if ( v23 )
  {
    v122.m128i_i64[0] = (__int64)v123;
    sub_12FAA20(&v122, v119.m128i_i64[0], v119.m128i_i64[0] + v119.m128i_i64[1]);
    sub_12FD3E0((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 17120, (__int64)&v122);
    if ( (_BYTE *)v122.m128i_i64[0] != v123 )
      operator delete((void *)v122.m128i_i64[0]);
    v24 = (__m128i *)v119.m128i_i64[0];
  }
  if ( v24 != &v120 )
    operator delete(v24);
  if ( v116 != &v118 )
    operator delete(v116);
  if ( (*(_BYTE *)(a1 + 624) & 2) == 0 )
  {
    v25 = j__strlen("-nostdsysteminc");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-nostdsysteminc";
    v122.m128i_i64[1] = v25;
    a2(a3, &v122);
  }
  if ( (*(_BYTE *)(a1 + 280) & 1) != 0 )
  {
    v98 = j__strlen("-fdisable-module-hash");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-fdisable-module-hash";
    v122.m128i_i64[1] = v98;
    a2(a3, &v122);
  }
  v26 = *(_BYTE *)(a1 + 626);
  if ( (v26 & 1) != 0 )
  {
    v97 = j__strlen("-fmodules-hash-content");
    v124 = 261;
    v122.m128i_i64[1] = v97;
    v122.m128i_i64[0] = (__int64)"-fmodules-hash-content";
    a2(a3, &v122);
    v26 = *(_BYTE *)(a1 + 626);
  }
  if ( (v26 & 4) != 0 )
  {
    v96 = j__strlen("-fmodules-strict-context-hash");
    v124 = 261;
    v122.m128i_i64[0] = (__int64)"-fmodules-strict-context-hash";
    v122.m128i_i64[1] = v96;
    a2(a3, &v122);
  }
  if ( (*(_BYTE *)(a1 + 624) & 8) != 0 )
  {
    v122.m128i_i64[0] = (__int64)"libc++";
    v124 = 259;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xCEAu, &v122);
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    v124 = 260;
    v122.m128i_i64[0] = a1 + 112;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x3B4u, &v122);
  }
  v27 = *(_QWORD *)(a1 + 200);
  for ( i = (void *)(a1 + 184); (void *)v27 != i; v27 = std::_Rb_tree_increment(v27) )
  {
    while ( 1 )
    {
      v116 = &v118;
      sub_12FAA20(&v116, *(_BYTE **)(v27 + 32), *(_QWORD *)(v27 + 32) + *(_QWORD *)(v27 + 40));
      v28 = v117;
      if ( v117 == 0x7FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      v29 = v117 + 1;
      v30 = v116 == &v118 ? 15LL : v118.m128i_i64[0];
      if ( v29 > v30 )
      {
        v109 = v117 + 1;
        v107 = v117;
        sub_998B30((__int64)&v116, v117, 0, "=", 1u);
        v29 = v109;
        v28 = v107;
      }
      else
      {
        *((_BYTE *)v116 + v117) = 61;
      }
      v117 = v29;
      *((_BYTE *)v116 + v28 + 1) = 0;
      v31 = *(_QWORD *)(v27 + 72);
      v32 = v116;
      v33 = *(_BYTE **)(v27 + 64);
      v34 = v31 + v117;
      v35 = v116 == &v118 ? 15LL : v118.m128i_i64[0];
      if ( v34 > v35 )
      {
        v108 = v31 + v117;
        sub_998B30((__int64)&v116, v117, 0, v33, v31);
        v32 = v116;
        v34 = v108;
      }
      else if ( v31 )
      {
        v36 = (char *)v116 + v117;
        if ( v31 == 1 )
        {
          *v36 = *v33;
          v32 = v116;
        }
        else
        {
          v106 = v31 + v117;
          memcpy(v36, *(const void **)(v27 + 64), *(_QWORD *)(v27 + 72));
          v32 = v116;
          v34 = v106;
        }
      }
      v117 = v34;
      v32[v34] = 0;
      v119.m128i_i64[0] = (__int64)&v120;
      if ( v116 == &v118 )
      {
        v120 = _mm_load_si128(&v118);
      }
      else
      {
        v119.m128i_i64[0] = (__int64)v116;
        v120.m128i_i64[0] = v118.m128i_i64[0];
      }
      v37 = v117;
      v117 = 0;
      v119.m128i_i64[1] = v37;
      v116 = &v118;
      v118.m128i_i8[0] = 0;
      v124 = 260;
      v122.m128i_i64[0] = (__int64)&v119;
      sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x3A7u, &v122);
      if ( (__m128i *)v119.m128i_i64[0] != &v120 )
        operator delete((void *)v119.m128i_i64[0]);
      if ( v116 == &v118 )
        break;
      operator delete(v116);
      v27 = std::_Rb_tree_increment(v27);
      if ( i == (void *)v27 )
        goto LABEL_97;
    }
  }
LABEL_97:
  v38 = *(_QWORD *)(a1 + 232);
  for ( j = *(_QWORD *)(a1 + 224); v38 != j; j += 32 )
  {
    v122.m128i_i64[0] = j;
    v124 = 260;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x651u, &v122);
  }
  v40 = *(_QWORD *)(a1 + 328);
  v41 = v40 + 16LL * *(unsigned int *)(a1 + 336);
  while ( v41 != v40 )
  {
    v42 = *(_QWORD *)v40;
    v43 = *(unsigned int *)(v40 + 8);
    v40 += 16;
    v124 = 261;
    v122.m128i_i64[0] = v42;
    v122.m128i_i64[1] = v43;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x3BDu, &v122);
  }
  v44 = *(_QWORD *)(a1 + 32);
  v45 = *(_QWORD *)(a1 + 40);
  if ( v45 <= v44 )
    goto LABEL_141;
  while ( 1 )
  {
    v122.m128i_i32[0] = 1;
    if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, (int *)(v44 + 32)) == (_DWORD *)((char *)v122.m128i_i64 + 4)
      || (*(_BYTE *)(v44 + 36) & 2) == 0 )
    {
      break;
    }
    if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v46) == (_DWORD *)((char *)v122.m128i_i64 + 4) )
      goto LABEL_149;
    v85 = 1980;
    if ( (v84 & 1) == 0 )
    {
      if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v83) == (_DWORD *)((char *)v122.m128i_i64 + 4) )
      {
        do
        {
LABEL_149:
          while ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v83) == (_DWORD *)((char *)v122.m128i_i64 + 4) )
            ;
        }
        while ( (v86 & 1) != 0 );
      }
      v85 = 2175;
    }
    v122.m128i_i64[0] = v44;
    v44 += 40LL;
    v124 = 260;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, v85, &v122);
    if ( v45 <= v44 )
      goto LABEL_141;
  }
  v48 = v47;
  if ( v45 > v44 )
  {
    while ( 1 )
    {
      v122.m128i_i64[0] = 0x100000008LL;
      v49 = sub_12FA150(&v122, (__int64)&v122.m128i_i64[1], v46);
      if ( v49 == v51 )
        break;
      v52 = *(_BYTE *)(v48 + 36);
      if ( (v52 & 1) != 0 || (v52 & 2) == 0 )
        break;
      v89 = *(_DWORD *)(v48 + 32) == 8;
      v124 = 260;
      v122.m128i_i64[0] = v48;
      sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, v89 + 2172, &v122);
      if ( v45 <= v48 + 40 )
        goto LABEL_141;
      v46 = (int *)(v48 + 72);
      v48 += 40LL;
    }
    if ( v48 < v45 )
    {
      while ( 1 )
      {
        v122.m128i_i32[0] = 8;
        if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v50) == (_DWORD *)((char *)v122.m128i_i64 + 4) )
          break;
        v54 = *(_BYTE *)(v48 + 36);
        if ( (v54 & 1) != 0 || (v54 & 2) == 0 )
          break;
        v124 = 260;
        v122.m128i_i64[0] = v48;
        sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x853u, &v122);
        if ( v45 <= v48 + 40 )
          goto LABEL_141;
        v50 = (int *)(v48 + 72);
        v48 += 40LL;
      }
      if ( v45 > v48 )
      {
        while ( 1 )
        {
          v122.m128i_i32[0] = 0;
          if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v53) == (_DWORD *)((char *)v122.m128i_i64 + 4) )
            break;
          v56 = *(_BYTE *)(v48 + 36);
          if ( (v56 & 1) != 0 || (v56 & 2) == 0 )
            break;
          v124 = 260;
          v122.m128i_i64[0] = v48;
          sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x877u, &v122);
          if ( v45 <= v48 + 40 )
            goto LABEL_141;
          v53 = (int *)(v48 + 72);
          v48 += 40LL;
        }
        if ( v45 > v48 )
        {
          while ( 1 )
          {
            v122.m128i_i32[0] = 2;
            if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v55) == (_DWORD *)((char *)v122.m128i_i64 + 4) )
              break;
            v58 = *(_BYTE *)(v48 + 36);
            if ( (v58 & 1) != 0 )
              break;
            v122.m128i_i64[0] = v48;
            v124 = 260;
            v87 = 2170;
            if ( (v58 & 2) == 0 )
              v87 = 2174;
            v48 += 40LL;
            sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, v87, &v122);
            if ( v45 <= v48 )
              goto LABEL_141;
            v55 = (int *)(v48 + 32);
          }
          if ( v48 < v45 )
          {
            while ( 1 )
            {
              v122.m128i_i32[0] = 2;
              if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v57) == (_DWORD *)((char *)v122.m128i_i64 + 4) )
                break;
              v60 = *(_BYTE *)(v48 + 36);
              if ( (v60 & 1) == 0 || (v60 & 2) == 0 )
                break;
              v124 = 260;
              v122.m128i_i64[0] = v48;
              sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x855u, &v122);
              if ( v45 <= v48 + 40 )
                goto LABEL_141;
              v57 = (int *)(v48 + 72);
              v48 += 40LL;
            }
            if ( v48 < v45 )
            {
              while ( 1 )
              {
                v122.m128i_i32[0] = 2;
                if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v59) == (_DWORD *)((char *)v122.m128i_i64 + 4) )
                  break;
                v62 = *(_BYTE *)(v48 + 36);
                if ( (v62 & 1) == 0 || (v62 & 2) != 0 )
                  break;
                v124 = 260;
                v122.m128i_i64[0] = v48;
                sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x854u, &v122);
                if ( v45 <= v48 + 40 )
                  goto LABEL_141;
                v59 = (int *)(v48 + 72);
                v48 += 40LL;
              }
              if ( v48 < v45 )
              {
                while ( 1 )
                {
                  v122.m128i_i32[0] = 4;
                  if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v61) == (_DWORD *)((char *)v122.m128i_i64 + 4) )
                    break;
                  v64 = *(_BYTE *)(v48 + 36);
                  if ( (v64 & 1) != 0 || (v64 & 2) == 0 )
                    break;
                  v122.m128i_i64[0] = v48;
                  v124 = 260;
                  sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xA7u, &v122);
                  if ( v45 <= v48 + 40 )
                    goto LABEL_141;
                  v61 = (int *)(v48 + 72);
                  v48 += 40LL;
                }
                if ( v48 < v45 )
                {
                  while ( 1 )
                  {
                    v122.m128i_i32[0] = 5;
                    if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v63) == (_DWORD *)((char *)v122.m128i_i64 + 4) )
                      break;
                    v66 = *(_BYTE *)(v48 + 36);
                    if ( (v66 & 1) != 0 || (v66 & 2) == 0 )
                      break;
                    v122.m128i_i64[0] = v48;
                    v124 = 260;
                    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xF6u, &v122);
                    if ( v45 <= v48 + 40 )
                      goto LABEL_141;
                    v63 = (int *)(v48 + 72);
                    v48 += 40LL;
                  }
                  if ( v48 < v45 )
                  {
                    while ( 1 )
                    {
                      v122.m128i_i32[0] = 6;
                      if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v65) == (_DWORD *)((char *)v122.m128i_i64 + 4) )
                        break;
                      v68 = *(_BYTE *)(v48 + 36);
                      if ( (v68 & 1) != 0 || (v68 & 2) == 0 )
                        break;
                      v122.m128i_i64[0] = v48;
                      v124 = 260;
                      sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xBFDu, &v122);
                      if ( v45 <= v48 + 40 )
                        goto LABEL_141;
                      v65 = (int *)(v48 + 72);
                      v48 += 40LL;
                    }
                    if ( v48 < v45 )
                    {
                      while ( 1 )
                      {
                        v122.m128i_i32[0] = 7;
                        if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v67) == (_DWORD *)((char *)v122.m128i_i64
                                                                                              + 4) )
                          break;
                        v70 = *(_BYTE *)(v48 + 36);
                        if ( (v70 & 1) != 0 || (v70 & 2) == 0 )
                          break;
                        v122.m128i_i64[0] = v48;
                        v124 = 260;
                        sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xBFEu, &v122);
                        if ( v45 <= v48 + 40 )
                          goto LABEL_141;
                        v67 = (int *)(v48 + 72);
                        v48 += 40LL;
                      }
                      if ( v48 < v45 )
                      {
                        while ( 1 )
                        {
                          v122.m128i_i64[0] = 0x300000002LL;
                          v71 = sub_12FA150(&v122, (__int64)&v122.m128i_i64[1], v69);
                          if ( v71 == v73 )
                            break;
                          v74 = *(_BYTE *)(v48 + 36);
                          if ( (v74 & 1) != 0 || (v74 & 2) == 0 )
                            break;
                          v88 = *(_DWORD *)(v48 + 32) == 2;
                          v124 = 260;
                          v122.m128i_i64[0] = v48;
                          sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 2 * v88 + 2163, &v122);
                          if ( v45 <= v48 + 40 )
                            goto LABEL_141;
                          v69 = (int *)(v48 + 72);
                          v48 += 40LL;
                        }
                        if ( v48 < v45 )
                        {
                          v75 = v72;
                          while ( 1 )
                          {
                            v122.m128i_i32[0] = 2;
                            if ( sub_12FA150(&v122, (__int64)v122.m128i_i64 + 4, v75) == (_DWORD *)((char *)v122.m128i_i64
                                                                                                  + 4) )
                              break;
                            v76 = *(_BYTE *)(v48 + 36);
                            if ( (v76 & 1) == 0 )
                              break;
                            if ( (v76 & 2) == 0 )
                              break;
                            v124 = 260;
                            v122.m128i_i64[0] = v48;
                            sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x874u, &v122);
                            if ( v45 <= v48 + 40 )
                              break;
                            v75 = (int *)(v48 + 72);
                            v48 += 40LL;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_141:
  v77 = *(_QWORD *)(a1 + 64);
  for ( k = *(_QWORD *)(a1 + 56); v77 != k; k += 40 )
  {
    v79 = -(*(_BYTE *)(k + 32) == 0);
    v124 = 260;
    v122.m128i_i64[0] = k;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, (v79 & 0xFFFFFEDD) + 3318, &v122);
  }
  result = a1;
  v81 = *(_QWORD *)(a1 + 608);
  for ( m = *(_QWORD *)(a1 + 600);
        v81 != m;
        result = sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0x87Bu, &v122) )
  {
    v122.m128i_i64[0] = m;
    m += 32;
    v124 = 260;
  }
  return result;
}
