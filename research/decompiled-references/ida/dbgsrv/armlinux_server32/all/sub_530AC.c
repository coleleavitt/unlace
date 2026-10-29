/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_530AC
// Address: 0x000530AC

//----- (000530AC) --------------------------------------------------------
bool __fastcall sub_530AC(int a1, int a2, int a3)
{
  _DWORD *v3; // r3
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  int v6; // r4
  int v7; // r2
  int v9; // r2

  if ( !a3 || (*(_DWORD *)(a3 + 4) & 1) != 0 )
    return 1;
  v3 = *(_DWORD **)(a1 + 184);
  v4 = (_DWORD *)(a1 + 180);
  if ( !v3 )
    return 0;
  v5 = v4;
  v6 = *(_DWORD *)(a2 + 4);
  do
  {
    v7 = v3[4];
    if ( v7 < v6 )
      v3 = (_DWORD *)v3[3];
    else
      v5 = v3;
    if ( v7 >= v6 )
      v3 = (_DWORD *)v3[2];
  }
  while ( v3 );
  if ( v4 == v5 )
    return 0;
  if ( v6 < v5[4] )
    return 0;
  v9 = v5[6];
  return v9 && *(_DWORD *)(v5[5] + 24 * v9 - 8) == *(_DWORD *)(a2 + 8);
}
