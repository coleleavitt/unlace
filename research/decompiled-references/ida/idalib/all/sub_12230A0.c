void __fastcall sub_12230A0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  void **v8; // r12
  __int64 *v9; // rax
  _DWORD *v10; // rsi
  bool v11; // zf
  char *v12; // rax
  int v13; // r13d
  _QWORD **v14; // rax
  _QWORD **v15; // r15
  char *v16; // rbx
  size_t v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  size_t v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  _DWORD *v24; // r15
  int v25; // ecx
  void *v26; // rdx
  char *v27; // rsi
  void *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rbx
  size_t v33; // r14
  const char **v34; // rax
  const char *v35; // rbx
  size_t v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  __m128i si128; // xmm2
  __int64 v47; // rbx
  _QWORD *v48; // r14
  const char **v49; // rax
  char *v50; // r13
  size_t v51; // rax
  void *v52; // r15
  _BYTE *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // r13
  __int64 v58; // r14
  __int64 *v59; // r14
  __int64 v60; // rbx
  __int64 v61; // rsi
  unsigned __int64 v62; // rax
  __int64 v63; // rdx
  __m128i v64; // xmm1
  __m128 v65; // xmm0
  __m128 v66; // xmm1
  __int64 *v67; // r13
  __int64 *v68; // r15
  __m128i v69; // xmm4
  __int64 *v70; // rbx
  __int64 v71; // r12
  __int64 v72; // rax
  __int64 v73; // r14
  void **v74; // r13
  __int64 v75; // rsi
  __int64 v76; // r14
  void **v77; // r14
  __int64 v78; // rbx
  const __m128i *v79; // r14
  __int64 v80; // r15
  __int64 v81; // rax
  char *v82; // rax
  signed __int64 v83; // rdx
  int v84; // eax
  __int64 v85; // rax
  void *v86; // rdi
  char *v87; // rsi
  _DWORD *v88; // rcx
  __int64 v89; // rdx
  const char *v90; // rax
  const char *v91; // rsi
  _DWORD *v92; // rcx
  const char *v93; // rax
  __m128i v94; // rax
  __int64 v95; // rax
  const char *v96; // rsi
  int v97; // eax
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rdx
  const char *v101; // rsi
  char *v102; // rbx
  _DWORD *v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rbx
  __int32 v108; // eax
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  __int64 *v113; // r15
  __int64 v114; // r14
  __int64 v115; // rbx
  __int64 v116; // rax
  const char *v117; // rax
  __int64 v118; // rax
  int v119; // eax
  __int64 v120; // rax
  __int64 v121; // [rsp-18h] [rbp-210h]
  __m128i v122; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v123; // [rsp+10h] [rbp-1E8h]
  __int64 *v124; // [rsp+18h] [rbp-1E0h]
  __int64 v125; // [rsp+20h] [rbp-1D8h]
  void **v126; // [rsp+28h] [rbp-1D0h]
  __int64 *v127; // [rsp+30h] [rbp-1C8h]
  __int64 v128; // [rsp+38h] [rbp-1C0h]
  __int64 v129; // [rsp+40h] [rbp-1B8h]
  __int64 v130; // [rsp+48h] [rbp-1B0h]
  char *v131; // [rsp+50h] [rbp-1A8h]
  void **v132; // [rsp+58h] [rbp-1A0h]
  __m128 v133; // [rsp+60h] [rbp-198h]
  __int64 v134; // [rsp+70h] [rbp-188h]
  int v135; // [rsp+78h] [rbp-180h]
  __m128i v136; // [rsp+80h] [rbp-178h] BYREF
  __int64 v137; // [rsp+90h] [rbp-168h] BYREF
  int v138; // [rsp+98h] [rbp-160h]
  __int16 v139; // [rsp+A0h] [rbp-158h]
  void *s1[2]; // [rsp+B0h] [rbp-148h] BYREF
  __m128 v141; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v142; // [rsp+D0h] [rbp-128h]
  int v143; // [rsp+D8h] [rbp-120h]
  void *v144[2]; // [rsp+E0h] [rbp-118h] BYREF
  __m128i v145; // [rsp+F0h] [rbp-108h] BYREF
  __int64 v146; // [rsp+100h] [rbp-F8h]
  int v147; // [rsp+108h] [rbp-F0h]
  void *ptr[2]; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v149; // [rsp+140h] [rbp-B8h] BYREF

  v7 = *(_QWORD *)(a1 + 24);
  v125 = a1;
  v8 = ptr;
  v9 = *(__int64 **)(v7 + 8);
  v129 = a2;
  v130 = a3;
  v127 = a4;
  v128 = a5;
  v123 = a6;
  v124 = v9;
  sub_11BB1A0(a6);
  v10 = *(_DWORD **)(a1 + 24);
  ptr[0] = &v149;
  v11 = v10[15] == 13;
  ptr[1] = (void *)0x1000000000LL;
  v12 = "gas";
  if ( !v11 )
    v12 = "as";
  v131 = v12;
  sub_11C59A0((__int64)v144, v10, a6);
  v13 = (int)v144[1];
  v14 = (_QWORD **)sub_10DE660(a6, 0x82Fu, 0x82Cu);
  if ( v14 )
  {
    v15 = v14;
    if ( *((_DWORD *)*v14 + 10) != 2095 )
    {
      v16 = (char *)*v14[6];
      v17 = j__strlen("none");
      if ( !v16 )
      {
        v22 = 0;
        if ( !v17 )
          goto LABEL_12;
        v22 = j__strlen("zlib");
        if ( !v22 )
          goto LABEL_12;
        v22 = j__strlen("zstd");
        if ( !v22 )
          goto LABEL_12;
        v22 = 0;
        goto LABEL_18;
      }
      v122.m128i_i64[0] = v17;
      v21 = j__strlen(v16);
      v22 = v21;
      if ( v21 == v122.m128i_i64[0] )
      {
        if ( !v21 || !memcmp(v16, "none", v21) )
          goto LABEL_12;
        if ( v22 != j__strlen("zlib") )
        {
LABEL_10:
          if ( v22 == j__strlen("zstd") )
            goto LABEL_11;
          goto LABEL_18;
        }
      }
      else
      {
        if ( j__strlen("zlib") != v21 )
        {
          if ( j__strlen("zstd") == v22 )
          {
            if ( !v22 )
              goto LABEL_12;
LABEL_11:
            if ( !memcmp(v16, "zstd", v22) )
              goto LABEL_12;
          }
LABEL_18:
          sub_FC70B0((__int64)v144, *v124, 0, 497);
          sub_AEC220((unsigned __int8 **)v144, v15[3], (signed __int64)v15[4]);
          sub_AEC220((unsigned __int8 **)v144, v16, v22);
          sub_AEA040((__int64)v144);
          v126 = s1;
          goto LABEL_13;
        }
        if ( !v22 )
          goto LABEL_12;
      }
      if ( memcmp(v16, "zlib", v22) )
        goto LABEL_10;
LABEL_12:
      v136.m128i_i64[0] = (__int64)v16;
      v139 = 261;
      s1[0] = "--compress-debug-sections=";
      LOWORD(v142) = 259;
      v126 = s1;
      v136.m128i_i64[1] = v22;
      sub_A41580((__m128i *)v144, (const __m128i *)s1, &v136, v18, v19, v20);
      v23 = sub_10DA6C0(v123, (__int64)v144);
      sub_10DC5D0((__int64)ptr, v23);
      goto LABEL_13;
    }
    sub_10DC5D0((__int64)ptr, (__int64)"--compress-debug-sections");
  }
  v126 = s1;
