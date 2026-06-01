/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D1E0
// Address: 0x000000010001D1E0

//----- (000000010001D1E0) ----------------------------------------------------
__int64 __fastcall sub_10001D1E0(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 9) && !strcmp((const char *)(a2 + 16), "__DWARF") )
  {
    *(_BYTE *)(a1 + 9) = 1;
    if ( *(_BYTE *)(a1 + 10) )
      return 0;
  }
  else if ( *(_BYTE *)(a1 + 10) )
  {
    return 0;
  }
  if ( *(_QWORD *)(a2 + 40)
    && !(*(_DWORD *)a2 ^ 0x6E695F5F | *(unsigned __int16 *)(a2 + 4) ^ 0x6F66)
    && !(*(_QWORD *)(a2 + 16) ^ 0x4E494C4552505F5FLL | *(unsigned __int8 *)(a2 + 24) ^ 0x4BLL) )
  {
    *(_BYTE *)(a1 + 10) = 1;
  }
  return 0;
}
