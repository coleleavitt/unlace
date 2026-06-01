/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C214
// Address: 0x000000010000C214

//----- (000000010000C214) ----------------------------------------------------
__int64 __fastcall sub_10000C214(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v4; // x8
  __int128 *v7; // x1
  __int128 *v8; // x0

  v4 = *a2;
  if ( *a2 > *(_QWORD *)a1 || *a2 >= *(_QWORD *)a1 && a2[1] >= *(_QWORD *)(a1 + 8) )
  {
    if ( *(_QWORD *)a3 > v4 || *(_QWORD *)a3 >= v4 && *(_QWORD *)(a3 + 8) >= a2[1] )
      return 0;
    sub_10000CCE8((__int128 *)a2, (__int128 *)a3);
    if ( *a2 > *(_QWORD *)a1 )
      return 1;
    v8 = (__int128 *)a1;
    if ( *a2 >= *(_QWORD *)a1 && a2[1] >= *(_QWORD *)(a1 + 8) )
      return 1;
    v7 = (__int128 *)a2;
    goto LABEL_17;
  }
  if ( *(_QWORD *)a3 > v4 || *(_QWORD *)a3 >= v4 && *(_QWORD *)(a3 + 8) >= a2[1] )
  {
    sub_10000CCE8((__int128 *)a1, (__int128 *)a2);
    if ( *(_QWORD *)a3 > *a2 )
      return 1;
    v7 = (__int128 *)a3;
    if ( *(_QWORD *)a3 >= *a2 && *(_QWORD *)(a3 + 8) >= a2[1] )
      return 1;
    v8 = (__int128 *)a2;
LABEL_17:
    sub_10000CCE8(v8, v7);
    return 2;
  }
  sub_10000CCE8((__int128 *)a1, (__int128 *)a3);
  return 1;
}
