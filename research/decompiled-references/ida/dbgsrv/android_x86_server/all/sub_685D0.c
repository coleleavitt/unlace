/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_685D0
// Address: 0x000685D0

//----- (000685D0) --------------------------------------------------------
int __cdecl sub_685D0(int a1, int a2)
{
  size_t v2; // edi
  void *v3; // eax

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 )
  {
    v3 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    *(_DWORD *)a1 = v3;
    *(_DWORD *)(a1 + 8) = v2;
    memcpy(v3, *(const void **)a2, v2);
    *(_DWORD *)(a1 + 4) = v2;
  }
  *(_BYTE *)(a1 + 12) = 2;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  return copy_idcv((char *)(a1 + 12), (char *)(a2 + 12));
}
