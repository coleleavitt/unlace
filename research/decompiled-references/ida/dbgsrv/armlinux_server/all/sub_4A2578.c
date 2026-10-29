/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2578
// Address: 0x00000000004A2578

//----- (00000000004A2578) ----------------------------------------------------
unsigned int **__fastcall sub_4A2578(unsigned int **a1, char *s)
{
  size_t v4; // x0

  v4 = strlen(s);
  return sub_4A2400(a1, (unsigned int *)s, v4);
}
