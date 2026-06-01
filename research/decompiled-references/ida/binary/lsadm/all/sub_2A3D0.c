void __fastcall __noreturn sub_2A3D0(int a1)
{
  _DWORD *exception; // rax

  if ( !(unsigned __int8)sub_270C0() )
    sub_B230((__int64)"Oops! internal error %d occurred.", a1);
  exception = __cxa_allocate_exception(0x10u);
  *(_QWORD *)exception = &off_79CE8;
  exception[2] = a1;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'interr_exc_t, (void (*)(void *))sub_2A160);
}

