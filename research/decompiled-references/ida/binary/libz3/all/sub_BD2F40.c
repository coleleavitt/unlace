_DWORD *__fastcall sub_BD2F40(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // ecx
  int *v8; // rbx
  int *v9; // r13
  int *v10; // r14
  __int64 v11; // r12
  _QWORD *v12; // rbx
  int v13; // r15d
  __int64 v14; // rdi
  _DWORD *v15; // rax
  int v16; // eax
  _DWORD *v17; // rax
  __int64 v18; // rdi
  int v19; // esi
  int v20; // ecx
  _DWORD *v21; // rax
  _DWORD *v22; // rdi
  __int64 v23; // rdi
  _DWORD *v24; // r15
  void *v25; // r12
  __int64 v27; // rax
  __int64 v28; // r12
  _DWORD *v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // r15
  __int64 v34; // rdi
  __int64 v35; // rax
  _DWORD *v36; // r14
  _QWORD *v37; // r15
  __int64 v38; // rdi
  __int64 v39; // rdi
  int v40; // eax
  int v41; // r8d
  int v42; // r9d
  _QWORD *v43; // r15
  void *v44; // rax
  _QWORD *v45; // r14
  __m128i si128; // xmm1
  _BYTE *v47; // r8
  signed __int64 v48; // r8
  size_t v49; // r12
  _QWORD *v50; // rax
  _DWORD *v51; // rdi
  unsigned int v52; // r13d
  __int64 v53; // r12
  unsigned int *v54; // rax
  __int64 v55; // rax
  unsigned int v56; // r14d
  size_t v57; // rsi
  unsigned int *v58; // rax
  __m128i v59; // xmm0
  __int64 v60; // rax
  std::ios_base *v61; // rdi
  _QWORD *v62; // rax
  __int64 v63; // rax
  int *v64; // r12
  int *v65; // r14
  unsigned int v66; // edx
  __int128 *v67; // r15
  int v68; // eax
  __int64 v69; // rax
  __int128 *v70; // rdi
  int v71; // ecx
  unsigned __int64 v72; // rax
  __int64 v73; // rsi
  unsigned int v74; // eax
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rax
  _DWORD *v78; // r15
  __int64 v79; // r15
  int v80; // r10d
  char *v81; // rax
  __int128 *v82; // rsi
  char *v83; // r9
  int v84; // ecx
  void *v85; // rsi
  _QWORD *v86; // rax
  unsigned __int64 v87; // rdi
  char **exception; // r12
  __int64 v89; // rdx
  int v90; // [rsp+0h] [rbp-310h]
  size_t v91; // [rsp+0h] [rbp-310h]
  int v92; // [rsp+8h] [rbp-308h]
  _QWORD *v93; // [rsp+8h] [rbp-308h]
  int v94; // [rsp+10h] [rbp-300h]
  char *v95; // [rsp+18h] [rbp-2F8h] BYREF
  std::locale *v96[2]; // [rsp+20h] [rbp-2F0h] BYREF
  std::ios_base *v97; // [rsp+30h] [rbp-2E0h]
  void *v98; // [rsp+38h] [rbp-2D8h]
  __m128i v99; // [rsp+40h] [rbp-2D0h] BYREF
  unsigned int v100; // [rsp+50h] [rbp-2C0h]
  unsigned int v101; // [rsp+54h] [rbp-2BCh]
  __int64 v102; // [rsp+58h] [rbp-2B8h]
  int *v103; // [rsp+60h] [rbp-2B0h]
  void *v104; // [rsp+68h] [rbp-2A8h]
  _QWORD *v105; // [rsp+70h] [rbp-2A0h]
  int *v106; // [rsp+78h] [rbp-298h]
  char v107; // [rsp+8Fh] [rbp-281h] BYREF
  unsigned int v108; // [rsp+90h] [rbp-280h] BYREF
  int v109; // [rsp+94h] [rbp-27Ch] BYREF
  _DWORD *v110; // [rsp+98h] [rbp-278h] BYREF
  __int64 v111; // [rsp+A0h] [rbp-270h] BYREF
  _QWORD *v112; // [rsp+A8h] [rbp-268h] BYREF
  _DWORD *v113; // [rsp+B0h] [rbp-260h] BYREF
  __int64 v114; // [rsp+B8h] [rbp-258h]
  _QWORD v115[2]; // [rsp+C0h] [rbp-250h] BYREF
  _QWORD v116[2]; // [rsp+D0h] [rbp-240h] BYREF
  _QWORD v117[2]; // [rsp+E0h] [rbp-230h] BYREF
  void *v118; // [rsp+F0h] [rbp-220h] BYREF
  size_t v119; // [rsp+F8h] [rbp-218h]
  _QWORD dest[2]; // [rsp+100h] [rbp-210h] BYREF
  void *v121; // [rsp+110h] [rbp-200h] BYREF
  __int64 v122; // [rsp+118h] [rbp-1F8h]
  _QWORD v123[8]; // [rsp+120h] [rbp-1F0h] BYREF
  void *ptr[2]; // [rsp+160h] [rbp-1B0h] BYREF
  __int128 v125; // [rsp+170h] [rbp-1A0h] BYREF
  void *src[2]; // [rsp+180h] [rbp-190h]
  __int128 v127; // [rsp+190h] [rbp-180h]
  char v128[8]; // [rsp+1A0h] [rbp-170h] BYREF
  int v129; // [rsp+1A8h] [rbp-168h]
  void *v130; // [rsp+1B0h] [rbp-160h]
  size_t n; // [rsp+1B8h] [rbp-158h]
  _QWORD v132[2]; // [rsp+1C0h] [rbp-150h] BYREF
  _QWORD v133[28]; // [rsp+1D0h] [rbp-140h] BYREF
  __int16 v134; // [rsp+2B0h] [rbp-60h]
  __int128 v135; // [rsp+2B8h] [rbp-58h]
  __int128 v136; // [rsp+2C8h] [rbp-48h]

  v102 = a3;
  v3 = a1[1];
  v4 = a1[3];
  v105 = a1;
  v5 = *(_QWORD *)(v3 + 24);
  v116[0] = 0;
  v6 = *(_QWORD *)(v4 + 24);
  v116[1] = 0;
  v111 = v5;
  v7 = *(_DWORD *)(v3 + 1720);
  v117[0] = 1;
  v117[1] = 0;
  if ( !v6 )
  {
    v8 = (int *)a1[6];
LABEL_4:
    v113 = nullptr;
    v114 = v5;
    if ( !v8 )
      goto LABEL_50;
    v9 = &v8[*(v8 - 1)];
    if ( v9 == v8 )
      goto LABEL_50;
    v10 = v8;
    v11 = 0;
    v12 = nullptr;
    v103 = (int *)v116;
    LODWORD(v106) = 0;
    v99.m128i_i64[0] = (__int64)&v121;
    do
    {
      while ( 1 )
      {
        v16 = *v10;
        if ( *v10 == 1 )
        {
          sub_1872CE0("");
          v104 = v103;
          sub_1873130(114, 2068);
        }
        if ( v16 != 2 )
          break;
        v17 = *(_DWORD **)(v105[5] + 8 * v11);
        v121 = v17;
        if ( v17 )
          ++v17[2];
        v112 = v12;
        sub_BB70A0(&v112, v99.m128i_i64[0]);
        ++v10;
        v12 = v112;
        v11 = (unsigned int)(v11 + 1);
        if ( v9 == v10 )
          goto LABEL_17;
      }
      if ( !v16 )
      {
        v13 = (_DWORD)v106 + 1;
        v14 = *(_QWORD *)(v105[1] + 1736LL);
        v115[0] = *(_QWORD *)(*(_QWORD *)(v102 + 8) + 8LL * (unsigned int)v106);
        v104 = v103;
        v15 = (_DWORD *)sub_15E1AF0(v14);
        v118 = v15;
        if ( v15 )
          ++v15[2];
        v112 = v12;
        sub_BB70A0(&v112, &v118);
        LODWORD(v106) = v13;
        v12 = v112;
      }
      ++v10;
    }
    while ( v9 != v10 );
LABEL_17:
    v3 = v105[1];
    v4 = v105[3];
    v5 = *(_QWORD *)(v3 + 24);
    v18 = *(_QWORD *)(v3 + 1736);
    v19 = *(_DWORD *)(v3 + 1744);
    if ( v12 )
    {
      v20 = *((_DWORD *)v12 - 1);
      if ( v20 )
      {
        if ( v20 == 1 )
        {
          v21 = (_DWORD *)*v12;
        }
        else
        {
          v104 = v116;
          v21 = (_DWORD *)sub_15E1AF0(v18);
        }
        goto LABEL_21;
      }
    }
    else
    {
LABEL_50:
      v18 = *(_QWORD *)(v3 + 1736);
      v19 = *(_DWORD *)(v3 + 1744);
      v12 = nullptr;
    }
    v40 = sub_15D2D60(v18, v19, 1, 0, 0, 0, 0, v4);
    v104 = v116;
    v21 = (_DWORD *)sub_15DC610(
                      v18,
                      v40,
                      0,
                      0,
                      v41,
                      v42,
                      v90,
                      v92,
                      v94,
                      (int)v95,
                      (int)v96[0],
                      (char)v96[1],
                      (int)v97,
                      (int)v98,
                      v99.m128i_i32[0],
                      (void *)v99.m128i_i64[1]);
LABEL_21:
    if ( v21 )
      ++v21[2];
    v22 = v113;
    v113 = v21;
    sub_BB0560((__int64)v22, v5);
    v106 = (int *)v105[1];
    sub_14B9B80(v106 + 302, &v113);
    v99.m128i_i64[0] = (__int64)ptr;
    v104 = v116;
    goto LABEL_24;
  }
  if ( v7 != *(_DWORD *)v6 || *(_DWORD *)(v6 + 4) )
  {
    v8 = (int *)v105[6];
    goto LABEL_4;
  }
  v27 = *(_QWORD *)(v6 + 8);
  if ( *(_BYTE *)(v27 + 8) != 1 )
    sub_DBF6E(0);
  v8 = (int *)v105[6];
  if ( *(_QWORD *)v27 != *(_QWORD *)(*(_QWORD *)(v3 + 1704) + 64LL) )
    goto LABEL_4;
  v113 = nullptr;
  v114 = v5;
  if ( !v8 || (v103 = &v8[*(v8 - 1)], v103 == v8) )
  {
    v103 = (int *)(v3 + 1728);
    v104 = v116;
    goto LABEL_107;
  }
  v106 = v8;
  v28 = 0;
  v29 = nullptr;
  v101 = 0;
  v104 = v116;
  do
  {
    v32 = *v106;
    if ( *v106 != 1 )
    {
      if ( v32 == 2 )
      {
        v33 = v101;
        v118 = nullptr;
        v34 = v105[1];
        v35 = *(_QWORD *)(v34 + 24);
        v121 = nullptr;
        v122 = v35;
        if ( !(unsigned __int8)sub_BC9C90(v34, *(_QWORD *)(v105[5] + 8LL * v101), (__int64 *)&v118, (__int64 *)&v121) )
        {
          v36 = *(_DWORD **)(v105[5] + 8 * v33);
          if ( v36 )
            ++v36[2];
          sub_BB0560((__int64)v121, v122);
          v121 = v36;
        }
        v37 = v105;
        v38 = v105[1] + 1208LL;
        v99.m128i_i64[0] = v105[1];
        sub_14B9B80(v38, &v121);
        ptr[0] = &v125;
        ptr[1] = (void *)0x1000000000LL;
        v39 = v37[1] + 1728LL;
        v99.m128i_i64[0] = v37[1];
        if ( (unsigned __int8)sub_163BAA0(v39, v121, ptr) && LODWORD(ptr[1]) )
        {
          v79 = 0;
          v99.m128i_i64[0] = (__int64)&v109;
          do
          {
            v110 = v29;
            v109 = *((_DWORD *)ptr[0] + v79);
            sub_BB7DA0(&v110, (unsigned int *)v99.m128i_i64[0]);
            v29 = v110;
            ++v79;
          }
          while ( (unsigned int)v79 < LODWORD(ptr[1]) );
        }
        ++v101;
        if ( ptr[0] != &v125 && ptr[0] )
          sub_186B220(ptr[0]);
        sub_BB0560((__int64)v121, v122);
      }
      else if ( !v32 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(v102 + 8) + 8 * v28);
        v31 = v105[1] + 1696LL;
        v99.m128i_i64[0] = v105[1];
        if ( !(unsigned __int8)sub_163B280(v31, v30, &v108) )
        {
          sub_1872CE0("");
          sub_1873130(114, 2019);
        }
        v110 = v29;
        sub_BB7E40(&v110, &v108);
        v29 = v110;
        v28 = (unsigned int)(v28 + 1);
      }
      goto LABEL_38;
    }
    v99.m128i_i64[0] = (__int64)ptr;
    v97 = (std::ios_base *)v133;
    v95 = (char *)&`vtable for'std::ostringstream + 24;
    *(__m128i *)v96 = _mm_unpacklo_epi64(
                        (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                        (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    std::ios_base::ios_base((std::ios_base *)v133);
    v134 = 0;
    v135 = 0;
    v133[0] = (char *)&`vtable for'std::ios + 16;
    v136 = 0;
    v43 = (_QWORD *)`VTT for'std::ostringstream[1];
    v44 = (void *)`VTT for'std::ostringstream[2];
    v133[27] = 0;
    v45 = (void **)((char *)ptr + *(v43 - 3));
    ptr[0] = v43;
    *v45 = v44;
    v98 = v44;
    std::ios::init();
    si128 = _mm_load_si128((const __m128i *)v96);
    v125 = 0;
    *(__m128i *)ptr = si128;
    v133[0] = (char *)&`vtable for'std::ostringstream + 64;
    v96[0] = (std::locale *)v128;
    *(_OWORD *)src = 0;
    v127 = 0;
    std::locale::locale((std::locale *)v128);
    v129 = 16;
    LOBYTE(v132[0]) = 0;
    ptr[1] = (char *)&`vtable for'std::stringbuf + 16;
    v130 = v132;
    n = 0;
    std::ios::init();
    sub_16669D0(v115, *(_QWORD *)(v105[1] + 24LL));
    v100 = v28 + 1;
    if ( !(unsigned __int8)sub_1666AE0(v115, *(_QWORD *)(*(_QWORD *)(v102 + 8) + 8 * v28), v104, &v107) )
    {
      sub_1872CE0("");
      sub_1873130(114, 2041);
    }
    if ( SLODWORD(v116[0]) < 0 )
    {
      std::operator<<<std::char_traits<char>>();
    }
    else
    {
      sub_1850940(&v121, qword_1C7F2C0, v104);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v121 != v123 )
        operator delete(v121, v123[0] + 1LL);
    }
    v47 = (_BYTE *)v127;
    v119 = 0;
    v118 = dest;
    LOBYTE(dest[0]) = 0;
    if ( (_QWORD)v127 )
    {
      if ( src[0] >= (void *)v127 )
        v47 = src[0];
      if ( !src[0] )
        v47 = (_BYTE *)v127;
      v48 = v47 - (char *)src[1];
      v49 = v48;
      if ( v48 < 0 )
        std::__throw_length_error("basic_string::_M_replace");
      if ( (unsigned __int64)v48 > 0xF )
      {
        sub_23A830(&v118, 0, 0, (char *)src[1], v48);
      }
      else
      {
        if ( src[1] != dest )
        {
          if ( v48 )
          {
            if ( v48 == 1 )
              LOBYTE(dest[0]) = *(_BYTE *)src[1];
            else
              memcpy(dest, src[1], v48);
          }
          goto LABEL_67;
        }
        std::string::_M_replace_cold();
      }
LABEL_118:
      v50 = v118;
      goto LABEL_68;
    }
    v49 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v87 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
        v91 = n;
      }
      else
      {
        v91 = 30;
        v87 = 31;
      }
      v93 = (_QWORD *)operator new(v87);
      sub_233E40((__int64)&v118);
      v86 = v93;
      v85 = v130;
      v118 = v93;
      dest[0] = v91;
