/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37A4A
// Address: 0x00037A4A

//----- (00037A4A) --------------------------------------------------------
int __fastcall sub_37A4A(unsigned __int8 *a1, int a2)
{
  int v2; // r2

  v2 = *a1 - 2;
  *(_DWORD *)(a2 + 8) = v2 == 0;
  return 0;
}
