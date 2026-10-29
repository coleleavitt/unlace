__int64 __fastcall sub_B3B4F0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r12
  int v3; // r13d
  __int64 i; // r14

  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    result = *(unsigned int *)(result - 4);
    if ( (_DWORD)result )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      result = *(_QWORD *)(a1 + 32);
      if ( result )
      {
        v2 = *(unsigned int *)(result - 4);
        if ( (_DWORD)v2 )
        {
          v3 = *(_DWORD *)(a1 + 40);
          for ( i = 0; i != v2; ++i )
          {
            while ( v3 != (_DWORD)i )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              ++i;
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( i == v2 )
                return std::__ostream_insert<char,std::char_traits<char>>();
            }
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          return std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
    }
  }
  return result;
}

