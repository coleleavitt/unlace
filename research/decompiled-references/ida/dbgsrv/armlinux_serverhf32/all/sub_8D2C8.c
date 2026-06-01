/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D2C8
// Address: 0x0008D2C8

//----- (0008D2C8) --------------------------------------------------------
unsigned int __fastcall sub_8D2C8(_DWORD *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_8D280(a1, s, a3, v6);
}
