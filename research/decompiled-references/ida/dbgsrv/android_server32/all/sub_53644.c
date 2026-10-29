/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53644
// Address: 0x00053644

//----- (00053644) --------------------------------------------------------
__int64 __fastcall sub_53644(int a1, int a2)
{
  __int64 result; // r0

  result = *(_QWORD *)(a2 + 8) * *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
