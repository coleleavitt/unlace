__int64 __fastcall sub_4DDE10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp

  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *(_QWORD *)(a1 + 72);
  v5 = *(_QWORD *)(v4 + 16);
  if ( (v5 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    return a3;
  }
  else
  {
    if ( v5 )
      strlen(*(const char **)(v4 + 16));
    std::__ostream_insert<char,std::char_traits<char>>();
    return a3;
  }
}

