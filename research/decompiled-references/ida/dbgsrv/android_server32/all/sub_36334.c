/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36334
// Address: 0x00036334

//----- (00036334) --------------------------------------------------------
int __fastcall sub_36334(int a1, unsigned int *a2, int a3, int a4)
{
  int v6; // r4
  unsigned int *v7; // r3
  void **v8; // r5
  int v9; // r1
  unsigned int v10; // r2
  char *v11; // r0
  int v12; // r1
  char *v13; // r0
  char *v14; // r6
  _DWORD *v15; // r5
  _DWORD *v16; // r0
  int v17; // r1
  _DWORD *v18; // r0
  char *v19; // r1
  int v20; // r2
  int v21; // r0
  __int64 *v22; // r2
  int *v23; // r6
  _DWORD *v24; // r5
  _DWORD *v25; // r0
  int v26; // r1
  _DWORD *v27; // r0
  char *v28; // r1
  int v29; // r2
  int v30; // r0
  __int64 *v31; // r2
  int result; // r0
  unsigned int v33; // r6
  int v34; // r1
  int v35; // r4
  int **v36; // r7
  unsigned int v37; // r0
  int v38; // r0
  int *v39; // r5
  int *v40; // r4
  int v41; // r5
  int *v42; // r0
  int v43; // r2
  int v44; // r0
  int *v45; // r1
  int v46; // r6
  int *v47; // [sp+8h] [bp-10h]
  int *v49; // [sp+10h] [bp-8h]

  v6 = **(_DWORD **)(a1 + 8) + 24 * (*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4) - 1);
  v7 = (unsigned int *)(v6 + 12);
  v8 = (void **)(v6 + 8);
  v9 = *(_DWORD *)(v6 + 12);
  v10 = v9 + 1;
  v49 = (int *)(v6 + 12);
  if ( *(_DWORD *)(v6 + 16) >= (unsigned int)(v9 + 1) )
  {
    v11 = (char *)*v8;
  }
  else
  {
    v11 = (char *)qvector_reserve((int)v8, *v8, v10, 0x10u);
    v7 = (unsigned int *)(v6 + 12);
    *v8 = v11;
    v9 = *v49;
    v10 = *v49 + 1;
  }
  *v7 = v10;
  v12 = 16 * v9;
  *(_DWORD *)&v11[v12] = a3;
  v13 = &v11[v12];
  *((_DWORD *)v13 + 1) = a4;
  v14 = v13;
  if ( *(unsigned __int8 *)(v6 + 20) << 31 )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 36) = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 44);
    v15 = *(_DWORD **)(a1 + 8);
    v16 = v15 + 10;
    v17 = v15[11];
    if ( v15[12] >= (unsigned int)(v17 + 1) )
    {
      v18 = (_DWORD *)*v16;
    }
    else
    {
      v18 = qvector_reserve((int)v16, (void *)v15[10], v17 + 1, 0xCu);
      v15[10] = v18;
      v17 = v15[11];
    }
    v18[3 * v17] = 0;
    v19 = (char *)&v18[3 * v17];
    *((_DWORD *)v19 + 1) = 0;
    *((_DWORD *)v19 + 2) = 0;
    ++v15[11];
    v20 = *(_DWORD *)(a1 + 12);
    v21 = *(_DWORD *)(a1 + 4);
    if ( v20 == 2 )
    {
      v22 = (__int64 *)(v21 + 264);
    }
    else
    {
      if ( v20 != 1 )
        goto LABEL_40;
      v22 = (__int64 *)(v21 + 232);
    }
    sub_32154(v21, (void **)v19, v22, *a2);
  }
  *((_DWORD *)v14 + 2) = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 56);
  v23 = (int *)(v14 + 8);
  v24 = *(_DWORD **)(a1 + 8);
  v25 = v24 + 13;
  v26 = v24[14];
  if ( v24[15] >= (unsigned int)(v26 + 1) )
  {
    v27 = (_DWORD *)*v25;
  }
  else
  {
    v27 = qvector_reserve((int)v25, (void *)v24[13], v26 + 1, 0xCu);
    v24[13] = v27;
    v26 = v24[14];
  }
  v27[3 * v26] = 0;
  v28 = (char *)&v27[3 * v26];
  *((_DWORD *)v28 + 1) = 0;
  *((_DWORD *)v28 + 2) = 0;
  ++v24[14];
  v29 = *(_DWORD *)(a1 + 12);
  v30 = *(_DWORD *)(a1 + 4);
  v47 = v23;
  if ( v29 == 2 )
  {
    v31 = (__int64 *)(v30 + 264);
    goto LABEL_20;
  }
  if ( v29 != 1 )
  {
LABEL_40:
    if ( !under_debugger )
      interr(20086);
    __debugbreak();
  }
  v31 = (__int64 *)(v30 + 232);
LABEL_20:
  result = sub_32154(v30, (void **)v28, v31, *a2);
  v33 = *(unsigned __int16 *)(v6 + 22);
  if ( *(_WORD *)(v6 + 22) )
  {
    result = *v49;
    if ( *v49 == 1 )
    {
      v34 = *(_DWORD *)(a1 + 8);
      v35 = *(_DWORD *)(v34 + 68);
      v36 = (int **)(v34 + 68);
      if ( v35 )
      {
        v36 = (int **)(v34 + 68);
        while ( 1 )
        {
          v37 = *(unsigned __int16 *)(v35 + 16);
          if ( v33 >= v37 )
          {
            if ( v37 >= v33 )
              goto LABEL_32;
            v38 = *(_DWORD *)(v35 + 4);
            v36 = (int **)(v35 + 4);
            if ( !v38 )
              goto LABEL_32;
            v35 += 4;
          }
          else
          {
            v38 = *(_DWORD *)v35;
            if ( !*(_DWORD *)v35 )
            {
              v36 = (int **)v35;
              goto LABEL_32;
            }
          }
          v36 = (int **)v35;
          v35 = v38;
        }
      }
      v35 = *(_DWORD *)(a1 + 8) + 68;
LABEL_32:
      v39 = *v36;
      if ( *v36 )
      {
        v40 = v47;
      }
      else
      {
        v41 = *(_DWORD *)(a1 + 8);
        v42 = (int *)operator new(0x1Cu);
        v43 = v41;
        v39 = v42;
        v42[5] = 0;
        v42[6] = 0;
        *((_WORD *)v42 + 8) = v33;
        *v42 = 0;
        v42[1] = 0;
        v42[2] = v35;
        *v36 = v42;
        v44 = **(_DWORD **)(v43 + 64);
        if ( v44 )
        {
          *(_DWORD *)(v43 + 64) = v44;
          v45 = *v36;
        }
        else
        {
          v45 = v39;
        }
        v40 = v47;
        v46 = v43;
        sub_261FA(*(int **)(v43 + 68), v45);
        ++*(_DWORD *)(v46 + 72);
        v34 = *(_DWORD *)(a1 + 8);
      }
      v39[5] = *(_DWORD *)(v34 + 36);
      result = *v40;
      v39[6] = *v40;
    }
  }
  return result;
}
// E0550: using guessed type char under_debugger;
