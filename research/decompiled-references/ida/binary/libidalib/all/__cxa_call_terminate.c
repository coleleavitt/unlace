void __noreturn _cxa_call_terminate(_Unwind_Exception *a1)
{
  if ( a1 )
  {
    __cxa_begin_catch(a1);
    if ( a1->exception_class - 0x474E5543432B2B00LL <= 1 )
      sub_1C4000(a1[-2].exception_cleanup);
  }
  std::terminate();
}

