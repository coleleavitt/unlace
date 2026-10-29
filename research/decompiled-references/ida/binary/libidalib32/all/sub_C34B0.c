__int64 sub_C34B0()
{
  _BOOL8 v0; // rsi
  __int64 bpt_kernel_interface; // rax

  v0 = dbg != 0;
  sub_10AC80(0, v0);
  TView::disableCommand((TView *)unk_24DF86, v0);
  bpt_kernel_interface = get_bpt_kernel_interface();
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 272LL))(bpt_kernel_interface, 0);
}

