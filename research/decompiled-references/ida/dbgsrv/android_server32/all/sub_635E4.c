/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_635E4
// Address: 0x000635E4

//----- (000635E4) --------------------------------------------------------
unsigned int __fastcall sub_635E4(int a1, unsigned int a2, _DWORD *a3)
{
  _DWORD *v5; // r5
  unsigned int v6; // r0
  int v7; // r4
  unsigned int v8; // r6
  int v9; // r1
  _DWORD *v10; // r5
  size_t v11; // r7
  void *v12; // r0
  _DWORD *v13; // r5
  int v14; // r2
  int v15; // r2
  int v16; // r3
  unsigned int v18; // [sp+8h] [bp-10h]
  _DWORD *v19; // [sp+Ch] [bp-Ch]
  _DWORD *v20; // [sp+10h] [bp-8h]
  _DWORD *v21; // [sp+14h] [bp-4h]

  v5 = (_DWORD *)a1;
  if ( *(_DWORD *)(a1 + 8) < a2 )
    *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x24u);
  v6 = v5[1];
  v18 = a2;
  if ( v6 < a2 )
  {
    v7 = 36 * v6;
    v8 = v18 - v6;
    v19 = a3 + 4;
    v20 = v5;
    v21 = a3;
    do
    {
      v9 = *v5;
      *(_DWORD *)(v9 + v7) = *a3;
      v10 = (_DWORD *)(v9 + v7);
      v10[1] = 0;
      v10[2] = 0;
      v10[3] = 0;
      v11 = a3[2];
      if ( v11 )
      {
        v12 = qalloc_or_throw(v11);
        v10[1] = v12;
        v10[3] = v11;
        qmemcpy(v12, (const void *)v21[1], v11);
        v10[2] = v11;
      }
      v13 = v10 + 4;
      v14 = v19[1];
      *v13 = *v19;
      v13[1] = v14;
      v13 += 2;
      v15 = v19[3];
      v16 = v19[4];
      *v13 = v19[2];
      v13[1] = v15;
      v13[2] = v16;
      v7 += 36;
      --v8;
      a3 = v21;
      v5 = v20;
    }
    while ( v8 );
  }
  v5[1] = v18;
  return v18;
}
