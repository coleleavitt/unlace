/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_847B8
// Address: 0x00000000000847B8

//----- (00000000000847B8) ----------------------------------------------------
__int64 __fastcall sub_847B8(__int64 result, __int64 a2)
{
  *(_QWORD *)(result + 8) &= *(_QWORD *)(a2 + 8);
  return result;
}
