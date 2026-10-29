void __fastcall sub_E373D0(__int64 a1, __int64 a2, __int64 a3, int a4, double a5)
{
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rcx
  std::ios_base **v11; // rdi
  std::ios_base *v12; // rcx
  __int64 v13; // r14
  __m128i si128; // xmm1
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  _BYTE *v18; // rax
  __int64 v19; // rax
  void *v20; // r8
  void *v21; // rbx
  __m128i v22; // xmm0
  std::ios_base *v23; // rcx
  std::ios_base *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  std::locale *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  char *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  std::ios_base *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rdx
  std::ios_base *v37; // rdx
  _QWORD *v38; // rbx
  _QWORD *v39; // r13
  __int64 *v40; // rbx
  __int64 *v41; // r14
  __int64 v42; // r13
  _QWORD *v43; // rdi
  __int64 (__fastcall *v44)(__int64); // rax
  _QWORD *v45; // rdi
  __int64 (__fastcall *v46)(__int64); // rdx
  double v47; // xmm0_8
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // rdi
  __int64 (__fastcall *v53)(double); // rax
  __int64 v54; // rdi
  void *v55; // rdx
  void *v56; // rsi
  void *v57; // rbx
  void *v58; // rax
  unsigned __int64 v59; // rdi
  void *v60; // rax
  const void *v61; // rsi
  unsigned __int64 v62; // rdi
  std::ios_base *v63[2]; // [rsp+0h] [rbp-318h] BYREF
  int v64; // [rsp+10h] [rbp-308h]
  int v65[2]; // [rsp+18h] [rbp-300h]
  void *dest[2]; // [rsp+20h] [rbp-2F8h] BYREF
  int v67[2]; // [rsp+30h] [rbp-2E8h]
  std::ios_base *v68; // [rsp+38h] [rbp-2E0h]
  int v69[2]; // [rsp+40h] [rbp-2D8h]
  std::locale *v70; // [rsp+48h] [rbp-2D0h]
  __m128i v71; // [rsp+50h] [rbp-2C8h] BYREF
  int v72[2]; // [rsp+60h] [rbp-2B8h]
  int v73; // [rsp+68h] [rbp-2B0h]
  int v74; // [rsp+6Ch] [rbp-2ACh]
  int v75[2]; // [rsp+70h] [rbp-2A8h]
  __int64 v76; // [rsp+78h] [rbp-2A0h]
  size_t v77; // [rsp+80h] [rbp-298h]
  size_t n; // [rsp+88h] [rbp-290h]
  void *v79; // [rsp+90h] [rbp-288h]
  void *v80; // [rsp+98h] [rbp-280h]
  int v81[2]; // [rsp+A0h] [rbp-278h] BYREF
  int v82[4]; // [rsp+B0h] [rbp-268h] BYREF
  _BYTE v83[32]; // [rsp+C0h] [rbp-258h] BYREF
  int v84[4]; // [rsp+E0h] [rbp-238h] BYREF
  _OWORD v85[2]; // [rsp+F0h] [rbp-228h] BYREF
  void *src[2]; // [rsp+110h] [rbp-208h]
  __int128 v87; // [rsp+120h] [rbp-1F8h] BYREF
  _BYTE v88[8]; // [rsp+130h] [rbp-1E8h] BYREF
  int v89; // [rsp+138h] [rbp-1E0h]
  void *v90; // [rsp+140h] [rbp-1D8h]
  __int64 v91; // [rsp+148h] [rbp-1D0h]
  int v92[2]; // [rsp+150h] [rbp-1C8h] BYREF
  _QWORD v93[15]; // [rsp+160h] [rbp-1B8h] BYREF
  int v94[2]; // [rsp+1D8h] [rbp-140h] BYREF
  char v95; // [rsp+1F8h] [rbp-120h]
  __int64 v96; // [rsp+238h] [rbp-E0h]
  __int16 v97; // [rsp+240h] [rbp-D8h]
  __int128 v98; // [rsp+248h] [rbp-D0h]
  __int128 v99; // [rsp+258h] [rbp-C0h]
  __int64 v100; // [rsp+2B0h] [rbp-68h]
  __int16 v101; // [rsp+2B8h] [rbp-60h]
  __int128 v102; // [rsp+2C0h] [rbp-58h]
  __int128 v103; // [rsp+2D0h] [rbp-48h]

  v74 = a4;
  v71.m128i_i64[1] = a2;
  v71.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  *(double *)v75 = a5;
  *(_QWORD *)v72 = a3;
  v63[0] = (std::ios_base *)v93;
  *(__m128i *)dest = _mm_unpacklo_epi64(
                       (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                               + 64),
                       (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v93);
  v96 = 0;
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v98 = 0;
  v97 = 0;
  v7 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v99 = 0;
  v93[0] = (char *)&`vtable for'std::ios + 16;
  v8 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)v84 = v6;
  *(_QWORD *)v65 = v7;
  *(_QWORD *)((char *)v84 + v8) = v7;
  *(_QWORD *)&v84[2] = 0;
  std::ios::init();
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v10 = *(_QWORD *)(v9 - 24);
  *(_QWORD *)&v85[0] = v9;
  v11 = (std::ios_base **)((char *)v85 + v10);
  v12 = (std::ios_base *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *v11 = v12;
  v68 = v12;
  std::ios::init();
  v13 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)dest);
  v15 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL);
  *(_QWORD *)v69 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  *(_QWORD *)((char *)v84 + v15) = v13;
  v85[0] = si128;
  *(_QWORD *)v84 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v93[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v70 = (std::locale *)v88;
  v85[1] = 0;
  *(_OWORD *)src = 0;
  v87 = 0;
  std::locale::locale((std::locale *)v88);
  v89 = 24;
  v91 = 0;
  *((_QWORD *)&v85[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  *(_QWORD *)v67 = v92;
  v90 = v92;
  LOBYTE(v92[0]) = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( *(_QWORD *)(a1 + 128) == *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL) )
  {
    dest[0] = "_";
  }
  else
  {
    dest[0] = "_";
    std::__ostream_insert<char,std::char_traits<char>>();
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL);
    v17 = *(_QWORD *)(v16 + 16);
    if ( (v17 & 7) != 0 )
    {
      v76 = *(_QWORD *)(v16 + 16);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v17 )
      {
        v76 = *(_QWORD *)(v16 + 16);
        strlen((const char *)v76);
      }
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  ++*(_DWORD *)(a1 + 224);
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  LOBYTE(v81[0]) = 0;
  dest[0] = v81;
  v79 = v81;
  v18 = (_BYTE *)v87;
  v80 = nullptr;
  if ( (_QWORD)v87 )
  {
    if ( src[0] >= (void *)v87 )
      v18 = src[0];
    if ( !src[0] )
      v18 = (_BYTE *)v87;
    v19 = v18 - (char *)src[1];
    v20 = (void *)v19;
    if ( v19 < 0 )
      std::__throw_length_error("basic_string::_M_replace");
    if ( (unsigned __int64)v19 > 0xF )
    {
      if ( (unsigned __int64)v19 > 0x1D )
      {
        v76 = v19;
        v59 = v19 + 1;
        if ( v19 + 1 < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v76 = 30;
        v59 = 31;
      }
      n = v19;
      v77 = (size_t)src[1];
      v60 = (void *)operator new(v59);
      v61 = (const void *)v77;
      v20 = (void *)n;
      v21 = v60;
      if ( v77 )
      {
        v77 = n;
        memcpy(v60, v61, n);
        v20 = (void *)v77;
      }
      if ( v79 != dest[0] )
      {
        v77 = (size_t)v20;
        operator delete(v79, *(_QWORD *)v81 + 1LL);
        v20 = (void *)v77;
      }
      v79 = v21;
      *(_QWORD *)v81 = v76;
    }
    else if ( src[1] == dest[0] )
    {
      v76 = v19;
      std::string::_M_replace_cold();
      v20 = (void *)v76;
      v21 = v79;
    }
    else
    {
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          LOBYTE(v81[0]) = *(_BYTE *)src[1];
        }
        else
        {
          v76 = v19;
          memcpy(dest[0], src[1], v19);
          v20 = (void *)v76;
        }
      }
      v21 = dest[0];
    }
    v80 = v20;
    *((_BYTE *)v20 + (_QWORD)v21) = 0;
    goto LABEL_17;
  }
  v55 = (void *)v91;
  if ( (unsigned __int64)v91 > 0xF )
  {
    if ( v91 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( (unsigned __int64)v91 > 0x1D )
    {
      v76 = v91;
      v62 = v91 + 1;
      if ( v91 + 1 < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v76 = 30;
      v62 = 31;
    }
    v77 = v91;
    v57 = (void *)operator new(v62);
    v55 = (void *)v77;
    if ( v79 != dest[0] )
    {
      operator delete(v79, *(_QWORD *)v81 + 1LL);
      v55 = (void *)v77;
    }
    v79 = v57;
    v56 = v90;
    *(_QWORD *)v81 = v76;
    goto LABEL_92;
  }
  if ( v91 )
  {
    v56 = v90;
    v57 = dest[0];
    if ( v91 == 1 )
    {
      LOBYTE(v81[0]) = *(_BYTE *)v90;
      goto LABEL_72;
    }
LABEL_92:
    v76 = (__int64)v55;
    memcpy(v57, v56, (size_t)v55);
    v58 = v79;
    v55 = (void *)v76;
    goto LABEL_73;
  }
LABEL_72:
  v58 = dest[0];
LABEL_73:
  v80 = v55;
  *((_BYTE *)v55 + (_QWORD)v58) = 0;
LABEL_17:
  v22 = _mm_loadl_epi64(&v71);
  *(_QWORD *)v84 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v93[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v85[0] = _mm_unpacklo_epi64(v22, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v90 != *(void **)v67 )
    operator delete(v90, *(_QWORD *)v92 + 1LL);
  *((_QWORD *)&v85[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v70);
  v23 = v68;
  v24 = v63[0];
  *(_QWORD *)((char *)v84 + *(_QWORD *)(*(_QWORD *)v69 - 24LL)) = v13;
  v25 = *(_QWORD *)(v9 - 24);
  *(_QWORD *)&v85[0] = v9;
  *(_QWORD *)((char *)v85 + v25) = v23;
  v26 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)v84 = v6;
  *(_QWORD *)((char *)v84 + v26) = *(_QWORD *)v65;
  *(_QWORD *)&v84[2] = 0;
  v93[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v24);
  v68 = (std::ios_base *)v94;
  std::ios_base::ios_base((std::ios_base *)v94);
  v101 = 0;
  v102 = 0;
  v27 = (std::locale *)`VTT for'std::ofstream[1];
  v28 = `VTT for'std::ofstream[2];
  v103 = 0;
  *(_QWORD *)v94 = (char *)&`vtable for'std::ios + 16;
  v29 = *((_QWORD *)v27 - 3);
  *(_QWORD *)v84 = v27;
  v100 = 0;
  v70 = v27;
  *(_QWORD *)((char *)v84 + v29) = v28;
  v71.m128i_i64[0] = v28;
  std::ios::init();
  *(_QWORD *)v84 = (char *)&`vtable for'std::ofstream + 24;
  *(_QWORD *)v94 = (char *)&`vtable for'std::ofstream + 64;
  *(_QWORD *)v69 = &v84[2];
  std::filebuf::basic_filebuf();
  std::ios::init();
  v30 = std::filebuf::open();
  v31 = (char *)v84 + *(_QWORD *)(*(_QWORD *)v84 - 24LL);
  if ( v30 )
    v32 = 0;
  else
    v32 = *((_DWORD *)v31 + 8) | 4u;
  std::ios::clear();
  if ( (v95 & 5) != 0 )
  {
    sub_180B130(v31);
    if ( (unsigned __int8)sub_186A530(0.0) )
    {
      sub_186A4C0(0.0);
      sub_180B150(v31, v32);
      std::__ostream_insert<char,std::char_traits<char>>();
      v33 = std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v33, " for output\n");
    }
    else
    {
      sub_180B150(v31, v32);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    *(_QWORD *)v94 = (char *)&`vtable for'std::ofstream + 64;
    *(__m128i *)v84 = _mm_unpacklo_epi64(
                        (__m128i)((unsigned __int64)&`vtable for'std::ofstream + 24),
                        (__m128i)((unsigned __int64)&`vtable for'std::filebuf + 16));
    std::filebuf::close();
    goto LABEL_25;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v35 = *(_QWORD *)(v71.m128i_i64[1] + 8);
  if ( v35 )
    v36 = *(unsigned int *)(v35 - 4);
  else
    v36 = 0;
  (*(void (__fastcall **)(_QWORD, int *, __int64))(**(_QWORD **)(a1 + 160) + 328LL))(*(_QWORD *)(a1 + 160), v84, v36);
  v37 = **(std::ios_base ***)v72;
  if ( **(_QWORD **)v72 )
  {
    *(_QWORD *)v65 = (char *)v37 + 16 * *((unsigned int *)v37 - 1);
    if ( *(std::ios_base **)v65 != v37 )
    {
      v63[0] = v37;
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v38 = *((_QWORD **)v63[0] + 1);
        if ( v38 )
        {
          v39 = &v38[*((unsigned int *)v38 - 1)];
          while ( v39 != v38 )
          {
            sub_1606360(v82, *v38, *(_QWORD *)(a1 + 8), 0, 0, 0);
            sub_160E8B0(v84, v82);
            std::__ostream_insert<char,std::char_traits<char>>();
            ++v38;
            sub_18572D0(v83);
          }
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v63[0] = (std::ios_base *)((char *)v63[0] + 16);
      }
      while ( *(std::ios_base **)v65 != v63[0] );
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v40 = *(__int64 **)(v71.m128i_i64[1] + 8);
  if ( v40 )
  {
    v41 = &v40[*((unsigned int *)v40 - 1)];
    while ( v41 != v40 )
    {
      v42 = *v40;
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v82, v42, *(_QWORD *)(a1 + 8), 0, 0, 0);
      sub_160E8B0(v84, v82);
      std::__ostream_insert<char,std::char_traits<char>>();
      ++v40;
      sub_18572D0(v83);
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v43 = *(_QWORD **)(a1 + 160);
  *(_OWORD *)v82 = 0;
  v44 = *(__int64 (__fastcall **)(__int64))(*v43 + 16LL);
  if ( v44 != sub_E33A90 )
    goto LABEL_55;
  v45 = (_QWORD *)v43[20];
  v46 = *(__int64 (__fastcall **)(__int64))(*v45 + 16LL);
  if ( v46 != v44 )
    goto LABEL_67;
  v43 = (_QWORD *)v45[20];
  v44 = *(__int64 (__fastcall **)(__int64))(*v43 + 16LL);
  if ( v44 != v46 )
  {
LABEL_55:
    ((void (__fastcall *)(_QWORD *, int *))v44)(v43, v82);
    goto LABEL_56;
  }
  v45 = (_QWORD *)v43[20];
  v46 = *(__int64 (__fastcall **)(__int64))(*v45 + 16LL);
  if ( v46 != v44 )
  {
LABEL_67:
    ((void (__fastcall *)(_QWORD *, int *))v46)(v45, v82);
    goto LABEL_56;
  }
  v43 = (_QWORD *)v45[20];
  v44 = *(__int64 (__fastcall **)(__int64))(*v43 + 16LL);
  if ( v44 != v46 )
    goto LABEL_55;
  v45 = (_QWORD *)v43[20];
  v46 = *(__int64 (__fastcall **)(__int64))(*v45 + 16LL);
  if ( v46 != v44 )
    goto LABEL_67;
  v43 = (_QWORD *)v45[20];
  v44 = *(__int64 (__fastcall **)(__int64))(*v43 + 16LL);
  if ( v44 != v46 )
    goto LABEL_55;
  v45 = (_QWORD *)v43[20];
  v46 = *(__int64 (__fastcall **)(__int64))(*v45 + 16LL);
  if ( v46 != v44 )
    goto LABEL_67;
  v43 = (_QWORD *)v45[20];
  v44 = *(__int64 (__fastcall **)(__int64))(*v43 + 16LL);
  if ( v44 != v46 )
    goto LABEL_55;
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)v43[20] + 16LL))(v43[20], v82);
LABEL_56:
  v47 = *(double *)v75;
  sub_1818270(v82, "time");
  sub_1816A00(
    (int)v82,
    (int)v84,
    v48,
    v49,
    v50,
    v51,
    (int)v63[0],
    v63[1],
    v64,
    v65[0],
    (int)dest[0],
    dest[1],
    v67[0],
    (int)v68,
    v69[0],
    (int)v70,
    v71.m128i_i64[0],
    v71.m128i_i64[1],
    v72[0],
    v73,
    v75[0],
    v76,
    v77,
    n,
    (int)v79,
    v80);
  v52 = *(_QWORD *)(a1 + 160);
  v53 = *(__int64 (__fastcall **)(double))(*(_QWORD *)v52 + 104LL);
  if ( (char *)v53 == (char *)sub_2B1DE0 )
    v54 = v52 + 80;
  else
    v54 = v53(v47);
  sub_185CA40(v54, v84);
  *(__m128i *)v63 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ofstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::filebuf + 16));
  if ( !std::filebuf::close() )
    std::ios::clear();
  if ( *(_QWORD *)&v82[2] )
    sub_186B220((void *)(*(_QWORD *)&v82[2] - 8LL));
  if ( *(_QWORD *)v82 )
    sub_186B220((void *)(*(_QWORD *)v82 - 8LL));
  *(__m128i *)v84 = _mm_load_si128((const __m128i *)v63);
  *(_QWORD *)v94 = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::close();
LABEL_25:
  std::__basic_file<char>::~__basic_file();
  *(_QWORD *)&v84[2] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)&v87);
  v34 = v68;
  *(_QWORD *)v84 = v70;
  *(_QWORD *)((char *)v84 + *((_QWORD *)v70 - 3)) = v71.m128i_i64[0];
  *(_QWORD *)v94 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v34);
  if ( v79 != dest[0] )
    operator delete(v79, *(_QWORD *)v81 + 1LL);
}

