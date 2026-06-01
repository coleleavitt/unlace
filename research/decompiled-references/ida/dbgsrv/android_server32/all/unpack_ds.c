/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_ds
// Address: 0x0007CB70

//----- (0007CB70) --------------------------------------------------------
_BYTE *__fastcall unpack_ds(unsigned int *a1, unsigned int a2, int a3)
{
  size_t v6; // r5
  _BYTE *v7; // r0
  unsigned int v8; // r3
  _BYTE *v9; // r6
  signed int v10; // r0
  _BOOL4 v11; // r1
  const void *v12; // r7
  _BYTE *v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  const void **v18; // [sp+0h] [bp-4h]

  v6 = unpack_dd(a1, a2);
  v18 = (const void **)a1;
  v7 = (_BYTE *)*a1;
  v8 = *a1 + v6;
  v9 = nullptr;
  if ( v8 > a2 || v8 < (unsigned int)v7 )
    return v9;
  if ( !a3 )
  {
    v10 = v6 + 1;
    if ( (int)(v6 + 1) <= 0 )
      v6 = 0;
    v11 = v10 > 0;
    goto LABEL_13;
  }
  if ( v6 && *v7 )
  {
    v10 = v6 + 1;
    v9 = nullptr;
    if ( (int)(v6 + 1) <= 0 )
      v6 = 0;
    v11 = v10 > 0;
    if ( v10 > 0 )
    {
LABEL_13:
      v12 = (const void *)v8;
      if ( !v11 )
        v10 = 1;
      v13 = qalloc(v10);
      if ( !v13 )
        sub_41D0C((int)"unpack_ds", v14, v15, v16);
      v9 = v13;
      qmemcpy(v13, *v18, v6);
      v9[v6] = 0;
      *v18 = v12;
    }
  }
  return v9;
}
// 7CBB6: conditional instruction was optimized away because r4.4!=0
// 7CBFA: variable 'v14' is possibly undefined
// 7CBFA: variable 'v15' is possibly undefined
// 7CBFA: variable 'v16' is possibly undefined
