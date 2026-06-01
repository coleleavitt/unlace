/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004E4A4
// Address: 0x000000010004E4A4

//----- (000000010004E4A4) ----------------------------------------------------
__int64 __fastcall sub_10004E4A4(__int64 result, __int64 a2)
{
  *(_QWORD *)(result + 440) = a2;
  *(_QWORD *)(a2 + 400) = result + 192;
  return result;
}
