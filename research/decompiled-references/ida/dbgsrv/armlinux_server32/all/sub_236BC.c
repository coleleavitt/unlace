/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_236BC
// Address: 0x000236BC

//----- (000236BC) --------------------------------------------------------
int __fastcall sub_236BC(int a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *(void **)(a1 + 12);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    sub_77F70(v2);
  }
  v3 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77F70(v3);
  }
  return a1;
}
