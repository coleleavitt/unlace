void __fastcall sub_5DFE70(__int64 a1, _DWORD *a2, int a3)
{
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  char **v6; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ebp
  unsigned int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r15
  __int64 v19; // rbx
  _QWORD *v20; // r12
  _QWORD *v21; // rax
  __int64 v22; // rsi
  int v23; // eax
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  unsigned int v29; // ecx
  size_t v30; // rsi
  _DWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __m128i v40; // xmm1
  __int64 v41; // rax
  __int64 v42; // rax
  _BYTE *v43; // rax
  size_t v44; // rax
  size_t v45; // r8
  _QWORD *v46; // r15
  _QWORD *v47; // rdx
  unsigned int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  _QWORD *v51; // rcx
  unsigned int v52; // eax
  _QWORD *v53; // r15
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // r9d
  char *v58; // rbx
  unsigned int v59; // r8d
  __int64 v60; // rcx
  char *v61; // r15
  __int64 v62; // r8
  char *v63; // rsi
  __m128i v64; // xmm0
  char *v65; // rax
  char *v66; // rcx
  int v67; // edx
  __int64 v68; // rdi
  int v69; // eax
  __int64 v70; // rax
  unsigned int v71; // ebx
  unsigned int v72; // ecx
  unsigned int *v73; // rax
  __int64 v74; // rcx
  unsigned int v75; // ebx
  unsigned int v76; // edx
  __int64 v77; // rax
  __int64 v78; // rcx
  char *v79; // rdx
  __int64 v80; // rsi
  unsigned __int64 v81; // rax
  __int64 v82; // rsi
  unsigned int v83; // ebx
  unsigned int v84; // ecx
  unsigned int *v85; // rax
  __int64 v86; // r15
  char *v87; // rax
  int v88; // r9d
  char *v89; // rdx
  char *v90; // rax
  _DWORD *v91; // rax
  _DWORD *v92; // r11
  __int64 v93; // rdx
  char *v94; // rsi
  char *v95; // rdx
  __int64 v96; // rsi
  __int64 v97; // rax
  size_t v98; // rdx
  _QWORD *v99; // rax
  unsigned __int64 v100; // rdi
  _QWORD *v101; // rax
  const void *v102; // rsi
  unsigned __int64 v103; // rdi
  __int64 v104; // rax
  _QWORD *v105; // r15
  void *v106; // rsi
  _QWORD *v107; // rdx
  _QWORD *v108; // rax
  __m128i v110; // [rsp+10h] [rbp-288h] BYREF
  std::ios_base *v111; // [rsp+20h] [rbp-278h]
  __int64 *v112; // [rsp+28h] [rbp-270h]
  __int64 v113; // [rsp+30h] [rbp-268h]
  __int64 v114; // [rsp+38h] [rbp-260h]
  char *v115; // [rsp+40h] [rbp-258h]
  __int64 v116; // [rsp+48h] [rbp-250h]
  __int64 v117; // [rsp+50h] [rbp-248h]
  __int64 v118; // [rsp+58h] [rbp-240h]
  __int64 v119; // [rsp+60h] [rbp-238h]
  std::locale *v120; // [rsp+68h] [rbp-230h]
  __int64 v121; // [rsp+70h] [rbp-228h]
  _DWORD *v122; // [rsp+78h] [rbp-220h]
  __m128i v123; // [rsp+80h] [rbp-218h] BYREF
  size_t v124; // [rsp+90h] [rbp-208h]
  size_t n; // [rsp+98h] [rbp-200h]
  char v126[8]; // [rsp+A8h] [rbp-1F0h] BYREF
  void *v127; // [rsp+B0h] [rbp-1E8h] BYREF
  size_t v128; // [rsp+B8h] [rbp-1E0h]
  _QWORD dest[2]; // [rsp+C0h] [rbp-1D8h] BYREF
  __int64 v130; // [rsp+D0h] [rbp-1C8h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-1C0h]
  _OWORD v132[2]; // [rsp+E0h] [rbp-1B8h]
  void *src[2]; // [rsp+100h] [rbp-198h]
  __int128 v134; // [rsp+110h] [rbp-188h]
  char v135[8]; // [rsp+120h] [rbp-178h] BYREF
  int v136; // [rsp+128h] [rbp-170h]
  void *v137; // [rsp+130h] [rbp-168h]
  size_t v138; // [rsp+138h] [rbp-160h]
  _QWORD v139[2]; // [rsp+140h] [rbp-158h] BYREF
  _QWORD v140[28]; // [rsp+150h] [rbp-148h] BYREF
  __int16 v141; // [rsp+230h] [rbp-68h]
  __int128 v142; // [rsp+238h] [rbp-60h]
  __int128 v143; // [rsp+248h] [rbp-50h]

  v9 = *(unsigned int *)(a1 + 128);
  v10 = *(_QWORD *)(a1 + 120);
  v11 = (((a3 - (_DWORD)a2) ^ ((_DWORD)a2 << 8) ^ (((_DWORD)a2 - ((a3 - (_DWORD)a2) ^ ((_DWORD)a2 << 8))) << 16))
       + ((a3 - (_DWORD)a2) ^ ((_DWORD)a2 << 8))
       - (_DWORD)a2)
      ^ (((_DWORD)a2 - ((a3 - (_DWORD)a2) ^ ((_DWORD)a2 << 8))) << 10);
  v12 = v9 - 1;
  v9 *= 32;
  v13 = v10 + v9;
  v14 = 32LL * (v11 & v12);
  v15 = v10 + v14;
  if ( v14 != v9 )
  {
    v16 = v10 + v14;
    do
    {
      v17 = *(_DWORD *)(v16 + 4);
      if ( v17 == 2 )
      {
        if ( v11 == *(_DWORD *)v16 && a2 == *(_DWORD **)(v16 + 8) && a3 == *(_DWORD *)(v16 + 16) )
          return;
      }
      else if ( !v17 )
      {
        goto LABEL_11;
      }
      v16 += 32;
    }
    while ( v13 != v16 );
  }
  for ( ; v15 != v10; v10 += 32 )
  {
    v28 = *(_DWORD *)(v10 + 4);
    if ( v28 == 2 )
    {
      if ( v11 == *(_DWORD *)v10 && a2 == *(_DWORD **)(v10 + 8) && a3 == *(_DWORD *)(v10 + 16) )
        return;
    }
    else if ( !v28 )
    {
      break;
    }
  }
LABEL_11:
  v18 = (unsigned int)a2[8];
  v122 = a2 + 4;
  LODWORD(v121) = v18 - 1;
  if ( (_DWORD)v18 )
  {
    v19 = 0;
    v20 = nullptr;
    while ( a3 == (_DWORD)v19 )
    {
LABEL_32:
      if ( ++v19 == v18 )
        goto LABEL_33;
    }
    if ( !v20 )
    {
      v21 = (_QWORD *)sub_186B270(0x18u);
      v22 = v19;
      v20 = v21 + 1;
      *v21 = 2;
      v23 = 1;
      v24 = v20;
      goto LABEL_16;
    }
    while ( 1 )
    {
      v26 = *((_DWORD *)v20 - 1);
      if ( v26 == *((_DWORD *)v20 - 2) )
      {
        v29 = (3 * v26 + 1) >> 1;
        v30 = 8 * v29 + 8;
        if ( 8 * v26 + 8 >= (unsigned int)v30 || v26 >= v29 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v130, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v130);
          sub_233E40((__int64)&v130);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v111) = (3 * v26 + 1) >> 1;
        v31 = (_DWORD *)sub_186B300(v20 - 1, v30);
        v32 = (unsigned int)v31[1];
        v20 = v31 + 2;
        v22 = v19;
        *v31 = (_DWORD)v111;
        v24 = &v31[2 * v32 + 2];
        v23 = v32 + 1;
      }
      else
      {
        v27 = v26;
        v22 = v19;
        v23 = v26 + 1;
        v24 = &v20[v27];
      }
LABEL_16:
      v25 = *(_QWORD *)&a2[2 * v19++ + 12];
      *v24 = v25;
      *((_DWORD *)v20 - 1) = v23;
      if ( v18 == v19 )
        break;
      if ( a3 == (_DWORD)v19 )
      {
        v19 = v22 + 2;
        if ( v22 + 2 == v18 )
          break;
        if ( a3 == (_DWORD)v19 )
          goto LABEL_32;
      }
    }
  }
  else
  {
    v20 = nullptr;
  }
