void __fastcall sub_123BD50(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4,
        char **a5,
        _QWORD *a6,
        double a7,
        __m128i a8,
        __m128i a9,
        __m128i a10)
{
  __m128i v11; // xmm0
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r12
  _QWORD *v15; // rbp
  __int64 v16; // rbp
  _DWORD *v17; // r14
  unsigned __int8 v18; // zf
  __m128i *v19; // rax
  _BYTE *v20; // rsi
  _BYTE *v21; // rdx
  __m128 si128; // xmm0
  void **v23; // rdi
  __int64 v24; // rcx
  __m128i *v25; // r8
  void *v26; // r9
  char **v27; // rbp
  __int64 v28; // r15
  char *v29; // r13
  size_t v30; // r12
  char *v31; // r15
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // r14
  _QWORD *i; // rbp
  void **v40; // r15
  const char *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  const char *v44; // rsi
  __int64 (__fastcall *v45)(_QWORD *, const char *, __int64); // r13
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  void **v51; // rsi
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // r15
  _QWORD *j; // r12
  __int64 v56; // rbp
  const char *v57; // rdi
  size_t v58; // rax
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  const char *v61; // rsi
  __int64 v62; // rcx
  void *v63; // r13
  __int64 (__fastcall *v64)(_QWORD *, void *, __int64); // r14
  __int64 v65; // r14
  __int64 v66; // rcx
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  char *v69; // rbp
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  _QWORD *v72; // rdx
  __int64 v73; // rcx
  __int64 *v74; // rbp
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 *v77; // r13
  void **k; // r14
  __int64 v79; // r12
  __int64 v80; // rax
  unsigned __int64 v81; // rdx
  void **v82; // r14
  __int64 v83; // rbx
  const __m128i *v84; // r13
  __int64 v85; // r14
  void *v86; // rbp
  __int64 v87; // rcx
  __int64 v88; // rsi
  int v89; // edx
  __int64 *v90; // rsi
  void **v91; // rax
  __int64 v92; // rdi
  __int64 **v93; // rax
  _QWORD *v94; // rbp
  void (__fastcall *v95)(_QWORD *); // rax
  __int64 v96; // r12
  __int64 v97; // rbx
  void *v98; // rdi
  _QWORD *v99; // rdi
  _QWORD *v100; // rdi
  void **v101; // r12
  void **v102; // rbx
  void *v103; // rdi
  _QWORD *v104; // rdi
  __int64 v105; // rax
  _DWORD *v106; // rax
  __int64 v107; // rcx
  unsigned __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rax
  unsigned __int64 v111; // rdx
  __int64 v112; // rax
  unsigned __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rcx
  unsigned __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rcx
  unsigned __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rcx
  unsigned __int64 v124; // rdx
  __int64 **v125; // r14
  void **v126; // r15
  __int64 *v127; // rbx
  __int64 **v128; // rdi
  char *v129; // [rsp+0h] [rbp-2C8h] BYREF
  void **p_ptr; // [rsp+8h] [rbp-2C0h]
  char **v131; // [rsp+10h] [rbp-2B8h]
  __int64 v132; // [rsp+18h] [rbp-2B0h]
  void **v133; // [rsp+20h] [rbp-2A8h]
  _QWORD *v134; // [rsp+28h] [rbp-2A0h]
  __int64 **v135; // [rsp+30h] [rbp-298h]
  __int64 v136; // [rsp+38h] [rbp-290h]
  __int64 v137; // [rsp+40h] [rbp-288h]
  char **v138; // [rsp+48h] [rbp-280h]
  __int64 v139; // [rsp+50h] [rbp-278h]
  _DWORD *v140; // [rsp+58h] [rbp-270h]
  const char *v141; // [rsp+60h] [rbp-268h] BYREF
  size_t v142; // [rsp+68h] [rbp-260h]
  void *v143[2]; // [rsp+70h] [rbp-258h] BYREF
  __int64 v144; // [rsp+80h] [rbp-248h]
  void *v145; // [rsp+90h] [rbp-238h] BYREF
  __int64 v146; // [rsp+98h] [rbp-230h]
  __int64 v147; // [rsp+A0h] [rbp-228h] BYREF
  _QWORD v148[2]; // [rsp+B0h] [rbp-218h] BYREF
  const char *v149; // [rsp+C0h] [rbp-208h]
  size_t v150; // [rsp+C8h] [rbp-200h]
  __int16 v151; // [rsp+D0h] [rbp-1F8h]
  void *v152; // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v153; // [rsp+E8h] [rbp-1E0h]
  _OWORD v154[3]; // [rsp+F0h] [rbp-1D8h] BYREF
  const char *v155; // [rsp+120h] [rbp-1A8h]
  void *ptr; // [rsp+170h] [rbp-158h] BYREF
  __m128i v157; // [rsp+178h] [rbp-150h]

  v137 = a4;
  v133 = &v152;
  v152 = v154;
  v129 = "gnu";
  v136 = a1;
  v135 = a2;
  v154[0] = _mm_loadh_ps((const double *)&v129);
  v129 = "elf64_amdgpu";
  v139 = a3;
  v138 = a5;
  LODWORD(ptr) = 2120;
  v154[1] = _mm_loadh_ps((const double *)&v129);
  v129 = "-shared";
  v155 = "-plugin-opt=-amdgpu-internalize-symbols";
  v153 = 0x1000000007LL;
  v11 = (__m128i)_mm_loadh_ps((const double *)&v129);
  v154[2] = v11;
  p_ptr = &ptr;
  v12 = sub_21B6DA0(a6, &ptr, 1);
  v13 = a6[1];
  v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
  v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
  if ( v14 != v15 )
  {
    while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 2120) )
    {
      if ( v15 == ++v14 )
        goto LABEL_5;
    }
    if ( v15 != v14 )
    {
      do
      {
        v109 = *(_QWORD *)(*v14 + 16LL);
        if ( !v109 )
          v109 = *v14;
        ++v14;
        *(_BYTE *)(v109 + 44) |= 1u;
        if ( v14 == v15 )
          break;
        while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 2120) )
        {
          if ( v15 == ++v14 )
            goto LABEL_123;
        }
      }
      while ( v15 != v14 );
