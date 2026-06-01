/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C1C
// Address: 0x0000000000044C1C

//----- (0000000000044C1C) ----------------------------------------------------
__int64 __fastcall sub_44C1C(__int64 a1, int a2, int a3)
{
  __int64 v3; // x9
  __int64 v4; // x8

  if ( a3 != 1 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 1744);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = a1 + 1744;
  do
  {
    if ( *(_DWORD *)(v3 + 32) >= a2 )
      v4 = v3;
    v3 = *(_QWORD *)(v3 + 8LL * (*(_DWORD *)(v3 + 32) < a2));
  }
  while ( v3 );
  if ( v4 == a1 + 1744 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(v4 + 32) > a2 )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(v4 + 56) = 1;
  return 1;
}
