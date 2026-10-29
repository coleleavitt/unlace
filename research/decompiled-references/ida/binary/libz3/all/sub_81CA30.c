__int64 __fastcall sub_81CA30(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  __int64 v5; // r13
  unsigned int v6; // edx
  _QWORD *v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rbx

  v3 = a3;
  v4 = a3;
  v5 = *(_QWORD *)(a1[39] + 8LL * a3);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  while ( 1 )
  {
    v6 = v4;
    v4 = *(_DWORD *)(a1[42] + 4 * v3);
    if ( v6 == v4 )
      break;
    v3 = v4;
  }
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v7 = *(_QWORD **)(v5 + 8);
  if ( v7 )
  {
    v8 = a1[10];
    v9 = std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1648CA0(v9, *(_QWORD *)(v8 + 1592), *v7, 3);
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

