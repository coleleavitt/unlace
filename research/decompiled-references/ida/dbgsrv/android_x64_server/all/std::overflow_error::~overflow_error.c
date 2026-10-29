/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::overflow_error::~overflow_error
// Address: 0x00000000000D24D0

//----- (00000000000D24D0) ----------------------------------------------------
// Alternative name is '_ZNSt11range_errorD1Ev'
// Alternative name is '_ZNSt11range_errorD2Ev'
// Alternative name is '_ZNSt13runtime_errorD1Ev'
// Alternative name is '_ZNSt13runtime_errorD2Ev'
// Alternative name is '_ZNSt14overflow_errorD2Ev'
// Alternative name is '_ZNSt15underflow_errorD1Ev'
// Alternative name is '_ZNSt15underflow_errorD2Ev'
void __fastcall std::overflow_error::~overflow_error(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_1515E0;
  v2 = a1[1];
  if ( _InterlockedDecrement((volatile signed __int32 *)(v2 - 8)) < 0 )
    operator delete((void *)(v2 - 24));
  std::exception::~exception(a1);
}
// 1515E0: using guessed type void (__fastcall *off_1515E0[2])(std::overflow_error *__hidden this);
