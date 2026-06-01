/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D858
// Address: 0x000000010002D858

//----- (000000010002D858) ----------------------------------------------------
__int64 __fastcall sub_10002D858(__int64 *a1, __int64 a2)
{
  __int64 v3; // x9
  __int64 result; // x0
  __int64 v5; // x8

  if ( !a2 )
    return -1;
  v3 = a1[1];
  if ( !v3 )
    return -1;
  result = 0;
  v5 = *a1;
  while ( *(_QWORD *)(v5 + 8 * result) != a2 )
  {
    if ( v3 == ++result )
      return -1;
  }
  return result;
}
