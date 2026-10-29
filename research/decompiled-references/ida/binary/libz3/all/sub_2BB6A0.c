__int64 sub_2BB6A0()
{
  std::ostream *v0; // rbx
  std::ostream *v1; // rdi

  std::__ostream_insert<char,std::char_traits<char>>();
  v0 = (std::ostream *)std::ostream::_M_insert<void const*>();
  if ( *(_QWORD *)((char *)v0 + *(_QWORD *)(*(_QWORD *)v0 - 24LL) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v0, 32);
  v1 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  if ( *(_QWORD *)((char *)v1 + *(_QWORD *)(*(_QWORD *)v1 - 24LL) + 16) )
    return std::__ostream_insert<char,std::char_traits<char>>();
  else
    return std::ostream::put(v1, 10);
}

