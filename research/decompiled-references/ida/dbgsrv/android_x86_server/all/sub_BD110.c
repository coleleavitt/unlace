/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BD110
// Address: 0x000BD110

//----- (000BD110) --------------------------------------------------------
void __cdecl sub_BD110(int a1, int a2)
{
  void (__cdecl *v2)(int); // eax

  if ( a1 != 1 )
    sub_BDC60(*(void (**)(void))(a2 - 36));
  if ( !_InterlockedDecrement((volatile signed __int32 *)(a2 - 4)) )
  {
    v2 = *(void (__cdecl **)(int))(a2 - 44);
    if ( v2 )
      v2(a2 + 32);
    sub_BED40((int *)(a2 - 48));
  }
}
