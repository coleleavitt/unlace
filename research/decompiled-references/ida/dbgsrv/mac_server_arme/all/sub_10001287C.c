/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001287C
// Address: 0x000000010001287C

//----- (000000010001287C) ----------------------------------------------------
void __fastcall __noreturn sub_10001287C(_Unwind_Exception *a1)
{
  __int64 v1; // x19
  void *v3; // x0

  v3 = (void *)sub_1000123E8(v1);
  operator delete(v3);
  _Unwind_Resume(a1);
}
// 10001288C: variable 'v1' is possibly undefined
