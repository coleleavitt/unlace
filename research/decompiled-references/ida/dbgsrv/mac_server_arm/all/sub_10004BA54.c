/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004BA54
// Address: 0x000000010004BA54

//----- (000000010004BA54) ----------------------------------------------------
__int64 __fastcall sub_10004BA54(__int64 result, __int64 a2)
{
  *(_QWORD *)(result + 440) = a2;
  *(_QWORD *)(a2 + 400) = result + 192;
  return result;
}
