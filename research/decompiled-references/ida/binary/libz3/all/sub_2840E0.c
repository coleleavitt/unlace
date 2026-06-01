__int64 __fastcall sub_2840E0(__int64 a1, __int64 a2, int a3, void *a4)
{
  char *v6; // r12
  char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  char *v12; // rcx
  __m128i si128; // xmm1
  __int64 v14; // rax
  _BYTE *v15; // rax
  void *v16; // r14
  _BYTE *v17; // rcx
  const void *v18; // r15
  size_t v19; // rax
  size_t v20; // r13
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rax
  void *v25; // rsi
  unsigned __int64 v26; // rdi
  void *v27; // rax
  void *v28; // rcx
  void *v29; // rdi
  __int64 v30; // rax
  size_t v31; // rax
  unsigned __int64 v32; // rdi
  __int64 v33; // r15
  size_t v34; // rax
  std::locale *v35[2]; // [rsp+0h] [rbp-228h] BYREF
  std::ios_base *v36; // [rsp+10h] [rbp-218h]
  size_t v37; // [rsp+18h] [rbp-210h]
  void *v38; // [rsp+20h] [rbp-208h]
  char *v39; // [rsp+28h] [rbp-200h]
  __int64 v40; // [rsp+30h] [rbp-1F8h]
  __int64 v41; // [rsp+38h] [rbp-1F0h]
  char *v42; // [rsp+40h] [rbp-1E8h]
  __m128i v43; // [rsp+48h] [rbp-1E0h] BYREF
  char **v44; // [rsp+58h] [rbp-1D0h]
  char *v45; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-1C0h]
  _OWORD v47[2]; // [rsp+70h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+90h] [rbp-198h]
  __int128 v49; // [rsp+A0h] [rbp-188h]
  char v50[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v51; // [rsp+B8h] [rbp-170h]
  void *v52; // [rsp+C0h] [rbp-168h]
  size_t n; // [rsp+C8h] [rbp-160h]
  _QWORD v54[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v55[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v56; // [rsp+1C0h] [rbp-68h]
  __int128 v57; // [rsp+1C8h] [rbp-60h]
  __int128 v58; // [rsp+1D8h] [rbp-50h]

  v38 = a4;
  LODWORD(v37) = a3;
  v43.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  v44 = &v45;
  v36 = (std::ios_base *)v55;
  *(__m128i *)v35 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v55);
  v56 = 0;
  v6 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v57 = 0;
  v58 = 0;
  v7 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v8 = *((_QWORD *)v6 - 3);
  v55[0] = (char *)&`vtable for'std::ios + 16;
  v55[27] = 0;
  v45 = v6;
  *(char **)((char *)&v45 + v8) = v7;
  v46 = 0;
  v39 = v7;
  std::ios::init();
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v11 = *(_QWORD *)(v9 - 24);
  *(_QWORD *)&v47[0] = v9;
  v40 = v10;
  *(_QWORD *)((char *)v47 + v11) = v10;
  std::ios::init();
  v12 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v35);
  v14 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL);
  v41 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v42 = v12;
  *(char **)((char *)&v45 + v14) = v12;
  v45 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v55[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v35[0] = (std::locale *)v50;
  v47[0] = si128;
  v47[1] = 0;
  *(_OWORD *)src = 0;
  v49 = 0;
  std::locale::locale((std::locale *)v50);
  v51 = 24;
  v43.m128i_i64[1] = (__int64)v54;
  *((_QWORD *)&v47[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v52 = v54;
  n = 0;
  LOBYTE(v54[0]) = 0;
  std::ios::init();
  sub_6516E0(a2 + 48, (unsigned int)v37, v38, v47);
  v15 = (_BYTE *)v49;
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
        v37 = n;
        v32 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v37 = 30;
        v32 = 31;
      }
      v33 = operator new(v32);
      if ( v16 != *(void **)a1 )
        operator delete(*(void **)a1, *(_QWORD *)(a1 + 16) + 1LL);
      v34 = v37;
      *(_QWORD *)a1 = v33;
      v16 = (void *)v33;
      v25 = v52;
      *(_QWORD *)(a1 + 16) = v34;
    }
    else
    {
      if ( !n )
        goto LABEL_10;
      v25 = v52;
      if ( n == 1 )
      {
        *(_BYTE *)(a1 + 16) = *(_BYTE *)v52;
        goto LABEL_10;
      }
    }
    memcpy(v16, v25, v20);
    goto LABEL_36;
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
      if ( v19 )
      {
        if ( v19 == 1 )
          *(_BYTE *)(a1 + 16) = *(_BYTE *)src[1];
        else
          memcpy((void *)(a1 + 16), src[1], v19);
      }
      goto LABEL_10;
    }
    std::string::_M_replace_cold();
LABEL_36:
    v16 = *(void **)a1;
    goto LABEL_10;
  }
  if ( v19 > 0x1D )
  {
    v37 = v19;
    v26 = v19 + 1;
    if ( (__int64)(v19 + 1) < 0 )
      std::__throw_bad_alloc();
  }
  else
  {
    v37 = 30;
    v26 = 31;
  }
  v27 = (void *)operator new(v26);
  v28 = v27;
  if ( v18 )
    v28 = memcpy(v27, v18, v20);
  v29 = *(void **)a1;
  if ( v16 != *(void **)a1 )
  {
    v30 = *(_QWORD *)(a1 + 16);
    v38 = v28;
    operator delete(v29, v30 + 1);
    v28 = v38;
  }
  v31 = v37;
  *(_QWORD *)a1 = v28;
  v16 = v28;
  *(_QWORD *)(a1 + 16) = v31;
LABEL_10:
  *(_QWORD *)(a1 + 8) = v20;
  *((_BYTE *)v16 + v20) = 0;
  v21 = _mm_loadl_epi64(&v43);
  v45 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v55[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v47[0] = _mm_unpacklo_epi64(v21, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v52 != (void *)v43.m128i_i64[1] )
    operator delete(v52, v54[0] + 1LL);
  *((_QWORD *)&v47[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v35[0]);
  *(char **)((char *)&v45 + *(_QWORD *)(v41 - 24)) = v42;
  v22 = *(_QWORD *)(v9 - 24);
  *(_QWORD *)&v47[0] = v9;
  *(_QWORD *)((char *)v47 + v22) = v40;
  v23 = *((_QWORD *)v6 - 3);
  v45 = v6;
  *(char **)((char *)&v45 + v23) = v39;
  v46 = 0;
  v55[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v36);
  return a1;
}

