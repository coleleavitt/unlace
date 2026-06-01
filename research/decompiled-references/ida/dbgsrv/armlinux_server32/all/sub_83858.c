/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83858
// Address: 0x00083858

//----- (00083858) --------------------------------------------------------
unsigned int *__fastcall sub_83858(unsigned int *a1, size_t a2, unsigned int a3, char *s)
{
  size_t v8; // r0

  v8 = strlen(s);
  return sub_836D4(a1, a2, a3, s, v8);
}
