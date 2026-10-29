/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::range_error::~range_error
// Address: 0x00000000000D2660

//----- (00000000000D2660) ----------------------------------------------------
void __fastcall std::range_error::~range_error(std::range_error *this)
{
  __int64 v2; // rdi

  *(_QWORD *)this = off_1515E0;
  v2 = *((_QWORD *)this + 1);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v2 - 8)) < 0 )
    operator delete((void *)(v2 - 24));
  std::exception::~exception(this);
  operator delete(this);
}
// 1515E0: using guessed type void (__fastcall *off_1515E0[2])(std::overflow_error *__hidden this);
