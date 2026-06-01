/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B9D0
// Address: 0x000000010001B9D0

//----- (000000010001B9D0) ----------------------------------------------------
__int64 __fastcall sub_10001B9D0(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 && !strcmp((const char *)(a2 + 16), "__DWARF") )
  {
    *(_BYTE *)(a1 + 9) = 1;
    if ( (*(_BYTE *)(a1 + 10) & 1) != 0 )
      return 0;
  }
  else if ( (*(_BYTE *)(a1 + 10) & 1) != 0 )
  {
    return 0;
  }
  if ( *(_DWORD *)(a2 + 36) )
  {
    if ( *(_DWORD *)a2 == 1852399455
      && *(_WORD *)(a2 + 4) == 28518
      && *(_QWORD *)(a2 + 16) == 0x4E494C4552505F5FLL
      && *(_BYTE *)(a2 + 24) == 75 )
    {
      *(_BYTE *)(a1 + 10) = 1;
    }
  }
  return 0;
}
