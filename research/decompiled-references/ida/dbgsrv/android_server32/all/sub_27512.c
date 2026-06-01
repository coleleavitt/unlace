/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27512
// Address: 0x00027512

//----- (00027512) --------------------------------------------------------
int __fastcall sub_27512(int *a1, int *a2)
{
  int v2; // r4
  int *v3; // r3
  int *v4; // r2
  int **v5; // r6
  int **v6; // r3
  int *v7; // r3
  int v8; // r3
  int *v9; // r7
  int result; // r0
  int *v11; // r5
  int v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  int *v18; // r1
  int v19; // r4
  int **v20; // r4
  int v21; // r0
  int v22; // r1
  int v23; // r2
  _DWORD *v24; // r0
  int v25; // r1
  int v26; // r4
  _DWORD *v27; // r4
  int *v28; // r0
  int v29; // r1
  int v30; // r2
  int *v31; // r1
  int *v32; // r1
  int v33; // r4
  int v34; // r1
  int v35; // r2
  int *v36; // r2
  int *v37; // r2
  int v38; // r0
  int *v39; // r1
  int v40; // r2
  int **v41; // r2
  _DWORD *v42; // r1
  int v43; // r2
  _DWORD *v44; // r2
  int *v45; // r2
  _BYTE *v46; // r1
  int v47; // r2
  int **v48; // r2
  int v49; // [sp+0h] [bp-8h]
  int v50; // [sp+4h] [bp-4h]

  v2 = *a2;
  if ( *a2 )
  {
    v3 = (int *)a2[1];
    if ( !v3 )
    {
      v4 = a2;
      goto LABEL_9;
    }
    do
    {
      v4 = v3;
      v3 = (int *)*v3;
    }
    while ( v3 );
  }
  else
  {
    v4 = a2;
  }
  v2 = v4[1];
  if ( !v2 )
  {
    v5 = (int **)(v4 + 2);
    v2 = 0;
    v50 = 0;
    goto LABEL_10;
  }
LABEL_9:
  *(_DWORD *)(v2 + 8) = v4[2];
  v5 = (int **)(v4 + 2);
  v50 = 1;
LABEL_10:
  v6 = (int **)v4[2];
  if ( *v6 != v4 )
  {
    v6[1] = (int *)v2;
    v7 = *v5;
LABEL_14:
    v8 = *v7;
    v9 = a1;
    goto LABEL_15;
  }
  *v6 = (int *)v2;
  v8 = 0;
  v9 = (int *)v2;
  if ( v4 != a1 )
  {
    v7 = *v5 + 1;
    goto LABEL_14;
  }
LABEL_15:
  result = *((unsigned __int8 *)v4 + 12);
  if ( v4 == a2 )
  {
    v4 = v9;
    if ( !result )
      return result;
  }
  else
  {
    v49 = *((unsigned __int8 *)v4 + 12);
    v11 = (int *)a2[2];
    *v5 = v11;
    if ( *(int **)a2[2] != a2 )
      ++v11;
    *v11 = (int)v4;
    v12 = *a2;
    *v4 = *a2;
    *(_DWORD *)(v12 + 8) = v4;
    v13 = a2[1];
    v4[1] = v13;
    if ( v13 )
      *(_DWORD *)(v13 + 8) = v4;
    *((_BYTE *)v4 + 12) = *((_BYTE *)a2 + 12);
    if ( v9 != a2 )
      v4 = v9;
    result = v49;
    if ( !v49 )
      return result;
  }
  if ( !v4 )
    return result;
  if ( v50 )
  {
    *(_BYTE *)(v2 + 12) = 1;
    return 1;
  }
  while ( 1 )
  {
    v14 = *(_DWORD *)(v8 + 8);
    if ( *(_DWORD *)v14 == v8 )
      break;
    if ( *(_BYTE *)(v8 + 12) )
    {
      v15 = v8;
      v8 = (int)v4;
    }
    else
    {
      *(_BYTE *)(v8 + 12) = 1;
      *(_BYTE *)(v14 + 12) = 0;
      v17 = *(_DWORD *)(v8 + 8);
      v18 = *(int **)(v17 + 4);
      v19 = *v18;
      *(_DWORD *)(v17 + 4) = *v18;
      if ( v19 )
        *(_DWORD *)(v19 + 8) = v17;
      v18[2] = *(_DWORD *)(v17 + 8);
      v20 = *(int ***)(v17 + 8);
      if ( *v20 != (int *)v17 )
        ++v20;
      *v20 = v18;
      *v18 = v17;
      *(_DWORD *)(v17 + 8) = v18;
      v21 = *(_DWORD *)v8;
      if ( v4 != *(int **)v8 )
        v8 = (int)v4;
      v15 = *(_DWORD *)(v21 + 4);
    }
    v22 = *(_DWORD *)v15;
    if ( *(_DWORD *)v15 && !*(_BYTE *)(v22 + 12) )
    {
      v23 = *(_DWORD *)(v15 + 4);
      if ( !v23 )
        goto LABEL_68;
LABEL_67:
      if ( *(_BYTE *)(v23 + 12) )
      {
LABEL_68:
        *(_BYTE *)(v22 + 12) = 1;
        *(_BYTE *)(v15 + 12) = 0;
        v34 = *(_DWORD *)v15;
        v35 = *(_DWORD *)(*(_DWORD *)v15 + 4);
        *(_DWORD *)v15 = v35;
        if ( v35 )
          *(_DWORD *)(v35 + 8) = v15;
        *(_DWORD *)(v34 + 8) = *(_DWORD *)(v15 + 8);
        v36 = *(int **)(v15 + 8);
        if ( *v36 != v15 )
          ++v36;
        *v36 = v34;
        *(_DWORD *)(v34 + 4) = v15;
        *(_DWORD *)(v15 + 8) = v34;
        v37 = (int *)(v34 + 8);
      }
      else
      {
        v37 = (int *)(v15 + 8);
        v34 = v15;
      }
      v38 = *v37;
      *(_BYTE *)(v34 + 12) = *(_BYTE *)(*v37 + 12);
      *(_BYTE *)(v38 + 12) = 1;
      *(_BYTE *)(*(_DWORD *)(v34 + 4) + 12) = 1;
      result = *v37;
      v39 = *(int **)(*v37 + 4);
      v40 = *v39;
      *(_DWORD *)(result + 4) = *v39;
      if ( v40 )
        *(_DWORD *)(v40 + 8) = result;
      v39[2] = *(_DWORD *)(result + 8);
      v41 = *(int ***)(result + 8);
      if ( *v41 != (int *)result )
        ++v41;
      *v41 = v39;
      *v39 = result;
      goto LABEL_93;
    }
    v23 = *(_DWORD *)(v15 + 4);
    if ( v23 && !*(_BYTE *)(v23 + 12) )
      goto LABEL_67;
    *(_BYTE *)(v15 + 12) = 0;
    result = *(_DWORD *)(v15 + 8);
    if ( result == v8 )
    {
      result = v8;
LABEL_65:
      *(_BYTE *)(result + 12) = 1;
      return result;
    }
    v4 = (int *)v8;
    if ( !*(_BYTE *)(result + 12) )
      goto LABEL_65;
LABEL_60:
    v31 = *(int **)(result + 8);
    v33 = *v31;
    v32 = v31 + 1;
    if ( v33 != result )
      v32 = *(int **)(result + 8);
    v8 = *v32;
  }
  if ( *(_BYTE *)(v8 + 12) )
  {
    v16 = (_DWORD *)v8;
    v8 = (int)v4;
  }
  else
  {
    *(_BYTE *)(v8 + 12) = 1;
    *(_BYTE *)(v14 + 12) = 0;
    v24 = *(_DWORD **)(v8 + 8);
    v25 = *v24;
    v26 = *(_DWORD *)(*v24 + 4);
    *v24 = v26;
    if ( v26 )
      *(_DWORD *)(v26 + 8) = v24;
    *(_DWORD *)(v25 + 8) = v24[2];
    v27 = (_DWORD *)v24[2];
    if ( (_DWORD *)*v27 != v24 )
      ++v27;
    *v27 = v25;
    *(_DWORD *)(v25 + 4) = v24;
    v24[2] = v25;
    v28 = *(int **)(v8 + 4);
    if ( v4 != v28 )
      v8 = (int)v4;
    v16 = (_DWORD *)*v28;
  }
  v29 = *v16;
  if ( *v16 && !*(_BYTE *)(v29 + 12) )
    goto LABEL_87;
  v30 = v16[1];
  if ( !v30 || *(_BYTE *)(v30 + 12) )
  {
    *((_BYTE *)v16 + 12) = 0;
    result = v16[2];
    if ( result == v8 || !*(_BYTE *)(result + 12) )
      goto LABEL_65;
    v4 = (int *)v8;
    goto LABEL_60;
  }
  if ( !v29 )
    goto LABEL_82;
  if ( *(_BYTE *)(v29 + 12) )
  {
    v30 = v16[1];
LABEL_82:
    *(_BYTE *)(v30 + 12) = 1;
    *((_BYTE *)v16 + 12) = 0;
    v42 = (_DWORD *)v16[1];
    v43 = *v42;
    v16[1] = *v42;
    if ( v43 )
      *(_DWORD *)(v43 + 8) = v16;
    v42[2] = v16[2];
    v44 = (_DWORD *)v16[2];
    if ( (_DWORD *)*v44 != v16 )
      ++v44;
    *v44 = v42;
    *v42 = v16;
    v16[2] = v42;
    v45 = v42 + 2;
    v16 = v42;
  }
  else
  {
LABEL_87:
    v45 = v16 + 2;
  }
  v46 = (_BYTE *)*v45;
  *((_BYTE *)v16 + 12) = *(_BYTE *)(*v45 + 12);
  v46[12] = 1;
  *(_BYTE *)(*v16 + 12) = 1;
  result = *v45;
  v39 = *(int **)*v45;
  v47 = v39[1];
  *(_DWORD *)result = v47;
  if ( v47 )
    *(_DWORD *)(v47 + 8) = result;
  v39[2] = *(_DWORD *)(result + 8);
  v48 = *(int ***)(result + 8);
  if ( *v48 != (int *)result )
    ++v48;
  *v48 = v39;
  v39[1] = result;
LABEL_93:
  *(_DWORD *)(result + 8) = v39;
  return result;
}
