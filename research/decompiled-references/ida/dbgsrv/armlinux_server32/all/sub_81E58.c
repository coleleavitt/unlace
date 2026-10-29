/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81E58
// Address: 0x00081E58

//----- (00081E58) --------------------------------------------------------
int __fastcall sub_81E58(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_81DFC(a1, s, a3, v6);
}
