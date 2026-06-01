__int64 __fastcall sub_B3B3A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r12
  __int64 i; // r15

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
          for ( i = 0; i != v2; ++i )
          {
            while ( *(_DWORD *)(a1 + 40) != (_DWORD)i )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              ++i;
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( i == v2 )
                return std::__ostream_insert<char,std::char_traits<char>>();
            }
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

