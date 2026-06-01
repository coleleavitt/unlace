/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dq
// Address: 0x0007CB54

//----- (0007CB54) --------------------------------------------------------
int __fastcall unpack_dq(unsigned int *a1, unsigned int a2)
{
  int v4; // r6

  v4 = unpack_dd(a1, a2);
  unpack_dd(a1, a2);
  return v4;
}
