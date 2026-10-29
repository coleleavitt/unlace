__int64 __fastcall sub_AA56B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r13
  __int64 v6; // rbp

  v3 = a3;
  v4 = a3 >> 1;
  sub_AA4870(a2, a3);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( (_DWORD)v3 != -2 )
    std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_AA55D0(a1, a2, v3);
  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8 * v4);
  if ( (unsigned int)sub_8E7030(a1) )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 7488) + 56LL))(*(_QWORD *)(a1 + 7488), v5);
  v6 = std::ostream::_M_insert<bool>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_17F35B0(v6, (unsigned int)*(char *)(*(_QWORD *)(a1 + 8848) + v3));
  return std::__ostream_insert<char,std::char_traits<char>>();
}

