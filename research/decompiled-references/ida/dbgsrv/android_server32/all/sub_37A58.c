/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37A58
// Address: 0x00037A58

//----- (00037A58) --------------------------------------------------------
int __fastcall sub_37A58(unsigned __int8 *a1, int a2)
{
  int v2; // r2

  v2 = *a1 - 3;
  *(_DWORD *)(a2 + 8) = v2 == 0;
  return 0;
}
