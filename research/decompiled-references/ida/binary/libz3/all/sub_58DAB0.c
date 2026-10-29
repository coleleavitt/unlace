__int64 *__fastcall sub_58DAB0(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  char **v5; // rax
  char **v6; // r12
  __int64 v7; // r14
  _QWORD *v8; // rsi
  char **v9; // r13
  char **exception; // r13
  char **v11; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rbx
  int v17; // r13d
  unsigned int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 *v24; // rdx
  __int64 v25; // rsi
  int v26; // r9d
  int v27; // ecx
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rdi
  bool v31; // zf
  _QWORD *v32; // rdx
  unsigned int v33; // esi
  unsigned int v34; // eax
  _QWORD *v35; // r11
  __int64 v36; // rcx
  __int64 v37; // rdi
  _QWORD *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 *v50; // r12
  unsigned __int64 v51; // r13
  __int64 v52; // r14
  _QWORD *v53; // r15
  __int64 v54; // rsi
  unsigned int v56; // edx
  size_t v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  _QWORD *v61; // rcx
  __m128i si128; // xmm1
  __int64 *v63; // r15
  unsigned int v64; // eax
  __int64 v65; // rdx
  _DWORD *v66; // rsi
  int v67; // eax
  _QWORD *v68; // rdx
  __int64 v69; // rcx
  _BYTE *v70; // rax
  size_t v71; // rax
  void *v72; // r8
  void *v73; // r15
  unsigned int v74; // eax
  __int64 v75; // rdx
  _DWORD *v76; // rsi
  int v77; // eax
  _QWORD *v78; // rdx
  void *v79; // rdi
  __int64 v80; // rax
  __int64 v81; // r15
  unsigned int v82; // eax
  __int64 v83; // rdx
  int v84; // eax
  __int64 *v85; // rdx
  _QWORD *v86; // rdi
  __m128i v87; // xmm0
  std::ios_base *v88; // rdi
  _QWORD *v89; // rax
  __int64 v90; // rsi
  unsigned int v91; // edx
  size_t v92; // rsi
  __int64 v93; // rax
  _DWORD *v94; // rcx
  unsigned int v95; // edx
  size_t v96; // rsi
  __int64 v97; // rax
  unsigned int v98; // r15d
  size_t v99; // rsi
  unsigned int *v100; // rax
  __int64 v101; // rdx
  size_t v102; // rdx
  _BYTE *v103; // rax
  unsigned __int64 v104; // rdi
  void *v105; // rax
  const void *v106; // rsi
  unsigned __int64 v107; // rdi
  void *v108; // r15
  void *v109; // rsi
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  _QWORD *v112; // rax
  int v113; // [rsp+0h] [rbp-370h]
  size_t n; // [rsp+8h] [rbp-368h]
  void *v115; // [rsp+10h] [rbp-360h]
  __int64 v116; // [rsp+18h] [rbp-358h]
  __int64 v117; // [rsp+18h] [rbp-358h]
  _QWORD *v118; // [rsp+20h] [rbp-350h]
  int v119; // [rsp+28h] [rbp-348h]
  __m128i v120; // [rsp+30h] [rbp-340h] BYREF
  __int64 v121; // [rsp+40h] [rbp-330h]
  __int64 v122; // [rsp+48h] [rbp-328h]
  void *dest[2]; // [rsp+50h] [rbp-320h] BYREF
  std::ios_base *v124; // [rsp+60h] [rbp-310h]
  __int64 v125; // [rsp+68h] [rbp-308h]
  int v126[2]; // [rsp+70h] [rbp-300h]
  _QWORD *v127; // [rsp+78h] [rbp-2F8h]
  _QWORD *v128; // [rsp+80h] [rbp-2F0h]
  int v129[2]; // [rsp+88h] [rbp-2E8h]
  __int64 *v130; // [rsp+90h] [rbp-2E0h]
  __int64 *v131; // [rsp+98h] [rbp-2D8h]
  unsigned int v132; // [rsp+A0h] [rbp-2D0h]
  unsigned int v133; // [rsp+A4h] [rbp-2CCh]
  _QWORD *v134; // [rsp+A8h] [rbp-2C8h]
  _QWORD v135[2]; // [rsp+B8h] [rbp-2B8h] BYREF
  void *v136; // [rsp+D0h] [rbp-2A0h]
  size_t v137; // [rsp+D8h] [rbp-298h]
  _QWORD v138[2]; // [rsp+E0h] [rbp-290h] BYREF
  int v139[2]; // [rsp+F0h] [rbp-280h] BYREF
  __int64 v140; // [rsp+F8h] [rbp-278h]
  _OWORD v141[2]; // [rsp+110h] [rbp-260h] BYREF
  void *src[2]; // [rsp+130h] [rbp-240h]
  __int128 v143; // [rsp+140h] [rbp-230h]
  char v144[8]; // [rsp+150h] [rbp-220h] BYREF
  int v145; // [rsp+158h] [rbp-218h]
  void *v146; // [rsp+160h] [rbp-210h]
  __int64 v147; // [rsp+168h] [rbp-208h]
  _QWORD v148[2]; // [rsp+170h] [rbp-200h] BYREF
  _QWORD v149[6]; // [rsp+180h] [rbp-1F0h] BYREF
  __int64 v150; // [rsp+1B0h] [rbp-1C0h]
  int *v151; // [rsp+1B8h] [rbp-1B8h] BYREF
  int *v152; // [rsp+258h] [rbp-118h] BYREF
  __int16 v153; // [rsp+260h] [rbp-110h]
  __int128 v154; // [rsp+268h] [rbp-108h]
  __int128 v155; // [rsp+278h] [rbp-F8h]
  __int64 v156; // [rsp+2F0h] [rbp-80h]
  __int64 v157; // [rsp+2F8h] [rbp-78h]
  __int64 v158; // [rsp+300h] [rbp-70h]
  __int64 v159; // [rsp+308h] [rbp-68h]
  __int64 v160; // [rsp+310h] [rbp-60h]
  __int64 v161; // [rsp+318h] [rbp-58h]
  __int64 v162; // [rsp+320h] [rbp-50h]
  char v163[8]; // [rsp+328h] [rbp-48h] BYREF
  char v164; // [rsp+330h] [rbp-40h]

  v13 = *(_QWORD *)(a2 + 40);
  v130 = a1;
  v131 = a3;
  v125 = v13;
  a1[1] = v13;
  v135[1] = v13;
  v14 = *a5;
  *(_QWORD *)v126 = a4;
  v127 = a5;
  *a1 = 0;
  if ( v14 )
    v133 = *(_DWORD *)(v14 - 4);
  else
    v133 = 0;
  v15 = *a3;
  if ( !*a3 )
  {
    *(_QWORD *)v129 = v141;
    sub_633760(v141, v125, 0, v163);
    v164 = 0;
    v16 = nullptr;
    v27 = 0;
    *(_QWORD *)&v141[0] = &off_1C4CA80;
    v134 = nullptr;
    v128 = nullptr;
    goto LABEL_17;
  }
  v128 = nullptr;
  v16 = nullptr;
  v17 = 0;
  v18 = 0;
  v134 = nullptr;
  v132 = 0;
  while ( v18 < *(_DWORD *)(v15 - 4) )
  {
    if ( v132 < v133 && *(_DWORD *)(*v127 + 4LL * v132) == v18 )
    {
      v120.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
      v124 = (std::ios_base *)v149;
      *(_QWORD *)v129 = v141;
      *(__m128i *)dest = _mm_unpacklo_epi64(
                           (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                           (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
      std::ios_base::ios_base((std::ios_base *)v149);
      v154 = 0;
      v155 = 0;
      v149[0] = (char *)&`vtable for'std::ios + 16;
      v153 = 0;
      v152 = nullptr;
      v59 = `VTT for'std::ostringstream[1];
      v60 = `VTT for'std::ostringstream[2];
      v61 = (_QWORD *)(*(_QWORD *)(v59 - 24) + *(_QWORD *)v129);
      *(_QWORD *)&v141[0] = v59;
      *v61 = v60;
      v122 = v59;
      v121 = v60;
      std::ios::init();
      si128 = _mm_load_si128((const __m128i *)dest);
      v141[1] = 0;
      v141[0] = si128;
      v149[0] = (char *)&`vtable for'std::ostringstream + 64;
      v120.m128i_i64[1] = (__int64)v144;
      *(_OWORD *)src = 0;
      v143 = 0;
      std::locale::locale((std::locale *)v144);
      v145 = 16;
      LOBYTE(v148[0]) = 0;
      *((_QWORD *)&v141[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
      v118 = v148;
      v146 = v148;
      v147 = 0;
      std::ios::init();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      v119 = v18;
      v63 = (__int64 *)(*v131 + 8LL * v18);
      if ( v134 )
      {
        v64 = *((_DWORD *)v134 - 1);
        if ( v64 == *((_DWORD *)v134 - 2) )
        {
          v91 = (3 * v64 + 1) >> 1;
          v92 = 8 * v91 + 8;
          if ( 8 * v64 + 8 >= (unsigned int)v92 || v64 >= v91 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v139, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v139);
            sub_233E40((__int64)v139);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(dest[0]) = (3 * v64 + 1) >> 1;
          v93 = sub_186B300(v134 - 1, v92);
          v94 = (_DWORD *)(v93 + 8);
          v134 = (_QWORD *)(v93 + 8);
          v66 = (_DWORD *)(v93 + 8);
          *(_DWORD *)v93 = dest[0];
          LODWORD(v93) = *(_DWORD *)(v93 + 4);
          v68 = &v94[2 * (unsigned int)v93];
          v67 = v93 + 1;
        }
        else
        {
          v65 = v64;
          v66 = v134;
          v67 = v64 + 1;
          v68 = &v134[v65];
        }
      }
      else
      {
        v110 = (_QWORD *)sub_186B270(0x18u);
        v68 = v110 + 1;
        *v110 = 2;
        v67 = 1;
        v134 = v68;
        v66 = v68;
      }
      v69 = *v63;
      LOBYTE(v138[0]) = 0;
      v137 = 0;
      *v68 = v69;
      *(v66 - 1) = v67;
      dest[0] = v138;
      v136 = v138;
      v70 = (_BYTE *)v143;
      if ( (_QWORD)v143 )
      {
        if ( src[0] >= (void *)v143 )
          v70 = src[0];
        if ( !src[0] )
          v70 = (_BYTE *)v143;
        v71 = v70 - (char *)src[1];
        v72 = (void *)v71;
        if ( (v71 & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_replace");
        if ( v71 > 0xF )
        {
          if ( v71 <= 0x1D )
          {
            v116 = 30;
            v104 = 31;
          }
          else
          {
            v104 = v71 + 1;
            if ( (__int64)(v71 + 1) < 0 )
              std::__throw_bad_alloc();
            v116 = v71;
          }
          n = v71;
          v115 = src[1];
          v105 = (void *)operator new(v104);
          v106 = v115;
          v72 = (void *)n;
          v73 = v105;
          if ( v115 )
          {
            LODWORD(v115) = n;
            memcpy(v105, v106, n);
            v72 = (void *)n;
          }
          if ( v136 != dest[0] )
          {
            v115 = v72;
            operator delete(v136, v138[0] + 1LL);
            v72 = v115;
          }
          v136 = v73;
          v138[0] = v116;
        }
        else if ( src[1] == dest[0] )
        {
          v116 = v71;
          std::string::_M_replace_cold();
          v72 = (void *)v116;
          v73 = v136;
        }
        else
        {
          if ( v71 )
          {
            if ( v71 == 1 )
            {
              LOBYTE(v138[0]) = *(_BYTE *)src[1];
            }
            else
            {
              v116 = v71;
              memcpy(dest[0], src[1], v71);
              v72 = (void *)v116;
            }
          }
          v73 = dest[0];
        }
        v137 = (size_t)v72;
        *((_BYTE *)v72 + (_QWORD)v73) = 0;
        goto LABEL_75;
      }
      v102 = v147;
      if ( (unsigned __int64)v147 > 0xF )
      {
        if ( v147 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        if ( (unsigned __int64)v147 > 0x1D )
        {
          v107 = v147 + 1;
          if ( v147 + 1 < 0 )
            std::__throw_bad_alloc();
          v117 = v147;
        }
        else
        {
          v117 = 30;
          v107 = 31;
        }
        v115 = (void *)v147;
        v108 = (void *)operator new(v107);
        v102 = (size_t)v115;
        if ( v136 != dest[0] )
        {
          operator delete(v136, v138[0] + 1LL);
          v102 = (size_t)v115;
        }
        v136 = v108;
        v109 = v146;
        v138[0] = v117;
      }
      else
      {
        if ( !v147 )
          goto LABEL_106;
        v109 = v146;
        v108 = dest[0];
        if ( v147 == 1 )
        {
          LOBYTE(v138[0]) = *(_BYTE *)v146;
LABEL_106:
          v103 = dest[0];
LABEL_107:
          v137 = v102;
          v103[v102] = 0;
LABEL_75:
          sub_180C5A0(v135, v136);
          if ( v128 )
          {
            v74 = *((_DWORD *)v128 - 1);
            if ( v74 == *((_DWORD *)v128 - 2) )
            {
              v98 = (3 * v74 + 1) >> 1;
              v99 = 8 * v98 + 8;
              if ( 8 * v74 + 8 >= (unsigned int)v99 || v74 >= v98 )
              {
                v9 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v139, "Overflow encountered when expanding vector");
                *v9 = (char *)off_1C63128;
                sub_2333C0(v9 + 1, v139);
                sub_233E40((__int64)v139);
                __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v100 = (unsigned int *)sub_186B300(v128 - 1, v99);
              v101 = v100[1];
              v76 = v100 + 2;
              *v100 = v98;
              v128 = v76;
              LODWORD(v100) = v101;
              v78 = &v76[2 * v101];
              v77 = (_DWORD)v100 + 1;
            }
            else
            {
              v75 = v74;
              v76 = v128;
              v77 = v74 + 1;
              v78 = &v128[v75];
            }
          }
          else
          {
            v111 = (_QWORD *)sub_186B270(0x18u);
            v78 = v111 + 1;
            *v111 = 2;
            v77 = 1;
            v128 = v78;
            v76 = v78;
          }
          v79 = v136;
          *v78 = v135[0];
          *(v76 - 1) = v77;
          if ( v79 != dest[0] )
            operator delete(v79, v138[0] + 1LL);
          v80 = sub_15DB5C0(*(_QWORD *)(a2 + 40), v132, *(_QWORD *)(*v131 + 8LL * v18));
          v81 = v80;
          if ( v80 )
            ++*(_DWORD *)(v80 + 8);
          if ( v16 )
          {
            v82 = *((_DWORD *)v16 - 1);
            if ( v82 == *((_DWORD *)v16 - 2) )
            {
              v95 = (3 * v82 + 1) >> 1;
              v96 = 8 * v95 + 8;
              if ( 8 * v82 + 8 >= (unsigned int)v96 || v82 >= v95 )
              {
                v11 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v139, "Overflow encountered when expanding vector");
                *v11 = (char *)off_1C63128;
                sub_2333C0(v11 + 1, v139);
                sub_233E40((__int64)v139);
                __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              LODWORD(dest[0]) = (3 * v82 + 1) >> 1;
              v97 = sub_186B300(v16 - 1, v96);
              v16 = (_QWORD *)(v97 + 8);
              *(_DWORD *)v97 = dest[0];
              LODWORD(v97) = *(_DWORD *)(v97 + 4);
              v85 = &v16[(unsigned int)v97];
              v84 = v97 + 1;
            }
            else
            {
              v83 = v82;
              v84 = v82 + 1;
              v85 = &v16[v83];
            }
          }
          else
          {
            v112 = (_QWORD *)sub_186B270(0x18u);
            v16 = v112 + 1;
            *v112 = 2;
            v84 = 1;
            v85 = v16;
          }
          *v85 = v81;
          v86 = v146;
          v87 = _mm_loadl_epi64(&v120);
          *((_DWORD *)v16 - 1) = v84;
          ++v132;
          v149[0] = (char *)&`vtable for'std::ostringstream + 64;
          v141[0] = _mm_unpacklo_epi64(v87, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
          if ( v86 != v148 )
            operator delete(v86, v148[0] + 1LL);
          *((_QWORD *)&v141[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
          std::locale::~locale((std::locale *)v120.m128i_i64[1]);
          v88 = v124;
          *(_QWORD *)&v141[0] = v122;
          *(_QWORD *)((char *)v141 + *(_QWORD *)(v122 - 24)) = v121;
          v149[0] = (char *)&`vtable for'std::ios + 16;
          std::ios_base::~ios_base(v88);
          goto LABEL_14;
        }
      }
      v116 = v102;
      memcpy(v108, v109, v102);
      v103 = v136;
      v102 = v116;
      goto LABEL_107;
    }
    v19 = sub_15DB5C0(*(_QWORD *)(a2 + 40), v133 + v17, *(_QWORD *)(v15 + 8LL * v18));
    v20 = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    if ( v16 )
    {
      v21 = *((_DWORD *)v16 - 1);
      if ( v21 == *((_DWORD *)v16 - 2) )
      {
        v56 = (3 * v21 + 1) >> 1;
        v57 = 8 * v56 + 8;
        if ( 8 * v21 + 8 >= (unsigned int)v57 || v21 >= v56 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          *(_QWORD *)v129 = v141;
          v6 = v5;
          sub_24ABB0((__int64 *)v141, "Overflow encountered when expanding vector");
          v7 = *(_QWORD *)v129;
          v8 = *(_QWORD **)v129;
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v8);
          sub_233E40(v7);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v129[0] = (3 * v21 + 1) >> 1;
        v58 = sub_186B300(v16 - 1, v57);
        v16 = (_QWORD *)(v58 + 8);
        *(_DWORD *)v58 = v129[0];
        LODWORD(v58) = *(_DWORD *)(v58 + 4);
        v24 = &v16[(unsigned int)v58];
        v23 = v58 + 1;
      }
      else
      {
        v22 = v21;
        v23 = v21 + 1;
        v24 = &v16[v22];
      }
    }
    else
    {
      v89 = (_QWORD *)sub_186B270(0x18u);
      v16 = v89 + 1;
      *v89 = 2;
      v23 = 1;
      v24 = v16;
    }
    *v24 = v20;
    ++v17;
    *((_DWORD *)v16 - 1) = v23;
LABEL_14:
    ++v18;
    v15 = *v131;
    if ( !*v131 )
    {
      v25 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)v129 = v141;
      sub_633760(v141, v25, 0, v163);
      v164 = 0;
      *(_QWORD *)&v141[0] = &off_1C4CA80;
LABEL_16:
      v27 = *((_DWORD *)v16 - 1);
      goto LABEL_17;
    }
  }
  v90 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)v129 = v141;
  sub_633760(v141, v90, 0, v163);
  v164 = 0;
  v27 = 0;
  *(_QWORD *)&v141[0] = &off_1C4CA80;
  if ( v16 )
    goto LABEL_16;
LABEL_17:
  sub_157BE40(
    (int)v139,
    v129[0],
    v126[0],
    v27,
    (int)v16,
    v26,
    v113,
    n,
    (int)v115,
    v116,
    (int)v118,
    v119,
    v120.m128i_i64[0],
    (void *)v120.m128i_i64[1]);
  v28 = *(_QWORD *)v139;
  v29 = *v130;
  *v130 = *(_QWORD *)v139;
  *(_QWORD *)v139 = v29;
  if ( v29 )
  {
    v30 = v140;
    v31 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v31 )
    {
      sub_15D7BC0(v30, v29);
      v32 = v134;
      v28 = *v130;
      if ( v134 )
        goto LABEL_20;
      goto LABEL_60;
    }
  }
  v32 = v134;
  if ( !v134 )
  {
LABEL_60:
    v33 = 0;
    goto LABEL_24;
  }
LABEL_20:
  v33 = *((_DWORD *)v32 - 1);
  if ( v33 >> 1 )
  {
    v34 = v33 - 1;
    v35 = v32;
    do
    {
      v36 = v34;
      v37 = *v32;
      --v34;
      ++v32;
      v38 = &v35[v36];
      *(v32 - 1) = *v38;
      *v38 = v37;
    }
    while ( v33 - 1 - (v33 >> 1) != v34 );
    v134 = v35;
  }
LABEL_24:
  v39 = sub_15DB6A0(*(_QWORD *)(a2 + 40), 1, v33, v134, v128, v28, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
  v40 = v39;
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  v41 = *v130;
  if ( *v130 )
  {
    v42 = v130[1];
    v31 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v31 )
      sub_15D7BC0(v42, v41);
  }
  v43 = v162;
  *v130 = v40;
  *(_QWORD *)&v141[0] = &off_1C4CA60;
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  v44 = v160;
  if ( v160 )
  {
    v45 = v161;
    v31 = (*(_DWORD *)(v160 + 8))-- == 1;
    if ( v31 )
      sub_15D7BC0(v45, v44);
  }
  v46 = v158;
  if ( v158 )
  {
    v47 = v159;
    v31 = (*(_DWORD *)(v158 + 8))-- == 1;
    if ( v31 )
      sub_15D7BC0(v47, v46);
  }
  v48 = v156;
  if ( v156 )
  {
    v49 = v157;
    v31 = (*(_DWORD *)(v156 + 8))-- == 1;
    if ( v31 )
      sub_15D7BC0(v49, v48);
  }
  v152 = &qword_1C637E8;
  sub_15841B0(&v152);
  v151 = &qword_1C637E8;
  sub_15841B0(&v151);
  if ( v150 )
    sub_186B220((void *)(v150 - 8));
  sub_15841B0(*(_QWORD *)v129);
  if ( v16 )
  {
    v50 = v16;
    v51 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
    if ( (unsigned __int64)v16 < v51 )
    {
      v52 = v125;
      v53 = v134;
      do
      {
        while ( 1 )
        {
          v54 = *v50;
          if ( *v50 )
          {
            v31 = (*(_DWORD *)(v54 + 8))-- == 1;
            if ( v31 )
              break;
          }
          if ( (unsigned __int64)++v50 >= v51 )
            goto LABEL_49;
        }
        ++v50;
        sub_15D7BC0(v52, v54);
      }
      while ( (unsigned __int64)v50 < v51 );
LABEL_49:
      v134 = v53;
    }
    sub_186B220(v16 - 1);
  }
  if ( v128 )
    sub_186B220(v128 - 1);
  if ( v134 )
    sub_186B220(v134 - 1);
  return v130;
}

