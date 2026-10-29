__int64 __fastcall sub_B31B10(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r14

  if ( a2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    result = std::ostream::_M_insert<unsigned long>();
    if ( a2 != 1 )
    {
      v5 = a3 + 8;
      v6 = a3 + 8LL * (unsigned int)(a2 - 2) + 16;
      do
      {
        v5 += 8;
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        result = std::ostream::_M_insert<unsigned long>();
      }
      while ( v5 != v6 );
    }
  }
  return result;
}

