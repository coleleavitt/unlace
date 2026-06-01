__int64 __fastcall sub_AA4950(__int64 a1, int a2)
{
  if ( dword_1C7ECD0 == a2 || dword_1C7ECCC == a2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    return a1;
  }
  else
  {
    if ( (a2 & 1) != 0 )
      std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    return a1;
  }
}

