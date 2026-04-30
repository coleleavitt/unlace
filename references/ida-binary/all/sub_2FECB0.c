__int64 (__fastcall **__fastcall ida_search_op_ctl_t__::vfunc_0(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // rdi

  result = &ida_search_op_ctl_t___vtable;
  *(_QWORD *)a1 = &ida_search_op_ctl_t___vtable;
  v2 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v2 != -1 )
    return (__int64 (__fastcall **)())set_ida_state(v2);
  return result;
}
