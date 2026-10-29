/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63930
// Address: 0x00063930

//----- (00063930) --------------------------------------------------------
_DWORD *__fastcall sub_63930(_DWORD *a1, int a2)
{
  size_t v4; // r6
  void *v5; // r0
  size_t v6; // r6
  void *v7; // r0

  *a1 = *(_DWORD *)a2;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_DWORD *)(a2 + 8));
    a1[1] = v5;
    a1[3] = v4;
    qmemcpy(v5, *(const void **)(a2 + 4), v4);
    a1[2] = v4;
  }
  a1[4] = *(_DWORD *)(a2 + 16);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  v6 = *(_DWORD *)(a2 + 24);
  if ( v6 )
  {
    v7 = qalloc_or_throw(*(_DWORD *)(a2 + 24));
    a1[7] = v6;
    a1[5] = v7;
    qmemcpy(v7, *(const void **)(a2 + 20), v6);
    a1[6] = v6;
  }
  qmemcpy(a1 + 8, (const void *)(a2 + 32), 0xE0u);
  return a1;
}
