/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86648
// Address: 0x0000000000086648

//----- (0000000000086648) ----------------------------------------------------
void __noreturn sub_86648()
{
  std::logic_error *exception; // x19

  exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
  std::logic_error::logic_error(exception, "basic_string");
  *(_QWORD *)exception = off_161528;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::length_error,
    (void (*)(void *))std::out_of_range::~out_of_range);
}
// 161528: using guessed type void (__fastcall *off_161528[2])(std::out_of_range *__hidden this);
// 161540: using guessed type __int64 *`typeinfo for'std::length_error;
