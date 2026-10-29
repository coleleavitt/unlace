/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D1E0
// Address: 0x0008D1E0

//----- (0008D1E0) --------------------------------------------------------
unsigned int __fastcall sub_8D1E0(_DWORD *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_8D194(a1, s, a3, v6);
}
