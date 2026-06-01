__m128i *__fastcall sub_39B2E0(__m128i *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v10; // [rsp+8h] [rbp-200h]
  _BYTE v11[8]; // [rsp+18h] [rbp-1F0h] BYREF
  _QWORD v12[4]; // [rsp+20h] [rbp-1E8h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-1C8h] BYREF
  _BYTE v14[8]; // [rsp+50h] [rbp-1B8h] BYREF
  _BYTE v15[432]; // [rsp+58h] [rbp-1B0h] BYREF

  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v13);
  sub_39A600((__int64)v14, *(const char **)(a3 + 16));
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::stringbuf::str(v12, v15);
  sub_180C5A0(v11, v12[0]);
  sub_233E40((__int64)v12);
  v4 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(v4 + 840);
  v5 = sub_1674700(a2 + 16, *(unsigned int *)(a2 + 40));
  v6 = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v12[0] = v5;
  v7 = sub_15E3510(v4, v11, 1, v12, v10, 0);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)v4);
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 8))-- == 1 )
      sub_15D7BC0(v4, v6);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
  return a1;
}

