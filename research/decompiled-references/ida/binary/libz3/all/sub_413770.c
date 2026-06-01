__m128i *__fastcall sub_413770(__m128i *a1, _QWORD *a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  size_t v7; // r15
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // r12
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  void *v18; // rsi
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdi
  int v21[2]; // [rsp+0h] [rbp-218h]
  int v22[2]; // [rsp+8h] [rbp-210h]
  int v23[2]; // [rsp+8h] [rbp-210h]
  _QWORD *v24; // [rsp+10h] [rbp-208h]
  size_t v25; // [rsp+18h] [rbp-200h]
  int v26; // [rsp+20h] [rbp-1F8h]
  char v27[8]; // [rsp+28h] [rbp-1F0h] BYREF
  void *v28; // [rsp+30h] [rbp-1E8h] BYREF
  int v29[2]; // [rsp+38h] [rbp-1E0h]
  _QWORD dest[2]; // [rsp+40h] [rbp-1D8h] BYREF
  _BYTE v31[16]; // [rsp+50h] [rbp-1C8h] BYREF
  _BYTE v32[32]; // [rsp+60h] [rbp-1B8h] BYREF
  unsigned __int64 v33; // [rsp+80h] [rbp-198h]
  void *src; // [rsp+88h] [rbp-190h]
  unsigned __int64 v35; // [rsp+90h] [rbp-188h]
  void *v36; // [rsp+B0h] [rbp-168h]
  size_t n; // [rsp+B8h] [rbp-160h]

  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v31);
  *(_QWORD *)v22 = a2[1];
  sub_39A600((__int64)v32, *(const char **)(a2[3] + 16LL));
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  v4 = a2[1];
  v5 = v35;
  *(_QWORD *)v29 = 0;
  v28 = dest;
  v6 = *(_QWORD *)(v4 + 840);
  LOBYTE(dest[0]) = 0;
  *(_QWORD *)v21 = v6;
  if ( !v35 )
  {
    v7 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v25 = n;
        v20 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v25 = 30;
        v20 = 31;
      }
      v24 = (_QWORD *)operator new(v20);
      sub_233E40((__int64)&v28);
      v19 = v24;
      v18 = v36;
      v28 = v24;
      dest[0] = v25;
    }
    else
    {
      if ( !n )
      {
LABEL_10:
        v8 = dest;
        goto LABEL_11;
      }
      v18 = v36;
      v19 = dest;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v36;
        goto LABEL_10;
      }
    }
    memcpy(v19, v18, v7);
    goto LABEL_24;
  }
  if ( v33 >= v35 )
    v5 = v33;
  if ( !v33 )
    v5 = v35;
  v7 = v5 - (_QWORD)src;
  if ( (__int64)(v5 - (_QWORD)src) < 0 )
    std::__throw_length_error("basic_string::_M_replace");
  v24 = &v28;
  if ( v7 > 0xF )
  {
    sub_23A830(&v28, 0, 0, (char *)src, v5 - (_QWORD)src);
LABEL_24:
    v8 = v28;
    goto LABEL_11;
  }
  if ( src != dest )
  {
    if ( v7 )
    {
      if ( v7 == 1 )
        LOBYTE(dest[0]) = *(_BYTE *)src;
      else
        memcpy(dest, src, v5 - (_QWORD)src);
    }
    goto LABEL_10;
  }
  std::string::_M_replace_cold();
  v8 = v28;
LABEL_11:
  *(_QWORD *)v29 = v7;
  *((_BYTE *)v8 + v7) = 0;
  sub_180C5A0(v27, v28);
  v9 = sub_15E3510(v4, v27, 0, 0, *(_QWORD *)v21, 0);
  v10 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  if ( v28 != dest )
    operator delete(v28, dest[0] + 1LL);
  v11 = a2[1];
  v12 = sub_420A00(*a2, v10);
  v15 = sub_15DC610(
          v11,
          v12,
          0,
          0,
          v13,
          v14,
          v21[0],
          v22[0],
          (int)v24,
          v25,
          v26,
          v27[0],
          (int)v28,
          v29[0],
          dest[0],
          (void *)dest[1]);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)v11);
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 8))-- == 1 )
      sub_15D7BC0(*(_QWORD *)v23, v10);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
  return a1;
}

