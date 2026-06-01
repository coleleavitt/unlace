/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_309EC
// Address: 0x000309EC

//----- (000309EC) --------------------------------------------------------
int __fastcall sub_309EC(int a1, int a2)
{
  size_t v4; // r4
  void *v5; // r5
  int v6; // r6
  char *v7; // r0
  int v8; // r4
  char *v9; // r6
  int v10; // r5
  size_t v11; // r7
  size_t *v12; // r5
  void *v13; // r0
  int v14; // r1
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  int v18; // [sp+8h] [bp-50h]
  int v19; // [sp+Ch] [bp-4Ch]
  void *v20; // [sp+10h] [bp-48h]
  size_t v21; // [sp+14h] [bp-44h]
  char *v22; // [sp+1Ch] [bp-3Ch]
  int v23; // [sp+20h] [bp-38h]
  char *v24; // [sp+24h] [bp-34h]
  size_t *v25; // [sp+28h] [bp-30h]
  int v26; // [sp+2Ch] [bp-2Ch]
  int v27; // [sp+34h] [bp-24h]
  int v28; // [sp+38h] [bp-20h]
  int v29; // [sp+3Ch] [bp-1Ch]
  int v30; // [sp+40h] [bp-18h]
  int v31; // [sp+44h] [bp-14h]
  int v32; // [sp+48h] [bp-10h]
  int v33; // [sp+4Ch] [bp-Ch]
  int v34; // [sp+50h] [bp-8h]
  int v35; // [sp+54h] [bp-4h]

  v4 = *(_DWORD *)(a2 + 4);
  v5 = nullptr;
  v22 = nullptr;
  if ( v4 )
  {
    v5 = qalloc_or_throw(v4);
    qmemcpy(v5, *(const void **)a2, v4);
  }
  v21 = v4;
  v29 = *(_DWORD *)(a2 + 12);
  v30 = *(_DWORD *)(a2 + 16);
  v31 = *(_DWORD *)(a2 + 20);
  v32 = *(_DWORD *)(a2 + 24);
  v33 = *(_DWORD *)(a2 + 28);
  v34 = *(_DWORD *)(a2 + 32);
  v23 = a2;
  v6 = *(_DWORD *)(a2 + 40);
  if ( v6 )
  {
    v19 = a1;
    v20 = v5;
    v7 = (char *)qalloc_or_throw(28 * v6);
    v8 = 12;
    v18 = v6;
    v22 = v7;
    do
    {
      v28 = v6;
      v9 = &v7[v8];
      v10 = *(_DWORD *)(v23 + 36);
      *((_DWORD *)v9 - 3) = 0;
      *((_DWORD *)v9 - 2) = 0;
      *(_DWORD *)&v7[v8 - 4] = 0;
      v27 = v10;
      v26 = v10 + v8;
      v11 = *(_DWORD *)(v10 + v8 - 8);
      v12 = (size_t *)&v7[v8 - 4];
      if ( v11 )
      {
        v24 = &v7[v8 - 12];
        v25 = (size_t *)&v7[v8 - 8];
        v13 = qalloc_or_throw(v11);
        *(_DWORD *)v24 = v13;
        *v12 = v11;
        qmemcpy(v13, *(const void **)(v26 - 12), v11);
        *v25 = v11;
        v7 = v22;
      }
      *(_DWORD *)&v7[v8] = *(_DWORD *)(v27 + v8);
      v9[12] = *(_BYTE *)(v27 + v8 + 12);
      *((_DWORD *)v9 + 2) = *(_DWORD *)(v27 + v8 + 8);
      *((_DWORD *)v9 + 1) = *(_DWORD *)(v27 + v8 + 4);
      v8 += 28;
      v6 = v28 - 1;
    }
    while ( v28 != 1 );
    v5 = v20;
    v6 = v18;
    a1 = v19;
  }
  v14 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v14 + 1) )
  {
    v15 = *(_DWORD **)a1;
  }
  else
  {
    v15 = qvector_reserve(a1, *(void **)a1, v14 + 1, 0x30u);
    *(_DWORD *)a1 = v15;
    v14 = *(_DWORD *)(a1 + 4);
  }
  v15[12 * v14] = v5;
  v16 = &v15[12 * v14];
  v16[1] = v21;
  v16[2] = v21;
  v16[3] = v29;
  v16[4] = v30;
  v16[5] = v31;
  v16[6] = v32;
  v16[7] = v33;
  v16[8] = v34;
  v16[9] = v22;
  v16[10] = v6;
  v16[11] = v6;
  ++*(_DWORD *)(a1 + 4);
  return _stack_chk_guard - v35;
}
// 30B0A: variable 'v35' is possibly undefined
