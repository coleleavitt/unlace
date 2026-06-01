/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_758B0
// Address: 0x000758B0

//----- (000758B0) --------------------------------------------------------
void __noreturn sub_758B0()
{
  std::logic_error *exception; // esi

  exception = (std::logic_error *)_cxa_allocate_exception(8u);
  std::logic_error::logic_error(exception, "basic_string");
  *(_DWORD *)exception = off_139B64;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::length_error,
    (void (*)(void *))std::length_error::~length_error);
}
// 139B64: using guessed type void (__cdecl *off_139B64[2])(std::length_error *__hidden this);
// 139B70: using guessed type int (__cdecl *`typeinfo for'std::length_error)(std::type_info *);
