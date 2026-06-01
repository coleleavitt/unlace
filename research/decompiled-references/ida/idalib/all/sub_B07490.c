__int64 __fastcall sub_B07490(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  if ( a2 == 3 )
  {
    if ( *(_WORD *)a1 == 21065 && (v3 = 0, *(_BYTE *)(a1 + 2) == 81)
      || *(_WORD *)a1 == 18758 && (v3 = 1, *(_BYTE *)(a1 + 2) == 81)
      || *(_WORD *)a1 == 22355 && (v3 = 2, *(_BYTE *)(a1 + 2) == 73) )
    {
LABEL_6:
      *a3 = v3;
      return 1;
    }
    return 0;
  }
  if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 == 1380926017 )
    {
      v3 = 3;
      if ( *(_BYTE *)(a1 + 4) == 84 )
        goto LABEL_6;
    }
    if ( *(_DWORD *)a1 == 1162104405 )
    {
      v3 = 4;
      if ( *(_BYTE *)(a1 + 4) == 70 )
        goto LABEL_6;
    }
    return 0;
  }
  if ( a2 )
    return 0;
  *a3 = 5;
  return 1;
}
