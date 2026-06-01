__m128i *__fastcall sub_39B590(__m128i *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r14
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  int v12; // [rsp+0h] [rbp-208h]
  int v13; // [rsp+10h] [rbp-1F8h]
  int v14; // [rsp+18h] [rbp-1F0h] BYREF
  __int64 v15; // [rsp+20h] [rbp-1E8h] BYREF
  char v16; // [rsp+28h] [rbp-1E0h]
  int v17; // [rsp+30h] [rbp-1D8h]
  int v18; // [rsp+38h] [rbp-1D0h]
  int v19; // [rsp+40h] [rbp-1C8h] BYREF
  void *v20; // [rsp+48h] [rbp-1C0h]
  _BYTE v21[8]; // [rsp+50h] [rbp-1B8h] BYREF
  _BYTE v22[432]; // [rsp+58h] [rbp-1B0h] BYREF

  v5 = a4;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(&v19);
  sub_39A600((__int64)v21, *(const char **)(a3 + 16));
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::stringbuf::str(&v15, v22);
  sub_180C5A0(&v14, v15);
  sub_233E40((__int64)&v15);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = sub_15E3510(v6, &v14, 0, 0, *(_QWORD *)(a3 + 8 * v5 + 48), 0);
  v10 = sub_15DC610(v6, v7, 0, 0, v8, v9, v12, a2, v13, v14, v15, v16, v17, v18, v19, v20);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)v6);
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
  return a1;
}

