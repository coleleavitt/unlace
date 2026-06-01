void __noreturn _cxa_throw_bad_array_new_length()
{
  _QWORD *exception; // rax

  exception = __cxa_allocate_exception(8u);
  *exception = off_4D2848;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_array_new_length,
    (void (*)(void *))std::bad_array_new_length::~bad_array_new_length);
}

