__int64 __fastcall sub_7378C0(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 == 1869771365 )
    {
      v4 = 0;
      if ( *(_BYTE *)(a1 + 4) == 114 )
        goto LABEL_8;
    }
    return 0;
  }
  if ( a2 != 7 || *(_DWORD *)a1 != 1852989815 || *(_DWORD *)(a1 + 3) != 1735289198 )
    return 0;
  v4 = 1;
LABEL_8:
  *a3 = v4;
  return 1;
}

