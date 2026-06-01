/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D1EC
// Address: 0x0008D1EC

//----- (0008D1EC) --------------------------------------------------------
int __fastcall sub_8D1EC(int *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_8D174(a1, (unsigned __int8 *)s, a3, v6);
}
