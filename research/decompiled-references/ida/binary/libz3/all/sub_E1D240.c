void __fastcall sub_E1D240(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdi
  __m128i v5; // xmm1
  const char *v6; // rsi
  __int64 *v7; // rax
  __int64 *v8; // r13
  __int64 v9; // rbx
  char *v10; // rsi
  void (__fastcall *v11)(__int128 *, __int64, __int64); // rax
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rbx
  void *v14; // rbx
  const char **v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 (__fastcall *v19)(__int64); // rax
  std::ostream *v20; // r12
  _BYTE *v21; // rax
  const void *v22; // r15
  size_t v23; // rax
  size_t v24; // r13
  __int64 *v25; // rbp
  __m128i v26; // xmm2
  std::ios_base *v27; // rdi
  size_t v28; // r13
  void *v29; // rsi
  __int64 *v30; // r15
  __int64 *v31; // rax
  unsigned __int64 v32; // rdi
  __int64 *v33; // rax
  size_t v34; // rbp
  unsigned __int64 v35; // rdi
  __m128i v36; // [rsp+0h] [rbp-2E8h] BYREF
  void *v37; // [rsp+10h] [rbp-2D8h]
  _BYTE *v38; // [rsp+18h] [rbp-2D0h]
  void **p_p_dest; // [rsp+20h] [rbp-2C8h]
  __int64 *v40; // [rsp+28h] [rbp-2C0h]
  __int64 v41; // [rsp+30h] [rbp-2B8h]
  __int64 v42; // [rsp+38h] [rbp-2B0h]
  std::locale *v43; // [rsp+40h] [rbp-2A8h]
  std::ios_base *v44; // [rsp+48h] [rbp-2A0h]
  __m128i v45; // [rsp+50h] [rbp-298h] BYREF
  char v46[8]; // [rsp+60h] [rbp-288h] BYREF
  __int64 v47; // [rsp+68h] [rbp-280h] BYREF
  __int128 v48; // [rsp+70h] [rbp-278h] BYREF
  __m128i v49; // [rsp+80h] [rbp-268h]
  void *p_dest; // [rsp+90h] [rbp-258h] BYREF
  size_t v51; // [rsp+98h] [rbp-250h]
  __int64 dest; // [rsp+A0h] [rbp-248h] BYREF
  int v53; // [rsp+A8h] [rbp-240h]
  __int64 (__fastcall **v54)(); // [rsp+B0h] [rbp-238h]
  __int64 v55; // [rsp+C0h] [rbp-228h]
  void *v56; // [rsp+C8h] [rbp-220h]
  __int64 v57; // [rsp+D8h] [rbp-210h]
  void *ptr; // [rsp+E0h] [rbp-208h]
  __int64 v59; // [rsp+E8h] [rbp-200h]
  const char **v60; // [rsp+F0h] [rbp-1F8h]
  __int64 v61; // [rsp+F8h] [rbp-1F0h]
  __int64 v62; // [rsp+100h] [rbp-1E8h]
  _BYTE v63[40]; // [rsp+108h] [rbp-1E0h] BYREF
  _OWORD v64[2]; // [rsp+130h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+150h] [rbp-198h]
  __int128 v66; // [rsp+160h] [rbp-188h]
  char v67[8]; // [rsp+170h] [rbp-178h] BYREF
  int v68; // [rsp+178h] [rbp-170h]
  void *v69; // [rsp+180h] [rbp-168h]
  size_t n; // [rsp+188h] [rbp-160h]
  _QWORD v71[2]; // [rsp+190h] [rbp-158h] BYREF
  _QWORD v72[28]; // [rsp+1A0h] [rbp-148h] BYREF
  __int16 v73; // [rsp+280h] [rbp-68h]
  __int128 v74; // [rsp+288h] [rbp-60h]
  __int128 v75; // [rsp+298h] [rbp-50h]

  v44 = (std::ios_base *)v72;
  v45.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  v36 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
          (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v72);
  v74 = 0;
  v75 = 0;
  v72[0] = (char *)&`vtable for'std::ios + 16;
  v73 = 0;
  v72[27] = 0;
  v2 = `VTT for'std::ostringstream[1];
  v3 = `VTT for'std::ostringstream[2];
  v4 = *(_QWORD *)(v2 - 24);
  *(_QWORD *)&v64[0] = v2;
  v41 = v2;
  v42 = v3;
  *(_QWORD *)((char *)v64 + v4) = v3;
  std::ios::init();
  v5 = _mm_load_si128(&v36);
  v64[1] = 0;
  v64[0] = v5;
  v72[0] = (char *)&`vtable for'std::ostringstream + 64;
  v43 = (std::locale *)v67;
  *(_OWORD *)src = 0;
  v66 = 0;
  std::locale::locale((std::locale *)v67);
  v68 = 16;
  LOBYTE(v71[0]) = 0;
  *((_QWORD *)&v64[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v45.m128i_i64[1] = (__int64)v71;
  v69 = v71;
  n = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = "builtin simplifiers:\n";
  std::__ostream_insert<char,std::char_traits<char>>();
  v7 = (__int64 *)a1[11];
  if ( v7 )
  {
    v40 = &v7[*((unsigned int *)v7 - 1)];
    if ( v40 != v7 )
    {
      v8 = v7;
      do
      {
        while ( 1 )
        {
          v9 = *v8;
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( (*(_QWORD *)v9 & 7) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
          }
          else
          {
            if ( *(_QWORD *)v9 )
              strlen(*(const char **)v9);
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( *(_QWORD *)(v9 + 8) )
          {
            strlen(*(const char **)(v9 + 8));
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          else
          {
            std::ios::clear();
          }
          v10 = "\n";
          std::__ostream_insert<char,std::char_traits<char>>();
          v11 = *(void (__fastcall **)(__int128 *, __int64, __int64))(v9 + 32);
          v49 = 0u;
          v48 = 0;
          if ( v11 )
          {
            v10 = (char *)(v9 + 16);
            v11(&v48, v9 + 16, 2);
            v49 = _mm_loadu_si128((const __m128i *)(v9 + 32));
          }
          v36.m128i_i64[0] = (__int64)v46;
          sub_1857380(v46);
          v12 = *(__int64 (__fastcall **)(__int64))(*a1 + 32LL);
          if ( v12 == sub_E0F550 )
          {
            sub_DFBCB0(a1);
            v13 = a1[37];
          }
          else
          {
            v13 = ((__int64 (__fastcall *)(_QWORD *, char *))v12)(a1, v10);
          }
          LODWORD(v51) = 0;
          p_dest = qword_1C63778;
          BYTE4(v51) = 0;
          v54 = &off_1C62200;
          dest = 0;
          v53 = 0;
          v55 = 0;
          v56 = nullptr;
          v57 = 0;
          ptr = nullptr;
          v59 = v13;
          v60 = nullptr;
          v61 = 0;
          v62 = 0;
          v38 = v63;
          sub_180C0A0(v63);
          v47 = 0;
          p_dest = &off_1C4C830;
          if ( !v49.m128i_i64[0] )
          {
            p_p_dest = &p_dest;
            v37 = &v47;
            std::__throw_bad_function_call();
          }
          p_p_dest = &p_dest;
          v37 = &v47;
          v14 = (void *)((__int64 (__fastcall *)(__int128 *, __int64, __int64 *))v49.m128i_i64[1])(&v48, v13, &v47);
          (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v14 + 72LL))(v14, v36.m128i_i64[0]);
          v6 = (const char *)v64;
          sub_185C3C0(v36.m128i_i64[0], v64, 4, 0, 1);
          (**(void (__fastcall ***)(void *))v14)(v14);
          sub_186B220(v14);
          sub_18572D0(v37);
          p_dest = qword_1C63778;
          sub_180C0E0(v38);
          if ( v62 )
            sub_186B220((void *)(v62 - 8));
          if ( v61 )
            sub_186B220((void *)(v61 - 8));
          v15 = v60;
          if ( v60 )
          {
            v16 = (unsigned __int64)&v60[*((unsigned int *)v60 - 1)];
            if ( (unsigned __int64)v60 >= v16 )
              goto LABEL_27;
            do
            {
              while ( 1 )
              {
                v6 = *v15;
                if ( *v15 )
                {
                  v17 = v59;
                  if ( (*((_DWORD *)v6 + 2))-- == 1 )
                    break;
                }
                if ( (unsigned __int64)++v15 >= v16 )
                  goto LABEL_26;
              }
              sub_15D7BC0(v17, v6);
              ++v15;
            }
            while ( (unsigned __int64)v15 < v16 );
LABEL_26:
            v15 = v60;
            if ( v60 )
LABEL_27:
              sub_186B220(v15 - 1);
          }
          v54 = &off_1C62200;
          if ( ptr )
            sub_186B220(ptr);
          if ( v56 )
            sub_186B220(v56);
          sub_1857540(v36.m128i_i64[0]);
          if ( !v49.m128i_i64[0] )
            break;
          v6 = (const char *)&v48;
          ++v8;
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v49.m128i_i64[0])(&v48, &v48, 3);
          if ( v40 == v8 )
            goto LABEL_34;
        }
        ++v8;
      }
      while ( v40 != v8 );
    }
  }
LABEL_34:
  v19 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
  if ( v19 == sub_305010 )
    v20 = (std::ostream *)a1[51];
  else
    v20 = (std::ostream *)((__int64 (__fastcall *)(_QWORD *, const char *))v19)(a1, v6);
  LOBYTE(p_dest) = 34;
  if ( *(_QWORD *)((char *)v20 + *(_QWORD *)(*(_QWORD *)v20 - 24LL) + 16) )
    v20 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v20, 34);
  v21 = (_BYTE *)v66;
  v51 = 0;
  p_dest = &dest;
  LOBYTE(dest) = 0;
  if ( !(_QWORD)v66 )
  {
    v28 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
      {
        p_p_dest = &p_dest;
        std::__throw_length_error("basic_string::_M_create");
      }
      if ( n > 0x1D )
      {
        v34 = n;
        v35 = n + 1;
        if ( (__int64)(n + 1) < 0 )
        {
          p_p_dest = &p_dest;
          std::__throw_bad_alloc();
        }
      }
      else
      {
        v34 = 30;
        v35 = 31;
      }
      p_p_dest = &p_dest;
      v30 = (__int64 *)operator new(v35);
      if ( p_dest != &dest )
        operator delete(p_dest, dest + 1);
      p_dest = v30;
      v29 = v69;
      dest = v34;
    }
    else
    {
      if ( !n )
      {
LABEL_69:
        v31 = &dest;
LABEL_70:
        v51 = v28;
        *((_BYTE *)v31 + v28) = 0;
        goto LABEL_49;
      }
      v29 = v69;
      v30 = &dest;
      if ( n == 1 )
      {
        LOBYTE(dest) = *(_BYTE *)v69;
        goto LABEL_69;
      }
    }
    memcpy(v30, v29, v28);
    v31 = (__int64 *)p_dest;
    goto LABEL_70;
  }
  v22 = src[1];
  if ( src[0] >= (void *)v66 )
    v21 = src[0];
  if ( !src[0] )
    v21 = (_BYTE *)v66;
  v23 = v21 - (char *)src[1];
  v24 = v23;
  if ( (v23 & 0x8000000000000000LL) != 0LL )
  {
    p_p_dest = &p_dest;
    std::__throw_length_error("basic_string::_M_replace");
  }
  if ( v23 > 0xF )
  {
    if ( v23 > 0x1D )
    {
      v36.m128i_i64[0] = v23;
      v32 = v23 + 1;
      if ( (__int64)(v23 + 1) < 0 )
      {
        p_p_dest = &p_dest;
        std::__throw_bad_alloc();
      }
    }
    else
    {
      v36.m128i_i64[0] = 30;
      v32 = 31;
    }
    p_p_dest = &p_dest;
    v33 = (__int64 *)operator new(v32);
    v25 = v33;
    if ( v22 )
      memcpy(v33, v22, v24);
    if ( p_dest != &dest )
      operator delete(p_dest, dest + 1);
    p_dest = v25;
    dest = v36.m128i_i64[0];
  }
  else
  {
    p_p_dest = &p_dest;
    if ( src[1] == &dest )
    {
      std::string::_M_replace_cold();
      v25 = (__int64 *)p_dest;
    }
    else
    {
      if ( v23 )
      {
        if ( v23 == 1 )
          LOBYTE(dest) = *(_BYTE *)src[1];
        else
          memcpy(&dest, src[1], v23);
      }
      v25 = &dest;
    }
  }
  v51 = v24;
  *((_BYTE *)v25 + v24) = 0;
LABEL_49:
  BYTE8(v48) = 0;
  v26 = _mm_loadl_epi64(&v45);
  HIDWORD(v48) = 0;
  *(_QWORD *)&v48 = p_dest;
  v36 = _mm_unpacklo_epi64(v26, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_180B300(&v48, v20);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( p_dest != &dest )
    operator delete(p_dest, dest + 1);
  v64[0] = _mm_load_si128(&v36);
  v72[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v69 != (void *)v45.m128i_i64[1] )
    operator delete(v69, v71[0] + 1LL);
  *((_QWORD *)&v64[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v43);
  v27 = v44;
  *(_QWORD *)&v64[0] = v41;
  *(_QWORD *)((char *)v64 + *(_QWORD *)(v41 - 24)) = v42;
  v72[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v27);
}

