__int64 __fastcall std::string::_Rep::_M_refcopy(std::string::_Rep *this)
{
  if ( this != (std::string::_Rep *)std::string::_Rep::_S_empty_rep(this) )
    sub_58F873((volatile signed __int32 *)this + 4, 1u);
  return std::string::_Rep::_M_refdata(this);
}
