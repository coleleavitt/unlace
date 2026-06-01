void __noreturn std::__throw_out_of_range_fmt(const char *s, ...)
{
  void *v1; // rsp
  std::out_of_range *exception; // r13
  char *v3; // rax
  gcc_va_list va; // [rsp+0h] [rbp-E0h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C8h]

  va_start(va, s);
  v5 = __readfsqword(0x28u);
  v1 = alloca(strlen(s) + 520);
  sub_32AE0(va);
  exception = (std::out_of_range *)__cxa_allocate_exception(0x10u);
  v3 = gettext((const char *)va);
  std::out_of_range::out_of_range(exception, v3);
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::out_of_range,
    (void (*)(void *))&std::out_of_range::~out_of_range);
}
