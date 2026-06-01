/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::logic_error::~logic_error
// Address: 0x00000000000D2480

//----- (00000000000D2480) ----------------------------------------------------
void __fastcall std::logic_error::~logic_error(std::logic_error *this)
{
  __int64 v2; // rdi

  *(_QWORD *)this = off_1515B8;
  v2 = *((_QWORD *)this + 1);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v2 - 8)) < 0 )
    operator delete((void *)(v2 - 24));
  std::exception::~exception(this);
  operator delete(this);
}
// 1515B8: using guessed type void (__fastcall *off_1515B8[2])(std::length_error *__hidden this);
