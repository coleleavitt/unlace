/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_decrement_exception_refcount
// Address: 0x00000000000CF560

//----- (00000000000CF560) ----------------------------------------------------
void __fastcall _cxa_decrement_exception_refcount(__int64 a1)
{
  void (__fastcall *v1)(__int64); // rax

  if ( a1 && !_InterlockedSub64((volatile signed __int64 *)(a1 - 128), 1u) )
  {
    v1 = *(void (__fastcall **)(__int64))(a1 - 112);
    if ( v1 )
      v1(a1);
    _cxa_free_dependent_exception_0(a1 - 128);
  }
}
