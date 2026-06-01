/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstr2user
// Address: 0x0009B750

//----- (0009B750) --------------------------------------------------------
unsigned int __cdecl qstr2user(int a1, const char *a2, int a3)
{
  *(_DWORD *)(a1 + 4) = 0;
  return sub_9B790(a1, a2, a3, -1);
}
