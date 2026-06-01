/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BFAE0
// Address: 0x080BFAE0

//----- (080BFAE0) --------------------------------------------------------
void __cdecl sub_80BFAE0(int a1)
{
  void *v1; // eax

  v1 = *(void **)(a1 + 4);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    sub_80CF780(v1);
  }
}
