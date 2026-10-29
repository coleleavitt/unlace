void __fastcall __noreturn sub_104C58(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *exception; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 savedregs[7]; // [rsp+0h] [rbp+0h] BYREF

  v1 = *(_QWORD *)(a1 + 2080);
  if ( v1 && *(_DWORD *)(v1 - 4) )
  {
    exception = __cxa_allocate_exception(0x28u);
    sub_104888(savedregs, "pop operation is not supported", v4);
  }
  else
  {
    exception = __cxa_allocate_exception(0x28u);
    sub_104888(savedregs, "there are no backtracking points to pop to", v3);
  }
  *exception = off_1C63128;
  sub_2333C0(exception + 1, savedregs);
  sub_233E40(savedregs);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, sub_230E50);
}

