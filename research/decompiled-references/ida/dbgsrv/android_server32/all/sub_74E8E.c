/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74E8E
// Address: 0x00074E8E

//----- (00074E8E) --------------------------------------------------------
unsigned int __fastcall sub_74E8E(int a1, unsigned int a2, const void **a3)
{
  int *v4; // r3
  const void **v5; // r5
  void *v6; // r0
  unsigned int v7; // r0
  unsigned int v8; // r4
  int v9; // r6
  int v10; // r7
  int v11; // r5
  const void *v12; // r1
  void *v13; // r0
  unsigned int v15; // [sp+0h] [bp-14h]
  const void *v17; // [sp+8h] [bp-Ch]
  size_t v18; // [sp+Ch] [bp-8h]
  const void **v19; // [sp+10h] [bp-4h]

  v4 = (int *)a1;
  if ( *(_DWORD *)(a1 + 8) < a2 )
  {
    v5 = a3;
    v6 = qvector_reserve(a1, *(void **)a1, a2, 0xCu);
    v4 = (int *)a1;
    a3 = v5;
    *(_DWORD *)a1 = v6;
  }
  v7 = v4[1];
  v15 = a2;
  if ( v7 < a2 )
  {
    v8 = a2 - v7;
    v9 = 12 * v7;
    v19 = a3;
    do
    {
      v10 = *v4;
      *(_DWORD *)(v10 + v9) = 0;
      v11 = v10 + v9;
      *(_DWORD *)(v11 + 4) = 0;
      *(_DWORD *)(v11 + 8) = 0;
      v12 = a3[1];
      if ( v12 )
      {
        v18 = 4 * (_DWORD)v12;
        v17 = a3[1];
        v13 = qalloc_or_throw(4 * (_DWORD)v12);
        *(_DWORD *)(v10 + v9) = v13;
        *(_DWORD *)(v11 + 8) = v17;
        qmemcpy(v13, *v19, v18);
        v4 = (int *)a1;
        a3 = v19;
        *(_DWORD *)(v11 + 4) = v17;
      }
      --v8;
      v9 += 12;
    }
    while ( v8 );
  }
  v4[1] = v15;
  return v15;
}
