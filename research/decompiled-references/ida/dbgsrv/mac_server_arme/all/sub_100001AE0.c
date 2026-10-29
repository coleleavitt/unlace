/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001AE0
// Address: 0x0000000100001AE0

//----- (0000000100001AE0) ----------------------------------------------------
__int64 __fastcall sub_100001AE0(__int64 a1, int a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  int v4; // w8
  __int64 v5; // x9

  v2 = *(_QWORD *)(a1 + 1912);
  if ( !v2 )
    return 0;
  v3 = a1 + 1912;
  do
  {
    if ( *(_DWORD *)(v2 + 32) >= a2 )
      v3 = v2;
    v2 = *(_QWORD *)(v2 + 8LL * (*(_DWORD *)(v2 + 32) < a2));
  }
  while ( v2 );
  if ( v3 == a1 + 1912 )
    return 0;
  v4 = *(_DWORD *)(v3 + 32);
  v5 = v3 + 40;
  if ( v4 <= a2 )
    return v5;
  else
    return 0;
}
