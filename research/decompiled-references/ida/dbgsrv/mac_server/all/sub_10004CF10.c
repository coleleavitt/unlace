/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004CF10
// Address: 0x000000010004CF10

//----- (000000010004CF10) ----------------------------------------------------
void __fastcall __noreturn sub_10004CF10(const char *a1)
{
  std::logic_error *exception; // rbx

  exception = (std::logic_error *)__cxa_allocate_exception(0x10u);
  sub_10004CF60(exception, a1);
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::length_error,
    (void (__fastcall *)(void *))&std::length_error::~length_error);
}
