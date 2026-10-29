bool __fastcall sub_53EA80(__int64 *a1, char a2)
{
  __int64 v3; // rdi
  int v4; // eax

  if ( *((_BYTE *)a1 + 28) && *((_BYTE *)a1 + 8) )
    return 0;
  v3 = *a1;
  if ( !(unsigned __int8)*a1 || !a2 && (get_tinfo_property(v3, 2) & 0xF) == 0xE )
    return 0;
  v4 = *((_DWORD *)a1 + 6);
  if ( *((char *)a1 + 29) >= 0 )
  {
    if ( !v4 )
      return *((_BYTE *)a1 + 16) == 0;
    return 0;
  }
  if ( !v4 )
    return 0;
  return *((_BYTE *)a1 + 16) != 0;
}
