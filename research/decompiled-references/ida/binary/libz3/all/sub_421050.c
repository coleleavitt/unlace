__int64 __fastcall sub_421050(__int64 a1, int a2, __int64 a3)
{
  char *v3; // rbx
  char *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r13
  char *v11; // r15
  __m128i si128; // xmm1
  _BYTE *v13; // rax
  size_t v14; // rax
  size_t v15; // r8
  _QWORD *v16; // r14
  int v17; // r14d
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r14
  __m128i v22; // xmm0
  __int64 v23; // rdx
  std::ios_base *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  size_t v28; // rdx
  void *v29; // rsi
  _QWORD *v30; // r14
  _QWORD *v31; // rax
  unsigned __int64 v32; // rdi
  _QWORD *v33; // rax
  const void *v34; // rsi
  unsigned __int64 v35; // rdi
  __int64 v36; // rax
  std::locale *v37[2]; // [rsp+0h] [rbp-268h] BYREF
  std::ios_base *v38; // [rsp+10h] [rbp-258h]
  int v39[2]; // [rsp+18h] [rbp-250h]
  int v40[4]; // [rsp+20h] [rbp-248h] BYREF
  int v41[2]; // [rsp+30h] [rbp-238h]
  int v42[2]; // [rsp+38h] [rbp-230h]
  int v43[2]; // [rsp+40h] [rbp-228h]
  void *ptr; // [rsp+48h] [rbp-220h]
  char **v45; // [rsp+50h] [rbp-218h]
  __int64 v46; // [rsp+58h] [rbp-210h]
  size_t v47; // [rsp+60h] [rbp-208h]
  size_t n; // [rsp+68h] [rbp-200h]
  _BYTE v49[8]; // [rsp+78h] [rbp-1F0h] BYREF
  void *v50; // [rsp+80h] [rbp-1E8h]
  size_t v51; // [rsp+88h] [rbp-1E0h]
  _QWORD dest[2]; // [rsp+90h] [rbp-1D8h] BYREF
  char *v53; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-1C0h]
  _OWORD v55[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+D0h] [rbp-198h]
  __int128 v57; // [rsp+E0h] [rbp-188h]
  int v58[4]; // [rsp+F0h] [rbp-178h] BYREF
  void *v59; // [rsp+100h] [rbp-168h]
  size_t v60; // [rsp+108h] [rbp-160h]
  _QWORD v61[2]; // [rsp+110h] [rbp-158h] BYREF
  int v62[2]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v63; // [rsp+1F8h] [rbp-70h]
  __int16 v64; // [rsp+200h] [rbp-68h]
  __int128 v65; // [rsp+208h] [rbp-60h]
  __int128 v66; // [rsp+218h] [rbp-50h]

  *(_QWORD *)v42 = a1;
  v45 = &v53;
  *(_QWORD *)v40 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 64;
  *(_QWORD *)v43 = a3;
  v38 = (std::ios_base *)v62;
  *(__m128i *)v37 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v62);
  v64 = 0;
  v65 = 0;
  v3 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v66 = 0;
  v4 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  *(_QWORD *)v62 = (char *)&`vtable for'std::ios + 16;
  v5 = *((_QWORD *)v3 - 3);
  v53 = v3;
  v63 = 0;
  *(char **)((char *)&v53 + v5) = v4;
  v54 = 0;
  *(_QWORD *)v39 = v4;
  std::ios::init();
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v7 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v55[0] = v6;
  v8 = (_QWORD *)((char *)v55 + v7);
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *v8 = v9;
  *(_QWORD *)v41 = v9;
  std::ios::init();
  v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v11 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v37);
  v37[0] = (std::locale *)v58;
  *(char **)((char *)&v53 + *(_QWORD *)(v10 - 24)) = v11;
  v53 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_QWORD *)v62 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v55[0] = si128;
  v55[1] = 0;
  *(_OWORD *)src = 0;
  v57 = 0;
  std::locale::locale((std::locale *)v58);
  ptr = v61;
  v58[2] = 24;
  *((_QWORD *)&v55[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v59 = v61;
  v60 = 0;
  LOBYTE(v61[0]) = 0;
  std::ios::init();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  v13 = (_BYTE *)v57;
  v51 = 0;
  v50 = dest;
  LOBYTE(dest[0]) = 0;
  if ( !(_QWORD)v57 )
  {
    v28 = v60;
    if ( v60 > 0xF )
    {
      if ( (v60 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v60 > 0x1D )
      {
        v46 = v60;
        v35 = v60 + 1;
        if ( (__int64)(v60 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v46 = 30;
        v35 = 31;
      }
      v47 = v60;
      v36 = operator new(v35);
      v28 = v47;
      v30 = (_QWORD *)v36;
      if ( v50 != dest )
      {
        operator delete(v50, dest[0] + 1LL);
        v28 = v47;
      }
      v50 = v30;
      v29 = v59;
      dest[0] = v46;
    }
    else
    {
      if ( !v60 )
      {
LABEL_24:
        v31 = dest;
LABEL_25:
        v51 = v28;
        *((_BYTE *)v31 + v28) = 0;
        goto LABEL_12;
      }
      v29 = v59;
      v30 = dest;
      if ( v60 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v59;
        goto LABEL_24;
      }
    }
    v46 = v28;
    memcpy(v30, v29, v28);
    v31 = v50;
    v28 = v46;
    goto LABEL_25;
  }
  if ( src[0] >= (void *)v57 )
    v13 = src[0];
  if ( !src[0] )
    v13 = (_BYTE *)v57;
  v14 = v13 - (char *)src[1];
  v15 = v14;
  if ( (v14 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v14 > 0xF )
  {
    if ( v14 > 0x1D )
    {
      v46 = v14;
      v32 = v14 + 1;
      if ( (__int64)(v14 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v46 = 30;
      v32 = 31;
    }
    n = v14;
    v47 = (size_t)src[1];
    v33 = (_QWORD *)operator new(v32);
    v34 = (const void *)v47;
    v15 = n;
    v16 = v33;
    if ( v47 )
    {
      v47 = n;
      memcpy(v33, v34, n);
      v15 = v47;
    }
    if ( v50 != dest )
    {
      v47 = v15;
      operator delete(v50, dest[0] + 1LL);
      v15 = v47;
    }
    v50 = v16;
    dest[0] = v46;
  }
  else if ( src[1] == dest )
  {
    v46 = v14;
    std::string::_M_replace_cold();
    v15 = v46;
    v16 = v50;
  }
  else
  {
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)src[1];
      }
      else
      {
        v46 = v14;
        memcpy(dest, src[1], v14);
        v15 = v46;
      }
    }
    v16 = dest;
  }
  v51 = v15;
  *((_BYTE *)v16 + v15) = 0;
LABEL_12:
  sub_180C5A0(v49, v50);
  v17 = v42[0];
  v18 = sub_15E3510(*(_QWORD *)v42, v49, 0, 0, *(_QWORD *)v43, 0);
  v21 = sub_15DC610(
          v17,
          v18,
          0,
          0,
          v19,
          v20,
          (int)v37[0],
          (int)v37[1],
          (int)v38,
          v39[0],
          v40[0],
          v40[2],
          v41[0],
          v42[0],
          v43[0],
          ptr);
  v22 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)v40),
          (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v50 != dest )
  {
    *(__m128i *)v40 = v22;
    operator delete(v50, dest[0] + 1LL);
    v22 = _mm_load_si128((const __m128i *)v40);
  }
  v55[0] = v22;
  v53 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  *(_QWORD *)v62 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v59 != ptr )
    operator delete(v59, v61[0] + 1LL);
  *((_QWORD *)&v55[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v37[0]);
  v23 = *(_QWORD *)v41;
  v24 = v38;
  *(char **)((char *)&v53 + *(_QWORD *)(v10 - 24)) = v11;
  v25 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v55[0] = v6;
  *(_QWORD *)((char *)v55 + v25) = v23;
  v26 = *((_QWORD *)v3 - 3);
  v53 = v3;
  *(char **)((char *)&v53 + v26) = *(char **)v39;
  v54 = 0;
  *(_QWORD *)v62 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v24);
  return v21;
}

