/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F700
// Address: 0x0004F700

//----- (0004F700) --------------------------------------------------------
unsigned __int8 *__fastcall sub_4F700(unsigned int a1, int *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r3
  int v6; // r0
  unsigned __int8 *v7; // r6
  int v8; // r1
  unsigned __int8 *v9; // r2
  unsigned int v10; // r2
  unsigned __int8 *v11; // r3
  unsigned int v12; // r4
  unsigned int v13; // r2
  int v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  unsigned int v17; // r0
  unsigned int v18; // r5
  int v19; // r1
  void **v20; // r0
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
  float v31; // r3
  _DWORD *v32; // r4
  int v33; // r1
  _BOOL4 v34; // r7
  unsigned int v35; // r7
  unsigned int v36; // r1
  unsigned int v37; // r1
  int v38; // r1
  _DWORD *v39; // r0
  _DWORD *v40; // r1
  unsigned int v41; // r0
  unsigned int v43; // [sp+4h] [bp-24h]
  int v44; // [sp+8h] [bp-20h]
  int v45; // [sp+10h] [bp-18h]
  unsigned int v46; // [sp+14h] [bp-14h]
  unsigned int v47; // [sp+1Ch] [bp-Ch]
  unsigned int v48; // [sp+20h] [bp-8h]
  size_t n; // [sp+24h] [bp-4h]
  float na; // [sp+24h] [bp-4h]

  v4 = *(unsigned __int8 *)a2;
  v5 = v4 >> 1;
  v6 = v4 & 1;
  if ( v6 )
    v5 = a2[1];
  v7 = (unsigned __int8 *)a2 + 1;
  if ( v6 )
    v7 = (unsigned __int8 *)a2[2];
  v8 = v5;
  v9 = v7;
  n = v5;
  v46 = a1;
  if ( v5 >= 4 )
  {
    v8 = v5;
    v10 = v5;
    v11 = v7;
    do
    {
      v12 = 1540483477 * ((((v11[3] << 8) + v11[2]) << 16) + (v11[1] << 8) + *v11);
      v8 = (1540483477 * v8) ^ (1540483477 * (HIBYTE(v12) ^ v12));
      v10 -= 4;
      v11 += 4;
    }
    while ( v10 > 3 );
    v13 = (n - 4) & 0xFFFFFFFC;
    v5 = n - 4 - v13;
    v9 = &v7[v13 + 4];
    a1 = v46;
  }
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      v14 = v8;
    }
    else
    {
      if ( v5 != 3 )
      {
        v15 = v8;
        goto LABEL_17;
      }
      v14 = (v9[2] << 16) ^ v8;
    }
    v8 = (v9[1] << 8) ^ v14;
  }
  v15 = 1540483477 * (*v9 ^ v8);
LABEL_17:
  v16 = ((1540483477 * ((v15 >> 13) ^ v15)) >> 15) ^ (1540483477 * ((v15 >> 13) ^ v15));
  v17 = *(_DWORD *)(a1 + 4);
  v47 = v17;
  v48 = v16;
  if ( v17 )
  {
    v18 = v17 - 1;
    v44 = (v17 - 1) & v17;
    if ( v44 )
    {
      v19 = v16;
      if ( v16 >= v17 )
        v19 = v16 % v17;
    }
    else
    {
      v19 = v16 & v18;
    }
    v45 = v19;
    v20 = *(void ***)(*(_DWORD *)a1 + 4 * v19);
    if ( v20 )
    {
      v43 = v18;
      v21 = (unsigned __int8 *)*v20;
      if ( *v20 )
      {
        do
        {
          v22 = *((_DWORD *)v21 + 1);
          if ( v22 != v16 )
          {
            if ( v44 )
            {
              if ( v22 >= v47 )
                v22 %= v47;
            }
            else
            {
              v22 &= v43;
            }
            if ( v22 != v45 )
              break;
          }
          v23 = v21[8];
          v24 = v23 >> 1;
          v25 = v23 & 1;
          v26 = v24;
          if ( v25 )
            v26 = *((_DWORD *)v21 + 3);
          if ( v26 == n )
          {
            if ( v25 )
            {
              if ( !n || !memcmp(*((const void **)v21 + 4), v7, n) )
                return v21 + 20;
            }
            else
            {
              if ( !n )
                return v21 + 20;
              v27 = 0;
              while ( v21[v27 + 9] == v7[v27] )
              {
                if ( v24 == ++v27 )
                  return v21 + 20;
              }
            }
          }
          v21 = *(unsigned __int8 **)v21;
          v16 = v48;
        }
        while ( v21 );
      }
    }
  }
  v21 = (unsigned __int8 *)operator new(0x24u);
  v28 = *a2;
  v29 = a2[1];
  v30 = a2[2];
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  *((_WORD *)v21 + 16) = 0;
  *(_DWORD *)v21 = 0;
  *((_DWORD *)v21 + 1) = v48;
  *((_DWORD *)v21 + 2) = v28;
  *((_DWORD *)v21 + 3) = v29;
  *((_DWORD *)v21 + 4) = v30;
  *((_DWORD *)v21 + 5) = 0;
  *((_DWORD *)v21 + 6) = 0;
  *((_DWORD *)v21 + 7) = 0;
  na = *(float *)(a1 + 16);
  v31 = (float)(unsigned int)(*(_DWORD *)(a1 + 12) + 1);
  if ( v47 && (float)(na * (float)v47) >= v31 )
  {
    v32 = (_DWORD *)v46;
    v33 = v45;
  }
  else
  {
    v32 = (_DWORD *)v46;
    v34 = 1;
    if ( v47 >= 3 )
      v34 = ((v47 - 1) & v47) != 0;
    v35 = v34 | (2 * v47);
    v36 = (unsigned int)ceilf(v31 / na);
    if ( v35 >= v36 )
      v36 = v35;
    sub_563F4(v46, v36);
    v37 = *(_DWORD *)(v46 + 4);
    v47 = v37;
    if ( ((v37 - 1) & v37) != 0 )
    {
      if ( v48 >= v37 )
        v33 = v48 % v37;
      else
        v33 = v48;
    }
    else
    {
      v33 = (v37 - 1) & v48;
    }
  }
  v38 = 4 * v33;
  v39 = *(_DWORD **)(*v32 + v38);
  v40 = (_DWORD *)(*v32 + v38);
  if ( v39 )
  {
    *(_DWORD *)v21 = *v39;
LABEL_63:
    *v39 = v21;
    goto LABEL_64;
  }
  *(_DWORD *)v21 = v32[2];
  v32[2] = v21;
  *v40 = v32 + 2;
  if ( *(_DWORD *)v21 )
  {
    v41 = *(_DWORD *)(*(_DWORD *)v21 + 4);
    if ( ((v47 - 1) & v47) != 0 )
    {
      if ( v41 >= v47 )
        v41 %= v47;
    }
    else
    {
      v41 &= v47 - 1;
    }
    v39 = (_DWORD *)(*v32 + 4 * v41);
    goto LABEL_63;
  }
LABEL_64:
  ++v32[3];
  return v21 + 20;
}
// 4F8DC: variable 'v45' is possibly undefined
