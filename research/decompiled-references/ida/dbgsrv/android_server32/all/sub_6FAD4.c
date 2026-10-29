/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FAD4
// Address: 0x0006FAD4

//----- (0006FAD4) --------------------------------------------------------
int __fastcall sub_6FAD4(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  v2 = *(void **)(a1 + 36);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 36) = 0;
  }
  v3 = *(void **)(a1 + 24);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 24) = 0;
  }
  v4 = *(void **)(a1 + 12);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    qfree(v4);
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 12) = 0;
  }
  v5 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v5);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
  }
  return a1;
}
