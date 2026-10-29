/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstr2user
// Address: 0x00070958

//----- (00070958) --------------------------------------------------------
int __fastcall qstr2user(int a1, const char *a2, int a3)
{
  *(_DWORD *)(a1 + 4) = 0;
  return sub_70968((void **)a1, a2, a3, -1);
}
