void __fastcall sub_4E23A0(__int64 a1, __int64 a2)
{
  char *v3; // rbp
  char *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r15
  char *v10; // rcx
  __m128i si128; // xmm1
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  _BYTE *v15; // rax
  size_t v16; // rax
  void *v17; // r8
  _QWORD *v18; // rcx
  int v19; // esi
  __m128i v20; // xmm5
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // rdx
  void *v24; // rsi
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rax
  void *v29; // rsi
  _QWORD *v30; // rax
  unsigned __int64 v31; // rdi
  __m128i v32; // [rsp+10h] [rbp-268h] BYREF
  std::locale *v33[2]; // [rsp+20h] [rbp-258h] BYREF
  char *v34; // [rsp+30h] [rbp-248h]
  __int64 v35; // [rsp+38h] [rbp-240h]
  char *v36; // [rsp+40h] [rbp-238h]
  __m128i v37; // [rsp+48h] [rbp-230h] BYREF
  _QWORD *v38; // [rsp+58h] [rbp-220h]
  void **v39; // [rsp+60h] [rbp-218h]
  char **v40; // [rsp+68h] [rbp-210h]
  void *v41; // [rsp+70h] [rbp-208h]
  size_t n; // [rsp+78h] [rbp-200h]
  void *v43; // [rsp+80h] [rbp-1F8h] BYREF
  char *v44; // [rsp+88h] [rbp-1F0h]
  _QWORD dest[4]; // [rsp+90h] [rbp-1E8h] BYREF
  char *v46; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-1C0h]
  _OWORD v48[2]; // [rsp+C0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+E0h] [rbp-198h]
  __int128 v50; // [rsp+F0h] [rbp-188h]
  _BYTE v51[8]; // [rsp+100h] [rbp-178h] BYREF
  int v52; // [rsp+108h] [rbp-170h]
  void *v53; // [rsp+110h] [rbp-168h]
  size_t v54; // [rsp+118h] [rbp-160h]
  _QWORD v55[2]; // [rsp+120h] [rbp-158h] BYREF
  _QWORD v56[28]; // [rsp+130h] [rbp-148h] BYREF
  __int16 v57; // [rsp+210h] [rbp-68h]
  __int128 v58; // [rsp+218h] [rbp-60h]
  __int128 v59; // [rsp+228h] [rbp-50h]

  v37.m128i_i64[1] = a2;
  v40 = &v46;
  v37.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  *(__m128i *)v33 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v56);
  v57 = 0;
  v3 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v58 = 0;
  v59 = 0;
  v4 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v5 = *((_QWORD *)v3 - 3);
  v56[0] = (char *)&`vtable for'std::ios + 16;
  v56[27] = 0;
  v46 = v3;
  *(char **)((char *)&v46 + v5) = v4;
  v47 = 0;
  v34 = v4;
  std::ios::init();
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v7 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v32.m128i_i64[0] = (__int64)v48;
  v8 = (_QWORD *)((char *)v48 + *(_QWORD *)(v6 - 24));
  *(_QWORD *)&v48[0] = v6;
  *v8 = v7;
  v35 = v7;
  std::ios::init();
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v10 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v33);
  v33[0] = (std::locale *)v51;
  v12 = *(_QWORD *)(v9 - 24);
  v36 = v10;
  *(char **)((char *)&v46 + v12) = v10;
  v46 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v56[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v48[0] = si128;
  v48[1] = 0;
  *(_OWORD *)src = 0;
  v50 = 0;
  std::locale::locale((std::locale *)v51);
  v38 = v55;
  v53 = v55;
  *((_QWORD *)&v48[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v52 = 24;
  v54 = 0;
  LOBYTE(v55[0]) = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  v13 = *(_QWORD *)(a1 + 88);
  v14 = *(_QWORD *)(a1 + 80);
  v39 = &v43;
  sub_1606360(&v43, v14, v13, 0, 0, 0);
  sub_160E8B0(v32.m128i_i64[0], &v43);
  sub_18572D0(dest);
  v15 = (_BYTE *)v50;
  v43 = dest;
  v44 = nullptr;
  LOBYTE(dest[0]) = 0;
  if ( !(_QWORD)v50 )
  {
    v23 = (char *)v54;
    if ( v54 > 0xF )
    {
      if ( (v54 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v54 > 0x1D )
      {
        v32.m128i_i64[0] = v54;
        v31 = v54 + 1;
        if ( (__int64)(v54 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v32.m128i_i64[0] = 30;
        v31 = 31;
      }
      n = v54;
      v41 = (void *)operator new(v31);
      sub_233E40((__int64)v39);
      v25 = v41;
      v24 = v53;
      v23 = (char *)n;
      v43 = v41;
      dest[0] = v32.m128i_i64[0];
    }
    else
    {
      if ( !v54 )
      {
LABEL_24:
        v26 = dest;
LABEL_25:
        v44 = v23;
        v23[(_QWORD)v26] = 0;
        goto LABEL_12;
      }
      v24 = v53;
      v25 = dest;
      if ( v54 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v53;
        goto LABEL_24;
      }
    }
    v32.m128i_i64[0] = (__int64)v23;
    memcpy(v25, v24, (size_t)v23);
    v26 = v43;
    v23 = (char *)v32.m128i_i64[0];
    goto LABEL_25;
  }
  if ( src[0] >= (void *)v50 )
    v15 = src[0];
  if ( !src[0] )
    v15 = (_BYTE *)v50;
  v16 = v15 - (char *)src[1];
  v17 = (void *)v16;
  if ( (v16 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v16 > 0xF )
  {
    if ( v16 > 0x1D )
    {
      v32.m128i_i64[0] = v16;
      v27 = v16 + 1;
      if ( (__int64)(v16 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v32.m128i_i64[0] = 30;
      v27 = 31;
    }
    n = v16;
    v41 = src[1];
    v28 = (_QWORD *)operator new(v27);
    v29 = v41;
    v17 = (void *)n;
    v18 = v28;
    if ( v41 )
    {
      v41 = (void *)n;
      v30 = memcpy(v28, v29, n);
      v17 = v41;
      v18 = v30;
    }
    if ( v43 != dest )
    {
      n = (size_t)v18;
      v41 = v17;
      operator delete(v43, dest[0] + 1LL);
      v18 = (_QWORD *)n;
      v17 = v41;
    }
    v43 = v18;
    dest[0] = v32.m128i_i64[0];
  }
  else if ( src[1] == dest )
  {
    v32.m128i_i64[0] = v16;
    std::string::_M_replace_cold();
    v17 = (void *)v32.m128i_i64[0];
    v18 = v43;
  }
  else
  {
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)src[1];
      }
      else
      {
        v32.m128i_i64[0] = v16;
        memcpy(dest, src[1], v16);
        v17 = (void *)v32.m128i_i64[0];
      }
    }
    v18 = dest;
  }
  v44 = (char *)v17;
  *((_BYTE *)v17 + (_QWORD)v18) = 0;
LABEL_12:
  v19 = *(_DWORD *)(a1 + 72);
  v32 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v37), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_4DC570((unsigned int *)(v37.m128i_i64[1] + 16), v19, v43, v44);
  if ( v43 != dest )
    operator delete(v43, dest[0] + 1LL);
  v20 = _mm_load_si128(&v32);
  v46 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v56[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v48[0] = v20;
  if ( v53 != v38 )
    operator delete(v53, v55[0] + 1LL);
  *((_QWORD *)&v48[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v33[0]);
  *(char **)((char *)&v46 + *(_QWORD *)(v9 - 24)) = v36;
  v21 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v48[0] = v6;
  *(_QWORD *)((char *)v48 + v21) = v35;
  v22 = *((_QWORD *)v3 - 3);
  v46 = v3;
  *(char **)((char *)&v46 + v22) = v34;
  v47 = 0;
  v56[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v56);
}