LABEL_13:
  v24 = *(_DWORD **)(v125 + 24);
  v25 = v24[12];
  switch ( v25 )
  {
    case 1:
    case 2:
    case 35:
    case 36:
      v96 = "-EB";
      if ( !(unsigned __int8)sub_113D610((__int64)(v24 + 4), v123) )
        v96 = "-EL";
      sub_10DC5D0((__int64)ptr, (__int64)v96);
      v97 = v24[13];
      if ( v97 == 17 )
      {
        sub_10DC5D0((__int64)ptr, (__int64)"-mfpu=crypto-neon-fp-armv8");
      }
      else if ( v97 == 22 )
      {
        sub_10DC5D0((__int64)ptr, (__int64)"-mfpu=neon");
      }
      v98 = sub_113F460(*(_QWORD *)(v125 + 24), v123);
      switch ( v98 )
      {
        case 2:
          v117 = "-mfloat-abi=softfp";
          break;
        case 3:
          v117 = "-mfloat-abi=hard";
          break;
        case 1:
          v117 = "-mfloat-abi=soft";
          break;
        default:
          goto LABEL_124;
      }
      v144[0] = (void *)v117;
      LOWORD(v146) = 259;
      v118 = sub_10DA6C0(v123, (__int64)v144);
      sub_10DC5D0((__int64)ptr, v118);
LABEL_124:
      sub_118FCD0(v123, (__int64)ptr, 0x8D4u);
      sub_1216AC0(v123, (__int64)ptr);
      sub_118FCD0(v123, (__int64)ptr, 0x94Eu);
      v99 = sub_10DF140(v123, 0x8AEu);
      if ( v99 )
      {
        v100 = *(_QWORD *)(v99 + 16);
        if ( !v100 )
          v100 = v99;
        *(_BYTE *)(v100 + 44) |= 2u;
      }
      goto LABEL_47;
    case 3:
    case 4:
      v101 = "-EB";
      if ( v25 != 4 )
        v101 = "-EL";
      sub_10DC5D0((__int64)ptr, (__int64)v101);
      sub_118FCD0(v123, (__int64)ptr, 0x8D4u);
      sub_1216AC0(v123, (__int64)ptr);
      goto LABEL_47;
    case 14:
      v94.m128i_i64[0] = (__int64)sub_114B080(v124, v123, v24 + 4);
      LOWORD(v146) = 1283;
      v144[0] = "-mabi=";
      v145 = v94;
      v95 = sub_10DA6C0(v123, (__int64)v144);
      sub_10DC5D0((__int64)ptr, v95);
      goto LABEL_47;
    case 16:
    case 17:
    case 18:
    case 19:
      v136 = 0u;
      s1[0] = nullptr;
      s1[1] = nullptr;
      sub_1152ED0(v123, v24 + 4, (const char **)&v136, (char **)v126);
      s1[0] = sub_11539E0((char *)s1[0], (__int64)s1[1]);
      s1[1] = v26;
      sub_10DC5D0((__int64)ptr, (__int64)"-march");
      sub_10DC5D0((__int64)ptr, v136.m128i_i64[0]);
      sub_10DC5D0((__int64)ptr, (__int64)"-mabi");
      v27 = (char *)s1[0];
      sub_10DC5D0((__int64)ptr, (__int64)s1[0]);
      if ( !v13 )
      {
        v27 = "-mno-shared";
        sub_10DC5D0((__int64)ptr, (__int64)"-mno-shared");
      }
      v28 = (void *)j__strlen("64");
      if ( v28 != s1[1] || v28 && (v27 = "64", memcmp(s1[0], "64", (size_t)v28)) )
      {
        v27 = (_BYTE *)(elf_gnu_hash_indexes + 1829);
        if ( !sub_10DCD30(v123, 0x9CDu) )
        {
          v27 = "-call_nonpic";
          sub_10DC5D0((__int64)ptr, (__int64)"-call_nonpic");
        }
      }
      v31 = *(_QWORD *)(v125 + 24) + 16LL;
      v122.m128i_i64[0] = *(_QWORD *)(v125 + 24);
      if ( (unsigned __int8)sub_22B7F00(v31, v27, v29, v30) )
        sub_10DC5D0((__int64)ptr, (__int64)"-EL");
      else
        sub_10DC5D0((__int64)ptr, (__int64)"-EB");
      v32 = sub_10DCD30(v123, 0x9C9u);
      if ( !v32 )
        goto LABEL_34;
      v33 = j__strlen("2008");
      v34 = *(const char ***)(v32 + 48);
      v35 = *v34;
      if ( *v34 )
      {
        v36 = j__strlen(*v34);
        if ( v36 == v33 && (!v36 || !memcmp(v35, "2008", v36)) )
          goto LABEL_33;
      }
      else if ( !v33 )
      {
LABEL_33:
        v144[0] = (void *)"-mnan=2008";
        LOWORD(v146) = 259;
        v37 = sub_10DA6C0(v123, (__int64)v144);
        sub_10DC5D0((__int64)ptr, v37);
      }
LABEL_34:
      v38 = v123;
      v39 = sub_113FA70(v123, 0x949u, 0x950u, 2378);
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 16);
        if ( !v40 )
          v40 = v39;
        *(_BYTE *)(v40 + 44) |= 1u;
        sub_21B5A40(v39, v38, ptr);
      }
      else
      {
        v119 = sub_1153A30(*(__int64 **)(*(_QWORD *)(v125 + 24) + 8LL), v123, *(_QWORD *)(v125 + 24) + 16LL);
        v122.m128i_i64[0] = *(_QWORD *)(v125 + 24);
        if ( (unsigned __int8)sub_1154780(
                                v123,
                                v122.m128i_i64[0] + 16,
                                v136.m128i_i64[0],
                                v136.m128i_i64[1],
                                (_WORD *)s1[0],
                                (__int64)s1[1],
                                v119) )
          sub_10DC5D0((__int64)ptr, (__int64)"-mfpxx");
      }
      v41 = v123;
      v42 = sub_10DE660(v123, 0x980u, 0xA55u);
      v43 = v42;
      if ( v42 )
      {
        v11 = (unsigned __int8)sub_21B9810(v42, 2432) == 0;
        v44 = *(_QWORD *)(v43 + 16);
        if ( v11 )
        {
          if ( !v44 )
            v44 = v43;
          *(_BYTE *)(v44 + 44) |= 1u;
          sub_10DC5D0((__int64)ptr, (__int64)"-no-mips16");
        }
        else
        {
          if ( !v44 )
            v44 = v43;
          *(_BYTE *)(v44 + 44) |= 1u;
          sub_21B5A40(v43, v41, ptr);
        }
      }
      sub_118FD10(v123, (__int64)ptr, 0x9B8u, 0xA54u);
      sub_118FD10(v123, (__int64)ptr, 0x925u, 0xA16u);
      sub_118FD10(v123, (__int64)ptr, 0x924u, 0xA15u);
      v45 = sub_10DE660(v123, 0x9C2u, 0xA5Fu);
      if ( v45 && (unsigned __int8)sub_21B9810(v45, 2498) )
      {
        v144[0] = "-mmsa";
        LOWORD(v146) = 259;
        v120 = sub_10DA6C0(v123, (__int64)v144);
        sub_10DC5D0((__int64)ptr, v120);
      }
      sub_118FD10(v123, (__int64)ptr, 0x962u, 0xB3Au);
      sub_118FD10(v123, (__int64)ptr, 0x922u, 0xB33u);
      sub_118FD10(v123, (__int64)ptr, 0xADFu, 0xA69u);
      sub_11C6770(*(_DWORD **)(v125 + 24), v123, (__int64)ptr);
