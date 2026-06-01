/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CF810
// Address: 0x00000000000CF810

//----- (00000000000CF810) ----------------------------------------------------
void __fastcall sub_CF810(int a1, __int64 a2)
{
  __int64 v2; // rbx
  void (__fastcall *v3)(__int64); // rax

  if ( a1 != 1 )
    sub_CFC20(*(void (**)(void))(a2 - 64));
  v2 = *(_QWORD *)(a2 - 96);
  if ( v2 && !_InterlockedSub64((volatile signed __int64 *)(v2 - 128), 1u) )
  {
    v3 = *(void (__fastcall **)(__int64))(v2 - 112);
    if ( v3 )
      v3(v2);
    _cxa_free_dependent_exception_0(v2 - 128);
  }
  _cxa_free_dependent_exception_0(a2 - 96);
}