LABEL_33:
  v123.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                    + 64;
  v111 = (std::ios_base *)v140;
  v112 = &v130;
  v110 = _mm_unpacklo_epi64(
           (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64),
           (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v140);
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v33 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v34 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v140[0] = (char *)&`vtable for'std::ios + 16;
  v140[27] = 0;
  v35 = *(_QWORD *)(v33 - 24);
  v130 = v33;
  v114 = v34;
  *(__int64 *)((char *)&v130 + v35) = v34;
  v131 = 0;
  v113 = v33;
  std::ios::init();
  v36 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v37 = *(_QWORD *)(v36 - 24);
  *(_QWORD *)&v132[0] = v36;
  v116 = v36;
  v38 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *(_QWORD *)((char *)v132 + v37) = v38;
  v117 = v38;
  std::ios::init();
  v39 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v40 = _mm_load_si128(&v110);
  v118 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v41 = *(_QWORD *)(v118 - 24);
  v119 = v39;
  *(__int64 *)((char *)&v130 + v41) = v39;
  v132[0] = v40;
  v132[1] = 0;
  v130 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_OWORD *)src = 0;
  v134 = 0;
  v140[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v120 = (std::locale *)v135;
  std::locale::locale((std::locale *)v135);
  v136 = 24;
  LOBYTE(v139[0]) = 0;
  *((_QWORD *)&v132[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v123.m128i_i64[1] = (__int64)v139;
  v137 = v139;
  v138 = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  v42 = *(_QWORD *)(a1 + 24);
  v128 = 0;
  v127 = dest;
  v110.m128i_i64[0] = v42;
  v43 = (_BYTE *)v134;
  LOBYTE(dest[0]) = 0;
  if ( (_QWORD)v134 )
  {
    if ( src[0] >= (void *)v134 )
      v43 = src[0];
    if ( !src[0] )
      v43 = (_BYTE *)v134;
    v44 = v43 - (char *)src[1];
    v45 = v44;
    if ( (v44 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_replace");
    if ( v44 > 0xF )
    {
      if ( v44 <= 0x1D )
      {
        v115 = (_BYTE *)(&qword_18 + 6);
        v100 = 31;
      }
      else
      {
        v115 = (char *)v44;
        v100 = v44 + 1;
        if ( (__int64)(v44 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      n = v44;
      v124 = (size_t)src[1];
      v101 = (_QWORD *)operator new(v100);
      v102 = (const void *)v124;
      v45 = n;
      v46 = v101;
      if ( v124 )
      {
        v124 = n;
        memcpy(v101, v102, n);
        v45 = v124;
      }
      if ( v127 != dest )
      {
        v124 = v45;
        operator delete(v127, dest[0] + 1LL);
        v45 = v124;
      }
      v127 = v46;
      dest[0] = v115;
    }
    else if ( src[1] == dest )
    {
      v115 = (char *)v44;
      std::string::_M_replace_cold();
      v45 = (size_t)v115;
      v46 = v127;
    }
    else
    {
      if ( v44 )
      {
        if ( v44 == 1 )
        {
          LOBYTE(dest[0]) = *(_BYTE *)src[1];
        }
        else
        {
          v115 = (char *)v44;
          memcpy(dest, src[1], v44);
          v45 = (size_t)v115;
        }
      }
      v46 = dest;
    }
    v128 = v45;
    *((_BYTE *)v46 + v45) = 0;
    goto LABEL_44;
  }
  v98 = v138;
  if ( v138 > 0xF )
  {
    if ( (v138 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v138 > 0x1D )
    {
      v115 = (char *)v138;
      v103 = v138 + 1;
      if ( (__int64)(v138 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v115 = (_BYTE *)(&qword_18 + 6);
      v103 = 31;
    }
    v124 = v138;
    v104 = operator new(v103);
    v98 = v124;
    v105 = (_QWORD *)v104;
    if ( v127 != dest )
    {
      operator delete(v127, dest[0] + 1LL);
      v98 = v124;
    }
    v127 = v105;
    v106 = v137;
    dest[0] = v115;
    goto LABEL_144;
  }
  if ( v138 )
  {
    v106 = v137;
    v105 = dest;
    if ( v138 == 1 )
    {
      LOBYTE(dest[0]) = *(_BYTE *)v137;
      goto LABEL_128;
    }
LABEL_144:
    v115 = (char *)v98;
    memcpy(v105, v106, v98);
    v99 = v127;
    v98 = (size_t)v115;
    goto LABEL_129;
  }
LABEL_128:
  v99 = dest;
LABEL_129:
  v128 = v98;
  *((_BYTE *)v99 + v98) = 0;
LABEL_44:
  v115 = v126;
  sub_180C5A0(v126, v127);
  v110.m128i_i64[0] = sub_651680(v110.m128i_i64[0], v122, v115, (unsigned int)v121, v20, a2);
  if ( v127 != dest )
    operator delete(v127, dest[0] + 1LL);
  if ( v110.m128i_i64[0] )
    ++*(_DWORD *)(v110.m128i_i64[0] + 8);
  v47 = *(_QWORD **)(a1 + 200);
  if ( v47 )
  {
    v48 = *((_DWORD *)v47 - 1);
    if ( v48 == *((_DWORD *)v47 - 2) )
    {
      v71 = (3 * v48 + 1) >> 1;
      v72 = 8 * v71 + 8;
      if ( 8 * v48 + 8 >= v72 || v48 >= v71 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v127, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, &v127);
        sub_233E40((__int64)&v127);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v73 = (unsigned int *)sub_186B300(v47 - 1, v72);
      v74 = v73[1];
      v47 = v73 + 2;
      *v73 = v71;
      *(_QWORD *)(a1 + 200) = v73 + 2;
      LODWORD(v73) = v74;
      v51 = &v47[v74];
      v50 = (_DWORD)v73 + 1;
    }
    else
    {
      v49 = v48;
      v50 = v48 + 1;
      v51 = &v47[v49];
    }
  }
  else
  {
    v107 = (_QWORD *)sub_186B270(0x18u);
    *v107 = 2;
    v50 = 1;
    v47 = v107 + 1;
    *(_QWORD *)(a1 + 200) = v47;
    v51 = v47;
  }
  *v51 = v110.m128i_i64[0];
  *((_DWORD *)v47 - 1) = v50;
  ++a2[2];
  v52 = *((_DWORD *)v47 - 1);
  if ( v52 == *((_DWORD *)v47 - 2) )
  {
    v83 = (3 * v52 + 1) >> 1;
    v84 = 8 * v83 + 8;
    if ( 8 * v52 + 8 >= v84 || v52 >= v83 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v127, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, &v127);
      sub_233E40((__int64)&v127);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v85 = (unsigned int *)sub_186B300(v47 - 1, v84);
    v47 = v85 + 2;
    *v85 = v83;
    v52 = v85[1];
    *(_QWORD *)(a1 + 200) = v47;
  }
  v53 = *(_QWORD **)(a1 + 72);
  v47[v52] = a2;
  *((_DWORD *)v47 - 1) = v52 + 1;
  if ( v53 )
  {
    v54 = *((unsigned int *)v53 - 1);
    if ( (_DWORD)v54 == *((_DWORD *)v53 - 2) )
    {
      v75 = (unsigned int)(3 * v54 + 1) >> 1;
      v76 = 16 * v75 + 8;
      if ( 16 * (int)v54 + 8 >= v76 || (unsigned int)v54 >= v75 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v127, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, &v127);
        sub_233E40((__int64)&v127);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v77 = sub_186B270(v76);
      v78 = *(_QWORD *)(a1 + 72);
      v79 = (char *)v77;
      v53 = (_QWORD *)(v77 + 8);
      if ( v78 )
      {
        v80 = *(unsigned int *)(v78 - 4);
        *(_DWORD *)(v77 + 4) = v80;
        v81 = 0;
        v82 = 16 * v80;
        if ( v82 )
        {
          do
          {
            *(__m128i *)&v79[v81 + 8] = _mm_loadu_si128((const __m128i *)(v78 + v81));
            v81 += 16LL;
          }
          while ( v82 != v81 );
        }
        v115 = v79;
        sub_186B220((void *)(v78 - 8));
        v79 = v115;
        v55 = &v53[2 * *((unsigned int *)v115 + 1)];
      }
      else
      {
        *(_DWORD *)(v77 + 4) = 0;
        v55 = (_QWORD *)(v77 + 8);
      }
      *(_QWORD *)(a1 + 72) = v53;
      *(_DWORD *)v79 = v75;
    }
    else
    {
      v55 = &v53[2 * v54];
    }
  }
  else
  {
    v108 = (_QWORD *)sub_186B270(0x28u);
    *v108 = 2;
    v53 = v108 + 1;
    *(_QWORD *)(a1 + 72) = v108 + 1;
    v55 = v108 + 1;
  }
  *v55 = a2;
  *((_DWORD *)v55 + 2) = a3;
  ++*((_DWORD *)v53 - 1);
  v56 = *(unsigned int *)(a1 + 128);
  v57 = 2 * v56;
  if ( 3 * (int)v56 < (unsigned int)(4 * (*(_DWORD *)(a1 + 132) + *(_DWORD *)(a1 + 136))) )
  {
    v86 = v57;
    LODWORD(v121) = 2 * v56;
    v115 = (char *)(32LL * v57);
    v87 = (char *)sub_186B270((size_t)v115);
    v88 = v121;
    v60 = (__int64)v115;
    v58 = v87;
    v89 = &v87[32 * v86];
    if ( (_DWORD)v121 )
    {
      do
      {
        *(_QWORD *)v87 = 0;
        v87 += 32;
        *((_QWORD *)v87 - 3) = 0;
      }
      while ( v89 != v87 );
      v90 = v58;
      if ( (((_BYTE)v89 - (_BYTE)v58) & 0x20) == 0 || (v90 = v58 + 32, *((_DWORD *)v58 + 4) = 0, v89 != v58 + 32) )
      {
        do
        {
          *((_DWORD *)v90 + 4) = 0;
          v90 += 64;
          *((_DWORD *)v90 - 4) = 0;
        }
        while ( v89 != v90 );
      }
    }
    v91 = *(_DWORD **)(a1 + 120);
    v59 = v88 - 1;
    v61 = &v58[v60];
    v92 = &v91[8 * *(unsigned int *)(a1 + 128)];
    if ( v91 != v92 )
    {
      do
      {
        while ( v91[1] != 2 )
        {
          v91 += 8;
          if ( v92 == v91 )
            goto LABEL_111;
        }
        v93 = 32LL * (*v91 & v59);
        v94 = &v58[v93];
        if ( v60 == v93 )
        {
LABEL_119:
          if ( v58 == v94 )
          {
LABEL_145:
            LODWORD(n) = v88;
            v124 = (size_t)v92;
            v122 = v91;
            v121 = v60;
            LODWORD(v115) = v88 - 1;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v95 = v58;
          while ( *((_DWORD *)v95 + 1) )
          {
            v95 += 32;
            if ( v94 == v95 )
              goto LABEL_145;
          }
        }
        else
        {
          v95 = &v58[v93];
          while ( *((_DWORD *)v95 + 1) )
          {
            v95 += 32;
            if ( v61 == v95 )
              goto LABEL_119;
          }
        }
        v96 = *((_QWORD *)v91 + 1);
        *(_DWORD *)v95 = *v91;
        v91 += 8;
        *((_DWORD *)v95 + 1) = 2;
        *((_QWORD *)v95 + 1) = v96;
        *((_DWORD *)v95 + 4) = *(v91 - 4);
        *((_QWORD *)v95 + 3) = *((_QWORD *)v91 - 1);
      }
      while ( v92 != v91 );
LABEL_111:
      v92 = *(_DWORD **)(a1 + 120);
    }
    if ( v92 )
    {
      LODWORD(v122) = v88;
      v121 = v60;
      LODWORD(v115) = v88 - 1;
      sub_186B220(v92);
      v88 = (int)v122;
      v60 = v121;
      v59 = (unsigned int)v115;
    }
    *(_QWORD *)(a1 + 120) = v58;
    *(_DWORD *)(a1 + 128) = v88;
    *(_DWORD *)(a1 + 136) = 0;
  }
  else
  {
    v58 = *(char **)(a1 + 120);
    v59 = v56 - 1;
    v60 = 32 * v56;
    v61 = &v58[v60];
  }
  v62 = 32LL * (v11 & v59);
  v63 = &v58[v62];
  v64 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v123), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v60 == v62 )
  {
    v66 = nullptr;
LABEL_74:
    if ( v58 == v63 )
    {
LABEL_118:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v69 = *((_DWORD *)v58 + 1);
      if ( v69 == 2 )
      {
        if ( v11 == *(_DWORD *)v58 && a2 == *((_DWORD **)v58 + 1) && a3 == *((_DWORD *)v58 + 4) )
        {
          v70 = v110.m128i_i64[0];
          *((_DWORD *)v58 + 1) = 2;
          *((_QWORD *)v58 + 3) = v70;
          goto LABEL_67;
        }
      }
      else
      {
        if ( !v69 )
        {
          if ( !v66 )
          {
            v66 = v58;
            goto LABEL_117;
          }
LABEL_116:
          --*(_DWORD *)(a1 + 136);
          goto LABEL_117;
        }
        v66 = v58;
      }
      v58 += 32;
      if ( v63 == v58 )
        goto LABEL_118;
    }
  }
  v65 = &v58[v62];
  v66 = nullptr;
  while ( 1 )
  {
    v67 = *((_DWORD *)v65 + 1);
    if ( v67 != 2 )
      break;
    if ( v11 == *(_DWORD *)v65 && a2 == *((_DWORD **)v65 + 1) && a3 == *((_DWORD *)v65 + 4) )
    {
      v68 = v110.m128i_i64[0];
      *((_DWORD *)v65 + 1) = 2;
      *((_QWORD *)v65 + 3) = v68;
      goto LABEL_67;
    }
LABEL_61:
    v65 += 32;
    if ( v61 == v65 )
      goto LABEL_74;
  }
  if ( v67 )
  {
    v66 = v65;
    goto LABEL_61;
  }
  if ( v66 )
    goto LABEL_116;
  v66 = v65;
LABEL_117:
  *((_QWORD *)v66 + 1) = a2;
  *((_DWORD *)v66 + 4) = a3;
  v97 = v110.m128i_i64[0];
  *((_DWORD *)v66 + 1) = 2;
  *((_QWORD *)v66 + 3) = v97;
  *(_DWORD *)v66 = v11;
  ++*(_DWORD *)(a1 + 132);
LABEL_67:
  v132[0] = v64;
  v130 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v140[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v137 != (void *)v123.m128i_i64[1] )
    operator delete(v137, v139[0] + 1LL);
  *((_QWORD *)&v132[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v120);
  *(__int64 *)((char *)&v130 + *(_QWORD *)(v118 - 24)) = v119;
  *(_QWORD *)&v132[0] = v116;
  *(_QWORD *)((char *)v132 + *(_QWORD *)(v116 - 24)) = v117;
  v130 = v113;
  *(__int64 *)((char *)&v130 + *(_QWORD *)(v113 - 24)) = v114;
  v131 = 0;
  v140[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v111);
  if ( v20 )
    sub_186B220(v20 - 1);
}

