/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C28C
// Address: 0x0003C28C

//----- (0003C28C) --------------------------------------------------------
char *__fastcall sub_3C28C(_DWORD *a1, _DWORD *a2)
{
  int v3; // r3
  char *result; // r0
  char *v5; // r4
  int v6; // r2
  size_t v7; // r6
  void *v8; // r0
  char *v9; // r0
  int v10; // r7
  int v11; // r4
  _DWORD *v12; // r5
  int v13; // [sp+0h] [bp-Ch]
  _DWORD *v14; // [sp+4h] [bp-8h]

  v3 = *a2;
  result = (char *)a2[1];
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v5 = result - 1;
  v6 = v3 + 12 * (_DWORD)(result - 1);
  v7 = *(_DWORD *)(v6 + 4);
  if ( v7 )
  {
    v14 = a2;
    v13 = v3;
    v8 = qalloc_or_throw(*(_DWORD *)(v6 + 4));
    *a1 = v8;
    a1[2] = v7;
    qmemcpy(v8, *(const void **)(v13 + 12 * (_DWORD)v5), v7);
    a2 = v14;
    a1[1] = v7;
    result = (char *)v14[1];
  }
  if ( result )
  {
    v9 = result - 1;
    a2[1] = v9;
    v10 = 12 * (_DWORD)v9;
    v11 = *a2;
    result = *(char **)(*a2 + 12 * (_DWORD)v9);
    v12 = (_DWORD *)(*a2 + v10);
    if ( result )
    {
      v12[1] = 0;
      qfree(result);
      *v12 = 0;
      *(_DWORD *)(v11 + v10 + 8) = 0;
      return (char *)(v11 + v10);
    }
  }
  return result;
}
