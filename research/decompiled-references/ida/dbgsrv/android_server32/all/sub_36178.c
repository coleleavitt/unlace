/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36178
// Address: 0x00036178

//----- (00036178) --------------------------------------------------------
int __fastcall sub_36178(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // r0
  unsigned int *v7; // r6
  void **v8; // r5
  unsigned int v9; // r1
  unsigned int v10; // r2
  int v11; // r7
  char *v12; // r0
  int v13; // r1
  char *v14; // r6
  int v15; // r6
  _DWORD *v16; // r5
  _DWORD *v17; // r0
  int v18; // r1
  _DWORD *v19; // r0
  char *v20; // r1
  int v21; // r2
  int v22; // r0
  __int64 *v23; // r2
  int result; // r0
  unsigned int v25; // r7
  int v26; // r1
  int v27; // r5
  int **v28; // r6
  unsigned int v29; // r0
  int v30; // r0
  int *v31; // r4
  int v32; // r4
  int *v33; // r0
  int v34; // r2
  int v35; // r0
  int *v36; // r1
  int v37; // r5
  int v38; // [sp+4h] [bp-10h]
  int v39; // [sp+8h] [bp-Ch]
  int v40; // [sp+Ch] [bp-8h]
  int *v42; // [sp+10h] [bp-4h]

  v6 = a1[2];
  v40 = *(_DWORD *)(v6 + 12);
  v39 = 24 * (*(_DWORD *)(v6 + 16) - 1);
  v7 = (unsigned int *)(v40 + v39 + 16);
  v8 = (void **)(v40 + v39 + 12);
  v9 = *v7;
  v10 = *v7 + 1;
  if ( *(_DWORD *)(v40 + v39 + 20) >= v10 )
  {
    v12 = (char *)*v8;
  }
  else
  {
    v38 = a3;
    v11 = a4;
    v12 = (char *)qvector_reserve((int)v8, *v8, v10, 0x10u);
    a4 = v11;
    a3 = v38;
    *v8 = v12;
    v9 = *v7;
    v10 = *v7 + 1;
  }
  *v7 = v10;
  v13 = 16 * v9;
  *(_DWORD *)&v12[v13] = a3;
  v14 = &v12[v13];
  *((_DWORD *)v14 + 1) = a4;
  *((_DWORD *)v14 + 2) = *(_DWORD *)(a1[2] + 56);
  v15 = (int)&v12[v13 + 8];
  v16 = (_DWORD *)a1[2];
  v17 = v16 + 13;
  v18 = v16[14];
  if ( v16[15] >= (unsigned int)(v18 + 1) )
  {
    v19 = (_DWORD *)*v17;
  }
  else
  {
    v19 = qvector_reserve((int)v17, (void *)v16[13], v18 + 1, 0xCu);
    v16[13] = v19;
    v18 = v16[14];
  }
  v19[3 * v18] = 0;
  v20 = (char *)&v19[3 * v18];
  *((_DWORD *)v20 + 1) = 0;
  *((_DWORD *)v20 + 2) = 0;
  ++v16[14];
  v21 = a1[3];
  v22 = a1[1];
  if ( v21 == 2 )
  {
    v23 = (__int64 *)(v22 + 264);
  }
  else
  {
    if ( v21 != 1 )
    {
      if ( !under_debugger )
        interr(20086);
      __debugbreak();
    }
    v23 = (__int64 *)(v22 + 232);
  }
  sub_32154(v22, (void **)v20, v23, *(_DWORD *)(a2 + 8));
  result = *(unsigned __int16 *)(a2 + 6);
  v25 = result & 0x7FFF;
  if ( (result & 0x7FFF) != 0 )
  {
    v42 = (int *)v15;
    v26 = a1[2];
    v27 = *(_DWORD *)(v26 + 68);
    v28 = (int **)(v26 + 68);
    if ( v27 )
    {
      v28 = (int **)(v26 + 68);
      while ( 1 )
      {
        v29 = *(unsigned __int16 *)(v27 + 16);
        if ( v25 >= v29 )
        {
          if ( v29 >= v25 )
            goto LABEL_22;
          v30 = *(_DWORD *)(v27 + 4);
          v28 = (int **)(v27 + 4);
          if ( !v30 )
            goto LABEL_22;
          v27 += 4;
        }
        else
        {
          v30 = *(_DWORD *)v27;
          if ( !*(_DWORD *)v27 )
          {
            v28 = (int **)v27;
            goto LABEL_22;
          }
        }
        v28 = (int **)v27;
        v27 = v30;
      }
    }
    v27 = a1[2] + 68;
LABEL_22:
    v31 = *v28;
    if ( !*v28 )
    {
      v32 = v26;
      v33 = (int *)operator new(0x1Cu);
      v34 = v32;
      v31 = v33;
      v33[5] = 0;
      v33[6] = 0;
      *((_WORD *)v33 + 8) = v25;
      *v33 = 0;
      v33[1] = 0;
      v33[2] = v27;
      *v28 = v33;
      v35 = **(_DWORD **)(v34 + 64);
      if ( v35 )
      {
        *(_DWORD *)(v34 + 64) = v35;
        v36 = *v28;
      }
      else
      {
        v36 = v31;
      }
      v37 = v34;
      sub_261FA(*(int **)(v34 + 68), v36);
      ++*(_DWORD *)(v37 + 72);
    }
    v31[5] = *(_DWORD *)(v40 + v39 + 8);
    result = *v42;
    v31[6] = *v42;
  }
  return result;
}
// E0550: using guessed type char under_debugger;
