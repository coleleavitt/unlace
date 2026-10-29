/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1D054
// Address: 0x0001D054

//----- (0001D054) --------------------------------------------------------
int __fastcall sub_1D054(int a1, int a2)
{
  _DWORD *v3; // r3
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  int v6; // r2
  int v7; // r4
  _BOOL4 v9; // r3
  int v10; // r3
  bool v11; // cc
  int v12; // r3
  int v13; // r1

  if ( !a2 )
    return -1;
  v3 = *(_DWORD **)(a1 + 1008);
  v4 = (_DWORD *)(a1 + 1004);
  v5 = v4;
  v6 = *(_DWORD *)(a2 + 4);
  if ( !v3 )
    goto LABEL_11;
  do
  {
    v7 = v3[4];
    if ( v6 > v7 )
      v3 = (_DWORD *)v3[3];
    else
      v5 = v3;
    if ( v6 <= v7 )
      v3 = (_DWORD *)v3[2];
  }
  while ( v3 );
  if ( v4 != v5 && v6 >= v5[4] )
  {
    v9 = v5 == (_DWORD *)-20;
    if ( !v6 )
      v9 = 0;
    if ( v9 )
    {
LABEL_12:
      if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 4 && !*(_BYTE *)(a1 + 1077) )
      {
        sub_174C4(a1, "could not find thread %d!\n", v6);
        return -1;
      }
      goto LABEL_14;
    }
    if ( v5 != (_DWORD *)-20 )
    {
      v10 = *(_DWORD *)(a2 + 16) & 0xFFFFFFF;
      v11 = (unsigned int)(v10 - 8) > 1;
      if ( (unsigned int)(v10 - 8) > 1 )
        v11 = (unsigned int)(v10 - 3) > 1;
      if ( v11 && (v10 != 7 || *(_BYTE *)(a2 + 12)) )
        v5[8] = 0;
      v12 = v5[10];
      if ( v12 == 2 )
      {
        v13 = v5[5];
        v5[6] = 0;
        v5[7] = 0;
        sub_1C560(a1, v13, 0, 0);
      }
      else if ( v12 == 3 )
      {
        sub_17AF4(a1, *(_DWORD *)(a2 + 4));
      }
    }
  }
  else
  {
LABEL_11:
    if ( v6 )
      goto LABEL_12;
  }
LABEL_14:
  *(_BYTE *)(a1 + 1114) = 0;
  if ( sub_1CFA4(a1, 0) )
    return 1;
  else
    return -1;
}
