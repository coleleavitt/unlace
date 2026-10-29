__int64 __fastcall sub_4C80B0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  char *v6; // rbp
  char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r14
  char *v13; // rsi
  __m128i si128; // xmm1
  __int64 v15; // rax
  char v16; // al
  _QWORD *v17; // rdi
  _BYTE *v18; // r8
  void *v19; // r13
  _BYTE *v20; // rdx
  signed __int64 v21; // r8
  size_t v22; // r12
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // rax
  char *v26; // rdi
  __int64 v27; // rax
  void *v29; // rsi
  unsigned __int64 v30; // rdi
  size_t v32; // [rsp+8h] [rbp-260h]
  std::locale *v33[2]; // [rsp+10h] [rbp-258h] BYREF
  _OWORD *v34; // [rsp+20h] [rbp-248h]
  char *v35; // [rsp+28h] [rbp-240h]
  __int64 v36; // [rsp+30h] [rbp-238h]
  char *v37; // [rsp+38h] [rbp-230h]
  __m128i v38; // [rsp+40h] [rbp-228h] BYREF
  _QWORD *v39; // [rsp+50h] [rbp-218h]
  char **v40; // [rsp+58h] [rbp-210h]
  __int64 v41; // [rsp+68h] [rbp-200h] BYREF
  _BYTE v42[16]; // [rsp+70h] [rbp-1F8h] BYREF
  char v43[32]; // [rsp+80h] [rbp-1E8h] BYREF
  char *v44; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-1C0h]
  _OWORD v46[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+D0h] [rbp-198h]
  __int128 v48; // [rsp+E0h] [rbp-188h]
  char v49[8]; // [rsp+F0h] [rbp-178h] BYREF
  int v50; // [rsp+F8h] [rbp-170h]
  void *v51; // [rsp+100h] [rbp-168h]
  size_t n; // [rsp+108h] [rbp-160h]
  _QWORD v53[2]; // [rsp+110h] [rbp-158h] BYREF
  _QWORD v54[28]; // [rsp+120h] [rbp-148h] BYREF
  __int16 v55; // [rsp+200h] [rbp-68h]
  __int128 v56; // [rsp+208h] [rbp-60h]
  __int128 v57; // [rsp+218h] [rbp-50h]

  v39 = a3;
  v38.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  v40 = &v44;
  *(__m128i *)v33 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v54);
  v55 = 0;
  v6 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v56 = 0;
  v7 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v57 = 0;
  v8 = *((_QWORD *)v6 - 3);
  v54[0] = (char *)&`vtable for'std::ios + 16;
  v54[27] = 0;
  v44 = v6;
  *(char **)((char *)&v44 + v8) = v7;
  v45 = 0;
  v35 = v7;
  std::ios::init();
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v34 = v46;
  v11 = (_QWORD *)((char *)v46 + *(_QWORD *)(v9 - 24));
  *(_QWORD *)&v46[0] = v9;
  *v11 = v10;
  v36 = v10;
  std::ios::init();
  v12 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v13 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  si128 = _mm_load_si128((const __m128i *)v33);
  v33[0] = (std::locale *)v49;
  v15 = *(_QWORD *)(v12 - 24);
  v37 = v13;
  *(char **)((char *)&v44 + v15) = v13;
  v46[0] = si128;
  v46[1] = 0;
  v44 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v54[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  *(_OWORD *)src = 0;
  v48 = 0;
  std::locale::locale((std::locale *)v49);
  v50 = 24;
  v38.m128i_i64[1] = (__int64)v53;
  *((_QWORD *)&v46[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v51 = v53;
  n = 0;
  LOBYTE(v53[0]) = 0;
  std::ios::init();
  v16 = sub_1625190(*(_QWORD *)(a2 + 8) + 56LL, *a4, &v41);
  v17 = *(_QWORD **)(a2 + 8);
  if ( v16 )
  {
    sub_64B9F0(v17, *v39, v41, v34);
  }
  else
  {
    sub_1606360(v42, *a4, *v17, 0, 0, 0);
    sub_160E8B0(v34, v42);
    sub_18572D0(v43);
  }
  v18 = (_BYTE *)v48;
  v19 = (void *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  if ( !v18 )
  {
    v22 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v32 = n;
        v30 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v32 = 30;
        v30 = 31;
      }
      v19 = (void *)operator new(v30);
      sub_233E40(a1);
      *(_QWORD *)a1 = v19;
      v29 = v51;
      *(_QWORD *)(a1 + 16) = v32;
    }
    else
    {
      if ( !n )
        goto LABEL_12;
      v29 = v51;
      if ( n == 1 )
      {
        *(_BYTE *)(a1 + 16) = *(_BYTE *)v51;
        goto LABEL_12;
      }
    }
    memcpy(v19, v29, v22);
LABEL_19:
    v19 = *(void **)a1;
    goto LABEL_12;
  }
  v20 = v18;
  if ( src[0] >= v18 )
    v18 = src[0];
  if ( !src[0] )
    v18 = v20;
  v21 = v18 - (char *)src[1];
  v22 = v21;
  if ( v21 < 0 )
    std::__throw_length_error("basic_string::_M_replace");
  if ( (unsigned __int64)v21 > 0xF )
  {
    sub_23A830((_QWORD *)a1, 0, 0, (char *)src[1], v21);
    goto LABEL_19;
  }
  if ( src[1] == v19 )
  {
    std::string::_M_replace_cold();
    v19 = *(void **)a1;
  }
  else if ( v21 )
  {
    if ( v21 == 1 )
      *(_BYTE *)(a1 + 16) = *(_BYTE *)src[1];
    else
      memcpy((void *)(a1 + 16), src[1], v21);
  }
LABEL_12:
  *(_QWORD *)(a1 + 8) = v22;
  *((_BYTE *)v19 + v22) = 0;
  v23 = _mm_loadl_epi64(&v38);
  v44 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v54[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v46[0] = _mm_unpacklo_epi64(v23, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v51 != (void *)v38.m128i_i64[1] )
    operator delete(v51, v53[0] + 1LL);
  *((_QWORD *)&v46[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v33[0]);
  v24 = v36;
  *(char **)((char *)&v44 + *(_QWORD *)(v12 - 24)) = v37;
  v25 = *(_QWORD *)(v9 - 24);
  *(_QWORD *)&v46[0] = v9;
  v26 = v35;
  *(_QWORD *)((char *)v46 + v25) = v24;
  v27 = *((_QWORD *)v6 - 3);
  v44 = v6;
  *(char **)((char *)&v44 + v27) = v26;
  v45 = 0;
  v54[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v54);
  return a1;
}

