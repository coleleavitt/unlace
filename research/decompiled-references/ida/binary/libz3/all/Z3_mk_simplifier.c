__int64 __fastcall Z3_mk_simplifier(__int64 a1, const char *a2)
{
  char v3; // bp
  __int64 v4; // rax
  __int64 v5; // r15
  void (__fastcall *v6)(void **, __int64, __int64); // rax
  void (__fastcall *v7)(__m128i *, void **, __int64); // rax
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __int64 v10; // rdi
  void (__fastcall *v11)(__m128i *, __m128i *, __int64); // rax
  __m128i v12; // xmm0
  __m128i v14; // kr00_16
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char *v19; // rdx
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __m128i si128; // xmm2
  __int64 v23; // rdx
  __int64 v24; // rax
  _BYTE *v25; // rax
  __m128i *p_dest; // rcx
  size_t v27; // rax
  void *v28; // r8
  void *v29; // r9
  __int64 v30; // rax
  __m128i *v31; // rax
  unsigned __int64 v32; // rdi
  void *v33; // rax
  const void *v34; // rsi
  size_t v35; // rdx
  void *v36; // rax
  void *v37; // rdx
  __m128i *v38; // rax
  void *v39; // rsi
  __m128i *v40; // r12
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  __m128i v43; // [rsp+10h] [rbp-258h] BYREF
  std::locale *v44[2]; // [rsp+20h] [rbp-248h] BYREF
  __int64 v45; // [rsp+30h] [rbp-238h]
  __int64 v46; // [rsp+38h] [rbp-230h]
  __int64 v47; // [rsp+40h] [rbp-228h]
  __int64 v48; // [rsp+48h] [rbp-220h]
  __int64 v49; // [rsp+50h] [rbp-218h]
  __m128i v50; // [rsp+58h] [rbp-210h] BYREF
  size_t v51; // [rsp+68h] [rbp-200h]
  size_t n; // [rsp+70h] [rbp-1F8h]
  __m128i *v53; // [rsp+78h] [rbp-1F0h]
  void *v54[2]; // [rsp+80h] [rbp-1E8h] BYREF
  __m128i dest; // [rsp+90h] [rbp-1D8h] BYREF
  __m128i v56; // [rsp+A0h] [rbp-1C8h] BYREF
  _OWORD v57[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+D0h] [rbp-198h]
  __int128 v59; // [rsp+E0h] [rbp-188h]
  char v60[8]; // [rsp+F0h] [rbp-178h] BYREF
  int v61; // [rsp+F8h] [rbp-170h]
  void *v62; // [rsp+100h] [rbp-168h]
  size_t v63; // [rsp+108h] [rbp-160h]
  _QWORD v64[2]; // [rsp+110h] [rbp-158h] BYREF
  _QWORD v65[28]; // [rsp+120h] [rbp-148h] BYREF
  __int16 v66; // [rsp+200h] [rbp-68h]
  __int128 v67; // [rsp+208h] [rbp-60h]
  __int128 v68; // [rsp+218h] [rbp-50h]

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29CCE0();
  *(_DWORD *)(a1 + 1520) = 0;
  sub_180C5A0(&v56, a2);
  v4 = sub_DEC500(a1, &v56);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(void (__fastcall **)(void **, __int64, __int64))(v4 + 32);
    dest = 0u;
    *(_OWORD *)v54 = 0;
    if ( v6 )
    {
      v6(v54, v5 + 16, 2);
      dest = _mm_loadu_si128((const __m128i *)(v5 + 32));
    }
    v5 = sub_186B270(0x38u);
    sub_2518F0(v5, a1);
    *(_QWORD *)(v5 + 40) = 0;
    *(_QWORD *)v5 = &off_1C4C920;
    v7 = (void (__fastcall *)(__m128i *, void **, __int64))dest.m128i_i64[0];
    *(_QWORD *)(v5 + 48) = 0;
    v57[0] = 0u;
    *(_OWORD *)(v5 + 24) = 0;
    v56 = 0;
    if ( v7 )
    {
      v7(&v56, v54, 2);
      v8 = _mm_loadu_si128((const __m128i *)(v5 + 40));
      v9 = _mm_loadu_si128((const __m128i *)(v5 + 24));
      v10 = v56.m128i_i64[1];
      v11 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v8.m128i_i64[0];
      v57[0] = v8;
      v12 = _mm_load_si128(&dest);
      *(_QWORD *)(v5 + 24) = v56.m128i_i64[0];
      *(_QWORD *)(v5 + 32) = v10;
      v56 = v9;
      *(__m128i *)(v5 + 40) = v12;
      if ( v11 )
        v11(&v56, &v56, 3);
    }
    else
    {
      v14 = v56;
      *(_OWORD *)(v5 + 40) = 0;
      *(__m128i *)(v5 + 24) = v14;
    }
    sub_24FBE0(a1, v5);
    if ( !v3 )
    {
      if ( dest.m128i_i64[0] )
        ((void (__fastcall *)(void **, void **, __int64))dest.m128i_i64[0])(v54, v54, 3);
      return v5;
    }
    sub_2BB620(v5);
    if ( dest.m128i_i64[0] )
      ((void (__fastcall *)(void **, void **, __int64))dest.m128i_i64[0])(v54, v54, 3);
LABEL_34:
    byte_1C7EBA0 = 1;
    return v5;
  }
  v50.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  *(__m128i *)v44 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v65);
  v67 = 0;
  v68 = 0;
  v65[0] = (char *)&`vtable for'std::ios + 16;
  v66 = 0;
  v15 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v16 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v65[27] = 0;
  v17 = *(_QWORD *)(v15 - 24);
  v56.m128i_i64[0] = v15;
  v45 = v16;
  *(__int64 *)((char *)v56.m128i_i64 + v17) = v16;
  v56.m128i_i64[1] = 0;
  std::ios::init();
  v43.m128i_i64[0] = (__int64)v57;
  v18 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v19 = (char *)v57 + *(_QWORD *)(v18 - 24);
  *(_QWORD *)&v57[0] = v18;
  v20 = v19;
  v21 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v46 = v18;
  *v20 = v21;
  v47 = v21;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v44);
  v23 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v48 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v24 = *(_QWORD *)(v48 - 24);
  v49 = v23;
  *(__int64 *)((char *)v56.m128i_i64 + v24) = v23;
  v57[0] = si128;
  v56.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 24;
  v65[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v44[0] = (std::locale *)v60;
  v57[1] = 0;
  *(_OWORD *)src = 0;
  v59 = 0;
  std::locale::locale((std::locale *)v60);
  v61 = 24;
  v63 = 0;
  *((_QWORD *)&v57[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v50.m128i_i64[1] = (__int64)v64;
  v62 = v64;
  LOBYTE(v64[0]) = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( a2 )
  {
    strlen(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    std::ios::clear();
  }
  v25 = (_BYTE *)v59;
  p_dest = &dest;
  v54[1] = nullptr;
  v54[0] = &dest;
  dest.m128i_i8[0] = 0;
  if ( !(_QWORD)v59 )
  {
    v37 = (void *)v63;
    if ( v63 > 0xF )
    {
      if ( (v63 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v63 > 0x1D )
      {
        v43.m128i_i64[0] = v63;
        v41 = v63 + 1;
        if ( (__int64)(v63 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v43.m128i_i64[0] = 30;
        v41 = 31;
      }
      n = (size_t)&dest;
      v51 = v63;
      v42 = operator new(v41);
      p_dest = (__m128i *)n;
      v40 = (__m128i *)v42;
      v37 = (void *)v51;
      if ( v54[0] != (void *)n )
      {
        operator delete(v54[0], dest.m128i_i64[0] + 1);
        p_dest = (__m128i *)n;
        v37 = (void *)v51;
      }
      v54[0] = v40;
      v39 = v62;
      dest.m128i_i64[0] = v43.m128i_i64[0];
    }
    else
    {
      if ( !v63 )
      {
LABEL_51:
        v38 = &dest;
LABEL_52:
        v54[1] = v37;
        *((_BYTE *)v37 + (_QWORD)v38) = 0;
        goto LABEL_27;
      }
      v39 = v62;
      v40 = &dest;
      if ( v63 == 1 )
      {
        dest.m128i_i8[0] = *(_BYTE *)v62;
        goto LABEL_51;
      }
    }
    v51 = (size_t)p_dest;
    v43.m128i_i64[0] = (__int64)v37;
    memcpy(v40, v39, (size_t)v37);
    p_dest = (__m128i *)v51;
    v37 = (void *)v43.m128i_i64[0];
    v38 = (__m128i *)v54[0];
    goto LABEL_52;
  }
  if ( src[0] >= (void *)v59 )
    v25 = src[0];
  if ( !src[0] )
    v25 = (_BYTE *)v59;
  v27 = v25 - (char *)src[1];
  v28 = (void *)v27;
  if ( (v27 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v27 > 0xF )
  {
    if ( v27 > 0x1D )
    {
      v43.m128i_i64[0] = v27;
      v32 = v27 + 1;
      if ( (__int64)(v27 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v43.m128i_i64[0] = 30;
      v32 = 31;
    }
    v53 = &dest;
    n = v27;
    v51 = (size_t)src[1];
    v33 = (void *)operator new(v32);
    v34 = (const void *)v51;
    v28 = (void *)n;
    v29 = v33;
    p_dest = v53;
    if ( v51 )
    {
      v35 = n;
      n = (size_t)v53;
      v51 = (size_t)v28;
      v36 = memcpy(v33, v34, v35);
      p_dest = (__m128i *)n;
      v28 = (void *)v51;
      v29 = v36;
    }
    if ( v54[0] != p_dest )
    {
      v53 = p_dest;
      n = (size_t)v28;
      v51 = (size_t)v29;
      operator delete(v54[0], dest.m128i_i64[0] + 1);
      p_dest = v53;
      v28 = (void *)n;
      v29 = (void *)v51;
    }
    v54[0] = v29;
    dest.m128i_i64[0] = v43.m128i_i64[0];
  }
  else if ( src[1] == &dest )
  {
    v51 = v27;
    std::string::_M_replace_cold();
    v28 = (void *)v51;
    p_dest = &dest;
    v29 = v54[0];
  }
  else
  {
    if ( v27 )
    {
      if ( v27 == 1 )
      {
        dest.m128i_i8[0] = *(_BYTE *)src[1];
      }
      else
      {
        v43.m128i_i64[0] = v27;
        v31 = (__m128i *)memcpy(&dest, src[1], v27);
        v28 = (void *)v43.m128i_i64[0];
        p_dest = v31;
      }
    }
    v29 = p_dest;
  }
  v54[1] = v28;
  *((_BYTE *)v28 + (_QWORD)v29) = 0;
LABEL_27:
  v51 = (size_t)p_dest;
  v43 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v50), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_24EC20(a1, 3, v54);
  if ( v54[0] != (void *)v51 )
    operator delete(v54[0], dest.m128i_i64[0] + 1);
  if ( v3 )
    sub_2BB620(0);
  v57[0] = _mm_load_si128(&v43);
  v56.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 24;
  v65[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v62 != (void *)v50.m128i_i64[1] )
    operator delete(v62, v64[0] + 1LL);
  *((_QWORD *)&v57[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v44[0]);
  *(__int64 *)((char *)v56.m128i_i64 + *(_QWORD *)(v48 - 24)) = v49;
  *(_QWORD *)&v57[0] = v46;
  *(_QWORD *)((char *)v57 + *(_QWORD *)(v46 - 24)) = v47;
  v30 = *(_QWORD *)(v15 - 24);
  v56.m128i_i64[0] = v15;
  *(__int64 *)((char *)v56.m128i_i64 + v30) = v45;
  v56.m128i_i64[1] = 0;
  v65[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v65);
  if ( v3 )
    goto LABEL_34;
  return v5;
}

