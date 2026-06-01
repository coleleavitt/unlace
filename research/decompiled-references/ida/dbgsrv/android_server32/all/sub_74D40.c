/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74D40
// Address: 0x00074D40

//----- (00074D40) --------------------------------------------------------
void __fastcall sub_74D40(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r5
  int v4; // r3
  unsigned int v5; // r0
  int v6; // r4
  char *v7; // r6
  int v8; // r1
  void *v9; // r0
  _DWORD *v10; // r7
  unsigned int v12; // r0
  int v13; // r2
  size_t v14; // r4
  int v15; // r4
  unsigned int v16; // r0
  unsigned int v17; // r7
  int v18; // r1
  int v19; // r6
  signed int v20; // r0
  char *v21; // r4
  size_t v22; // r6
  void *v23; // r0
  int v24; // [sp+4h] [bp-1Ch]
  void *v25; // [sp+8h] [bp-18h]
  int v27; // [sp+10h] [bp-10h]
  int v28; // [sp+14h] [bp-Ch]
  unsigned int v29; // [sp+1Ch] [bp-4h]
  int v30; // [sp+1Ch] [bp-4h]

  v3 = a2;
  v4 = a1;
  v5 = *(_DWORD *)(a1 + 4);
  v29 = v5;
  v28 = v4;
  if ( v5 > a2 )
  {
    v6 = 12 * a2 + 8;
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
        v4 = v28;
      }
      v6 += 12;
      ++v3;
    }
    while ( v3 < v29 );
    *(_DWORD *)(v4 + 4) = a2;
    return;
  }
  if ( v5 >= a2 )
    return;
  if ( *(_DWORD *)v4 > a3 || (v12 = *(_DWORD *)(v4 + 8), *(_DWORD *)v4 + 12 * v12 <= a3) )
  {
    sub_74E8E(v4, a2, (const void **)a3);
    return;
  }
  v13 = *(_DWORD *)(a3 + 4);
  v24 = *(_DWORD *)(a3 + 4);
  if ( v13 )
  {
    v14 = 4 * v13;
    v25 = qalloc_or_throw(4 * v13);
    qmemcpy(v25, *(const void **)a3, v14);
    v4 = v28;
    if ( *(_DWORD *)(v28 + 8) >= v3 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v25 = nullptr;
  if ( v12 < a2 )
  {
LABEL_16:
    v15 = v4;
    *(_DWORD *)v4 = qvector_reserve(v4, *(void **)v4, v3, 0xCu);
    v4 = v15;
  }
LABEL_17:
  v16 = *(_DWORD *)(v4 + 4);
  if ( v16 < v3 )
  {
    v17 = v3 - v16;
    v18 = v24;
    v19 = 12 * v16 + 8;
    v20 = 4 * v24;
    do
    {
      v21 = *(char **)v4;
      v27 = *(_DWORD *)v4 + v19;
      *(_DWORD *)(v27 - 8) = 0;
      *(_DWORD *)(v27 - 4) = 0;
      *(_DWORD *)&v21[v19] = 0;
      if ( v18 )
      {
        v30 = v19;
        v22 = v20;
        v23 = qalloc_or_throw(v20);
        *(_DWORD *)(v27 - 8) = v23;
        *(_DWORD *)&v21[v30] = v24;
        qmemcpy(v23, v25, v22);
        v18 = v24;
        *(_DWORD *)(v27 - 4) = v24;
        v4 = v28;
        v20 = v22;
        v19 = v30;
      }
      v19 += 12;
      --v17;
    }
    while ( v17 );
  }
  *(_DWORD *)(v4 + 4) = v3;
  if ( v25 )
    qfree(v25);
}
