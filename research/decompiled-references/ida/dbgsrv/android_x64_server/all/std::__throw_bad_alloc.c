/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__throw_bad_alloc
// Address: 0x00000000000CECA0

//----- (00000000000CECA0) ----------------------------------------------------
void __fastcall __noreturn std::__throw_bad_alloc()
{
  std::bad_alloc *exception; // rbx

  exception = (std::bad_alloc *)_cxa_allocate_exception(8u);
  std::bad_alloc::bad_alloc(exception);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_alloc, std::exception::~exception);
}
// 151550: using guessed type void (__fastcall *`typeinfo for'std::bad_alloc)(std::type_info *__hidden this);
