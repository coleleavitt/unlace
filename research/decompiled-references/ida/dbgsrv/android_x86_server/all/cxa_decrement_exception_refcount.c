/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_decrement_exception_refcount
// Address: 0x000BD320

//----- (000BD320) --------------------------------------------------------
void __cdecl _cxa_decrement_exception_refcount(int a1)
{
  void (__cdecl *v1)(int); // eax

  if ( a1 && !_InterlockedDecrement((volatile signed __int32 *)(a1 - 36)) )
  {
    v1 = *(void (__cdecl **)(int))(a1 - 76);
    if ( v1 )
      v1(a1);
    sub_BED40((int *)(a1 - 80));
  }
}
