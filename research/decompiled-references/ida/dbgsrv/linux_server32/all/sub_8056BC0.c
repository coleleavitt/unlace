/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8056BC0
// Address: 0x08056BC0

//----- (08056BC0) --------------------------------------------------------
void __cdecl sub_8056BC0(int a1)
{
  int v1; // esi
  _DWORD *v2; // edi
  void *v3; // eax

  v1 = *(_DWORD *)(a1 + 8);
  while ( v1 )
  {
    v2 = (_DWORD *)v1;
    sub_8056920(*(_DWORD **)(v1 + 12));
    v3 = *(void **)(v1 + 16);
    v1 = *(_DWORD *)(v1 + 8);
    if ( v3 )
    {
      v2[5] = 0;
      sub_80CF780(v3);
    }
    operator delete(v2, 0x20u);
  }
}
