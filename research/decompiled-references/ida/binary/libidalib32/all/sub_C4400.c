__int64 sub_C4400()
{
  __int64 bpt_kernel_interface; // rax

  sub_B8BB0(qword_251130);
  qword_251130 = nullptr;
  qword_251138 = (__int64)&dword_251128;
  qword_251140 = (__int64)&dword_251128;
  qword_251148 = 0;
  dword_251110 = 0;
  bpt_kernel_interface = get_bpt_kernel_interface();
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 16LL))(bpt_kernel_interface);
}

