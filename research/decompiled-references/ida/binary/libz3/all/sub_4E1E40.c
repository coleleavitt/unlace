__int64 __fastcall sub_4E1E40(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // edi
  unsigned int v6; // ecx
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // r8
  _DWORD *v11; // r13
  int v12; // ecx
  __int64 v13; // rcx
  _BYTE *v14; // rsi
  int *v15; // rax
  int *v16; // rax
  void *v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  size_t v20; // rax
  char *v21; // r13
  _QWORD *v22; // rcx
  int v24; // edx
  char *v25; // r13
  void *v26; // rsi
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  unsigned __int64 v29; // rdi
  _QWORD *v30; // rax
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rdi
  unsigned int *v33; // [rsp+0h] [rbp-238h]
  __int64 v34; // [rsp+8h] [rbp-230h]
  __int64 v35; // [rsp+8h] [rbp-230h]
  __int64 v36; // [rsp+8h] [rbp-230h]
  size_t v37; // [rsp+8h] [rbp-230h]
  const void *v38; // [rsp+10h] [rbp-228h]
  _QWORD *v39; // [rsp+10h] [rbp-228h]
  int *v40; // [rsp+10h] [rbp-228h]
  _QWORD *v41; // [rsp+10h] [rbp-228h]
  __int64 v42; // [rsp+18h] [rbp-220h]
  __int64 v43; // [rsp+28h] [rbp-210h] BYREF
  void *v44; // [rsp+30h] [rbp-208h] BYREF
  __int64 v45; // [rsp+38h] [rbp-200h]
  int v46[4]; // [rsp+40h] [rbp-1F8h] BYREF
  void *v47; // [rsp+50h] [rbp-1E8h] BYREF
  char *v48; // [rsp+58h] [rbp-1E0h]
  _QWORD dest[2]; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v50[16]; // [rsp+70h] [rbp-1C8h] BYREF
  unsigned __int64 v51; // [rsp+A0h] [rbp-198h]
  void *src; // [rsp+A8h] [rbp-190h]
  unsigned __int64 v53; // [rsp+B0h] [rbp-188h]
  void *v54; // [rsp+D0h] [rbp-168h]
  size_t n; // [rsp+D8h] [rbp-160h]

  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v50);
  v4 = *(unsigned int *)(a2 + 24);
  v5 = *(_DWORD *)(a1 + 72);
  v46[0] = 6517363;
  v6 = v4 - 1;
  v33 = (unsigned int *)(a2 + 16);
  v7 = *(_DWORD **)(a2 + 16);
  v8 = 48 * v4;
  v44 = v46;
  v9 = 48LL * (v5 & v6);
  v45 = 3;
  v10 = &v7[(unsigned __int64)v9 / 4];
  if ( v9 == v8 )
  {
LABEL_33:
    if ( v7 != v10 )
    {
      while ( 1 )
      {
        v24 = v7[1];
        if ( v24 == 2 )
        {
          if ( v5 == *v7 && v5 == v7[2] )
          {
            v11 = v7;
            goto LABEL_8;
          }
        }
        else if ( !v24 )
        {
          goto LABEL_15;
        }
        v7 += 12;
        if ( v10 == v7 )
          goto LABEL_15;
      }
    }
    goto LABEL_15;
  }
  v11 = &v7[(unsigned __int64)v9 / 4];
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
    if ( &v7[(unsigned __int64)v8 / 4] == v11 )
      goto LABEL_33;
  }
LABEL_8:
  if ( &v44 == (void **)(v11 + 4) )
    goto LABEL_15;
  v13 = *((_QWORD *)v11 + 3);
  if ( (unsigned __int64)v13 > 0xF )
  {
    if ( v13 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( (unsigned __int64)v13 <= 0x1D )
    {
      v35 = 30;
      v31 = 31;
    }
    else
    {
      v35 = *((_QWORD *)v11 + 3);
      v31 = v13 + 1;
      if ( v13 + 1 < 0 )
        std::__throw_bad_alloc();
    }
    v42 = *((_QWORD *)v11 + 3);
    v40 = (int *)operator new(v31);
    sub_233E40((__int64)&v44);
    v15 = v40;
    v13 = v42;
    v44 = v40;
    *(_QWORD *)v46 = v35;
    v14 = *((_BYTE **)v11 + 2);
LABEL_63:
    v36 = v13;
    memcpy(v15, v14, v13);
    v16 = (int *)v44;
    v13 = v36;
    goto LABEL_14;
  }
  if ( !v13 )
    goto LABEL_13;
  v14 = *((_BYTE **)v11 + 2);
  v15 = v46;
  if ( v13 != 1 )
    goto LABEL_63;
  LOBYTE(v46[0]) = *v14;
LABEL_13:
  v16 = v46;
LABEL_14:
  v45 = v13;
  *((_BYTE *)v16 + v13) = 0;
LABEL_15:
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v17 = sub_4DA320((_QWORD *)a2);
  v18 = (*(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)v17 + 192LL))(v17, " val: ");
  v43 = *(_QWORD *)(a1 + 80);
  sub_4C7BB0((__int64)&v47, v18, &v43);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v47 != dest )
    operator delete(v47, dest[0] + 1LL);
  v19 = v53;
  v47 = dest;
  v48 = nullptr;
  LOBYTE(dest[0]) = 0;
  if ( !v53 )
  {
    v25 = (char *)n;
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
      v41 = (_QWORD *)operator new(v32);
      sub_233E40((__int64)&v47);
      v27 = v41;
      v26 = v54;
      v47 = v41;
      dest[0] = v37;
    }
    else
    {
      if ( !n )
      {
LABEL_48:
        v28 = dest;
LABEL_49:
        v48 = v25;
        v25[(_QWORD)v28] = 0;
        goto LABEL_28;
      }
      v26 = v54;
      v27 = dest;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v54;
        goto LABEL_48;
      }
    }
    memcpy(v27, v26, (size_t)v25);
    v28 = v47;
    goto LABEL_49;
  }
  if ( v51 >= v53 )
    v19 = v51;
  if ( !v51 )
    v19 = v53;
  v20 = v19 - (_QWORD)src;
  v21 = (char *)v20;
  if ( (v20 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v20 > 0xF )
  {
    if ( v20 > 0x1D )
    {
      v34 = v20;
      v29 = v20 + 1;
      if ( (__int64)(v20 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v34 = 30;
      v29 = 31;
    }
    v38 = src;
    v30 = (_QWORD *)operator new(v29);
    v22 = v30;
    if ( v38 )
      v22 = memcpy(v30, v38, (size_t)v21);
    if ( v47 != dest )
    {
      v39 = v22;
      operator delete(v47, dest[0] + 1LL);
      v22 = v39;
    }
    v47 = v22;
    dest[0] = v34;
  }
  else if ( src == dest )
  {
    std::string::_M_replace_cold();
    v22 = v47;
  }
  else
  {
    if ( v20 )
    {
      if ( v20 == 1 )
        LOBYTE(dest[0]) = *(_BYTE *)src;
      else
        memcpy(dest, src, v20);
    }
    v22 = dest;
  }
  v48 = v21;
  v21[(_QWORD)v22] = 0;
LABEL_28:
  sub_4DC570(v33, *(_DWORD *)(a1 + 76), v47, v48);
  if ( v47 != dest )
    operator delete(v47, dest[0] + 1LL);
  if ( v44 != v46 )
    operator delete(v44, *(_QWORD *)v46 + 1LL);
  return std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
}

