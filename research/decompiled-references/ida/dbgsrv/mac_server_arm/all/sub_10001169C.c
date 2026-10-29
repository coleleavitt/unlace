/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001169C
// Address: 0x000000010001169C

//----- (000000010001169C) ----------------------------------------------------
void __fastcall __noreturn sub_10001169C(_Unwind_Exception *a1)
{
  __int64 v1; // x19
  void *v3; // x0

  v3 = (void *)sub_10001124C(v1);
  operator delete(v3);
  _Unwind_Resume(a1);
}
// 1000116AC: variable 'v1' is possibly undefined
