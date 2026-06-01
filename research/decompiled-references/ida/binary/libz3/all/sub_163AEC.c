void __noreturn sub_163AEC()
{
  _QWORD *exception; // rbx
  __int64 v1; // rdx
  __int64 v2[7]; // [rsp+0h] [rbp-38h] BYREF

  exception = __cxa_allocate_exception(0x28u);
  sub_163A6C(v2, "goal is not diff neq", v1);
  *exception = off_1C63670;
  sub_2333C0(exception + 1, v2);
  sub_233E40(v2);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, sub_230EA0);
}

