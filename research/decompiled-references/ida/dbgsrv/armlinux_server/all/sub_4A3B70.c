/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3B70
// Address: 0x00000000004A3B70

//----- (00000000004A3B70) ----------------------------------------------------
unsigned int **__fastcall sub_4A3B70(unsigned int **a1, size_t a2, unsigned __int64 a3, char *s)
{
  size_t v8; // x0

  v8 = strlen(s);
  return sub_4A3948(a1, a2, a3, (unsigned int *)s, v8);
}
