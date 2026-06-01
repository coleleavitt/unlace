/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000AF40
// Address: 0x000000010000AF40

//----- (000000010000AF40) ----------------------------------------------------
void __noreturn sub_10000AF40()
{
  std::bad_array_new_length *exception; // rbx

  exception = (std::bad_array_new_length *)__cxa_allocate_exception(8u);
  std::bad_array_new_length::bad_array_new_length(exception);
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_array_new_length,
    (void (__fastcall *)(void *))&std::bad_array_new_length::~bad_array_new_length);
}
