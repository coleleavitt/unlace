/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AEFF0
// Address: 0x080AEFF0

//----- (080AEFF0) --------------------------------------------------------
void __cdecl sub_80AEFF0(int a1)
{
  void *v1; // eax
  void *v2; // eax
  void *v3; // eax

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    sub_80CF780(v1);
  }
  v2 = *(void **)(a1 + 12);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    sub_80CF780(v2);
  }
  v3 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_80CF780(v3);
  }
}
