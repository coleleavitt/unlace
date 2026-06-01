void __fastcall __noreturn sub_42B0(int a1)
{
  _DWORD *exception; // rax

  if ( !(unsigned __int8)sub_4D90() )
    sub_3E40((__int64)"Oops! internal error %d occurred.", a1);
  exception = __cxa_allocate_exception(0x10u);
  *(_QWORD *)exception = &off_6AF0;
  exception[2] = a1;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'interr_exc_t, (void (*)(void *))sub_4040);
}

