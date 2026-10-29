void __fastcall __noreturn sub_C7DB8(__int64 a1, __int64 a2)
{
  _QWORD *exception; // rbp
  __int64 v3; // rax
  _BYTE v4[32]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v5[56]; // [rsp+20h] [rbp-38h] BYREF

  exception = __cxa_allocate_exception(0x28u);
  sub_399470(v4, "operation is not supported for ");
  v3 = sub_3A9970(v4, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  sub_2333C0(v5, v3);
  *exception = off_1C63128;
  sub_2333C0(exception + 1, v5);
  sub_233E40(v5);
  sub_233E40(v4);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, sub_230E50);
}

