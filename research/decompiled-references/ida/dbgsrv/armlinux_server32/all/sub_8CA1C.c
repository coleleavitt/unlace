/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CA1C
// Address: 0x0008CA1C

//----- (0008CA1C) --------------------------------------------------------
unsigned int *__fastcall sub_8CA1C(unsigned int *a1, char *s)
{
  size_t v4; // r0

  v4 = strlen(s);
  return sub_8C79C(a1, 0, a1[1], s, v4);
}
