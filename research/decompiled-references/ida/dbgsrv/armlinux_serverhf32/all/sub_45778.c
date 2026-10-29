/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45778
// Address: 0x00045778

//----- (00045778) --------------------------------------------------------
_DWORD *__fastcall sub_45778(_DWORD *a1, int a2, int *a3)
{
  _DWORD *v6; // r0
  int v7; // r10
  _DWORD *v8; // r4
  _DWORD *v9; // r9
  size_t v10; // r6
  int v11; // r6
  void *v13; // r0
  void *v14; // r0
  int v15; // [sp+4h] [bp-Ch] BYREF
  _DWORD *v16; // [sp+8h] [bp-8h]

  v6 = sub_805CC(0x38u);
  v7 = *a3;
  v6[4] = 0;
  v8 = v6;
  v6[5] = 0;
  v6[6] = 0;
  v9 = v6 + 4;
  v10 = *(_DWORD *)(v7 + 4);
  if ( v10 )
  {
    v13 = sub_77E84(*(_DWORD *)(v7 + 4));
    v8[4] = v13;
    v8[6] = v10;
    memcpy(v13, *(const void **)v7, v10);
    v8[5] = v10;
  }
  *((_BYTE *)v8 + 32) = 2;
  v8[11] = 0;
  v8[12] = 0;
  v8[13] = 0;
  v8[10] = 0;
  sub_42F38(&v15, a1, a2, (const char **)v9);
  v11 = v15;
  if ( v16 )
    return sub_42D04((int)a1, v15, v16, v8);
  sub_455C8((unsigned __int8 *)v9 + 16);
  v14 = (void *)v8[4];
  if ( v14 )
  {
    v8[5] = 0;
    sub_77E08(v14);
  }
  sub_80648(v8);
  return (_DWORD *)v11;
}
