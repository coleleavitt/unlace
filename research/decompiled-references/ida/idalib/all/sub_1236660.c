void __fastcall sub_1236660(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __m128 a7,
        __m128i a8,
        __int64 a9)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  bool v18; // zf
  char **v19; // r13
  _BYTE *v20; // rdi
  _BYTE *v21; // rdi
  size_t v22; // r9
  __m128i *v23; // rax
  _QWORD *v24; // rdi
  size_t v25; // rsi
  size_t v26; // r9
  unsigned __int64 v27; // rax
  _BYTE *v28; // rdi
  _BYTE *v29; // rdi
  size_t v30; // r9
  unsigned __int64 v31; // rax
  _BYTE *v32; // rdi
  char *v33; // rax
  size_t v34; // rbp
  __int64 v35; // r15
  unsigned __int64 v36; // rax
  __m128i *v37; // rax
  _QWORD *v38; // rdi
  size_t v39; // rsi
  size_t v40; // rbp
  unsigned __int64 v41; // rax
  _BYTE *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // r14
  char **v50; // rbp
  _QWORD *v51; // r9
  __m128i *v52; // rax
  _QWORD *v53; // r8
  size_t v54; // rdx
  __m128i *v55; // rdi
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  __m128i *v60; // r12
  char *v61; // r13
  size_t v62; // r15
  _BYTE *v63; // rdi
  size_t v64; // r9
  unsigned __int64 v65; // rax
  _BYTE *v66; // rdi
  __m128i v67; // xmm2
  _BYTE *v68; // rdi
  size_t v69; // r12
  unsigned __int64 v70; // rax
  __int64 v71; // r12
  __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  __int64 v74; // r15
  void **v75; // rsi
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 v78; // r13
  const __m128i *v79; // r14
  __int64 v80; // r15
  void *v81; // rbx
  __int64 v82; // rcx
  __int64 v83; // rsi
  int v84; // eax
  __int64 v85; // rsi
  void **v86; // rdx
  void *v87; // rdi
  __int64 v88; // rbx
  _QWORD *v89; // r14
  void (__fastcall *v90)(_QWORD *); // rax
  __int64 v91; // r12
  __int64 v92; // rbx
  void *v93; // rdi
  _QWORD *v94; // rdi
  _QWORD *v95; // rdi
  void **v96; // rbx
  void **v97; // r12
  void *v98; // rdi
  _QWORD *v99; // rdi
  _BYTE *v100; // rdi
  __m128i *v101; // rdi
  size_t v102; // rcx
  __int64 v103; // r14
  unsigned __int64 v104; // r12
  __int64 v105; // rdi
  size_t v106; // rdx
  __int64 v107; // [rsp+0h] [rbp-238h]
  __int64 v108; // [rsp+10h] [rbp-228h]
  __int64 v109; // [rsp+18h] [rbp-220h] BYREF
  _QWORD *v110; // [rsp+20h] [rbp-218h]
  _QWORD *v111; // [rsp+28h] [rbp-210h] BYREF
  void **p_dest; // [rsp+30h] [rbp-208h]
  void **p_ptr; // [rsp+38h] [rbp-200h]
  __int64 v114; // [rsp+40h] [rbp-1F8h]
  __int64 v115; // [rsp+48h] [rbp-1F0h]
  __int64 v116; // [rsp+50h] [rbp-1E8h]
  _BYTE *v117; // [rsp+58h] [rbp-1E0h]
  __int64 v118; // [rsp+60h] [rbp-1D8h]
  void **p_src; // [rsp+68h] [rbp-1D0h]
  void *v120; // [rsp+78h] [rbp-1C0h] BYREF
  void *v121; // [rsp+80h] [rbp-1B8h] BYREF
  size_t v122; // [rsp+88h] [rbp-1B0h]
  _QWORD v123[2]; // [rsp+90h] [rbp-1A8h] BYREF
  void *src; // [rsp+A0h] [rbp-198h] BYREF
  __m128 n; // [rsp+A8h] [rbp-190h] BYREF
  void *dest; // [rsp+C0h] [rbp-178h] BYREF
  __m128 v127; // [rsp+C8h] [rbp-170h] BYREF
  void *v128; // [rsp+E0h] [rbp-158h] BYREF
  size_t v129; // [rsp+E8h] [rbp-150h]
  _BYTE v130[16]; // [rsp+F0h] [rbp-148h] BYREF
  void *v131; // [rsp+100h] [rbp-138h] BYREF
  size_t v132; // [rsp+108h] [rbp-130h]
  __m128i v133; // [rsp+110h] [rbp-128h] BYREF
  __int16 v134; // [rsp+120h] [rbp-118h]
  void *v135; // [rsp+130h] [rbp-108h] BYREF
  size_t v136; // [rsp+138h] [rbp-100h]
  __m128i v137; // [rsp+140h] [rbp-F8h] BYREF
  __int64 v138; // [rsp+150h] [rbp-E8h]
  void *ptr; // [rsp+170h] [rbp-C8h] BYREF
  __int64 v140; // [rsp+178h] [rbp-C0h]
  _BYTE v141[184]; // [rsp+180h] [rbp-B8h] BYREF

  v115 = a1;
  p_ptr = &ptr;
  v140 = 0x1000000000LL;
  v9 = *a6;
  v116 = a2;
  v117 = a3;
  v118 = a4;
  v114 = a5;
  v110 = a6;
  ptr = v141;
  v10 = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(v9 + 16))(a6, "-type=o", 7);
  v11 = (unsigned int)v140;
  v12 = (unsigned int)v140 + 1LL;
  if ( v12 > HIDWORD(v140) )
  {
    v107 = v10;
    sub_2237220(p_ptr, v141, v12, 8);
    v11 = (unsigned int)v140;
    v10 = v107;
  }
  v13 = (__int64)v110;
  *((_QWORD *)ptr + v11) = v10;
  LODWORD(v131) = 4096;
  v135 = "-bundle-align=";
  LODWORD(v140) = v140 + 1;
  v137.m128i_i64[0] = (__int64)v131;
  LOWORD(v138) = 2307;
  v14 = sub_10DA6C0(v13, (__int64)&v135);
  v15 = (unsigned int)v140;
  v16 = (unsigned int)v140 + 1LL;
  if ( v16 > HIDWORD(v140) )
  {
    v108 = v14;
    sub_2237220(p_ptr, p_ptr + 2, v16, 8);
    v15 = (unsigned int)v140;
    v14 = v108;
  }
  *((_QWORD *)ptr + v15) = v14;
  v121 = v123;
  LODWORD(v140) = v140 + 1;
  sub_1232590(&v121, "-targets=host-x86_64-unknown-linux-gnu", (__int64)"");
  p_src = &src;
  src = &n.m128_u16[4];
  sub_1232590(&src, "hip", (__int64)"");
  v17 = *(_QWORD *)(a9 + 24);
  v18 = *(_DWORD *)(v17 + 48) == 26;
  v111 = (_QWORD *)(v17 + 16);
  if ( v18 && (unsigned int)sub_11BC5C0(*(_QWORD *)v115, (__int64)v110) > 3 )
  {
    v135 = &v137;
    sub_1232650(&v135, src, (__int64)src + n.m128_u64[0]);
    if ( v136 == 0x7FFFFFFFFFFFFFFFLL || v136 == 9223372036854775806LL )
LABEL_198:
      std::__throw_length_error("basic_string::append");
    sub_9EE560(&v135, "v4", 2u);
    v101 = (__m128i *)src;
    if ( v135 == &v137 )
    {
      v106 = v136;
      if ( v136 )
      {
        if ( v136 == 1 )
          *(_BYTE *)src = v137.m128i_i8[0];
        else
          memcpy(src, v135, v136);
        v106 = v136;
        v101 = (__m128i *)src;
      }
      n.m128_u64[0] = v106;
      v101->m128i_i8[v106] = 0;
      v101 = (__m128i *)v135;
      goto LABEL_180;
    }
    if ( src == &n.m128_u16[4] )
    {
      v109 = v137.m128i_i64[0];
      src = v135;
      a7 = _mm_loadh_ps((const double *)&v109);
      n = a7;
    }
    else
    {
      v109 = v137.m128i_i64[0];
      v102 = n.m128_u64[1];
      src = v135;
      a7 = _mm_loadh_ps((const double *)&v109);
      n = a7;
      if ( v101 )
      {
        v135 = v101;
        v137.m128i_i64[0] = v102;
        goto LABEL_180;
      }
    }
    v101 = &v137;
    v135 = &v137;
LABEL_180:
    v136 = 0;
    v101->m128i_i8[0] = 0;
    if ( v135 != &v137 )
      operator delete(v135);
  }
  v19 = *(char ***)v114;
  v109 = *(_QWORD *)v114 + 40LL * *(unsigned int *)(v114 + 8);
  if ( (char **)v109 != v19 )
  {
    while ( 1 )
    {
      v33 = v19[2];
      v34 = 0;
      v35 = *((_QWORD *)v33 + 9);
      if ( v35 )
        v34 = strlen(*((const char **)v33 + 9));
      v131 = &v133;
      v132 = 0;
      v133.m128i_i8[0] = 0;
      sub_995C30((__int64)&v131, n.m128_u64[0] + 1);
      sub_998CE0(&v131, v132, 0, 1u, 44);
      v21 = v131;
      v22 = n.m128_u64[0] + v132;
      v36 = v131 == &v133 ? 15LL : v133.m128i_i64[0];
      if ( v22 <= v36 )
      {
        if ( n.m128_u64[0] )
        {
          v20 = (char *)v131 + v132;
          if ( n.m128_u64[0] == 1 )
          {
            *v20 = *(_BYTE *)src;
            v21 = v131;
          }
          else
          {
            p_dest = (void **)(n.m128_u64[0] + v132);
            memcpy(v20, src, n.m128_u64[0]);
            v21 = v131;
            v22 = (size_t)p_dest;
          }
        }
      }
      else
      {
        p_dest = (void **)(n.m128_u64[0] + v132);
        sub_998B30((__int64)&v131, v132, 0, src, n.m128_u64[0]);
        v21 = v131;
        v22 = (size_t)p_dest;
      }
      v132 = v22;
      v21[v22] = 0;
      v23 = (__m128i *)sub_998CE0(&v131, v132, 0, 1u, 45);
      v135 = &v137;
      if ( (__m128i *)v23->m128i_i64[0] == &v23[1] )
      {
        a8 = _mm_loadu_si128(v23 + 1);
        v137 = a8;
      }
      else
      {
        v135 = (void *)v23->m128i_i64[0];
        v137.m128i_i64[0] = v23[1].m128i_i64[0];
      }
      v136 = v23->m128i_u64[1];
      v23->m128i_i64[0] = (__int64)v23[1].m128i_i64;
      v24 = v121;
      v23->m128i_i64[1] = 0;
      v25 = v122;
      v23[1].m128i_i8[0] = 0;
      v26 = v136 + v25;
      v27 = v24 == v123 ? 15LL : v123[0];
      if ( v26 > v27 )
      {
        p_dest = (void **)(v136 + v25);
        sub_998B30((__int64)&v121, v25, 0, v135, v136);
        v24 = v121;
        v26 = (size_t)p_dest;
      }
      else if ( v136 )
      {
        v28 = (char *)v24 + v25;
        if ( v136 == 1 )
        {
          *v28 = *(_BYTE *)v135;
          v24 = v121;
        }
        else
        {
          p_dest = (void **)(v136 + v25);
          memcpy(v28, v135, v136);
          v24 = v121;
          v26 = (size_t)p_dest;
        }
      }
      v122 = v26;
      *((_BYTE *)v24 + v26) = 0;
      if ( v135 != &v137 )
        operator delete(v135);
      if ( v131 != &v133 )
        operator delete(v131);
      if ( v34 == 11
        && *(_QWORD *)v35 == 0x70736E6367646D61LL
        && *(_WORD *)(v35 + 8) == 29289
        && *(_BYTE *)(v35 + 10) == 118 )
      {
        break;
      }
      sub_1232710((__int64)&v135, v111, v34 != 0);
      v29 = v121;
      v30 = v136 + v122;
      if ( v121 == v123 )
        v31 = 15;
      else
        v31 = v123[0];
      if ( v30 > v31 )
      {
        p_dest = (void **)(v136 + v122);
        sub_998B30((__int64)&v121, v122, 0, v135, v136);
        v29 = v121;
        v30 = (size_t)p_dest;
      }
      else if ( v136 )
      {
        v32 = (char *)v121 + v122;
        if ( v136 == 1 )
        {
          *v32 = *(_BYTE *)v135;
          v29 = v121;
        }
        else
        {
          p_dest = (void **)(v136 + v122);
          memcpy(v32, v135, v136);
          v29 = v121;
          v30 = (size_t)p_dest;
        }
      }
      v122 = v30;
      v29[v30] = 0;
      if ( v135 != &v137 )
        operator delete(v135);
      if ( !v34 )
        goto LABEL_34;
      if ( v35 )
        goto LABEL_96;
      v131 = &v133;
      v132 = 0;
      v133.m128i_i8[0] = 0;
LABEL_45:
      v37 = (__m128i *)sub_998CE0(&v131, 0, 0, 1u, 45);
      v135 = &v137;
      if ( (__m128i *)v37->m128i_i64[0] == &v37[1] )
      {
        v137 = _mm_loadu_si128(v37 + 1);
      }
      else
      {
        v135 = (void *)v37->m128i_i64[0];
        v137.m128i_i64[0] = v37[1].m128i_i64[0];
      }
      v136 = v37->m128i_u64[1];
      v37->m128i_i64[0] = (__int64)v37[1].m128i_i64;
      v38 = v121;
      v37->m128i_i64[1] = 0;
      v39 = v122;
      v37[1].m128i_i8[0] = 0;
      v40 = v136 + v39;
      if ( v38 == v123 )
        v41 = 15;
      else
        v41 = v123[0];
      if ( v40 > v41 )
      {
        sub_998B30((__int64)&v121, v39, 0, v135, v136);
        v38 = v121;
      }
      else if ( v136 )
      {
        v42 = (char *)v38 + v39;
        if ( v136 == 1 )
          *v42 = *(_BYTE *)v135;
        else
          memcpy(v42, v135, v136);
        v38 = v121;
      }
      v122 = v40;
      *((_BYTE *)v38 + v40) = 0;
      if ( v135 != &v137 )
        operator delete(v135);
      if ( v131 == &v133 )
      {
LABEL_34:
        v19 += 5;
        if ( (char **)v109 == v19 )
          goto LABEL_58;
      }
      else
      {
        operator delete(v131);
        v19 += 5;
        if ( (char **)v109 == v19 )
          goto LABEL_58;
      }
    }
    v131 = &v133;
    sub_1232590(&v131, (_BYTE *)"spirv64-amd-amdhsa", (__int64)"");
    sub_22B9ED0(&v135, &v131);
    if ( v131 != &v133 )
      operator delete(v131);
    sub_1232710((__int64)&v131, &v135, 1);
    v63 = v121;
    v64 = v132 + v122;
    if ( v121 == v123 )
      v65 = 15;
    else
      v65 = v123[0];
    if ( v64 > v65 )
    {
      p_dest = (void **)(v132 + v122);
      sub_998B30((__int64)&v121, v122, 0, v131, v132);
      v63 = v121;
      v64 = (size_t)p_dest;
    }
    else if ( v132 )
    {
      v66 = (char *)v121 + v122;
      if ( v132 == 1 )
      {
        *v66 = *(_BYTE *)v131;
        v63 = v121;
      }
      else
      {
        p_dest = (void **)(v132 + v122);
        memcpy(v66, v131, v132);
        v63 = v121;
        v64 = (size_t)p_dest;
      }
    }
    v122 = v64;
    v63[v64] = 0;
    if ( v131 != &v133 )
      operator delete(v131);
    if ( v135 != &v137 )
      operator delete(v135);
LABEL_96:
    v131 = &v133;
    sub_1232590(&v131, (_BYTE *)v35, v35 + v34);
    goto LABEL_45;
  }
