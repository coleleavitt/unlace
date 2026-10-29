/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23B2E
// Address: 0x00023B2E

//----- (00023B2E) --------------------------------------------------------
int __fastcall sub_23B2E(int a1, int a2)
{
  _DWORD *v2; // r5
  int v3; // r4
  int v4; // r2
  int v5; // r6
  _DWORD *v6; // r7
  int v7; // r3
  int v8; // r3
  int v9; // r2

  v2 = *(_DWORD **)(a1 + 916);
  v3 = -1;
  if ( !v2 )
    return v3;
  v4 = a1 + 916;
  do
  {
    v5 = v2[4];
    if ( v5 >= a2 )
      v4 = (int)v2;
    v6 = v2 + 1;
    if ( v5 >= a2 )
      v6 = v2;
    v2 = (_DWORD *)*v6;
  }
  while ( *v6 );
  if ( v4 == a1 + 916 || *(_DWORD *)(v4 + 16) > a2 )
    return v3;
  v7 = *(_DWORD *)(v4 + 28);
  if ( v7 < 1 || (v8 = v7 - 1, *(_DWORD *)(v4 + 28) = v8, v9 = 1, v8 <= 0) )
  {
    if ( sub_20908(a1, a2, 0) )
      return 1;
    return v3;
  }
  return v9;
}
