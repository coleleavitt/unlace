/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D538
// Address: 0x000000000008D538

//----- (000000000008D538) ----------------------------------------------------
__int64 __fastcall sub_8D538(__int64 result, __int64 a2)
{
  *(_QWORD *)(result + 440) = a2;
  *(_QWORD *)(a2 + 400) = result + 192;
  return result;
}
