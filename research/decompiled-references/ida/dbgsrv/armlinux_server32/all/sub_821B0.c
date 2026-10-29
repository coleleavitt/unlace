/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_821B0
// Address: 0x000821B0

//----- (000821B0) --------------------------------------------------------
bool __fastcall sub_821B0(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + 8);
  __dmb(0xBu);
  return v1 > 0;
}
