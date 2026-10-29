/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D25C
// Address: 0x0008D25C

//----- (0008D25C) --------------------------------------------------------
int __fastcall sub_8D25C(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_8D204(a1, s, a3, v6);
}
