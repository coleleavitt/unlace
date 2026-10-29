/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BF30
// Address: 0x0006BF30

//----- (0006BF30) --------------------------------------------------------
char *__cdecl sub_6BF30(int a1, int a2)
{
  int v2; // eax
  size_t v3; // esi
  int v4; // ecx
  char *result; // eax
  int v6; // ecx
  void *v7; // [esp+4h] [ebp-18h]
  __int16 v8; // [esp+Ah] [ebp-12h]

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v7 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    memcpy(v7, *(const void **)a2, v3);
    v2 = a2;
  }
  else
  {
    v7 = nullptr;
  }
  v8 = *(_WORD *)(v2 + 12);
  v4 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v4 + 1) )
  {
    result = *(char **)a1;
  }
  else
  {
    result = (char *)qvector_reserve(a1, *(void **)a1, v4 + 1, 0x10u);
    *(_DWORD *)a1 = result;
    v4 = *(_DWORD *)(a1 + 4);
  }
  v6 = 16 * v4;
  *(_DWORD *)&result[v6] = v7;
  *(_DWORD *)&result[v6 + 4] = v3;
  *(_DWORD *)&result[v6 + 8] = v3;
  *(_WORD *)&result[v6 + 12] = v8;
  ++*(_DWORD *)(a1 + 4);
  return result;
}
