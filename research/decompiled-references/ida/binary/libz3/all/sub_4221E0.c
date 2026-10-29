__int64 *__fastcall sub_4221E0(__int64 *a1, __int64 a2)
{
  char *v3; // rbp
  char *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r15
  __m128i si128; // xmm1
  __int64 v12; // rax
  _BYTE *v13; // rax
  void *v14; // r13
  _BYTE *v15; // rsi
  _BYTE *v16; // rsi
  size_t v17; // rax
  size_t v18; // r14
  _QWORD *v19; // r13
  __m128i v20; // xmm0
  __int64 v22; // rsi
  char *v23; // rdx
  __int64 v24; // rax
  std::ios_base *v25; // rdi
  __int64 v26; // rax
  void (__fastcall **v28)(_QWORD *); // rax
  unsigned __int64 v29; // rdi
  char **v30; // rax
  char **v31; // r8
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rdi
  __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // rdi
  std::locale *v39[2]; // [rsp+0h] [rbp-238h] BYREF
  __m128i v40; // [rsp+10h] [rbp-228h] BYREF
  std::ios_base *v41; // [rsp+20h] [rbp-218h]
  char *v42; // [rsp+28h] [rbp-210h]
  __int64 v43; // [rsp+30h] [rbp-208h]
  char *v44; // [rsp+38h] [rbp-200h]
  __m128i v45; // [rsp+40h] [rbp-1F8h] BYREF
  char **v46; // [rsp+50h] [rbp-1E8h]
  void *v47; // [rsp+58h] [rbp-1E0h]
  void *ptr; // [rsp+68h] [rbp-1D0h] BYREF
  char *v49; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v50; // [rsp+78h] [rbp-1C0h]
  _OWORD v51[2]; // [rsp+80h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+A0h] [rbp-198h]
  __int128 v53; // [rsp+B0h] [rbp-188h]
  char v54[8]; // [rsp+C0h] [rbp-178h] BYREF
  int v55; // [rsp+C8h] [rbp-170h]
  void *v56; // [rsp+D0h] [rbp-168h]
  size_t n; // [rsp+D8h] [rbp-160h]
  _QWORD v58[2]; // [rsp+E0h] [rbp-158h] BYREF
  _QWORD v59[28]; // [rsp+F0h] [rbp-148h] BYREF
  __int16 v60; // [rsp+1D0h] [rbp-68h]
  __int128 v61; // [rsp+1D8h] [rbp-60h]
  __int128 v62; // [rsp+1E8h] [rbp-50h]

  v40.m128i_i64[0] = a2;
  v46 = &v49;
  v45.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                   + 64;
  v41 = (std::ios_base *)v59;
  *(__m128i *)v39 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                              + 64),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v59);
  v60 = 0;
  v3 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v61 = 0;
  v4 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v62 = 0;
  v5 = *((_QWORD *)v3 - 3);
  v59[0] = (char *)&`vtable for'std::ios + 16;
  v59[27] = 0;
  v49 = v3;
  *(char **)((char *)&v49 + v5) = v4;
  v50 = 0;
  v42 = v4;
  std::ios::init();
  v6 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  v7 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v51[0] = v6;
  v8 = (_QWORD *)((char *)v51 + v7);
  v9 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  *v8 = v9;
  v43 = v9;
  std::ios::init();
  v10 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  si128 = _mm_load_si128((const __m128i *)v39);
  v12 = *(_QWORD *)(v10 - 24);
  v44 = (char *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  *(char **)((char *)&v49 + v12) = v44;
  v49 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v59[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v39[0] = (std::locale *)v54;
  v51[0] = si128;
  v51[1] = 0;
  *(_OWORD *)src = 0;
  v53 = 0;
  std::locale::locale((std::locale *)v54);
  v45.m128i_i64[1] = (__int64)v58;
  v55 = 24;
  *((_QWORD *)&v51[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v56 = v58;
  n = 0;
  LOBYTE(v58[0]) = 0;
  std::ios::init();
  ptr = nullptr;
  sub_421690((__int64 *)v40.m128i_i64[0], &ptr);
  sub_13525A0((std::ostream *)v51, (int)ptr);
  v13 = (_BYTE *)v53;
  v14 = a1 + 2;
  a1[1] = 0;
  *a1 = (__int64)(a1 + 2);
  *((_BYTE *)a1 + 16) = 0;
  if ( !v13 )
  {
    v18 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v40.m128i_i64[0] = n;
        v35 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v40.m128i_i64[0] = 30;
        v35 = 31;
      }
      v36 = operator new(v35);
      v37 = (void *)*a1;
      if ( v14 != (void *)*a1 )
      {
        v46 = (char **)v36;
        operator delete(v37, a1[2] + 1);
        v36 = (__int64)v46;
      }
      v38 = v40.m128i_i64[0];
      *a1 = v36;
      v14 = (void *)v36;
      v16 = v56;
      a1[2] = v38;
    }
    else
    {
      if ( !n )
        goto LABEL_10;
      v16 = v56;
      if ( n == 1 )
        goto LABEL_18;
    }
    memcpy(v14, v16, v18);
    v14 = (void *)*a1;
    goto LABEL_10;
  }
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
      v40.m128i_i64[0] = v17;
      v29 = v17 + 1;
      if ( (__int64)(v17 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v40.m128i_i64[0] = 30;
      v29 = 31;
    }
    v47 = src[1];
    v30 = (char **)operator new(v29);
    v31 = v30;
    if ( v47 )
      v31 = (char **)memcpy(v30, v47, v18);
    v32 = (void *)*a1;
    if ( v14 != (void *)*a1 )
    {
      v33 = a1[2];
      v46 = v31;
      operator delete(v32, v33 + 1);
      v31 = v46;
    }
    v34 = v40.m128i_i64[0];
    *a1 = (__int64)v31;
    v14 = v31;
    a1[2] = v34;
    goto LABEL_10;
  }
  if ( src[1] == v14 )
  {
    std::string::_M_replace_cold();
    v14 = (void *)*a1;
    goto LABEL_10;
  }
  if ( v17 )
  {
    if ( v17 != 1 )
    {
      memcpy(a1 + 2, src[1], v17);
      goto LABEL_10;
    }
LABEL_18:
    *((_BYTE *)a1 + 16) = *v16;
  }
LABEL_10:
  a1[1] = v18;
  *((_BYTE *)v14 + v18) = 0;
  v19 = ptr;
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v45), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( ptr )
  {
    if ( (*((_DWORD *)ptr + 4))-- == 1 )
    {
      v28 = (void (__fastcall **)(_QWORD *))*v19;
      v40 = v20;
      (*v28)(v19);
      sub_186B220(v19);
      v20 = _mm_load_si128(&v40);
    }
  }
  v51[0] = v20;
  v49 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v59[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  if ( v56 != (void *)v45.m128i_i64[1] )
    operator delete(v56, v58[0] + 1LL);
  *((_QWORD *)&v51[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v39[0]);
  v22 = v43;
  v23 = v42;
  *(char **)((char *)&v49 + *(_QWORD *)(v10 - 24)) = v44;
  v24 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v51[0] = v6;
  v25 = v41;
  *(_QWORD *)((char *)v51 + v24) = v22;
  v26 = *((_QWORD *)v3 - 3);
  v49 = v3;
  *(char **)((char *)&v49 + v26) = v23;
  v50 = 0;
  v59[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v25);
  return a1;
}

