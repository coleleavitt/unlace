/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ACA70
// Address: 0x000ACA70

//----- (000ACA70) --------------------------------------------------------
void __cdecl sub_ACA70(int a1)
{
  void *v1; // eax

  *(_DWORD *)a1 = &off_13934C;
  if ( *(_DWORD *)(a1 + 20) )
    qfclose(*(FILE **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v1 = *(void **)(a1 + 32);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 36) = 0;
    qfree(v1);
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
}
// 13934C: using guessed type int (__cdecl *off_13934C)(int, int off, int, void *ptr, int);
