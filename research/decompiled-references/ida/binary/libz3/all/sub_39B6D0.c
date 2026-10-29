__m128i *__fastcall sub_39B6D0(__m128i *a1, __int64 a2, const char **a3)
{
  unsigned __int64 v4; // rbx
  int v5; // eax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  int v10; // [rsp+0h] [rbp-1E8h]
  int v11; // [rsp+8h] [rbp-1E0h] BYREF
  __int64 v12; // [rsp+10h] [rbp-1D8h] BYREF
  int v13; // [rsp+18h] [rbp-1D0h]
  int v14; // [rsp+20h] [rbp-1C8h]
  char v15; // [rsp+28h] [rbp-1C0h]
  int v16[4]; // [rsp+30h] [rbp-1B8h] BYREF
  int v17; // [rsp+40h] [rbp-1A8h] BYREF
  void *v18; // [rsp+48h] [rbp-1A0h] BYREF

  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v16);
  sub_39A600((__int64)&v17, *a3);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::stringbuf::str(&v12, &v18);
  sub_180C5A0(&v11, v12);
  sub_233E40((__int64)&v12);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = sub_15E3510(v4, &v11, 0, 0, *(_QWORD *)(v4 + 840), 0);
  v8 = sub_15DC610(v4, v5, 0, 0, v6, v7, v10, v11, v12, v13, v14, v15, v16[0], v16[2], v17, v18);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)v4);
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
  return a1;
}

