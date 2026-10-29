void __fastcall sub_1249110(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        double a7,
        double a8)
{
  unsigned __int8 **v9; // rbp
  _QWORD *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64 *, _QWORD, _QWORD); // r13
  __int64 v14; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 **v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // r15
  _QWORD *v23; // rbx
  __m128 v24; // xmm0
  __int64 v25; // r13
  unsigned __int64 v26; // rax
  __m128i *v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rdi
  __int32 v30; // eax
  __int64 v31; // r13
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rbx
  const __m128i *v35; // r13
  __int64 v36; // r14
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // rcx
  unsigned __int8 *v42; // rsi
  _QWORD *v43; // rbp
  void (__fastcall *v44)(_QWORD *); // rax
  __int64 v45; // r12
  __int64 v46; // rbx
  void *v47; // rdi
  _QWORD *v48; // rdi
  _QWORD *v49; // rdi
  void **v50; // r12
  void **v51; // rbx
  void *v52; // rdi
  _QWORD *v53; // rdi
  _BYTE *v54; // rsi
  __int64 v55; // rdx
  unsigned __int8 *v56; // r13
  _BYTE *v57; // rsi
  signed __int64 v58; // r15
  void *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  void **v64; // r13
  _BYTE *v65; // rdi
  const char *v66; // rax
  void **v67; // r13
  __int64 v68; // rax
  void **v69; // rdx
  void **v70; // r15
  unsigned __int8 **v71; // r12
  __m128i *v72; // rbp
  void **v73; // rbx
  void **v74; // rdi
  void **v75; // rdi
  void **v76; // r15
  void **v77; // rdx
  void **v78; // r15
  unsigned __int8 **v79; // r12
  __m128i *v80; // rbp
  void **v81; // rbx
  void **v82; // rdi
  void **v83; // rdi
  void **v84; // r15
  void *v85; // rdi
  __int64 v86; // r13
  __int64 v87; // rax
  _QWORD *v88; // r15
  __int64 v89; // r14
  __int64 v90; // rax
  unsigned __int64 v91; // rdx
  void **v92; // rdx
  void **v93; // r15
  unsigned __int8 **v94; // r12
  __m128i *v95; // rbp
  void **v96; // rbx
  void **v97; // rdi
  void **v98; // rdi
  void **v99; // r15
  void *v100; // rdi
  size_t v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rdx
  int v104; // eax
  __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rcx
  unsigned __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // rbx
  __int64 v115; // rbp
  void *v116; // rdi
  size_t v117; // rdx
  _BYTE *v118; // rdi
  __int64 v119; // r14
  unsigned __int64 v120; // rbx
  __int64 v121; // rdi
  __int64 v123; // [rsp+0h] [rbp-2B8h]
  __int64 v124; // [rsp+18h] [rbp-2A0h] BYREF
  void *src; // [rsp+20h] [rbp-298h]
  char *v126; // [rsp+28h] [rbp-290h]
  __int64 *v127; // [rsp+30h] [rbp-288h]
  __int64 **v128; // [rsp+38h] [rbp-280h]
  void **v129; // [rsp+40h] [rbp-278h]
  __int64 v130; // [rsp+48h] [rbp-270h]
  __int64 v131; // [rsp+50h] [rbp-268h]
  __int64 v132; // [rsp+58h] [rbp-260h]
  __int64 v133; // [rsp+60h] [rbp-258h]
  __int64 v134; // [rsp+68h] [rbp-250h]
  unsigned __int8 **v135; // [rsp+70h] [rbp-248h]
  _QWORD *v136; // [rsp+78h] [rbp-240h]
  void *v137[2]; // [rsp+80h] [rbp-238h] BYREF
  char v138; // [rsp+90h] [rbp-228h] BYREF
  void *v139; // [rsp+A0h] [rbp-218h] BYREF
  size_t v140; // [rsp+A8h] [rbp-210h]
  const char *v141; // [rsp+B0h] [rbp-208h]
  __int64 v142; // [rsp+B8h] [rbp-200h]
  __int16 v143; // [rsp+C0h] [rbp-1F8h]
  void *v144; // [rsp+D0h] [rbp-1E8h] BYREF
  __int64 v145; // [rsp+D8h] [rbp-1E0h]
  _QWORD v146[16]; // [rsp+E0h] [rbp-1D8h] BYREF
  _BYTE ptr[24]; // [rsp+160h] [rbp-158h] BYREF
  __int64 v148; // [rsp+178h] [rbp-140h] BYREF
  void *v149; // [rsp+180h] [rbp-138h]
  __int16 v150; // [rsp+1A0h] [rbp-118h]

  v133 = a1;
  v9 = (unsigned __int8 **)ptr;
  v10 = &v139;
  v131 = a2;
  v130 = a4;
  v132 = a5;
  v134 = a3;
  sub_11BB1A0((__int64)a6);
  v128 = *(__int64 ***)(a1 + 24);
  v127 = v128[1];
  v144 = v146;
  v146[0] = "--arch=hexagon";
  v146[1] = "-filetype=obj";
  v145 = 0x1000000002LL;
  v141 = sub_1245260((__int64)a6);
  v11 = *a6;
  v143 = 1283;
  v139 = "-mcpu=hexagon";
  v142 = v12;
  *(_QWORD *)ptr = &v148;
  v13 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v11 + 16);
  *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  sub_22538C0(&v139, ptr);
  v14 = v13(a6, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  if ( *(__int64 **)ptr != &v148 )
    free(*(void **)ptr);
  v15 = (unsigned int)v145;
  v16 = (unsigned int)v145 + 1LL;
  if ( v16 > HIDWORD(v145) )
  {
    sub_2237220(&v144, v146, v16, 8);
    v15 = (unsigned int)v145;
  }
  v17 = v128;
  *((_QWORD *)v144 + v15) = v14;
  LODWORD(v145) = v145 + 1;
  sub_11C3BD0(v17, (__int64)a6, (__int64)&v144);
  v18 = (unsigned int)v145;
  v19 = (unsigned int)v145 + 1LL;
  if ( *(_DWORD *)(v130 + 8) == 1 )
  {
    if ( v19 > HIDWORD(v145) )
    {
      sub_2237220(&v144, v146, v19, 8);
      v18 = (unsigned int)v145;
    }
    *((_QWORD *)v144 + v18) = "-o";
    v105 = *(_QWORD *)v130;
    LODWORD(v145) = v145 + 1;
    v106 = (unsigned int)v145;
    if ( (unsigned __int64)(unsigned int)v145 + 1 > HIDWORD(v145) )
    {
      sub_2237220(&v144, v146, (unsigned int)v145 + 1LL, 8);
      v106 = (unsigned int)v145;
    }
    *((_QWORD *)v144 + v106) = v105;
    LODWORD(v145) = v145 + 1;
  }
  else
  {
    if ( v19 > HIDWORD(v145) )
    {
      sub_2237220(&v144, v146, v19, 8);
      v18 = (unsigned int)v145;
    }
    *((_QWORD *)v144 + v18) = "-fsyntax-only";
    LODWORD(v145) = v145 + 1;
  }
  *(_QWORD *)ptr = 0xA3700000967LL;
  v20 = sub_21B6DA0(a6, ptr, 2);
  v21 = a6[1];
  *(_QWORD *)&ptr[16] = 0xA3700000967LL;
  v22 = (_QWORD *)(v21 + 8LL * (unsigned int)v20);
  v23 = (_QWORD *)(v21 + 8 * HIDWORD(v20));
  v124 = (__int64)v23;
  v24 = _mm_loadh_ps((const double *)&v124);
  *(__m128 *)ptr = v24;
  if ( v22 != v23 )
  {
    while ( 1 )
    {
      v25 = *v22;
      if ( *v22 )
      {
        if ( (unsigned __int8)sub_21B9810(*v22, 2407) || (unsigned __int8)sub_21B9810(v25, 2615) )
          break;
      }
      *(_QWORD *)ptr = ++v22;
      if ( v23 == v22 )
        goto LABEL_14;
    }
    v124 = (__int64)v23;
    *(_QWORD *)&ptr[16] = 0xA3700000967LL;
    v24 = _mm_loadh_ps((const double *)&v124);
    *(__m128 *)ptr = v24;
    if ( v23 != v22 )
    {
      do
      {
        v86 = *v22;
        v87 = *(_QWORD *)(*v22 + 16LL);
        if ( !v87 )
          v87 = *v22;
        v88 = v22 + 1;
        *(_BYTE *)(v87 + 44) |= 1u;
        *(_QWORD *)ptr = v88;
        if ( v88 == v23 )
          break;
        while ( 1 )
        {
          v89 = *v88;
          if ( *v88 )
          {
            if ( (unsigned __int8)sub_21B9810(*v88, 2407) || (unsigned __int8)sub_21B9810(v89, 2615) )
              break;
          }
          *(_QWORD *)ptr = ++v88;
          if ( v23 == v88 )
            goto LABEL_134;
        }
        v22 = *(_QWORD **)ptr;
      }
      while ( v23 != *(_QWORD **)ptr );
LABEL_134:
      if ( (unsigned __int8)sub_21B9810(v86, 2407) )
      {
        v90 = (unsigned int)v145;
        v91 = (unsigned int)v145 + 1LL;
        if ( v91 > HIDWORD(v145) )
        {
          sub_2237220(&v144, v146, v91, 8);
          v90 = (unsigned int)v145;
        }
        *((_QWORD *)v144 + v90) = "-mhvx-ieee-fp";
        LODWORD(v145) = v145 + 1;
      }
    }
  }
LABEL_14:
  v26 = sub_1244F90((__int64)a6);
  if ( BYTE4(v26) )
  {
    LODWORD(v139) = v26;
    *(_QWORD *)ptr = "-gpsize=";
    LOWORD(v149) = 2307;
    *(_QWORD *)&ptr[16] = v139;
    v107 = sub_10DA6C0((__int64)a6, (__int64)ptr);
    v108 = (unsigned int)v145;
    v109 = (unsigned int)v145 + 1LL;
    if ( v109 > HIDWORD(v145) )
    {
      v124 = v107;
      sub_2237220(&v144, v146, v109, 8);
      v108 = (unsigned int)v145;
      v107 = v124;
    }
    *((_QWORD *)v144 + v108) = v107;
    LODWORD(v145) = v145 + 1;
  }
  sub_21B6F20(a6, &v144, 3403, 3487, 0);
  v27 = *(__m128i **)v132;
  v124 = *(_QWORD *)v132 + 40LL * *(unsigned int *)(v132 + 8);
  if ( v27 != (__m128i *)v124 )
  {
    v28 = (__int64)v128;
    v129 = v137;
    v126 = &v138;
    while ( !(unsigned __int8)sub_12CCCB0(v27[1].m128i_u32[2]) )
    {
      v30 = v27[1].m128i_i32[2];
      if ( v30 == 48 )
      {
        sub_FC70B0((__int64)v9, *v127, 0, 430);
        v139 = v10 + 2;
        sub_1244640(v10, *(_BYTE **)(v28 + 16), *(_QWORD *)(v28 + 16) + *(_QWORD *)(v28 + 24));
        sub_AEC220(v9, v139, v140);
        if ( v139 != v10 + 2 )
          operator delete(v139);
        if ( (_BYTE)v150 )
        {
          sub_FC7790(*(__int64 *)&ptr[16], (__int64 *)v9, SHIBYTE(v150));
          *(_QWORD *)&ptr[16] = 0;
          v150 = 0;
        }
        if ( v149 != v9 + 6 )
          operator delete(v149);
        v67 = *(void ***)ptr;
        if ( !*(_QWORD *)ptr )
          goto LABEL_21;
        v68 = *(_QWORD *)&ptr[8];
        if ( !*(_QWORD *)&ptr[8] )
          goto LABEL_21;
        if ( *(_QWORD *)ptr >= *(_QWORD *)&ptr[8] && *(_QWORD *)ptr <= (unsigned __int64)(*(_QWORD *)&ptr[8] + 14848LL) )
          goto LABEL_172;
        v77 = *(void ***)(*(_QWORD *)ptr + 528LL);
        v78 = &v77[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)ptr + 536LL)];
        if ( v77 != v78 )
        {
          src = v10;
          v79 = v9;
          v80 = v27;
          v81 = v77;
          do
          {
            while ( 1 )
            {
              v78 -= 8;
              v82 = (void **)v78[3];
              if ( v82 == v78 + 5 )
                break;
              operator delete(v82);
              if ( v81 == v78 )
                goto LABEL_111;
            }
          }
          while ( v81 != v78 );
LABEL_111:
          v27 = v80;
          v78 = (void **)v67[66];
          v9 = v79;
          v10 = src;
        }
        if ( v78 != v67 + 68 )
          free(v78);
        v83 = (void **)v67[52];
        v84 = v67 + 52;
        if ( v83 != v67 + 54 )
          free(v83);
        src = v67 + 12;
        while ( 1 )
        {
          v84 -= 4;
          v85 = *v84;
          if ( *v84 != v84 + 2 )
            break;
LABEL_120:
          if ( v84 == src )
            goto LABEL_121;
        }
        while ( 1 )
        {
          operator delete(v85);
          if ( v84 == src )
            break;
          v84 -= 4;
          v85 = *v84;
          if ( *v84 == v84 + 2 )
            goto LABEL_120;
        }
      }
      else
      {
        if ( v30 != 51 )
          goto LABEL_21;
        sub_FC70B0((__int64)v9, *v127, 0, 440);
        v139 = v10 + 2;
        sub_1244640(v10, *(_BYTE **)(v28 + 16), *(_QWORD *)(v28 + 16) + *(_QWORD *)(v28 + 24));
        sub_AEC220(v9, v139, v140);
        if ( v139 != v10 + 2 )
          operator delete(v139);
        if ( (_BYTE)v150 )
        {
          sub_FC7790(*(__int64 *)&ptr[16], (__int64 *)v9, SHIBYTE(v150));
          *(_QWORD *)&ptr[16] = 0;
          v150 = 0;
        }
        if ( v149 != v9 + 6 )
          operator delete(v149);
        v67 = *(void ***)ptr;
        if ( !*(_QWORD *)ptr )
          goto LABEL_21;
        v68 = *(_QWORD *)&ptr[8];
        if ( !*(_QWORD *)&ptr[8] )
          goto LABEL_21;
        if ( *(_QWORD *)ptr >= *(_QWORD *)&ptr[8] && *(_QWORD *)ptr <= (unsigned __int64)(*(_QWORD *)&ptr[8] + 14848LL) )
        {
LABEL_172:
          v102 = *(unsigned int *)(v68 + 14976);
          *(_DWORD *)(v68 + 14976) = v102 + 1;
          *(_QWORD *)(v68 + 8 * v102 + 14848) = v67;
          goto LABEL_21;
        }
        v92 = *(void ***)(*(_QWORD *)ptr + 528LL);
        v93 = &v92[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)ptr + 536LL)];
        if ( v92 != v93 )
        {
          src = v10;
          v94 = v9;
          v95 = v27;
          v96 = v92;
          do
          {
            while ( 1 )
            {
              v93 -= 8;
              v97 = (void **)v93[3];
              if ( v97 == v93 + 5 )
                break;
              operator delete(v97);
              if ( v96 == v93 )
                goto LABEL_156;
            }
          }
          while ( v96 != v93 );
LABEL_156:
          v27 = v95;
          v93 = (void **)v67[66];
          v9 = v94;
          v10 = src;
        }
        if ( v93 != v67 + 68 )
          free(v93);
        v98 = (void **)v67[52];
        v99 = v67 + 52;
        if ( v98 != v67 + 54 )
          free(v98);
        src = v67 + 12;
        while ( 1 )
        {
          v99 -= 4;
          v100 = *v99;
          if ( *v99 != v99 + 2 )
            break;
LABEL_165:
          if ( v99 == src )
            goto LABEL_121;
        }
        while ( 1 )
        {
          operator delete(v100);
          if ( v99 == src )
            break;
          v99 -= 4;
          v100 = *v99;
          if ( *v99 == v99 + 2 )
            goto LABEL_165;
        }
      }
