/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85E9C
// Address: 0x0000000000085E9C

//----- (0000000000085E9C) ----------------------------------------------------
__int64 __fastcall sub_85E9C(__int64 a1, __int64 a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = a2;
  return v2;
}
