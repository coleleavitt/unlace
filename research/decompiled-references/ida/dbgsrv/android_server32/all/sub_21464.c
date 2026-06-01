/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_21464
// Address: 0x00021464

//----- (00021464) --------------------------------------------------------
int __fastcall sub_21464(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 60) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 56) = 0;
  }
  v3 = *(void **)(a1 + 44);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 48) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 44) = 0;
  }
  sub_25E80(a1 + 32, *(_DWORD **)(a1 + 36));
  v4 = *(void **)(a1 + 20);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    qfree(v4);
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  v5 = *(void **)(a1 + 8);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    qfree(v5);
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return a1;
}
