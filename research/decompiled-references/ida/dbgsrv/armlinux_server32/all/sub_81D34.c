/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81D34
// Address: 0x00081D34

//----- (00081D34) --------------------------------------------------------
unsigned int __fastcall sub_81D34(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_81CEC(a1, s, a3, v6);
}
