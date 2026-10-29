/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_836C0
// Address: 0x000836C0

//----- (000836C0) --------------------------------------------------------
unsigned int *__fastcall sub_836C0(unsigned int *a1, size_t a2, unsigned int a3, char *s)
{
  size_t v8; // r0

  v8 = strlen(s);
  return sub_8353C(a1, a2, a3, s, v8);
}
