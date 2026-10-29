/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450FA8
// Address: 0x0000000000450FA8

//----- (0000000000450FA8) ----------------------------------------------------
__int64 __fastcall sub_450FA8(__int64 a1, int a2)
{
  unsigned int v2; // w2

  v2 = *(_DWORD *)(a1 + 356);
  *(_DWORD *)(a1 + 356) = a2;
  return v2;
}
