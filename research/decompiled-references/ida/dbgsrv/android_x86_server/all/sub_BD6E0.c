/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BD6E0
// Address: 0x000BD6E0

//----- (000BD6E0) --------------------------------------------------------
void __cdecl sub_BD6E0(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  void (__cdecl *v4)(int); // eax

  v2 = a2 - 48;
  if ( a1 != 1 )
    sub_BDC60(*(void (**)(void))(v2 + 12));
  v3 = *(_DWORD *)(v2 + 44);
  if ( v3 && !_InterlockedDecrement((volatile signed __int32 *)(v3 - 36)) )
  {
    v4 = *(void (__cdecl **)(int))(v3 - 76);
    if ( v4 )
      v4(v3);
    sub_BED40((int *)(v3 - 80));
  }
  sub_BED40((int *)v2);
}
