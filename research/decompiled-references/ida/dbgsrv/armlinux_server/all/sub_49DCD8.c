/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49DCD8
// Address: 0x000000000049DCD8

//----- (000000000049DCD8) ----------------------------------------------------
void __fastcall __noreturn sub_49DCD8(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // x0
  struct _Unwind_Exception *v7; // x0
  struct _Unwind_Exception *v8; // x19

  v6 = sub_49F2B0();
  ++*(_DWORD *)(v6 + 8);
  v7 = (struct _Unwind_Exception *)sub_49DC80(a1, a2, a3);
  v7->exception_class = 1;
  v8 = v7 + 3;
  _Unwind_RaiseException(v7 + 3);
  sub_49EF68(v8);
  sub_49DBB0();
}
