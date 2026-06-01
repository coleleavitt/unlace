/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BF30
// Address: 0x000000000008BF30

//----- (000000000008BF30) ----------------------------------------------------
void __noreturn sub_8BF30()
{
  std::logic_error *exception; // rbx

  exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
  std::logic_error::logic_error(exception, "basic_string");
  *(_QWORD *)exception = off_1516A8;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::length_error,
    (void (*)(void *))std::length_error::~length_error);
}
// 1516A8: using guessed type void (__fastcall *off_1516A8[2])(std::length_error *__hidden this);
// 1516C0: using guessed type void (__fastcall *`typeinfo for'std::length_error)(std::type_info *__hidden this);
