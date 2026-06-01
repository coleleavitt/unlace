/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452470
// Address: 0x0000000000452470

//----- (0000000000452470) ----------------------------------------------------
__int64 __fastcall sub_452470(__int64 a1, __int64 a2)
{
  __int64 v2; // x2

  v2 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 176) = a2;
  return v2;
}
