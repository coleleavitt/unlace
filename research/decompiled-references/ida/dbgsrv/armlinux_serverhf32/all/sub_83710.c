/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83710
// Address: 0x00083710

//----- (00083710) --------------------------------------------------------
unsigned int *__fastcall sub_83710(unsigned int *a1, int a2, int a3, char *s)
{
  size_t v8; // r0

  v8 = strlen(s);
  return sub_8353C(a1, a2 - *a1, a3 - a2, s, v8);
}
