__int64 __fastcall sub_4E3250(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = 4LL * *(unsigned int *)(v1 - 4);
    v3 = v1 + v2;
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v1 != v1 + v2 )
    {
      v4 = v1 + 4;
      std::ostream::_M_insert<unsigned long>();
      if ( v2 != 4 )
      {
        do
        {
          v4 += 4;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        while ( v3 != v4 );
      }
    }
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

