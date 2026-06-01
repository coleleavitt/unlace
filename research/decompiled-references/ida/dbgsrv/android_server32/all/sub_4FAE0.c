/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FAE0
// Address: 0x0004FAE0

//----- (0004FAE0) --------------------------------------------------------
unsigned __int8 *__fastcall sub_4FAE0(unsigned int a1, int *a2)
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
  unsigned __int8 *v20; // r5
  unsigned int v21; // r0
  unsigned int v22; // r2
  unsigned int v23; // r1
  int v24; // r2
  unsigned int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r1
  int v29; // r2
  float v30; // r0
  _DWORD *v31; // r4
  int v32; // r1
  _BOOL4 v33; // r6
  unsigned int v34; // r6
  unsigned int v35; // r1
  int v36; // r1
  _DWORD *v37; // r0
  _DWORD *v38; // r1
  unsigned int v39; // r0
  int v41; // [sp+8h] [bp-20h]
  int v42; // [sp+10h] [bp-18h]
  unsigned int v44; // [sp+18h] [bp-10h]
  size_t n; // [sp+20h] [bp-8h]
  float na; // [sp+20h] [bp-8h]
  unsigned int v47; // [sp+24h] [bp-4h]

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
  v44 = a1;
  if ( v4 >= 4 )
  {
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
    a1 = v44;
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
    v42 = v18;
    v19 = *(void ***)(*(_DWORD *)a1 + 4 * v18);
    if ( v19 )
    {
      n = v4;
      v20 = (unsigned __int8 *)*v19;
      if ( *v19 )
      {
        do
        {
          v21 = *((_DWORD *)v20 + 1);
          if ( v21 != v16 )
          {
            if ( v41 )
            {
              if ( v21 >= v17 )
                v21 %= v17;
            }
            else
            {
              v21 &= v17 - 1;
            }
            if ( v21 != v42 )
              break;
          }
          v22 = v20[8];
          v23 = v22 >> 1;
          v24 = v22 & 1;
          v25 = v23;
          if ( v24 )
            v25 = *((_DWORD *)v20 + 3);
          if ( v25 == n )
          {
            if ( v24 )
            {
              if ( !n || !memcmp(*((const void **)v20 + 4), v6, n) )
                return v20 + 20;
            }
            else
            {
              if ( !n )
                return v20 + 20;
              v26 = 0;
              while ( v20[v26 + 9] == v6[v26] )
              {
                if ( v23 == ++v26 )
                  return v20 + 20;
              }
            }
          }
          v20 = *(unsigned __int8 **)v20;
          v16 = v47;
        }
        while ( v20 );
      }
    }
  }
  v20 = (unsigned __int8 *)operator new(0x20u);
  v27 = *a2;
  v28 = a2[1];
  v29 = a2[2];
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  *(_DWORD *)v20 = 0;
  *((_DWORD *)v20 + 1) = v47;
  *((_DWORD *)v20 + 2) = v27;
  *((_DWORD *)v20 + 3) = v28;
  *((_DWORD *)v20 + 4) = v29;
  *((_DWORD *)v20 + 5) = 0;
  *((_DWORD *)v20 + 6) = 0;
  *((_DWORD *)v20 + 7) = 0;
  na = *(float *)(a1 + 16);
  v30 = (float)(unsigned int)(*(_DWORD *)(a1 + 12) + 1);
  if ( v17 && (float)(na * (float)v17) >= v30 )
  {
    v31 = (_DWORD *)v44;
    v32 = v42;
  }
  else
  {
    v33 = 1;
    if ( v17 >= 3 )
      v33 = ((v17 - 1) & v17) != 0;
    v34 = v33 | (2 * v17);
    v35 = (unsigned int)ceilf(v30 / na);
    if ( v34 >= v35 )
      v35 = v34;
    v31 = (_DWORD *)v44;
    sub_56778(v44, v35);
    v17 = *(_DWORD *)(v44 + 4);
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
  v37 = *(_DWORD **)(*v31 + v36);
  v38 = (_DWORD *)(*v31 + v36);
  if ( v37 )
  {
    *(_DWORD *)v20 = *v37;
LABEL_63:
    *v37 = v20;
    goto LABEL_64;
  }
  *(_DWORD *)v20 = v31[2];
  v31[2] = v20;
  *v38 = v31 + 2;
  if ( *(_DWORD *)v20 )
  {
    v39 = *(_DWORD *)(*(_DWORD *)v20 + 4);
    if ( ((v17 - 1) & v17) != 0 )
    {
      if ( v39 >= v17 )
        v39 %= v17;
    }
    else
    {
      v39 &= v17 - 1;
    }
    v37 = (_DWORD *)(*v31 + 4 * v39);
    goto LABEL_63;
  }
LABEL_64:
  ++v31[3];
  return v20 + 20;
}
// 4FCC0: variable 'v42' is possibly undefined
