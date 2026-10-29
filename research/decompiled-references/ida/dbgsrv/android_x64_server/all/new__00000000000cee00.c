/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: new
// Address: 0x00000000000CEE00

//----- (00000000000CEE00) ----------------------------------------------------
void *__fastcall operator new(size_t size, size_t alignment)
{
  size_t v2; // r14
  size_t v3; // rbx
  void (*new_handler)(void); // rax
  std::bad_alloc *exception; // rbx
  void *v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = (void *)__readfsqword(0x28u);
  v2 = 1;
  if ( size )
    v2 = size;
  v3 = 8;
  if ( alignment > 8 )
    v3 = alignment;
  while ( posix_memalign(v7, v3, v2) )
  {
    new_handler = (void (*)(void))std::get_new_handler();
    if ( !new_handler )
    {
      exception = (std::bad_alloc *)_cxa_allocate_exception(8u);
      std::bad_alloc::bad_alloc(exception);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_alloc, std::exception::~exception);
    }
    new_handler();
  }
  return v7[0];
}
// 151550: using guessed type void (__fastcall *`typeinfo for'std::bad_alloc)(std::type_info *__hidden this);
