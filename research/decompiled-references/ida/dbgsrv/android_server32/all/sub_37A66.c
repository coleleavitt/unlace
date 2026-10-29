/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37A66
// Address: 0x00037A66

//----- (00037A66) --------------------------------------------------------
int __fastcall sub_37A66(unsigned __int8 *a1, int a2)
{
  int v2; // r2

  v2 = *a1 - 5;
  *(_DWORD *)(a2 + 8) = v2 == 0;
  return 0;
}
