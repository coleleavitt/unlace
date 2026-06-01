/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7FD14
// Address: 0x0007FD14

//----- (0007FD14) --------------------------------------------------------
int __fastcall sub_7FD14(int *a1, int *a2, int *a3)
{
  int v3; // r4
  _BOOL4 v4; // r3
  _BOOL4 v5; // r6
  int v6; // r5
  int v7; // r4
  int v8; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r4
  int v13; // r5
  int v14; // r2
  int v15; // r4
  int v16; // r2
  int v17; // r3
  int v18; // r4
  int v19; // r6
  int v20; // r3

  v3 = *a2;
  if ( *a2 == *a1 )
    v4 = a2[1] < a1[1];
  else
    v4 = v3 < *a1;
  if ( *a3 == v3 )
  {
    v5 = 1;
    if ( a3[1] >= a2[1] )
    {
      v5 = 0;
      if ( !v4 )
        goto LABEL_12;
LABEL_10:
      v6 = *a1;
      v7 = a1[1];
      if ( v5 )
      {
        v8 = a3[1];
        *a1 = *a3;
        a1[1] = v8;
        *a3 = v6;
        a3[1] = v7;
        return 1;
      }
      v19 = a2[1];
      *a1 = *a2;
      a1[1] = v19;
      *a2 = v6;
      a2[1] = v7;
      if ( *a3 == v6 )
      {
        v10 = 1;
        if ( a3[1] >= v7 )
          return v10;
      }
      else
      {
        v10 = 1;
        if ( *a3 >= v6 )
          return v10;
      }
      v20 = a3[1];
      *a2 = *a3;
      a2[1] = v20;
      *a3 = v6;
      a3[1] = v7;
      return 2;
    }
  }
  else
  {
    v5 = *a3 < v3;
  }
  if ( v4 )
    goto LABEL_10;
LABEL_12:
  v10 = 0;
  if ( !v5 )
    return v10;
  v11 = a2[1];
  v12 = *a3;
  a2[1] = a3[1];
  v13 = *a2;
  *a2 = v12;
  *a3 = v13;
  a3[1] = v11;
  v14 = *a1;
  v15 = *a2;
  if ( *a2 == *a1 )
  {
    v14 = a1[1];
    v15 = a2[1];
  }
  v10 = 1;
  if ( v15 >= v14 )
    return v10;
  v16 = a1[1];
  v17 = *a2;
  a1[1] = a2[1];
  v18 = *a1;
  *a1 = v17;
  *a2 = v18;
  a2[1] = v16;
  return 2;
}
