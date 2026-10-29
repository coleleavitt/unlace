/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69EB4
// Address: 0x00069EB4

//----- (00069EB4) --------------------------------------------------------
int __fastcall sub_69EB4(int a1)
{
  void *v2; // r0

  v2 = *(void **)(a1 + 4);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    sub_77E08(v2);
  }
  return a1;
}
