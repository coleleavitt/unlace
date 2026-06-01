/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: new
// Address: 0x00000000000D5DF0

//----- (00000000000D5DF0) ----------------------------------------------------
void *__fastcall operator new(size_t a1, unsigned __int64 a2)
{
  unsigned __int64 StatusReg; // x21
  size_t v3; // x19
  size_t v4; // x20
  void (*new_handler)(void); // x0
  _QWORD *exception; // x19
  void *v8[2]; // [xsp+0h] [xbp-30h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( a1 )
    v3 = a1;
  else
    v3 = 1;
  if ( a2 <= 8 )
    v4 = 8;
  else
    v4 = a2;
  v8[1] = *(void **)(StatusReg + 40);
  while ( posix_memalign(v8, v4, v3) )
  {
    new_handler = (void (*)(void))std::get_new_handler();
    if ( !new_handler )
    {
      exception = _cxa_allocate_exception(8u);
      std::bad_alloc::bad_alloc(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))std::bad_alloc::~bad_alloc);
    }
    new_handler();
  }
  return v8[0];
}
// 1613D0: using guessed type __int64 *`typeinfo for'std::bad_alloc;
