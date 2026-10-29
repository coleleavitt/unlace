/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85EAC
// Address: 0x0000000000085EAC

//----- (0000000000085EAC) ----------------------------------------------------
__int64 __fastcall sub_85EAC(__int64 a1, __int64 a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 176) = a2;
  return v2;
}
