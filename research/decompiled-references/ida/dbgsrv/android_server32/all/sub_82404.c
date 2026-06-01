/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82404
// Address: 0x00082404

//----- (00082404) --------------------------------------------------------
int __fastcall sub_82404(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r0
  int v5; // r5
  const void *v6; // r3
  size_t v7; // r2
  size_t v8; // r6
  unsigned int v9; // r7
  _BYTE *v10; // r0
  size_t v12; // [sp+4h] [bp-8h]
  const void *v13; // [sp+8h] [bp-4h]

  v3 = *(_DWORD *)(a1 + 4 * a2 + 16);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = v4 - 1;
  if ( !v4 )
    v5 = 0;
  v6 = *(const void **)a3;
  v7 = *(_DWORD *)(a3 + 4);
  v8 = v5 + v7;
  v9 = v5 + v7 + 1;
  if ( *(_DWORD *)(v3 + 8) >= v9 )
  {
    v10 = *(_BYTE **)v3;
  }
  else
  {
    v13 = v6;
    v12 = v7;
    v10 = qvector_reserve(v3, *(void **)v3, v5 + v7 + 1, 1u);
    v7 = v12;
    v6 = v13;
    *(_DWORD *)v3 = v10;
  }
  *(_DWORD *)(v3 + 4) = v9;
  v10[v8] = 0;
  memmove((void *)(*(_DWORD *)v3 + v5), v6, v7);
  return 1;
}
