__int64 __fastcall sub_AA55D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  _BYTE v5[16]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v6[56]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a3 >> 1;
  if ( (a3 & 1) != 0 )
    std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(v5, *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8 * v3), *(_QWORD *)(a1 + 104), 0, 0, 0);
  sub_160E8B0(a2, v5);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_18572D0(v6);
  return a2;
}

