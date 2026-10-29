/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DCD0
// Address: 0x0003DCD0

//----- (0003DCD0) --------------------------------------------------------
void __fastcall sub_3DCD0(char **a1, unsigned int a2, unsigned int a3)
{
  int v4; // r3
  unsigned int v5; // r1
  int v6; // r6
  unsigned int v7; // r5
  char *v8; // r4
  int v9; // r1
  void *v10; // r0
  _DWORD *v11; // r7
  unsigned int v12; // r5
  unsigned int v13; // r0
  size_t v14; // r6
  void *v15; // r5
  const void **v16; // r7
  int v17; // r5
  unsigned int v18; // r2
  signed int v19; // r0
  unsigned int v20; // r4
  int v21; // r7
  char *v22; // r6
  _DWORD *v23; // r2
  size_t *v24; // r5
  size_t v25; // r7
  void *v26; // r0
  unsigned int v27; // r5
  char *v28; // r0
  int v29; // r7
  char *v30; // r4
  char *v31; // r6
  size_t *v32; // r5
  char *v33; // r0
  size_t v34; // r4
  void *v35; // r0
  unsigned int v36; // [sp+8h] [bp-18h]
  void *v37; // [sp+Ch] [bp-14h]
  const void **v38; // [sp+Ch] [bp-14h]
  char *ptr; // [sp+10h] [bp-10h]
  char *ptra; // [sp+10h] [bp-10h]
  unsigned int v42; // [sp+18h] [bp-8h]
  _DWORD *v43; // [sp+18h] [bp-8h]
  int v44; // [sp+1Ch] [bp-4h]
  unsigned int v45; // [sp+1Ch] [bp-4h]

  v4 = (int)a1;
  v5 = (unsigned int)a1[1];
  if ( v5 > a2 )
  {
    v6 = 12 * a2 + 8;
    v36 = a2;
    v7 = a2;
    v42 = (unsigned int)a1[1];
    do
    {
      v8 = *(char **)v4;
      v9 = *(_DWORD *)v4 + v6;
      v10 = *(void **)(v9 - 8);
      v11 = (_DWORD *)(v9 - 8);
      if ( v10 )
      {
        *(_DWORD *)(v9 - 4) = 0;
        qfree(v10);
        *v11 = 0;
        *(_DWORD *)&v8[v6] = 0;
        v4 = (int)a1;
      }
      v6 += 12;
      ++v7;
    }
    while ( v7 < v42 );
LABEL_6:
    *(_DWORD *)(v4 + 4) = v36;
    return;
  }
  if ( v5 < a2 )
  {
    v12 = (unsigned int)a1[1];
    v13 = (unsigned int)a1[2];
    ptr = *(char **)v4;
    v36 = a2;
    if ( *(_DWORD *)v4 > a3 || *(_DWORD *)v4 + 12 * v13 <= a3 )
    {
      if ( v13 < a2 )
      {
        v27 = a3;
        v28 = (char *)qvector_reserve((int)a1, ptr, a2, 0xCu);
        a3 = v27;
        v4 = (int)a1;
        ptr = v28;
        *a1 = v28;
        v12 = (unsigned int)a1[1];
      }
      if ( v12 < a2 )
      {
        v45 = a2 - 1 - v12;
        v29 = 12 * v12 + 8;
        v30 = ptr;
        v38 = (const void **)a3;
        while ( 1 )
        {
          v31 = &v30[v29 - 8];
          *(_DWORD *)v31 = 0;
          v32 = (size_t *)&v30[v29 - 4];
          *v32 = 0;
          *(_DWORD *)&v30[v29] = 0;
          v33 = v30;
          v34 = *(_DWORD *)(a3 + 4);
          if ( v34 )
          {
            ptra = v33;
            v35 = qalloc_or_throw(v34);
            *(_DWORD *)v31 = v35;
            *(_DWORD *)&ptra[v29] = v34;
            qmemcpy(v35, *v38, v34);
            a3 = (unsigned int)v38;
            v4 = (int)a1;
            *v32 = v34;
          }
          if ( !v45 )
            break;
          v29 += 12;
          --v45;
          v30 = *(char **)v4;
        }
      }
      goto LABEL_6;
    }
    v14 = *(_DWORD *)(a3 + 4);
    v15 = nullptr;
    if ( v14 )
    {
      v16 = (const void **)a3;
      v15 = qalloc_or_throw(*(_DWORD *)(a3 + 4));
      qmemcpy(v15, *v16, v14);
      v4 = (int)a1;
      v13 = (unsigned int)a1[2];
    }
    v37 = v15;
    if ( v13 < a2 )
    {
      v17 = v4;
      *(_DWORD *)v4 = qvector_reserve(v4, *(void **)v4, a2, 0xCu);
      v4 = v17;
    }
    v18 = *(_DWORD *)(v4 + 4);
    if ( v18 < a2 )
    {
      v19 = v14;
      v20 = a2 - v18;
      v21 = 12 * v18 + 8;
      do
      {
        v22 = *(char **)v4;
        v23 = (_DWORD *)(*(_DWORD *)v4 + v21 - 8);
        *v23 = 0;
        v24 = v23 + 1;
        v23[1] = 0;
        *(_DWORD *)&v22[v21] = 0;
        if ( v19 )
        {
          v43 = v23;
          v44 = v21;
          v25 = v19;
          v26 = qalloc_or_throw(v19);
          *v43 = v26;
          *(_DWORD *)&v22[v44] = v25;
          qmemcpy(v26, v37, v25);
          *v24 = v25;
          v4 = (int)a1;
          v19 = v25;
          v21 = v44;
        }
        v21 += 12;
        --v20;
      }
      while ( v20 );
    }
    *(_DWORD *)(v4 + 4) = v36;
    if ( v37 )
      qfree(v37);
  }
}
