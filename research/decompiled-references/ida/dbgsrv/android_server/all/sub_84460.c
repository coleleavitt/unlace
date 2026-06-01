/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84460
// Address: 0x0000000000084460

//----- (0000000000084460) ----------------------------------------------------
__int64 __fastcall sub_84460(__int64 result, __int64 a2)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  _BOOL8 v4; // x8

  v2 = *(_QWORD *)(result + 8);
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)result || *(_BYTE *)a2 )
    v4 = v2 <= v3;
  else
    v4 = (__int64)v2 <= (__int64)v3;
  *(_QWORD *)(result + 8) = v4;
  *(_BYTE *)result = 0;
  return result;
}
