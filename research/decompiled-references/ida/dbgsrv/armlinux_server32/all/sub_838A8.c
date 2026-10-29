/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_838A8
// Address: 0x000838A8

//----- (000838A8) --------------------------------------------------------
unsigned int *__fastcall sub_838A8(unsigned int *a1, int a2, int a3, char *s)
{
  size_t v8; // r0

  v8 = strlen(s);
  return sub_836D4(a1, a2 - *a1, a3 - a2, s, v8);
}
