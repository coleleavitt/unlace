/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__throw_bad_alloc
// Address: 0x000BC600

//----- (000BC600) --------------------------------------------------------
void __noreturn std::__throw_bad_alloc()
{
  std::bad_alloc *exception; // esi

  exception = (std::bad_alloc *)_cxa_allocate_exception(4u);
  std::bad_alloc::bad_alloc(exception);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))std::exception::~exception);
}
// 139AB8: using guessed type int (__cdecl *`typeinfo for'std::bad_alloc)(std::type_info *);
