/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88FB0
// Address: 0x00088FB0

//----- (00088FB0) --------------------------------------------------------
int __cdecl sub_88FB0(_DWORD *a1, int a2)
{
  int *v2; // eax
  size_t v3; // esi
  void *v4; // eax
  size_t v5; // esi
  void *v6; // eax
  int v7; // esi
  void *v8; // eax
  int result; // eax

  v2 = (int *)a2;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    *a1 = v4;
    a1[2] = v3;
    memcpy(v4, *(const void **)a2, v3);
    v2 = (int *)a2;
    a1[1] = v3;
  }
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  v5 = v2[4];
  if ( v5 )
  {
    v6 = qalloc_or_throw(v2[4]);
    a1[3] = v6;
    a1[5] = v5;
    memcpy(v6, *(const void **)(a2 + 12), v5);
    v2 = (int *)a2;
    a1[4] = v5;
  }
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  v7 = v2[7];
  if ( v7 )
  {
    v8 = qalloc_or_throw(8 * v7);
    a1[6] = v8;
    a1[8] = v7;
    memcpy(v8, *(const void **)(a2 + 24), 8 * v7);
    v2 = (int *)a2;
    a1[7] = v7;
  }
  result = v2[9];
  a1[9] = result;
  return result;
}
