/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DABC
// Address: 0x0004DABC

//----- (0004DABC) --------------------------------------------------------
int __fastcall sub_4DABC(int a1, int a2)
{
  size_t v4; // r6
  void *v5; // r0

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
  *(_BYTE *)(a1 + 16) = 2;
  memset((void *)(a1 + 24), 0, 0x10u);
  copy_idcv((unsigned __int8 *)(a1 + 16), (unsigned __int8 *)(a2 + 16));
  return a1;
}
