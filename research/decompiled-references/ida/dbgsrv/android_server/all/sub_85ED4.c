/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85ED4
// Address: 0x0000000000085ED4

//----- (0000000000085ED4) ----------------------------------------------------
__int64 __fastcall sub_85ED4(__int64 a1, __int64 a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 192) = a2;
  return v2;
}
