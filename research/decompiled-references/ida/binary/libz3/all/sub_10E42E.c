void __noreturn sub_10E42E()
{
  _QWORD *exception; // rbx
  _BYTE v1[56]; // [rsp+0h] [rbp-38h] BYREF

  exception = __cxa_allocate_exception(0x28u);
  sub_76A180(v1, "not handled by bvarray2uf");
  *exception = off_1C63128;
  sub_2333C0(exception + 1, v1);
  sub_233E40(v1);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, sub_230E50);
}

