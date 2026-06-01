__int64 __fastcall std::string::_Rep::_M_grab(std::string::_Rep *a1, __int64 a2, __int64 a3)
{
  if ( (unsigned __int8)std::string::_Rep::_M_is_leaked(a1) != 1 && (unsigned __int8)std::operator==<char>(a2, a3) )
    return std::string::_Rep::_M_refcopy(a1);
  else
    return std::string::_Rep::_M_clone(a1, a2, 0);
}

