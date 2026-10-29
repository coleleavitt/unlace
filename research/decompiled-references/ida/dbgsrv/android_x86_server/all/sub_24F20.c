/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_24F20
// Address: 0x00024F20

//----- (00024F20) --------------------------------------------------------
_DWORD *__cdecl sub_24F20(_DWORD *a1, int a2, int a3, int a4, const void **a5)
{
  const void **v5; // ecx
  size_t v6; // esi
  void *v7; // eax
  size_t v8; // esi
  void *v9; // eax

  v5 = a5;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  v6 = *(_DWORD *)(a4 + 4);
  if ( v6 )
  {
    v7 = qalloc_or_throw(*(_DWORD *)(a4 + 4));
    a1[2] = v7;
    a1[4] = v6;
    memcpy(v7, *(const void **)a4, v6);
    v5 = a5;
    a1[3] = v6;
  }
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  v8 = (size_t)v5[1];
  if ( v8 )
  {
    v9 = qalloc_or_throw((int)v5[1]);
    a1[5] = v9;
    a1[7] = v8;
    memcpy(v9, *a5, v8);
    a1[6] = v8;
  }
  a1[9] = 0;
  a1[10] = 0;
  a1[8] = a1 + 9;
  a1[12] = 0;
  a1[11] = 0;
  a1[14] = 0;
  a1[13] = 0;
  a1[17] = 0;
  a1[16] = 0;
  a1[15] = 0;
  return a1 + 9;
}
