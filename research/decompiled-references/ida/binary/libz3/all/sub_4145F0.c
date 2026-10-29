__m128i *__fastcall sub_4145F0(__m128i *a1, _QWORD *a2)
{
  __int64 v4; // r13
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  size_t v7; // r15
  _QWORD *v8; // rax
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // r12
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  void *v20; // rsi
  size_t *v21; // rax
  unsigned __int64 v22; // rdi
  int v23[2]; // [rsp+0h] [rbp-218h]
  int v24; // [rsp+0h] [rbp-218h]
  __int64 v25; // [rsp+0h] [rbp-218h]
  int v26[2]; // [rsp+8h] [rbp-210h]
  int v27; // [rsp+8h] [rbp-210h]
  size_t *p_p_dest; // [rsp+10h] [rbp-208h]
  int v29; // [rsp+10h] [rbp-208h]
  size_t v30; // [rsp+18h] [rbp-200h]
  int v31; // [rsp+18h] [rbp-200h]
  int v32; // [rsp+20h] [rbp-1F8h]
  int v33; // [rsp+20h] [rbp-1F8h]
  char v34[8]; // [rsp+28h] [rbp-1F0h] BYREF
  void *p_dest; // [rsp+30h] [rbp-1E8h] BYREF
  int v36[2]; // [rsp+38h] [rbp-1E0h]
  size_t dest; // [rsp+40h] [rbp-1D8h] BYREF
  void *v38; // [rsp+48h] [rbp-1D0h]
  char v39[16]; // [rsp+50h] [rbp-1C8h] BYREF
  char v40[32]; // [rsp+60h] [rbp-1B8h] BYREF
  unsigned __int64 v41; // [rsp+80h] [rbp-198h]
  void *src; // [rsp+88h] [rbp-190h]
  unsigned __int64 v43; // [rsp+90h] [rbp-188h]
  void *v44; // [rsp+B0h] [rbp-168h]
  size_t n; // [rsp+B8h] [rbp-160h]

  *(_QWORD *)v23 = a2[1];
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v39);
  sub_39A600((__int64)v40, *(const char **)(a2[3] + 16LL));
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = a2[1];
  v5 = v43;
  *(_QWORD *)v36 = 0;
  p_dest = &dest;
  v6 = *(_QWORD *)(v4 + 840);
  LOBYTE(dest) = 0;
  *(_QWORD *)v26 = v6;
  if ( !v43 )
  {
    v7 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v30 = n;
        v22 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v30 = 30;
        v22 = 31;
      }
      p_p_dest = (size_t *)operator new(v22);
      sub_233E40((__int64)&p_dest);
      v21 = p_p_dest;
      v20 = v44;
      p_dest = p_p_dest;
      dest = v30;
    }
    else
    {
      if ( !n )
      {
LABEL_10:
        v8 = &dest;
        goto LABEL_11;
      }
      v20 = v44;
      v21 = &dest;
      if ( n == 1 )
      {
        LOBYTE(dest) = *(_BYTE *)v44;
        goto LABEL_10;
      }
    }
    memcpy(v21, v20, v7);
    goto LABEL_21;
  }
  if ( v41 >= v43 )
    v5 = v41;
  if ( !v41 )
    v5 = v43;
  v7 = v5 - (_QWORD)src;
  if ( (__int64)(v5 - (_QWORD)src) < 0 )
    std::__throw_length_error("basic_string::_M_replace");
  p_p_dest = (size_t *)&p_dest;
  if ( v7 > 0xF )
  {
    sub_23A830(&p_dest, 0, 0, (char *)src, v5 - (_QWORD)src);
LABEL_21:
    v8 = p_dest;
    goto LABEL_11;
  }
  if ( src != &dest )
  {
    if ( v7 )
    {
      if ( v7 == 1 )
        LOBYTE(dest) = *(_BYTE *)src;
      else
        memcpy(&dest, src, v5 - (_QWORD)src);
    }
    goto LABEL_10;
  }
  std::string::_M_replace_cold();
  v8 = p_dest;
LABEL_11:
  *(_QWORD *)v36 = v7;
  *((_BYTE *)v8 + v7) = 0;
  sub_180C5A0(v34, p_dest);
  v9 = sub_15E3510(v4, v34, 0, 0, *(_QWORD *)v26, 0);
  v12 = sub_15DC610(
          v4,
          v9,
          0,
          0,
          v10,
          v11,
          v23[0],
          v26[0],
          (int)p_p_dest,
          v30,
          v32,
          v34[0],
          (int)p_dest,
          v36[0],
          dest,
          v38);
  v13 = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  if ( p_dest != &dest )
    operator delete(p_dest, dest + 1);
  v14 = a2[1];
  v15 = sub_420A00(*a2, *(_QWORD *)(v13 + 16));
  sub_15DC610(v14, v15, 0, 0, v16, v17, v24, v27, v29, v31, v33, v34[0], (int)p_dest, v36[0], dest, v38);
  v18 = sub_15E1A70(v14);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)v14);
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
  sub_3FCDD0(v13, v25);
  return a1;
}

