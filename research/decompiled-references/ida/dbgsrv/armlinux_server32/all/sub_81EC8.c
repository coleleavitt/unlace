/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81EC8
// Address: 0x00081EC8

//----- (00081EC8) --------------------------------------------------------
unsigned int __fastcall sub_81EC8(_DWORD *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_81E7C(a1, s, a3, v6);
}
