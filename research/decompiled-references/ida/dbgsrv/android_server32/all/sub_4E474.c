/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E474
// Address: 0x0004E474

//----- (0004E474) --------------------------------------------------------
unsigned __int8 *__fastcall sub_4E474(unsigned int a1, int *a2)
{
  unsigned int v3; // r0
  unsigned int v4; // r5
  int v5; // r0
  unsigned __int8 *v6; // r6
  int v7; // r1
  unsigned __int8 *v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r2
  unsigned __int8 *v11; // r3
  unsigned int v12; // r4
  unsigned int v13; // r2
  int v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  unsigned int v17; // r7
  int v18; // r1
  void **v19; // r0
  size_t v20; // r4
  unsigned __int8 *v21; // r5
  unsigned int v22; // r0
  unsigned int v23; // r2
  unsigned int v24; // r1
  int v25; // r2
  unsigned int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r1
  int v30; // r2
  float v31; // r2
  int v32; // r1
  _BOOL4 v33; // r6
  unsigned int v34; // r6
  unsigned int v35; // r1
  int v36; // r1
  _DWORD *v37; // r0
  _DWORD *v38; // r1
  unsigned int v39; // r0
  int v41; // [sp+8h] [bp-18h]
  unsigned int v42; // [sp+Ch] [bp-14h]
  unsigned int v43; // [sp+Ch] [bp-14h]
  int v44; // [sp+10h] [bp-10h]
  float v46; // [sp+14h] [bp-Ch]
  unsigned int v47; // [sp+1Ch] [bp-4h]

  v3 = *(unsigned __int8 *)a2;
  v4 = v3 >> 1;
  v5 = v3 & 1;
  if ( v5 )
    v4 = a2[1];
  v6 = (unsigned __int8 *)a2 + 1;
  if ( v5 )
    v6 = (unsigned __int8 *)a2[2];
  v7 = v4;
  v8 = v6;
  v9 = v4;
  if ( v4 >= 4 )
  {
    v42 = a1;
    v10 = v4;
    v11 = v6;
    v7 = v4;
    do
    {
      v12 = 1540483477 * ((((v11[3] << 8) + v11[2]) << 16) + (v11[1] << 8) + *v11);
      v7 = (1540483477 * v7) ^ (1540483477 * (HIBYTE(v12) ^ v12));
      v10 -= 4;
      v11 += 4;
    }
    while ( v10 > 3 );
    v13 = (v4 - 4) & 0xFFFFFFFC;
    v9 = v4 - 4 - v13;
    v8 = &v6[v13 + 4];
    a1 = v42;
  }
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      v14 = v7;
    }
    else
    {
      if ( v9 != 3 )
      {
        v15 = v7;
        goto LABEL_17;
      }
      v14 = (v8[2] << 16) ^ v7;
    }
    v7 = (v8[1] << 8) ^ v14;
  }
  v15 = 1540483477 * (*v8 ^ v7);
LABEL_17:
  v16 = ((1540483477 * ((v15 >> 13) ^ v15)) >> 15) ^ (1540483477 * ((v15 >> 13) ^ v15));
  v17 = *(_DWORD *)(a1 + 4);
  v47 = v16;
  if ( v17 )
  {
    v41 = (v17 - 1) & v17;
    if ( v41 )
    {
      v18 = v16;
      if ( v16 >= v17 )
        v18 = v16 % v17;
    }
    else
    {
      v18 = v16 & (v17 - 1);
    }
    v44 = v18;
    v19 = *(void ***)(*(_DWORD *)a1 + 4 * v18);
    if ( v19 )
    {
      v43 = a1;
      v20 = v4;
      v21 = (unsigned __int8 *)*v19;
      if ( *v19 )
      {
        do
        {
          v22 = *((_DWORD *)v21 + 1);
          if ( v22 != v16 )
          {
            if ( v41 )
            {
              if ( v22 >= v17 )
                v22 %= v17;
            }
            else
            {
              v22 &= v17 - 1;
            }
            if ( v22 != v44 )
              break;
          }
          v23 = v21[8];
          v24 = v23 >> 1;
          v25 = v23 & 1;
          v26 = v24;
          if ( v25 )
            v26 = *((_DWORD *)v21 + 3);
          if ( v26 == v20 )
          {
            if ( v25 )
            {
              if ( !v20 || !memcmp(*((const void **)v21 + 4), v6, v20) )
                return v21 + 20;
            }
            else
            {
              if ( !v20 )
                return v21 + 20;
              v27 = 0;
              while ( v21[v27 + 9] == v6[v27] )
              {
                if ( v24 == ++v27 )
                  return v21 + 20;
              }
            }
          }
          v21 = *(unsigned __int8 **)v21;
          v16 = v47;
        }
        while ( v21 );
      }
      a1 = v43;
    }
  }
  v21 = (unsigned __int8 *)operator new(0x18u);
  v28 = *a2;
  v29 = a2[1];
  v30 = a2[2];
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  *((_WORD *)v21 + 10) = 0;
  *(_DWORD *)v21 = 0;
  *((_DWORD *)v21 + 1) = v47;
  *((_DWORD *)v21 + 2) = v28;
  *((_DWORD *)v21 + 3) = v29;
  *((_DWORD *)v21 + 4) = v30;
  v46 = *(float *)(a1 + 16);
  v31 = (float)(unsigned int)(*(_DWORD *)(a1 + 12) + 1);
  if ( v17 && (float)(v46 * (float)v17) >= v31 )
  {
    v32 = v44;
  }
  else
  {
    v33 = 1;
    if ( v17 >= 3 )
      v33 = ((v17 - 1) & v17) != 0;
    v34 = v33 | (2 * v17);
    v35 = (unsigned int)ceilf(v31 / v46);
    if ( v34 >= v35 )
      v35 = v34;
    sub_55FA0(a1, v35);
    v17 = *(_DWORD *)(a1 + 4);
    if ( ((v17 - 1) & v17) != 0 )
    {
      if ( v47 >= v17 )
        v32 = v47 % v17;
      else
        v32 = v47;
    }
    else
    {
      v32 = (v17 - 1) & v47;
    }
  }
  v36 = 4 * v32;
  v37 = *(_DWORD **)(*(_DWORD *)a1 + v36);
  v38 = (_DWORD *)(*(_DWORD *)a1 + v36);
  if ( v37 )
  {
    *(_DWORD *)v21 = *v37;
LABEL_64:
    *v37 = v21;
    goto LABEL_65;
  }
  *(_DWORD *)v21 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v21;
  *v38 = a1 + 8;
  if ( *(_DWORD *)v21 )
  {
    v39 = *(_DWORD *)(*(_DWORD *)v21 + 4);
    if ( ((v17 - 1) & v17) != 0 )
    {
      if ( v39 >= v17 )
        v39 %= v17;
    }
    else
    {
      v39 &= v17 - 1;
    }
    v37 = (_DWORD *)(*(_DWORD *)a1 + 4 * v39);
    goto LABEL_64;
  }
LABEL_65:
  ++*(_DWORD *)(a1 + 12);
  return v21 + 20;
}
// 4E644: variable 'v44' is possibly undefined
