_QWORD *__fastcall ida_app_t__::vfunc_5(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *result; // rax

  if ( (get_merge_state() & 3) != 0 && (*(_BYTE *)(*(_QWORD *)(a2 + 2392) + 15LL) & 0x10) != 0 )
  {
    result = (_QWORD *)operator new(8u);
    *result = chooser_persistence_helper_t___vtable;
  }
  else
  {
    v2 = operator new(0x20u);
    sub_3A1090(v2, a2);
    return (_QWORD *)v2;
  }
  return result;
}
