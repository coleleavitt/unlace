/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1D134
// Address: 0x0001D134

//----- (0001D134) --------------------------------------------------------
int __fastcall sub_1D134(int a1, int a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r4
  int v4; // r2
  int v5; // r3

  v2 = *(_DWORD **)(a1 + 1008);
  if ( !v2 )
    return -1;
  v3 = (_DWORD *)(a1 + 1004);
  do
  {
    v4 = v2[4];
    if ( a2 > v4 )
      v2 = (_DWORD *)v2[3];
    else
      v3 = v2;
    if ( a2 <= v4 )
      v2 = (_DWORD *)v2[2];
  }
  while ( v2 );
  if ( (_DWORD *)(a1 + 1004) != v3
    && a2 >= v3[4]
    && v3 != (_DWORD *)-20
    && ((v5 = v3[7], v5 > 0) && (--v5, (v3[7] = v5) != 0) || sub_1C560(a1, a2, 0, v5)) )
  {
    return 1;
  }
  else
  {
    return -1;
  }
}
