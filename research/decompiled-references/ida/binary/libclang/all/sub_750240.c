__int64 __fastcall sub_750240(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 == 1668309345 )
    {
      v4 = 0;
      if ( *(_BYTE *)(a1 + 4) == 115 )
        goto LABEL_8;
    }
    return 0;
  }
  if ( a2 != 9 || *(_QWORD *)a1 != 0x66762D7363706161LL || *(_BYTE *)(a1 + 8) != 112 )
    return 0;
  v4 = 1;
LABEL_8:
  *a3 = v4;
  return 1;
}

