/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D30
// Address: 0x00042D30

//----- (00042D30) --------------------------------------------------------
int __fastcall sub_42D30(_DWORD *a1, unsigned int *a2)
{
  _DWORD *v3; // r12
  int *v4; // r7
  unsigned int v5; // r2
  int *v6; // r6
  int *v7; // r4
  unsigned int v8; // r3
  bool v9; // cc
  bool v10; // r3
  int v11; // r8
  int *v14; // r3
  int *v15; // r0
  unsigned int v16; // r1
  unsigned int v17; // r3
  int *v18; // r3
  bool v19; // zf
  int v20; // r3
  int v21; // r3
  int *v22; // r0
  int *v23; // r0
  int v24; // r3

  v3 = (_DWORD *)a1[2];
  v4 = a1 + 1;
  if ( !v3 )
  {
    v6 = a1 + 1;
    v10 = 1;
LABEL_6:
    v11 = a1[5];
    if ( (int *)a1[3] != v6 || !v10 )
      return 0;
LABEL_10:
    sub_42D0C((int)a1, v3);
    a1[3] = v4;
    a1[4] = v4;
    a1[2] = 0;
    a1[5] = 0;
    return v11;
  }
  v5 = *a2;
  v6 = a1 + 1;
  v7 = (int *)a1[2];
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = v7[4];
      v9 = v8 > v5;
      if ( v8 >= v5 )
        break;
      v7 = (int *)v7[3];
      if ( !v7 )
        goto LABEL_5;
    }
    v14 = (int *)v7[2];
    if ( !v9 )
      break;
    v6 = v7;
    v7 = (int *)v7[2];
    if ( !v14 )
    {
LABEL_5:
      v10 = v4 == v6;
      goto LABEL_6;
    }
  }
  v15 = (int *)v7[3];
  while ( v14 )
  {
    v16 = v14[4];
    if ( v5 > v16 )
      v14 = (int *)v14[3];
    else
      v7 = v14;
    if ( v5 <= v16 )
      v14 = (int *)v14[2];
  }
  while ( v15 )
  {
    v17 = v15[4];
    if ( v5 >= v17 )
      v15 = (int *)v15[3];
    else
      v6 = v15;
    if ( v5 < v17 )
      v15 = (int *)v15[2];
  }
  v18 = (int *)a1[3];
  v11 = a1[5];
  v19 = v18 == v7;
  if ( v18 == v7 )
    v19 = v4 == v6;
  v20 = v19;
  if ( v19 )
    goto LABEL_10;
  if ( v7 == v6 )
    return v20;
  do
  {
    v21 = sub_81478(v7);
    v22 = v7;
    v7 = (int *)v21;
    v23 = sub_81644(v22, v4);
    sub_809EC(v23);
    v24 = a1[5] - 1;
    a1[5] = v24;
  }
  while ( v7 != v6 );
  return v11 - v24;
}
// 81478: using guessed type int __fastcall sub_81478(_DWORD);
