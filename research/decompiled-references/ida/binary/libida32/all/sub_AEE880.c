__int64 __fastcall sub_AEE880(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  if ( a2 == 6 )
  {
    if ( *(_DWORD *)a1 == 1936682083 )
    {
      v4 = 0;
      if ( *(_WORD *)(a1 + 4) == 25701 )
        goto LABEL_7;
    }
    return 0;
  }
  if ( a2 != 4 || *(_DWORD *)a1 != 1852141679 )
    return 0;
  v4 = 1;
LABEL_7:
  *a3 = v4;
  return 1;
}

