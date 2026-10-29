void __fastcall sub_4E0FF0(__int64 a1, __int64 a2)
{
  unsigned int *v3; // r14
  __int64 v4; // rdx
  int v5; // edi
  _DWORD *v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // r8
  _DWORD *v11; // r15
  int v12; // ecx
  __int64 v13; // rcx
  char *v14; // rsi
  char *v15; // rax
  char *v16; // rax
  unsigned __int64 v17; // rax
  size_t v18; // rax
  char *v19; // r8
  _QWORD *v20; // rbp
  int v21; // esi
  __m128i v22; // xmm2
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // edx
  char *v26; // rdx
  void *v27; // rsi
  _QWORD *v28; // rbp
  _QWORD *v29; // rax
  unsigned __int64 v30; // rdi
  _QWORD *v31; // rax
  const void *v32; // rsi
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdi
  __m128i v35; // [rsp+0h] [rbp-228h] BYREF
  size_t v36; // [rsp+10h] [rbp-218h]
  size_t n; // [rsp+18h] [rbp-210h]
  void *v38; // [rsp+20h] [rbp-208h] BYREF
  __int64 v39; // [rsp+28h] [rbp-200h]
  char v40[16]; // [rsp+30h] [rbp-1F8h] BYREF
  void *v41; // [rsp+40h] [rbp-1E8h] BYREF
  char *v42; // [rsp+48h] [rbp-1E0h]
  _QWORD dest[2]; // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD v44[2]; // [rsp+60h] [rbp-1C8h] BYREF
  __m128i v45; // [rsp+70h] [rbp-1B8h]
  unsigned __int64 v46; // [rsp+90h] [rbp-198h]
  void *src; // [rsp+98h] [rbp-190h]
  unsigned __int64 v48; // [rsp+A0h] [rbp-188h]
  _BYTE v49[16]; // [rsp+B0h] [rbp-178h] BYREF
  void *v50; // [rsp+C0h] [rbp-168h]
  size_t v51; // [rsp+C8h] [rbp-160h]
  __int64 v52; // [rsp+D0h] [rbp-158h] BYREF
  char *v53; // [rsp+E0h] [rbp-148h] BYREF

  v3 = (unsigned int *)(a2 + 16);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v44);
  v4 = *(unsigned int *)(a2 + 24);
  v5 = *(_DWORD *)(a1 + 76);
  v38 = v40;
  v6 = *(_DWORD **)(a2 + 16);
  strcpy(v40, "rel_src");
  v7 = v4 - 1;
  v8 = 48 * v4;
  v39 = 7;
  v9 = 48LL * (v5 & v7);
  v10 = &v6[(unsigned __int64)v9 / 4];
  if ( v9 == v8 )
  {
LABEL_33:
    if ( v6 != v10 )
    {
      while ( 1 )
      {
        v25 = v6[1];
        if ( v25 == 2 )
        {
          if ( v5 == *v6 && v5 == v6[2] )
          {
            v11 = v6;
            goto LABEL_8;
          }
        }
        else if ( !v25 )
        {
          goto LABEL_15;
        }
        v6 += 12;
        if ( v10 == v6 )
          goto LABEL_15;
      }
    }
    goto LABEL_15;
  }
  v11 = &v6[(unsigned __int64)v9 / 4];
  while ( 1 )
  {
    v12 = v11[1];
    if ( v12 != 2 )
    {
      if ( !v12 )
        goto LABEL_15;
      goto LABEL_4;
    }
    if ( v5 == *v11 && v5 == v11[2] )
      break;
LABEL_4:
    v11 += 12;
    if ( &v6[(unsigned __int64)v8 / 4] == v11 )
      goto LABEL_33;
  }
