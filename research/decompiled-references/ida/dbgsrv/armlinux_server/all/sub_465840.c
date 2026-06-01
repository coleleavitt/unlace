/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465840
// Address: 0x0000000000465840

//----- (0000000000465840) ----------------------------------------------------
__int64 __fastcall sub_465840(__int64 result, __int64 a2)
{
  *(_QWORD *)(result + 440) = a2;
  *(_QWORD *)(a2 + 480) = result + 192;
  return result;
}
