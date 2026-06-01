void __fastcall __noreturn sub_20212C(__int64 a1, __int64 a2)
{
  _QWORD *exception; // rbx

  exception = __cxa_allocate_exception(0x28u);
  *exception = off_1C63128;
  sub_2333C0(exception + 1, a2);
  *exception = off_1C7A008;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'ast_exception, sub_15EA3E0);
}