LABEL_47:
      sub_10DF020((__int64)v126, v123, 0x2BBu, 0x23Cu);
      si128 = _mm_load_si128((const __m128i *)s1);
      v137 = v141.m128_u64[0];
      v136 = si128;
      v122.m128i_i64[0] = v141.m128_i64[1];
      break;
    case 21:
      sub_10DC5D0((__int64)ptr, (__int64)"-a32");
      sub_10DC5D0((__int64)ptr, (__int64)"-mppc");
      v91 = "-mbig-endian";
      goto LABEL_111;
    case 22:
      sub_10DC5D0((__int64)ptr, (__int64)"-a32");
      sub_10DC5D0((__int64)ptr, (__int64)"-mppc");
      v91 = "-mlittle-endian";
      goto LABEL_111;
    case 23:
      sub_10DC5D0((__int64)ptr, (__int64)"-a64");
      sub_10DC5D0((__int64)ptr, (__int64)"-mppc64");
      v91 = "-mbig-endian";
      goto LABEL_111;
    case 24:
      sub_10DC5D0((__int64)ptr, (__int64)"-a64");
      sub_10DC5D0((__int64)ptr, (__int64)"-mppc64");
      v91 = "-mlittle-endian";
LABEL_111:
      sub_10DC5D0((__int64)ptr, (__int64)v91);
      v92 = (_DWORD *)(*(_QWORD *)(v125 + 24) + 16LL);
      v122.m128i_i64[0] = *(_QWORD *)(v125 + 24);
      sub_11C8180((__m128i *)v144, v124, v123, v92, 0);
      v93 = sub_1156E10((__int64)v144[0], (__int64)v144[1]);
      sub_10DC5D0((__int64)ptr, (__int64)v93);
      v86 = v144[0];
      if ( v144[0] == &v145 )
        goto LABEL_47;
      goto LABEL_109;
    case 27:
    case 28:
      v102 = sub_115A2B0(v123, v24 + 4);
      sub_10DC5D0((__int64)ptr, (__int64)"-mabi");
      sub_10DC5D0((__int64)ptr, (__int64)v102);
      v103 = (_DWORD *)(*(_QWORD *)(v125 + 24) + 16LL);
      v122.m128i_i64[0] = *(_QWORD *)(v125 + 24);
      sub_11598D0((__m128i **)v126, v123, v103);
      sub_10DC5D0((__int64)ptr, (__int64)"-march");
      LOWORD(v146) = 260;
      v144[0] = v126;
      v104 = sub_10DA6C0(v123, (__int64)v144);
      sub_10DC5D0((__int64)ptr, v104);
      if ( !(unsigned __int8)sub_21B7850(v123, 2839, 2700, 1) )
        sub_21B73E0(v123, ptr, 2700, 2839);
      v86 = s1[0];
      if ( s1[0] == v126 + 2 )
        goto LABEL_47;
      goto LABEL_109;
    case 29:
    case 31:
      v87 = "-32";
      goto LABEL_108;
    case 30:
      v87 = "-64";
