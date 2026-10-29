/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422FA0
// Address: 0x0000000000422FA0

//----- (0000000000422FA0) ----------------------------------------------------
__int64 __fastcall sub_422FA0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x6
  __int64 v3; // x7
  int v4; // w2
  __int64 v5; // x0
  _QWORD *v6; // x4
  unsigned __int64 v7; // x3

  v2 = *(_QWORD *)(a1 + 584);
  if ( !v2 )
    return -1;
  v3 = *(_QWORD *)(a1 + 576);
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    ++v4;
    v6 = (_QWORD *)(v3 + 24 * v5);
    v5 = v4;
    v7 = v6[2];
    if ( v7 <= a2 && v7 + v6[1] > a2 )
      break;
    if ( v4 >= v2 )
      return -1;
  }
  return (unsigned int)(a2 - v7) + *v6;
}
