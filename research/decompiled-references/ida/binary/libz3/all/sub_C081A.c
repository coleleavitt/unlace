void __noreturn sub_C081A()
{
  _QWORD *exception; // rbx
  __int64 v1; // rdx
  __int64 v2[7]; // [rsp+0h] [rbp-38h] BYREF

  exception = __cxa_allocate_exception(0x28u);
  sub_BFCE0(v2, "user-propagators are only supported on the SMT solver", v1);
  *exception = off_1C63128;
  sub_2333C0(exception + 1, v2);
  sub_233E40(v2);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, sub_230E50);
}

