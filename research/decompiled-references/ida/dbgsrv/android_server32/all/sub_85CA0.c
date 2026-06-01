/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85CA0
// Address: 0x00085CA0

//----- (00085CA0) --------------------------------------------------------
unsigned int __fastcall sub_85CA0(_DWORD *a1)
{
  int v2; // r2
  unsigned int v3; // r0
  int i; // r1
  unsigned int v5; // r2
  size_t v6; // r5
  unsigned int v7; // r0
  int v8; // r2
  unsigned __int16 *v9; // r3
  unsigned int v10; // r7
  __int16 v11; // r1
  unsigned __int16 *v12; // r2
  unsigned int v13; // r3
  __int16 v14; // r1
  int v15; // r6
  size_t v16; // r0
  int v17; // r1
  void *v18; // r7
  int v19; // r0
  unsigned int v20; // r0
  int v21; // r2
  int v22; // r1
  int v23; // r3
  int v24; // r5
  int v25; // r2
  int v26; // r2
  unsigned int result; // r0
  unsigned int *v28; // r6
  unsigned int v29; // r1
  unsigned int v30; // r5
  void *v31; // r0
  size_t v32; // r4
  unsigned int v33; // r2
  size_t v34; // r5
  int v35; // [sp+4h] [bp-10h]
  int v36; // [sp+8h] [bp-Ch]
  int *v37; // [sp+10h] [bp-4h]

  v37 = a1 + 1453;
  v2 = a1[11];
  v35 = v2 - 262;
  v3 = a1[29];
  v36 = v2;
  for ( i = v2; ; i = a1[11] )
  {
    v5 = a1[27];
    v6 = a1[15] - v3 - v5;
    if ( v5 >= v35 + i )
    {
      qmemcpy((void *)a1[14], (const void *)(a1[14] + v36), v36 - v6);
      a1[28] -= v36;
      v7 = a1[27] - v36;
      a1[27] = v7;
      a1[23] -= v36;
      if ( *v37 > v7 )
        *v37 = v7;
      v8 = a1[19];
      v9 = (unsigned __int16 *)(a1[17] - 2 + 2 * v8);
      v10 = a1[11];
      do
      {
        v11 = v10;
        if ( v10 <= *v9 )
          v11 = *v9;
        *v9-- = v11 - v10;
        --v8;
      }
      while ( v8 );
      v12 = (unsigned __int16 *)(a1[16] - 2 + 2 * v10);
      v13 = v10;
      do
      {
        v14 = v10;
        if ( v10 <= *v12 )
          v14 = *v12;
        *v12-- = v14 - v10;
        --v13;
      }
      while ( v13 );
      v6 += v36;
    }
    v15 = *a1;
    v16 = *(_DWORD *)(*a1 + 4);
    if ( !v16 )
      break;
    if ( v16 <= v6 )
      v6 = *(_DWORD *)(*a1 + 4);
    v17 = a1[29];
    v18 = (void *)(a1[14] + a1[27] + v17);
    if ( v6 )
    {
      *(_DWORD *)(v15 + 4) = v16 - v6;
      qmemcpy(v18, *(const void **)v15, v6);
      v19 = *(_DWORD *)(*(_DWORD *)(v15 + 28) + 24);
      if ( v19 == 2 )
      {
        v20 = sub_85468(*(_DWORD *)(v15 + 48), (unsigned __int8 *)v18, v6);
LABEL_22:
        *(_DWORD *)(v15 + 48) = v20;
      }
      else if ( v19 == 1 )
      {
        v20 = sub_8EC00(*(_DWORD *)(v15 + 48), (unsigned __int8 *)v18, v6);
        goto LABEL_22;
      }
      *(_DWORD *)v15 += v6;
      *(_DWORD *)(v15 + 8) += v6;
      v17 = a1[29];
    }
    v3 = v17 + v6;
    a1[29] = v17 + v6;
    v21 = *v37;
    if ( *v37 + v17 + v6 >= 3 )
    {
      v22 = a1[27] - v21;
      v23 = a1[14];
      v24 = *(unsigned __int8 *)(v23 + v22);
      a1[18] = v24;
      a1[18] = (*(unsigned __int8 *)(v23 + v22 + 1) ^ (v24 << a1[22])) & a1[21];
      if ( v21 )
      {
        do
        {
          v25 = (*(unsigned __int8 *)(a1[14] + v22 + 2) ^ (a1[18] << a1[22])) & a1[21];
          a1[18] = v25;
          *(_WORD *)(a1[16] + 2 * (a1[13] & v22)) = *(_WORD *)(a1[17] + 2 * v25);
          *(_WORD *)(a1[17] + 2 * a1[18]) = v22;
          v26 = *v37 - 1;
          *v37 = v26;
          v3 = a1[29];
          if ( v3 + v26 <= 2 )
            break;
          ++v22;
        }
        while ( v26 );
      }
    }
    if ( v3 >= 0x106 || !*(_DWORD *)(*a1 + 4) )
      break;
  }
  result = a1[1456];
  v28 = a1 + 1456;
  v29 = a1[15];
  if ( v29 > result )
  {
    v30 = a1[29] + a1[27];
    if ( result < v30 )
    {
      v31 = (void *)(a1[14] + v30);
      v32 = v29 - v30;
      if ( v29 - v30 >= 0x102 )
        v32 = 258;
      memset(v31, 0, v32);
      result = v32 + v30;
      goto LABEL_41;
    }
    v33 = v30 + 258;
    if ( v30 + 258 > result )
    {
      v34 = v29 - result;
      if ( v33 - result <= v29 - result )
        v34 = v33 - result;
      memset((void *)(a1[14] + result), 0, v34);
      result = *v28 + v34;
LABEL_41:
      *v28 = result;
    }
  }
  return result;
}
