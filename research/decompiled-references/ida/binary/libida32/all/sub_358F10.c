char __fastcall sub_358F10(__int64 a1, unsigned int a2)
{
  if ( !a2 )
  {
    if ( !(unsigned __int8)is_cp_graphical(0) )
      return 0;
    return strchr(*(const char **)(a1 + 64), (char)a2) == nullptr;
  }
  if ( (*(_DWORD *)a1 & 0x40000000) != 0 )
    return 1;
  if ( (*(_DWORD *)a1 & 0x80u) == 0 )
  {
    if ( !(unsigned __int8)is_cp_graphical(a2) )
      return 0;
    if ( a2 > 0xFF )
      return 1;
    return strchr(*(const char **)(a1 + 64), (char)a2) == nullptr;
  }
  if ( a2 > 0x7F )
    return 0;
  if ( (unsigned __int8)is_cp_graphical(a2) )
    return strchr(*(const char **)(a1 + 64), (char)a2) == nullptr;
  return 0;
}

