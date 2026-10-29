/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D31C
// Address: 0x0008D31C

//----- (0008D31C) --------------------------------------------------------
unsigned int __fastcall sub_8D31C(_DWORD *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_8D2D0(a1, s, a3, v6);
}
