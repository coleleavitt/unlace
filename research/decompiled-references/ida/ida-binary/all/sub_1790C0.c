__int64 __fastcall undo_chooser_t__::vfunc_12(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 undo_param; // rbx

  v2 = *(_QWORD *)(a1 + 192) - a2;
  undo_param = get_undo_param(2);
  set_undo_param(2, v2);
  set_undo_param(2, undo_param);
  return 0;
}
