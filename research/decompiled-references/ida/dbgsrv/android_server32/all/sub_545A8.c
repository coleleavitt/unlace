/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_545A8
// Address: 0x000545A8

//----- (000545A8) --------------------------------------------------------
int __fastcall sub_545A8(int result, int a2)
{
  __int64 v2; // r2
  int v3; // r1
  int v4; // r3

  LODWORD(v2) = *(_DWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 12);
  v4 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)result = 0;
  HIDWORD(v2) = v4 ^ v3;
  *(_DWORD *)(result + 8) = v2 == *(_DWORD *)(result + 8);
  return result;
}
