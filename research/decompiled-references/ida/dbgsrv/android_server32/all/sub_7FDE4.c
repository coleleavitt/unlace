/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7FDE4
// Address: 0x0007FDE4

//----- (0007FDE4) --------------------------------------------------------
int __fastcall sub_7FDE4(int *a1, int *a2, int *a3, int *a4, int *a5)
{
  int v8; // r0
  int v9; // r1
  bool v10; // cc
  int v11; // r1
  int v12; // r3
  int v13; // r5
  bool v14; // cc
  int v15; // r1
  int v16; // r3
  int v17; // r5
  bool v18; // cc
  int v19; // r3
  int v20; // r5
  int result; // r0
  int v22; // r0
  int v23; // r3
  int v24; // r5
  int v25; // r0
  int v26; // r2
  int v27; // r3
  bool v28; // cc
  int v29; // r0
  int v30; // r2
  int v31; // r3
  bool v32; // cc
  int v33; // r0
  int v34; // r2
  int v35; // r3
  int v36; // [sp+8h] [bp-8h]

  v8 = sub_7FD14(a1, a2, a3);
  v9 = v8;
  v10 = *a4 < *a3;
  if ( *a4 == *a3 )
    v10 = a4[1] < a3[1];
  if ( v10 )
  {
    v11 = a3[1];
    v12 = *a4;
    a3[1] = a4[1];
    v13 = *a3;
    *a3 = v12;
    *a4 = v13;
    a4[1] = v11;
    v9 = v8 + 1;
    v14 = *a3 < *a2;
    if ( *a3 == *a2 )
      v14 = a3[1] < a2[1];
    if ( v14 )
    {
      v15 = a2[1];
      v16 = *a3;
      a2[1] = a3[1];
      v17 = *a2;
      *a2 = v16;
      *a3 = v17;
      a3[1] = v15;
      v18 = *a2 < *a1;
      if ( *a2 == *a1 )
        v18 = a2[1] < a1[1];
      v9 = v8 + 2;
      if ( v18 )
      {
        v36 = a1[1];
        v19 = *a2;
        a1[1] = a2[1];
        v20 = *a1;
        *a1 = v19;
        *a2 = v20;
        a2[1] = v36;
        v9 = v8 + 3;
      }
    }
  }
  if ( *a5 == *a4 )
  {
    if ( a5[1] >= a4[1] )
      return v9;
  }
  else if ( *a5 >= *a4 )
  {
    return v9;
  }
  v22 = a4[1];
  v23 = *a5;
  a4[1] = a5[1];
  v24 = *a4;
  *a4 = v23;
  *a5 = v24;
  a5[1] = v22;
  result = v9 + 1;
  if ( *a4 == *a3 )
  {
    if ( a4[1] >= a3[1] )
      return result;
  }
  else if ( *a4 >= *a3 )
  {
    return result;
  }
  v25 = a3[1];
  v26 = *a4;
  a3[1] = a4[1];
  v27 = *a3;
  *a3 = v26;
  *a4 = v27;
  a4[1] = v25;
  result = v9 + 2;
  v28 = *a3 < *a2;
  if ( *a3 == *a2 )
    v28 = a3[1] < a2[1];
  if ( v28 )
  {
    v29 = a2[1];
    v30 = *a3;
    a2[1] = a3[1];
    v31 = *a2;
    *a2 = v30;
    *a3 = v31;
    a3[1] = v29;
    result = v9 + 3;
    v32 = *a2 < *a1;
    if ( *a2 == *a1 )
      v32 = a2[1] < a1[1];
    if ( v32 )
    {
      v33 = a1[1];
      v34 = *a2;
      a1[1] = a2[1];
      v35 = *a1;
      *a1 = v34;
      *a2 = v35;
      a2[1] = v33;
      return v9 + 4;
    }
  }
  return result;
}
