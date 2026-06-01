void __noreturn sub_17F724()
{
  void *exception; // rbx

  exception = __cxa_allocate_exception(0x30u);
  sub_305660(
    exception,
    "function declarations can only be erased when global (instead of scoped) declarations are used");
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, sub_3053E0);
}