LABEL_8:
  if ( &v38 == (void **)(v11 + 4) )
    goto LABEL_15;
  v13 = *((_QWORD *)v11 + 3);
  if ( (unsigned __int64)v13 > 0xF )
  {
    if ( v13 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( (unsigned __int64)v13 <= 0x1D )
    {
      v35.m128i_i64[0] = 30;
      v33 = 31;
    }
    else
    {
      v35.m128i_i64[0] = *((_QWORD *)v11 + 3);
      v33 = v13 + 1;
      if ( v13 + 1 < 0 )
        std::__throw_bad_alloc();
    }
    n = v13;
    v36 = operator new(v33);
    sub_233E40((__int64)&v38);
    v15 = (char *)v36;
    v13 = n;
    v38 = (void *)v36;
    *(_QWORD *)v40 = v35.m128i_i64[0];
    v14 = *((char **)v11 + 2);
LABEL_63:
    v35.m128i_i64[0] = v13;
    memcpy(v15, v14, v13);
    v16 = (char *)v38;
    v13 = v35.m128i_i64[0];
    goto LABEL_14;
  }
  if ( !v13 )
    goto LABEL_13;
  v14 = *((char **)v11 + 2);
  v15 = v40;
  if ( v13 != 1 )
    goto LABEL_63;
  v40[0] = *v14;
LABEL_13:
  v16 = v40;
LABEL_14:
  v39 = v13;
  v16[v13] = 0;
LABEL_15:
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v17 = v48;
  LOBYTE(dest[0]) = 0;
  v41 = dest;
  v42 = nullptr;
  if ( !v48 )
  {
    v26 = (char *)v51;
    if ( v51 > 0xF )
    {
      if ( (v51 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v51 > 0x1D )
      {
        v35.m128i_i64[0] = v51;
        v34 = v51 + 1;
        if ( (__int64)(v51 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v35.m128i_i64[0] = 30;
        v34 = 31;
      }
      v36 = v51;
      v28 = (_QWORD *)operator new(v34);
      sub_233E40((__int64)&v41);
      v41 = v28;
      v27 = v50;
      v26 = (char *)v36;
      dest[0] = v35.m128i_i64[0];
    }
    else
    {
      if ( !v51 )
      {
LABEL_48:
        v29 = dest;
LABEL_49:
        v42 = v26;
        v26[(_QWORD)v29] = 0;
        goto LABEL_26;
      }
      v27 = v50;
      v28 = dest;
      if ( v51 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v50;
        goto LABEL_48;
      }
    }
    v35.m128i_i64[0] = (__int64)v26;
    memcpy(v28, v27, (size_t)v26);
    v29 = v41;
    v26 = (char *)v35.m128i_i64[0];
    goto LABEL_49;
  }
  if ( v46 >= v48 )
    v17 = v46;
  if ( !v46 )
    v17 = v48;
  v18 = v17 - (_QWORD)src;
  v19 = (char *)v18;
  if ( (v18 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v18 > 0xF )
  {
    if ( v18 > 0x1D )
    {
      v35.m128i_i64[0] = v18;
      v30 = v18 + 1;
      if ( (__int64)(v18 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v35.m128i_i64[0] = 30;
      v30 = 31;
    }
    n = v18;
    v36 = (size_t)src;
    v31 = (_QWORD *)operator new(v30);
    v32 = (const void *)v36;
    v19 = (char *)n;
    v20 = v31;
    if ( v36 )
    {
      v36 = n;
      memcpy(v31, v32, n);
      v19 = (char *)n;
    }
    if ( v41 != dest )
    {
      v36 = (size_t)v19;
      operator delete(v41, dest[0] + 1LL);
      v19 = (char *)v36;
    }
    v41 = v20;
    dest[0] = v35.m128i_i64[0];
  }
  else if ( src == dest )
  {
    v35.m128i_i64[0] = v18;
    std::string::_M_replace_cold();
    v19 = (char *)v35.m128i_i64[0];
    v20 = v41;
  }
  else
  {
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)src;
      }
      else
      {
        v35.m128i_i64[0] = v18;
        memcpy(dest, src, v18);
        v19 = (char *)v35.m128i_i64[0];
      }
    }
    v20 = dest;
  }
  v42 = v19;
  v19[(_QWORD)v20] = 0;
LABEL_26:
  v21 = *(_DWORD *)(a1 + 88);
  v35 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                  + 64),
          (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_4DC570(v3, v21, v41, v42);
  if ( v41 != dest )
    operator delete(v41, dest[0] + 1LL);
  if ( v38 != v40 )
    operator delete(v38, *(_QWORD *)v40 + 1LL);
  v22 = _mm_load_si128(&v35);
  v44[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v53 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v45 = v22;
  if ( v50 != &v52 )
    operator delete(v50, v52 + 1);
  v45.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v49);
  *(_QWORD *)((char *)v44
            + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL)) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v23 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v45.m128i_i64[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  *(__int64 *)((char *)v45.m128i_i64 + *(_QWORD *)(v45.m128i_i64[0] - 24)) = v23;
  v24 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v44[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  *(_QWORD *)((char *)v44 + *(_QWORD *)(v44[0] - 24LL)) = v24;
  v44[1] = 0;
  v53 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)&v53);
}