LABEL_121:
      operator delete(v67, 0x3A0u);
LABEL_21:
      v31 = v27->m128i_i64[0];
      if ( v27->m128i_i32[2] == 1 )
      {
        v32 = (unsigned int)v145;
        v33 = (unsigned int)v145 + 1LL;
        if ( v33 > HIDWORD(v145) )
        {
          sub_2237220(&v144, v146, v33, 8);
          v32 = (unsigned int)v145;
        }
        v27 = (__m128i *)((char *)v27 + 40);
        *((_QWORD *)v144 + v32) = v31;
        LODWORD(v145) = v145 + 1;
        if ( (__m128i *)v124 == v27 )
          goto LABEL_25;
      }
      else
      {
        v29 = v27->m128i_i64[0];
        v27 = (__m128i *)((char *)v27 + 40);
        sub_21B5A40(v29, a6, &v144);
        if ( (__m128i *)v124 == v27 )
          goto LABEL_25;
      }
    }
    sub_FC70B0((__int64)v9, *v127, 0, 439);
    v54 = *(_BYTE **)(v28 + 16);
    v55 = (__int64)&v54[*(_QWORD *)(v28 + 24)];
    v137[0] = v126;
    sub_1244640(v129, v54, v55);
    v56 = *(unsigned __int8 **)ptr;
    v57 = v137[0];
    v58 = (signed __int64)v137[1];
    if ( !*(_QWORD *)ptr )
    {
      v103 = *(_QWORD *)&ptr[8];
      v104 = *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL);
      if ( v104 )
      {
        v110 = (unsigned int)(v104 - 1);
        *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v110;
        v56 = *(unsigned __int8 **)(v103 + 8 * v110 + 14848);
        v111 = *((unsigned int *)v56 + 134);
        *v56 = 0;
        v112 = *((_QWORD *)v56 + 66);
        *((_DWORD *)v56 + 106) = 0;
        v113 = v112 + (v111 << 6);
        if ( v112 != v113 )
        {
          src = v27;
          v114 = v113;
          v135 = v9;
          v115 = v112;
          v136 = v10;
          do
          {
            while ( 1 )
            {
              v114 -= 64;
              v116 = *(void **)(v114 + 24);
              if ( v116 == (void *)(v114 + 40) )
                break;
              operator delete(v116);
              if ( v115 == v114 )
                goto LABEL_194;
            }
          }
          while ( v115 != v114 );
LABEL_194:
          v27 = (__m128i *)src;
          v9 = v135;
          v10 = v136;
        }
        *((_DWORD *)v56 + 134) = 0;
      }
      else
      {
        src = v137[0];
        v56 = (unsigned __int8 *)operator new(0x3A0u);
        *v56 = 0;
        *((_QWORD *)v56 + 12) = v56 + 112;
        *((_QWORD *)v56 + 16) = v56 + 144;
        *((_QWORD *)v56 + 20) = v56 + 176;
        *((_QWORD *)v56 + 24) = v56 + 208;
        *((_QWORD *)v56 + 28) = v56 + 240;
        *((_QWORD *)v56 + 32) = v56 + 272;
        *((_QWORD *)v56 + 36) = v56 + 304;
        *((_QWORD *)v56 + 40) = v56 + 336;
        *((_QWORD *)v56 + 44) = v56 + 368;
        *((_QWORD *)v56 + 48) = v56 + 400;
        *((_QWORD *)v56 + 52) = v56 + 432;
        *((_QWORD *)v56 + 13) = 0;
        v56[112] = 0;
        *((_QWORD *)v56 + 17) = 0;
        v56[144] = 0;
        *((_QWORD *)v56 + 21) = 0;
        v56[176] = 0;
        *((_QWORD *)v56 + 25) = 0;
        v56[208] = 0;
        *((_QWORD *)v56 + 29) = 0;
        v56[240] = 0;
        *((_QWORD *)v56 + 33) = 0;
        v56[272] = 0;
        *((_QWORD *)v56 + 37) = 0;
        v56[304] = 0;
        *((_QWORD *)v56 + 41) = 0;
        v56[336] = 0;
        *((_QWORD *)v56 + 45) = 0;
        v56[368] = 0;
        *((_QWORD *)v56 + 49) = 0;
        v56[400] = 0;
        *((_QWORD *)v56 + 53) = 0x800000000LL;
        v57 = src;
        *((_QWORD *)v56 + 66) = v56 + 544;
        *((_QWORD *)v56 + 67) = 0x600000000LL;
      }
      *(_QWORD *)ptr = v56;
    }
    v56[*v56 + 1] = 0;
    v139 = v10 + 2;
    if ( &v57[v58] && !v57 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v58 > 0xF )
    {
      if ( v58 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      src = v57;
      v59 = (void *)operator new(v58 + 1);
      v141 = (const char *)v58;
      v57 = src;
      v139 = v59;
    }
    else
    {
      if ( v58 == 1 )
      {
        LOBYTE(v141) = *v57;
        v59 = v10 + 2;
        goto LABEL_65;
      }
      v59 = v10 + 2;
      if ( !v58 )
      {
LABEL_65:
        v140 = v58;
        *((_BYTE *)v59 + v58) = 0;
        v60 = *(_QWORD *)ptr;
        v61 = (unsigned __int8)**(_BYTE **)ptr;
        **(_BYTE **)ptr = v61 + 1;
        v62 = (unsigned __int8)v61;
        v63 = 32 * (v61 + 3);
        v64 = (void **)(v60 + v63);
        v65 = *(_BYTE **)(v60 + v63);
        if ( v139 != v10 + 2 )
        {
          if ( v65 == (_BYTE *)(v60 + v63 + 16) )
          {
            *v64 = v139;
            v64[1] = (void *)v140;
            v64[2] = (void *)v141;
          }
          else
          {
            v66 = *(const char **)(v60 + 32 * v62 + 112);
            *v64 = v139;
            v64[1] = (void *)v140;
            v64[2] = (void *)v141;
            if ( v65 )
            {
              v139 = v65;
              v141 = v66;
              goto LABEL_69;
            }
          }
          v65 = v10 + 2;
          v139 = v10 + 2;
          goto LABEL_69;
        }
        v101 = v140;
        if ( v140 )
        {
          if ( v140 == 1 )
          {
            *v65 = (_BYTE)v141;
            v117 = v140;
            v118 = *v64;
            v64[1] = (void *)v140;
            v118[v117] = 0;
            v65 = v139;
            goto LABEL_69;
          }
          memcpy(v65, v139, v140);
          v101 = v140;
          v65 = *v64;
        }
        v64[1] = (void *)v101;
        v65[v101] = 0;
        v65 = v139;
LABEL_69:
        v140 = 0;
        *v65 = 0;
        if ( v139 != v10 + 2 )
          operator delete(v139);
        if ( v137[0] != v126 )
          operator delete(v137[0]);
        if ( (_BYTE)v150 )
        {
          sub_FC7790(*(__int64 *)&ptr[16], (__int64 *)v9, SHIBYTE(v150));
          *(_QWORD *)&ptr[16] = 0;
          v150 = 0;
        }
        if ( v149 != v9 + 6 )
          operator delete(v149);
        v67 = *(void ***)ptr;
        if ( !*(_QWORD *)ptr )
          goto LABEL_21;
        v68 = *(_QWORD *)&ptr[8];
        if ( !*(_QWORD *)&ptr[8] )
          goto LABEL_21;
        if ( *(_QWORD *)ptr >= *(_QWORD *)&ptr[8] && *(_QWORD *)ptr <= (unsigned __int64)(*(_QWORD *)&ptr[8] + 14848LL) )
          goto LABEL_172;
        v69 = *(void ***)(*(_QWORD *)ptr + 528LL);
        v70 = &v69[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)ptr + 536LL)];
        if ( v69 != v70 )
        {
          src = v10;
          v71 = v9;
          v72 = v27;
          v73 = v69;
          do
          {
            while ( 1 )
            {
              v70 -= 8;
              v74 = (void **)v70[3];
              if ( v74 == v70 + 5 )
                break;
              operator delete(v74);
              if ( v73 == v70 )
                goto LABEL_84;
            }
          }
          while ( v73 != v70 );
LABEL_84:
          v27 = v72;
          v70 = (void **)v67[66];
          v9 = v71;
          v10 = src;
        }
        if ( v70 != v67 + 68 )
          free(v70);
        v75 = (void **)v67[52];
        if ( v75 != v67 + 54 )
          free(v75);
        v76 = v67 + 48;
        src = v67 + 8;
        do
        {
          while ( *v76 != v76 + 2 )
          {
            operator delete(*v76);
            v76 -= 4;
            if ( v76 == src )
              goto LABEL_121;
          }
          v76 -= 4;
        }
        while ( v76 != src );
        goto LABEL_121;
      }
    }
    memcpy(v59, v57, v58);
    v59 = v139;
    goto LABEL_65;
  }
