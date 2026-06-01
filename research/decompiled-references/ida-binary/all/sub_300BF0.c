_QWORD *__fastcall ida_app_t__::vfunc_13(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)operator new(0x10u);
  result[1] = a2;
  *result = ida_dirtree_widget_persistence_helper_t___vtable;
  return result;
}
