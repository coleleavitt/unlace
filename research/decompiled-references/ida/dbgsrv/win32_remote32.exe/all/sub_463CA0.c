/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463CA0
// Address: 0x00463CA0

//----- (00463CA0) --------------------------------------------------------
int *sub_463CA0()
{
  int *v0; // eax
  int v1; // ecx
  int *result; // eax
  int v3; // ecx

  v0 = sub_41C0F0();
  v1 = v0[1];
  *v0 |= 0x24u;
  v0[1] = v1;
  result = sub_453D40();
  v3 = result[1];
  *result |= 2u;
  result[1] = v3;
  return result;
}
