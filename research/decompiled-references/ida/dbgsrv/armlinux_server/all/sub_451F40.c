/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451F40
// Address: 0x0000000000451F40

//----- (0000000000451F40) ----------------------------------------------------
__int64 __fastcall sub_451F40(__int64 result, __int64 a2)
{
  unsigned __int64 v2; // x3
  unsigned __int64 v3; // x2

  v2 = *(_QWORD *)(result + 8);
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)result )
  {
    *(_BYTE *)result = 0;
    *(_QWORD *)(result + 8) = v2 <= v3;
  }
  else if ( *(_BYTE *)a2 )
  {
    *(_BYTE *)result = 0;
    *(_QWORD *)(result + 8) = v2 <= v3;
  }
  else
  {
    *(_BYTE *)result = 0;
    *(_QWORD *)(result + 8) = (__int64)v2 <= (__int64)v3;
  }
  return result;
}
