/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B3F3
// Address: 0x000000000040B3F3

//----- (000000000040B3F3) ----------------------------------------------------
void __noreturn sub_40B3F3()
{
  _QWORD *exception; // rax

  exception = __cxa_allocate_exception(8u);
  *exception = (char *)&`vtable for'std::bad_array_new_length + 16;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_array_new_length,
    (void (*)(void *))&std::bad_array_new_length::~bad_array_new_length);
}