LABEL_25:
  sub_112D530(v10, (__int64)v128, "llvm-mc");
  *(_QWORD *)ptr = v10;
  LOWORD(v149) = 260;
  v34 = sub_10DA6C0((__int64)a6, (__int64)v9);
  if ( v139 != v10 + 2 )
    operator delete(v139);
  v35 = *(const __m128i **)v132;
  v36 = *(unsigned int *)(v132 + 8);
  v123 = v130;
  v37 = operator new(0x208u);
  sub_1106AE0(v37, v134, v133, 0x100000000LL, (__int64)"@", v34, (__int64)&v144, v35, v36, v123, 1, 0);
  *(_QWORD *)ptr = v37;
  v38 = *(unsigned int *)(v131 + 160);
  v39 = v38 + 1;
  v40 = *(_DWORD *)(v131 + 160);
  if ( v38 + 1 > (unsigned __int64)*(unsigned int *)(v131 + 164) )
  {
    v119 = v131;
    v120 = *(_QWORD *)(v131 + 152);
    v121 = v131 + 152;
    if ( v120 > (unsigned __int64)v9 || (unsigned __int64)v9 >= v120 + 8 * v38 )
    {
      sub_11673D0(v121, v39, v24, a8);
      v38 = *(unsigned int *)(v131 + 160);
      v41 = *(_QWORD *)(v131 + 152);
      v40 = *(_DWORD *)(v131 + 160);
    }
    else
    {
      sub_11673D0(v121, v39, v24, a8);
      v41 = *(_QWORD *)(v119 + 152);
      v38 = *(unsigned int *)(v119 + 160);
      v9 = (unsigned __int8 **)((char *)v9 + v41 - v120);
      v40 = *(_DWORD *)(v119 + 160);
    }
  }
  else
  {
    v41 = *(_QWORD *)(v131 + 152);
  }
  v42 = *v9;
  *v9 = nullptr;
  *(_QWORD *)(v41 + 8 * v38) = v42;
  v43 = *(_QWORD **)ptr;
  *(_DWORD *)(v131 + 160) = v40 + 1;
  if ( v43 )
  {
    v44 = *(void (__fastcall **)(_QWORD *))(*v43 + 8LL);
    if ( v44 == sub_10D4290 )
    {
      v45 = v43[58];
      v46 = v43[57];
      *v43 = &off_2BA8F30;
      if ( v45 != v46 )
      {
        do
        {
          if ( *(_BYTE *)(v46 + 32) && *(_QWORD *)v46 != v46 + 16 )
            operator delete(*(void **)v46);
          v46 += 40;
        }
        while ( v45 != v46 );
        v46 = v43[57];
      }
      if ( v46 )
        operator delete((void *)v46);
      v47 = (void *)v43[54];
      if ( v47 )
        operator delete(v47);
      v48 = (_QWORD *)v43[50];
      if ( v48 != v43 + 52 )
        operator delete(v48);
      v49 = (_QWORD *)v43[32];
      if ( v49 != v43 + 34 )
        free(v49);
      v50 = (void **)v43[29];
      v51 = (void **)v43[28];
      if ( v50 != v51 )
      {
        do
        {
          while ( *v51 != v51 + 2 )
          {
            operator delete(*v51);
            v51 += 4;
            if ( v51 == v50 )
            {
              v51 = (void **)v43[28];
              goto LABEL_49;
            }
          }
          v51 += 4;
        }
        while ( v50 != v51 );
        v51 = (void **)v43[28];
      }
LABEL_49:
      if ( v51 )
        operator delete(v51);
      v52 = (void *)v43[25];
      if ( v52 )
        operator delete(v52);
      v53 = (_QWORD *)v43[7];
      if ( v53 != v43 + 9 )
        free(v53);
      operator delete(v43, 0x208u);
    }
    else
    {
      v44(v43);
    }
  }
  if ( v144 != v146 )
    free(v144);
}
