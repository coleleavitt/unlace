__int64 __fastcall sub_9A70F0(__int64 a1, __int64 a2, std::ostream *a3)
{
  __int64 v3; // rbp
  unsigned int v5; // r13d

  v3 = a2;
  if ( *(_BYTE *)a2 == 5 )
  {
    v5 = 1;
    j__strlen("let ");
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::write(a3, *(const char **)(a2 + 16), *(_QWORD *)(a2 + 24));
    std::ostream::_M_insert<unsigned long>();
    std::operator<<<std::char_traits<char>>();
    v3 = *(_QWORD *)(a2 + 32);
  }
  else
  {
    v5 = 0;
    if ( *(_BYTE *)a2 != 16 )
    {
      j__strlen("let _x");
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::operator<<<std::char_traits<char>>();
    }
  }
  sub_9A7340(a1, v3, a3, 6, v5);
  std::operator<<<std::char_traits<char>>();
  return std::operator<<<std::char_traits<char>>();
}

