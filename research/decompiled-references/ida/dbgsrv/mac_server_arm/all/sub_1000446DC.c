/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000446DC
// Address: 0x00000001000446DC

//----- (00000001000446DC) ----------------------------------------------------
__int64 __fastcall sub_1000446DC(__int64 a1, __int64 a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 152) = a2;
  return v2;
}
