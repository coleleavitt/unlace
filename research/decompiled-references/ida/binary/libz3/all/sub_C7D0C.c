void __fastcall __noreturn sub_C7D0C(__int64 a1)
{
  _QWORD *exception; // rbp
  __int64 v2; // rax
  _BYTE v3[32]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v4[56]; // [rsp+20h] [rbp-38h] BYREF

  exception = __cxa_allocate_exception(0x28u);
  sub_399470(v3, "operation is not supported for ");
  v2 = sub_3A9970(v3, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
  sub_2333C0(v4, v2);
  *exception = off_1C63128;
  sub_2333C0(exception + 1, v4);
  sub_233E40(v4);
  sub_233E40(v3);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, sub_230E50);
}

