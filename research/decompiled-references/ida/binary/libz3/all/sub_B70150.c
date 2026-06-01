__int64 __fastcall sub_B70150(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13

  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = *(_QWORD *)(a2 + 32);
  v3 = v2 + 8LL * *(unsigned int *)(a2 + 24);
  while ( v3 != v2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    v2 += 8;
    std::ostream::_M_insert<unsigned long>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return a1;
}

