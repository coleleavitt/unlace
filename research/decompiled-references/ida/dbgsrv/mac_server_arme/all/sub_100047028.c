/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047028
// Address: 0x0000000100047028

//----- (0000000100047028) ----------------------------------------------------
void __fastcall __noreturn sub_100047028(const char *a1)
{
  std::logic_error *exception; // x19

  exception = (std::logic_error *)__cxa_allocate_exception(0x10u);
  sub_100047084(exception, a1);
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::length_error,
    (void (__fastcall *)(void *))&std::length_error::~length_error);
}
// 10009E988: using guessed type _UNKNOWN *`typeinfo for'std::length_error;
