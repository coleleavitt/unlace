/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DE7C
// Address: 0x0004DE7C

//----- (0004DE7C) --------------------------------------------------------
int __fastcall sub_4DE7C(int a1, int a2, int a3, int *a4)
{
  _DWORD *v7; // r5
  int v8; // r0
  size_t v9; // r6
  void *v10; // r0
  const void **v12; // [sp+4h] [bp-4h]

  v7 = operator new(0x38u);
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = a2 + 4;
  *(_BYTE *)(a1 + 8) = 0;
  v8 = *a4;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v9 = *(_DWORD *)(v8 + 4);
  if ( v9 )
  {
    v12 = (const void **)v8;
    v10 = qalloc_or_throw(v9);
    v7[6] = v9;
    v7[4] = v10;
    qmemcpy(v10, *v12, v9);
    v7[5] = v9;
  }
  *((_BYTE *)v7 + 32) = 2;
  memset(v7 + 11, 0, 0xCu);
  v7[10] = 0;
  *(_BYTE *)(a1 + 8) = 1;
  return 1;
}
