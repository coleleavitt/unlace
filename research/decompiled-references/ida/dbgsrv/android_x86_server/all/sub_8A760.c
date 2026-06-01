/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A760
// Address: 0x0008A760

//----- (0008A760) --------------------------------------------------------
char *__cdecl sub_8A760(int a1, int *a2)
{
  int *v2; // ecx
  size_t v3; // esi
  void *v4; // edi
  size_t v5; // edi
  int *v6; // esi
  int v7; // ecx
  char *result; // eax
  int v9; // ecx
  void *v10; // [esp+18h] [ebp-24h]
  void *v11; // [esp+1Ch] [ebp-20h]
  int v12; // [esp+20h] [ebp-1Ch]
  int v13; // [esp+24h] [ebp-18h]
  size_t v14; // [esp+28h] [ebp-14h]

  v2 = a2;
  v13 = *a2;
  v3 = a2[3];
  v11 = nullptr;
  v12 = a2[1];
  v4 = nullptr;
  if ( v3 )
  {
    v4 = qalloc_or_throw(v3);
    memcpy(v4, (const void *)a2[2], v3);
    v2 = a2;
  }
  v14 = v3;
  v10 = v4;
  v5 = v2[6];
  if ( v5 )
  {
    v6 = v2;
    v11 = qalloc_or_throw(v2[6]);
    memcpy(v11, (const void *)v6[5], v5);
  }
  v7 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v7 + 1) )
  {
    result = *(char **)a1;
  }
  else
  {
    result = (char *)qvector_reserve(a1, *(void **)a1, v7 + 1, 0x20u);
    *(_DWORD *)a1 = result;
    v7 = *(_DWORD *)(a1 + 4);
  }
  v9 = 32 * v7;
  *(_DWORD *)&result[v9 + 4] = v12;
  *(_DWORD *)&result[v9] = v13;
  *(_DWORD *)&result[v9 + 8] = v10;
  *(_DWORD *)&result[v9 + 12] = v14;
  *(_DWORD *)&result[v9 + 16] = v14;
  *(_DWORD *)&result[v9 + 20] = v11;
  *(_DWORD *)&result[v9 + 24] = v5;
  *(_DWORD *)&result[v9 + 28] = v5;
  ++*(_DWORD *)(a1 + 4);
  return result;
}
