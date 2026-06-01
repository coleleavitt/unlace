/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451E40
// Address: 0x0000000000451E40

//----- (0000000000451E40) ----------------------------------------------------
__int64 __fastcall sub_451E40(__int64 result, __int64 a2)
{
  *(_QWORD *)(result + 8) <<= *(_QWORD *)(a2 + 8);
  return result;
}
