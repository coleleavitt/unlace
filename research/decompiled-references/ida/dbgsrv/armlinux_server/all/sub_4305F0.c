/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4305F0
// Address: 0x00000000004305F0

//----- (00000000004305F0) ----------------------------------------------------
__int64 __fastcall sub_4305F0(__int64 a1, __int64 a2)
{
  __int64 v2; // x3
  __int64 result; // x0
  __int64 v4; // x2

  v2 = *(_QWORD *)(a1 + 16);
  result = 0;
  v4 = v2 - 1;
  if ( !v2 )
    v4 = 0;
  *(_QWORD *)(a2 + 8) = v4;
  return result;
}
