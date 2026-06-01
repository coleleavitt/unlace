char __fastcall std::string::_Rep::_M_set_length_and_sharable(std::string::_Rep *this, __int64 a2)
{
  char result; // al
  __int64 v3; // rax

  result = this != (std::string::_Rep *)std::string::_Rep::_S_empty_rep(this);
  if ( result )
  {
    std::string::_Rep::_M_set_sharable(this);
    *(_QWORD *)this = a2;
    v3 = std::string::_Rep::_M_refdata(this);
    return std::char_traits<char>::assign(a2 + v3, &std::string::_Rep::_S_terminal);
  }
  return result;
}

