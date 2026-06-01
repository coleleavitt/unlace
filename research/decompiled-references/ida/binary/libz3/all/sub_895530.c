__int64 __fastcall sub_895530(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  _BYTE v7[16]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v8[88]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 8848) + 2 * *a1) && *((unsigned __int8 *)a1 + 4) + 2 * *a1 == -2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(v7, *(_QWORD *)(*(_QWORD *)(v4 + 8840) + 8LL * *a1), *(_QWORD *)(a2 + 24), 0, 0, 0);
  v5 = sub_160E8B0(a3, v7);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_18572D0(v8);
  return v5;
}

