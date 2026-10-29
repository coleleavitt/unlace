__int64 sub_2BB620()
{
  std::ostream *v0; // rdi

  std::__ostream_insert<char,std::char_traits<char>>();
  v0 = (std::ostream *)std::ostream::_M_insert<void const*>();
  if ( *(_QWORD *)((char *)v0 + *(_QWORD *)(*(_QWORD *)v0 - 24LL) + 16) )
    return std::__ostream_insert<char,std::char_traits<char>>();
  else
    return std::ostream::put(v0, 10);
}

