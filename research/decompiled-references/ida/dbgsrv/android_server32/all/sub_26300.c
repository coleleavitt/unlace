/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26300
// Address: 0x00026300

//----- (00026300) --------------------------------------------------------
int __fastcall sub_26300(int a1, int a2, char *a3)
{
  int v5; // r6
  unsigned int v6; // r4
  int v7; // r1
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  char *v10; // r1
  unsigned int v11; // r7
  int v12; // r0
  unsigned int v13; // r2
  int v14; // r0
  void *v15; // r3
  int v16; // r1
  int **v17; // r7
  int **v18; // r5
  int *v19; // r0
  int *v20; // r0
  int *v21; // r6
  int v22; // r6
  int *v23; // r0
  int v24; // r2
  int v25; // r0
  int *v26; // r1
  int v27; // r4
  void **v28; // r5
  size_t v29; // r0
  size_t v30; // r7
  unsigned int v31; // r4
  void *v32; // r0
  void *v34; // [sp+8h] [bp-10h]
  char *s; // [sp+Ch] [bp-Ch]
  int *v36; // [sp+10h] [bp-8h]
  void *v37; // [sp+14h] [bp-4h] BYREF

  v5 = *(_DWORD *)(a1 + 16);
  v6 = **(_DWORD **)(a1 + 12) + a2;
  v7 = *(_DWORD *)(v5 + 4);
  if ( *(_DWORD *)(v5 + 8) >= (unsigned int)(v7 + 1) )
  {
    v8 = *(_DWORD **)v5;
  }
  else
  {
    v8 = qvector_reserve(v5, *(void **)v5, v7 + 1, 4u);
    *(_DWORD *)v5 = v8;
    v7 = *(_DWORD *)(v5 + 4);
  }
  v8[v7] = v6;
  ++*(_DWORD *)(v5 + 4);
  v36 = (int *)a1;
  v9 = *(_DWORD **)(a1 + 16);
  s = a3;
  v34 = qstrdup(a3);
  v37 = v34;
  v10 = (char *)v9[3];
  v11 = v9[5];
  v12 = (int)(v9 + 3);
  v13 = v9[4] + 1;
  if ( v10 > (char *)&v37 || &v10[4 * v11] <= (char *)&v37 )
  {
    if ( v11 < v13 )
    {
      v10 = (char *)qvector_reserve(v12, v10, v13, 4u);
      v9[3] = v10;
      v14 = v9[4];
      v15 = v37;
      goto LABEL_11;
    }
  }
  else if ( v11 < v13 )
  {
    v10 = (char *)qvector_reserve(v12, v10, v13, 4u);
    v9[3] = v10;
    v14 = v9[4];
    v15 = v34;
    goto LABEL_11;
  }
  v15 = v34;
  v14 = v9[4];
LABEL_11:
  *(_DWORD *)&v10[4 * v14] = v15;
  ++v9[4];
  v16 = v36[3];
  v17 = *(int ***)(v16 + 36);
  v18 = (int **)(v16 + 36);
  if ( v17 )
  {
    v18 = (int **)(v16 + 36);
    while ( 1 )
    {
      v19 = v17[4];
      if ( v6 >= (unsigned int)v19 )
      {
        if ( (unsigned int)v19 >= v6 )
          goto LABEL_21;
        v20 = v17[1];
        v18 = v17 + 1;
        if ( !v20 )
          goto LABEL_21;
        ++v17;
      }
      else
      {
        v20 = *v17;
        if ( !*v17 )
        {
          v18 = v17;
          goto LABEL_21;
        }
      }
      v18 = v17;
      v17 = (int **)v20;
    }
  }
  v17 = (int **)(v36[3] + 36);
LABEL_21:
  v21 = *v18;
  if ( !*v18 )
  {
    v22 = v36[3];
    v23 = (int *)operator new(0x20u);
    v24 = v22;
    v21 = v23;
    v23[4] = v6;
    v23[5] = 0;
    v23[6] = 0;
    v23[7] = 0;
    *v23 = 0;
    v23[1] = 0;
    v23[2] = (int)v17;
    *v18 = v23;
    v25 = **(_DWORD **)(v24 + 32);
    if ( v25 )
    {
      *(_DWORD *)(v24 + 32) = v25;
      v26 = *v18;
    }
    else
    {
      v26 = v21;
    }
    v27 = v24;
    sub_261FA(*(int **)(v24 + 36), v26);
    ++*(_DWORD *)(v27 + 40);
  }
  v28 = (void **)(v21 + 5);
  if ( s && (v29 = strlen(s)) != 0 )
  {
    v30 = v29;
    v31 = v29 + 1;
    if ( v21[7] >= v29 + 1 )
    {
      v32 = *v28;
    }
    else
    {
      v32 = qvector_reserve((int)(v21 + 5), *v28, v31, 1u);
      *v28 = v32;
    }
    v21[6] = v31;
    memmove(v32, s, v30);
    *(_BYTE *)(v21[5] + v30) = 0;
  }
  else
  {
    v21[6] = 0;
  }
  if ( !(*(_DWORD *)(v36[4] + 4) % 0x2710u) )
    sub_1BC48(v36[2], &byte_A0742);
  return 0;
}
// A0742: using guessed type char byte_A0742;
