_QWORD *sub_2757B0()
{
  _QWORD *exception; // rax
  _QWORD *result; // rax

  result = (_QWORD *)qalloc(16);
  if ( !result )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *result = 0;
  result[1] = 0;
  return result;
}
