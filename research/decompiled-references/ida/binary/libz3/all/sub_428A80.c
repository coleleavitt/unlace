void __fastcall sub_428A80(__int64 a1)
{
  char **v1; // r15
  char **exception; // r15
  char **v3; // r15
  char *v4; // r15
  char *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  char *v10; // rcx
  __m128i si128; // xmm4
  __int64 v12; // rax
  __int64 v13; // r13
  _BYTE *v14; // rax
  const void *v15; // r14
  size_t v16; // rax
  size_t v17; // r13
  void *v18; // rbx
  __int64 v19; // r13
  __int64 v20; // r12
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r12
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // r14
  _QWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 *v37; // rcx
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rcx
  int v45; // edx
  unsigned int v46; // r10d
  __int64 *v47; // rbx
  unsigned int v48; // r8d
  __int64 v49; // r9
  __int64 *v50; // r12
  int v51; // edi
  __int64 v52; // r8
  __int64 *v53; // r10
  __int64 v54; // r11
  __int64 *v55; // rax
  __int64 *v56; // r8
  __int64 v57; // rsi
  __int64 v58; // rax
  unsigned int v59; // r8d
  unsigned int v60; // r9d
  __int64 v61; // rcx
  __int64 *v62; // rbx
  __int64 *v63; // r12
  int v64; // esi
  __int64 v65; // r9
  __int64 *v66; // rdi
  __int64 *v67; // rax
  __int64 *v68; // r8
  __int64 v69; // rcx
  __int64 v70; // rax
  __m128i v71; // xmm2
  bool v72; // zf
  __int64 v73; // rcx
  char *v74; // rbx
  std::ios_base *v75; // rdi
  __int64 v76; // rax
  unsigned int v77; // r12d
  size_t v78; // rsi
  unsigned int *v79; // rax
  __int64 v80; // rcx
  unsigned int v81; // r12d
  size_t v82; // rsi
  unsigned int *v83; // rax
  __int64 v84; // rcx
  unsigned int v85; // r13d
  size_t v86; // rsi
  unsigned int *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r12
  __int64 *v90; // rax
  int v91; // r8d
  char *v92; // rax
  char *v93; // r10
  __int64 v94; // rdx
  __int64 *v95; // rsi
  __int64 *v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rax
  __int64 *v99; // rdx
  __int64 v100; // r12
  __int64 *v101; // rax
  int v102; // r10d
  char *v103; // rax
  char *v104; // r11
  __int64 v105; // rdx
  __int64 *v106; // rsi
  __int64 *v107; // rdx
  __int64 v108; // rsi
  __int64 v109; // rax
  __int64 *v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rbx
  int v113; // eax
  int v114; // eax
  size_t v115; // r13
  void *v116; // rsi
  void *v117; // rbx
  _BYTE *v118; // rax
  __int64 v119; // r12
  unsigned __int64 v120; // rdi
  void *v121; // rax
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  _QWORD *v124; // rax
  size_t v125; // r12
  unsigned __int64 v126; // rdi
  int v127; // [rsp-8h] [rbp-2C8h]
  int v128; // [rsp+0h] [rbp-2C0h]
  int v129; // [rsp+0h] [rbp-2C0h]
  int v130; // [rsp+8h] [rbp-2B8h]
  int v131; // [rsp+8h] [rbp-2B8h]
  int v132; // [rsp+10h] [rbp-2B0h]
  int v133; // [rsp+10h] [rbp-2B0h]
  int v134; // [rsp+10h] [rbp-2B0h]
  int v135; // [rsp+18h] [rbp-2A8h]
  int v136; // [rsp+18h] [rbp-2A8h]
  int v137; // [rsp+18h] [rbp-2A8h]
  unsigned int v138; // [rsp+18h] [rbp-2A8h]
  int v139; // [rsp+18h] [rbp-2A8h]
  __int64 v140; // [rsp+18h] [rbp-2A8h]
  int v141; // [rsp+20h] [rbp-2A0h]
  int v142; // [rsp+20h] [rbp-2A0h]
  int v143; // [rsp+20h] [rbp-2A0h]
  __int64 v144; // [rsp+20h] [rbp-2A0h]
  int v145; // [rsp+20h] [rbp-2A0h]
  size_t v146; // [rsp+20h] [rbp-2A0h]
  unsigned int v147; // [rsp+20h] [rbp-2A0h]
  int v148; // [rsp+28h] [rbp-298h]
  char v149; // [rsp+28h] [rbp-298h]
  size_t v150; // [rsp+28h] [rbp-298h]
  unsigned int v151; // [rsp+28h] [rbp-298h]
  size_t v152; // [rsp+28h] [rbp-298h]
  unsigned int v153; // [rsp+28h] [rbp-298h]
  unsigned int v154; // [rsp+28h] [rbp-298h]
  int v155; // [rsp+30h] [rbp-290h]
  int v156; // [rsp+38h] [rbp-288h]
  int v157; // [rsp+38h] [rbp-288h]
  __int64 v158; // [rsp+38h] [rbp-288h]
  int v159; // [rsp+40h] [rbp-280h]
  __int64 v160; // [rsp+40h] [rbp-280h]
  __m128i v161; // [rsp+48h] [rbp-278h] BYREF
  std::locale *v162; // [rsp+58h] [rbp-268h]
  std::ios_base *v163; // [rsp+60h] [rbp-260h]
  char *v164; // [rsp+68h] [rbp-258h]
  __int64 v165; // [rsp+70h] [rbp-250h]
  __int64 v166; // [rsp+78h] [rbp-248h]
  __int64 v167; // [rsp+80h] [rbp-240h]
  char *v168; // [rsp+88h] [rbp-238h]
  void *dest[2]; // [rsp+90h] [rbp-230h] BYREF
  __m128i v170; // [rsp+A0h] [rbp-220h] BYREF
  int v171; // [rsp+B0h] [rbp-210h]
  __int64 v172; // [rsp+B8h] [rbp-208h]
  void *v173; // [rsp+C0h] [rbp-200h]
  size_t v174; // [rsp+C8h] [rbp-1F8h]
  _QWORD v175[2]; // [rsp+D0h] [rbp-1F0h] BYREF
  __int64 v176[4]; // [rsp+E0h] [rbp-1E0h] BYREF
  char *v177; // [rsp+100h] [rbp-1C0h] BYREF
  __int64 v178; // [rsp+108h] [rbp-1B8h]
  _OWORD v179[2]; // [rsp+110h] [rbp-1B0h]
  void *src[2]; // [rsp+130h] [rbp-190h]
  __int128 v181; // [rsp+140h] [rbp-180h]
  char v182[8]; // [rsp+150h] [rbp-170h] BYREF
  int v183; // [rsp+158h] [rbp-168h]
  void *v184; // [rsp+160h] [rbp-160h]
  size_t n; // [rsp+168h] [rbp-158h]
  _QWORD v186[2]; // [rsp+170h] [rbp-150h] BYREF
  _QWORD v187[28]; // [rsp+180h] [rbp-140h] BYREF
  __int16 v188; // [rsp+260h] [rbp-60h]
  __int128 v189; // [rsp+268h] [rbp-58h]
  __int128 v190; // [rsp+278h] [rbp-48h]

  v170.m128i_i64[0] = a1;
  v161.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 64;
  *(__m128i *)dest = _mm_unpacklo_epi64(
                       (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                               + 64),
                       (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v163 = (std::ios_base *)v187;
  std::ios_base::ios_base((std::ios_base *)v187);
  v188 = 0;
  v4 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v5 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v189 = 0;
  v190 = 0;
  v187[0] = (char *)&`vtable for'std::ios + 16;
  v6 = *((_QWORD *)v4 - 3);
  v187[27] = 0;
  v177 = v4;
  *(char **)((char *)&v177 + v6) = v5;
  v178 = 0;
  v168 = v5;
  std::ios::init();
  v7 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v8 = *(_QWORD *)(v7 - 24);
  *(_QWORD *)&v179[0] = v7;
  v167 = v7;
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *(_QWORD *)((char *)v179 + v8) = v9;
  v166 = v9;
  std::ios::init();
  v10 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)dest);
  v165 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v12 = *(_QWORD *)(v165 - 24);
  v164 = v10;
  *(char **)((char *)&v177 + v12) = v10;
  v179[0] = si128;
  v179[1] = 0;
  v177 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_OWORD *)src = 0;
  v181 = 0;
  v187[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v162 = (std::locale *)v182;
  std::locale::locale((std::locale *)v182);
  v183 = 24;
  LOBYTE(v186[0]) = 0;
  *((_QWORD *)&v179[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v161.m128i_i64[1] = (__int64)v186;
  v184 = v186;
  n = 0;
  std::ios::init();
  v13 = *(_QWORD *)(v170.m128i_i64[0] + 8);
  if ( (v13 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v13 )
      strlen(*(const char **)(v170.m128i_i64[0] + 8));
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  LOBYTE(v175[0]) = 0;
  dest[0] = v175;
  v173 = v175;
  v14 = (_BYTE *)v181;
  v174 = 0;
  if ( !(_QWORD)v181 )
  {
    v115 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v125 = n;
        v126 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v125 = 30;
        v126 = 31;
      }
      v117 = (void *)operator new(v126);
      if ( v173 != dest[0] )
        operator delete(v173, v175[0] + 1LL);
      v173 = v117;
      v116 = v184;
      v175[0] = v125;
    }
    else
    {
      if ( !n )
      {
LABEL_152:
        v118 = dest[0];
LABEL_153:
        v174 = v115;
        v118[v115] = 0;
        goto LABEL_16;
      }
      v116 = v184;
      v117 = dest[0];
      if ( n == 1 )
      {
        LOBYTE(v175[0]) = *(_BYTE *)v184;
        goto LABEL_152;
      }
    }
    memcpy(v117, v116, v115);
    v118 = v173;
    goto LABEL_153;
  }
  v15 = src[1];
  if ( src[0] >= (void *)v181 )
    v14 = src[0];
  if ( !src[0] )
    v14 = (_BYTE *)v181;
  v16 = v14 - (char *)src[1];
  v17 = v16;
  if ( (v16 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v16 > 0xF )
  {
    if ( v16 > 0x1D )
    {
      v119 = v16;
      v120 = v16 + 1;
      if ( (__int64)(v16 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v119 = 30;
      v120 = 31;
    }
    v121 = (void *)operator new(v120);
    v18 = v121;
    if ( v15 )
      memcpy(v121, v15, v17);
    if ( v173 != dest[0] )
      operator delete(v173, v175[0] + 1LL);
    v173 = v18;
    v175[0] = v119;
  }
  else if ( src[1] == dest[0] )
  {
    std::string::_M_replace_cold();
    v18 = v173;
  }
  else
  {
    if ( v16 )
    {
      if ( v16 == 1 )
        LOBYTE(v175[0]) = *(_BYTE *)src[1];
      else
        memcpy(dest[0], src[1], v16);
    }
    v18 = dest[0];
  }
  v174 = v17;
  *((_BYTE *)v18 + v17) = 0;
LABEL_16:
  v19 = *(_QWORD *)v170.m128i_i64[0];
  v20 = *(_QWORD *)(*(_QWORD *)v170.m128i_i64[0] + 840LL);
  sub_180C5A0(v176, v173);
  v23 = sub_15E3D10(
          v19,
          (int)v176,
          (int)&qword_18D6CD0,
          0,
          0,
          v20,
          1,
          v127,
          v128,
          v130,
          v132,
          v135,
          v141,
          v148,
          (char)&v177,
          v156,
          v159,
          v161.m128i_i32[0],
          v161.m128i_i32[2],
          (int)v162,
          (int)v163,
          (int)v164,
          v165,
          v166,
          v167,
          (int)v168,
          (int)dest[0],
          (int)dest[1],
          v170.m128i_i32[0],
          (void *)v170.m128i_i64[1],
          v171,
          v172);
  v24 = *(_QWORD **)(v170.m128i_i64[0] + 56);
  if ( v24 )
  {
    v25 = *((_DWORD *)v24 - 1);
    if ( v25 == *((_DWORD *)v24 - 2) )
    {
      v85 = (3 * v25 + 1) >> 1;
      v86 = 8 * v85 + 8;
      if ( 8 * v25 + 8 >= (unsigned int)v86 || v25 >= v85 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v176, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v176);
        sub_233E40((__int64)v176);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v87 = (unsigned int *)sub_186B300(v24 - 1, v86);
      v88 = v170.m128i_i64[0];
      v24 = v87 + 2;
      *v87 = v85;
      *(_QWORD *)(v88 + 56) = v87 + 2;
      LODWORD(v87) = v87[1];
      v28 = &v24[(unsigned int)v87];
      v27 = (_DWORD)v87 + 1;
    }
    else
    {
      v26 = v25;
      v27 = v25 + 1;
      v28 = &v24[v26];
    }
  }
  else
  {
    v124 = (_QWORD *)sub_186B270(0x18u);
    v24 = v124 + 1;
    *v124 = 2;
    v28 = v124 + 1;
    *(_QWORD *)(v170.m128i_i64[0] + 56) = v124 + 1;
    v27 = 1;
  }
  *v28 = v23;
  *((_DWORD *)v24 - 1) = v27;
  v29 = sub_15DC610(
          *(_QWORD *)v170.m128i_i64[0],
          v23,
          0,
          0,
          v21,
          v22,
          v129,
          v131,
          v133,
          v136,
          v142,
          v149,
          v155,
          v157,
          *(_QWORD *)v170.m128i_i64[0],
          (void *)v161.m128i_i64[0]);
  v30 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  v158 = *(_QWORD *)v170.m128i_i64[0];
  v31 = sub_15E1A70(*(_QWORD *)v170.m128i_i64[0]);
  v32 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  if ( v30 )
    ++*(_DWORD *)(v30 + 8);
  v33 = *(_QWORD **)(v170.m128i_i64[0] + 72);
  if ( v33 )
  {
    v34 = *((_DWORD *)v33 - 1);
    if ( v34 == *((_DWORD *)v33 - 2) )
    {
      v81 = (3 * v34 + 1) >> 1;
      v82 = 8 * v81 + 8;
      if ( 8 * v34 + 8 >= (unsigned int)v82 || v34 >= v81 )
      {
        v1 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v176, "Overflow encountered when expanding vector");
        *v1 = (char *)off_1C63128;
        sub_2333C0(v1 + 1, v176);
        sub_233E40((__int64)v176);
        __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v83 = (unsigned int *)sub_186B300(v33 - 1, v82);
      v84 = v170.m128i_i64[0];
      v33 = v83 + 2;
      *v83 = v81;
      *(_QWORD *)(v84 + 72) = v83 + 2;
      LODWORD(v83) = v83[1];
      v37 = &v33[(unsigned int)v83];
      v36 = (_DWORD)v83 + 1;
    }
    else
    {
      v35 = v34;
      v36 = v34 + 1;
      v37 = &v33[v35];
    }
  }
  else
  {
    v123 = (_QWORD *)sub_186B270(0x18u);
    v33 = v123 + 1;
    *v123 = 2;
    v37 = v123 + 1;
    *(_QWORD *)(v170.m128i_i64[0] + 72) = v123 + 1;
    v36 = 1;
  }
  *v37 = v30;
  *((_DWORD *)v33 - 1) = v36;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v38 = *(_QWORD **)(v170.m128i_i64[0] + 88);
  if ( v38 )
  {
    v39 = *((_DWORD *)v38 - 1);
    if ( v39 == *((_DWORD *)v38 - 2) )
    {
      v77 = (3 * v39 + 1) >> 1;
      v78 = 8 * v77 + 8;
      if ( 8 * v39 + 8 >= (unsigned int)v78 || v39 >= v77 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v176, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v176);
        sub_233E40((__int64)v176);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v79 = (unsigned int *)sub_186B300(v38 - 1, v78);
      v80 = v170.m128i_i64[0];
      v38 = v79 + 2;
      *v79 = v77;
      *(_QWORD *)(v80 + 88) = v79 + 2;
      LODWORD(v79) = v79[1];
      v42 = &v38[(unsigned int)v79];
      v41 = (_DWORD)v79 + 1;
    }
    else
    {
      v40 = v39;
      v41 = v39 + 1;
      v42 = &v38[v40];
    }
  }
  else
  {
    v122 = (_QWORD *)sub_186B270(0x18u);
    v38 = v122 + 1;
    *v122 = 2;
    v42 = v122 + 1;
    *(_QWORD *)(v170.m128i_i64[0] + 88) = v122 + 1;
    v41 = 1;
  }
  v43 = v170.m128i_i64[0];
  *v42 = v32;
  *((_DWORD *)v38 - 1) = v41;
  v44 = *(unsigned int *)(v43 + 104);
  v45 = *(_DWORD *)(v43 + 112);
  v46 = 2 * v44;
  if ( 3 * (int)v44 >= (unsigned int)(4 * (v45 + *(_DWORD *)(v43 + 108))) )
  {
    v47 = *(__int64 **)(v43 + 96);
    v48 = v44 - 1;
    v49 = 8LL * (unsigned int)v44;
    v50 = (__int64 *)((char *)v47 + v49);
    goto LABEL_35;
  }
  v100 = v46;
  v138 = 2 * v44;
  v145 = 2 * v44;
  v152 = 8LL * v46;
  v101 = (__int64 *)sub_186B270(v152);
  v102 = v145;
  v49 = v152;
  v47 = v101;
  v44 = v138;
  if ( v145 )
  {
    v139 = v145;
    v146 = v152;
    v153 = v44;
    memset(v101, 0, 8 * v100);
    v44 = v153;
    v49 = v146;
    v102 = v139;
  }
  v48 = v102 - 1;
  v50 = (__int64 *)((char *)v47 + v49);
  v103 = *(char **)(v170.m128i_i64[0] + 96);
  v104 = &v103[8 * *(unsigned int *)(v170.m128i_i64[0] + 104)];
  if ( v103 != v104 )
  {
    while ( 1 )
    {
      while ( *(_QWORD *)v103 <= 1u )
      {
LABEL_115:
        v103 += 8;
        if ( v104 == v103 )
          goto LABEL_122;
      }
      v105 = 8LL * (*(_DWORD *)(*(_QWORD *)v103 + 12LL) & v48);
      v106 = &v47[(unsigned __int64)v105 / 8];
      if ( v49 == v105 )
      {
LABEL_126:
        if ( v47 == v106 )
        {
LABEL_143:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v110 = v47;
        while ( *v110 )
        {
          if ( v106 == ++v110 )
            goto LABEL_143;
        }
        *v110 = *(_QWORD *)v103;
        goto LABEL_115;
      }
      v107 = &v47[(unsigned __int64)v105 / 8];
      while ( *v107 )
      {
        if ( v50 == ++v107 )
          goto LABEL_126;
      }
      v108 = *(_QWORD *)v103;
      v103 += 8;
      *v107 = v108;
      if ( v104 == v103 )
      {
LABEL_122:
        v104 = *(char **)(v170.m128i_i64[0] + 96);
        break;
      }
    }
  }
  if ( v104 )
  {
    v134 = v102;
    v140 = v49;
    v147 = v102 - 1;
    v154 = v44;
    sub_186B220(v104);
    v102 = v134;
    v49 = v140;
    v48 = v147;
    v44 = v154;
  }
  v109 = v170.m128i_i64[0];
  v45 = 0;
  *(_QWORD *)(v170.m128i_i64[0] + 96) = v47;
  *(_DWORD *)(v109 + 104) = v102;
  *(_DWORD *)(v109 + 112) = 0;
LABEL_35:
  v51 = *(_DWORD *)(v30 + 12);
  v52 = 8LL * (v51 & v48);
  v53 = &v47[(unsigned __int64)v52 / 8];
  if ( v52 == v49 )
  {
    v56 = nullptr;
LABEL_43:
    if ( v53 == v47 )
    {
LABEL_51:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v58 = *v47;
        if ( (unsigned __int64)*v47 <= 1 )
          break;
        if ( *(_DWORD *)(v58 + 12) == v51 && v30 == v58 )
        {
          v114 = *(_DWORD *)(v170.m128i_i64[0] + 108);
          *v47 = v30;
          goto LABEL_52;
        }
        if ( v53 == ++v47 )
          goto LABEL_51;
      }
      if ( !v58 )
        break;
      v56 = v47++;
      if ( v53 == v47 )
        goto LABEL_51;
    }
    if ( v56 )
    {
      --v45;
      v112 = v170.m128i_i64[0];
      *(_DWORD *)(v170.m128i_i64[0] + 112) = v45;
    }
    else
    {
      v56 = v47;
      v112 = v170.m128i_i64[0];
    }
  }
  else
  {
    v54 = v170.m128i_i64[0];
    v55 = &v47[(unsigned __int64)v52 / 8];
    v56 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v57 = *v55;
        if ( (unsigned __int64)*v55 <= 1 )
          break;
        if ( *(_DWORD *)(v57 + 12) == v51 && v30 == v57 )
        {
          *v55 = v30;
          v114 = *(_DWORD *)(v54 + 108);
          v170.m128i_i64[0] = v54;
          goto LABEL_52;
        }
        if ( ++v55 == v50 )
          goto LABEL_43;
      }
      if ( !v57 )
        break;
      v56 = v55++;
      if ( v55 == v50 )
        goto LABEL_43;
    }
    v112 = v170.m128i_i64[0];
    if ( v56 )
      *(_DWORD *)(v170.m128i_i64[0] + 112) = --v45;
    else
      v56 = v55;
  }
  v113 = *(_DWORD *)(v112 + 108);
  *v56 = v30;
  v114 = v113 + 1;
  *(_DWORD *)(v112 + 108) = v114;
LABEL_52:
  v59 = 2 * v44;
  if ( 3 * (int)v44 >= (unsigned int)(4 * (v45 + v114)) )
  {
    v60 = v44 - 1;
    v61 = 8 * v44;
    v62 = *(__int64 **)(v170.m128i_i64[0] + 96);
    v63 = (__int64 *)((char *)v62 + v61);
    goto LABEL_54;
  }
  v89 = v59;
  v143 = 2 * v44;
  v150 = 8LL * v59;
  v90 = (__int64 *)sub_186B270(v150);
  v91 = v143;
  v61 = v150;
  v62 = v90;
  if ( v143 )
  {
    memset(v90, 0, 8 * v89);
    v61 = v150;
    v91 = v143;
  }
  v60 = v91 - 1;
  v63 = (__int64 *)((char *)v62 + v61);
  v92 = *(char **)(v170.m128i_i64[0] + 96);
  v93 = &v92[8 * *(unsigned int *)(v170.m128i_i64[0] + 104)];
  if ( v92 != v93 )
  {
    while ( 1 )
    {
      while ( *(_QWORD *)v92 <= 1u )
      {
LABEL_95:
        v92 += 8;
        if ( v93 == v92 )
          goto LABEL_102;
      }
      v94 = 8LL * (*(_DWORD *)(*(_QWORD *)v92 + 12LL) & v60);
      v95 = &v62[(unsigned __int64)v94 / 8];
      if ( v61 == v94 )
      {
LABEL_106:
        if ( v62 == v95 )
        {
LABEL_142:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v99 = v62;
        while ( *v99 )
        {
          if ( v95 == ++v99 )
            goto LABEL_142;
        }
        *v99 = *(_QWORD *)v92;
        goto LABEL_95;
      }
      v96 = &v62[(unsigned __int64)v94 / 8];
      while ( *v96 )
      {
        if ( v63 == ++v96 )
          goto LABEL_106;
      }
      v97 = *(_QWORD *)v92;
      v92 += 8;
      *v96 = v97;
      if ( v93 == v92 )
      {
LABEL_102:
        v93 = *(char **)(v170.m128i_i64[0] + 96);
        break;
      }
    }
  }
  if ( v93 )
  {
    v137 = v91;
    v144 = v61;
    v151 = v91 - 1;
    sub_186B220(v93);
    v91 = v137;
    v61 = v144;
    v60 = v151;
  }
  v98 = v170.m128i_i64[0];
  v45 = 0;
  *(_QWORD *)(v170.m128i_i64[0] + 96) = v62;
  *(_DWORD *)(v98 + 104) = v91;
  *(_DWORD *)(v98 + 112) = 0;
LABEL_54:
  v64 = *(_DWORD *)(v32 + 12);
  v65 = 8LL * (v64 & v60);
  v66 = &v62[(unsigned __int64)v65 / 8];
  if ( v65 == v61 )
  {
    v68 = nullptr;
LABEL_62:
    if ( v66 == v62 )
    {
LABEL_70:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v70 = *v62;
        if ( (unsigned __int64)*v62 <= 1 )
          break;
        if ( *(_DWORD *)(v70 + 12) == v64 && v32 == v70 )
        {
          *v62 = v32;
          goto LABEL_71;
        }
        if ( v66 == ++v62 )
          goto LABEL_70;
      }
      if ( !v70 )
        break;
      v68 = v62++;
      if ( v66 == v62 )
        goto LABEL_70;
    }
    v111 = v170.m128i_i64[0];
    if ( v68 )
      *(_DWORD *)(v170.m128i_i64[0] + 112) = v45 - 1;
    else
      v68 = v62;
  }
  else
  {
    v67 = &v62[(unsigned __int64)v65 / 8];
    v68 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v69 = *v67;
        if ( (unsigned __int64)*v67 <= 1 )
          break;
        if ( *(_DWORD *)(v69 + 12) == v64 && v32 == v69 )
        {
          *v67 = v32;
          goto LABEL_71;
        }
        if ( ++v67 == v63 )
          goto LABEL_62;
      }
      if ( !v69 )
        break;
      v68 = v67++;
      if ( v67 == v63 )
        goto LABEL_62;
    }
    if ( v68 )
    {
      v111 = v170.m128i_i64[0];
      *(_DWORD *)(v170.m128i_i64[0] + 112) = v45 - 1;
    }
    else
    {
      v68 = v67;
      v111 = v170.m128i_i64[0];
    }
  }
  *v68 = v32;
  ++*(_DWORD *)(v111 + 108);
LABEL_71:
  v71 = _mm_loadl_epi64(&v161);
  v72 = (*(_DWORD *)(v32 + 8))-- == 1;
  v170 = _mm_unpacklo_epi64(v71, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v72 )
    sub_15D7BC0(v158, v32);
  v72 = (*(_DWORD *)(v30 + 8))-- == 1;
  if ( v72 )
    sub_15D7BC0(v160, v30);
  if ( v173 != dest[0] )
    operator delete(v173, v175[0] + 1LL);
  v179[0] = _mm_load_si128(&v170);
  v177 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v187[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v184 != (void *)v161.m128i_i64[1] )
    operator delete(v184, v186[0] + 1LL);
  *((_QWORD *)&v179[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v162);
  v73 = v166;
  v74 = v168;
  *(char **)((char *)&v177 + *(_QWORD *)(v165 - 24)) = v164;
  v75 = v163;
  *(_QWORD *)&v179[0] = v167;
  *(_QWORD *)((char *)v179 + *(_QWORD *)(v167 - 24)) = v73;
  v76 = *((_QWORD *)v4 - 3);
  v177 = v4;
  *(char **)((char *)&v177 + v76) = v74;
  v178 = 0;
  v187[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v75);
}

