/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_566C4
// Address: 0x000566C4

//----- (000566C4) --------------------------------------------------------
size_t *__fastcall sub_566C4(size_t *a1, unsigned __int8 *a2)
{
  size_t *v3; // r4
  size_t v4; // r6
  const void *v5; // r1
  void *v6; // r0
  size_t v7; // r6
  size_t v8; // r2
  _DWORD *v9; // r4
  size_t v10; // r6
  void *v11; // r0
  const void *v13; // [sp+8h] [bp-8h]
  size_t v14; // [sp+Ch] [bp-4h]
  void *v15; // [sp+Ch] [bp-4h]

  v3 = a1;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( !(*a2 << 31) )
  {
    a1[2] = *((_DWORD *)a2 + 2);
    a1[1] = *((_DWORD *)a2 + 1);
    *a1 = *(_DWORD *)a2;
    goto LABEL_10;
  }
  v4 = *((_DWORD *)a2 + 1);
  if ( v4 >= 0xFFFFFFF0 )
    sub_55F54();
  v5 = *((const void **)a2 + 2);
  if ( v4 >= 0xB )
  {
    v14 = *((_DWORD *)a2 + 1);
    v7 = (v4 + 16) & 0xFFFFFFF0;
    v13 = v5;
    v6 = operator new(v7);
    v5 = v13;
    v8 = v7 + 1;
    v4 = v14;
    *v3 = v8;
    v3[1] = v14;
    v9 = v3 + 2;
    *v9 = v6;
    v3 = v9 - 2;
  }
  else
  {
    *(_BYTE *)a1 = 2 * v4;
    v6 = (char *)a1 + 1;
    if ( !v4 )
      goto LABEL_9;
  }
  v15 = v6;
  qmemcpy(v6, v5, v4);
  v6 = v15;
LABEL_9:
  *((_BYTE *)v6 + v4) = 0;
LABEL_10:
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v10 = *((_DWORD *)a2 + 4);
  if ( v10 )
  {
    v11 = qalloc_or_throw(*((_DWORD *)a2 + 4));
    v3[5] = v10;
    v3[3] = (size_t)v11;
    qmemcpy(v11, *((const void **)a2 + 3), v10);
    v3[4] = v10;
  }
  *((_WORD *)v3 + 12) = *((_WORD *)a2 + 12);
  return v3;
}
