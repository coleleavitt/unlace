/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F3A0
// Address: 0x0004F3A0

//----- (0004F3A0) --------------------------------------------------------
_DWORD *__fastcall sub_4F3A0(
        _DWORD *a1,
        unsigned int *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *ptr)
{
  _DWORD *v13; // r7
  unsigned int v14; // r1
  unsigned int v15; // r0
  int v16; // r0
  unsigned __int8 *v17; // r3
  size_t v18; // r2
  int v19; // r0
  char *v20; // r1
  unsigned int v21; // r1
  unsigned __int8 *v22; // r2
  unsigned int v23; // r3
  unsigned int v24; // r1
  int v25; // r2
  unsigned int v26; // r1
  unsigned int v27; // r2
  unsigned int v28; // r5
  unsigned int v29; // r1
  int **v30; // r0
  int *i; // r7
  unsigned int v32; // r0
  unsigned int v33; // r3
  unsigned int v34; // r2
  int v35; // r3
  unsigned int v36; // r0
  unsigned __int8 *v37; // r1
  int v38; // r0
  unsigned __int8 *v39; // r2
  size_t *v40; // r4
  _DWORD *v41; // r7
  int v42; // r1
  _BOOL4 v43; // r4
  unsigned int v44; // r4
  unsigned int v45; // r1
  int v46; // r1
  size_t **v47; // r0
  size_t ***v48; // r1
  unsigned int v49; // r0
  size_t **v51; // [sp+4h] [bp-34h]
  float *v52; // [sp+8h] [bp-30h]
  int v53; // [sp+14h] [bp-24h]
  unsigned int v54; // [sp+18h] [bp-20h]
  unsigned __int8 *v55; // [sp+1Ch] [bp-1Ch]
  unsigned int *v56; // [sp+20h] [bp-18h]
  char *s2; // [sp+24h] [bp-14h]
  unsigned int v59; // [sp+30h] [bp-8h]
  size_t n; // [sp+34h] [bp-4h]
  size_t na; // [sp+34h] [bp-4h]

  v13 = a1;
  a1[3] = 0;
  a1[2] = 0;
  a1[1] = 0;
  *a1 = 0;
  a1[4] = a2[4];
  sub_563F4((unsigned int)a1, a2[1]);
  v14 = a2[2];
  if ( v14 )
  {
    v51 = (size_t **)(v13 + 2);
    v52 = (float *)(v13 + 4);
    do
    {
      v15 = *(unsigned __int8 *)(v14 + 8);
      n = v15 >> 1;
      v16 = v15 & 1;
      if ( v16 )
        n = *(_DWORD *)(v14 + 12);
      v17 = (unsigned __int8 *)(v14 + 9);
      if ( v16 )
        v17 = *(unsigned __int8 **)(v14 + 16);
      v56 = (unsigned int *)v14;
      v55 = (unsigned __int8 *)(v14 + 8);
      v18 = n;
      v19 = n;
      v20 = (char *)v17;
      s2 = (char *)v17;
      if ( n >= 4 )
      {
        v19 = n;
        v21 = n;
        v22 = v17;
        do
        {
          v23 = 1540483477 * ((((v22[3] << 8) + v22[2]) << 16) + (v22[1] << 8) + *v22);
          v19 = (1540483477 * v19) ^ (1540483477 * (HIBYTE(v23) ^ v23));
          v21 -= 4;
          v22 += 4;
        }
        while ( v21 > 3 );
        v24 = (n - 4) & 0xFFFFFFFC;
        v18 = n - 4 - v24;
        v20 = &s2[v24 + 4];
        v13 = a1;
      }
      if ( v18 != 1 )
      {
        if ( v18 == 2 )
        {
          v25 = v19;
        }
        else
        {
          if ( v18 != 3 )
          {
            v26 = v19;
            goto LABEL_19;
          }
          v25 = ((unsigned __int8)v20[2] << 16) ^ v19;
        }
        v19 = ((unsigned __int8)v20[1] << 8) ^ v25;
      }
      v26 = 1540483477 * ((unsigned __int8)*v20 ^ v19);
LABEL_19:
      v27 = ((1540483477 * ((v26 >> 13) ^ v26)) >> 15) ^ (1540483477 * ((v26 >> 13) ^ v26));
      v28 = v13[1];
      v59 = v27;
      if ( v28 )
      {
        v53 = (v28 - 1) & v28;
        if ( v53 )
        {
          v29 = ((1540483477 * ((v26 >> 13) ^ v26)) >> 15) ^ (1540483477 * ((v26 >> 13) ^ v26));
          if ( v27 >= v28 )
            v29 = v27 % v28;
        }
        else
        {
          v29 = v27 & (v28 - 1);
        }
        v54 = v29;
        v30 = *(int ***)(*v13 + 4 * v29);
        if ( v30 )
        {
          for ( i = *v30; i; v27 = v59 )
          {
            v32 = i[1];
            if ( v32 != v27 )
            {
              if ( v53 )
              {
                if ( v32 >= v28 )
                  v32 %= v28;
              }
              else
              {
                v32 &= v28 - 1;
              }
              if ( v32 != v54 )
                break;
            }
            v33 = *((unsigned __int8 *)i + 8);
            v34 = v33 >> 1;
            v35 = v33 & 1;
            v36 = v34;
            if ( v35 )
              v36 = i[3];
            if ( v36 == n )
            {
              v37 = (unsigned __int8 *)i + 9;
              if ( v35 )
              {
                if ( !n || !memcmp((const void *)i[4], s2, n) )
                  goto LABEL_66;
              }
              else
              {
                if ( !n )
                  goto LABEL_66;
                v38 = -v34;
                v39 = (unsigned __int8 *)s2;
                while ( *v37 == *v39 )
                {
                  ++v38;
                  ++v39;
                  ++v37;
                  if ( !v38 )
                    goto LABEL_66;
                }
              }
            }
            i = (int *)*i;
          }
        }
      }
      v40 = (size_t *)operator new(0x24u);
      sub_566C4(v40 + 2, v55);
      *v40 = 0;
      na = (size_t)v40;
      v40[1] = v59;
      if ( v28 && (float)(*v52 * (float)v28) >= (float)(unsigned int)(a1[3] + 1) )
      {
        v41 = a1;
        v42 = v54;
      }
      else
      {
        v43 = 1;
        if ( v28 >= 3 )
          v43 = ((v28 - 1) & v28) != 0;
        v44 = v43 | (2 * v28);
        v45 = (unsigned int)ceilf((float)(unsigned int)(a1[3] + 1) / *v52);
        if ( v44 >= v45 )
          v45 = v44;
        sub_563F4((unsigned int)a1, v45);
        v28 = a1[1];
        v41 = a1;
        if ( ((v28 - 1) & v28) != 0 )
        {
          v40 = (size_t *)na;
          if ( v59 >= v28 )
            v42 = v59 % v28;
          else
            v42 = v59;
        }
        else
        {
          v42 = (v28 - 1) & v59;
          v40 = (size_t *)na;
        }
      }
      v46 = 4 * v42;
      v47 = *(size_t ***)(*v41 + v46);
      v48 = (size_t ***)(*v41 + v46);
      if ( v47 )
      {
        *v40 = (size_t)*v47;
      }
      else
      {
        *v40 = (size_t)*v51;
        *v51 = v40;
        *v48 = v51;
        if ( !*v40 )
          goto LABEL_65;
        v49 = *(_DWORD *)(*v40 + 4);
        if ( ((v28 - 1) & v28) != 0 )
        {
          if ( v49 >= v28 )
            v49 %= v28;
        }
        else
        {
          v49 &= v28 - 1;
        }
        v47 = (size_t **)(*v41 + 4 * v49);
      }
      *v47 = v40;
LABEL_65:
      ++v41[3];
LABEL_66:
      v14 = *v56;
      v13 = a1;
    }
    while ( *v56 );
  }
  return v13;
}
// 4F5AE: variable 'v54' is possibly undefined
