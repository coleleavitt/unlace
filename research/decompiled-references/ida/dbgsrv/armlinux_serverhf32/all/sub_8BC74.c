/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BC74
// Address: 0x0008BC74

//----- (0008BC74) --------------------------------------------------------
int *__fastcall sub_8BC74(int *result, int a2)
{
  int v2; // r3

  v2 = *result;
  result[1] = a2;
  *(_BYTE *)(v2 + a2) = 0;
  return result;
}
