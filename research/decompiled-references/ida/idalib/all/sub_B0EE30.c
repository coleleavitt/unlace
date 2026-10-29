__int64 __fastcall sub_B0EE30(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  if ( a2 == 7 )
  {
    if ( *(_DWORD *)a1 == 1852534389 && *(_WORD *)(a1 + 4) == 30575 )
    {
      v3 = 0;
      if ( *(_BYTE *)(a1 + 6) == 110 )
        goto LABEL_11;
    }
    return 0;
  }
  if ( a2 == 8 )
  {
    if ( *(_QWORD *)a1 != 0x64656D75736E6F63LL )
      return 0;
    v3 = 1;
  }
  else
  {
    if ( a2 != 10 || *(_QWORD *)a1 != 0x6D75736E6F636E75LL || *(_WORD *)(a1 + 8) != 25701 )
      return 0;
    v3 = 2;
  }
LABEL_11:
  *a3 = v3;
  return 1;
}
