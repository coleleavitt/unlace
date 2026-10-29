/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CF3A0
// Address: 0x00000000000CF3A0

//----- (00000000000CF3A0) ----------------------------------------------------
void __fastcall sub_CF3A0(int a1, __int64 a2)
{
  void (__fastcall *v2)(__int64); // rax

  if ( a1 != 1 )
    sub_CFC20(*(void (**)(void))(a2 - 64));
  if ( !_InterlockedSub64((volatile signed __int64 *)(a2 - 96), 1u) )
  {
    v2 = *(void (__fastcall **)(__int64))(a2 - 80);
    if ( v2 )
      v2(a2 + 32);
    _cxa_free_dependent_exception_0(a2 - 96);
  }
}
