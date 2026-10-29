__int64 __fastcall sub_B11DC0(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 == 1869771365 )
    {
      v4 = 0;
      if ( *(_BYTE *)(a1 + 4) == 114 )
        goto LABEL_9;
    }
    return 0;
  }
  if ( a2 != 7 || *(_DWORD *)a1 != 1852989815 || *(_WORD *)(a1 + 4) != 28265 || *(_BYTE *)(a1 + 6) != 103 )
    return 0;
  v4 = 1;
LABEL_9:
  *a3 = v4;
  return 1;
}
