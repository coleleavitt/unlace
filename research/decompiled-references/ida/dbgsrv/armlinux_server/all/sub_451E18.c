/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451E18
// Address: 0x0000000000451E18

//----- (0000000000451E18) ----------------------------------------------------
__int64 __fastcall sub_451E18(__int64 result, __int64 a2)
{
  __int64 v2; // x2
  __int64 v3; // x1
  unsigned __int64 v4; // x1

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(result + 8);
  if ( *(_BYTE *)result )
    v4 = (unsigned __int64)v3 >> v2;
  else
    v4 = v3 >> v2;
  *(_QWORD *)(result + 8) = v4;
  return result;
}
