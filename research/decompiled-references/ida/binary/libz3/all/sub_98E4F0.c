__int64 __fastcall sub_98E4F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rbx
  _BYTE v7[16]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v8[32]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v10[88]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(v7, **(_QWORD **)(a1 + 120), v2, 0, 0, 0);
  sub_160E8B0(v3, v7);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(v9, **(_QWORD **)(a1 + 128), v2, 0, 0, 0);
  v5 = sub_160E8B0(v4, v9);
  sub_18572D0(v10);
  sub_18572D0(v8);
  return v5;
}

