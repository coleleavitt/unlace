void __noreturn sub_BD6F0()
{
  _QWORD *exception; // rbx
  char v1; // [rsp+Fh] [rbp-39h] BYREF
  _BYTE v2[56]; // [rsp+10h] [rbp-38h] BYREF

  exception = __cxa_allocate_exception(0x28u);
  sub_24ABB0(v2, "stand-alone maxsat context does not support wmax", &v1);
  *exception = off_1C63128;
  sub_2333C0(exception + 1, v2);
  sub_233E40(v2);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, sub_230E50);
}

