__int64 __fastcall std::string::operator+=(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if ( a3 > 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) )
    std::__throw_length_error("basic_string::append");
  return std::string::_M_append(a1, a2, a3);
}

