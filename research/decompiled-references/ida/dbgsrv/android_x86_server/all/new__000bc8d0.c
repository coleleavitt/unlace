/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: new
// Address: 0x000BC8D0

//----- (000BC8D0) --------------------------------------------------------
int __cdecl operator new(size_t size, size_t alignment)
{
  size_t v2; // edi
  size_t v3; // esi
  int i; // eax
  void (*new_handler)(void); // eax
  std::bad_alloc *exception; // esi
  int v8[6]; // [esp+4h] [ebp-18h] BYREF

  v2 = 1;
  if ( size )
    v2 = size;
  v3 = 4;
  if ( alignment > 4 )
    v3 = alignment;
  for ( i = sub_D8A40(v8, v3, v2); i; i = sub_D8A40(v8, v3, v2) )
  {
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
  return v8[0];
}
// 139AB8: using guessed type int (__cdecl *`typeinfo for'std::bad_alloc)(std::type_info *);