LABEL_108:
      sub_10DC5D0((__int64)ptr, (__int64)v87);
      v88 = (_DWORD *)(*(_QWORD *)(v125 + 24) + 16LL);
      v122.m128i_i64[0] = *(_QWORD *)(v125 + 24);
      sub_11C8180((__m128i *)v144, v124, v123, v88, 0);
      v89 = *(_QWORD *)(v125 + 24) + 16LL;
      v122.m128i_i64[0] = *(_QWORD *)(v125 + 24);
      v90 = sub_115C610((__int64)v144[0], (__int64)v144[1], v89);
      sub_10DC5D0((__int64)ptr, (__int64)v90);
      sub_11C6770(*(_DWORD **)(v125 + 24), v123, (__int64)ptr);
      v86 = v144[0];
      if ( v144[0] != &v145 )
        goto LABEL_109;
      goto LABEL_47;
    case 32:
      sub_115F7A0(&v136, v123, (__int64)(v24 + 4));
      sub_C05100((__int64)v126, "-march=", (__int64)&v136);
      LOWORD(v146) = 260;
      v144[0] = v126;
      v85 = sub_10DA6C0(v123, (__int64)v144);
      sub_10DC5D0((__int64)ptr, v85);
      if ( s1[0] != v126 + 2 )
        operator delete(s1[0]);
      v86 = (void *)v136.m128i_i64[0];
      if ( (__int64 *)v136.m128i_i64[0] == &v137 )
        goto LABEL_47;
