/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A610
// Address: 0x000000000009A610

//----- (000000000009A610) ----------------------------------------------------
bool __fastcall sub_9A610(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x9
  int v4; // w10
  __int64 v5; // x8
  __int64 v7; // x9

  if ( !a3 )
    return 1;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 312);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = a1 + 312;
  do
  {
    if ( *(_DWORD *)(v3 + 32) >= v4 )
      v5 = v3;
    v3 = *(_QWORD *)(v3 + 8LL * (*(_DWORD *)(v3 + 32) < v4));
  }
  while ( v3 );
  if ( v5 == a1 + 312 )
    return 0;
  if ( v4 < *(_DWORD *)(v5 + 32) )
    return 0;
  v7 = *(_QWORD *)(v5 + 48);
  return v7 && *(_QWORD *)(*(_QWORD *)(v5 + 40) + 48 * v7 - 16) == *(_QWORD *)(a2 + 8);
}
