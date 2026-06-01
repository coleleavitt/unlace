/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42560
// Address: 0x00042560

//----- (00042560) --------------------------------------------------------
unsigned int __cdecl sub_42560(int a1, int a2)
{
  size_t v2; // esi
  int v3; // ecx
  char *v4; // eax
  int v5; // edx
  void *v7; // [esp+4h] [ebp-28h]
  _BYTE v8[13]; // [esp+8h] [ebp-24h]

  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 )
  {
    v7 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    memcpy(v7, *(const void **)a2, v2);
  }
  else
  {
    v7 = nullptr;
  }
  *(_QWORD *)&v8[5] = *(_QWORD *)(a2 + 17);
  *(_QWORD *)v8 = *(_QWORD *)(a2 + 12);
  v3 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(char **)a1;
  }
  else
  {
    v4 = (char *)qvector_reserve(a1, *(void **)a1, v3 + 1, 0x1Cu);
    *(_DWORD *)a1 = v4;
    v3 = *(_DWORD *)(a1 + 4);
  }
  v5 = 28 * v3;
  *(_DWORD *)&v4[v5] = v7;
  *(_DWORD *)&v4[v5 + 4] = v2;
  *(_DWORD *)&v4[v5 + 8] = v2;
  *(_QWORD *)&v4[v5 + 17] = *(_QWORD *)&v8[5];
  *(_QWORD *)&v4[v5 + 12] = *(_QWORD *)v8;
  ++*(_DWORD *)(a1 + 4);
  return __readgsdword(0x14u);
}
