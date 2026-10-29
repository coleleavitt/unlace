/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82C1C
// Address: 0x00082C1C

//----- (00082C1C) --------------------------------------------------------
unsigned int *__fastcall sub_82C1C(unsigned int *a1, size_t a2, char *s)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_82AA8(a1, a2, s, v6);
}
