void __fastcall sub_1C260B0(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        __int64 a8,
        __int32 a9,
        char a10)
{
  __int64 v13; // rdx
  char *v16; // rbp
  __m128i *v17; // rcx
  size_t v18; // rax
  __m128i *v19; // rax
  size_t *v20; // rdi
  size_t v21; // rsi
  size_t v22; // r15
  size_t v23; // rax
  char *v24; // r15
  __int64 v25; // rdx
  void *v26; // rsi
  __int64 v27; // r15
  __m128i *v28; // rax
  const char *v29; // rdi
  size_t v30; // rax
  const void *v31; // rsi
  const void *v32; // rax
  __int64 v33; // r14
  char *v34; // r9
  size_t v35; // r15
  __m128i v36; // xmm0
  __int64 v37; // r8
  char *v38; // rax
  char *v39; // rax
  __m128i *v40; // r14
  __m128i v41; // xmm2
  void *v42; // rax
  void *v43; // r13
  size_t v44; // r15
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 *v48; // r8
  void *v49; // r14
  size_t v50; // r13
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 *v54; // r9
  __int64 v55; // rax
  __int64 v56; // rcx
  __m128i *v57; // rax
  _QWORD *v58; // rdi
  size_t v59; // rsi
  size_t v60; // r12
  unsigned __int64 v61; // rax
  __m128i *v62; // rax
  unsigned __int32 v63; // r8d
  _QWORD *v64; // r9
  _QWORD *m128i_i64; // rcx
  __int64 *v66; // rdx
  __m128i *v67; // rax
  unsigned __int32 v68; // r9d
  __m128i **v69; // r8
  __m128i *v70; // rcx
  unsigned int v71; // eax
  char *v72; // rdi
  size_t v73; // rax
  unsigned __int64 v74; // rax
  __m128i *v75; // rdi
  __int64 v76; // rdx
  size_t v77; // rdx
  _BYTE *v78; // rdi
  _BYTE *v79; // rdi
  __int64 v80; // rdx
  unsigned __int64 v81; // r10
  unsigned __int64 v82; // r15
  __int64 v83; // rax
  __m128i *v84; // r15
  __int64 v85; // rsi
  __m128i *v86; // rdx
  size_t v87; // rsi
  __m128i v88; // xmm5
  const __m128i *v89; // rsi
  const __m128i *v90; // rax
  unsigned __int64 v91; // rdi
  __int64 v92; // r9
  __m128i *v93; // rdx
  __m128i v94; // xmm1
  __int64 v95; // rcx
  __int64 v96; // rsi
  __int64 v97; // rcx
  __int64 v98; // rsi
  __int64 v99; // rcx
  const __m128i *v100; // rcx
  __m128i *v101; // r15
  void *v102; // rdi
  void *v103; // rdi
  __m128 v104; // xmm0
  unsigned __int64 v105; // [rsp+10h] [rbp-128h]
  __m128i src; // [rsp+18h] [rbp-120h] BYREF
  __m128i *v107; // [rsp+28h] [rbp-110h] BYREF
  void *v108; // [rsp+30h] [rbp-108h]
  __int64 v109; // [rsp+38h] [rbp-100h]
  __int64 *v110; // [rsp+48h] [rbp-F0h] BYREF
  void *v111; // [rsp+50h] [rbp-E8h] BYREF
  size_t v112; // [rsp+58h] [rbp-E0h]
  _QWORD v113[2]; // [rsp+60h] [rbp-D8h] BYREF
  void *dest; // [rsp+70h] [rbp-C8h] BYREF
  __m128 v115; // [rsp+78h] [rbp-C0h] BYREF
  void *v116; // [rsp+90h] [rbp-A8h] BYREF
  size_t n; // [rsp+98h] [rbp-A0h]
  _BYTE v118[16]; // [rsp+A0h] [rbp-98h] BYREF
  void *v119; // [rsp+B0h] [rbp-88h] BYREF
  size_t v120; // [rsp+B8h] [rbp-80h]
  __m128i v121; // [rsp+C0h] [rbp-78h] BYREF
  __m128i v122; // [rsp+D0h] [rbp-68h] BYREF
  void *v123[2]; // [rsp+E0h] [rbp-58h]
  char *v124; // [rsp+F0h] [rbp-48h]

  v13 = -1;
  v16 = *(char **)a2;
  src.m128i_i64[1] = a5;
  src.m128i_i32[0] = a9;
  v111 = v113;
  if ( v16 )
    v13 = (__int64)&v16[strlen(v16)];
  sub_1C244F0(&v111, v16, v13);
  if ( a4 )
  {
    v116 = v118;
    if ( a3 )
    {
      sub_1C244F0(&v116, a3, (__int64)&a3[a4]);
    }
    else
    {
      n = 0;
      v118[0] = 0;
    }
    v57 = (__m128i *)sub_99BDC0(&v116, 0, 0, "_", 1u);
    v119 = &v121;
    if ( (__m128i *)v57->m128i_i64[0] == &v57[1] )
    {
      v121 = _mm_loadu_si128(v57 + 1);
    }
    else
    {
      v119 = (void *)v57->m128i_i64[0];
      v121.m128i_i64[0] = v57[1].m128i_i64[0];
    }
    v120 = v57->m128i_u64[1];
    v57->m128i_i64[0] = (__int64)v57[1].m128i_i64;
    v58 = v111;
    v57->m128i_i64[1] = 0;
    v59 = v112;
    v57[1].m128i_i8[0] = 0;
    v60 = v120 + v59;
    if ( v58 == v113 )
      v61 = 15;
    else
      v61 = v113[0];
    if ( v60 > v61 )
    {
      sub_998B30((__int64)&v111, v59, 0, v119, v120);
      v58 = v111;
    }
    else if ( v120 )
    {
      v78 = (char *)v58 + v59;
      if ( v120 == 1 )
        *v78 = *(_BYTE *)v119;
      else
        memcpy(v78, v119, v120);
      v58 = v111;
    }
    v112 = v60;
    *((_BYTE *)v58 + v60) = 0;
    if ( v119 != &v121 )
      operator delete(v119);
    if ( v116 != v118 )
      operator delete(v116);
  }
  v17 = *(__m128i **)(a2 + 8);
  v115.m128_u64[0] = 0;
  v115.m128_i8[8] = 0;
  dest = &v115.m128_u16[4];
  if ( v17 )
  {
    v107 = v17;
    v18 = strlen(v17->m128i_i8);
    sub_99BDC0(&dest, 0, 0, v107, v18);
    goto LABEL_6;
  }
  v72 = *(char **)a2;
  v73 = 0;
  v116 = v72;
  if ( v72 )
    v73 = strlen(v72);
  n = v73;
  v74 = sub_2246AB0(&v116, "_", 1, 0);
  if ( v74 == -1 )
  {
    v74 = n;
  }
  else if ( n <= v74 )
  {
    v74 = n;
  }
  if ( !v116 )
  {
    v121.m128i_i8[0] = 0;
    v75 = (__m128i *)dest;
    v77 = 0;
    v119 = &v121;
LABEL_96:
    v115.m128_u64[0] = v77;
    v75->m128i_i8[v77] = 0;
    v75 = (__m128i *)v119;
    goto LABEL_87;
  }
  v119 = &v121;
  v107 = &v121;
  sub_1C244F0(&v119, v116, (__int64)v116 + v74);
  v75 = (__m128i *)dest;
  if ( v119 == &v121 )
  {
    v77 = v120;
    if ( v120 )
    {
      if ( v120 == 1 )
        *(_BYTE *)dest = v121.m128i_i8[0];
      else
        memcpy(dest, v119, v120);
      v77 = v120;
      v75 = (__m128i *)dest;
    }
    goto LABEL_96;
  }
  if ( dest == &v115.m128_u16[4] )
  {
    v107 = (__m128i *)v121.m128i_i64[0];
    dest = v119;
    v115 = _mm_loadh_ps((const double *)&v107);
  }
  else
  {
    v107 = (__m128i *)v121.m128i_i64[0];
    v76 = v115.m128_i64[1];
    dest = v119;
    v115 = _mm_loadh_ps((const double *)&v107);
    if ( v75 )
    {
      v119 = v75;
      v121.m128i_i64[0] = v76;
      goto LABEL_87;
    }
  }
  v75 = &v121;
  v119 = &v121;
LABEL_87:
  v120 = 0;
  v75->m128i_i8[0] = 0;
  if ( v119 != &v121 )
    operator delete(v119);
LABEL_6:
  if ( a6 )
  {
    v116 = v118;
    if ( src.m128i_i64[1] )
    {
      sub_1C244F0(&v116, (_BYTE *)src.m128i_i64[1], src.m128i_i64[1] + a6);
    }
    else
    {
      n = 0;
      v118[0] = 0;
    }
    v19 = (__m128i *)sub_99BDC0(&v116, 0, 0, "_", 1u);
    v119 = &v121;
    if ( (__m128i *)v19->m128i_i64[0] == &v19[1] )
    {
      v121 = _mm_loadu_si128(v19 + 1);
    }
    else
    {
      v119 = (void *)v19->m128i_i64[0];
      v121.m128i_i64[0] = v19[1].m128i_i64[0];
    }
    v120 = v19->m128i_u64[1];
    v19->m128i_i64[0] = (__int64)v19[1].m128i_i64;
    v20 = (size_t *)dest;
    v19->m128i_i64[1] = 0;
    v21 = v115.m128_u64[0];
    v19[1].m128i_i8[0] = 0;
    v22 = v120 + v21;
    if ( v20 == (size_t *)&v115.m128_u16[4] )
      v23 = 15;
    else
      v23 = v115.m128_u64[1];
    if ( v22 > v23 )
    {
      sub_998B30((__int64)&dest, v21, 0, v119, v120);
      v20 = (size_t *)dest;
    }
    else if ( v120 )
    {
      v79 = (char *)v20 + v21;
      if ( v120 == 1 )
        *v79 = *(_BYTE *)v119;
      else
        memcpy(v79, v119, v120);
      v20 = (size_t *)dest;
    }
    v115.m128_u64[0] = v22;
    *((_BYTE *)v20 + v22) = 0;
    if ( v119 != &v121 )
      operator delete(v119);
    if ( v116 != v118 )
      operator delete(v116);
  }
  v24 = *(char **)a2;
  v25 = -1;
  v116 = v118;
  if ( v24 )
    v25 = (__int64)&v24[strlen(v24)];
  sub_1C244F0(&v116, v24, v25);
  sub_1FE70E0(
    a7,
    src.m128i_u8[0],
    (unsigned int)&v111,
    (unsigned int)&v116,
    (unsigned int)&dest,
    (unsigned int)&a10,
    (*(_BYTE *)(a2 + 36) & 0x20) != 0);
  v26 = v116;
  v27 = n;
  v105 = 0x8E38E38E38E38E39LL * ((__int64)(*(_QWORD *)(a1 + 136) - *(_QWORD *)(a1 + 128)) >> 3);
  v119 = &v121;
  if ( (char *)v116 + n && !v116 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( n > 0xF )
  {
    if ( (n & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    src.m128i_i64[0] = (__int64)v116;
    v28 = (__m128i *)operator new(n + 1);
    v121.m128i_i64[0] = v27;
    v26 = (void *)src.m128i_i64[0];
    v119 = v28;
LABEL_91:
    memcpy(v28, v26, v27);
    v28 = (__m128i *)v119;
    goto LABEL_26;
  }
  if ( n == 1 )
  {
    v121.m128i_i8[0] = *(_BYTE *)v116;
    v28 = &v121;
    goto LABEL_26;
  }
  v28 = &v121;
  if ( n )
    goto LABEL_91;
LABEL_26:
  v120 = v27;
  v28->m128i_i8[v27] = 0;
  v29 = *(const char **)(a2 + 16);
  v30 = 0;
  v122.m128i_i64[0] = (__int64)v29;
  if ( v29 )
    v30 = strlen(v29);
  v122.m128i_i64[1] = v30;
  *(_OWORD *)v123 = 0;
  v124 = nullptr;
  v31 = *(const void **)a8;
  v32 = *(const void **)(a8 + 8);
  v33 = (__int64)v32 - *(_QWORD *)a8;
  if ( v33 >> 3 )
  {
    if ( (unsigned __int64)(v33 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v34 = (char *)operator new(*(_QWORD *)(a8 + 8) - *(_QWORD *)a8);
    v31 = *(const void **)a8;
    v32 = *(const void **)(a8 + 8);
    v35 = (size_t)v32 - *(_QWORD *)a8;
  }
  else
  {
    v35 = *(_QWORD *)(a8 + 8) - *(_QWORD *)a8;
    v34 = nullptr;
  }
  src.m128i_i64[0] = (__int64)v34;
  v36 = _mm_loadl_epi64(&src);
  v37 = (__int64)&v34[v33];
  v124 = &v34[v33];
  *(__m128i *)v123 = _mm_unpacklo_epi64(v36, v36);
  if ( v32 != v31 )
  {
    src.m128i_i64[0] = (__int64)&v34[v33];
    v38 = (char *)memmove(v34, v31, v35);
    v37 = src.m128i_i64[0];
    v34 = v38;
  }
  v39 = &v34[v35];
  v40 = *(__m128i **)(a1 + 136);
  v123[1] = &v34[v35];
  if ( v40 != *(__m128i **)(a1 + 144) )
  {
    v40->m128i_i64[0] = (__int64)v40[1].m128i_i64;
    if ( v119 == &v121 )
    {
      v40[1] = _mm_load_si128(&v121);
    }
    else
    {
      v40->m128i_i64[0] = (__int64)v119;
      v40[1].m128i_i64[0] = v121.m128i_i64[0];
    }
    v40->m128i_i64[1] = v120;
    v41 = _mm_load_si128(&v122);
    v40[3].m128i_i64[0] = 0;
    v40[3].m128i_i64[1] = 0;
    v40[4].m128i_i64[0] = 0;
    v42 = v123[0];
    v40[2] = v41;
    v40[3].m128i_i64[0] = (__int64)v42;
    v40[3].m128i_i64[1] = (__int64)v123[1];
    v40[4].m128i_i64[0] = (__int64)v124;
    *(_QWORD *)(a1 + 136) += 72LL;
    goto LABEL_37;
  }
  v80 = (__int64)v40->m128i_i64 - *(_QWORD *)(a1 + 128);
  v108 = *(void **)(a1 + 128);
  if ( 0x8E38E38E38E38E39LL * (v80 >> 3) )
  {
    v81 = 0x1C71C71C71C71C72LL * (v80 >> 3);
    if ( 0x8E38E38E38E38E39LL * (v80 >> 3) > v81 )
    {
      v82 = -16;
    }
    else
    {
      v82 = -16;
      if ( v81 <= 0x38E38E38E38E38ELL )
      {
        if ( !v81 )
        {
          src.m128i_i64[1] = 72;
          v107 = nullptr;
          src.m128i_i64[0] = 0;
          goto LABEL_107;
        }
        v82 = 16 * (v80 >> 3);
      }
    }
  }
  else
  {
    v82 = 72;
  }
  v109 = v80;
  v83 = operator new(v82);
  v34 = (char *)v123[0];
  v80 = v109;
  src.m128i_i64[0] = v83;
  v37 = (__int64)v124;
  v84 = (__m128i *)(v83 + v82);
  v85 = v83 + 72;
  v39 = (char *)v123[1];
  v107 = v84;
  src.m128i_i64[1] = v85;
LABEL_107:
  v86 = (__m128i *)(src.m128i_i64[0] + v80);
  v86->m128i_i64[0] = (__int64)v86[1].m128i_i64;
  if ( v119 == &v121 )
  {
    v86[1] = _mm_load_si128(&v121);
  }
  else
  {
    v86->m128i_i64[0] = (__int64)v119;
    v86[1].m128i_i64[0] = v121.m128i_i64[0];
  }
  v87 = v120;
  v121.m128i_i8[0] = 0;
  v88 = _mm_load_si128(&v122);
  v86[3].m128i_i64[0] = (__int64)v34;
  v86->m128i_i64[1] = v87;
  v119 = &v121;
  v89 = (const __m128i *)v108;
  v120 = 0;
  v86[2] = v88;
  v123[0] = nullptr;
  v86[3].m128i_i64[1] = (__int64)v39;
  v123[1] = nullptr;
  v86[4].m128i_i64[0] = v37;
  v124 = nullptr;
  if ( v40 != v89 )
  {
    v90 = v89 + 1;
    v91 = (0xE38E38E38E38E39LL * ((unsigned __int64)((char *)&v40[-5].m128i_u64[1] - (char *)v89) >> 3))
        & 0x1FFFFFFFFFFFFFFFLL;
    v92 = src.m128i_i64[0] + 8 * (9 * v91 + 9);
    v93 = (__m128i *)src.m128i_i64[0];
    do
    {
      v93->m128i_i64[0] = (__int64)v93[1].m128i_i64;
      v100 = (const __m128i *)v90[-1].m128i_i64[0];
      if ( v100 == v90 )
      {
        v93[1] = _mm_loadu_si128(v90);
      }
      else
      {
        v93->m128i_i64[0] = (__int64)v100;
        v93[1].m128i_i64[0] = v90->m128i_i64[0];
      }
      v93 = (__m128i *)((char *)v93 + 72);
      v93[-4].m128i_i64[0] = v90[-1].m128i_i64[1];
      v94 = _mm_loadu_si128(v90 + 1);
      v90->m128i_i8[0] = 0;
      v90[-1].m128i_i64[0] = (__int64)v90;
      v90 = (const __m128i *)((char *)v90 + 72);
      v90[-5].m128i_i64[0] = 0;
      v93[-1].m128i_i64[0] = 0;
      v93[-1].m128i_i64[1] = 0;
      v93[-2].m128i_i64[1] = 0;
      v95 = v90[-3].m128i_i64[1];
      *(__m128i *)((char *)v93 - 40) = v94;
      v93[-2].m128i_i64[1] = v95;
      v96 = v90[-2].m128i_i64[0];
      v90[-3].m128i_i64[1] = 0;
      v97 = v93[-1].m128i_i64[0];
      v93[-1].m128i_i64[0] = v96;
      v98 = v90[-2].m128i_i64[1];
      v90[-2].m128i_i64[0] = v97;
      v99 = v93[-1].m128i_i64[1];
      v93[-1].m128i_i64[1] = v98;
      v90[-2].m128i_i64[1] = v99;
    }
    while ( (__m128i *)v92 != v93 );
    v101 = (__m128i *)v108;
    src.m128i_i64[1] = src.m128i_i64[0] + 72 * v91 + 144;
    do
    {
      while ( 1 )
      {
        v102 = (void *)v101[3].m128i_i64[0];
        if ( v102 )
          operator delete(v102);
        if ( (__m128i *)v101->m128i_i64[0] == &v101[1] )
          break;
        operator delete((void *)v101->m128i_i64[0]);
        v101 = (__m128i *)((char *)v101 + 72);
        if ( v101 == v40 )
          goto LABEL_120;
      }
      v101 = (__m128i *)((char *)v101 + 72);
    }
    while ( v40 != v101 );
  }
LABEL_120:
  if ( v108 )
    operator delete(v108);
  v103 = v123[0];
  v104 = _mm_loadh_ps((const double *)&src.m128i_i64[1]);
  *(_QWORD *)(a1 + 144) = v107;
  *(__m128 *)(a1 + 128) = v104;
  if ( v103 )
    operator delete(v103);
  if ( v119 != &v121 )
    operator delete(v119);
LABEL_37:
  v43 = v111;
  v44 = v112;
  v119 = v111;
  v120 = v112;
  v45 = sub_2244B30(v111, v112);
  v46 = (unsigned int)sub_2244CB0(a1 + 152, v43, v44, v45);
  v48 = (__int64 *)(*(_QWORD *)(a1 + 152) + 8 * v46);
  if ( *v48 )
  {
    if ( *v48 != -8 )
    {
      sub_E37610(&v110, v48, 0);
      goto LABEL_40;
    }
    --*(_DWORD *)(a1 + 168);
  }
  src.m128i_i64[1] = (__int64)v48;
  src.m128i_i32[0] = v46;
  v67 = (__m128i *)sub_22300B0(v44 + 17, 8, v46, v47, v48, v46);
  v68 = src.m128i_i32[0];
  v69 = (__m128i **)src.m128i_i64[1];
  v70 = v67;
  if ( v44 )
  {
    v107 = v67;
    memcpy(&v67[1], v43, v44);
    v70 = v107;
    v69 = (__m128i **)src.m128i_i64[1];
    v68 = src.m128i_i32[0];
  }
  v70[1].m128i_i8[v44] = 0;
  v70->m128i_i64[0] = v44;
  v70->m128i_i32[2] = v105;
  *v69 = v70;
  ++*(_DWORD *)(a1 + 164);
  v71 = sub_22450D0(a1 + 152, v68);
  sub_E37610(&v110, (__int64 *)(*(_QWORD *)(a1 + 152) + 8LL * v71), 0);
LABEL_40:
  v49 = dest;
  v50 = v115.m128_u64[0];
  v51 = sub_2244B30(dest, v115.m128_u64[0]);
  v52 = (unsigned int)sub_2244CB0(a1 + 176, v49, v50, v51);
  v54 = (__int64 *)(*(_QWORD *)(a1 + 176) + 8 * v52);
  v55 = *v54;
  if ( *v54 )
  {
    if ( v55 != -8 )
      goto LABEL_42;
    --*(_DWORD *)(a1 + 192);
  }
  src.m128i_i64[1] = (__int64)v54;
  src.m128i_i32[0] = v52;
  v62 = (__m128i *)sub_22300B0(v50 + 57, 8, v52, v53, v52, v54);
  v63 = src.m128i_i32[0];
  v64 = (_QWORD *)src.m128i_i64[1];
  m128i_i64 = v62->m128i_i64;
  if ( v50 )
  {
    v107 = v62;
    memcpy(&v62[3].m128i_u64[1], v49, v50);
    m128i_i64 = v107->m128i_i64;
    v64 = (_QWORD *)src.m128i_i64[1];
    v63 = src.m128i_i32[0];
  }
  *((_BYTE *)m128i_i64 + v50 + 56) = 0;
  m128i_i64[1] = m128i_i64 + 3;
  *m128i_i64 = v50;
  m128i_i64[2] = 0x800000000LL;
  *v64 = m128i_i64;
  ++*(_DWORD *)(a1 + 188);
  v66 = (__int64 *)(*(_QWORD *)(a1 + 176) + 8LL * (unsigned int)sub_22450D0(a1 + 176, v63));
  v55 = *v66;
  if ( *v66 )
    goto LABEL_71;
  do
  {
    do
      v55 = *++v66;
    while ( !*v66 );
LABEL_71:
    ;
  }
  while ( v55 == -8 );
LABEL_42:
  v56 = *(unsigned int *)(v55 + 16);
  if ( v56 + 1 > (unsigned __int64)*(unsigned int *)(v55 + 20) )
  {
    src.m128i_i64[0] = v55;
    sub_2237220(v55 + 8, v55 + 24, v56 + 1, 4);
    v55 = src.m128i_i64[0];
    v56 = *(unsigned int *)(src.m128i_i64[0] + 16);
  }
  *(_DWORD *)(*(_QWORD *)(v55 + 8) + 4 * v56) = v105;
  ++*(_DWORD *)(v55 + 16);
  if ( v116 != v118 )
    operator delete(v116);
  if ( dest != &v115.m128_u16[4] )
    operator delete(dest);
  if ( v111 != v113 )
    operator delete(v111);
}
