/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B04
// Address: 0x0000000000044B04

//----- (0000000000044B04) ----------------------------------------------------
__int64 __fastcall sub_44B04(__int64 a1, int a2)
{
  __int64 v2; // x8
  __int64 v3; // x19

  v2 = *(_QWORD *)(a1 + 1744);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = a1 + 1744;
  do
  {
    if ( *(_DWORD *)(v2 + 32) >= a2 )
      v3 = v2;
    v2 = *(_QWORD *)(v2 + 8LL * (*(_DWORD *)(v2 + 32) < a2));
  }
  while ( v2 );
  if ( v3 == a1 + 1744 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(v3 + 32) > a2 )
    return 0xFFFFFFFFLL;
  sub_3B6B4(a1, a2, 0);
  ++*(_DWORD *)(v3 + 48);
  return 1;
}