LABEL_109:
      operator delete(v86);
      goto LABEL_47;
    case 37:
      sub_10DC5D0((__int64)ptr, (__int64)"--32");
      goto LABEL_47;
    case 38:
      v84 = v24[16];
      if ( v84 == 25 || v84 == 12 )
        sub_10DC5D0((__int64)ptr, (__int64)"--x32");
      else
        sub_10DC5D0((__int64)ptr, (__int64)"--64");
      goto LABEL_47;
    case 59:
      v131 = (char *)"nas";
      goto LABEL_47;
    default:
      goto LABEL_47;
  }
LABEL_48:
  v47 = v136.m128i_i64[0];
  while ( v122.m128i_i64[0] != v47 )
  {
    v48 = *(_QWORD **)v47;
    v49 = *(const char ***)(*(_QWORD *)v47 + 48LL);
    v50 = (char *)*v49;
    if ( *v49 && (v51 = j__strlen(*v49), (v52 = (void *)v51) != nullptr) )
    {
      v53 = memchr(v50, 61, v51);
      if ( v53 && v53 - v50 != -1 )
      {
        LOWORD(v146) = 259;
        v144[0] = "--debug-prefix-map";
        v54 = sub_10DA6C0(v123, (__int64)v144);
        sub_10DC5D0((__int64)ptr, v54);
        LOWORD(v146) = 261;
        v144[0] = v50;
        v144[1] = v52;
        v55 = sub_10DA6C0(v123, (__int64)v144);
        sub_10DC5D0((__int64)ptr, v55);
        goto LABEL_54;
      }
    }
    else
    {
      v52 = nullptr;
    }
    sub_FC70B0((__int64)v144, *v124, 0, 372);
    sub_AEC220((unsigned __int8 **)v144, v50, (signed __int64)v52);
    v82 = (char *)sub_11609A0(
                    (_DWORD *)(*(_QWORD *)(v48[1] + 32LL) + 80LL * (unsigned int)(*(_DWORD *)(*v48 + 40LL) - 1)),
                    *(_QWORD **)(v48[1] + 8LL),
                    *(_QWORD *)(v48[1] + 16LL));
    sub_AEC220((unsigned __int8 **)v144, v82, v83);
    sub_AEA040((__int64)v144);
LABEL_54:
    v56 = (_QWORD *)v48[2];
    v57 = (_QWORD *)(v47 + 8);
    if ( !v56 )
      v56 = v48;
    *((_BYTE *)v56 + 44) |= 1u;
    v47 = v136.m128i_i64[1];
    for ( v136.m128i_i64[0] = (__int64)v57; v57 != (_QWORD *)v47; v136.m128i_i64[0] = (__int64)v57 )
    {
      v58 = *v57;
      if ( *v57 )
      {
        if ( (_DWORD)v137
          && ((unsigned __int8)sub_21B9810(*v57, (unsigned int)v137)
           || HIDWORD(v137) && (unsigned __int8)sub_21B9810(v58, HIDWORD(v137))) )
        {
          goto LABEL_48;
        }
      }
      ++v57;
    }
  }
  sub_21B7F70(v123, ptr, 2175);
  sub_21B6F20(v123, ptr, 3403, 3487, 0);
  sub_10DC5D0((__int64)ptr, (__int64)"-o");
  sub_10DC5D0((__int64)ptr, *v127);
  v59 = *(__int64 **)v128;
  v60 = *(_QWORD *)v128 + 40LL * *(unsigned int *)(v128 + 8);
  if ( *(_QWORD *)v128 != v60 )
  {
    do
    {
      v61 = *v59;
      v59 += 5;
      sub_10DC5D0((__int64)ptr, v61);
    }
    while ( (__int64 *)v60 != v59 );
  }
  v145.m128i_i32[2] = 2006;
  *(__m128i *)v144 = _mm_load_si128((const __m128i *)&xmmword_23A9C50);
  v145.m128i_i64[0] = 0x7D2000007D1LL;
  v62 = sub_21B6DA0(v123, v144, 7);
  v63 = *(_QWORD *)(v123 + 8);
  v137 = 0x7D2000007D1LL;
  v136 = _mm_load_si128((const __m128i *)&xmmword_23A9C50);
  v122.m128i_i64[0] = v63 + 8 * HIDWORD(v62);
  v64 = _mm_loadl_epi64(&v122);
  v124 = (__int64 *)(v63 + 8LL * (unsigned int)v62);
  v145 = v136;
  *(__m128i *)v144 = _mm_unpacklo_epi64(v64, v64);
  v138 = 2006;
  v146 = 0x7D2000007D1LL;
  v147 = 2006;
  sub_121FA10((__int64)v144);
  v134 = 0x7D2000007D1LL;
  v65 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A9C50);
  v135 = 2006;
  v142 = 0x7D2000007D1LL;
  v66 = _mm_loadh_ps((const double *)v122.m128i_i64);
  v133 = v65;
  *(__m128 *)s1 = v66;
  v141 = v65;
  v143 = 2006;
  sub_121FA10((__int64)v126);
  v67 = (__int64 *)v144[0];
  v68 = (__int64 *)s1[0];
  v69 = _mm_load_si128((const __m128i *)&v141);
  *(__m128i *)v144 = _mm_load_si128((const __m128i *)s1);
  v146 = v142;
  v145 = v69;
  v147 = v143;
  v122.m128i_i64[0] = (__int64)&v145.m128i_i64[1] + 4;
  if ( s1[0] != v67 )
  {
    v124 = v67;
    v70 = (__int64 *)s1[1];
    v132 = ptr;
    do
    {
LABEL_68:
      v71 = *v68;
      v72 = *(_QWORD *)(*v68 + 16);
      if ( !v72 )
        v72 = *v68;
      ++v68;
      *(_BYTE *)(v72 + 44) |= 1u;
      for ( v144[0] = v68; v70 != v68; v144[0] = v68 )
      {
        v73 = *v68;
        v74 = v144;
        if ( *v68 )
        {
          do
          {
            v75 = *((unsigned int *)v74 + 4);
            if ( !(_DWORD)v75 )
              break;
            if ( (unsigned __int8)sub_21B9810(v73, v75) )
            {
              v68 = (__int64 *)v144[0];
              if ( v124 != v144[0] )
                goto LABEL_68;
              goto LABEL_77;
            }
            v74 = (void **)((char *)v74 + 4);
          }
          while ( (void **)v122.m128i_i64[0] != v74 );
        }
        ++v68;
      }
    }
    while ( v124 != v68 );
LABEL_77:
    v76 = v71;
    v8 = v132;
    if ( !(unsigned __int8)sub_21B9810(v76, 1982) )
    {
      v105 = v123;
      v106 = sub_10DCD30(v123, 0x831u);
      if ( v106 )
        sub_21B5A40(v106, v105, v8);
      v107 = v123;
      v108 = sub_11BCC10(*(_QWORD *)(v125 + 24), v123);
      v139 = 265;
      v136.m128i_i32[0] = v108;
      LOWORD(v142) = 259;
      s1[0] = (void *)"-gdwarf-";
      sub_A41580((__m128i *)v144, (const __m128i *)v126, &v136, v109, v110, v111);
      v112 = sub_10DA6C0(v107, (__int64)v144);
      sub_10DC5D0((__int64)v8, v112);
    }
  }
  v77 = v126;
  sub_112D530(v126, *(_QWORD *)(v125 + 24), v131);
  LOWORD(v146) = 260;
  v144[0] = v77;
  v78 = sub_10DA6C0(v123, (__int64)v144);
  if ( s1[0] != v77 + 2 )
    operator delete(s1[0]);
  v122.m128i_i64[1] = 1;
  v79 = *(const __m128i **)v128;
  v80 = *(unsigned int *)(v128 + 8);
  v122.m128i_i64[0] = (__int64)v127;
  v81 = operator new(0x208u);
  v121 = v122.m128i_i64[0];
  v122.m128i_i64[0] = v81;
  sub_1106AE0(v81, v130, v125, 0x100000000LL, (__int64)"@", v78, (__int64)v8, v79, v80, v121, v122.m128i_i64[1], 0);
  v144[0] = (void *)v122.m128i_i64[0];
  sub_118A0F0(v129, (__int64 *)v144, v65, *(double *)v66.m128_u64);
  if ( v144[0] )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v144[0] + 8LL))(v144[0]);
  if ( sub_10DCD30(v123, 0x817u) && *(_DWORD *)(*(_QWORD *)(v125 + 24) + 60LL) == 7 )
  {
    v113 = v127;
    v114 = v123;
    v115 = v130;
    v116 = sub_11C11C0(v130, v123, *(_QWORD *)v128, (__int64)v127);
    sub_11CD1C0(*(_QWORD *)(v125 + 24), v129, v125, v115, v114, v113, v65, *(double *)v66.m128_u64, v116);
  }
  if ( ptr[0] != v8 + 2 )
    free(ptr[0]);
}
