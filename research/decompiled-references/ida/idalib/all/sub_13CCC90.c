char __fastcall sub_13CCC90(_DWORD *a1)
{
  unsigned __int64 v1; // rdx
  char result; // al
  __int64 v3; // rcx

  v1 = (unsigned int)a1[11];
  if ( (unsigned int)v1 > 0x27 )
    return (unsigned int)(v1 - 27) > 4 && (((_DWORD)v1 - 5) & 0xFFFFFFFB) != 0;
  v3 = 0xB8071FFC9CLL;
  result = 0;
  if ( !_bittest64(&v3, v1) )
  {
    if ( (_DWORD)v1 )
    {
      if ( (_DWORD)v1 == 1 )
        return result;
      return (unsigned int)(v1 - 27) > 4 && (((_DWORD)v1 - 5) & 0xFFFFFFFB) != 0;
    }
    if ( (unsigned int)(a1[8] - 55) > 1 )
    {
      result = 1;
      if ( a1[10] == 1 )
        return a1[13] != 5;
    }
  }
  return result;
}
