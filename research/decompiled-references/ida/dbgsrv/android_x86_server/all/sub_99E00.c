/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99E00
// Address: 0x00099E00

//----- (00099E00) --------------------------------------------------------
void __cdecl sub_99E00(int a1)
{
  void *v1; // eax
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  v1 = *(void **)(a1 + 36);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    qfree(v1);
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 44) = 0;
  }
  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v3 = *(void **)(a1 + 12);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  v4 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v4);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
