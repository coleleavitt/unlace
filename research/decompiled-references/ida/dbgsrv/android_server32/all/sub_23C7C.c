/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23C7C
// Address: 0x00023C7C

//----- (00023C7C) --------------------------------------------------------
int __fastcall sub_23C7C(_DWORD *a1, const void **a2, int a3)
{
  _DWORD *v3; // r7
  const void **v4; // r4
  int v5; // r1
  void *v6; // r0
  _DWORD *v7; // r3
  int v8; // r7
  unsigned int *v9; // r5
  const void **v10; // r0
  const void *v11; // r4
  size_t v12; // r0
  unsigned int v13; // r2
  unsigned int v14; // r6
  void *v15; // r0
  void *v16; // r4
  void **v17; // r1
  unsigned int v18; // r3
  int v19; // r0
  unsigned int v20; // r2
  char *v21; // r1
  unsigned int v22; // r4
  int v23; // r0
  unsigned int v24; // r2
  char *v25; // r0
  int v26; // r3
  int result; // r0
  char **v29; // [sp+8h] [bp-24h]
  size_t v30; // [sp+Ch] [bp-20h]
  void **v31; // [sp+10h] [bp-1Ch]
  const void **v33; // [sp+1Ch] [bp-10h]
  const void **v34; // [sp+20h] [bp-Ch]
  int v35; // [sp+24h] [bp-8h] BYREF
  void *v36; // [sp+28h] [bp-4h] BYREF

  v3 = a1;
  if ( *a2 )
  {
    v4 = a2;
    v29 = (char **)(a1 + 6);
    v31 = (void **)(a1 + 3);
    do
    {
      v5 = v3[4];
      if ( v3[5] >= (unsigned int)(v5 + 1) )
      {
        v6 = *v31;
      }
      else
      {
        v6 = qvector_reserve((int)v31, (void *)v3[3], v5 + 1, 0xCu);
        v3[3] = v6;
        v5 = v3[4];
      }
      v7 = v3;
      v8 = (int)v6 + 12 * v5;
      *(_DWORD *)(v8 + 8) = 0;
      *(_DWORD *)v8 = 0;
      v9 = (unsigned int *)(v8 + 4);
      *(_DWORD *)(v8 + 4) = 0;
      ++v7[4];
      v34 = v4;
      v10 = v4;
      v11 = *v4;
      v33 = v10 + 1;
      if ( v11 && (v12 = strlen((const char *)v11)) != 0 )
      {
        v30 = v12;
        v13 = v12 + 1;
        if ( *(_DWORD *)(v8 + 8) >= v12 + 1 )
        {
          v15 = *(void **)v8;
        }
        else
        {
          v14 = v12 + 1;
          v15 = qvector_reserve(v8, *(void **)v8, v13, 1u);
          v13 = v14;
          *(_DWORD *)v8 = v15;
        }
        *v9 = v13;
        memmove(v15, v11, v30);
        *(_BYTE *)(*(_DWORD *)v8 + v30) = 0;
      }
      else
      {
        *v9 = 0;
      }
      v16 = *(void **)v8;
      v36 = *(void **)v8;
      v3 = a1;
      v17 = (void **)a1[6];
      v18 = a1[8];
      v19 = a1[7];
      v20 = v19 + 1;
      if ( v17 > &v36 || &v17[v18] <= &v36 )
      {
        if ( v18 < v20 )
        {
          v17 = (void **)qvector_reserve((int)v29, v17, v20, 4u);
          a1[6] = v17;
          v19 = a1[7];
          v16 = v36;
        }
      }
      else if ( v18 < v20 )
      {
        v17 = (void **)qvector_reserve((int)v29, v17, v20, 4u);
        a1[6] = v17;
        v19 = a1[7];
      }
      v17[v19] = v16;
      ++a1[7];
      v4 = v33;
    }
    while ( v34[1] );
  }
  else
  {
    v29 = (char **)(a1 + 6);
  }
  v35 = 0;
  v21 = (char *)v3[6];
  v22 = v3[8];
  v23 = v3[7];
  v24 = v23 + 1;
  if ( v21 > (char *)&v35 || &v21[4 * v22] <= (char *)&v35 )
  {
    v26 = 0;
    if ( v22 < v24 )
    {
      v21 = (char *)qvector_reserve((int)v29, v21, v24, 4u);
      *v29 = v21;
      v23 = v3[7];
      v26 = v35;
    }
    v25 = &v21[4 * v23];
  }
  else
  {
    if ( v22 < v24 )
    {
      v21 = (char *)qvector_reserve((int)v29, v21, v24, 4u);
      *v29 = v21;
      v23 = v3[7];
    }
    v25 = &v21[4 * v23];
    v26 = 0;
  }
  *(_DWORD *)v25 = v26;
  result = v3[7] + 1;
  v3[7] = result;
  v3[12] = a3;
  return result;
}
