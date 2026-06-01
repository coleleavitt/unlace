/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: new
// Address: 0x0008FC08

//----- (0008FC08) --------------------------------------------------------
void *__fastcall operator new(size_t a1)
{
  size_t v1; // r4
  void (*new_handler)(void); // r0
  void *result; // r0
  _DWORD *exception; // r0
  _DWORD *v5; // r0

  v1 = a1;
  if ( !a1 )
    v1 = 1;
  while ( 1 )
  {
    result = malloc(v1);
    if ( result )
      break;
    new_handler = (void (*)(void))std::get_new_handler();
    if ( !new_handler )
    {
      exception = _cxa_allocate_exception(4u);
      v5 = std::bad_alloc::bad_alloc(exception);
      _cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))std::exception::~exception);
    }
    new_handler();
  }
  return result;
}
// DBA44: using guessed type _UNKNOWN *`typeinfo for'std::bad_alloc;
