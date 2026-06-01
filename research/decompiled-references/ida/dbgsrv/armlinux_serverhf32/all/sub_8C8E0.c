/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C8E0
// Address: 0x0008C8E0

//----- (0008C8E0) --------------------------------------------------------
unsigned int *__fastcall sub_8C8E0(unsigned int *a1, char *s)
{
  size_t v4; // r0

  v4 = strlen(s);
  return sub_8C660(a1, 0, a1[1], s, v4);
}
