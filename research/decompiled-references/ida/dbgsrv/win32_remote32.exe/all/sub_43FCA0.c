/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43FCA0
// Address: 0x0043FCA0

//----- (0043FCA0) --------------------------------------------------------
void __cdecl sub_43FCA0(int a1, int a2)
{
  void *v2; // eax
  void *v3; // eax

  v2 = *(void **)(a2 + 12);
  if ( v2 )
  {
    *(_DWORD *)(a2 + 16) = 0;
    sub_453A20(v2);
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 20) = 0;
  }
  v3 = *(void **)a2;
  if ( *(_DWORD *)a2 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    sub_453A20(v3);
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 8) = 0;
  }
}
