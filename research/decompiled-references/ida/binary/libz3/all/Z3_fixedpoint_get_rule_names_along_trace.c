__int64 __fastcall Z3_fixedpoint_get_rule_names_along_trace(_QWORD *a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rbp
  _QWORD *v4; // r12
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128i si128; // xmm4
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  unsigned int v21; // ebx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  _BYTE *v25; // rax
  const void *v26; // r12
  size_t v27; // rax
  void *v28; // rbp
  _QWORD *v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rdx
  std::ios_base *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 *v35; // rbp
  unsigned __int64 v36; // r12
  __int64 v37; // rsi
  void *v40; // rbp
  void *v41; // rsi
  _QWORD *v42; // r12
  _QWORD *v43; // rax
  __int64 v44; // rbx
  unsigned __int64 v45; // rdi
  _QWORD *v46; // rax
  size_t v47; // rbx
  unsigned __int64 v48; // rdi
  int v49; // [rsp+0h] [rbp-288h]
  int v50; // [rsp+0h] [rbp-288h]
  void *v52; // [rsp+8h] [rbp-280h]
  std::locale *v53[2]; // [rsp+10h] [rbp-278h] BYREF
  int v54[2]; // [rsp+20h] [rbp-268h]
  int v55; // [rsp+28h] [rbp-260h]
  char v56; // [rsp+2Fh] [rbp-259h]
  int v57[2]; // [rsp+30h] [rbp-258h]
  int v58[2]; // [rsp+38h] [rbp-250h]
  int v59[2]; // [rsp+40h] [rbp-248h]
  int v60[2]; // [rsp+48h] [rbp-240h]
  int v61[4]; // [rsp+50h] [rbp-238h] BYREF
  std::ios_base *v62; // [rsp+60h] [rbp-228h]
  int v63[2]; // [rsp+68h] [rbp-220h]
  int v64[2]; // [rsp+70h] [rbp-218h]
  int v65[2]; // [rsp+78h] [rbp-210h]
  int v66[2]; // [rsp+80h] [rbp-208h] BYREF
  __int64 v67; // [rsp+88h] [rbp-200h] BYREF
  int v68[2]; // [rsp+90h] [rbp-1F8h] BYREF
  int v69[2]; // [rsp+98h] [rbp-1F0h]
  void *p_dest; // [rsp+A0h] [rbp-1E8h] BYREF
  void *v71; // [rsp+A8h] [rbp-1E0h]
  size_t dest; // [rsp+B0h] [rbp-1D8h] BYREF
  __int64 v73; // [rsp+B8h] [rbp-1D0h]
  int v74[2]; // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v75; // [rsp+C8h] [rbp-1C0h]
  __m128i v76; // [rsp+D0h] [rbp-1B8h] BYREF
  __int128 v77; // [rsp+E0h] [rbp-1A8h]
  void *src[2]; // [rsp+F0h] [rbp-198h]
  __int128 v79; // [rsp+100h] [rbp-188h]
  int v80[4]; // [rsp+110h] [rbp-178h] BYREF
  void *v81; // [rsp+120h] [rbp-168h]
  size_t n; // [rsp+128h] [rbp-160h]
  int v83[2]; // [rsp+130h] [rbp-158h] BYREF
  int v84[2]; // [rsp+140h] [rbp-148h] BYREF
  __int64 v85; // [rsp+218h] [rbp-70h]
  __int16 v86; // [rsp+220h] [rbp-68h]
  __int128 v87; // [rsp+228h] [rbp-60h]
  __int128 v88; // [rsp+238h] [rbp-50h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v56 = v2;
  if ( v2 )
    sub_2A1ED0(a1);
  v3 = a1[29];
  v4 = (_QWORD *)sub_186B270(0x28u);
  *(_QWORD *)v61 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 64;
  *(__m128i *)v53 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  sub_2518F0((__int64)v4, (__int64)a1);
  v4[3] = v3;
  *v4 = &off_1C4CA20;
  v4[4] = 0;
  sub_24FBE0((__int64)a1, (__int64)v4);
  *(_QWORD *)v68 = v3;
  *(_QWORD *)v65 = v74;
  *(_QWORD *)v69 = 0;
  *(_QWORD *)v66 = 0;
  v62 = (std::ios_base *)v84;
  std::ios_base::ios_base((std::ios_base *)v84);
  v86 = 0;
  v5 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v87 = 0;
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v88 = 0;
  *(_QWORD *)v84 = (char *)&`vtable for'std::ios + 16;
  v7 = *(_QWORD *)(v5 - 24);
  v85 = 0;
  *(_QWORD *)v74 = v5;
  *(_QWORD *)((char *)v74 + v7) = v6;
  v75 = 0;
  *(_QWORD *)v54 = v6;
  std::ios::init();
  v8 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v9 = *(_QWORD *)(v8 - 24);
  v76.m128i_i64[0] = v8;
  *(_QWORD *)v57 = v8;
  v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *(__int64 *)((char *)v76.m128i_i64 + v9) = v10;
  *(_QWORD *)v58 = v10;
  std::ios::init();
  v11 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v53);
  *(_QWORD *)v59 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v13 = *(_QWORD *)(*(_QWORD *)v59 - 24LL);
  *(_QWORD *)v60 = v11;
  *(_QWORD *)((char *)v74 + v13) = v11;
  v76 = si128;
  v77 = 0;
  *(_QWORD *)v74 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_OWORD *)src = 0;
  v79 = 0;
  *(_QWORD *)v84 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v53[0] = (std::locale *)v80;
  std::locale::locale((std::locale *)v80);
  v80[2] = 24;
  LOBYTE(v83[0]) = 0;
  v76.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
  *(_QWORD *)v63 = v83;
  v81 = v83;
  n = 0;
  std::ios::init();
  v14 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)v64 = v68;
  sub_6546E0(v14 + 48, (unsigned int)v68, (unsigned int)v66, v15, v16, v17);
  if ( *(_QWORD *)v66 )
  {
    v21 = 0;
    if ( *(_DWORD *)(*(_QWORD *)v66 - 4LL) )
    {
      sub_180CE20(
        (int)&p_dest,
        v66[0],
        0,
        v18,
        v19,
        v20,
        v49,
        a1,
        (int)v53[0],
        (__int64)v53[1],
        v54[0],
        v55,
        v57[0],
        v58[0],
        v59[0],
        v60[0],
        v61[0],
        v61[2],
        (int)v62,
        v63[0],
        v64[0],
        v65[0],
        v66[0],
        v67,
        v68[0],
        v69[0],
        (int)p_dest,
        v71,
        dest,
        v73);
      while ( 1 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( p_dest != &dest )
          operator delete(p_dest, dest + 1);
        ++v21;
        if ( !*(_QWORD *)v66 || v21 >= *(_DWORD *)(*(_QWORD *)v66 - 4LL) )
          break;
        LOBYTE(p_dest) = 59;
        if ( *(void **)((char *)&src[-2] + *(_QWORD *)(v76.m128i_i64[0] - 24)) )
          std::__ostream_insert<char,std::char_traits<char>>();
        else
          std::ostream::put((std::ostream *)&v76, 59);
        sub_180CE20(
          (int)&p_dest,
          v66[0] + 8 * v21,
          v21,
          v22,
          v23,
          v24,
          v50,
          v52,
          (int)v53[0],
          (__int64)v53[1],
          v54[0],
          v55,
          v57[0],
          v58[0],
          v59[0],
          v60[0],
          v61[0],
          v61[2],
          (int)v62,
          v63[0],
          v64[0],
          v65[0],
          v66[0],
          v67,
          v68[0],
          v69[0],
          (int)p_dest,
          v71,
          dest,
          v73);
      }
    }
  }
  v25 = (_BYTE *)v79;
  p_dest = &dest;
  v71 = nullptr;
  LOBYTE(dest) = 0;
  if ( (_QWORD)v79 )
  {
    v26 = src[1];
    if ( src[0] >= (void *)v79 )
      v25 = src[0];
    if ( !src[0] )
      v25 = (_BYTE *)v79;
    v27 = v25 - (char *)src[1];
    v28 = (void *)v27;
    if ( (v27 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_replace");
    if ( v27 > 0xF )
    {
      if ( v27 > 0x1D )
      {
        v44 = v27;
        v45 = v27 + 1;
        if ( (__int64)(v27 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v44 = 30;
        v45 = 31;
      }
      v46 = (_QWORD *)operator new(v45);
      v29 = v46;
      if ( v26 )
        memcpy(v46, v26, (size_t)v28);
      if ( p_dest != &dest )
        operator delete(p_dest, dest + 1);
      p_dest = v29;
      dest = v44;
    }
    else if ( src[1] == &dest )
    {
      std::string::_M_replace_cold();
      v29 = p_dest;
    }
    else
    {
      if ( v27 )
      {
        if ( v27 == 1 )
          LOBYTE(dest) = *(_BYTE *)src[1];
        else
          memcpy(&dest, src[1], v27);
      }
      v29 = &dest;
    }
    v71 = v28;
    *((_BYTE *)v28 + (_QWORD)v29) = 0;
    goto LABEL_24;
  }
  v40 = (void *)n;
  if ( n > 0xF )
  {
    if ( (n & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( n > 0x1D )
    {
      v47 = n;
      v48 = n + 1;
      if ( (__int64)(n + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v47 = 30;
      v48 = 31;
    }
    v42 = (_QWORD *)operator new(v48);
    if ( p_dest != &dest )
      operator delete(p_dest, dest + 1);
    p_dest = v42;
    v41 = v81;
    dest = v47;
    goto LABEL_67;
  }
  if ( n )
  {
    v41 = v81;
    v42 = &dest;
    if ( n == 1 )
    {
      LOBYTE(dest) = *(_BYTE *)v81;
      goto LABEL_50;
    }
LABEL_67:
    memcpy(v42, v41, (size_t)v40);
    v43 = p_dest;
    goto LABEL_51;
  }
LABEL_50:
  v43 = &dest;
LABEL_51:
  v71 = v40;
  *((_BYTE *)v40 + (_QWORD)v43) = 0;
LABEL_24:
  *(__m128i *)v61 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)v61),
                      (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_180C5A0(&v67, p_dest);
  v30 = v67;
  if ( p_dest != &dest )
    operator delete(p_dest, dest + 1);
  v76 = _mm_load_si128((const __m128i *)v61);
  *(_QWORD *)v74 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_QWORD *)v84 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v81 != *(void **)v63 )
    operator delete(v81, *(_QWORD *)v83 + 1LL);
  v76.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v53[0]);
  v31 = *(_QWORD *)v58;
  v32 = v62;
  *(_QWORD *)((char *)v74 + *(_QWORD *)(*(_QWORD *)v59 - 24LL)) = *(_QWORD *)v60;
  v33 = *(_QWORD *)v54;
  v76.m128i_i64[0] = *(_QWORD *)v57;
  *(__int64 *)((char *)v76.m128i_i64 + *(_QWORD *)(*(_QWORD *)v57 - 24LL)) = v31;
  v34 = *(_QWORD *)(v5 - 24);
  *(_QWORD *)v74 = v5;
  *(_QWORD *)((char *)v74 + v34) = v33;
  v75 = 0;
  *(_QWORD *)v84 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v32);
  if ( *(_QWORD *)v66 )
    sub_186B220((void *)(*(_QWORD *)v66 - 8LL));
  v35 = *(__int64 **)v69;
  if ( *(_QWORD *)v69 )
  {
    v36 = *(_QWORD *)v69 + 8LL * *(unsigned int *)(*(_QWORD *)v69 - 4LL);
    if ( *(_QWORD *)v69 >= v36 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v37 = *v35;
        if ( *v35 )
        {
          if ( (*(_DWORD *)(v37 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v35 >= v36 )
          goto LABEL_37;
      }
      sub_15D7BC0(*(_QWORD *)v68, v37);
      ++v35;
    }
    while ( (unsigned __int64)v35 < v36 );
LABEL_37:
    v35 = *(__int64 **)v69;
    if ( *(_QWORD *)v69 )
LABEL_38:
      sub_186B220(v35 - 1);
  }
  if ( v56 )
    byte_1C7EBA0 = 1;
  return v30;
}

