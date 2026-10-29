/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: new
// Address: 0x000BC650

//----- (000BC650) --------------------------------------------------------
void *__cdecl operator new(size_t size)
{
  size_t v1; // esi
  void *result; // eax
  void (*new_handler)(void); // eax
  std::bad_alloc *exception; // esi

  v1 = 1;
  if ( size )
    v1 = size;
  while ( 1 )
  {
    result = malloc(v1);
    if ( result )
      break;
    new_handler = (void (*)(void))std::get_new_handler();
    if ( !new_handler )
    {
      exception = (std::bad_alloc *)_cxa_allocate_exception(4u);
      std::bad_alloc::bad_alloc(exception);
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))std::exception::~exception);
    }
    new_handler();
  }
  return result;
}
// 139AB8: using guessed type int (__cdecl *`typeinfo for'std::bad_alloc)(std::type_info *);
