/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::length_error::~length_error
// Address: 0x00000000000D2440

//----- (00000000000D2440) ----------------------------------------------------
// Alternative name is '_ZNSt11logic_errorD1Ev'
// Alternative name is '_ZNSt11logic_errorD2Ev'
// Alternative name is '_ZNSt12domain_errorD1Ev'
// Alternative name is '_ZNSt12domain_errorD2Ev'
// Alternative name is '_ZNSt12length_errorD2Ev'
// Alternative name is '_ZNSt12out_of_rangeD1Ev'
// Alternative name is '_ZNSt12out_of_rangeD2Ev'
// Alternative name is '_ZNSt16invalid_argumentD1Ev'
// Alternative name is '_ZNSt16invalid_argumentD2Ev'
void __fastcall std::length_error::~length_error(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_1515B8;
  v2 = a1[1];
  if ( _InterlockedDecrement((volatile signed __int32 *)(v2 - 8)) < 0 )
    operator delete((void *)(v2 - 24));
  std::exception::~exception(a1);
}
// 1515B8: using guessed type void (__fastcall *off_1515B8[2])(std::length_error *__hidden this);
