/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FB54
// Address: 0x0006FB54

//----- (0006FB54) --------------------------------------------------------
int __fastcall sub_6FB54(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  v2 = *(void **)(a1 + 24);
  if ( v2 != (void *)-1 )
  {
    iconv_close(v2);
    *(_DWORD *)(a1 + 24) = -1;
  }
  v3 = *(void **)(a1 + 12);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    sub_77E08(v3);
  }
  v4 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77E08(v4);
  }
  return a1;
}
