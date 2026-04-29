void __noreturn sub_464BA()
{
  _QWORD *exception; // rax

  exception = __cxa_allocate_exception(8u);
  *exception = (char *)&`vtable for'std::bad_alloc + 16;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_alloc,
    (void (*)(void *))&std::bad_alloc::~bad_alloc);
}
