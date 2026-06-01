__int64 __fastcall sub_7340B0(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  if ( a2 == 6 )
  {
    if ( *(_DWORD *)a1 == 1836216174 )
    {
      v4 = 1;
      if ( *(_WORD *)(a1 + 4) == 27745 )
        goto LABEL_9;
    }
    if ( *(_DWORD *)a1 == 1768187245 )
    {
      v4 = 3;
      if ( *(_WORD *)(a1 + 4) == 28021 )
        goto LABEL_9;
    }
    return 0;
  }
  if ( a2 != 7 || *(_DWORD *)a1 != 1920235621 || *(_DWORD *)(a1 + 3) != 1701668210 )
    return 0;
  v4 = 4;
LABEL_9:
  *a3 = v4;
  return 1;
}

