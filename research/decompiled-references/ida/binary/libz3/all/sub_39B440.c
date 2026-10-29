__m128 *__fastcall sub_39B440(__m128 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  double v12[2]; // [rsp+8h] [rbp-200h] BYREF
  _BYTE v13[8]; // [rsp+18h] [rbp-1F0h] BYREF
  _QWORD v14[4]; // [rsp+20h] [rbp-1E8h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-1C8h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-1B8h] BYREF
  _BYTE v17[432]; // [rsp+58h] [rbp-1B0h] BYREF

  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v15);
  sub_39A600((__int64)v16, *(const char **)(a3 + 16));
  std::__ostream_insert<char,std::char_traits<char>>();
  std::stringbuf::str(v14, v17);
  sub_180C5A0(v13, v14[0]);
  sub_233E40((__int64)v14);
  v5 = *(unsigned int *)(a2 + 40);
  v6 = *(_QWORD *)(a3 + 40);
  v12[0] = *(double *)(a2 + 8);
  v7 = sub_1674700(a2 + 16, v5);
  v8 = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v14[0] = v7;
  v9 = sub_15E3510(*(_QWORD *)&v12[0], v13, 1, v14, v6, 0);
  *a1 = _mm_loadh_ps(v12);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 8))-- == 1 )
      sub_15D7BC0(*(_QWORD *)&v12[0], v8);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
  return a1;
}

