__int64 __fastcall sub_ACBD20(_QWORD *a1)
{
  const char *v1; // rax
  __int64 v2; // rbp

  std::__ostream_insert<char,std::char_traits<char>>();
  v1 = (const char *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*a1 + 16LL))(a1, "(");
  if ( v1 )
  {
    strlen(v1);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    std::ios::clear();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1648CA0(v2, a1[1], a1[3], 3);
  return std::__ostream_insert<char,std::char_traits<char>>();
}

