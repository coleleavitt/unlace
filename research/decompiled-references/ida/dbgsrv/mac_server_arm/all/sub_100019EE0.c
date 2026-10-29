/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019EE0
// Address: 0x0000000100019EE0

//----- (0000000100019EE0) ----------------------------------------------------
__int64 __fastcall sub_100019EE0(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 && !strcmp((const char *)(a2 + 8), "__DWARF") )
    *(_BYTE *)(a1 + 9) = 1;
  return 0;
}
