/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7FF18
// Address: 0x0007FF18

//----- (0007FF18) --------------------------------------------------------
bool __fastcall sub_7FF18(int *a1, int *a2)
{
  int *v3; // r4
  int v4; // r5
  int v5; // r1
  int *v6; // r7
  int *v7; // r3
  int *v8; // r0
  int v9; // r2
  int v10; // r6
  int *v11; // r5
  bool v12; // cc
  int v13; // r0
  int v14; // r6
  int v15; // r0
  int *v16; // r1
  _DWORD *v17; // r4
  int v18; // r7
  _DWORD *v19; // r3
  int v20; // r5
  int v21; // r4
  int *v23; // r4
  int v25; // r1
  int *v26; // r0
  int v27; // r2
  int v28; // r1
  int *v29; // r0
  int v30; // r2
  int v31; // r3
  int v32; // r1
  int v33; // r2
  int v34; // r3
  bool v35; // cc
  int v36; // r2
  int v37; // r0
  int v38; // r1
  int v39; // r3
  int v40; // r2
  int v41; // r1
  int *v44; // [sp+10h] [bp-14h]
  int v45; // [sp+14h] [bp-10h]
  int v46; // [sp+18h] [bp-Ch]
  int *v47; // [sp+1Ch] [bp-8h]

  v3 = a1;
  v4 = 1;
  switch ( ((char *)a2 - (char *)a1) >> 3 )
  {
    case 0:
    case 1:
      return v4;
    case 2:
      v5 = *(a2 - 2);
      if ( v5 == *a1 )
      {
        if ( *(a2 - 1) >= a1[1] )
          return v4;
      }
      else if ( v5 >= *a1 )
      {
        return v4;
      }
      v28 = a1[1];
      v30 = *(a2 - 2);
      v29 = a2;
      v3[1] = *(a2 - 1);
      v31 = *v3;
      *v3 = v30;
      v29 -= 2;
      *v29 = v31;
      v29[1] = v28;
      return v4;
    case 3:
      sub_7FD14(a1, a1 + 2, a2 - 2);
      return v4;
    case 4:
      v23 = a1 + 4;
      v47 = a1 + 2;
      sub_7FD14(a1, a1 + 2, a1 + 4);
      v25 = *(a2 - 2);
      v26 = a2 - 2;
      v27 = a1[4];
      if ( v25 == v27 )
      {
        if ( *(a2 - 1) >= a1[5] )
          return v4;
      }
      else if ( v25 >= v27 )
      {
        return v4;
      }
      v32 = v23[1];
      v33 = *v26;
      v23[1] = *(a2 - 1);
      v34 = *v23;
      *v23 = v33;
      *v26 = v34;
      *(a2 - 1) = v32;
      v35 = *v23 < *v47;
      if ( *v23 == *v47 )
        v35 = a1[5] < a1[3];
      if ( !v35 )
        return v4;
      v36 = v47[1];
      v37 = *v23;
      v38 = v23[1];
      v47[1] = v38;
      v39 = *v47;
      *v47 = v37;
      *v23 = v39;
      v23[1] = v36;
      if ( *a1 == v37 )
      {
        if ( a1[1] <= v38 )
          return v4;
      }
      else if ( *a1 <= v37 )
      {
        return v4;
      }
      v40 = a1[1];
      a1[1] = v38;
      v41 = *a1;
      *a1 = v37;
      *v47 = v41;
      v47[1] = v40;
      return v4;
    case 5:
      sub_7FDE4(a1, a1 + 2, a1 + 4, a1 + 6, a2 - 2);
      return v4;
    default:
      v6 = a1 + 4;
      sub_7FD14(a1, a1 + 2, a1 + 4);
      v7 = a2;
      v8 = v3 + 6;
      if ( v3 + 6 == a2 )
        return v4;
      v9 = 0;
      v10 = 0;
      break;
  }
  do
  {
    v11 = v6;
    v6 = v8;
    v12 = *v8 < *v11;
    if ( *v8 == *v11 )
      v12 = v8[1] < v11[1];
    if ( !v12 )
      goto LABEL_22;
    v45 = v10;
    v46 = v8[1];
    v13 = *v11;
    v6[1] = v11[1];
    v14 = *v6;
    *v6 = v13;
    if ( v11 == v3 )
      goto LABEL_21;
    v44 = v6;
    v15 = v9;
    while ( 1 )
    {
      v16 = v11 - 2;
      v17 = (int *)((char *)v3 + v15);
      v18 = v17[2];
      v19 = v17 + 4;
      if ( v18 == v14 )
        break;
      if ( v18 <= v14 )
        goto LABEL_19;
LABEL_17:
      v20 = v17[2];
      v21 = v17[3];
      *v19 = v20;
      v19[1] = v21;
      v15 -= 8;
      v11 = v16;
      v3 = a1;
      if ( v15 == -16 )
      {
        v11 = a1;
        goto LABEL_20;
      }
    }
    if ( v17[3] > v46 )
      goto LABEL_17;
    v11 = v17 + 4;
LABEL_19:
    v3 = a1;
LABEL_20:
    v7 = a2;
    v6 = v44;
LABEL_21:
    *v11 = v14;
    v11[1] = v46;
    v10 = v45 + 1;
    if ( v45 == 7 )
      return v6 + 2 == v7;
LABEL_22:
    v9 += 8;
    v8 = v6 + 2;
  }
  while ( v6 + 2 != v7 );
  return 1;
}
