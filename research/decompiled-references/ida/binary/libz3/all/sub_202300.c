void __fastcall __noreturn sub_202300(__int64 a1, const char *a2)
{
  _QWORD *exception; // rbx
  __int64 v3; // rdx
  __int64 v4[7]; // [rsp+0h] [rbp-38h] BYREF

  exception = __cxa_allocate_exception(0x28u);
  sub_202052(v4, a2, v3);
  *exception = off_1C63128;
  sub_2333C0(exception + 1, v4);
  *exception = off_1C7A008;
  sub_233E40(v4);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'ast_exception, sub_15EA3E0);
}

