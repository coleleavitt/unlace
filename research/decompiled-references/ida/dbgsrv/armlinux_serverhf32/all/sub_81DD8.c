/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81DD8
// Address: 0x00081DD8

//----- (00081DD8) --------------------------------------------------------
int __fastcall sub_81DD8(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_81D80(a1, s, a3, v6);
}
