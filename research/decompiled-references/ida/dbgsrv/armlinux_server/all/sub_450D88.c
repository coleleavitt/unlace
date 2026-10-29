/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450D88
// Address: 0x0000000000450D88

//----- (0000000000450D88) ----------------------------------------------------
__int64 __fastcall sub_450D88(__int64 a1, int a2)
{
  unsigned int v2; // w2

  v2 = *(_DWORD *)(a1 + 764);
  *(_DWORD *)(a1 + 764) = a2;
  return v2;
}
