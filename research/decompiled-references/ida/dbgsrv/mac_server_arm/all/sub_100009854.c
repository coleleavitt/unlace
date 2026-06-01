/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009854
// Address: 0x0000000100009854

//----- (0000000100009854) ----------------------------------------------------
void __fastcall __noreturn sub_100009854(_Unwind_Exception *a1)
{
  void *v1; // x20
  void *v2; // x22

  operator delete(v1);
  operator delete(v2);
  _Unwind_Resume(a1);
}
// 10000985C: variable 'v1' is possibly undefined
// 100009898: variable 'v2' is possibly undefined
