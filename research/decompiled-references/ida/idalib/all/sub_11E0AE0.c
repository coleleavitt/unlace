void __fastcall sub_11E0AE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128i a8)
{
  bool v10; // zf
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  void *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rdi
  int v34; // eax
  __int64 v35; // rax
  char *v36; // r14
  _QWORD *v37; // r12
  char *v38; // rcx
  unsigned __int64 v39; // rdx
  signed __int64 v40; // rsi
  __m128i v41; // xmm0
  char *v42; // rdx
  __m128i v43; // xmm1
  __m128i v44; // xmm2
  _QWORD *v45; // rax
  unsigned __int64 v46; // rsi
  size_t v47; // r8
  _BYTE *v48; // rcx
  _BYTE *v49; // rdi
  size_t v50; // r15
  unsigned __int64 v51; // rax
  _BYTE *v52; // rdi
  _BYTE *v53; // rax
  signed __int64 v54; // rdx
  __m128i *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  void *v59; // rax
  unsigned __int64 v60; // rdx
  __m128 si128; // xmm0
  size_t v62; // r15
  void **v63; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // rsi
  size_t v69; // r8
  void *v70; // rax
  size_t v71; // rax
  __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  __int64 v74; // rbx
  const __m128i *v75; // r14
  __int64 v76; // r15
  __int64 v77; // rcx
  __int64 v78; // rsi
  int v79; // edx
  __int64 v80; // rsi
  void **v81; // rax
  void *v82; // rdi
  _QWORD *v83; // rbx
  void (__fastcall *v84)(_QWORD *); // rax
  __int64 v85; // r14
  __int64 v86; // r13
  void *v87; // rdi
  _QWORD *v88; // rdi
  _QWORD *v89; // rdi
  void **v90; // r14
  void **v91; // r13
  void *v92; // rdi
  _QWORD *v93; // rdi
  char *v94; // r12
  size_t i; // rsi
  size_t v96; // r8
  _BYTE *v97; // rcx
  _BYTE *v98; // rdi
  size_t v99; // r15
  unsigned __int64 v100; // rax
  _BYTE *v101; // rdi
  unsigned __int64 v102; // r15
  unsigned __int64 v103; // rdx
  char *v104; // rdi
  char *v105; // rdi
  size_t v106; // rax
  unsigned __int64 v107; // rbx
  __int64 v108; // rdi
  void *v111; // [rsp+10h] [rbp-3D8h]
  void *srce; // [rsp+28h] [rbp-3C0h]
  void *srcd; // [rsp+28h] [rbp-3C0h]
  void *src; // [rsp+28h] [rbp-3C0h]
  void *srcc; // [rsp+28h] [rbp-3C0h]
  void *srcb; // [rsp+28h] [rbp-3C0h]
  void *srca; // [rsp+28h] [rbp-3C0h]
  void **v120; // [rsp+38h] [rbp-3B0h] BYREF
  size_t n; // [rsp+40h] [rbp-3A8h]
  void *v122; // [rsp+48h] [rbp-3A0h]
  void *v123[2]; // [rsp+50h] [rbp-398h] BYREF
  __int64 v124; // [rsp+60h] [rbp-388h]
  void *v125; // [rsp+70h] [rbp-378h] BYREF
  size_t v126; // [rsp+78h] [rbp-370h]
  char v127; // [rsp+90h] [rbp-358h]
  char *v128; // [rsp+A0h] [rbp-348h] BYREF
  __int16 v129; // [rsp+C0h] [rbp-328h]
  _QWORD v130[4]; // [rsp+D0h] [rbp-318h] BYREF
  __int16 v131; // [rsp+F0h] [rbp-2F8h]
  void *v132[4]; // [rsp+100h] [rbp-2E8h] BYREF
  __int16 v133; // [rsp+120h] [rbp-2C8h]
  void *v134; // [rsp+130h] [rbp-2B8h] BYREF
  size_t v135; // [rsp+138h] [rbp-2B0h]
  _QWORD v136[2]; // [rsp+140h] [rbp-2A8h] BYREF
  __int16 v137; // [rsp+150h] [rbp-298h]
  void *ptr; // [rsp+160h] [rbp-288h] BYREF
  __int64 v139; // [rsp+168h] [rbp-280h]
  _BYTE v140[128]; // [rsp+170h] [rbp-278h] BYREF
  void *v141; // [rsp+1F0h] [rbp-1F8h] BYREF
  _BYTE v142[24]; // [rsp+1F8h] [rbp-1F0h] BYREF
  __int16 v143; // [rsp+210h] [rbp-1D8h]
  void *v144; // [rsp+290h] [rbp-158h] BYREF
  __m128 v145; // [rsp+298h] [rbp-150h]
  __int64 v146; // [rsp+2A8h] [rbp-140h] BYREF
  __int16 v147; // [rsp+2B0h] [rbp-138h]

  v10 = *(_DWORD *)(a4 + 8) == 1;
  v120 = *(void ***)(a1 + 24);
  ptr = v140;
  v139 = 0x1000000000LL;
  if ( v10 )
  {
    sub_10DC5D0((__int64)&ptr, (__int64)"-o");
    sub_10DC5D0((__int64)&ptr, *(_QWORD *)a4);
    if ( (unsigned int)sub_11D8180(a6) != 2 )
      goto LABEL_3;
  }
  else if ( (unsigned int)sub_11D8180(a6) != 2 )
  {
    goto LABEL_3;
  }
  sub_10DC5D0((__int64)&ptr, (__int64)"-g");
LABEL_3:
  if ( sub_10DCD30(a6, 0xD45u) )
  {
    v11 = (unsigned int)v139;
    v12 = (unsigned int)v139 + 1LL;
    if ( v12 > HIDWORD(v139) )
    {
      sub_2237220(&ptr, v140, v12, 8);
      v11 = (unsigned int)v139;
    }
    *((_QWORD *)ptr + v11) = "-v";
    LODWORD(v139) = v139 + 1;
  }
  v13 = (void *)sub_21B7BC0(a6, 2260, &byte_22F0C30, 0);
  v15 = v14;
  if ( v14 )
  {
    v16 = (unsigned int)v139;
    v17 = (unsigned int)v139 + 1LL;
    if ( v17 > HIDWORD(v139) )
    {
      src = v13;
      sub_2237220(&ptr, v140, v17, 8);
      v16 = (unsigned int)v139;
      v13 = src;
    }
    *((_QWORD *)ptr + v16) = "-arch";
    v147 = 261;
    LODWORD(v139) = v139 + 1;
    v144 = v13;
    v145.m128_u64[0] = v15;
    v18 = sub_10DA6C0(a6, (__int64)&v144);
    v19 = (unsigned int)v139;
    v20 = (unsigned int)v139 + 1LL;
    if ( v20 > HIDWORD(v139) )
    {
      srca = (void *)v18;
      sub_2237220(&ptr, v140, v20, 8);
      v19 = (unsigned int)v139;
      v18 = (__int64)srca;
    }
    *((_QWORD *)ptr + v19) = v18;
    LODWORD(v139) = v139 + 1;
  }
  else if ( !*(_DWORD *)(*(_QWORD *)a2 + 40LL) )
  {
    sub_FC70B0((__int64)&v144, **(_QWORD **)a2, 0, 446);
    v53 = (_BYTE *)sub_22B7480(*(_QWORD *)(a1 + 24) + 16LL);
    sub_AEC220((unsigned __int8 **)&v144, v53, v54);
    sub_AE9DF0((unsigned __int8 **)&v144, *(_QWORD *)(a1 + 16), 1u);
    sub_AEA040((__int64)&v144);
    goto LABEL_43;
  }
  if ( sub_10DCD30(a6, 0xC6Bu) )
  {
    v21 = sub_21B7BC0(a6, 3179, &byte_22F0C30, 0);
    v147 = 1283;
    v144 = "--pxtas-path=";
    v146 = v22;
    v145.m128_u64[1] = v21;
    v23 = sub_10DA6C0(a6, (__int64)&v144);
    v24 = (unsigned int)v139;
    v25 = (unsigned int)v139 + 1LL;
    if ( v25 > HIDWORD(v139) )
    {
      srcb = (void *)v23;
      sub_2237220(&ptr, v140, v25, 8);
      v24 = (unsigned int)v139;
      v23 = (__int64)srcb;
    }
    *((_QWORD *)ptr + v24) = v23;
    LODWORD(v139) = v139 + 1;
  }
  if ( sub_10DCD30(a6, 0xF3u) )
  {
    v26 = sub_21B7BC0(a6, 243, &byte_22F0C30, 0);
    v147 = 1283;
    v144 = "--cuda-path=";
    v146 = v27;
    v145.m128_u64[1] = v26;
    v28 = sub_10DA6C0(a6, (__int64)&v144);
    v29 = (unsigned int)v139;
    v30 = (unsigned int)v139 + 1LL;
    if ( v30 > HIDWORD(v139) )
    {
      srcc = (void *)v28;
      sub_2237220(&ptr, v140, v30, 8);
      v29 = (unsigned int)v139;
      v28 = (__int64)srcc;
    }
    *((_QWORD *)ptr + v29) = v28;
    LODWORD(v139) = v139 + 1;
  }
  sub_11C1900(a6, (__int64)&ptr, "-L", "LIBRARY_PATH");
  sub_21B7F70(a6, &ptr, 2204);
  sub_112D940(*(_QWORD *)(a1 + 24), a6, (__int64)&ptr, v31, v32);
  sub_11C3660(*(_QWORD *)(a1 + 24), a5, a6, (__int64)&ptr, a3);
  v33 = *(__int64 **)a2;
  v34 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
  if ( v34 )
  {
    sub_11C8A90(*(_DWORD **)(a1 + 24), a6, (__int64)&ptr, (char **)a4, a5, v34 == 2, a7);
    v33 = *(__int64 **)a2;
  }
  v35 = *(_QWORD *)(a1 + 24);
  *(_OWORD *)v123 = 0;
  v124 = 0;
  sub_11E0750(v33, v35 + 16, a6, (__int64)v123);
  v36 = (char *)v123[1];
  v37 = v123[0];
  v134 = v136;
  v135 = 0;
  LOBYTE(v136[0]) = 0;
  if ( v123[1] != v123[0] )
  {
    v38 = (char *)v123[0];
    v39 = (char *)v123[1] - 16 - (char *)v123[0];
    v40 = (((char *)v123[1] - (char *)v123[0]) >> 4) - 1;
    if ( v39 <= 0x40 )
    {
      v45 = v123[0];
    }
    else
    {
      v41 = 0;
      v42 = (char *)v123[0] + (v39 & 0xFFFFFFFFFFFFFFE0LL);
      do
      {
        v43 = _mm_loadu_si128((const __m128i *)(v38 + 8));
        v44 = _mm_loadu_si128((const __m128i *)(v38 + 24));
        v38 += 32;
        v41 = _mm_add_epi64(v41, _mm_unpacklo_epi64(v43, v44));
      }
      while ( v38 != v42 );
      a8 = _mm_srli_si128(v41, 8);
      v45 = (char *)v123[0]
          + 16 * (((unsigned __int64)((char *)v123[1] - 16 - (char *)v123[0]) >> 4) & 0xFFFFFFFFFFFFFFFELL);
      v40 += _mm_add_epi64(v41, a8).m128i_u64[0];
    }
    v46 = v45[1] + v40;
    if ( v123[1] != v45 + 2 )
    {
      v46 += v45[3];
      if ( v123[1] != v45 + 4 )
      {
        v46 += v45[5];
        if ( v123[1] != v45 + 6 )
        {
          v46 += v45[7];
          if ( v123[1] != v45 + 8 )
            v46 += v45[9];
        }
      }
    }
    sub_995C30((__int64)&v134, v46);
    v47 = v37[1];
    v48 = (_BYTE *)*v37;
    if ( v47 > 0x7FFFFFFFFFFFFFFFLL - v135 )
      goto LABEL_153;
    v49 = v134;
    v50 = v47 + v135;
    if ( v134 == v136 )
      v51 = 15;
    else
      v51 = v136[0];
    if ( v50 > v51 )
    {
      sub_998B30((__int64)&v134, v135, 0, v48, v47);
      v49 = v134;
    }
    else if ( v47 )
    {
      v52 = (char *)v134 + v135;
      if ( v47 == 1 )
        *v52 = *v48;
      else
        memcpy(v52, (const void *)*v37, v37[1]);
      v49 = v134;
    }
    v94 = (char *)(v37 + 2);
    v135 = v50;
    v49[v50] = 0;
    if ( v36 != v94 )
    {
      for ( i = v135; v135 != 0x7FFFFFFFFFFFFFFFLL; i = v135 )
      {
        v102 = i + 1;
        v103 = v134 == v136 ? 15LL : v136[0];
        if ( v102 <= v103 )
          *((_BYTE *)v134 + i) = 44;
        else
          sub_998B30((__int64)&v134, i, 0, ",", 1u);
        v135 = i + 1;
        *((_BYTE *)v134 + v102) = 0;
        v96 = *((_QWORD *)v94 + 1);
        v97 = *(_BYTE **)v94;
        if ( v96 > 0x7FFFFFFFFFFFFFFFLL - v135 )
          break;
        v98 = v134;
        v99 = v96 + v135;
        if ( v134 == v136 )
          v100 = 15;
        else
          v100 = v136[0];
        if ( v99 > v100 )
        {
          sub_998B30((__int64)&v134, v135, 0, v97, v96);
          v98 = v134;
        }
        else if ( v96 )
        {
          v101 = (char *)v134 + v135;
          if ( v96 == 1 )
            *v101 = *v97;
          else
            memcpy(v101, *(const void **)v94, *((_QWORD *)v94 + 1));
          v98 = v134;
        }
        v94 += 16;
        v135 = v99;
        v98[v99] = 0;
        if ( v36 == v94 )
          goto LABEL_46;
      }
LABEL_153:
      std::__throw_length_error("basic_string::append");
    }
  }
LABEL_46:
  v55 = (__m128i *)sub_99BDC0(&v134, 0, 0, "--plugin-opt=-mattr=", 0x14u);
  v141 = &v142[8];
  if ( (__m128i *)v55->m128i_i64[0] == &v55[1] )
  {
    *(__m128i *)&v142[8] = _mm_loadu_si128(v55 + 1);
  }
  else
  {
    v141 = (void *)v55->m128i_i64[0];
    *(_QWORD *)&v142[8] = v55[1].m128i_i64[0];
  }
  *(_QWORD *)v142 = v55->m128i_i64[1];
  v55->m128i_i64[0] = (__int64)v55[1].m128i_i64;
  v55->m128i_i64[1] = 0;
  v55[1].m128i_i8[0] = 0;
  v147 = 260;
  v144 = &v141;
  v56 = sub_10DA6C0(a6, (__int64)&v144);
  v57 = (unsigned int)v139;
  v58 = (unsigned int)v139 + 1LL;
  if ( v58 > HIDWORD(v139) )
  {
    srcd = (void *)v56;
    sub_2237220(&ptr, v140, v58, 8);
    v57 = (unsigned int)v139;
    v56 = (__int64)srcd;
  }
  *((_QWORD *)ptr + v57) = v56;
  LODWORD(v139) = v139 + 1;
  if ( v141 != &v142[8] )
    operator delete(v141);
  if ( v134 != v136 )
    operator delete(v134);
  v59 = (void *)sub_228A4B0(*((_QWORD *)v120[1] + 13), *((_QWORD *)v120[1] + 14), 0);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v62 = v60;
  v144 = &v146;
  v145 = si128;
  if ( v60 > 0x100 )
  {
    srce = v59;
    sub_2236E10(&v144, &v146, v60, 1);
    v59 = srce;
    v104 = (char *)v144 + v145.m128_u64[0];
  }
  else
  {
    if ( !v60 )
      goto LABEL_56;
    v104 = (char *)&v146;
  }
  memcpy(v104, v59, v62);
  v60 = v62 + v145.m128_u64[0];
LABEL_56:
  v130[0] = "lib";
  v131 = 259;
  v145.m128_u64[0] = v60;
  v143 = 257;
  v137 = 257;
  v133 = 257;
  sub_228A3B0(&v144, v130, v132, &v134, &v141);
  v141 = (void *)"-L";
  *(_QWORD *)&v142[8] = v144;
  *(_QWORD *)&v142[16] = v145.m128_u64[0];
  v143 = 1283;
  v63 = (void **)sub_10DA6C0(a6, (__int64)&v141);
  v64 = (unsigned int)v139;
  v65 = (unsigned int)v139 + 1LL;
  if ( v65 > HIDWORD(v139) )
  {
    v120 = v63;
    sub_2237220(&ptr, v140, v65, 8);
    v64 = (unsigned int)v139;
    v63 = v120;
  }
  *((_QWORD *)ptr + v64) = v63;
  LODWORD(v139) = v139 + 1;
  if ( sub_10DCD30(a6, 0xCECu) )
  {
    v66 = (unsigned int)v139;
    v67 = (unsigned int)v139 + 2LL;
    if ( v67 > HIDWORD(v139) )
    {
      sub_2237220(&ptr, v140, v67, 8);
      v66 = (unsigned int)v139;
    }
    v120 = (void **)"-lm";
    si128 = _mm_loadh_ps((const double *)&v120);
    *(__m128 *)((char *)ptr + 8 * v66) = si128;
    LODWORD(v139) = v139 + 2;
  }
  if ( !sub_10DCD30(a6, 0xCD8u) )
    goto LABEL_74;
  v68 = *(_QWORD *)(a1 + 24);
  v120 = &v125;
  sub_1131310((__int64)&v125, v68);
  if ( !v127 )
  {
    v125 = v120 + 2;
    v106 = j__strlen("/lib");
    sub_11D7980(v120, "/lib", (__int64)&aLib_1[v106 + 3]);
    v127 = 1;
  }
  v69 = v126;
  v70 = v125;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v141 = &v142[16];
  *(__m128 *)v142 = si128;
  if ( v126 > 0x80 )
  {
    v122 = v125;
    n = v126;
    sub_2236E10(&v141, &v142[16], v126, 1);
    v69 = n;
    v70 = v122;
    v105 = (char *)v141 + *(_QWORD *)v142;
LABEL_142:
    n = v69;
    memcpy(v105, v70, v69);
    v69 = *(_QWORD *)v142 + n;
    goto LABEL_67;
  }
  if ( v126 )
  {
    v105 = &v142[16];
    goto LABEL_142;
  }
LABEL_67:
  v133 = 257;
  *(_QWORD *)v142 = v69;
  v137 = 257;
  v131 = 257;
  v129 = 259;
  v128 = "crt1.o";
  sub_228A3B0(&v141, &v128, v130, v132, &v134);
  v134 = v141;
  v137 = 261;
  v135 = *(_QWORD *)v142;
  v71 = sub_10DA6C0(a6, (__int64)&v134);
  v72 = (unsigned int)v139;
  v73 = (unsigned int)v139 + 1LL;
  if ( v73 > HIDWORD(v139) )
  {
    n = v71;
    sub_2237220(&ptr, v140, v73, 8);
    v72 = (unsigned int)v139;
    v71 = n;
  }
  *((_QWORD *)ptr + v72) = v71;
  LODWORD(v139) = v139 + 1;
  if ( v141 != &v142[16] )
    free(v141);
  if ( v127 && v125 != v120 + 2 )
    operator delete(v125);
LABEL_74:
  sub_112D530(&v134, *(_QWORD *)(a1 + 24), "clang-nvlink-wrapper");
  v143 = 260;
  v141 = &v134;
  v74 = sub_10DA6C0(a6, (__int64)&v141);
  v75 = *(const __m128i **)a5;
  v76 = *(unsigned int *)(a5 + 8);
  v111 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v111, a3, a1, 0, (__int64)"--options-file", v74, (__int64)&ptr, v75, v76, a4, 1, 0);
  v77 = *(unsigned int *)(a2 + 160);
  v132[0] = v111;
  v78 = v77 + 1;
  v79 = v77;
  if ( v77 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v107 = *(_QWORD *)(a2 + 152);
    v108 = a2 + 152;
    if ( v107 > (unsigned __int64)v132 )
    {
      sub_11673D0(v108, v78, si128, *(double *)a8.m128i_i64);
      v77 = *(unsigned int *)(a2 + 160);
      v80 = *(_QWORD *)(a2 + 152);
      v81 = v132;
      v79 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      if ( (unsigned __int64)v132 < v107 + 8 * v77 )
      {
        sub_11673D0(v108, v78, si128, *(double *)a8.m128i_i64);
        v80 = *(_QWORD *)(a2 + 152);
        v77 = *(unsigned int *)(a2 + 160);
        v81 = (void **)((char *)v132 + v80 - v107);
      }
      else
      {
        sub_11673D0(v108, v78, si128, *(double *)a8.m128i_i64);
        v77 = *(unsigned int *)(a2 + 160);
        v80 = *(_QWORD *)(a2 + 152);
        v81 = v132;
      }
      v79 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v80 = *(_QWORD *)(a2 + 152);
    v81 = v132;
  }
  v82 = *v81;
  *v81 = nullptr;
  *(_QWORD *)(v80 + 8 * v77) = v82;
  v83 = v132[0];
  *(_DWORD *)(a2 + 160) = v79 + 1;
  if ( v83 )
  {
    v84 = *(void (__fastcall **)(_QWORD *))(*v83 + 8LL);
    if ( v84 == sub_10D4290 )
    {
      v85 = v83[58];
      v86 = v83[57];
      *v83 = &off_2BA8F30;
      if ( v85 != v86 )
      {
        do
        {
          if ( *(_BYTE *)(v86 + 32) && *(_QWORD *)v86 != v86 + 16 )
            operator delete(*(void **)v86);
          v86 += 40;
        }
        while ( v85 != v86 );
        v86 = v83[57];
      }
      if ( v86 )
        operator delete((void *)v86);
      v87 = (void *)v83[54];
      if ( v87 )
        operator delete(v87);
      v88 = (_QWORD *)v83[50];
      if ( v88 != v83 + 52 )
        operator delete(v88);
      v89 = (_QWORD *)v83[32];
      if ( v89 != v83 + 34 )
        free(v89);
      v90 = (void **)v83[29];
      v91 = (void **)v83[28];
      if ( v90 != v91 )
      {
        do
        {
          while ( *v91 != v91 + 2 )
          {
            operator delete(*v91);
            v91 += 4;
            if ( v91 == v90 )
            {
              v91 = (void **)v83[28];
              goto LABEL_96;
            }
          }
          v91 += 4;
        }
        while ( v90 != v91 );
        v91 = (void **)v83[28];
      }
LABEL_96:
      if ( v91 )
        operator delete(v91);
      v92 = (void *)v83[25];
      if ( v92 )
        operator delete(v92);
      v93 = (_QWORD *)v83[7];
      if ( v93 != v83 + 9 )
        free(v93);
      operator delete(v83, 0x208u);
    }
    else
    {
      v84(v83);
    }
  }
  if ( v134 != v136 )
    operator delete(v134);
  if ( v144 != &v146 )
    free(v144);
  if ( v123[0] )
    operator delete(v123[0]);
LABEL_43:
  if ( ptr != v140 )
    free(ptr);
}
