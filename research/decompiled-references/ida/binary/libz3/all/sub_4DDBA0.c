__int64 __fastcall sub_4DDBA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx

  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
  {
    v5 = 4LL * *(unsigned int *)(v4 - 4);
    v6 = v4 + v5;
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v4 != v4 + v5 )
    {
      v7 = v4 + 4;
      std::ostream::_M_insert<unsigned long>();
      if ( v5 != 4 )
      {
        do
        {
          v7 += 4;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        while ( v6 != v7 );
      }
    }
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return a3;
}

