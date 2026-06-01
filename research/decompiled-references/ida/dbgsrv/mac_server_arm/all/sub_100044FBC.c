/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044FBC
// Address: 0x0000000100044FBC

//----- (0000000100044FBC) ----------------------------------------------------
void __fastcall __noreturn sub_100044FBC(const char *a1)
{
  std::logic_error *exception; // x19

  exception = (std::logic_error *)__cxa_allocate_exception(0x10u);
  sub_10004500C(exception, a1);
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::length_error,
    (void (__fastcall *)(void *))&std::length_error::~length_error);
}
// 10009A948: using guessed type _UNKNOWN *`typeinfo for'std::length_error;
