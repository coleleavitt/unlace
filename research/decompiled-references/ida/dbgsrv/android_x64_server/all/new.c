/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: new
// Address: 0x00000000000CECD0

//----- (00000000000CECD0) ----------------------------------------------------
void *__fastcall operator new(size_t size)
{
  size_t v1; // rbx
  void *result; // rax
  void (*new_handler)(void); // rax
  std::bad_alloc *exception; // rbx

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
      exception = (std::bad_alloc *)_cxa_allocate_exception(8u);
      std::bad_alloc::bad_alloc(exception);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_alloc, std::exception::~exception);
    }
    new_handler();
  }
  return result;
}
// 151550: using guessed type void (__fastcall *`typeinfo for'std::bad_alloc)(std::type_info *__hidden this);
