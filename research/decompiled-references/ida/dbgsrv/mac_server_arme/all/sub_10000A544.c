/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000A544
// Address: 0x000000010000A544

//----- (000000010000A544) ----------------------------------------------------
void __noreturn sub_10000A544()
{
  std::bad_array_new_length *exception; // x0
  std::bad_array_new_length *v1; // x0

  exception = (std::bad_array_new_length *)__cxa_allocate_exception(8u);
  v1 = std::bad_array_new_length::bad_array_new_length(exception);
  __cxa_throw(
    v1,
    (struct type_info *)&`typeinfo for'std::bad_array_new_length,
    (void (__fastcall *)(void *))&std::bad_array_new_length::~bad_array_new_length);
}
// 10009CB58: using guessed type _UNKNOWN *`typeinfo for'std::bad_array_new_length;
