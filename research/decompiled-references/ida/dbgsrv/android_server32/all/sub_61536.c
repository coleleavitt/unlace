/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61536
// Address: 0x00061536

//----- (00061536) --------------------------------------------------------
int __fastcall sub_61536(int a1, int a2, int a3, int a4, int *a5)
{
  int v6; // r1
  int v7; // r0
  int v8; // r7
  unsigned int v9; // r1
  int v10; // r1
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r7

  v6 = 16 * a2;
  v7 = *(_DWORD *)(a1 + v6);
  v8 = a1 + v6;
  v9 = *(_DWORD *)(a1 + v6 + 4);
  if ( a3 == 1 )
  {
    *a5 = swap64(v7, v9);
    a5[1] = v10;
    v11 = swap64(*(_DWORD *)(v8 + 8), *(_DWORD *)(v8 + 12));
LABEL_7:
    a5[2] = v11;
    a5[3] = 0;
    goto LABEL_8;
  }
  *a5 = v7;
  a5[1] = v9;
  v12 = *(_DWORD *)(v8 + 8);
  v13 = *(_DWORD *)(v8 + 12);
  if ( a3 != 2 || a4 != 8 )
  {
    v11 = v12;
    v12 = v13;
    goto LABEL_7;
  }
  a5[2] = HIBYTE(v13);
  a5[3] = 0;
LABEL_8:
  a5[4] = v12;
  a5[5] = 0;
  a5[6] = 0;
  a5[7] = 0;
  return 0;
}
// 61552: variable 'v10' is possibly undefined
// 61588: variable 'v12' is possibly undefined
