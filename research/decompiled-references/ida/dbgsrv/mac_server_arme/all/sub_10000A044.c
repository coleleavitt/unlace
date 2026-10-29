/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000A044
// Address: 0x000000010000A044

//----- (000000010000A044) ----------------------------------------------------
void __fastcall __noreturn sub_10000A044(_Unwind_Exception *a1)
{
  void *v1; // x20
  void *v2; // x22

  operator delete(v1);
  operator delete(v2);
  _Unwind_Resume(a1);
}
// 10000A04C: variable 'v1' is possibly undefined
// 10000A088: variable 'v2' is possibly undefined
