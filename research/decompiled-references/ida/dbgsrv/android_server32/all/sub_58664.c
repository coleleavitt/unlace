/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58664
// Address: 0x00058664

//----- (00058664) --------------------------------------------------------
_BYTE *__fastcall sub_58664(_DWORD *a1, int a2, int a3, int a4, char *s, int a6)
{
  _BYTE *result; // r0
  int v10; // r1
  unsigned int v11; // r4
  int v12; // r0
  unsigned int *v13; // r3
  _DWORD *v14; // r6
  _DWORD *v15; // r5
  char *v16; // r0
  char *v17; // r7
  char *v18; // r2
  int v19; // r4
  int v20; // r6
  char *v21; // r0
  char *v22; // r7
  void *v23; // r0
  void *v24; // r0
  _DWORD *v25; // r4
  _DWORD *v26; // r1
  int v27; // r6
  char *v28; // r5
  void **v29; // r7
  size_t v30; // r0
  char *v31; // r2
  size_t v32; // r4
  size_t v33; // r3
  void *v34; // r0
  unsigned int v35; // [sp+8h] [bp-24h]
  _DWORD *v36; // [sp+Ch] [bp-20h]
  unsigned int *v37; // [sp+10h] [bp-1Ch]
  int v38; // [sp+14h] [bp-18h]
  int v39; // [sp+18h] [bp-14h]
  _BYTE *v40; // [sp+1Ch] [bp-10h]
  char *v41; // [sp+24h] [bp-8h]
  char *v42; // [sp+24h] [bp-8h]
  char *v43; // [sp+28h] [bp-4h]

  result = qalloc(a6 + 1);
  if ( result )
  {
    v10 = a4;
    v40 = result;
    v11 = a1[37];
    v12 = a1[36];
    v13 = a1 + 37;
    v14 = a1 + 36;
    v15 = a1 + 35;
    v39 = v10;
    v38 = a3;
    if ( v11 >= v12 + 1 )
    {
      v17 = (char *)*v15;
      v26 = v14;
    }
    else
    {
      v37 = v13;
      v16 = (char *)qvector_reserve((int)v15, nullptr, v12 + 1, 0x28u);
      v17 = v16;
      v35 = *v37;
      *v37 = v11;
      v18 = (char *)*v15;
      v36 = v14;
      v19 = *v14 - 1;
      if ( v19 < 0 )
      {
        v25 = v15;
      }
      else
      {
        v20 = 0;
        v43 = (char *)*v15;
        v41 = v16;
        do
        {
          *(_DWORD *)&v17[v20] = *(_DWORD *)&v18[v20];
          *(_DWORD *)&v18[v20] = 0;
          v21 = &v17[v20];
          v22 = &v18[v20];
          *((_DWORD *)v21 + 1) = *(_DWORD *)&v18[v20 + 4];
          *((_DWORD *)v22 + 1) = 0;
          *((_DWORD *)v21 + 2) = *(_DWORD *)&v18[v20 + 8];
          *((_DWORD *)v22 + 2) = 0;
          *((_DWORD *)v21 + 3) = *(_DWORD *)&v18[v20 + 12];
          *((_DWORD *)v22 + 3) = 0;
          *((_DWORD *)v21 + 4) = *(_DWORD *)&v18[v20 + 16];
          *((_DWORD *)v22 + 4) = 0;
          *((_DWORD *)v21 + 5) = *(_DWORD *)&v18[v20 + 20];
          *((_DWORD *)v22 + 5) = 0;
          *((_DWORD *)v21 + 9) = *(_DWORD *)&v18[v20 + 36];
          *((_DWORD *)v21 + 8) = *(_DWORD *)&v18[v20 + 32];
          *((_DWORD *)v21 + 7) = *(_DWORD *)&v18[v20 + 28];
          *((_DWORD *)v21 + 6) = *(_DWORD *)&v18[v20 + 24];
          v23 = *(void **)&v18[v20 + 12];
          if ( v23 )
          {
            *((_DWORD *)v22 + 4) = 0;
            qfree(v23);
            *((_DWORD *)v22 + 3) = 0;
            *((_DWORD *)v22 + 5) = 0;
            v18 = v43;
          }
          v24 = *(void **)&v18[v20];
          if ( v24 )
          {
            *((_DWORD *)v22 + 1) = 0;
            qfree(v24);
            v18 = v43;
            *(_DWORD *)&v43[v20] = 0;
            *((_DWORD *)v22 + 2) = 0;
          }
          v20 += 40;
          --v19;
          v17 = v41;
        }
        while ( v19 >= 0 );
        v25 = v15;
        v18 = (char *)*v15;
      }
      qfree(v18);
      *v25 = v17;
      *v37 = v35;
      v26 = v36;
      v12 = *v36;
    }
    v27 = 40 * v12;
    *(_DWORD *)&v17[40 * v12] = 0;
    v42 = v17;
    v28 = &v17[40 * v12];
    *((_DWORD *)v28 + 1) = 0;
    *((_DWORD *)v28 + 2) = 0;
    *((_DWORD *)v28 + 3) = 0;
    *((_DWORD *)v28 + 4) = 0;
    *((_DWORD *)v28 + 5) = 0;
    ++*v26;
    *((_DWORD *)v28 + 8) = v38;
    *((_DWORD *)v28 + 9) = v39;
    v29 = (void **)(v28 + 12);
    if ( s && (v30 = strlen(s), v31 = s, v30) )
    {
      v32 = v30;
      v33 = v30 + 1;
      if ( *((_DWORD *)v28 + 5) >= v30 + 1 )
      {
        v34 = *v29;
      }
      else
      {
        v34 = qvector_reserve((int)v29, *v29, v30 + 1, 1u);
        v33 = v32 + 1;
        v31 = s;
        *v29 = v34;
      }
      *(_DWORD *)&v42[v27 + 16] = v33;
      memmove(v34, v31, v32);
      *((_BYTE *)*v29 + v32) = 0;
    }
    else
    {
      *((_DWORD *)v28 + 4) = 0;
    }
    *((_DWORD *)v28 + 6) = a6;
    *((_DWORD *)v28 + 7) = v40;
    v40[a6] = 0;
    return v40;
  }
  return result;
}
