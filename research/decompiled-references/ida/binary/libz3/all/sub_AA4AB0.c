__int64 __fastcall sub_AA4AB0(__int64 a1, int a2, int *a3)
{
  int v4; // edx
  int *v5; // rbp
  __int64 v6; // r14
  int v7; // eax

  if ( a2 )
  {
    v4 = *a3;
    if ( v4 == dword_1C7ECD0 || v4 == dword_1C7ECCC )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else if ( (v4 & 1) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
    }
    if ( a2 != 1 )
    {
      v5 = a3 + 1;
      v6 = (__int64)&a3[a2 - 2 + 2];
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v7 = *v5;
        if ( *v5 == dword_1C7ECD0 || v7 == dword_1C7ECCC )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else if ( (v7 & 1) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        ++v5;
      }
      while ( (int *)v6 != v5 );
    }
  }
  return a1;
}

