/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_fpvalue_kind
// Address: 0x00000000000B6B00

//----- (00000000000B6B00) ----------------------------------------------------
__int64 __fastcall get_fpvalue_kind(_WORD *a1)
{
  if ( (~a1[7] & 0x7FFF) != 0 )
    return 1;
  if ( (a1[6] & 0x7FFF) != 0 || a1[5] || a1[4] || a1[3] || a1[2] || a1[1] || *a1 )
    return 2;
  if ( (a1[7] & 0x8000) != 0 )
    return 4;
  return 3;
}