LABEL_123:
      v110 = (unsigned int)v153;
      v111 = (unsigned int)v153 + 1LL;
      if ( v111 > HIDWORD(v153) )
      {
        sub_2237220(v133, v133 + 2, v111, 8);
        v110 = (unsigned int)v153;
      }
      *((_QWORD *)v152 + v110) = "-plugin-opt=-amdgpu-enable-hipstdpar";
      LODWORD(v153) = v153 + 1;
    }
  }
LABEL_5:
  v16 = *(_QWORD *)(*(_QWORD *)(v136 + 24) + 8LL);
  v140 = *(_DWORD **)(v136 + 24);
  v17 = v140;
  v18 = *(_DWORD *)(v16 + 44) == 2;
  LODWORD(v134) = *(_DWORD *)(v16 + 44);
  sub_11C8A90(v140, (__int64)a6, (__int64)v133, v138, v137, v18, v11);
  *(_OWORD *)v143 = 0;
  v144 = 0;
  sub_1170F90(v16, (__int64)(v17 + 4), (__int64)a6, (__int64)v143);
  v129 = (char *)&v145;
  v145 = &v147;
  v19 = (__m128i *)operator new(0x14u);
  v20 = v143[0];
  v21 = v143[1];
  v19[1].m128i_i16[0] = 29300;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A9CE0);
  v19[1].m128i_i8[2] = 61;
  v23 = p_ptr;
  v19[1].m128i_i8[3] = 0;
  *v19 = (__m128i)si128;
  v145 = v19;
  v147 = 19;
  v146 = 19;
  sub_11C2BD0(v23, (__int64)v20, (v21 - v20) >> 4, v24, v25, v26);
  v27 = (char **)ptr;
  v28 = 16LL * v157.m128i_u32[0];
  v131 = (char **)((char *)ptr + v28);
  if ( (char *)ptr + v28 != ptr )
  {
    do
    {
      v29 = *v27;
      v30 = (size_t)v27[1];
      v31 = (char *)(*(__int64 (__fastcall **)(_QWORD *, char *, size_t))(*a6 + 16LL))(a6, *v27, v30);
      v32 = strlen(v31);
      if ( 0x7FFFFFFFFFFFFFFFLL - v146 < v32 )
LABEL_144:
        std::__throw_length_error("basic_string::append");
      sub_9EE560(v129, v31, v32);
      if ( v30 != *((_QWORD *)v143[1] - 1) || v30 && memcmp(v29, *((const void **)v143[1] - 2), v30) )
      {
        if ( v146 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_144;
        sub_9EE560(v129, ",", 1u);
      }
      v27 += 2;
    }
    while ( v131 != v27 );
    v27 = (char **)ptr;
  }
  if ( v27 != (char **)(p_ptr + 2) )
    free(v27);
  if ( v143[1] != v143[0] )
  {
    v33 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(*a6 + 16LL))(a6, v145, v146);
    v34 = (unsigned int)v153;
    v35 = (unsigned int)v153 + 1LL;
    if ( v35 > HIDWORD(v153) )
    {
      v131 = (char **)v33;
      sub_2237220(v133, v133 + 2, v35, 8);
      v34 = (unsigned int)v153;
      v33 = (__int64)v131;
    }
    *((_QWORD *)v152 + v34) = v33;
    LODWORD(v153) = v153 + 1;
  }
  if ( (_DWORD)v134 == 2 )
  {
    v114 = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a6 + 16LL))(
             a6,
             "-plugin-opt=-force-import-all",
             29);
    v115 = (unsigned int)v153;
    v116 = (unsigned int)v153 + 1LL;
    if ( v116 > HIDWORD(v153) )
    {
      v131 = (char **)v114;
      sub_2237220(v133, v133 + 2, v116, 8);
      v115 = (unsigned int)v153;
      v114 = (__int64)v131;
    }
    *((_QWORD *)v152 + v115) = v114;
    v117 = *a6;
    LODWORD(v153) = v153 + 1;
    v118 = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(v117 + 16))(
             a6,
             "-plugin-opt=-avail-extern-to-local",
             34);
    v119 = (unsigned int)v153;
    v120 = (unsigned int)v153 + 1LL;
    if ( v120 > HIDWORD(v153) )
    {
      v131 = (char **)v118;
      sub_2237220(v133, v133 + 2, v120, 8);
      v119 = (unsigned int)v153;
      v118 = (__int64)v131;
    }
    *((_QWORD *)v152 + v119) = v118;
    v121 = *a6;
    LODWORD(v153) = v153 + 1;
    v122 = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(v121 + 16))(
             a6,
             "-plugin-opt=-avail-extern-gv-in-addrspace-to-local=3",
             52);
    v123 = (unsigned int)v153;
    v124 = (unsigned int)v153 + 1LL;
    if ( v124 > HIDWORD(v153) )
    {
      v131 = (char **)v122;
      sub_2237220(v133, v133 + 2, v124, 8);
      v123 = (unsigned int)v153;
      v122 = (__int64)v131;
    }
    *((_QWORD *)v152 + v123) = v122;
    LODWORD(v153) = v153 + 1;
  }
  LODWORD(ptr) = 2465;
  v36 = sub_21B6DA0(a6, p_ptr, 1);
  v37 = a6[1];
  v38 = (_QWORD *)(v37 + 8LL * (unsigned int)v36);
  for ( i = (_QWORD *)(v37 + 8 * HIDWORD(v36)); i != v38; ++v38 )
  {
    if ( *v38 && (unsigned __int8)sub_21B9810(*v38, 2465) )
      break;
  }
  v40 = p_ptr;
  v134 = v148;
  while ( i != v38 )
  {
    v41 = **(const char ***)(*v38 + 48LL);
    v18 = *v41 == 0;
    v148[0] = "-plugin-opt=";
    if ( v18 )
    {
      a9 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      v42 = 12;
      ptr = v40 + 3;
      v43 = *a6;
      v44 = "-plugin-opt=";
      v151 = 259;
      v45 = *(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(v43 + 16);
      v157 = a9;
    }
    else
    {
      v149 = v41;
      a8 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      ptr = v40 + 3;
      v105 = *a6;
      v151 = 771;
      v157 = a8;
      v45 = *(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(v105 + 16);
      sub_22538C0(v134, v40);
      v42 = v157.m128i_i64[0];
      v44 = (const char *)ptr;
    }
    v46 = v45(a6, v44, v42);
    if ( ptr != v40 + 3 )
    {
      v131 = (char **)v46;
      free(ptr);
      v46 = (__int64)v131;
    }
    v47 = (unsigned int)v153;
    v48 = (unsigned int)v153 + 1LL;
    if ( v48 > HIDWORD(v153) )
    {
      v131 = (char **)v46;
      sub_2237220(v133, v133 + 2, v48, 8);
      v47 = (unsigned int)v153;
      v46 = (__int64)v131;
    }
    ++v38;
    *((_QWORD *)v152 + v47) = v46;
    LODWORD(v153) = v153 + 1;
    if ( v38 == i )
      break;
    while ( !*v38 || !(unsigned __int8)sub_21B9810(*v38, 2465) )
    {
      if ( i == ++v38 )
        goto LABEL_37;
    }
  }
LABEL_37:
  if ( *((_DWORD *)*v135 + 5) )
  {
    v112 = (unsigned int)v153;
    v113 = (unsigned int)v153 + 1LL;
    if ( v113 > HIDWORD(v153) )
    {
      sub_2237220(v133, v133 + 2, v113, 8);
      v112 = (unsigned int)v153;
    }
    *((_QWORD *)v152 + v112) = "-save-temps";
    LODWORD(v153) = v153 + 1;
  }
  sub_11BD3E0((__int64)v140, (__int64)a6, (__int64)v133);
  v49 = (unsigned int)v153;
  v50 = (unsigned int)v153 + 1LL;
  if ( v50 > HIDWORD(v153) )
  {
    sub_2237220(v133, v133 + 2, v50, 8);
    v49 = (unsigned int)v153;
  }
  v51 = p_ptr;
  *((_QWORD *)v152 + v49) = "--whole-archive";
  LODWORD(v153) = v153 + 1;
  LODWORD(ptr) = 3502;
  v52 = sub_21B6DA0(a6, v51, 1);
  v53 = a6[1];
  v54 = (_QWORD *)(v53 + 8LL * (unsigned int)v52);
  for ( j = (_QWORD *)(v53 + 8 * HIDWORD(v52)); j != v54; ++v54 )
  {
    if ( *v54 && (unsigned __int8)sub_21B9810(*v54, 3502) )
      break;
  }
  v131 = (char **)&v141;
  v134 = v148;
  while ( j != v54 )
  {
    v56 = *v54;
    v57 = *(const char **)(*(_QWORD *)(*v54 + 48LL) + 8LL);
    v58 = 0;
    v141 = v57;
    if ( v57 )
      v58 = strlen(v57);
    v142 = v58;
    v59 = sub_2246AB0(v131, "-mllvm=", 7, 0);
    if ( v59 == -1 )
    {
      v61 = v141;
      v62 = *a6;
    }
    else
    {
      v60 = v59 + 7;
      v61 = v141;
      if ( v60 > v142 )
      {
        v62 = *a6;
      }
      else
      {
        v62 = *a6;
        if ( v142 != v60 )
        {
          a10 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
          v149 = &v141[v60];
          v148[0] = "-plugin-opt=";
          v150 = v142 - v60;
          v63 = p_ptr + 3;
          v151 = 1283;
          ptr = p_ptr + 3;
          v64 = *(__int64 (__fastcall **)(_QWORD *, void *, __int64))(v62 + 16);
          v157 = a10;
          sub_22538C0(v134, p_ptr);
          v65 = v64(a6, ptr, v157.m128i_i64[0]);
          if ( ptr != v63 )
            free(ptr);
          v66 = (unsigned int)v153;
          v67 = (unsigned int)v153 + 1LL;
          if ( v67 > HIDWORD(v153) )
          {
            sub_2237220(v133, v133 + 2, v67, 8);
            v66 = (unsigned int)v153;
          }
          *((_QWORD *)v152 + v66) = v65;
          LODWORD(v153) = v153 + 1;
          goto LABEL_56;
        }
      }
    }
    v106 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, const char *))(v62 + 16))(a6, v61);
    v107 = (unsigned int)v153;
    v108 = (unsigned int)v153 + 1LL;
    if ( v108 > HIDWORD(v153) )
    {
      v140 = v106;
      sub_2237220(v133, v133 + 2, v108, 8);
      v107 = (unsigned int)v153;
      v106 = v140;
    }
    *((_QWORD *)v152 + v107) = v106;
    LODWORD(v153) = v153 + 1;
