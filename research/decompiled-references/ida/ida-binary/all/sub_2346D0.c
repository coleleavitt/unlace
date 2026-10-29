__int64 __fastcall sub_2346D0(__int64 a1, const char *a2)
{
  void *v2; // rdi
  __int64 bpt_kernel_interface; // rax

  v2 = qword_8CC090;
  sub_2284E0(qword_8CC090, a2);
  qword_8CC090 = nullptr;
  qword_8CC098 = (__int64)&dword_8CC088;
  qword_8CC0A0 = (__int64)&dword_8CC088;
  qword_8CC0A8 = 0;
  qword_8CC070 = 0;
  bpt_kernel_interface = get_bpt_kernel_interface(v2, a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 16LL))(bpt_kernel_interface);
}
