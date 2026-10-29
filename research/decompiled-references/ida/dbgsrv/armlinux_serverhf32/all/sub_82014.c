/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82014
// Address: 0x00082014

//----- (00082014) --------------------------------------------------------
bool __fastcall sub_82014(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 8);
  __dmb(0xBu);
  return v1 > 0;
}
