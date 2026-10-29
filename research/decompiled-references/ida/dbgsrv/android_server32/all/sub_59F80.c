/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59F80
// Address: 0x00059F80

//----- (00059F80) --------------------------------------------------------
int __fastcall sub_59F80(int a1, int a2, int a3, int a4, char a5, char a6, int a7, int a8)
{
  size_t v9; // r7
  void *v11; // r0
  _BYTE *v12; // r0
  size_t v13; // r2
  int v15; // [sp+0h] [bp-Ch]

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
  {
    v15 = a3;
    v11 = qalloc_or_throw(v9);
    *(_DWORD *)a1 = v11;
    *(_DWORD *)(a1 + 8) = v9;
    qmemcpy(v11, *(const void **)a2, v9);
    a3 = v15;
    *(_DWORD *)(a1 + 4) = v9;
  }
  *(_DWORD *)(a1 + 12) = a3;
  memset((void *)(a1 + 20), 0, 0x1408u);
  v12 = (_BYTE *)(a1 + 1050);
  if ( *(_DWORD *)(a8 + 4) > 1u )
    qstrncpy((unsigned int)v12, *(unsigned __int8 **)a8, 4096);
  else
    *v12 = 0;
  v13 = *(_DWORD *)(a7 + 4);
  *(_DWORD *)(a1 + 20) = a4;
  if ( v13 >> 10 )
    v13 = 1024;
  *(_WORD *)(a1 + 24) = v13;
  memmove((void *)(a1 + 26), *(const void **)a7, v13);
  *(_BYTE *)(a1 + 17) = a6;
  *(_BYTE *)(a1 + 16) = a5;
  return a1;
}
