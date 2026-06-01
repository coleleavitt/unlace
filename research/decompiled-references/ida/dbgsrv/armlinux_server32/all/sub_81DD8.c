/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81DD8
// Address: 0x00081DD8

//----- (00081DD8) --------------------------------------------------------
unsigned int __fastcall sub_81DD8(_DWORD *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_81D84(a1, s, a3, v6);
}
