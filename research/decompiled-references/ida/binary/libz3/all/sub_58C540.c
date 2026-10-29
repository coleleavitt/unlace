__int64 __fastcall sub_58C540(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // r12
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, __int64 *); // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rsi
  int v12; // r9d
  __int64 v13; // rax
  _QWORD *v14; // rbx
  char *v15; // rbp
  char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __m128i v22; // xmm1
  __int64 v23; // rax
  _BYTE *v24; // rax
  char *v25; // rax
  void *v26; // r8
  _QWORD *v27; // r14
  int v28; // r14d
  int v29; // eax
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // r14
  unsigned int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  __int64 *v37; // rcx
  _QWORD *v38; // rdi
  __m128i v39; // xmm0
  __m128i si128; // xmm0
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // ecx
  int v44; // r9d
  __int64 v45; // rdx
  __int64 v46; // rbp
  __int64 v47; // rdi
  int v48; // ecx
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 result; // rax
  __int64 v59; // r14
  __int64 *v60; // r12
  unsigned __int64 v61; // r13
  __int64 v62; // rsi
  __int64 v63; // rsi
  __int64 v64; // rdi
  unsigned int v65; // ecx
  size_t v66; // rsi
  _DWORD *v67; // rax
  __int64 v68; // rdx
  void *v69; // rdx
  void *v70; // rsi
  _QWORD *v71; // r14
  _QWORD *v72; // rax
  unsigned __int64 v73; // rdi
  _QWORD *v74; // rax
  void *v75; // rsi
  _QWORD *v76; // rax
  unsigned __int64 v77; // rdi
  __int64 v78; // rax
  int v79; // [rsp+0h] [rbp-528h]
  int v80; // [rsp+0h] [rbp-528h]
  __int64 v81; // [rsp+8h] [rbp-520h]
  __int64 v82; // [rsp+8h] [rbp-520h]
  std::ios_base *v83; // [rsp+10h] [rbp-518h]
  int v84; // [rsp+10h] [rbp-518h]
  int v85[2]; // [rsp+18h] [rbp-510h]
  int v86; // [rsp+18h] [rbp-510h]
  int v87; // [rsp+18h] [rbp-510h]
  int v88[2]; // [rsp+20h] [rbp-508h]
  int v89; // [rsp+20h] [rbp-508h]
  int v90; // [rsp+20h] [rbp-508h]
  char v91[8]; // [rsp+28h] [rbp-500h]
  char v92[8]; // [rsp+28h] [rbp-500h]
  int v93; // [rsp+28h] [rbp-500h]
  __int64 v94; // [rsp+30h] [rbp-4F8h]
  __int64 v95; // [rsp+30h] [rbp-4F8h]
  __int64 v96; // [rsp+30h] [rbp-4F8h]
  std::locale *v97; // [rsp+38h] [rbp-4F0h]
  std::locale *v98; // [rsp+38h] [rbp-4F0h]
  int v99[4]; // [rsp+40h] [rbp-4E8h] BYREF
  __int64 v100; // [rsp+50h] [rbp-4D8h]
  _QWORD *v101; // [rsp+58h] [rbp-4D0h]
  __int64 v102; // [rsp+60h] [rbp-4C8h]
  int v103[2]; // [rsp+68h] [rbp-4C0h]
  __m128i v104; // [rsp+70h] [rbp-4B8h] BYREF
  __m128i v105; // [rsp+80h] [rbp-4A8h] BYREF
  int v106[2]; // [rsp+90h] [rbp-498h]
  __int64 v107; // [rsp+98h] [rbp-490h]
  void *v108; // [rsp+A0h] [rbp-488h]
  size_t n; // [rsp+A8h] [rbp-480h]
  __int64 v110; // [rsp+B0h] [rbp-478h]
  __int64 v111; // [rsp+B8h] [rbp-470h]
  char v112[8]; // [rsp+C8h] [rbp-460h] BYREF
  int v113[2]; // [rsp+D0h] [rbp-458h] BYREF
  __int64 v114; // [rsp+D8h] [rbp-450h]
  __int64 v115; // [rsp+E0h] [rbp-448h]
  void *v116; // [rsp+F0h] [rbp-438h]
  void *v117; // [rsp+F8h] [rbp-430h]
  _QWORD dest[2]; // [rsp+100h] [rbp-428h] BYREF
  __int64 v119[4]; // [rsp+110h] [rbp-418h] BYREF
  char *v120; // [rsp+130h] [rbp-3F8h] BYREF
  __int64 v121; // [rsp+138h] [rbp-3F0h]
  __m128i v122; // [rsp+140h] [rbp-3E8h] BYREF
  __int128 v123; // [rsp+150h] [rbp-3D8h]
  void *src[2]; // [rsp+160h] [rbp-3C8h]
  __int128 v125; // [rsp+170h] [rbp-3B8h]
  char ptr[8]; // [rsp+180h] [rbp-3A8h] BYREF
  int v127; // [rsp+188h] [rbp-3A0h]
  void *v128; // [rsp+190h] [rbp-398h]
  char *v129; // [rsp+198h] [rbp-390h]
  _QWORD v130[2]; // [rsp+1A0h] [rbp-388h] BYREF
  int v131[2]; // [rsp+1B0h] [rbp-378h] BYREF
  __int64 v132; // [rsp+288h] [rbp-2A0h]
  __int16 v133; // [rsp+290h] [rbp-298h]
  __int128 v134; // [rsp+298h] [rbp-290h]
  __int128 v135; // [rsp+2A8h] [rbp-280h]
  _QWORD v136[20]; // [rsp+2C0h] [rbp-268h] BYREF
  __int64 v137; // [rsp+360h] [rbp-1C8h]
  int *v138; // [rsp+368h] [rbp-1C0h] BYREF
  int *v139; // [rsp+408h] [rbp-120h] BYREF
  __int64 v140; // [rsp+4A0h] [rbp-88h]
  __int64 v141; // [rsp+4A8h] [rbp-80h]
  __int64 v142; // [rsp+4B0h] [rbp-78h]
  __int64 v143; // [rsp+4B8h] [rbp-70h]
  __int64 v144; // [rsp+4C0h] [rbp-68h]
  __int64 v145; // [rsp+4C8h] [rbp-60h]
  __int64 v146; // [rsp+4D0h] [rbp-58h]
  _BYTE v147[80]; // [rsp+4D8h] [rbp-50h] BYREF

  v5 = *(_QWORD *)(a1 + 40);
  v102 = a1;
  v111 = v5;
  *(_QWORD *)v113 = 0;
  v114 = v5;
  v105.m128i_i64[1] = sub_15E1B70(v5);
  v105.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 64;
  v104 = _mm_unpacklo_epi64(
           (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64),
           (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  if ( v105.m128i_i64[1] )
    ++*(_DWORD *)(v105.m128i_i64[1] + 8);
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a3 + 144LL);
  if ( v6 == sub_586990 )
  {
    v7 = *(_QWORD *)v113;
    v8 = a3[6];
    if ( *(_QWORD *)v113 != v8 )
    {
      if ( *(_QWORD *)v113 )
      {
        v9 = v114;
        v10 = (*(_DWORD *)(*(_QWORD *)v113 + 8LL))-- == 1;
        if ( v10 )
        {
          sub_15D7BC0(v9, v7);
          v8 = a3[6];
        }
      }
      *(_QWORD *)v113 = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
    }
  }
  else
  {
    v6((__int64)a3, (__int64 *)v113);
  }
  v11 = *(_QWORD *)(v102 + 40);
  *(_QWORD *)v106 = v136;
  v107 = v11;
  v115 = v11;
  sub_633760(v136, v11, 0, v147);
  v147[8] = 0;
  v136[0] = &off_1C4CA80;
  v13 = a3[2];
  if ( !v13 )
  {
    *(_QWORD *)v103 = &v120;
    goto LABEL_99;
  }
  HIDWORD(v81) = 0;
  v14 = nullptr;
  *(_QWORD *)v103 = &v120;
  v83 = (std::ios_base *)v131;
  while ( HIDWORD(v81) < *(_DWORD *)(v13 - 4) )
  {
    std::ios_base::ios_base(v83);
    v133 = 0;
    v15 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
    v134 = 0;
    v16 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
    v135 = 0;
    *(_QWORD *)v131 = (char *)&`vtable for'std::ios + 16;
    v17 = *((_QWORD *)v15 - 3);
    v132 = 0;
    v120 = v15;
    *(char **)((char *)&v120 + v17) = v16;
    v121 = 0;
    v86 = (int)v16;
    std::ios::init();
    v18 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
    v19 = *(_QWORD *)(v18 - 24);
    v122.m128i_i64[0] = v18;
    v20 = (__int64 *)((char *)v122.m128i_i64 + v19);
    v21 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
    *v20 = v21;
    v89 = v21;
    std::ios::init();
    v22 = _mm_load_si128(&v104);
    *(_QWORD *)v92 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
    v95 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
    *(char **)((char *)&v120 + *(_QWORD *)(*(_QWORD *)v92 - 24LL)) = (char *)v95;
    v122 = v22;
    v123 = 0;
    v120 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
    *(_OWORD *)src = 0;
    v125 = 0;
    *(_QWORD *)v131 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 104;
    std::locale::locale((std::locale *)ptr);
    v127 = 24;
    LOBYTE(v130[0]) = 0;
    v122.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
    v101 = v130;
    v128 = v130;
    v129 = nullptr;
    std::ios::init();
    LOBYTE(v119[0]) = 120;
    if ( *(void **)((char *)&src[-2] + *(_QWORD *)(v122.m128i_i64[0] - 24)) )
      std::__ostream_insert<char,std::char_traits<char>>();
    else
      std::ostream::put((std::ostream *)&v122, 120);
    std::ostream::_M_insert<unsigned long>();
    *(_QWORD *)v99 = *(_QWORD *)(v102 + 40);
    v23 = *(_QWORD *)(a3[2] + 8LL * HIDWORD(v81));
    v117 = nullptr;
    v116 = dest;
    v100 = v23;
    v24 = (_BYTE *)v125;
    LOBYTE(dest[0]) = 0;
    if ( (_QWORD)v125 )
    {
      if ( src[0] >= (void *)v125 )
        v24 = src[0];
      if ( !src[0] )
        v24 = (_BYTE *)v125;
      v25 = (char *)(v24 - (char *)src[1]);
      v26 = v25;
      if ( (__int64)v25 < 0 )
        std::__throw_length_error("basic_string::_M_replace");
      if ( (unsigned __int64)v25 > 0xF )
      {
        if ( (unsigned __int64)v25 > 0x1D )
        {
          v73 = (unsigned __int64)(v25 + 1);
          if ( (__int64)(v25 + 1) < 0 )
            std::__throw_bad_alloc();
          v110 = (__int64)v25;
        }
        else
        {
          v110 = 30;
          v73 = 31;
        }
        n = (size_t)v25;
        v108 = src[1];
        v74 = (_QWORD *)operator new(v73);
        v75 = v108;
        v26 = (void *)n;
        v27 = v74;
        if ( v108 )
        {
          v108 = (void *)n;
          memcpy(v74, v75, n);
          v26 = v108;
        }
        if ( v116 != dest )
        {
          v108 = v26;
          operator delete(v116, dest[0] + 1LL);
          v26 = v108;
        }
        v116 = v27;
        dest[0] = v110;
      }
      else if ( src[1] == dest )
      {
        v108 = v25;
        std::string::_M_replace_cold();
        v26 = v108;
        v27 = v116;
      }
      else
      {
        if ( v25 )
        {
          if ( v25 == (_BYTE *)&dword_0 + 1 )
          {
            LOBYTE(dest[0]) = *(_BYTE *)src[1];
          }
          else
          {
            v108 = v25;
            memcpy(dest, src[1], (size_t)v25);
            v26 = v108;
          }
        }
        v27 = dest;
      }
      v117 = v26;
      *((_BYTE *)v26 + (_QWORD)v27) = 0;
      goto LABEL_26;
    }
    v69 = v129;
    if ( (unsigned __int64)v129 > 0xF )
    {
      if ( (__int64)v129 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      if ( (unsigned __int64)v129 <= 0x1D )
      {
        v108 = &qword_18 + 6;
        v77 = 31;
      }
      else
      {
        v77 = (unsigned __int64)(v129 + 1);
        if ( (__int64)(v129 + 1) < 0 )
          std::__throw_bad_alloc();
        v108 = v129;
      }
      n = (size_t)v129;
      v78 = operator new(v77);
      v69 = (void *)n;
      v71 = (_QWORD *)v78;
      if ( v116 != dest )
      {
        operator delete(v116, dest[0] + 1LL);
        v69 = (void *)n;
      }
      v116 = v71;
      v70 = v128;
      dest[0] = v108;
LABEL_109:
      v108 = v69;
      memcpy(v71, v70, (size_t)v69);
      v72 = v116;
      v69 = v108;
      goto LABEL_85;
    }
    if ( v129 )
    {
      v70 = v128;
      v71 = dest;
      if ( v129 != (_BYTE *)&dword_0 + 1 )
        goto LABEL_109;
      LOBYTE(dest[0]) = *(_BYTE *)v128;
    }
    v72 = dest;
LABEL_85:
    v117 = v69;
    *((_BYTE *)v69 + (_QWORD)v72) = 0;
LABEL_26:
    sub_180C5A0(v112, v116);
    v28 = v99[0];
    v29 = sub_15E3510(*(_QWORD *)v99, v112, 0, 0, v100, 0);
    v32 = sub_15DC610(
            v28,
            v29,
            0,
            0,
            v30,
            v31,
            v79,
            v81,
            (int)v83,
            v86,
            v89,
            v92[0],
            v95,
            (int)ptr,
            v99[0],
            *(void **)&v99[2]);
    v33 = v32;
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    if ( v14 )
    {
      v34 = *((_DWORD *)v14 - 1);
      if ( v34 == *((_DWORD *)v14 - 2) )
      {
        v65 = (3 * v34 + 1) >> 1;
        v66 = 8 * v65 + 8;
        if ( 8 * v34 + 8 >= (unsigned int)v66 || v34 >= v65 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v119, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v119);
          sub_233E40((__int64)v119);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v99[0] = (3 * v34 + 1) >> 1;
        v67 = (_DWORD *)sub_186B300(v14 - 1, v66);
        v68 = (unsigned int)v67[1];
        v14 = v67 + 2;
        *v67 = v99[0];
        v37 = (__int64 *)&v67[2 * v68 + 2];
        v36 = v68 + 1;
      }
      else
      {
        v35 = v34;
        v36 = v34 + 1;
        v37 = &v14[v35];
      }
    }
    else
    {
      v76 = (_QWORD *)sub_186B270(0x18u);
      v14 = v76 + 1;
      *v76 = 2;
      v36 = 1;
      v37 = v14;
    }
    v38 = v116;
    *v37 = v33;
    v39 = _mm_loadl_epi64(&v105);
    *((_DWORD *)v14 - 1) = v36;
    si128 = _mm_unpacklo_epi64(v39, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
    if ( v38 != dest )
    {
      *(__m128i *)v99 = si128;
      operator delete(v38, dest[0] + 1LL);
      si128 = _mm_load_si128((const __m128i *)v99);
    }
    v122 = si128;
    v120 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
    *(_QWORD *)v131 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 104;
    if ( v128 != v101 )
      operator delete(v128, v130[0] + 1LL);
    v122.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
    std::locale::~locale(v97);
    *(char **)((char *)&v120 + *(_QWORD *)(*(_QWORD *)v91 - 24LL)) = (char *)v94;
    v41 = *(_QWORD *)(v18 - 24);
    v122.m128i_i64[0] = v18;
    *(__int64 *)((char *)v122.m128i_i64 + v41) = *(_QWORD *)v88;
    v42 = *((_QWORD *)v15 - 3);
    v120 = v15;
    *(char **)((char *)&v120 + v42) = *(char **)v85;
    v121 = 0;
    *(_QWORD *)v131 = (char *)&`vtable for'std::ios + 16;
    std::ios_base::~ios_base(v83);
    v13 = a3[2];
    ++HIDWORD(v81);
    if ( !v13 )
      goto LABEL_36;
  }
  if ( v14 )
  {
LABEL_36:
    v43 = *((_DWORD *)v14 - 1);
    goto LABEL_37;
  }
LABEL_99:
  v14 = nullptr;
  v43 = 0;
LABEL_37:
  sub_157BE40(
    v103[0],
    v106[0],
    v105.m128i_i32[2],
    v43,
    (int)v14,
    v12,
    v79,
    v81,
    (int)v83,
    v85[0],
    v88[0],
    *(int *)v91,
    v94,
    v97);
  v45 = v105.m128i_i64[1];
  v46 = (__int64)v120;
  v120 = (char *)v105.m128i_i64[1];
  if ( v105.m128i_i64[1]
    && (v47 = v121,
        HIDWORD(v82) = *(_DWORD *)(v105.m128i_i64[1] + 8),
        *(_DWORD *)(v105.m128i_i64[1] + 8) = HIDWORD(v82) - 1,
        HIDWORD(v82) == 1) )
  {
    sub_15D7BC0(v47, v45);
    if ( !v14 )
      goto LABEL_78;
LABEL_40:
    v48 = *((_DWORD *)v14 - 1);
  }
  else
  {
    if ( v14 )
      goto LABEL_40;
LABEL_78:
    v48 = 0;
  }
  sub_157BE40(v103[0], v106[0], v113[0], v48, (int)v14, v44, v80, v82, v84, v87, v90, v93, v96, v98);
  v49 = *(_QWORD *)v113;
  v50 = (__int64)v120;
  v120 = *(char **)v113;
  *(_QWORD *)v113 = v50;
  if ( v120 )
  {
    v51 = v121;
    v10 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v10 )
    {
      sub_15D7BC0(v51, v49);
      v50 = *(_QWORD *)v113;
    }
  }
  sub_5875C0(v102, "filter", v46, v50);
  v136[0] = &off_1C4CA60;
  if ( v146 )
    sub_186B220((void *)(v146 - 8));
  v52 = v144;
  if ( v144 )
  {
    v53 = v145;
    v10 = (*(_DWORD *)(v144 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v53, v52);
  }
  v54 = v142;
  if ( v142 )
  {
    v55 = v143;
    v10 = (*(_DWORD *)(v142 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v55, v54);
  }
  v56 = v140;
  if ( v140 )
  {
    v57 = v141;
    v10 = (*(_DWORD *)(v140 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v57, v56);
  }
  v139 = &qword_1C637E8;
  sub_15841B0(&v139);
  v138 = &qword_1C637E8;
  sub_15841B0(&v138);
  if ( v137 )
    sub_186B220((void *)(v137 - 8));
  result = sub_15841B0(*(_QWORD *)v106);
  if ( v14 )
  {
    v59 = v107;
    v60 = v14;
    v61 = (unsigned __int64)&v14[*((unsigned int *)v14 - 1)];
    if ( (unsigned __int64)v14 < v61 )
    {
      do
      {
        while ( 1 )
        {
          v62 = *v60;
          if ( *v60 )
          {
            v10 = (*(_DWORD *)(v62 + 8))-- == 1;
            if ( v10 )
              break;
          }
          if ( (unsigned __int64)++v60 >= v61 )
            goto LABEL_64;
        }
        ++v60;
        sub_15D7BC0(v59, v62);
      }
      while ( (unsigned __int64)v60 < v61 );
    }
LABEL_64:
    result = sub_186B220(v14 - 1);
  }
  v63 = *(_QWORD *)v113;
  if ( *(_QWORD *)v113 )
  {
    v64 = v114;
    v10 = (*(_DWORD *)(*(_QWORD *)v113 + 8LL))-- == 1;
    if ( v10 )
      result = sub_15D7BC0(v64, v63);
  }
  if ( v46 )
  {
    v10 = (*(_DWORD *)(v46 + 8))-- == 1;
    if ( v10 )
      return sub_15D7BC0(v111, v46);
  }
  return result;
}

