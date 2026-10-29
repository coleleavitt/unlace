/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8069A20
// Address: 0x08069A20

//----- (08069A20) --------------------------------------------------------
void __cdecl sub_8069A20(int a1)
{
  void *v1; // eax
  void *v2; // eax

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
