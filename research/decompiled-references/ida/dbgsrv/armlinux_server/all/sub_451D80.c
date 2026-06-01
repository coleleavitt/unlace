/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451D80
// Address: 0x0000000000451D80

//----- (0000000000451D80) ----------------------------------------------------
__int64 __fastcall sub_451D80(__int64 result, __int64 a2)
{
  __int64 v2; // x2
  __int64 v3; // x4

  v2 = *(_QWORD *)(result + 8);
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)result || *(_BYTE *)a2 )
    *(_QWORD *)(result + 8) = v2 / (unsigned __int64)v3;
  else
    *(_QWORD *)(result + 8) = v2 / v3;
  return result;
}
