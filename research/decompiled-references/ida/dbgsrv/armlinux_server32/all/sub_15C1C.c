/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15C1C
// Address: 0x00015C1C

//----- (00015C1C) --------------------------------------------------------
int __fastcall sub_15C1C(int a1, int a2, int a3)
{
  _DWORD *v3; // r3
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int v6; // r2

  if ( a3 != 1 )
    return -1;
  v3 = *(_DWORD **)(a1 + 1008);
  v4 = (_DWORD *)(a1 + 1004);
  if ( !v3 )
    return -1;
  v5 = v4;
  do
  {
    v6 = v3[4];
    if ( a2 > v6 )
      v3 = (_DWORD *)v3[3];
    else
      v5 = v3;
    if ( a2 <= v6 )
      v3 = (_DWORD *)v3[2];
  }
  while ( v3 );
  if ( v4 == v5 || a2 < v5[4] || v5 == (_DWORD *)-20 )
    return -1;
  *((_BYTE *)v5 + 36) = 1;
  return 1;
}
