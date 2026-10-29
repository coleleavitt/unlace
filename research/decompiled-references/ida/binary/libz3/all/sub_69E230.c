void __fastcall __noreturn sub_69E230(__int64 a1)
{
  __int64 v1; // rsi
  char **exception; // rbx
  __int64 v3[7]; // [rsp+18h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 - 64);
  sub_786C50(a1 + 4472, v1, a1 + 4288, a1 + 24, a1 + 4576, a1 + 4432, 1);
  if ( *(_QWORD *)(sub_787220(a1 + 4472, v1) + 2264) )
  {
    sub_1872CE0("");
    sub_1873130(107, 559);
  }
  exception = (char **)__cxa_allocate_exception(0x28u);
  sub_24ABB0(v3, "user propagator must be initialized");
  *exception = (char *)off_1C63128;
  sub_2333C0(exception + 1, v3);
  sub_233E40((__int64)v3);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
}

