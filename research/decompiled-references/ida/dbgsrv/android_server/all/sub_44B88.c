/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B88
// Address: 0x0000000000044B88

//----- (0000000000044B88) ----------------------------------------------------
__int64 __fastcall sub_44B88(__int64 a1, int a2)
{
  __int64 v2; // x9
  __int64 v3; // x8
  int v5; // w9
  bool v6; // vf
  int v7; // w9

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
  v5 = *(_DWORD *)(v3 + 48);
  v6 = __OFSUB__(v5, 1);
  v7 = v5 - 1;
  if ( v7 < 0 == v6 )
  {
    *(_DWORD *)(v3 + 48) = v7;
    if ( v7 > 0 )
      return 1;
  }
  if ( (unsigned int)sub_409C0(a1, a2, 0) )
    return 1;
  return 0xFFFFFFFFLL;
}
