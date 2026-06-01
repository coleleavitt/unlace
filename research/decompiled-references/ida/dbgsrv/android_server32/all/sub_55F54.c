/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55F54
// Address: 0x00055F54

//----- (00055F54) --------------------------------------------------------
void __noreturn sub_55F54()
{
  std::logic_error *exception; // r4

  exception = (std::logic_error *)_cxa_allocate_exception(8u);
  std::logic_error::logic_error(exception, "basic_string");
  *(_DWORD *)exception = &off_DBAE4;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::length_error,
    (void (*)(void *))std::length_error::~length_error);
}
// DBAE4: using guessed type _UNKNOWN *off_DBAE4;
// DBAF0: using guessed type _UNKNOWN *`typeinfo for'std::length_error;
