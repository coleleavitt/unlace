/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54B48
// Address: 0x00054B48

//----- (00054B48) --------------------------------------------------------
int __fastcall sub_54B48(int result, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) |= *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 8) |= v2;
  return result;
}
