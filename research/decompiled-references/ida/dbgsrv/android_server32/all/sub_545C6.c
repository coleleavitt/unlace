/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_545C6
// Address: 0x000545C6

//----- (000545C6) --------------------------------------------------------
int __fastcall sub_545C6(int result, int a2)
{
  __int64 v2; // r2
  unsigned int v3; // r1

  LODWORD(v2) = *(_DWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 12);
  HIDWORD(v2) = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 8) = v2 != __PAIR64__(v3, *(_DWORD *)(result + 8));
  return result;
}