LABEL_58:
  LOWORD(v138) = 260;
  v135 = &v121;
  v43 = sub_10DA6C0((__int64)v110, (__int64)&v135);
  v44 = (unsigned int)v140;
  v45 = (unsigned int)v140 + 1LL;
  if ( v45 > HIDWORD(v140) )
  {
    v109 = v43;
    sub_2237220(p_ptr, p_ptr + 2, v45, 8);
    v44 = (unsigned int)v140;
    v43 = v109;
  }
  *((_QWORD *)ptr + v44) = v43;
  p_dest = &dest;
  LODWORD(v140) = v140 + 1;
  dest = &v127.m128_u16[4];
  sub_1232590(&dest, "-input=/dev/null", (__int64)"");
  v135 = &dest;
  LOWORD(v138) = 260;
  v46 = sub_10DA6C0((__int64)v110, (__int64)&v135);
  v47 = (unsigned int)v140;
  v48 = (unsigned int)v140 + 1LL;
  if ( v48 > HIDWORD(v140) )
  {
    v109 = v46;
    sub_2237220(p_ptr, p_ptr + 2, v48, 8);
    v47 = (unsigned int)v140;
    v46 = v109;
  }
  v49 = (__int64)v110;
  *((_QWORD *)ptr + v47) = v46;
  LODWORD(v140) = v140 + 1;
  v50 = *(char ***)v114;
  v109 = *(_QWORD *)v114 + 40LL * *(unsigned int *)(v114 + 8);
  if ( v50 != (char **)v109 )
  {
    while ( 1 )
    {
      v60 = &v133;
      v61 = *v50;
      v131 = &v133;
      v133.m128i_i64[0] = 0x3D7475706E692DLL;
      v132 = 7;
      v62 = strlen(v61);
      if ( v62 > 0x7FFFFFFFFFFFFFF8LL )
        goto LABEL_198;
      v51 = (_QWORD *)(v62 + 7);
      if ( v62 + 7 <= 0xF )
      {
        if ( v62 )
        {
          if ( v62 == 1 )
          {
            v133.m128i_i8[7] = *v61;
          }
          else
          {
            v111 = (_QWORD *)(v62 + 7);
            memcpy((char *)&v133.m128i_u32[1] + 3, v61, v62);
            v51 = v111;
          }
        }
      }
      else
      {
        v111 = (_QWORD *)(v62 + 7);
        sub_998B30((__int64)&v131, 7u, 0, v61, v62);
        v60 = (__m128i *)v131;
        v51 = v111;
      }
      v132 = (size_t)v51;
      v60->m128i_i8[v62 + 7] = 0;
      v52 = (__m128i *)v131;
      v135 = &v137;
      if ( v131 == &v133 )
      {
        v54 = v132;
        v55 = (__m128i *)dest;
        v132 = 0;
        v67 = _mm_load_si128(&v133);
        v133.m128i_i8[0] = 0;
        v136 = v54;
        v137 = v67;
LABEL_104:
        if ( v54 )
        {
          if ( v54 == 1 )
            v55->m128i_i8[0] = v137.m128i_i8[0];
          else
            memcpy(v55, &v137, v54);
          v54 = v136;
          v55 = (__m128i *)dest;
        }
        v127.m128_u64[0] = v54;
        v55->m128i_i8[v54] = 0;
        v55 = (__m128i *)v135;
        goto LABEL_72;
      }
      v53 = (_QWORD *)v133.m128i_i64[0];
      v54 = v132;
      v135 = v131;
      v131 = &v133;
      v55 = (__m128i *)dest;
      v137.m128i_i64[0] = v133.m128i_i64[0];
      v136 = v132;
      v132 = 0;
      v133.m128i_i8[0] = 0;
      if ( v52 == &v137 )
        goto LABEL_104;
      if ( dest == p_dest + 2 )
        break;
      v111 = v53;
      v56 = v127.m128_i64[1];
      dest = v52;
      a7 = _mm_loadh_ps((const double *)&v111);
      v127 = a7;
      if ( !v55 )
        goto LABEL_110;
      v135 = v55;
      v137.m128i_i64[0] = v56;
LABEL_72:
      v136 = 0;
      v55->m128i_i8[0] = 0;
      if ( v135 != &v137 )
        operator delete(v135);
      if ( v131 != &v133 )
        operator delete(v131);
      v57 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, void *, unsigned __int64))(*(_QWORD *)v49 + 16LL))(
                        v49,
                        dest,
                        v127.m128_u64[0]);
      v58 = (unsigned int)v140;
      v59 = (unsigned int)v140 + 1LL;
      if ( v59 > HIDWORD(v140) )
      {
        v111 = v57;
        sub_2237220(p_ptr, p_ptr + 2, v59, 8);
        v58 = (unsigned int)v140;
        v57 = v111;
      }
      *((_QWORD *)ptr + v58) = v57;
      v50 += 5;
      LODWORD(v140) = v140 + 1;
      if ( (char **)v109 == v50 )
        goto LABEL_111;
    }
    v111 = v53;
    dest = v52;
    a7 = _mm_loadh_ps((const double *)&v111);
    v127 = a7;
