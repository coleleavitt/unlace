void __fastcall __noreturn vloader_failure(__int64 a1, __int64 a2)
{
  _QWORD *exception; // rax
  int v3; // r9d

  if ( (unsigned __int8)getinf_flag(45, 16) )
    sub_640210(a1, a2);
  if ( a1 )
    callui(24, 2, a1, a2, (int)&callui, v3);
  if ( (debug & 0x10) == 0 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = &off_2B36F00;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'loader_failure_t, (void (*)(void *))sub_63FC90);
  }
  sub_3879F0();
}
