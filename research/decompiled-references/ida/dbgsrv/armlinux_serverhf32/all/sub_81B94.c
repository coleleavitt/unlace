/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81B94
// Address: 0x00081B94

//----- (00081B94) --------------------------------------------------------
unsigned int __fastcall sub_81B94(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_81B4C(a1, s, a3, v6);
}
