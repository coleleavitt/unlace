__int64 __fastcall sub_4DDEC0(__int64 a1)
{
  const char *v1; // r12
  __int64 v2; // rbx

  v1 = *(const char **)(*(_QWORD *)(a1 + 80) + 16LL);
  if ( *(_BYTE *)(a1 + 72) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    v2 = std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( ((unsigned __int8)v1 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      return v2;
    }
    else
    {
      if ( v1 )
        strlen(v1);
      std::__ostream_insert<char,std::char_traits<char>>();
      return v2;
    }
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( ((unsigned __int8)v1 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v1 )
        strlen(v1);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    return std::ostream::_M_insert<unsigned long>();
  }
}

