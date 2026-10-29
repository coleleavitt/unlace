/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B870
// Address: 0x0001B870

//----- (0001B870) --------------------------------------------------------
void __cdecl sub_1B870(int a1)
{
  void *v1; // eax

  v1 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v1);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
