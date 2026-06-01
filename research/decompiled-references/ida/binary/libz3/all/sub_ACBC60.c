__int64 __fastcall sub_ACBC60(__int64 a1)
{
  const char *v1; // rax

  std::__ostream_insert<char,std::char_traits<char>>();
  v1 = (const char *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 16LL))(a1, "(");
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
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  return std::__ostream_insert<char,std::char_traits<char>>();
}

