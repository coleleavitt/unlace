/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_213D4
// Address: 0x000213D4

//----- (000213D4) --------------------------------------------------------
_DWORD *__fastcall sub_213D4(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v6; // r0
  size_t v7; // r6
  void *v9; // r0
  size_t v10; // r5
  void *v11; // r0

  *a1 = a2;
  a1[1] = a3;
  a1[2] = 0;
  v6 = a1 + 3;
  *v6 = 0;
  v6[1] = 0;
  v7 = *(_DWORD *)(a4 + 4);
  if ( v7 )
  {
    v9 = qalloc_or_throw(v7);
    a1[2] = v9;
    a1[4] = v7;
    qmemcpy(v9, *(const void **)a4, v7);
    a1[3] = v7;
  }
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  v10 = *(_DWORD *)(a5 + 4);
  if ( v10 )
  {
    v11 = qalloc_or_throw(*(_DWORD *)(a5 + 4));
    a1[7] = v10;
    a1[5] = v11;
    qmemcpy(v11, *(const void **)a5, v10);
    a1[6] = v10;
  }
  a1[16] = 0;
  a1[17] = 0;
  a1[8] = a1 + 9;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0;
  a1[15] = 0;
  return a1;
}
