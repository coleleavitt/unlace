/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_267EC
// Address: 0x000267EC

//----- (000267EC) --------------------------------------------------------
int __fastcall sub_267EC(int a1, int a2)
{
  int v3; // r7
  void *v4; // r5
  void *v6; // r0
  int v7; // r2

  v3 = *(_DWORD *)(a2 + 4);
  v4 = nullptr;
  if ( v3 )
  {
    v4 = qalloc_or_throw(4 * v3);
    qmemcpy(v4, *(const void **)a2, 4 * v3);
  }
  v6 = *(void **)a1;
  v7 = v3;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v6);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
    v7 = v3;
  }
  *(_DWORD *)a1 = v4;
  *(_DWORD *)(a1 + 4) = v7;
  *(_DWORD *)(a1 + 8) = v3;
  return a1;
}
