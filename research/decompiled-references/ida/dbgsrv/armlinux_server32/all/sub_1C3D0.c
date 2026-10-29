/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C3D0
// Address: 0x0001C3D0

//----- (0001C3D0) --------------------------------------------------------
int __fastcall sub_1C3D0(int a1, int a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r4
  int v4; // r2
  int v5; // r4
  int v6; // r5

  v2 = *(_DWORD **)(a1 + 1008);
  if ( v2 )
  {
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
    if ( (_DWORD *)(a1 + 1004) != v3 && a2 >= v3[4] && v3 != (_DWORD *)-20 )
      return 0;
  }
  v5 = a2;
  v6 = a1;
  if ( *(_DWORD *)(a1 + 1068) != a2 )
  {
    sub_1BF74(a1, a2, 0);
    a2 = v5;
    a1 = v6;
  }
  return sub_1BB74(a1, a2, -1);
}