LABEL_136:
      memcpy(v86, v85, v49);
      goto LABEL_118;
    }
    if ( n )
    {
      v85 = v130;
      v86 = dest;
      if ( n != 1 )
        goto LABEL_136;
      LOBYTE(dest[0]) = *(_BYTE *)v130;
    }
LABEL_67:
    v50 = dest;
LABEL_68:
    v119 = v49;
    *((_BYTE *)v50 + v49) = 0;
    sub_18007F0(&v121, v118);
    if ( v118 != dest )
      operator delete(v118, dest[0] + 1LL);
    v51 = v121;
    if ( (_DWORD)v122 )
    {
      v52 = *(_DWORD *)v121;
      if ( v29 )
      {
        v53 = 0;
        goto LABEL_76;
      }
      v62 = (_QWORD *)sub_186B270(0x10u);
      v29 = v62 + 1;
      v51 = v121;
      v53 = 0;
      *v62 = 2;
      v54 = (unsigned int *)(v62 + 1);
      while ( 1 )
      {
        *v54 = v52;
        ++v53;
        ++*(v29 - 1);
        if ( (unsigned int)v53 >= (unsigned int)v122 )
          break;
        v52 = v51[v53];
LABEL_76:
        v55 = (unsigned int)*(v29 - 1);
        if ( (_DWORD)v55 == *(v29 - 2) )
        {
          v56 = (unsigned int)(3 * v55 + 1) >> 1;
          v57 = 4 * v56 + 8;
          if ( 4 * (int)v55 + 8 >= (unsigned int)v57 || (unsigned int)v55 >= v56 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_154526((__int64 *)&v118, "Overflow encountered when expanding vector", v89);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v118);
            sub_233E40((__int64)&v118);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v58 = (unsigned int *)sub_186B300(v29 - 2, v57);
          v29 = v58 + 2;
          *v58 = v56;
          v51 = v121;
          v54 = &v58[v58[1] + 2];
        }
        else
        {
          v54 = &v29[v55];
        }
      }
    }
    v59 = _mm_unpacklo_epi64(
            _mm_loadl_epi64((const __m128i *)&v95),
            (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
    if ( v51 != (_DWORD *)v123 && v51 )
    {
      v99 = v59;
      sub_186B220(v51);
      v59 = _mm_load_si128(&v99);
    }
    *(__m128i *)ptr = v59;
    v133[0] = (char *)&`vtable for'std::ostringstream + 64;
    if ( v130 != v132 )
      operator delete(v130, v132[0] + 1LL);
    ptr[1] = (char *)&`vtable for'std::streambuf + 16;
    std::locale::~locale(v96[0]);
    v60 = *(v43 - 3);
    ptr[0] = v43;
    v61 = v97;
    *(void **)((char *)ptr + v60) = v98;
    v133[0] = (char *)&`vtable for'std::ios + 16;
    std::ios_base::~ios_base(v61);
    v28 = v100;
LABEL_38:
    ++v106;
  }
  while ( v103 != v106 );
  v106 = (int *)v105[1];
  v103 = v106 + 432;
  if ( !v29 )
  {
LABEL_107:
    v29 = nullptr;
    ptr[0] = &v125;
    ptr[1] = (void *)0x1000000000LL;
    goto LABEL_108;
  }
  v63 = (unsigned int)*(v29 - 1);
  ptr[0] = &v125;
  ptr[1] = (void *)0x1000000000LL;
  if ( (_DWORD)v63 )
  {
    v64 = v29;
    v65 = &v29[v63];
    v66 = 0;
    v67 = &v125;
    while ( 1 )
    {
      v68 = *v64++;
      *((_DWORD *)v67 + v66) = v68;
      v66 = ++LODWORD(ptr[1]);
      if ( v65 == v64 )
        break;
      if ( v66 >= HIDWORD(ptr[1]) )
      {
        LODWORD(v106) = 2 * HIDWORD(ptr[1]);
        v69 = sub_186B270(4LL * (unsigned int)(2 * HIDWORD(ptr[1])));
        v66 = (unsigned int)ptr[1];
        v70 = (__int128 *)ptr[0];
        v67 = (__int128 *)v69;
        if ( LODWORD(ptr[1]) )
        {
          if ( (unsigned int)(LODWORD(ptr[1]) - 1) <= 2 || v69 - ((unsigned __int64)ptr[0] + 4) <= 8 )
          {
            v80 = (int)v106;
            v81 = (char *)ptr[0];
            v82 = v67;
            v83 = (char *)ptr[0] + 4 * LODWORD(ptr[1]);
            do
            {
              v84 = *(_DWORD *)v81;
              v81 += 4;
              v82 = (__int128 *)((char *)v82 + 4);
              *((_DWORD *)v82 - 1) = v84;
            }
            while ( v83 != v81 );
            LODWORD(v106) = v80;
          }
          else
          {
            v71 = (int)v106;
            v72 = 0;
            v73 = 16LL * (LODWORD(ptr[1]) >> 2);
            do
            {
              v67[v72 / 0x10] = (__int128)_mm_loadu_si128((const __m128i *)&v70[v72 / 0x10]);
              v72 += 16LL;
            }
            while ( v72 != v73 );
            LODWORD(v106) = v71;
            v74 = v66 & 0xFFFFFFFC;
            if ( (v66 & 3) != 0 )
            {
              *((_DWORD *)v67 + v74) = *((_DWORD *)v70 + v74);
              v75 = v74 + 1;
              if ( (unsigned int)v75 < v66 )
              {
                v76 = v74 + 2;
                *((_DWORD *)v67 + v75) = *((_DWORD *)v70 + v75);
                if ( (unsigned int)v76 < v66 )
                  *((_DWORD *)v67 + v76) = *((_DWORD *)v70 + v76);
              }
            }
          }
        }
        if ( v70 && v70 != &v125 )
        {
          sub_186B220(v70);
          v66 = (unsigned int)ptr[1];
        }
        ptr[0] = v67;
        HIDWORD(ptr[1]) = (_DWORD)v106;
      }
    }
  }
LABEL_108:
  v99.m128i_i64[0] = (__int64)ptr;
  v77 = sub_1648610(v103, ptr);
  v78 = (_DWORD *)v77;
  if ( v77 )
    ++*(_DWORD *)(v77 + 8);
  sub_BB0560((__int64)v113, v114);
  v113 = v78;
  if ( ptr[0] && ptr[0] != &v125 )
    sub_186B220(ptr[0]);
  if ( v29 )
    sub_186B220(v29 - 2);
  v12 = nullptr;
LABEL_24:
  v23 = *(_QWORD *)(v105[1] + 912LL);
  ptr[0] = v113;
  if ( v113 )
    ++v113[2];
  sub_BB70A0((_QWORD *)(v23 + 264), v99.m128i_i64[0]);
  v24 = v113;
  sub_BB0560((__int64)v113, v114);
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v104);
  sub_182CBA0(v25, v117);
  v112 = v12;
  sub_2334C0(&v111);
  return v24;
}

