/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82FC8
// Address: 0x00082FC8

//----- (00082FC8) --------------------------------------------------------
int *__fastcall sub_82FC8(int *a1, char *s)
{
  size_t v4; // r0

  v4 = strlen(s);
  return sub_82F00(a1, (unsigned int)s, v4);
}
