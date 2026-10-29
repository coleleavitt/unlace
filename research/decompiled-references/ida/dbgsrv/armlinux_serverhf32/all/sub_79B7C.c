/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79B7C
// Address: 0x00079B7C

//----- (00079B7C) --------------------------------------------------------
char *__fastcall sub_79B7C(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int v8; // r3

  v6 = sub_77E84(32);
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v6[2] = 0;
  v6[3] = 0;
  *((_BYTE *)v6 + 16) = 0;
  v6[6] = sub_79AD0(nullptr, 0);
  *((_BYTE *)v6 + 28) = 0;
  *((_BYTE *)v6 + 29) = 0;
  *v6 = a1 + 12;
  v6[1] = *(_DWORD *)(a1 + 16);
  **(_DWORD **)(a1 + 16) = v6;
  v8 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 16) = v6;
  *(_DWORD *)(a1 + 20) = v8 + 1;
  v6[2] = a2;
  v6[5] = a3;
  return (char *)(v6 + 2);
}
