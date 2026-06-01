/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84D78
// Address: 0x0000000000084D78

//----- (0000000000084D78) ----------------------------------------------------
__int64 __fastcall sub_84D78(__int64 result, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x9

  v2 = *(_QWORD *)(result + 8);
  v3 = *(_QWORD *)(a2 + 8);
  *(_BYTE *)result = 0;
  *(_QWORD *)(result + 8) = (v2 != 0) & (unsigned __int8)(v3 != 0);
  return result;
}
