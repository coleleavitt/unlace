void __fastcall __noreturn std::__throw_bad_array_new_length()
{
  _QWORD *exception; // rax

  exception = __cxa_allocate_exception(8u);
  *exception = (char *)&`vtable for'std::bad_array_new_length + 16;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_array_new_length,
    (void (*)(void *))&std::bad_array_new_length::~bad_array_new_length);
}

