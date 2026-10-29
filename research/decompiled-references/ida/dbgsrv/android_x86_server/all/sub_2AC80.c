/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2AC80
// Address: 0x0002AC80

//----- (0002AC80) --------------------------------------------------------
_DWORD *__cdecl sub_2AC80(int a1, int a2)
{
  size_t v2; // esi
  int v3; // ecx
  _DWORD *result; // eax
  int v5; // ecx
  void *v6; // [esp+8h] [ebp-14h]

  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 )
  {
    v6 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    memcpy(v6, *(const void **)a2, v2);
  }
  else
  {
    v6 = nullptr;
  }
  v3 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v3 + 1) )
  {
    result = *(_DWORD **)a1;
  }
  else
  {
    result = qvector_reserve(a1, *(void **)a1, v3 + 1, 0xCu);
    *(_DWORD *)a1 = result;
    v3 = *(_DWORD *)(a1 + 4);
  }
  v5 = 3 * v3;
  result[v5] = v6;
  result[v5 + 1] = v2;
  result[v5 + 2] = v2;
  ++*(_DWORD *)(a1 + 4);
  return result;
}
