void __fastcall sub_4E2AD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r15
  __m128i si128; // xmm1
  void *v13; // rax
  __int64 v14; // rax
  _BYTE *v15; // rax
  size_t v16; // rax
  void *v17; // r8
  _QWORD *v18; // rcx
  int v19; // esi
  __int64 v20; // rbx
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
  std::locale *v33[2]; // [rsp+10h] [rbp-258h] BYREF
  int v34[2]; // [rsp+20h] [rbp-248h]
  __int64 v35; // [rsp+28h] [rbp-240h]
  __int64 v36[2]; // [rsp+30h] [rbp-238h] BYREF
  int v37[2]; // [rsp+40h] [rbp-228h]
  int v38[2]; // [rsp+48h] [rbp-220h]
  int v39[2]; // [rsp+50h] [rbp-218h]
  __int64 v40; // [rsp+58h] [rbp-210h]
  void *v41; // [rsp+60h] [rbp-208h]
  size_t n; // [rsp+68h] [rbp-200h]
  int v43[2]; // [rsp+78h] [rbp-1F0h] BYREF
  void *v44; // [rsp+80h] [rbp-1E8h] BYREF
  char *v45; // [rsp+88h] [rbp-1E0h]
  _QWORD dest[2]; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-1C0h]
  __int64 v49[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  int v50[4]; // [rsp+C0h] [rbp-1A8h]
  void *src[2]; // [rsp+D0h] [rbp-198h]
  int v52[4]; // [rsp+E0h] [rbp-188h]
  int v53; // [rsp+F0h] [rbp-178h] BYREF
  char v54[4]; // [rsp+F8h] [rbp-170h]
  void *v55; // [rsp+100h] [rbp-168h]
  int v56[2]; // [rsp+108h] [rbp-160h]
  int v57[2]; // [rsp+110h] [rbp-158h] BYREF
  _QWORD v58[28]; // [rsp+120h] [rbp-148h] BYREF
  __int16 v59; // [rsp+200h] [rbp-68h]
  __int128 v60; // [rsp+208h] [rbp-60h]
  __int128 v61; // [rsp+218h] [rbp-50h]

  *(_QWORD *)v39 = &v47;
  v36[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 64;
  *(__m128i *)v33 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v58);
  v58[27] = 0;
  v3 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v60 = 0;
  v59 = 0;
  v4 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v61 = 0;
  v58[0] = (char *)&`vtable for'std::ios + 16;
  v5 = *(_QWORD *)(v3 - 24);
  v47 = v3;
  *(__int64 *)((char *)&v47 + v5) = v4;
  v48 = 0;
  *(_QWORD *)v34 = v4;
  std::ios::init();
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v7 = *(_QWORD *)(v6 - 24);
  v49[0] = v6;
  v8 = (__int64 *)((char *)v49 + v7);
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *v8 = v9;
  v35 = v9;
  std::ios::init();
  v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v11 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v33);
  v33[0] = (std::locale *)&v53;
  *(__int64 *)((char *)&v47 + *(_QWORD *)(v10 - 24)) = v11;
  v47 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v58[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  *(__m128i *)v49 = si128;
  *(_OWORD *)v50 = 0;
  *(_OWORD *)src = 0;
  *(_OWORD *)v52 = 0;
  std::locale::locale((std::locale *)&v53);
  *(_QWORD *)v37 = v57;
  *(_DWORD *)v54 = 24;
  v49[1] = (__int64)&`vtable for'std::stringbuf + 16;
  v55 = v57;
  *(_QWORD *)v56 = 0;
  LOBYTE(v57[0]) = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v13 = sub_4DA320((_QWORD *)a2);
  v14 = (*(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)v13 + 192LL))(v13, " val: ");
  *(_QWORD *)v43 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)v38 = &v44;
  sub_4C7BB0((__int64)&v44, v14, v43);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v44 != dest )
    operator delete(v44, dest[0] + 1LL);
  v15 = *(_BYTE **)v52;
  v44 = dest;
  v45 = nullptr;
  LOBYTE(dest[0]) = 0;
  if ( !*(_QWORD *)v52 )
  {
    v23 = *(char **)v56;
    if ( *(_QWORD *)v56 > 0xFu )
    {
      if ( *(__int64 *)v56 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      if ( *(_QWORD *)v56 > 0x1Du )
      {
        v40 = *(_QWORD *)v56;
        v31 = *(_QWORD *)v56 + 1LL;
        if ( *(_QWORD *)v56 + 1LL < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v40 = 30;
        v31 = 31;
      }
      n = *(_QWORD *)v56;
      v41 = (void *)operator new(v31);
      sub_233E40(*(__int64 *)v38);
      v25 = v41;
      v24 = v55;
      v23 = (char *)n;
      v44 = v41;
      dest[0] = v40;
    }
    else
    {
      if ( !*(_QWORD *)v56 )
      {
LABEL_26:
        v26 = dest;
LABEL_27:
        v45 = v23;
        v23[(_QWORD)v26] = 0;
        goto LABEL_14;
      }
      v24 = v55;
      v25 = dest;
      if ( *(_QWORD *)v56 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v55;
        goto LABEL_26;
      }
    }
    v40 = (__int64)v23;
    memcpy(v25, v24, (size_t)v23);
    v26 = v44;
    v23 = (char *)v40;
    goto LABEL_27;
  }
  if ( src[0] >= (void *)*(_QWORD *)v52 )
    v15 = src[0];
  if ( !src[0] )
    v15 = *(_BYTE **)v52;
  v16 = v15 - (char *)src[1];
  v17 = (void *)v16;
  if ( (v16 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v16 > 0xF )
  {
    if ( v16 > 0x1D )
    {
      v40 = v16;
      v27 = v16 + 1;
      if ( (__int64)(v16 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v40 = 30;
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
    if ( v44 != dest )
    {
      n = (size_t)v18;
      v41 = v17;
      operator delete(v44, dest[0] + 1LL);
      v18 = (_QWORD *)n;
      v17 = v41;
    }
    v44 = v18;
    dest[0] = v40;
  }
  else if ( src[1] == dest )
  {
    v40 = v16;
    std::string::_M_replace_cold();
    v17 = (void *)v40;
    v18 = v44;
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
        v40 = v16;
        memcpy(dest, src[1], v16);
        v17 = (void *)v40;
      }
    }
    v18 = dest;
  }
  v45 = (char *)v17;
  *((_BYTE *)v17 + (_QWORD)v18) = 0;
LABEL_14:
  v19 = *(_DWORD *)(a1 + 72);
  *(__m128i *)v36 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)v36),
                      (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_4DC570((unsigned int *)(a2 + 16), v19, v44, v45);
  if ( v44 != dest )
    operator delete(v44, dest[0] + 1LL);
  *(__m128i *)v49 = _mm_load_si128((const __m128i *)v36);
  v47 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v58[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v55 != *(void **)v37 )
    operator delete(v55, *(_QWORD *)v57 + 1LL);
  v49[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v33[0]);
  v20 = v35;
  *(__int64 *)((char *)&v47 + *(_QWORD *)(v10 - 24)) = v11;
  v21 = *(_QWORD *)(v6 - 24);
  v49[0] = v6;
  *(__int64 *)((char *)v49 + v21) = v20;
  v22 = *(_QWORD *)(v3 - 24);
  v47 = v3;
  *(__int64 *)((char *)&v47 + v22) = *(_QWORD *)v34;
  v48 = 0;
  v58[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v58);
}

