void __fastcall sub_DED4A0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdi
  __m128i si128; // xmm1
  __int64 *v6; // r14
  __int64 *v7; // r15
  __int64 v8; // rbp
  __int64 (__fastcall *v9)(__int64, void **); // rax
  __int64 v10; // rdi
  _DWORD *v11; // rbp
  void (*v12)(); // rax
  char *v14; // rsi
  const char ***v15; // rbp
  const char ***v16; // r14
  const char *v17; // r12
  const char **v18; // r12
  __int64 (__fastcall *v19)(__int64); // rax
  std::ostream *v20; // r14
  _BYTE *v21; // rax
  size_t v22; // rax
  size_t v23; // r15
  _QWORD *v24; // r12
  __m128i v25; // xmm2
  std::ios_base *v26; // rdi
  size_t v27; // r15
  void *v28; // rsi
  _QWORD *v29; // r12
  _QWORD *v30; // rax
  __int64 v31; // r13
  unsigned __int64 v32; // rdi
  _QWORD *v33; // rax
  size_t v34; // r13
  unsigned __int64 v35; // rdi
  void *v36[2]; // [rsp+0h] [rbp-228h] BYREF
  __int64 v37; // [rsp+10h] [rbp-218h]
  __int64 v38; // [rsp+18h] [rbp-210h]
  std::locale *v39; // [rsp+20h] [rbp-208h]
  std::ios_base *v40; // [rsp+28h] [rbp-200h]
  __m128i v41; // [rsp+30h] [rbp-1F8h] BYREF
  void *v42; // [rsp+40h] [rbp-1E8h] BYREF
  char v43; // [rsp+48h] [rbp-1E0h]
  int v44; // [rsp+4Ch] [rbp-1DCh]
  void *v45; // [rsp+50h] [rbp-1D8h] BYREF
  size_t v46; // [rsp+58h] [rbp-1D0h]
  _QWORD dest[2]; // [rsp+60h] [rbp-1C8h] BYREF
  _OWORD v48[2]; // [rsp+70h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+90h] [rbp-198h]
  __int128 v50; // [rsp+A0h] [rbp-188h]
  char v51[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v52; // [rsp+B8h] [rbp-170h]
  void *v53; // [rsp+C0h] [rbp-168h]
  size_t n; // [rsp+C8h] [rbp-160h]
  _QWORD v55[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v56[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v57; // [rsp+1C0h] [rbp-68h]
  __int128 v58; // [rsp+1C8h] [rbp-60h]
  __int128 v59; // [rsp+1D8h] [rbp-50h]

  v40 = (std::ios_base *)v56;
  v41.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v36 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v56);
  v58 = 0;
  v59 = 0;
  v56[0] = (char *)&`vtable for'std::ios + 16;
  v57 = 0;
  v56[27] = 0;
  v2 = `VTT for'std::ostringstream[1];
  v3 = `VTT for'std::ostringstream[2];
  v4 = *(_QWORD *)(v2 - 24);
  *(_QWORD *)&v48[0] = v2;
  v37 = v2;
  v38 = v3;
  *(_QWORD *)((char *)v48 + v4) = v3;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v36);
  v48[1] = 0;
  v48[0] = si128;
  v56[0] = (char *)&`vtable for'std::ostringstream + 64;
  v39 = (std::locale *)v51;
  *(_OWORD *)src = 0;
  v50 = 0;
  std::locale::locale((std::locale *)v51);
  v52 = 16;
  LOBYTE(v55[0]) = 0;
  *((_QWORD *)&v48[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v41.m128i_i64[1] = (__int64)v55;
  v53 = v55;
  n = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = (__int64 *)a1[10];
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 != v7 )
    {
      v36[0] = "- ";
      do
      {
        while ( 1 )
        {
          v8 = *v6;
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( (*(_QWORD *)v8 & 7) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
          }
          else
          {
            if ( *(_QWORD *)v8 )
              strlen(*(const char **)v8);
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( *(_QWORD *)(v8 + 8) )
          {
            strlen(*(const char **)(v8 + 8));
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          else
          {
            std::ios::clear();
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_DFBCB0(a1);
          v9 = *(__int64 (__fastcall **)(__int64, void **))(v8 + 16);
          v10 = a1[37];
          v45 = nullptr;
          v11 = (_DWORD *)v9(v10, &v45);
          sub_18572D0(&v45);
          if ( v11 )
            ++v11[2];
          sub_1857380(&v45);
          v12 = *(void (**)())(*(_QWORD *)v11 + 120LL);
          if ( v12 != nullsub_94 )
            ((void (__fastcall *)(_DWORD *, void **))v12)(v11, &v45);
          sub_185C3C0(&v45, v48, 4, 0, 1);
          sub_1857540(&v45);
          if ( v11[2]-- == 1 )
            break;
          if ( v7 == ++v6 )
            goto LABEL_16;
        }
        ++v6;
        (**(void (__fastcall ***)(_DWORD *))v11)(v11);
        sub_186B220(v11);
      }
      while ( v7 != v6 );
    }
  }
LABEL_16:
  v14 = "builtin probes:\n";
  std::__ostream_insert<char,std::char_traits<char>>();
  v15 = (const char ***)a1[12];
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v16 != v15 )
    {
      v36[0] = "- ";
      do
      {
        v18 = *v15;
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( ((unsigned __int8)*v18 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( *v18 )
            strlen(*v18);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v17 = v18[1];
        if ( v17 )
        {
          strlen(v17);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::ios::clear();
        }
        v14 = "\n";
        std::__ostream_insert<char,std::char_traits<char>>();
        ++v15;
      }
      while ( v16 != v15 );
    }
  }
  v19 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
  if ( v19 == sub_305010 )
    v20 = (std::ostream *)a1[51];
  else
    v20 = (std::ostream *)((__int64 (__fastcall *)(_QWORD *, char *))v19)(a1, v14);
  LOBYTE(v45) = 34;
  if ( *(_QWORD *)((char *)v20 + *(_QWORD *)(*(_QWORD *)v20 - 24LL) + 16) )
    v20 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v20, 34);
  v21 = (_BYTE *)v50;
  LOBYTE(dest[0]) = 0;
  v45 = dest;
  v46 = 0;
  if ( !(_QWORD)v50 )
  {
    v27 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v34 = n;
        v35 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v34 = 30;
        v35 = 31;
      }
      v29 = (_QWORD *)operator new(v35);
      if ( v45 != dest )
        operator delete(v45, dest[0] + 1LL);
      v45 = v29;
      v28 = v53;
      dest[0] = v34;
    }
    else
    {
      if ( !n )
      {
LABEL_63:
        v30 = dest;
LABEL_64:
        v46 = v27;
        *((_BYTE *)v30 + v27) = 0;
        goto LABEL_49;
      }
      v28 = v53;
      v29 = dest;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v53;
        goto LABEL_63;
      }
    }
    memcpy(v29, v28, v27);
    v30 = v45;
    goto LABEL_64;
  }
  if ( src[0] >= (void *)v50 )
    v21 = src[0];
  if ( !src[0] )
    v21 = (_BYTE *)v50;
  v22 = v21 - (char *)src[1];
  v23 = v22;
  if ( (v22 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v22 > 0xF )
  {
    if ( v22 > 0x1D )
    {
      v31 = v22;
      v32 = v22 + 1;
      if ( (__int64)(v22 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v31 = 30;
      v32 = 31;
    }
    v36[0] = src[1];
    v33 = (_QWORD *)operator new(v32);
    v24 = v33;
    if ( v36[0] )
      memcpy(v33, v36[0], v23);
    if ( v45 != dest )
      operator delete(v45, dest[0] + 1LL);
    v45 = v24;
    dest[0] = v31;
  }
  else if ( src[1] == dest )
  {
    std::string::_M_replace_cold();
    v24 = v45;
  }
  else
  {
    if ( v22 )
    {
      if ( v22 == 1 )
        LOBYTE(dest[0]) = *(_BYTE *)src[1];
      else
        memcpy(dest, src[1], v22);
    }
    v24 = dest;
  }
  v46 = v23;
  *((_BYTE *)v24 + v23) = 0;
LABEL_49:
  v43 = 0;
  v25 = _mm_loadl_epi64(&v41);
  v44 = 0;
  v42 = v45;
  *(__m128i *)v36 = _mm_unpacklo_epi64(v25, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_180B300(&v42, v20);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v45 != dest )
    operator delete(v45, dest[0] + 1LL);
  v48[0] = _mm_load_si128((const __m128i *)v36);
  v56[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v53 != (void *)v41.m128i_i64[1] )
    operator delete(v53, v55[0] + 1LL);
  *((_QWORD *)&v48[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v39);
  v26 = v40;
  *(_QWORD *)&v48[0] = v37;
  *(_QWORD *)((char *)v48 + *(_QWORD *)(v37 - 24)) = v38;
  v56[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v26);
}

