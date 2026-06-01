__int64 __fastcall sub_DE9050(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(v2 + 16);
  if ( (v3 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    return a2;
  }
  else
  {
    if ( v3 )
      strlen(*(const char **)(v2 + 16));
    std::__ostream_insert<char,std::char_traits<char>>();
    return a2;
  }
}

