__int64 __fastcall sub_655830(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbp
  std::ostream *v5; // rdi

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 && a2 < *(_DWORD *)(v2 - 4) )
    return std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 16);
  if ( (v4 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v4 )
      strlen(*(const char **)(v3 + 16));
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  if ( *(_QWORD *)((char *)v5 + *(_QWORD *)(*(_QWORD *)v5 - 24LL) + 16) )
    return std::__ostream_insert<char,std::char_traits<char>>();
  else
    return std::ostream::put(v5, 62);
}

