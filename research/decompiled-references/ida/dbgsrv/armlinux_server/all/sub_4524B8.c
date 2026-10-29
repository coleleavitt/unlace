/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4524B8
// Address: 0x00000000004524B8

//----- (00000000004524B8) ----------------------------------------------------
__int64 __fastcall sub_4524B8(__int64 a1, __int64 a2)
{
  __int64 v2; // x2

  v2 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 208) = a2;
  return v2;
}
