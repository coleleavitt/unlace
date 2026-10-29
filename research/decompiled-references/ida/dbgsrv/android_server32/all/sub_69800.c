/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69800
// Address: 0x00069800

//----- (00069800) --------------------------------------------------------
void __fastcall sub_69800(int a1, unsigned int a2, int *a3)
{
  unsigned int v3; // r5
  int v4; // r3
  unsigned int v5; // r0
  int v6; // r6
  char *v7; // r4
  int v8; // r1
  void *v9; // r0
  _DWORD *v10; // r7
  unsigned int v12; // r0
  size_t v13; // r7
  void *v14; // r1
  void *v15; // r0
  const void *v16; // r1
  void *v17; // r6
  int v18; // r6
  unsigned int v19; // r0
  unsigned int v20; // r1
  int v21; // r4
  char *v22; // r6
  int v23; // r0
  _DWORD *v24; // r1
  size_t *v25; // r7
  _DWORD *v26; // r6
  void *v27; // r0
  void *v28; // [sp+4h] [bp-24h]
  size_t v29; // [sp+Ch] [bp-1Ch]
  int v30; // [sp+10h] [bp-18h]
  int v31; // [sp+14h] [bp-14h]
  int v33; // [sp+1Ch] [bp-Ch]
  char *v34; // [sp+20h] [bp-8h]
  unsigned int v35; // [sp+24h] [bp-4h]
  unsigned int v36; // [sp+24h] [bp-4h]

  v3 = a2;
  v4 = a1;
  v5 = *(_DWORD *)(a1 + 4);
  v35 = v5;
  v33 = v4;
  if ( v5 <= a2 )
  {
    if ( v5 < a2 )
    {
      if ( *(_DWORD *)v4 > (unsigned int)a3 || (v12 = *(_DWORD *)(v4 + 8), *(_DWORD *)v4 + 20 * v12 <= (unsigned int)a3) )
      {
        sub_69952(v4, a2, a3);
      }
      else
      {
        v31 = *a3;
        v30 = a3[1];
        v13 = a3[3];
        v14 = nullptr;
        if ( v13 )
        {
          v15 = qalloc_or_throw(a3[3]);
          v16 = (const void *)a3[2];
          v17 = v15;
          qmemcpy(v15, v16, v13);
          v14 = v17;
          v4 = v33;
          v12 = *(_DWORD *)(v33 + 8);
        }
        v29 = v13;
        v28 = v14;
        if ( v12 < v3 )
        {
          v18 = v4;
          *(_DWORD *)v4 = qvector_reserve(v4, *(void **)v4, v3, 0x14u);
          v4 = v18;
        }
        v19 = *(_DWORD *)(v4 + 4);
        if ( v19 < v3 )
        {
          v20 = v3 - v19;
          v21 = 20 * v19 + 16;
          do
          {
            v36 = v20;
            v22 = *(char **)v4;
            v23 = *(_DWORD *)v4 + v21;
            *(_DWORD *)(v23 - 16) = v31;
            *(_DWORD *)(v23 - 12) = v30;
            v24 = (_DWORD *)(v23 - 8);
            *v24 = 0;
            v25 = (size_t *)(v23 - 4);
            v24[1] = 0;
            v34 = v22;
            *(_DWORD *)&v22[v21] = 0;
            if ( v29 )
            {
              v26 = (_DWORD *)(v23 - 8);
              v27 = qalloc_or_throw(v29);
              *v26 = v27;
              *(_DWORD *)&v34[v21] = v29;
              qmemcpy(v27, v28, v29);
              *v25 = v29;
              v4 = v33;
            }
            v21 += 20;
            v20 = v36 - 1;
          }
          while ( v36 != 1 );
        }
        *(_DWORD *)(v4 + 4) = v3;
        if ( v28 )
          qfree(v28);
      }
    }
  }
  else
  {
    v6 = 20 * a2 + 16;
    do
    {
      v7 = *(char **)v4;
      v8 = *(_DWORD *)v4 + v6;
      v9 = *(void **)(v8 - 8);
      v10 = (_DWORD *)(v8 - 8);
      if ( v9 )
      {
        *(_DWORD *)(v8 - 4) = 0;
        qfree(v9);
        *v10 = 0;
        *(_DWORD *)&v7[v6] = 0;
        v4 = v33;
      }
      v6 += 20;
      ++v3;
    }
    while ( v3 < v35 );
    *(_DWORD *)(v4 + 4) = a2;
  }
}
