/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D134
// Address: 0x0008D134

//----- (0008D134) --------------------------------------------------------
unsigned int __fastcall sub_8D134(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_8D0F0(a1, s, a3, v6);
}
