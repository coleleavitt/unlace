__int64 ida_app_t__::vfunc_10()
{
  __int64 v0; // rbx

  v0 = operator new(0x10u);
  *(_QWORD *)v0 = &ida_search_op_ctl_t___vtable;
  *(_DWORD *)(v0 + 8) = -1;
  *(_DWORD *)(v0 + 8) = set_ida_state(3);
  return v0;
}
