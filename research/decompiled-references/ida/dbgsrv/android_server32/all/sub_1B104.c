/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B104
// Address: 0x0001B104

//----- (0001B104) --------------------------------------------------------
int __fastcall sub_1B104(int a1)
{
  void *v2; // r0
  void *v3; // r0

  sub_1B348((char **)(a1 + 36));
  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 24) = 0;
  }
  sub_1B3BC((char **)(a1 + 12));
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