LABEL_110:
    v55 = &v137;
    v135 = &v137;
    goto LABEL_72;
  }
LABEL_111:
  v128 = v130;
  sub_1232590(&v128, v117, (__int64)&v117[v118]);
  v131 = &v133;
  sub_1232590(&v131, "-output=", (__int64)"");
  v68 = v131;
  v69 = v129 + v132;
  v70 = v133.m128i_i64[0];
  if ( v131 == &v133 )
    v70 = 15;
  if ( v69 > v70 )
  {
    sub_998B30((__int64)&v131, v132, 0, v128, v129);
    v68 = v131;
  }
  else if ( v129 )
  {
    v100 = (char *)v131 + v132;
    if ( v129 == 1 )
      *v100 = *(_BYTE *)v128;
    else
      memcpy(v100, v128, v129);
    v68 = v131;
  }
  v132 = v69;
  v68[v69] = 0;
  LOWORD(v138) = 260;
  v135 = &v131;
  v71 = sub_10DA6C0((__int64)v110, (__int64)&v135);
  if ( v131 != &v133 )
    operator delete(v131);
  v72 = (unsigned int)v140;
  v73 = (unsigned int)v140 + 1LL;
  if ( v73 > HIDWORD(v140) )
  {
    sub_2237220(p_ptr, p_ptr + 2, v73, 8);
    v72 = (unsigned int)v140;
  }
  v74 = (__int64)v110;
  v75 = p_ptr;
  *((_QWORD *)ptr + v72) = v71;
  LODWORD(v140) = v140 + 1;
  sub_11BC9D0(v74, (__int64)v75);
  sub_112D530(&v131, *(_QWORD *)(a9 + 24), "clang-offload-bundler");
  LOWORD(v138) = 260;
  v135 = &v131;
  v76 = sub_10DA6C0(v74, (__int64)&v135);
  if ( v131 != &v133 )
    operator delete(v131);
  v131 = &v128;
  v134 = 260;
  v77 = sub_10DA6C0((__int64)v110, (__int64)&v131);
  v78 = v116;
  v138 = v77;
  v79 = *(const __m128i **)v114;
  v80 = *(unsigned int *)(v114 + 8);
  v137.m128i_i32[2] = *(_DWORD *)(v116 + 12);
  LODWORD(v136) = 0;
  v137.m128i_i64[0] = v116;
  v81 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v81, v78, a9, 2, 0, v76, (__int64)p_ptr, v79, v80, (__int64)&v135, 1, 0);
  v120 = v81;
  v82 = *(unsigned int *)(v115 + 160);
  v83 = v82 + 1;
  v84 = *(_DWORD *)(v115 + 160);
  if ( v82 + 1 > (unsigned __int64)*(unsigned int *)(v115 + 164) )
  {
    v103 = v115;
    v104 = *(_QWORD *)(v115 + 152);
    v105 = v115 + 152;
    if ( v104 > (unsigned __int64)&v120 || (unsigned __int64)&v120 >= v104 + 8 * v82 )
    {
      sub_11673D0(v105, v83, a7, *(double *)a8.m128i_i64);
      v86 = &v120;
      v82 = *(unsigned int *)(v115 + 160);
      v85 = *(_QWORD *)(v115 + 152);
      v84 = *(_DWORD *)(v115 + 160);
    }
    else
    {
      sub_11673D0(v105, v83, a7, *(double *)a8.m128i_i64);
      v85 = *(_QWORD *)(v103 + 152);
      v82 = *(unsigned int *)(v103 + 160);
      v86 = (void **)((char *)&v120 + v85 - v104);
      v84 = *(_DWORD *)(v103 + 160);
    }
  }
  else
  {
    v85 = *(_QWORD *)(v115 + 152);
    v86 = &v120;
  }
  v87 = *v86;
  v88 = v115;
  *v86 = nullptr;
  v89 = v120;
  *(_QWORD *)(v85 + 8 * v82) = v87;
  *(_DWORD *)(v88 + 160) = v84 + 1;
  if ( v89 )
  {
    v90 = *(void (__fastcall **)(_QWORD *))(*v89 + 8LL);
    if ( v90 == sub_10D4290 )
    {
      v91 = v89[58];
      v92 = v89[57];
      *v89 = &off_2BA8F30;
      if ( v91 != v92 )
      {
        do
        {
          if ( *(_BYTE *)(v92 + 32) && *(_QWORD *)v92 != v92 + 16 )
            operator delete(*(void **)v92);
          v92 += 40;
        }
        while ( v91 != v92 );
        v92 = v89[57];
      }
      if ( v92 )
        operator delete((void *)v92);
      v93 = (void *)v89[54];
      if ( v93 )
        operator delete(v93);
      v94 = (_QWORD *)v89[50];
      if ( v94 != v89 + 52 )
        operator delete(v94);
      v95 = (_QWORD *)v89[32];
      if ( v95 != v89 + 34 )
        free(v95);
      v96 = (void **)v89[29];
      v97 = (void **)v89[28];
      if ( v96 != v97 )
      {
        do
        {
          while ( *v97 != v97 + 2 )
          {
            operator delete(*v97);
            v97 += 4;
            if ( v97 == v96 )
            {
              v97 = (void **)v89[28];
              goto LABEL_143;
            }
          }
          v97 += 4;
        }
        while ( v96 != v97 );
        v97 = (void **)v89[28];
      }
LABEL_143:
      if ( v97 )
        operator delete(v97);
      v98 = (void *)v89[25];
      if ( v98 )
        operator delete(v98);
      v99 = (_QWORD *)v89[7];
      if ( v99 != v89 + 9 )
        free(v99);
      operator delete(v89, 0x208u);
    }
    else
    {
      v90(v89);
    }
  }
  if ( v128 != v130 )
    operator delete(v128);
  if ( dest != p_dest + 2 )
    operator delete(dest);
  if ( src != p_src + 2 )
    operator delete(src);
  if ( v121 != v123 )
    operator delete(v121);
  if ( ptr != p_ptr + 2 )
    free(ptr);
}
