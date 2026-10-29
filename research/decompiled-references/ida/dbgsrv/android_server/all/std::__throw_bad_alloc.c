/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__throw_bad_alloc
// Address: 0x00000000000D5CE4

//----- (00000000000D5CE4) ----------------------------------------------------
void __fastcall __noreturn std::__throw_bad_alloc()
{
  _QWORD *exception; // x19

  exception = _cxa_allocate_exception(8u);
  std::bad_alloc::bad_alloc(exception);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))std::bad_alloc::~bad_alloc);
}
// 1613D0: using guessed type __int64 *`typeinfo for'std::bad_alloc;
