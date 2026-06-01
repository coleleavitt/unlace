/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B610
// Address: 0x0001B610

//----- (0001B610) --------------------------------------------------------
void __cdecl sub_1B610(int a1)
{
  void *v1; // eax
  void *v2; // eax

  sub_1BB80((char **)(a1 + 36));
  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    qfree(v1);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
  sub_1BC40((char **)(a1 + 12));
  v2 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v2);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
