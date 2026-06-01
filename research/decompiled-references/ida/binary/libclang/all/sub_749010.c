__int64 __fastcall sub_749010(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  if ( a2 == 2 )
  {
    v3 = 0;
    if ( *(_WORD *)a1 != 28532 )
      return 0;
  }
  else if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 != 1702129253 )
      return 0;
    v3 = 1;
    if ( *(_BYTE *)(a1 + 4) != 114 )
      return 0;
  }
  else
  {
    if ( a2 != 4 || *(_DWORD *)a1 != 1802398060 )
      return 0;
    v3 = 2;
  }
  *a3 = v3;
  return 1;
}

