/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000284D0
// Address: 0x00000001000284D0

//----- (00000001000284D0) ----------------------------------------------------
void __fastcall __noreturn sub_1000284D0(_Unwind_Exception *a1)
{
  _QWORD *v1; // x21
  _QWORD *v3; // x0

  v3 = sub_10000ADD0(v1);
  operator delete(v3);
  _Unwind_Resume(a1);
}
// 1000284D8: variable 'v1' is possibly undefined
