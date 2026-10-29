/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36530
// Address: 0x00036530

//----- (00036530) --------------------------------------------------------
int __fastcall sub_36530(int a1)
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
