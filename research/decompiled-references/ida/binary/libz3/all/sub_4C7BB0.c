__int64 __fastcall sub_4C7BB0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char *v5; // rbp
  char *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // r15
  char *v12; // rsi
  __m128i si128; // xmm1
  __int64 v14; // rax
  _BYTE *v15; // r8
  void *v16; // r14
  _BYTE *v17; // rdx
  signed __int64 v18; // r8
  size_t v19; // r13
  __m128i v20; // xmm0
  char *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  void *v25; // rsi
  unsigned __int64 v26; // rdi
  _QWORD *v27; // rax
  std::locale *v28[2]; // [rsp+10h] [rbp-258h] BYREF
  _QWORD *v29; // [rsp+20h] [rbp-248h]
  _OWORD *v30; // [rsp+28h] [rbp-240h]
  char *v31; // [rsp+30h] [rbp-238h]
  __int64 v32; // [rsp+38h] [rbp-230h]
  char *v33; // [rsp+40h] [rbp-228h]
  __m128i v34; // [rsp+48h] [rbp-220h] BYREF
  char **v35; // [rsp+58h] [rbp-210h]
  __int64 v36; // [rsp+68h] [rbp-200h] BYREF
  _BYTE v37[16]; // [rsp+70h] [rbp-1F8h] BYREF
  char v38[32]; // [rsp+80h] [rbp-1E8h] BYREF
  char *v39; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-1C0h]
  _OWORD v41[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+D0h] [rbp-198h]
  __int128 v43; // [rsp+E0h] [rbp-188h]
  char v44[8]; // [rsp+F0h] [rbp-178h] BYREF
  int v45; // [rsp+F8h] [rbp-170h]
  void *v46; // [rsp+100h] [rbp-168h]
  size_t n; // [rsp+108h] [rbp-160h]
  _QWORD v48[2]; // [rsp+110h] [rbp-158h] BYREF
  _QWORD v49[28]; // [rsp+120h] [rbp-148h] BYREF
  __int16 v50; // [rsp+200h] [rbp-68h]
  __int128 v51; // [rsp+208h] [rbp-60h]
  __int128 v52; // [rsp+218h] [rbp-50h]

  v29 = a3;
  v35 = &v39;
  v34.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  *(__m128i *)v28 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v49);
  v50 = 0;
  v5 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v51 = 0;
  v6 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v52 = 0;
  v7 = *((_QWORD *)v5 - 3);
  v49[0] = (char *)&`vtable for'std::ios + 16;
  v49[27] = 0;
  v39 = v5;
  *(char **)((char *)&v39 + v7) = v6;
  v40 = 0;
  v31 = v6;
  std::ios::init();
  v8 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v30 = v41;
  v10 = (_QWORD *)((char *)v41 + *(_QWORD *)(v8 - 24));
  *(_QWORD *)&v41[0] = v8;
  *v10 = v9;
  v32 = v9;
  std::ios::init();
  v11 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v12 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v28);
  v28[0] = (std::locale *)v44;
  v14 = *(_QWORD *)(v11 - 24);
  v33 = v12;
  *(char **)((char *)&v39 + v14) = v12;
  v41[0] = si128;
  v41[1] = 0;
  v39 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v49[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  *(_OWORD *)src = 0;
  v43 = 0;
  std::locale::locale((std::locale *)v44);
  v45 = 24;
  v34.m128i_i64[1] = (__int64)v48;
  *((_QWORD *)&v41[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v46 = v48;
  n = 0;
  LOBYTE(v48[0]) = 0;
  std::ios::init();
  if ( (unsigned __int8)sub_1625190(*(_QWORD *)(a2 + 8) + 56LL, *v29, &v36) )
  {
    std::ostream::_M_insert<unsigned long>();
  }
  else
  {
    sub_1606360(v37, *v29, **(_QWORD **)(a2 + 8), 0, 0, 0);
    sub_160E8B0(v30, v37);
    sub_18572D0(v38);
  }
  v15 = (_BYTE *)v43;
  v16 = (void *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  if ( !v15 )
  {
    v19 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v29 = (_QWORD *)n;
        v26 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v29 = &qword_18 + 6;
        v26 = 31;
      }
      v16 = (void *)operator new(v26);
      sub_233E40(a1);
      v27 = v29;
      *(_QWORD *)a1 = v16;
      v25 = v46;
      *(_QWORD *)(a1 + 16) = v27;
    }
    else
    {
      if ( !n )
        goto LABEL_12;
      v25 = v46;
      if ( n == 1 )
      {
        *(_BYTE *)(a1 + 16) = *(_BYTE *)v46;
        goto LABEL_12;
      }
    }
    memcpy(v16, v25, v19);
LABEL_19:
    v16 = *(void **)a1;
    goto LABEL_12;
  }
  v17 = v15;
  if ( src[0] >= v15 )
    v15 = src[0];
  if ( !src[0] )
    v15 = v17;
  v18 = v15 - (char *)src[1];
  v19 = v18;
  if ( v18 < 0 )
    std::__throw_length_error("basic_string::_M_replace");
  if ( (unsigned __int64)v18 > 0xF )
  {
    sub_23A830((_QWORD *)a1, 0, 0, (char *)src[1], v18);
    goto LABEL_19;
  }
  if ( src[1] == v16 )
  {
    std::string::_M_replace_cold();
    v16 = *(void **)a1;
  }
  else if ( v18 )
  {
    if ( v18 == 1 )
      *(_BYTE *)(a1 + 16) = *(_BYTE *)src[1];
    else
      memcpy((void *)(a1 + 16), src[1], v18);
  }
LABEL_12:
  *(_QWORD *)(a1 + 8) = v19;
  *((_BYTE *)v16 + v19) = 0;
  v20 = _mm_loadl_epi64(&v34);
  v39 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v49[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v41[0] = _mm_unpacklo_epi64(v20, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v46 != (void *)v34.m128i_i64[1] )
    operator delete(v46, v48[0] + 1LL);
  *((_QWORD *)&v41[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v28[0]);
  v21 = v31;
  *(char **)((char *)&v39 + *(_QWORD *)(v11 - 24)) = v33;
  v22 = *(_QWORD *)(v8 - 24);
  *(_QWORD *)&v41[0] = v8;
  *(_QWORD *)((char *)v41 + v22) = v32;
  v23 = *((_QWORD *)v5 - 3);
  v39 = v5;
  *(char **)((char *)&v39 + v23) = v21;
  v40 = 0;
  v49[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v49);
  return a1;
}

