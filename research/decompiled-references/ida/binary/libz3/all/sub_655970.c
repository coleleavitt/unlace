__int64 __fastcall sub_655970(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  const char *v4; // rbp

  v2 = *(_QWORD *)(a1 + 72);
  if ( !v2 || a2 >= *(_DWORD *)(v2 - 4) )
    return std::ostream::_M_insert<unsigned long>();
  v4 = *(const char **)(v2 + 8LL * a2);
  if ( ((unsigned __int8)v4 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    return std::ostream::operator<<();
  }
  else
  {
    if ( v4 )
      strlen(v4);
    return std::__ostream_insert<char,std::char_traits<char>>();
  }
}

