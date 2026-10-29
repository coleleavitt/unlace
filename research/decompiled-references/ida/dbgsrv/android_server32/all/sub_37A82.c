/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37A82
// Address: 0x00037A82

//----- (00037A82) --------------------------------------------------------
int __fastcall sub_37A82(unsigned __int8 *a1, int a2)
{
  int v2; // r2

  v2 = *a1 - 8;
  *(_DWORD *)(a2 + 8) = v2 == 0;
  return 0;
}
