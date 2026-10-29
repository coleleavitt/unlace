/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7100
// Address: 0x080C7100

//----- (080C7100) --------------------------------------------------------
void __cdecl sub_80C7100(int a1)
{
  void *v1; // eax
  void *v2; // eax

  if ( *(_DWORD *)(a1 + 24) != -1 )
  {
    iconv_close(*(iconv_t *)(a1 + 24));
    *(_DWORD *)(a1 + 24) = -1;
  }
  v1 = *(void **)(a1 + 12);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    sub_80CF780(v1);
  }
  v2 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_80CF780(v2);
  }
}
