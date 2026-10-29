void __fastcall sub_B811F0(__int64 a1, __int64 a2)
{
  char *v3; // r12
  char *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rax
  char *v12; // rcx
  __int64 v13; // rdx
  std::ostream *v14; // rdi
  __int64 v15; // rax
  _BYTE *v16; // rdx
  _QWORD *v17; // rcx
  size_t v18; // rdx
  size_t v19; // rbp
  __int64 v20; // rbp
  char v21; // dl
  __int64 v22; // rax
  char v23; // dl
  __int64 v24; // r14
  _QWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 *v29; // rsi
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r8d
  size_t v34; // rsi
  _DWORD *v35; // rax
  __int64 v36; // rcx
  int v37; // r8d
  __int64 v38; // r14
  unsigned __int64 v39; // rdi
  void *v40; // rax
  void *v41; // rcx
  size_t v42; // r14
  unsigned __int64 v43; // rdi
  void *v44; // rsi
  _QWORD *v45; // rax
  char **exception; // r12
  __int64 *v47; // rbx
  __int64 *v48; // rsi
  std::ios_base *v49; // [rsp+0h] [rbp-288h]
  char *v50; // [rsp+10h] [rbp-278h]
  __int64 v51; // [rsp+18h] [rbp-270h]
  char *v52; // [rsp+20h] [rbp-268h]
  __m128i v53; // [rsp+30h] [rbp-258h] BYREF
  void *v54; // [rsp+40h] [rbp-248h]
  __int64 v55; // [rsp+48h] [rbp-240h]
  __int64 *v56; // [rsp+50h] [rbp-238h]
  char **v57; // [rsp+58h] [rbp-230h]
  char v58; // [rsp+6Fh] [rbp-219h]
  _QWORD *v59; // [rsp+70h] [rbp-218h] BYREF
  size_t v60; // [rsp+78h] [rbp-210h]
  _QWORD dest[2]; // [rsp+80h] [rbp-208h] BYREF
  _BYTE v62[16]; // [rsp+90h] [rbp-1F8h] BYREF
  char v63[32]; // [rsp+A0h] [rbp-1E8h] BYREF
  char *v64; // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v65; // [rsp+C8h] [rbp-1C0h]
  _OWORD v66[2]; // [rsp+D0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+F0h] [rbp-198h]
  __int128 v68; // [rsp+100h] [rbp-188h]
  char v69[8]; // [rsp+110h] [rbp-178h] BYREF
  int v70; // [rsp+118h] [rbp-170h]
  void *v71; // [rsp+120h] [rbp-168h] BYREF
  size_t n; // [rsp+128h] [rbp-160h]
  char v73; // [rsp+130h] [rbp-158h] BYREF
  char v74[8]; // [rsp+140h] [rbp-148h] BYREF
  __int64 v75; // [rsp+218h] [rbp-70h]
  __int16 v76; // [rsp+220h] [rbp-68h]
  __int128 v77; // [rsp+228h] [rbp-60h]
  __int128 v78; // [rsp+238h] [rbp-50h]

  if ( *(_BYTE *)(a1 + 1418) )
    return;
  v57 = &v64;
  std::ios_base::ios_base((std::ios_base *)v74);
  v75 = 0;
  v3 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v77 = 0;
  v76 = 0;
  v4 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v78 = 0;
  v5 = *((_QWORD *)v3 - 3);
  *(_QWORD *)v74 = (char *)&`vtable for'std::ios + 16;
  v64 = v3;
  *(char **)((char *)&v64 + v5) = v4;
  v65 = 0;
  v50 = v4;
  std::ios::init();
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v7 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v66[0] = v6;
  v8 = (_QWORD *)((char *)v66 + v7);
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *v8 = v9;
  v51 = v9;
  std::ios::init();
  v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v11 = *(_QWORD *)(v10 - 24);
  v12 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v53.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  *(char **)((char *)&v64 + v11) = v12;
  v64 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_QWORD *)v74 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v52 = v12;
  v66[0] = _mm_unpacklo_epi64(
             (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                     + 64),
             (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v66[1] = 0;
  *(_OWORD *)src = 0;
  v68 = 0;
  std::locale::locale((std::locale *)v69);
  v70 = 24;
  v73 = 0;
  *((_QWORD *)&v66[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v71 = &v73;
  n = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  v13 = *(_QWORD *)(a1 + 24);
  v56 = (__int64 *)v62;
  sub_1606360(v62, a2, v13, 0, 0, 0);
  v14 = (std::ostream *)sub_160E8B0(v66, v62);
  v15 = *(_QWORD *)v14;
  v58 = 10;
  if ( *(_QWORD *)((char *)v14 + *(_QWORD *)(v15 - 24) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v14, 10);
  sub_18572D0(v63);
  v16 = (_BYTE *)v68;
  v17 = dest;
  v60 = 0;
  v59 = dest;
  LOBYTE(dest[0]) = 0;
  if ( (_QWORD)v68 )
  {
    if ( src[0] >= (void *)v68 )
      v16 = src[0];
    if ( !src[0] )
      v16 = (_BYTE *)v68;
    v18 = v16 - (char *)src[1];
    v19 = v18;
    if ( (v18 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_replace");
    if ( v18 > 0xF )
    {
      if ( v18 <= 0x1D )
      {
        v38 = 30;
        v39 = 31;
      }
      else
      {
        v38 = v18;
        v39 = v18 + 1;
        if ( (__int64)(v18 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      v54 = src[1];
      v40 = (void *)operator new(v39);
      v41 = v40;
      if ( v54 )
        v41 = memcpy(v40, v54, v19);
      v54 = v41;
      sub_233E40((__int64)&v59);
      v17 = v54;
      dest[0] = v38;
      v59 = v54;
      goto LABEL_13;
    }
    if ( src[1] != dest )
    {
      if ( v18 )
      {
        if ( v18 == 1 )
          LOBYTE(dest[0]) = *(_BYTE *)src[1];
        else
          v17 = memcpy(dest, src[1], v18);
      }
      goto LABEL_13;
    }
    std::string::_M_replace_cold();
  }
  else
  {
    v19 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v42 = n;
        v43 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v42 = 30;
        v43 = 31;
      }
      v54 = (void *)operator new(v43);
      sub_233E40((__int64)&v59);
      v17 = v54;
      dest[0] = v42;
      v44 = v71;
      v59 = v54;
    }
    else
    {
      if ( !n )
        goto LABEL_13;
      v44 = v71;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v71;
        goto LABEL_13;
      }
    }
    memcpy(v17, v44, v19);
  }
  v17 = v59;
LABEL_13:
  v60 = v19;
  *((_BYTE *)v17 + v19) = 0;
  sub_1875640("%s", (char)v74);
  v20 = *(_QWORD *)(a1 + 16);
  v21 = *(_BYTE *)(a1 + 1418);
  v55 = a1 + 1418;
  LOBYTE(v54) = v21;
  v22 = sub_180C100(v20 + 8400, 24);
  v23 = (char)v54;
  v24 = v22;
  *(_QWORD *)v22 = off_1C54EE8;
  *(_BYTE *)(v22 + 16) = v23;
  v25 = *(_QWORD **)(v20 + 9456);
  *(_QWORD *)(v22 + 8) = a1 + 1418;
  if ( v25 )
  {
    v26 = *((_DWORD *)v25 - 1);
    if ( v26 == *((_DWORD *)v25 - 2) )
    {
      v33 = (3 * v26 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v26 + 8 >= (unsigned int)v34 || v26 >= v33 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B75C60(v56, "Overflow encountered when expanding vector");
        v47 = v56;
        v48 = v56;
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v48);
        sub_233E40((__int64)v47);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v54) = (3 * v26 + 1) >> 1;
      v35 = (_DWORD *)sub_186B300(v25 - 1, v34);
      v36 = (unsigned int)v35[1];
      v37 = (int)v54;
      v25 = v35 + 2;
      *(_QWORD *)(v20 + 9456) = v35 + 2;
      *v35 = v37;
      v29 = (__int64 *)&v35[2 * v36 + 2];
      v28 = v36 + 1;
    }
    else
    {
      v27 = v26;
      v28 = v26 + 1;
      v29 = &v25[v27];
    }
  }
  else
  {
    v45 = (_QWORD *)sub_186B270(0x18u);
    v25 = v45 + 1;
    *v45 = 2;
    v28 = 1;
    *(_QWORD *)(v20 + 9456) = v25;
    v29 = v25;
  }
  v30 = _mm_loadl_epi64(&v53);
  *v29 = v24;
  *((_DWORD *)v25 - 1) = v28;
  *(_BYTE *)(a1 + 1418) = 1;
  v53 = _mm_unpacklo_epi64(v30, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_233E40((__int64)&v59);
  v66[0] = _mm_load_si128(&v53);
  v64 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_QWORD *)v74 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  sub_233E40((__int64)&v71);
  *((_QWORD *)&v66[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v69);
  *(char **)((char *)&v64 + *(_QWORD *)(v10 - 24)) = v52;
  v31 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v66[0] = v6;
  *(_QWORD *)((char *)v66 + v31) = v51;
  v32 = *((_QWORD *)v3 - 3);
  v64 = v3;
  *(char **)((char *)&v64 + v32) = v50;
  v65 = 0;
  *(_QWORD *)v74 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v49);
}

