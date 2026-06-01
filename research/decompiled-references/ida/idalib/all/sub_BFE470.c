__int64 __fastcall sub_BFE470(_DWORD **a1, unsigned __int64 a2)
{
  int v2; // eax

  if ( !a2 )
    return 0;
  if ( (**a1 & 0x10000) == 0 )
  {
    v2 = 0;
    while ( (unsigned int)++v2 < a2 )
    {
      if ( (*a1[v2] & 0x10000) != 0 )
        return 1;
    }
    return 0;
  }
  return 1;
}
