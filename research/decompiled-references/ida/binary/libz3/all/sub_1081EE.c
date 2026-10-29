void __noreturn sub_1081EE()
{
  _QWORD *exception; // rbx
  _BYTE v1[56]; // [rsp+0h] [rbp-38h] BYREF

  exception = __cxa_allocate_exception(0x28u);
  sub_68CF80(v1, "user propagator must be initialized");
  *exception = off_1C63128;
  sub_2333C0(exception + 1, v1);
  sub_233E40(v1);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, sub_230E50);
}

