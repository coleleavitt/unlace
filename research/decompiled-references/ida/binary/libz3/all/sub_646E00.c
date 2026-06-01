__int64 *__fastcall sub_646E00(__int64 *a1, size_t a2)
{
  char *v3; // rbp
  char *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r15
  char *v10; // rsi
  __m128i si128; // xmm1
  __int64 v12; // rax
  _BYTE *v13; // rax
  void *v14; // rcx
  _BYTE *v15; // rsi
  _BYTE *v16; // rsi
  size_t v17; // rax
  size_t v18; // r14
  __m128i v19; // xmm0
  char *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  std::ios_base *v23; // rdi
  unsigned __int64 v25; // rdi
  _OWORD *v26; // rax
  _OWORD *v27; // rcx
  _OWORD *v28; // r8
  _OWORD *v29; // rax
  void *v30; // rdi
  __int64 v31; // rax
  size_t v32; // rax
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  void *v35; // rdi
  size_t v36; // rdi
  std::locale *v37[2]; // [rsp+0h] [rbp-228h] BYREF
  std::ios_base *v38; // [rsp+10h] [rbp-218h]
  size_t v39; // [rsp+18h] [rbp-210h]
  _OWORD *v40; // [rsp+20h] [rbp-208h]
  char *v41; // [rsp+28h] [rbp-200h]
  __int64 v42; // [rsp+30h] [rbp-1F8h]
  char *v43; // [rsp+38h] [rbp-1F0h]
  __m128i v44; // [rsp+40h] [rbp-1E8h] BYREF
  char **v45; // [rsp+50h] [rbp-1D8h]
  void *v46; // [rsp+58h] [rbp-1D0h]
  char *v47; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-1C0h]
  _OWORD v49[2]; // [rsp+70h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+90h] [rbp-198h]
  __int128 v51; // [rsp+A0h] [rbp-188h]
  char v52[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v53; // [rsp+B8h] [rbp-170h]
  void *v54; // [rsp+C0h] [rbp-168h]
  size_t n; // [rsp+C8h] [rbp-160h]
  _QWORD v56[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v57[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v58; // [rsp+1C0h] [rbp-68h]
  __int128 v59; // [rsp+1C8h] [rbp-60h]
  __int128 v60; // [rsp+1D8h] [rbp-50h]

  v39 = a2;
  v45 = &v47;
  v44.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  v38 = (std::ios_base *)v57;
  *(__m128i *)v37 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v57);
  v57[27] = 0;
  v3 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v59 = 0;
  v58 = 0;
  v4 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v60 = 0;
  v5 = *((_QWORD *)v3 - 3);
  v57[0] = (char *)&`vtable for'std::ios + 16;
  v47 = v3;
  *(char **)((char *)&v47 + v5) = v4;
  v48 = 0;
  v41 = v4;
  std::ios::init();
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v7 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v40 = v49;
  v8 = (_QWORD *)((char *)v49 + *(_QWORD *)(v6 - 24));
  *(_QWORD *)&v49[0] = v6;
  *v8 = v7;
  v42 = v7;
  std::ios::init();
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v10 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v37);
  v37[0] = (std::locale *)v52;
  v12 = *(_QWORD *)(v9 - 24);
  v43 = v10;
  *(char **)((char *)&v47 + v12) = v10;
  v47 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v57[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v49[0] = si128;
  v49[1] = 0;
  *(_OWORD *)src = 0;
  v51 = 0;
  std::locale::locale((std::locale *)v52);
  v53 = 24;
  v44.m128i_i64[1] = (__int64)v56;
  *((_QWORD *)&v49[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v54 = v56;
  n = 0;
  LOBYTE(v56[0]) = 0;
  std::ios::init();
  std::ostream::_M_insert<unsigned long>();
  v13 = (_BYTE *)v51;
  v14 = a1 + 2;
  a1[1] = 0;
  *a1 = (__int64)(a1 + 2);
  *((_BYTE *)a1 + 16) = 0;
  if ( v13 )
  {
    v15 = v13;
    if ( src[0] >= v13 )
      v13 = src[0];
    if ( !src[0] )
      v13 = v15;
    v16 = src[1];
    v17 = v13 - (char *)src[1];
    v18 = v17;
    if ( (v17 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_replace");
    if ( v17 > 0xF )
    {
      if ( v17 > 0x1D )
      {
        v39 = v17;
        v25 = v17 + 1;
        if ( (__int64)(v17 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v39 = 30;
        v25 = 31;
      }
      v46 = src[1];
      v40 = a1 + 2;
      v26 = (_OWORD *)operator new(v25);
      v27 = v40;
      v28 = v26;
      if ( v46 )
      {
        v29 = memcpy(v26, v46, v18);
        v27 = v40;
        v28 = v29;
      }
      v30 = (void *)*a1;
      if ( v27 != (_OWORD *)*a1 )
      {
        v31 = a1[2];
        v40 = v28;
        operator delete(v30, v31 + 1);
        v28 = v40;
      }
      v32 = v39;
      *a1 = (__int64)v28;
      v14 = v28;
      a1[2] = v32;
    }
    else
    {
      if ( src[1] != v14 )
      {
        if ( !v17 )
          goto LABEL_10;
        if ( v17 != 1 )
        {
          v14 = memcpy(a1 + 2, src[1], v17);
          goto LABEL_10;
        }
        goto LABEL_15;
      }
      std::string::_M_replace_cold();
      v14 = (void *)*a1;
    }
  }
  else
  {
    v18 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v39 = n;
        v33 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v39 = 30;
        v33 = 31;
      }
      v40 = a1 + 2;
      v34 = operator new(v33);
      v35 = (void *)*a1;
      if ( v40 != (_OWORD *)*a1 )
      {
        v40 = (_OWORD *)v34;
        operator delete(v35, a1[2] + 1);
        v34 = (__int64)v40;
      }
      v36 = v39;
      *a1 = v34;
      v14 = (void *)v34;
      v16 = v54;
      a1[2] = v36;
    }
    else
    {
      if ( !n )
        goto LABEL_10;
      v16 = v54;
      if ( n == 1 )
      {
LABEL_15:
        *((_BYTE *)a1 + 16) = *v16;
        goto LABEL_10;
      }
    }
    memcpy(v14, v16, v18);
    v14 = (void *)*a1;
  }
LABEL_10:
  a1[1] = v18;
  *((_BYTE *)v14 + v18) = 0;
  v19 = _mm_loadl_epi64(&v44);
  v47 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v57[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v49[0] = _mm_unpacklo_epi64(v19, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v54 != (void *)v44.m128i_i64[1] )
    operator delete(v54, v56[0] + 1LL);
  *((_QWORD *)&v49[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v37[0]);
  v20 = v41;
  *(char **)((char *)&v47 + *(_QWORD *)(v9 - 24)) = v43;
  v21 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v49[0] = v6;
  *(_QWORD *)((char *)v49 + v21) = v42;
  v22 = *((_QWORD *)v3 - 3);
  v47 = v3;
  v23 = v38;
  *(char **)((char *)&v47 + v22) = v20;
  v48 = 0;
  v57[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v23);
  return a1;
}

