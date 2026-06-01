/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D0B0
// Address: 0x0008D0B0

//----- (0008D0B0) --------------------------------------------------------
int __fastcall sub_8D0B0(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_8D038(a1, (unsigned __int8 *)s, a3, v6);
}
