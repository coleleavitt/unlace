/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B2E40
// Address: 0x080B2E40

//----- (080B2E40) --------------------------------------------------------
int __cdecl sub_80B2E40(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  int v4; // ecx
  _DWORD *v5; // esi
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  int v10; // [esp-28h] [ebp-28h]
  size_t v11; // [esp-24h] [ebp-24h]
  size_t v12; // [esp-24h] [ebp-24h]
  size_t v13; // [esp-24h] [ebp-24h]

  if ( *(_DWORD *)(a1 + 8) < a2 )
    *(_DWORD *)a1 = sub_80CF920(a1, *(void **)a1, a2, 0x28u);
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 < a2 )
  {
    do
    {
      v5 = (_DWORD *)(*(_DWORD *)a1 + 40 * v3);
      *v5 = 0;
      v5[1] = 0;
      v5[2] = 0;
      if ( *(_DWORD *)(a3 + 4) )
      {
        v11 = *(_DWORD *)(a3 + 4);
        v6 = sub_80CF8B0(v11);
        *v5 = v6;
        v5[2] = v11;
        memcpy(v6, *(const void **)a3, v11);
        v5[1] = v11;
      }
      v5[3] = 0;
      v5[4] = 0;
      v5[5] = 0;
      if ( *(_DWORD *)(a3 + 16) )
      {
        v13 = *(_DWORD *)(a3 + 16);
        v8 = sub_80CF8B0(v13);
        v5[3] = v8;
        v5[5] = v13;
        memcpy(v8, *(const void **)(a3 + 12), v13);
        v5[4] = v13;
      }
      v5[6] = 0;
      v5[7] = 0;
      v5[8] = 0;
      v4 = *(_DWORD *)(a3 + 28);
      if ( v4 )
      {
        v10 = *(_DWORD *)(a3 + 28);
        v12 = 8 * v4;
        v7 = sub_80CF8B0(8 * v4);
        v5[6] = v7;
        v5[8] = v10;
        memcpy(v7, *(const void **)(a3 + 24), v12);
        v5[7] = v10;
      }
      ++v3;
      v5[9] = *(_DWORD *)(a3 + 36);
    }
    while ( a2 != v3 );
  }
  *(_DWORD *)(a1 + 4) = a2;
  return a1;
}
