__int64 __fastcall sub_AEC050(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 == 1818324339 && *(_BYTE *)(a1 + 4) == 108 )
    {
LABEL_12:
      v3 = 1;
      goto LABEL_6;
    }
    if ( *(_DWORD *)a1 == 1735549292 && *(_BYTE *)(a1 + 4) == 101 )
    {
LABEL_5:
      v3 = 4;
LABEL_6:
      *a3 = v3;
      return 1;
    }
  }
  else if ( a2 == 6 )
  {
    if ( *(_DWORD *)a1 == 1836216174 && *(_WORD *)(a1 + 4) == 27745 )
      goto LABEL_12;
    if ( *(_DWORD *)a1 == 1768187245 )
    {
      v3 = 3;
      if ( *(_WORD *)(a1 + 4) == 28021 )
        goto LABEL_6;
    }
  }
  else if ( a2 == 7 && *(_DWORD *)a1 == 1920235621 && *(_WORD *)(a1 + 4) == 28005 && *(_BYTE *)(a1 + 6) == 101 )
  {
    goto LABEL_5;
  }
  return 0;
}

