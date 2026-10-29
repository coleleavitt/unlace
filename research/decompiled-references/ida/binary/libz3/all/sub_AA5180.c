__int64 __fastcall sub_AA5180(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  __int64 v3; // r15
  __int64 v4; // r12
  int v5; // ebp

  std::__ostream_insert<char,std::char_traits<char>>();
  v1 = *(_QWORD *)(a1 + 8560);
  if ( v1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v3 = 8 * v2;
      v4 = 0;
      while ( 1 )
      {
        v5 = *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * **(unsigned int **)(v1 + v4));
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( 2 * v5 == -2 )
        {
          v4 += 8;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v4 == v3 )
            return std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          v4 += 8;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v3 == v4 )
            return std::__ostream_insert<char,std::char_traits<char>>();
        }
        v1 = *(_QWORD *)(a1 + 8560);
      }
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

