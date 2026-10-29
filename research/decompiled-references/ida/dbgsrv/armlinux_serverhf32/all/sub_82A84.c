/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82A84
// Address: 0x00082A84

//----- (00082A84) --------------------------------------------------------
unsigned int *__fastcall sub_82A84(unsigned int *a1, size_t a2, char *s)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_8290C(a1, a2, s, v6);
}
