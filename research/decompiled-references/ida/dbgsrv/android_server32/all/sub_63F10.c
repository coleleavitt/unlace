/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63F10
// Address: 0x00063F10

//----- (00063F10) --------------------------------------------------------
_DWORD *__fastcall sub_63F10(_DWORD *a1, int a2)
{
  size_t v4; // r6
  void *v5; // r0
  size_t v6; // r6
  void *v7; // r0
  int v8; // r6
  void *v9; // r0

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    *a1 = v5;
    a1[2] = v4;
    qmemcpy(v5, *(const void **)a2, v4);
    a1[1] = v4;
  }
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  v6 = *(_DWORD *)(a2 + 16);
  if ( v6 )
  {
    v7 = qalloc_or_throw(*(_DWORD *)(a2 + 16));
    a1[5] = v6;
    a1[3] = v7;
    qmemcpy(v7, *(const void **)(a2 + 12), v6);
    a1[4] = v6;
  }
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  v8 = *(_DWORD *)(a2 + 28);
  if ( v8 )
  {
    v9 = qalloc_or_throw(8 * v8);
    a1[8] = v8;
    a1[6] = v9;
    qmemcpy(v9, *(const void **)(a2 + 24), 8 * v8);
    a1[7] = v8;
  }
  a1[9] = *(_DWORD *)(a2 + 36);
  return a1;
}
