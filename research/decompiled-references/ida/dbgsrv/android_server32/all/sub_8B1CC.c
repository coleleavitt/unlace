/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B1CC
// Address: 0x0008B1CC

//----- (0008B1CC) --------------------------------------------------------
size_t __fastcall sub_8B1CC(int a1, const void *a2, size_t a3, unsigned __int16 a4)
{
  int v5; // r7
  int v6; // r5
  _WORD *v7; // r6
  int *v8; // r1
  int v9; // r7
  char v10; // r1
  int v11; // r5
  int v12; // r7
  int v13; // r3
  int v14; // r7
  int v15; // r1
  int v16; // r3
  _DWORD *v17; // r7
  int *v18; // r0
  int v19; // r1
  int v20; // r1
  int v21; // r3
  int v22; // r1
  int v23; // r3
  int v24; // r1
  int v25; // r3
  int v26; // r1
  int v27; // r3
  size_t result; // r0
  int *v30; // [sp+Ch] [bp-4h]

  v5 = *(_DWORD *)(a1 + 5820);
  v6 = *(unsigned __int16 *)(a1 + 5816) | (a4 << v5);
  *(_WORD *)(a1 + 5816) = v6;
  v7 = (_WORD *)(a1 + 5816);
  v8 = (int *)(a1 + 5820);
  v30 = (int *)(a1 + 5820);
  if ( v5 < 14 )
  {
    v14 = v5 + 3;
    LOBYTE(v13) = v6;
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 20) = v9 + 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + v9) = v6;
    v10 = *(_BYTE *)(a1 + 5817);
    v11 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 20) = v11 + 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + v11) = v10;
    v12 = *v30;
    v13 = a4 >> (16 - *v30);
    v8 = (int *)(a1 + 5820);
    *v7 = v13;
    v14 = v12 - 13;
  }
  *v8 = v14;
  if ( v14 < 9 )
  {
    if ( v14 > 0 )
    {
      v19 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v19 + 1;
      *(_BYTE *)(*(_DWORD *)(a1 + 8) + v19) = v13;
    }
    v17 = (_DWORD *)(a1 + 20);
    v18 = (int *)(a1 + 8);
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 20) = v15 + 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + v15) = v13;
    LOBYTE(v15) = *(_BYTE *)(a1 + 5817);
    v16 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 20) = v16 + 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + v16) = v15;
    v17 = (_DWORD *)(a1 + 20);
    v18 = (int *)(a1 + 8);
  }
  *v7 = 0;
  *v30 = 0;
  v20 = *v18;
  v21 = (*v17)++;
  *(_BYTE *)(v20 + v21) = a3;
  v22 = *v18;
  v23 = (*v17)++;
  *(_BYTE *)(v22 + v23) = BYTE1(a3);
  v24 = *v18;
  v25 = (*v17)++;
  *(_BYTE *)(v24 + v25) = ~(_BYTE)a3;
  v26 = *v18;
  v27 = (*v17)++;
  *(_BYTE *)(v26 + v27) = (unsigned __int16)~(_WORD)a3 >> 8;
  if ( a3 )
    qmemcpy((void *)(*v18 + *v17), a2, a3);
  result = *v17 + a3;
  *v17 = result;
  return result;
}
