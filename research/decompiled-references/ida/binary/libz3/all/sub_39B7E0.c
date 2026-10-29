__m128i *__fastcall sub_39B7E0(__m128i *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  _BYTE v7[8]; // [rsp+8h] [rbp-1F0h] BYREF
  _QWORD v8[4]; // [rsp+10h] [rbp-1E8h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-1C8h] BYREF
  _BYTE v10[8]; // [rsp+40h] [rbp-1B8h] BYREF
  _BYTE v11[432]; // [rsp+48h] [rbp-1B0h] BYREF

  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v9);
  sub_39A600((__int64)v10, *(const char **)(a3 + 16));
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::stringbuf::str(v8, v11);
  sub_180C5A0(v7, v8[0]);
  sub_233E40((__int64)v8);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = sub_15E3510(v4, v7, *(unsigned int *)(a3 + 32), a3 + 48, *(_QWORD *)(v4 + 840), 0);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)v4);
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
  return a1;
}

