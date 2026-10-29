/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451D18
// Address: 0x0000000000451D18

//----- (0000000000451D18) ----------------------------------------------------
__int64 __fastcall sub_451D18(__int64 result, __int64 a2)
{
  *(_QWORD *)(result + 8) = *(_QWORD *)(a2 + 8);
  *(_BYTE *)result = *(_BYTE *)a2;
  return result;
}
