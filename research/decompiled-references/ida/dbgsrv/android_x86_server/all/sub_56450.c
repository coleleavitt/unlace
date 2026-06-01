/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56450
// Address: 0x00056450

//----- (00056450) --------------------------------------------------------
void __cdecl sub_56450(int a1)
{
  void *v1; // eax
  void *v2; // eax

  *(_DWORD *)a1 = &off_137FA8;
  v1 = *(void **)(a1 + 76);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 80) = 0;
    qfree(v1);
    *(_DWORD *)(a1 + 76) = 0;
    *(_DWORD *)(a1 + 84) = 0;
  }
  if ( *(_DWORD *)(a1 + 44) )
  {
    sub_56560((int *)(a1 + 44), 0);
    qfree(*(void **)(a1 + 44));
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 52) = 0;
  }
  v2 = *(void **)(a1 + 32);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 36) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  sub_56390((char **)(a1 + 20));
  sub_1BC40((char **)(a1 + 8));
}
// 137FA8: using guessed type int (__cdecl *off_137FA8)(int);
