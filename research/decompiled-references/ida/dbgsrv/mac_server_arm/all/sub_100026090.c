/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026090
// Address: 0x0000000100026090

//----- (0000000100026090) ----------------------------------------------------
void __fastcall __noreturn sub_100026090(_Unwind_Exception *a1)
{
  _QWORD *v1; // x21
  _QWORD *v3; // x0

  v3 = sub_10000A550(v1);
  operator delete(v3);
  _Unwind_Resume(a1);
}
// 100026098: variable 'v1' is possibly undefined
