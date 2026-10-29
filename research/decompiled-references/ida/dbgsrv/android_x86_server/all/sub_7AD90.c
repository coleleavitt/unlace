/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7AD90
// Address: 0x0007AD90

//----- (0007AD90) --------------------------------------------------------
char __cdecl sub_7AD90(int a1, int a2, int a3, int a4, char a5, char a6, int a7, int *a8)
{
  size_t v8; // esi
  int v9; // ecx
  void *v10; // eax
  size_t v11; // edx

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = a3;
  if ( v8 )
  {
    v10 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    *(_DWORD *)a1 = v10;
    *(_DWORD *)(a1 + 8) = v8;
    memcpy(v10, *(const void **)a2, v8);
    v9 = a3;
    *(_DWORD *)(a1 + 4) = v8;
  }
  *(_DWORD *)(a1 + 12) = v9;
  memset((void *)(a1 + 20), 0, 0x1408u);
  if ( (unsigned int)a8[1] > 1 )
    qstrncpy(a1 + 1050, *a8, 4096);
  else
    *(_BYTE *)(a1 + 1050) = 0;
  v11 = 1024;
  if ( *(_DWORD *)(a7 + 4) < 0x400u )
    v11 = *(_DWORD *)(a7 + 4);
  *(_DWORD *)(a1 + 20) = a4;
  *(_WORD *)(a1 + 24) = v11;
  memmove((void *)(a1 + 26), *(const void **)a7, v11);
  *(_BYTE *)(a1 + 16) = a5;
  *(_BYTE *)(a1 + 17) = a6;
  return a6;
}
