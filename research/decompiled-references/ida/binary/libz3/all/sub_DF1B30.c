__int64 __fastcall sub_DF1B30(__int64 a1, const char *a2, const char **a3)
{
  char *v5; // rbp
  char *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  char *v12; // rsi
  __m128i si128; // xmm1
  __int64 v14; // rax
  _BYTE *v15; // rax
  void *v16; // r15
  _BYTE *v17; // rcx
  _BYTE *v18; // rsi
  size_t v19; // rax
  size_t v20; // r14
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v25; // rdi
  void *v26; // rax
  void *v27; // r12
  const char **v28; // rax
  size_t v29; // r12
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  void *v32; // rdi
  std::locale *v33[2]; // [rsp+0h] [rbp-228h] BYREF
  std::ios_base *v34; // [rsp+10h] [rbp-218h]
  const char **v35; // [rsp+18h] [rbp-210h]
  char *v36; // [rsp+20h] [rbp-208h]
  __int64 v37; // [rsp+28h] [rbp-200h]
  __int64 v38; // [rsp+30h] [rbp-1F8h]
  char *v39; // [rsp+38h] [rbp-1F0h]
  __m128i v40; // [rsp+40h] [rbp-1E8h] BYREF
  char **v41; // [rsp+50h] [rbp-1D8h]
  void *v42; // [rsp+58h] [rbp-1D0h]
  char *v43; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-1C0h]
  _OWORD v45[2]; // [rsp+70h] [rbp-1B8h]
  void *src[2]; // [rsp+90h] [rbp-198h]
  __int128 v47; // [rsp+A0h] [rbp-188h]
  char v48[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v49; // [rsp+B8h] [rbp-170h]
  void *v50; // [rsp+C0h] [rbp-168h]
  size_t n; // [rsp+C8h] [rbp-160h]
  _QWORD v52[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v53[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v54; // [rsp+1C0h] [rbp-68h]
  __int128 v55; // [rsp+1C8h] [rbp-60h]
  __int128 v56; // [rsp+1D8h] [rbp-50h]

  v35 = a3;
  v41 = &v43;
  v40.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  v34 = (std::ios_base *)v53;
  *(__m128i *)v33 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v53);
  v54 = 0;
  v5 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v55 = 0;
  v56 = 0;
  v6 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v7 = *((_QWORD *)v5 - 3);
  v53[0] = (char *)&`vtable for'std::ios + 16;
  v53[27] = 0;
  v43 = v5;
  *(char **)((char *)&v43 + v7) = v6;
  v44 = 0;
  v36 = v6;
  std::ios::init();
  v8 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v10 = *(_QWORD *)(v8 - 24);
  *(_QWORD *)&v45[0] = v8;
  v37 = v9;
  *(_QWORD *)((char *)v45 + v10) = v9;
  std::ios::init();
  v11 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v12 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v33);
  v33[0] = (std::locale *)v48;
  v14 = *(_QWORD *)(v11 - 24);
  v39 = v12;
  v38 = v11;
  *(char **)((char *)&v43 + v14) = v12;
  v45[0] = si128;
  v45[1] = 0;
  v43 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v53[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  *(_OWORD *)src = 0;
  v47 = 0;
  std::locale::locale((std::locale *)v48);
  v49 = 24;
  v40.m128i_i64[1] = (__int64)v52;
  *((_QWORD *)&v45[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v50 = v52;
  n = 0;
  LOBYTE(v52[0]) = 0;
  std::ios::init();
  if ( a2 )
  {
    strlen(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    std::ios::clear();
  }
  if ( ((unsigned __int8)*v35 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( *v35 )
      strlen(*v35);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v15 = (_BYTE *)v47;
  v16 = (void *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  if ( !v15 )
  {
    v20 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v29 = n;
        v30 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v29 = 30;
        v30 = 31;
      }
      v31 = operator new(v30);
      v32 = *(void **)a1;
      if ( v16 != *(void **)a1 )
      {
        v35 = (const char **)v31;
        operator delete(v32, *(_QWORD *)(a1 + 16) + 1LL);
        v31 = (__int64)v35;
      }
      *(_QWORD *)a1 = v31;
      v18 = v50;
      v16 = (void *)v31;
      *(_QWORD *)(a1 + 16) = v29;
    }
    else
    {
      if ( !n )
        goto LABEL_18;
      v18 = v50;
      if ( n == 1 )
      {
LABEL_24:
        *(_BYTE *)(a1 + 16) = *v18;
        goto LABEL_18;
      }
    }
    memcpy(v16, v18, v20);
    goto LABEL_38;
  }
  v17 = v15;
  v18 = src[1];
  if ( src[0] >= v15 )
    v15 = src[0];
  if ( !src[0] )
    v15 = v17;
  v19 = v15 - (char *)src[1];
  v20 = v19;
  if ( (v19 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v19 <= 0xF )
  {
    if ( src[1] != v16 )
    {
      if ( !v19 )
        goto LABEL_18;
      if ( v19 != 1 )
      {
        memcpy((void *)(a1 + 16), src[1], v19);
        goto LABEL_18;
      }
      goto LABEL_24;
    }
    std::string::_M_replace_cold();
LABEL_38:
    v16 = *(void **)a1;
    goto LABEL_18;
  }
  if ( v19 > 0x1D )
  {
    v35 = (const char **)v19;
    v25 = v19 + 1;
    if ( (__int64)(v19 + 1) < 0 )
      std::__throw_bad_alloc();
  }
  else
  {
    v35 = (const char **)(&qword_18 + 6);
    v25 = 31;
  }
  v42 = src[1];
  v26 = (void *)operator new(v25);
  v27 = v26;
  if ( v42 )
    memcpy(v26, v42, v20);
  if ( v16 != *(void **)a1 )
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
  v28 = v35;
  *(_QWORD *)a1 = v27;
  v16 = v27;
  *(_QWORD *)(a1 + 16) = v28;
LABEL_18:
  *(_QWORD *)(a1 + 8) = v20;
  *((_BYTE *)v16 + v20) = 0;
  v21 = _mm_loadl_epi64(&v40);
  v43 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v53[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v45[0] = _mm_unpacklo_epi64(v21, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v50 != (void *)v40.m128i_i64[1] )
    operator delete(v50, v52[0] + 1LL);
  *((_QWORD *)&v45[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v33[0]);
  *(char **)((char *)&v43 + *(_QWORD *)(v38 - 24)) = v39;
  v22 = *(_QWORD *)(v8 - 24);
  *(_QWORD *)&v45[0] = v8;
  *(_QWORD *)((char *)v45 + v22) = v37;
  v23 = *((_QWORD *)v5 - 3);
  v43 = v5;
  *(char **)((char *)&v43 + v23) = v36;
  v44 = 0;
  v53[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v34);
  return a1;
}

