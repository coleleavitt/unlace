__int64 __fastcall sub_4E1600(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // edi
  char *v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // r8
  char *v8; // rcx
  __int64 v9; // r8
  char *v10; // rsi
  char *v11; // r15
  int v12; // edx
  size_t v13; // r13
  char *v14; // rsi
  char *v15; // rax
  char *v16; // rax
  unsigned __int64 v17; // rax
  size_t v18; // rax
  char *v19; // r15
  _QWORD *v20; // rcx
  int v22; // edx
  char *v23; // r15
  void *v24; // rsi
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rax
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  unsigned int *v31; // [rsp+8h] [rbp-230h]
  __int64 v32; // [rsp+10h] [rbp-228h]
  __int64 v33; // [rsp+10h] [rbp-228h]
  size_t v34; // [rsp+10h] [rbp-228h]
  const void *v35; // [rsp+18h] [rbp-220h]
  _QWORD *v36; // [rsp+18h] [rbp-220h]
  char *v37; // [rsp+18h] [rbp-220h]
  _QWORD *v38; // [rsp+18h] [rbp-220h]
  void *v39; // [rsp+20h] [rbp-218h] BYREF
  __int64 v40; // [rsp+28h] [rbp-210h]
  char v41[16]; // [rsp+30h] [rbp-208h] BYREF
  void *v42; // [rsp+40h] [rbp-1F8h] BYREF
  char *v43; // [rsp+48h] [rbp-1F0h]
  _QWORD dest[4]; // [rsp+50h] [rbp-1E8h] BYREF
  _BYTE v45[16]; // [rsp+70h] [rbp-1C8h] BYREF
  _BYTE v46[32]; // [rsp+80h] [rbp-1B8h] BYREF
  unsigned __int64 v47; // [rsp+A0h] [rbp-198h]
  void *src; // [rsp+A8h] [rbp-190h]
  unsigned __int64 v49; // [rsp+B0h] [rbp-188h]
  void *v50; // [rsp+D0h] [rbp-168h]
  size_t n; // [rsp+D8h] [rbp-160h]

  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v45);
  v3 = *(unsigned int *)(a2 + 24);
  v4 = *(_DWORD *)(a1 + 72);
  v31 = (unsigned int *)(a2 + 16);
  v5 = *(char **)(a2 + 16);
  v6 = v3 - 1;
  strcpy(v41, "rel_src");
  v3 *= 48;
  v39 = v41;
  v7 = 3LL * (v4 & v6);
  v8 = &v5[v3];
  v9 = 16 * v7;
  v40 = 7;
  v10 = &v5[v9];
  if ( v9 == v3 )
  {
LABEL_31:
    if ( v5 != v10 )
    {
      while ( 1 )
      {
        v22 = *((_DWORD *)v5 + 1);
        if ( v22 == 2 )
        {
          if ( v4 == *(_DWORD *)v5 && v4 == *((_DWORD *)v5 + 2) )
          {
            v11 = v5;
            goto LABEL_8;
          }
        }
        else if ( !v22 )
        {
          goto LABEL_15;
        }
        v5 += 48;
        if ( v10 == v5 )
          goto LABEL_15;
      }
    }
    goto LABEL_15;
  }
  v11 = &v5[v9];
  while ( 1 )
  {
    v12 = *((_DWORD *)v11 + 1);
    if ( v12 != 2 )
    {
      if ( !v12 )
        goto LABEL_15;
      goto LABEL_4;
    }
    if ( v4 == *(_DWORD *)v11 && v4 == *((_DWORD *)v11 + 2) )
      break;
LABEL_4:
    v11 += 48;
    if ( v8 == v11 )
      goto LABEL_31;
  }
LABEL_8:
  if ( &v39 == (void **)(v11 + 16) )
    goto LABEL_15;
  v13 = *((_QWORD *)v11 + 3);
  if ( v13 > 0xF )
  {
    if ( (v13 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v13 <= 0x1D )
    {
      v33 = 30;
      v29 = 31;
    }
    else
    {
      v33 = *((_QWORD *)v11 + 3);
      v29 = v13 + 1;
      if ( (__int64)(v13 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    v37 = (char *)operator new(v29);
    sub_233E40((__int64)&v39);
    v15 = v37;
    v39 = v37;
    *(_QWORD *)v41 = v33;
    v14 = *((char **)v11 + 2);
LABEL_61:
    memcpy(v15, v14, v13);
    v16 = (char *)v39;
    goto LABEL_14;
  }
  if ( !v13 )
    goto LABEL_13;
  v14 = *((char **)v11 + 2);
  v15 = v41;
  if ( v13 != 1 )
    goto LABEL_61;
  v41[0] = *v14;
LABEL_13:
  v16 = v41;
LABEL_14:
  v40 = v13;
  v16[v13] = 0;
LABEL_15:
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(&v42, *(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88), 0, 0, 0);
  sub_160E8B0(v46, &v42);
  sub_18572D0(dest);
  v17 = v49;
  v42 = dest;
  v43 = nullptr;
  LOBYTE(dest[0]) = 0;
  if ( !v49 )
  {
    v23 = (char *)n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v34 = n;
        v30 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v34 = 30;
        v30 = 31;
      }
      v38 = (_QWORD *)operator new(v30);
      sub_233E40((__int64)&v42);
      v25 = v38;
      v24 = v50;
      v42 = v38;
      dest[0] = v34;
    }
    else
    {
      if ( !n )
      {
LABEL_46:
        v26 = dest;
LABEL_47:
        v43 = v23;
        v23[(_QWORD)v26] = 0;
        goto LABEL_26;
      }
      v24 = v50;
      v25 = dest;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v50;
        goto LABEL_46;
      }
    }
    memcpy(v25, v24, (size_t)v23);
    v26 = v42;
    goto LABEL_47;
  }
  if ( v47 >= v49 )
    v17 = v47;
  if ( !v47 )
    v17 = v49;
  v18 = v17 - (_QWORD)src;
  v19 = (char *)v18;
  if ( (v18 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v18 > 0xF )
  {
    if ( v18 > 0x1D )
    {
      v32 = v18;
      v27 = v18 + 1;
      if ( (__int64)(v18 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v32 = 30;
      v27 = 31;
    }
    v35 = src;
    v28 = (_QWORD *)operator new(v27);
    v20 = v28;
    if ( v35 )
      v20 = memcpy(v28, v35, (size_t)v19);
    if ( v42 != dest )
    {
      v36 = v20;
      operator delete(v42, dest[0] + 1LL);
      v20 = v36;
    }
    v42 = v20;
    dest[0] = v32;
  }
  else if ( src == dest )
  {
    std::string::_M_replace_cold();
    v20 = v42;
  }
  else
  {
    if ( v18 )
    {
      if ( v18 == 1 )
        LOBYTE(dest[0]) = *(_BYTE *)src;
      else
        memcpy(dest, src, v18);
    }
    v20 = dest;
  }
  v43 = v19;
  v19[(_QWORD)v20] = 0;
LABEL_26:
  sub_4DC570(v31, *(_DWORD *)(a1 + 104), v42, v43);
  if ( v42 != dest )
    operator delete(v42, dest[0] + 1LL);
  if ( v39 != v41 )
    operator delete(v39, *(_QWORD *)v41 + 1LL);
  return std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
}

