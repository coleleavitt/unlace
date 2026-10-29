/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D404
// Address: 0x0008D404

//----- (0008D404) --------------------------------------------------------
unsigned int __fastcall sub_8D404(_DWORD *a1, char *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = strlen(s);
  return sub_8D3BC(a1, s, a3, v6);
}
