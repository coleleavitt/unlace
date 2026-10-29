void __fastcall ida_search_op_ctl_t__::vfunc_1(unsigned int *a1)
{
  __int64 v2; // rdi

  *(_QWORD *)a1 = &ida_search_op_ctl_t___vtable;
  v2 = a1[2];
  if ( (_DWORD)v2 != -1 )
    set_ida_state(v2);
  operator delete(a1, 0x10u);
}
