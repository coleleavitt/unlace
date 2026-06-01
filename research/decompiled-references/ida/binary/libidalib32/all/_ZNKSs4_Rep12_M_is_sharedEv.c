bool __fastcall std::string::_Rep::_M_is_shared(std::string::_Rep *this)
{
  return *((_DWORD *)this + 4) > 0;
}

