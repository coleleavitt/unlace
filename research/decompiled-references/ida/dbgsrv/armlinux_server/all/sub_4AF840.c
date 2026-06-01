/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AF840
// Address: 0x00000000004AF840

//----- (00000000004AF840) ----------------------------------------------------
__int64 __fastcall sub_4AF840(__int64 result)
{
  *(_QWORD *)result = result + 16;
  *(_QWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 16) = 0;
  return result;
}
