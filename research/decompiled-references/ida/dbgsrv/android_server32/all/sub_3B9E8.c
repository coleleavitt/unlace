/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B9E8
// Address: 0x0003B9E8

//----- (0003B9E8) --------------------------------------------------------
int __fastcall sub_3B9E8(int a1)
{
  int v1; // r4
  int v2; // r2
  int v3; // r5
  int v4; // r0
  int v5; // r7
  int v6; // r4
  _BYTE *v7; // r0
  unsigned int v8; // r0
  size_t v9; // r5
  int v10; // r6
  int v11; // r1
  int v12; // r7
  unsigned int v13; // r2
  size_t v14; // r1
  _BYTE *v15; // r0
  int v17; // [sp+8h] [bp-4h]
  unsigned int v18; // [sp+8h] [bp-4h]

  v1 = a1;
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 192) + 4 * *(_DWORD *)(a1 + 196) - 4);
  v3 = *(_DWORD *)(v2 + 8);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = v4 - 1;
  if ( !v4 )
    v5 = 0;
  if ( *(_DWORD *)(v3 + 8) >= (unsigned int)(v5 + 2) )
  {
    v7 = *(_BYTE **)v3;
  }
  else
  {
    v17 = v1;
    v6 = v2;
    v7 = qvector_reserve(*(_DWORD *)(v2 + 8), *(void **)v3, v5 + 2, 1u);
    v2 = v6;
    v1 = v17;
    *(_DWORD *)v3 = v7;
  }
  *(_DWORD *)(v3 + 4) = v5 + 2;
  v7[v5] = 46;
  *(_BYTE *)(*(_DWORD *)v3 + v5 + 1) = 0;
  v8 = *(_DWORD *)(v1 + 28);
  v9 = v8 - 1;
  if ( v8 >= 2 )
  {
    v10 = *(_DWORD *)(v2 + 8);
    v11 = *(_DWORD *)(v10 + 4);
    v12 = v11 - 1;
    if ( !v11 )
      v12 = 0;
    v13 = v12 + v8;
    v14 = v12 + v9;
    if ( *(_DWORD *)(v10 + 8) >= v12 + v8 )
    {
      v15 = *(_BYTE **)v10;
    }
    else
    {
      v18 = v12 + v8;
      v15 = qvector_reserve(v10, *(void **)v10, v13, 1u);
      v13 = v18;
      v14 = v12 + v9;
      *(_DWORD *)v10 = v15;
    }
    *(_DWORD *)(v10 + 4) = v13;
    v15[v14] = 0;
    qmemcpy((void *)(*(_DWORD *)v10 + v12), *(const void **)(v1 + 24), v9);
  }
  return 0;
}
