/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: new
// Address: 0x00000000000D5D18

//----- (00000000000D5D18) ----------------------------------------------------
void *__fastcall operator new(size_t a1)
{
  size_t v1; // x19
  void *result; // x0
  void (*new_handler)(void); // x0
  _QWORD *exception; // x19

  if ( a1 )
    v1 = a1;
  else
    v1 = 1;
  while ( 1 )
  {
    result = malloc(v1);
    if ( result )
      break;
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
  return result;
}
// 1613D0: using guessed type __int64 *`typeinfo for'std::bad_alloc;
