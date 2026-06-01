/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0488
// Address: 0x00000000004B0488

//----- (00000000004B0488) ----------------------------------------------------
__int64 __fastcall sub_4B0488(__int64 result)
{
  _BYTE *v1; // x1

  v1 = *(_BYTE **)result;
  *(_QWORD *)(result + 8) = 0;
  *v1 = 0;
  return result;
}
