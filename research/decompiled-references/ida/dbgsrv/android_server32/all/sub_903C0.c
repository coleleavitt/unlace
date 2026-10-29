/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_903C0
// Address: 0x000903C0

//----- (000903C0) --------------------------------------------------------
void __fastcall sub_903C0(int a1, int a2)
{
  int *v2; // r4

  if ( a1 != 1 )
    sub_906A4(*(void (**)(void))(a2 - 24));
  v2 = (int *)(a2 - 40);
  _cxa_decrement_exception_refcount(*(_DWORD **)(a2 - 40));
  _cxa_free_dependent_exception_0(v2);
}
