/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452460
// Address: 0x0000000000452460

//----- (0000000000452460) ----------------------------------------------------
__int64 __fastcall sub_452460(__int64 a1, __int64 a2)
{
  __int64 v2; // x2

  v2 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = a2;
  return v2;
}
