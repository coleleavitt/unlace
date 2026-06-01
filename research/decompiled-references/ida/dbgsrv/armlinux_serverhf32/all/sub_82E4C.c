/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82E4C
// Address: 0x00082E4C

//----- (00082E4C) --------------------------------------------------------
int *__fastcall sub_82E4C(int *a1, char *s)
{
  size_t v4; // r0

  v4 = strlen(s);
  return sub_82D68(a1, (unsigned int)s, v4);
}
