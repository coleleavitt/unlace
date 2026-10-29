/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451DB0
// Address: 0x0000000000451DB0

//----- (0000000000451DB0) ----------------------------------------------------
__int64 __fastcall sub_451DB0(__int64 result, __int64 a2)
{
  __int64 v2; // x3
  unsigned __int64 v3; // x2

  v2 = *(_QWORD *)(result + 8);
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)result || *(_BYTE *)a2 )
    *(_QWORD *)(result + 8) = v2 % v3;
  else
    *(_QWORD *)(result + 8) = v2 % (__int64)v3;
  return result;
}
