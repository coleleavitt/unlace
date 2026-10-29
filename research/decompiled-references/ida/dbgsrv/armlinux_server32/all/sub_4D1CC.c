/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D1CC
// Address: 0x0004D1CC

//----- (0004D1CC) --------------------------------------------------------
int __fastcall sub_4D1CC(int *a1, int *a2)
{
  unsigned int v3; // r10
  int v5; // r1
  int v6; // r9
  int v7; // r11
  int v8; // r8
  int *v9; // r2
  _DWORD *v10; // r1
  int *i; // r4
  int v12; // r7
  int v13; // r1
  int v14; // r4
  int v16; // r1
  int *v17; // r3

  v3 = a1[1];
  v5 = a2[5] % v3;
  v6 = *a1;
  v7 = 4 * v5;
  v8 = v5;
  v9 = *(int **)(*a1 + 4 * v5);
  v10 = (_DWORD *)(*a1 + 4 * v5);
  for ( i = v9; a2 != (int *)*i; i = (int *)*i )
    ;
  v12 = *a2;
  if ( v9 == i )
  {
    if ( v12 )
    {
      v16 = *(_DWORD *)(v12 + 20) % v3;
      if ( v8 == v16 )
        goto LABEL_8;
      *(_DWORD *)(v6 + 4 * v16) = i;
      v10 = (_DWORD *)(*a1 + v7);
      v17 = *(int **)(*a1 + 4 * v8);
    }
    else
    {
      v17 = i;
    }
    if ( v17 == a1 + 2 )
      a1[2] = v12;
    *v10 = 0;
    v12 = *a2;
  }
  else if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 20) % v3;
    if ( v8 != v13 )
    {
      *(_DWORD *)(v6 + 4 * v13) = i;
      v12 = *a2;
    }
  }
LABEL_8:
  *i = v12;
  v14 = *a2;
  sub_4B630(a2);
  --a1[3];
  return v14;
}
