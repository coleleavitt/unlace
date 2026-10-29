/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A3E8
// Address: 0x0008A3E8

//----- (0008A3E8) --------------------------------------------------------
int __fastcall sub_8A3E8(int a1, int a2, size_t a3)
{
  int v6; // r4
  char *v7; // r0
  int v8; // r6
  size_t v9; // r2
  int v10; // r6
  const void *v11; // r1
  int v12; // r3
  char *v13; // r0
  size_t v14; // r2
  size_t v15; // r7
  size_t v16; // r5
  unsigned int v17; // r0
  size_t v18; // r2
  unsigned int v19; // r1

  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(char **)(v6 + 56);
  if ( !v7 )
  {
    v8 = 1;
    v7 = (char *)(*(int (__fastcall **)(_DWORD, int, int))(a1 + 32))(*(_DWORD *)(a1 + 40), 1 << *(_DWORD *)(v6 + 40), 1);
    *(_DWORD *)(v6 + 56) = v7;
    if ( !v7 )
      return v8;
  }
  v9 = *(_DWORD *)(v6 + 44);
  if ( !v9 )
  {
    v9 = 1 << *(_DWORD *)(v6 + 40);
    *(_DWORD *)(v6 + 44) = v9;
    *(_DWORD *)(v6 + 48) = 0;
    *(_DWORD *)(v6 + 52) = 0;
    if ( v9 > a3 )
      goto LABEL_5;
LABEL_10:
    qmemcpy(v7, (const void *)(a2 - v9), v9);
    v8 = 0;
    *(_DWORD *)(v6 + 48) = *(_DWORD *)(v6 + 44);
    *(_DWORD *)(v6 + 52) = 0;
    return v8;
  }
  if ( v9 <= a3 )
    goto LABEL_10;
LABEL_5:
  v10 = a2;
  v11 = (const void *)(a2 - a3);
  v12 = *(_DWORD *)(v6 + 52);
  v13 = &v7[v12];
  v14 = v9 - v12;
  v15 = a3;
  if ( v14 <= a3 )
    v15 = v14;
  qmemcpy(v13, v11, v15);
  v16 = a3 - v15;
  if ( v16 )
  {
    qmemcpy(*(void **)(v6 + 56), (const void *)(v10 - v16), v16);
    *(_DWORD *)(v6 + 48) = *(_DWORD *)(v6 + 44);
    *(_DWORD *)(v6 + 52) = v16;
    return 0;
  }
  v17 = *(_DWORD *)(v6 + 44);
  v8 = 0;
  v18 = 0;
  if ( *(_DWORD *)(v6 + 52) + v15 != v17 )
    v18 = *(_DWORD *)(v6 + 52) + v15;
  *(_DWORD *)(v6 + 52) = v18;
  v19 = *(_DWORD *)(v6 + 48);
  if ( v19 < v17 )
  {
    *(_DWORD *)(v6 + 48) = v19 + v15;
    return 0;
  }
  return v8;
}
