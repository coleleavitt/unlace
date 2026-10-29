/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8056020
// Address: 0x08056020

//----- (08056020) --------------------------------------------------------
void __cdecl sub_8056020(int a1)
{
  _DWORD *v1; // esi
  void *v2; // eax
  void *v3; // edx
  int v4; // eax
  void *v5; // eax

  v1 = *(_DWORD **)(a1 + 28);
  *(_DWORD *)a1 = dword_811C914;
  while ( v1 )
  {
    v2 = v1;
    v1 = (_DWORD *)*v1;
    operator delete(v2, 0xCu);
  }
  memset(*(void **)(a1 + 20), 0, 4 * *(_DWORD *)(a1 + 24));
  v3 = *(void **)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  if ( v3 != (void *)(a1 + 44) )
    operator delete(v3, 4 * v4);
  v5 = *(void **)(a1 + 8);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    sub_80CF780(v5);
  }
}
// 811C914: using guessed type int dword_811C914[2];
