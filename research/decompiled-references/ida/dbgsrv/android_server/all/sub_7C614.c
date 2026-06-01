/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C614
// Address: 0x000000000007C614

//----- (000000000007C614) ----------------------------------------------------
__int64 __fastcall sub_7C614(__int64 a1, int a2)
{
  unsigned int v2; // w8

  v2 = *(_DWORD *)(a1 + 676);
  *(_DWORD *)(a1 + 676) = a2;
  return v2;
}
