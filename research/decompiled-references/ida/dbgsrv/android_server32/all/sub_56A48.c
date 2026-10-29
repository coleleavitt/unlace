/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56A48
// Address: 0x00056A48

//----- (00056A48) --------------------------------------------------------
int *__fastcall sub_56A48(_DWORD *a1, unsigned __int8 *a2)
{
  unsigned int v2; // r3
  size_t v3; // r4
  int v4; // r3
  unsigned __int8 *v5; // r6
  int v6; // r1
  unsigned __int8 *v7; // r2
  size_t v8; // r3
  unsigned int v9; // r2
  unsigned __int8 *v10; // r3
  unsigned int v11; // r5
  unsigned int v12; // r2
  int v13; // r3
  _DWORD *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r7
  unsigned int v17; // r5
  unsigned int v18; // r1
  int *i; // r6
  int **v20; // r0
  unsigned int v21; // r0
  unsigned int v22; // r3
  unsigned int v23; // r2
  int v24; // r3
  unsigned int v25; // r0
  unsigned __int8 *v26; // r1
  int v27; // r0
  unsigned __int8 *j; // r2
  int v30; // [sp+8h] [bp-14h]
  unsigned __int8 *s2; // [sp+Ch] [bp-10h]
  unsigned int v32; // [sp+14h] [bp-8h]

  v2 = *a2;
  v3 = v2 >> 1;
  v4 = v2 & 1;
  if ( v4 )
    v3 = *((_DWORD *)a2 + 1);
  v5 = a2 + 1;
  if ( v4 )
    v5 = *((unsigned __int8 **)a2 + 2);
  v6 = v3;
  v7 = v5;
  v8 = v3;
  if ( v3 >= 4 )
  {
    v9 = v3;
    v10 = v5;
    v6 = v3;
    do
    {
      v11 = 1540483477 * ((((v10[3] << 8) + v10[2]) << 16) + (v10[1] << 8) + *v10);
      v6 = (1540483477 * v6) ^ (1540483477 * (HIBYTE(v11) ^ v11));
      v9 -= 4;
      v10 += 4;
    }
    while ( v9 > 3 );
    v12 = (v3 - 4) & 0xFFFFFFFC;
    v8 = v3 - 4 - v12;
    v7 = &v5[v12 + 4];
  }
  switch ( v8 )
  {
    case 1u:
      goto LABEL_15;
    case 2u:
      v13 = v6;
      goto LABEL_14;
    case 3u:
      v13 = (v7[2] << 16) ^ v6;
LABEL_14:
      v6 = (v7[1] << 8) ^ v13;
LABEL_15:
      v14 = a1;
      v15 = 1540483477 * (*v7 ^ v6);
      goto LABEL_17;
  }
  v15 = v6;
  v14 = a1;
LABEL_17:
  v16 = ((1540483477 * ((v15 >> 13) ^ v15)) >> 15) ^ (1540483477 * ((v15 >> 13) ^ v15));
  v17 = v14[1];
  if ( !v17 )
    return nullptr;
  v30 = (v17 - 1) & v17;
  if ( v30 )
  {
    v18 = ((1540483477 * ((v15 >> 13) ^ v15)) >> 15) ^ (1540483477 * ((v15 >> 13) ^ v15));
    if ( v16 >= v17 )
    {
      v18 = v16 % v17;
      v14 = a1;
    }
  }
  else
  {
    v18 = v16 & (v17 - 1);
  }
  v32 = v18;
  v20 = *(int ***)(*v14 + 4 * v18);
  if ( v20 )
  {
    s2 = v5;
    for ( i = *v20; i; i = (int *)*i )
    {
      v21 = i[1];
      if ( v21 == v16 )
      {
        v22 = *((unsigned __int8 *)i + 8);
        v23 = v22 >> 1;
        v24 = v22 & 1;
        v25 = v23;
        if ( v24 )
          v25 = i[3];
        if ( v25 == v3 )
        {
          v26 = (unsigned __int8 *)i + 9;
          if ( v24 )
          {
            if ( !v3 || !memcmp((const void *)i[4], s2, v3) )
              return i;
          }
          else
          {
            if ( !v3 )
              return i;
            v27 = -v23;
            for ( j = s2; *v26 == *j; ++j )
            {
              ++v27;
              ++v26;
              if ( !v27 )
                return i;
            }
          }
        }
      }
      else
      {
        if ( v30 )
        {
          if ( v21 >= v17 )
            v21 %= v17;
        }
        else
        {
          v21 &= v17 - 1;
        }
        if ( v21 != v32 )
          return nullptr;
      }
    }
  }
  return nullptr;
}
