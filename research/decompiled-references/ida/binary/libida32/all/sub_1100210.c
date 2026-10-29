void __fastcall sub_1100210(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, unsigned int a5)
{
  int v5; // eax
  char v8; // r13
  _QWORD *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // rax
  size_t v17; // r15
  __int64 v18; // rsi
  void **v19; // r13
  void **v20; // rax
  unsigned __int64 v21; // rsi
  void **v22; // r14
  void **v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int32 v29; // eax
  int v30; // edi
  char *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // edi
  char *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // r15
  size_t v40; // rbx
  __int64 v41; // rbp
  __int64 v42; // rax
  const void *v43; // r14
  unsigned __int64 v44; // r13
  const void *v45; // r14
  const char *v46; // r14
  const char *v47; // r13
  size_t v48; // rax
  const void *v49; // rbx
  size_t v50; // rbp
  const char *v51; // rbp
  const char *v52; // rbp
  const char *v53; // rbp
  size_t v54; // rax
  __int64 v55; // rax
  size_t v56; // rax
  __int64 v57; // rax
  size_t v58; // r13
  size_t v59; // rax
  size_t v60; // r14
  unsigned __int64 v61; // rax
  void *v62; // rax
  __int64 v63; // rax
  size_t v64; // rax
  size_t v65; // rax
  size_t v66; // rax
  void **v67; // r12
  void **v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  size_t v77; // rax
  __int64 v78; // rsi
  size_t v79; // rax
  __int64 v80; // rax
  char *v81; // rdi
  __int64 v84; // [rsp+8h] [rbp-2A0h]
  unsigned __int64 v85; // [rsp+10h] [rbp-298h]
  __int64 v86; // [rsp+10h] [rbp-298h]
  void *v88; // [rsp+30h] [rbp-278h] BYREF
  __int64 v89; // [rsp+38h] [rbp-270h]
  _BYTE v90[16]; // [rsp+40h] [rbp-268h] BYREF
  __m128i v91; // [rsp+50h] [rbp-258h] BYREF
  _BYTE v92[16]; // [rsp+60h] [rbp-248h] BYREF
  __int16 v93; // [rsp+70h] [rbp-238h]
  __m128i v94; // [rsp+80h] [rbp-228h] BYREF
  _BYTE v95[16]; // [rsp+90h] [rbp-218h] BYREF
  __int16 v96; // [rsp+A0h] [rbp-208h]
  void *ptr; // [rsp+B0h] [rbp-1F8h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-1F0h] BYREF
  __int64 v99; // [rsp+C8h] [rbp-1E0h] BYREF
  __int16 v100; // [rsp+D0h] [rbp-1D8h]
  int v101; // [rsp+D8h] [rbp-1D0h]
  _QWORD v102[2]; // [rsp+E0h] [rbp-1C8h] BYREF
  __int64 v103; // [rsp+F0h] [rbp-1B8h] BYREF
  int v104; // [rsp+100h] [rbp-1A8h]
  _QWORD v105[2]; // [rsp+108h] [rbp-1A0h] BYREF
  __int64 v106; // [rsp+118h] [rbp-190h] BYREF
  __int64 v107; // [rsp+128h] [rbp-180h] BYREF
  _QWORD v108[38]; // [rsp+140h] [rbp-168h] BYREF
  _BYTE v109[56]; // [rsp+270h] [rbp-38h] BYREF

  v5 = *(_DWORD *)(a2 + 48);
  if ( (unsigned int)(v5 - 41) <= 1 )
    return;
  if ( (unsigned int)(v5 - 25) > 1 )
  {
    v8 = 0;
  }
  else
  {
    v8 = sub_2193B10(a3, 826, 1165, 1);
    if ( !v8 )
      return;
  }
  memset(v108, 0, sizeof(v108));
  v9 = v108;
  LODWORD(v108[0]) = 1;
  v108[1] = "-fsanitize-coverage-type=1";
  v108[3] = "-fsanitize-coverage-type=2";
  v108[5] = "-fsanitize-coverage-type=3";
  v108[7] = "-fsanitize-coverage-indirect-calls";
  v108[9] = "-fsanitize-coverage-trace-bb";
  v108[11] = "-fsanitize-coverage-trace-cmp";
  v108[13] = "-fsanitize-coverage-trace-div";
  v108[15] = "-fsanitize-coverage-trace-gep";
  v108[17] = "-fsanitize-coverage-8bit-counters";
  v108[19] = "-fsanitize-coverage-trace-pc";
  v108[21] = "-fsanitize-coverage-trace-pc-guard";
  v108[23] = "-fsanitize-coverage-inline-8bit-counters";
  v108[25] = "-fsanitize-coverage-inline-bool-flag";
  v108[27] = "-fsanitize-coverage-pc-table";
  v108[29] = "-fsanitize-coverage-no-prune";
  LODWORD(v108[2]) = 2;
  LODWORD(v108[4]) = 4;
  LODWORD(v108[6]) = 8;
  LODWORD(v108[8]) = 16;
  LODWORD(v108[10]) = 32;
  LODWORD(v108[12]) = 64;
  LODWORD(v108[14]) = 128;
  LODWORD(v108[16]) = 256;
  LODWORD(v108[18]) = 512;
  LODWORD(v108[20]) = 1024;
  LODWORD(v108[22]) = 4096;
  LODWORD(v108[24]) = 0x8000;
  LODWORD(v108[26]) = 0x2000;
  LODWORD(v108[28]) = 2048;
  LODWORD(v108[30]) = 0x4000;
  v108[31] = "-fsanitize-coverage-stack-depth";
  v108[33] = "-fsanitize-coverage-trace-loads";
  v108[35] = "-fsanitize-coverage-trace-stores";
  LODWORD(v108[32]) = 0x10000;
  LODWORD(v108[34]) = 0x20000;
  LODWORD(v108[36]) = (_DWORD)&stru_40000;
  v108[37] = "-fsanitize-coverage-control-flow";
  do
  {
    while ( (*(_DWORD *)(a1 + 224) & *(_DWORD *)v9) == 0 )
    {
      v9 += 2;
      if ( v109 == (_BYTE *)v9 )
        goto LABEL_10;
    }
    v10 = *(unsigned int *)(a4 + 8);
    v11 = v9[1];
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
    {
      v86 = v9[1];
      sub_22134E0(a4, a4 + 16, v10 + 1, 8);
      v10 = *(unsigned int *)(a4 + 8);
      v11 = v86;
    }
    v9 += 2;
    *(_QWORD *)(*(_QWORD *)a4 + 8 * v10) = v11;
    ++*(_DWORD *)(a4 + 8);
  }
  while ( v109 != (_BYTE *)v9 );
LABEL_10:
  sub_10FB7D0(a3, a4, "-fsanitize-coverage-allowlist=", (__int64 *)(a1 + 152));
  sub_10FB7D0(a3, a4, "-fsanitize-coverage-ignorelist=", (__int64 *)(a1 + 176));
  if ( *(_DWORD *)(a1 + 228) )
  {
    v94.m128i_i32[0] = *(_DWORD *)(a1 + 228);
    ptr = "-fsanitize-coverage-stack-depth-callback-min=";
    v100 = 2563;
    si128.m128i_i64[1] = v94.m128i_i64[0];
    v69 = sub_10B6980((__int64)a3, (__int64)&ptr);
    sub_10B8890(a4, v69);
  }
  if ( !v8 )
  {
    LODWORD(ptr) = 1;
    si128.m128i_i64[0] = (__int64)&v99;
    v64 = j__strlen("covered");
    sub_10FB710(&si128, "covered", (__int64)&aEaCovered_0[v64 + 5]);
    v101 = 2;
    v102[0] = &v103;
    v65 = j__strlen("atomics");
    sub_10FB710(v102, "atomics", (__int64)&aAtomics[v65 + 1]);
    v104 = 4;
    v105[0] = &v106;
    v66 = j__strlen("uar");
    sub_10FB710(v105, "uar", (__int64)&aUar[v66]);
    if ( ((unsigned int)ptr & *(_DWORD *)(a1 + 232)) != 0 )
    {
      sub_BE13C0((__int64)&v91, "-fexperimental-sanitize-metadata=", (__int64)&si128);
      v96 = 260;
      v94.m128i_i64[0] = (__int64)&v91;
      v75 = sub_10B6980((__int64)a3, (__int64)&v94);
      sub_10B8890(a4, v75);
      if ( (_BYTE *)v91.m128i_i64[0] != v92 )
        operator delete((void *)v91.m128i_i64[0]);
    }
    if ( (v101 & *(_DWORD *)(a1 + 232)) != 0 )
    {
      sub_BE13C0((__int64)&v91, "-fexperimental-sanitize-metadata=", (__int64)v102);
      v96 = 260;
      v94.m128i_i64[0] = (__int64)&v91;
      v76 = sub_10B6980((__int64)a3, (__int64)&v94);
      sub_10B8890(a4, v76);
      if ( (_BYTE *)v91.m128i_i64[0] != v92 )
        operator delete((void *)v91.m128i_i64[0]);
    }
    if ( (*(_DWORD *)(a1 + 232) & v104) != 0 )
    {
      sub_BE13C0((__int64)&v91, "-fexperimental-sanitize-metadata=", (__int64)v105);
      v96 = 260;
      v94.m128i_i64[0] = (__int64)&v91;
      v74 = sub_10B6980((__int64)a3, (__int64)&v94);
      sub_10B8890(a4, v74);
      if ( (_BYTE *)v91.m128i_i64[0] != v92 )
        operator delete((void *)v91.m128i_i64[0]);
    }
    sub_10FB7D0(a3, a4, "-fexperimental-sanitize-metadata-ignorelist=", (__int64 *)(a1 + 200));
    v67 = (void **)&v107;
    do
    {
      while ( 1 )
      {
        v67 -= 5;
        v68 = (void **)v67[1];
        if ( v68 == v67 + 3 )
          break;
        operator delete(v68);
        if ( v67 == &ptr )
          goto LABEL_13;
      }
    }
    while ( v67 != &ptr );
  }
LABEL_13:
  if ( *(_DWORD *)(a2 + 60) == 15 )
  {
    if ( !sub_10FD210(a1) )
      goto LABEL_268;
    if ( (unsigned __int8)sub_2193B10(a3, 1707, 1346, 1) )
    {
      v77 = j__strlen("ubsan_standalone");
      sub_1109510(&v91, a2, a3, "ubsan_standalone", v77, 1);
      sub_E5B030(&v94, "--dependent-lib=", &v91);
      ptr = &v94;
      v100 = 260;
      v78 = sub_10B6980((__int64)a3, (__int64)&ptr);
      sub_10B8890(a4, v78);
      if ( (_BYTE *)v94.m128i_i64[0] != v95 )
        operator delete((void *)v94.m128i_i64[0]);
      if ( (_BYTE *)v91.m128i_i64[0] != v92 )
        operator delete((void *)v91.m128i_i64[0]);
      if ( (unsigned __int8)sub_12A8F40(a5) )
      {
        v79 = j__strlen("ubsan_standalone_cxx");
        sub_1109510(&v91, a2, a3, "ubsan_standalone_cxx", v79, 1);
        sub_E5B030(&v94, "--dependent-lib=", &v91);
        ptr = &v94;
        v100 = 260;
        v80 = sub_10B6980((__int64)a3, (__int64)&ptr);
        sub_10B8890(a4, v80);
        if ( (_BYTE *)v94.m128i_i64[0] != v95 )
          operator delete((void *)v94.m128i_i64[0]);
        if ( (_BYTE *)v91.m128i_i64[0] != v92 )
          operator delete((void *)v91.m128i_i64[0]);
      }
    }
    if ( *(_DWORD *)(a2 + 60) == 15 )
    {
LABEL_268:
      if ( *(_BYTE *)(a1 + 308) && (unsigned __int8)sub_2193B10(a3, 1707, 1346, 1) )
      {
        v54 = j__strlen("stats_client");
        sub_1109510(&v91, a2, a3, "stats_client", v54, 1);
        sub_E5B030(&v94, "--dependent-lib=", &v91);
        v100 = 260;
        ptr = &v94;
        v55 = sub_10B6980((__int64)a3, (__int64)&ptr);
        sub_10B8890(a4, v55);
        if ( (_BYTE *)v94.m128i_i64[0] != v95 )
          operator delete((void *)v94.m128i_i64[0]);
        if ( (_BYTE *)v91.m128i_i64[0] != v92 )
          operator delete((void *)v91.m128i_i64[0]);
        v56 = j__strlen("stats");
        sub_1109510(&v91, a2, a3, "stats", v56, 1);
        sub_E5B030(&v94, "--dependent-lib=", &v91);
        v100 = 260;
        ptr = &v94;
        v57 = sub_10B6980((__int64)a3, (__int64)&ptr);
        sub_10B8890(a4, v57);
        if ( (_BYTE *)v94.m128i_i64[0] != v95 )
          operator delete((void *)v94.m128i_i64[0]);
        if ( (_BYTE *)v91.m128i_i64[0] != v92 )
          operator delete((void *)v91.m128i_i64[0]);
        v58 = j__strlen("__sanitizer_stats_register");
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
        ptr = &v99;
        v59 = j__strlen("--linker-option=/include:");
        v60 = v59;
        if ( v59 > 0x40 )
        {
          sub_22130D0(&ptr, &v99, v59, 1);
          v81 = (char *)ptr + si128.m128i_i64[0];
        }
        else
        {
          if ( !v59 )
          {
            si128.m128i_i64[0] = 0;
            if ( *(_DWORD *)(a2 + 48) != 37 )
            {
              v61 = 64;
LABEL_211:
              if ( v58 + v60 > v61 )
              {
                sub_22130D0(&ptr, &v99, v58 + v60, 1);
                v60 = si128.m128i_i64[0];
              }
              v62 = ptr;
              if ( v58 )
              {
                memcpy((char *)ptr + v60, "__sanitizer_stats_register", v58);
                v62 = ptr;
                v60 = si128.m128i_i64[0];
              }
              v96 = 261;
              si128.m128i_i64[0] = v60 + v58;
              v94.m128i_i64[0] = (__int64)v62;
              v94.m128i_i64[1] = v60 + v58;
              v63 = sub_10B6980((__int64)a3, (__int64)&v94);
              sub_10B8890(a4, v63);
              if ( ptr != &v99 )
                free(ptr);
              goto LABEL_14;
            }
LABEL_263:
            *((_BYTE *)ptr + v60) = 95;
            v60 = si128.m128i_i64[0] + 1;
            v61 = si128.m128i_u64[1];
            ++si128.m128i_i64[0];
            goto LABEL_211;
          }
          v81 = (char *)&v99;
        }
        memcpy(v81, "--linker-option=/include:", v60);
        v60 += si128.m128i_i64[0];
        v61 = si128.m128i_u64[1];
        si128.m128i_i64[0] = v60;
        if ( *(_DWORD *)(a2 + 48) != 37 )
          goto LABEL_211;
        if ( v60 + 1 > si128.m128i_i64[1] )
        {
          sub_22130D0(&ptr, &v99, v60 + 1, 1);
          v60 = si128.m128i_i64[0];
        }
        goto LABEL_263;
      }
    }
  }
LABEL_14:
  if ( *(_QWORD *)a1 || *(_QWORD *)(a1 + 8) )
  {
    sub_10FD780((__int64)&v91, (__int64 *)a1);
    sub_E5B030(&v94, "-fsanitize=", &v91);
    ptr = &v94;
    v100 = 260;
    v12 = sub_10B6980((__int64)a3, (__int64)&ptr);
    sub_10B8890(a4, v12);
    if ( (_BYTE *)v94.m128i_i64[0] != v95 )
      operator delete((void *)v94.m128i_i64[0]);
    if ( (_BYTE *)v91.m128i_i64[0] != v92 )
      operator delete((void *)v91.m128i_i64[0]);
    if ( *(_QWORD *)(a1 + 16) || *(_QWORD *)(a1 + 24) )
    {
      sub_10FD780((__int64)&v91, (__int64 *)(a1 + 16));
      sub_E5B030(&v94, "-fsanitize-recover=", &v91);
      v100 = 260;
      ptr = &v94;
      v13 = sub_10B6980((__int64)a3, (__int64)&ptr);
      sub_10B8890(a4, v13);
      if ( (_BYTE *)v94.m128i_i64[0] != v95 )
        operator delete((void *)v94.m128i_i64[0]);
      if ( (_BYTE *)v91.m128i_i64[0] != v92 )
        operator delete((void *)v91.m128i_i64[0]);
    }
    if ( *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 40) )
    {
      sub_10FD780((__int64)&v91, (__int64 *)(a1 + 32));
      sub_E5B030(&v94, "-fsanitize-trap=", &v91);
      v100 = 260;
      ptr = &v94;
      v14 = sub_10B6980((__int64)a3, (__int64)&ptr);
      sub_10B8890(a4, v14);
      if ( (_BYTE *)v94.m128i_i64[0] != v95 )
        operator delete((void *)v94.m128i_i64[0]);
      if ( (_BYTE *)v91.m128i_i64[0] != v92 )
        operator delete((void *)v91.m128i_i64[0]);
    }
    if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
    {
      sub_10FD780((__int64)&v91, (__int64 *)(a1 + 48));
      sub_E5B030(&v94, "-fsanitize-merge=", &v91);
      v100 = 260;
      ptr = &v94;
      v15 = sub_10B6980((__int64)a3, (__int64)&ptr);
      sub_10B8890(a4, v15);
      if ( (_BYTE *)v94.m128i_i64[0] != v95 )
        operator delete((void *)v94.m128i_i64[0]);
      if ( (_BYTE *)v91.m128i_i64[0] != v92 )
        operator delete((void *)v91.m128i_i64[0]);
    }
    ptr = &si128.m128i_u64[1];
    si128.m128i_i64[0] = 0x400000000LL;
    sub_FE2500((double **)(a1 + 64), (__m128i **)&ptr);
    v16 = j__strlen(",");
    v90[0] = 0;
    v17 = v16;
    v89 = 0;
    v18 = 32LL * si128.m128i_u32[0];
    v19 = (void **)((char *)ptr + v18);
    v88 = v90;
    if ( ptr != (char *)ptr + v18 )
    {
      v20 = (void **)ptr;
      v21 = v17 * ((v18 >> 5) - 1);
      do
      {
        v21 += (unsigned __int64)v20[1];
        v20 += 4;
      }
      while ( v19 != v20 );
      v22 = (void **)((char *)ptr + 32);
      sub_971EF0((__int64)&v88, v21);
      sub_9CA820(&v88, *(v22 - 4), (size_t)*(v22 - 3));
      if ( v19 != v22 )
      {
        if ( 0x7FFFFFFFFFFFFFFFLL - v89 < v17 )
LABEL_265:
          std::__throw_length_error("basic_string::append");
        while ( 1 )
        {
          v22 += 4;
          sub_9CA820(&v88, ",", v17);
          sub_9CA820(&v88, *(v22 - 4), (size_t)*(v22 - 3));
          if ( v19 == v22 )
            break;
          if ( v17 > 0x7FFFFFFFFFFFFFFFLL - v89 )
            goto LABEL_265;
        }
      }
      v23 = (void **)ptr;
      v24 = 32LL * si128.m128i_u32[0];
      v19 = (void **)((char *)ptr + v24);
      if ( ptr != (char *)ptr + v24 )
      {
        do
        {
          while ( 1 )
          {
            v19 -= 4;
            if ( *v19 == v19 + 2 )
              break;
            operator delete(*v19);
            if ( v19 == v23 )
              goto LABEL_47;
          }
        }
        while ( v19 != v23 );
LABEL_47:
        v19 = (void **)ptr;
      }
    }
    if ( v19 != (void **)&si128.m128i_u64[1] )
      free(v19);
    if ( v89 )
    {
      sub_BE13C0((__int64)&v94, "-fsanitize-skip-hot-cutoff=", (__int64)&v88);
      v100 = 260;
      ptr = &v94;
      v71 = sub_10B6980((__int64)a3, (__int64)&ptr);
      sub_10B8890(a4, v71);
      if ( (_BYTE *)v94.m128i_i64[0] != v95 )
        operator delete((void *)v94.m128i_i64[0]);
    }
    if ( *(_QWORD *)(a1 + 88) || *(_QWORD *)(a1 + 96) )
    {
      sub_10FD780((__int64)&v91, (__int64 *)(a1 + 88));
      sub_E5B030(&v94, "-fsanitize-annotate-debug-info=", &v91);
      v100 = 260;
      ptr = &v94;
      v25 = sub_10B6980((__int64)a3, (__int64)&ptr);
      sub_10B8890(a4, v25);
      if ( (_BYTE *)v94.m128i_i64[0] != v95 )
        operator delete((void *)v94.m128i_i64[0]);
      if ( (_BYTE *)v91.m128i_i64[0] != v92 )
        operator delete((void *)v91.m128i_i64[0]);
    }
    sub_10FB7D0(a3, a4, "-fsanitize-ignorelist=", (__int64 *)(a1 + 104));
    sub_10FB7D0(a3, a4, "-fsanitize-system-ignorelist=", (__int64 *)(a1 + 128));
    if ( *(_DWORD *)(a1 + 236) )
      sub_2194230(a3, a4, 1777);
    if ( *(_DWORD *)(a1 + 240) )
    {
      v91.m128i_i32[0] = *(_DWORD *)(a1 + 240);
      v93 = 266;
      v94.m128i_i64[0] = (__int64)"-fsanitize-memory-track-origins=";
      v96 = 259;
      sub_A1D840((__m128i *)&ptr, &v94, &v91, v26, v27, 266);
      v72 = sub_10B6980((__int64)a3, (__int64)&ptr);
      sub_10B8890(a4, v72);
    }
    if ( *(_BYTE *)(a1 + 244) )
      sub_10B8890(a4, (__int64)"-fsanitize-memory-use-after-dtor");
    if ( !*(_BYTE *)(a1 + 245) )
      sub_10B8890(a4, (__int64)"-fno-sanitize-memory-param-retval");
    if ( !*(_BYTE *)(a1 + 309) )
    {
      sub_10B8890(a4, (__int64)"-mllvm");
      sub_10B8890(a4, (__int64)"-tsan-instrument-memory-accesses=0");
      sub_10B8890(a4, (__int64)"-mllvm");
      sub_10B8890(a4, (__int64)"-tsan-instrument-memintrinsics=0");
    }
    if ( !*(_BYTE *)(a1 + 310) )
    {
      sub_10B8890(a4, (__int64)"-mllvm");
      sub_10B8890(a4, (__int64)"-tsan-instrument-func-entry-exit=0");
    }
    if ( !*(_BYTE *)(a1 + 311) )
    {
      sub_10B8890(a4, (__int64)"-mllvm");
      sub_10B8890(a4, (__int64)"-tsan-instrument-atomics=0");
    }
    if ( *(_BYTE *)(a1 + 315) )
    {
      sub_10B8890(a4, (__int64)"-mllvm");
      sub_10B8890(a4, (__int64)"-hwasan-experimental-use-page-aliases=1");
    }
    if ( *(_BYTE *)(a1 + 246) )
      sub_10B8890(a4, (__int64)"-fsanitize-cfi-cross-dso");
    if ( *(_BYTE *)(a1 + 247) )
      sub_10B8890(a4, (__int64)"-fsanitize-cfi-icall-generalize-pointers");
    if ( *(_BYTE *)(a1 + 248) )
      sub_10B8890(a4, (__int64)"-fsanitize-cfi-icall-experimental-normalize-integers");
    if ( *(_BYTE *)(a1 + 250) )
    {
      if ( *(_DWORD *)(a2 + 60) != 7 || !(unsigned __int8)sub_2294160(a2 + 16) )
      {
        sub_FA3370((__int64)&ptr, **(_QWORD **)(a2 + 8), 0, 404);
        sub_AC84E0((unsigned __int8 **)&ptr, *(_BYTE **)(a2 + 16), *(_QWORD *)(a2 + 24));
        sub_AC6300((__int64)&ptr);
      }
      sub_10B8890(a4, (__int64)"-fsanitize-kcfi-arity");
    }
    if ( *(_BYTE *)(a1 + 249) )
      sub_10B8890(a4, (__int64)"-fsanitize-cfi-canonical-jump-tables");
    if ( *(_BYTE *)(a1 + 308) )
      sub_10B8890(a4, (__int64)"-fsanitize-stats");
    if ( *(_BYTE *)(a1 + 312) )
      sub_10B8890(a4, (__int64)"-fsanitize-minimal-runtime");
    v29 = *(_DWORD *)(a1 + 252);
    if ( v29 )
    {
      v93 = 266;
      v91.m128i_i32[0] = v29;
      v94.m128i_i64[0] = (__int64)"-fsanitize-address-field-padding=";
      v96 = 259;
      sub_A1D840((__m128i *)&ptr, &v94, &v91, v26, 259, v28);
      v73 = sub_10B6980((__int64)a3, (__int64)&ptr);
      sub_10B8890(a4, v73);
    }
    if ( *(_BYTE *)(a1 + 258) )
      sub_10B8890(a4, (__int64)"-fsanitize-address-use-after-scope");
    if ( *(_BYTE *)(a1 + 259) )
      sub_10B8890(a4, (__int64)"-fsanitize-address-poison-custom-array-cookie");
    if ( *(_BYTE *)(a1 + 260) )
      sub_10B8890(a4, (__int64)"-fsanitize-address-globals-dead-stripping");
    if ( !*(_BYTE *)(a1 + 261) )
      sub_10B8890(a4, (__int64)"-fno-sanitize-address-use-odr-indicator");
    if ( *(_BYTE *)(a1 + 262) )
    {
      sub_10B8890(a4, (__int64)"-mllvm");
      sub_10B8890(a4, (__int64)"-asan-detect-invalid-pointer-cmp");
    }
    if ( *(_BYTE *)(a1 + 263) )
    {
      sub_10B8890(a4, (__int64)"-mllvm");
      sub_10B8890(a4, (__int64)"-asan-detect-invalid-pointer-sub");
    }
    if ( *(_BYTE *)(a1 + 264) )
    {
      sub_10B8890(a4, (__int64)"-mllvm");
      sub_10B8890(a4, (__int64)"-asan-instrumentation-with-call-threshold=0");
    }
    if ( *(_BYTE *)(a1 + 257) )
    {
      sub_10B8890(a4, (__int64)"-mllvm");
      sub_10B8890(a4, (__int64)"-asan-instrumentation-with-call-threshold=0");
      sub_10B8890(a4, (__int64)"-mllvm");
      sub_10B8890(a4, (__int64)"-asan-max-inline-poisoning-size=0");
      sub_10B8890(a4, (__int64)"-mllvm");
      sub_10B8890(a4, (__int64)"-asan-guard-against-version-mismatch=0");
    }
    v30 = *(_DWORD *)(a1 + 268);
    if ( v30 != 2 )
    {
      v31 = sub_FE2110(v30);
      v100 = 1283;
      ptr = "-fsanitize-address-destructor=";
      si128.m128i_i64[1] = (__int64)v31;
      v99 = v32;
      v33 = sub_10B6980((__int64)a3, (__int64)&ptr);
      sub_10B8890(a4, v33);
    }
    v34 = *(_DWORD *)(a1 + 316);
    if ( v34 != 3 )
    {
      v35 = sub_FE2190(v34);
      v100 = 1283;
      ptr = "-fsanitize-address-use-after-return=";
      si128.m128i_i64[1] = (__int64)v35;
      v99 = v36;
      v37 = sub_10B6980((__int64)a3, (__int64)&ptr);
      sub_10B8890(a4, v37);
    }
    if ( *(_QWORD *)(a1 + 280) )
    {
      sub_10B8890(a4, (__int64)"-default-function-attr");
      sub_BE13C0((__int64)&v94, "hwasan-abi=", a1 + 272);
      v100 = 260;
      ptr = &v94;
      v70 = sub_10B6980((__int64)a3, (__int64)&ptr);
      sub_10B8890(a4, v70);
      if ( (_BYTE *)v94.m128i_i64[0] != v95 )
        operator delete((void *)v94.m128i_i64[0]);
    }
    v38 = *(_QWORD *)a1;
    if ( (*(_QWORD *)a1 & 0x10) != 0 && !*(_BYTE *)(a1 + 315) )
    {
      sub_10B8890(a4, (__int64)"-target-feature");
      sub_10B8890(a4, (__int64)"+tagged-globals");
      v38 = *(_QWORD *)a1;
    }
    if ( (v38 & 0x401) != 0 )
    {
      sub_10B8890(a4, (__int64)"-fno-assume-sane-operator-new");
      v38 = *(_QWORD *)a1;
    }
    if ( (v38 & 0x2000) != 0 )
    {
      sub_10B8890(a4, (__int64)"-fno-builtin-bcmp");
      sub_10B8890(a4, (__int64)"-fno-builtin-memcmp");
      sub_10B8890(a4, (__int64)"-fno-builtin-strncmp");
      sub_10B8890(a4, (__int64)"-fno-builtin-strcmp");
      sub_10B8890(a4, (__int64)"-fno-builtin-strncasecmp");
      sub_10B8890(a4, (__int64)"-fno-builtin-strcasecmp");
      sub_10B8890(a4, (__int64)"-fno-builtin-strstr");
      sub_10B8890(a4, (__int64)"-fno-builtin-strcasestr");
      sub_10B8890(a4, (__int64)"-fno-builtin-memmem");
      v38 = *(_QWORD *)a1;
    }
    if ( (v38 & 0x7A000000000000LL) != 0 && *(_DWORD *)(a2 + 60) != 15 )
    {
      if ( !sub_10B8FF0((__int64)a3, 0x797u) )
      {
        sub_FA3370((__int64)&ptr, **(_QWORD **)(a2 + 8), 0, 324);
        sub_11000C0((__int64)&v94, *(__int64 **)(a2 + 8), (__int64)a3, *(_QWORD *)a1 & 0x7A000000000000LL, 0);
        sub_AC84E0((unsigned __int8 **)&ptr, v94.m128i_i64[0], v94.m128i_i64[1]);
        sub_10FB4D0((unsigned __int8 **)&ptr, (__int64)"-fvisibility=");
        if ( (_BYTE *)v94.m128i_i64[0] != v95 )
          operator delete((void *)v94.m128i_i64[0]);
        sub_AC6300((__int64)&ptr);
      }
      v38 = *(_QWORD *)a1;
    }
    if ( (v38 & 0x40) != 0 )
    {
      v85 = *(_QWORD *)a4;
      v84 = *(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8);
      if ( *(_QWORD *)a4 != v84 )
      {
        while ( 1 )
        {
          v39 = v85;
          v40 = j__strlen("+mte");
          v41 = (__int64)(v84 - v85) >> 5;
          v42 = (__int64)(v84 - v85) >> 3;
          if ( v41 > 0 )
            break;
LABEL_176:
          if ( v42 == 2 )
            goto LABEL_183;
          if ( v42 == 3 )
          {
            v51 = *(const char **)v39;
            if ( *(_QWORD *)v39 )
            {
              if ( v40 == strlen(*(const char **)v39) && (!v40 || !memcmp(v51, "+mte", v40)) )
                goto LABEL_145;
            }
            else if ( !v40 )
            {
              goto LABEL_145;
            }
            v39 += 8LL;
LABEL_183:
            v52 = *(const char **)v39;
            if ( *(_QWORD *)v39 )
            {
              if ( v40 == j__strlen(*(const char **)v39) && (!v40 || !memcmp(v52, "+mte", v40)) )
                goto LABEL_145;
            }
            else if ( !v40 )
            {
              goto LABEL_145;
            }
            v39 += 8LL;
            goto LABEL_188;
          }
          if ( v42 != 1 )
            goto LABEL_150;
LABEL_188:
          v53 = *(const char **)v39;
          if ( *(_QWORD *)v39 )
          {
            if ( v40 != j__strlen(*(const char **)v39) || v40 && memcmp(v53, "+mte", v40) )
              goto LABEL_150;
          }
          else if ( v40 )
          {
            goto LABEL_150;
          }
LABEL_145:
          if ( v84 == v39 )
            goto LABEL_150;
          if ( v85 < v39 )
          {
            v48 = j__strlen("-target-feature");
            v49 = *(const void **)(v39 - 8);
            v50 = v48;
            if ( v49 )
            {
              if ( v48 == j__strlen(*(const char **)(v39 - 8)) && (!v50 || !memcmp(v49, "-target-feature", v50)) )
                goto LABEL_151;
            }
            else if ( !v48 )
            {
              goto LABEL_151;
            }
          }
          v85 = v39 + 8;
          if ( v84 == v39 + 8 )
            goto LABEL_150;
        }
        while ( 1 )
        {
          v47 = *(const char **)v39;
          if ( *(_QWORD *)v39 )
          {
            if ( v40 == strlen(*(const char **)v39) && (!v40 || !memcmp(v47, "+mte", v40)) )
              goto LABEL_145;
            v43 = *(const void **)(v39 + 8);
            v44 = v39 + 8;
            if ( !v43 )
            {
              if ( !v40 )
              {
                v39 += 8LL;
                goto LABEL_145;
              }
LABEL_134:
              v45 = *(const void **)(v39 + 16);
              v44 = v39 + 16;
              if ( !v45 )
                goto LABEL_138;
              goto LABEL_135;
            }
          }
          else
          {
            if ( !v40 )
              goto LABEL_145;
            v43 = *(const void **)(v39 + 8);
            v44 = v39 + 8;
            if ( !v43 )
              goto LABEL_134;
          }
          if ( v40 == strlen((const char *)v43) )
          {
            if ( !v40 || !memcmp(v43, "+mte", v40) )
            {
LABEL_160:
              v39 = v44;
              goto LABEL_145;
            }
            goto LABEL_134;
          }
          v45 = *(const void **)(v39 + 16);
          v44 = v39 + 16;
          if ( !v45 )
          {
            if ( !v40 )
            {
              v39 += 16LL;
              goto LABEL_145;
            }
LABEL_138:
            v46 = *(const char **)(v39 + 24);
            v44 = v39 + 24;
            if ( v46 )
              goto LABEL_139;
            goto LABEL_142;
          }
LABEL_135:
          if ( v40 == strlen((const char *)v45) )
          {
            if ( !v40 || !memcmp(v45, "+mte", v40) )
              goto LABEL_160;
            goto LABEL_138;
          }
          v46 = *(const char **)(v39 + 24);
          v44 = v39 + 24;
          if ( v46 )
          {
LABEL_139:
            if ( v40 == strlen(v46) && (!v40 || !memcmp(v46, "+mte", v40)) )
              goto LABEL_160;
            goto LABEL_142;
          }
          if ( !v40 )
            goto LABEL_160;
LABEL_142:
          v39 += 32LL;
          if ( !--v41 )
          {
            v42 = (__int64)(v84 - v39) >> 3;
            goto LABEL_176;
          }
        }
      }
LABEL_150:
      sub_FA3370((__int64)&ptr, **(_QWORD **)(a2 + 8), 0, 512);
      sub_AC6300((__int64)&ptr);
    }
LABEL_151:
    if ( v88 != v90 )
      operator delete(v88);
  }
}

