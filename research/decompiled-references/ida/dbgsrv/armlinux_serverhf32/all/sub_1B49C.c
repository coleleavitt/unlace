/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B49C
// Address: 0x0001B49C

//----- (0001B49C) --------------------------------------------------------
char *__fastcall sub_1B49C(int a1, unsigned int a2, int a3)
{
  int v4; // r7
  char *v7; // r1
  unsigned int v8; // r0
  int v9; // r6
  unsigned int v10; // r4
  unsigned int v11; // r0
  char *v12; // r4
  char *v13; // r7
  size_t v14; // r2
  unsigned int v15; // r7
  unsigned int v16; // r7
  char *v17; // r0
  unsigned int v18; // r4
  char *v19; // r10
  const void *v20; // r1
  int v21; // r2
  int v22; // r2
  char *result; // r0
  int v24; // r1
  int v25; // r3

  v4 = *(_DWORD *)(a1 + 36);
  v7 = *(char **)(a1 + 20);
  v8 = *(_DWORD *)(a1 + 4);
  v9 = ((v4 - (int)v7) >> 2) + 1;
  v10 = a2 + v9;
  if ( v8 <= 2 * (a2 + v9) )
  {
    v15 = v8 + 2;
    if ( v8 < a2 )
      v16 = v15 + a2;
    else
      v16 = v15 + v8;
    if ( v16 >= 0x40000000 )
      sub_8397C();
    v17 = (char *)sub_805CC(4 * v16);
    v18 = 4 * ((v16 - v10) >> 1);
    v19 = v17;
    if ( a3 )
      v18 += 4 * a2;
    v12 = &v17[v18];
    v20 = *(const void **)(a1 + 20);
    v21 = *(_DWORD *)(a1 + 36) + 4;
    if ( (const void *)v21 != v20 )
      memmove(v12, v20, v21 - (_DWORD)v20);
    sub_80648(*(void **)a1);
    *(_DWORD *)a1 = v19;
    *(_DWORD *)(a1 + 4) = v16;
  }
  else
  {
    v11 = 4 * ((v8 - v10) >> 1);
    if ( a3 )
      v11 += 4 * a2;
    v12 = (char *)(*(_DWORD *)a1 + v11);
    v13 = (char *)(v4 + 4);
    v14 = v13 - v7;
    if ( v7 <= v12 )
    {
      if ( v7 != v13 )
        memmove(&v12[4 * v9 - v14], v7, v14);
    }
    else if ( v7 != v13 )
    {
      memmove((void *)(*(_DWORD *)a1 + v11), v7, v14);
    }
  }
  *(_DWORD *)(a1 + 20) = v12;
  v22 = *(_DWORD *)v12;
  result = &v12[4 * v9 - 4];
  v24 = *(_DWORD *)v12 + 484;
  *(_DWORD *)(a1 + 36) = result;
  *(_DWORD *)(a1 + 12) = v22;
  *(_DWORD *)(a1 + 16) = v24;
  v25 = *(_DWORD *)result;
  *(_DWORD *)(a1 + 28) = *(_DWORD *)result;
  *(_DWORD *)(a1 + 32) = v25 + 484;
  return result;
}
