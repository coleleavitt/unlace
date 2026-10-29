/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82E30
// Address: 0x00082E30

//----- (00082E30) --------------------------------------------------------
int *__fastcall sub_82E30(int *a1, char *s)
{
  size_t v4; // r0

  v4 = strlen(s);
  return sub_82D68(a1, (unsigned int)s, v4);
}
