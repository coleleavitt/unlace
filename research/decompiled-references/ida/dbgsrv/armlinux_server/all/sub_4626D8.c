/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4626D8
// Address: 0x00000000004626D8

//----- (00000000004626D8) ----------------------------------------------------
__int64 __fastcall sub_4626D8(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 440);
  *(_BYTE *)(result + 860) = 1;
  return result;
}
