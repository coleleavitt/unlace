/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D0D0
// Address: 0x000000010001D0D0

//----- (000000010001D0D0) ----------------------------------------------------
__int64 __fastcall sub_10001D0D0(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 9) && !strcmp((const char *)(a2 + 8), "__DWARF") )
    *(_BYTE *)(a1 + 9) = 1;
  return 0;
}
