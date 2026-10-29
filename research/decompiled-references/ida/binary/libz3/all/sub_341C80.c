__int64 __fastcall sub_341C80(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v4; // al
  char *v5; // r12
  char *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE *v11; // rax
  size_t v12; // rax
  size_t v13; // r14
  void *v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  int *v18; // rdi
  _BYTE *v19; // rax
  size_t v20; // rax
  size_t v21; // r8
  void *v22; // rcx
  std::ostream *v23; // rdi
  __int64 v24; // rax
  std::ios_base *v25; // rdi
  std::ios_base *v26; // rdi
  __int64 v27; // rax
  _DWORD *v28; // rcx
  _DWORD *v29; // rdi
  bool v30; // zf
  std::chrono::_V2::steady_clock *v31; // rdi
  unsigned int v32; // r12d
  void *v34; // r15
  void **v35; // rax
  __int64 v36; // r14
  _QWORD *v37; // r15
  __int64 v38; // rdi
  size_t v39; // r14
  _BYTE *v40; // rax
  _BYTE *v41; // rax
  size_t v42; // rax
  size_t v43; // r8
  void *v44; // rcx
  std::ostream *v45; // rax
  __int64 v46; // r15
  _QWORD *v47; // r15
  __int64 v48; // r13
  unsigned __int64 v49; // rdi
  void *v50; // rax
  _DWORD *v51; // rcx
  void *v52; // r15
  void (__fastcall ***v53)(void *); // r12
  size_t v54; // r13
  unsigned __int64 v55; // rdi
  void *v56; // r15
  void *v57; // rsi
  size_t v58; // rdx
  _BYTE *v59; // rax
  size_t v60; // rdx
  _BYTE *v61; // rax
  unsigned __int64 v62; // rdi
  void *v63; // rax
  void *v64; // rax
  unsigned __int64 v65; // rdi
  void *v66; // rax
  void *v67; // rax
  void *v68; // rsi
  void *v69; // rax
  void *v70; // rsi
  void *v71; // rax
  unsigned __int64 v72; // rdi
  unsigned __int64 v73; // rdi
  size_t v74; // [rsp+0h] [rbp-490h]
  size_t v75; // [rsp+0h] [rbp-490h]
  const void *v76; // [rsp+8h] [rbp-488h]
  size_t v77; // [rsp+8h] [rbp-488h]
  const void *v78; // [rsp+8h] [rbp-488h]
  size_t v79; // [rsp+8h] [rbp-488h]
  size_t v80; // [rsp+8h] [rbp-488h]
  size_t v81; // [rsp+8h] [rbp-488h]
  size_t v82; // [rsp+8h] [rbp-488h]
  size_t v83; // [rsp+10h] [rbp-480h]
  size_t v84; // [rsp+10h] [rbp-480h]
  __int64 v85; // [rsp+10h] [rbp-480h]
  __int64 v86; // [rsp+10h] [rbp-480h]
  size_t v87; // [rsp+10h] [rbp-480h]
  size_t v88; // [rsp+10h] [rbp-480h]
  size_t v89; // [rsp+28h] [rbp-468h]
  size_t v90; // [rsp+28h] [rbp-468h]
  size_t v91; // [rsp+28h] [rbp-468h]
  size_t v92; // [rsp+28h] [rbp-468h]
  size_t v93; // [rsp+28h] [rbp-468h]
  size_t v94; // [rsp+28h] [rbp-468h]
  size_t v95; // [rsp+28h] [rbp-468h]
  size_t v96; // [rsp+28h] [rbp-468h]
  __int64 v97; // [rsp+30h] [rbp-460h]
  __m128i v98; // [rsp+40h] [rbp-450h] BYREF
  std::locale *v99; // [rsp+50h] [rbp-440h]
  char *v100; // [rsp+58h] [rbp-438h]
  __int64 v101; // [rsp+60h] [rbp-430h]
  __int64 v102; // [rsp+68h] [rbp-428h]
  __int64 v103; // [rsp+70h] [rbp-420h]
  char *v104; // [rsp+78h] [rbp-418h]
  __int64 v105; // [rsp+80h] [rbp-410h]
  std::ios_base *v106; // [rsp+88h] [rbp-408h]
  void *dest[2]; // [rsp+90h] [rbp-400h] BYREF
  int v108[2]; // [rsp+A0h] [rbp-3F0h]
  char v109; // [rsp+ABh] [rbp-3E5h]
  int v110; // [rsp+ACh] [rbp-3E4h]
  void *v111; // [rsp+B0h] [rbp-3E0h]
  size_t v112; // [rsp+B8h] [rbp-3D8h]
  _QWORD v113[2]; // [rsp+C0h] [rbp-3D0h] BYREF
  char *v114; // [rsp+D0h] [rbp-3C0h]
  __int64 v115; // [rsp+D8h] [rbp-3B8h]
  _OWORD v116[2]; // [rsp+E0h] [rbp-3B0h] BYREF
  void *src[2]; // [rsp+100h] [rbp-390h]
  __int128 v118; // [rsp+110h] [rbp-380h]
  char v119[8]; // [rsp+120h] [rbp-370h] BYREF
  int v120; // [rsp+128h] [rbp-368h]
  void *v121; // [rsp+130h] [rbp-360h]
  size_t n; // [rsp+138h] [rbp-358h]
  _QWORD v123[2]; // [rsp+140h] [rbp-350h] BYREF
  _QWORD v124[28]; // [rsp+150h] [rbp-340h] BYREF
  __int16 v125; // [rsp+230h] [rbp-260h]
  __int128 v126; // [rsp+238h] [rbp-258h]
  __int128 v127; // [rsp+248h] [rbp-248h]
  __m128i v128; // [rsp+260h] [rbp-230h] BYREF
  char v129[48]; // [rsp+2A0h] [rbp-1F0h] BYREF
  _QWORD v130[28]; // [rsp+358h] [rbp-138h] BYREF
  __int16 v131; // [rsp+438h] [rbp-58h]
  __int128 v132; // [rsp+440h] [rbp-50h]
  __int128 v133; // [rsp+450h] [rbp-40h]

  v4 = *(_BYTE *)(a1 + 968);
  v110 = a2;
  *(_QWORD *)v108 = a3;
  v109 = v4;
  if ( !v4 )
  {
    v28 = *(_DWORD **)(a1 + 920);
    v105 = 0;
    v29 = v28;
    if ( !v28 )
      goto LABEL_36;
    goto LABEL_47;
  }
  v105 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
  v98.m128i_i64[1] = (__int64)v124;
  std::ios_base::ios_base((std::ios_base *)v124);
  v125 = 0;
  v126 = 0;
  v5 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v127 = 0;
  v6 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v124[0] = (char *)&`vtable for'std::ios + 16;
  v7 = *((_QWORD *)v5 - 3);
  v114 = v5;
  v124[27] = 0;
  *(char **)((char *)&v114 + v7) = v6;
  v115 = 0;
  v104 = v6;
  std::ios::init();
  *(_QWORD *)&v116[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v8 = (_QWORD *)((char *)v116 + *(_QWORD *)(*(_QWORD *)&v116[0] - 24LL));
  v103 = *(_QWORD *)&v116[0];
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *v8 = v9;
  v102 = v9;
  std::ios::init();
  v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v100 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v98.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  v101 = v10;
  *(char **)((char *)&v114 + *(_QWORD *)(v10 - 24)) = v100;
  v114 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v124[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v99 = (std::locale *)v119;
  v116[0] = _mm_unpacklo_epi64(
              (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                      + 64),
              (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v116[1] = 0;
  *(_OWORD *)src = 0;
  v118 = 0;
  std::locale::locale((std::locale *)v119);
  v120 = 24;
  LOBYTE(v123[0]) = 0;
  *((_QWORD *)&v116[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v121 = v123;
  n = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  ++dword_1C7EBB0;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  LOBYTE(v113[0]) = 0;
  dest[0] = v113;
  v111 = v113;
  v11 = (_BYTE *)v118;
  v112 = 0;
  if ( !(_QWORD)v118 )
  {
    v39 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v54 = n;
        v55 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v54 = 30;
        v55 = 31;
      }
      v56 = (void *)operator new(v55);
      if ( v111 != dest[0] )
        operator delete(v111, v113[0] + 1LL);
      v111 = v56;
      v57 = v121;
      v113[0] = v54;
    }
    else
    {
      if ( !n )
      {
LABEL_63:
        v40 = dest[0];
LABEL_64:
        v112 = v39;
        v40[v39] = 0;
        goto LABEL_13;
      }
      v57 = v121;
      v56 = dest[0];
      if ( n == 1 )
      {
        LOBYTE(v113[0]) = *(_BYTE *)v121;
        goto LABEL_63;
      }
    }
    memcpy(v56, v57, v39);
    v40 = v111;
    goto LABEL_64;
  }
  if ( src[0] >= (void *)v118 )
    v11 = src[0];
  if ( !src[0] )
    v11 = (_BYTE *)v118;
  v12 = v11 - (char *)src[1];
  v13 = v12;
  if ( (v12 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v12 > 0xF )
  {
    if ( v12 <= 0x1D )
    {
      v48 = 30;
      v49 = 31;
    }
    else
    {
      v48 = v12;
      v49 = v12 + 1;
      if ( (__int64)(v12 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    v106 = (std::ios_base *)src[1];
    v50 = (void *)operator new(v49);
    v14 = v50;
    if ( v106 )
      memcpy(v50, v106, v13);
    if ( v111 != dest[0] )
      operator delete(v111, v113[0] + 1LL);
    v111 = v14;
    v113[0] = v48;
  }
  else if ( src[1] == dest[0] )
  {
    std::string::_M_replace_cold();
    v14 = v111;
  }
  else
  {
    if ( v12 )
    {
      if ( v12 == 1 )
        LOBYTE(v113[0]) = *(_BYTE *)src[1];
      else
        memcpy(dest[0], src[1], v12);
    }
    v14 = dest[0];
  }
  v112 = v13;
  *((_BYTE *)v14 + v13) = 0;
LABEL_13:
  v106 = (std::ios_base *)v130;
  std::ios_base::ios_base((std::ios_base *)v130);
  v131 = 0;
  v132 = 0;
  v130[0] = (char *)&`vtable for'std::ios + 16;
  v133 = 0;
  v15 = `VTT for'std::ofstream[1];
  v16 = `VTT for'std::ofstream[2];
  v130[27] = 0;
  v17 = *(_QWORD *)(v15 - 24);
  v128.m128i_i64[0] = v15;
  v97 = v16;
  *(__int64 *)((char *)v128.m128i_i64 + v17) = v16;
  std::ios::init();
  v128.m128i_i64[0] = (__int64)&`vtable for'std::ofstream + 24;
  v130[0] = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  std::filebuf::open();
  std::ios::clear();
  if ( v111 != dest[0] )
    operator delete(v111, v113[0] + 1LL);
  a2 = (unsigned __int64)&v128;
  sub_341360(a1, (int)&v128, v110, v108[0], (int)"opt_solver", (int)&qword_18D6CD0, (__int64)"unknown", "");
  v18 = &v128.m128i_i32[2];
  if ( !std::filebuf::close() )
  {
    v18 = (__int32 *)((char *)v128.m128i_i32 + *(_QWORD *)(v128.m128i_i64[0] - 24));
    a2 = v18[8] | 4u;
    std::ios::clear();
  }
  if ( (unsigned int)sub_180B130(v18) )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      sub_180B150(v18, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      LOBYTE(v113[0]) = 0;
      v112 = 0;
      v111 = dest[0];
      v19 = (_BYTE *)v118;
      if ( (_QWORD)v118 )
      {
        if ( src[0] >= (void *)v118 )
          v19 = src[0];
        if ( !src[0] )
          v19 = (_BYTE *)v118;
        v20 = v19 - (char *)src[1];
        v21 = v20;
        if ( (v20 & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_replace");
        if ( v20 > 0xF )
        {
          if ( v20 > 0x1D )
          {
            v85 = v20;
            v62 = v20 + 1;
            if ( (__int64)(v20 + 1) < 0 )
              std::__throw_bad_alloc();
          }
          else
          {
            v85 = 30;
            v62 = 31;
          }
          v74 = v20;
          v76 = src[1];
          v63 = (void *)operator new(v62);
          v21 = v74;
          v22 = v63;
          if ( v76 )
          {
            v64 = memcpy(v63, v76, v74);
            v21 = v74;
            v22 = v64;
          }
          if ( v111 != dest[0] )
          {
            v77 = (size_t)v22;
            v91 = v21;
            operator delete(v111, v113[0] + 1LL);
            v22 = (void *)v77;
            v21 = v91;
          }
          v111 = v22;
          v113[0] = v85;
        }
        else if ( src[1] == dest[0] )
        {
          v84 = v20;
          std::string::_M_replace_cold();
          v21 = v84;
          v22 = v111;
        }
        else
        {
          if ( v20 )
          {
            if ( v20 == 1 )
            {
              LOBYTE(v113[0]) = *(_BYTE *)src[1];
            }
            else
            {
              v89 = v20;
              memcpy(dest[0], src[1], v20);
              v21 = v89;
            }
          }
          v22 = dest[0];
        }
        v112 = v21;
        *((_BYTE *)v22 + v21) = 0;
        goto LABEL_30;
      }
      v58 = n;
      if ( n > 0xF )
      {
        if ( (n & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_create");
        if ( n > 0x1D )
        {
          v87 = n;
          v72 = n + 1;
          if ( (__int64)(n + 1) < 0 )
            std::__throw_bad_alloc();
        }
        else
        {
          v87 = 30;
          v72 = 31;
        }
        v80 = n;
        v69 = (void *)operator new(v72);
        v58 = v80;
        if ( v111 != dest[0] )
        {
          v81 = (size_t)v69;
          v93 = v58;
          operator delete(v111, v113[0] + 1LL);
          v69 = (void *)v81;
          v58 = v93;
        }
        v111 = v69;
        v68 = v121;
        v113[0] = v87;
      }
      else
      {
        if ( !n )
        {
LABEL_112:
          v59 = dest[0];
LABEL_113:
          v112 = v58;
          v59[v58] = 0;
LABEL_30:
          std::__ostream_insert<char,std::char_traits<char>>();
          a2 = (unsigned __int64)"...";
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v111 != dest[0] )
          {
            a2 = v113[0] + 1LL;
            operator delete(v111, v113[0] + 1LL);
          }
          v23 = (std::ostream *)sub_180B150(v111, a2);
          std::ostream::flush(v23);
          sub_186A500(v23, a2);
          goto LABEL_33;
        }
        v68 = v121;
        v69 = dest[0];
        if ( n == 1 )
        {
          LOBYTE(v113[0]) = *(_BYTE *)v121;
          goto LABEL_112;
        }
      }
      v94 = v58;
      memcpy(v69, v68, v58);
      v59 = v111;
      v58 = v94;
      goto LABEL_113;
    }
    ((void (*)(void))sub_180B150)();
    std::__ostream_insert<char,std::char_traits<char>>();
    LOBYTE(v113[0]) = 0;
    v112 = 0;
    v111 = dest[0];
    v41 = (_BYTE *)v118;
    if ( (_QWORD)v118 )
    {
      if ( src[0] >= (void *)v118 )
        v41 = src[0];
      if ( !src[0] )
        v41 = (_BYTE *)v118;
      v42 = v41 - (char *)src[1];
      v43 = v42;
      if ( (v42 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_replace");
      if ( v42 > 0xF )
      {
        if ( v42 > 0x1D )
        {
          v86 = v42;
          v65 = v42 + 1;
          if ( (__int64)(v42 + 1) < 0 )
            std::__throw_bad_alloc();
        }
        else
        {
          v86 = 30;
          v65 = 31;
        }
        v75 = v42;
        v78 = src[1];
        v66 = (void *)operator new(v65);
        v43 = v75;
        v44 = v66;
        if ( v78 )
        {
          v67 = memcpy(v66, v78, v75);
          v43 = v75;
          v44 = v67;
        }
        if ( v111 != dest[0] )
        {
          v79 = v43;
          v92 = (size_t)v44;
          operator delete(v111, v113[0] + 1LL);
          v43 = v79;
          v44 = (void *)v92;
        }
        v111 = v44;
        v113[0] = v86;
      }
      else if ( src[1] == dest[0] )
      {
        v83 = v42;
        std::string::_M_replace_cold();
        v43 = v83;
        v44 = v111;
      }
      else
      {
        if ( v42 )
        {
          if ( v42 == 1 )
          {
            LOBYTE(v113[0]) = *(_BYTE *)src[1];
          }
          else
          {
            v90 = v42;
            memcpy(dest[0], src[1], v42);
            v43 = v90;
          }
        }
        v44 = dest[0];
      }
      v112 = v43;
      *((_BYTE *)v44 + v43) = 0;
      goto LABEL_76;
    }
    v60 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v88 = n;
        v73 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v88 = 30;
        v73 = 31;
      }
      v82 = n;
      v71 = (void *)operator new(v73);
      v60 = v82;
      if ( v111 != dest[0] )
      {
        v95 = (size_t)v71;
        operator delete(v111, v113[0] + 1LL);
        v60 = v82;
        v71 = (void *)v95;
      }
      v111 = v71;
      v70 = v121;
      v113[0] = v88;
    }
    else
    {
      if ( !n )
      {
LABEL_116:
        v61 = dest[0];
LABEL_117:
        v112 = v60;
        v61[v60] = 0;
LABEL_76:
        std::__ostream_insert<char,std::char_traits<char>>();
        a2 = (unsigned __int64)"...";
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v111 != dest[0] )
        {
          a2 = v113[0] + 1LL;
          operator delete(v111, v113[0] + 1LL);
        }
        v45 = (std::ostream *)sub_180B150(v111, a2);
        std::ostream::flush(v45);
        goto LABEL_33;
      }
      v70 = v121;
      v71 = dest[0];
      if ( n == 1 )
      {
        LOBYTE(v113[0]) = *(_BYTE *)v121;
        goto LABEL_116;
      }
    }
    v96 = v60;
    memcpy(v71, v70, v60);
    v61 = v111;
    v60 = v96;
    goto LABEL_117;
  }
LABEL_33:
  *(__m128i *)dest = _mm_unpacklo_epi64(
                       _mm_loadl_epi64(&v98),
                       (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  v130[0] = (char *)&`vtable for'std::ofstream + 64;
  v128 = _mm_unpacklo_epi64(
           (__m128i)((unsigned __int64)&`vtable for'std::ofstream + 24),
           (__m128i)((unsigned __int64)&`vtable for'std::filebuf + 16));
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file();
  v128.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v129);
  v24 = *(_QWORD *)(v15 - 24);
  v128.m128i_i64[0] = v15;
  v25 = v106;
  *(__int64 *)((char *)v128.m128i_i64 + v24) = v97;
  v130[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v25);
  v116[0] = _mm_load_si128((const __m128i *)dest);
  v114 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v124[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v121 != v123 )
  {
    a2 = v123[0] + 1LL;
    operator delete(v121, v123[0] + 1LL);
  }
  *((_QWORD *)&v116[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v99);
  v26 = (std::ios_base *)v98.m128i_i64[1];
  *(char **)((char *)&v114 + *(_QWORD *)(v101 - 24)) = v100;
  *(_QWORD *)&v116[0] = v103;
  *(_QWORD *)((char *)v116 + *(_QWORD *)(v103 - 24)) = v102;
  v27 = *((_QWORD *)v5 - 3);
  v114 = v5;
  *(char **)((char *)&v114 + v27) = v104;
  v115 = 0;
  v124[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v26);
  v28 = *(_DWORD **)(a1 + 920);
  v29 = v28;
  if ( v28 )
  {
LABEL_47:
    LODWORD(dest[0]) = v28[4];
    v30 = LODWORD(dest[0]) == 1;
    v28[4] = LODWORD(dest[0]) - 1;
    if ( v30 )
    {
      v34 = v28;
      (**(void (__fastcall ***)(_DWORD *))v28)(v29);
      sub_186B220(v34);
    }
  }
LABEL_36:
  v30 = *(_BYTE *)(a1 + 992) == 0;
  *(_QWORD *)(a1 + 920) = 0;
  if ( v30 || v110 || (unsigned int)sub_8E36E0(a1 + 880) )
  {
    a2 = (unsigned int)v110;
    v31 = (std::chrono::_V2::steady_clock *)(a1 + 880);
    v32 = sub_8E3730(a1 + 880, (unsigned int)v110, *(_QWORD *)v108);
  }
  else
  {
    v31 = (std::chrono::_V2::steady_clock *)(a1 + 880);
    v32 = sub_8E3720(a1 + 880);
  }
  if ( v32 )
  {
    if ( v32 != 1 )
      goto LABEL_41;
  }
  else
  {
    v31 = (std::chrono::_V2::steady_clock *)(a1 + 880);
    if ( (unsigned int)sub_8E37E0(a1 + 880) != 8 )
    {
LABEL_41:
      v30 = *(_BYTE *)(a1 + 968) == 0;
      *(_BYTE *)(a1 + 992) = 0;
      if ( v30 )
        return v32;
      goto LABEL_42;
    }
    *(_BYTE *)(a1 + 993) = 1;
  }
  a2 = a1 + 920;
  v31 = (std::chrono::_V2::steady_clock *)(a1 + 880);
  sub_8E3780(a1 + 880, a1 + 920);
  v35 = *(void ***)(a1 + 944);
  if ( v35 && *((_DWORD *)v35 - 1) == 1 )
  {
    v51 = *(_DWORD **)(a1 + 920);
    v52 = v51;
    if ( v51 )
      ++v51[4];
    v53 = (void (__fastcall ***)(void *))*v35;
    if ( *v35 )
    {
      v30 = (*((_DWORD *)v53 + 4))-- == 1;
      if ( v30 )
      {
        (**v53)(v53);
        v31 = (std::chrono::_V2::steady_clock *)v53;
        sub_186B220(v53);
        v35 = *(void ***)(a1 + 944);
      }
    }
    *v35 = v52;
  }
  v30 = *(_BYTE *)(a1 + 968) == 0;
  *(_BYTE *)(a1 + 992) = 0;
  v32 = 1;
  if ( !v30 )
  {
LABEL_42:
    if ( v109 )
      std::chrono::_V2::steady_clock::now(v31);
    if ( (unsigned int)sub_180B130(v31) )
    {
      if ( (unsigned __int8)sub_186A530() )
      {
        sub_186A4C0();
        v36 = sub_180B150(v31, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v37 = (_QWORD *)sub_17F35B0(v36, v32);
        std::__ostream_insert<char,std::char_traits<char>>();
        *(_DWORD *)((char *)v37 + *(_QWORD *)(*v37 - 24LL) + 24) = *(_DWORD *)((_BYTE *)v37
                                                                             + *(_QWORD *)(*v37 - 24LL)
                                                                             + 24)
                                                                 & 0xFFFFFEFB
                                                                 | 4;
        v38 = std::ostream::_M_insert<double>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v38, ")\n");
      }
      else
      {
        v46 = sub_180B150(v31, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v47 = (_QWORD *)sub_17F35B0(v46, v32);
        std::__ostream_insert<char,std::char_traits<char>>();
        *(_DWORD *)((char *)v47 + *(_QWORD *)(*v47 - 24LL) + 24) = *(_DWORD *)((_BYTE *)v47
                                                                             + *(_QWORD *)(*v47 - 24LL)
                                                                             + 24)
                                                                 & 0xFFFFFEFB
                                                                 | 4;
        std::ostream::_M_insert<double>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return v32;
}

