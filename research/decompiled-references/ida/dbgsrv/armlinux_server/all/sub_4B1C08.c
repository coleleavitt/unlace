/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1C08
// Address: 0x00000000004B1C08

//----- (00000000004B1C08) ----------------------------------------------------
__int64 __fastcall sub_4B1C08(_QWORD *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 v3; // x3
  unsigned __int64 v4; // x3

  v3 = a1[1];
  if ( !v3 )
    return -1;
  v4 = v3 - 1;
  if ( v4 <= a3 )
    a3 = v4;
  while ( a3 != -1 && *(unsigned __int8 *)(*a1 + a3) != a2 )
    --a3;
  return a3;
}
