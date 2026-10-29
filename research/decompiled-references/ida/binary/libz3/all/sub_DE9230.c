__int64 __fastcall sub_DE9230(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 && *(_DWORD *)(v2 - 4) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_39A600(a2, *(const char **)(*(_QWORD *)(a1 + 8) + 24LL));
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v4 = v3 + 4LL * *(unsigned int *)(v3 - 4);
      while ( v4 != v3 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v3 += 4;
        std::ostream::_M_insert<unsigned long>();
      }
    }
    return std::__ostream_insert<char,std::char_traits<char>>();
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 24);
  if ( (v6 & 7) == 0 )
  {
    if ( v6 )
      strlen(*(const char **)(v5 + 24));
    return std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return std::ostream::operator<<();
}

