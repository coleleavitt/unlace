/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BAA0
// Address: 0x0001BAA0

//----- (0001BAA0) --------------------------------------------------------
void __cdecl sub_1BAA0(int a1)
{
  void *v1; // eax
  void *v2; // eax

  v1 = *(void **)(a1 + 12);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    qfree(v1);
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  v2 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v2);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
