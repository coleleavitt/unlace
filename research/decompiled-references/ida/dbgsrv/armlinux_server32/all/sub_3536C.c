/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3536C
// Address: 0x0003536C

//----- (0003536C) --------------------------------------------------------
_DWORD *__fastcall sub_3536C(int a1, unsigned int *a2, __int64 a3)
{
  int v6; // r4
  int v7; // r6
  char *v8; // r1
  unsigned int v9; // r2
  char *v10; // r0
  char *v11; // r6
  int v12; // r8
  unsigned __int64 v13; // kr08_8
  _DWORD *v14; // r2
  _DWORD *result; // r0
  void *v16; // r0
  unsigned int v17; // r3
  int v18; // r8
  unsigned __int64 v19; // kr10_8
  _DWORD *v20; // r2
  int v21; // r2
  _DWORD *v22; // r1
  unsigned int v23; // r4
  void *v24; // r0
  unsigned int v25; // r3
  unsigned __int16 v26; // [sp+6h] [bp-Ah] BYREF
  unsigned __int16 *v27; // [sp+8h] [bp-8h] BYREF

  v6 = **(_DWORD **)(a1 + 8) + 24 * *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4) - 24;
  v7 = *(_DWORD *)(v6 + 12);
  v8 = *(char **)(v6 + 8);
  v9 = v7 + 1;
  if ( (unsigned int)(v7 + 1) > *(_DWORD *)(v6 + 16) )
  {
    v10 = (char *)sub_78018(v6 + 8, v8, v9, 0x10u);
    v7 = *(_DWORD *)(v6 + 12);
    v8 = v10;
    *(_DWORD *)(v6 + 8) = v10;
    v9 = v7 + 1;
  }
  v11 = &v8[16 * v7];
  *(_DWORD *)(v6 + 12) = v9;
  *(_QWORD *)v11 = a3;
  if ( (*(_WORD *)(v6 + 20) & 1) != 0 )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 8) + 36) = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 44);
    v18 = *(_DWORD *)(a1 + 8);
    v19 = *(_QWORD *)(v18 + 44);
    if ( (unsigned int)(v19 + 1) > HIDWORD(v19) )
    {
      v24 = sub_78018(v18 + 40, *(void **)(v18 + 40), v19 + 1, 0xCu);
      v25 = *(_DWORD *)(v18 + 44);
      *(_DWORD *)(v18 + 40) = v24;
      v19 = __PAIR64__((unsigned int)v24, v25);
    }
    v20 = (_DWORD *)(HIDWORD(v19) + 12 * v19);
    *v20 = 0;
    v20[1] = 0;
    v20[2] = 0;
    ++*(_DWORD *)(v18 + 44);
    sub_32788(*(_DWORD *)(a1 + 4), (int)v20, *(_DWORD *)(a1 + 12), *a2);
  }
  *((_DWORD *)v11 + 2) = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 56);
  v12 = *(_DWORD *)(a1 + 8);
  v13 = *(_QWORD *)(v12 + 56);
  if ( (unsigned int)(v13 + 1) > HIDWORD(v13) )
  {
    v16 = sub_78018(v12 + 52, *(void **)(v12 + 52), v13 + 1, 0xCu);
    v17 = *(_DWORD *)(v12 + 56);
    *(_DWORD *)(v12 + 52) = v16;
    v13 = __PAIR64__((unsigned int)v16, v17);
  }
  v14 = (_DWORD *)(HIDWORD(v13) + 12 * v13);
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  ++*(_DWORD *)(v12 + 56);
  result = (_DWORD *)sub_32788(*(_DWORD *)(a1 + 4), (int)v14, *(_DWORD *)(a1 + 12), *a2);
  v26 = *(_WORD *)(v6 + 22);
  if ( v26 && *(_DWORD *)(v6 + 12) == 1 )
  {
    result = *(_DWORD **)(a1 + 8);
    v21 = result[18];
    v22 = result + 17;
    if ( !v21 )
      goto LABEL_21;
    do
    {
      v23 = *(unsigned __int16 *)(v21 + 16);
      if ( v23 < v26 )
        v21 = *(_DWORD *)(v21 + 12);
      else
        v22 = (_DWORD *)v21;
      if ( v23 >= v26 )
        v21 = *(_DWORD *)(v21 + 8);
    }
    while ( v21 );
    if ( result + 17 == v22 || *((unsigned __int16 *)v22 + 8) > (unsigned int)v26 )
    {
LABEL_21:
      v27 = &v26;
      v22 = sub_3525C(result + 16, (int)v22, &v27);
      result = *(_DWORD **)(a1 + 8);
    }
    v22[5] = result[9];
    v22[6] = *((_DWORD *)v11 + 2);
  }
  return result;
}
