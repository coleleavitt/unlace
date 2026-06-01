/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2AAD0
// Address: 0x0002AAD0

//----- (0002AAD0) --------------------------------------------------------
unsigned int __cdecl sub_2AAD0(int a1, int *a2)
{
  int *v2; // ecx
  size_t v3; // esi
  void *v4; // edi
  size_t v5; // edi
  int *v6; // esi
  int v7; // ecx
  _DWORD *v8; // eax
  size_t v9; // esi
  int v10; // ecx
  void *v12; // [esp+1Ch] [ebp-30h]
  void *v13; // [esp+20h] [ebp-2Ch]
  size_t v14; // [esp+24h] [ebp-28h]
  int v15; // [esp+28h] [ebp-24h]
  int v16; // [esp+2Ch] [ebp-20h]
  int v17; // [esp+30h] [ebp-1Ch]
  __int16 v18; // [esp+34h] [ebp-18h]

  v2 = a2;
  v16 = *a2;
  v3 = a2[3];
  v13 = nullptr;
  v15 = a2[1];
  v4 = nullptr;
  if ( v3 )
  {
    v4 = qalloc_or_throw(v3);
    memcpy(v4, (const void *)a2[2], v3);
    v2 = a2;
  }
  v14 = v3;
  v12 = v4;
  v5 = v2[6];
  v6 = v2;
  if ( v5 )
  {
    v13 = qalloc_or_throw(v5);
    memcpy(v13, (const void *)v6[5], v5);
  }
  v18 = *((_WORD *)v6 + 18);
  v17 = v6[8];
  v7 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v7 + 1) )
  {
    v8 = *(_DWORD **)a1;
    v9 = v14;
  }
  else
  {
    v8 = qvector_reserve(a1, *(void **)a1, v7 + 1, 0x28u);
    v9 = v14;
    *(_DWORD *)a1 = v8;
    v7 = *(_DWORD *)(a1 + 4);
  }
  v10 = 5 * v7;
  v8[2 * v10 + 1] = v15;
  v8[2 * v10] = v16;
  v8[2 * v10 + 2] = v12;
  v8[2 * v10 + 3] = v9;
  v8[2 * v10 + 4] = v9;
  v8[2 * v10 + 5] = v13;
  v8[2 * v10 + 6] = v5;
  v8[2 * v10 + 7] = v5;
  LOWORD(v8[2 * v10 + 9]) = v18;
  v8[2 * v10 + 8] = v17;
  ++*(_DWORD *)(a1 + 4);
  return __readgsdword(0x14u);
}
