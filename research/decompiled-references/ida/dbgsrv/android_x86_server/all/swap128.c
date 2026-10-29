/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap128
// Address: 0x000BB1F0

//----- (000BB1F0) --------------------------------------------------------
unsigned __int64 __cdecl swap128(unsigned __int64 *a1)
{
  unsigned __int64 v1; // kr00_8
  unsigned __int64 result; // rax

  v1 = swap64(a1[1]);
  result = swap64(*a1);
  *a1 = v1;
  a1[1] = result;
  return result;
}
