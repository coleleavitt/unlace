/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81CB8
// Address: 0x00081CB8

//----- (00081CB8) --------------------------------------------------------
int __fastcall sub_81CB8(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_81C5C(a1, s, a3, v6);
}
