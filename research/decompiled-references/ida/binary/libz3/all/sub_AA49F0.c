__int64 __fastcall sub_AA49F0(__int64 a1, _DWORD **a2)
{
  _DWORD *v2; // r15
  _DWORD *v3; // rbp

  v2 = *a2;
  if ( *a2 )
  {
    v3 = &v2[*(v2 - 1)];
    if ( v2 != v3 )
    {
      while ( 1 )
      {
        if ( *v2 == -2 )
        {
          ++v2;
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v3 == v2 )
            return a1;
        }
        else
        {
          ++v2;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          if ( v3 == v2 )
            return a1;
        }
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return a1;
}

