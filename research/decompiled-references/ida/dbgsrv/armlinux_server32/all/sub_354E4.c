/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_354E4
// Address: 0x000354E4

//----- (000354E4) --------------------------------------------------------
_DWORD *__fastcall sub_354E4(int *a1, int a2, __int64 a3)
{
  _DWORD *v6; // r4
  int v7; // r5
  char *v8; // r1
  unsigned int v9; // r2
  char *v10; // r0
  char *v11; // r5
  int v12; // r8
  unsigned __int64 v13; // kr08_8
  _DWORD *v14; // r2
  _DWORD *result; // r0
  void *v16; // r0
  unsigned int v17; // r3
  int v18; // r3
  int v19; // r1
  unsigned int v20; // r6
  unsigned __int16 v21; // [sp+6h] [bp-Ah] BYREF
  unsigned __int16 *v22; // [sp+8h] [bp-8h] BYREF

  v6 = (_DWORD *)(*(_DWORD *)(a1[2] + 12) + 24 * *(_DWORD *)(a1[2] + 16) - 24);
  v7 = v6[4];
  v8 = (char *)v6[3];
  v9 = v7 + 1;
  if ( (unsigned int)(v7 + 1) > v6[5] )
  {
    v10 = (char *)sub_78018((int)(v6 + 3), v8, v9, 0x10u);
    v7 = v6[4];
    v8 = v10;
    v6[3] = v10;
    v9 = v7 + 1;
  }
  v11 = &v8[16 * v7];
  v6[4] = v9;
  *(_QWORD *)v11 = a3;
  *((_DWORD *)v11 + 2) = *(_DWORD *)(a1[2] + 56);
  v12 = a1[2];
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
  result = (_DWORD *)sub_32788(a1[1], (int)v14, a1[3], *(_DWORD *)(a2 + 8));
  v21 = *(_WORD *)(a2 + 6) & 0x7FFF;
  if ( v21 )
  {
    result = (_DWORD *)a1[2];
    v18 = result[18];
    v19 = (int)(result + 17);
    if ( !v18 )
      goto LABEL_15;
    do
    {
      v20 = *(unsigned __int16 *)(v18 + 16);
      if ( v20 < v21 )
        v18 = *(_DWORD *)(v18 + 12);
      else
        v19 = v18;
      if ( v20 >= v21 )
        v18 = *(_DWORD *)(v18 + 8);
    }
    while ( v18 );
    if ( result + 17 == (_DWORD *)v19 || *(unsigned __int16 *)(v19 + 16) > (unsigned int)v21 )
    {
LABEL_15:
      v22 = &v21;
      result = sub_3525C(result + 16, v19, &v22);
      v19 = (int)result;
    }
    *(_DWORD *)(v19 + 20) = v6[2];
    *(_DWORD *)(v19 + 24) = *((_DWORD *)v11 + 2);
  }
  return result;
}
