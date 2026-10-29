__int64 __fastcall sub_752580(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  if ( a2 == 10 )
  {
    if ( *(_QWORD *)a1 == 0x7369767265707573LL )
    {
      v4 = 0;
      if ( *(_WORD *)(a1 + 8) == 29295 )
        goto LABEL_8;
    }
    return 0;
  }
  if ( a2 != 7 || *(_DWORD *)a1 != 1751343469 || *(_DWORD *)(a1 + 3) != 1701734760 )
    return 0;
  v4 = 1;
LABEL_8:
  *a3 = v4;
  return 1;
}

