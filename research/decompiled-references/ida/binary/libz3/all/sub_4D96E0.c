__int64 __fastcall sub_4D96E0(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // rbp

  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *(const char **)(a2 + 16);
  if ( ((unsigned __int8)v4 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v4 )
      strlen(v4);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 120LL))(a1, a3);
}

