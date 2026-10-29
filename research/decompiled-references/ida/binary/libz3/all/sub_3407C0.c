void *__fastcall sub_3407C0(_QWORD *lpsrc)
{
  char **exception; // rbx
  __int64 v2; // rdx
  const char *v3; // rsi
  void *result; // rax
  __int64 v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(const char **)(*(_QWORD *)(*lpsrc - 8LL) + 8LL);
  if ( v3 != "N3opt10opt_solverE" && strcmp("N3opt10opt_solverE", &v3[*v3 == 42]) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_BFCE0(v5, "BUG: optimization context has not been initialized correctly", v2);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v5);
    sub_233E40((__int64)v5);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  result = __dynamic_cast(
             lpsrc,
             (const struct __class_type_info *)&`typeinfo for'solver,
             (const struct __class_type_info *)&`typeinfo for'opt::opt_solver,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

