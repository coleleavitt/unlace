/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D270
// Address: 0x0008D270

//----- (0008D270) --------------------------------------------------------
unsigned int __fastcall sub_8D270(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_8D22C(a1, s, a3, v6);
}
