unsigned __int8 __fastcall std::string::_Rep::_M_set_length_and_sharable(std::string::_Rep *this, __int64 a2)
{
  unsigned __int8 result; // al
  __int64 v3; // rax

  result = this != (std::string::_Rep *)std::string::_Rep::_S_empty_rep(this);
  if ( result )
  {
    std::string::_Rep::_M_set_sharable(this);
    *(_QWORD *)this = a2;
    v3 = std::string::_Rep::_M_refdata(this);
    return (unsigned __int8)sub_590319((_BYTE *)(a2 + v3), std::string::_Rep::_S_terminal);
  }
  return result;
}
