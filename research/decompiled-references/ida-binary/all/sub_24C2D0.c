__int64 __fastcall sub_24C2D0(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 bpt_kernel_interface; // rax

  sub_24BA10(nullptr, 1, 0, a1, a5, a6, a7);
  bpt_kernel_interface = get_bpt_kernel_interface(0, 1);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 272LL))(bpt_kernel_interface, 0);
}
