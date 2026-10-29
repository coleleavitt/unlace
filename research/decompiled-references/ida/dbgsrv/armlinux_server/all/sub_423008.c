/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423008
// Address: 0x0000000000423008

//----- (0000000000423008) ----------------------------------------------------
__int64 __fastcall sub_423008(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x7
  __int64 v3; // x4
  int v4; // w2
  __int64 v5; // x0
  __int64 v6; // x3
  __int64 v7; // x6
  unsigned __int64 v8; // x3

  v2 = *(_QWORD *)(a1 + 584);
  if ( !v2 )
    return -1;
  v3 = *(_QWORD *)(a1 + 576);
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = 3 * v5;
    ++v4;
    v7 = v3 + 24 * v5;
    v5 = v4;
    v8 = *(_QWORD *)(v3 + 8 * v6);
    if ( v8 <= a2 && v8 + *(_QWORD *)(v7 + 8) > a2 )
      break;
    if ( v4 >= v2 )
      return -1;
  }
  return (unsigned int)(a2 - v8) + *(_QWORD *)(v7 + 16);
}
