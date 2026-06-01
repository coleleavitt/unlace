/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48684
// Address: 0x00048684

//----- (00048684) --------------------------------------------------------
int __fastcall sub_48684(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
  }
  return a1;
}
