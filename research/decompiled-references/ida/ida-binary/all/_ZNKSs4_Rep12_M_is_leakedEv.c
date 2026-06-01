__int64 __fastcall std::string::_Rep::_M_is_leaked(std::string::_Rep *this)
{
  return *((_DWORD *)this + 4) >> 31;
}
