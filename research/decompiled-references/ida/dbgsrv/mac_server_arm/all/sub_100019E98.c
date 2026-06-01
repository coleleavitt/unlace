/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019E98
// Address: 0x0000000100019E98

//----- (0000000100019E98) ----------------------------------------------------
__int64 __fastcall sub_100019E98(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 && !strcmp((const char *)(a2 + 8), "__DWARF") )
    *(_BYTE *)(a1 + 9) = 1;
  return 0;
}
