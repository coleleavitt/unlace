/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__throw_bad_alloc
// Address: 0x0008FBE0

//----- (0008FBE0) --------------------------------------------------------
void __noreturn std::__throw_bad_alloc()
{
  _DWORD *exception; // r0
  _DWORD *v1; // r0

  exception = _cxa_allocate_exception(4u);
  v1 = std::bad_alloc::bad_alloc(exception);
  _cxa_throw(v1, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))std::exception::~exception);
}
// DBA44: using guessed type _UNKNOWN *`typeinfo for'std::bad_alloc;
