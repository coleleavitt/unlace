/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452030
// Address: 0x0000000000452030

//----- (0000000000452030) ----------------------------------------------------
__int64 __fastcall sub_452030(__int64 result, __int64 a2)
{
  __int64 v2; // x1
  __int64 v3; // x2

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(result + 8);
  *(_BYTE *)result = 0;
  *(_QWORD *)(result + 8) = v3 == v2;
  return result;
}
