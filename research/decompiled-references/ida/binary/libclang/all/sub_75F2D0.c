__int64 __fastcall sub_75F2D0(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  switch ( a2 )
  {
    case 7LL:
      if ( *(_DWORD *)a1 == 1634100580 )
      {
        v4 = 0;
        if ( *(_DWORD *)(a1 + 3) == 1953264993 )
          goto LABEL_10;
      }
      return 0;
    case 6LL:
      if ( *(_DWORD *)a1 != 1684302184 || *(_WORD *)(a1 + 4) != 28261 )
        return 0;
LABEL_13:
      v4 = 1;
      goto LABEL_10;
    case 8LL:
      if ( *(_QWORD *)a1 != 0x6C616E7265746E69LL )
        return 0;
      goto LABEL_13;
  }
  if ( a2 != 9 || *(_QWORD *)a1 != 0x65746365746F7270LL || *(_BYTE *)(a1 + 8) != 100 )
    return 0;
  v4 = 2;
LABEL_10:
  *a3 = v4;
  return 1;
}

