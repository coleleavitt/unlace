__int64 *__fastcall sub_13F1CD0(__int64 *a1, int a2, __int64 a3)
{
  int v3; // r14d
  char v6; // dl
  int i; // esi
  char v9; // dl

  v3 = 0;
  v6 = 0;
  while ( (*((_BYTE *)a1 + 12) & 3) != 0 )
  {
    if ( (*((_BYTE *)a1 + 12) & 3) == 1 )
    {
      v3 = *((_DWORD *)a1 + 2);
    }
    else if ( !v6 )
    {
      v6 = 1;
    }
    a1 = (__int64 *)*a1;
    if ( !a1 )
      return nullptr;
  }
  for ( i = *((_DWORD *)a1 + 2); i; i = *((_DWORD *)a1 + 2) )
  {
    if ( sub_10246C0(a3, i, a2) )
      break;
    a1 = (__int64 *)*a1;
    if ( !a1 )
      return nullptr;
    v3 = 0;
    v9 = 0;
    while ( (*((_BYTE *)a1 + 12) & 3) != 0 )
    {
      if ( (*((_BYTE *)a1 + 12) & 3) == 1 )
      {
        v3 = *((_DWORD *)a1 + 2);
      }
      else if ( !v9 )
      {
        v9 = 1;
      }
      a1 = (__int64 *)*a1;
      if ( !a1 )
        return nullptr;
    }
  }
  if ( !v3 || sub_10246C0(a3, a2, v3) )
    return a1;
  else
    return nullptr;
}
