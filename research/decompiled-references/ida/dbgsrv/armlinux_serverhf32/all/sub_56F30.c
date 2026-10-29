/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56F30
// Address: 0x00056F30

//----- (00056F30) --------------------------------------------------------
int __fastcall sub_56F30(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77E08(v2);
  }
  return a1;
}
