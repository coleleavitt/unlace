/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3BF0
// Address: 0x00000000004A3BF0

//----- (00000000004A3BF0) ----------------------------------------------------
unsigned int **__fastcall sub_4A3BF0(unsigned int **a1, __int64 a2, __int64 a3, char *s)
{
  size_t v8; // x0

  v8 = strlen(s);
  return sub_4A3948(a1, a2 - (_QWORD)*a1, a3 - a2, (unsigned int *)s, v8);
}
