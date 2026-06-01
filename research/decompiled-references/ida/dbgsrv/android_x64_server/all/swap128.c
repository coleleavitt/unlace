/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap128
// Address: 0x00000000000CD700

//----- (00000000000CD700) ----------------------------------------------------
unsigned __int64 __fastcall swap128(__int64 *a1)
{
  unsigned __int64 v1; // r14
  unsigned __int64 result; // rax

  v1 = swap64(a1[1]);
  result = swap64(*a1);
  a1[1] = result;
  *a1 = v1;
  return result;
}
