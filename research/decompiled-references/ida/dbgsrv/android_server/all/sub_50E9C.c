/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50E9C
// Address: 0x0000000000050E9C

//----- (0000000000050E9C) ----------------------------------------------------
__int64 __fastcall sub_50E9C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x10
  __int64 v3; // x8
  __int64 v4; // x9
  int v5; // w11
  unsigned __int64 v6; // x13

  v2 = *(_QWORD *)(a1 + 584);
  if ( !v2 )
    return -1;
  v3 = *(_QWORD *)(a1 + 576);
  v4 = 0;
  v5 = 1;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v3 + 24 * v4 + 16);
    if ( v6 <= a2 && *(_QWORD *)(v3 + 24 * v4 + 8) + v6 > a2 )
      break;
    v4 = v5;
    if ( v2 <= v5++ )
      return -1;
  }
  return *(_QWORD *)(v3 + 24 * v4) + (unsigned int)(a2 - v6);
}
