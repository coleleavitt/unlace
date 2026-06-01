/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2820
// Address: 0x00000000004A2820

//----- (00000000004A2820) ----------------------------------------------------
unsigned int **__fastcall sub_4A2820(unsigned int **a1, size_t a2, char *s)
{
  size_t v6; // x0

  v6 = strlen(s);
  return sub_4A25F0(a1, a2, (unsigned int *)s, v6);
}
