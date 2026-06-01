/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88570
// Address: 0x00088570

//----- (00088570) --------------------------------------------------------
void *__cdecl sub_88570(_DWORD *a1, int a2)
{
  void *v2; // eax
  int v3; // eax
  void *v4; // eax
  size_t v6; // [esp+18h] [ebp-14h]
  size_t v7; // [esp+18h] [ebp-14h]

  *a1 = *(_DWORD *)a2;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  if ( *(_DWORD *)(a2 + 8) )
  {
    v6 = *(_DWORD *)(a2 + 8);
    v2 = qalloc_or_throw(v6);
    a1[1] = v2;
    a1[3] = v6;
    memcpy(v2, *(const void **)(a2 + 4), v6);
    a1[2] = v6;
  }
  a1[4] = *(_DWORD *)(a2 + 16);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  v3 = *(_DWORD *)(a2 + 24);
  if ( v3 )
  {
    v7 = *(_DWORD *)(a2 + 24);
    v4 = qalloc_or_throw(v3);
    a1[5] = v4;
    a1[7] = v7;
    memcpy(v4, *(const void **)(a2 + 20), v7);
    a1[6] = v7;
  }
  return memcpy(a1 + 8, (const void *)(a2 + 32), 0xE0u);
}
