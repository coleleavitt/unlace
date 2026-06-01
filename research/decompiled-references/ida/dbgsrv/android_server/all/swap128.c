/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap128
// Address: 0x00000000000C7E1C

//----- (00000000000C7E1C) ----------------------------------------------------
unsigned __int64 __fastcall swap128(__int64 *a1)
{
  unsigned __int64 v2; // x20
  unsigned __int64 result; // x0

  v2 = swap64(a1[1]);
  result = swap64(*a1);
  *a1 = v2;
  a1[1] = result;
  return result;
}
