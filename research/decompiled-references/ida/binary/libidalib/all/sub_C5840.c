__int64 sub_C5840()
{
  __int64 bpt_kernel_interface; // rax

  sub_B9120(qword_252210);
  qword_252210 = nullptr;
  qword_252218 = (__int64)&dword_252208;
  qword_252220 = (__int64)&dword_252208;
  qword_252228 = 0;
  qword_2521F0 = 0;
  bpt_kernel_interface = get_bpt_kernel_interface();
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 16LL))(bpt_kernel_interface);
}

