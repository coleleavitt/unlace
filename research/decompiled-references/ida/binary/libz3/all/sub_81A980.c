__int64 __fastcall sub_81A980(unsigned int *a1)
{
  unsigned int *v1; // rbp
  __int64 v2; // rax
  unsigned int *v3; // r13
  unsigned int v4; // ebx
  unsigned int v5; // r15d

  v1 = a1 + 19;
  v2 = 2LL * a1[8];
  v3 = &a1[v2 + 19];
  if ( v2 * 4 )
  {
    v4 = a1[20];
    v5 = a1[19];
    while ( 1 )
    {
      if ( v5 != 1 )
      {
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v4 != -2 )
        std::ostream::_M_insert<unsigned long>();
      v1 += 2;
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v3 == v1 )
        break;
      v5 = *v1;
      v4 = v1[1];
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return std::ostream::_M_insert<unsigned long>();
}

