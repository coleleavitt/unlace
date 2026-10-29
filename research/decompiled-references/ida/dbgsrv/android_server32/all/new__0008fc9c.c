/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: new
// Address: 0x0008FC9C

//----- (0008FC9C) --------------------------------------------------------
int __fastcall operator new(size_t a1, unsigned int a2)
{
  size_t v2; // r5
  size_t v3; // r4
  void (*new_handler)(void); // r0
  _DWORD *exception; // r0
  _DWORD *v7; // r0
  int v8; // [sp+0h] [bp-18h] BYREF

  v2 = a1;
  v3 = a2;
  if ( a2 <= 4 )
    v3 = 4;
  if ( !a1 )
    v2 = 1;
  while ( sub_98FD0(&v8, v3, v2) )
  {
    new_handler = (void (*)(void))std::get_new_handler();
    if ( !new_handler )
    {
      exception = _cxa_allocate_exception(4u);
      v7 = std::bad_alloc::bad_alloc(exception);
      _cxa_throw(v7, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))std::exception::~exception);
    }
    new_handler();
  }
  return v8;
}
// DBA44: using guessed type _UNKNOWN *`typeinfo for'std::bad_alloc;
