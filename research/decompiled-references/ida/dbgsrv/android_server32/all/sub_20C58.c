/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20C58
// Address: 0x00020C58

//----- (00020C58) --------------------------------------------------------
int __fastcall sub_20C58(int a1, int a2)
{
  _DWORD *v3; // r7
  _DWORD *v4; // r3
  int v5; // r2
  _DWORD *v6; // r0
  int v7; // r6
  _DWORD *v8; // r5
  unsigned int v9; // r2
  int v10; // r2
  _BOOL4 v11; // r1
  int result; // r0

  if ( !a2 )
    return -1;
  v3 = *(_DWORD **)(a1 + 916);
  v4 = (_DWORD *)(a1 + 916);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v6 = (_DWORD *)(a1 + 916);
    do
    {
      v7 = v3[4];
      if ( v7 >= v5 )
        v6 = v3;
      v8 = v3 + 1;
      if ( v7 >= v5 )
        v8 = v3;
      v3 = (_DWORD *)*v8;
    }
    while ( *v8 );
    if ( v6 != v4 && v6[4] <= v5 )
    {
      v9 = *(_DWORD *)(a2 + 16) & 0xFFFFFFF;
      if ( v9 > 9 || ((1 << *(_BYTE *)(a2 + 16)) & 0x318) == 0 && (v9 != 7 || *(_BYTE *)(a2 + 12)) )
        v6[8] = 0;
      v10 = v6[10];
      if ( v10 == 3 )
      {
        sub_1E190((_DWORD *)a1, *(_DWORD *)(a2 + 4));
      }
      else if ( v10 == 2 )
      {
        v6[6] = 0;
        v6[7] = 0;
        sub_20908(a1, v6[5], 0);
      }
LABEL_24:
      *(_BYTE *)(a1 + 1022) = 0;
      v11 = sub_2057C(a1, 0);
      result = 1;
      if ( v11 )
        return result;
      return -1;
    }
  }
  if ( !v5 || (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 4 || *(_BYTE *)(a1 + 977) )
    goto LABEL_24;
  sub_20D34(a1, "could not find thread %d!\n", v5);
  return -1;
}