LABEL_56:
    v68 = *(_QWORD *)(v56 + 16);
    if ( !v68 )
      v68 = v56;
    ++v54;
    *(_BYTE *)(v68 + 44) |= 1u;
    if ( v54 == j )
      break;
    while ( !*v54 || !(unsigned __int8)sub_21B9810(*v54, 3502) )
    {
      if ( j == ++v54 )
        goto LABEL_62;
    }
  }
LABEL_62:
  v69 = *v138;
  v70 = (unsigned int)v153;
  v71 = (unsigned int)v153 + 2LL;
  if ( v71 > HIDWORD(v153) )
  {
    sub_2237220(v133, v133 + 2, v71, 8);
    v70 = (unsigned int)v153;
  }
  v72 = v152;
  *((_QWORD *)v152 + v70) = "-o";
  v73 = v137;
  v72[v70 + 1] = v69;
  v74 = *(__int64 **)v73;
  v75 = (unsigned int)(v153 + 2);
  v76 = 5LL * *(unsigned int *)(v73 + 8);
  LODWORD(v153) = v153 + 2;
  v77 = &v74[v76];
  for ( k = v133 + 2; v77 != v74; LODWORD(v153) = v153 + 1 )
  {
    v79 = *v74;
    if ( v75 + 1 > (unsigned __int64)HIDWORD(v153) )
    {
      sub_2237220(v133, k, v75 + 1, 8);
      *((_QWORD *)v152 + (unsigned int)v153) = v79;
    }
    else
    {
      *((_QWORD *)v152 + v75) = v79;
    }
    v74 += 5;
    v75 = (unsigned int)(v153 + 1);
  }
  sub_21B7BC0(a6, 2323, &byte_22F0C30, 0);
  sub_11D0E30(
    v135,
    v136,
    v139,
    v137,
    (__int64)a6,
    (__int64)v133,
    *(double *)si128.m128_u64,
    a8,
    a9,
    a10,
    (__int64)"amdgcn");
  v80 = (unsigned int)v153;
  v81 = (unsigned int)v153 + 1LL;
  if ( v81 > HIDWORD(v153) )
  {
    sub_2237220(v133, v133 + 2, v81, 8);
    v80 = (unsigned int)v153;
  }
  v82 = p_ptr;
  *((_QWORD *)v152 + v80) = "--no-whole-archive";
  LODWORD(v153) = v153 + 1;
  sub_112D530(v82, *(_QWORD *)(v136 + 24), "lld");
  v83 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(*a6 + 16LL))(a6, ptr, v157.m128i_i64[0]);
  if ( ptr != v82 + 2 )
    operator delete(ptr);
  v132 = 1;
  v84 = *(const __m128i **)v137;
  v85 = *(unsigned int *)(v137 + 8);
  v131 = v138;
  v86 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v86, v139, v136, 2, 0, v83, (__int64)v133, v84, v85, (__int64)v131, v132, 0);
  ptr = v86;
  v87 = *((unsigned int *)v135 + 40);
  v88 = v87 + 1;
  v89 = *((_DWORD *)v135 + 40);
  if ( v87 + 1 > (unsigned __int64)*((unsigned int *)v135 + 41) )
  {
    v125 = v135;
    v126 = p_ptr;
    v127 = v135[19];
    v128 = v135 + 19;
    if ( v127 > (__int64 *)p_ptr || p_ptr >= (void **)&v127[v87] )
    {
      sub_11673D0((__int64)v128, v88, si128, *(double *)a8.m128i_i64);
      v87 = *((unsigned int *)v135 + 40);
      v90 = v135[19];
      v91 = p_ptr;
      v89 = *((_DWORD *)v135 + 40);
    }
    else
    {
      sub_11673D0((__int64)v128, v88, si128, *(double *)a8.m128i_i64);
      v90 = v125[19];
      v87 = *((unsigned int *)v125 + 40);
      v91 = (void **)((char *)v90 + (char *)v126 - (char *)v127);
      v89 = *((_DWORD *)v125 + 40);
    }
  }
  else
  {
    v90 = v135[19];
    v91 = p_ptr;
  }
  v92 = (__int64)*v91;
  *v91 = nullptr;
  v93 = v135;
  v90[v87] = v92;
  v94 = ptr;
  *((_DWORD *)v93 + 40) = v89 + 1;
  if ( v94 )
  {
    v95 = *(void (__fastcall **)(_QWORD *))(*v94 + 8LL);
    if ( v95 == sub_10D4290 )
    {
      v96 = v94[58];
      v97 = v94[57];
      *v94 = &off_2BA8F30;
      if ( v96 != v97 )
      {
        do
        {
          if ( *(_BYTE *)(v97 + 32) && *(_QWORD *)v97 != v97 + 16 )
            operator delete(*(void **)v97);
          v97 += 40;
        }
        while ( v96 != v97 );
        v97 = v94[57];
      }
      if ( v97 )
        operator delete((void *)v97);
      v98 = (void *)v94[54];
      if ( v98 )
        operator delete(v98);
      v99 = (_QWORD *)v94[50];
      if ( v99 != v94 + 52 )
        operator delete(v99);
      v100 = (_QWORD *)v94[32];
      if ( v100 != v94 + 34 )
        free(v100);
      v101 = (void **)v94[29];
      v102 = (void **)v94[28];
      if ( v101 != v102 )
      {
        do
        {
          while ( *v102 != v102 + 2 )
          {
            operator delete(*v102);
            v102 += 4;
            if ( v102 == v101 )
            {
              v102 = (void **)v94[28];
              goto LABEL_94;
            }
          }
          v102 += 4;
        }
        while ( v101 != v102 );
        v102 = (void **)v94[28];
      }
LABEL_94:
      if ( v102 )
        operator delete(v102);
      v103 = (void *)v94[25];
      if ( v103 )
        operator delete(v103);
      v104 = (_QWORD *)v94[7];
      if ( v104 != v94 + 9 )
        free(v104);
      operator delete(v94, 0x208u);
    }
    else
    {
      v95(v94);
    }
  }
  if ( v145 != v129 + 16 )
    operator delete(v145);
  if ( v143[0] )
    operator delete(v143[0]);
  if ( v152 != v133 + 2 )
    free(v152);
}
