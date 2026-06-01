/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69952
// Address: 0x00069952

//----- (00069952) --------------------------------------------------------
unsigned int __fastcall sub_69952(int a1, unsigned int a2, _DWORD *a3)
{
  _DWORD *v4; // r7
  _DWORD *v5; // r5
  void *v6; // r0
  unsigned int v7; // r0
  unsigned int v8; // r4
  int v9; // r6
  int v10; // r0
  int v11; // r1
  _DWORD *v12; // r2
  int v13; // r3
  _DWORD *v14; // r5
  size_t v15; // r7
  void *v16; // r0
  unsigned int v18; // [sp+0h] [bp-Ch]
  _DWORD *v19; // [sp+4h] [bp-8h]
  _DWORD *v20; // [sp+8h] [bp-4h]

  v4 = (_DWORD *)a1;
  if ( *(_DWORD *)(a1 + 8) < a2 )
  {
    v5 = a3;
    v6 = qvector_reserve(a1, *(void **)a1, a2, 0x14u);
    a3 = v5;
    *v4 = v6;
  }
  v7 = v4[1];
  v18 = a2;
  if ( v7 < a2 )
  {
    v8 = a2 - v7;
    v9 = 20 * v7;
    v20 = a3;
    v19 = v4;
    do
    {
      v10 = *a3;
      v11 = a3[1];
      v12 = a3 + 2;
      v13 = *v4;
      *(_DWORD *)(v13 + v9) = v10;
      v14 = (_DWORD *)(v13 + v9);
      v14[1] = v11;
      v14[2] = 0;
      v14[3] = 0;
      v14[4] = 0;
      v15 = v12[1];
      a3 = v12 - 2;
      if ( v15 )
      {
        v16 = qalloc_or_throw(v15);
        v14[2] = v16;
        v14[4] = v15;
        qmemcpy(v16, (const void *)v20[2], v15);
        a3 = v20;
        v14[3] = v15;
      }
      --v8;
      v9 += 20;
      v4 = v19;
    }
    while ( v8 );
  }
  v4[1] = v18;
  return v18;
}
