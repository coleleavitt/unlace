/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30F28
// Address: 0x00030F28

//----- (00030F28) --------------------------------------------------------
int __fastcall sub_30F28(int a1, int a2)
{
  size_t v4; // r6
  void *v5; // r0
  size_t v6; // r7
  void *v7; // r0
  int *v8; // r5
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r3

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_DWORD *)(a2 + 4));
    *(_DWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v4;
    qmemcpy(v5, *(const void **)a2, v4);
    *(_DWORD *)(a1 + 4) = v4;
  }
  sub_36624((char **)(a1 + 12), (int *)(a2 + 12));
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v6 = *(_DWORD *)(a2 + 28);
  if ( v6 )
  {
    v7 = qalloc_or_throw(*(_DWORD *)(a2 + 28));
    *(_DWORD *)(a1 + 32) = v6;
    *(_DWORD *)(a1 + 24) = v7;
    qmemcpy(v7, *(const void **)(a2 + 24), v6);
    *(_DWORD *)(a1 + 28) = v6;
  }
  v8 = (int *)(a2 + 36);
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v8 += 3;
  *(_DWORD *)(a1 + 36) = v9;
  *(_DWORD *)(a1 + 40) = v10;
  *(_DWORD *)(a1 + 44) = v11;
  v12 = v8[1];
  v13 = v8[2];
  *(_DWORD *)(a1 + 48) = *v8;
  *(_DWORD *)(a1 + 52) = v12;
  *(_DWORD *)(a1 + 56) = v13;
  *(_BYTE *)(a1 + 60) = *((_BYTE *)v8 + 12);
  return a1;
}
