/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D296
// Address: 0x0046D296

//----- (0046D296) --------------------------------------------------------
int __cdecl sub_46D296(unsigned __int8 a1, int a2, int a3, int a4, int *a5)
{
  *a5 = a3 & 0x7FFFFF | (a1 << 31) | ((a2 + 127) << 23) & 0x7F800000;
  return 0;
}
