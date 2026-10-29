__int64 __fastcall sub_4DDA60(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  _BYTE v4[16]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v5[56]; // [rsp+10h] [rbp-38h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  v1 = std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(v4, *(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88), 0, 0, 0);
  v2 = sub_160E8B0(v1, v4);
  sub_18572D0(v5);
  return v2;
}

