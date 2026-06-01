__int64 __fastcall sub_52B0A0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax

  bpt_kernel_interface = get_bpt_kernel_interface();
  return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), __int64, __int64, _QWORD))(*bpt_kernel_interface)[40])(
           bpt_kernel_interface,
           a2,
           a3,
           a4);
}
