/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84600
// Address: 0x0000000000084600

//----- (0000000000084600) ----------------------------------------------------
__int64 __fastcall sub_84600(__int64 result, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x9

  v2 = *(_QWORD *)(result + 8);
  v3 = *(_QWORD *)(a2 + 8);
  *(_BYTE *)result = 0;
  *(_QWORD *)(result + 8) = v2 != v3;
  return result;
}
