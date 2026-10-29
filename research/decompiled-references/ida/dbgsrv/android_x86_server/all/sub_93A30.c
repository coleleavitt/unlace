/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93A30
// Address: 0x00093A30

//----- (00093A30) --------------------------------------------------------
int __cdecl sub_93A30(char *nptr, int a2)
{
  int result; // eax

  result = atoi(nptr);
  *(_WORD *)(a2 + 56) = result;
  return result;
}
