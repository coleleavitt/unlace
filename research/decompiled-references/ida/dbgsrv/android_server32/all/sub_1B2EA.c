/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B2EA
// Address: 0x0001B2EA

//----- (0001B2EA) --------------------------------------------------------
int __fastcall sub_1B2EA(int a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *(void **)(a1 + 12);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 12) = 0;
  }
  v3 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
  }
  return a1;
}
